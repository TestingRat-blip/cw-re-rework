#!/usr/bin/env python3
"""Gate: `FUN_005104e0`, the overworld ENCAMPMENT populator.

`RE_zone_props.md` found this function by censusing `FUN_004ce8e0` instead of the
out-of-line `push_back`, and could only prove it was *a* prop emitter.  It is the
overworld camp builder: the zone builder hands it a grid of candidate positions and it
turns them into creature spawns (`site+0x18`) and camp props (`site+0xc`).

    FUN_005104e0(world, site, featureDescriptor, &candidates, 5)      @0x51eac7

`FUN_00518630` calls it only when the zone's feature type is not in {0, 1, 5, 0xa, 0xe},
after filtering a 14x14 grid (step 18 blocks, 0..234) down to the candidates that survive
a `World_objectFalloffWeight` roll -- so most zones never reach it, and a zone far from
its feature reaches it with an empty candidate list.

## The prologue -- fully deterministic apart from at most two draws

It first builds a list of CAMP KINDS from the feature type alone:

    type 4          -> [9]
    type 2 or 0xd   -> [0,1,2,3,4,5,1,7,8]
    type 3          -> [0,1,2,3,4,5,1,7,8,6,10]
    otherwise       -> [0,1,2,3,4,5,1,7,8,6]

then picks `kind = list[desc[+0x20] % len(list)]` -- an UNSIGNED modulus of a descriptor
field, **no rand at all** -- and runs a 10-way jump table on `kind - 1` (`0x510728`,
table at `0x5133b0`; kind 0 or > 10 takes the default arm).  Each arm fills

  * a PROP id list (`local_420`),
  * one or more SPECIES GROUPS (0x18 bytes = two `vector<int>`, leader list at +0 and
    companion list at +0xc), pushed into a group vector.

Arms 1-5 and the default spend one or two `rand()`s choosing species; arms 6-10 spend
none.  The default arm is the only one that does **not** call `FUN_004f7540` -- it
zeroes the group inline, so a gctor count of 0 identifies it.

Every arm ends by resetting the group's two lists to the PROP ids and pushing the group
again, so the last group is always the prop-id pair.  Arm 7 resets only the companion
list before its third push, which leaves `[0x3c, 0x34]` in the leader list -- the gate
checks the captured contents rather than assuming.

## The per-candidate branch

    leader index = -1 unless the descriptor's own zone == this zone (0x5118e0);
    when set, it is the candidate with the largest falloff weight.

    for each candidate i:
        if i != leader:
            if rand() % 2 != 0: skip this candidate          (0x511b4b)
            if rand() % 2 == 0: -> CREATURE branch           (0x511b95)
        -> STRUCTURE branch (or CREATURE if the prop list is empty)

    STRUCTURE (0x511ba9): dir = rand()%4, a 3x3 Prop_settleOnTerrain sweep at 0x511dbf,
        a four-candidate scatter tested at 0x512380, and one Spawn pushed at 0x512b12.
    CREATURE (0x512b3e): pick a group with rand(), then a facing rand()%360, a species
        from the group's leader list, up to 3 walk-path waypoints, one Spawn pushed at
        0x512f72, then rand()%3+1 companions pushed at 0x513218.

Reads raw/zone_camp_capture*.json (tools/frida_zone_camp.py).
"""
import collections
import glob
import json
import os
import struct
import sys

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")

# rand() return-address RVAs.  Every arm's own draws sit below R_PROLOGUE_END; the
# main loop's start at the first coin.
R_PROLOGUE_END = 0x111631
R_COIN1, R_COIN2 = 0x111B4D, 0x111B97
R_STRUCT_DIR = 0x111CE6
R_SCAT_TYPE, R_SCAT_DIR = 0x1121FF, 0x1122CD
# the structure branch's tail: a camp ring of 1-3 creatures
R_RING_ANGLE, R_RING_COUNT, R_RING_SPECIES = 0x112709, 0x11272F, 0x1128AA
# the creature branch
R_CR_GROUP, R_CR_FACING, R_CR_SPECIES = 0x112B67, 0x112BF3, 0x112C5B
R_CR_WAYPOINT, R_CR_COMPCOUNT, R_CR_COMPSPECIES = 0x112DE9, 0x112F98, 0x113036
# arms 6-10 leave the prop flag ([ebp-0x3f9]) clear, and 0x511bbb jumps their structure
# branch straight past the prop placement into the ring
FLAGGED = {1, 2, 3, 4, 5, "d"}

# the flagged structure branch places props with the SAME shapes FUN_004e0740 uses: a
# type-0x41 anchor swept over a 3x3 block grid, then four candidates at +-3.5 blocks
# drawing from the same four-id table (Docs/RE_zone_props.md)
ONE, BIAS = 0x10000, 229376
ANCHOR_TYPE, ANCHOR_SIZE = 0x41, (2.4, 2.4, 0.5)
SCATTER = {1: (0x10, (1.0, 1.0, 0.5)), 2: (0x0C, (3.0, 3.0, 1.0)),
           3: (0x45, (2.0, 2.0, 0.1)), 0: (0x42, (4.0, 4.0, 3.0))}
SCATTER_OFF = [(0, 0), (0, 7), (7, 0), (7, 7)]
# push_back return-address RVAs into site+0x18
P_STRUCT, P_LEADER, P_COMPANION = 0x112B18, 0x112F78, 0x11321E
# Prop_settleOnTerrain call sites
S_ANCHOR, S_SCATTER = 0x111DBF, 0x112380

# each arm is a program: ('P', v) prop id · ('C',) group ctor · (0|1, v) push to the
# group's leader/companion list · ('R', 0|1) reset that list · ('G',) push the group ·
# ('r', mod, {roll: [steps]}) draw rand() % mod and run the matching steps
ARMS = {
    1: [("P", 0x0F), ("P", 0x10), ("C",),
        ("r", 4, {0: [(0, 0x11)], 1: [(0, 0x29)], 2: [(0, 0x61)], 3: []}),
        ("r", 4, {0: [(1, 0x28), (1, 0x25), (1, 0x26), (1, 0x27)],
                  1: [(1, 0x3B)], 2: [(1, 0x29)], 3: [(1, 0x60)]}),
        ("G",), ("R", 0), ("R", 1),
        (0, 0x0F), (0, 0x10), (1, 0x0F), (1, 0x10), ("G",)],
    2: [("P", 2), ("P", 3), ("C",),
        ("r", 3, {0: [(0, 0x5E)], 1: [(0, 0x4F)], 2: [(0, 0x52)]}),
        ("r", 4, {0: [(1, 0x1E)], 1: [(1, 0x1A)], 2: [(1, 0x13)], 3: [(1, 0x21)]}),
        ("G",), ("R", 0), ("R", 1),
        (0, 2), (0, 3), (1, 2), (1, 3), ("G",)],
    3: [("P", 9), ("P", 10), ("C",),
        ("r", 2, {0: [(0, 0x2F)], 1: [(0, 0x58)]}),
        ("r", 3, {0: [(1, 0x57)], 1: [(1, 0x5B)], 2: [(1, 0x21)]}),
        ("G",), ("R", 0), ("R", 1),
        (0, 9), (0, 10), (1, 9), (1, 10), ("G",)],
    4: [("P", 7), ("P", 8), ("C",), (0, 7), (0, 8),
        ("r", 3, {0: [(1, 0x3C)], 1: [(1, 0x35)], 2: [(1, 0x3A)]}),
        ("G",), ("R", 0), ("R", 1),
        (0, 7), (0, 8), (1, 7), (1, 8), ("G",)],
    5: [("P", 4), ("P", 5), ("C",), (0, 0x58), (1, 0x57), (1, 0x37), (1, 0x3C),
        ("G",), ("R", 0), ("R", 1),
        (0, 4), (0, 5), (1, 4), (1, 5), ("G",)],
    6: [("P", 0x46), ("P", 0x45), ("C",), (0, 0x47), (1, 0x47),
        ("G",), ("R", 0), ("R", 1),
        (0, 0x46), (0, 0x45), (1, 0x46), (1, 0x45), ("G",)],
    7: [("P", 0x34), ("C",), (0, 0x3E), (1, 0x3E),
        ("G",), ("R", 0), ("R", 1), (0, 0x3C), (1, 0x3C),
        # only the COMPANION list is reset before the third push, so the leader list
        # keeps 0x3c and ends up [0x3c, 0x34]
        ("G",), ("R", 1), (0, 0x34), (1, 0x34), ("G",)],
    8: [("P", 0x66), ("P", 0x69), ("P", 0x68), ("C",), (0, 0x68), (1, 0x68),
        ("G",), ("R", 0), ("R", 1), (0, 0x66), (1, 0x66),
        ("G",), ("R", 0), ("R", 1), (0, 0x69), (1, 0x69), ("G",)],
    9: [("P", 0x56), ("P", 0x6A), ("C",), (0, 0x56), (1, 0x56),
        ("G",), ("R", 0), ("R", 1), (0, 0x6A), (1, 0x6A), ("G",)],
    10: [("P", 0x23), ("P", 0x5A), ("P", 0x5B), ("C",), (0, 0x23), (1, 0x23),
         ("G",), ("R", 0), ("R", 1), (0, 0x5A), (1, 0x5A),
         ("G",), ("R", 0), ("R", 1), (0, 0x5B), (1, 0x5B), ("G",)],
    # kind 0 or > 10: the jump table's default.  No FUN_004f7540 -- the group is zeroed
    # inline, which is what a gctor count of 0 identifies.
    "d": [("P", 0x0B), ("P", 0x0C), (0, 0x2E), (1, 0x13), (1, 0x21), (1, 0x1A),
          ("G",), ("R", 0), ("R", 1),
          (0, 0x0B), (0, 0x0C), (1, 0x0B), (1, 0x0C), ("G",)],
}


REDERIVE = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                         "..", "..", "cw_rederive"))
_TOOLKIT = {}


def derived_descriptor(zx, zz):
    """The descriptor DERIVED from the seed -- the feature cell containing the zone.

    This gate used to read the camp KIND straight out of the captured descriptor
    (`desc[+0x20]`), which was the last captured input in the whole camp path. That field
    is the region's running MISSION counter: it starts at the region's third setup draw
    (rand()%10000) and advances by 1 + rand()%0x32 per popped Loop-C candidate, and a cell
    keeps the value from BEFORE its own advance (Docs/RE_camp_descriptor.md). Returns None
    if cw_rederive is not importable, in which case the gate falls back to the capture."""
    if "mod" not in _TOOLKIT:
        try:
            sys.path.insert(0, REDERIVE)
            import cw_seed
            import cw_featuregrid
            cw_seed.configure(42069)
            _TOOLKIT["mod"] = cw_featuregrid
        except Exception as exc:                                  # pragma: no cover
            print("   (cw_rederive not importable: %s)" % exc)
            _TOOLKIT["mod"] = None
    m = _TOOLKIT["mod"]
    if m is None:
        return None
    c = m.cell_for_column(zx * 256 + 128, zz * 256 + 128)
    return {"type": c["type"], "mission": c.get("mission", -1),
            "level": c.get("level", -1), "msub": c.get("msub", -1)}


def kind_list(ftype):
    if ftype == 4:
        return [9]
    lst = [0, 1, 2, 3, 4, 5, 1, 7, 8]
    if ftype not in (0xD, 2):
        lst.append(6)
    if ftype == 3:
        lst.append(10)
    return lst


def run_arm(kind, rolls):
    """Replay an arm.  `rolls` is the prologue's rand values, consumed in order.

    Returns (prop ids, [group contents as (leader, companion)], gctor count, draws used).
    """
    prog = ARMS.get(kind, ARMS["d"])
    props, groups, lists, gctor, used = [], [], ([], []), 0, 0
    for step in prog:
        if step[0] == "P":
            props.append(step[1])
        elif step[0] == "C":
            gctor += 1
        elif step[0] == "R":
            lists[step[1]].clear()
        elif step[0] == "G":
            groups.append(([list(lists[0]), list(lists[1])]))
        elif step[0] == "r":
            _, mod, table = step
            if used >= len(rolls):
                return props, groups, gctor, used, False
            roll = rolls[used] % mod
            used += 1
            for w, v in table.get(roll, []):
                lists[w].append(v)
        else:
            lists[step[0]].append(step[1])
    return props, groups, gctor, used, True


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


def i64(b, off):
    return struct.unpack_from("<q", b, off)[0]


def prop(b):
    b = bytes(b)
    return {"type": struct.unpack_from("<i", b, 0)[0],
            "pos": [i64(b, 8 + i * 8) for i in range(3)],
            "dir": struct.unpack_from("<i", b, 0x20)[0],
            "size": tuple(round(struct.unpack_from("<f", b, 0x24 + i * 4)[0], 3)
                          for i in range(3))}


def props_placed(h, g, w):
    """The flagged structure branch reuses FUN_004e0740's two prop shapes verbatim."""
    dirs = [x[1] for x in h["draws"] if x[0] == R_STRUCT_DIR]
    types = [x[1] for x in h["draws"] if x[0] == R_SCAT_TYPE]
    sdirs = [x[1] for x in h["draws"] if x[0] == R_SCAT_DIR]
    anchors, run, k, ks = [], [], 0, 0
    for x in h["settles"]:
        if x["ra"] != S_ANCHOR:
            continue
        run.append(x)
        if x["ok"] or len(run) == 9:
            anchors.append(run)
            run = []
    for b, sweep in enumerate(anchors):
        if b >= len(dirs):
            break
        base = prop(sweep[0]["before"])["pos"]
        for i, x in enumerate(sweep):
            r = prop(x["before"])
            g.eq("anchor candidate %d is type 0x41 at (2.4, 2.4, 0.5)" % i,
                 (r["type"], r["size"]), (ANCHOR_TYPE, ANCHOR_SIZE), w)
            g.eq("anchor candidate %d direction" % i, r["dir"], dirs[b] % 4, w)
            g.eq("anchor candidate %d sits on the 3x3 block grid" % i,
                 [r["pos"][0] - base[0], r["pos"][1] - base[1]],
                 [(i // 3) * ONE, (i % 3) * ONE], w)
    # the scatter always runs, in the same order and at the same offsets
    scat = [x for x in h["settles"] if x["ra"] == S_SCATTER]
    for i, x in enumerate(scat):
        if i >= len(types) or i >= len(sdirs):
            break
        r = prop(x["before"])
        tid, tsize = SCATTER[types[i] % 4]
        ox, oy = SCATTER_OFF[i % 4]
        g.eq("scatter candidate %d type and size" % i,
             (r["type"], r["size"]), (tid, tsize), w)
        g.eq("scatter candidate %d direction" % i, r["dir"], sdirs[i] % 4, w)
        if i // 4 < len(anchors):
            # unlike FUN_004e0740 -- whose stage 2 offsets from the ORIGINAL anchor --
            # this scatter offsets from where the anchor was actually PLACED, falling
            # back to the anchor itself when the 3x3 sweep placed nothing
            sweep = anchors[i // 4]
            base = prop((sweep[-1] if sweep[-1]["ok"] else sweep[0])["before"])["pos"]
            g.eq("scatter candidate %d offset from the anchor" % i,
                 [r["pos"][0] - base[0], r["pos"][1] - base[1]],
                 [ox * ONE - BIAS, oy * ONE - BIAS], w)


def prologue(h, g, seen):
    zx, zz = h["zone"]
    w = "%d,%d" % (zx, zz)
    d = bytes(h["desc"])
    ftype = struct.unpack_from("<I", d, 0x18)[0]
    sel = struct.unpack_from("<I", d, 0x20)[0]

    # the whole descriptor is a function of the seed -- check it, then use the DERIVED
    # fields for the kind so nothing downstream depends on the capture
    dd = derived_descriptor(zx, zz)
    if dd is not None:
        g.eq("descriptor type, derived from the seed", dd["type"], ftype, w)
        g.eq("descriptor mission counter (+0x20), derived from the seed", dd["mission"], sel, w)
        g.eq("descriptor level (+0x24), derived from the seed", dd["level"],
             struct.unpack_from("<i", d, 0x24)[0], w)
        g.eq("descriptor msub (+0x28), derived from the seed", dd["msub"],
             struct.unpack_from("<i", d, 0x28)[0], w)
        ftype, sel = dd["type"], dd["mission"] & 0xFFFFFFFF

    g.true("the caller only reaches it for feature types outside {0,1,5,0xa,0xe}",
           ftype not in (0, 1, 5, 0xA, 0xE), w)

    want = kind_list(ftype)
    # the kind list is the run of pushes before the first prop/group push; they are the
    # only ones targeting that vector
    vecs = [x[1] for x in h["vpush"]]
    kvec = vecs[0] if vecs else None
    got = [x[2] for x in h["vpush"] if x[1] == kvec]
    g.eq("the camp-kind list is a function of the feature type alone", got, want, w)
    if got != want:
        return
    kind = want[sel % len(want)]
    seen[kind] += 1

    rolls = [x[1] for x in h["draws"] if x[0] < R_PROLOGUE_END]
    props, groups, gctor, used, ok = run_arm(kind, rolls)
    g.true("the arm's rand draws were all captured", ok, w)
    if not ok:
        return
    g.eq("prologue draws", used, len(rolls), w)
    g.eq("FUN_004f7540 runs once except on the default arm",
         len(h["gctor"]), gctor, w)

    rest = [x for x in h["vpush"] if x[1] != kvec]
    pvec = rest[0][1] if rest else None
    g.eq("the prop-id list is the arm's",
         [x[2] for x in rest if x[1] == pvec], props, w)
    g.eq("the species groups are the arm's, in order",
         [x[3] for x in h["gpush"]], groups, w)


def camp_kind(h):
    d = bytes(h["desc"])
    dd = derived_descriptor(*h["zone"])
    if dd is not None and dd["mission"] >= 0:
        ftype, sel = dd["type"], dd["mission"] & 0xFFFFFFFF
    else:
        ftype = struct.unpack_from("<I", d, 0x18)[0]
        sel = struct.unpack_from("<I", d, 0x20)[0]
    lst = kind_list(ftype)
    k = lst[sel % len(lst)]
    return k if k in ARMS else "d"


def candidates(h, g):
    kind = camp_kind(h)
    zx, zz = h["zone"]
    w = "%d,%d" % (zx, zz)
    d = bytes(h["desc"])
    # the descriptor's own zone: block coords >> 8, with MSVC's signed-divide bias
    hx, hy = i64(d, 0) // 0x10000, i64(d, 8) // 0x10000
    home = ((hx + (hx >> 31 & 0xFF)) >> 8, (hy + (hy >> 31 & 0xFF)) >> 8)
    ncand = len(h.get("cand") or [])

    coins = [x for x in h["draws"] if x[0] in (R_COIN1, R_COIN2)]
    # replay the branch decision, candidate by candidate, straight off the coin stream
    branches, k = [], 0
    while k < len(coins):
        if coins[k][0] != R_COIN1:
            break
        if coins[k][1] % 2 != 0:
            k += 1
            branches.append("skip")
            continue
        k += 1
        if k >= len(coins) or coins[k][0] != R_COIN2:
            break
        branches.append("creature" if coins[k][1] % 2 == 0 else "structure")
        k += 1
    g.eq("every coin draw was consumed by a candidate", k, len(coins), w)

    # the leader candidate jumps the two coins entirely, and every arm pushes at least
    # one prop id, so the leader always takes the structure branch
    leader = 1 if home == (zx, zz) and ncand else 0
    g.eq("one coin pair per candidate, minus the leader's shortcut",
         len(branches) + leader, ncand, w)
    nstruct = branches.count("structure") + leader
    ncreat = branches.count("creature")

    pr = collections.Counter(x[0] for x in h["vpush"])
    g.eq("one leader Spawn per creature branch", pr.get(P_LEADER, 0), ncreat, w)

    st = collections.Counter(x["ra"] for x in h["settles"])
    n = nstruct if kind in FLAGGED else 0
    # the anchor sweep is FUN_004e0740's stage 1 again: up to nine candidates, stopping
    # at the first that passes, and only then does the four-candidate scatter run
    runs, run = 0, 0
    for x in h["settles"]:
        if x["ra"] != S_ANCHOR:
            continue
        run += 1
        if x["ok"] or run == 9:
            runs += 1
            run = 0
    g.eq("the anchor sweep runs once per flagged structure branch, stopping at the "
         "first placement", (runs, run), (n, 0), w)
    # unlike FUN_004e0740, the scatter runs whether or not the anchor found a spot
    g.eq("four scatter placement tests per flagged structure branch, placed or not",
         st.get(S_SCATTER, 0), 4 * n, w)
    g.eq("one direction draw per flagged structure branch",
         len([x for x in h["draws"] if x[0] == R_STRUCT_DIR]), n, w)
    g.eq("a type and a direction draw per scatter candidate",
         (len([x for x in h["draws"] if x[0] == R_SCAT_TYPE]),
          len([x for x in h["draws"] if x[0] == R_SCAT_DIR])), (4 * n,) * 2, w)

    def draws(rva):
        return [x[1] for x in h["draws"] if x[0] == rva]

    # every structure branch ends in a CAMP RING: a base angle rand()*2pi/32767, a count
    # rand()%3 + 1, and that many creatures spaced 2pi/count apart, one species draw each
    g.eq("one ring-angle draw per structure branch", len(draws(R_RING_ANGLE)), nstruct, w)
    g.eq("one ring-count draw per structure branch", len(draws(R_RING_COUNT)), nstruct, w)
    ring = sum(v % 3 + 1 for v in draws(R_RING_COUNT))
    g.eq("the ring size is rand()%3 + 1, one species draw and one Spawn each",
         (len(draws(R_RING_SPECIES)), pr.get(P_STRUCT, 0)), (ring, ring), w)

    # the creature branch: group, facing, species, then 0 or 3 walk-path waypoints
    g.eq("one group / facing / species draw per creature branch",
         (len(draws(R_CR_GROUP)), len(draws(R_CR_FACING)), len(draws(R_CR_SPECIES))),
         (ncreat,) * 3, w)
    g.true("waypoints come three at a time or not at all",
           len(draws(R_CR_WAYPOINT)) % 3 == 0
           and len(draws(R_CR_WAYPOINT)) <= 3 * ncreat, w)
    comp = sum(v % 3 + 1 for v in draws(R_CR_COMPCOUNT))
    g.true("a companion count is drawn only when the group has a companion list",
           len(draws(R_CR_COMPCOUNT)) <= ncreat, w)
    g.eq("rand()%3 + 1 companions, one species draw and one Spawn each",
         (len(draws(R_CR_COMPSPECIES)), pr.get(P_COMPANION, 0)), (comp, comp), w)

    g.eq("every Spawn in site+0x18 came from one of the three push sites",
         len(h.get("spawns") or []),
         pr.get(P_STRUCT, 0) + pr.get(P_LEADER, 0) + pr.get(P_COMPANION, 0), w)
    return branches + ["leader"] * leader, home


def main():
    names = sorted(glob.glob(os.path.join(RAW, "zone_camp_capture*.json")))
    if not names:
        print("no raw/zone_camp_capture*.json -- run tools/frida_zone_camp.py")
        return 1
    ok = True
    for f in names:
        cap = json.load(open(f))
        hits = cap["hits"]
        print("== %s  %d zones, %d fired"
              % (os.path.basename(f), len(cap["zones"]), len(hits)))
        seen = collections.Counter()
        g = Gate()
        for h in hits:
            prologue(h, g, seen)
        ok &= g.report("the camp kind and its species tables, derived from the descriptor")

        g = Gate()
        tot = collections.Counter()
        for h in hits:
            br, home = candidates(h, g)
            tot.update(br)
            tot["home"] += home == tuple(h["zone"])
        ok &= g.report("the per-candidate branch, replayed from the coin draws")

        g = Gate()
        for h in hits:
            props_placed(h, g, "%d,%d" % tuple(h["zone"]))
        ok &= g.report("the camp's props are FUN_004e0740's two shapes, verbatim")

        print("   camp kinds seen: %s" % dict(sorted(seen.items())))
        print("   branches: %s" % dict(tot))
        print("   %d spawns, %d props"
              % (sum(len(h.get("spawns") or []) for h in hits),
                 sum(len(h.get("props") or []) for h in hits)))
        if not hits:
            print("   nothing fired in this capture -- it proves nothing")
        print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    if not any(json.load(open(f))["hits"] for f in names):
        print("no capture in raw/ contains a single firing -- nothing was gated")
        return 1
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
