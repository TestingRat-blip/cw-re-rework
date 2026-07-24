#!/usr/bin/env python3
"""Gate: FUN_0052c370, the dungeon wall-decor emitter.

The scatter's sibling. The same four wall-direction blocks call both, but where
FUN_0052a830's furniture goes into the prop vector at `site+0xc`, this one's record goes to
**`site+4` -- a `std::list`** (pushed by FUN_00528450), which is also where the chandelier,
liana and cobweb records live.

    FUN_0052c370(rec, style, pos, angle)

    rec.pos   = pos                       // 3 x int64 16.16, always cell floor + 2.0
    rec+0x20  = 0.0625                    // constant
    rec+0x24  = angle                     // 270 / 90 / 0 / 180 per wall direction
    rec.scale = (1,1,1);  rec+0x38 = 2    // defaults, overridden by two branches
    switch (style) {
      3:  id = 0x30                                                     [0 draws]
      1,2: switch (rand() % 3) { 0: id 0x32 | 1: id 0x31 |
                                 2: id 0x34, scale (0.0,0.5,0.1), +0x38 = 1 }   [1 draw]
      0:  rand() % 2 == 0 ? (id 0x32, **pos.z += 0x20000**) : <tail>    [1 draw]
      4:  rand() % 2 != 0 ? id = rand() % 4 + 0x2c : <tail>             [1-2 draws]
      5:  <tail>                                                        [0 draws]
      default: the id is left as the caller set it
    }
    <tail>: id = 0x36, scale (0.8, 0.7, 0.2), +0x38 = 1

Ids resolve through RatForge's `dungeonPropModelName` -- 0x2c corpse, 0x2d runestone,
0x2e artifact, 0x2f flower-box01, 0x30 flower-box02, 0x31 flower-box03, 0x32 street-light01,
0x34 fence01, 0x36 fence03 -- confirming its "id 0x30 for style 3" note from the binary.

Reads raw/dungeon_props_capture*.json (tools/frida_dungeon_props.py).
"""
import base64
import json
import os
import struct
import sys

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")

EMITTERS = {0x10628C, 0x1065F1, 0x106956, 0x106CC5}     # the four wall-direction push sites
DECOR = (0x12C370, 0x12C370 + 341)
TAIL = (0x36, (0.8, 0.7, 0.2), 1)
PLAIN = ((1.0, 1.0, 1.0), 2)
MODEL = {0x2C: "corpse", 0x2D: "runestone", 0x2E: "artifact", 0x2F: "flower-box01",
         0x30: "flower-box02", 0x31: "flower-box03", 0x32: "street-light01",
         0x34: "fence01", 0x36: "fence03"}


def decor(style, s):
    """-> (id, scale, flag, draws consumed, extra z in 16.16)."""
    if style == 3:
        return (0x30,) + PLAIN + (0, 0)
    if style in (1, 2):
        r = s[0] % 3
        if r == 0:
            return (0x32,) + PLAIN + (1, 0)
        if r == 1:
            return (0x31,) + PLAIN + (1, 0)
        return (0x34, (0.0, 0.5, 0.1), 1, 1, 0)
    if style == 0:
        if s[0] % 2 == 0:
            return (0x32,) + PLAIN + (1, 0x20000)
        return TAIL + (1, 0)
    if style == 4:
        if s[0] % 2 != 0:
            return (s[1] % 4 + 0x2C,) + PLAIN + (2, 0)
        return TAIL + (1, 0)
    if style == 5:
        return TAIL + (0, 0)
    return None


def one(name):
    cap = json.load(open(os.path.join(RAW, name)))
    g = cap["grids"][0]
    style, bz = g["style"], g["baseZ"]
    print(f"== {name}  zone {tuple(cap['zone'])}  style {style}")
    bad, n, unresolved = [], 0, set()
    for r in cap.get("decor", []):
        if r["ra"] not in EMITTERS:
            continue
        b = base64.b64decode(r["b"])
        s = [v for ra, v in r.get("rands", []) if DECOR[0] <= ra < DECOR[1]]
        mid, mscale, mflag, mdraw, mbump = decor(style, s)
        live = (b[0],
                tuple(round(struct.unpack_from("<f", b, o)[0], 4) for o in (0x2C, 0x30, 0x34)),
                struct.unpack_from("<i", b, 0x38)[0], len(s),
                struct.unpack_from("<q", b, 0x18)[0] - ((bz + r["K"] * 10 + 2) << 16))
        n += 1
        if (mid, mscale, mflag, mdraw, mbump) != live:
            bad.append((r["I"], r["J"], r["K"], (mid, mscale, mflag, mdraw, mbump), live))
        if b[0] not in MODEL:
            unresolved.add(b[0])
        # the constant at +0x20
        if round(struct.unpack_from("<f", b, 0x20)[0], 4) != 0.0625:
            bad.append((r["I"], r["J"], r["K"], "+0x20 != 0.0625",
                        struct.unpack_from("<f", b, 0x20)[0]))
    ok = not bad
    print(f"[{'PASS' if ok else 'FAIL'}] decor id + scale + flag + draws + z: {n - len(bad)}/{n}")
    for x in bad[:3]:
        print("   ", x)
    if unresolved:
        print("   ids with no RatForge model name:", sorted(hex(i) for i in unresolved))
        ok = False
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
        print(f"== {len(names)} dungeons, {total} wall-decor records  "
              + ("ALL PASS" if rc == 0 else "FAILURES"))
    return rc


if __name__ == "__main__":
    sys.exit(main())
