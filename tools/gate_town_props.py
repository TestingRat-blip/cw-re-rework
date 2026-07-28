#!/usr/bin/env python3
"""Gate: the TOWN builder's prop layer (`FUN_004e28e0`).

`RE_zone_props.md` scoped this subsystem as "the town builder's three emitters",
`004e310a` / `004eaa7a` / `004ee3aa`.  None of those is an emitter, and none is a
function: each is an `8d 9b 00 00 00 00` MSVC alignment NOP that an `eb 06` hops over --
the three points where Ghidra split the builder's ~64 KB body.  Its real surface is

    56  FUN_004d6670   prop push_back        32  FUN_005287b0  Prop_settleOnTerrain
    12  FUN_004c84b0   prop record ctor      16  FUN_00524540  creature_spawn_builder
   170  rand() sites

The zone builder calls it at `0x51d452`, and only for feature type **1 or 5** -- two of the
five types `camp_populator` skips.  Towns are far too sparse to find by sweeping: a
256-zone sparse grid turned up one, in a zone at the edge of its town's radius that emitted
nothing.  The rig asks `cw_featuregen` -- already bit-exact -- for the type-1/5 feature
cells and goes straight to their own zones, which fire 67 for 67.

This gate does not derive record positions.  It establishes the layer's *contract*, which
is what a port needs first:

  1. **The settle/push contract.** Each of the 32 `Prop_settleOnTerrain` sites pairs with
     exactly one push site.  `ok` => the very next prop event is that push; `!ok` => no
     push.  The pushed record is byte-identical to the record `Prop_settleOnTerrain` left
     behind -- it rewrites Z in place and the caller pushes the mutated record.
  2. **The container.** Every push targets the town's own `site+0xc`, and the vector after
     the call is exactly what was there before plus every push, in order.  Nothing is
     inlined and nothing else writes to it while the builder runs.
  3. **The emitter table.** Each push site emits a fixed prop type, or one of a small
     fixed set.  The table below is the layer's shape; a port needs it before it needs
     coordinates.

⚠ One other function pushes props while the town builder runs: `FUN_00524540`
(`creature_spawn_builder`), which the census already listed.  The gate attributes pushes
by recorded return address and reports it separately rather than folding it in.

Reads raw/town_props_capture*.json (tools/frida_town_props.py --towns N).
"""
import collections
import glob
import json
import os
import struct
import sys

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")

TOWN = (0xE28E0, 0xF26F0)          # FUN_004e28e0 + its three NOP-split fragments
SPAWNER = (0x124540, 0x128422)     # FUN_00524540, the other pusher during a town build

# push-site -> the prop types it may emit.  Sites whose type never varies are listed with
# a single id; the `0x15`-`0x17` family is FUN_004f3630, which ends
# `type = rand() % 3 + 0x15` with a fixed size (3.5, 2.0, 3.0) -- read from the binary,
# not just observed.
F3630 = (0x15, 0x16, 0x17)
EMITTERS = {
    0xE3FAF: F3630, 0xE410F: F3630, 0xE427A: F3630, 0xE439A: F3630, 0xE445C: F3630,
    0xE4528: F3630, 0xE45F6: F3630, 0xE46B8: F3630, 0xE4786: F3630, 0xE484C: F3630,
    0xE4906: F3630, 0xE49CC: F3630,
    0xE4A90: (0x18, 0x19, 0x1A, 0x1B), 0xE4B54: (0x18, 0x19, 0x1A, 0x1B),
    0xE4C20: (0x18, 0x19, 0x1A, 0x1B), 0xE4CEC: (0x18, 0x19, 0x1A, 0x1B),
    0xE4DBA: (0x18, 0x19, 0x1A, 0x1B), 0xE4E88: (0x18, 0x19, 0x1A, 0x1B),
    0xE4F4E: (0x18, 0x19, 0x1A, 0x1B), 0xE5014: (0x18, 0x19, 0x1A, 0x1B),
    0xE5967: (0x34, 0x35, 0x36, 0x37), 0xE5B70: (0x34, 0x35, 0x36, 0x37),
    0xEB145: None, 0xEB2D5: None, 0xEB488: None, 0xEB618: None,
    0xEB7B4: None, 0xEB966: None, 0xEBAF4: None,
    0xEBCEE: (0x0C,),
    0xEBEC2: (0x1F,), 0xEBFEF: (0x1F,), 0xEC11C: (0x1F,), 0xEC249: (0x1F,),
    0xEC40A: (0x0C,),
    0xEC5AE: (0x10,), 0xEC6DB: (0x10,), 0xEC808: (0x10,), 0xEC935: (0x10,),
    0xECB14: (0x13,), 0xECC41: (0x13,), 0xECD6E: (0x13,), 0xECE9B: (0x13,),
    0xED149: None, 0xED26B: None, 0xED3AD: None, 0xED4CF: None,
    0xED617: None, 0xED737: None, 0xED878: None, 0xED99E: None,
    0xEFAC4: (0x12,), 0xEFC22: (0x12,), 0xEFD70: (0x12,), 0xEFECE: (0x12,),
}
# the four fence-post sites all emit type 0x12 at a size that identifies them apart from
# the 0x12 furniture the mixed sites emit
FENCE_SITES = (0xEFAC4, 0xEFC22, 0xEFD70, 0xEFECE)
FENCE_SIZE = (3.0, 0.4, 0.4)

# Three of the four-site groups place their records on a fixed stencil around a common
# anchor -- one record per site, at exactly these block offsets, every time.  (The fence
# group is NOT one of them: it walks the four sides of a plot boundary and its per-side
# counts differ, 14/13/14/14 in one town.)
STENCILS = {
    "type 0x1f": ((0xEBEC2, 0xEBFEF, 0xEC11C, 0xEC249),
                  ((0, 0), (7, 0), (4, -4), (4, 3))),
    "type 0x10": ((0xEC5AE, 0xEC6DB, 0xEC808, 0xEC935),
                  ((0, 0), (5, 0), (3, -3), (3, 2))),
    "type 0x13": ((0xECB14, 0xECC41, 0xECD6E, 0xECE9B),
                  ((0, 0), (6, 0), (0, 6), (6, 6))),
}


# THE PLOT LATTICE, read out of the builder's own scan loop (0x4e291d-0x4e2b60).
#
#   n     = 4 if featureType == 5 else 5          (cmove at 0x4e292a)
#   span  = 256 / n                               (0x4e29f0)
#   plot (r, c):  originX = zoneX*256 + (r*256)/n
#                 originY = zoneY*256 + (c*256)/n
#
# The OUTER loop index drives X and the INNER drives Y, while the plot record pointer
# advances by 28*n per inner step and 0x1c per outer step -- so the record index is
# `r + n*c`.  That is the array transpose.
def grid_n(ftype):
    return 4 if ftype == 5 else 5


# The twenty sites that place on a fixed plot-PERIMETER position: three per side for the
# 0x15-0x17 family, two per side for 0x18-0x1b.  Each is constant on the axis running
# along its side and jitters a couple of blocks in from the edge.
#   site -> (axis that is constant, its value)
PERIMETER = {
    0xE3FAF: ("x", 18), 0xE410F: ("x", 25), 0xE427A: ("x", 32),
    0xE439A: ("x", 18), 0xE445C: ("x", 25), 0xE4528: ("x", 32),
    0xE45F6: ("y", 18), 0xE46B8: ("y", 25), 0xE4786: ("y", 32),
    0xE484C: ("y", 18), 0xE4906: ("y", 25), 0xE49CC: ("y", 32),
    0xE4A90: ("x", 22), 0xE4B54: ("x", 28),
    0xE4C20: ("x", 22), 0xE4CEC: ("x", 28),
    0xE4DBA: ("y", 22), 0xE4E88: ("y", 28),
    0xE4F4E: ("y", 22), 0xE5014: ("y", 28),
}
# ...and the PERPENDICULAR axis of each of those twenty is `7 +/- 1` in from one edge or
# the other -- 6..8, or (span-7) +/- 1 = 43..45 at span 51.  It is NOT on the 13-block
# building lattice: the earlier revision listed these sites in LATTICE with a two-value
# residue set read off the 67-town capture alone, and the 25-zone capture immediately
# produced the third value (0xE3FAF's y residue 7).  Lesson 3 -- a set read off one
# sample.  The jitter axis is checked here instead, over both captures.
PERIMETER_EDGE = {
    0xE3FAF: "near", 0xE410F: "near", 0xE427A: "near",
    0xE439A: "far", 0xE445C: "far", 0xE4528: "far",
    0xE45F6: "far", 0xE46B8: "far", 0xE4786: "far",
    0xE484C: "near", 0xE4906: "near", 0xE49CC: "near",
    0xE4A90: "near", 0xE4B54: "near",
    0xE4C20: "far", 0xE4CEC: "far",
    0xE4DBA: "far", 0xE4E88: "far",
    0xE4F4E: "near", 0xE5014: "near",
}


# THE BUILDING SUB-LATTICE (0x4e6fe3-0x4e7217).  Inside each plot the builder walks a
# list of buildings, stepping a block offset by **13** per entry (`add [ebp-0x5c60], 0xd`
# at 0x4e7205; the interior emitters multiply their own index by 13 at 0x4ec9a8 and
# 0x4ec9ed).  So an interior prop's offset inside its plot is
#
#     offset = residue + 13 * cell,   cell in 0..3
#
# with `residue` fixed per site and axis -- the prop's place inside a 13x13 building
# footprint.  This is what the earlier "27-block window" reading got wrong: reporting
# min..max hid that the offsets take only three or four values, not twenty-seven.
LATTICE_STEP = 13
# (the twenty PERIMETER sites are deliberately absent -- see PERIMETER_EDGE above)
LATTICE = {
    0xEB145: ((8, 9), (11,)), 0xEB2D5: ((8, 9), (3,)), 0xEB488: ((5, 6), (11,)),
    0xEB618: ((5, 6), (3,)), 0xEB7B4: ((11,), (8, 9)), 0xEB966: ((11,), (5, 6)),
    0xEBAF4: ((3,), (5, 6)), 0xEBCEE: ((1,), (1,)),
    0xEBEC2: ((10,), (1,)), 0xEBFEF: ((4,), (1,)), 0xEC11C: ((1,), (10,)),
    0xEC249: ((1,), (4,)), 0xEC40A: ((1,), (1,)),
    0xEC5AE: ((11,), (1,)), 0xEC6DB: ((3,), (1,)), 0xEC808: ((1,), (11,)),
    0xEC935: ((1,), (3,)),
    0xECB14: ((11,), (11,)), 0xECC41: ((4,), (11,)), 0xECD6E: ((11,), (4,)),
    0xECE9B: ((4,), (4,)),
    0xED149: ((5,), (11,)), 0xED26B: ((5,), (4,)), 0xED3AD: ((9,), (11,)),
    0xED4CF: ((9,), (4,)), 0xED617: ((11,), (5,)), 0xED737: ((4,), (5,)),
    0xED878: ((11,), (9,)), 0xED99E: ((4,), (9,)),
    0xEFAC4: ((11, 12), (3, 4)), 0xEFC22: ((11, 12), (7, 8)),
    0xEFD70: ((3, 4), (11, 12)), 0xEFECE: ((7, 8), (11, 12)),
}
# the two sites that run a fence ALONG a plot edge instead: one axis picks an edge, the
# other steps two blocks at a time down the side
FENCE_LINE = {0xE5967: "y", 0xE5B70: "x"}

# THE HOUSE PASS.  A plot gets a house iff its post-promotion role (plot record +0xc) is
# 2, and every house is the SAME fixed 3x3 module grid: FUN_004e1f80(house, 3, 3, 4),
# hard-coded at the one call site (0x4e6520-0x4e6526).  The module accessors FUN_004d8dc0
# / FUN_004d8de0 return +0x64 or +0x68 depending on the house's rotation bit -- the same
# footprint swap Prop_settleOnTerrain does -- and both are 3, so the swap is invisible.
# That is where the interior emitters' 13-block lattice comes from: they walk i, j over
# the house's 3x3 modules.
HOUSE_ROLE = 2
HOUSE_MODULES = (3, 3, 4)
ANCHOR_SITE = 0xECB14        # the 0x13 group's anchor, one per house that places

# THE PROMOTION PASS (0x4e31c7-0x4e37aa).  Phase 3 writes a VERDICT into the plot record's
# +0xc -- 2 for a plain buildable plot, 0 for a culled one, 6 and 7 for two special kinds.
# `FUN_004e19f0` then sorts a candidate index array by score, and the pass POPS entries off
# it, overwriting +0xc with a special role.  Every pop is either "take the last" or
# `rand() % remaining` followed by a memmove that removes it, so a given special role can
# only ever land on ONE plot per town.  What is left holding verdict 2 gets a house.
SINGLE_POP_ROLES = {3, 5, 9, 10, 11, 12, 13, 14, 15, 16, 20}
# Which special roles a town can hand out is decided by `[esi+0x79]` -- and esi is the
# builder's param_1, the SITE, not the world.  (world+0x79 reads 0 in every headless town,
# which is what gave that away.)  The sets are disjoint, and 1/2/3 always hand out theirs
# in full; faction 0's three are conditional on further tests.
FACTION_ROLES = {0: {5, 18, 20}, 1: {9}, 2: {14, 15, 16}, 3: {3, 10, 11, 12, 13}}
FACTION_ALWAYS = {1, 2, 3}
PLAIN_VERDICT = 2
CULL_SPAN = 0x10             # Phase 3: a plot whose maxH - minH exceeds this is not a 2


def rec(b):
    b = bytes(b)
    return {"type": struct.unpack_from("<i", b, 0)[0],
            "pos": [struct.unpack_from("<q", b, 8 + i * 8)[0] for i in range(3)],
            "dir": struct.unpack_from("<i", b, 0x20)[0],
            "size": tuple(round(struct.unpack_from("<f", b, 0x24 + i * 4)[0], 2)
                          for i in range(3))}


def in_town(r):
    return TOWN[0] <= r < TOWN[1]


class Gate:
    def __init__(self):
        self.n, self.bad = 0, []

    def eq(self, what, got, want, where):
        self.n += 1
        if got != want:
            g, wt = repr(got), repr(want)
            if len(g) > 120:
                g = g[:117] + "..."
            if len(wt) > 120:
                wt = wt[:117] + "..."
            self.bad.append("%s  %s: %s != %s" % (where, what, g, wt))

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


def events(h):
    """Settles and pushes interleaved in the order they happened."""
    out, si, pi = [], 0, 0
    S, P = h["settles"], h["pushes"]
    while si < len(S) or pi < len(P):
        if pi >= len(P) or (si < len(S) and S[si]["n"] <= P[pi]["n"]):
            out.append(("s", S[si]))
            si += 1
        else:
            out.append(("p", P[pi]))
            pi += 1
    return out


def contract(h, g, pairs):
    w = "%d,%d" % tuple(h["zone"])
    ev = events(h)
    for i, (k, e) in enumerate(ev):
        if k != "s" or not in_town(e["ra"]):
            continue
        nxt = ev[i + 1] if i + 1 < len(ev) else None
        if e["ok"]:
            g.true("a passing placement test is followed by a push",
                   nxt is not None and nxt[0] == "p", w)
            if nxt and nxt[0] == "p":
                pairs[e["ra"]].add(nxt[1]["ra"])
                g.eq("the pushed record is the one the test left behind",
                     nxt[1]["rec"], e["after"], w)
        else:
            g.true("a failing placement test pushes nothing",
                   not (nxt and nxt[0] == "p" and nxt[1]["n"] == e["n"]), w)


def copied(b):
    """A record as push_back stores it.

    The copy skips word 1: `FUN_004e0740`'s inlined push writes `*dst = *src` then
    `dst[2] = src[2]`, never `dst[1]`, and the live records confirm `+4` differs between
    the source record and the vector copy.  Compare without it.
    """
    b = bytes(b)
    return b[:4] + b[8:]


def container(h, g, residual):
    w = "%d,%d" % tuple(h["zone"])
    vecs = {p["vec"] for p in h["pushes"]}
    g.true("every push during the build targets one vector", len(vecs) <= 1, w)
    if h.get("props") is None:
        return
    got = [copied(r) for r in h["props"][h["props0"]:]]
    want = [copied(p["rec"]) for p in h["pushes"]]
    g.true("the vector only grew", len(got) >= len(want), w)
    it = iter(got)
    g.true("every pushed record is in the vector, in push order",
           all(any(a == b for b in it) for a in want), w)
    # what is left arrives through an INLINED push_back, so no hook can see it.  The only
    # emitter that runs during a town build and has one is FUN_00524540, whose two
    # FUN_004ce8e0 sites (0x525134 / 0x52525e) push into `[edi+0xc]` -- the same vector.
    extra = collections.Counter(got)
    extra.subtract(collections.Counter(want))
    for k, v in extra.items():
        if v > 0:
            residual[struct.unpack_from("<i", k, 0)[0]] += v
    g.true("records with no out-of-line push are types 1 or 2",
           all(struct.unpack_from("<i", k, 0)[0] in (1, 2)
               for k, v in extra.items() if v > 0), w)


def emitters(h, g, seen):
    w = "%d,%d" % tuple(h["zone"])
    for p in h["pushes"]:
        if not in_town(p["ra"]):
            continue
        r = rec(p["rec"])
        seen[p["ra"]][(r["type"], r["size"])] += 1
        allowed = EMITTERS.get(p["ra"], "?")
        if allowed == "?":
            g.true("push site %#x is in the emitter table" % p["ra"], False, w)
        elif allowed is not None:
            g.true("push site %#x emits one of %s, got %#x"
                   % (p["ra"], [hex(x) for x in allowed], r["type"]),
                   r["type"] in allowed, w)
        if p["ra"] in FENCE_SITES:
            g.eq("the fence sites' size", r["size"], FENCE_SIZE, w)
        if allowed == F3630:
            # FUN_004f3630 sets the size unconditionally
            g.eq("the FUN_004f3630 family's size", r["size"], (3.5, 2.0, 3.0), w)


def geometry(h, g, centred):
    """What is settled about where a town prop lands.

    Z is never the emitter's choice -- `Prop_settleOnTerrain` writes it and the caller
    pushes the mutated record -- so it is always a whole number of blocks.  The X/Y
    +0x8000 block-centre bias is a per-site decision, not a global one.  And three of the
    four-site groups lay their records on a fixed stencil around a shared anchor.
    """
    w = "%d,%d" % tuple(h["zone"])
    for p in h["pushes"]:
        r = rec(p["rec"])
        g.true("Z is a whole number of blocks", r["pos"][2] % 0x10000 == 0, w)
        k = p["ra"] if in_town(p["ra"]) else "creature_spawn_builder"
        centred[k][r["pos"][0] % 0x10000 == 0x8000
                   and r["pos"][1] % 0x10000 == 0x8000] += 1
    for name, (ras, stencil) in STENCILS.items():
        by = {ra: collections.Counter(
            (rec(p["rec"])["pos"][0] // 0x10000, rec(p["rec"])["pos"][1] // 0x10000)
            for p in h["pushes"] if p["ra"] == ra) for ra in ras}
        for anchor in by[ras[0]]:
            g.true("%s sits on its stencil" % name,
                   all(by[ra].get((anchor[0] + dx, anchor[1] + dy), 0) > 0
                       for ra, (dx, dy) in zip(ras[1:], stencil[1:])), w)


def lattice(h, g, spread):
    """Every town prop lands in a plot of the derived lattice."""
    w = "%d,%d" % tuple(h["zone"])
    ft = struct.unpack_from("<I", bytes(h["desc"]), 0x18)[0]
    n = grid_n(ft)
    g.eq("the plot array is n*n with n from the feature type",
         h.get("plotCount"), n * n, w)
    # The prop layer is village-only: type 5 (ruins) builds a town -- houses included --
    # and emits no props at all.  ONE-DIRECTIONAL: a village need not emit.  The earlier
    # revision asserted the biconditional, which held only because every town of the
    # 67-town capture is its town's ANCHOR zone; the 25-zone block capture reaches the
    # town's edge zones, where 21 villages emit nothing (lesson 9 -- a gate proven in one
    # class of world has not been proven in the class it never ran in).
    if any(in_town(p["ra"]) for p in h["pushes"]):
        g.eq("props are emitted only by villages", ft, 1, w)
    zx, zz = h["zone"]
    for p in h["pushes"]:
        if not in_town(p["ra"]):
            continue
        r = rec(p["rec"])
        dx = r["pos"][0] // 0x10000 - zx * 256
        dy = r["pos"][1] // 0x10000 - zz * 256
        g.true("the record is inside its own zone", 0 <= dx < 256 and 0 <= dy < 256, w)
        if not (0 <= dx < 256 and 0 <= dy < 256):
            continue
        pr, pc = dx * n // 256, dy * n // 256
        ox, oy = dx - (pr * 256) // n, dy - (pc * 256) // n
        spread[p["ra"]].append((ox, oy))
        if p["ra"] in LATTICE:
            rx, ry = LATTICE[p["ra"]]
            g.true("interior site %#x sits on the 13-block building lattice" % p["ra"],
                   ox % LATTICE_STEP in rx and oy % LATTICE_STEP in ry
                   and 0 <= ox // LATTICE_STEP <= 3 and 0 <= oy // LATTICE_STEP <= 3, w)
        if p["ra"] in FENCE_LINE:
            span = 256 // n
            edge, along = (oy, ox) if FENCE_LINE[p["ra"]] == "y" else (ox, oy)
            g.true("fence-line site %#x runs along a plot edge" % p["ra"],
                   edge in (0, span) and along % 2 == 1 and 1 <= along <= span - 2, w)
        if p["ra"] in PERIMETER:
            axis, val = PERIMETER[p["ra"]]
            g.eq("perimeter site %#x is fixed on %s" % (p["ra"], axis),
                 ox if axis == "x" else oy, val, w)
            span = 256 // n
            jitter = oy if axis == "x" else ox
            base = 7 if PERIMETER_EDGE[p["ra"]] == "near" else span - 7
            g.true("perimeter site %#x jitters 7 +/- 1 in from its edge" % p["ra"],
                   abs(jitter - base) <= 1, w)


def house_pass(h, g, tally):
    """Which plots get a house, and how big it is."""
    ft = struct.unpack_from("<I", bytes(h["desc"]), 0x18)[0]
    if ft != 1 or not h.get("plotsLate"):
        return
    w = "%d,%d" % tuple(h["zone"])
    n, (zx, zz) = grid_n(ft), h["zone"]
    plots = [bytes(p) for p in h["plotsLate"] if p]
    if len(plots) != n * n:
        return
    for c in h.get("houses") or []:
        g.eq("every house is the same fixed module grid", tuple(c[:3]), HOUSE_MODULES, w)
    role2 = [k for k, pl in enumerate(plots)
             if struct.unpack_from("<i", pl, 0xc)[0] == HOUSE_ROLE]
    g.eq("a house is built for exactly the plots whose role is 2",
         len(h.get("houses") or []), len(role2), w)
    anchors = set()
    for p in h["pushes"]:
        if p["ra"] != ANCHOR_SITE:
            continue
        r = rec(p["rec"])
        dx = r["pos"][0] // 0x10000 - zx * 256
        dy = r["pos"][1] // 0x10000 - zz * 256
        anchors.add((dx * n // 256) + n * (dy * n // 256))
    g.true("every interior anchor sits on a plot that has a house",
           anchors <= set(role2), w)
    tally["houses"] += len(h.get("houses") or [])
    tally["anchors"] += len(anchors)


def promotion(h, g, tally):
    """Phase 3's verdict, and what the promotion pass does to it."""
    if not h.get("plotsAtSort") or not h.get("plotsLate"):
        return
    w = "%d,%d" % tuple(h["zone"])
    S = [bytes(p) for p in h["plotsAtSort"] if p]
    L = [bytes(p) for p in h["plotsLate"] if p]
    if len(S) != len(L) or not S:
        return
    late = collections.Counter()
    for a, b in zip(S, L):
        minh, maxh = (struct.unpack_from("<i", a, o)[0] for o in (0, 4))
        verdict = struct.unpack_from("<i", a, 0xC)[0]
        role = struct.unpack_from("<i", b, 0xC)[0]
        late[role] += 1
        g.true("a plot whose height span exceeds 16 is never a plain buildable plot",
               not (maxh - minh > CULL_SPAN and verdict == PLAIN_VERDICT), w)
        if verdict != PLAIN_VERDICT:
            g.eq("only plain plots are promoted; the rest keep their verdict",
                 role, verdict, w)
        else:
            tally["candidates"] += 1
    fa = h.get("faction")
    special = {r for r in late if r not in (0, PLAIN_VERDICT, 6, 7)}
    if fa in FACTION_ROLES:
        g.true("a town only hands out its own faction's special roles",
               special <= FACTION_ROLES[fa], w)
        if fa in FACTION_ALWAYS:
            g.eq("and a faction 1/2/3 town hands out all of them",
                 special, FACTION_ROLES[fa], w)
    for r in SINGLE_POP_ROLES:
        g.true("special role %d is a single pop, so at most one plot has it" % r,
               late[r] <= 1, w)
    tally["promoted"] += sum(v for r, v in late.items()
                             if r not in (0, PLAIN_VERDICT))
    tally["plain"] += late[PLAIN_VERDICT]
    tally["culled_late"] += 0


def main():
    names = sorted(glob.glob(os.path.join(RAW, "town_props_capture*.json")))
    if not names:
        print("no raw/town_props_capture*.json -- run tools/frida_town_props.py --towns 5")
        return 1
    ok, any_hit = True, False
    for f in names:
        hits = json.load(open(f))["hits"]
        if not hits:
            print("== %s  no town fired -- it proves nothing" % os.path.basename(f))
            continue
        any_hit = True
        print("== %s  %d towns" % (os.path.basename(f), len(hits)))

        pairs = collections.defaultdict(set)
        g = Gate()
        for h in hits:
            contract(h, g, pairs)
        multi = {hex(k): [hex(x) for x in v] for k, v in pairs.items() if len(v) != 1}
        g.eq("each placement-test site pairs with exactly one push site", multi, {}, "-")
        ok &= g.report("the settle/push contract")

        g = Gate()
        residual = collections.Counter()
        for h in hits:
            container(h, g, residual)
        ok &= g.report("every prop lands in the town's own site+0xc, in push order")

        g = Gate()
        seen = collections.defaultdict(collections.Counter)
        for h in hits:
            emitters(h, g, seen)
        ok &= g.report("each push site's prop type is the one the table says")

        g = Gate()
        centred = collections.defaultdict(collections.Counter)
        for h in hits:
            geometry(h, g, centred)
        ok &= g.report("Z comes from the placement test, and the fixed stencils hold")
        always = sum(1 for v in centred.values() if not v[False])
        never = sum(1 for v in centred.values() if not v[True])
        print("   block-centred X/Y is a per-site choice: %d sites always, %d never, "
              "%d mixed" % (always, never, len(centred) - always - never))

        g = Gate()
        spread = collections.defaultdict(list)
        for h in hits:
            lattice(h, g, spread)
        ok &= g.report("every record lands in a plot of the derived lattice")
        tight = sum(1 for v in spread.values()
                    if max(a for a, _ in v) - min(a for a, _ in v) <= 2
                    and max(b for _, b in v) - min(b for _, b in v) <= 2)
        print("   within-plot offsets: %d of %d sites fixed to within 2 blocks on both "
              "axes; %d sit on the 13-block building lattice; %d run along a plot edge"
              % (tight, len(spread),
                 len([r for r in spread if r in LATTICE]),
                 len([r for r in spread if r in FENCE_LINE])))

        g = Gate()
        tally = collections.Counter()
        for h in hits:
            house_pass(h, g, tally)
        ok &= g.report("the house pass: role 2 gets a fixed 3x3 house")
        print("   %d houses built, %d of them placed their interior anchor (the rest "
              "failed the emitter's own block test)"
              % (tally["houses"], tally["anchors"]))

        g = Gate()
        tally = collections.Counter()
        for h in hits:
            promotion(h, g, tally)
        ok &= g.report("the promotion pass rewrites only plain plots")
        print("   %d plain plots after Phase 3; %d kept plain (and got a house), "
              "%d promoted to a special role"
              % (tally["candidates"], tally["plain"], tally["promoted"]))
        fac = collections.Counter(x.get("faction") for x in hits)
        print("   site+0x79 over the sample: %s   (world+0x79: %s)"
              % (dict(fac),
                 dict(collections.Counter(x.get("worldFaction") for x in hits))))

        npush = sum(len(h["pushes"]) for h in hits)
        own = sum(1 for h in hits for p in h["pushes"] if in_town(p["ra"]))
        spawner = sum(1 for h in hits for p in h["pushes"]
                      if SPAWNER[0] <= p["ra"] < SPAWNER[1])
        print("   %d props pushed: %d by the town builder, %d by creature_spawn_builder,"
              " %d unattributed" % (npush, own, spawner, npush - own - spawner))
        print("   %d of its 56 push sites fired; %d placement-test sites, all paired"
              % (len(seen), len(pairs)))
        print("   %d further records arrive with no out-of-line push (types %s) -- "
              "FUN_00524540's INLINED push_back at 0x525134 / 0x52525e, which no hook "
              "on FUN_004d6670 can see"
              % (sum(residual.values()), sorted(residual)))
        print("   %d creature_spawn_builder calls from %d sites"
              % (sum(len(h["spawncalls"]) for h in hits),
                 len({s["ra"] for h in hits for s in h["spawncalls"]})))
        print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    if not any_hit:
        print("no capture contains a town -- nothing was gated")
        return 1
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
