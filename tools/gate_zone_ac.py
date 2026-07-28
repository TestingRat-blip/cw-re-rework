#!/usr/bin/env python3
"""Gate: the zone builder's emitters **A** (`0x51dbf5`) and **C** (`0x51fcdb`).

The last two open slices of Phase 2. `RE_zone_props.md` could only read their record
content statically -- no sampled zone reached either, and blind sweeping does not find
them: the gate for both is the region's **per-zone site-kind grid**, and only 4 of a
region's 4096 zones are the kind emitter A wants.

## Emitter A -- the runestone circle (site kind 4)

    if (region[idx].kind != 4) skip                 idx = (zx%64)*64 + (zz%64)   0x51d46b
    N = rand()%3 + 6                                                            0x51d563
    for i in 0..N-1:                          # a ring of stone blobs, radius 25
        ang = i*PI/N;  cx = centre + cos(ang)*25;  cy = centre + sin(ang)*25
        half = (rand()%4 + 3, rand()%4 + 3)   # two draws, then an ellipsoid stamp
    rec.type = 0x2d  (runestone)                                                0x51dbab
    rec.pos  = (zoneCentre<<16) + ftol(229376.0) on BOTH axes  # +3.5 blocks
    rec.z    = descend to the first solid, then ascend to the first clear       0x51dad1
               # the walk probes column (centre+3, centre+3): 0x51da10-0x51da3a
               # reuses the record's own +ftol(229376.0) 16.16 coordinates and
               # 0x406050 floors them. Only the SEED z0 is the centre column
               # (0x51d493, block coords). Settling on the centre instead put
               # cwgen's Y out in 36 of 109 zones -- RE_zone_emitters_ac.md.
    rec.dir  = rand()%4;  rec.size = (4, 4, 5);  push to site+0xc               0x51dbf5

## Emitter C -- the village street light (needs a village on sand)

For a column whose top solid block has class `0xb` with class 0 above it:

    if (FUN_004d19f0(x, y) <= 0.75) skip       # the village road field         0x51fb53
    if ((x + 90*y) % 470) skip                                                  0x51fb70
    if (rand() % 16) skip                                                       0x51fb7e
    for k in 0..6: if solid(x, y, z0+k) skip   # seven clear blocks             0x51fba0
    rec.type = FUN_004fc140(x,y) > 0.8 ? 0x33 (1,1,8) : 0x32 (2,2,8)            0x51fbfa
    rec.pos  = (x<<16, y<<16, z0<<16)          # NO half-block bias
    rec.dir  = rand()%4;  push to site+0xc                                      0x51fcdb

`0x32`/`0x33` are `street-light02` / `street-light01` and `0x2d` is `runestone` -- the
client's own type->model table (Docs/RE_prop_ids.md; `prop_ids.json` has 50/51 swapped).

Reads raw/zone_ac_capture*.json (tools/frida_zone_ac.py).
"""
import glob
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")

RA_A_PUSH = 0x11dbfa
RA_C_PUSH = 0x11fce0
RA_A_N = 0x11d569        # N = rand()%3 + 6
RA_A_HX = 0x11d66a       # the ring point's two half-extents
RA_A_HY = 0x11d685
RA_A_DIR = 0x11dbbb
RA_C_ROLL = 0x11fb84     # rand()%16
RA_C_DIR = 0x11fcbf

HALF = 229376            # [0x573c3c] = 229376.0 -> +3.5 blocks
LAT_A = 90               # 0x51fb66: imul 0x5a
LAT_M = 470              # [ebp-0x141c] = 0x1d6
SIZE_A = (4.0, 4.0, 5.0)
SIZE_C = {0x32: (2.0, 2.0, 8.0), 0x33: (1.0, 1.0, 8.0)}


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


def rec(b):
    b = bytes(b)
    return {"type": struct.unpack_from("<i", b, 0)[0],
            "pos": [struct.unpack_from("<q", b, 8 + i * 8)[0] for i in range(3)],
            "dir": struct.unpack_from("<i", b, 0x20)[0],
            "size": tuple(round(struct.unpack_from("<f", b, 0x24 + i * 4)[0], 4)
                          for i in range(3))}


def draws(h, ra):
    return [d[1] for d in h["draws"] if d[0] == ra]


def emitter_a(h, g):
    zx, zz = h["zone"]
    w = "%d,%d" % (zx, zz)
    kind = (h.get("gateA") or {}).get("type")
    pushes = [p for p in h["pushes"] if p["ra"] == RA_A_PUSH]

    g.eq("a runestone is emitted iff the zone's site kind is 4", len(pushes), 1 if kind == 4 else 0, w)
    if kind != 4:
        return 0

    # the ring: one count draw, then two per ring point
    n = draws(h, RA_A_N)
    g.eq("one N draw", len(n), 1, w)
    N = n[0] % 3 + 6
    g.eq("N = rand()%%3 + 6 -> %d ring points, two draws each" % N,
         (len(draws(h, RA_A_HX)), len(draws(h, RA_A_HY))), (N, N), w)
    g.eq("emitter A's whole draw stream is 1 + 2N + 1",
         len([d for d in h["draws"] if 0x11d476 <= d[0] < 0x11dc00]), 2 * N + 2, w)

    r = rec(pushes[0].get("rec"))
    cx, cy = h["gateA"]["cx"], h["gateA"]["cy"]
    g.eq("type is 0x2d (runestone)", r["type"], 0x2d, w)
    g.eq("size is (4, 4, 5)", r["size"], SIZE_A, w)
    g.eq("x = zone centre + 3.5 blocks", r["pos"][0], (cx << 16) + HALF, w)
    g.eq("y = zone centre + 3.5 blocks", r["pos"][1], (cy << 16) + HALF, w)
    g.true("z is a whole block (the settle loops step whole blocks)",
           r["pos"][2] % 65536 == 0, w)
    d = draws(h, RA_A_DIR)
    g.eq("one dir draw", len(d), 1, w)
    g.eq("dir = rand()%4", r["dir"], d[0] % 4, w)
    return 1


def emitter_c(h, g, tally):
    zx, zz = h["zone"]
    w = "%d,%d" % (zx, zz)
    pushes = [p for p in h["pushes"] if p["ra"] == RA_C_PUSH]
    rolls = draws(h, RA_C_ROLL)
    dirs = draws(h, RA_C_DIR)
    tally["rolls"] += len(rolls)
    tally["pushes"] += len(pushes)

    # every column that passed the class/road/lattice gates spends exactly one roll
    g.eq("one dir draw per pushed record", len(dirs), len(pushes), w)
    g.true("a record is only pushed when a roll came up 0 (%d pushes <= %d zero rolls)"
           % (len(pushes), sum(1 for v in rolls if v % 16 == 0)),
           len(pushes) <= sum(1 for v in rolls if v % 16 == 0), w)

    # The census walks the FINISHED zone, so it can only ever be a LOWER bound on what the
    # loop saw mid-build -- and it is: 144/144 towns come out live >= census, never below,
    # 66 of them exactly equal. Gate the direction, report the rate.
    cen = h.get("census") or {}
    if "sandLatRoad" in cen:
        tally["census"] += cen["sandLatRoad"]
        tally["exact"] += len(rolls) == cen["sandLatRoad"]
        g.true("every roll is a class-0xb lattice column with road > 0.75 "
               "(%d rolls >= %d found by walking the finished zone)"
               % (len(rolls), cen["sandLatRoad"]),
               len(rolls) >= cen["sandLatRoad"], w)

    for k, p in enumerate(pushes):
        r = rec(p.get("rec"))
        ww = "%s#%d" % (w, k)
        g.true("type is a street light (0x32 or 0x33)", r["type"] in SIZE_C, ww)
        if r["type"] not in SIZE_C:
            continue
        tally[r["type"]] += 1
        g.eq("size matches the type", r["size"], SIZE_C[r["type"]], ww)
        x, y, z = (v >> 16 for v in r["pos"])
        g.true("the position carries no half-block bias",
               all(v % 65536 == 0 for v in r["pos"]), ww)
        g.eq("the column is on the (x + 90y) %% %d lattice" % LAT_M,
             (x + LAT_A * y) % LAT_M, 0, ww)
        g.eq("dir = rand()%4", r["dir"], dirs[k] % 4, ww)
    return len(pushes)


def main():
    names = sorted(glob.glob(os.path.join(RAW, "zone_ac_capture*.json")))
    if not names:
        print("no raw/zone_ac_capture*.json -- run tools/frida_zone_ac.py")
        return 1
    ok, anyA, anyC = True, 0, 0
    for f in names:
        cap = json.load(open(f))
        hits = [h for h in cap["hits"] if "pushes" in h]      # skip --scan outputs
        if not hits:
            continue
        print("== %s  %d zones" % (os.path.basename(f), len(hits)))
        ga, gc = Gate(), Gate()
        tally = {"rolls": 0, "pushes": 0, "census": 0, "exact": 0, 0x32: 0, 0x33: 0}
        na = nc = 0
        for h in hits:
            na += emitter_a(h, ga)
            nc += emitter_c(h, gc, tally)
        anyA += na
        anyC += nc
        ok &= ga.report("emitter A -- the runestone, its ring draws and its record")
        ok &= gc.report("emitter C -- the street light, its lattice and its record")
        kinds = {}
        for h in hits:
            k = (h.get("gateA") or {}).get("type")
            kinds[k] = kinds.get(k, 0) + 1
        print("   site kinds seen: %s" % dict(sorted(kinds.items(), key=lambda t: (t[0] is None, t[0]))))
        print("   %d runestones, %d street lights (%d street-light01, %d street-light02) "
              "from %d rolls" % (na, nc, tally[0x32], tally[0x33], tally["rolls"]))
        if tally["census"]:
            print("   the finished-zone walk accounts for %d of those %d rolls (%.1f%%), "
                  "exact in %d zones" % (tally["census"], tally["rolls"],
                                         100.0 * tally["census"] / tally["rolls"],
                                         tally["exact"]))
        print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    if not anyA and not anyC:
        print("no capture in raw/ contains a single emission -- nothing was gated")
        return 1
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
