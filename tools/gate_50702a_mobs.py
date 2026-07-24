#!/usr/bin/env python3
"""Gate: reproduce FUN_0050702a's dungeon mob placement ab-initio from the cell grid.

Model (static decode, Docs/RE_50702a_mob_populator.md), for the mob pass at 0x507401:

    for I in range(dimX(view)):
      for J in range(dimY(view)):
        for K in range(dimZ):
          cell = grid(I,J,K)
          if cell.kind not in (3,4): continue      # loop head, 0x504820
          ...                                      # box fill / decoration
          if cell.kind == 4:                 continue         # 0x5058d0 -> skips the mob pass
          if grid(I,J,K+1).kind == 3:        continue         # 0x50742f
          if src == 0:                       continue         # 0x50743f
          if not solid(baseZ+(K+1)*10):      continue         # 0x5074a1
          if grid(I-1,J,K).kind != 3: spawn(orient=0)         # 0x507552
          if grid(I+1,J,K).kind != 3: spawn(orient=2)         # 0x5075fd
          if grid(I,J-1,K).kind != 3: spawn(orient=3)         # 0x5076a8
          if grid(I,J+1,K).kind != 3: spawn(orient=1)         # 0x507753
          # pos = (baseX + I*10, baseY + J*10, baseZ + K*10)

`grid(...)` is FUN_004f84a0: a rotated/mirrored view (FUN_0052dde0) over a raw dimX*dimY*dimZ
array of 2-byte cells; **any out-of-range index reads back kind 1** (the DAT_005842c8 fallback),
which is what makes the dungeon's outer boundary count as a wall.

`solid()` is the one input that is not the cell grid: FUN_00405fd0 + FUN_004061f0 read the
world voxel at (x, y, baseZ+(K+1)*10). It reduces to

    solid  <=>  a block exists there and (block[3] & 0x1f) not in (0, 2)

because all three of FUN_00405fd0's "no block" returns (DAT_00583d0c / _10 / _14, for below /
above / no column) are zero in the image and nothing in .text ever writes them -- so every
out-of-column case reads material 0 and fails the test.

The model evaluates that itself against a dump of the finished world sampled on the dungeon's
own 10-unit lattice, rather than replaying the probe's boolean answer. That is sound because
the dungeon geometry is already final when the mob pass runs: re-reading every probed
coordinate at `asmLeave` returns exactly what the probe saw (170/170 on zone 32804,32811).

Reads raw/dungeon_grid_capture.json (tools/frida_dungeon_grid.py).
"""
import base64
import json
import os
import sys
from collections import Counter

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")
OOB_KIND = 1                      # DAT_005842c8 -- what FUN_004f84a0 returns out of range


class CellGrid:
    """FUN_004f84a0 / FUN_0052dde0 / FUN_0052d820-860 -- the rotated cell-grid view."""

    def __init__(self, rot, mirror, dim_x, dim_y, dim_z, data):
        self.rot = rot
        self.mirror = mirror
        self.rx, self.ry, self.rz = dim_x, dim_y, dim_z      # raw dims (+0xc/+0x10/+0x14)
        self.data = data

    # FUN_0052d820 / _840 / _860
    @property
    def dim_x(self):
        return self.ry if (self.rot & 1) else self.rx

    @property
    def dim_y(self):
        return self.rx if (self.rot & 1) else self.ry

    @property
    def dim_z(self):
        return self.rz

    def _xform(self, i, j):
        """FUN_0052dde0 -- view (i,j) -> raw (i,j)."""
        r = self.rot & 3
        if r == 1:
            i, j = j, i
            i = self.rx - i - 1
        elif r == 2:
            i = self.rx - i - 1
            j = self.ry - j - 1
        elif r == 3:
            t = i
            i, j = j, i
            j = self.ry - t - 1
        if self.mirror:
            j = self.ry - j - 1
        return i, j

    def kind(self, i, j, k):
        return self.cell(i, j, k)[0]

    def cell(self, i, j, k):
        i, j = self._xform(i, j)
        if not (0 <= i < self.rx and 0 <= j < self.ry and 0 <= k < self.rz):
            return (OOB_KIND, 0)
        off = ((self.ry * k + j) * self.rx + i) * 2
        return (self.data[off], self.data[off + 1])


class Lattice:
    """The finished world sampled on the dungeon lattice: material byte at
    (baseX+I*10, baseY+J*10, baseZ+L*10). Only the material byte is kept -- it is all
    FUN_004061f0 looks at."""

    def __init__(self, nx, ny, nz, data):
        self.nx, self.ny, self.nz, self.data = nx, ny, nz, data

    def solid(self, i, j, l):
        """FUN_00405fd0 + FUN_004061f0. Out of range = the zero sentinels = material 0."""
        if not (0 <= i < self.nx and 0 <= j < self.ny and 0 <= l < self.nz):
            return False
        return (self.data[(i * self.ny + j) * self.nz + l] & 0x1f) not in (0, 2)


# the 4 neighbour probes, in call order: (dI, dJ, orient, call-site RVA)
DIRS = [(-1, 0, 0, 0x107552), (1, 0, 2, 0x1075fd), (0, -1, 3, 0x1076a8), (0, 1, 1, 0x107753)]


def run(grid, base_x, base_y, base_z, src, solid):
    """Replay the scan. `solid` is called once per cell reaching the block probe."""
    cells, spawns = [], []
    for i in range(grid.dim_x):
        for j in range(grid.dim_y):
            for k in range(grid.dim_z):
                kind = grid.kind(i, j, k)
                if kind not in (3, 4):
                    continue
                if kind == 4:
                    # 0x5058d0 `cmp byte [eax],4 / je 0x5078b3` -- a kind-4 cell (the single
                    # dungeon entrance) branches straight past the mob pass.
                    continue
                cells.append((i, j, k, kind))
                if grid.kind(i, j, k + 1) == 3:
                    continue
                if src == 0:
                    continue
                if not solid(i, j, k):
                    continue
                pos = (base_x + i * 10, base_y + j * 10, base_z + k * 10)
                for di, dj, orient, ra in DIRS:
                    if grid.kind(i + di, j + dj, k) != 3:
                        spawns.append({"pos": list(pos), "orient": orient, "ra": ra,
                                       "cell": (i, j, k)})
    return cells, spawns


def main():
    args = sys.argv[1:]
    if not args or args == ["--all"]:
        names = sorted(f for f in os.listdir(RAW) if f.startswith("dungeon_grid_capture"))
        if args != ["--all"]:
            names = ["dungeon_grid_capture.json"]
    else:
        names = args
    rc = 0
    tot_c = tot_s = 0
    for n in names:
        r, nc, ns = one(n)
        rc |= r
        tot_c += nc
        tot_s += ns
        print()
    if len(names) > 1:
        print(f"== {len(names)} zones: {tot_c} mob-pass cells, {tot_s} creature spawns  "
              + ("ALL PASS" if rc == 0 else "FAILURES"))
    return rc


def one(name):
    cap = json.load(open(os.path.join(RAW, name)))
    print(f"== {name}  zone {tuple(cap['zone'])}")
    if not cap["grids"]:
        print("  no dungeon built in this zone")
        return 1, 0, 0
    g = cap["grids"][0]
    print(f"   grid {g['dimX']}x{g['dimY']}x{g['dimZ']} rot={g['rot']} mirror={g['mirror']} "
          f"style={g['style']} base=({g['baseX']},{g['baseY']},{g['baseZ']}) src={g['src']}")
    grid = CellGrid(g["rot"], g["mirror"], g["dimX"], g["dimY"], g["dimZ"],
                    base64.b64decode(g["bytes_b64"]))

    # the terrain probe -- DERIVED from the finished world sampled on the dungeon lattice,
    # falling back to replaying the capture only for older captures that predate the dump
    lat = g.get("lattice")
    derived = lat is not None and lat.get("bytes_b64")
    probes = []
    if derived:
        L = Lattice(lat["nx"], lat["ny"], lat["nz"], base64.b64decode(lat["bytes_b64"]))

        def solid(i, j, k):
            v = L.solid(i, j, k + 1)
            probes.append(((i, j, k), v))
            return v
    else:
        it = iter(cap["solids"])

        def solid(i, j, k):
            v = next(it, None)
            probes.append(((i, j, k), bool(v)))
            return bool(v)

    cells, spawns = run(grid, g["baseX"], g["baseY"], g["baseZ"], g["src"], solid)

    ok = True

    # --- gate A: the set of cells reaching the mob pass ---------------------------------
    live = [(c["I"], c["J"], c["K"], c["c0"]) for c in cap["cells"]]
    ok &= report("mob-pass cells (order + kind)", cells, live)

    # --- gate B: the terrain probe, derived -> compared against the live gate result ----
    live_solid = [bool(v) for v in cap["solids"]]
    model_solid = [v for _, v in probes]
    rej = sum(1 for v in model_solid if not v)
    src = "derived from the lattice dump" if derived else "REPLAYED (capture predates the dump)"
    print(f"  terrain probe ({src}): {len(model_solid)} probes, {rej} rejected")
    ok &= report("terrain-probe verdicts (in call order)", model_solid, live_solid)

    # --- gate C: the spawns ------------------------------------------------------------
    live_sp = [{"pos": s["pos"], "orient": s["orient"], "ra": s["ra"]}
               for s in cap["spawns"]]
    model_sp = [{"pos": s["pos"], "orient": s["orient"], "ra": s["ra"]} for s in spawns]
    ok &= report("creature spawns (pos + orient + call site, in order)", model_sp, live_sp)

    print("  call-site histogram:", dict(sorted(Counter(hex(s["ra"]) for s in model_sp).items())))
    print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    return (0 if ok else 1), len(cells), len(model_sp)


def report(name, model, live):
    if model == live:
        print(f"[PASS] {name}: {len(model)}/{len(live)}")
        return True
    print(f"[FAIL] {name}: model {len(model)} vs capture {len(live)}")
    for n, (a, b) in enumerate(zip(model, live)):
        if a != b:
            print(f"   first diff at {n}: model {a}  capture {b}")
            break
    return False


if __name__ == "__main__":
    sys.exit(main())
