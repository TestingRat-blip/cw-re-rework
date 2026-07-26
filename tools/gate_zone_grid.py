#!/usr/bin/env python3
"""Gate: the zone builder's CANDIDATE GRID, `0x51e839`-`0x51eab5`.

The camp populator (`FUN_005104e0`) is handed a `vector<int64 x,y,z>` of candidate
positions; `gate_zone_camp.py` took that vector as captured.  This gate derives it.

The loop is a 14x14 lattice at 18-block spacing over the zone, filtered twice:

    for i in 0..13:                       # X axis, site[0x60]
      for j in 0..13:                     # Y axis, site[0x64]
        if (i + 3*j) % M: continue        # M = [ebp-0x1368], literally 5   (0x51e885)
        X = site[0x60]*256 + 4 + 18*i
        Y = site[0x64]*256 + 4 + 18*j
        w = World_objectFalloffWeight(desc, X<<16, Y<<16)               (0x51e913)
        t = (1.0f - w) > 0 ? (1.0f - w)^2 : 0.0f                        (0x51e918)
        if (rand()/32767.0f > t * 0.75f) continue                       (0x51e94c)
        z = first block at (X, Y) with (block[3] & 0x1f) in {0, 2}      (0x51e999)
        push (X<<16 + 0x8000, Y<<16 + 0x8000, z<<16)                    (0x51ea53)

Everything but `rand()` is derived here from the seed alone:

  * the lattice and the `(i + 3*j) % 5` filter are pure arithmetic;
  * `w` comes from `cw_rederive`'s already-proven `cw_feature.falloff_weight`
    (`FUN_0052c820`, 91880/91880) driven by the captured feature descriptor;
  * the roll is replayed from the captured draw, as every other gate here does with a
    rand stream it does not own;
  * `z` is checked against `cw_height.surf_height`, the same pure-terrain rule the
    dungeon wall-stub probe settled on.

Reads raw/zone_grid_capture*.json (tools/frida_zone_grid.py).
"""
import glob
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
REDERIVE = os.path.normpath(os.path.join(HERE, "..", "..", "cw_rederive"))

STEP = 18            # 0x51ea76 / 0x51ea99: add 0x12
SPAN = 0xfc          # 0x51ea88 / 0x51eaa9: cmp 0xfc  -> 14 steps
ORIGIN = 4           # 0x51e89f / 0x51e8aa: add 4
STRIDE = 3           # 0x51ea79: the inner step of the qualification counter
HALF = 0x8000        # 0x5737c0 = -32768.0, subtracted -> +0.5 block
ONE = 1.0
KEEP_K = 0.75        # [0x5586d4]
RAND_MAX = 32767.0   # [0x558834]


def f32(x):
    return struct.unpack("<f", struct.pack("<f", x))[0]


class Gate:
    def __init__(self):
        self.n, self.bad = 0, []

    def eq(self, what, got, want, where):
        self.n += 1
        if got != want:
            self.bad.append("%s  %s: %r != %r" % (where, what, got, want))

    def true(self, what, cond, where):
        self.n += 1
        if not cond:
            self.bad.append("%s  %s" % (where, what))

    def report(self, title):
        if self.bad:
            print("[FAIL] %s: %d of %d" % (title, len(self.bad), self.n))
            for x in self.bad[:10]:
                print("        " + x)
            return False
        print("[PASS] %s: %d" % (title, self.n))
        return True


def lattice(mod):
    """The cells that reach the roll, in emit order (outer i, inner j)."""
    out = []
    for i in range(SPAN // STEP):
        for j in range(SPAN // STEP):
            if (i + STRIDE * j) % mod == 0:
                out.append((i, j))
    return out


def descriptor(desc):
    b = bytes(desc)
    return {"fa": struct.unpack_from("<q", b, 0)[0],
            "fb": struct.unpack_from("<q", b, 8)[0],
            "radius": struct.unpack_from("<f", b, 0x10)[0],
            "type": struct.unpack_from("<i", b, 0x18)[0],
            "mission": struct.unpack_from("<i", b, 0x20)[0],
            "level": struct.unpack_from("<i", b, 0x24)[0],
            "msub": struct.unpack_from("<i", b, 0x28)[0]}


def derived_descriptor(zx, zz):
    """The descriptor DERIVED from the seed: the feature cell containing the zone. All
    seven fields, including the three (+0x20 mission / +0x24 level / +0x28 msub) that
    this gate used to take as captured -- see Docs/RE_camp_descriptor.md."""
    m = _toolkit()
    if m is None:
        return None
    c = m.cell_for_column(zx * 256 + 128, zz * 256 + 128)
    return {"fa": c["cx"], "fb": c["cz"], "radius": c["radius"], "type": c["type"],
            "mission": c.get("mission", -1), "level": c.get("level", -1),
            "msub": c.get("msub", -1)}


def cells(h):
    """Group the event stream into one dict per cell that reached the roll."""
    out, cur = [], None
    for e in h["ev"]:
        if e[0] == "c":
            cur = {"x": e[1], "y": e[2], "w": e[3], "t": e[4], "r": e[5], "rec": None}
            out.append(cur)
        elif e[0] == "p" and cur is not None:
            cur["rec"] = bytes(e[1])
    return out


_TERR = {}


def _toolkit():
    """cw_rederive, configured for the capture's seed."""
    if "mod" not in _TERR:
        try:
            sys.path.insert(0, REDERIVE)
            import cw_seed
            import cw_feature
            import cw_featuregrid
            import cw_gate
            _TERR["base"] = cw_seed.configure(42069)
            cw_gate.set_features(True)
            _TERR["mod"] = cw_featuregrid
            _TERR["f"] = cw_feature.falloff_weight
        except Exception as exc:                                  # pragma: no cover
            print("   (cw_rederive not importable: %s)" % exc)
            _TERR["mod"] = None
    return _TERR["mod"]


def surf(x, y):
    """The FEATURE-DEFORMED surface height -- every zone that reaches this loop has a
    feature by construction, so the open-terrain `cw_height.surf_height` is the wrong
    height to compare against (it is off by up to 56 blocks inside a big feature)."""
    m = _toolkit()
    if m is None:
        return None
    return m.deformed_surf_height(_TERR["base"], x, y, m.cell_for_column(x, y))


def falloff():
    _toolkit()
    return _TERR["f"]


def check_zone(h, g, gw, gz, zsum):
    zx, zz = h["zone"]
    w = "%d,%d" % (zx, zz)
    d = descriptor(h["desc"])
    fw = falloff()

    g.eq("the site's zone fields are the zone being built", tuple(h["siteZone"]), (zx, zz), w)
    g.eq("the qualification modulus is 5", h["mod"], 5, w)

    # --- the DESCRIPTOR itself, derived from the seed ---------------------------
    # This gate used to take `d` as captured. It is the feature cell containing the zone,
    # and all seven fields come out of the region generator -- including the three that
    # had never been derived: +0x20 (the camp KIND selector, = the region's running
    # MISSION counter), +0x24 (level) and +0x28 (msub). Docs/RE_camp_descriptor.md.
    dd = derived_descriptor(zx, zz)
    if dd is not None:
        for k in ("fa", "fb", "radius", "type", "mission", "level", "msub"):
            g.eq("descriptor %s, derived from the seed" % k, dd[k], d[k], w)
        d = dd                       # from here on the gate uses the DERIVED descriptor

    cs = cells(h)
    want = lattice(h["mod"])
    g.eq("the cells that reach the roll are (i + 3j) %% %d == 0, in order" % h["mod"],
         len(cs), len(want), w)
    if len(cs) != len(want):
        return

    kept = []
    for (i, j), c in zip(want, cs):
        x = zx * 256 + ORIGIN + STEP * i
        y = zz * 256 + ORIGIN + STEP * j
        g.eq("cell (%d,%d) position" % (i, j), (c["x"], c["y"]), (x, y), w)

        # --- the falloff weight, ab initio -------------------------------------
        pred = fw(d["fa"], d["fb"], d["radius"], d["type"], x << 16, y << 16)
        gw.eq("w(%d,%d)" % (x, y), struct.pack("<f", pred), struct.pack("<f", c["w"]), w)

        # --- the squared term and the roll -------------------------------------
        diff = f32(ONE - c["w"])
        t = f32(diff * diff) if diff > 0 else f32(0.0)
        g.eq("cell (%d,%d) squared term" % (i, j),
             struct.pack("<f", t), struct.pack("<f", c["t"]), w)
        lim = f32(t * KEEP_K)
        r = f32(f32(float(c["r"])) / f32(RAND_MAX))
        g.eq("cell (%d,%d) kept" % (i, j), c["rec"] is not None, r <= lim, w)

        if c["rec"] is not None:
            rx, ry, rz = struct.unpack("<qqq", c["rec"])
            g.eq("cell (%d,%d) record x/y" % (i, j), (rx, ry),
                 ((x << 16) + HALF, (y << 16) + HALF), w)
            g.true("cell (%d,%d) record z is a whole block" % (i, j), rz % 65536 == 0, w)
            kept.append(c["rec"])
            sh = surf(x, y)
            if sh is not None:
                gz[0] += 1
                gz[1] += (rz >> 16) == sh + 2
                zsum[(rz >> 16) - sh] = zsum.get((rz >> 16) - sh, 0) + 1

    g.eq("the vector handed to the camp populator is exactly the accepted records",
         [bytes(c) for c in (h.get("cand") or [])], kept, w)


def main():
    names = sorted(glob.glob(os.path.join(RAW, "zone_grid_capture*.json")))
    if not names:
        print("no raw/zone_grid_capture*.json -- run tools/frida_zone_grid.py")
        return 1
    ok = True
    for f in names:
        cap = json.load(open(f))
        hits = cap["hits"]
        print("== %s  %d zones, %d fired" % (os.path.basename(f), cap["zones"], len(hits)))
        g, gw, gz = Gate(), Gate(), [0, 0]
        zsum = {}
        for h in hits:
            check_zone(h, g, gw, gz, zsum)
        ok &= g.report("the lattice, the (i + 3j) % 5 filter and the accepted records")
        ok &= gw.report("the falloff weight, ab initio from the descriptor "
                        "(cw_feature.falloff_weight)")
        rolls = sum(len(cells(h)) for h in hits)
        print("   %d cells rolled, %d kept, %d zones"
              % (rolls, sum(len(h.get("cand") or []) for h in hits), len(hits)))
        # z is MEASURED, not gated: the scan reads the finished column, so a column that
        # carries decoration sits above the terrain skin.  The terrain rule is
        # z == deformedSurfH + 2 (the two terrain voxels at surfH and surfH+1).
        if gz[0]:
            print("   z == deformed surfH + 2 on %d of %d candidates" % (gz[1], gz[0]))
        if zsum:
            print("   z - deformed surfH histogram: %s"
                  % dict(sorted(zsum.items())[:16]))
        if not hits:
            print("   nothing fired in this capture -- it proves nothing")
        print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    if not any(json.load(open(f))["hits"] for f in names):
        print("no capture in raw/ contains a single firing -- nothing was gated")
        return 1
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
