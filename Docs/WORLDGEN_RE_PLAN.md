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
1. **Structure map** — decode the `param_5` 16-way switch: which creature type → which
   behaviour-tree shape + stat block. Start with one type (e.g. `param_5==1`) end-to-end.
2. **Spawn-record model** — reverse the `Spawn` struct fields written (position, type,
   behaviour chain, `+0x28` stat byte seen in the dispatch) — `RecoverStructs` already
   applied a `Spawn` layout; extend it here.
3. **Gate** — hook the spawn emit on a live `Server.exe` dungeon build and match the emitted
   Spawn records (type + position + behaviour ids + the 33-draw rand sequence) ab-initio.
4. Relabel in the ledger: `creature_spawn_builder`, kind **game** (currently `lib_fn_524540`).

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

Spawns, AI hookup, and light emission inside dungeons — the functions that populate the
already-exact geometry:

- Find the spawn/mob emitter (entity records written during dungeon assembly), the light-source
  placement, and the boss/chest special cases.
- Verify placement against a live capture (positions + types + rand stream). AI *behaviour* is
  a separate track (the Behavior classes are already RTTI-recovered) — scope this to *placement*.

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
