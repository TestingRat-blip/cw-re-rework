# Handoff prompt — continue the Cube World alpha RE

Copy everything below the line into a fresh Claude Code session.

---

You are continuing a reverse-engineering project on **Cube World alpha** (2013, `Cube.exe`
client + `Server.exe` dedicated server). Read this whole prompt before acting, then start on
"YOUR TASK" at the end.

## Where everything is

- **Game install:** `C:\Users\asuna\Desktop\RatRealms\CubegameV1\` (`Cube.exe`, `Server.exe`,
  `data*.db`). Not a git repo.
- **Parent project:** `...\CubegameV1\RatForge\` — a from-scratch Vulkan voxel engine + years
  of prior CW reverse-engineering (`RatForge\docs\`, `RatForge\tools\`). It IS a git repo
  (branch `master`).
- **THE WORK YOU CONTINUE:** `...\RatForge\tools\cw_decomp\` — a **standalone git repo**,
  public at **https://github.com/TestingRat-blip/cw-re-rework** (branch `master`, last commit
  `cb32c30`). Everything below lives here unless stated.

**Read first, in this order:** `README.md` (the whole attempt), `Docs/PIPELINE.md` (every tool
+ why), `Docs/WORLDGEN_RE_PLAN.md` (the current objective — Phases 1-3 are closed, Phase 4 is
not), then the "Where we are right now" table at the end of this file and whichever
`Docs/RE_*.md` it points at for the slice you are picking up.

## What this project is

A fresh, provenance-tracked decompilation of both binaries (19,279 functions) into an
organised tree (`cube/`, `server/`) mirroring the third-party `RatForge\tools\Source_check`
tree so the two diff file-for-file. **Every function carries an `attributed_by` column** in
`<binary>/attribution.tsv` recording *how* its identity was decided — a heuristic guess is
never presented as proven fact. Current state:

| | identified | skippable | indirect/glance | **genuine logic left** |
|---|---|---|---|---|
| Server.exe (6,268) | 5,005 | 215 | 480 | **568** |
| Cube.exe (13,011) | 10,468 | 321 | 1,114 | **1,108** |

## Ground truth you must not re-derive

- **Toolchain: MSVC 11.0 (VS2012), compiler build 17.00.51106 (Update 1), x86,
  `/O2 /Oy- /arch:SSE2 /fp:precise`.** Proven from Rich headers, `VC_FEATURE` records,
  CodeView PDB paths (`C:\Users\funck\Projects\Cube\OptimizedXP\`), and the shipped redists.
- The game imports **only the `_precise` `__libm_sse2_*` trig** → `/fp:precise`. Ports must
  match precise routines, never fast-math.
- **Deterministic worldgen is already bit-exact** (30 gates: terrain, noise, climate, rivers,
  colours, features, dungeon grid/boxes/decoration, towns, forest). Do NOT redo it.
- **Region-cache-scheduler-blocked classes are CLOSED** (`RatForge\docs\CW_REGIONCACHE_SCHEDULER.md`):
  the server is not self-consistent, so landform/lake tails + town minH/maxH *values* are
  ill-defined. Faithful fallback is correct and final — don't chase.

## Tooling (all in `tools/`, all re-runnable)

**Ghidra 12.1.2** at `C:\tools\ghidra_12.1.2_PUBLIC`. Projects are **gitignored but on disk**:
`ghidra/` (Cube.exe), `ghidra_srv/` (Server.exe), `ghidra_crt/` (the 3 CRT DLLs with PDBs
applied). They are copies — **never mutate `RatForge\tools\ghidra_proj\CubeAudit`**.

| tool | purpose |
|---|---|
| `MetaDump.java` | per-function metadata → `raw/<prog>.meta.jsonl` (callers/callees/strings/proto) |
| `DecompDump.java` | bulk decompile → `raw/<prog>.decomp.jsonl`. Args: `<out> [threads] [limit] [timeoutSec] [addr...]`; `@members` = only RTTI-class members |
| `IndirectRefs.java` | resolves the **indirect** call graph (vtables, dispatch tables, callbacks) |
| `RecoverStructs.java` | struct layouts from usage (`dry`/`apply`) |
| `ApplyPdb.java` / `DumpCrtFuncs.java` | apply CRT PDBs / dump their symbols |
| `harvest_labels.py` | consolidate proven identities → `raw/labels.json` |
| `structure.py` | emit the trees + `attribution.tsv` |
| `flirt_islands.py` | carve static SQLite/FreeType by linker block |
| `adjudicate_none.py` | classify unattributed functions by structural role |
| `final_adjudication*.py` | settled identities (has a `DEEP_RE` dict — add new IDs there) |
| `frida_spawn_capture.py` | live overworld spawn capture |
| `frida_dungeon_spawn.py` | **live dungeon capture** (the important one, see below) |
| `frida_dungeon_marker.py` | `site+0x48` markers + the stub's off-lattice terrain probe |
| `frida_dungeon_patrol.py` | the two creature-species containers + every species they hand out |
| `frida_zone_props.py` | the OVERWORLD prop scatter; sweeps many zones in one server run |
| `frida_zone_grid.py` | the camp populator's CANDIDATE GRID inside the zone builder |
| `frida_zone_ac.py` | zone emitters A/C; `--scan` dumps a region's per-zone SITE-KIND grid |
| `extract_prop_models.py` | the client's type→model tables for BOTH static-entity namespaces |
| `reccmp/compare.py` | byte-match a recompile vs the shipped code |

**⚠ Pipeline is a fixpoint — run in this order after any change:**
```
python tools/harvest_labels.py
python tools/structure.py        # writes attribution.tsv
python tools/flirt_islands.py    # reads it, writes libislands.json
python tools/adjudicate_none.py  # reads it, writes none_roles.json
python tools/structure.py        # final emit
```
Running out of order silently empties the islands/roles (it oscillates).

## Live capture setup (WORKING — this is valuable)

- **frida-python 17.15.3** installed. Sandboxes under `C:\Users\asuna\AppData\Local\Temp\cw_re\`:
  `sandbox_42069` (seed 42069), `server_sandbox3` (seed 444444).
- **The dungeon recipe** (`frida_dungeon_spawn.py`) — this is the hard-won part:
  spawn `sandbox_42069\Server.exe` headless, get `world` from `ecx` at RVA `0xd83a0`,
  **stub `0x149550` and `0xd78e0` (the region-cache scheduler) with no-op NativeCallbacks**,
  then force-build the known dungeon zone `(32795, 32796)` via
  `zone_builder = NativeFunction(base+0x118630, 'void', ['pointer','uint32','uint32'], 'thiscall')`.
  Without those stubs a bare `zb()` builds terrain only and **no dungeon generates**.
  Scope hooks to the gen thread (`genTid`) and use `os._exit(0)` at the end.
- Key RVAs: `World_ctor 0xc8570`, `seed/world 0xd83a0`, `zone_builder 0x118630`,
  `writeVoxel 0x1ff00`, `dungeon_assembler 0x100300` (body runs to `0x10931c`),
  `creature_spawn_builder 0x124540`, `dungeon mob pass 0x107401-0x10775a`.
- Captured data already on disk: `raw/dungeon_grid_capture*.json` (6 dungeons: full 22x22x22
  cell grid + every mob-pass cell + 1,122 spawns), `raw/dungeon_spawn_capture.json` (the
  original 137), `raw/spawn_capture.json` (6,305 overworld spawns),
  `raw/dungeon_props_capture*.json` / `_site_` / `_boss_` / `_itemgen_`, and
  `raw/dungeon_marker_capture*.json` (the `site+0x48` markers + the stub probe, with the
  finished world sampled at all four off-lattice probe points of every cell).
- **Six known dungeon zones**, all reachable with the recipe above:
  `(32795,32796)` style 3, `(32796,32787)` style 0, `(32780,32788)` style 1,
  `(32804,32788)` style 3, `(32804,32811)` style 2, `(32787,32796)` style 2.

## VS2012 toolchain + byte-matching (works)

- Standalone RTM compiler at `..\msvc_vs2012_rtm\compiler_bin\cl.exe` (17.00.50727, runs in
  place, needs its `1033\clui.dll`). Headers/libs in `..\msvc_vs2012_rtm\vc11_librarycore86\`.
- **Run it from PowerShell, not MSYS/Git-bash** — MSYS mangles `/nologo` into a path.
- `cl /nologo /c /O2 /Oy- /arch:SSE2 /fp:precise /Fa x.c` then `python reccmp/compare.py x`.
- Two functions byte-match **100%** (`formula_inverse`, `falloffSquared`). We have RTM (50727),
  the game is Update 1 (51106) — **no codegen difference has ever been found**; don't chase
  Update 1 (see `Docs/UPDATE1_INVESTIGATION.md`; you cannot rebuild one compiler build from
  another).

## Hard-won lessons — internalise these

1. **Rule out your own source/flags before blaming the compiler.** A "RTM vs Update 1 codegen
   gap" turned out to be my reconstruction writing `if (0<f)` instead of the decompiler's
   `if (f<=0)`. Fixing the source gave a 100% match.
2. **Live capture has corrected static reads three times.** Trust the binary over the
   decompiler's pseudo-C.
2b. **A captured byte is data; what it *means* is still a guess until you test it.** Two
   retractions in one session came from reading semantics off raw values: a uniform grey
   `(200,200,200)` read as "the dungeon's own palette stone" (it is global underground rock —
   one `Counter` across three differently-styled dungeons kills it), and a pointer passed
   next to a spawn call read as "the species list" (twelve instructions of its callee show a
   vec4 float store). Both cost a wrong "port gap" in a doc. **Before writing a finding down,
   name the cheapest observation that would falsify it and make it.**
3. **Ghidra collapses `/GS` function bodies** to just the security-cookie epilogue — `0x522cc0`
   looked like a stub but is a 16.16 fixed-point distance. Check raw bytes when a body looks
   too short for its size.
4. **Big functions need a 600s decompiler timeout**, not the 60s default — the four "failures"
   were the zone/town/dungeon builders and the `.cub` loader.
5. **`analyzeHeadless` splits script args on commas** — pass address lists as separate args.
6. **0 direct callers ≠ artifact — and ≠ a function.** Vtable slots and dispatch-table targets
   look like orphans; `IndirectRefs.java` catches those. But a zero-reference "function" may be
   no function at all: **90 of Server.exe's 129 zero-reference functions start on an MSVC
   alignment NOP inside a bigger body** (`tools/nop_split_audit.py`). `0050702a` was one — the
   bytes there are `8d 9b 00 00 00 00`, jumped over by an `eb 06` at `0x507028`, inside the
   dungeon assembler. Check the entry bytes before believing a function boundary. (Cube.exe
   has 0 of these; its orphans are real functions.)
8. **`unaff_EBP` in a decompile means the frame belongs to someone else** — that is a function
   boundary error, not an exotic calling convention.
9. **When Ghidra warns it cannot track the stack, read the disassembly for loop induction
   variables.** In the mob pass the decompiled C aliased `K` and `K+1` onto one name and made
   the qualification test unreadable; twelve lines of disassembly settled it.
10. **Check the existing port before doing new RE.** The `counter` feeding the level formula
   was documented as "must arrive by another route" because the decompile showed only a
   `= 0` store. It was the loop's induction variable — the decompiler had merged that stack
   slot with two unrelated reuses of it, so its increment read as belonging to something else.
   Twenty lines of disassembly at the *loop tail* settled it, and **both ports were already
   computing the value** (`_sub_count(idx)` / `cellLevel(k)`) and discarding it. When a value
   lives inside a function that is already bit-exact, the answer is in the port, not the binary.
11. **A hook that reads a float mid-expression can CHANGE the value it reads.** Frida's ia32
   Interceptor preserves neither x87 nor SSE state. Hooking `0x51e913`/`0x51e926` — inside live
   `xmm0` and mid-way through `0x52c820`'s x87 result — returned a *constant* 2.74e21 weight and
   zero candidates for a zone that really keeps 22. The tell was uniformity across 39 different
   positions; the falsifier was one command, running the already-ported function on the same
   inputs. **Hook where the values are spilled to the frame** (here `rand()`'s own entry, where
   EBP is still the caller's). Related: never `Interceptor.attach` `FUN_00406100` — the hottest
   function in a zone build; it stalled one zone past 13 minutes.
12. **When you mirror a game loop in a checker, mirror the BRANCH, not your idea of it.** The
   column run-walk's `jge` at `0x51fa92` makes the LAST block always qualify, reading the class
   at index `count` — one past the counted extent. Modelling it `k < n-1` undercounted by 3–18
   per town and failed the gate. (Mirroring an out-of-range read can also *fault* under Frida
   where the game survives on allocation slack — guard it.)
13. **A thiscall table read from the decompile can be two tables.** The client's prop
   type→model init block fills TWO `vector<VoxelModel*>`s; the implicit `this` makes both print
   as a bare `vector_at_stride4(type)`, so every low type looks assigned twice and taking either
   the first or the last value is wrong for a different half of the range. Only the
   `lea ecx, [ebx + …]` separates them. **Census by byte-scanning the image when a decompile
   pattern search comes up short** — the six site-kind stores were found that way after a text
   search over the decompile missed one entirely.
14. **A spatial pattern read off ONE sample is a hypothesis, not a rule.** "Kind 1 is always a
   2×2 block of zones" survived one region and died on the next (it is the top four of 64 by
   *warped* falloff, and the town's own centre zone often is not among them). That is the second
   manufactured stencil in this project — see also the nearest-neighbour "fence group" in
   `RE_town_props.md`. Test on the next sample before writing it down.
15. **Regenerating an asset can silently delete content if a hardcoded consumer disagrees.**
   `dungeonPropModelName` carried `chest-base` where the `.cub` is `chest-base02`; it resolved
   only because the old map propagated the same wrong name into the pack. Diff every hardcoded
   consumer against the new source *before* rebuilding.

7. **Both label sources are unreliable in opposite directions**: `CW_CONFIDENCE_XREF.md` had an
   off-by-one that filed proven worldgen as `lib_fn_*` (16 rows fixed); `cw_callgraph.py` gives
   game names to STL primitives. Always verify against the body.

## Working style expected

Verify before claiming; report failures with the evidence; correct your own earlier statements
plainly when the data contradicts them (this happened repeatedly and is normal here). Keep
everything logged: update the relevant `Docs/*.md`, add settled identities to the `DEEP_RE`
dict in `final_adjudication.py`, re-run the pipeline, and **git commit + push to the public
repo** after each meaningful step.

## Where we are right now

Objective: **finish "populated worldgen"**. The deterministic geometry was already bit-exact;
this year's work has been the **entity / prop layer**, and as of 2026-07-25 that layer is
closed — every emitter RE'd, every gate green, nothing captured that cannot be derived.

| layer | doc | gate coverage |
|---|---|---|
| `FUN_00524540` = `creature_spawn_builder` (0 `rand()` for type 0) | `RE_524540_creature_spawn.md` | 6,442 live spawns |
| the dungeon mob pass (`0x507401`-`0x50775a`; `FUN_0050702a` is an alignment NOP, not a function) | `RE_50702a_mob_populator.md` | 1,350 cells / 1,122 spawns |
| the rest of the dungeon entity layer — boss, lights, scatter, wall decor, loot, markers, species, level/rank | `RE_dungeon_*.md`, `RE_52*.md` | 9 gates, 6 dungeons |
| the overworld prop scatter + `Prop_settleOnTerrain` | `RE_zone_props.md` | 7,256 / 56 zones |
| `FUN_005104e0` = `camp_populator` (overworld encampments) | `RE_5104e0_camp.md` | 2,742 / 99 zones |
| the town prop chain: plot lattice → promotion → role-2 house → 3×3 modules → 13-block lattice | `RE_town_props.md` | 8,646+ / 67 towns |
| the camp populator's **candidate grid** | `RE_zone_grid.md` | 16,250 / 99 zones |
| zone emitters **A** (runestone circle) + **C** (village street light) | `RE_zone_emitters_ac.md` | 3,937 / 256 zones |
| the per-zone **site-kind grid**, from the seed | `RE_site_kind_grid.md` | 590 / 118 regions |
| the **prop-id table**, from the client's own init block | `RE_prop_ids.md` | 75 of 78 slots |

Two structural facts worth carrying:

- **The region's per-zone SITE-KIND grid** (`region + idx*16 + 0x18`,
  `idx = (zx%64)*64 + (zz%64)`, 4096 entries) is what the zone builder gates its site
  branches on — **1 = town, 3 = dungeon, 4 = runestone circle** — and it is a product of
  `FUN_0050e080`, the feature generator `cw_featuregen` already ports bit-exact.
- **There are two static-entity namespaces**, not one: `world+0x800718` (vegetation / wall
  decor, the "hanging" ids) and `world+0x800724` (the props proper, 78 slots).

## YOUR TASK

**The next slice is a PORT, not new RE.** Everything below is already gated in this repo; none
of it needs another capture session.

1. **Port the overworld/town PROP PLACEMENT into `cwgen`.** `CwPropEmit` (gate
   `rederive_props` 9273/9273) is only the emitter *library* — `--proptest` says so out loud:
   *"placement = the town/dungeon driver"*. What is missing is **which emitter fires where**:
   * the `(zx + zz) & 1` parity split at `0x51cb66`, `FUN_004e0740`'s two stages, and
     `Prop_settleOnTerrain` (a pure function of finished terrain — no captured state);
   * `camp_populator` + its candidate grid (the grid is pure arithmetic plus one `rand()` per
     qualifying cell — 39 per firing zone, always);
   * the town chain (its **plot heights are region-cache-blocked**, so the verdict rule is
     statable but not seed-reproducible — port what is derivable and stop there);
   * emitters A and C, and the site-kind grid they gate on.
   Suggested order: site-kind grid → A (simplest, 1 record/zone) → the parity emitters →
   camp → C → town. Each has a `gate_*.py` here to check the port against.
2. **Port the dungeon mob pass + boss spawn + light sources** into `cw_rederive`/`cwgen`. All
   gated; all pure functions of the finished dungeon voxel stamp, which the port already
   produces bit-exact — no captured booleans, no order state. Then the engine half of **light
   emission** (rendering kind-7 / kind-4 records as actual lights), which is RatForge work.
3. **Phase 4 — the infrastructure completeness sweep** (`WORLDGEN_RE_PLAN.md`): the ~84
   `world/logic` functions that are chunk/zone containers, serialisation and `map`/`set`
   storage. Low RE value, no gates needed; the goal is coverage, so no `Unsorted` worldgen
   residue is left.

Smaller open threads, if you want a short task:

- **`lib_fn_4fc140` is probably misfiled under `_library`.** Two independent worldgen
  decisions threshold it at exactly 0.8 — emitter C's street-light variant and the forest tree
  builder's type pick. That is a lead, not proof; the label is deliberately untouched until
  the body is read.
- **Prop slots 6, 14 and 70 are null** in the client's array. `sandstone-table.cub` is loaded
  into the model DB and never bound, so a type-`0x0e` prop renders nothing in the shipped
  game — the engine deliberately diverges and draws it anyway.
- The three **gate-suite problems** in `RatForge/docs/CW_RE_MASTER_INDEX.md` §7 (split
  goldens, 23 probably-stale failures, `golden_rederive` has no manifest) are still untriaged.

**Gate data is on disk** — every `raw/*_capture*.json` in this repo, with the rig that made it
named in the matching `Docs/RE_*.md`. Re-run any gate with `python tools/gate_<name>.py`; they
read the captures and need no server.

⚠ **The pipeline fixpoint is order-sensitive and destructive if you get it wrong.** Running
`flirt_islands.py` / `adjudicate_none.py` against an already-structured tree finds nothing and
overwrites `raw/*.libislands.json` + `raw/*.none_roles.json` with empties, silently degrading
the tree. If you only changed labels, run `final_adjudication.py -> harvest_labels.py ->
structure.py` and stop.
