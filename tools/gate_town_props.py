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
