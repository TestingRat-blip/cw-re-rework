#!/usr/bin/env python3
"""Gate: reproduce the dungeon BOSS spawn -- the `cell.flags & 4` block at 0x5078b3.

The block is the last statement of the same per-cell body as the mob pass. Model:

    if (cell.flags & 4) {                                    // 0x5078b3
        boss = new cube::Spawn();                            // 0x10f0 bytes, ctor 0x4e0f40
        boss[0x10] = ftol( (float)((float)(baseX + I*10) + 4.5f) * 65536.0f )   // 0x402a10
        boss[0x18] = ftol( (float)((float)(baseY + J*10) + 4.5f) * 65536.0f )
        boss[0x20] = (int64)(baseZ + K*10 + 1) << 16                            // 0x4cde40
        boss[0x28] = 1
        boss[0x34] = max(1, level)                           // level from [ebp-0x2bac]
        boss[0x58] &= ~0xff;  boss[0x58] |= byte             // from [ebp-0x2bd4]
        boss[0x2c] = species[ rand() % species.size() ]      // draw A
        addItem(boss.equip, itemGen(level, rankRoll(byte, 1)))
        boss[0x7a] |= 0x1000 | 0x200
        boss[0x109c] = new cube::CombatBehavior(20.0f)
        emit record kind 6 -> site+0x48
        n = rand() % 4;  n x addItem(boss.equip, <fixed item 0x0101>)   // draw B
        boss[0x08] = 150.0f;  boss[0x10e8] = 1
        site->spawns.push_back(boss)
    }

Derived here: the flag cell (from the cell grid), the whole position, every deterministic
field, both rand-driven outcomes, and -- since 2026-07-24 -- the species vector. Taken from the
capture: the rand *stream* (142 or 134 draws, most of them inside the item generator
FUN_0052b470), and `level` / the `[ebp-0x2bd4]` byte, both now sourced by
Docs/RE_dungeon_level_rank.md.

## The species vector

`[ebp-0x2be8]`, built in the assembler's PROLOGUE (0x500370-0x500693) by a five-entry jump
table on `style - 1` at `0x5003d3` (`jmp [eax*4 + 0x509d80]`, `cmp eax,4 / ja` -> default).
Style 0 lands on the default because `0 - 1` is unsigned-huge. Reading the table:

    style 1 -> 0x500538      style 3 -> 0x5004ae      style 5 -> 0x5003da
    style 2 -> 0x500538      style 4 -> 0x50065b (the default)

so the vector is a four-way table, not a six-way one, and the style-5 pair is stored in
descending order:

    styles 1, 2       {15, 16}
    style  3          {2, 3}
    style  5          {78, 77}
    styles 0, 4       {11, 12}      (the default arm)

Each arm also fills two more creature lists (`[ebp-0x37c]`, `[ebp-0x370]`) that go to a second
container `[ebp-0x2bf4]`; those feed the MOB pass's species, which is a separate thread.

Reads raw/dungeon_boss_capture*.json plus the matching raw/dungeon_grid_capture*.json.
"""
import base64
import json
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from gate_50702a_mobs import CellGrid                                  # noqa: E402

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")

# the prologue's jump table on style-1 (0x5003d3 -> 0x509d80), read off the binary
SPECIES = {1: [0x0F, 0x10], 2: [0x0F, 0x10], 3: [0x02, 0x03], 5: [0x4E, 0x4D]}


def species_for(style):
    """`[ebp-0x2be8]` -- styles 0 and 4 take the default arm at 0x50065b."""
    return SPECIES.get(style, [0x0B, 0x0C])


def f32(x):
    """Round a Python float to float32, the way the SSE code does."""
    return struct.unpack("<f", struct.pack("<f", x))[0]


def boss_pos(base_x, base_y, base_z, i, j, k):
    """FUN_00402a10 (float*65536 -> ftol_trunc) for x/y, FUN_004cde40 (<<16) for z.

    The `+ 4.5f` is largely *lost*: the world coordinate is ~8.4e6, past float32's 2^23
    integer-exact range, so `(float)(base + I*10) + 4.5f` rounds to an even integer and the
    half disappears. Reproducing that rounding is required -- computing in double puts the
    boss 32768 fixed-point units (half a block) off.
    """
    x = int(f32(f32(f32(base_x + i * 10) + f32(4.5)) * f32(65536.0)))
    y = int(f32(f32(f32(base_y + j * 10) + f32(4.5)) * f32(65536.0)))
    z = (base_z + k * 10 + 1) << 16
    return x, y, z


def find_flag_cell(grid):
    """The one cell per dungeon with flags bit 2 set, in the loop's I->J->K order."""
    out = []
    for i in range(grid.dim_x):
        for j in range(grid.dim_y):
            for k in range(grid.dim_z):
                kind, flags = grid.cell(i, j, k)
                if kind in (3, 4) and (flags & 4):
                    out.append((i, j, k, kind, flags))
    return out


def one(name):
    cap = json.load(open(os.path.join(RAW, name)))
    zone = tuple(cap["zone"])
    print(f"== {name}  zone {zone}")
    gname = "dungeon_grid_capture.json" if name == "dungeon_boss_capture.json" \
        else "dungeon_grid_capture_%d_%d.json" % zone
    gcap = json.load(open(os.path.join(RAW, gname)))
    g = gcap["grids"][0]
    grid = CellGrid(g["rot"], g["mirror"], g["dimX"], g["dimY"], g["dimZ"],
                    base64.b64decode(g["bytes_b64"]))
    ok = True

    # --- A: the flag cell, found in the grid ------------------------------------------
    found = find_flag_cell(grid)
    live = [(b["I"], b["J"], b["K"]) for b in cap["bosses"]]
    ok &= check("flag-4 cell located in the grid", [(c[0], c[1], c[2]) for c in found], live)
    if found:
        print(f"   cell {found[0][:3]} kind={found[0][3]} flags={found[0][4]} "
              f"style={cap['bosses'][0]['style']}")

    for b in cap["bosses"]:
        h = bytes(b["head"])
        u32 = lambda o: struct.unpack_from("<I", h, o)[0]        # noqa: E731
        i64 = lambda o: struct.unpack_from("<q", h, o)[0]        # noqa: E731

        # --- B: the position ----------------------------------------------------------
        ok &= check("boss position (3 x int64 16.16)",
                    list(boss_pos(b["baseX"], b["baseY"], b["baseZ"], b["I"], b["J"], b["K"])),
                    [i64(0x10), i64(0x18), i64(0x20)])

        # --- C: the deterministic field writes ----------------------------------------
        model = {"+0x28": 1,
                 "+0x34": max(1, b["level"]),
                 "+0x58 low byte": b["p2bd4"] & 0xff,
                 "+0x7a": 0x1000 | 0x200,
                 "+0x08 (float)": 150.0,
                 "+0x10e8": 1,
                 "+0x109c non-null": True}
        real = {"+0x28": u32(0x28),
                "+0x34": u32(0x34),
                "+0x58 low byte": h[0x58],
                "+0x7a": struct.unpack_from("<H", h, 0x7a)[0],
                "+0x08 (float)": struct.unpack_from("<f", h, 8)[0],
                "+0x10e8": b["b10e8"],
                "+0x109c non-null": b["behav"] != 0}
        ok &= check("deterministic fields", model, real)

        # --- D: draw A -- the species vector, then the pick ----------------------------
        sp, rv = b["species"], b["rand_vals"]
        ok &= check("species vector from the prologue jump table (style %d)" % b["style"],
                    species_for(b["style"]), sp)
        ok &= check("species (+0x2c) = species[rand() %% %d]" % len(sp),
                    sp[rv[0] % len(sp)], u32(0x2c))

        # --- E: draw B -- the extra-item count ----------------------------------------
        # The n copies are identical, so they stack into one slot: the equipment vector
        # holds the generated item plus at most one more.
        n = rv[-1] % 4
        ok &= check("equipment slots = 1 + (rand() %% 4 > 0)  [n=%d]" % n,
                    1 + (1 if n else 0), b["equipCount"])
        print(f"   rand: {b['rand_draws']} draws, A={rv[0]} B={rv[-1]}  "
              f"(level {b['level']}, byte {b['p2bd4']}, species {sp})")

    print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    return 0 if ok else 1


def check(what, model, live):
    if model == live:
        print(f"[PASS] {what}")
        return True
    print(f"[FAIL] {what}\n   model {model}\n   live  {live}")
    return False


def main():
    args = sys.argv[1:]
    if not args or args == ["--all"]:
        names = sorted(f for f in os.listdir(RAW) if f.startswith("dungeon_boss_capture"))
        if args != ["--all"]:
            names = ["dungeon_boss_capture.json"]
    else:
        names = args
    rc = 0
    for n in names:
        rc |= one(n)
        print()
    if len(names) > 1:
        print(f"== {len(names)} dungeons  " + ("ALL PASS" if rc == 0 else "FAILURES"))
    return rc


if __name__ == "__main__":
    sys.exit(main())
