# The dungeon loot pass — chest contents and scattered ground items — SOLVED, gated

The last unmodelled slice of the dungeon assembler's decoration work. After the prop vector at
`site+0xc` is built (`RE_dungeon_lights.md`, `RE_52a830_scatter.md`), the assembler walks it
once more and does two things per prop.

**Gated on the same 6 dungeons: 48/48 ground items and 4/4 chest fills.**

```
python tools/frida_dungeon_props.py [zx zz]     # capture -> raw/dungeon_props_capture*.json
python tools/gate_dungeon_loot.py --all         # gate
```

## Chest fill — props of id `0x0a`

```c
n = rand() % 4 + 1;                                  // 1..4 items
reserve(prop + 0x48, 5);
for (i = 0; i < n; i++)
    addItem(prop + 0x48, FUN_0052b470(&tmp, level, rankByte + 1));
prop[+0x30] = 2;
```

The rank is `rankByte + 1` — literally the value `FUN_0052bf40(rankByte, 1)` returns for the
boss, because that function's second argument discards its whole rarity computation
(`RE_52b470_item_generator.md`). So a chest and a boss roll their loot at the same rank.

### Cross-checked against a separate capture

The item generator's own rig recorded every `FUN_0052b470` invocation *with its call site*, so
the modelled chest counts must sum to the number of calls made from the chest site — and they
do, in all six dungeons, from two independently captured runs:

| zone | modelled counts | Σ | `FUN_0052b470` calls at `0x106f49` |
|---|---|---|---|
| (32795, 32796) | — | 0 | 0 |
| (32780, 32788) | `[4]` | 4 | 4 |
| (32787, 32796) | — | 0 | 0 |
| (32796, 32787) | `[3]` | 3 | 3 |
| (32804, 32788) | `[3, 1]` | 4 | 4 |
| (32804, 32811) | — | 0 | 0 |

That check is now part of the gate.

## Scattered ground loot

For every prop whose footprint `size[1]` is positive, over its `size[0] × size[1]` cells:

```c
if (rand() % 10 != 0) continue;                      // 1 in 10 per footprint cell
init item;  item[+0x134] = 0.06f;  item[+0x138] = 1;

if (rand() % 6 != 0) switch (rand() % 4) {           // the common table
    0: (0x0b, 0x1a)
    1: (0x12, <a per-dungeon byte>),  item[+0x04] = rand() % 3
    2: (0x0b, 0x09),                  item[+0x0d] = rand() % 3 + 0x19
    3: (0x01, 0x07)
} else switch (rand() % 6) {                         // the rare table, 1 in 6 of those
    0: (0x01, 0x01)    1: (0x01, 0x04)    2: (0x01, 0x05)
    3: COIN
    4: FUN_0052b470(&tmp, level, rankByte)           // the item generator
    5: FUN_0052a760(&tmp, level, rankByte)           // its special-candidate wrapper
}

item.pos   = prop.pos + ((ix - size[0]*0.5) + 0.5, (iy - size[1]*0.5) + 0.5, size[2]);
item.angle = (float)rand() * 360 / 32767;
push(site + 0x30, item);                             // stride 0x148
```

So a *generated* item — the same generator the boss and the chests use — appears on the ground
at roughly 1 cell in 360, and the two rare-table slots 4 and 5 are the only path by which
`FUN_0052a760`'s special candidate reaches the floor directly.

### The coin

Rare-table case 3 is the only one that computes rather than looks up:

```c
e = ((float)rand() * 2.0f / 32767.0f + 1.0f) * ((float)level * 0.25f);
n = (int)powf(2.0f, e);
item[+0x00] = 0x0c;  item[+0x0d] = 10;  item[+0x10] = (short)(rand() % (2*n + 2));
```

`FUN_004055a0` is `powf` — it imports `__libm_sse2_pow_precise`, which is the `/fp:precise`
fingerprint the toolchain work pinned (`CRT_SYMBOLS.md`), so a port must call the precise
routine here, not a fast approximation. The amount therefore scales as `2^(level/4)` with a
1×–2× random multiplier on the exponent.

### The record

The ground-item record is an `ItemData` (0x118) followed by position (`+0x118`, 3 × int64
16.16), angle (`+0x130`), `0.06f` (`+0x134`) and a flag (`+0x138`) — **0x148** in all, which is
the stride of the vector at `site+0x30`.

## Gate results

| zone | style | ground items | chest fills |
|---|---|---|---|
| (32795, 32796) | 3 | 2 | 0 |
| (32780, 32788) | 1 | 6 | 1 |
| (32787, 32796) | 2 | 11 | 0 |
| (32796, 32787) | 0 | 4 | 1 |
| (32804, 32788) | 3 | 8 | 2 |
| (32804, 32811) | 2 | 17 | 0 |
| **total** | | **48/48** | **4/4** |

Per ground item the gate checks: the 1-in-10 decision, which of the two tables was used, the
case within it, the case's sub-roll (`+0x04` or `+0x0d` or the coin amount), the angle, and the
two constants. Items from rare-table cases 4 and 5 have their *kind* deferred to
`gate_52b470_itemgen.py` / `gate_52a760_subgen.py`, which already reproduce those generators;
everything else about them is checked here.

Item kinds observed across the six dungeons: `(0x01,0x07)` ×14, `(0x0b,0x09)` ×10,
`(0x0b,0x1a)` ×8, `(0x12,·)` ×11, plus 4 generated (`0x02`/`0x03`) and 1 coin. The rare table's
fixed slots 0–2 did not occur — at 1 cell in 360 each, that is expected across only 48 items,
and they are modelled from the code rather than observed.

## What this completes

With this, every emitter the dungeon assembler feeds is reproducible:

| container | contents | doc |
|---|---|---|
| `site+0xc` | 494 prop records — torch, wall stub, furniture, chests | `RE_dungeon_lights.md`, `RE_52a830_scatter.md` |
| `site+4` | 268 decor records — wall decor, liana, cobwebs, chandelier | `RE_52c370_wall_decor.md`, `RE_hanging_decor.md` |
| `site+0x30` | 48 ground items | **this document** |
| `prop+0x48` | chest contents | **this document** |
| `site+0x18` | 1,122 creature spawns + 6 bosses | `RE_50702a_mob_populator.md` |
| `site+0x48` | entrance and boss records | `RE_50702a_mob_populator.md` |
