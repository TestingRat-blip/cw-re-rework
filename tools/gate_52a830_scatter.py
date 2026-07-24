#!/usr/bin/env python3
"""Gate: FUN_0052a830, the dungeon furniture scatter -- the other prop ids at `site+0xc`.

Four emitters in the assembler (0x506355 / 0x5066ba / 0x506a1f / 0x506d8b, one per wall
direction) call it; it picks an id and a size and hands back a record that is pushed into the
prop vector. Everything except the position is decided by three draws:

    g = rand()
    if (g % 50 == 0)                       -> CHEST, id 0x0a, size (1.5, 1.0, 1.0)   [1 draw]
    else switch (rand() % 3) {
        0: SHELF   id = base(style) + rand() % 3,   size (2.0, 1.0, 1.57)
           base = 0x20 style 3 | 0x26 style 4 | 0x29 style 5 | 0x23 otherwise
        1: TABLE   id = 0x0d if style 4 else 0x0c + 2*(style == 5), size (3.0, 3.0, 1.0)
        2: STOOL   id = 0x0f if style 4 else 0x10 + (style == 5),   size (1.0, 1.0, 0.5)
    }                                                                                [3 draws]

The third draw of the table/stool branches is a position jitter inside their `switch(dir)`;
the chest's switch calls `ftol` rather than `rand`, which is why it consumes only one.

Model names come from RatForge's `dungeonPropModelName` (src/worldgen/Dungeons.cpp) -- this
gate does not re-derive them, it checks that the ids the binary selects are the ones that
table covers. **Id 0x0f is not in it**, so a style-4 dungeon's stool is an unresolved prop.

Reads raw/dungeon_props_capture*.json (tools/frida_dungeon_props.py).
"""
import base64
import json
import os
import struct
import sys

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")

# FUN_0052a830 occupies 1448 bytes. The capture's return-address filter is deliberately
# re-applied here: an early version of the rig used the decompiled-C length (4820) as if it
# were a byte size, which runs past FUN_0052b470's entry and swallows 72 of its draws.
SCATTER = (0x12A830, 0x12A830 + 1448)
EMITTERS = {0x10635A, 0x1066BF, 0x106A24, 0x106D90}

SHELF_BASE = {3: 0x20, 4: 0x26, 5: 0x29}

# RatForge src/worldgen/Dungeons.cpp :: dungeonPropModelName
MODEL = {0x0A: "chest-base", 0x0C: "table", 0x0D: "stone-table", 0x0E: "sandstone-table",
         0x10: "stool", 0x11: "stone-stool", 0x20: "shelf1", 0x21: "shelf2", 0x22: "shelf3",
         0x23: "castle-shelf1", 0x24: "castle-shelf2", 0x25: "castle-shelf3",
         0x26: "stone-shelf1", 0x27: "stone-shelf2", 0x28: "stone-shelf3",
         0x29: "sandstone-shelf1", 0x2A: "sandstone-shelf2", 0x2B: "sandstone-shelf3"}


def scatter(style, s):
    """-> (id, size, draws consumed)."""
    if s[0] % 50 == 0:
        return 0x0A, (1.5, 1.0, 1.0), 1
    pick = s[1] % 3
    if pick == 0:
        return SHELF_BASE.get(style, 0x23) + s[2] % 3, (2.0, 1.0, 1.57), 3
    if pick == 1:
        return (0x0D if style == 4 else 0x0C + 2 * (style == 5)), (3.0, 3.0, 1.0), 3
    return (0x0F if style == 4 else 0x10 + (style == 5)), (1.0, 1.0, 0.5), 3


def one(name):
    cap = json.load(open(os.path.join(RAW, name)))
    style = cap["grids"][0]["style"]
    print(f"== {name}  zone {tuple(cap['zone'])}  style {style}")
    bad, n, unresolved = [], 0, set()
    for p in cap["props"]:
        if p["ra"] not in EMITTERS:
            continue
        b = base64.b64decode(p["b"])
        s = [v for ra, v in p.get("rands", []) if SCATTER[0] <= ra < SCATTER[1]]
        mid, msize, ndraw = scatter(style, s)
        live_id = b[0]
        live_size = tuple(round(struct.unpack_from("<f", b, 0x24 + i * 4)[0], 2)
                          for i in range(3))
        n += 1
        if (mid, msize, ndraw) != (live_id, live_size, len(s)):
            bad.append((p["I"], p["J"], p["K"], (mid, msize, ndraw),
                        (live_id, live_size, len(s))))
        if live_id not in MODEL:
            unresolved.add(live_id)
    ok = not bad
    if ok:
        print(f"[PASS] scatter id + size + draw count: {n}/{n}")
    else:
        print(f"[FAIL] {len(bad)} of {n} mismatched")
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
        print(f"== {len(names)} dungeons, {total} scatter records  "
              + ("ALL PASS" if rc == 0 else "FAILURES"))
    return rc


if __name__ == "__main__":
    sys.exit(main())
