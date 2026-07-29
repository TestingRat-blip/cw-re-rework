# The town builder's RUIN OCCUPANT pass — `0x4f16bb`-`0x4f2b45`

*Gate:* `tools/gate_town_ruin.py` — **3,041 checks, 0 FAIL**, 35 ruins / 112 buildings /
677 entities, every recorded draw of the stage predicted in order.
*Source data:* `raw/town_props_capture*.json` (`tools/frida_town_props.py`, seed 42069).
*Status:* ✅ **PORTED 2026-07-29e.** `townRuinPass` in `CwTown.h`;
`rederive_townruin` **140/140** — 35 ruins, the site sequence draw for draw and the
stream LENGTH exact in 35 of 35 (2,872 recorded draws **plus the 406 no capture on
disk records**), 112 buildings DERIVED, and `ents - ents0` closing 35/35.
§9's one open input, the building list, fell to a census — `RE_town_buildings.md`.

---

## 0. What this is

The handoff queued `0x4f16bb`-`0x4f26e9` as "11 sites / 2,872 draws … the ELSE branch of the
same `desc[0x18] == 1` the NPC pass is the THEN branch of … so it is the same pass for the
other site classes". The partition was right and the conclusion was not. **It is not the
same pass.** `desc[0x18]` takes exactly two values in 92 captured towns — **1 = village,
5 = ruin** (`RE_town_verdict.md`: "the sample is 50 villages and 42 ruins") — so the fork is
not "villages vs everything else", it is village vs ruin, and the two arms do opposite
things:

| | village (`RE_town_npcs.md`) | ruin (here) |
|---|---|---|
| who | villagers + five named occupants | hostile creatures |
| behaviour tree | `Sequential[Combat, LookAtPlayer, SpawnLocation, RandomInteraction, RandomWalk]` | `Sequential[Combat(20.0f), WalkPath(2.0f)]` |
| schedule | a day of (position, time) waypoints | none |
| identity | a fixed entity-type byte per arm | drawn from a **species table** |

The gate censuses the behaviour-tree constructors in **both** spans and contrasts them,
rather than asserting the negative from one side: the village pass calls seven distinct
ctors, the ruin pass exactly three, and the ruin's set is a strict subset. That is the
cheapest statement of "these are monsters, not residents".

An abandoned town, repopulated by whatever lives there now.

## 1. The shape

```
if (desc[0x18] == 1) -> the village NPC pass                      (RE_town_npcs.md)
phase 1  0x4f16bb-0x4f1bbd   build the SPECIES TABLES        — 0 draws
phase 2  0x4f1bbd-0x4f21f2   the PLOT LOOP                   — 1,431 draws
phase 3  0x4f21f2-0x4f2698   the BUILDING LOOP, packs        — 1,329 draws
phase 4  0x4f2698-0x4f2a55   the PATROL per building         — 112 recorded + 406 HIDDEN
```

Four kinds of occupant, four `spawn_ctor` sites, and each is `operator_new(0x10f0)` +
`FUN_004e0f40` pushed into the site's entity vector at `site+0x18`:

| | site | what | per |
|---|---|---|---|
| **guard** | `0x4f1d14` | one occupant on a **role-0x14** plot | 1 per role-0x14 plot |
| **quadrant** | `0x4f2090` | a loner at a quadrant centre, on `rand() % 5 == 0` | ≤ 4 per qualifying plot |
| **pack** | `0x4f23c7` | 2-4 creatures on a semicircle at a building cell | `rand()%3` packs per building |
| **patrol** | `0x4f278b` | a wanderer that walks to another building | `rand()%2` per building |

Every one gets `spawn[0x28] = 1`, `spawn[0x34] = desc[0x24]` (the level),
`spawn[0x2c] = <a species id>` and `spawn[0x7a] |= 0x1000`. The guard alone also takes
`|= 0x200` and `spawn[0x10e8] = 1`.

## 2. ★ THE FINDING: the builder's body is 1,116 bytes longer than this repo has carried

`RE_town_plaza.md` §0 established "the builder really is one 65,033-byte body",
`0x4e28e0`-`0x4f26e9`, from Ghidra's function boundary. **That boundary is wrong.** The
`ret 8` is at `0x4f2b42`:

```
004f2b3a  call 0x54a8b8            __security_check_cookie
004f2b3f  mov esp, ebp
004f2b41  pop ebp
004f2b42  ret 8
```

so the body is `0x4e28e0`-`0x4f2b45`, **66,149 bytes**. Phase 4 branches straight over the
old end — `0x4f26d1: jle 0x4f2a5b` — and nothing about the listing looks unusual there.

**This matters because the rig has the same bound.** `frida_town_props.py`:

```js
const TB = [0xe28e0, 0xf26f0];
function inTB(r){ return r >= TB[0] && r < TB[1]; }
...
if (cur && collecting && inTB(ra(this))) cur.draws.push([ra(this), rv.toInt32(), n]);
```

So **seven rand sites and one `spawn_ctor` have never been recorded in any town capture**:

```
0x4f26f3  0x4f274c  0x4f27f7  0x4f283e  0x4f2947  0x4f297c  0x4f29d7      spawn_ctor 0x4f278b
```

This is lesson 18 from a new direction. Every previous instance was the filter hiding a
**callee**; here it is hiding the tail of the function the filter is *for*. Two of the seven
also use `call edi` rather than `call [__imp__rand]` (the thunk is cached in EDI at
`0x4f26ab`), so a census that only matches the memory form misses two more — the gate
tracks EDI rather than assuming.

The span census that produced "11 sites / 2,872 draws" was run with the same upper bound, so
the whole builder ledger in `RE_town_npcs.md` §9 is a count over a truncated body. §10 here
restates it.

## 3. ★ The invisible block is priced, and by its own recorded value

The rig stamps a **process-global** draw index, so the gap after the last recorded site
measures what the unrecorded ones spent (lessons 7m, 33). Across the 35 ruins, `0x4f26b3` is
the **only** site in the whole span whose successor gap is ever anything but +1, and it is
strictly bimodal:

| gap | count | |
|---|---|---|
| 1 | 42 | the block did not run |
| **8** | **35** | 7 hidden draws + 1 — exactly the 7 sites disassembled in §2 |

and **which one it is, is predicted by that draw's own recorded value**: `0x4f26b3` is
`n = rand() % 2` and the loop runs `n` times, so gap 8 ⟺ `value % 2 == 1`. **77 of 77, zero
failures.** That is not a fit — the value is recorded, the modulus is disassembled, and the
gap is measured, all three independently.

`0x4f26b3` is also the **last draw the town builder makes**: in 35 of 35 ruins it is the
final recorded draw, which is what a stage sitting at the end of the body should look like.
Those 35 trailing firings have no successor to measure, so their parity is used unchecked —
and §5 is what checks them anyway.

## 4. ★ The species tables cross-check against a container decoded a year ago

Phase 1 spends **no draws**. It builds two locals — a flat `vector<int>` (`[ebp-0x5d10]`)
and a `vector<SpeciesGroup>` (`[ebp-0x5d34]`, elements 0x18 bytes = two `vector<int>`,
confirmed from `FUN_004f7540` zeroing six dwords and `FUN_004f3820` dividing by 24) — from a
five-entry jump table at `0x4f2bc8` on **`desc[0x1c]`**, with a `desc[0x20] % 3` sub-switch
inside arm 4.

Both selectors are already derived by `cw_featuregen`: `desc[0x1c]` for a ruin is "a no-draw
climate branch on the REGION SITE, 19/19 regions vs live" (`CwFeatureGrid.h`) and `desc[0x20]`
is the region **mission counter** (`RE_camp_descriptor.md`). So the table choice costs
nothing and is reachable from the seed.

**The tables are INTERPRETED out of Server.exe by the gate, never typed** (lessons 7i, 7l).
That is not caution for its own sake — the region shares tails through `0x4f1b93`/`0x4f1b96`
(an arm can end with `mov [ebp-0x5c48], imm; jmp 0x4f1b93`, and the push happens in code it
jumps *into*), so a block-at-a-time read of the listing drops the last id of five arms and
still produces a plausible-looking table.

| arm | flat list | groups (list0 \| list1) |
|---|---|---|
| `desc[0x1c] = 0` | `0x29 0x11 0x60 0x60` | (`0x29 0x11` \| `0x3b 0x25 0x26 0x28 0x27`) |
| `desc[0x1c] = 1` | `0x09 0x0a` | (`0x09 0x0a` \| `0x16 0x37`) |
| `desc[0x1c] = 2` | `0x53 0x54` | (`0x53 0x54` \| `0x35 0x3c`) (`0x51` \| —) |
| `desc[0x1c] = 3` | `0x4c` | (`0x4c` \| `0x3a 0x3c`) (`0x51` \| —) |
| `desc[0x1c] = 4` | `0x0f 0x10` | (`0x0f 0x10` \| `0x60`) (`L2` \| —) |
| `desc[0x1c] > 4` | `0x0b 0x0c` | (`0x2e` \| `0x13`) |
| `desc[0x18] ∉ {1,5}` | `0x0b 0x0c` | (`0x2e` \| `0x13`) |

with `L2 = desc[0x20] % 3 -> {0: 0x61, 1: 0x5e, 2: 0x11}`.

★ **Now compare `RE_dungeon_species.md`**, which decoded `FUN_00500300`'s prologue — a
different function, a year ago, from live dungeon captures, gated 6/6 by
`gate_dungeon_species.py`:

| dungeon style | flat | groups |
|---|---|---|
| default (0, 4) | `{11, 12}` | `{{0x2e},{0x13}}` |
| 1 / 2 | `{15, 16}` | `{{15,16},{0x60}}` **and** `{{L2},{}}`, `L2` by `rand()%3` → `0x61 / 0x5e / 0x11` |

**`0x0b 0x0c` is `{11,12}` and `0x0f 0x10` is `{15,16}`.** The ruin's `desc[0x1c] > 4` arm is
the dungeon's default container and its `desc[0x1c] = 4` arm is the dungeon's style-1/2
container, second group included, down to the same three `L2` ids in the same order. Two
functions, two decodes, two methods, one table — and the gate asserts the equality, so if
either decode ever drifts the other catches it.

The one difference is the *source of the `%3`*: the dungeon spends a real `rand()` on it,
the ruin reads `desc[0x20] % 3` and spends nothing. That is exactly what the draw census
shows — no draw anywhere in phase 1.

⚠ **Arm 0 pushes `0x60` into the flat list twice.** `0x4f1774` and `0x4f17d5` both target
`[ebp-0x5d10]` (`8d 8d f0 a2 ff ff` = `lea ecx, [ebp-0x5d10]`, byte-checked); everywhere else
in the table the third push of that shape goes to the group. A port must reproduce it,
because it makes the pick `rand() % 4` and not `rand() % 3`. Whether it is deliberate
weighting or a slip in the original source is not something the binary can answer, and this
file does not claim to know (lesson A1).

⚠ **`list1` is dead here.** The stage never reads the group's second vector — no `+0xc`
access anywhere in the span. In the dungeon it is the companion list; in a ruin the table
carries it and nothing consumes it.

## 5. ★ And `ents` closes exactly — which `RE_town_npcs.md` §7 said it would not

§7 recorded, correctly, that `site+0x18` is not a usable total: predicted NPCs matched
`ents - ents0` in only 22 of 92 towns because six other `spawn_ctor` sites push into the
same vector. **That is a statement about villages.** In a RUIN only two stages push into it —
the inhabitant scatter (`0x4eda58`, `RE_town_creatures.md`) and this one — so

```
ents - ents0  ==  guard + quadrant + pack + patrol + inhabitant-scatter
```

is an exact identity: **35 of 35 ruins, residual identically zero**, 842 entities.

This is the only geometry-flavoured check the stage has, and every term is ablated rather
than assumed:

| model | towns exact |
|---|---|
| **full** | **35 / 35** |
| without the guard term | 4 / 35 |
| without the quadrant term | 0 / 35 |
| without the pack term | 4 / 35 |
| **without the patrol term** | **5 / 35** |
| without the inhabitant-scatter term | 0 / 35 |

and the quadrant coin's modulus is swept against its neighbours (lesson 5 — compute the null
baseline before believing a fit): `%3` → 2/35, `%4` → 5/35, **`%5` → 35/35**, `%6` → 7/35,
`%7` → 3/35. The binary's `mov ecx, 5` at `0x4f1f4c` is read out of the image by the gate,
not typed.

★ **The patrol row is the one that matters.** Those 58 entities are produced by code no
capture has ever recorded a draw from. `ents` is the only evidence they exist — and it also
validates the parity rule for the 23 trailing firings §3 could not measure a gap for, since
a wrong answer on any of them would break the identity.

## 6. Phase 2 — the plot loop

Two nested loops over the `n × n` plot table, **r-outer / c-inner, indexed `r + n*c`** —
the same order the role-6 yard pass recovered independently (`RE_town_yard.md`, 59/59).

```
X = (desc.cell[0] << 8) + span/2 + (r * 256) / n
Y = (desc.cell[1] << 8) + span/2 + (c * 256) / n
Z = walk up from the column's top while World_getBlockAt is solid, then +1
```

`span` is `[ebp-0x5ce4]`; for `n = 5` the term `(r*256)/n` is `0, 51, 102, 153, 204`, which
is the 51-block plot stride `RE_town_yard.md` pinned from `15,606 = 6 × 51²`. Note it is
`(r*256)/n` and **not** `r*(256/n)` — they agree at `n = 5` and diverge at `n = 6`.

The per-plot verdict, all three terms read from the plot record the promotion pass leaves
(and which `rederive_townpromo` derives):

* `role == 0x14` → **one guard**, at the plot centre. 31 role-0x14 plots in the corpus,
  31 draws at `0x4f1d7d` — and `RE_town_plaza.md` §9 had already named `0x4eee4f` (31 draws)
  as "the role-0x14 NPC spawn", so the two counts agree from opposite ends.
* `role == 2` (a house) → nothing here; houses are phase 3's business.
* `score <= 0.2` → nothing. Same threshold as the inhabitant scatter's.
* otherwise → **four quadrant centres**, at `span/4` and `3*span/4` on each axis, each
  rolling `rand() % 5 == 0`. 1,176 coins = 4 × 294 qualifying plots, exactly; 224 accepted.

The quadrant creature is the only one of the four **built with no behaviour tree at all** —
three `SequentialBehavior` ctors for four spawn kinds, and the quadrant arm goes straight
from the species store to the `site+0x18` push.

## 7. Phase 3 — the packs

Walks the town's building list `site+0x88` (the same list the village pass walks), and for
each building whose cell vector `building+0x24` is non-empty:

★ **The building list has exactly one entry per role-2 plot.** That is not assumed — the
gate's replay uses the count of role-2 plots as the number of loop iterations and requires
the resulting draw sequence to land exactly, **per town, in all 35**, which a wrong count
cannot do: one building too many or too few desynchronises everything after it. In
aggregate it is 112 and 112. So the phase-3 loop bound is derivable from the plot table
alone, and only the per-building vector SIZES are not (§9).

```
nPacks = rand() % 3                                       0x4f2275   (0..2)
repeat nPacks times, while the cell list is non-empty:
    cell = cells[ rand() % cells.size() ]; erase it       0x4f22b7
    n    = rand() % 3 + 2                                 0x4f2307   (2..4)
    for i in 0..n-1:
        angle = i * PI / n
        pos   = cell + (2*cosf(angle), 2*sinf(angle), +1)
        spawn[0x54] = angle/PI*180 + 90                   (degrees, no draw)
        spawn[0x2c] = flat[ rand() % flat.size() ]        0x4f24f9
        items       = rand() % 2                          0x4f2600
```

`FUN_004024c0` / `FUN_004024a0` are `sinf` / `cosf` through `__libm_sse2_{sin,cos}_precise`
— the `/fp:precise` ground truth again — and `FUN_00401530` multiplies by 65536.0f before
adding, so the ring is laid out in 16.16.

Two things worth writing down because they are easy to assume wrong:

* `angle = i * PI / n`, so the members occupy a **half** circle, not a ring — `i` runs
  `0..n-1` and the last member sits just short of 180°.
* the pack indexes the **flat** list, not the group's `list0`. The dungeon patrol does the
  opposite. Only phase 4 uses the groups.

The pack member's inventory grant is `rand() % 2` copies of item `0x101`, stamped with the
creature's own level (`word [ebp-0x1b48] = spawn[0x34]`) and pushed through
`game_inventoryAccumulateCount(spawn+0xf6c, &item, -1)`.

## 8. Phase 4 — the patrol (the invisible one)

Per building, `n = rand() % 2` at `0x4f26b3`; if `n > 0` and the cell list still has an
entry, one more creature — and everything below is disassembled, never recorded:

```
cell = cells[ rand() % cells.size() ]; erase it           0x4f26f3
g    = groups[ rand() % groups.size() ]                   0x4f274c
if (g.list0.empty()) skip the rest                        0x4f2766   <- the dungeon's guard
spawn at cell + (0,0,+1)
spawn[0x54] = rand() * 360.0f / 32767.0f                  0x4f27f7
spawn[0x2c] = g.list0[ rand() % g.list0.size() ]          0x4f283e
tree = Sequential[Combat(20.0f), WalkPath(2.0f)]
if (buildings non-empty):
    b = buildings[ rand() % size ]                        0x4f2947
    if (b->cells non-empty):
        waypoint = b->cells[ rand() % size ]              0x4f297c   -> the walk path
items = rand() % 2                                        0x4f29d7
```

so it is a **wanderer that walks from its own building to another one** — the only occupant
here with a destination, and the closest thing a ruin has to the village's daily schedule.

The `g.list0.empty()` skip at `0x4f2766` is the same guard `RE_dungeon_species.md` flags as
"the one that bites a port". It cannot fire on the two arms this corpus exercises (both have
a non-empty `list0` in every group), but arms 2, 3 and 4 each carry a second group whose
`list1` is empty and whose `list0` is not, so the skip stays unreachable there too — worth
recording, since a port that always spends the downstream draws would only diverge on a
table with an empty `list0`, and no arm has one.

**Both inner tests came back non-empty in all 35 firings** — the gap is 8 and never 6 or 7,
which is what says so.

## 9. What a port would have to be FED

| input | status |
|---|---|
| `desc[0x18]`, `desc[0x1c]`, `desc[0x20]`, `desc[0x24]`, `desc[0x28]` | **derived** — `cw_featuregen` produces all five |
| the plot table's role and score | **derived** — `rederive_townverdict` + `rederive_townpromo` |
| `n`, `span`, the plot lattice | **derived** — `rederive_townlattice` |
| the species tables | **derived** — from `desc[0x1c]` / `desc[0x20]`, no draws, regenerated by the gate |
| the building list `site+0x88` and each `building+0x24` (**sizes only**) | ✅ **DERIVED 07-29e** — `RE_town_buildings.md`. `site+0x88` has ONE producer (`0x4e76db`, byte-censused in four address forms) and it pushes the house `operator_new(0x74)` made, so the list is one entry per role-2 plot in plot order; the cell vectors fall out of the module grid. ⚠ And the sizes turn out not to matter: `\|cells24\|` is at least 3 in all 23 layouts against at most 3 picks per building, so the cell list can never run out |
| the terrain column at a plot / quadrant centre | derived, but only the *existence* of a column matters for the draw stream (a missing column skips the spawn; 0 of 1,176 coins hit that path) |

The ask is the same shape as the village pass's and slightly smaller: **the sizes of one
vector per building, plus the plot table.** Positions need terrain; the draw stream does not.

✅ **CLOSED 07-29e, and the ask shrank once more.** The building list is derived
(`RE_town_buildings.md`) and the SIZES turn out to be irrelevant to the stream: the only
thing `|cells24|` can do is empty out, and it cannot. So a port needs the plot table, the
building COUNT and nothing else — which is what `rederive_townruin` runs on.

★ **And porting it re-read the decode, as the last three ports did.** Two corrections,
neither of which moved a draw count anywhere:

* the pack/patrol cell erasures are **not per building**. Phase 4 draws
  `buildings[rand() % size]` and then tests THAT building's cell list, so the counts have
  to be carried across the whole loop. Modelled per iteration it is still 35/35, because
  no list ever empties — a branch that cannot fire, which is exactly the family group B
  of the handoff is about. The port carries them globally and says why.
* `gate_town_ruin.py`'s one FED branch — `if dr[i][0] != PICK: break  # the cell list ran
  out` — is **provably dead**, not merely unobserved: minimum `|cells24|` is 3 and a
  building spends at most 2 pack picks plus 1 patrol pick.

## 10. What this leaves — the builder ledger, recounted over the CORRECTED body

Same span census as `RE_town_plaza.md` §9, re-run over both capture files with the upper
bound at `0x4f2b45`. The **draw** column is what the rig recorded, which is now known to
be short by the phase-4 block:

| span | sites | recorded draws | |
|---|---|---|---|
| scan/verdict `0x4e2a80`-`0x4e3093` | 3 | 3,310 | closed |
| promotion `0x4e3095`-`0x4e39e9` | 12 | 280 | closed |
| **`0x4e39ea`-`0x4e4fb3`** | **40** | **218** | **open** |
| role-6 yard `0x4e503a`-`0x4e5b9e` | 14 | 113,353 | closed |
| house pass `0x4e6520`-`0x4e74a5` | 13 | 17,947 | closed |
| house entity `0x4e74a5`-`0x4ea988` | 11 | 7,597 | closed |
| furnishing `0x4ead3a`-`0x4ecf20` | 13 | 8,717 | closed |
| surround `0x4ecfb5`-`0x4ed9ea` | 8 | 6,408 | closed |
| inhabitants `0x4eda0b`-`0x4edcbf` | 4 | 4,099 | closed |
| **`0x4eee4f`, `0x4ef03e`** | **2** | **45** | **open** |
| plaza `0x4ef248`-`0x4f0046` | 7 | 56,181 | closed |
| village NPC `0x4f0046`-`0x4f16b6` | 38 | 7,386 | closed |
| **this pass** `0x4f16bb`-`0x4f2b45` | **11 + 7 hidden** | **2,872** (+ 406 hidden) | closed |

**134 of the 176 firing sites, 228,150 of 228,413 recorded draws — 99.88%.** (The 07-28m
figure of 123 / 225,278 / 98.6% is superseded: this pass closes 11 recorded sites and adds
7 that no census could previously see.)

What is left in the whole town builder is **42 sites and 218 recorded draws**, and it is one
band plus two strays:

* **`0x4e39ea`-`0x4e4fb3`, 40 sites / 218 draws** — 6 draws each in 6 towns, and it has
  **20 `prop_push` and 20 settle sites** hanging off it, so unlike the last three stages it
  can be gated field by field. It is also where the kind-2/3/4/5 buildings and the village
  pass's flag-B list come from, so closing it closes two of `RE_town_npcs.md`'s five inputs.
* `0x4eee4f` (31 draws) and `0x4ef03e` (14) — `RE_town_plaza.md` §9 named these the
  role-0x14 / role-0x12 NPC spawns, and §6 above confirms the 31 from the other side: there
  are exactly 31 role-0x14 plots in the corpus.

**There is no large stage left in the town builder.**

## 11. Closed doors, recorded so they stay shut

* **The builder body does not end at `0x4f26e9`.** It ends at `0x4f2b45`. Ghidra's boundary,
  `RE_town_plaza.md` §0's "65,033-byte body" and `frida_town_props.py`'s `inTB` all carry the
  short one. The gate asserts the `ret 8` at `0x4f2b42` *and* asserts that `0x4f26e9` is not
  one, so the correction cannot quietly revert.
* **This stage emits nothing the rig hooks** — 0 records in `pushes`, `settles` and
  `spawncalls` across the whole span, asserted every run. Same as the village pass.
* **`site+0x18` is a usable total for a ruin and not for a village.** §5. Do not generalise
  either way without checking which stages the town's class actually runs.
* **`desc[0x1c]` arms 1, 2 and 4 never fire** in 42 ruins (only 0 ×23 and 3 ×12 do), and the
  `desc[0x18] ∉ {1,5}` arm is unreachable at all — the zone builder calls the town builder
  for feature type 1 or 5 only. Their tables are byte-derived and **live-unproven**; arm 4 is
  the one the dungeon corroborates. Said out loud because a green gate does not cover the
  worlds it never visited (lesson 9).
* **No species id here is live-observed.** No capture records this stage's spawn records —
  `+0x2c` is the model/appearance id (`RE_524540_creature_spawn.md`), a different namespace
  from `speciesGroupRange`'s, so the ids must not be checked against those tables. What is
  proven is the *structure* (both lists non-empty in every arm, observed 35 times through
  the `0x4f2275` / `0x4f26b3` guards) and the *agreement with the dungeon* on two arms.
* **Two of the seven hidden rand sites are `call edi`.** `0x4f26ab` caches
  `[__imp__rand]` in EDI. A census matching only `call dword ptr [0x5582f4]` finds five of
  seven and the arithmetic still looks self-consistent, because the gap is measured and not
  summed — the two would simply never be named.

## 12. Numbers

| | |
|---|---|
| span | `0x4f16bb`-`0x4f2b45` (the builder's own tail; its `ret 8` is at `0x4f2b42`) |
| rand sites | **18** — 11 recorded, **7 past the rig's filter** |
| recorded draws | **2,872** over 35 ruins |
| hidden draws | **406** (58 patrol firings × 7) |
| corpus | 92 towns = 50 villages + 42 ruins; 35 ruins reach the stage, 0 towns run both arms |
| buildings | 112 |
| entities | **677** — 31 guard, 224 quadrant, 364 pack, 58 patrol |
| gate | `gate_town_ruin.py`, **3,041 ok / 0 FAIL** |
