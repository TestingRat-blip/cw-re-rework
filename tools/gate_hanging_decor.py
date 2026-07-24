#!/usr/bin/env python3
"""Gate: the three remaining `site+4` emitters -- liana, cobwebs and chandelier.

`site+4` is the assembler's second decoration container (`RE_52c370_wall_decor.md` covers its
wall-decor emitter). These three are inline in the assembler body and use the *hanging-decor*
id namespace: 0x37 liana, 0x38 chandelier, 0x39/0x3a cobwebs/cobwebs2.

All three share the record shape `FUN_004c83b0` constructs -- scale (1,1,1) at +0x2c..+0x34 and
flag 2 at +0x38 -- with `+0x08` position (3 x int64 16.16), `+0x20` a thickness and `+0x24` an
angle in degrees.

LIANA -- one block, gated on style 2 or 4, 5 draws:

    if (!isWallOrEmpty(grid(I, J, K+1)))  skip        // FUN_00522820: kind in {0,1,2}
    if (rand() % 3 != 0)                  skip
    if (style != 4 && style != 2)         skip
    angle = (float)rand() / 32767 * 360
    t     = (float)rand() * 0.04f / 32767 + 0.08f
    z     = fixed16f((float)(baseZ + (K+1)*10) - t * 20)
    y     = baseY + J*10 + 2 + rand() % 5              // exact <<16
    x     = baseX + I*10 + 2 + rand() % 5              // exact <<16

COBWEBS -- four blocks, one per wall, gated on style 1 or 2, 4 draws each:

    if (rand() % 3 != 0)                  skip
    if (!isWallOrEmpty(grid(neighbour)))  skip
    t = (float)rand() * 0.05f / 32767 + 0.08f          // note 0.05, the liana uses 0.04
    z = fixed16f((float)(baseZ + (K+1)*10) - t * 20)
    <jitter axis> = base + 2 + rand() % 5              // exact <<16
    <wall axis>   = fixed16f((float)wallBase +/- t * 10)
    id = 0x39 + rand() % 2

CHANDELIER -- one block, style 3 only, 1 draw:

    if (style != 3 || rand() % 10 != 0)   skip
    pos = (baseX + I*10 + 5.5, baseY + J*10 + 5.5, baseZ + (K+1)*10 - 2.7)
    scale = (0.6, 0.5, 0.1);  flag = 1;  angle = 0

`fixed16f` is FUN_00402a10 (float * 65536 -> ftol) and the chandelier's z goes through
FUN_004dab30, its double twin (double * 65536 -> ftol). **The decompiler drops the scaling
multiply in both** -- `mulss` in one, `mulsd` in the other -- so each reads as a bare `ftol`
wrapper. That is why the chandelier's z is `trunc((zw - 2.7) * 65536)` computed in double,
which is -176948 rather than the -176947 a naive `-2.7 * 65536` gives.

Reads raw/dungeon_props_capture*.json (tools/frida_dungeon_props.py).
"""
import base64
import json
import os
import struct
import sys

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")


def f32(x):
    return struct.unpack("<f", struct.pack("<f", x))[0]


def fixed16f(v):
    """FUN_00402a10: float * 65536.0f, then truncate toward zero."""
    return int(f32(f32(v) * f32(65536.0)))


# push return address -> (t draw RA, jitter draw RA, id draw RA, axis, sign, angle)
# axis 'x' = the wall is on x, so y carries the jitter; sign is on t*10 at the wall base.
WEBS = {0x105CF5: (0x105BEF, 0x105C55, 0x105CD1, "x", +1, 0, 0.0),
        0x105E58: (0x105D52, 0x105DB8, 0x105E34, "x", -1, 10, 180.0),
        0x105FBB: (0x105EB5, 0x105F58, 0x105F97, "y", -1, 10, 270.0),
        0x106118: (0x106012, 0x1060B5, 0x1060F4, "y", +1, 0, 90.0)}
LIANA_RA = 0x105B84
LIANA_DRAWS = (0x105A87, 0x105AA8, 0x105B06, 0x105B2E)      # angle, t, y-jitter, x-jitter
CHAND_RA = 0x1078AD


def last(rands, ra):
    """The last draw made at `ra` in this record's window (a non-firing block leaves only its
    gate draw behind, and gate RAs are never among the ones we look up)."""
    v = [x[1] for x in rands if x[0] == ra]
    return v[-1] if v else None


def model(kind, r, bx, by, bz):
    """-> dict of the fields this emitter decides, or None if it is not one of the three."""
    I, J, K = r["I"], r["J"], r["K"]
    zb, s = bz + (K + 1) * 10, r.get("rands", [])
    if r["ra"] == CHAND_RA:
        return {"id": 0x38, "t": 0.1, "angle": 0.0, "scale": (0.6, 0.5, 0.1), "flag": 1,
                "pos": [((bx + I * 10 + 5) << 16) + 0x8000, ((by + J * 10 + 5) << 16) + 0x8000,
                        int((zb - 2.7) * 65536.0)]}
    if r["ra"] == LIANA_RA:
        a, t, jy, jx = (last(s, ra) for ra in LIANA_DRAWS)
        tv = f32(f32(f32(t * f32(0.04)) / f32(32767.0)) + f32(0.08))
        return {"id": 0x37, "t": tv, "angle": f32(f32(f32(a) / f32(32767.0)) * f32(360.0)),
                "scale": (1.0, 1.0, 1.0), "flag": 2,
                "pos": [(bx + I * 10 + 2 + jx % 5) << 16, (by + J * 10 + 2 + jy % 5) << 16,
                        fixed16f(f32(f32(zb) - f32(tv * f32(20.0))))]}
    if r["ra"] in WEBS:
        tra, jra, ira, axis, sign, base, ang = WEBS[r["ra"]]
        t, j, i = last(s, tra), last(s, jra), last(s, ira)
        tv = f32(f32(f32(t * f32(0.05)) / f32(32767.0)) + f32(0.08))
        wall = fixed16f(f32(f32((bx if axis == "x" else by)
                                + (I if axis == "x" else J) * 10 + base)
                            + sign * f32(tv * f32(10.0))))
        jit = ((by + J * 10) if axis == "x" else (bx + I * 10)) + 2 + j % 5
        pos = ([wall, jit << 16] if axis == "x" else [jit << 16, wall])
        return {"id": 0x39 + i % 2, "t": tv, "angle": ang, "scale": (1.0, 1.0, 1.0), "flag": 2,
                "pos": pos + [fixed16f(f32(f32(zb) - f32(tv * f32(20.0))))]}
    return None


def one(name):
    cap = json.load(open(os.path.join(RAW, name)))
    g = cap["grids"][0]
    bx, by, bz = g["baseX"], g["baseY"], g["baseZ"]
    print(f"== {name}  zone {tuple(cap['zone'])}  style {g['style']}")
    bad, n = [], 0
    for r in cap.get("decor", []):
        m = model(None, r, bx, by, bz)
        if m is None:
            continue
        b = base64.b64decode(r["b"])
        live = {"id": b[0],
                "t": round(struct.unpack_from("<f", b, 0x20)[0], 6),
                "angle": round(struct.unpack_from("<f", b, 0x24)[0], 3),
                "scale": tuple(round(struct.unpack_from("<f", b, o)[0], 3)
                               for o in (0x2C, 0x30, 0x34)),
                "flag": struct.unpack_from("<i", b, 0x38)[0],
                "pos": [struct.unpack_from("<q", b, 8 + k * 8)[0] for k in range(3)]}
        m["t"] = round(m["t"], 6)
        m["angle"] = round(m["angle"], 3)
        n += 1
        if m != live:
            bad.append((hex(r["ra"]), (r["I"], r["J"], r["K"]),
                        {k: v for k, v in m.items() if live[k] != v},
                        {k: v for k, v in live.items() if m[k] != v}))
    ok = not bad
    print(f"[{'PASS' if ok else 'FAIL'}] liana + cobwebs + chandelier "
          f"(id, thickness, angle, scale, flag, position): {n - len(bad)}/{n}")
    for x in bad[:3]:
        print("   ", x)
    print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    return (0 if ok else 1), n


def main():
    args = sys.argv[1:]
    if not args or args == ["--all"]:
        names = sorted(f for f in os.listdir(RAW) if f.startswith("dungeon_props_capture"))
        if args != ["--all"]:
            names = ["dungeon_props_capture.json"]
    else:
        names = args
    rc, total = 0, 0
    for nm in names:
        r, n = one(nm)
        rc |= r
        total += n
        print()
    if len(names) > 1:
        print(f"== {len(names)} dungeons, {total} hanging-decor records  "
              + ("ALL PASS" if rc == 0 else "FAILURES"))
    return rc


if __name__ == "__main__":
    sys.exit(main())
