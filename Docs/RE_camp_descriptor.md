# The camp DESCRIPTOR — the last captured input in the encampment path

```
python tools/gate_zone_grid.py     # 13,082 + 3,861 checks, 99 firing zones
python tools/gate_zone_camp.py     # 3,138 checks, 99 firing zones
```

`RE_5104e0_camp.md` and `RE_zone_grid.md` both closed their loops against a **captured**
feature descriptor, because three of its fields had never been derived:

| offset | what it feeds |
|---|---|
| `+0x20` | the camp **KIND**: `kinds[ desc[+0x20] % len(kinds) ]`, no rand at all |
| `+0x24` | the creature `Spawn`'s `+0x30` |
| `+0x28` | the creature `Spawn`'s `+0x54` |

Since `+0x20` alone decides which of the eleven camp arms runs — which props, which
species, whether props are placed at all — the whole populator was un-portable without it.
All three are now derived, and the descriptor is closed.

---

## What the descriptor is

The cell of the region feature grid that **contains the zone** — `FUN_004f9b70`'s lookup,
`cell_for_column` in `cw_featuregrid`:

```
regX = x >> 14 ;  tileX = x >> 11 ;  idx = (tileZ & 7) + (tileX & 7) * 8
```

Its first four fields were already known (`+0x00/+0x08` centre 16.16, `+0x10` radius,
`+0x18` type). Against every firing zone in `raw/zone_grid_capture*.json` +
`raw/zone_camp_capture*.json` — **99 zones, 52 distinct cells** — the generated cell
matches the captured bytes on all seven fields.

## `+0x24` and `+0x28` were already in the port under other names

* `+0x24` = `_sub_count(idx)` = the per-cell **level**, `int((1/(1-idx/64) - 1)*20 + 1)`
  with `idx = 2k` for the k-th popped Loop-C candidate. Same field the dungeon assembler
  reads as `site+0x80` (`RE_dungeon_level_rank.md`).
* `+0x28` = the shared count **sub-switch** result — `0` under level 5, `rand()&1` under
  10, `rand()%3` under 0xf, `rand()%3 + 1` in `0xf..0x12`, `(rand()&3)+1` above. cwgen
  already had the branch table right; `cw_featuregen`'s `_subswitch` consumed the draw
  and threw the value away, so the Python had to grow a return value.

  ⚠ The `0xf..0x12` band is the one arm that only 3 of the 52 cells exercise (level 16).
  A first pass through this guessed `rand()%3` there and got exactly those 3 wrong — a
  reminder that a band nothing samples is a guess, and that the C++ (which had it right)
  and the Python disagreed for a session without anything noticing.

## `+0x20` is the region's MISSION counter

`cw_featuregen` already modelled the draw that seeds it and even named it — pass 1's
`reg.local_2ac = rand() % 10000`, the region's **third** setup draw — and modelled the
per-candidate `1 + rand()%0x32` advance. Nobody had connected the two to a cell.

```
counter = rand() % 10000                     # pass 1 (region setup)
for each candidate Loop C pops (k = 0..31):
    cell[+0x20] = counter                    # BEFORE this candidate's own advance
    ...
    counter += 1 + rand() % 0x32             # the "mission counter" draw
```

**52/52 cells exact, 198/198 zone firings exact.**

How it was found, because the method generalises: the values were obviously not random
per cell (they rise monotonically with the pop order inside a region, ~25 per step, which
is the mean of `1 + rand()%50`), so the shape was a running counter. The *base* looked
like a global session counter — regions differed by ~750 and the naive "each region
starts where the last one ended" test failed — until the per-region base was simply
looked up in the region's own draw log: **it is draw #1 of the region stream, `% 10000`,
in all nine sampled regions.** ★ When a derived quantity is off by a per-scope constant,
search that scope's own rand log for the constant before theorising about global state.

## What this unblocks — and what it does not

The camp KIND is now derived, so `gate_zone_camp.py` no longer reads a single byte of the
descriptor to decide what a camp is: kinds `{0,1,2,3,4,5,6,8,9,10}` over 99 live firings,
all matched from the seed.

`cwgen` has the same three fields (`FeatureCell::mission/level/msub`, gate
**`rederive_campdesc` 693/693**) and the camp candidate lattice
(`CwZoneCamp::zoneCampGrid`, gate **`rederive_campgrid` 15,486/15,486**).

### What this blocks: the zone stream drifts inside a present feature cell

Porting the lattice meant reaching it **ab initio** — pre-chain, dense-forest tree pass,
emitter B, then 39 draws — and that is where a new limit turned up. Every zone the replay
had ever been proven on has a descriptor that is **absent, type 0, type 0xa or type 0xe**.
The camp only fires for the *other* types, so `rederive_campgrid` is the first thing that
ever ran the replay there, and in 12 of 14 such zones it arrives at the lattice in the
wrong place:

| zone | descriptor | cwgen lattice index | live |
|---|---|---|---|
| 32792,32748 | 6 | 1251 | 1214 |
| 32792,32749 | 6 | 1181 | 1205 |
| 32793,32751 | 6 | 1229 | 1211 |
| 32794,32744 | 6 | 1205 | 1242 |
| 32795,32748 | 6 | 1159 | 1213 |
| 32795,32751 | 6 | 1224 | 1230 |
| 32713,32856 | 6 | 1931 | 1929 |
| 32726,32791 | 0xf | 1187 | 1242 |
| 32726,32869 | 7 | 1986 | 1927 |
| 32752,32765 | 0xb | 1562 | 1693 |
| 32856,32739 | 0xc | 6643 | 6583 |
| 32869,32726 | 0xb | 9145 | 8516 |
| **32804,32830** | **2** | **3494** | **3494** ✓ |
| **32922,32582** | **2** | **1232 (pre 33)** | **1232 (pre 33)** ✓ |

The live indices are not captured — they are **recovered**: msvcrt's `rand()` is a plain
LCG, so stepping it from the zone's own seed (`base + zz*0x10000 + zx`) until the recorded
draw run appears pins the absolute index exactly. `make_camp_golden.py` does it for the
39 lattice draws; `rederive_campstream` does it for the tree-loop start as well, which is
what splits "the drift is upstream of the tree pass" from "it is inside it". Zone
(32922,32582) matches on **both**, so a type-2 descriptor replays end to end.

The drift is **bidirectional**, which rules out the two obvious causes on its own: an
unmodelled landform-tile count could only ever add live draws, and the tree loop's site
reject needs a feature-cell centre within 40 blocks, which none of these zones has.

Consequence, and it is deliberate: `zoneTreeExact` now claims only descriptors
`{absent, 0, 2, 0xa, 0xe}` — the classes with live proof. `cw_forest.py` still uses the
older, wider rule, so `rederive_forest` **reports** the one zone the C++ now declines
(32800,32799, a type-6 descriptor) instead of failing on it. That zone's 58 trees were
never live-proven; they were port-vs-port agreement.

★ **A gate is only as broad as the class of world it ran on.** This is the third time in
this programme: flat ground vs slope (`RE_zone_tail.md`), even vs odd parity (same), and
now no-feature vs feature descriptor. Each time the pass under test was fine and its
INPUTS or its reachability were not.

## The drift, solved for type 6 (2026-07-26, same day)

The sweep suggested below was run, at zone (32792,32748), and answered in one shot: its
whole live pre-chain is **22 draws**, and the first nine of them are at `0x51aa86` — a
site no port modelled. It is a **type-6-only 3×3 grid of ground knolls**, gated on
`desc->type == 6` at `0x51aa57` and running before everything else in the pre-chain, so
a type-6 zone that skips it has every later stage reading the wrong draw. Full decode in
`RE_zone_tail.md`.

Ported (`CwForest::buildZoneState`). Zone (32792,32748) is now **pre 22/22 and lattice
1214/1214 ab initio**, and of the zones cwgen declines, **13 reproduce all 39 lattice
draws** where 2 did before. `zoneTreeExact` did not yet admit type 6, because one of
the seven measured type-6 zones — (32795,32748) — remained 36 draws early for a *different*
reason: it spends 16 draws in the LANDFORM loop that cwgen's landform predicate did not
detect. That was not type-specific and was its own bug — see the next section, which closes
it and admits the type.

★ **The rig's draw index is not the zone's draw index.** `frida_zone_props2.py` stamps a
process-global counter and does not hook the zone's `srand`, so its indices start
wherever the process was. Locating any recorded run in the zone's own LCG stream recovers
the offset; after that every stage's absolute position is readable, and a 22-draw
pre-chain is legible at a glance.

## The landform predicate — SOLVED the same day, and TYPE 6 IS ADMITTED

✅ `RE_zone_landform.md`. The predicate did not under-detect: **`surfH` was short inside
every type-6/0xd cell**, because the zone builder carries TWO land masks and both ports had
one. `[ebp-0x12d8]` (FUN_00523d80's return) multiplies `term_a`, `inner` and `fb`;
`[ebp-0x12f4]` — the same value plus a deform the builder applies itself for types 6/0xd —
multiplies the roughness, hence surfH, hence the slope weight and the cover material. Zone
(32795,32748)'s tallest relief came out 1.71 against a 2.0 threshold, so nothing qualified.
Restored in `CwColumn::roughBlend` (it had been deleted as a "roughness boost") and added to
`cw_featuregrid.builder_lm_lr`; that zone now replays its landform pass **16/16 ab initio**.

`zoneTreeExact` now claims `{absent, 0, 2, 6, 0xa, 0xe}`. Measured, not assumed:

| | before | after |
|---|---|---|
| `rederive_campgrid` zones replayed ab initio | 1 of 99 (39 draw values) | **7 of 99 (273 draw values)** |
| `rederive_campstream` | 2/2 | **4/4** (zone (32792,32748), type 6, is now a claimed zone) |

Every measured type-6 zone now either replays the live lattice exactly (32792,32748 /
32792,32749 / 32793,32751 / 32794,32744 / 32795,32751 / 32713,32856) or is declined as a
genuine Landform zone (32795,32748 / 32811,32742 / 32660,33021 — 16 / 575 / 1,368 draws).

⚠ ~~The table above says zone (32800,32799) has a type-6 descriptor. It is **type 7**.~~
**Retracted 2026-07-26c: it IS type 6.** `cw_featuregrid.cell_for_column(32800*256+128,
32799*256+128)` and `CwForest`'s own `cells[((z0>>11)&7) + ((x0>>11)&7)*8]` both land on
cell index 35 of region (513,512) and both read type 6. cwgen declines the zone because
`classifyZone` does not call it Exact, not because of its descriptor — and
`rederive_forest` now replays it under `force` and gets the Python's 58 trees exactly.

⚠ **And the stages that were expected to explain the 0xb/0xc drift do not.** `0x51ad52`
(types 0xd/4), `0x51ae29` (0xb) and `0x51af34` (0xc) are decoded in `RE_zone_tail.md`.
All three fire **only in the zone holding the feature cell's centre**, and not one of the
14 zones in the table above does: (32752,32765)'s cell centres in (32756,32763),
(32856,32739)'s in (32859,32740), (32869,32726)'s in (32867,32723). The game takes the
`jne` in every one of them and runs the same gen-scatter the port runs.
`gate_zone_prechain.py` asserts this so the question cannot be silently re-opened. **The
7 / 0xb / 0xc / 0xf drift is still unexplained** — and it is now known not to be a missing
pre-chain stage, because the rand-site census of the whole pre-chain is exhaustive.

## Open

1. ✅ **`0x51ad52` is read and closed** (2026-07-26c, `RE_zone_tail.md`): types 0xd **and**
   4, centre-zone only, **zero rand sites**. It cannot move the stream.
2. Descriptor types **7 / 0xb / 0xc / 0xf** still drift and are still declined.
   **What it is not** (2026-07-26d, `RE_zone_site_loop.md`): not a missing pre-chain
   stage (the rand-site census is exhaustive), not a missing terrain deform (the only
   descriptor-type gate in the whole column prologue `0x518630`-`0x51a300` is the
   `6`/`0xd` pair already ported), and not a wrong `surfH` — the camp captures' own
   `cand` vectors are a free live surface probe and the port lands on the `surfH + 2`
   convention across types 3/4/6/7/0xf, negative terrain included.
   **The live candidate with the right shape** is the odd-parity site loop: it retries
   up to ten times and both ports assume one iteration, which is wrong in 10 of the 28
   odd zones measured. A misplaced site moves ~15 of the tree loop's 196 candidates
   between the 2-draw and the 6+-draw path, i.e. ±60 draws in **either** direction
   before any tree-builder cost — and the parity correlation is total: **all five
   still-drifting zones are ODD**, while 5 of the 7 zones `rederive_campgrid` replays
   ab initio are EVEN, where the site loop does not run at all. Closing it needs
   `Prop_settleOnTerrain` (`FUN_005287b0`), which is pure terrain.
2. **The populator itself** (`FUN_005104e0`) is now fully derivable in principle: the kind,
   the arm tables and the per-candidate coin branch are all statable. Two pieces are
   missing before it can be ported: `Prop_settleOnTerrain` (which decides where the 3x3
   anchor sweep stops — it spends no draws, so it moves records but not the stream), and
   the creature branch's waypoint predicate. The waypoint COUNT is settled — the loop at
   `0x512dc1` sets a counter of 3 and each iteration draws `rand() % neighbourCount`, so
   it is **three draws if the neighbour list is non-empty and none otherwise** — but which
   candidates are neighbours (the "between 5 and 128 blocks" filter) is still read
   statically.
