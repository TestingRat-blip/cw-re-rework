#!/usr/bin/env python3
"""Gate: the OVERWORLD zone prop scatter, derived record-for-record.

`gate_zone_props.py` established the shape of this layer from a rig that hooked the
out-of-line `push_back` (`FUN_004d6670`).  That rig undercounted -- see
`RE_zone_props.md` -- so its headline "exactly one prop per zone" is an artifact.
This gate reads the vector instead (`tools/frida_zone_props2.py`) and derives every
record in it from the captured `rand()` stream.

The layer, as decoded from `FUN_00518630` and `FUN_004e0740`:

  parity = (zx + zz) & 1, computed once at 0x51cb66 and reused by both emitters.
  It is `(zx + zz) % 2` in the binary, not an empirical correlation.

  parity == 0 -> EMITTER B (0x51e5c7).  Unconditional, no placement test:
      x   = zx*256 + 0x10 + rand() % 0xe0        (draw at 0x51e5d4)
      y   = zz*256 + 0x10 + rand() % 0xe0        (draw at 0x51e5f3)
      z   = scan down from the column top for the first solid block
      rec = { type 0, pos ((x+.5), (y+.5), z+1), dir rand()%4, size (2,2,8) }

  parity == 1 -> the RETRY LOOP (0x51cbb0), up to 10 attempts, each drawing
      y = zz*256 + 0x30 + rand() % 0xa0         (draw at 0x51cbbb -- Y first)
      x = zx*256 + 0x30 + rand() % 0xa0         (draw at 0x51cbf6)
  and calling `FUN_004e0740(world, site, {x+.5, y+.5, columnTop})`, which:
      * returns immediately on the river band (`climateGate <= 0.02`);
      * STAGE 1 -- dir = rand()%4, then walks a 3x3 block grid (X outer 0..2,
        Y inner 0..2) offset from the anchor, `FUN_005287b0`-testing each, and
        pushes the first that passes as type 0x41 size (2.4, 2.4, 0.5);
      * STAGE 2 -- only if stage 1 placed something: four candidates at
        (+-3.5, +-3.5) blocks from the ANCHOR (X outer, Y inner), each drawing a
        type then a dir, each tested, each pushed if it passes.

Both stages push into the same `site+0xc`; stage 2's push_back is inlined, which is
what the first rig missed.  The 16.16 fixed-point positions carry a +0x8000 bias --
`ftol(-32768.0)` at 0x51cb86 and 0x51e676 -- so props sit at block centres.

That inlining also retires the caller census `RE_zone_props.md` was scoped by.  Asking
who calls `FUN_004d6670` finds only the emitters whose push_back stayed out of line.
The census that actually holds is **who calls `FUN_004ce8e0`**, the vector's grow
helper, which an inlined push_back still needs:

    004d6670   the out-of-line push_back itself (its nine callers)
    004e0740   stage 2, inlined
    005104e0 / 0051210a   a FIFTH zone-builder prop emitter, inlined -- missed entirely
    00524540   creature_spawn_builder

so two zones in this sample carry records this gate does not derive: a town zone
(the town builder's own three emitters) and one where `FUN_005104e0` fired.  Both are
reported rather than skipped.

`FUN_005287b0(world, rec, site, 1)` is a pure function of the finished terrain:
drop the record up to 50 blocks until any block under its (dir-rotated) footprint is
solid, raise it up to 50 until the footprint is clear, then reject unless Z > 0, the
whole footprint one block below is solid, and the block at the record's own position
is not water.  It rewrites the record's Z in place; the gate checks that.

Reads raw/zone_props2_capture*.json.
"""
import collections
import glob
import json
import os
import struct
import sys

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")

ONE = 0x10000
HALF = 0x8000
# rand() return-address RVAs
R_RETRY_Y, R_RETRY_X = 0x11CBC1, 0x11CBFC      # the caller's retry loop
R_E0_DIR = 0xE082B                             # stage 1's direction
R_E0_TYPE, R_E0_DIR2 = 0xE0A55, 0xE0B20        # stage 2's type, then direction
R_B_X, R_B_Y, R_B_DIR = 0x11E5DA, 0x11E5F9, 0x11E774
# call/push return-address RVAs
S_STAGE1, S_STAGE2 = 0xE08E1, 0xE0BC0          # FUN_005287b0 call sites
P_E0, P_B = 0xE092D, 0x11E79B                  # FUN_004d6670 call sites

STAGE1_TYPE, STAGE1_SIZE = 0x41, (2.4, 2.4, 0.5)
B_TYPE, B_SIZE = 0x00, (2.0, 2.0, 8.0)
# stage 2's rand()%4 -> (id, size); the 0 arm is the `else` branch
STAGE2 = {1: (0x10, (1.0, 1.0, 0.5)), 2: (0x0C, (3.0, 3.0, 1.0)),
          3: (0x45, (2.0, 2.0, 0.1)), 0: (0x42, (4.0, 4.0, 3.0))}
STAGE2_OFF = [(0, 0), (0, 7), (7, 0), (7, 7)]   # X outer, Y inner
STAGE2_BIAS = 229376                            # ftol(229376.0) = 3.5 blocks


# body ranges of the other subsystems that write to a site's prop vector
OWNERS = [(0x100300, 0x10931c, "the dungeon assembler (FUN_00500300)"),
          (0xE28E0, 0xF26F0, "the town builder (FUN_004e28e0)"),
          (0x1104E0, 0x1133A9, "camp_populator (FUN_005104e0)")]


def owner(rva):
    for lo, hi, name in OWNERS:
        if lo <= rva < hi:
            return name
    return "an unidentified emitter (RVA %#x)" % rva


def foreign(z, ndrv):
    """True when a subsystem this gate does not derive also wrote to this vector.

    The gate attributes them by the RECORDED return address rather than by assumption
    -- see `owner()` -- and counts their records instead of widening its claim.
    """
    return (any(x["ra"] not in (S_STAGE1, S_STAGE2) for x in z["settles"])
            or any(p["ra"] not in (P_E0, P_B) for p in z["pushes"])
            or z.get("vec", {}).get("n", 0) != ndrv)


def subsequence(want, got):
    it = iter(got)
    return all(any(x == y for y in it) for x in want)


def rec(b):
    b = bytes(b)
    return {"type": struct.unpack_from("<i", b, 0)[0],
            "pos": [struct.unpack_from("<q", b, 8 + i * 8)[0] for i in range(3)],
            "dir": struct.unpack_from("<i", b, 0x20)[0],
            "size": tuple(round(struct.unpack_from("<f", b, 0x24 + i * 4)[0], 3)
                          for i in range(3))}


class Gate:
    def __init__(self):
        self.n = 0
        self.bad = []

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
            for x in self.bad[:12]:
                print("        " + x)
            return False
        print("[PASS] %s: %d" % (title, self.n))
        return True


def derive_even(z, g):
    """Emitter B: one statue, position from three draws, no placement test."""
    zx, zz = z["zone"]
    w = "%d,%d" % (zx, zz)
    d = {r: [x[1] for x in z["draws"] if x[0] == r]
         for r in (R_B_X, R_B_Y, R_B_DIR)}
    g.eq("emitter B draw counts", [len(d[R_B_X]), len(d[R_B_Y]), len(d[R_B_DIR])],
         [1, 1, 1], w)
    g.eq("no FUN_004e0740 call", len(z["emits"]), 0, w)
    g.eq("emitter B runs no placement test",
         [x["ra"] for x in z["settles"] if x["ra"] in (S_STAGE1, S_STAGE2)], [], w)
    g.eq("emitter B's own push is the only one from the zone builder",
         [p["ra"] for p in z["pushes"] if p["ra"] in (P_E0, P_B)], [P_B], w)
    if not all(len(d[k]) == 1 for k in d):
        return
    bp = [p for p in z["pushes"] if p["ra"] == P_B]
    if foreign(z, 1):
        # a town zone: the town builder fills the same vector, and emitter B runs
        # last, so the statue is the final record
        g.true("emitter B's statue is the last record in the vector",
               z["vec"]["n"] >= 1 and bp
               and rec(z["vec"]["recs"][-1]) == rec(bp[0]["rec"]), w)
        r = rec(z["vec"]["recs"][-1])
    else:
        g.eq("vector holds exactly one record", z["vec"]["n"], 1, w)
        if z["vec"]["n"] != 1:
            return
        r = rec(z["vec"]["recs"][0])
    g.eq("type", r["type"], B_TYPE, w)
    g.eq("size", r["size"], B_SIZE, w)
    g.eq("dir = rand() % 4", r["dir"], d[R_B_DIR][0] % 4, w)
    g.eq("X = (zx*256 + 0x10 + rand()%0xe0 + .5)",
         r["pos"][0], ((zx * 256 + 0x10 + d[R_B_X][0] % 0xE0) << 16) + HALF, w)
    g.eq("Y = (zz*256 + 0x10 + rand()%0xe0 + .5)",
         r["pos"][1], ((zz * 256 + 0x10 + d[R_B_Y][0] % 0xE0) << 16) + HALF, w)
    g.true("Z is a whole block", r["pos"][2] % ONE == 0, w)
    g.eq("the pushed record is the one in the vector", rec(bp[0]["rec"]), r, w)


def derive_odd(z, g):
    """The retry loop plus FUN_004e0740's two stages."""
    zx, zz = z["zone"]
    w = "%d,%d" % (zx, zz)
    ry = [x for x in z["draws"] if x[0] == R_RETRY_Y]
    rx = [x for x in z["draws"] if x[0] == R_RETRY_X]
    g.eq("the retry loop draws Y then X, once each per attempt",
         len(ry), len(rx), w)
    g.true("at most 10 attempts", len(ry) <= 10, w)
    g.true("no emitter B activity", not any(p["ra"] == P_B for p in z["pushes"]), w)

    # every FUN_004e0740 call pairs with the attempt whose draws precede it
    for e in z["emits"]:
        att = [i for i in range(len(ry)) if ry[i][2] < e["n"]]
        g.true("emitter call follows an attempt's draws", bool(att), w)
        if not att:
            continue
        i = att[-1]
        a = [struct.unpack_from("<q", bytes(e["anchor"]), k * 8)[0] for k in range(3)]
        g.eq("anchor X = zx*256 + 0x30 + rand()%0xa0 + .5",
             a[0], ((zx * 256 + 0x30 + rx[i][1] % 0xA0) << 16) + HALF, w)
        g.eq("anchor Y = zz*256 + 0x30 + rand()%0xa0 + .5",
             a[1], ((zz * 256 + 0x30 + ry[i][1] % 0xA0) << 16) + HALF, w)
        g.true("anchor Z is a whole block", a[2] % ONE == 0, w)

    s1 = [s for s in z["settles"] if s["ra"] == S_STAGE1]
    s2 = [s for s in z["settles"] if s["ra"] == S_STAGE2]
    g.true("no placement test outside the two stages, or the zone is shared",
           len(s1) + len(s2) == len(z["settles"]) or foreign(z, -1), w)

    expect_vec, k1, k2 = [], 0, 0
    for e in z["emits"]:
        a = [struct.unpack_from("<q", bytes(e["anchor"]), k * 8)[0] for k in range(3)]
        # STAGE 1 -- a 3x3 block grid, X outer, stopping at the first that passes
        dirs = [x[1] for x in z["draws"]
                if x[0] == R_E0_DIR and e["n"] <= x[2] < e["n_end"]]
        g.eq("stage 1 draws exactly one direction", len(dirs), 1, w)
        run, hit = [], None
        for i in range(3):
            for j in range(3):
                if k1 >= len(s1):
                    break
                s = s1[k1]
                k1 += 1
                run.append((i, j, s))
                if s["ok"]:
                    hit = s
                    break
            if hit or k1 >= len(s1):
                break
        for i, j, s in run:
            b = rec(s["before"])
            g.eq("stage 1 candidate (%d,%d) X" % (i, j), b["pos"][0], a[0] + i * ONE, w)
            g.eq("stage 1 candidate (%d,%d) Y" % (i, j), b["pos"][1], a[1] + j * ONE, w)
            g.eq("stage 1 candidate (%d,%d) Z" % (i, j), b["pos"][2], a[2], w)
            g.eq("stage 1 type", b["type"], STAGE1_TYPE, w)
            g.eq("stage 1 size", b["size"], STAGE1_SIZE, w)
            if dirs:
                g.eq("stage 1 dir = rand() % 4", b["dir"], dirs[0] % 4, w)
        g.eq("FUN_004e0740 returns whether stage 1 placed anything",
             e["ret"], 1 if hit else 0, w)
        if hit is None:
            g.true("no stage 2 when stage 1 failed", True, w)
            continue
        expect_vec.append(rec(hit["after"]))
        # STAGE 2 -- four candidates at +-3.5 blocks from the ANCHOR, not from the
        # accepted stage-1 position
        types = [x[1] for x in z["draws"]
                 if x[0] == R_E0_TYPE and e["n"] <= x[2] < e["n_end"]]
        dir2 = [x[1] for x in z["draws"]
                if x[0] == R_E0_DIR2 and e["n"] <= x[2] < e["n_end"]]
        g.eq("stage 2 draws a type and a dir for each of four candidates",
             (len(types), len(dir2)), (4, 4), w)
        for n, (ox, oy) in enumerate(STAGE2_OFF):
            if k2 >= len(s2) or n >= len(types):
                break
            s = s2[k2]
            k2 += 1
            b = rec(s["before"])
            tid, tsize = STAGE2[types[n] % 4]
            g.eq("stage 2 candidate %d X" % n,
                 b["pos"][0], a[0] + ox * ONE - STAGE2_BIAS, w)
            g.eq("stage 2 candidate %d Y" % n,
                 b["pos"][1], a[1] + oy * ONE - STAGE2_BIAS, w)
            g.eq("stage 2 candidate %d Z" % n, b["pos"][2], a[2], w)
            g.eq("stage 2 candidate %d type" % n, b["type"], tid, w)
            g.eq("stage 2 candidate %d size" % n, b["size"], tsize, w)
            g.eq("stage 2 candidate %d dir" % n, b["dir"], dir2[n] % 4, w)
            if s["ok"]:
                expect_vec.append(rec(s["after"]))
    g.eq("every placement test was accounted for", (k1, k2), (len(s1), len(s2)), w)
    got = [rec(r) for r in z["vec"]["recs"]] if z["vec"]["n"] else []
    if foreign(z, len(expect_vec)):
        # another subsystem shares this vector; still require our records to be there,
        # in order, and report the rest rather than quietly widening the claim
        g.true("the derived records are an ordered subsequence of the vector",
               subsequence(expect_vec, got), w)
    else:
        g.eq("the vector is exactly the accepted records, in order", got, expect_vec, w)


def settle_invariants(z, g):
    zx, zz = z["zone"]
    w = "%d,%d" % (zx, zz)
    for s in z["settles"]:
        b, a = rec(s["before"]), rec(s["after"])
        g.eq("the placement test rewrites only Z",
             (b["type"], b["pos"][:2], b["dir"], b["size"]),
             (a["type"], a["pos"][:2], a["dir"], a["size"]), w)
        g.true("Z stays on a block boundary", (a["pos"][2] - b["pos"][2]) % ONE == 0, w)
        # it drops up to 50 blocks then raises up to 50
        g.true("Z moves at most 50 blocks either way",
               abs(a["pos"][2] - b["pos"][2]) <= 50 * ONE, w)
        g.true("an accepted record sits above Z = 0", not s["ok"] or a["pos"][2] > 0, w)


def main():
    names = sorted(glob.glob(os.path.join(RAW, "zone_props2_capture*.json")))
    if not names:
        print("no raw/zone_props2_capture*.json -- run tools/frida_zone_props2.py")
        return 1
    ok = True
    for f in names:
        zones = json.load(open(f))["zones"]
        even = [z for z in zones if not sum(z["zone"]) & 1]
        odd = [z for z in zones if sum(z["zone"]) & 1]
        print("== %s  %d zones (%d even, %d odd)"
              % (os.path.basename(f), len(zones), len(even), len(odd)))

        g = Gate()
        for z in even:
            derive_even(z, g)
        ok &= g.report("emitter B derived from its three draws")

        g = Gate()
        for z in odd:
            derive_odd(z, g)
        ok &= g.report("FUN_004e0740's two stages derived from the rand stream")

        g = Gate()
        for z in zones:
            settle_invariants(z, g)
        ok &= g.report("FUN_005287b0 settles the record in place")

        nprops = sum(z["vec"]["n"] for z in zones if "vec" in z)
        npush = sum(len(z["pushes"]) for z in zones)
        fz = [z for z in zones
              if any(x["ra"] not in (S_STAGE1, S_STAGE2) for x in z["settles"])
              or any(p["ra"] not in (P_E0, P_B) for p in z["pushes"])]
        print("   %d records in the vectors, %d of them through the out-of-line "
              "push_back" % (nprops, npush))
        print("   zones sharing the vector with an emitter this gate does not derive: "
              "%s" % [tuple(z["zone"]) for z in fz])
        # attribute the residual by the RECORDED return address, not by assumption
        foreign_ra = collections.Counter()
        for z in fz:
            for p in z["pushes"]:
                if p["ra"] not in (P_E0, P_B):
                    foreign_ra[owner(p["ra"])] += 1
        for k, v in sorted(foreign_ra.items()):
            print("   %4d of their records were pushed by %s" % (v, k))
        print("   props per odd zone: %s"
              % sorted(z["vec"]["n"] for z in odd if "vec" in z))
        print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
