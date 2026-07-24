#!/usr/bin/env python3
"""Gate: the assembler's fourth container (`site+0x48`) and the wall stub's terrain probe.

## `site+0x48` -- the structure markers

A container nothing had looked at, distinct from the `site+4` decor list, the `site+0xc` prop
vector and the `site+0x30` ground-item vector. Exactly two call sites in the whole assembler
push into it (`FUN_005284a0`), and each fires once per dungeon:

    005048c7  the kind-4 ENTRANCE cell     type 5
    00507aa0  the cell.flags&4 BOSS block  type 6

Both records are built by `FUN_004f7490`, take their type at `+0x00`, and get a position at
`+0x128` (3 x int64 16.16) through `FUN_00406380` -> `FUN_00402a40`.

    ENTRANCE   pos = (baseX + I*10 + 5, baseY + J*10 + 5, baseZ + K*10)
               +0x14 = 1 (ctor), +0x11c = +0x120 = -1 (ctor, untouched)
    BOSS       pos = the boss spawn's own position (copied from spawn+0x10, so it carries the
               float32 half-block rounding the boss RE documents), +0x11c = FUN_0041fff0(site+0x18),
               +0x120 = the boss's model byte (spawn+0x2c) -- the species that was picked

So the entrance marker is fully derivable from the cell grid alone, and the boss marker adds
nothing the boss gate does not already produce.

## The stub's terrain probe

The one gate `RE_dungeon_lights.md` could not model. Each wall direction probes three blocks
past the wall face and drops the stub if the answer is solid:

    dir 0 (J-1)  (+5, -3, +2)        dir 3 (I-1)  (-3, +5, +2)
    dir 2 (J+1)  (+5, +13, +2)       dir 1 (I+1)  (+13, +5, +2)

relative to `(baseX + I*10, baseY + J*10, baseZ + K*10)`. Those points are off the 10-unit
lattice, which is why the grid rig's lattice dump did not reach them.

This gate proves two things about it:

  * **it is order-free** -- re-reading every probed point at `asmLeave` returns exactly what the
    probe saw mid-scan, so the stub blocks are not reading a half-assembled dungeon;
  * **it is the same material test as the mob pass** -- `solid <=> (block[3] & 0x1f) not in
    (0, 2)`, derived from the finished world rather than replayed.

Reads raw/dungeon_marker_capture*.json (tools/frida_dungeon_marker.py).
"""
import base64
import glob
import json
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from gate_50702a_mobs import CellGrid                                   # noqa: E402

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")

ENTRANCE_RA, BOSS_RA = 0x1048CC, 0x107AA5
# direction -> the probe offset from the cell origin (the four stub blocks, in emit order)
PROBE_OFF = {0: (5, -3, 2), 2: (5, 13, 2), 3: (-3, 5, 2), 1: (13, 5, 2)}


class StubMat:
    """The finished world sampled at all four stub probe points of every cell."""

    def __init__(self, sm):
        self.nx, self.ny, self.nz = sm["nx"], sm["ny"], sm["nz"]
        self.dirs = {d: i for i, d in enumerate(sm["dirs"])}
        self.buf = base64.b64decode(sm["bytes_b64"])

    def mat(self, i, j, k, d):
        if not (0 <= i < self.nx and 0 <= j < self.ny and 0 <= k < self.nz):
            return 0
        return self.buf[((i * self.ny + j) * self.nz + k) * 4 + self.dirs[d]]

    def solid(self, i, j, k, d):
        """FUN_00405fd0 + FUN_004061f0, the same test the mob pass's probe reduces to."""
        return (self.mat(i, j, k, d) & 0x1F) not in (0, 2)


_TERR = {}


def terrain_rule(probes):
    """The pure-terrain approximation of the probe: solid <=> z <= surfH + 1.

    Needs cw_rederive (the bit-exact surface height) on the path. Returns
    (matches, total, residuals) or None if the toolkit is not importable.
    """
    if not probes:
        return None
    if "mod" not in _TERR:
        try:
            sys.path.insert(0, os.path.normpath(os.path.join(RAW, "..", "..", "cw_rederive")))
            import cw_seed
            import cw_height
            _TERR["mod"] = cw_height
            _TERR["base"] = cw_seed.configure(42069)
        except Exception:
            _TERR["mod"] = None
    if _TERR["mod"] is None:
        return None
    m, resid = 0, []
    for p in probes:
        sh = _TERR["mod"].surf_height(_TERR["base"], p["x"], p["y"])
        model = p["z"] <= sh + 1
        if model == bool(p["solid"]):
            m += 1
        else:
            resid.append({"cell": (p["I"], p["J"], p["K"]), "dir": p["dir"], "z": p["z"],
                          "surfH": sh, "b": p["b"], "solid": p["solid"]})
    return m, len(probes), resid


def marker(b):
    return {"type": struct.unpack_from("<i", b, 0)[0],
            "f14": struct.unpack_from("<i", b, 0x14)[0],
            "f11c": struct.unpack_from("<i", b, 0x11C)[0],
            "f120": struct.unpack_from("<i", b, 0x120)[0],
            "pos": [struct.unpack_from("<q", b, 0x128 + i * 8)[0] for i in range(3)]}


def check(what, model, live):
    if model == live:
        print(f"[PASS] {what}: {len(live) if hasattr(live, '__len__') else live}")
        return True
    print(f"[FAIL] {what}: model {model} vs live {live}")
    return False


def one(name):
    cap = json.load(open(os.path.join(RAW, name)))
    g = cap["grids"][0]
    grid = CellGrid(g["rot"], g["mirror"], g["dimX"], g["dimY"], g["dimZ"],
                    base64.b64decode(g["bytes_b64"]))
    bx, by, bz, style = g["baseX"], g["baseY"], g["baseZ"], g["style"]
    print(f"== {name}  zone {tuple(cap['zone'])}  style {style}")
    ok = True

    # ---- site+0x48: the entrance marker, derived from the cell grid alone ----------------
    kind4 = [(i, j, k) for i in range(grid.dim_x) for j in range(grid.dim_y)
             for k in range(grid.dim_z) if grid.cell(i, j, k)[0] == 4]
    live_m = [(m["ra"], (m["I"], m["J"], m["K"]), marker(bytes(m["b"]))) for m in cap["markers"]]
    ent = [x for x in live_m if x[0] == ENTRANCE_RA]
    boss = [x for x in live_m if x[0] == BOSS_RA]

    ok &= check("exactly one kind-4 cell, and it is where the type-5 marker was pushed",
                kind4, [x[1] for x in ent])
    if ent:
        i, j, k = kind4[0]
        model_e = {"type": 5, "f14": 1, "f11c": -1, "f120": -1,
                   "pos": [(bx + i * 10 + 5) << 16, (by + j * 10 + 5) << 16,
                           (bz + k * 10) << 16]}
        ok &= check("entrance marker record (type, ctor fields, position)", model_e, ent[0][2])
    # the boss marker: its cell must be the flags&4 cell, and its type is 6
    flag4 = [(i, j, k) for i in range(grid.dim_x) for j in range(grid.dim_y)
             for k in range(grid.dim_z) if grid.cell(i, j, k)[1] & 4]
    ok &= check("the type-6 marker sits on the single cell.flags&4 cell",
                flag4, [x[1] for x in boss])
    ok &= check("boss marker type", [6], [x[2]["type"] for x in boss])

    # ---- the stub probe -------------------------------------------------------------------
    probes = cap["probes"]
    stable = [p for p in probes if p.get("after") == p.get("b")]
    ok &= check("probe answers unchanged at asmLeave (no assembly-order state)",
                len(probes), len(stable))

    sm = StubMat(g["stubmat"]) if g.get("stubmat", {}).get("bytes_b64") else None
    if sm is None:
        print("[warn] no stubmat dump in this capture -- probe verdicts not derived")
        n_derived = 0
    else:
        model_v = [sm.solid(p["I"], p["J"], p["K"], p["dir"]) for p in probes]
        live_v = [bool(p["solid"]) for p in probes]
        ok &= check("stub probe verdicts derived from the finished world, in call order",
                    model_v, live_v)
        n_derived = len(probes)
        rej = sum(1 for v in live_v if v)
        print(f"   probe: {len(probes)} candidates, {rej} rejected as solid, "
              f"{len(probes) - rej} emitted")

    # How much of that needs the world at all? Measure the pure-TERRAIN rule the engine
    # port uses -- `z <= surfH + 1` off cw_rederive's bit-exact surface height -- so the
    # residual is a number in the gate rather than a claim in a doc.
    th = terrain_rule(probes)
    if th is not None:
        m, n, resid = th
        print(f"   terrain-only rule (z <= surfH + 1, no world dump): {m}/{n}")
        for r in resid[:4]:
            print(f"      residual: cell {r['cell']} dir {r['dir']} z {r['z']} "
                  f"surfH {r['surfH']} block {r['b']} solid {r['solid']}")

    print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    return (0 if ok else 1), len(probes), n_derived, len(live_m)


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("-")]
    names = args or sorted(os.path.basename(f) for f in
                           glob.glob(os.path.join(RAW, "dungeon_marker_capture*.json")))
    rc = 0
    tot = der = mk = 0
    for n in names:
        r, t, d, m = one(n)
        rc |= r
        tot += t
        der += d
        mk += m
        print()
    print(f"== {len(names)} dungeons: {mk} site+0x48 markers, "
          f"{der}/{tot} stub probe verdicts derived  "
          + ("ALL PASS" if rc == 0 else "FAILURES"))
    return rc


if __name__ == "__main__":
    sys.exit(main())
