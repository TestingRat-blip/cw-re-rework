# `FUN_0052a830` — the dungeon furniture scatter — SOLVED, gated

The other prop ids in the assembler's `site+0xc` vector. Two of that vector's 13 ids are the
light sources (`RE_dungeon_lights.md`); the remaining **nine are all produced by this one
function**, called from four emitters — one per wall direction.

**Gated on the same 6 dungeons: 196/196 scatter records reproduced — id, size and draw count —
from the dungeon style plus three `rand()` draws.**

```
python tools/frida_dungeon_props.py [zx zz]     # capture -> raw/dungeon_props_capture*.json
python tools/gate_52a830_scatter.py --all       # gate
```

## The prop vector, in full

`site+0xc` holds 0x188-byte records (`FUN_004c84b0` constructs one, `FUN_004c8420` copies one,
`FUN_004cd8f0` destroys one, `FUN_004d6670` pushes it). Across the 6 dungeons it receives
**494 records of 13 ids**:

| id | model (RatForge `dungeonPropModelName`) | count | emitter |
|---|---|---|---|
| `0x04` | wall-stub light | 280 | 4 stub blocks — `RE_dungeon_lights.md` |
| `0x07` | torch light | 18 | the 1-in-40 block — `RE_dungeon_lights.md` |
| `0x0a` | chest-base | 4 | `FUN_0052a830` |
| `0x0c` | table | 52 | `FUN_0052a830` |
| `0x10` | stool | 84 | `FUN_0052a830` |
| `0x20`–`0x22` | shelf1/2/3 | 16 | `FUN_0052a830`, style 3 |
| `0x23`–`0x25` | castle-shelf1/2/3 | 40 | `FUN_0052a830`, styles 0/1/2 |

`FUN_004c8420` also tells us what a prop record *is*: it copies the base fields, a vec at
`+0x48`, `+0x54`, **an `ItemData` at `+0x58` via `FUN_00413710`**, and `+0x170..+0x184`. So
every prop carries a full 0x118-byte item — the chest's contents live inside the prop record.

## The selection — three draws and the style

```c
FUN_0052a830(out, pos, dir, style)

g = rand();
if (g % 50 == 0) {                       // 1 in 50 -> CHEST
    id = 0x0a;  size = (1.5, 1.0, 1.0);
    storedDir = (dir + 2) % 4;           // the chest is turned to face out of the wall
    // its switch(dir) calls ftol, not rand -> the chest consumes ONE draw in total
} else switch (rand() % 3) {
  case 0:  // SHELF -- the family is chosen by dungeon style
      id = (style == 3 ? 0x20 : style == 4 ? 0x26 : style == 5 ? 0x29 : 0x23) + rand() % 3;
      size = (2.0, 1.0, 1.57);
      break;
  case 1:  // TABLE
      id = (style == 4) ? 0x0d : 0x0c + 2 * (style == 5);
      size = (3.0, 3.0, 1.0);   switch (dir) { ... rand() jitter ... }
      break;
  case 2:  // STOOL
      id = (style == 4) ? 0x0f : 0x10 + (style == 5);
      size = (1.0, 1.0, 0.5);   switch (dir) { ... rand() jitter ... }
}
```

So the style→family mapping falls straight out of the arithmetic:

| style | shelf | table | stool |
|---|---|---|---|
| 0, 1, 2 | `0x23` castle-shelf | `0x0c` table | `0x10` stool |
| 3 (castle) | `0x20` shelf | `0x0c` table | `0x10` stool |
| 4 (jungle temple) | `0x26` stone-shelf | `0x0d` stone-table | **`0x0f`** |
| 5 (pyramid) | `0x29` sandstone-shelf | `0x0e` sandstone-table | `0x11` stone-stool |

This is an independent confirmation of RatForge's `dungeonPropModelName` table from the
binary's own selection arithmetic — the four shelf bases 0x20/0x23/0x26/0x29 and the
plain/stone/sandstone table triple 0x0c/0x0d/0x0e are exactly the groupings that table names.

### One gap it exposes

**`0x0f` is not in `dungeonPropModelName`.** A style-4 (jungle temple) dungeon's stool branch
selects it, and `runDungeonTest` fails on unresolved prop ids
(`"%zu prop ids lack pack models"`), so a style-4 dungeon test will trip on it once the walk
reaches that branch. The table has `0x0e` then jumps to `0x10`. Note the asymmetry that makes
this easy to miss: for the table, style 4 takes the *middle* of a triple (`0x0d`) while for the
stool it takes an id *below* the plain one (`0x0f` vs `0x10`).

Styles 4 and 5 have no scanned dungeon among the six, so their rows above are read off the
arithmetic, not observed.

## Gate results

| zone | style | scatter records |
|---|---|---|
| (32795, 32796) | 3 | 28 |
| (32780, 32788) | 1 | 28 |
| (32787, 32796) | 2 | 43 |
| (32796, 32787) | 0 | 24 |
| (32804, 32788) | 3 | 30 |
| (32804, 32811) | 2 | 43 |
| **total** | | **196/196** |

Every record's id, size triple and draw count reproduced. The chest consumes exactly 1 draw and
everything else exactly 3, across all 196.

Positions are not re-derived here: the jitter and the chest's block-snap are already gated by
`../../../docs/CW_DUNGEON_DECORATION_RE.md` in the port repo, including a falsification of the
jitter sign that this work does not need to repeat.

## The sibling emitter, and what is left

`FUN_0052c370` is called from the same four wall blocks but its record goes to **`site+4`** — a
`std::list`, not the prop vector — via `FUN_00528450`. That is the same container the style-3
chandelier (`id 0x38`) goes into. So the assembler keeps wall *decor* and floor *props* in two
different containers, and only the latter is covered here.

## A trap worth recording

The rig's return-address filter for `FUN_0052a830` was first written as
`[0x12a830, 0x12a830 + 4820)` — using the length of its **decompiled C** as if it were a byte
size. The real function is **1448 bytes**; the bogus range runs past `FUN_0052b470`'s entry at
`0x12b470` and swallowed 72 of the item generator's draws into three scatter records. It
surfaced as three records with 75 draws instead of 3, which is only obviously wrong because
every other record was uniform. **A function's decompiled-C length is not its size** — read the
size from the metadata.
