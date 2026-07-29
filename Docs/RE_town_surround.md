# The town builder's HOUSE SURROUND pass (`0x4ecfb5`–`0x4ed9ea`)

*RE'd and gated 2026-07-28 (07-28l). Live gate: `tools/gate_town_surround.py`, **6,639
checks, 0 FAIL** over the 92 towns in `raw/town_props_capture*.json` (seed 42069) — 35 of
which reach this stage, 323 houses, **1,059 prop records**.*

```
python tools/gate_town_surround.py
```

**Eight rand sites spending 6,408 draws, eight settle sites, eight push sites.** This is
the `0x4ed03e` FAMILY the last handoff named — eight table rows at 800–802 draws each in
exactly 35 towns — and the same-town-count tell that named the `0x4eafd2` cluster was right
again: they are **one stage**, and reading its span first turned eight table rows into a
closed stage for the **tenth** time running.

★ **What it does: it puts the clutter against the outside of a village house.** After the
furnishing walk finishes the inside, this pass walks the house's **ground storey** and, at
every module that is a BASE with an EMPTY horizontal neighbour, drops up to two props
against that exposed face. The models are `barrel`, `crate`, `open-crate`, `sack`,
`bench`, `stool` and `shelter`.

★ **It is the first town stage whose records are checkable field by field with no new
work at all.** The props go through `Prop_settleOnTerrain`, which `frida_town_props.py`
hooks with the record's whole 0x30 bytes *before and after*; so the gate asserts each
record's POSITION at full 16.16, its ORIENTATION, its TYPE and its EXTENTS — 1,059 of
1,059 on every one.

★ **And it pins `kTownHouseOrigin` outright.** `RE_town_furnish.md` §5b had to record that
its own decomposition does **not** pin the house anchor — 7 and 8 both close there — and
broke the tie with an argument about which literals the span owns. Here the anchor can be
*swept*: every offset in this stage is a literal relative to the anchor and the plot base
comes from the derived lattice, so sweeping the anchor over a whole 13-block module stride
gives **1,059/1,059 records at +7 and 0 at all twelve other offsets**. The gate asserts
that sweep, so the constant now has a measurement behind it and not an argument.

---

## 1. Where it sits

The stage is the last thing a house's plot-loop iteration does. Everything since
`townHousePass` has been about one house:

| span | what it does | draws |
|---|---|---|
| `0x4e6520`-`0x4e74a5` | the **house pass** — picks and stamps the 3×3×4 module grid | 17,947 |
| `0x4e74a5`-`0x4ea988` | the **house entity** pass — the five walks that spawn its people | 7,597 |
| `0x4ea9b0`-`0x4ecd34` | the interior marking sweep | 0 |
| `0x4ead3a`-`0x4ecf20` | the **furnishing** walk — the inside | 8,717 |
| `0x4ecf20`-`0x4ecfb5` | a no-draw pass over the prop vector, re-storing `+0x48`/`+0x54` | 0 |
| **`0x4ecfb5`-`0x4ed9ea`** | **the SURROUND pass — this document** | **6,408** |
| `0x4eda0b`-`0x4edcbf` | the inhabitant scatter (`RE_town_creatures.md`) | 4,099 |

## 2. The pass

```
if desc[+0x18] != 1: skip the whole stage                        0x4ecfbb   VILLAGES ONLY
for i in 0 .. House_dimX-1:                                      0x4ecfcf  (= 3)
    for j in 0 .. House_dimZ-1:                                  0x4ecfec  (= 3)
        if cellAt3D(i, j, 0)[0] != 2: next j                     0x4ed011   a BASE module
        # the four horizontal neighbours, in the order  -X, +X, -Z, +Z
        for (di, dj) in ((-1,0), (1,0), (0,-1), (0,1)):
            if cellAt3D(i+di, j+dj, 0)[0] != 0: next face        0x4ed02d …
            if rand() % 6 == 0: emit slot 0                      0x4ed03e …
            if rand() % 6 == 0: emit slot 1                      0x4ed162 …
```

⚠ **Both coins are always drawn.** The first coin's `jne` targets the *second coin's own
`call`*, and a successful first emit falls straight through to it — so an exposed face
costs exactly **two** draws whatever either coin says. Live: the two sites of a pair have
**equal draw counts in all 35 towns**, and 800/800/802/802 overall.

⚠ **`k` is 0 and only 0.** This is the ground storey; `[ebp-0x14]` is `13*j` and is reset
per `i`, never a Y index.

### 2.1 The neighbour that is off the grid

For `i == 0` the −X neighbour is `(-1, j, 0)`, which is outside the 3×3 grid.
`VoxelGrid_cellAt3D` (`FUN_004d1950`) bounds-checks *after* the rotation and, on failure,
returns the zeroed global at **`0x584258`** — so `[0] == 0` and an off-grid neighbour reads
as **EMPTY**. That is what puts props on the outside walls of the house at all.

★ Note the rotation cannot rescue an out-of-range index: `FUN_004d8f90` is a bijection of
the extended lattice, so `-1` maps to `-1` or to `dim`, out of range under all four
rotations. The gate does not need a special case and does not have one.

## 3. The eight rand sites

All counts are over the 92 captured towns; every site is `rand() % 6`.

| face | rig ra of coin | settle ra | push ra | draws | towns | `ctor` orient |
|---|---|---|---|---|---|---|
| **−X** slot 0 | `0x4ed03e` | `0x4ed133` | `0x4ed149` | 800 | 35 | 3 |
| **−X** slot 1 | `0x4ed162` | `0x4ed255` | `0x4ed26b` | 800 | 35 | 3 |
| **+X** slot 0 | `0x4ed2a4` | `0x4ed397` | `0x4ed3ad` | 800 | 35 | 1 |
| **+X** slot 1 | `0x4ed3c6` | `0x4ed4b9` | `0x4ed4cf` | 800 | 35 | 1 |
| **−Z** slot 0 | `0x4ed513` | `0x4ed601` | `0x4ed617` | 802 | 35 | 0 |
| **−Z** slot 1 | `0x4ed633` | `0x4ed721` | `0x4ed737` | 802 | 35 | 0 |
| **+Z** slot 0 | `0x4ed76d` | `0x4ed862` | `0x4ed878` | 802 | 35 | 2 |
| **+Z** slot 1 | `0x4ed895` | `0x4ed988` | `0x4ed99e` | 802 | 35 | 2 |

The census over `0x4ecfb5`–`0x4ed9ea` returns **exactly these eight** and the gate asserts
it. ⚠ Three of the `% 6` are written three different ways — `mov ecx,6 / idiv ecx`,
`mov edi,6 / idiv edi`, and a bare `idiv edi` against an `edi` loaded 6 at `0x4ed4da` /
`0x4ed628`. All three are byte-checked; a census keyed on one form under-counts.

## 4. The geometry

Writing `anchor` for the house's block origin and `i`, `j` for the module indices:

```
X = anchorX + 13*i + (−1.5 | +15.5 on a ±X face,  4 | 10 on a ±Z face)
Z = anchorZ + 13*j + ( 4 | 10 on a ±X face,      −1.5 | +15.5 on a ±Z face)
Y = (heightVec[2] + 1) << 16                                    then settled
```

The **face-normal** offset is one of two `.rdata` doubles — `1.5` at `0x558820`
**subtracted** through `FUN_004e0700`, `15.5` at `0x5738c8` **added** through
`FUN_004ce290` — and the **along-face** offset is the integer `4` or `0xa` pushed to
`FUN_00405690`. Those four literals are what the two slots and the two signs are.

★ **Read against the module CENTRE the four numbers become two.** The house entity pass
puts a module's centre at `anchor + 13*m + 7` (`RE_town_entities.md` §6), and against that
centre the offsets are exactly **∓8.5 along the face normal and ∓3 along the face** —
symmetric, two props per exposed face, three blocks either side of the face's midline.
⚠ That is an *interpretation* and it depends on the 7; the binary's own literals are the
four above. Both are recorded because only the first is a reading.

`anchor = plotOrigin + 7`, and §0's sweep is what says so: **1,059/1,059 at +7, 0 at every
other offset in 0..12.**

The **Y** is a column read of the house's ground height and is region-cache-blocked like
every other plot height in this builder. The gate asserts only that it is an integer
number of blocks and that all of one house's records share it (312 houses).

## 5. The prop factory `FUN_004f2cd0`

Every record is built by the same 4-argument ctor — `(dst, &pos, orient, 0)` — which
copies the three int64s to `+0x08/+0x10/+0x18`, the orientation to `+0x20`, and then
**spends a `rand() % 7` of its own** to pick the model out of the jump table at
`0x4f2ec4`:

| `r` | arm | type | model | extents | 2nd draw |
|---|---|---|---|---|---|
| 0 | `0x4f2d7c` | `0x18` | `barrel` | 2, 2, 2 | |
| 1 | `0x4f2d9f` | `0x19` | `crate` | `s`, `s`, `s` | ★ |
| 2 | `0x4f2de5` | `0x1a` | `open-crate` | `s`, `s`, `s/2` | ★ |
| 3 | `0x4f2e36` | `0x1b` | `sack` | 1.5, 1.5, 1.4 | |
| 4 | `0x4f2e59` | `0x12` | `bench` | 3, 1, 0.4 | |
| 5 | `0x4f2e7c` | `0x10` | `stool` | 1, 1, 0.5 | |
| 6 | `0x4f2e9f` | `0x1c` | `shelter` | 3, 3, 2.5 | |

with `s = (((float)rand() * 0.5f) / 32767.0f + 1.0f) * 1.5f`, every operation single
precision (`movd`/`cvtdq2ps`/`mulss`/`divss`), and the third component of arm 2 the same
value scaled by `0.75f` instead.

★ **Those draws are invisible to the rig** — `FUN_004f2cd0` is outside the builder body, so
`frida_town_props.py` never lists them (lesson 18). They are recovered the 07-28j way, by
stepping msvcrt's LCG from the town's own zone seed until every recorded `(index, value)`
fits (lesson 33). The recovered values then reproduce **the type of 1,059 of 1,059 records
and the extents of all 1,059**, including the 288 computed in f32. Measured cost: **771
records cost the factory 1 draw and 288 cost 2.**

⚠ **It was filed under `_library` as `lib_fn_4f2cd0`** — 498 bytes of game logic sitting
in `cw_lib.cpp` because nothing had read it. That is the *second* time in three slices that
a `lib_fn_*` in this neighbourhood turned out to be game code: 07-28h found `lib_fn_4fc140`
was fifty bytes of `World_columnHumidity` (`RE_town_plaza.md` §4). Lesson 25's "both label
sources are unreliable" applies to this repo's own `lib_fn_` prefix too — it means *no
evidence yet*, not *library*. Now `town_surround_prop_factory`, kind `game`.

⚠ **The models are safe to name here, and that is not automatic.** `RE_town_yard.md` §5
had to withdraw its semantic reading because those ids went to `site+4` / `site+0x30`,
which no capture hooks. These go to **`site+0xc`** — the 78-slot namespace
`extract_prop_models.py` decoded (`RE_prop_ids.md`) — and the gate checks the container of
all 598 pushes, not just of one.

## 6. Falsification record

| claim | how it was tested | result |
|---|---|---|
| the span holds exactly eight rand sites | census of `0x4ecfb5`–`0x4ed9ea`, **both** call encodings | 8, exact |
| every one is `% 6` | the bytes after each `call`, all three encodings | 8 + 2 `edi` reloads |
| the stage is villages only | `desc[+0x18] == 1` vs which towns spend a draw | 35 / 35, and the `jne` target is the stage end |
| …and it fires iff the town also builds a house | draw presence vs the house-ctor count | **92 towns** |
| the module gate is `type == 2` at `k == 0` | byte-checked, and the sequence below | 1 |
| the neighbour gate is `type == 0`, four faces | byte-checked incl. the `lea` index forms | 7 |
| both coins of a face are always drawn | per-town pair counts | 35 × 4 |
| **the per-house SITE SEQUENCE, draw for draw** | predicted from the module grid + `plot[+0x14]` + the `0x4e6fac` coin | **323 / 323 houses** |
| a zero coin is exactly one settle | per site, per town | 35 × 8 |
| an accepted settle is exactly one push, into `site+0xc` | per town | 35 + 35 |
| **the record POSITION, full 16.16 X and Z** | the four literals + the 13 stride + the anchor | **1,059** |
| the record ORIENTATION | the ctor's immediate per face | **1,059** |
| **the record TYPE**, from the LCG-recovered hidden draw | the factory's 7-way table | **1,059** |
| **the record EXTENTS** (5 fixed arms, 2 computed in f32) | ditto | **1,059** |
| the house ANCHOR is `plotOrigin + 7` | swept over a whole 13-block stride | **1,059 at +7, 0 at 0..6 and 8..12** |
| the base Y is one integer per house | per house | 312 |

Total: **6,639 checks, 0 FAIL.**

## 7. The null baselines — what the data does *not* pin

Measured every run by the gate, not once (lesson 5):

* **The rotation is genuinely under test.** `VoxelGrid_cellAt3D` rotates its indices before
  it indexes, so *which* face of the stored grid the −X walk sees depends on
  `plot[+0x14]` and the house's mirror coin — and unlike a draw TOTAL (lesson 13) the
  per-direction split is **not** invariant under it. Of the 323 houses, **138 have their
  sequence reproduced by exactly one of the eight rotation/mirror settings**; 68 by two,
  42 by four, and 75 by all eight, which is what a layout symmetric under the whole group
  looks like. The live `(rot, mirror)` spread covers all eight settings (28–63 houses each).
* **The loop order is pinned.** Running the walk `j`-outer instead of `i`-outer reproduces
  only **22 of 323** sequences.
* **The direction ORDER is only half pinned by the sequence.** Swapping the two X faces
  leaves 162 of 323 houses still fitting, swapping the two Z faces 161, both together 95;
  swapping the X pair with the Z pair fits **0**. The direction *identity* is pinned
  separately and completely — each face has its own position offset and its own
  orientation immediate, 1,059/1,059 each — so the order claim rests on the ~160 houses
  that discriminate and is reported at that strength, not asserted beyond it.
* **The draw COUNT is nearly vacuous on its own**: it takes only three values across all
  323 houses (16, 20, 24). Everything here rests on the site sequence and the record
  fields, which is exactly why this stage was worth gating on geometry rather than counts.
* **The models are named but not verified in-game.** The seven ids resolve through
  `raw/static_prop_models.json`; nothing here renders them.

## 8. What this leaves

Counted by `RE_town_plaza.md` §9's span census: **85 of the 176 firing rand sites now
carry 217,892 of the 228,413 draws the rig records inside the builder body — 95.4%**
(was 77 / 211,484 / 92.6%). The remaining **91 sites spend 10,521 draws**.

⚠ **A correction to the last handoff.** It records the largest remaining site,
`0x4f1f4b` (1,176 draws, 35 towns), as being "in a CALLEE, not the builder body". It is in
the body: the builder is one function `0x4e28e0`–`0x4f2b45`
(`RE_town_plaza.md` §0, where `0x4ee3aa` is proven to be an alignment NOP and not a
boundary), and `0x4f1f4b` is at offset 0xF66B inside it.

⚠ The 65,033-byte / `0x4f26e9` figure this paragraph originally carried is **superseded**:
the `ret 8` is at `0x4f2b42`, so the body is 66,149 bytes (`RE_town_ruin.md` §2).

**The tail now has exactly three clusters**, and each is contiguous:

| region | sites | draws | tell |
|---|---|---|---|
| `0x4e3ead`–`0x4e4fb3` | 40 | 210 | 3–6 draws each in 3–6 towns — a rare per-plot role |
| `0x4f0396`–`0x4f147f` | 34 | 6,236 | ★ **the big one left**: `0x4f0d66`/`0x4f0d98`/`0x4f0dc9`/`0x4f0e49`/`0x4f0e81`/`0x4f1442`/`0x4f147f` all fire **440 times in exactly 32 towns**, and a second band (`0x4f0ebb`/`0x4f0f21`/`0x4f10c4`/`0x4f112a`/`0x4f13af`/`0x4f1415`) all **424 in 28** |
| `0x4f1d7d`–`0x4f26b3` | 11 | 2,872 | holds `0x4f1f4b`; the builder's own tail |

plus `0x4eee4f` (31) and `0x4ef03e` (14), the two town-NPC spawns `RE_town_plaza.md` §9
already named.

The same-count tell has now identified a single stage four times running
(`0x4eafd2` → furnishing, `0x4ea254` → entities, this one, and the yard before them).
**Read `0x4f0396`–`0x4f147f` next.**

## 9. Not done, deliberately

* **No port.** Unlike the entity pass this one *could* be ported today — every input is
  already derived (the module grid and its rotation from `RE_town_house.md`, the anchor
  from §4, the four literals from the span, the factory from §5) and the only FED value
  would be the base **Y**, which is region-cache-blocked exactly as the yard's `y16` is
  (`RE_town_yard.md` §6.1). Write the ASSERTED / FED table first.
* **The `0x4ecf20`–`0x4ecfb5` prologue is decoded but not gated — and it is worth a line
  of its own.** It walks the prop vector the furnishing pass has just filled and copies
  each record's position into one of two lists **on the house object**: types `0x10` and
  `0x12` go to `house+0x48`, type `0x13` to `house+0x54`. Through
  `raw/static_prop_models.json` those three are `stool`, `bench` and `bed` — so the house
  is registering its **seats** and its **sleeping places**, presumably for its inhabitants
  to use. It spends no draws and pushes into neither hooked container, so nothing in any
  capture can check it; recorded as a reading of the binary, not a result.
* **`RE_town_furnish.md` §7's open question is still open.** It says the `id 0xd` record at
  `0x4eaf3f` "goes to a container no capture hooks"; that is a statement about the PROP
  hooks and the handoff asks for it to be re-checked against the SPAWN hook. This slice
  did not do that — it is not in this span.
