"""Gate: the town builder's HOUSE ENTITY pass, 0x4e74a5-0x4ea988.

Decode: Docs/RE_town_entities.md.  Source data: raw/town_props_capture*.json
(tools/frida_town_props.py, seed 42069, 92 towns, 435 houses, 70 towns that build one).

After `townHousePass` has stamped a house's 3x3x4 MODULE GRID, the builder walks that grid
four more times and hands every qualifying module to `creature_spawn_builder`
(`FUN_00524540`).  The rig hooks that call, so unlike the props these records are
observable field by field -- position, orientation and type.

★ Four structurally identical FACE blocks, one per horizontal neighbour, each carrying two
`rand() % 6` sites; then a ROOF walk that spends nothing; then a WALL/ROOF walk whose
village-only `rand() & 1` is `0x4ea254`, the largest single rand site left in the builder.
**11 rand sites / 7,597 draws / 34 emit sites / 16 spawn tails.**

⚠ CORRECTED 07-29h by the port: those four are BLOCKS inside ONE triple loop, not four
walks -- the stage has four `House_dimY` loop heads in its whole span and only the first
runs face code, so a face block falls through into the next face's block and the four
"tails" double as the next block's entry.  No count in this gate can tell the two readings
apart (the same modules qualify either way); the recorded draw ORDER can, and it steps
0 -> 2 -> 4 -> 6 within one module.  See Docs/RE_town_entities.md 10.1.

⚠ THE TRAP THIS GATE IS BUILT AROUND: the rig stamps each spawn with the RETURN ADDRESS of
the call, and up to seven different emit sites `jmp` to the same call.  A spawn "site" is
therefore not an emit site, and the model offset behind one is not one number.  The
emit -> tail map is DERIVED from the binary by `emit_sites()` and never typed, and every
per-site claim below is made at the granularity the capture can actually see (lesson 7i).

⚠ And the house boundary is proved, not fitted.  The rig stamps the house ctor with the
draw index at its ENTRY, and a spawn can carry the same index; but the house pass spends
draws between the ctor and the first entity record (measured minimum: 38), so a spawn
stamped exactly `ctor_{i+1}` necessarily belongs to house i.  The gate asserts that
minimum rather than assuming it.

    python tools/gate_town_entities.py
"""
import collections
import glob
import io
import json
import os
import re
import struct
import sys

import capstone

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import extract_house_emits as EM          # noqa: E402

RAW = os.path.join(HERE, "..", "raw")
EXE = os.path.normpath(os.path.join(HERE, "..", "..", "..", "..", "Server.exe"))
BASE = 0x400000

# --- the stage ----------------------------------------------------------------------
STAGE_LO, STAGE_HI = 0x4E74A5, 0x4EA988      # anchor + door path + the four walks
LOOP_LO, LOOP_HI = 0x4E7D10, 0x4EA4E7        # the part that spends draws
SPAWN = 0x524540                             # creature_spawn_builder

# the eight face coins, by the VA of the `call` (the rig records VA+6)
FACE_COIN = [0x4E7FD3, 0x4E80A7,             # walk 1  -Z  orient 0
             0x4E85AC, 0x4E8680,             # walk 2  +Z  orient 2
             0x4E8B85, 0x4E8C58,             # walk 3  -X  orient 1
             0x4E9157, 0x4E922B]             # walk 4  +X  orient 3
LOOP2_COIN = 0x4EA24E        # rand() & 1  -- villages only
LOOP2_SPECIES = 0x4EA28D     # rand() % 3  -- species = models[0x88a + r]   (`call esi`)
LOOP2_FACING = 0x4EA2F9      # rand() & 3                                   (`call esi`)
RAND_SITES = sorted(FACE_COIN + [LOOP2_COIN, LOOP2_SPECIES, LOOP2_FACING])
FACE_COIN_RA = [va + 6 for va in FACE_COIN]
L2_COIN_RA, L2_SPECIES_RA, L2_FACING_RA = LOOP2_COIN + 6, LOOP2_SPECIES + 2, LOOP2_FACING + 2
ALL_RAND_RA = FACE_COIN_RA + [L2_COIN_RA, L2_SPECIES_RA, L2_FACING_RA]
SPECIES_BASE_AT = 0x4EA29D   # `add edx, 0x88a`

# the sixteen spawn tails.  `orient` is argument 3; None = the module's own +1 byte, or a
# tail shared between a literal and a cell byte.
TAIL_ORIENT = {
    0x4E834C: 0, 0x4E8524: 0,          # walk 1, -Z
    0x4E8925: 2, 0x4E8AFD: 2,          # walk 2, +Z
    0x4E8EFD: 1, 0x4E90CF: 1,          # walk 3, -X
    0x4E94D0: 3, 0x4E96A2: None,       # walk 4, +X -- shared with the door/base emits
    0x4E9EBD: None, 0x4E9F65: None,    # the roof walk
    0x4EA386: None, 0x4EA47E: None,    # the wall/roof walk
    0x4EA667: 0, 0x4EA75A: 1, 0x4EA845: 2, 0x4EA932: 3,   # the four-neighbour walk
}
# the four tails whose single emit pushes the plot's own kind
KIND_TAIL = {0x4E834C, 0x4E8925, 0x4E8EFD, 0x4E94D0}
# the four walk tails, each shared between literal-1 emits and one kind emit
MIXED_TAIL = {0x4E8524, 0x4E8AFD, 0x4E90CF, 0x4E96A2}
LITERAL_TAIL = set(TAIL_ORIENT) - KIND_TAIL - MIXED_TAIL

# Four tails do not take their source straight out of a frame slot the model-lookup
# chain wrote, so counting `push` sites under-counts the models behind them.  Each
# override is byte-checked below against the instructions that load the source.
REG_SRC = {
    0x4EA386: (3, [(0x4EA297, "8b8db8a3ffff")]),   # models[0x88a + rand()%3] -> 3 models
    0x4EA47E: (2, [(0x4EA0F3, "8bb550a3ffff"),     # esi <- [ebp-0x5cb0]
                   (0x4EA1EC, "8b75ec"),           # esi <- [ebp-0x14]
                   (0x4EA41B, "8bb550a3ffff")]),   # esi <- [ebp-0x5cb0]
    0x4E9F65: (1, [(0x4E9F08, "8bb52ca3ffff")]),   # esi <- [ebp-0x5cd4], no other write
    # the roof walk cmove-selects between two model slots, in four places
    0x4E9EBD: (2, [(0x4E9968, "0f448d58a3ffff"), (0x4E9AEB, "0f448d58a3ffff"),
                   (0x4E9C1E, "0f448d58a3ffff"), (0x4E9D51, "0f448d58a3ffff")]),
}

# plot[+0x10] -> the `type` argument, via the jump table at 0x4f2b74
JUMP_TABLE = 0x4F2B74
MODEL_TABLE = 0x4F2B60      # desc[+0x1c] -> the thirteen-model set (section 3.1)
MODEL_DEFAULT = 0x4E611D
KIND_ARM = {0x4E7D06: 2, 0x4E7CD6: 3, 0x4E7CEE: 4, 0x4E7CE2: 5, 0x4E7CFA: 6}
MODULE_XZ, MODULE_Y, MODULE_LEVELS, MODULE_N = 13, 7, 4, 3
HOUSE_ORIGIN = 7             # the house anchor, +7 into the plot (RE_town_furnish.md 5b.2)
MODULE_CENTRE = 7            # and the record sits at the module's own +7

# the thirteen slots of a model set, in the order the arms fill them (section 3.1)
SLOT_ROLE = ["base", "floor", "floor-stairs", "wall", "wall-window", "wall-door",
             "wall-indoor", "wall-balcony", "wall-lamp", "roof1", "roof2", "roof3", "arc"]
MODEL_MAP = os.path.normpath(os.path.join(HERE, "..", "..", "cw_rederive",
                                          "model_id_map.json"))
# the generated header the cwgen port reads (regenerated and diffed in section 2c)
CPP_HEADER = os.path.normpath(os.path.join(HERE, "..", "..", "..", "src", "worldgen", "cw",
                                           "CwTownEntityTables.h"))
# The four tails whose model does not come from a frame slot the emit walk can read.
# ⚠ 0x4e9f65's source is [ebp-0x5cd4], which IS B+5 in the face walk -- but the ROOF
# walk repurposes that slot to hold its own roof model (0x4e9774 stores B+9 into it),
# so the model there is one of roof1/roof2/roof3, not the wall-door.
TAIL_MODEL_OVERRIDE = {0x4EA386: "carpet", 0x4E9EBD: "roof", 0x4E9F65: "roof",
                       0x4EA47E: "floorpair"}


# --- image helpers ------------------------------------------------------------------
def load_image():
    data = open(EXE, "rb").read()
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    optsz = struct.unpack_from("<H", data, pe + 20)[0]
    base = struct.unpack_from("<I", data, pe + 24 + 28)[0]
    off, secs = pe + 24 + optsz, []
    for _ in range(nsec):
        vsz, va, rsz, ptr = struct.unpack_from("<IIII", data, off + 8)
        secs.append((base + va, vsz, ptr, rsz))
        off += 40
    return data, secs


def at(data, secs, va, n):
    for sva, vsz, ptr, rsz in secs:
        if sva <= va < sva + max(vsz, rsz):
            d = va - sva
            return data[ptr + d:ptr + d + n] if d < rsz else None
    return None


def census_rand(data, secs, lo, hi):
    """Both encodings: `call [0x5582f4]` and the two-byte `call <reg>` (lesson: a
    six-byte-pattern census misses four of the furnishing pass's sites)."""
    direct = bytes.fromhex("ff15f4825500")
    out, va = [], lo
    while va < hi:
        if at(data, secs, va, 6) == direct:
            out.append(va)
            va += 6
        elif at(data, secs, va, 2) in (b"\xff\xd6", b"\xff\xd7"):
            out.append(va)
            va += 2
        else:
            va += 1
    return out


def census_spawn(data, secs, lo, hi):
    """`call rel32` whose target is FUN_00524540."""
    out, va = [], lo
    while va < hi:
        b = at(data, secs, va, 5)
        if b and b[0] == 0xE8:
            rel = struct.unpack_from("<i", b, 1)[0]
            if (va + 5 + rel) & 0xFFFFFFFF == SPAWN:
                out.append(va + 5)
                va += 5
                continue
        va += 1
    return out


def emit_sites(data, secs):
    """Every `push <src>` that is the last push before a spawn tail, paired with the tail
    it reaches.  Walked out of the binary, following `jmp` chains -- never typed."""
    import capstone as _cs
    md = _cs.Cs(_cs.CS_ARCH_X86, _cs.CS_MODE_32)
    blob = at(data, secs, STAGE_LO, STAGE_HI - STAGE_LO)
    insns = list(md.disasm(blob, STAGE_LO))
    idx = {ins.address: i for i, ins in enumerate(insns)}
    tail_of = {ins.address: ins.address + ins.size for ins in insns
               if ins.mnemonic == "call" and ins.op_str == hex(SPAWN)}

    def resolve(va, depth=0):
        if depth > 8 or va not in idx:
            return None
        for j in range(idx[va], min(idx[va] + 10, len(insns))):
            it = insns[j]
            if it.address in tail_of:
                return tail_of[it.address]
            if it.mnemonic == "jmp" and it.op_str.startswith("0x"):
                return resolve(int(it.op_str, 16), depth + 1)
        return None

    out = []
    for i, ins in enumerate(insns):
        if ins.mnemonic != "push":
            continue
        m = re.match(r"^dword ptr \[ebp - (0x[0-9a-f]+)\]$", ins.op_str)
        src = m.group(1) if m else (ins.op_str if ins.op_str in ("esi", "edi") else None)
        if src is None or i + 1 >= len(insns):
            continue
        nxt = insns[i + 1]
        tail = None
        if nxt.mnemonic == "jmp" and nxt.op_str.startswith("0x"):
            tail = resolve(int(nxt.op_str, 16))
        elif nxt.address in tail_of:
            tail = tail_of[nxt.address]
        elif (nxt.mnemonic == "mov" and "ebp - 0x5c68" in nxt.op_str
              and i + 2 < len(insns) and insns[i + 2].address in tail_of):
            tail = tail_of[insns[i + 2].address]
        if tail is not None:
            out.append((ins.address, src, tail))
    return sorted(out)


def plots_of(raw):
    return [struct.unpack("<iiiiiif", bytes(r)) for r in raw] if raw else None


def main():
    data, secs = load_image()
    ok = fail = 0
    notes = []

    def check(cond, msg):
        nonlocal ok, fail
        if cond:
            ok += 1
        else:
            fail += 1
            if len(notes) < 20:
                notes.append(msg)

    # ================= 1. what the binary says =================
    got = census_rand(data, secs, LOOP_LO, LOOP_HI)
    check(got == RAND_SITES, "rand census %s != %s"
                             % ([hex(x) for x in got], [hex(x) for x in RAND_SITES]))
    tails = census_spawn(data, secs, STAGE_LO, STAGE_HI)
    check(tails == sorted(TAIL_ORIENT), "spawn census %s != %s"
          % ([hex(x) for x in tails], [hex(x) for x in sorted(TAIL_ORIENT)]))

    # the eight face coins are all `cdq / mov ecx, 6 / idiv ecx / test edx, edx`
    for va in FACE_COIN:
        b = at(data, secs, va + 6, 10)
        check(b == bytes.fromhex("99b906000000f7f985d2"),
              "face coin 0x%x is not `%% 6`: %s" % (va, b.hex()))
    # loop 2: rand() & 1, then % 3 into models[0x88a + r], then rand() & 3
    check(at(data, secs, LOOP2_COIN + 6, 5) == bytes.fromhex("2501000080"),
          "0x4ea254 is not rand() & 1")
    check(at(data, secs, LOOP2_SPECIES + 2, 8) == bytes.fromhex("99b903000000f7f9"),
          "0x4ea28f is not rand() %% 3")
    check(struct.unpack_from("<I", at(data, secs, SPECIES_BASE_AT + 2, 4))[0] == 0x88A,
          "the species table index base is not 0x88a")
    check(at(data, secs, LOOP2_FACING + 2, 5) == bytes.fromhex("2503000080"),
          "0x4ea2fb is not rand() & 3")
    # the register-carried sources
    for tail, (_lim, loads) in REG_SRC.items():
        for va, hexb in loads:
            check(at(data, secs, va, len(hexb) // 2) == bytes.fromhex(hexb),
                  "0x%x: the source load at 0x%x is not %s" % (tail, va, hexb))

    # the role -> kind jump table, and the immediate each arm stores
    order = [struct.unpack_from("<I", at(data, secs, JUMP_TABLE + 4 * i, 4))[0] for i in range(5)]
    for i, tgt in enumerate(order):
        check(tgt in KIND_ARM, "jump-table slot %d -> 0x%x is not a kind arm" % (i, tgt))
        if tgt in KIND_ARM:
            imm = struct.unpack_from("<I", at(data, secs, tgt + 6, 4))[0]
            check(imm == KIND_ARM[tgt], "kind arm 0x%x stores %d, expected %d"
                                        % (tgt, imm, KIND_ARM[tgt]))
    sub_kind = {s + 1: KIND_ARM.get(order[s]) for s in range(5)}
    check(sub_kind == {1: 2, 2: 3, 3: 4, 4: 5, 5: 6}, "sub -> kind is %s" % sub_kind)

    # the model-set jump table at 0x4f2b60, keyed on desc[+0x1c].  ⚠ CORRECTED 07-29g:
    # an arm's FIRST `push imm32` is NOT always the base of its thirteen models -- the
    # clay, whiteclay and all three ruin arms open by overwriting the ENTRANCE-STAIRS
    # slot [ebp-0x5c90] (which the other arms leave holding models[0x889]) and only then
    # load the set.  `extract_house_emits.model_sets` interprets the stores instead of
    # reading the pushes, and this gate re-runs it (lesson 7i).
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    sets = EM.model_sets(data, secs, md)
    for name, want_base, want_entr in (
            ("village d1c=0", 0x88D, None), ("village d1c=1", 0x8EF, None),
            ("village d1c=2", 0x8A7, None), ("village d1c=3", 0x89A, None),
            ("village d1c=4", 0x8B4, 0x8C1), ("village d1c=5", 0x8C3, 0x8C2),
            ("ruin d1c=2", 0x8E5, 0x8E4), ("ruin d1c=3", 0x8DA, 0x8D9),
            ("ruin other", 0x8D1, 0x8D0)):
        s = sets[name]
        check(s["base"][0] == want_base, "%s: B+0 is 0x%x, expected 0x%x"
                                         % (name, s["base"][0], want_base))
        check(s["entr"] == want_entr, "%s: the entrance override is %s, expected %s"
                                      % (name, s["entr"], want_entr))
        check(len(s["base"]) == 13, "%s: %d models, expected 13" % (name, len(s["base"])))
    # and every model the pass can reach is a real entry in the client's model DB, with
    # the NAME its slot's role predicts -- `model_id_map.json` was built by a completely
    # separate effort and knows nothing about this pass (lesson 7u).
    db = json.load(open(MODEL_MAP, encoding="utf-8"))["world_model_db"]
    ruin_reuse = {}
    for name, s in sets.items():
        fam = db[str(s["base"][0])]["name"].split("-")[0]
        for slot, (role, mid) in enumerate(zip(SLOT_ROLE, s["base"])):
            nm = db[str(mid)]["name"].replace(".cub", "")
            check(nm.split("-")[0] == fam, "%s B+%d is %s, not a %s model"
                                           % (name, slot, nm, fam))
            if name.startswith("village"):
                # a village family is complete: every slot is the model its role names
                check(nm == fam + "-" + role, "%s B+%d is %s, not a %s"
                                              % (name, slot, nm, role))
        if name.startswith("ruin"):
            # ⚠ the three RUIN families are incomplete -- they ship no window/balcony/lamp
            # (and antiqueruin no door or indoor either), so the arm repeats `*-wall` into
            # those slots.  Reported, not asserted: it is a property of the assets.
            ruin_reuse[name] = 13 - len(set(s["base"]))
        if s["entr"]:
            check(db[str(s["entr"])]["name"] == fam + "-entrance-stairs.cub",
                  "%s: the entrance override is %s" % (name, db[str(s["entr"])]["name"]))
    check(db["2185"]["name"] == "entrance-stairs.cub", "0x889 is not entrance-stairs.cub")
    check([db[str(0x88A + i)]["name"] for i in range(3)]
          == ["carpet1.cub", "carpet2.cub", "carpet3.cub"],
          "0x88a..0x88c are not the three carpets")

    # ================= 2. the emit -> tail map =================
    emits = emit_sites(data, secs)
    per_tail = collections.Counter(t for _va, _s, t in emits)
    limit = {}
    for t in TAIL_ORIENT:
        limit[t] = REG_SRC[t][0] if t in REG_SRC else per_tail.get(t, 0)
        check(limit[t] > 0, "tail 0x%x has no emit site" % t)
    # the four face walks are structurally identical: the same six frame slots in the
    # same order.  Walk 4's tail also collects the door and base emits, so its sequence
    # is the shared one with two extra entries in front.
    seq = []
    for first, tail in ((0x4E834C, 0x4E8524), (0x4E8925, 0x4E8AFD),
                        (0x4E8EFD, 0x4E90CF), (0x4E94D0, 0x4E96A2)):
        seq.append([s for _va, s, t in emits if t in (first, tail)])
    check(seq[0] == seq[1] == seq[2], "face walks 1-3 differ: %s" % seq[:3])
    check(seq[3][-len(seq[0]):] == seq[0], "face walk 4 does not end with that sequence: %s" % seq[3])
    check(len(seq[0]) == 6, "a face walk has %d emit sites, expected 6" % len(seq[0]))

    # ================= 2b. the emit DESCRIPTORS (added 07-29g) ========================
    # `extract_house_emits.describe` runs each emit block symbolically and reports the
    # model slot and the constant it adds on each axis.  Every emit adds +7 -- the module
    # centre RE_town_furnish.md 5b.2 also derives -- except the four ENTRANCE-STAIRS
    # emits, which add -6 or +20, i.e. a whole 13-block module onto the face's own
    # neighbour.  That single constant is what made 6 of section 6 read the anchor field
    # as "not an extent and not always positive"; it is an extent, and the shift is the
    # emit's, not the model's.
    per_tail_model, entr_consts = collections.defaultdict(list), []
    for e in EM.describe(data, secs, md):
        if e["slot"] is None:
            continue
        cx, cz = e["y"].c, e["z"].c          # e["y"] is the first vec3 argument (game X)
        per_tail_model[e["tail"]].append((e["slot"], cx, cz))
        if EM.MODEL_SLOT.get(e["slot"]) == "ENTR":
            entr_consts.append((cx, cz))
            check(sorted((cx, cz)) in ([-6, 7], [7, 20]),
                  "the entrance emit at 0x%x adds (%d, %d)" % (e["emit"], cx, cz))
        else:
            check(cx == MODULE_CENTRE and cz == MODULE_CENTRE,
                  "emit 0x%x adds (%d, %d), expected (7, 7)" % (e["emit"], cx, cz))
    check(len(entr_consts) == 4, "%d entrance emits, expected 4" % len(entr_consts))
    check(sorted(entr_consts) == [(-6, 7), (7, -6), (7, 20), (20, 7)],
          "the four entrance shifts are %s" % sorted(entr_consts))

    # ================= 2c. the GENERATED header (added 07-29h) ========================
    # CwTownEntityTables.h is written by `extract_house_emits.py --cpp`, which interprets
    # the nine model-set arms and the 33 emit blocks out of Server.exe and joins the ids
    # to model_id_map.json.  Re-run the generator and diff it, so a hand edit fails here
    # instead of surviving -- the CwTownHouseTables.h rule (lesson 7c/7i).
    buf = io.StringIO()
    keep = sys.stdout
    try:
        sys.stdout = buf
        EM.emit_cpp(data, secs, md)
    finally:
        sys.stdout = keep
    want = buf.getvalue()
    if os.path.exists(CPP_HEADER):
        have = open(CPP_HEADER, encoding="utf-8", newline="").read().replace("\r\n", "\n")
        check(have == want, "%s differs from the generator (%d vs %d bytes) -- regenerate"
                            " it with `extract_house_emits.py --cpp`"
                            % (os.path.basename(CPP_HEADER), len(have), len(want)))
    else:
        notes.append("!! %s is missing -- the header diff did not run" % CPP_HEADER)
    for t, how in TAIL_MODEL_OVERRIDE.items():
        per_tail_model[t] = [(how, MODULE_CENTRE, MODULE_CENTRE)] \
            if how != "floorpair" else per_tail_model[t] + [(how, 7, 7)]

    def candidate_models(tail, base, entr):
        out = []
        for slot, cx, cz in per_tail_model[tail]:
            if slot == "carpet":
                ids = [0x88A, 0x88B, 0x88C]
            elif slot == "roof":
                ids = [base[9], base[10], base[11]]
            elif slot == "floorpair":
                ids = [base[1], base[2]]
            else:
                role = EM.MODEL_SLOT.get(slot)
                ids = [entr] if role == "ENTR" else ([base[role]] if isinstance(role, int) else [])
            out += [(m, cx, cz) for m in ids]
        return out

    # ================= 3. the live capture =================
    hits = []
    for name in sorted(glob.glob(os.path.join(RAW, "town_props_capture*.json"))):
        hits += json.load(open(name, encoding="utf-8"))["hits"]
    if not hits:
        raise SystemExit("no town captures in %s" % RAW)

    towns = houses = records = 0
    villages = coin_towns = 0
    type_kind = type_one = type_either = orient_ok = 0
    cls_ok = single_ok = 0
    min_gap = None
    seen_cls = collections.defaultdict(collections.Counter)
    lattice_ok = 0
    resolved = collections.Counter()
    arms_seen = collections.Counter()
    MODEL_DIMS = {int(k): v["dims"] for k, v in db.items()}

    for h in hits:
        zx, zz = h["zone"]
        P = plots_of(h.get("plotsLate"))
        desc = bytes(h["desc"])
        is_village = struct.unpack_from("<i", desc, 0x18)[0] == 1
        d1c = struct.unpack_from("<i", desc, 0x1C)[0]
        mset = sets.get(("village d1c=%d" % d1c) if is_village else ("ruin d1c=%d" % d1c),
                        sets["village d1c=0"] if is_village else sets["ruin other"])
        mbase, mentr = mset["base"], (mset["entr"] or 0x889)
        arms_seen[("village" if is_village else "ruin", d1c)] += 1
        n = 5 if is_village else 4
        draws = collections.defaultdict(list)
        for ra, v, i in h["draws"]:
            draws[ra + BASE].append((i, v))
        spawns = sorted((s for s in h["spawncalls"] if s["ra"] + BASE in TAIL_ORIENT),
                        key=lambda s: s["n"])
        built = bool(h.get("houses"))

        # 3a. the stage runs exactly when the town builds a house
        check(built == bool(spawns), "%d,%d: %d house ctors but %d spawns"
                                     % (zx, zz, len(h.get("houses") or []), len(spawns)))
        if not built:
            check(not any(draws.get(x) for x in ALL_RAND_RA),
                  "%d,%d: no house, but the stage spent draws" % (zx, zz))
            continue
        towns += 1

        # 3b. the loop-2 coin is villages-only
        used = bool(draws.get(L2_COIN_RA))
        check(used <= is_village, "%d,%d: 0x4ea254 fired in a non-village" % (zx, zz))
        villages += used

        # 3c. loop-2 bookkeeping: one species draw and one facing draw per emitted
        # record, and never more records than the coin let through
        ns, nf = len(draws.get(L2_SPECIES_RA, [])), len(draws.get(L2_FACING_RA, []))
        nrec = sum(1 for s in spawns if s["ra"] + BASE == 0x4EA386)
        passes = sum(1 for _i, v in draws.get(L2_COIN_RA, []) if v % 2 == 0)
        check(ns == nf == nrec <= passes,
              "%d,%d: species %d facing %d records %d passes %d" % (zx, zz, ns, nf, nrec, passes))
        coin_towns += 1

        if not P:
            continue
        housed = [(r, c) for r in range(n) for c in range(n) if P[r + n * c][3] == 2]
        check(len(housed) == len(h["houses"]),
              "%d,%d: %d role-2 plots, %d house ctors" % (zx, zz, len(housed), len(h["houses"])))
        ctor = [x[3] for x in h["houses"]] + [1 << 30]
        for hi_, (r, c) in enumerate(housed):
            houses += 1
            lo, hi = ctor[hi_], ctor[hi_ + 1]
            sub = P[r + n * c][4]
            kind = sub_kind.get(sub, 1)
            ox = zx * 256 + (r * 256) // n + HOUSE_ORIGIN + MODULE_CENTRE
            oz = zz * 256 + (c * 256) // n + HOUSE_ORIGIN + MODULE_CENTRE
            mine = [s for s in spawns if lo < s["n"] <= hi]
            if mine:
                gap = mine[0]["n"] - lo
                min_gap = gap if min_gap is None else min(min_gap, gap)
            grp = collections.defaultdict(list)
            for s in mine:
                records += 1
                ra = s["ra"] + BASE
                if ra in KIND_TAIL:
                    check(s["type"] == kind, "%d,%d h%d 0x%x: type %d, kind(sub %d)=%d"
                                             % (zx, zz, hi_, ra, s["type"], sub, kind))
                    type_kind += 1
                elif ra in LITERAL_TAIL:
                    check(s["type"] == 1, "%d,%d h%d 0x%x: type %d, expected 1"
                                          % (zx, zz, hi_, ra, s["type"]))
                    type_one += 1
                else:
                    check(s["type"] in (1, kind), "%d,%d h%d 0x%x: type %d not in {1,%d}"
                                                  % (zx, zz, hi_, ra, s["type"], kind))
                    type_either += 1
                want = TAIL_ORIENT[ra]
                if want is None:
                    check(0 <= s["orient"] <= 3, "%d,%d 0x%x: orient %d" % (zx, zz, ra, s["orient"]))
                else:
                    check(s["orient"] == want, "%d,%d 0x%x: orient %d, expected %d"
                                               % (zx, zz, ra, s["orient"], want))
                orient_ok += 1
                X, Z, Y = struct.unpack_from("<iii", bytes(s["pos"]))
                grp[ra].append((X - ox, Z - oz, Y))

                # 3d'. THE DERIVED POSITION (added 07-29g).  The record sits at
                #    houseAnchor + 13*m + c - model->[+0x44 or +0x48] / 2,
                # with the model id read out of the binary's own jump-table arm and the
                # dimension read out of `model_id_map.json`, which was built from the
                # decoded .cub files and knows nothing about this pass.  Two independent
                # sources; the module index m must land in 0..2 on both axes.
                fits = []
                for mid, cx, cz in candidate_models(ra, mbase, mentr):
                    w, dpt = MODEL_DIMS[mid][0], MODEL_DIMS[mid][1]
                    a = X - (ox - MODULE_CENTRE) - cx + w // 2
                    b = Z - (oz - MODULE_CENTRE) - cz + dpt // 2
                    if a % MODULE_XZ == 0 and b % MODULE_XZ == 0 \
                            and 0 <= a // MODULE_XZ < MODULE_N and 0 <= b // MODULE_XZ < MODULE_N:
                        fits.append(mid)
                check(bool(fits), "%d,%d h%d 0x%x: (%d, %d) is off the derived lattice for %s"
                                  % (zx, zz, hi_, ra, X - ox, Z - oz,
                                     [hex(m) for m, _c, _d in candidate_models(ra, mbase, mentr)]))
                if fits:
                    lattice_ok += 1
                    resolved[len(set(fits))] += 1

            # 3d. the module lattice.  Every record sits at
            #        plotOrigin + 7 + 13*m + 7 - (model offset), m in 0..2
            # so all records from ONE emit site share a residual mod 13 on both axes.
            # The number of residual classes a tail shows can therefore never exceed the
            # number of emit sites feeding it -- which the binary, not the data, supplies.
            for ra, v in grp.items():
                classes = {(a % MODULE_XZ, b % MODULE_XZ) for a, b, _y in v}
                check(len(classes) <= limit[ra],
                      "%d,%d h%d 0x%x: %d residual classes for %d emit sites"
                      % (zx, zz, hi_, ra, len(classes), limit[ra]))
                cls_ok += 1
                seen_cls[ra][len(classes)] += 1
                if limit[ra] == 1:
                    # one model: the three module positions and four storeys, nothing else
                    xs = [a for a, _b, _y in v]
                    zs = [b for _a, b, _y in v]
                    ys = [y for _a, _b, y in v]
                    check(max(xs) - min(xs) <= MODULE_XZ * (MODULE_N - 1)
                          and max(zs) - min(zs) <= MODULE_XZ * (MODULE_N - 1)
                          and max(ys) - min(ys) <= MODULE_Y * (MODULE_LEVELS - 1)
                          and all((a - min(xs)) % MODULE_XZ == 0 for a in xs)
                          and all((b - min(zs)) % MODULE_XZ == 0 for b in zs)
                          and all((y - min(ys)) % MODULE_Y == 0 for y in ys),
                          "%d,%d h%d 0x%x: off-lattice x%s z%s y%s"
                          % (zx, zz, hi_, ra, sorted(set(xs)), sorted(set(zs)), sorted(set(ys))))
                    single_ok += 1

    # the house boundary argument: the house pass always spends draws between the ctor
    # and the first entity record, so a spawn stamped exactly ctor_{i+1} is house i's.
    check(min_gap is not None and min_gap >= 1,
          "a house emitted a record with no draw between the ctor and it (gap %s)" % min_gap)

    print("gate_town_entities -- the town builder's HOUSE ENTITY pass (0x4e74a5-0x4ea988)")
    print("  towns that build a house %d   houses %d   spawn records %d" % (towns, houses, records))
    print("  11 rand sites / %d emit sites / %d spawn tails, all derived from the binary"
          % (len(emits), len(per_tail)))
    print("  the loop-2 coin fired in %d villages; its bookkeeping checked in %d towns"
          % (villages, coin_towns))
    print("  type: ==kind %d, ==1 %d, in {1,kind} %d;  orient %d"
          % (type_kind, type_one, type_either, orient_ok))
    print("  lattice: %d residual-class checks, %d single-model houses on the exact lattice"
          % (cls_ok, single_ok))
    print("  ** DERIVED positions: %d of %d records land exactly on"
          " houseAnchor + 13*m + c - modelDim/2" % (lattice_ok, records))
    print("    the model id comes from the binary's jump-table arm, the dimension from"
          " model_id_map.json -- two independent sources")
    print("    how many candidate models close per record (1 = the id is PINNED): %s"
          % dict(sorted(resolved.items())))
    print("  the six VILLAGE model sets are complete families (base/floor/wall/roof/arc,"
          " 13 slots each);")
    print("    the three RUIN sets repeat `*-wall` into slots the assets do not have"
          " -- duplicates: %s" % ruin_reuse)
    print("  model-set arms exercised by the corpus (kind, desc[+0x1c]) -> towns: %s"
          % dict(sorted(arms_seen.items())))
    print("    !! NULL COVERAGE: the desertruin arm (ruin, desc[+0x1c]==2) never fires here")
    print("  ctor -> first record gap, minimum over %d houses: %s draws" % (houses, min_gap))
    print("  residual classes seen per tail (reported, the assertion is <= the emit count):")
    for ra in sorted(seen_cls):
        print("    0x%06x  limit %d   %s" % (ra, limit[ra], dict(sorted(seen_cls[ra].items()))))
    for m in notes:
        print("   ! " + m)
    print("%d ok, %d FAIL" % (ok, fail))
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
