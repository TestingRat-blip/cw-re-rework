#!/usr/bin/env python3
"""Gate: the landform 742-loop iterates X-OUTER, Z-INNER -- and the switch's
per-case inner draws are what proves it.

    python tools/gate_zone_landform_order.py       # ~20 min, no server

Why this needed its own gate
----------------------------
Transposing the two loops does NOT change the SET of qualifying tiles, so it does not
change the keep-roll COUNT. Every landform check in this project until now counted
draws or replayed a zone whose tiles all agreed, so all of them stayed green with the
loop the wrong way round (`cw_decoration.landform_pass` ran Z-outer/X-inner).

What it does change is WHICH tile each keep roll lands on -- and a tile that keeps then
runs a 4-way switch whose cases 0 and 1 spend inner draws only when the tile passes
`surf <= sh` (0x51a24b / 0x51a3c2). So the inner draws are a per-tile observable, and
the capture has 161 of them across 18 odd zones. Under the port's Z-outer order the
predicate agreed 106 times -- WORSE than always answering "no" (112) -- i.e. it was
uncorrelated, which is the signature of a scrambled tile order rather than a wrong
formula. Under X-outer it is 161/161.

The binary says the same thing at the loop tail, which this gate byte-checks:
  0x51a902  inc ecx / mov [ebp-0x12c8], ecx / cmp ecx, eax / jl 0x518bc0   <- INNER (Z)
  0x51a91e  inc edx / mov [ebp-0x1318], edx / cmp edx, [ebp-0x1370] / jmp 0x518b00 <- OUTER (X)
and 0x51a1fa reads [ebp-0x1318] as writeVoxel's X argument (the same slot the 2026-07-26
G5 stride correction identified -- that fix corrected the stride formula `(X + 3*Z) % 7`
and left the iteration order, which is why this survived it).

See Docs/RE_zone_landform.md.
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

# rand return addresses as the zone_props2 rig stamps them (RVA, image base 0x400000)
R_KEEP, R_SEL = 0x11A21A, 0x11A22F
R_C0A, R_C0B = 0x11A266, 0x11A37E
R_C1A, R_C1B = 0x11A4EE, 0x11A50E
SITE = {R_KEEP: "keep", R_SEL: "sel", R_C0A: "c0a", R_C0B: "c0b",
        R_C1A: "c1a", R_C1B: "c1b"}


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

    # ---- 1. the two back-edges, from Server.exe's own bytes ----------------------
    # 0051a902  41                 inc ecx
    # 0051a903  0500010000         add eax, 0x100
    # 0051a908  898d38edffff       mov dword ptr [ebp - 0x12c8], ecx
    # 0051a90e  3bc8               cmp ecx, eax
    # 0051a910  0f8caae2ffff       jl  0x518bc0
    check(img_read(0x51A902, 20) ==
          bytes.fromhex("410500010000898d38edffff3bc80f8caae2ffff"),
          "the INNER back-edge at 0x51a902 is not the [ebp-0x12c8] (Z) loop")
    # 0051a91e  42                 inc edx
    # 0051a91f  8995e8ecffff       mov dword ptr [ebp - 0x1318], edx
    # 0051a925  3b9590ecffff       cmp edx, dword ptr [ebp - 0x1370]
    # 0051a92b  7d0b               jge 0x51a938
    check(img_read(0x51A91E, 15) ==
          bytes.fromhex("428995e8ecffff3b9590ecffff7d0b"),
          "the OUTER back-edge at 0x51a91e is not the [ebp-0x1318] (X) loop")
    # 0051a933  e9c8e1ffff         jmp 0x518b00   -- the outer body, above the inner's 0x518bc0
    check(img_read(0x51A933, 5) == bytes.fromhex("e9c8e1ffff"),
          "the outer loop does not re-enter at 0x518b00")

    # [ebp-0x1318] is writeVoxel's X: G5 computes X + 3*Z from it and [ebp-0x12c8].
    # 0051a1fa  8b85e8ecffff       mov eax, dword ptr [ebp - 0x1318]
    # 0051a200  8d0448             lea eax, [eax + ecx*2]
    # 0051a203  03c1               add eax, ecx
    check(img_read(0x51A1FA, 11) == bytes.fromhex("8b85e8ecffff8d044803c1"),
          "G5's X + 3*Z is not built from [ebp-0x1318] + 3*[ebp-0x12c8]")

    # the case-0 and case-1 inner-draw gate: [ebp-0x12f4] (surf) vs [ebp-0x131c] (sh)
    for va in (0x51A24B, 0x51A3C2):
        check(img_read(va, 15) ==
              bytes.fromhex("f30f10850cedffff0f2f85e4ecffff"),
              "the case-0/1 gate at 0x%x is not `comiss [ebp-0x12f4], [ebp-0x131c]`" % va)

    # ---- 2. the live half -------------------------------------------------------
    import cw_seed                                              # noqa: E402
    cw_seed.configure(SEED)
    import cw_gate                                              # noqa: E402
    cw_gate.set_features(True)
    # NB: import re_landform through cw_decoration. A bare `import re_landform` executes
    # the file a SECOND time (cw_decoration loads it by path without registering it in
    # sys.modules) and its module-level cw_seed.configure(444444) silently repoints the
    # whole toolkit.
    import cw_decoration                                        # noqa: E402
    R = cw_decoration.re_landform
    if R.SEED != cw_seed.SEED:
        R.set_seed(cw_seed.SEED)

    cap = json.load(open(os.path.join(RAW, "zone_props2_capture.json"),
                         encoding="utf-8"))
    x_ok = x_tot = z_ok = z_tot = 0
    zones = 0
    for h in cap["zones"]:
        zx, zz = h["zone"]
        if ((zx + zz) & 1) == 0:
            continue
        tags = [(SITE[d[0]], d[1]) for d in h["draws"] if d[0] in SITE]
        if not tags:
            continue
        zones += 1

        # every qualifying tile of the zone, once
        ox, oz = zx << 8, zz << 8
        tiles = []
        for wx in range(ox, ox + 256):
            for wz in range(oz, oz + 256):
                if ((wx + 3 * wz) % 7) != 0:            # G5 spatial stride
                    continue
                q, gate = R.draws_info(wx, wz)
                if q:
                    tiles.append((wx, wz, bool(gate)))

        keeps = sum(1 for t, _ in tags if t == "keep")
        check(keeps == len(tiles),
              "zone %d,%d: %d live keep rolls but %d qualifying tiles -- the G1..G5 "
              "predicate is wrong, not just the order" % (zx, zz, keeps, len(tiles)))

        # the live case-0/1 decisions, indexed by keep-roll ordinal
        dec = []
        k = -1
        for i, (tag, val) in enumerate(tags):
            if tag == "keep":
                k += 1
            elif tag == "sel":
                case = val % 4
                if case in (0, 1):
                    nxt = tags[i + 1][0] if i + 1 < len(tags) else None
                    dec.append((k, case, nxt == ("c0a" if case == 0 else "c1a")))

        x_order = sorted(tiles, key=lambda t: (t[0], t[1]))     # X outer, Z inner
        z_order = sorted(tiles, key=lambda t: (t[1], t[0]))     # the transposition
        for (k, case, live_gate) in dec:
            if k < len(x_order):
                x_tot += 1
                x_ok += (x_order[k][2] == live_gate)
            if k < len(z_order):
                z_tot += 1
                z_ok += (z_order[k][2] == live_gate)
        sys.stdout.flush()

    # every inner-draw decision must be predicted, on the right order
    check(x_ok == x_tot,
          "X-outer/Z-inner predicts only %d of %d live case-0/1 inner-draw decisions"
          % (x_ok, x_tot))
    ok += x_ok
    fail += x_tot - x_ok
    # ...and the transposition must NOT, or the gate proves nothing
    check(z_ok < z_tot,
          "the Z-outer transposition also predicts every decision (%d/%d) -- this gate "
          "cannot tell the two orders apart on this capture" % (z_ok, z_tot))

    print("odd zones with landform draws           : %d" % zones)
    print("live case-0/1 inner-draw decisions      : %d" % x_tot)
    print("  X-outer, Z-inner (the binary's order) : %d/%d" % (x_ok, x_tot))
    print("  Z-outer, X-inner (what the port had)  : %d/%d" % (z_ok, z_tot))
    print()
    for n in notes[:20]:
        print("  FAIL:", n)
    print("%d/%d" % (ok, ok + fail))
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
