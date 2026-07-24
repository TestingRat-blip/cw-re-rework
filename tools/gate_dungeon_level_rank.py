#!/usr/bin/env python3
"""Gate: where the dungeon's level and rarity byte come from.

These were the last two unmodelled inputs of the loot layer (`RE_dungeon_loot.md`,
`RE_52b470_item_generator.md`). The assembler reads them straight off its site argument:

    FUN_00500300 @0x50039f:   ecx = [site + 0x80]  -> [ebp-0x2bac]   the LEVEL
                 @0x5003a5:   al  = [site + 0x84]  -> [ebp-0x2bd4]   the RARITY byte

The site record is the structure descriptor itself -- its `+0x60/+0x64` are the zone coords and
its `+0x78/+0x79` are the chunk kind (3) and sub-type (= the dungeon style the caller passes).
So level/rank are the descriptor's `+0x20`/`+0x24`, and both are written by **FUN_0050e080, the
feature generator**, which cw_rederive already ports bit-exact (3328/3328).

LEVEL -- @0x50ea8b, one store, at 0x50eab1:

    level = ftol( FUN_00411090( (float)counter * 0.015625f ) )      // 0.015625 = 1/64
    FUN_00411090(x) = (1/(1 - x) - 1) * 20 + 1

That call site is what settles `FUN_00411090`: ADJUDICATION.md left it "unproven -- kind is
GAME", noting cw_callgraph's `monster_level_formula` asserted semantics the body alone did not
establish. Its result being stored as the dungeon's level establishes it.

RANK -- @0x50ed37, banded on that level, one roll:

    level <  5   ->  0
    level <  10  ->  rand() % 2
    level <  15  ->  rand() % 3
    level <  19  ->  rand() % 3 + 1
    else         ->  rand() % 4 + 1

Reads raw/dungeon_site_capture*.json (tools/frida_dungeon_site.py).
"""
import glob
import json
import os
import struct
import sys

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")


def f32(x):
    return struct.unpack("<f", struct.pack("<f", x))[0]


def level_of(counter):
    """FUN_00411090 fed by counter/64, truncated -- the one store at 0x50eab1."""
    x = f32(f32(counter) * f32(0.015625))
    return int((1.0 / (1.0 - x) - 1.0) * 20.0 + 1.0)


def rank_band(level):
    """-> (modulus, offset); the rank is `rand() % modulus + offset`, or a fixed 0."""
    if level < 5:
        return (0, 0)
    if level < 10:
        return (2, 0)
    if level < 15:
        return (3, 0)
    if level < 19:
        return (3, 1)
    return (4, 1)


def main():
    names = sorted(glob.glob(os.path.join(RAW, "dungeon_site_capture*.json")))
    ok = True
    rows = []
    for f in names:
        cap = json.load(open(f))
        for s in cap["sites"]:
            lvl, rank = s["level"], s["rank"]
            mod, off = rank_band(lvl)
            lo, hi = (0, 0) if mod == 0 else (off, off + mod - 1)
            inband = (rank == 0) if mod == 0 else (lo <= rank <= hi)
            # the level must be reachable by the formula for some integer counter
            hits = [c for c in range(0, 64) if level_of(c) == lvl]
            good = inband and bool(hits)
            ok &= good
            rows.append((tuple(cap["zone"]), s["style"], lvl, rank, mod, off, lo, hi,
                         hits[0] if hits else None, hits[-1] if hits else None, good))

    print("%-16s %-5s %-6s %-5s %-22s %-14s" %
          ("zone", "style", "level", "rank", "rank rule", "counter band"))
    for z, st, lvl, rank, mod, off, lo, hi, c0, c1, good in rows:
        rule = "0 (level < 5)" if mod == 0 else "rand()%%%d + %d -> [%d,%d]" % (mod, off, lo, hi)
        print("%-16s %-5d %-6d %-5d %-22s %-14s %s"
              % (str(z), st, lvl, rank, rule,
                 ("%d..%d" % (c0, c1)) if c0 is not None else "none", "OK" if good else "BAD"))
    print()
    print("  %d dungeons: rank in its level band and the level reachable by the formula -- %s"
          % (len(rows), "ALL PASS" if ok else "FAILURES"))
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
