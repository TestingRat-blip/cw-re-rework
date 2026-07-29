"""Gate: the town builder's ANTIQUE-BUILDING placements, 0x4eee3e-0x4ef248.

Decode: Docs/RE_town_antique.md.  Source data: raw/town_props_capture*.json
(tools/frida_town_props.py, seed 42069).  Model names/dims: cw_rederive/model_id_map.json.

The LAST two rand sites in the town builder.  Two structurally identical plot-role
sections, differing only in one mask:

    0x4eee3e   role == 0x14   model = 0x84c + rand() % 2      31 plots, 31 spawns
    0x4ef02d   role == 0x12   model = 0x84c + rand() % 4      14 plots, 14 spawns

and each places ONE model from the world model DB at the centre of its plot:

    m   = vector<Model*>::at(world + 0x1c, 0x84c + rand() % K)
    w,h = m->[+0x44], m->[+0x48]                 (swapped when plot[+0x14] is odd)
    pos = (plotCentreX - w/2, plotCentreY - h/2, plot[+4])
    walk pos.z DOWN while the block there is not solid
    creature_spawn_builder(m, &pos, plot[+0x14], 6, 0, site, 1, &zeroVec4, 0)

*** A CORRECTION.  RE_town_plaza.md sec.9 calls these "the role-0x14 and role-0x12 plots'
town NPC spawns".  They are not NPCs.  Model ids 0x84c-0x84f are `antique-building1..4.cub`
and the call's type argument is a constant 0 -- `FUN_00524540` is the generic entity
builder, not a creature-only one (RE_524540_creature_spawn.md).  Roles 0x12 and 0x14 occur
in RUINS and in no village (14 and 31 plots, 0 elsewhere), so what these two sites place is
the ruined buildings a ruin is made of.

*** AND THE GEOMETRY CLOSES AGAINST A SECOND, INDEPENDENT SOURCE.  The position is the plot
centre minus HALF THE MODEL'S OWN FOOTPRINT, so the live spawn positions measure the model
dimensions -- and `model_id_map.json` carries the same dimensions read out of the decoded
`.cub` files.  They agree: 0x84c/0x84d are 32 wide (offset -16) and 0x84e/0x84f are 24
(offset -12).  With the map's dims fed in, all 45 spawn positions are predicted EXACTLY
from the seed-derived plot lattice.  Nothing about the model DB is assumed here; the gate
fails if either source moves.

    python tools/gate_town_antique.py
"""
import collections
import glob
import json
import os
import struct
import sys

try:
    import capstone
except ImportError:                                            # pragma: no cover
    sys.exit("needs capstone (pip install capstone)")

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
EXE = os.path.normpath(os.path.join(HERE, "..", "..", "..", "..", "Server.exe"))
MODEL_MAP = os.path.normpath(os.path.join(HERE, "..", "..", "cw_rederive",
                                          "model_id_map.json"))

BASE = 0x400000
SPAN_LO, SPAN_HI = 0x4EEE3E, 0x4EF248
RAND_THUNK = 0x5582F4
SPAWN_BUILDER = 0x524540
VEC_AT = 0x4013F0                              # bounds-checked vector<Model*>::at
MODEL_W, MODEL_H = 0x402150, 0x402160          # the model's +0x44 / +0x48 accessors
MODEL_BASE = 0x84C

# (role, `cmp` site, coin site, spawn return address, modulus)
ARMS = [(0x14, 0x4EEE3E, 0x4EEE4F, 0x4EF021, 2),
        (0x12, 0x4EF02D, 0x4EF03E, 0x4EF210, 4)]

SPAWN_TYPE_ARG = 0                             # the constant `type` argument
PLOT_STRIDE = 7                                # dwords; the plot record is 0x1c bytes


def load_image():
    d = open(EXE, "rb").read()
    pe = struct.unpack_from("<I", d, 0x3C)[0]
    ns = struct.unpack_from("<H", d, pe + 6)[0]
    osz = struct.unpack_from("<H", d, pe + 20)[0]
    b = struct.unpack_from("<I", d, pe + 24 + 28)[0]
    off, secs = pe + 24 + osz, []
    for _ in range(ns):
        vs, va, rs, p = struct.unpack_from("<IIII", d, off + 8)
        secs.append((b + va, vs, p))
        off += 40
    return d, secs


DATA, SECS = load_image()


def foff(va):
    for s, vs, p in SECS:
        if s <= va < s + vs:
            return p + (va - s)
    raise KeyError("%X" % va)


def read(va, n):
    o = foff(va)
    return DATA[o:o + n]


MD = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
MD.detail = True
X = capstone.x86
INS = list(MD.disasm(read(SPAN_LO, SPAN_HI - SPAN_LO), SPAN_LO))


def imm_of(ins, n=0):
    ops = ins.operands
    if len(ops) > n and ops[n].type == X.X86_OP_IMM:
        return ops[n].imm
    return None


def arm_shape(coin_va):
    """Read one arm out of the binary: the coin's modulus and the model base index.

    MSVC's signed `% K` for a power of two is `and eax, 0x8000000(K-1)` + a sign fixup, so
    the MASK is where the modulus lives -- not a `div`.  The base is the `add eax, imm`
    immediately after the fixup.
    """
    mod = base = None
    for i, x in enumerate(INS):
        if x.address != coin_va:
            continue
        for y in INS[i:i + 8]:
            if y.mnemonic == "and" and imm_of(y, 1) is not None and mod is None:
                mod = (imm_of(y, 1) & 0x7FFFFFFF) + 1
            elif y.mnemonic == "add" and imm_of(y, 1) is not None and mod is not None:
                base = imm_of(y, 1)
                break
        break
    return mod, base


def calls_to(target):
    return [x.address + x.size for x in INS
            if x.mnemonic == "call" and imm_of(x, 0) == target]


def rand_sites():
    out = []
    for x in INS:
        if x.mnemonic != "call" or not x.operands:
            continue
        op = x.operands[0]
        if op.type == X.X86_OP_MEM and op.mem.base == 0 and op.mem.disp == RAND_THUNK:
            out.append(x.address + x.size)
    return out


def role_cmps():
    out = []
    for x in INS:
        if x.mnemonic != "cmp" or len(x.operands) != 2:
            continue
        o0, o1 = x.operands
        if o0.type == X.X86_OP_MEM and o1.type == X.X86_OP_IMM and o0.mem.disp == 0xC \
                and o0.mem.index != 0 and o0.mem.scale == 4:
            out.append((x.address, o1.imm))
    return out


def main():
    ok = fail = 0
    notes = []

    def check(cond, msg, n=1):
        nonlocal ok, fail
        if cond:
            ok += n
        else:
            fail += n
            if len(notes) < 10:
                notes.append(msg)

    print("gate_town_antique -- the town builder's LAST two rand sites (0x%06X-0x%06X)"
          % (SPAN_LO, SPAN_HI))

    # -- [1] the two arms, disassembled -------------------------------------
    check(rand_sites() == [a[2] for a in ARMS],
          "the rand sites in the span differ: %s" % ["%X" % a for a in rand_sites()])
    check(role_cmps() == [(a[1], a[0]) for a in ARMS],
          "the role gates differ: %s" % [(hex(a), k) for a, k in role_cmps()])
    check(calls_to(SPAWN_BUILDER) == [a[3] for a in ARMS],
          "the spawn sites differ: %s" % ["%X" % a for a in calls_to(SPAWN_BUILDER)])
    check(len(calls_to(VEC_AT)) == 2 and len(calls_to(MODEL_W)) == 2
          and len(calls_to(MODEL_H)) == 2,
          "the model lookup/accessor calls are not one pair per arm")
    for role, cmp_va, coin, spawn, mod in ARMS:
        m, b = arm_shape(coin)
        check(m == mod, "role 0x%X: modulus %s in the binary, %d in the model"
              % (role, m, mod))
        check(b == MODEL_BASE, "role 0x%X: model base 0x%X, expected 0x%X"
              % (role, b or 0, MODEL_BASE))
        print("  [1] role 0x%02X at 0x%06X : model = 0x%03X + rand() %% %d"
              % (role, cmp_va, b, m))
    print("      (both moduli read from the `and` MASK, not a div -- MSVC compiles a signed")
    print("       % 2 / % 4 to `and eax, 0x8000000K` plus a sign fixup)")

    # -- [2] the model DB ----------------------------------------------------
    db = json.load(open(MODEL_MAP))["world_model_db"]
    ids = sorted({MODEL_BASE + i for _r, _c, _co, _s, m in ARMS for i in range(m)})
    print("  [2] the model ids this span can reach, named from model_id_map.json")
    print("      (which joined 2,550 live model pointers and verified dims against the"
          " decoded .cub files):")
    dims = {}
    for i in ids:
        e = db.get(str(i))
        check(e is not None, "model id 0x%X is not in the model DB map" % i)
        if e:
            dims[i] = (e["dims"][0], e["dims"][1])
            print("        0x%03X -> %-24s dims %s" % (i, e["name"], e["dims"]))
    check(all(db[str(i)]["name"].startswith("antique-building") for i in ids),
          "not every reachable model is an antique-building")

    # -- the capture ---------------------------------------------------------
    cnt_ok = cnt_tot = 0
    ori_ok = ori_tot = 0
    pos_ok = pos_tot = 0
    z_ok = z_tot = 0
    placed = collections.Counter()
    roles_by_class = collections.defaultdict(collections.Counter)
    offsets = collections.defaultdict(set)
    types_seen = set()

    for f in sorted(glob.glob(os.path.join(RAW, "town_props_capture*.json"))):
        for h in json.load(open(f))["hits"]:
            pl = [bytes(p) for p in (h.get("plotsLate") or [])]
            if not pl:
                continue
            cls = struct.unpack_from("<i", bytes(h["desc"]), 0x18)[0]
            zx, zz = h["zone"]
            n = int(round(len(pl) ** 0.5))
            span = 256 // n
            for role, _cv, coin, spawn, mod in ARMS:
                idxs = [r + n * c for r in range(n) for c in range(n)
                        if struct.unpack_from("<i", pl[r + n * c], 0xC)[0] == role]
                roles_by_class[role]["ruin" if cls == 5 else "village"] += len(idxs)
                sp = sorted([x for x in h.get("spawncalls", [])
                             if x["ra"] + BASE == spawn], key=lambda x: x["n"])
                cn = [rv for _n, rv in sorted([(nn, rv) for ra, rv, nn in h["draws"]
                                               if ra + BASE == coin])]
                cnt_tot += 1
                cnt_ok += len(idxs) == len(sp) == len(cn)
                check(len(idxs) == len(sp) == len(cn),
                      "%s role 0x%X: %d plots, %d spawns, %d draws"
                      % (h["zone"], role, len(idxs), len(sp), len(cn)))
                for i, s, cv in zip(idxs, sp, cn):
                    p = struct.unpack("<iiiiiif", pl[i])
                    r, c = i % n, i // n
                    mid = MODEL_BASE + cv % mod
                    w, ht = dims[mid]
                    if s["orient"] % 2:
                        w, ht = ht, w
                    px = zx * 256 + span // 2 + (r * 256) // n - w // 2
                    py = zz * 256 + span // 2 + (c * 256) // n - ht // 2
                    v = struct.unpack("<6i", bytes(s["pos"]))
                    ori_tot += 1
                    ori_ok += s["orient"] == p[5]
                    check(s["orient"] == p[5],
                          "%s: orient %d, plot[+0x14] %d" % (h["zone"], s["orient"], p[5]))
                    pos_tot += 1
                    good = v[0] == px and v[1] == py
                    pos_ok += good
                    check(good, "%s role 0x%X: pos (%d,%d), predicted (%d,%d) for %s"
                          % (h["zone"], role, v[0], v[1], px, py, db[str(mid)]["name"]))
                    z_tot += 1
                    z_ok += v[2] <= p[1]
                    check(v[2] <= p[1], "%s: spawn z %d above plot[+4] %d"
                          % (h["zone"], v[2], p[1]))
                    placed[db[str(mid)]["name"]] += 1
                    types_seen.add(s["type"])
                    offsets[(role, cv % mod)].add((v[0] - (zx * 256 + span // 2
                                                          + (r * 256) // n),
                                                   v[1] - (zz * 256 + span // 2
                                                           + (c * 256) // n)))

    check(types_seen == {SPAWN_TYPE_ARG},
          "the spawn `type` argument is not always %d: %s" % (SPAWN_TYPE_ARG, types_seen))
    check(roles_by_class[0x14]["village"] == 0 and roles_by_class[0x12]["village"] == 0,
          "roles 0x12/0x14 appear in a VILLAGE: %s" % dict(roles_by_class))

    print("  [3] per town, #role plots == #spawns == #coin draws : %d / %d"
          % (cnt_ok, cnt_tot))
    print("      roles 0x14 / 0x12 by town class: %s / %s"
          % (dict(roles_by_class[0x14]), dict(roles_by_class[0x12])))
    print("      -> both roles are RUIN-ONLY, so this is the ruin's own ruined buildings")
    print("  [4] recorded orient == plot[+0x14] (the rotation) : %d / %d"
          % (ori_ok, ori_tot))
    print("  [5] spawn X,Y predicted EXACTLY from (zone, plot lattice, coin -> model id,")
    print("      .cub dims) : %d / %d" % (pos_ok, pos_tot))
    print("      the measured half-footprints, straight off the live positions:")
    for k in sorted(offsets):
        print("        role 0x%02X coin=%d -> offset %s"
              % (k[0], k[1], sorted(offsets[k])))
    print("      -- and the .cub dims say 32 wide for 0x84c/0x84d and 24 for 0x84e/0x84f,")
    print("         i.e. -16 and -12.  Two independent sources, same numbers.")
    print("  [6] spawn Z <= plot[+4] (the placement walks DOWN to solid) : %d / %d"
          % (z_ok, z_tot))
    print("      models placed: %s" % dict(sorted(placed.items())))

    print("  THE NULL BASELINES (what this run does NOT pin):")
    print("    the COIN's model pick is only partly observable.  0x84c and 0x84d have the")
    print("    SAME X/Y footprint (32x32), so role 0x14's `% 2` moves no position at all --")
    print("    31 of the 45 records cannot distinguish its two models.  Role 0x12's `% 4`")
    print("    is observable only as a 2-way split (coins 0/1 -> 32 wide, 2/3 -> 24).")
    print("    The mask and the base index are byte-read from the binary; the JOIN from id")
    print("    to model is model_id_map.json's, not this gate's.")
    print("    the w/h SWAP on an odd plot[+0x14] is likewise invisible: all four models")
    print("    are square in X/Y, so swapping changes nothing (lesson 13's shape -- a")
    print("    transform no observable here can see).  It is disassembled, not measured.")
    print("    the third .cub dimension (32/22/38/18) is never read by this span: the")
    print("    placement centres in X/Y only and drops to the ground.")
    print("  %d ok, %d FAIL" % (ok, fail))
    for m in notes:
        print("    !", m)
    print("  RESULT: %s" % ("PASS" if not fail else "FAIL"))
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
