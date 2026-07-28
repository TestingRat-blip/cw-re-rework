#!/usr/bin/env python3
"""GATE -- the town builder's PLOT VERDICT pass (`FUN_004e28e0`, 0x4e2a80-0x4e3093).

`RE_town_props.md` left "Phase 3's verdict, in full" open: the height-span cull was exact
but "155 plots with a small height span are still culled for other reasons". This gate
carries the decoded rule (`Docs/RE_town_verdict.md`) and checks it against the 92 towns
of `raw/town_props_capture*.json` (rig: `frida_town_props.py`, seed 42069).

    per plot, in SCAN order (record index = outer + n*inner):
      rot   = rand() % 4                     0x4e2d83   ALWAYS -- one draw per plot
      score = World_falloffSquared(cell, plotOrigin + span/2)          0x4e2e04
      if  water                       -> 0   0x4e2e17   (top <= 0, or a class-2/3 block)
      elif no column scored > 0.1     -> 0   0x4e2e20
      elif a class-0xb block was seen -> 7   0x4e2e2b
      else r = rand() / 32767.0f            0x4e2e3b
           verdict = 2 if score + 0.25 > r else 0                      0x4e2e5e
      if maxH - minH > 16             -> 0   0x4e2e7f

    then, VILLAGES ONLY (cell type 1), in RECORD-INDEX order:          0x4e2fdf
      for each plot with verdict 0 and maxH - minH < 16:
          if (rand() & 1) == 0 and score > 0.0:  verdict = 6           0x4e3039

The two rand sites downstream of the rotation are CONDITIONAL, which is the correction
this gate exists to keep: the handoff carried them as "spent unconditionally per plot".

    python tools/gate_town_verdict.py
"""
import collections
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.normpath(os.path.join(HERE, "..", "raw"))
sys.path.insert(0, os.path.normpath(os.path.join(HERE, "..", "..", "cw_rederive")))
import cw_feature  # noqa: E402

CAPTURES = ("town_props_capture_towns_5.json", "town_props_capture_32730_32746_5.json")
RA_ROT, RA_ROLL, RA_COIN = 0x4E2D83, 0x4E2E3B, 0x4E3039
F32 = cw_feature.f32


def plots_of(h):
    """The plot table at sort time: 0x1c bytes a record, 7 fields."""
    out = []
    for b in h["plotsAtSort"]:
        if b is None:
            return None
        b = bytes(b)
        minH, maxH, h8, v, f10, rot = struct.unpack_from("<6i", b, 0)
        out.append(dict(minH=minH, maxH=maxH, h8=h8, v=v, rot=rot,
                        score=struct.unpack_from("<f", b, 0x18)[0]))
    return out


def falloff_squared(desc, x, z):
    """FUN_0052dee0 on the town's own feature descriptor -- max(0, 1-w)^2.

    The descriptor the builder receives IS a `cw_featuregen` cell: +0 cx (i64 16.16),
    +8 cz, +0x10 radius (f32), +0x14 height, +0x18 type, +0x1c subtype.
    """
    cx, cz = struct.unpack_from("<qq", desc, 0)
    radius, = struct.unpack_from("<f", desc, 0x10)
    ftype, = struct.unpack_from("<i", desc, 0x18)
    w = cw_feature.falloff_weight(cx, cz, radius, ftype, x << 16, z << 16)
    onemw = F32(1.0 - w)
    return F32(onemw * onemw) if onemw > 0.0 else 0.0


def main():
    hits = []
    for name in CAPTURES:
        p = os.path.join(RAW, name)
        if not os.path.exists(p):
            print("  MISSING %s" % p)
            continue
        d = json.load(open(p, encoding="utf-8"))
        hits += d["hits"] if isinstance(d, dict) else d

    ok = collections.Counter()
    fail = []
    towns = 0
    for h in hits:
        if not h.get("plotsAtSort") or not h.get("desc"):
            continue
        ps = plots_of(h)
        if ps is None or len(ps) != h["plotCount"]:
            continue
        towns += 1
        zx, zz = h["zone"]
        desc = bytes(h["desc"])
        ftype, = struct.unpack_from("<i", desc, 0x18)
        n = int(round(h["plotCount"] ** 0.5))
        span = 256 // n
        draws = collections.defaultdict(list)
        for ra, v, _n in h["draws"]:
            draws[ra + 0x400000].append(v)
        tag = "%s" % ((zx, zz),)

        # ---- 1. the rotation draw: one per plot, unconditionally -------------------
        got = len(draws[RA_ROT])
        if got == h["plotCount"]:
            ok["rot draws == plotCount"] += 1
        else:
            fail.append("%s rot draws %d != plotCount %d" % (tag, got, h["plotCount"]))

        # ---- 2. the score, ab initio from the seed ---------------------------------
        for i, p in enumerate(ps):
            r, c = i % n, i // n
            x = zx * 256 + (r * 256) // n + span // 2
            z = zz * 256 + (c * 256) // n + span // 2
            pred = falloff_squared(desc, x, z)
            if abs(pred - p["score"]) < 1e-6:
                ok["score == falloffSquared(origin + span/2)"] += 1
            else:
                fail.append("%s plot %d score %.9g != %.9g" % (tag, i, p["score"], pred))

        # ---- 3. the height-span cull ------------------------------------------------
        for i, p in enumerate(ps):
            if p["v"] == 2 and p["maxH"] - p["minH"] > 16:
                fail.append("%s plot %d verdict 2 with span %d" % (tag, i, p["maxH"] - p["minH"]))
            else:
                ok["no verdict-2 plot has span > 16"] += 1

        # ---- 4. the role-6 pass: villages only, record-index order ------------------
        qual = [i for i, p in enumerate(ps)
                if p["v"] in (0, 6) and p["maxH"] - p["minH"] < 16] if ftype == 1 else []
        coins = draws[RA_COIN]
        if len(coins) == len(qual):
            ok["coin draws == qualifying plots"] += 1
        else:
            fail.append("%s coin draws %d != qualifying %d (ftype %d)"
                        % (tag, len(coins), len(qual), ftype))
        if len(coins) == len(qual):
            for i, v in zip(qual, coins):
                pred6 = (v & 1) == 0 and ps[i]["score"] > 0.0
                if pred6 == (ps[i]["v"] == 6):
                    ok["role 6 <=> coin even and score > 0"] += 1
                else:
                    fail.append("%s plot %d role6 %s pred %s (coin %d score %g)"
                                % (tag, i, ps[i]["v"] == 6, pred6, v, ps[i]["score"]))

        # ---- 5. the roll, where the assignment is FORCED ----------------------------
        # A plot skips the roll only when it is water, has no column scoring > 0.1, or
        # is sand (verdict 7).  Where the recorded roll count equals plotCount minus the
        # sand plots, every non-sand plot must have rolled -- so the draw-to-plot map is
        # forced and each verdict can be checked exactly.
        rolls = draws[RA_ROLL]
        nsand = sum(1 for p in ps if p["v"] == 7)
        order = [o + n * i for o in range(n) for i in range(n)]
        if len(rolls) == h["plotCount"] - nsand:
            k = 0
            for i in order:
                p = ps[i]
                if p["v"] == 7:
                    continue
                r = F32(F32(float(rolls[k])) / F32(32767.0))
                k += 1
                pred = 2 if F32(p["score"] + F32(0.25)) > r else 0
                if pred == 2 and p["maxH"] - p["minH"] > 16:
                    pred = 0
                seen = 2 if p["v"] == 2 else 0        # 6 is the later pass rewriting a 0
                if pred == seen:
                    ok["verdict == (score + 0.25 > rand()/32767)"] += 1
                else:
                    fail.append("%s plot %d verdict %d pred %d (score %g roll %d)"
                                % (tag, i, p["v"], pred, p["score"], rolls[k - 1]))
            ok["towns with a forced roll assignment"] += 1
        elif not (sum(1 for p in ps if p["v"] == 2) <= len(rolls)
                  <= h["plotCount"] - nsand):
            fail.append("%s roll draws %d outside [%d, %d]"
                        % (tag, len(rolls), sum(1 for p in ps if p["v"] == 2),
                           h["plotCount"] - nsand))
        else:
            ok["roll draws within the derivable bounds"] += 1

    print("== the town builder's plot verdict pass, over %d towns" % towns)
    for k, v in sorted(ok.items(), key=lambda kv: -kv[1]):
        print("  [PASS] %-46s %6d" % (k, v))
    if fail:
        print("  %d FAIL:" % len(fail))
        for f in fail[:20]:
            print("    " + f)
        print("  GATE FAIL")
        return 1
    print("  GATE PASS")
    return 0


if __name__ == "__main__":
    sys.exit(main())
