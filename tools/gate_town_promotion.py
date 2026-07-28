#!/usr/bin/env python3
"""Gate: the town builder's PROMOTION pass -- `0x4e3095`-`0x4e39e9`.

The stage immediately after the verdict scan `RE_town_verdict.md` ported. It collects
the buildable plots, `std::sort`s them, and then POPS entries off the back (or at a
`rand() % remaining` index) to hand out the special roles.

Two inputs the previous handoff listed as unknown are settled here, and both are cheap:

* **the sort key** is `plot[+0x18]` -- the plot SCORE -- **ascending**, read out of the
  comparator MSVC inlined into two separate instantiations (`_Adjust_heap` at
  `0x4e159c`, `_Insertion_sort` at `0x4e164e`). `FUN_004e19f0` itself is `std::_Sort`
  over a 4-byte element, so it is correctly filed under `_library`; the key lives in the
  predicate, which is the one-dword functor `&plotBase`.
* **`site+0x79`** -- the byte that picks the role set, carried as "the faction" -- is the
  per-zone site-kind grid's SECOND byte: the town zone's **corner rank 1..4** among the
  top four zones of the type-1 cell's tile, and 0 for any zone that is not one of the
  four. `RE_site_kind_grid.md` already found the four kind-1 stores each pair with a
  `+0x19` store of 1/2/3/4; this gate closes the loop by deriving it from the seed.

What is checked, per town:

* `faction == cornerTag(zone)`, derived ab initio -- **no capture input at all**;
* the promotion replayed from `plotsAtSort` + the recorded draws, against `plotsLate`;
* the per-site draw CENSUS: every `rand()` the pass spends, at the address the branch
  structure predicts and nowhere else.

The replay is fed the captured draws (lesson 12: say what a gate feeds its port). The
plot table it starts from is captured too -- deriving it needs the scan phase's three
terrain booleans, which are region-cache-blocked (`RE_town_verdict.md` §7). What this
gate proves is the promotion RULE; the corner-tag check above it is the ab-initio half.

    python tools/gate_town_promotion.py
"""
import collections
import glob
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.normpath(os.path.join(HERE, "..", "raw"))

PROMO_LO, PROMO_HI = 0x4E3095, 0x4E39F0        # the pass, entry to exit
IMAGE_BASE = 0x400000

# every rand() the pass can spend, by RETURN address, and what it is for
SITES = {
    0x4E3238: "f3 pop -> role 0xa",
    0x4E3298: "f3 pop -> role 0xb",
    0x4E32F8: "f3 pop -> role 0xc",
    0x4E3358: "f3 pop -> role 0xd",
    0x4E33C8: "f2 pop -> role 0xe",
    0x4E3428: "f2 pop -> role 0x10",
    0x4E3488: "f2 pop -> role 0xf",
    0x4E35C5: "f0 pop -> role 5",
    0x4E3646: "village cull x6 -> role 0",
    0x4E3766: "ruin cull x2 -> role 0",
    0x4E37EE: "ruin sub2 coin A",
    0x4E3818: "ruin sub2 pop -> role 0x11",
    0x4E386D: "ruin sub2 rotation",
    0x4E3889: "ruin sub2 coin B",
    0x4E38BD: "ruin sub2 pop -> role 0x13",
    0x4E390C: "ruin sub2 rotation",
    0x4E3958: "ruin sub0 pop -> role 0x12",
    0x4E39B4: "ruin sub0 rotation",
}


class Gate(object):
    def __init__(self):
        self.n, self.bad = 0, []

    def eq(self, what, got, want, where):
        self.n += 1
        if got != want:
            self.bad.append("%s  %s: %r != %r" % (where, what, got, want))

    def report(self, title):
        if self.bad:
            print("[FAIL] %s: %d of %d" % (title, len(self.bad), self.n))
            for x in self.bad[:12]:
                print("        " + x)
            return False
        print("[PASS] %s: %d" % (title, self.n))
        return True


# ---------------------------------------------------------------- the captures

def plot_rec(b):
    minH, maxH, inter, verdict, f10, rot = struct.unpack("<6i", bytes(b[:24]))
    score = struct.unpack("<f", bytes(b[24:28]))[0]
    return dict(minH=minH, maxH=maxH, inter=inter, verdict=verdict,
                f10=f10, rot=rot, score=score)


def load_towns():
    out = []
    for f in sorted(glob.glob(os.path.join(RAW, "town_props_capture*.json"))):
        d = json.load(open(f))
        for h in d["hits"]:
            de = bytes(h["desc"])
            cx, cz = struct.unpack("<qq", de[0:16])
            rad, hgt = struct.unpack("<ff", de[16:24])
            ty, sub = struct.unpack("<ii", de[24:32])
            out.append(dict(
                seed=d["seed"], zone=tuple(h["zone"]), fac=h.get("faction"),
                ty=ty, sub=sub, cx=cx, cz=cz, rad=rad, hgt=hgt,
                plotCount=h["plotCount"],
                atSort=[plot_rec(r) for r in h["plotsAtSort"]] if h.get("plotsAtSort") else None,
                late=[plot_rec(r) for r in h["plotsLate"]] if h.get("plotsLate") else None,
                draws=[(ra + IMAGE_BASE, v, n) for ra, v, n in h["draws"]]))
    return out


# ------------------------------------------------------- site+0x79, ab initio

_TAG = {}


def corner_tag(zx, zz, seed):
    """The site-kind grid's `+0x19` byte at this zone: the town's corner rank 1..4."""
    import gate_site_kind as G
    rx, rz = zx // 64, zz // 64
    key = (seed, rx, rz)
    if key not in _TAG:
        t = G.toolkit(_base_for(seed))
        m = {}
        for ti, c in enumerate(t["fg"].generated_cells(t["base"], rx, rz)):
            if c["type"] == G.TOWN_TYPE:
                for k, (zi, zj) in enumerate(G.town_zones(rx, rz, ti, c)):
                    m[(rx * 64 + zi, rz * 64 + zj)] = k + 1
        _TAG[key] = m
    return _TAG[key].get((zx, zz), 0)


def _base_for(seed):
    sys.path.insert(0, os.path.normpath(os.path.join(HERE, "..", "..", "cw_rederive")))
    import cw_seed
    return cw_seed.base_for_seed(seed)


_CELL = {}


def desc_cell(zx, zz, seed):
    """The feature cell the zone builder hands the town builder as its descriptor: the
    cell of the 8x8 tile this zone sits in."""
    import gate_site_kind as G
    rx, rz = zx // 64, zz // 64
    key = (seed, rx, rz)
    if key not in _CELL:
        t = G.toolkit(_base_for(seed))
        _CELL[key] = t["fg"].generated_cells(t["base"], rx, rz)
    return _CELL[key][((zx % 64) // 8) * 8 + ((zz % 64) // 8)]


# ------------------------------------------------------------- the replay

class Draws(object):
    """The pass's own draws, in stream order, popped as the replay asks for them."""

    def __init__(self, draws):
        self.q = [(ra, v, n) for ra, v, n in sorted(draws, key=lambda t: t[2])
                  if PROMO_LO <= ra < PROMO_HI]
        self.i = 0
        self.seen = []

    def take(self, ra):
        if self.i >= len(self.q):
            raise IndexError("out of draws (wanted %06x)" % ra)
        gra, v, n = self.q[self.i]
        self.i += 1
        self.seen.append((gra, ra))
        return v

    def done(self):
        return self.i == len(self.q)


def promote(town, dr):
    """`0x4e3095`-`0x4e39e9`, replayed. Mutates a copy of the plot table."""
    P = [dict(p) for p in town["atSort"]]
    A = [i for i, p in enumerate(P) if p["verdict"] == 2]
    # (the verdict-7 list built alongside at 0x4e3147 is not read again in this span)
    if not A:
        return P, []
    n0 = len(A)
    A.sort(key=lambda i: P[i]["score"])            # 0x4e31c7, stable, ASCENDING
    f, ty = town["fac"], town["ty"]
    log = []

    def pop_last(role=None, f10=None):
        i = A.pop()
        if role is not None:
            P[i]["verdict"] = role
        if f10 is not None:
            P[i]["f10"] = f10
        log.append(("last", i, role, f10))
        return i

    def pop_rand(ra, role=None, rot_ra=None):
        i = A.pop(dr.take(ra) % len(A))
        if role is not None:
            P[i]["verdict"] = role
        if rot_ra is not None:
            P[i]["rot"] = dr.take(rot_ra) & 3
        log.append((hex(ra), i, role, None))
        return i

    if ty == 1:                                                  # VILLAGE
        if f == 1 and n0 > 1:                                    # 0x4e31e1
            pop_last(role=9)
        if f == 3:                                               # 0x4e3211
            for ra, role in ((0x4E3238, 0xA), (0x4E3298, 0xB),
                             (0x4E32F8, 0xC), (0x4E3358, 0xD)):
                if A:
                    pop_rand(ra, role)
        if f == 2:                                               # 0x4e33a1
            for ra, role in ((0x4E33C8, 0xE), (0x4E3428, 0x10), (0x4E3488, 0xF)):
                if A:
                    pop_rand(ra, role)
        if f == 3 and len(A) > 1:                                # 0x4e34d1
            pop_last(role=3)
        if f in (0, 3) and len(A) > 1:                           # 0x4e3517
            pop_last(f10=1)
        if f == 1:                                               # 0x4e3556
            for k in range(4):
                if not A:
                    break
                pop_last(f10=k + 2)
        if f == 0:                                               # 0x4e35ae -- no guard
            pop_rand(0x4E35C5, 5)
        for _ in range(6):                                       # 0x4e360b
            if len(A) > 3:
                pop_rand(0x4E3646, 0)
    elif ty == 5:                                                # RUIN
        if town["cellZone"] == town["zone"] and n0 > 1:          # 0x4e36d8/0x4e3701
            pop_last(role=0x14)
        for _ in range(2):                                       # 0x4e3732
            if len(A) > 3:
                pop_rand(0x4E3766, 0)
        if town["sub"] == 0:                                     # 0x4e3921
            for _ in range(2):
                if len(A) > 3:
                    pop_rand(0x4E3958, 0x12, rot_ra=0x4E39B4)
        elif town["sub"] == 2:                                   # 0x4e37e8
            if dr.take(0x4E37EE) & 1:
                if len(A) > 3:
                    pop_rand(0x4E3818, 0x11, rot_ra=0x4E386D)
            if dr.take(0x4E3889) & 1:
                if len(A) > 3:
                    pop_rand(0x4E38BD, 0x13, rot_ra=0x4E390C)
    return P, log


def zone_of_cell(v16):
    """`__alldiv(v, 0x10000)` then `sar 8` with the round-toward-zero fixup."""
    q = v16 >> 16 if v16 >= 0 else -((-v16) >> 16)          # C truncating division
    q = q & 0xFFFFFFFF
    if q & 0x80000000:
        q -= 1 << 32
    return (q + (0xFF if q < 0 else 0)) >> 8


def main():
    sys.path.insert(0, HERE)
    towns = load_towns()
    if not towns:
        print("no raw/town_props_capture*.json")
        return 1

    g = Gate()

    # ---- 1. site+0x79 and desc+0x1c, from the seed alone ---------------------
    tags = collections.Counter()
    subs = collections.Counter()
    for t in towns:
        pred = corner_tag(t["zone"][0], t["zone"][1], t["seed"])
        tags[(pred, t["fac"])] += 1
        g.eq("site+0x79 == the site-kind grid's corner tag",
             pred, t["fac"], "town %d,%d" % t["zone"])
        # The descriptor's own type and subtype. The ruin subtype selects the promotion's
        # sub-branch and had never been derived: 0x50ee5a-0x50ee95 reads the REGION SITE's
        # climate with no draw -- humid <= 0.8 -> 0, else temp > 0.8 -> 3, temp < 0.2 -> 2,
        # otherwise 0. It is constant within each of the 19 regions that hold a ruin here,
        # 0 disagreements, which is what says the climate is the SITE's and not the cell's.
        cell = desc_cell(t["zone"][0], t["zone"][1], t["seed"])
        subs[(t["ty"], cell["subtype"], t["sub"])] += 1
        g.eq("the descriptor's TYPE", cell["type"], t["ty"], "town %d,%d" % t["zone"])
        g.eq("desc+0x1c", cell["subtype"], t["sub"], "town %d,%d" % t["zone"])

    # ---- 2. the draw census --------------------------------------------------
    census = collections.Counter()
    for t in towns:
        for ra, v, n in t["draws"]:
            if PROMO_LO <= ra < PROMO_HI:
                census[ra] += 1
    for ra in sorted(census):
        g.eq("draw site %06x is one the branch structure predicts" % ra,
             ra in SITES, True, "census")

    # ---- 3. the replay -------------------------------------------------------
    replayed = skipped = 0
    perplot = collections.Counter()
    for t in towns:
        t["cellZone"] = (zone_of_cell(t["cx"]), zone_of_cell(t["cz"]))
        if not t["atSort"] or not t["late"]:
            skipped += 1
            continue
        if len(t["atSort"]) != len(t["late"]):
            skipped += 1
            continue
        w = "town %d,%d ty%d f%d" % (t["zone"][0], t["zone"][1], t["ty"], t["fac"])
        dr = Draws(t["draws"])
        try:
            P, log = promote(t, dr)
        except IndexError as e:
            g.eq("the replay consumes only the draws the capture holds", str(e), "", w)
            continue
        replayed += 1
        g.eq("every promotion draw is consumed, and no more", dr.done(), True, w)
        for gra, want in dr.seen:
            g.eq("draw return address", hex(gra), hex(want), w)
        for i, (a, b) in enumerate(zip(P, t["late"])):
            ok = (a["verdict"] == b["verdict"] and a["f10"] == b["f10"]
                  and a["rot"] == b["rot"])
            perplot[ok] += 1
            g.eq("plot %d role/+0x10/+0x14" % i,
                 (a["verdict"], a["f10"], a["rot"]),
                 (b["verdict"], b["f10"], b["rot"]), w)

    ok = g.report("the town builder's promotion pass")
    print("   %d towns; %d replayed against plotsLate, %d without both snapshots"
          % (len(towns), replayed, skipped))
    print("   site+0x79 confusion (derived, live): %s"
          % dict(sorted(tags.items())))
    print("   desc+0x1c (ftype, derived, live): %s"
          % dict(sorted(subs.items())))
    print("   promotion draws: %d over %d sites -- %s"
          % (sum(census.values()), len(census),
             ", ".join("%06x:%d" % (a, census[a]) for a in sorted(census))))
    print("   per-plot exact: %d of %d" % (perplot[True], perplot[True] + perplot[False]))
    print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
