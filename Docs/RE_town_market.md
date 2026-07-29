# The town builder's MARKET pass (role 9) — `0x4e3a3f`-`0x4e5023`

*Gate:* `tools/gate_town_market.py` — **450 checks, 0 FAIL**, 6 markets / 20 slots / 90 prop
records checked field by field.
*Source data:* `raw/town_props_capture*.json` (`tools/frida_town_props.py`, seed 42069).
*Status:* ✅ **PORTED 2026-07-29d** — `townMarketPass` in `CwTown.h`, ab-initio gate
`rederive_townmarket` **18/18**: 6/6 site sequences draw for draw over 334 draws (116 of
them inside the two factories) and **98/98 records, 686 fields**. §8 is now a record of what
the port needed, and the answer was: nothing but the plot roles.

⚠ **Two things this file said that the port had to correct — see §0 and §5.**

This is the **last open band in the town builder**. With it closed, 174 of the 176 firing
rand sites are accounted for.

---

## 0. What it is

The handoff queued `0x4e39ea`-`0x4e4fb3` as "40 sites / 218 draws in 6 towns, but with 20
`prop_push` and 20 settle sites hanging off it, so unlike the last four stages this one *is*
checkable field by field". That was right, and it undersold it: the records are not just
countable, they are **derivable** — type and extents both, out of draws the rig never
recorded.

It is **two plot-role sections**, not one:

| span | gate | |
|---|---|---|
| `0x4e3a3f`-`0x4e3e15` | `plot[+0xc] == 8` | **dead** — see §2 |
| `0x4e3e15`-`0x4e5023` | `plot[+0xc] == 9` | the **market** |

and the market is one plot ringed with market stalls:

```
col = Chunk_getColumnAt(plotCentre)                    0x4e3e84 -- ONCE, at the centre
if col: push (x, y, col.base + col.count) into [ebp-0x5d80]   <- the NPC pass's flag-B list
for each of 20 perimeter slots:
    if rand() % 5 != 0:                                    ~80% of slots are used
        jitter = rand() % 3                                on the slot's EDGE coordinate
        record = <factory>(pos)                            a HIDDEN rand() picks the model
        if Prop_settleOnTerrain(record, site, 1):
            push record into site+0xc
```

**12 slots take stalls and 8 take goods**, from two different factories.

⚠ **CORRECTED 2026-07-29d, by the port.** This block first read `for each of 20 perimeter
slots: col = Chunk_getColumnAt(x, y); if col: push …`, i.e. the column read and the landmark
push inside the slot loop, once per slot — and `gate_town_market.py`'s docstring said the
same. Censusing the role-9 section by call target finds **exactly one `Chunk_getColumnAt`
(`0x4e3e84`) and exactly one landmark push (`0x4e3ea2`)**, against 20 settles, 20
`push_back`s and 40 rand sites; and the coordinates they are handed are `plotOrigin +
span/2` on **both** axes, built at `0x4e3e5f`-`0x4e3e62` — the PLOT CENTRE, not a slot's.

Nothing downstream changes in substance: flag B is still the market-stall list and is still
non-empty exactly when the town has a market whose centre column exists (§3). What changes
is the count — **one landmark per market, not up to twenty** — and, for a port, that the
draw stream needs no terrain at all. `gate_town_market.py` [9] now asserts both calls' arity
out of the binary so the claim cannot drift back.

This is the same shape as the errors this project keeps finding: a plausible loop structure
written from the stage's *shape* rather than read from its call census. The cheapest check —
counting calls by target — takes one command and was never run until a port needed it.

## 1. ★ The semantic reading — and this time it is in the namespace that resolves

| factory | blocks | type | via `assets/props/prop_ids.json` |
|---|---|---|---|
| `FUN_004f3630` | 0-11 | `0x15 + rand()%3` | **market-stand1 / market-stand2 / market-stand3** |
| `FUN_004f3490` | 12-19 | `0x18 + rand()%4` | **barrel / crate / open-crate / sack** |

Twelve stalls and eight crates of goods around one plot: the town **market**.

⚠ **`RE_town_yard.md` 07-28g had to WITHDRAW exactly this kind of reading**, and the
difference is worth stating precisely, because it is the whole reason one is allowed and the
other was not. The yard's decoration ids resolve through the same file to plausible
furniture — but the yard pushes them to `site+4` / `site+0x30`, which **no capture hooks**,
so nothing tied an id to a model. These records go to **`site+0xc`** (`lea ecx, [edi + 0xc]`
at every one of the 20 push sites), and `site+0xc` is exactly the namespace
`prop_ids.json` was built for. The gate asserts the push target out of the binary, so if
anyone later moves this claim to a stage that does not push there, it fails.

The extents corroborate it independently: a stall is **3.5 × 2.0 × 3.0** blocks (a stall-
sized box), a barrel/crate **2.0³**, a sack **1.5 × 1.5 × 1.4**. Those are `.rdata` literals
in the factory bodies, not fitted.

## 2. ★ Role 8 has a code section and is never assigned

`0x4e3ac0` gates a whole ~950-byte section on `plot[+0xc] == 8`. Censusing **every**
immediate the builder writes to a plot's `+0xc`:

```
0, 2, 3, 5, 6, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20
```

**8 is not among them.** Nor is 4, which also has a section (`0x4edda6`). The plot table is
the builder's own local, so nothing else writes it — the two sections are **dead code in the
shipped game**.

The capture agrees, and not vacuously: the role-8 section has **a rand site of its own
(`0x4e3d7f`, a `rand()%4`) and a prop push of its own (`0x4e3da0`)**, and both are empty in
all 92 towns. If role 8 were merely rare rather than impossible, those two would eventually
fire. The gate asserts both the missing store and the two empty emitters.

⚠ **Nothing here is a claim about what role 8 *would* do.** It calls `FUN_00513400` six
times with colour `0xdcdcdc` and spends no draw before that call; whether `FUN_00513400`
draws is unknown, because it never runs. Recorded as an open door that cannot be opened
from this corpus (lesson 6, inverted: a door that is *nailed shut* is also a result).

Free by-product — **the builder's whole plot-role dispatch**, disassembled by the gate:

```
2@4e2f87  2@4e3119  7@4e3147  8@4e3ac0  9@4e3e15  6@4e502f  2@4e5c34  2@4eda0b
3@4edcc5  4@4edda6  5@4ee5d9  17@4ee76e  19@4eeace  20@4eee3e  18@4ef02d
```

## 3. ★ It closes an input the NPC pass could not name

`RE_town_npcs.md` §2 lists five per-town booleans that fix every villager's draw sequence.
Flag **B** is `[ebp-0x5d80]`, and §8's FED table could only say *"pushed at `0x4e3ea2`, in
the not-yet-RE'd `0x4e3ead` band"*.

`0x4e3ea2` is this pass's landmark push — `FUN_0042feb0([ebp-0x5d80], {x, y, top})`, one per
perimeter slot whose column exists, and **not** gated on the `%5` coin. So:

* **flag B is the market-stall list**, and `B ⟺ D` (which the NPC gate observes but could
  not explain) is just "a town with a market also has the kind-2/3/4/5 buildings";
* the villagers' schedule stop at `0x4f0fc0` — `+ (rand()%0xb4 + 0x3c)` minutes, a **1-3
  hour** visit — is **a trip to the market**.

Two stages decoded eight days apart, from different observables, and the second names the
first's unknown input. Only **flag A** (the 8×8 region-site sweep at `0x4f01b0`) is still
un-derived.

## 4. ★ The hidden draws are DERIVED, not merely priced

Both factories sit outside the builder body, so `frida_town_props.py` never lists their
draws (lesson 18). 07-28m priced that kind of gap off the process-global draw index; here
the draws are **recovered outright**, because msvcrt's `rand` is a plain LCG and the town's
own zone seed pins the whole stream (lesson 33, the 07-28i/j technique).

The measured gap after a block's jitter draw is **2 (×78) or 3 (×15) and nothing else**, and
which one it is corresponds exactly to the recorded prop type:

| gap | hidden draws | types observed |
|---|---|---|
| 2 | 1 | `0x15 0x16 0x17` (all of factory A), `0x18 0x1b` |
| 3 | 2 | **`0x19 0x1a` only** |

because factory B's jump table arms 1 and 2 take a second `rand()` for a float scale and
arms 0 and 3 are constant. Zero exceptions in either direction.

With the hidden values recovered the factories reproduce, from the seed:

| | |
|---|---|
| prop **TYPE** | **90 / 90** |
| prop **EXTENTS** (3 floats each) | **270 / 270** |
| whether the arm costs one hidden draw or two | **93 / 93** |

So the band's real cost is **218 recorded + 108 hidden** draws (93 blocks × 1, plus 15
second draws).

## 5. The perimeter ring

The 20 slots sit on the four edges of the plot, and the `%3` jitter runs **along** the edge
it is on — so its sign flips from side to side:

| edge | blocks | jitter |
|---|---|---|
| +Y | 0, 1, 2, 12, 13 | `+rand()%3` on the record's 2nd coordinate |
| −Y | 3, 4, 5, 14, 15 | `−rand()%3` on the 2nd |
| −X | 6, 7, 8, 16, 17 | `−rand()%3` on the 1st |
| +X | 9, 10, 11, 18, 19 | `+rand()%3` on the 1st |

Once the jitter is removed, each slot's offset from the reference slot is **identical in all
6 towns, on both axes — 40 of 40**. So the ring is 20 fixed literals plus one 3-value jitter
each, and the whole geometry is derivable from the plot lattice alone.

✅ **UPGRADED 2026-07-29d: the AXIS is now DERIVED, and the whole ring with it.**

This section used to read *"the SIGN is disassembled; the AXIS is fitted, one bit per
block"*, and gave the reason: a symbolic walk recovers the sign for 17 of 20 but not
reliably *which* coordinate it lands on, because MSVC emits a block's two coordinates
through two different shapes — some call `int_to_fixed16_16`, some inline the widening as
`cdq / shld r2, r1, 16 / shl r1, 16` — and the walker resolved only one of the pair.

The diagnosis was right and the conclusion did not follow. That walker followed **registers**
through the 16.16 widening. Following the four **frame slots** the section reads its geometry
out of instead —

```
[ebp-0x5c8c] plotOriginX   [ebp-0x5c9c] plotOriginZ   [ebp-0x5c90] span/2   [ebp-0x5ce4] span
```

— resolves all twenty, because the jitter term simply lands inside whichever origin's
expression it belongs to, whatever shape the widening downstream of it takes.
`tools/extract_market_slots.py` is that interpreter, and the ring comes out as

| | |
|---|---|
| edge coordinate | `origin + edgeSpan*span + edgeConst + jitterSign*(rand()%3)` |
| along coordinate | `origin + span/2 + K`,  `K ∈ {−7, 0, +7}` (stalls) or `{−3, +3}` (goods) |

with `edgeConst = ±6` — so the ring is four edges of five slots, three stalls on the plot's
half-way line at ∓7 and two crates of goods at ∓3. **Nothing is typed**, and cwgen carries
the result as a GENERATED header (`CwTownMarketTables.h`) that `gate_town_market.py` [10]
regenerates and diffs every run (lesson 7c/7i, the `extract_house_layouts.py` pattern).

★ **The capture is now a cross-check rather than the evidence**, which is the strongest form
available here (lesson 7q): the disassembly knows nothing about the capture and the capture
knows nothing about the disassembly, and the interpreted ring predicts **98 of 98**
(block, town) offsets — every settle record in all 6 markets.

⚠ **One honest wrinkle, and it is what the first draft of the interpreter got wrong.** Four
blocks (1, 4, 7, 10) emit *no* `add` for their along-offset, because MSVC does not encode
`add reg, 0`. Running the interpreter cumulatively across blocks "fixes" that by letting the
previous block's `−7` leak in, which produces a **complete, plausible and wrong** table. The
window is therefore per-block and an absent constant is reported as an absence; that those
four are exactly the `K = 0` blocks is confirmed by the capture, not assumed. The old
null-baseline check (of the six `(axis, coefficient)` options exactly two survive in 20 of 20
blocks) is retained in the gate — it is now a check on the interpreter rather than the
evidence the axis rests on.

⚠ Note also that the jitter runs **perpendicular** to the edge, not "along" it as an earlier
draft of this section said: it moves the slot in and out of the plot boundary, which is why
its sign flips from side to side. The table above already had the right axes; only the word
was wrong.

⚠ And the reference slot's **own** jitter has to be removed before comparing, or every other
slot inherits a 3-value spread on the reference's axis and nothing looks constant. That is
how the first version of this check read 6 of 74 — worse than a constant, which per lesson 5
means misaligned rows and not a wrong formula. It was.

## 6. The band is TWENTY blocks, not the 19 the ledger could see

`RE_town_npcs.md` §9 gave this band as `0x4e39ea`-`0x4e4fb3`, and `0x4e4fb3` is the band's
**last rand site**. The 20th block's settle (`0x4e5001`) and push (`0x4e5014`) sit past it,
in the gap before the yard pass at `0x4e503a` — so the census counted 20 rand pairs against
19 settles and 19 pushes, and the asymmetry read like a block that legitimately does not
settle.

Second time in two slices that a span was ended at the last thing that *fired* rather than
at a boundary the binary states (`RE_town_ruin.md` §2 was the same mistake at the scale of
the whole function). **A span bounded by its own contents is a hypothesis.**

## 7. Numbers

| | |
|---|---|
| span | `0x4e3a3f`-`0x4e5023` (role 8: `0x4e3a3f`-`0x4e3e15`, dead; role 9: the rest) |
| rand sites | **41** — 40 in the market, 1 in the dead role-8 section |
| recorded draws | **218** over 6 towns |
| hidden draws | **108** (93 factory calls, 15 of them a second draw) |
| slots | 20 per market — 12 stalls, 8 goods |
| records | 98 settles, **90 pushed** (8 rejected by the settle) |
| gate | `gate_town_market.py`, **450 ok / 0 FAIL** (445 before 07-29d added [9] and [10]) |
| port | `townMarketPass` in `CwTown.h`, `rederive_townmarket` **18/18** — §8 |

## 8. The PORT — what it needed, and what the gate asserts

✅ **Ported 2026-07-29d** as `townMarketPass` in `src/worldgen/cw/CwTown.h`; ab-initio gate
`gateRederiveTownMarket` (section 67), golden built by
`tools/cw_rederive/make_townmarket_golden.py`.

| input | status |
|---|---|
| the plot table's roles | **FED** — the scan's region-cache-blocked terrain booleans (lesson 12); which plot is the market is the promotion pass's business |
| the plot lattice and `span` | **derived** — `rederive_townlattice` |
| the 20 perimeter offsets | **derived** — interpreted out of the binary, §5 |
| both factories, type and extents | **derived** — §4, from the LCG-recovered hidden draws |
| the terrain column | **not needed at all** — see the §0 correction: the one column read is at the plot centre and spends no draw |
| the settle verdict | **neither fed nor asserted** — the port keeps every record and the gate compares the 98 the live settle was *called* on, in order. 8 of those the live settle rejected, which moves no draw and no X/Z |
| `y16` | **not checked** — the settle's output, region-cache-blocked as the yard's is |

`rederive_townmarket` **18/18**:

| | |
|---|---|
| SITE SEQUENCE, draw for draw *including the 116 hidden factory draws* | **6 / 6** markets |
| records: slot / type / extents ×3 / x16 / z16 | **98 / 98**, 686 fields |
| exactly one role-9 plot per town | **6 / 6** |

★ The golden ships the **contiguous LCG stream**, hidden draws included
(`RE_town_furnish.md` §5b's technique), so a recorded body draw only lands back on its own
index if every unrecorded draw in front of it was spent too — that is what puts the two
factories' hidden draw *counts* under test although nothing records them.

⚠ **Null baseline, because the run is small**: 6 of 92 towns have a market. And the LAST kept
slot of each market has no following recorded draw, so its factory's hidden-draw count is
derived rather than pinned by alignment — 6 of the 98.

★ **A structural find from the port**: this stage's goods factory `FUN_004f3490` and the
HOUSE SURROUND pass's prop factory `FUN_004f2cd0` have the **same first four arms** — same
types, same extents, same single-precision chain — decoded a day apart from different stages.
cwgen shares one implementation (`townPropFactoryArm`), and both gates assert the agreement
so either decode drifting breaks the other (lesson 7q). ⚠ They are *not* byte-identical: MSVC
places the `pop edi` differently, so the claim is about the arms' results, which is exactly
what a shared implementation has to be right about.

## 9. What this leaves in the town builder

| span | sites | recorded draws | |
|---|---|---|---|
| … all previously closed stages … | 134 | 228,150 | closed |
| **this pass** `0x4e3a3f`-`0x4e5023` | **40** | **218** | closed |
| `0x4eee3e`-`0x4ef248` | 2 | 45 | ✅ closed 07-29c, `RE_town_antique.md` |

**174 of the 176 firing sites, 228,368 of 228,413 recorded draws — 99.98%** *as this file
was written*. ⚠ **Superseded the same day**: `RE_town_antique.md` §5 closed the last two
sites, so the census is now **176 / 176 and 228,413 / 228,413 — 100.00%, nothing open.**
Those two are the role-`0x14` / role-`0x12` sections at `0x4eee3e` and `0x4ef02d` in the
dispatch table above, and they place `antique-building1..4` — not the "town NPC spawns"
`RE_town_plaza.md` §9 called them.
