#!/usr/bin/env python3
"""GATE: the zone builder's ODD-PARITY SITE LOOP, and the list it feeds.

    python tools/gate_zone_siteloop.py

Reads raw/zone_props2_capture.json (56 zones, every draw inside the builder stamped
with its return address) and Server.exe's own bytes. No server needed.

What it establishes
-------------------
1. The builder's site std::list at `[ebp-0x1378]` is constructed EMPTY
   (`_Mysize := 0` at 0x51a9a8) and receives exactly ONE insert in the whole body,
   at 0x51cd56, right after the odd-parity site loop accepts. Nothing else writes
   the slot. So the list holds at most that one site -- it never holds feature-cell
   centres, which is what BOTH ports were putting in it.

2. Live confirmation of (1): the tree loop's 40-block reject (0x51dfd0) fires in
   every ODD zone and in no EVEN zone -- including (33020,32660), the one zone of
   the 56 that holds a feature cell's CENTRE. An even zone with a feature centre
   inside it rejects nothing.

3. The site loop RETRIES. `FUN_004e0740` spends 1 draw (0x4e0825, `rand()&3`) and
   then sweeps a 3x3 anchor grid through `Prop_settleOnTerrain`; if none settles it
   returns false and the caller draws a fresh candidate, up to 10 times. So an
   iteration costs 3 draws when it fails (2 position + 1) and 11 when it accepts
   (+4 at 0x4e0a55, +4 at 0x4e0b20). Both ports hardcode "accept on iteration 1".

The gate asserts the arithmetic per zone, so a future port that models the retry can
be checked against it directly.
"""
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.normpath(os.path.join(HERE, "..", "raw"))
GAME = r"C:\Users\asuna\Desktop\RatRealms\CubegameV1"

# --- rvas, as the zone_props2 rig stamps them (image base 0x400000) ----------------
R_CAND_Z = 0x11CBC1        # the retry loop's FIRST position draw  (Z)
R_CAND_X = 0x11CBFC        # its second                            (X)
R_ROT = 0x0E082B           # FUN_004e0740's rand()&3 (call at 0x4e0825) -- one per
                           # iteration that gets past the terrain-height gate
R_ACC_A = 0x0E0A55         # accept: 4 draws
R_ACC_B = 0x0E0B20         # accept: 4 draws
R_TREE_SIZE = 0x11DD8C
R_TREE_HEIGHT = 0x11DDDB
R_TREE_SP1 = 0x11E063

VA = 0x400000


def img_read(va, n):
    data = open(os.path.join(GAME, "Server.exe"), "rb").read()
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    optsz = struct.unpack_from("<H", data, pe + 20)[0]
    base = struct.unpack_from("<I", data, pe + 24 + 28)[0]
    off = pe + 24 + optsz
    for _ in range(nsec):
        sva, ptr, rsz = (struct.unpack_from("<I", data, off + 12)[0],
                         struct.unpack_from("<I", data, off + 20)[0],
                         struct.unpack_from("<I", data, off + 16)[0])
        sva += base
        if sva <= va < sva + rsz:
            d = va - sva
            return data[ptr + d:ptr + d + n]
        off += 40
    return None


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

    # ---- 1. the list is constructed empty and inserted into exactly once ----------
    # 0051a9a8  c7858cecffff00000000   mov dword ptr [ebp-0x1374], 0     (_Mysize := 0)
    check(img_read(0x51A9A8, 10) == bytes.fromhex("c7858cecffff00000000"),
          "the _Mysize := 0 store at 0x51a9a8 is not where it was read")
    # 0051a9b2  e8 a9d1fdff            call 0x4f7b60                     (_Buynode)
    check(img_read(0x51A9B2, 5) == bytes.fromhex("e8a9d1fdff"),
          "the list _Buynode call at 0x51a9b2 moved")
    # 0051cd61  c7858cecffff01000000   mov dword ptr [ebp-0x1374], 1     (_Mysize := 1)
    check(img_read(0x51CD61, 10) == bytes.fromhex("c7858cecffff01000000"),
          "the _Mysize := 1 store at 0x51cd61 moved")
    # nothing between the ctor and the type-6 knoll grid's iteration touches the slot:
    # the only writers of [ebp-0x1378] in 0x518630-0x522000 are 0x51a9b7 (the ctor's
    # result) -- everything else is `mov reg, [ebp-0x1378]` / `cmp`.
    body = img_read(0x518630, 0x522000 - 0x518630)
    pat = bytes.fromhex("88ecffff")                 # the disp32 of [ebp-0x1378]
    writers = []
    i = 0
    while True:
        i = body.find(pat, i + 1)
        if i < 0:
            break
        va = 0x518630 + i - 2
        writers.append(va)
    # 0x51a9b7 is `mov [ebp-0x1378], eax` (opcode 89 85); every other hit is a read
    stores = [v for v in writers if img_read(v, 2) == b"\x89\x85"]
    check(stores == [0x51A9B7],
          "expected exactly one store to [ebp-0x1378]; found %s"
          % [hex(v) for v in stores])

    # ---- 2/3. the live sweep ------------------------------------------------------
    cap = json.load(open(os.path.join(RAW, "zone_props2_capture.json"),
                        encoding="utf-8"))
    odd_retry = odd_total = 0
    even_zones = odd_zones = 0
    for h in cap["zones"]:
        zx, zz = h["zone"]
        ras = [d[0] for d in h["draws"]]
        odd = ((zx + zz) & 1) == 1

        iters = sum(1 for r in ras if r == R_CAND_Z)
        rots = sum(1 for r in ras if r == R_ROT)
        acc_a = sum(1 for r in ras if r == R_ACC_A)
        acc_b = sum(1 for r in ras if r == R_ACC_B)
        xs = sum(1 for r in ras if r == R_CAND_X)

        # the tree loop's site reject: a candidate whose `height` draw is followed by
        # the next candidate's `size` draw instead of `sp1`
        idx = [i for i, r in enumerate(ras) if r == R_TREE_SIZE]
        rej = sum(1 for i in idx
                  if i + 2 < len(ras) and ras[i + 1] == R_TREE_HEIGHT
                  and ras[i + 2] != R_TREE_SP1)

        if not odd:
            even_zones += 1
            check(iters == 0 and rots == 0,
                  "even zone %d,%d ran the site loop (%d iters)" % (zx, zz, iters))
            check(rej == 0,
                  "even zone %d,%d rejected %d tree candidates -- the list should be "
                  "empty there" % (zx, zz, rej))
            continue

        odd_zones += 1
        accepted = 1 if acc_a else 0
        check(xs == iters, "zone %d,%d: %d Z draws but %d X draws" % (zx, zz, iters, xs))
        # every iteration that gets past the h<=0.02 gate spends its rand()&3
        check(rots == iters,
              "zone %d,%d: %d iterations but %d rotation draws (an iteration was "
              "rejected by the terrain-height gate, which spends 0 draws)"
              % (zx, zz, iters, rots))
        check(acc_a == 4 * accepted and acc_b == 4 * accepted,
              "zone %d,%d: accept draws %d/%d, expected %d/%d"
              % (zx, zz, acc_a, acc_b, 4 * accepted, 4 * accepted))
        check(iters <= 10, "zone %d,%d ran %d iterations, past the cap of 10"
              % (zx, zz, iters))
        check(accepted or iters == 10,
              "zone %d,%d accepted nothing after only %d iterations" % (zx, zz, iters))
        # the site reject fires iff a site was accepted
        check((rej > 0) == bool(accepted),
              "zone %d,%d: %d tree rejects but accepted=%d" % (zx, zz, rej, accepted))

        odd_total += 1
        if iters != 1:
            odd_retry += 1

    print("list construction + the single insert : byte-checked")
    print("even zones (no site loop, no reject)  : %d" % even_zones)
    print("odd zones                             : %d" % odd_zones)
    print("odd zones that RETRY (ports assume 1) : %d of %d" % (odd_retry, odd_total))
    print()
    for n in notes[:20]:
        print("  FAIL:", n)
    print("%d/%d" % (ok, ok + fail))
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
