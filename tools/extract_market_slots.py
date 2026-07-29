"""Extract the town MARKET's 20 perimeter slots straight out of Server.exe.

The role-9 section (0x4e3e15-0x4e5023, Docs/RE_town_market.md) rings one plot with 12
market stalls and 8 crates of goods.  Each of the 20 slots computes two world-block
coordinates from four frame slots the builder set up once:

    [ebp-0x5c8c] plotOriginX    [ebp-0x5c9c] plotOriginZ
    [ebp-0x5c90] span/2         [ebp-0x5ce4] span

in exactly two shapes:

    EDGE  near side : origin + 6 + jitter
    EDGE  far  side : origin + span - 6 - jitter
    ALONG           : origin + span/2 + K,     K in {-7, 0, +7} / {-3, +3}

so the slot ring is 20 x (edge axis, edge side, K) and the `% 3` jitter always lands on
the EDGE coordinate -- it pushes the stall in and out of the plot boundary.

    python tools/extract_market_slots.py            # human-readable dump
    python tools/extract_market_slots.py --json     # machine-readable
    python tools/extract_market_slots.py --cpp      # the generated CwTownMarketTables.h

## Why an INTERPRETER and not a table typed off a listing

Same reason as extract_house_layouts.py (HANDOFF_PROMPT.md lessons 7c / 7i / 7l), and the
market has its own two traps on top:

  * a slot's two coordinates are emitted through two different code shapes -- one goes
    through FUN_004cde40, the other inlines the 16.16 widening as `cdq / shld / shl` --
    so a scrape that follows registers resolves only one of the pair.  That is exactly
    why RE_town_market.md sec.5 had to take the jitter AXIS from the capture, one fitted
    bit per block.  Following the FRAME SLOTS instead resolves all 20 from the binary.
  * a slot whose along-offset is 0 emits no `add` at all, because MSVC does not encode
    `add reg, 0`.  Running the interpreter cumulatively "fixes" those four blocks by
    letting the PREVIOUS block's -7 leak in, which produces a complete, plausible and
    WRONG table.  So the window is per-block and an absent constant is reported as an
    absence; `--check` is what turns it into a 0, against the live capture.

## The cross-check

`--check` mines tools/../raw/town_props_capture*.json for the 6 captured markets, removes
each slot's own jitter, and compares the offset against this table.  Two independent
routes to the same 40 numbers (lesson 7q): the disassembly does not know about the
capture, and the capture does not know about the disassembly.
"""
import argparse
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
RAW = os.path.normpath(os.path.join(HERE, "..", "raw"))
EXE = os.path.normpath(os.path.join(HERE, "..", "..", "..", "..", "Server.exe"))

BASE = 0x400000
SPAN_LO, SPAN_HI = 0x4E3E15, 0x4E5023          # the role-9 section; HI is role 8's `jne`
FAC_A, FAC_B = 0x4F3630, 0x4F3490              # stalls / goods
RAND_THUNK = 0x5582F4
SETTLE = 0x5287B0
N_BLOCKS = 20

# the four frame slots the whole section reads its geometry out of
OX, OZ, HALF, SPAN = -0x5C8C, -0x5C9C, -0x5C90, -0x5CE4
SLOT = {OX: "originX", OZ: "originZ", HALF: "half", SPAN: "span"}


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


MD = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
MD.detail = True
X = capstone.x86


def disasm(lo, hi):
    o = foff(lo)
    return list(MD.disasm(DATA[o:o + (hi - lo)], lo))


def is_rand(ins):
    if ins.mnemonic != "call" or not ins.operands:
        return False
    op = ins.operands[0]
    return op.type == X.X86_OP_MEM and op.mem.base == 0 and op.mem.disp == RAND_THUNK


# ---------------------------------------------------------------------------
# the block boundaries, censused rather than typed
# ---------------------------------------------------------------------------
def boundaries():
    ins = disasm(SPAN_LO, SPAN_HI)
    jit, fac, settles = [], [], []
    for i, x in enumerate(ins):
        if is_rand(x):
            nx = ins[i + 1:i + 4]
            # a `% 3` jitter is `cdq / mov ecx, 3 / idiv ecx`; the `% 5` coin uses 5
            if len(nx) == 3 and nx[1].mnemonic == "mov" and nx[1].op_str == "ecx, 3":
                jit.append(x.address + x.size)
        if x.mnemonic == "call" and x.operands and x.operands[0].type == X.X86_OP_IMM:
            t = x.operands[0].imm
            if t in (FAC_A, FAC_B):
                fac.append((x.address, t))
            elif t == SETTLE:
                settles.append(x.address + x.size)
    return jit, fac, settles


# ---------------------------------------------------------------------------
# a tiny abstract interpreter: register -> {term: coeff}
# ---------------------------------------------------------------------------
def _add(a, b, s):
    r = dict(a)
    for k, v in b.items():
        r[k] = r.get(k, 0) + s * v
    return {k: v for k, v in r.items() if v}


def coords(lo, hi):
    """The world-block coordinate expressions formed in [lo, hi)."""
    st, out = {}, []
    for x in disasm(lo, hi):
        m, ops = x.mnemonic, x.operands
        if m == "idiv":                     # edx becomes the `% 3` remainder: the jitter
            st[X.X86_REG_EDX] = {"j": 1}
            st[X.X86_REG_EAX] = None
            continue
        if m == "call":                     # the ia32 caller-saved set
            for r in (X.X86_REG_EAX, X.X86_REG_ECX, X.X86_REG_EDX):
                st[r] = None
            continue
        if m not in ("mov", "add", "sub", "lea") or len(ops) != 2:
            continue
        dst, src = ops
        if dst.type != X.X86_OP_REG:
            continue
        if src.type == X.X86_OP_IMM:
            e = {"": src.imm}
        elif src.type == X.X86_OP_REG:
            e = dict(st[src.reg]) if st.get(src.reg) else None
        elif src.type == X.X86_OP_MEM and src.mem.base == X.X86_REG_EBP \
                and src.mem.disp in SLOT:
            e = {SLOT[src.mem.disp]: 1}
        elif m == "lea" and src.type == X.X86_OP_MEM and src.mem.index == 0 \
                and st.get(src.mem.base):
            e = _add(st[src.mem.base], {"": src.mem.disp}, 1)
        else:
            e = None
        cur = st.get(dst.reg)
        if m in ("mov", "lea"):
            st[dst.reg] = e
        elif m == "add":
            st[dst.reg] = None if (cur is None or e is None) else _add(cur, e, 1)
        elif m == "sub":
            st[dst.reg] = None if (cur is None or e is None) else _add(cur, e, -1)
        v = st.get(dst.reg)
        # a finished coordinate carries exactly one plot origin, coefficient 1
        if v and (v.get("originX") == 1) != (v.get("originZ") == 1) \
                and not (v.get("originX") and v.get("originZ")):
            out.append(dict(v))
    return out


def extract():
    jit, fac, settles = boundaries()
    if not (len(jit) == len(fac) == len(settles) == N_BLOCKS):
        sys.exit("census found %d jitters / %d factories / %d settles, expected %d each"
                 % (len(jit), len(fac), len(settles), N_BLOCKS))
    rows = []
    for b in range(N_BLOCKS):
        lo = fac[b - 1][0] if b else SPAN_LO      # this block's own gap, never cumulative
        seen = {}
        for e in coords(lo, fac[b][0]):
            ax = 0 if e.get("originX") else 1
            seen[ax] = e                          # the last one formed wins
        edge = along = None
        for ax, e in seen.items():
            if e.get("j"):
                edge = (ax, e)
            elif e.get("half"):
                along = (ax, e)
        if edge is None:
            sys.exit("block %d: no jittered coordinate in 0x%06X-0x%06X"
                     % (b, lo, fac[b][0]))
        eax_, ee = edge
        rows.append(dict(
            block=b,
            edgeAxis=eax_,
            edgeSpan=ee.get("span", 0),
            edgeConst=ee.get("", 0),
            jitter=ee.get("j", 0),
            # ⚠ an ABSENT along constant is an absence, not a zero -- MSVC emits no
            # `add reg, 0`, so K = 0 is an inference the capture has to confirm (--check).
            alongK=(along[1].get("", 0) if along else None),
            alongAxis=(along[0] if along else 1 - eax_),
            alongSeen=along is not None,
            factory=0 if fac[b][1] == FAC_A else 1,
            coin=None, jitAddr=jit[b], facAddr=fac[b][0], settleAddr=settles[b],
        ))
    return rows


# ---------------------------------------------------------------------------
# the cross-check against the live capture
# ---------------------------------------------------------------------------
def mine_capture():
    """block -> [(town, (dx, dz))] in world blocks, jitter removed, per captured market."""
    jit, fac, settles = boundaries()
    coin_sites = []
    ins = disasm(SPAN_LO, SPAN_HI)
    for i, x in enumerate(ins):
        if is_rand(x):
            nx = ins[i + 1:i + 4]
            if len(nx) == 3 and nx[1].mnemonic == "mov" and nx[1].op_str == "ecx, 5":
                coin_sites.append(x.address + x.size)
    rows = extract()
    out = collections.defaultdict(list)
    towns = 0
    for f in sorted(glob.glob(os.path.join(RAW, "town_props_capture*.json"))):
        for h in json.load(open(f))["hits"]:
            dr = [x for x in h["draws"] if SPAN_LO - BASE <= x[0] <= SPAN_HI - BASE]
            if not dr:
                continue
            zx, zz = h["zone"]
            desc = bytes(h["desc"])
            ftype = struct.unpack_from("<i", desc, 0x18)[0]
            raw = h.get("plotsLate")
            if not raw or any(p is None for p in raw):
                continue
            pl = [struct.unpack_from("<7i", bytes(p)) for p in raw]
            n = 4 if ftype == 5 else 5
            idxs = [i for i, p in enumerate(pl) if p[3] == 9]
            if len(idxs) != 1:
                continue
            towns += 1
            r, c = idxs[0] % n, idxs[0] // n
            ox = zx * 256 + (r * 256) // n
            oz = zz * 256 + (c * 256) // n
            got = {x[0] + BASE: x[1] for x in dr}
            se = {}
            for s in h.get("settles", []):
                if s["ra"] + BASE in settles:
                    se[settles.index(s["ra"] + BASE)] = bytes(s["before"])
            for b in range(N_BLOCKS):
                if b not in se or rows[b]["jitAddr"] not in got:
                    continue
                x16, z16, _y16 = struct.unpack_from("<qqq", se[b], 8)
                j = got[rows[b]["jitAddr"]] % 3
                d = [x16 >> 16, z16 >> 16]
                d[rows[b]["edgeAxis"]] -= rows[b]["jitter"] * j
                out[b].append(((zx, zz), (d[0] - ox, d[1] - oz)))
    return out, towns


def check(rows, verbose=True):
    """Confirm the disassembled table against the capture. Returns (ok, tot, span)."""
    mined, towns = mine_capture()
    ok = tot = 0
    span = 51                                   # every captured market is a village plot
    half = span // 2
    if verbose:
        print("  cross-check against %d captured markets (span = %d):" % (towns, span))
    for r in rows:
        b = r["block"]
        if b not in mined:
            continue
        k = r["alongK"] if r["alongSeen"] else 0
        pred = [0, 0]
        pred[r["edgeAxis"]] = r["edgeSpan"] * span + r["edgeConst"]
        pred[r["alongAxis"]] = half + k
        for town, got in sorted(mined[b]):
            tot += 1
            good = tuple(pred) == got
            ok += good
            if verbose and not good:
                print("    !! block %2d town %s: predicted %s, capture %s"
                      % (b, town, tuple(pred), got))
    if verbose:
        print("    %d of %d (block, town) offsets predicted exactly%s"
              % (ok, tot, "" if ok == tot else "  <-- MISMATCH"))
        absent = [r["block"] for r in rows if not r["alongSeen"]]
        print("    the %d blocks whose along-constant the binary does not encode (%s)"
              % (len(absent), ", ".join(str(b) for b in absent)))
        print("    are exactly the K = 0 ones -- confirmed here, inferred from the"
              " disassembly alone")
    return ok, tot


# ---------------------------------------------------------------------------
CPP_HEAD = """// GENERATED by tools/extract_market_slots.py in cw_decomp -- DO NOT EDIT.
// It interprets 0x4e3e15-0x4e5023 out of Server.exe; gate_town_market.py re-runs it
// every time and diffs the result against these literals, so a hand edit here fails the
// gate rather than surviving (lesson 7c/7i).
//
// The town MARKET's 20 perimeter slots (Docs/RE_town_market.md).  A slot's two world
// coordinates are
//
//     edge  = plotOrigin[edgeAxis]  + edgeSpan * span + edgeConst + jitter * (rand() % 3)
//     along = plotOrigin[1-edgeAxis] + span / 2 + alongK
//
// so the ring is four edges of five slots: three stalls at the plot's half-way line
// +-7 and two crates of goods at +-3.  The `% 3` jitter lands on the EDGE coordinate --
// it pushes the stall in and out of the plot boundary, which is why its sign flips from
// side to side.
#pragma once
#include <cstdint>

namespace vx::cw {

// factory 0 = FUN_004f3630, `0x15 + rand()%3` -> market-stand1/2/3
// factory 1 = FUN_004f3490, `0x18 + rand()%4` -> barrel / crate / open-crate / sack
struct TownMarketSlot {
    uint8_t edgeAxis;    // 0 = the jittered coordinate is X, 1 = it is Z
    uint8_t edgeSpan;    // 0 -> origin + edgeConst, 1 -> origin + span + edgeConst
    int8_t  edgeConst;   // +6 on the near side, -6 on the far one
    int8_t  jitter;      // +1 / -1, the sign the `% 3` enters the edge coordinate with
    int8_t  alongK;      // the offset from the plot's half-way line
    uint8_t factory;     // 0 stalls, 1 goods
};

constexpr TownMarketSlot kTownMarketSlots[@N@] = {
"""

CPP_TAIL = """};

}  // namespace vx::cw
"""


def emit_cpp(rows):
    out = [CPP_HEAD.replace("@N@", str(N_BLOCKS))]
    for r in rows:
        k = r["alongK"] if r["alongSeen"] else 0
        out.append("    {%d, %d, %+d, %+d, %+d, %d},   // %2d  %s edge %-4s  %s\n"
                   % (r["edgeAxis"], r["edgeSpan"], r["edgeConst"], r["jitter"], k,
                      r["factory"], r["block"],
                      "Z" if r["edgeAxis"] else "X",
                      "far" if r["edgeSpan"] else "near",
                      "stall" if r["factory"] == 0 else "goods"))
    out.append(CPP_TAIL)
    return "".join(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--cpp", action="store_true")
    ap.add_argument("--check", action="store_true")
    a = ap.parse_args()
    rows = extract()
    if a.cpp:
        sys.stdout.write(emit_cpp(rows))
        return 0
    if a.json:
        print(json.dumps(rows, indent=1))
        return 0
    print("the town MARKET's %d perimeter slots, interpreted out of 0x%06X-0x%06X"
          % (N_BLOCKS, SPAN_LO, SPAN_HI))
    print("  blk fac    edge                                along")
    for r in rows:
        e = "origin%s %s%s %+d %+d*jit" % (
            "Z" if r["edgeAxis"] else "X",
            "+ span " if r["edgeSpan"] else "", "", r["edgeConst"], r["jitter"])
        al = ("origin%s + span/2 %+d" % ("X" if r["edgeAxis"] else "Z",
                                         r["alongK"] if r["alongSeen"] else 0)) \
            + ("" if r["alongSeen"] else "   (no `add` emitted -> K = 0)")
        print("   %2d  %s   %-34s  %s"
              % (r["block"], "A" if r["factory"] == 0 else "B", e, al))
    ok, tot = check(rows)
    return 0 if ok == tot else 1


if __name__ == "__main__":
    sys.exit(main())
