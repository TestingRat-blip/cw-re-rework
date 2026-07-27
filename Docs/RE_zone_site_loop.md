# The odd-parity SITE LOOP — and the list both ports invented

```
python tools/gate_zone_siteloop.py                 # 228 checks, 56 zones + Server.exe's bytes
python tools/gate_zone_siteloop.py --ab-initio     # 243, adding the settle replayed from the seed
```

**Three findings; `Prop_settleOnTerrain` is ported and gated at the end.**

1. The zone builder's site list holds **at most one entry** — the odd-parity accepted
   site. Both ports were seeding it with every feature-cell centre in the 3×3 region
   neighbourhood, an input the binary never has.
2. The site loop **retries**. `FUN_004e0740` can fail, and the caller redraws a fresh
   candidate up to ten times. Both ports hardcode "the first candidate is accepted",
   which is wrong in **10 of the 28 odd zones** of the 56-zone sweep — and in 2 of them
   nothing is accepted at all, so the list stays empty.
3. `Prop_settleOnTerrain` (`FUN_005287b0`) — what decides accept vs retry — is a 3x3
   **flatness test** over the finished terrain. Ported to both engines; on every odd
   zone the port reaches at the live draw index it predicts the live iteration count
   and accept flag exactly, **15/15**.

---

## 1. The list is empty until 0x51cd56

The proximity tests in the type-6 knoll grid (`0x51ab78`), the mat-38 loop (`0x51cf20`)
and the tree loop (`0x51ded7`) all walk the **same** circular `std::list`, whose head
pointer lives at `[ebp-0x1378]` and whose nodes carry the 16.16 position at `+0x08`
(Z) and `+0x10` (X):

```
0051ded7  mov  eax, [ebp-0x1378]        ; _Myhead (the sentinel)
0051dee3  mov  ecx, [eax]
0051deeb  cmp  ecx, eax
0051deed  je   0x51dfed                 ; empty -> no rejection possible
0051df30: ...  dist^2 < 1600 -> reject  ; 0x51dfd0
0051dfd9  mov  ecx, [ecx]               ; next
0051dfdb  cmp  ecx, [ebp-0x1378]
```

The whole `0x518630`-`0x522000` body **stores** to that slot exactly once —
`0x51a9b7`, the result of the `_Buynode` call at `0x51a9b2` — and the size word beside
it is initialised to zero two instructions earlier:

```
0051a9a8  mov dword [ebp-0x1374], 0     ; _Mysize := 0
0051a9b2  call 0x4f7b60                 ; _Buynode
0051a9b7  mov [ebp-0x1378], eax         ; _Myhead
...
0051cd56  call 0x4f3ba0                 ; the ONLY insert
0051cd61  mov dword [ebp-0x1374], 1     ; _Mysize := 1
```

Between the construction and the type-6 knoll grid at `0x51aa80` there is nothing but
two climate reads (`0x51a9d0`, `0x51aa18`). So **the knoll grid's 80-block proximity
loop can never execute** — the door is closed, not merely unobserved.

### The live half

If the list were seeded with feature-cell centres, an **even**-parity zone containing a
centre would reject tree candidates. The sweep has exactly one such zone.

| | zones | tree-loop site rejects |
|---|---|---|
| even parity | 28 | **0 in every one** — including (33020,32660), whose feature cell's centre is at (8453248, 8361088), inside the zone |
| odd parity | 28 | 14-18 wherever the site loop accepted, **0 in the two zones where it accepted nothing** |

A rejected candidate spends 2 draws (`size`, `height`) and jumps to the loop tail; an
accepted one spends at least 6. Counting `size`-draws whose successor-but-one is another
`size` counts the live rejects exactly, which is what the table above is.

★ **DURABLE: a list you build yourself is an input you invented.** The mat-38 loop's
40-block rejection was "proven" over 56 zones with the feature centres in it — because
in all 56 no rock ever landed within 40 blocks of one. The tree loop, on a 14×14 grid,
finally put a candidate there and the live server rejected nothing.

## 2. `FUN_004e0740` retries, and 10 of 28 odd zones need it

```
FUN_004e0740(world, candidate):
    h = World_sampleTerrainHeight(X, Z)                     0x4e07b4
    if (1 - h*50) >= 0: return false                        0x4e07db   -- 0 draws
    prop = <ctor 0x188>; prop.kind = 0x41                   0x4e07f1
    prop.rot = rand() & 3                                   0x4e0825   -- 1 draw
    for outer in 0..2:                                      0x4e0845
        for inner in 0..2:                                  0x4e0861
            if Prop_settleOnTerrain(prop, ...): goto accept 0x4e08dc
    return false
accept:
    push_back(prop)                                         0x4e091e
    ... 4 draws at 0x4e0a55, 4 at 0x4e0b20                  -- 8 more
    return true
```

and the caller:

```
for iter in 0..9:                                           -- cap 10
    dz = rand()                                             0x51cbc1
    dx = rand()                                             0x51cbfc
    if FUN_004e0740(zoneX*256 + dx%0xA0 + 0x30,
                    zoneZ*256 + dz%0xA0 + 0x30): break
```

so a failed iteration costs **3** draws and an accepting one **11**. Every odd zone in
the sweep satisfies `draws == 3*iters + 8*accepted` exactly:

| iterations | zones | site-loop draws |
|---|---|---|
| 1 | 18 | 11 |
| 2 | 2 | 14 |
| 3 | 1 | 17 |
| 4 | 2 | 20 |
| 5 | 1 | 23 |
| 6 | 1 | 26 |
| 10, accepted | 1 | 38 |
| **10, accepted nothing** | **2** | **30** |

The 0-draw branch (`h <= 0.02`, i.e. `World_sampleTerrainHeight` — the same
`FUN_0052cd50` the river band uses) never fired in 56 zones: every iteration spent its
rotation draw. It is modelled anyway because it is unambiguous in the disassembly.

### Why it went unseen

The site loop is odd-parity only, and every gate added in this programme except
`rederive_zoneprops` runs even zones (`gate_zone_tail`: 28 even; `rederive_zonepropsb`:
emitter B *is* the even branch). `rederive_forest` keeps one odd zone deliberately —
and that zone's first candidate settles. So the retry branch has never had a gate.

★ **Third occurrence of the same shape** (flat-vs-slope, even-vs-odd parity,
absent-vs-present descriptor): the pass under test was fine and the branch that had
never run was not. Here it is a branch of a *callee* the replay models as a constant.

## What this costs, and what closes it

The retry moves the accepted site, and the tree loop rejects ~15 of its 196 candidates
against it — so a wrong site is worth roughly ±60 draws before any tree-builder cost,
in **either** direction, which is the signature of the residual descriptor-type
7 / 0xb / 0xc / 0xf drift in `RE_camp_descriptor.md`.

The parity correlation is total: **all five still-drifting zones are ODD** —
(32726,32791) type 0xf, (32726,32869) type 7, (32752,32765) type 0xb, (32856,32739)
type 0xc, (32869,32726) type 0xb — while 5 of the 7 zones `rederive_campgrid` replays
ab initio are EVEN, where the site loop does not run at all, and the 2 odd ones that do
replay are exactly what a first-iteration accept looks like.

That is a correlation, not a proof: descriptor type and parity are independent, so it
is real evidence. (What the drift is **not**: `gate_zone_prechain` censuses the
pre-chain's rand sites exhaustively, and the live terrain probe below rules out a wrong
surfH.)

▶ **`Prop_settleOnTerrain` was then ported and re-measured — see the second half of this
file.** The settle itself now predicts the live iteration count 15/15, so the retry is
no longer the open question; what the same measurement turned up instead is that a
third of the odd zones reach the site loop at the wrong draw index in the first place.
That is now the prime suspect for the camp drift, ahead of the settle.

## A live terrain oracle that costs nothing

While chasing this, the camp captures turned out to carry one: each firing zone's `cand`
vector is the accepted lattice cells as `FUN_005104e0` sees them, `0x18` bytes each =
int64 `x16`, `z16`, `y16`. So `y16 >> 16` is the **finished world's surface** at a known
column, with no rand stream involved.

Over 27 zones and descriptor types 3, 4, 6, 7 and 0xf the port's `surfH` lands on the
known `surfH + 2` convention on the great majority of columns (the outliers all read
high, i.e. the candidate settled on a knoll, a rock or a tree). Type 0xf zone
(32843,32817) samples terrain at **-19, -31, -33** and the port matches at +2 there too,
so **deeply negative terrain is real, not a port artifact** — worth knowing, because two
of the drifting zones sit at surfH ≈ -85 and that looks like a bug until this is
checked. The tree loop's own `top < 0` bail is likewise real (`test ecx,ecx / js` at
`0x51e462`).

★ Use `cand` before asking for another capture: it is a free surface probe over every
zone the camp rigs ever visited.

## Also checked and ruled out (2026-07-26d)

Reading the *inputs*, as `RE_zone_tail.md` said to:

* **an exhaustive descriptor-type-gate census of the column prologue**
  (`0x518630`-`0x51a300`): the only `cell->type` comparison in the whole prologue is the
  `6`/`0xd` pair at `0x518e6e` that `RE_zone_landform.md` already ported. There is no
  second unmodelled terrain deform hiding there.
* `World_objectFalloffWeight` (`0x52c84a`) special-cases types **0xb, 0xc, 0xe** (the
  simple falloff) and **0xd** (its own warp scale) — `cw_feature.falloff_weight` already
  has all four.
* `FUN_004f9b70` disables the **ocean-site repulsion** for type 0xb (`0x4fa95b`) —
  `cw_height._ocean_repulsion` already has that exclusion.

## Ported

| | |
|---|---|
| `cw_forest.build_zone_state` / `zone_prechain` | the site list starts empty; `sites16` gone |
| `cw_decoration.place_stone`, `feature_sites` | `feature_sites` is no longer wired into any replay, and says so |
| `cw_decoration.site_loop` | docstring carries the real draw arithmetic + the measured blast radius |
| `CwForest::buildZoneState` | same, both halves |
| `CwZoneScatter` | `gatherSites()` **removed**; the type-6 knoll grid's `sites16` is empty |

---

# `Prop_settleOnTerrain` — ported (2026-07-26e)

```
python tools/gate_zone_siteloop.py --ab-initio    # 243/243; SLOW (~40 min: the landform
                                                 # pass runs in Python, ~9,300 columns/zone)
```

`FUN_005287b0` is the whole content of the site loop's accept/reject decision, and it
is a **pure function of the finished terrain**: no rand, no captured state.

```
settle(prop, support):
    if (rot & 1) swap(sizeX, sizeZ)                                    0x5287e4
    h  = ftol_round(f32(f32(size * 0.5) * 65536))                      0x528800-0x528818
    x0 = (x16 - h) / 0x10000 ;  x1 = (x16 + h) / 0x10000    (__alldiv, truncating)
    z0, z1 likewise from the (possibly swapped) Z size

    1. DROP  up to 50 blocks until ANY column of the footprint is solid     0x528880
    2. RAISE up to 50 blocks while ANY column of the footprint is solid     0x5289b6
    3. reject if y16 <= 0                                                  0x528aa8
    4. if `support`: reject unless EVERY column is solid one block below    0x528ac7
    5. accept iff the block at the settled anchor is not water (class 2)    0x528bc8
```

"Solid" is `(block[3] & 0x1f) not in {0, 2}` throughout, and the block resolves through
three live-read templates: a missing column or `y < base` is `DAT_005842c4` = 0x01
(**solid**), above the record top it is `DAT_005842bc` = 0x82 (water) at `y <= 0` and
`DAT_005842c0` = 0x00 (air) above that, and an unprotected air voxel inside the record
at `y < 1` also reads as water. The air↔water substitutions never change a solidity
test — both are in `{0,2}` — so they matter only at step 5.

**Step 4 is the content.** With `support = 1` (what the site loop passes) the whole
footprint must be solid one block down, so it is a **flatness test**. The campfire is
2.4 × 2.4 (`0x4019999a`), giving `h = 78643`, and the site loop's anchor carries
+0.5 block, so the footprint is exactly **3 × 3**. A candidate on a slope fails, costs
3 draws, and the caller draws another — which is the retry.

Steps 1-3 are why a deep zone can never place anything: the candidate starts at the
column's record top, and a zone whose terrain sits below sea level drops the full 50,
raises nothing, and dies on `y16 <= 0`.

## What it predicts

Driving `cw_forest.build_zone_state` from the seed and comparing the site loop's
iteration count and accept flag against the 56-zone sweep:

| | |
|---|---|
| odd zones in the sweep | 28 |
| the port reaches the site loop at the live draw index (STREAM-ALIGNED) | 15 |
| of those, iteration count **and** accept flag predicted exactly | **15/15** |
| the port reaches the loop at a different index — not a settle test | 13 |

The aligned set is not a soft one: it contains both zones that accept **nothing**
— (32885,32636) and (33107,32318), each predicted as exactly 10 iterations with no
accept — plus a 2-iteration and a 4-iteration zone. The iteration count is a ten-way
outcome decided entirely by terrain, so landing it 15 times in a row is the model, not
a coincidence. (Of the 13 misaligned zones 6 also happen to match; they are not counted
either way.)

## Ported

| | |
|---|---|
| `cw_forest.prop_settle_on_terrain` | the settle itself |
| `cw_forest.zone_site_loop` | the retry loop + `FUN_004e0740`, against the zone's stamped `Store` |
| `cw_forest.Store.block_class` / `record_top` | the three block templates and the record top the candidate starts from |
| `CwForest::propSettleOnTerrain` / `zoneSiteLoop` | the same, in cwgen |
| `CwForest::Store::blockClass` / `recordTop` | the same |
| `featureFalloff16` (`CwHeight`) | the 16.16 form — the anchor's +0.5 block would be dropped by a block-coordinate call, and the type-1/5 gate reads it |
| `CwForest::siteCandidateSettlesBare` | exported so the store-free replays can decline what they cannot follow |

⚠ **`CwZoneScatter`'s three store-free replays cannot model the retry.** They never
stamp the gen-scatter's knolls, so they do not have the terrain the settle reads. They
now run the settle on BARE terrain and return `ZoneClass::Feature` for any odd zone
whose first candidate would not settle, rather than silently emitting a wrong stream.
A bare accept is **necessary, not sufficient** — a knoll under the candidate can still
flip it — and that is stated at the call sites.

Measured cost of that decline, and it is the point of it: the engine's `--proptest`
places **33** campsite props over its 4,608 columns of 72 odd zones where it placed 43
before. The ten that went away were being emitted from a stream the port had no right
to claim. `rederive_zoneprops` is still 5/5, `--towntest` unchanged.

▶ **Those ten are recoverable, and the route is known**: the store-free entry points
could share `CwForest::buildZoneState`'s stamping (a `Store` materializes lazily, so it
is the knoll footprints and nothing else) and then run the real site loop instead of the
bare-terrain approximation. That is a refactor of three call sites, not new RE.

## ⚠ And it measured something else: odd zones drift UPSTREAM of the site loop

The comparison only means something where the port arrives at the site loop on the same
draw the live server did — otherwise it is settling different candidates. Checking the
first two candidate draw VALUES against live splits the 28 zones, and a third of them
are **STREAM-OFF**: the port reaches the loop at a different index, with a live
descriptor of type 0xa or 0xe — the class every earlier gate called proven.

That is not a settle bug and it is not new drift; it is **newly measured**. No gate
before this one derived an ODD zone's stream ab initio this far: `gate_zone_tail` runs
28 EVEN zones, `rederive_zonepropsb`'s emitter B *is* the even branch, and the odd-zone
gates (`gate_zone_props2`, `rederive_zoneprops`) replay the captured draws rather than
deriving them. Fourth instance of the standing pattern — the pass was fine and the
class that had never run was not.

The live site-loop start index is recoverable for every odd zone (msvcrt's rand is a
plain LCG, so stepping it from `base + zz*0x10000 + zx` until the recorded candidate
pair appears pins it uniquely), which turns "STREAM-OFF" into a number for whoever
picks this up:

| zone | live index | iters | zone | live index | iters |
|---|---|---|---|---|---|
| 32790,32791 | 3220 | 1 | 32794,32791 | 42 | 1 |
| 32790,32793 | 258 | 1 | 32794,32793 | 292 | 10 |
| 32790,32795 | 2736 | 2 | 32794,32795 | 1 | 1 |
| 32791,32790 | 7 | 2 | 32795,32790 | 13 | 1 |
| 32791,32792 | 1504 | 1 | 32795,32792 | 1 | 1 |
| 32791,32794 | 510 | 6 | 32795,32794 | 998 | 1 |
| 32792,32791 | 238 | 4 | 32737,32848 | 31 | 1 |
| 32792,32793 | 19 | 1 | 32811,32742 | 652 | 5 |
| 32792,32795 | 135 | 4 | 32885,32636 | 501 | 10 |
| 32793,32790 | 834 | 1 | 32959,32530 | 574 | 3 |
| 32793,32792 | 312 | 1 | 33033,32424 | 28 | 1 |
| 32793,32794 | 1 | 1 | 33107,32318 | 7 | 10 |
| 32610,33111 | 990 | 1 | 33101,32778 | 110 | 1 |
| 32530,32531 | 457 | 1 | 32660,33021 | 1475 | 1 |

Diff the port's own pre-site-loop draw count against this column and the upstream drift
is localised in one run — the same recovery trick that made the 22-draw type-6
pre-chain legible.

---

## ✅ RESOLVED (2026-07-26f): it was the landform loop's ORDER, and a bed pass

The upstream drift above is closed for 9 of the 13 zones and localised exactly for the
other 4. Full decode in `RE_zone_landform.md`; gate `tools/gate_zone_landform_order.py`
(**187/187**). Neither cause is downstream of the site loop, and neither is new RE of the
site loop itself.

**1. The landform 742-loop iterates X-outer, Z-inner.** `cw_decoration.landform_pass` ran
it transposed. That does not change the qualifying-tile SET — so it does not change the
keep-roll count, and every gate that counted draws stayed green — but it changes which
tile each roll lands on, and a tile that keeps runs a switch whose cases 0/1 spend inner
draws gated on that tile's own `surf <= sh`. Live, over the 18 odd zones that reach it:
**161/161 decisions predicted on the binary's order, 106/161 on the port's** — worse than
the 112/161 you get by always answering "no", which is what said the rows were misaligned
rather than the formula wrong.

**2. The river/lake bed pass (`0x51c09a`) is not modelled at all** — 1 draw per bed column,
`rand() % 200`, appending to the mat6 list that `0x51c313`-`0x51c341` then consumes 3 draws
per entry. `% 200` is now pinned from the capture: the count of recorded bed draws
divisible by 200 equals the observed append count in **all 8 zones that run the pass**
(18, 19, 12, 2, 4, 69, 74, 3), which is the arithmetic settled without a server.

Measured over the 28 odd zones, per stage, in the zone's own LCG coordinates:

| | before | after |
|---|---|---|
| reach the site loop at the live draw index | 15 | **24** |
| still drift | 13 | **4** |
| `--ab-initio` zones whose iteration count + accept flag are predicted exactly | 15/15 | **24/24** |

`gate_zone_siteloop --ab-initio` is now **252/252** (was 243/243), and the four zones it
still excludes are exactly the four below — an independent corroboration, since that gate
knows nothing about the landform pass beyond running it.

and the four are exactly the bed-pass zones — (32790,32791), (32790,32795), (32791,32792),
(32610,33111) — each drifting by precisely its own `bed + mat6` draw count (3203, 2614,
451, 959). **So nothing else is missing upstream of the site loop**: the residual is one
named, unported pass, not a search.

▶ What is left is therefore a well-posed slice, not a mystery: the bed pass's stream
arithmetic is settled, and the only open part is **which columns are bed columns** — the
geometry, which `cw_river` / `cw_column`'s type-4 lake fill already model for the finished
world. Both ports currently DECLINE these zones (`any_river_in_zone`), so nothing claims
them; porting the pass is what would admit them.
