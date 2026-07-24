# The dungeon level and rarity byte — sourced, and the rank rule derived

The two inputs the loot layer needed and the port did not have
(`RE_dungeon_loot.md`, `RE_52b470_item_generator.md`). **The rank rule is fully derived and
gated 6/6; the level formula is proven and settles a long-contested label; one input to that
formula is still unidentified, inside an already-ported function.**

```
python tools/frida_dungeon_site.py [zx zz]      # capture -> raw/dungeon_site_capture*.json
python tools/gate_dungeon_level_rank.py         # gate
```

## Where they come from

The assembler reads both straight off its first argument:

```
00500339  mov eax, [ebp+8]                  ; the site record
0050039f  mov ecx, [eax + 0x80]             ; -> [ebp-0x2bac]   LEVEL
005003a5  movzx eax, byte ptr [eax + 0x84]  ; -> [ebp-0x2bd4]   RARITY byte
```

Dumping that record live settles what it is — it is the **structure descriptor itself**:

| offset | field | observed |
|---|---|---|
| `+0x60` `+0x64` | zone X, Z | 32795/32796, 32780/32788, … |
| `+0x78` | chunk kind | 3 (dungeon) |
| `+0x79` | sub-type | 3, 1, 2, 0, 3, 2 — **the style the caller passes** |
| `+0x80` | level | 3, 23, 6, 30, 52, 1 |
| `+0x84` | rarity byte | 0, 3, 0, 2, 2, 0 |

The caller reads the same two bytes as `[chunk+0x18]` / `[chunk+0x19]`, so the descriptor's
base sits at `site+0x60` and level/rank are its `+0x20` / `+0x24`. That is why a scan for
`mov [reg+0x80/0x84]` found only struct copies — the writes use the small offsets.

Both are written by **`FUN_0050e080`, the feature generator**, which `cw_rederive` already
ports bit-exact (`cw_featuregen`, 3328/3328). So neither is new generation logic; they are
fields of a structure the port already produces.

## The level formula — and the label it settles

One store, at `0x50eab1`:

```c
level = ftol( FUN_00411090( (float)counter * 0.015625f ) );   // 0.015625 = 1/64
FUN_00411090(x) = (1.0 / (1.0 - x) - 1.0) * 20.0 + 1.0;
```

`FUN_00411090` has been contested for a long time. `ADJUDICATION.md` left it *"unproven — kind
is GAME"*, with the note that `cw_callgraph.py`'s `monster_level_formula` "asserts semantics
the body alone does not establish", while `CW_CONFIDENCE_XREF.md` had it as `lib`. **This call
site establishes it**: its result is stored as the dungeon's level. Relabelled
`monster_level_formula`, kind game.

The curve is a hyperbola in `counter/64` — it climbs slowly at first and then steeply, which
is what a distance-scaled difficulty ramp looks like.

### Inverting it against the captures

The formula is monotonic, so each level maps to a contiguous band of integer counters. Every
observed level is reachable, and three are pinned to a single value:

| zone | level | counter |
|---|---|---|
| (32804, 32811) | 1 | 0–3 |
| (32795, 32796) | 3 | 6–8 |
| (32787, 32796) | 6 | 13–14 |
| (32780, 32788) | 23 | **34** |
| (32796, 32787) | 30 | **38** |
| (32804, 32788) | 52 | **46** |

## The rank rule — derived

`0x50ed37`, immediately after: banded on that level, one roll.

```c
if      (level <  5)  rank = 0;                 // no draw at all
else if (level < 10)  rank = rand() % 2;
else if (level < 15)  rank = rand() % 3;
else if (level < 19)  rank = rand() % 3 + 1;
else                  rank = rand() % 4 + 1;
```

Checked against all six captures — every rank falls in the band its level implies, and the
two level-1/3 dungeons both have rank 0 as the first branch requires:

| zone | level | rank | rule | band |
|---|---|---|---|---|
| (32795, 32796) | 3 | 0 | fixed 0 | — |
| (32780, 32788) | 23 | 3 | `rand()%4 + 1` | 1–4 |
| (32787, 32796) | 6 | 0 | `rand()%2` | 0–1 |
| (32796, 32787) | 30 | 2 | `rand()%4 + 1` | 1–4 |
| (32804, 32788) | 52 | 2 | `rand()%4 + 1` | 1–4 |
| (32804, 32811) | 1 | 0 | fixed 0 | — |

Note the branch matters for the stream as well as the value: below level 5 it consumes **no
draw**, every other band consumes exactly one.

## Ported

Both rules are in `src/worldgen/cw/CwItemGen.h` as `cwDungeonLevel(counter)` and
`cwDungeonRank(rng, level)`. The gates stay green and the output hash is unchanged.

## What is still open

**The identity of `counter`** — the value at `[esp+0x28]` that the level formula is fed. It is
a running integer inside `FUN_0050e080`, incremented across the feature pass, and the one path
this document traced statically (`0x50ea0e`) sets it to 0, so the live values (34, 38, 46) must
arrive by another route into the same store. Since `FUN_0050e080` is **already ported
bit-exact**, closing this is a matter of matching the counter to state the port already
computes, not new reverse engineering. Until then `cwDungeonLevel` is correct but unfed, and
the walk's `dunLevel`/`dunRank` still default to 0.
