#!/usr/bin/env python3
"""Gate: the region's per-zone SITE-KIND grid, derived from the seed.

`RE_zone_emitters_ac.md` found this table because emitters A and C both gate on it --
`region + idx*16 + 0x18`, `idx = (zx%64)*64 + (zz%64)`, 4096 entries per region -- and
had to read it live:

> ⚠ **The grid itself is read live, not re-derived.** [...] re-deriving the grid from the
> seed is left open.

This closes that. The grid is written by **`FUN_0050e080`**, the feature generator that
`cw_featuregen` already reproduces bit-exact -- the same lesson as the dungeon `counter`:
the answer was in the port, not the binary. A byte scan of the whole image finds exactly
six stores of a site kind, all inside that one function:

| store | site | kind |
|---|---|---|
| `c6 44 18 18 03` | `0x50ec3f` | 3 -- dungeon |
| `c6 44 f3 18 04` | `0x50f3a2` | 4 -- runestone circle |
| `c6 44 c3 18 01` x4 | `0x50fd5d/7d/9d/bd` | 1 -- town, +0x19 tagged 1..4 |

and the rules are:

* **kind 3** at the zone of every **type-14** feature cell's centre;
* **kind 4** at the zone of every **type-10** cell's centre;
* **kind 1** at the **top four** of the 64 zones of the **type-1** cell's own tile,
  scored by `max(0, 1 - World_objectFalloffWeight(cell, zoneCentre))^2` and sorted
  DESCENDING (`FUN_004f5f40` at `0x50fd21`), tagged 1..4 at `+0x19` in that order.

The scoring query is each zone's centre (`zone*256 + 0x80`), and the weight is the same
`FUN_0052c820` the candidate grid uses -- warped for type 1, which is why the four town
zones scatter around the centre instead of forming a 2x2 block.

Reads raw/zone_ac_capture*.json (the `--scan` outputs of tools/frida_zone_ac.py).
"""
import glob
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
REDERIVE = os.path.normpath(os.path.join(HERE, "..", "..", "cw_rederive"))

ZONE = 0x100             # blocks per zone
REGION_ZONES = 64        # zones per region edge
TILE_ZONES = 8           # zones per feature-tile edge
CENTRE = 0x80            # the scoring query is the zone centre

KIND_OF_TYPE = {14: 3, 10: 4}    # write order: 3 (0x50ec3f) then 4 (0x50f3a2)
TOWN_TYPE = 1                    # then 1 (0x50fd5d..), so a town overwrites either


def f32(x):
    return struct.unpack("<f", struct.pack("<f", x))[0]


class Gate:
    def __init__(self):
        self.n, self.bad = 0, []

    def eq(self, what, got, want, where):
        self.n += 1
        if got != want:
            self.bad.append("%s  %s: %r != %r" % (where, what, got, want))

    def report(self, title):
        if self.bad:
            print("[FAIL] %s: %d of %d" % (title, len(self.bad), self.n))
            for x in self.bad[:10]:
                print("        " + x)
            return False
        print("[PASS] %s: %d" % (title, self.n))
        return True


_T = {}


def toolkit():
    if "fg" not in _T:
        sys.path.insert(0, REDERIVE)
        import cw_seed
        import cw_feature
        import cw_featuregen
        _T["base"] = cw_seed.base_for_seed(42069)
        _T["fg"] = cw_featuregen
        _T["fw"] = cw_feature.falloff_weight
    return _T


def town_zones(rx, rz, ti, cell):
    """The four town zones: top 4 of the cell's own 8x8 tile of zones, by (1-w)^2 desc."""
    fw = _T["fw"]
    tileX, tileZ = ti // TILE_ZONES, ti % TILE_ZONES      # cw_featuregrid's cell index
    cand = []
    for i in range(TILE_ZONES):
        for j in range(TILE_ZONES):
            zi, zj = tileX * TILE_ZONES + i, tileZ * TILE_ZONES + j
            px = rx * REGION_ZONES * ZONE + zi * ZONE + CENTRE
            pz = rz * REGION_ZONES * ZONE + zj * ZONE + CENTRE
            w = fw(cell["cx"], cell["cz"], cell["radius"], cell["type"],
                   px << 16, pz << 16)
            s = f32(1.0 - w)
            s = f32(s * s) if s > 0.0 else 0.0
            cand.append((s, zi, zj))
    cand.sort(key=lambda t: t[0], reverse=True)
    return [(t[1], t[2]) for t in cand[:4]]


def derive(rx, rz):
    """The region's whole per-zone site-kind grid, ab initio. {(zx,zz): kind}."""
    t = toolkit()
    cells = t["fg"].generated_cells(t["base"], rx, rz)
    grid = {}
    for want_type in (14, 10):                       # in the binary's write order
        for c in cells:
            if c["type"] == want_type:
                zx, zz = (c["cx"] >> 16) >> 8, (c["cz"] >> 16) >> 8
                grid[(zx, zz)] = KIND_OF_TYPE[want_type]
    for ti, c in enumerate(cells):
        if c["type"] == TOWN_TYPE:
            for (zi, zj) in town_zones(rx, rz, ti, c):
                grid[(rx * REGION_ZONES + zi, rz * REGION_ZONES + zj)] = 1
    return grid


def main():
    scans = []
    for f in sorted(glob.glob(os.path.join(RAW, "zone_ac_capture*.json"))):
        for r in json.load(open(f))["hits"]:
            if "byType" in r:
                scans.append(r)
    if not scans:
        print("no --scan output in raw/zone_ac_capture*.json -- run "
              "tools/frida_zone_ac.py --scan")
        return 1

    g = Gate()
    nz = 0
    for r in scans:
        zx, zz = r["zone"]
        rx, rz = zx // REGION_ZONES, zz // REGION_ZONES
        w = "region %d,%d" % (rx, rz)
        live = {}
        for k, zs in r["byType"].items():
            for z in zs:
                live[tuple(z)] = int(k)
        pred = derive(rx, rz)
        nz += len(live)
        # the whole non-zero grid, kind for kind -- and the zero count implies the rest
        g.eq("every non-zero site kind in the 4096-entry grid", pred, live, w)
        g.eq("the zero count", 4096 - len(pred), int(r["hist"].get("0", 0)), w)
        for kind in (1, 3, 4):
            g.eq("kind-%d zone set" % kind,
                 sorted(z for z, v in pred.items() if v == kind),
                 sorted(z for z, v in live.items() if v == kind), w)

    ok = g.report("the per-zone site-kind grid, derived from the seed alone")
    print("   %d regions, %d non-zero entries (%d towns, %d dungeons, %d runestones)"
          % (len(scans), nz,
             sum(1 for r in scans for z in r["byType"].get("1", [])),
             sum(1 for r in scans for z in r["byType"].get("3", [])),
             sum(1 for r in scans for z in r["byType"].get("4", []))))
    print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
