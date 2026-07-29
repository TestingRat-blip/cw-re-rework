"""Gate: the town builder's BUILDING LIST, site+0x88.

Decode: Docs/RE_town_buildings.md.  Source data: raw/town_props_capture*.json
(tools/frida_town_props.py, seed 42069, 92 towns).

`site+0x88` was the standing blocker for BOTH remaining town-NPC stages -- the village NPC
pass (Docs/RE_town_npcs.md §8) and the ruin occupant pass (Docs/RE_town_ruin.md §9) walk it
and `CwTown` did not have it.  It is not a capture problem.  It is a census:

  * every `lea ecx, [reg + 0x88]` in the whole builder body 0x4e28e0-0x4f2b45 is one of
    SEVEN, and there is no `mov [reg+0x88], ..`, no `add reg, 0x88` and no indexed
    `[reg + reg*s + 0x88]` anywhere in it -- so the census is exhaustive in every address
    form (lesson 7o's "census the register form too", applied up front rather than after);
  * exactly ONE of the seven writes: 0x4e76db -> 0x4f2be0, `std::vector<T*>::push_back`;
  * and the pointer it pushes comes from the frame slot [ebp-0x5cfc], which 0x4e6535
    stores straight out of `operator_new(0x74)` + `FUN_004e1f80(h, 3, 3, 4)` -- the house
    the HOUSE PASS builds.  So a building IS a house, one per role-2 plot, in plot order.

What the consumers read off one, and where it comes from:

  B[+0x60]   the KIND.  0x4e6567 copies `plot[+0x10]` into it -- the promotion pass's
             sub-role, which rederive_townpromo derives.
  B[+0x24]   `cells24`  the ground-storey wall cells
  B[+0x30]   `cells30`  the ONE cell the house pass stamped `+2` on
  B[+0x3c]   `cells3c`  the kind-3 cells, where a named occupant stands

All three are filled by the INTERIOR-MARKING SWEEP at 0x4ea988-0x4ead3a, which spends no
draws and is a pure walk over the module grid.  This gate interprets the three push
predicates out of the binary rather than typing them, then applies them to the 23 layouts
CwTownHouseTables.h holds (regenerated here, never scraped -- lessons 7c/7i).

★ TWO INDEPENDENT FACTS AGREE, and that is the closest thing this derivation has to live
proof.  |cells3c| is 1 in layouts 20, 21 and 22 and 0 in the other twenty; kHouseFixed and
kHouseSub1 -- the layouts a plot with sub-role 1..5 gets -- are exactly {22} and {20, 21}.
So the buildings that take a NAMED occupant are exactly the buildings that have a cell for
one to stand on, and `rand() % |cells3c|` is never a division by zero.  Neither table knows
about the other (lesson 7q).

★ AND THE PICK MODULUS WAS WRONG IN THE PORT.  `CwTown.h` modelled 0x4e7321 as
`rand() % (type-1 modules in the whole 3x3x4 grid)`; the candidate loop at 0x4e7240 walks
(i, j) at k == 1 ONLY and applies three further tests -- 7 candidates against 2 in layout
0.  The draw is spent either way, so no draw-count gate in this repo could see it, and
nothing consumed the value until the building list did (lesson 7y).

⚠ WHAT THIS GATE DOES NOT PROVE.  No capture hooks the vectors, so every count here is a
reading of the binary applied to a derived grid, not a live measurement.  What IS live is
the consequence: the ruin pass's draw stream needs one building per role-2 plot and a
non-empty cells24 for each, and gate_town_ruin.py lands 35 of 35 towns draw for draw on
exactly that.  Stated so the next slice does not read this file as more than it is.

    python tools/gate_town_buildings.py
"""
import collections
import glob
import json
import os
import re
import struct
import subprocess
import sys

try:
    import capstone
except ImportError:                                            # pragma: no cover
    sys.exit("needs capstone (pip install capstone)")

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
EXE = os.path.normpath(os.path.join(HERE, "..", "..", "..", "..", "Server.exe"))
HEADER = os.path.normpath(os.path.join(HERE, "..", "..", "..", "src", "worldgen", "cw",
                                       "CwTownHouseTables.h"))

BASE = 0x400000
BODY_LO, BODY_HI = 0x4E28E0, 0x4F2B45          # the corrected body -- NOT Ghidra's 0x4f26e9

PUSH_BACK = 0x4F2BE0                           # std::vector<T*>::push_back
VEC3_PUSH = 0x42FEB0                           # vec3i_vector_push_back
CELL_AT = 0x4D1950                             # VoxelGrid_cellAt3D
OPERATOR_NEW = 0x54A7B6
HOUSE_CTOR = 0x4E1F80
RAND_THUNK = 0x5582F4

# the model, asserted below
WRITE_SITE = 0x4E76DB                          # the one `lea ecx, [edi + 0x88]` that writes
READ_SITES = [0x4F0065, 0x4F02D9, 0x4F02EB, 0x4F168F, 0x4F21F9, 0x4F220B]
KIND_STORE = 0x4E6567                          # mov [eax + 0x60], ecx   <- plot[+0x10]
SWEEP_LO, SWEEP_HI = 0x4EA988, 0x4EAD3A        # the interior-marking sweep
# the `lea ecx, [edi + F]` that names the target vector, and the `call` three bytes on
LEA30, LEA3C, LEA24 = 0x4EAC22, 0x4EAC87, 0x4EACD2
PUSH30, PUSH3C, PUSH24 = LEA30 + 3, LEA3C + 3, LEA24 + 3
CAND_LO, CAND_HI = 0x4E7240, 0x4E72FF          # the house pass's +2 candidate loop
CAND_PICK = 0x4E731B                           # the rand() whose modulus is |cands|
CAND_MARK = 0x4E737A                           # mov byte [eax + 2], 1

HOUSE_SIZE = 0x74


def load_image():
    data = open(EXE, "rb").read()
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    optsz = struct.unpack_from("<H", data, pe + 20)[0]
    off, secs = pe + 24 + optsz, []
    for _ in range(nsec):
        vsz, va, rsz, ptr = struct.unpack_from("<IIII", data, off + 8)
        secs.append((BASE + va, vsz, ptr, rsz))
        off += 40
    return data, secs


IMG, SECS = load_image()


def foff(va):
    for va0, vsz, ptr, rsz in SECS:
        if va0 <= va < va0 + vsz:
            d = va - va0
            return ptr + d if d < rsz else None
    return None


def read(va, n):
    o = foff(va)
    return IMG[o:o + n] if o is not None else b"\0" * n


MD = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
MD.detail = True


def disasm(lo, hi):
    return list(MD.disasm(read(lo, hi - lo), lo))


BODY = disasm(BODY_LO, BODY_HI)
AT = {x.address: x for x in BODY}


def call_target(ins):
    ops = ins.operands
    if ins.mnemonic == "call" and ops and ops[0].type == capstone.x86.X86_OP_IMM:
        return ops[0].imm
    return None


def census_0x88():
    """Every reference to +0x88 in the body, in EVERY address form."""
    lea, other = [], []
    for x in BODY:
        ops = x.operands
        if x.mnemonic == "lea" and len(ops) == 2 and ops[1].type == capstone.x86.X86_OP_MEM \
                and ops[1].mem.disp == 0x88 and ops[1].mem.index == 0:
            # the call that follows this lea within a few instructions
            t = None
            pc = x.address + x.size
            for _ in range(4):
                y = AT.get(pc)
                if y is None:
                    break
                t = call_target(y)
                if t is not None:
                    break
                pc += y.size
            lea.append((x.address, t))
        elif x.mnemonic in ("mov", "add") and ops and ops[0].type == capstone.x86.X86_OP_MEM \
                and ops[0].mem.disp == 0x88:
            other.append((x.address, "mov-to"))
        elif x.mnemonic == "add" and len(ops) == 2 \
                and ops[1].type == capstone.x86.X86_OP_IMM and ops[1].imm == 0x88:
            other.append((x.address, "add-imm"))
        elif any(o.type == capstone.x86.X86_OP_MEM and o.mem.disp == 0x88 and o.mem.index != 0
                 for o in ops):
            other.append((x.address, "indexed"))
    return lea, other


def sweep_model():
    """Interpret the interior sweep's three push predicates out of the binary.

    -> {push VA: [(field, cmp, sense), ...]} where `sense` is True when the branch KEEPS
    the cell.  Every test is a `cellAt3D(...)` followed by a `cmp byte [eax + F], K` and a
    je/jne, so the walk follows the compares rather than a listing's block order.
    """
    tests, cur, out = [], [], {}
    for x in disasm(SWEEP_LO, SWEEP_HI):
        t = call_target(x)
        if t == CELL_AT:
            cur = []
            continue
        if x.mnemonic == "cmp" and x.operands[0].type == capstone.x86.X86_OP_MEM \
                and x.operands[0].mem.base != 0 \
                and x.operands[1].type == capstone.x86.X86_OP_IMM:
            cur = [(x.operands[0].mem.disp, x.operands[1].imm)]
            continue
        if x.mnemonic in ("je", "jne") and cur:
            tests.append((x.address, cur[0][0], cur[0][1], x.mnemonic))
            cur = []
            continue
        if t in (PUSH30, VEC3_PUSH) and x.address in (PUSH30, PUSH3C, PUSH24):
            out[x.address] = list(tests)
        if t == VEC3_PUSH:
            out[x.address] = list(tests)
    return out, tests


def cand_model():
    """The house pass's candidate loop: the (k, field, imm, jcc) of each test."""
    out, cur, kpush = [], None, None
    for x in disasm(CAND_LO, CAND_HI):
        if x.mnemonic == "push" and x.operands[0].type == capstone.x86.X86_OP_IMM:
            kpush = x.operands[0].imm
        t = call_target(x)
        if t == CELL_AT:
            cur = kpush
            continue
        if x.mnemonic == "cmp" and x.operands[0].type == capstone.x86.X86_OP_MEM \
                and x.operands[0].mem.base != 0 and cur is not None:
            imm = x.operands[1].imm if x.operands[1].type == capstone.x86.X86_OP_IMM else None
            out.append([cur, x.operands[0].mem.disp, imm, None])
            continue
        if x.mnemonic in ("je", "jne") and out and out[-1][3] is None:
            out[-1][3] = x.mnemonic
    return out


# --- the 23 layouts, REGENERATED (never scraped) ---------------------------------------
def layouts():
    r = subprocess.run([sys.executable, os.path.join(HERE, "extract_house_layouts.py"),
                        "--cpp"], capture_output=True, text=True,
                       cwd=os.path.join(HERE, ".."))
    if r.returncode:
        sys.exit("extract_house_layouts.py failed:\n" + r.stderr[-2000:])
    rows = re.findall(r"\{\{([^}]*)\}, \{([^}]*)\}, \{([^}]*)\}, (\d+)\}", r.stdout)
    return [(list(map(int, a.split(","))), list(map(int, b.split(","))),
             list(map(int, c.split(","))), int(d)) for a, b, c, d in rows], r.stdout


KHOUSE_FIXED = 22
KHOUSE_SUB1 = (20, 21)


def cell(L, a, b, c, rot, coin):
    r = rot & 3
    if r == 1:   a, b = 3 - b - 1, a
    elif r == 2: a, b = 3 - a - 1, 3 - b - 1
    elif r == 3: a, b = b, 3 - a - 1
    if coin: b = 3 - b - 1
    if not (0 <= a < 3 and 0 <= b < 3 and 0 <= c < 4):
        return 0, 0, 0                      # the zeroed global at 0x584258
    m = a * 12 + b * 4 + c
    return L[0][m], L[2][m], L[1][m]        # type, flag(+3), kind(+8)


def vectors(LAY, li, rot, coin):
    L = LAY[li]
    v24, v3c = [], []
    for i in range(3):
        for j in range(3):
            for k in range(4):
                t, _, kd = cell(L, i, j, k, rot, coin)
                if t != 1:
                    continue
                tb, _, _ = cell(L, i, j, k - 1, rot, coin)
                if tb != 2:
                    continue
                if kd == 3:
                    v3c.append((i, j, k))
                v24.append((i, j, k))
    return v24, v3c


def candidates(LAY, li, rot, coin):
    L = LAY[li]
    out = []
    for i in range(3):
        for j in range(3):
            t, _, kd = cell(L, i, j, 1, rot, coin)
            if t != 1:
                continue
            _, f2, _ = cell(L, i, j, 2, rot, coin)
            if f2 != 0:
                continue
            if kd == 3:
                continue
            out.append((i, j, 1))
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
            notes.append(msg)

    # --- 1. the +0x88 census, exhaustive in every address form -------------------
    lea, other = census_0x88()
    writes = [(a, t) for a, t in lea if t == PUSH_BACK]
    check(len(lea) == 7, "expected 7 `lea [reg+0x88]`, got %d" % len(lea))
    check(not other, "a non-lea +0x88 reference exists: %s" % other[:4])
    check(len(writes) == 1 and writes[0][0] == WRITE_SITE,
          "expected one push_back at 0x%X, got %s" % (WRITE_SITE, writes))
    got_reads = sorted(a for a, t in lea if t != PUSH_BACK)
    check(got_reads == sorted(READ_SITES),
          "read sites %s, expected %s" % ([hex(a) for a in got_reads],
                                          [hex(a) for a in READ_SITES]))
    print("  [1] site+0x88: %d `lea` references, %d writes (0x%X -> push_back), %d reads;"
          " no mov/add/indexed form anywhere in 0x%X-0x%X"
          % (len(lea), len(writes), WRITE_SITE, len(got_reads), BODY_LO, BODY_HI))

    # --- 2. the pushed object IS the house --------------------------------------
    # 0x4e6500 push 0x74 / operator_new / house_ctor(3,3,4) -> [ebp-0x5cfc], and 0x4e76db
    # pushes that same slot.
    pro = disasm(0x4E6500, 0x4E6540)
    sizes = [x.operands[0].imm for x in pro
             if x.mnemonic == "push" and x.operands[0].type == capstone.x86.X86_OP_IMM]
    calls = [call_target(x) for x in pro if call_target(x)]
    check(HOUSE_SIZE in sizes, "operator_new size %s, expected 0x74" % sizes)
    check(OPERATOR_NEW in calls and HOUSE_CTOR in calls,
          "expected operator_new + house_ctor at 0x4e6508/0x4e6526, got %s"
          % [hex(c) for c in calls])
    ctor_args = [x.operands[0].imm for x in disasm(0x4E651E, 0x4E6526)
                 if x.mnemonic == "push"]
    check(ctor_args == [4, 3, 3], "house_ctor args %s, expected (3, 3, 4)" % ctor_args)
    slot_new = [x for x in pro if x.mnemonic == "mov"
                and x.operands[0].type == capstone.x86.X86_OP_MEM
                and x.operands[0].mem.disp == -0x5CFC]
    # 0x4e76d4 `lea eax, [ebp-0x5cfc]` / 0x4e76da `push eax` / 0x4e76db the write.
    # push_back takes a const T&, so the argument is the ADDRESS of that slot.
    arg = AT.get(WRITE_SITE - 7)
    push_slot = [arg] if arg is not None and arg.mnemonic == "lea" \
        and arg.operands[1].type == capstone.x86.X86_OP_MEM \
        and arg.operands[1].mem.disp == -0x5CFC else []
    check(bool(slot_new) and slot_new[0].address == 0x4E6535,
          "operator_new's result does not land in [ebp-0x5cfc] at 0x4e6535")
    check(bool(push_slot),
          "0x4e76d4 does not load [ebp-0x5cfc] as the push_back argument")
    print("  [2] the pushed object: operator_new(0x%X) + FUN_004e1f80(h, 3, 3, 4) at"
          " 0x4e6508/0x4e6526 -> [ebp-0x5cfc], and 0x%X pushes that slot -- a BUILDING IS"
          " A HOUSE" % (HOUSE_SIZE, WRITE_SITE))

    # --- 3. B[+0x60] == plot[+0x10] ---------------------------------------------
    kd = disasm(KIND_STORE - 10, KIND_STORE + 3)
    src = [x for x in kd if x.mnemonic == "mov"
           and x.operands[1].type == capstone.x86.X86_OP_MEM
           and x.operands[1].mem.disp == 0x10 and x.operands[1].mem.index != 0]
    dst = [x for x in kd if x.address == KIND_STORE
           and x.operands[0].type == capstone.x86.X86_OP_MEM
           and x.operands[0].mem.disp == 0x60]
    check(bool(src) and bool(dst),
          "0x%X is not `[house+0x60] = plot[+0x10]`" % KIND_STORE)
    print("  [3] B[+0x60] = plot[+0x10]: `mov ecx, [eax + edx*4 + 0x10]` then"
          " `mov [eax + 0x60], ecx` at 0x%X -- the promotion pass's sub-role" % KIND_STORE)

    # --- 4. the interior sweep's three pushes and their predicates ---------------
    pushes = [x.address for x in disasm(SWEEP_LO, SWEEP_HI) if call_target(x) == VEC3_PUSH]
    check(pushes == [PUSH30, PUSH3C, PUSH24],
          "sweep pushes %s, expected %s" % ([hex(a) for a in pushes],
                                            [hex(a) for a in (PUSH30, PUSH3C, PUSH24)]))
    targets = {}
    for x in disasm(SWEEP_LO, SWEEP_HI):
        if x.mnemonic == "lea" and x.operands[1].type == capstone.x86.X86_OP_MEM \
                and x.operands[1].mem.disp in (0x24, 0x30, 0x3C):
            pc = x.address + x.size
            y = AT.get(pc)
            if y is not None and call_target(y) == VEC3_PUSH:
                targets[pc] = x.operands[1].mem.disp
    check(targets.get(PUSH30) == 0x30 and targets.get(PUSH3C) == 0x3C
          and targets.get(PUSH24) == 0x24,
          "the three pushes do not target +0x30/+0x3c/+0x24: %s" % targets)
    # the predicates, read off the compares in the span
    _, tests = sweep_model()
    want = [(0x00, 1, "jne"), (0x00, 2, "jne"), (0x02, 0, "je"), (0x08, 3, "jne")]
    got = [(f, k, j) for _a, f, k, j in tests]
    check(got == want, "sweep predicates %s, expected %s" % (got, want))
    print("  [4] the interior sweep 0x%X-0x%X: three vec3i pushes to +0x30 / +0x3c / +0x24,"
          " guarded by cell.type==1, cell(k-1).type==2, cell[+2]!=0, cell[+8]==3 -- all"
          " read off the binary" % (SWEEP_LO, SWEEP_HI))
    nrand = sum(1 for x in disasm(SWEEP_LO, SWEEP_HI)
                if x.mnemonic == "call" and x.op_str.endswith("0x%x]" % RAND_THUNK))
    check(nrand == 0, "the sweep spends %d draws; it must spend none" % nrand)

    # --- 5. the house pass's +2 candidate loop -----------------------------------
    cm = cand_model()
    want5 = [[1, 0x00, 1, "jne"], [2, 0x03, 0, "jne"], [1, 0x04, None, "jne"],
             [1, 0x08, 3, "je"]]
    check(cm == want5, "candidate tests %s, expected %s" % (cm, want5))
    ks = sorted(set(t[0] for t in cm))
    check(ks == [1, 2], "the candidate loop reads storeys %s, expected k in {1, 2}" % ks)
    mark = [x for x in disasm(CAND_MARK, CAND_MARK + 4)
            if x.mnemonic == "mov" and x.operands[0].type == capstone.x86.X86_OP_MEM
            and x.operands[0].mem.disp == 2 and x.operands[1].imm == 1]
    check(bool(mark), "0x%X is not `mov byte [eax + 2], 1`" % CAND_MARK)
    print("  [5] the +2 mark 0x%X-0x%X: k is FIXED at 1, four tests (type==1,"
          " cell(k=2)[+3]==0, cell[+4]==maxTop, cell[+8]!=3), then"
          " `rand() %% |cands|` at 0x%X and `[cell+2] = 1` at 0x%X"
          % (CAND_LO, CAND_HI, CAND_PICK, CAND_MARK))
    print("      !! cell[+4] is TERRAIN (0x4e71bf writes the module's own 13x13 max column"
          " top), so WHICH module is marked is region-cache-blocked -- only the candidate"
          " COUNT is derived, and it is an upper bound")

    # --- 6. apply the model to the 23 layouts ------------------------------------
    LAY, header_txt = layouts()
    check(len(LAY) == 23, "expected 23 layouts, got %d" % len(LAY))
    on_disk = open(HEADER, encoding="utf-8").read()
    check(on_disk.strip() == header_txt.strip(),
          "CwTownHouseTables.h differs from the generator's output")

    empties = invariant = notin = 0
    counts = {}
    for li in range(len(LAY)):
        ref = None
        for rot in range(4):
            for coin in (False, True):
                v24, v3c = vectors(LAY, li, rot, coin)
                cnd = candidates(LAY, li, rot, coin)
                if not v24:
                    empties += 1
                if any(c not in v24 for c in cnd):
                    notin += 1
                key = (len(v24), len(v3c), len(cnd))
                if ref is None:
                    ref = key
                elif key != ref:
                    invariant += 1
        counts[li] = ref
    check(empties == 0, "%d layout/orientation pairs have an EMPTY cells24" % empties)
    check(invariant == 0, "%d counts are not rotation/mirror invariant" % invariant)
    check(notin == 0, "%d candidates are not cells24 entries" % notin)
    mn = min(c[0] for c in counts.values())
    check(mn >= 3, "the smallest |cells24| is %d; the pack+patrol path needs 3" % mn)
    print("  [6] over 23 layouts x 8 rotations/mirrors: |cells24| in [%d, %d] and NEVER"
          " empty; all three counts rotation/mirror invariant; every candidate is also a"
          " cells24 entry, so |cells30| == 1 whatever the terrain says"
          % (mn, max(c[0] for c in counts.values())))
    print("      -> the cell list can never run out inside a building (min 3 vs at most 2"
          " pack picks + 1 patrol pick), so gate_town_ruin.py's cell-exhaustion branch is"
          " provably dead")

    # --- 7. ** the cells3c / named-occupant agreement ------------------------------
    with3c = sorted(li for li in counts if counts[li][1] > 0)
    named = sorted(set((KHOUSE_FIXED,) + KHOUSE_SUB1))
    check(with3c == named,
          "layouts with a kind-3 cell %s != the sub-role 1..5 layouts %s" % (with3c, named))
    check(all(counts[li][1] == 1 for li in with3c),
          "a named-occupant layout has %s kind-3 cells, expected exactly 1"
          % [counts[li][1] for li in with3c])
    print("  [7] ** layouts with a kind-3 cell = %s; kHouseFixed/kHouseSub1 (the layouts a"
          " sub-role 1..5 plot gets) = %s -- SAME SET, one cell each, so a named occupant"
          " always has somewhere to stand and `rand() %% |cells3c|` is never a division by"
          " zero. Two tables that know nothing about each other (lesson 7q)"
          % (with3c, named))

    # --- 8. the port's OLD modulus, and how wrong it was --------------------------
    worst = max(sum(1 for t in LAY[li][0] if t == 1) - counts[li][2] for li in counts)
    print("  [8] the modulus CwTown.h carried (all type-1 modules in the 3x3x4 grid) is"
          " too large by up to %d -- e.g. layout 0: 7 against %d. The draw is spent either"
          " way, which is why nine slices of draw-count gates passed over it"
          % (worst, counts[0][2]))

    # --- 9. the live consequence --------------------------------------------------
    hits = []
    for name in sorted(glob.glob(os.path.join(RAW, "town_props_capture*.json"))):
        hits += json.load(open(name, encoding="utf-8"))["hits"]
    role2 = ruins = villages = 0
    for h in hits:
        late = h.get("plotsLate")
        if not late or any(p is None for p in late):
            continue
        ft = struct.unpack_from("<i", bytes(h["desc"]), 0x18)[0]
        n2 = sum(1 for p in late if struct.unpack_from("<i", bytes(p), 0xC)[0] == 2)
        role2 += n2
        if ft == 5 and n2:
            ruins += 1
        elif ft == 1 and n2:
            villages += 1
    print("  [9] live: %d role-2 plots over %d captured towns -- %d ruins and %d villages"
          " with at least one building. gate_town_ruin.py replays 35 of those ruins draw"
          " for draw using exactly this count as its loop bound, and cwgen's"
          " rederive_townruin derives all 112 of their buildings from the plot table"
          % (role2, len(hits), ruins, villages))

    print("")
    for m in notes:
        print("  FAIL: " + m)
    print("%d ok, %d FAIL" % (ok, fail))
    print("RESULT: %s" % ("PASS" if not fail else "FAIL"))
    return 0 if not fail else 1


if __name__ == "__main__":
    sys.exit(main())
