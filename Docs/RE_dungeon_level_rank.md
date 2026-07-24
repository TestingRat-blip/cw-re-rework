# The dungeon level and rarity byte — sourced, and both rules derived

The two inputs the loot layer needed and the port did not have
(`RE_dungeon_loot.md`, `RE_52b470_item_generator.md`). **Both are now closed: level and rank are
reproduced 6/6 ab-initio from the world seed alone**, and the level formula settles a
long-contested label.

```
python tools/frida_dungeon_site.py [zx zz]      # capture -> raw/dungeon_site_capture*.json
python tools/gate_dungeon_level_rank.py         # the rule gate (formula reachability + band)
python tools/gate_dungeon_counter.py            # the ab-initio gate (level 6/6, rank 6/6)
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

The curve is a hyperbola in `counter/64` — it climbs slowly at first and then steeply. The
guess that it was *distance*-scaled is wrong: with `counter` identified below, the ramp is over
the dungeon's **slot index within its region**, so difficulty varies inside a region rather than
with distance from the world centre.

## `counter` — the Pass-3 candidate loop index

The disassembly settles it. `[esp+0x28]` is the induction variable of the
**candidate-processing loop**, Pass 3 of the feature generator:

```
0050ea0c   xor ecx, ecx
0050ea0e   mov [esp+0x28], ecx            ; counter = 0
0050ea12   cmp eax, esi / je 0x50f28a     ; candidate list empty -> loop exits
0050ea1a   test cl, 1 / jne 0x50f27c      ; ODD counter -> no work at all, just increment
0050ea23   ...                            ; even -> pop the front candidate (SUB ESI,0xc)
0050eab1   [cell+0x1403c] = ftol(FUN_00411090(counter/64))        ; the LEVEL
0050eabc   and eax, 0x80000001            ; (counter >> 1) & 1 -> the DUNGEON branch (type 0xe)
0050f27c   inc ecx / mov [esp+0x28], ecx
0050f281   cmp ecx, 0x40 / jl 0x50ea12    ; 64 iterations
```

So the counter runs 0..63; even iterations consume one candidate from the sorted list, and
`(counter >> 1) & 1` is what makes the popped cell a dungeon. Two consequences:

- **a dungeon can only sit at a counter `≡ 2 (mod 4)`**, so each level pins to a *unique*
  counter — the three bands below that could not be narrowed collapse to 2, 6 and 14;
- **both ports already computed it.** `cw_featuregen.pass3` iterates exactly this `idx` and its
  `_sub_count(idx)` *is* the level; cwgen's `CwFeatureGrid.cpp` has the same value as
  `cellLevel(k)`, and `subtypeByLevel` is the rank. Both had only ever used them to decide
  whether the branch draws — the values were computed and thrown away. Nothing new had to be
  generated; the fix was to keep them.

### Against the captures — ab-initio

`tools/gate_dungeon_counter.py` generates the region's feature grid from the seed, locates the
type-`0xe` cell that lands in each captured zone, reads its position `k` in the sorted candidate
list (→ counter `2k`), and evaluates both rules. The rank roll is `_subswitch`, the draw the port
already makes and discards.

| zone | counter | cell | level | live | rank | live |
|---|---|---|---|---|---|---|
| (32804, 32811) | 2 | 37 | 1 | 1 | 0 | 0 |
| (32795, 32796) | 6 | 27 | 3 | 3 | 0 | 0 |
| (32787, 32796) | 14 | 19 | 6 | 6 | 0 | 0 |
| (32780, 32788) | 34 | 10 | 23 | 23 | 3 | 3 |
| (32796, 32787) | 38 | 26 | 30 | 30 | 2 | 2 |
| (32804, 32788) | 46 | 34 | 52 | 52 | 2 | 2 |

**Level 6/6, rank 6/6** — exact values, not bands. All six dungeons live in one region
(512, 512), at six distinct slots.

### The 16 dungeon slots of a region

Because the dungeon branch only fires at `counter = 4m + 2`, a region has at most 16 dungeons and
their levels are a fixed ladder — the slot, not the site, decides the difficulty:

| m | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 |
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
| counter | 2 | 6 | 10 | 14 | 18 | 22 | 26 | 30 | 34 | 38 | 42 | 46 | 50 | 54 | 58 | 62 |
| level | 1 | 3 | 4 | 6 | 8 | 11 | 14 | 18 | 23 | 30 | 39 | 52 | 72 | 109 | 194 | 621 |

The observed six are `m ∈ {0, 1, 3, 8, 9, 11}`. The ladder is the hyperbola sampled at
`m/16`, so it is nearly flat for the first half of a region's dungeons and then runs away —
the last two slots are unreachable difficulty in practice.

## The rank rule — derived

`0x50ed37`, immediately after: banded on that level, one roll.

```c
if      (level <  5)  rank = 0;                 // no draw at all
else if (level < 10)  rank = rand() % 2;
else if (level < 15)  rank = rand() % 3;
else if (level < 19)  rank = rand() % 3 + 1;
else                  rank = rand() % 4 + 1;
```

The five branches are disassembly-exact (`0x50ed43`, `0x50ed57` `and 0x80000001`, `0x50ed7a`
`idiv 3`, `0x50ed96` `idiv 3` + `inc`, `0x50edae` `and 0x80000003` + `inc`), and the result is
stored to the *descriptor* base — `[esp+0x38] + ebx + 0x24` — not the cell base the level goes
to. That is why level and rank read back as `site+0x80` / `site+0x84`.

Note the branch matters for the stream as well as the value: below level 5 it consumes **no
draw**, every other band consumes exactly one. That draw is the one `cw_featuregen._subswitch`
already makes — so feeding the rank costs the port nothing in the rand stream.

Every rank is reproduced exactly (see the ab-initio table above), not merely placed in its band.

## Ported — and now fed

Both rules are in `src/worldgen/cw/CwItemGen.h` as `cwDungeonLevel(counter)` and
`cwDungeonRank(rng, level)`. With `counter` identified they are no longer dead inputs: the
values already produced inside the feature grid are kept and handed to the loot layer.

| file | change |
|---|---|
| `CwFeatureGrid.h` | `FeatureCell::level` (cell+0x1403c); `subtype` documented as the dungeon **rank** |
| `CwFeatureGrid.cpp` | Loop C stores `c.level = cellLevel(k)` |
| `Dungeons.h/.cpp` | `DungeonSite::level/rank` off the cell → `buildDungeon` → `dungeonDecorWalk` |

Neither value can change a draw count anywhere in the item family (`rank` only appears as
`rand() % (rank+1)`, `level` only as a value and inside the coin's `powf` exponent), so the
stream is untouched: **all cwgen gates stay green and the output hash stays `AB6C2A00E6BF77A4`**.
`--dungeontest` now reports the nearest dungeon as *level 52, rank 3* (its cell is slot
`k=23`/`counter=46` of region (512,512) in world 444444) instead of 0/0.
