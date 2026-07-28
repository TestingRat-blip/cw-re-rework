# The town builder's plot verdict — decoded, and what it says about emitter C

> **The question this slice was opened to answer** (`HANDOFF_PROMPT.md`, "YOUR TASK"):
> is `FUN_004e28e0`'s **draw cost** derivable, so that emitter C becomes reachable from
> the seed? The lead was that its three rand sites — `0x4e2d83`, `0x4e2e3b`, `0x4e3039` —
> are each "spent unconditionally per plot, with the region-cache-blocked plot HEIGHT only
> read after the draw".
>
> **Answer: one of the three is unconditional; the other two are not; and the cost is not
> derivable today for a reason the lead did not name.** Details below, then the verdict
> rule itself, which *is* now decoded in full and gated.

```
python tools/gate_town_verdict.py      # 5,469 checks over 72 towns
build/cwgen_test.exe tools/cw_rederive/golden_rederive   # rederive_townverdict 641/641
```

> **2026-07-28b — the pass is now PORTED, and the reachability question it was really
> about is answered.** §6 has the whole of it. Two headline numbers: the town builder is
> entered at zone-stream index **0 in 23 of 71 towns** (median 53), and cwgen arrives at
> it at the exactly right index in **34 of 34** towns it can replay, with the entire scan
> phase — every rotation, nudge and verdict — exact in **29 of those 34**.

---

## 1. What the draw cost actually is

The rig already on disk records it: `frida_town_props.py` brackets `FUN_004e28e0` with
`randN0` / `randN1`, so **the cost is a subtraction, not an estimate**. Over the 92 towns
of `raw/town_props_capture*.json`:

| | |
|---|---|
| min | **17** draws (a 16-plot ruin that builds nothing) |
| median | **1,820** |
| max | **19,576** |
| total, 92 towns | 373,375 |

Bucketing every in-body draw by return address gives **176 firing rand sites**, and the
distribution is nothing like "three per plot":

| site | draws | towns | what it is |
|---|---|---|---|
| `0x4e54e8` | 80,117 | 15 | `rand() % 10 == 0`, a scatter gate inside a per-column loop |
| `0x4ef7c8` | 52,811 | 28 | one draw per column of a Y-gated loop (`>= 49.0`) |
| `0x4e742e` | 15,609 | 70 | |
| `0x4e5136` | 15,606 | 5 | |
| `0x4e2d83` | 1,922 | 92 | **the per-plot rotation — exactly `plotCount` in every town** |
| `0x4e2e3b` | 1,208 | 85 | the verdict roll — **conditional**, 0–25 per town |
| `0x4e3039` | 180 | 37 | the role-6 coin — **conditional**, 0 in every one of the 42 ruins |

The sample is 50 villages and 42 ruins; 228,413 of the 373,375 draws (61%) have a return
address inside the body, and the two hottest sites alone carry 132,928 of them (36% of
everything this layer spends).

⚠ The rig's own filter records only draws whose return address is inside the builder body
(lesson 18): 6,949 of one town's 9,939. `randN1 - randN0` is the true total; the histogram
is the true *shape*.

**So the verdict on the opening question:** the scan phase costs
`plotCount + rolls + coins` — between 17 and about 50 draws — and everything above that
comes from the house / prop / decoration passes, whose two hottest sites are per-column
loops over the town's own finished terrain. Reaching emitter C from the seed therefore
needs essentially the whole 64 KB builder ported, not a per-plot formula. **The plot
heights are not the binding constraint; the size of the thing is.**

*(A closed door is a result — lesson 6. This is written down so the "three call sites"
lead cannot drift back open.)*

---

## 2. The verdict rule, in full — `0x4e2a80`-`0x4e3093`

`RE_town_props.md` left this open: the `maxH - minH > 16` cull was exact, but "155 plots
with a small height span are still culled for other reasons". Those other reasons are
here, and there are four of them.

### The per-plot scan (`0x4e2ab0`-`0x4e2e93`)

Per plot, four flags are accumulated over the plot's `span × span` columns, then the
verdict is decided:

```
water = false ; near = false ; sand = false ; first = true          0x4e2ac5-0x4e2ad7
for each column (i, j) of the plot:
    f = World_falloffSquared(cell, columnPos)                       0x4e2b7c
    near |= (f > 0.1)                                               0x4e2b9b
    col  = Chunk_getColumnAt(x, z)                                  0x4e2bbb
    top  = col[0x10] + col[0x1c]
    water |= (top <= 0)                                             0x4e2bcd
    for k in 0 .. col[0x1c]-1:
        cls = col.block[k] & 0x1f
        if cls == 2 or cls == 3:  water = true                      0x4e2bf4/0x4e2c06
        if 7 < i, 7 < j, i < span-7, j < span-7 and f < 0.65:
            if cls == 0xb:  sand = true                             0x4e2c5c
    h = col[0x10] + col[0x1c] - 1
    minH, maxH = (h, h) if first else (min, max)                    0x4e2c7d-0x4e2cb7
    if 8 <= i, 8 <= j, i < span-8, j < span-8:  plot[+8] = h        0x4e2ce4  (sticky-0)

plot[+0x14] = rand() % 4                    # the ROTATION            0x4e2d83
plot[+0x18] = World_falloffSquared(cell, plotOrigin + span/2)        0x4e2e04

if      water   ->  verdict 0                                        0x4e2e17
elif  not near  ->  verdict 0                                        0x4e2e20
elif    sand    ->  verdict 7                                        0x4e2e2b
else:
    r = (float)rand() / 32767.0f                                     0x4e2e3b
    verdict = 2 if plot[+0x18] + 0.25f > r else 0                    0x4e2e5e
if maxH - minH > 16:  verdict 0                                      0x4e2e7f
```

Record layout, `0x1c` bytes: `+0` minH, `+4` maxH, `+8` interior height, `+0xc` verdict
(later the role), `+0x10` a sub-role, `+0x14` rotation, `+0x18` score.

> `+0x10` was "—" here until 2026-07-28d. It is written **only** by the promotion pass:
> `1` for corner tags 0/3 and `2, 3, 4, 5` for the four plots tag 1 pops
> (`RE_town_promotion.md` §2). That pass also **overwrites `+0x14`** for its ruin roles,
> so the rotation the nudge leaves and the rotation the table finally holds are two
> different values — a port that folds them together loses this gate 8 towns.

**The score is derivable ab initio.** The descriptor the builder receives *is* a
`cw_featuregen` cell — `+0` `cx` (i64 16.16), `+8` `cz`, `+0x10` radius (f32), `+0x14`
height, `+0x18` type, `+0x1c` subtype — and the gate reproduces every plot's `+0x18` from
the seed alone with `max(0, 1-w)²` on `FUN_0052c820`: **1,485 / 1,485**.

### The rotation-nudge pass (`0x4e2eff`-`0x4e2fd9`) — no draws

For each plot, look at the neighbour in the direction its rotation names
(`0`→−z, `1`→−x, `2`→+z, `3`→+x, taken `% 4` signed). While that neighbour is off-grid
**or** is itself a verdict-2 plot, increment the rotation and look again — up to three
times. So a plot ends up facing a neighbour that is *not* buildable.

### The role-6 pass (`0x4e2fdf`-`0x4e3093`) — villages only

Gated on `desc[+0x18] == 1`, so ruins never enter it — which is exactly what the live
data shows: `0x4e3039` fires in **0 of the 42 ruins** and in **37 of the 50 villages**,
the other 13 being the villages with no qualifying plot. In **record-index** order, not
scan order:

```
for each plot with verdict 0 and maxH - minH < 16:
    if (rand() & 1) != 0:  continue                                  0x4e3039
    if plot[+0x18] > 0.0:  verdict = 6                               0x4e305b
```

Note the asymmetry with the scan phase: the cull there is `> 16`, here it is `>= 16`.

---

## 3. What is gated — `tools/gate_town_verdict.py`, 5,469 checks over 72 towns

| claim | result |
|---|---|
| `0x4e2d83` fires exactly `plotCount` times — one rotation draw per plot, unconditional | **72 / 72** |
| every plot's FINAL rotation `== nudge(rand() % 4)` in scan order — the nudge rule *and* the scan order, added 07-28b | **1,485 / 1,485**, 72 towns |
| the same with the scan order transposed (reported, never asserted) | 816 / 1,485 |
| `plot[+0x18] == World_falloffSquared(cell, plotOrigin + span/2)`, **from the seed** | **1,485 / 1,485** |
| no verdict-2 plot has `maxH - minH > 16` | 1,485 / 1,485 |
| `0x4e3039` fires once per verdict-0/6 plot with span < 16, and never in a ruin | **72 / 72** |
| role 6 ⇔ the coin is even **and** the score is > 0 | **101 / 101** |
| `verdict == (score + 0.25 > rand()/32767)`, where the draw-to-plot map is forced | **768 / 768**, 41 towns |
| elsewhere, the roll count lies in `[#verdict-2, plotCount − #verdict-7]` | 31 towns |

**Why "where the map is forced".** A plot skips the roll when it is water, when no column
of it scored above 0.1, or when it is sand — and the capture records the plot table, not
those flags. In the 41 towns where the recorded roll count equals
`plotCount − #{verdict 7}`, every non-sand plot must have rolled, so the k-th draw belongs
to the k-th non-sand plot in scan order and each verdict can be checked against its own
draw exactly. In the other 31 only the bound is checkable. That is stated rather than
papered over: it is the same shape as lesson 12 — say what the gate actually feeds.

---

## 4. Two corrections this slice made to `gate_town_props.py`

Both are lesson-9 misses — a claim proven in one class of world, failing in the class it
never ran in. `gate_town_props.py` was **FAIL**ing on `town_props_capture_32730_32746_5`
(the 25-zone block around one town) while passing on the 67-town capture, whose towns are
all their own town's **anchor** zone.

* **"only villages emit props" was a biconditional.** 21 villages in the block capture —
  the town's edge zones — emit nothing at all. The claim that survives both captures is
  one-directional: **props ⇒ village**, 92 / 92. (An earlier guess, "a town emits iff it
  built a house", is false in both directions: every ruin builds houses and emits nothing,
  and village (32730,32746) emits 46 records with no house.)
* **The twenty PERIMETER sites are not on the 13-block building lattice.** Their fixed
  along-side axis is exact (18/25/32, or 22/28) and stays; their *perpendicular* axis was
  listed in `LATTICE` with a two-value residue set read off the 67-town capture alone, and
  the block capture produced the third value at once. Over both captures the real rule is
  clean: the perpendicular offset is **7 ± 1 in from one edge or the other**
  (`{6,7,8}` or `{43,44,45}` at span 51) — ten sites near, ten far. Checked as such now;
  the honest count of genuine 13-lattice sites drops from 46 to **33**.

`gate_town_props.py` now passes on both captures, which closes one of the three untriaged
gate-suite problems in `RatForge/docs/CW_RE_MASTER_INDEX.md` §7.

---

## 5. ⚠ Attribution — most of §2 was already known, in the *other* corpus

Lesson 26, and it cost about half this slice. `RatForge/tools/cubeworld_re/cw_town.py`
has had `plot_verdict(minH, maxH, on_site, water, special, center_falloff, rng)` since
2026-07-07 — the water / on-site / special-`0xb` / roll / span chain, in that order, with
the same `f32` care — and the role-6 coin and the rotation-nudge pass are in its comments
too. It was validated 25/25 against **one** captured town. `RE_town_props.md` in this
repo, written later and from a fresh decompile, listed the same rule as open. **Two
corpora, one question, asked twice.** Grep the old tree before re-deriving a rule here.

What is actually new, and why the slice was still worth running:

* **the draw-cost measurement** — the question the slice was opened to answer;
* **the score, derived ab initio.** The old port takes `center_falloff` as an *input*, and
  the old note recorded "cnoise = 1.0 for every plot ⇒ the SITE's falloff radius is
  degenerate". That reading was of the wrong object: the falloff is evaluated on the
  builder's **second** argument — the feature **cell** — with the cell's real radius, and
  the plot centre is `plotOrigin + span/2`. 1,485 scores reproduced exactly from the seed
  settles it, and it explains the old capture that saw scores varying 0..0.32;
* **72 towns instead of one**, and the per-plot draw-to-verdict check in the 41 towns
  where the map is forced;
* the two `gate_town_props.py` corrections in §4.

## 6. The PORT, and the reachability result (2026-07-28b)

`cwgen`: `src/worldgen/cw/CwTown.h` (`townScanPass`, `townNudgeRotation`, pure) +
`CwForest.cpp` (`zoneTownPlan`, the pre-chain replay). Golden:
`tools/cw_rederive/make_townverdict_golden.py` → `rederive_townverdict.bin` (section 60).

### 6.1 The town builder sits at the HEAD of the zone stream

This is the finding that reframed the slice, and it cost one script. §1 established that
the builder is too big to port whole. That was taken to mean the town chain was a long
way from emitter C. It measured the wrong end: what matters for reachability is not what
the builder *spends*, it is where the builder *starts*.

Recovering every captured town's absolute entry index — LCG-stepping from the zone seed
the way `make_zoneac_golden.py` does for emitter A, accepting an origin only when every
recorded `(n, value)` of the zone matches — locates **92 of 92 towns**, and puts the
entry index at:

| | |
|---|---|
| **0** | in **23 of 71** towns |
| median | **53** |
| max | 16,714 |

Zero, because a site-kind-1 zone skips both the gen-scatter (`0x51b05a`) and the mat-38
loop (`0x51cd79`) — the same guard that puts 41 of 112 kind-4 zones at index 0. So
*arriving* at `FUN_004e28e0` is a pre-chain question cwgen already answers, and only
*leaving* it correctly needs the 64 KB.

### 6.2 A zone class no ab-initio gate had ever entered

Every other zone gate in this project structurally excludes towns: `rederive_zoneac` is
site-kind 4, `rederive_zonepropsb` is the even-parity tail, `rederive_campgrid` needs a
camp descriptor and a town's type-1/5 descriptor is one of the five the camp path
declines. Lesson 9 from its least visible side — not a branch that never ran, but a whole
**zone class** no gate had entered.

Entering it needed one correction. A town zone classifies as `Village`, and `zoneRunestone`
and friends decline `Village`. That classification is **vacuous for a town**: `village`
exists for exactly two consumers — the gen-scatter keep-gate and the mat-38 rejection —
and a site-kind 1/3/4 zone jumps clear of both, so the un-RE'd `FUN_004d19f0` never runs.
Declining them was costing the port every town zone for nothing. `zoneTownPlan` admits
`Village` when the site kind is one of those three; `Landform` and `Feature` are still
declined, because their streams really are perturbed.

### 6.3 What the gate asserts, and what it only measures

Pass criterion — deliberately only the two things that are pure functions of the seed:

| claim | result |
|---|---|
| the ARRIVAL INDEX at the builder gate (`0x51d435`), per town | **34 / 34** |
| the plot SCORE, `World_falloffSquared(cell, plotOrigin + span/2)`, per plot | **607 / 607** |

Everything below is **reported every run and never asserted**, because it reads the
finished zone's column block classes and heights — the region-cache-blocked half
(`RatForge/docs/CW_REGIONCACHE_SCHEDULER.md`). Asserting them would be asserting cwgen's
terrain against a server that is not self-consistent about it.

| measured | of |
|---|---|
| the whole **SCAN PHASE** exact — every `rotRaw`, every nudged `rot`, every verdict | **29 / 34 towns** |
| roll-count / coin-count agreement | 29 / 34 towns each |
| per plot: `rotRaw` 529, `rot` 521, verdict 537, span-cull 588 | 607 plots |
| terrain: `minH` 598, `maxH` 548, both 547; `interior` 529 of those 547 | 607 plots |

38 of the 72 towns are `Landform`/`Feature` and are skipped, counted and named rather
than guessed at.

**Read the 29/34 as the headline, not the per-plot numbers.** The scan interleaves a
*conditional* roll between successive rotation draws, so one wrong `water` or `sand` flag
early in a town shifts every later draw in it — the per-plot counts are one town's error
repeated, not 78 independent ones.

### 6.4 Two things settled in passing

* **The within-plot `i`/`j` orientation is not an untested free parameter — it is
  unobservable.** Every accumulator in the column loop is order-free except `interior`,
  which keeps the last qualifying column; its window is the symmetric square
  `i, j ∈ [8, span-9]`, so both orders end on the same corner `(span-9, span-9)` and
  write the same value. A closed door rather than a carried risk (lessons 6 and 13).
  The **plot** order, by contrast, *is* observable — the per-plot rotation draw pins it —
  and is now proven: r-outer 72/72, transpose 0/72.

* ⚠ **`cubeworld_re/cw_town.py` is NOT transposed, and must not be "fixed".** It maps
  X from `k // N`; this repo maps X from `k % N`. Each is validated in its own frame and
  each fails in the other's: 25/25 vs 5/25 against `town_terr2_capture.json`, 1485/1485 vs
  331/1485 against `town_props_capture*.json`. So the disagreement is in how the two
  **rigs name their axes**, not in either port's arithmetic, and flipping either breaks
  the one that was flipped. cwgen follows this repo's frame and is pinned to it
  independently by the 607/607 ab-initio score check. A note to that effect is now in
  `cw_town.py` itself, because the obvious "correction" is a regression.

## 7. Still open

1. **The three terrain booleans** (`water`, `near`, `sand`) are read off the finished
   zone's columns. `near` is pure (`World_falloffSquared > 0.1`); `water` and `sand` need
   the column block classes, which cwgen produces bit-exact in the flat/dry majority but
   not where the region-cache scheduler perturbs the landform
   (`RatForge/docs/CW_REGIONCACHE_SCHEDULER.md`). Deriving them is what would make the
   verdict fully seed-reproducible, and it is a *terrain* question, not a town question.
   **Now measured, not estimated:** they are already right in **29 of the 34** towns
   cwgen can replay (§6.3), so this is a 5-town residual and each of those towns names
   its own disagreeing column.
2. **`minH`/`maxH`/`plot[+8]`** — same standing as always: the arithmetic is exact, the
   values are region-cache-blocked. Measured agreement: `minH` 598/607, `maxH` 548/607.
3. **The 173 rand sites downstream of the scan.** Untouched, and still the reason nothing
   downstream of the builder may be believed in a type-1/5 zone. Two of them
   (`0x4e54e8`, `0x4ef7c8`) carry 36% of all the draws this layer spends.

   ✅ **The first of them, the PROMOTION pass, is CLOSED (2026-07-28d) — RE'd, live-gated
   and ported ab initio. See `RE_town_promotion.md`.** Both inputs this section listed as
   blockers turned out to be misfiled: `FUN_004e19f0` has no sort key of its own (it is
   `std::sort`; the key is `plot[+0x18]` ascending, in the predicate), and `site+0x79` is
   not a faction but the **site-kind grid entry's second byte** — the zone's corner rank
   1..4, which `cw_featuregen` was already computing and discarding. A third input the
   lead never named, the RUIN's `desc+0x1c`, was derived in the same slice.
   `gate_town_promotion.py` 2,071 checks; `rederive_townpromo` 140/140.

   The order to work in for the rest, measured rather than guessed:

   | site | draws | towns | |
   |---|---|---|---|
   | ~~promotion (`0x4e33c8`/`0x4e35c5`/`0x4e3646`/`0x4e3766`)~~ | 252 | 56 | ✅ **closed 07-28d** |
   | `0x4eda58` | 2,968 | 69 | the first genuinely broad site — **next** |
   | `0x4e742e` | 15,609 | 70 | |
   | `0x4e54e8`, `0x4ef7c8` | 132,928 | 15 / 28 | per-column loops, 36% of the layer |
4. **The 38 of 72 towns cwgen declines** as `Landform`/`Feature`. Unlike the `Village`
   admission in §6.2 these are genuine — but nobody has checked whether they are genuine
   *for a town zone specifically*, given how much of the pre-chain a site-kind-1 zone
   skips. Worth one measurement before it is assumed.
