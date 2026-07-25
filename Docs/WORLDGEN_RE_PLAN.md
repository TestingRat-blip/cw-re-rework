# Plan — finishing worldgen bit-exact

Objective (chosen 2026-07-23): complete the worldgen reverse-engineering to full byte-exact
generation, continuing the existing `cw_rederive` mission.

## Honest starting point: the algorithm is ~90% done

The deterministic generation is **already bit-exact** — 30 gates cover terrain height, value
noise, climate (temp/humidity/wetness), rivers, all surface colours, the feature grid,
dungeons (grid + boxes + decoration), towns (plot table), and the dense forest (trees +
per-write RGB). See `../../../docs/CW_RE_PORT_PLAN.md`. This plan is **not** re-doing that.

What's actually left splits three ways, and only one is tractable pure-RE:

| category | examples | verdict |
|---|---|---|
| **Tractable RE** | `524540` castle-arc/ceiling geometry; the `4c8420` prop-entity emit path; prop/veg placement selection; dungeon mob/spawn layer | **the work below** |
| **Engine-integration** | rendering prop/veg as model-instance entities; the loot data-model | needs engine systems, not function RE — out of scope here |
| **Design-blocked** | landform/lake tails, river-zone mat-38, town minH/maxH *values* | **CLOSED** — the region-cache scheduler makes the server non-self-consistent (`../../../docs/CW_REGIONCACHE_SCHEDULER.md`); faithful fallback is correct and final. Do not chase. |

The 84 functions the decomp tags `world/logic` are mostly **infrastructure** (STL containers,
serialisation, chunk/zone data management) — not generation math. They're a completeness
sweep (Phase 4), not the core.

## Phase 0 — triage & instrument — ✅ DONE (2026-07-23)

- **Indirect-call resolver — done** (`../tools/IndirectRefs.java`). For every function it
  collects all incoming references — direct calls, address-taken pointers in a function body
  (callbacks), and pointers held in data (vtables / dispatch tables) — and tags each by its
  containing symbol. `adjudicate_none.py` consumes it, so the "orphans" (0 *direct* callers)
  are now split by how they're actually reached:

  | of the 315 server / 620 client 0-direct-caller functions | server | client |
  |---|---|---|
  | vtable methods (real, called via a class vtable) | 75 | 145 |
  | dispatch-table handlers (real, fn-ptr tables) | 109 | 294 |
  | callbacks (address taken by another function) | 24 | 80 |
  | **true artifacts** (no incoming ref at all — EH/GS fragments, dead code) | **107** | **101** |

  So only ~1/3 of the "orphans" were artifacts; the rest are real indirect functions, now
  filed under their subsystem in `game_misc/_indirect_*` and `_artifacts` in the tree. Net
  effect on the genuine-logic review surface: **server 902 → 591, client 1,730 → 1,113.**

- **Oracle rig** — the Frida `cw_server_capture_rig` against a live `Server.exe` remains the
  ground truth for every gate below (`cw-server-capture-rig` note). Re-verify it runs before
  Phase 1.

## Phase 1 — creature spawn + behavior-tree builder (`FUN_00524540`)

**⚠ Scope correction (2026-07-23).** Scoping falsified the original premise. `FUN_00524540`
is **not** geometry — it writes **0 voxels**. It is the **creature/mob spawn builder**: 321
`Spawn` references, constructs the full behaviour tree per spawn (Combat / Sequential /
WalkPath / LookAtPlayer), 33 `rand()` draws, dispatched 16 ways on `param_5` = creature type
(0–0xf). The long-contested "castle-arc wall stamps" label is now firmly falsified. And the
dungeon *geometry* (grid + boxes + decoration) is already bit-exact — **there is no clean
"deterministic geometry" left to be Phase 1**; the remaining worldgen work is the entity
layers. So this becomes the primary target, scoped honestly:

| aspect | reality |
|---|---|
| nature | stateful entity construction (Spawn + 4 behaviour types), not pure math |
| dispatch | 16-way on creature type (`param_5` 0–0xf) — RE per type |
| RNG | 33 `rand()` draws → gate via the proven zone rand stream |
| verify | **live-capture spawn gate** (positions + types + behaviours + rand draws), **not** reccmp — too stateful for a clean byte-match |
| size | 15.8 KB, 10 params — a substantial target, not a quick win |

Approach:
1. **Structure map — ✅ DONE** (type-1 / base path). Full static decode in
   `RE_524540_creature_spawn.md`: signature, the `Spawn` record it writes (position, type
   byte `+0x28`, model byte `+0x2c`, facing `(2-orient)·90°`, equipment `+0x54`), the shared
   behaviour tree `Sequential{Combat(20), LookAtPlayer, WalkPath(2)}`, and the 33 `rand()`
   draw sites. Four callees identified (`addChild`, `setPath`, vec-copy, `ItemData_copy`).
2. Relabelled: **`creature_spawn_builder`**, kind game (was `lib_fn_524540`).
3. ▶ **Gate (next, needs live rig)** — hook the spawn emit on a `Server.exe` dungeon build and
   match type-1 records (position + type bytes + behaviour ids + the 33-draw rand sequence)
   ab-initio from the zone seed.
4. ▶ Then the type deltas (7/10/0xd/0xe/0xf), then port to `cw_rederive`.

Because it's the mob layer, this also *is* the old "Phase 3" — the plan collapses: geometry
is done, so the entity layers (this + props) are the whole remaining job.

## Phase 2 — prop / vegetation entity placement (Phase 12 of the port plan)

⚠ **This phase's original premise was wrong and is retired.** It said to start at
`FUN_004c8420`, "the Phase-12 prop/decoration entity emitter". `004c8420` is
`DungeonProp_copy_0x188` — the record's copy ctor, relabelled while doing the dungeon lights.

**Re-scoped 2026-07-24 by a caller census (`RE_zone_props.md`).** Every prop in the game is a
0x188 record pushed by `FUN_004d6670` and built by `FUN_004c84b0`; their combined caller list is
nine sites and covers the whole game. Six are already done (dungeon assembler ×2, mob pass), so
the remaining prop work is exactly **two subsystems**:

- **the zone builder** — four emit sites in `FUN_00518630`'s body (`0x51cd1e` → `FUN_004e0740`,
  plus inline emitters at `0x51dbf5` / `0x51e796` / `0x51fcdb`);
- **the town builder** — `004e310a`, `004eaa7a`, `004ee3aa`.

⚠ **Both bracketed claims above are superseded**, and so is the first cut's "exactly one prop
per zone" (an artifact of hooking the out-of-line `push_back` — an odd zone carries 0–5). The
census that holds is over `FUN_004ce8e0` (`PropVector_reserve`), which an inlined `push_back`
still has to call; it turns up a **fifth** emitter, `FUN_005104e0`. The town builder's three
"emitters" are alignment NOPs, not functions at all — its real surface is 56 push sites.

Done since, each gated against live captures:

| slice | doc | coverage |
|---|---|---|
| the zone builder's two parity emitters (`(zx+zz)&1` at `0x51cb66`), + `Prop_settleOnTerrain` | `RE_zone_props.md` | 7,256 checks / 56 zones |
| `FUN_005104e0` = `camp_populator`, the overworld encampment builder | `RE_5104e0_camp.md` | 2,742 checks / 99 zones |
| the town builder's prop layer, then its plot lattice → promotion → role-2 house → 3×3 modules → the 13-block prop lattice | `RE_town_props.md` | 8,646+ checks / 67 towns |
| the **candidate grid** the camp populator is handed (`0x51e839`-`0x51eab5`) | `RE_zone_grid.md` | 8,308 checks / 51 zones |
| emitters **A** and **C** — the runestone circle and the village street light | `RE_zone_emitters_ac.md` | 148 zones |

Reading A and C's gates statically (rather than sweeping for them) is what found them: both
key off the region's **per-zone site-kind grid** — `region + idx*16 + 0x18`,
`idx = (zx%64)*64 + (zz%64)`, 4096 entries — where kind **1 = town** (a 2×2 block),
**3 = dungeon** (16 per region; the six holdout dungeon zones are 6/6) and **4 = runestone
circle** (4–5 per region). At 0.1% of zones, emitter A was never going to turn up in a
512-zone sweep.

| the **site-kind grid** those two gate on, derived from the seed | `RE_site_kind_grid.md` | 590 checks / 118 regions |

| the prop **ids** themselves, from the client's own type→model table | `RE_prop_ids.md` | 75 of 78 slots |

**PHASE 2 IS CLOSED.** No emitter open, no captured input, no unnamed id. The site-kind grid
turned out to be a product of `FUN_0050e080` (which `cw_featuregen` already ports bit-exact),
and the prop ids come from a client init block that names 75 of the 78 static-prop slots.
The only follow-up is engine-side: regenerating `assets/props/prop_ids.json` from the proven
table (3 of its rows are wrong, 38 ids missing).

Deliverable unchanged: the prop/veg **placement** proven bit-exact (positions + model ids + rand
draws) against a live capture, while *rendering* stays a documented engine gap.

## Phase 3 — dungeon entity / mob layer (Milestone 3)

**Mob placement — ✅ DONE, gated bit-exact (`RE_50702a_mob_populator.md`).** The pass lives at
`0x507401`–`0x50775a` inside the dungeon assembler `FUN_00500300` (what was filed as
`FUN_0050702a` is an alignment NOP, not a function — there is no dispatcher and no jumptable).
It walks the 22×22×22 cell grid `I→J→K`; each kind-3 room cell with nothing above it and solid
terrain overhead probes its 4 horizontal neighbours, and every neighbour that is not a room
cell places one mob facing it. The 4 `524540` call sites are those 4 directions
(orient 0/2/3/1), not 4 categories. **Zero `rand()` draws** — the layer is deterministic.
Gate: **6 dungeons, 4 styles, 3 rotations, both mirror states — 1,350/1,350 qualifying cells
and 1,122/1,122 spawns** reproduced ab-initio (`tools/gate_50702a_mobs.py --all`).

The one non-grid input, the terrain probe at `0x5074a1`, is **also derived** (757/757, all 6
rejects included). It reduces to a single material test — all three of `FUN_00405fd0`'s
"no block" returns are permanently zero, so out-of-column is always a reject — and it reads the
dungeon's own stamped ceiling, which is already final when the pass runs (re-reading every
probed coordinate at `asmLeave` returns 170/170 identical). So the layer needs no captured
booleans and no assembly-order state.

**Boss spawn — ✅ DONE, gated (same doc).** The `cell.flags & 4` block at `0x5078b3` fires on
exactly one kind-3 cell per dungeon and builds a 0x10f0-byte `cube::Spawn` with a
`CombatBehavior` and an equipment roll. Derived: the flag cell (from the grid), the position,
every deterministic field, and both of its `rand()` draws (species pick, extra-item count) —
**6/6 on every check across the 6 dungeons**. Its position needs float32 rounding reproduced:
`FUN_00402a10` is a float→16.16 converter whose `mulss` the decompiler drops, and the `+4.5f`
is lost to float32 at world scale — computing in double is half a block off, 6/6.

**Light sources — ✅ DONE, gated (`RE_dungeon_lights.md`).** The torch (kind 7, 1-in-40) and
the wall stub (kind 4, four directions) are records in the prop vector at `site+0xc`. Torch
placement is fully derivable from the cell grid (663/663 gate cells) and its three draws
reproduce every record field (18/18); all 280 stubs are confirmed coin+neighbour candidates
with exact records. Correction worth carrying: the `+0x24` triple that looks like an RGB colour
is a **size** — the server stores no light colour or radius at all.

**Furniture scatter — ✅ DONE, gated (`RE_52a830_scatter.md`).** The nine remaining ids in the
`site+0xc` prop vector all come from `FUN_0052a830`: 1-in-50 chest, else `rand()%3` over
shelf / table / stool with the family chosen by dungeon style. **196/196 records** reproduced
(id, size, draw count). Confirms RatForge's `dungeonPropModelName` table from the binary's own
arithmetic — and exposes a gap in it: **id `0x0f`, the style-4 stool, is missing**, which will
trip `runDungeonTest`'s unresolved-prop check.

**Wall decor — ✅ DONE, gated (`RE_52c370_wall_decor.md`).** `FUN_0052c370` fills the
assembler's *second* decoration container, the `std::list` at `site+4`. **108/108** records
reproduced on id, scale, flag, draw count and position — including the style-0 coin-even branch
that raises the record by exactly 2.0, decoded then confirmed 9/9. Extends RatForge's "id 0x30
for style 3" note to all six styles.

**Hanging decor — ✅ DONE, gated (`RE_hanging_decor.md`).** The liana (`0x37`), cobwebs
(`0x39`/`0x3a`) and chandelier (`0x38`) — **160/160** records on id, thickness, angle, scale,
flag and position. **`site+4` is now complete: all six of its emitters are modelled**, and with
`site+0xc` both of the assembler's decoration containers are reproducible.

**Loot pass — ✅ DONE, gated (`RE_dungeon_loot.md`).** Chest fills (`rand()%4+1` items from
`FUN_0052b470` at rank `rankByte+1`) and the scattered ground loot (1-in-10 per prop footprint
cell, then a common 4-way / rare 6-way table including a `powf`-based coin). **48/48 ground
items and 4/4 chest fills**, with the chest counts cross-checked against the independent
`itemgen_capture` run. **With this every emitter the dungeon assembler feeds is reproducible.**

**Markers, the stub probe and the species vector — ✅ ALL DONE, gated
(`RE_dungeon_markers.md`).** The three items this list used to hold open:

- **`site+0x48`, a fourth container** nobody had looked at. Exactly two pushes per dungeon:
  the kind-4 **entrance** marker (type 5, `0x5048c7`) and the **boss** marker (type 6,
  `0x507aa0`). The entrance record is derived from the cell grid alone — position
  `(baseX+I*10+5, baseY+J*10+5, baseZ+K*10)`, note **no `+5` on Z** — 6/6 on every field; the
  boss marker adds nothing the boss gate does not already produce. **12/12.**
- **The stub's third gate**, the probe at points off the 10-unit lattice. New rig
  `tools/frida_dungeon_marker.py` samples the finished world at all four probe points of every
  cell. It is **order-free** (480/480 unchanged at `asmLeave`) and reduces to the mob pass's
  material test, `(block[3] & 0x1f) ∉ {0,2}` — **480/480 verdicts derived**, so
  `gate_dungeon_lights.py` now predicts the whole **stub set (280) in emit order**, not just
  the records of the stubs that were emitted.
- **The boss species vector**, which needed no capture at all: it is a four-way jump table on
  `style-1` in the assembler's prologue (`0x5003d3` → `0x509d80`). Styles 1 and 2 share an arm;
  style 5's pair is stored descending. **6/6.**

The chandelier at `0x507760` was already gated in `RE_hanging_decor.md` — that bullet was stale.

The loot/item generation loop is ✅ DONE and gated (`RE_52b470_item_generator.md`: a fixed
26-candidate table plus a uniform pick, 450/450 candidates and 6/6 picks, and the server↔client
twin map closed), as is its 26th candidate — `FUN_0052a760`'s coin flip and both sub-generators
(`FUN_00528bf0` kinds 4-9 / `FUN_0052c4e0` kind 3), 18/18 invocations, 298 candidates, verified
through the kind-moves-to-+0x08 mutation.

**Creature species — ✅ DONE, gated + ported (`RE_dungeon_species.md`).** The `[ebp-0x2bf4]`
group container and the `[ebp-0x2be8]` flat vector are both prologue products of the *same*
jump table. The whole assembler has exactly **three** `operator[]` sites — boss, patrol,
companion — which is what proves the coverage. Derived 6/6, with 32 patrol + 51 companion
species each indexed out of its own group. Two findings a port needs: styles 1/2 spend a
prologue `rand()%3` on their second group's id, and an **empty `list1` skips the companion
block *including* its count draw**. Both are now in `cwDungeonSpecies`; `rederive_dundecor`
stays 52/52 and the hash is unchanged.

⚠ It also **falsifies this plan's own earlier guess**: the mob pass reads neither container.
`[ebp-0x374]` is an all-zero int4 (a vec4 float store plus a `cvttss2si`), not a species list.
Mob species is `FUN_00524540`'s `param_5` model byte — a spawn-builder property, not a
per-dungeon one.

**The "stub occlusion port gap" was not a gap — RETRACTED (2026-07-24).** The claim that 79 of
84 rejects are the dungeon's own stone is false: `(200,200,200, class 1)` is a *global*
underground-rock material (it is byte-identical in style-3, style-1 and style-0 dungeons, which
no per-dungeon palette can be), and the probe sits one block beyond the 14³ core shell's
overhang into a kind-0 cell that is never stamped. Evaluating the probe against the assembled
box list was implemented and measured — **identical on 305 candidates across styles 0/1/3** —
then reverted. Driving `cw_height.surf_height` directly, `z <= surfH + 1` reproduces
**476/480** live verdicts, which is exactly RatForge's existing `terr()` test; the 4 residuals
are one cell cluster reading a white class-0 block (a known separately-unverified water class).
The gate now prints that number every run, and `--dungeontest` sweeps all six styles reporting
stub candidates vs kept.

Nothing in this phase is open.

**Level + rarity byte — ✅ DONE, gated 6/6 ab-initio (`RE_dungeon_level_rank.md`).** The last
open input, the `counter` feeding `monster_level_formula`, is the **Pass-3 candidate loop index**
`[esp+0x28]` (`0x50ea0e` → `0x50f27c`). Even iterations pop a candidate; `(counter>>1)&1` is the
dungeon branch, so a dungeon only ever sits at `counter ≡ 2 (mod 4)` and every level pins to a
unique counter — a region has at most 16 dungeons on a fixed level ladder
`1,3,4,6,8,11,14,18,23,30,39,52,72,109,194,621`. Both ports already computed the value
(`_sub_count(idx)` / `cellLevel(k)`) and discarded it. `tools/gate_dungeon_counter.py`
reproduces **level 6/6 and rank 6/6** exactly from the seed alone.

AI *behaviour* stays a separate track (the Behavior classes are already RTTI-recovered).

## Phase 4 — infrastructure completeness sweep

The ~84 `world/logic` data-management functions (chunk/zone containers, serialisation, the
`map/set<T>` and `BINARY`/hash-keyed storage). Low RE value but finishes the subsystem:

- Name them by role using `../tools/adjudicate_none.py` output + caller context.
- These don't need gates — they're plumbing. Goal is coverage, not byte-exactness.

## Methodology (per target)

1. **Read** the typed decompile (struct types are applied) + caller/callee/string context.
2. **Reconstruct** — Python first (fits the `cw_rederive` toolkit), C where a byte-match is wanted.
3. **Verify**:
   - pure/deterministic → **reccmp byte-match** (`../reccmp/compare.py`) *and/or* a
     write-sequence gate vs a live `Server.exe` capture;
   - stateful/placement → live-capture gate on positions + rand draws.
4. **Record** — relabel in the ledger, add the gate, update the port-plan matrix.

## What "done" means

- Phase 1–3 gated bit-exact → the *generatable* world (geometry + deterministic placement) is
  complete; the only remaining gaps are the two engine-integration items (prop/loot rendering)
  and the design-blocked region-cache classes, both already understood and documented.
- Phase 4 → every `world/` function named, no `Unsorted` worldgen residue.

## Suggested order

`Phase 0 → Phase 1 (524540) → Phase 2 (prop placement) → Phase 3 (dungeon mobs) → Phase 4`.
Phase 1 is the cleanest win and exercises reccmp on a big function; Phase 2 is the largest
genuinely-new slice. Each phase is independently shippable.


## Ported into cw_rederive (2026-07-24)

The item/loot layer is now in the engine port, not just the RE tree. RatForge commit
`046af58`:

- **`src/worldgen/cw/CwItemGen.h`** — `CwItem` and the five generators (`52bf40`, `528bf0`,
  `52c4e0`, `52a760`, `52b470`) producing real values while consuming the identical stream.
  The decoration walk previously modelled them as draw counts only.
- **Gate `rederive_itemgen` — 492/492.** The golden carries the recorded rand values of the
  18 live invocations and the gate drives the generator with a replay rand, so the port is
  checked against live data rather than against a re-implementation of itself.
- **The walk emits loot**: chest `contents`, the boss's `item`, and a new
  `DunPropKind::GroundItem` per scattered floor item.
- **`dungeonPropModelName(0x0f)`** added — the style-4 stool id this RE found missing.

`rederive_dundecor` stayed **52/52** and the output hash stayed **AB6C2A00E6BF77A4** across
the change: values added, no draw moved. `--dungeontest` passes and now reports the loot.

**`dunLevel` / `dunRank` are now fed (2026-07-24).** They were the one gap left above. Both come
straight off the feature cell that placed the dungeon: `FeatureCell::level` (the Loop-C slot
level, newly kept) and `FeatureCell::subtype` (which for a dungeon cell *is* the rarity byte).
Threaded through `DungeonSite` → `buildDungeon` → `dungeonDecorWalk`. Neither can change a draw
count, so `rederive_dundecor` stays 52/52, `rederive_itemgen` 492/492 and the hash stays
`AB6C2A00E6BF77A4`; `--dungeontest` reports level 52 / rank 3 for the dungeon near spawn.
