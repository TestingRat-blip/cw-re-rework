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

The **placement/selection** logic is pure RE even though rendering needs an engine
model-instance system:

- `FUN_004c8420` (the entity-record copy path) — currently `lib_fn_4c8420`; it is the Phase-12
  prop/decoration entity emitter. Small (133 B), 4 callers — start here.
- Trace its callers to the per-zone scatter that chooses which `.cub` prop, at what position,
  from the shared zone-scatter `rand()` stream (already proven for trees/knolls/mounds).

Deliverable: the prop/veg **placement** proven bit-exact (positions + model ids + rand draws)
against a live capture, even while the *rendering* stays a documented engine gap. This is the
biggest genuinely-remaining generation slice.

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

Still open in this phase:

- the chandelier at `0x507760` (`style == 3 && rand() % 10 == 0`) and the kind-4 entrance
  marker at `0x504832`;
- the loot/item generation *loop* earlier in the same cell body (the item **generator** it
  calls, `FUN_0052b470`, is ✅ DONE and gated -- `RE_52b470_item_generator.md`: a fixed
  26-candidate table plus a uniform pick, 450/450 candidates and 6/6 picks reproduced, and the
  server↔client twin map closed);
  ✅ its 26th candidate is gated too: `FUN_0052a760`'s coin flip and both sub-generators
  (`FUN_00528bf0` kinds 4-9 / `FUN_0052c4e0` kind 3) -- 18/18 invocations, 298 candidates,
  verified through the kind-moves-to-+0x08 mutation;
- the three per-dungeon inputs the boss block reads but does not compute: the dungeon `level`,
  the `[ebp-0x2bd4]` rarity byte, and the 2-entry species vector.

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
