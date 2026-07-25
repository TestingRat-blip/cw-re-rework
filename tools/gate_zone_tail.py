#!/usr/bin/env python3
"""Gate: the zone builder's TAIL between the mat-38 loop and emitter B.

    python tools/gate_zone_tail.py        # reads raw/zone_props2_capture.json, no server

`RE_zone_props.md` left emitter B (`0x51e5c7`) reachable only from its own three draws,
because a from-seed replay could not get to it: the draws between the mat-38 loop
(`0x51d396`) and emitter B run into the thousands and vary per zone, and twelve rand
sites in that span were unaccounted for. That was read as an un-RE'd stage -- "probably
the ground-plant scatter".

It is not a new stage. It is the **dense-forest tree pass**, which this project has had
RE'd and bit-exact for months under a different name (`cw_forest.py` / `CwForest`): the
14x14 candidate loop at `0x51dc5d` (stride 18, from the zone origin + 8) plus the tree
builder `lib_fn_513760`. The twelve "unaccounted" sites ARE that loop's own sites, and
the thousands of draws are 513760's -- invisible because `frida_zone_props2.py` records
only draws whose return address is inside the zone builder's body (`inRange`), while the
global draw counter it stamps on each record keeps counting through the builder. So the
capture already contained the proof; it just looked like a hole.

What this gate checks, per even zone, from the recorded return addresses alone:

  1. the loop runs exactly 196 = 14x14 candidates;
  2. every candidate's recorded draws follow the decoded branch structure (a legal path
     through the size/height/species/jungle/pocket/boost/keep state machine) -- this is
     what pins the decode, because a mis-read branch shows up as an illegal token order;
  3. every run of UNRECORDED draws sits immediately after a keep roll, i.e. the only
     thing spending draws off-book in this span is the tree builder;
  4. emitter B's first draw is the immediate successor of the loop's last keep roll --
     nothing whatever lies between the tree pass and emitter B;
  5. emitter B's pushed record derives from its three draws (X first, then Z, then dir).

Check 4 is the one that unblocks the port: it says a replay that walks the forest pass
arrives at emitter B exactly, which `cwgen`'s `rederive_zonepropsb` then confirms
ab initio (5/5 zones, 115 live trees, stream index exact).
"""
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
CAP = os.path.join(HERE, "..", "raw", "zone_props2_capture.json")

# The tree loop's rand sites, by RETURN address (capture rvas; +0x400000 = VA).
SIZE = 0x11DD8C      # 0x51dd86  size   = rand()%5 + temp*2 + 6 + boost*4
HEIGHT = 0x11DDDB    # 0x51ddd5  height = (rand()*8/32767 + boost*6 + 8) * (temp*0.5 + 1)
SP1 = 0x11E063       # 0x51e05d  type = (rand()&1) ? 5 : 0
SP2_HI = 0x11E093    # 0x51e08d  species noise  > 0.3 branch: rand()%10 != 0 -> type 1
SP2_LO = 0x11E0B1    # 0x51e0ab  species noise <= 0.3 branch: rand()%10 == 0 -> type 1
SP3 = 0x11E0D5       # 0x51e0cf  rand()%10 == 0 -> type 2
JUN1 = 0x11E15F      # 0x51e159  humid > 0.8 && temp > 0.7: type = 4 + (rand()&1)
JUN2 = 0x11E180      # 0x51e17a  rand()%4 == 0 -> type 3
R5_LO = 0x11E217     # 0x51e217  dry pocket   (0.2 < humid < 0.3, noise > 0.6)
R5_HI = 0x11E299     # 0x51e299  humid band   (0.3 <= humid < 0.7, noise > 0.8)
BOOST = 0x11E30D     # 0x51e307  type 2: height += rand() % (height/2)
KEEP = 0x11E3E7      # 0x51e3e1  rand()/32767 <= density(4d9010) + boost
LOOP_SITES = {SIZE, HEIGHT, SP1, SP2_HI, SP2_LO, SP3, JUN1, JUN2, R5_LO, R5_HI, BOOST, KEEP}

EB_X = 0x11E5DA      # 0x51e5d4  x = zx*256 + 0x10 + rand()%0xe0   (X FIRST)
EB_Z = 0x11E5F9      # 0x51e5f3  y = zz*256 + 0x10 + rand()%0xe0
EB_DIR = 0x11E774    # 0x51e76e  dir = rand()%4
EB_PUSH = 0x11E79B   # the push into site+0xc


def candidate_ok(toks):
    """True if `toks` (the recorded return addresses of one candidate, in order) is a
    legal path through the decoded loop body."""
    if len(toks) < 2 or toks[0] != SIZE or toks[1] != HEIGHT:
        return False
    t = toks[2:]
    if not t:
        return True                      # spawn reject (0x51de96) or site reject (0x51dfd3)
    if len(t) < 4 or t[0] != SP1 or t[1] not in (SP2_HI, SP2_LO) or t[2] != SP3:
        return False
    t = t[3:]
    if t[:2] == [JUN1, JUN2]:            # humid > 0.8 && temp > 0.7
        t = t[2:]
    if t and t[0] in (R5_LO, R5_HI):     # the noise-pocket / humid-band branch
        t = t[1:]
    if t and t[0] == BOOST:              # type 2 -> height boost
        t = t[1:]
    return t == [KEEP]


def main():
    if not os.path.exists(CAP):
        sys.exit("missing %s" % CAP)
    cap = json.load(open(CAP, encoding="utf-8"))
    pas = fail = 0
    msgs = []

    def chk(cond, what):
        nonlocal pas, fail
        if cond:
            pas += 1
        else:
            fail += 1
            if len(msgs) < 12:
                msgs.append(what)

    zones = trees_total = 0
    for z in cap["zones"]:
        zx, zz = z["zone"]
        if (zx + zz) & 1:
            continue                     # odd parity runs FUN_004e0740, not emitter B
        draws = z["draws"]
        eb = [k for k, (ra, _v, _n) in enumerate(draws) if ra == EB_X]
        if not eb:
            continue
        eb = eb[0]
        zones += 1
        tag = "%d,%d" % (zx, zz)

        # --- 1. the loop is 14x14 -------------------------------------------------
        starts = [k for k in range(eb) if draws[k][0] == SIZE]
        chk(len(starts) == 196, "%s: %d candidates, expected 196" % (tag, len(starts)))

        # --- 2. every candidate follows the decoded branch structure ---------------
        bounds = starts + [eb]
        for c in range(len(starts)):
            toks = [draws[k][0] for k in range(bounds[c], bounds[c + 1])]
            chk(candidate_ok(toks),
                "%s cand %d: illegal token order %s" % (tag, c, [hex(t) for t in toks]))

        # --- 3. only the tree BUILDER spends unrecorded draws in this span ---------
        for k in range(starts[0] + 1, eb + 1):
            gap = draws[k][2] - draws[k - 1][2] - 1
            if gap:
                trees_total += 1
                chk(draws[k - 1][0] == KEEP and draws[k][0] in (SIZE, EB_X),
                    "%s: %d unrecorded draws after %06x -> %06x (not a tree build)"
                    % (tag, gap, draws[k - 1][0], draws[k][0]))

        # --- 4. NOTHING but the tree pass lies between it and emitter B ------------
        # The recorded draw immediately before emitter B is the loop's last keep roll.
        # Any index gap between the two is the builder running for the 196th candidate
        # (7 of the 28 zones do build a tree there) -- check 3 covers that gap too,
        # since its walk runs through k == eb. Together: no unmodelled site, and no
        # unrecorded draw that is not a tree build, separates the loop from emitter B.
        chk(draws[eb - 1][0] == KEEP,
            "%s: the draw before emitter B is %06x, not the keep roll"
            % (tag, draws[eb - 1][0]))
        # every recorded draw in the span belongs to the loop
        stray = {draws[k][0] for k in range(starts[0], eb)} - LOOP_SITES
        chk(not stray, "%s: unmodelled sites in the tree span: %s"
                       % (tag, [hex(s) for s in sorted(stray)]))

        # --- 5. emitter B's record derives from its three draws -------------------
        pushes = [p for p in z["pushes"] if p["ra"] == EB_PUSH]
        chk(len(pushes) == 1, "%s: %d emitter-B pushes, expected 1" % (tag, len(pushes)))
        if len(pushes) == 1 and draws[eb + 1][0] == EB_Z:
            import struct
            rec = bytes(pushes[0]["rec"])
            x16, z16 = struct.unpack_from("<qq", rec, 8)
            d = struct.unpack_from("<i", rec, 0x20)[0]
            dirs = [k for k in range(eb, len(draws)) if draws[k][0] == EB_DIR]
            px = zx * 256 + 0x10 + draws[eb][1] % 0xE0
            pz = zz * 256 + 0x10 + draws[eb + 1][1] % 0xE0
            chk(x16 == (px << 16) + 0x8000, "%s: X %d vs derived %d" % (tag, x16 >> 16, px))
            chk(z16 == (pz << 16) + 0x8000, "%s: Z %d vs derived %d" % (tag, z16 >> 16, pz))
            chk(bool(dirs) and d == draws[dirs[0]][1] % 4,
                "%s: dir %d vs derived" % (tag, d))

    print("zone tail (mat-38 -> emitter B) over %d even zones: %d/%d checks"
          % (zones, pas, pas + fail))
    print("  tree builds seen (runs of unrecorded draws): %d" % trees_total)
    for m in msgs:
        print("  MISS " + m)
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
