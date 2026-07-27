#!/usr/bin/env python3
"""Gate: the RIVER/LAKE BED pass (0x51bbf9-0x51c276) -- the last unmodelled stage of
the zone builder's pre-chain.

    python tools/gate_zone_bed.py          # ~3 min, no server

What the pass is
----------------
Two 256x256 column nests run between the gen-scatter and the bigrock consumer. The
first (0x51b470, gated on FUN_0052d990 <= 0.02) is the SHORE/road carve; the second
(0x51bc60, gated on the river climate gate FUN_0052cd50 <= 0.02) is the RIVER carve,
and it holds the pass's only rand site:

    0x51c094   rand() % 200 == 0  ->  append (X, Z, bed_y) to the mat-6 list

spent exactly once per column that WRITES a mat-3 riverbed voxel. An exhaustive
rand-site census of 0x51b467-0x51c313 -- resolving `call <reg>` as well as
`call [&rand]`, the same census discipline as gate_zone_prechain -- finds that site
and no other, which is what makes the shore nest provably stream-free.

Which columns write a bed
-------------------------
    gate <= 0.02  and  road <= 0.95            (the two entry gates)
    carve_top > terrace                        (no water was just written over bed_y)
    the block already at bed_y is not water and not 0x40

`carve_top > terrace` is a pure function of the clamped base height: with
frac = (max(bh,0) mod 5)/5, the bed fires iff frac <= 0.1 or frac >= 0.7. Seven of
the eight captured zones are predicted exactly by that alone.

★ The eighth is what pinned the water term. Zone (32610,33111) over-counts by 1,540
on geometry alone -- and 1,540 is exactly the number of its columns whose bed_y is
above the terrain record AND at or below sea level, i.e. sitting in the OCEAN. The
pass will not bury standing water. No other captured zone has a single such column,
so seven green zones could not have found it: the same shape as "a gate that only
ever ran on flat ground does not cover a slope" (RE_zone_tail.md).

What this gate checks
---------------------
  1. Server.exe's own bytes for the rand site, the two entry gates, the water/0x40
     tests, the `% 200` divisor, the 3-draws-per-entry consumer, and both back-edges
     (X-outer / Z-inner).
  2. Per zone, for all 8 captured zones that run the pass: the bed-draw COUNT, the
     append COUNT, and that every live draw value with `% 200 == 0` is an append.

See Docs/RE_zone_tail.md.
"""
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
RAW = os.path.join(ROOT, "raw")
GAME = r"C:\Users\asuna\Desktop\RatRealms\CubegameV1"
sys.path.insert(0, os.path.normpath(os.path.join(ROOT, "..", "cw_rederive")))

SEED = 42069
R_BED = 0x11C09A                       # rand return addr as the rig stamps it
R_MAT6 = (0x11C313, 0x11C32A, 0x11C341)


def img_read(va, n):
    data = open(os.path.join(GAME, "Server.exe"), "rb").read()
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    optsz = struct.unpack_from("<H", data, pe + 20)[0]
    base = struct.unpack_from("<I", data, pe + 24 + 28)[0]
    off = pe + 24 + optsz
    for _ in range(nsec):
        sva = base + struct.unpack_from("<I", data, off + 12)[0]
        rsz = struct.unpack_from("<I", data, off + 16)[0]
        ptr = struct.unpack_from("<I", data, off + 20)[0]
        if sva <= va < sva + rsz:
            return data[ptr + va - sva:ptr + va - sva + n]
        off += 40
    return None


def rand_census(lo, hi):
    """Every rand call site in [lo,hi), following &rand parked in a register."""
    import capstone
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    holds, sites = set(), []
    for i in md.disasm(img_read(lo, hi - lo), lo):
        if i.mnemonic == "mov" and "," in i.op_str:
            dst = i.op_str.split(",")[0].strip()
            if "dword ptr [0x5582f4]" in i.op_str:
                holds.add(dst)
            else:
                holds.discard(dst)
        if i.mnemonic == "call" and ("[0x5582f4]" in i.op_str
                                     or i.op_str.strip() in holds):
            sites.append(i.address)
    return sites


def main():
    ok = fail = 0
    notes = []

    def check(cond, what):
        nonlocal ok, fail
        if cond:
            ok += 1
        else:
            fail += 1
            notes.append(what)

    # ---- 1. the binary -------------------------------------------------------
    # 0051bc65  e8e6100100   call 0x52cd50            <- the river climate gate
    check(img_read(0x51BC65, 5) == bytes.fromhex("e8e6100100"),
          "0x51bc65 does not call the climate gate FUN_0052cd50")
    # 0051bc78  mulss xmm0, [0x558828]  (=50.0) ; 0051bc88 subss xmm1, xmm0
    # 0051bc9b  0f828e050000  jb 0x51c22f            <- 1 - 50*gate < 0 -> next column
    check(img_read(0x51BC9B, 6) == bytes.fromhex("0f828e050000"),
          "the gate reject at 0x51bc9b is not `jb <inner loop tail>`")
    # 0051bcaf  call 0x4d19f0 (road) ; 0051bcc2 comiss xmm0, [0x5739c8] (=0.95)
    # 0051bcc9  0f8760050000  ja 0x51c22f
    check(img_read(0x51BCAF, 5) == bytes.fromhex("e83c5dfbff")
          and img_read(0x51BCC9, 6) == bytes.fromhex("0f8760050000"),
          "the road gate at 0x51bcaf/0x51bcc9 is not `FUN_004d19f0 > 0.95 -> skip`")
    check(img_read(0x5739C8, 4) == struct.pack("<f", 0.95),
          "the road threshold at 0x5739c8 is not 0.95")
    check(struct.unpack("<f", img_read(0x558828, 4))[0] == 50.0,
          "the gate scale at 0x558828 is not 50.0")

    # the bed write's two guards, then the draw
    # 0051bfea  8a4003 241f 3c02  mov al,[eax+3] / and al,0x1f / cmp al,2
    # 0051bff1  0f8419010000     je 0x51c110              <- already WATER -> no bed
    check(img_read(0x51BFEA, 13) == bytes.fromhex("8a4003241f3c020f8419010000"),
          "the water test at 0x51bfea is not `(block[3] & 0x1f) == 2 -> skip`")
    # 0051c011  f6400340  test byte ptr [eax+3], 0x40 / 0051c015 jne 0x51c110
    check(img_read(0x51C011, 10) == bytes.fromhex("f64003400f85f5000000"),
          "the 0x40 test at 0x51c011 is not `-> skip`")
    # 0051c08f  call writeVoxel(mat 3) ; 0051c094 call [rand] ; 0051c09b idiv [ebp-0x12dc]
    check(img_read(0x51C082, 7) == bytes.fromhex("c685efebffff03"),
          "the riverbed voxel written at 0x51c08f is not material 3")
    check(img_read(0x51C094, 13) ==
          bytes.fromhex("ff15f482550099f7bd24edffff85d2"[:26]),
          "0x51c094 is not `call [&rand] / cdq / idiv [ebp-0x12dc]`")
    check(img_read(0x51C0A1, 4) == bytes.fromhex("85d2756b"),
          "the append gate at 0x51c0a1 is not `test edx,edx / jne <skip>` (remainder 0)")
    # 0051bc3e  c78524edffffc8000000   mov dword ptr [ebp - 0x12dc], 0xc8
    check(img_read(0x51BC3E, 10) == bytes.fromhex("c78524edffffc8000000"),
          "the divisor loaded into [ebp-0x12dc] before the nest is not 200")

    # exactly ONE rand site in both nests -> the shore nest is stream-free
    sites = rand_census(0x51B467, 0x51C313)
    check(sites == [0x51C094, 0x51C30D],
          "the rand census over 0x51b467-0x51c313 found %s, not just the bed draw"
          % [hex(s) for s in sites])

    # the consumer: three `rand()%3 + 2` in a row, once per list entry
    for va in (0x51C30D, 0x51C324, 0x51C33B):
        check(img_read(va, 14)[:6] == bytes.fromhex("ff15f4825500")
              and img_read(va + 6, 8)[:8] == bytes.fromhex("99b903000000f7f9"),
              "the consumer draw at 0x%x is not `rand() %% 3`" % va)
    check(img_read(0x51C31B, 3) == bytes.fromhex("8d4202"),
          "the consumer radius at 0x51c31b is not `remainder + 2`")

    # the nest's back-edges: X outer ([ebp-0x12e4] <- [ebp-0x1358], bound [ebp-0x1370]),
    # Z inner ([ebp-0x12cc] <- [ebp-0x132c], bound +0x100)
    check(img_read(0x51C22F, 33) == bytes.fromhex(
        "8b8534edffff8b95d4ecffff8b8d1cedffff4081c200010000898534edffff3bc2"),
          "the INNER back-edge at 0x51c22f is not the [ebp-0x12cc] (Z) loop")
    check(img_read(0x51C256, 13) == bytes.fromhex("41898d1cedffff3b8d90ecffff"),
          "the OUTER back-edge at 0x51c256 is not the [ebp-0x12e4] (X) loop")
    # [ebp-0x12e4] is writeVoxel's X argument (pushed last of the two coords)
    check(img_read(0x51C07C, 19) == bytes.fromhex(
        "ffb534edffffc685efebffff03ffb51cedffff"),
          "writeVoxel's X argument at 0x51c07c is not [ebp-0x12e4]")

    # ---- 2. the live half ----------------------------------------------------
    import cw_seed                                              # noqa: E402
    cw_seed.configure(SEED)
    import cw_gate                                              # noqa: E402
    cw_gate.set_features(True)
    import cw_forest                                            # noqa: E402
    from cw_genscatter import LCG                               # noqa: E402
    # cw_forest pins SEED/BASE to 444444 at import (it is the capture world's tree
    # oracle). Repoint both, as gate_zone_siteloop does -- the bed pass reads BASE
    # for the climate gate and the base height, so a stale BASE answers about the
    # wrong world entirely. Third instance of the seed-at-import bug in this repo.
    cw_forest.SEED = SEED
    cw_forest.BASE = cw_seed.base_for_seed(SEED)

    cap = json.load(open(os.path.join(RAW, "zone_props2_capture.json"),
                         encoding="utf-8"))
    live = {}
    for h in cap["zones"]:
        bed = [d[1] for d in h["draws"] if d[0] == R_BED]
        app = [d for d in h["draws"] if d[0] == R_MAT6[0]]
        if bed:
            live[tuple(h["zone"])] = (bed, len(app))
    check(len(live) == 8, "expected 8 captured zones running the bed pass, got %d"
          % len(live))

    class ReplayLCG(LCG):
        """Hands the port the zone's OWN recorded bed draws, in order, so the append
        list is decided by the live values -- then the port's appends must land on
        exactly the recorded ordinals, not merely add up to the same total."""
        __slots__ = ("vals", "i")

        def __init__(self, vals):
            LCG.__init__(self, 0)
            self.vals, self.i = vals, 0

        def rand(self):
            v = self.vals[self.i] if self.i < len(self.vals) else -1
            self.i += 1
            return v

    for (zx, zz), (bed, napp) in sorted(live.items()):
        store = cw_forest.Store(zx, zz)
        lcg = ReplayLCG(bed)
        appended = cw_forest.river_bed_pass(zx, zz, lcg, store)
        check(lcg.i == len(bed),
              "zone %d,%d: port spends %d bed draws, live spends %d"
              % (zx, zz, lcg.i, len(bed)))
        # the live values' own arithmetic: a draw is an append iff value % 200 == 0
        zeros = sum(1 for v in bed if v % 200 == 0)
        check(zeros == napp,
              "zone %d,%d: %d live draws are 0 mod 200 but %d appends were recorded"
              % (zx, zz, zeros, napp))
        check(len(appended) == napp,
              "zone %d,%d: port appends %d entries on the live draw stream, live %d"
              % (zx, zz, len(appended), napp))
        print("  %-14s bed %6d/%-6d  appends %3d/%-3d"
              % ("%d,%d" % (zx, zz), lcg.i, len(bed), len(appended), napp))

    print("\ngate_zone_bed: %d ok, %d FAIL" % (ok, fail))
    for n in notes:
        print("  FAIL:", n)
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
