#!/usr/bin/env python3
"""Gate: the dungeon loot pass -- scattered ground items and chest contents.

After the prop vector at `site+0xc` is built, the assembler walks it once more. Two things
happen per prop:

**CHEST FILL** -- a prop of id 0x0a (chest-base):

    n = rand() % 4 + 1;                                  // 1..4 items
    reserve(prop+0x48, 5);
    for (i = 0; i < n; i++)
        addItem(prop+0x48, FUN_0052b470(&tmp, level, rankByte + 1));
    prop[+0x30] = 2;

`rankByte + 1` is the same rank the boss gets from `FUN_0052bf40(rankByte, 1)`, which discards
its whole rarity computation and returns `byte + 1` (`RE_52b470_item_generator.md`).

**SCATTERED GROUND LOOT** -- for every prop whose footprint size[1] is positive, over its
`size[0] x size[1]` cells:

    if (rand() % 10 != 0) continue;                      // 1 in 10 per footprint cell
    init item;  item[+0x134] = 0.06f;  item[+0x138] = 1;
    if (rand() % 6 != 0) switch (rand() % 4) {           // the common table
        0: (0x0b, 0x1a)
        1: (0x12, <p2b2c>),  item[+0x04] = rand() % 3
        2: (0x0b, 0x09),     item[+0x0d] = rand() % 3 + 0x19
        3: (0x01, 0x07)
    } else switch (rand() % 6) {                         // the rare table
        0: (0x01, 0x01)   1: (0x01, 0x04)   2: (0x01, 0x05)
        3: COIN -- e = ((float)rand() * 2 / 32767 + 1) * (level * 0.25f);
                  n = (int)powf(2.0f, e);
                  (0x0c, -), item[+0x0d] = 10, item[+0x10] = rand() % (2*n + 2)
        4: FUN_0052b470(&tmp, level, rankByte)           // the item generator
        5: FUN_0052a760(&tmp, level, rankByte)           // its special-candidate wrapper
    }
    item.pos   = prop.pos + ((ix - size[0]*0.5) + 0.5, (iy - size[1]*0.5) + 0.5, size[2]);
    item.angle = (float)rand() * 360 / 32767;
    push(site+0x30, item);                               // stride 0x148

The ground-item record is an `ItemData` (0x118) plus position (`+0x118`, 3 x int64 16.16),
angle (`+0x130`), `0.06f` (`+0x134`) and a flag (`+0x138`) -- 0x148 in all.

Reads raw/dungeon_props_capture*.json (tools/frida_dungeon_props.py).
"""
import base64
import json
import os
import struct
import sys

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")

GATE, SIX, FOUR = 0x107072, 0x1070A0, 0x1070B2       # the 1-in-10, the 1-in-6, the 4-way pick
C1_SUB, C2_MAT = 0x1070F1, 0x10710F                  # sub-draws of 4-way cases 1 and 2
RARE = 0x107135                                      # the 6-way pick
COIN_E, COIN_N = 0x107179, 0x1071DE                  # the coin's exponent and amount draws
ANGLE = 0x107327
CHEST = 0x106EE5

COMMON = {0: (0x0B, 0x1A), 2: (0x0B, 0x09), 3: (0x01, 0x07)}
RARE_FIXED = {0: (0x01, 0x01), 1: (0x01, 0x04), 2: (0x01, 0x05)}


def f32(x):
    return struct.unpack("<f", struct.pack("<f", x))[0]


def one(name):
    cap = json.load(open(os.path.join(RAW, name)))
    print(f"== {name}  zone {tuple(cap['zone'])}  style {cap['grids'][0]['style']}")
    draws = cap.get("loot_rands", [])
    loot = cap.get("loot", [])
    ok = True

    # ---- chest fill: one `rand() % 4 + 1` per chest prop --------------------------------
    chest = [d for d in draws if d["ra"] == CHEST]
    chests = [p for p in cap["props"] if base64.b64decode(p["b"])[0] == 0x0A]
    ok &= report("chest props each drew their item count", len(chests), len(chest))
    counts = [d["v"] % 4 + 1 for d in chest]
    if counts:
        print(f"   chest item counts (rand()%%4+1): {counts}")
    # cross-check against a SEPARATE capture: the item generator's own rig recorded every
    # FUN_0052b470 invocation with its call site, so the modelled counts must sum to the
    # number of calls made from the chest site.
    z = tuple(cap["zone"])
    ig = ("itemgen_capture.json" if z == (32795, 32796)
          else "itemgen_capture_%d_%d.json" % z)
    if os.path.exists(os.path.join(RAW, ig)):
        n = sum(1 for c in json.load(open(os.path.join(RAW, ig)))["calls"]
                if c["caller"] == 0x106F49)
        ok &= report("chest counts sum == FUN_0052b470 calls in itemgen_capture", sum(counts), n)

    # ---- ground loot: replay the decision chain per fired cell ---------------------------
    # walk the stream in order; each `GATE` draw starts a footprint cell
    idx, k, bad = {}, 0, []
    seq = sorted(draws, key=lambda d: d["n"])
    fired = []
    i = 0
    while i < len(seq):
        d = seq[i]
        if d["ra"] != GATE:
            i += 1
            continue
        if d["v"] % 10 != 0:
            i += 1
            continue
        # this cell fires: consume its draws by return address until the angle
        grp = {}
        j = i + 1
        while j < len(seq) and seq[j]["ra"] != GATE:
            grp.setdefault(seq[j]["ra"], []).append(seq[j]["v"])
            if seq[j]["ra"] == ANGLE:
                j += 1
                break
            j += 1
        fired.append((d, grp))
        i = j
    ok &= report("cells passing the 1-in-10 gate == ground items pushed", len(fired), len(loot))

    for (g, grp), r in zip(fired, loot):
        b = base64.b64decode(r["b"])
        live = (b[0], b[1])
        six = grp.get(SIX, [None])[0]
        if six is None:
            bad.append((r["m"], "no 1-in-6 draw"))
            continue
        if six % 6 != 0:                                   # the common table
            c = grp[FOUR][0] % 4
            if c == 1:
                m = (0x12, r["p2b2c"] & 0xFF)
                extra = ("+0x04", grp[C1_SUB][0] % 3, struct.unpack_from("<i", b, 4)[0])
            elif c == 2:
                m = COMMON[2]
                extra = ("+0x0d", grp[C2_MAT][0] % 3 + 0x19, b[0xD])
            else:
                m, extra = COMMON[c], None
        else:                                              # the rare table
            c = grp[RARE][0] % 6
            if c in RARE_FIXED:
                m, extra = RARE_FIXED[c], None
            elif c == 3:
                e = f32(f32(f32(f32(grp[COIN_E][0]) * f32(2.0)) / f32(32767.0)) + f32(1.0))
                e = f32(e * f32(f32(r["level"]) * f32(0.25)))
                n = int(f32(2.0 ** e))
                m = (0x0C, b[1])                           # byte1 is left from the ctor
                extra = ("+0x10", grp[COIN_N][0] % (2 * n + 2),
                         struct.unpack_from("<h", b, 0x10)[0])
            else:
                m, extra = (b[0], b[1]), None              # 52b470 / 52a760 -- gated elsewhere
        ang = f32(f32(f32(grp[ANGLE][0]) * f32(360.0)) / f32(32767.0))
        real = round(struct.unpack_from("<f", b, 0x130)[0], 4)
        if (m != live or round(ang, 4) != real
                or round(struct.unpack_from("<f", b, 0x134)[0], 4) != 0.06 or b[0x138] != 1
                or (extra and extra[1] != extra[2])):
            bad.append((r["m"], (r["I"], r["J"], r["K"]), m, live, extra,
                        round(ang, 4), real))
    ok &= report("ground-item kind + sub-roll + angle + constants", 0, len(bad))
    for x in bad[:3]:
        print("   ", x)
    print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    return (0 if ok else 1), len(loot), len(chest)


def report(what, a, b):
    if a == b:
        print(f"[PASS] {what}: {b}")
        return True
    print(f"[FAIL] {what}: model {a} vs live {b}")
    return False


def main():
    args = sys.argv[1:]
    if not args or args == ["--all"]:
        names = sorted(f for f in os.listdir(RAW) if f.startswith("dungeon_props_capture"))
        if args != ["--all"]:
            names = ["dungeon_props_capture.json"]
    else:
        names = args
    rc, ti, tc = 0, 0, 0
    for nm in names:
        r, n, c = one(nm)
        rc |= r
        ti += n
        tc += c
        print()
    if len(names) > 1:
        print(f"== {len(names)} dungeons, {ti} ground items, {tc} chest fills  "
              + ("ALL PASS" if rc == 0 else "FAILURES"))
    return rc


if __name__ == "__main__":
    sys.exit(main())
