#!/usr/bin/env python3
"""Gate: the LANDFORM pass, replayed ab initio from the zone seed.

    python tools/gate_zone_landform.py    # reads raw/zone_props2_capture_*.json, no server

The landform 742-loop is the FIRST stage of the zone pre-chain: a 256x256 scan whose
qualifying columns (G1..G5, `tools/cubeworld_re/re_landform.py`) each spend a keep roll,
and on a 1-in-30 keep a selector plus per-case draws. Every zone downstream of it reads
the wrong draw if the qualifying-tile SET is wrong, so the predicate is load-bearing far
beyond its own 16 draws.

It was wrong, silently, in every type-6/0xd feature cell. `CwZoneScatter::landformQualifies`
found NO qualifying tile in zone (32795,32748) where the live server spends 15 keep rolls
and 1 selector, so cwgen called the zone Exact when it is not. Cause: the zone builder
carries TWO land masks and the ports had one.

  * [ebp-0x12d8] = FUN_00523d80's own return. It multiplies `term_a` in surfH, and
    `inner` and `fb` in the landform predicate.
  * [ebp-0x12f4] = that value PLUS a deform the builder applies itself for cell types
    6 and 0xd only (0x518e7c-0x518fd3): `+ smoothstep(clamp(noise(x*.01+985, z*.01+98584)
    *1.3 + 1)) * W * 0.4`, W = 1 - (1 - clamp(2*(1-falloff)^2, 1)^2)^2. It multiplies the
    ROUGHNESS -- so it feeds `lr`, hence surfH, hence the slope weight and the cover
    material (0x5192fa, 0x51904e).

Dropping it left surfH short inside every 6/0xd cell: the tallest relief in zone
(32795,32748) came out 1.71 against a 2.0 cliff threshold, so nothing qualified.

This gate replays the pass for the captured zones and checks the draw VALUES, in order,
against the live stream -- not a count. Zone (32795,32748) is the type-6 case; (32792,32748)
is the type-6 zone with ZERO qualifying tiles, which keeps the predicate honest in the
other direction (a predicate that over-fires would spend draws there and fail).

See Docs/RE_zone_landform.md.
"""
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
RAW = os.path.join(ROOT, "raw")
sys.path.insert(0, os.path.join(ROOT, "..", "cw_rederive"))

import cw_seed                                    # noqa: E402

LANDFORM_SITES = (0x51A21A, 0x51A22F, 0x51A266, 0x51A37E, 0x51A4EE)

# capture file -> (zoneX, zoneZ, descriptor type, expected landform draws)
CAPTURES = [
    ("zone_props2_capture_32795_32748.json", 32795, 32748, 6, 16),
    ("zone_props2_capture_32792_32748.json", 32792, 32748, 6, 0),
]


class Tap:
    """An LCG that records what the pass drew."""

    def __init__(self, seed):
        self.s = seed & 0xFFFFFFFF
        self.vals = []

    def rand(self):
        self.s = (self.s * 214013 + 2531011) & 0xFFFFFFFF
        v = (self.s >> 16) & 0x7FFF
        self.vals.append(v)
        return v


def main():
    seed = None
    fail = pas = 0
    msgs = []

    def chk(cond, msg):
        nonlocal fail, pas
        if cond:
            pas += 1
        else:
            fail += 1
            msgs.append(msg)

    import cw_decoration                          # noqa: E402  (configures the toolkit)

    for fname, zx, zz, want_type, want_draws in CAPTURES:
        path = os.path.join(RAW, fname)
        if not os.path.exists(path):
            print("  skip %s (capture missing)" % fname)
            continue
        cap = json.load(open(path))
        if seed is None:
            seed = cap["seed"]
            base = cw_seed.configure(seed)
            import cw_gate, cw_featuregrid
            cw_gate.set_features(True)
            cw_featuregrid.set_base(base)
        z = cap["zones"][0]
        tag = "(%d,%d)" % (zx, zz)

        # the live landform draws: the pre-chain's first stage, so they are the leading
        # run of the record -- take every draw up to the first non-landform return address.
        live = []
        for r in z["draws"]:
            if (r[0] + 0x400000) not in LANDFORM_SITES:
                break
            live.append(r[1])
        chk(len(live) == want_draws,
            "%s: live landform draws %d, expected %d" % (tag, len(live), want_draws))

        import cw_featuregrid
        cell = cw_featuregrid.cell_for_column(zx * 256 + 128, zz * 256 + 128)
        chk(cell is not None and cell["type"] == want_type,
            "%s: descriptor type %s, expected %d"
            % (tag, cell["type"] if cell else None, want_type))

        t = Tap((base + zz * 0x10000 + zx) & 0xFFFFFFFF)
        bigrock = cw_decoration.landform_pass(t, zx, zz)
        chk(len(t.vals) == len(live),
            "%s: port drew %d, live %d" % (tag, len(t.vals), len(live)))
        for i, (g, w) in enumerate(zip(t.vals, live)):
            chk(g == w, "%s: draw #%d port %d live %d" % (tag, i, g, w))
        print("  %s type %d: %d landform draws replayed ab initio, bigrock list %d"
              % (tag, want_type, len(t.vals), bigrock))

    print("landform pass, from the seed: %d/%d checks" % (pas, pas + fail))
    for m in msgs:
        print("  MISS " + m)
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
