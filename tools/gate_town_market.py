"""Gate: the town builder's MARKET pass (role 9), 0x4e3a3f-0x4e5023.

Decode: Docs/RE_town_market.md.  Source data: raw/town_props_capture*.json
(tools/frida_town_props.py, seed 42069, 92 towns; 6 of them have a market).

The last open band in the town builder.  It is two plot-role sections, not one:

    0x4e3a3f-0x4e3e15   role == 8   DEAD -- the builder never assigns role 8 (see [1])
    0x4e3e15-0x4e5023   role == 9   the MARKET: 20 stalls and crates round the plot edge

Each of the 20 blocks is the same four events -- and this is the first town stage since
07-28l whose records the rig captures in full, so it is gated field by field:

    Chunk_getColumnAt(x, y)                     the perimeter slot's column
    if it exists: push (x, y, top) into [ebp-0x5d80]      <- the NPC pass's flag-B list
    rand() % 5                                  the slot is used unless this is 0
    rand() % 3                                  a jitter ALONG the plot edge
    <factory>(record, pos, ...)                 a hidden rand() the rig cannot see
    Prop_settleOnTerrain(record, site, 1)
    if it settled: push into site+0xc

*** THE SEMANTIC READING, and unlike RE_town_yard.md's it is in the namespace that resolves.
The 12 stalls come from FUN_004f3630, `type = 0x15 + rand()%3`, and the 8 goods from
FUN_004f3490, `type = 0x18 + rand()%4`.  Through assets/props/prop_ids.json those are
market-stand1/2/3 and barrel/crate/open-crate/sack -- a market.  RE_town_yard.md had to
WITHDRAW its equivalent reading because the yard's ids go to site+4 / site+0x30, which no
capture hooks; these go to `site+0xc` (`lea ecx, [edi+0xc]`), which is exactly the
namespace prop_ids.json covers.  The gate asserts the push target out of the binary so the
distinction cannot be lost.

*** AND IT CLOSES A LOOP ACROSS TWO STAGES.  RE_town_npcs.md sec.8 lists flag B's list as
"pushed at 0x4e3ea2, in the not-yet-RE'd 0x4e3ead band" -- an input it could not name.
0x4e3ea2 is this pass's landmark push, so flag B is THE MARKET STALL LIST, and the
villagers' daily schedule stop at 0x4f0fc0 is a trip to the market.

*** THE HIDDEN DRAWS ARE DERIVED, NOT JUST PRICED.  Both factories live outside the builder
body, so frida_town_props.py never records their draws (lesson 18).  msvcrt's rand is a
plain LCG, so stepping it from the town's own zone seed recovers them (lesson 33) -- and
then the decoded factories reproduce the TYPE and all three EXTENTS of 90 of 90 live
records, and predict whether the arm spends one draw or two in 93 of 93.

    python tools/gate_town_market.py
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
PROP_IDS = os.path.normpath(os.path.join(HERE, "..", "..", "..", "assets", "props",
                                         "prop_ids.json"))

BASE = 0x400000
BODY_LO, BODY_HI = 0x4E28E0, 0x4F2B45          # RE_town_ruin.md sec.2
SPAN_LO, SPAN_HI = 0x4E3A3F, 0x4E5023   # 0x4e5023 is role 8's own `jne` target
ROLE8_LO, ROLE9_LO = 0x4E3AC0, 0x4E3E15        # the two `cmp [plot+0xc], K`
OLD_HI = 0x4E4FB3                              # the ledger's boundary before this slice
# The dead role-8 section's own emitters.  It has a rand site and a prop push of its own,
# and BOTH are empty in all 92 towns -- which is what corroborates that role 8 is never
# assigned, rather than merely never seen.
DEAD_RAND, DEAD_PUSH = 0x4E3D7F, 0x4E3DA0

RAND_THUNK = 0x5582F4
SETTLE = 0x5287B0
PUSH_BACK = 0x4D6670                           # the out-of-line prop push_back
LANDMARK_PUSH = 0x42FEB0                       # -> [ebp-0x5d80], the NPC pass's flag B
FLAG_B_SLOT = -0x5D80                          # RE_town_npcs.md sec.2
FAC_A, FAC_B = 0x4F3630, 0x4F3490
SEED_BASE = 6346                               # world[0x800188] for seed 42069

COIN_MOD, JIT_MOD = 5, 3
N_BLOCKS = 20
N_A = 12                                       # blocks using factory A

# the 20 blocks, in address order: (coin, jitter, settle, push)
BLOCKS = [
    (0x4E3EAD, 0x4E3EEB, 0x4E3F9C, 0x4E3FAF), (0x4E4018, 0x4E4056, 0x4E40FC, 0x4E410F),
    (0x4E4178, 0x4E41B6, 0x4E4267, 0x4E427A), (0x4E42E3, 0x4E4317, 0x4E4387, 0x4E439A),
    (0x4E43AF, 0x4E43E3, 0x4E4449, 0x4E445C), (0x4E4471, 0x4E44A5, 0x4E4515, 0x4E4528),
    (0x4E453D, 0x4E458D, 0x4E45E3, 0x4E45F6), (0x4E460B, 0x4E464F, 0x4E46A5, 0x4E46B8),
    (0x4E46CD, 0x4E471D, 0x4E4773, 0x4E4786), (0x4E479B, 0x4E47EB, 0x4E4839, 0x4E484C),
    (0x4E4861, 0x4E48A5, 0x4E48F3, 0x4E4906), (0x4E491B, 0x4E496B, 0x4E49B9, 0x4E49CC),
    (0x4E49E1, 0x4E4A15, 0x4E4A7D, 0x4E4A90), (0x4E4AA5, 0x4E4AD9, 0x4E4B41, 0x4E4B54),
    (0x4E4B69, 0x4E4B9D, 0x4E4C0D, 0x4E4C20), (0x4E4C35, 0x4E4C69, 0x4E4CD9, 0x4E4CEC),
    (0x4E4D01, 0x4E4D51, 0x4E4DA7, 0x4E4DBA), (0x4E4DCF, 0x4E4E1F, 0x4E4E75, 0x4E4E88),
    (0x4E4E9D, 0x4E4EED, 0x4E4F3B, 0x4E4F4E), (0x4E4F63, 0x4E4FB3, 0x4E5001, 0x4E5014),
]
COIN = [b[0] for b in BLOCKS]
JIT = [b[1] for b in BLOCKS]
SET = [b[2] for b in BLOCKS]
PUSH = [b[3] for b in BLOCKS]

# Which record coordinate the %3 jitter moves, and with which sign.  The SIGN is
# disassembled (see [7]); the AXIS is pinned by the capture, because the two coordinates of
# a block are emitted through two different code shapes and a symbolic walk of the span
# does not resolve which is which.  Reported as such -- it is one bit per block and the
# data leaves exactly one option for 19 of the 20.
JITTER = {0: (1, +1), 1: (1, +1), 2: (1, +1), 3: (1, -1), 4: (1, -1), 5: (1, -1),
          6: (0, -1), 7: (0, -1), 8: (0, -1), 9: (0, +1), 10: (0, +1), 11: (0, +1),
          12: (1, +1), 13: (1, +1), 14: (1, -1), 15: (1, -1),
          16: (0, -1), 17: (0, -1), 18: (0, +1), 19: (0, +1)}

MARKET_NAMES = {0x15: "market-stand1", 0x16: "market-stand2", 0x17: "market-stand3",
                0x18: "barrel", 0x19: "crate", 0x1A: "open-crate", 0x1B: "sack"}


# ---------------------------------------------------------------------------
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


def disasm(lo, hi):
    return list(MD.disasm(read(lo, hi - lo), lo))


def imm_of(ins, n=0):
    ops = ins.operands
    if len(ops) > n and ops[n].type == X.X86_OP_IMM:
        return ops[n].imm
    return None


def f32(x):
    return struct.unpack("<f", struct.pack("<f", x))[0]


def stream(seed, n):
    s, out = seed & 0xFFFFFFFF, []
    for _ in range(n):
        s = (s * 214013 + 2531011) & 0xFFFFFFFF
        out.append((s >> 16) & 0x7FFF)
    return out


def locate(seq, draws):
    fv, fn = draws[0][1], draws[0][2]
    for i, v in enumerate(seq):
        if v != fv:
            continue
        o = i - fn
        if all(0 <= n + o < len(seq) and seq[n + o] == val for _r, val, n in draws):
            return o
    return None


# ---------------------------------------------------------------------------
# the binary side
# ---------------------------------------------------------------------------
def role_dispatch():
    """every `cmp [reg + reg*4 + 0xc], imm` in the builder -- the plot-role sections."""
    out = []
    for x in disasm(BODY_LO, BODY_HI):
        if x.mnemonic != "cmp" or len(x.operands) != 2:
            continue
        o0, o1 = x.operands
        if o0.type == X.X86_OP_MEM and o1.type == X.X86_OP_IMM \
                and o0.mem.disp == 0xC and o0.mem.index != 0 and o0.mem.scale == 4:
            out.append((x.address, o1.imm))
    return out


def role_stores():
    """every immediate the builder ever writes to a plot's +0xc."""
    out = set()
    for x in disasm(BODY_LO, BODY_HI):
        if x.mnemonic != "mov" or len(x.operands) != 2:
            continue
        o0, o1 = x.operands
        if o0.type == X.X86_OP_MEM and o1.type == X.X86_OP_IMM and o0.mem.disp == 0xC \
                and x.op_str.startswith("dword"):
            out.add(o1.imm)
    return out


def calls_in(lo, hi, target):
    return [x.address + x.size for x in disasm(lo, hi)
            if x.mnemonic == "call" and imm_of(x, 0) == target]


def rand_sites(lo, hi):
    out = {}
    edi_rand = False
    for i, x in enumerate(disasm(lo, hi)):
        if x.mnemonic == "mov" and x.op_str.startswith("edi,"):
            op = x.operands[1]
            edi_rand = (op.type == X.X86_OP_MEM and op.mem.base == 0
                        and op.mem.disp == RAND_THUNK)
        if x.mnemonic != "call" or not x.operands:
            continue
        op = x.operands[0]
        if (op.type == X.X86_OP_MEM and op.mem.base == 0 and op.mem.disp == RAND_THUNK) \
                or (op.type == X.X86_OP_REG and op.reg == X.X86_REG_EDI and edi_rand):
            out[x.address + x.size] = True
    return sorted(out)


def factory_mod(entry):
    """the `rand() % K` a factory picks its type with, read out of its body."""
    ins = disasm(entry, entry + 0x100)
    for i, x in enumerate(ins):
        if x.mnemonic == "call":
            op = x.operands[0]
            hit = (op.type == X.X86_OP_MEM and op.mem.disp == RAND_THUNK) or \
                  (op.type == X.X86_OP_REG and op.reg == X.X86_REG_EDI)
            if not hit:
                continue
            for y in ins[i + 1:i + 5]:
                if y.mnemonic == "mov" and imm_of(y, 1) is not None \
                        and y.op_str.startswith("ecx,"):
                    return imm_of(y, 1)
                if y.mnemonic == "and" and imm_of(y, 1) is not None:
                    return (imm_of(y, 1) & 0x7FFFFFFF) + 1
    return None


def factory_a(r1, r2):
    return 0x15 + r1 % 3, (3.5, 2.0, 3.0), 1


def factory_b(r1, r2):
    """FUN_004f3490: rand()%4 -> a 4-entry jump table at 0x4f3620.  Arms 1 and 2 spend a
    SECOND draw for a float scale; arms 0 and 3 are constant."""
    c = r1 % 4
    if c == 0:
        return 0x18, (2.0, 2.0, 2.0), 1
    if c == 3:
        return 0x1B, (1.5, 1.5, f32(1.4)), 1
    base = f32(f32(f32(f32(r2) * f32(0.5)) / f32(32767.0)) + f32(1.0))
    v = f32(base * f32(1.5))
    if c == 1:
        return 0x19, (v, v, v), 2
    return 0x1A, (v, v, f32(base * f32(0.75))), 2


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

    print("gate_town_market -- the town builder's MARKET pass (0x%06X-0x%06X)"
          % (SPAN_LO, SPAN_HI))

    # -- [0] the span --------------------------------------------------------
    late = [a for a in (SET[-1], PUSH[-1]) if a > OLD_HI]
    check(len(late) == 2,
          "the 20th block's settle/push are not past the old boundary: %s" % late)
    print("  [0] the band is TWENTY blocks, not the 19 the ledger's bound could see:")
    print("      RE_town_npcs.md sec.9 ended this band at 0x%06X -- the last RAND site --"
          " so the 20th" % OLD_HI)
    print("      block's settle (0x%06X) and push (0x%06X) fell in the gap before the"
          " yard pass" % (SET[-1], PUSH[-1]))

    # -- [1] the two role sections ------------------------------------------
    disp = role_dispatch()
    stores = role_stores()
    here = [(a, k) for a, k in disp if SPAN_LO <= a <= SPAN_HI]
    check([k for _a, k in here] == [8, 9],
          "the band's role gates are %s, expected [8, 9]" % [k for _a, k in here])
    check(8 not in stores, "the builder DOES store role 8 somewhere: %s" % sorted(stores))
    print("  [1] the builder's whole plot-role dispatch, disassembled: %s"
          % " ".join("%d@%06X" % (k, a) for a, k in disp))
    print("      immediates it ever WRITES to a plot's +0xc              : %s"
          % sorted(stores))
    print("      -> roles %s have a code section and are NEVER ASSIGNED: dead in the"
          " shipped game" % sorted({k for _a, k in disp} - stores))
    print("      -> so 0x%06X (role 8) never runs, and this band is the role-9 section"
          % ROLE8_LO)

    # -- [2] the 20 blocks ---------------------------------------------------
    sites = rand_sites(SPAN_LO, SPAN_HI)
    model = sorted(COIN + JIT + [DEAD_RAND])
    check(sites == model,
          "the band's rand sites differ: binary %s model %s"
          % (["%X" % a for a in sites], ["%X" % a for a in model]))
    check(calls_in(SPAN_LO, SPAN_HI, SETTLE) == SET, "the settle sites differ")
    check(calls_in(SPAN_LO, SPAN_HI, PUSH_BACK) == [DEAD_PUSH] + PUSH,
          "the push sites differ")
    fa = calls_in(SPAN_LO, SPAN_HI, FAC_A)
    fb = calls_in(SPAN_LO, SPAN_HI, FAC_B)
    check(len(fa) == N_A and len(fb) == N_BLOCKS - N_A,
          "the factory split is %d/%d, expected %d/%d"
          % (len(fa), len(fb), N_A, N_BLOCKS - N_A))
    lm = calls_in(SPAN_LO, SPAN_HI, LANDMARK_PUSH)
    print("  [2] %d blocks x (coin, jitter, settle, push), all four censused out of the"
          " binary" % N_BLOCKS)
    print("      factory 0x%06X on blocks 0-%d, factory 0x%06X on blocks %d-%d"
          % (FAC_A, N_A - 1, FAC_B, N_A, N_BLOCKS - 1))

    # -- flag B --------------------------------------------------------------
    slot = None
    ins = disasm(SPAN_LO, SPAN_HI)
    for i, x in enumerate(ins):
        if x.mnemonic == "call" and imm_of(x, 0) == LANDMARK_PUSH:
            for y in reversed(ins[max(0, i - 4):i]):
                if y.mnemonic == "lea" and y.op_str.startswith("ecx,") \
                        and y.operands[1].type == X.X86_OP_MEM \
                        and y.operands[1].mem.base == X.X86_REG_EBP:
                    slot = y.operands[1].mem.disp
                    break
            break
    check(slot == FLAG_B_SLOT,
          "the landmark push targets [ebp%d], not flag B's [ebp%d]" % (slot or 0, FLAG_B_SLOT))
    print("      the landmark push at 0x%06X targets [ebp%d] -- that IS flag B of"
          % (lm[0] if lm else 0, FLAG_B_SLOT))
    print("      RE_town_npcs.md sec.2, which sec.8 could only call 'pushed at 0x4e3ea2'."
          "  The market")
    print("      stalls are what the villagers' daily schedule walks to.")

    # -- [3] the factory moduli, disassembled -------------------------------
    ma, mb = factory_mod(FAC_A), factory_mod(FAC_B)
    check(ma == 3, "factory A's modulus is %s, expected 3" % ma)
    check(mb == 4, "factory B's modulus is %s, expected 4" % mb)
    tbl = [struct.unpack("<I", read(0x4F3620 + 4 * i, 4))[0] for i in range(4)]
    check(len(set(tbl)) == 4, "factory B's jump table has duplicate arms: %s" % tbl)
    print("  [3] factory A: type = 0x15 + rand()%%%d      factory B: type = 0x18 +"
          " rand()%%%d" % (ma, mb))
    print("      (both moduli read out of the factory bodies; B's 4 arms come from its"
          " jump table at 0x4F3620)")

    # -- the capture ---------------------------------------------------------
    coin_ok = coin_tot = 0
    type_ok = type_tot = 0
    ext_ok = ext_tot = 0
    cost_ok = cost_tot = 0
    seq_ok = seq_tot = 0
    pos = collections.defaultdict(dict)
    jitv = collections.defaultdict(dict)
    towns = names = 0
    seen_names = collections.Counter()
    no_origin = []
    push_target = set()

    for f in sorted(glob.glob(os.path.join(RAW, "town_props_capture*.json"))):
        for h in json.load(open(f))["hits"]:
            alld = [(ra + BASE, rv, n) for ra, rv, n in h["draws"]]
            dr = [x for x in alld if SPAN_LO <= x[0] <= SPAN_HI]
            if not dr:
                continue
            towns += 1
            z = tuple(h["zone"])
            seq = stream(SEED_BASE + z[1] * 0x10000 + z[0], alld[-1][2] + 400000)
            off = locate(seq, alld[:400])
            if off is None:
                no_origin.append(z)
                continue
            got = {x[0]: x[1] for x in dr}
            idx = {x[0]: x[2] for x in dr}
            pu, se = {}, {}
            for r in h.get("pushes", []):
                if r["ra"] + BASE in PUSH:
                    pu[PUSH.index(r["ra"] + BASE)] = bytes(r["rec"])
            for r in h.get("settles", []):
                if r["ra"] + BASE in SET:
                    se[SET.index(r["ra"] + BASE)] = bytes(r["before"])
            nxt = {a[2]: b[2] for a, b in zip(dr, dr[1:])}

            for b in range(N_BLOCKS):
                if COIN[b] not in got:
                    continue
                coin_tot += 1
                used = JIT[b] in got
                coin_ok += used == (got[COIN[b]] % COIN_MOD != 0)
                check(used == (got[COIN[b]] % COIN_MOD != 0),
                      "%s block %d: coin %d%%%d, jitter %s"
                      % (z, b, got[COIN[b]], COIN_MOD, used))
                if not used:
                    continue
                jitv[z][b] = got[JIT[b]] % JIT_MOD
                n0 = idx[JIT[b]]
                r1, r2 = seq[off + n0 + 1], seq[off + n0 + 2]
                t, ext, cost = (factory_a if b < N_A else factory_b)(r1, r2)
                if n0 in nxt:
                    cost_tot += 1
                    cost_ok += (nxt[n0] - n0) == cost + 1
                    check((nxt[n0] - n0) == cost + 1,
                          "%s block %d: draw gap %d, derived arm costs %d"
                          % (z, b, nxt[n0] - n0, cost))
                if b in se:
                    p = struct.unpack_from("<qqq", se[b], 8)
                    pos[z][b] = [v >> 16 for v in p]
                rec = pu.get(b)
                if rec is None:
                    continue
                gt = struct.unpack_from("<i", rec, 0)[0]
                type_tot += 1
                type_ok += t == gt
                check(t == gt, "%s block %d: type 0x%X derived, 0x%X recorded" % (z, b, t, gt))
                seen_names[MARKET_NAMES.get(gt, "?0x%X" % gt)] += 1
                ge = struct.unpack_from("<fff", rec, 0x24)
                m = all(abs(a - c) < 1e-6 for a, c in zip(ext, ge))
                ext_tot += 3
                ext_ok += 3 if m else 0
                check(m, "%s block %d: extents %s derived, %s recorded" % (z, b, ext, ge))

    check(not no_origin, "no LCG origin for %s" % no_origin)

    # -- [7] the perimeter ring ---------------------------------------------
    tl = sorted(pos)
    ref = 6                       # any block will do; its OWN jitter has to come off too,
                                  # or every other block's offset inherits a %3 spread on
                                  # the reference's axis and nothing looks constant.

    def refbase(z, ax):
        rax, rc = JITTER[ref]
        return pos[z][ref][ax] - (rc * jitv[z][ref] if rax == ax else 0)

    off_ok = off_tot = 0
    unique = 0
    for b in range(N_BLOCKS):
        opts = []
        for ax in (0, 1):
            for c in (-1, 0, 1):
                s = {(pos[z][b][ax] - c * jitv[z][b]) - refbase(z, ax)
                     for z in tl if b in pos[z] and ref in pos[z]}
                if len(s) == 1:
                    opts.append((ax, c))
        # with the reference's own jitter removed, the honest statement is that exactly
        # TWO of the six options survive: the right coefficient on the jitter axis, and
        # coefficient 0 on the other one.  Anything else would mean the axis is not pinned.
        unique += (sorted(opts) == sorted([JITTER[b], (1 - JITTER[b][0], 0)]))
        want = JITTER[b]
        for ax in (0, 1):
            c = want[1] if want[0] == ax else 0
            s = {(pos[z][b][ax] - c * jitv[z][b]) - refbase(z, ax)
                 for z in tl if b in pos[z] and ref in pos[z]}
            off_tot += 1
            off_ok += len(s) == 1
            check(len(s) == 1,
                  "block %d axis %d: offset is not town-independent: %s" % (b, ax, sorted(s)))

    print("  [4] the capture: %d towns have a role-9 plot (a market)" % towns)
    print("  [5] `rand() %% %d != 0` decides whether the slot is used : %d / %d"
          % (COIN_MOD, coin_ok, coin_tot))
    print("  [6] TYPE derived from the LCG-recovered hidden draw     : %d / %d"
          % (type_ok, type_tot))
    print("      EXTENTS derived the same way (3 floats each)        : %d / %d"
          % (ext_ok, ext_tot))
    print("      whether the arm spends ONE hidden draw or TWO       : %d / %d"
          % (cost_ok, cost_tot))
    print("  [7] the 20 slots are a PERIMETER RING round the plot; the %3 jitter runs")
    print("      ALONG each edge, so its sign flips side to side:")
    for side, bs in (("+Y", [0, 1, 2, 12, 13]), ("-Y", [3, 4, 5, 14, 15]),
                     ("-X", [6, 7, 8, 16, 17]), ("+X", [9, 10, 11, 18, 19])):
        print("        %s edge: blocks %-22s jitter %s"
              % (side, str(bs), "%+d on axis %d" % (JITTER[bs[0]][1], JITTER[bs[0]][0])))
    print("      per-block offsets town-independent once the jitter is removed : %d / %d"
          % (off_ok, off_tot))
    print("      of the SIX (axis, coeff) options, exactly the two the model names survive"
          " in %d of %d" % (unique, N_BLOCKS))
    print("      blocks -- the right coefficient on the jitter axis, and 0 on the other."
          "  That is the")
    print("      null baseline for the one fitted bit per block (block %d is the"
          " reference)." % ref)
    print("  [8] THE SEMANTIC READING -- and it is in the namespace that RESOLVES:")
    print("      the records go to `site+0xc`, which is what assets/props/prop_ids.json"
          " covers")
    print("      (RE_town_yard.md had to withdraw its reading: those ids go to site+4 /"
          " site+0x30)")
    for t in sorted(MARKET_NAMES):
        print("        0x%02X -> %-14s  %d records" % (t, MARKET_NAMES[t],
                                                       seen_names[MARKET_NAMES[t]]))
    print("      12 stall slots + 8 goods slots round one plot: the town MARKET")

    print("  THE NULL BASELINES (what this run does NOT pin):")
    print("    only %d of 92 towns have a role-9 plot, and every one has exactly ONE --"
          " what decides" % towns)
    print("    that a town gets a market is the PROMOTION pass's business"
          " (RE_town_promotion.md), not this one")
    print("    role 8's section is DEAD and therefore completely unverified: 0 recorded"
          " draws in 92")
    print("    towns, and no claim here about what it would do (it calls FUN_00513400 six"
          " times with")
    print("    colour 0xdcdcdc, and whether that spends rand() is unknown because it never"
          " runs)")
    print("    the jitter AXIS is one fitted bit per block, not disassembled -- see [7]"
          " for its baseline")
    print("  %d ok, %d FAIL" % (ok, fail))
    for m in notes:
        print("    !", m)
    print("  RESULT: %s" % ("PASS" if not fail else "FAIL"))
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
