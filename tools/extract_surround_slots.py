"""Extract the HOUSE SURROUND pass's eight emit slots straight out of Server.exe.

The stage (0x4ecfb5-0x4ed9ea, Docs/RE_town_surround.md) walks the house's ground storey and
drops up to two props against every BASE module face whose neighbour is EMPTY.  The eight
emits are structurally identical and differ in four literals each:

    coord[normalAxis]   = fixed(anchor + 13*idx)  -/+ normalConst   (1.5 via FUN_004e0700,
                                                                     15.5 via FUN_004ce290)
    coord[1-normalAxis] = fixed(anchor + alongK + 13*idx)           (alongK = 4 or 0xa)
    orient              = the immediate pushed to the prop factory FUN_004f2cd0

    python tools/extract_surround_slots.py            # human-readable dump
    python tools/extract_surround_slots.py --json
    python tools/extract_surround_slots.py --cpp      # the generated CwTownSurroundTables.h

## Why an INTERPRETER

RE_town_surround.md §3 already records that the eight `% 6` coins are written THREE
different ways (`mov ecx,6 / idiv`, `mov edi,6 / idiv`, and a bare `idiv edi` against an
`edi` loaded further up), so a census keyed on one form silently under-counts -- the same
shape as lesson 7o's `call edi`.  The four position literals have the matching problem:
the near and far faces reach their offset through two different helpers, and the two
coordinates of an emit are built by two different chains.  So nothing here is typed;
gate_town_surround.py re-runs this and diffs the generated header (lesson 7c/7i).
"""
import argparse
import json
import os
import struct
import sys

try:
    import capstone
except ImportError:                                            # pragma: no cover
    sys.exit("needs capstone (pip install capstone)")

HERE = os.path.dirname(os.path.abspath(__file__))
EXE = os.path.normpath(os.path.join(HERE, "..", "..", "..", "..", "Server.exe"))

SPAN_LO, SPAN_HI = 0x4ECFB5, 0x4ED9EA
RAND_THUNK = 0x5582F4
FACTORY = 0x4F2CD0           # the prop factory, `rand() % 7` inside
SETTLE = 0x5287B0
PUSH_BACK = 0x4D6670
SUB_D = 0x4E0700             # fixed - <double>
ADD_D = 0x4CE290             # fixed + <double>
ADD_I = 0x405690             # fixed + <int>
TO_FIXED = 0x4CDE40          # int_to_fixed16_16
N_SLOTS = 8

# the two frame slots holding pointers to the house anchor's two coordinates. Which is
# which is settled by the vec3 build: the FIRST coordinate the ctor receives is X.
ANCHOR_X, ANCHOR_Z = -0x5C84, -0x5C44


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


MD = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
MD.detail = True
X = capstone.x86


def disasm(lo, hi):
    o = foff(lo)
    return list(MD.disasm(DATA[o:o + (hi - lo)], lo))


def f64_at(va):
    return struct.unpack_from("<d", DATA, foff(va))[0]


def rand_sites(lo, hi):
    """Every rand() call, in BOTH encodings -- the memory form and the cached `call edi`."""
    out, edi_rand = [], False
    for x in disasm(lo, hi):
        if x.mnemonic == "mov" and x.op_str.startswith("edi,"):
            op = x.operands[1]
            edi_rand = (op.type == X.X86_OP_MEM and op.mem.base == 0
                        and op.mem.disp == RAND_THUNK)
        if x.mnemonic != "call" or not x.operands:
            continue
        op = x.operands[0]
        if (op.type == X.X86_OP_MEM and op.mem.base == 0 and op.mem.disp == RAND_THUNK) \
                or (op.type == X.X86_OP_REG and op.reg == X.X86_REG_EDI and edi_rand):
            out.append(x.address + x.size)
    return out


def calls_to(lo, hi, target):
    return [x.address for x in disasm(lo, hi)
            if x.mnemonic == "call" and x.operands
            and x.operands[0].type == X.X86_OP_IMM and x.operands[0].imm == target]


def extract():
    coins = rand_sites(SPAN_LO, SPAN_HI)
    facts = calls_to(SPAN_LO, SPAN_HI, FACTORY)
    sets = calls_to(SPAN_LO, SPAN_HI, SETTLE)
    pushes = calls_to(SPAN_LO, SPAN_HI, PUSH_BACK)
    if not (len(coins) == len(facts) == len(sets) == len(pushes) == N_SLOTS):
        sys.exit("census found %d coins / %d factories / %d settles / %d pushes,"
                 " expected %d each" % (len(coins), len(facts), len(sets), len(pushes),
                                        N_SLOTS))

    rows = []
    for s in range(N_SLOTS):
        lo, hi = coins[s], facts[s]
        ins = disasm(lo, hi)
        along = None          # the `push 4` / `push 0xa`
        normal = None         # [isFar, the .rdata double]
        normal_axis = -1
        pending = None        # the anchor slot whose value is currently in flight
        # Which coordinate carries the face NORMAL is decided by which anchor chain runs
        # through the DOUBLE helper (FUN_004e0700 / FUN_004ce290) rather than the integer
        # one -- NOT by the order the two anchors are read. The two chains swap order
        # between the X faces and the Z faces, which is what defeated the first draft.
        for x in ins:
            if x.mnemonic == "push" and x.operands \
                    and x.operands[0].type == X.X86_OP_IMM \
                    and x.operands[0].imm in (4, 0xA) and along is None:
                along = x.operands[0].imm
            if x.mnemonic == "movsd" and len(x.operands) == 2 \
                    and x.operands[1].type == X.X86_OP_MEM and x.operands[1].mem.base == 0:
                normal = [None, f64_at(x.operands[1].mem.disp)]
            if x.mnemonic == "mov" and len(x.operands) == 2 \
                    and x.operands[1].type == X.X86_OP_MEM \
                    and x.operands[1].mem.base == X.X86_REG_EBP \
                    and x.operands[1].mem.disp in (ANCHOR_X, ANCHOR_Z):
                pending = 0 if x.operands[1].mem.disp == ANCHOR_X else 1
            if x.mnemonic == "call" and x.operands \
                    and x.operands[0].type == X.X86_OP_IMM:
                t = x.operands[0].imm
                if t in (SUB_D, ADD_D) and normal is not None:
                    normal[0] = (t == ADD_D)
                    normal_axis = pending if pending is not None else -1
        # FUN_004f2cd0(dst, &pos, orient, 0): ia32 pushes right to left, so the LAST
        # `push imm` before the call is the orientation and the one before it the 0.
        pushes_imm = [y.operands[0].imm for y in ins
                      if y.mnemonic == "push" and y.operands
                      and y.operands[0].type == X.X86_OP_IMM]
        orient = pushes_imm[-1] if pushes_imm else None
        if along is None or normal is None or normal[0] is None or orient is None \
                or normal_axis < 0:
            sys.exit("slot %d (0x%06X-0x%06X): along=%s normal=%s axis=%s orient=%s"
                     % (s, lo, hi, along, normal, normal_axis, orient))
        rows.append(dict(slot=s, normalAxis=normal_axis, far=bool(normal[0]),
                         normalConst=normal[1], alongK=along, orient=orient,
                         coinAddr=lo, factoryAddr=hi, settleAddr=sets[s],
                         pushAddr=pushes[s]))
    return rows


CPP_HEAD = """// GENERATED by tools/extract_surround_slots.py in cw_decomp -- DO NOT EDIT.
// It interprets 0x4ecfb5-0x4ed9ea out of Server.exe; gate_town_surround.py re-runs it
// every time and diffs the result against these literals (lesson 7c/7i).
//
// The HOUSE SURROUND pass's eight emit slots (Docs/RE_town_surround.md): two props against
// each of a ground-storey BASE module's four faces whose neighbour module is EMPTY.
//
//     coord[normalAxis]   = fixed(anchor + 13*idx) -/+ normalConst
//     coord[1-normalAxis] = fixed(anchor + alongK + 13*idx)
//
// Read against the module CENTRE (anchor + 13*m + 7) the four position literals become two:
// -+8.5 along the face normal and -+3 along the face. That is an INTERPRETATION and it
// depends on the 7; the literals below are what the binary owns.
#pragma once
#include <cstdint>

namespace vx::cw {

struct TownSurroundSlot {
    uint8_t normalAxis;   // 0 = the face normal is X, 1 = it is Z
    uint8_t far;          // 0 -> anchor - normalConst, 1 -> anchor + normalConst
    double  normalConst;  // 1.5 on the near side, 15.5 on the far one
    int32_t alongK;       // 4 or 10, the offset along the face
    int32_t orient;       // the prop's rotation, the factory's own immediate
};

constexpr TownSurroundSlot kTownSurroundSlots[@N@] = {
"""

CPP_TAIL = """};

}  // namespace vx::cw
"""

FACE = {(0, False): "-X", (0, True): "+X", (1, False): "-Z", (1, True): "+Z"}


def emit_cpp(rows):
    out = [CPP_HEAD.replace("@N@", str(N_SLOTS))]
    for r in rows:
        out.append("    {%d, %d, %s, %2d, %d},   // %d  %s face, slot %d\n"
                   % (r["normalAxis"], 1 if r["far"] else 0, repr(r["normalConst"]),
                      r["alongK"], r["orient"], r["slot"],
                      FACE[(r["normalAxis"], r["far"])], r["slot"] % 2))
    out.append(CPP_TAIL)
    return "".join(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--cpp", action="store_true")
    a = ap.parse_args()
    rows = extract()
    if a.cpp:
        sys.stdout.write(emit_cpp(rows))
        return 0
    if a.json:
        print(json.dumps(rows, indent=1))
        return 0
    print("the HOUSE SURROUND pass's %d emit slots, interpreted out of 0x%06X-0x%06X"
          % (N_SLOTS, SPAN_LO, SPAN_HI))
    print("  slot  face  coin      normal                    along   orient")
    for r in rows:
        print("   %d    %s   0x%06X  %s %s%g on axis %d   +%-4d   %d"
              % (r["slot"], FACE[(r["normalAxis"], r["far"])], r["coinAddr"],
                 "anchor", "+" if r["far"] else "-", r["normalConst"], r["normalAxis"],
                 r["alongK"], r["orient"]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
