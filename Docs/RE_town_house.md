# The town builder's HOUSE PASS (`0x4e6520`-`0x4e74a5`) — decoded, gated and ported

> **The question this slice was opened to answer** (`HANDOFF_PROMPT.md` item 1): `0x4e742e`
> is the broadest rand site left in `FUN_004e28e0` — **15,609 draws across 70 of the 92
> captured towns**. What is it?
>
> **It is the module-orientation roll of the HOUSE BUILDER, and reading its span turned
> one site into a whole closed stage.** `0x4e742e` does not stand alone: it is the last of
> **thirteen** rand sites between `0x4e6520` and `0x4e74a5` that together spend **17,947
> draws over 435 houses** — ~41 a house — and the other twelve were all inside the same
> ~1 KB of code. Fifth slice running where reading the span first changed the shape of the
> work (lesson 7g/7h).

```
python tools/gate_town_house.py                            # 1,446 checks, 435 houses
python tools/extract_house_layouts.py                      # the tables, out of the binary
build/cwgen_test.exe tools/cw_rederive/golden_rederive      # rederive_townhouse 140/140
```

---

## 1. The pass

A plot gets a house **iff its post-promotion role is 2** (435 houses == 435 role-2 plots,
70/70 towns), and every house is the same grid: `FUN_004e1f80(h, 3, 3, 4)` at its one call
site, so **3 × 3 × 4 = 36 modules**, always. Per house, in the plot loop's own order
(r outer → X, c inner → Z, record index `r + n*c`):

```
sub = plot[+0x10]                                          0x4e655d
house[+0x60] = sub                                         0x4e6567
    sub in 2..5 : one fixed layout, NO draw                0x4e6577
    sub == 1    : layout = A[rand() & 1]                   0x4e6762   1 draw
    otherwise   : v = rand() % 3                           0x4e6849   1 draw
                  v == 0 : 3 more coins                    0x4e6db2/0x4e6dee/0x4e6e3e
                  v == 1 : 2 more coins                    0x4e6c0f/0x4e6c60
                  v == 2 : 3 more coins                    0x4e686e/0x4e6a4d/0x4e6a9d
house[+4] = plot[+0x14]      # the post-promotion rotation 0x4e6f99   no draw
house[+8] = (rand() & 1) == 0                              0x4e6fac   1 draw
<collect the type-1 (wall) modules into a vector>          0x4e6fed-0x4e721d, no draws
pick = walls[(unsigned)rand() % walls.size()]              0x4e7321   1 draw
for a, b, k over 3 x 3 x 4:                                0x4e738a-0x4e74a5
    module[a][b][k].orient = type == 5 ? (plot[+0x14] & 1) # a DOOR faces the plot
                                       : rand() % 4        0x4e742e   ★ the site in question
```

So a house costs `1 + selector + 1 + 1 + (36 - doors)` draws, and the door count is a
property of the chosen layout. `0x4e7321` is an **unsigned** `div` (`xor edx,edx / div
esi`) against the signed `idiv` of the `% 3` and `% 4` — a 15-bit `rand()` makes them
agree, but the port follows the binary.

### The selector's input is the PROMOTION pass's output

`plot[+0x10]` is the field `RE_town_promotion.md` decoded four days ago and
`RE_town_verdict.md` had listed as "—" until then: **1** for corner tags 0/3, **2, 3, 4,
5** for the four plots a tag-1 town pops, 0 otherwise. It is what picks the house's shape,
so this pass could not have been done before that one. Live distribution over the 435
housed plots: `{0: 398, 1: 13, 2: 6, 3: 6, 4: 6, 5: 6}`.

### The census, which is what makes the structure checkable

| site | draws | what |
|---|---|---|
| `0x4e6849` | **398** | `rand() % 3`, once per house with `plot[+0x10] == 0` |
| `0x4e686e`, `0x4e6a4d`, `0x4e6a9d` | 144 each | the `v == 2` coins |
| `0x4e6c0f`, `0x4e6c60` | 137 each | the `v == 1` coins — **two**, not three |
| `0x4e6db2`, `0x4e6dee`, `0x4e6e3e` | 117 each | the `v == 0` coins |
| `0x4e6762` | 13 | the `plot[+0x10] == 1` coin |
| `0x4e6fac` | 435 | `house[+8]`, once per house |
| `0x4e7321` | 435 | the wall pick, once per house |
| `0x4e742e` | **15,609** | the orientation roll |
| | **17,947** | |

144 + 137 + 117 = **398**, exactly the number of houses with `plot[+0x10] == 0`, which
pins the three-way split before a single layout is read. And 435 × 36 − 15,609 = **51**,
which is the total door count the extracted tables have to reproduce — see §3.

---

## 2. The layout tables are EXECUTED out of the binary, not read

`0x4e6520`-`0x4e6f8d` is a decision tree whose leaves are runs of hardcoded
`VoxelGrid_cellAt3D(house, a, b, c)` + `mov byte [eax + f], v` pairs — 114 lookups and 115
stores. `tools/extract_house_layouts.py` **executes** that region (a 30-instruction
interpreter) with `plot[+0x10]` and a supplied draw sequence, and emits the grids:
**67 selector outcomes → 23 distinct module grids**. `--cpp` writes cwgen's
`CwTownHouseTables.h`, and `gate_town_house.py` regenerates and diffs it every run, so the
C++ literals cannot drift from the binary (lesson 7c, the CwZoneCreatures tables).

**Two things defeat reading the region off a listing, and both were tried first:**

1. **MSVC hoists a cell lookup's three `push imm` ABOVE the branch that chooses between
   two variants** (`0x4e6880`-`0x4e6886`), so both successors share them. A
   block-at-a-time scan hands that cell to the fallthrough variant and leaves the
   branch-taken variant one short — which is exactly what the first draft did, silently.
2. **The store for call N is emitted after the pushes for call N+1, and it is not always
   `mov byte [eax], t`.** The module record has fields at `+2`, `+3` and `+8` too, written
   19 times here. Matching only `[eax]` drops those *and* leaves the call unpaired, which
   shifts every later assignment of the block by one.

Neither is visible in the output — both produce plausible-looking grids. The interpreter
has no opinion about either. Its one whitelist is `FUN_0041cb40`, which is
`vector::size()` over the site's 0x188-byte prop records (the `0x5397829d` / `sar 7`
reciprocal divide); every other unmodelled call **halts** rather than being skipped, so a
call that writes a module can never disappear quietly.

Module types: **1** wall, **2** base, **3** roof, **5** door, 0 left unset by the ctor.
Only **4 of the 23** grids contain a door, and all four are on the `v == 0` arm with the
last coin odd.

★ **These grids are in RAW index space, and that is not a detail — added 07-28j.**
`VoxelGrid_cellAt3D` (`FUN_004d1950`) calls **`FUN_004d8f90` on its indices before the
bounds check**, and that function rotates `(a, b)` by `house[+4] & 3` and then mirrors `b`
when `house[+8]` is set. The interpreter is right to ignore it here only because this
pass writes the grid **before** it stores either field (`0x4e6f99` / `0x4e6fac`); every
LATER consumer — the interior marking sweep, the furnishing walk — sees the transformed
grid, so a port must not index `kHouseLayouts` directly. `RE_town_furnish.md` §5b.1 has
the transform and `townHouseCell` in `CwTown.h` implements it.

★ **And the house sits SEVEN blocks into its plot**, not at the plot origin: 39 blocks
centred in the 51-block village plot. Derived from the furnishing pass's 6,759 live
records (`RE_town_furnish.md` §5b.2) and corroborated by this pass's own ground scan at
`0x4e755b`, which walks a 15-wide window from `plotBase + 6`. `CwTown.h`'s
`townHouseCentre2X` carried 0 until then, with a comment claiming the house was
deliberately not centred — a sentence copied forward instead of read (lesson 7e).

---

## 3. What is gated

### 3.1 `tools/gate_town_house.py` — 1,446 checks over 435 houses

It replays **every house against its own recorded draws, in order**, and requires the
model to ask for the same draw at the same call SITE — the `make_creatures_golden.py`
design, where a control-flow error lands on a different site and an arithmetic error on a
different value.

| claim | result |
|---|---|
| one house ctor per role-2 plot, in plot-loop order | **70 / 70** towns |
| the selector's draws all land on selector sites, with the count the interpreter spends | **435 / 435** |
| `0x4e6fac` then `0x4e7321` follow it, once each | **435 / 435** |
| orientation draws == `36 - doors(layout)` | **435 / 435** |
| the whole town's house-pass stream is consumed exactly | **70 / 70** |
| `CwTownHouseTables.h` == a fresh extraction | 1 / 1 |

★ **The door count is a prediction, not a fit.** The tables say 51 doors over the 435
houses; `435 × 36 − 15,609 = 51`. Nothing in the extraction saw the draw counts — the
grids come from executing the binary and the 15,609 from the capture — so the two agreeing
to the unit is an independent check on both the tables and the `type == 5` rule.

### 3.2 `rederive_townhouse` (cwgen, section 63) — 140/140

Asserted, both fed the live plot table because deriving it needs the scan's
region-cache-blocked terrain booleans (lesson 12):

| claim | result |
|---|---|
| the HOUSE SET — one house per role-2 plot | **70 / 70** |
| the REPLAY — the port consumes exactly the recorded draws and emits the live house count | **70 / 70** |

The replay is a stronger check than it looks: the layout decides how many orientation
draws follow it, so **one wrong door desynchronises every later house in that town**.

Measured, never asserted: the same house count against cwgen's own derived plan, **30 of
34** replayable towns. (Note it is 30 here and 29 for the scan/promotion/scatter — a town
whose scan is off by one plot's verdict can still land the right *number* of role-2 plots.
The figure is reported, not asserted, precisely because of that.)

Hashed rather than compared: the grids, rotations, coins, wall picks and 36 orientations
per house. No capture records any of them.

---

## 4. Deliberately not claimed

1. **No module is observed.** The rig records the house **ctor** call and the draw stream,
   nothing else; the grid, the orientations, `house[+8]` and the wall pick are all
   byte-proven. What the draw stream *does* pin, tightly, is the door count — because it
   changes the number of draws (§3.1).
2. **`0x4e7321`'s wall list is never empty in any capture** (it fires 435 times for 435
   houses, and the emptiness test at `0x4e7305` never skips). Every one of the 23 grids
   contains at least one type-1 module, so the port computes the list size from the layout
   and the guard is unfalsified — the same standing as the ruin zone guard in
   `RE_town_promotion.md` §4.1.
3. **The module grid's two horizontal extents SWAP when the house rotation is odd, and
   that branch is inert only because the ctor is square.** `FUN_004d8dc0` returns
   `rot % 2 ? house[+0x68] : house[+0x64]` and `FUN_004d8de0` the exact mirror, while
   `FUN_004d8e00` is an unconditional `house[+0x6c]`. Since the one ctor call site is
   `(3, 3, 4)`, `[+0x64] == [+0x68] == 3` and the swap changes nothing — so the port's
   fixed 3x3x4 iteration is right for a *reason* rather than by luck, and a port that
   ever gave a house a non-square footprint would be wrong in the odd-rotation half of
   its towns. Recorded because it is exactly the shape of lesson 7e from the safe side:
   a term that is identically zero in every world measured so far.
4. **The `rand() % 3` cannot reach its fourth arm.** `0x4e6862`'s `jne 0x4e6f8d` is taken
   only when the residue is neither 0, 1 nor 2, and `rand()` is never negative — so the
   empty-grid path is dead code. A closed door (lesson 6), and the interpreter reproduces
   it as an unreachable 24th outcome rather than a layout.
5. **The module ORIENTATION loop's order is observable and is proven; the grid-fill order
   is not.** The orientation roll is per module, so the loop order (`a` outer, `b`, then
   `k` innermost, `0x4e738a`-`0x4e74a5`) is pinned by which draw each module gets — except
   that no capture records a module's orientation, so in practice only the *count* is
   live-proven and the order is byte-proven. Stated rather than glossed (lesson 13).
6. **What the house then BUILDS is not here.** This slice covers the module plan; the
   emitters that turn a module into voxels and props (`0x4e7205`, `0x4ec9a8`, `0x4ec9ed`
   and the 13-block prop lattice of `RE_town_props.md`) are downstream and still spend the
   two hottest rand sites in the layer.

## 5. What is left

The house pass accounts for **17,947** of the layer's draws. Counting the closed sites
mechanically rather than by adding up the doc's own numbers: **25 of the builder's 176
firing rand sites are now closed**, carrying **25,582** draws — of the **228,413** the rig
records inside the body (the true total including callees is 373,375, and the rig's filter
is why the two differ; lesson 18). Remaining, in the measured order from
`RE_town_verdict.md` §7.3:

| site | draws | towns | |
|---|---|---|---|
| ~~promotion~~ | 252 | 56 | ✅ 07-28d |
| ~~`0x4eda58` + followers~~ | 4,099 | 69 | ✅ 07-28e |
| ~~the house pass, 13 sites incl. `0x4e742e`~~ | **17,947** | 70 | ✅ **07-28f — this file** |
| `0x4e54e8`, `0x4ef7c8` | 132,928 | 15 / 28 | per-column loops over the town's own terrain |
| `0x4e5136` | 15,606 | 5 | |
| `0x4e54fe` | 8,051 | 15 | |

**151 firing sites left**, and the two per-column loops are now 58% of everything
still unaccounted for. The plot heights stay region-cache-blocked.
