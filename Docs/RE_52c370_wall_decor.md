# `FUN_0052c370` — the dungeon wall-decor emitter — SOLVED, gated

The scatter's sibling. The same four wall-direction blocks call both, but where
`FUN_0052a830`'s furniture goes into the prop vector at `site+0xc`
(`RE_52a830_scatter.md`), this one's record goes to **`site+4` — a `std::list`**, pushed by
`FUN_00528450`. That is the assembler's *second* decoration container, and it also holds the
chandelier, liana and cobweb records.

**Gated on the same 6 dungeons: 108/108 records — id, scale, flag, draw count and position.**

```
python tools/frida_dungeon_props.py [zx zz]     # capture -> raw/dungeon_props_capture*.json
python tools/gate_52c370_decor.py --all         # gate
```

## The function

```c
FUN_0052c370(rec, style, pos, angle)            // 341 bytes

rec.pos    = pos;                               // 3 x int64 16.16 -- always cell floor + 2.0
rec+0x20   = 0.0625;                            // constant
rec+0x24   = angle;                             // 270 / 90 / 0 / 180, one per wall direction
rec.scale  = (1.0, 1.0, 1.0);  rec+0x38 = 2;    // defaults; two branches override them

switch (style) {
  case 3:   id = 0x30;                                                       // 0 draws
  case 1:
  case 2:   switch (rand() % 3) {                                            // 1 draw
                0: id = 0x32;
                1: id = 0x31;
                2: id = 0x34;  scale = (0.0, 0.5, 0.1);  rec+0x38 = 1;
            }
  case 0:   rand() % 2 == 0 ? (id = 0x32, pos.z += 0x20000) : <tail>;        // 1 draw
  case 4:   rand() % 2 != 0 ? (id = rand() % 4 + 0x2c)      : <tail>;        // 1-2 draws
  case 5:   <tail>;                                                          // 0 draws
  default:  return with the id the caller left in place;
}
<tail>: id = 0x36;  scale = (0.8, 0.7, 0.2);  rec+0x38 = 1;
```

### The ids, and what they confirm

Every id resolves through RatForge's `dungeonPropModelName` — the *static-entity* namespace,
not the hanging-decor one:

| style | ids selected | models |
|---|---|---|
| 0 | `0x32` (coin even, **raised 2.0**) / `0x36` (odd) | street-light01 / fence03 |
| 1, 2 | `0x32` / `0x31` / `0x34` | street-light01 / flower-box03 / fence01 |
| 3 | `0x30` | flower-box02 |
| 4 | `0x2c`–`0x2f` (coin odd) / `0x36` (even) | corpse, runestone, artifact, flower-box01 / fence03 |
| 5 | `0x36` | fence03 |

This confirms RatForge's note *"Decor — 52c370 wall decoration (id 0x30 for style 3)"* directly
from the binary's `case 3: *param_1 = 0x30`, and extends it to the other five styles. Styles 4
and 5 have no scanned dungeon among the six, so their rows are read off the arithmetic.

### The one position quirk, verified

Every wall-decor record sits at **cell floor + 2.0**, with one exception: the style-0 coin-even
branch does `*(rec+6) += 0x20000` before returning. The capture bears it out exactly — across
all six dungeons, every decor record is at `+2.00` except style-0 `0x32`, which is at `+4.00`.
Nine records, no exceptions. A decoded-then-confirmed prediction rather than an assumed one.

## Gate results

| zone | style | wall-decor records |
|---|---|---|
| (32795, 32796) | 3 | 17 |
| (32780, 32788) | 1 | 16 |
| (32787, 32796) | 2 | 19 |
| (32796, 32787) | 0 | 15 |
| (32804, 32788) | 3 | 14 |
| (32804, 32811) | 2 | 27 |
| **total** | | **108/108** |

Checked per record: the id, the scale triple, the `+0x38` flag, the number of draws consumed,
the `0.0625` constant at `+0x20`, and the z position including the style-0 bump.

## The rest of `site+4`

The list receives records from six emitters in total. This closes the four wall-decor ones;
the other two are captured but not yet modelled:

| push site | id(s) | count | what |
|---|---|---|---|
| `0x10628c` `0x1065f1` `0x106956` `0x106cc5` | `0x30`–`0x36` | 108 | **this document** |
| `0x105b84` | `0x37` | 37 | liana — styles 2/4 ceiling |
| `0x105cf5` `0x105e58` `0x105fbb` `0x106118` | `0x39`, `0x3a` | 99 | cobwebs / cobwebs2 — styles 1/2 walls |
| `0x1078ad` | `0x38` | 24 | chandelier — style 3 ceiling, the `rand() % 10` block at `0x507760` |

Those three use the **hanging-decor** id namespace (`dungeonHangingModelName`), a different one
from the wall decor above — `0x33`–`0x36` are the four torch colours there, versus
street-light/fence here. Same container, two id namespaces, discriminated by emitter.
