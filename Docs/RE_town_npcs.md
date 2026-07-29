# The town builder's NPC / DAILY-ROUTINE pass — `0x4f0046`-`0x4f16b6`

*Gate:* `tools/gate_town_npcs.py` — **16,117 checks, 0 FAIL**, 35 towns / 286 buildings /
440 villagers, every draw of the stage predicted in order.
*Source data:* `raw/town_props_capture*.json` (`tools/frida_town_props.py`, seed 42069).
*Status:* ✅ **PORTED 2026-07-29f.** `townNpcPass` in `CwTown.h`;
`rederive_townnpcs` **231/231** — 35 villages, 323 buildings DERIVED, the site
sequence draw for draw in **35 of 35** towns over 7,386 recorded draws, 440 villagers
and 37 named occupants. ★ **And it derives the five bits this file's own gate reads
off the recorded stream** (§2, lesson 12): four of the five come out of the plot table
and the building list with nothing fed at all.

---

## 0. What this is, and how the region got scoped

The handoff queued `0x4f0396`-`0x4f147f` as "34 sites, 6,236 draws, 59% of everything
left", with two loud bands sharing exact town counts. That tell was right for the fifth
time running: **it is one stage**, and its real span is `0x4f0046`-`0x4f16b6` — the last
thing the town builder does. After the plot loop has built every house, yard, plaza and
piece of furniture, this pass walks the town's **building list** and gives each building
its inhabitants.

Two cheap observations re-scoped the work before any of it was budgeted, and they are the
same two the handoff asks for:

* **`settles` / `pushes` / `spawncalls` hold ZERO records in the span** (checked every run).
  So unlike 07-28k/l this cannot be a geometry gate — nothing here is a prop and nothing
  goes through `creature_spawn_builder`. That is a fact about the stage, not a gap in the
  rig: the NPCs are `operator_new(0x10f0)` + `FUN_004e0f40` (`spawn_ctor`) and are pushed
  straight into the site's entity vector at `site+0x18`.
* **The span's call list names the stage outright** — `SequentialBehavior`,
  `CombatBehavior`, `WalkPathBehavior`, `LookAtPlayerBehavior`, `SpawnLocationBehavior`,
  `RandomInteractionBehavior`, `RandomWalkBehavior`. This is AI construction, not worldgen.

## 1. The shape

```
if (desc[0x18] != 1) goto 0x4f16bb          // ← the ELSE branch is the NEXT queued region
collect the building list by kind:
    kind 1        -> list C   ([ebp-0x4c])
    kind 2,3,4,5  -> list D   ([ebp-0x5d58])
build list A ([ebp-0x40]) from an 8x8 sweep of the region's site records
for each building B in site+0x88:
    if empty(B->cells24) continue
    switch (B->kind = B[+0x60]):
      case 1: named occupant, entity type 0x84
      case 2: named occupant, type 0x80, + lib_fn_4fd920
      case 4: named occupant, type 0x82, + lib_fn_4fc180
      case 3: named occupant, type 0x81, + lib_fn_4fde90
      case 5: named occupant, type 0x83, + lib_fn_4fde90
      default:
          n = 1 + rand()%2 villagers, entity type 0x88, each with a DAILY SCHEDULE
```

`desc[0x18] == 1` partitions the corpus perfectly: of 92 captured towns, **35 run this
pass, 35 run the `0x4f16bb`-`0x4f2b45` branch, 0 run both**, 22 run neither. `desc[0x18]`
is **1 (village) or 5 (ruin)** and nothing else, so the else arm is the ruin's pass, not a
generic one — `RE_town_ruin.md`. The 22 that run neither are 15 villages and 7 ruins with
no qualifying building.

### The named occupants

Five arms, tested by a `cmp ecx, K` chain in the order **1, 2, 4, 3, 5**. Each is the same
23 lines: `operator_new(0x10f0)`, `spawn_ctor`, a position drawn `rand() % |B->cells3c|`,
`spawn[0x28] = 3`, `spawn[0x2c] = 2 + rand()%2`, `spawn[0x34] = desc[0x24]`, the entity
type byte at `spawn[0x30]`, then a behaviour tree
`Sequential[Combat(20.0f), LookAtPlayer, WalkPath(2.0f)]`.

| kind | type byte | extra callee |
|---|---|---|
| 1 | `0x84` | — |
| 2 | `0x80` | `lib_fn_4fd920` |
| 4 | `0x82` | `lib_fn_4fc180` |
| 3 | `0x81` | `lib_fn_4fde90` |
| 5 | `0x83` | `lib_fn_4fde90` |

Exactly **two recorded draws** per named occupant. The table is disassembled out of
Server.exe by the gate, never typed (lesson 7l).

### The villagers

`n = 1 + rand()%2` per ordinary building — **286 of 286 buildings**, exact. Each villager
gets the same record fields as above with type `0x88`, plus:

* an `[ebp-0x40]` landmark, taken on a `rand()%2 == 0` coin, indexed **round-robin** by a
  counter (`[ebp-0x5c64]`, zeroed at `0x4f02aa`, `inc` at `0x4f0e00`) — not by a draw;
  it sets `spawn[0x5c] = 4`.
* `rand()%10 == 0` overrides `spawn[0x5c] = 3`.
* a **daily schedule**: a chain of `(position, time)` records pushed into `spawn+0x10a0`
  (32-byte elements) by `lib_fn_4e20d0`.
* a behaviour tree `Sequential[Combat(20.0f), LookAtPlayer, SpawnLocation,
  RandomInteraction, RandomWalk]`.

## 2. ★ THE FIND: five bits per town predict every draw in the stage

The villager body is a fixed chain of eight guarded blocks. Each guard is a
`cmp byte ptr [ebp-F], 0` on a flag computed **once per building**, at `0x4f0cc5`-`0x4f0d0e`,
from whether a list is empty:

| flag | list | what it holds |
|---|---|---|
| A | `[ebp-0x40]` | region landmarks, from the 8×8 site sweep at `0x4f01b0` |
| B | `[ebp-0x5d80]` | positions pushed at `0x4e3ea2`, in the `0x4e3ead` band |
| C | `[ebp-0x4c]` | the kind-1 buildings |
| D | `[ebp-0x5d58]` | the kind-2/3/4/5 buildings |
| E | `[ebp-0x5d64]` | plaza standing spots, pushed at `0x4efff8` (top solid block) |

Guard order, disassembled: **A E B D E C D E**. That, plus the four inner tests below,
fixes the whole per-villager rand-site sequence. **440 of 440 villagers match draw for
draw**, over 7,386 recorded draws.

**And the sequence has no free per-villager parameter at all.** The four blocks that pick a
list element and then test *that element's* `+0x30` vector look data-dependent — but the
test comes back non-empty in **396 of 396** observations, and the building's own `+0x30`
in **440 of 440**. So the only inputs are the five per-town bits.

### The bits are cross-checked, not fitted

Reading the five bits off the data and then checking the data would be lesson 12. Three of
them are pinned independently, 96 checks:

* **C ⟺ the kind-1 arm fired in that town.**
* **D ⟺ one of the kind-2/3/4/5 arms fired.**
* **B ⟺ D** — B's list is pushed inside the same band that creates the kind-2..5 buildings.
* the three blocks sharing flag **E** must have identical per-town counts; so must the
  three picks sharing flag **D**. Asserted per town.

The observed flag sets are `AE` ×16, `ACE` ×6, `ABDE` ×6, `AC` ×4, none ×3 — so a town has
*either* a kind-1 building *or* the full kind-2/3/4/5 set, never both.

## 3. ★ The schedule is the semantic check

`0xea60` = 60000 = one minute in ms. Decoding the chain out of the recorded draw values:

| site | expression | meaning |
|---|---|---|
| `0x4f0e81` | `(rand()%0xb4 + 0x1a4)` min | **wake / first waypoint, 07:00-09:59** |
| `0x4f0f21` | `+ (rand()%0x3c + 0x3c)` | a plaza stop |
| `0x4f0fc0` | `+ (rand()%0xb4 + 0x3c)` | a list-B stop |
| `0x4f108c` | `+ (rand()%0x14)` | a kind-2..5 building |
| `0x4f112a` | `+ (rand()%0x3c + 0x3c)` | a plaza stop |
| `0x4f11f0` | `+ (rand()%0xb4 + 0x3c)` | a kind-1 building |
| `0x4f12c2` | `+ (rand()%0x1e)` | a kind-2..5 building |
| `0x4f1377` | `+ (rand()%0x1e)` | a kind-2..5 building |
| `0x4f1415` | `+ (rand()%0x3c + 0x3c)` | a plaza stop |
| `0x4f147f` | `+ (rand()%0x3c + 0x3c)` | the building's own `+0x30` |
| — | `+ 0x1b7740` ms | the walk home, a flat **30 minutes** |

Over the 440 villagers this puts the **first waypoint at 07:00-09:58** (median 08:31), the
**last at 10:17-20:45** (median 15:50), monotone in 440 of 440, and **not one of them past
midnight**. The upper bound the arithmetic *allows* is 26 hours, so landing inside a day
440 times is a property of the data, not of the model. A wrong modulus, a wrong base or a
wrong unit does not land on a day — this is what turns "the constants disassemble to
these values" into "and they mean minutes of a villager's day" (lesson A1: name the
cheapest falsifier and make it).

## 4. ★ The hidden draws are priced without a new rig

The rig filters to the builder body (lesson 18), so a callee's draws are never listed —
but it stamps a **process-global** index on every draw, so a jump in that index measures
them (lesson 33). Across the stage, **7,328 of 7,351 transitions are exactly +1**: the
whole villager path spends nothing off-body. The 23 that are not are exactly the four
special arms that call out:

| arm | callee | gap | **hidden draws** | gaps priced |
|---|---|---|---|---|
| kind 2 (`0x4f058e`) | `lib_fn_4fd920` | 669-1038 | **668-1037** | 6 of 6 |
| kind 4 (`0x4f076a`) | `lib_fn_4fc180` | 3322-3335 | **3321-3334** | 6 of 6 |
| kind 3 (`0x4f0946`) | `lib_fn_4fde90` | 2010-2014 | **2009-2013** | 6 of 6 |
| kind 5 (`0x4f0b22`) | `lib_fn_4fde90` | 2012-2018 | **2011-2017** | 5 of 6 |

⚠ **CORRECTED 07-29f: the original table's numbers are GAPS, not hidden draws.** The gap
between two recorded indices counts the successor draw itself, so the callee's own cost is
one less — `RE_town_ruin.md` §3 states the same arithmetic correctly (*"gap 8 ⇔ 7 hidden
+ 1"*) and this one's column heading and its arithmetic disagreed. Nothing downstream was
wrong (the numbers are only ever used as a range), and `rederive_townnpcs` asserts the
corrected column, 23 of 23.

(a gap needs a *following* recorded draw, so the one kind-5 occupant that is the last thing
its town does is not priced — 23 gaps over 24 firings of the four callee arms.)

Kinds 3 and 5 call the **same** function and all 11 firings land in [2010, 2018] — a
spread of 8 on a ~2,013-draw callee, which is a check on the attribution rather than an
assumption about it. Kind 1, which calls nothing extra, has no gap.

**So the stage costs 7,386 recorded + 47,230 hidden draws over 35 towns.** The queue's
"6,236 draws" was the recorded part of the recorded part.

## 5. Three more `lib_fn_*` that are not library functions

The handoff's standing sweep — *"a `lib_fn_*` name in this tree means 'no evidence yet',
not 'library'"* — collects three more, all called only from the town builder:

* **`lib_fn_4fd920`** — the kind-2 occupant's. Loads `rand` into a register and calls
  `monster_level_formula` (`0x411090`) with `level / 30.0f`; 669-1038 draws. A merchant's
  **stock/level generator**.
* **`lib_fn_4fc180`** — the kind-4 occupant's, ~3,330 draws, the most expensive.
* **`lib_fn_4fde90`** — shared by kinds 3 and 5, ~2,013 draws.

None is decoded here; what is established is that they are **game functions in the NPC
layer, not CRT**, and what each costs. That is enough to scope them, which is the point of
the sweep.

## 6. Closed doors, recorded so they stay shut

* **`0x4f143c` takes a `rand()` and throws the value away.** No `div`, no `and`, no use:
  the next instruction pushes an unrelated slot. It still advances the stream, so a port
  must spend it. The gate asserts it is the *only* discarded draw in the span.
* **The stage emits nothing the rig hooks.** 0 records in `pushes`, `settles` and
  `spawncalls` across the whole span, asserted every run. Do not go looking for a geometry
  observable here; there is not one, and `ents` cannot serve either (§7).
* **`0x4f16bb`-… is the ELSE branch of `desc[0x18] == 1`, not a sibling stage that
  also runs.** 35 towns / 35 towns / 0 both.
  ⚠ **CORRECTED 2026-07-29 on both halves.** (a) The span is `0x4f16bb`-**`0x4f2b45`**, not
  `-0x4f26e9`: the builder's `ret 8` is at `0x4f2b42` and seven further rand sites live past
  the bound this file used. (b) It is **not** "the same pass for the other site classes".
  `desc[0x18]` is 1 or 5 and nothing else — 50 villages, 42 ruins — so the else arm is the
  **RUIN's** half of the fork, and it builds hostile creatures from a species table with no
  schedule and no `LookAtPlayer`. `RE_town_ruin.md`.

## 7. What `ents` does NOT give you

`frida_town_props.py` records `ents0` / `ents` — the length of `site+0x18` before and
after — and this stage pushes into exactly that vector. It is tempting to use as a total.
**It does not close**: predicted NPCs match `ents - ents0` in only 22 of 92 towns, because
**six other `spawn_ctor` sites** in the builder push into the same vector
(`0x4e539e`, `0x4edb70`, `0x4ee19e`, `0x4f1d14`, `0x4f2090`, `0x4f23c7`), and towns that
never enter this stage still finish with 6-44 entities. Byte-scanning the builder for
`call spawn_ctor` is what settles that in one command; the count is a sum over stages, and
it will only become a gate when the other six are decoded too. Recorded here so the next
slice does not re-derive the disappointment.

⚠ **AND THE NEXT SLICE CLOSED IT ANYWAY, because this is a statement about VILLAGES.**
A ruin runs only two of the thirteen `spawn_ctor` sites, so for the ruin arm
`ents - ents0` is an **exact** identity — 35 of 35, residual zero (`RE_town_ruin.md` §5),
and it is the only evidence that the block past the rig's filter spawns anything. The
sentence above is right about this stage and wrong as a general rule: **"`ents` is a sum
over stages" makes it useless only when more than one of those stages is undecoded.** Ask
which stages the town's own CLASS runs before writing a total off.

⚠ Also: the scan that produced the "six other sites" ran to `0x4f26e9`. Over the real body
there are **thirteen**, the extra one being `0x4f2786` in the ruin pass's phase 4.

## 8. What a port would have to be FED

| input | status |
|---|---|
| the building list `site+0x88`, and each building's `+0x60` kind | ✅ **DERIVED 07-29e** — `RE_town_buildings.md`. One producer (`0x4e76db`), and it pushes the house `operator_new(0x74)` + `FUN_004e1f80(h,3,3,4)` made, so the list is one entry per role-2 plot in plot order; `0x4e6567` copies `plot[+0x10]` into `+0x60`, which `rederive_townpromo` derives. `cwgen`'s `townBuildingList` |
| `B->cells24`, `B->cells3c`, `B->+0x30` (their sizes only) | ✅ **DERIVED 07-29e** — all three are filled by the no-draw interior-marking sweep `0x4ea988`-`0x4ead3a` out of the module grid, and the counts are rotation/mirror invariant. ★ And they explain §2's live observation: `\|cells30\|` is **1** for every house in all 23 layouts, which is why the building's own `+0x30` came back non-empty 440 of 440; `\|cells3c\|` is 1 in exactly `kHouseFixed`/`kHouseSub1`, the three layouts a sub-role 1..5 plot gets, so a named occupant always has a cell |
| flag E's list `[ebp-0x5d64]` | ✅ **DERIVED 07-29f, one terrain read deep.** The push at `0x4efff8` is per role-0/7 PLOT and guarded by a byte set at `0x4ef8f9`, which a village reaches only through falloff ≥ 0.72 + a surface + class `0xb` (SAND) below it — i.e. exactly the quadrants the plaza pass turns into SITES. `E = the plaza pass produced a site`, **32/32 against a 28/32 null baseline**. The sand read is terrain and is FED, the same tape `rederive_townplaza` already carries |
| flag B's list `[ebp-0x5d80]` | ✅ **derived 07-29** — `0x4e3ea2` is the MARKET pass's landmark push, one per perimeter slot with a column, so **flag B is the market-stall list** (`RE_town_market.md` §3). It also explains `B ⟺ D`, and it makes the schedule stop at `0x4f0fc0` a **trip to the market** |
| flag A's list `[ebp-0x40]` | ✅ **DERIVED 07-29f** — the 8×8 sweep at `0x4f01b0` walks the region's 64 feature cells (`region + 0x14018`, stride `0x68`) and pushes a landmark for every one whose type is **not** 0, 1 (a village) or 0xa (a portal); a type-0 cell takes an extra world test. `cw_featuregen` produces all 64 types bit-exact, so `A = any cell with type ∉ {0, 1, 0xa}`. ⚠ **UNFALSIFIABLE in this corpus**: A is TRUE in 32 of 32 observations, so the agreement is a consistency check and not a discrimination (lesson 9) |
| flags C and D | ✅ **DERIVED 07-29f** — they do fall out of the kinds: C = any building with kind 1 (10/32 true), D = any with kind 2..5 (6/32). And **B = any role-9 plot** (6/32), since `0x4e3ea2` pushes ONE market landmark per market |
| `desc[0x18]`, `desc[0x24]` | the site descriptor, already in `cw_featuregen` |

To advance the LCG correctly a port needs only the **sizes** of three vectors per building
and the five booleans — not a single position.

✅ **ALL OF IT CLOSED — 07-29e derived the building list and 07-29f the five bits.**
`rederive_townnpcs` 231/231. What a port is still FED is the plot table, `desc[+0x24]`,
the recorded draw VALUES (the stream cannot be made contiguous — see §4) and flag E's
one terrain read.

★ **The thing this port is FOR is §2's own caveat.** This file establishes that five bits
predict every draw and then reads those bits off the recorded stream, which is lesson 12
exactly. Deriving them is what turns "440 of 440 villagers match" into a statement about
the generator rather than about the replay — and the null baselines say it is not
vacuous: B, C, D and E are true in 6, 10, 6 and 28 of 32 towns.

⚠ **A is the exception and it is stated rather than hidden**: true in 32 of 32, so no
town in this corpus can tell the derivation from `A = true`. A region with no feature
cell outside {0, 1, 0xa} would, and none of the 35 is one (lesson 9). That is a much smaller ask than the stage's
57k draws suggest, and it is the reason this is worth porting before the geometry of the
building list is understood.

## 9. What this leaves

Counted by the same span census as `RE_town_plaza.md` §9 (every distinct `ra` in
`raw/town_props_capture*.json`, bucketed by the VA span its `RE_town_*.md` names), re-run
over **both** capture files:

| span | sites | draws | |
|---|---|---|---|
| scan/verdict `0x4e2a80`-`0x4e3093` | 3 | 3,310 | closed |
| promotion `0x4e3095`-`0x4e39e9` | 12 | 280 | closed |
| **`0x4e3a3f`-`0x4e5023`** | **40** | **218** | ✅ closed 07-29, `RE_town_market.md` (the MARKET; ⚠ this table's `-0x4e4fb3` bound was the band's last RAND site and cut off its 20th block's settle and push) |
| role-6 yard `0x4e503a`-`0x4e5b9e` | 14 | 113,353 | closed |
| house pass `0x4e6520`-`0x4e74a5` | 13 | 17,947 | closed |
| house entity `0x4e74a5`-`0x4ea988` | 11 | 7,597 | closed |
| furnishing `0x4ead3a`-`0x4ecf20` | 13 | 8,717 | closed |
| surround `0x4ecfb5`-`0x4ed9ea` | 8 | 6,408 | closed |
| inhabitants `0x4eda0b`-`0x4edcbf` | 4 | 4,099 | closed |
| plaza `0x4ef248`-`0x4f0046` | 7 | 56,181 | closed |
| **this pass** `0x4f0046`-`0x4f16b6` | **38** | **7,386** | closed |
| **`0x4f16bb`-`0x4f2b45`** | **11** | **2,872** | ✅ closed 07-29, `RE_town_ruin.md` |
| `0x4eee4f`, `0x4ef03e` | 2 | 45 | open |

**123 of the 176 firing sites, 225,278 of 228,413 draws — 98.6%** *as this file was
written*. ⚠ **Superseded twice since.** 07-29 closed the `0x4f16bb` row (the ruin pass) and
then the `0x4e39ea` row (the market), so the count is **174 / 176 sites, 228,368 / 228,413
draws — 99.98%** (`RE_town_market.md` §9, where the census is re-run over both corrected
spans). Note also that this table's `0x4f16bb`-`0x4f26e9` upper bound was wrong: seven more
rand sites exist past it and no capture on disk records them.

**All that is left in the whole town builder is two rand sites spending 45 draws**:
`0x4eee4f` (31) and `0x4ef03e` (14), the role-0x14 / role-0x12 spawns.

## 10. Numbers

| | |
|---|---|
| span | `0x4f0046`-`0x4f16b6` (its `jmp` out is at `0x4f16b6`) |
| rand sites | **38** (5 arms × 2, the villager coin, 27 in the villager body) |
| recorded draws | **7,386** over 35 towns |
| hidden draws | **47,230** (four arms, three callees) |
| buildings | 286 generic + 37 named-occupant (kind 1 ×13, kinds 2/3/4/5 ×6 each) |
| villagers | 440 |
| gate | `gate_town_npcs.py`, **16,117 ok / 0 FAIL** |
