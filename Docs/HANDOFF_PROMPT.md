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

16. **A filtered capture's own filter is part of the measurement.** `frida_zone_props2.py`
   records only draws whose return address is inside the zone builder, but stamps each with
   a GLOBAL draw index — so a callee's draws are counted and not listed, and the gap reads
   exactly like an unknown stage. A whole slice was blocked on "twelve unmodelled rand
   sites plus something spending thousands, almost certainly the un-RE'd ground-plant
   scatter"; the span was the **dense-forest tree pass this repo already had bit-exact**,
   and the thousands were its builder's. **Before believing a gap, ask whether the rig
   would have recorded a stage you already know.** A histogram of the per-draw RETURN
   ADDRESSES answers in one command what a search over draw values had mis-attributed.
17. **A gate that only ever ran on flat ground does not cover what happens on a slope.**
   The forest replay was proven on "flat/dry" zones for months. Its terrain store read the
   plain cover material, missing that a slope-blended column gets rock 6 — worth 18
   phantom trees in the first zone whose candidates reached into a feature deform. Note
   where the bug was: not in the pass under test, but in **what that pass reads**. When a
   replay is validated on one terrain class, its INPUTS are only validated there too.
18. **A stale golden agrees with the port by accident, and it hid a real bug.**
   `golden_rederive/*.bin` is gitignored and has no manifest, so `rederive_forest` had been
   green against a golden an older `cw_forest.py` produced. Regenerating it exposed a
   58-vs-54 Python↔C++ drift whose cause was concrete: **`CwForest.cpp` keeps its own copy
   of the pre-chain, and the 2026-07-25 "Y is drawn FIRST" site fix went into
   `CwZoneScatter.cpp` and `cw_decoration.py` but not into it.** Regenerate a port-produced
   golden before trusting a gate that uses it, and remember what it can prove: **port ==
   port, never port == game.**
19. **When a fix lands in a duplicated routine, grep for the duplicate.** `%0xa0 + 0x30`
   had four copies; three got the fix. One grep would have found the fourth.
20b. **A replay proven in one class of world has not been proven in the class it never
   ran in.** The zone-stream replay was believed exact everywhere except four descriptor
   types. It had only ever RUN where the descriptor was absent or type 0/0xa/0xe, because
   that is what the earlier captures happened to cover; the first gate that entered a
   type-6 zone found it 37 draws out. Same shape as 17 (flat vs slope) and 20 (even vs
   odd) — three times now, always the reachability or the inputs, never the pass itself.
   Before trusting a green gate, ask which worlds it never visited.

20. **A parity-gated bug needs a gate that runs BOTH branches.** The site loop is
   odd-parity only, and every gate added in this programme happened to be even-parity —
   `rederive_zonepropsb` structurally cannot cover it, because emitter B *is* the even
   branch. `forest_oracle.ZONES` now deliberately keeps an odd zone.

21. **A deletion needs the same evidence bar as a claim, and about the RIGHT factor.**
   `surfH`'s roughness term was `lm * roughness`; a feature deform belonging to `lm` was
   deleted because *`roughness`* has no feature term. True premise, wrong factor, and it
   left `surfH` wrong inside every type-6/0xd cell for months — invisible until a gate
   finally entered one. See lesson 17/20b: the same class again, and it was the INPUT.
22. **A module that caches seed-derived tables at import is a global-state bug waiting for
   the first caller who changes the seed.** `re_landform` computed its `BASE` and octave
   offsets once, for 444444; `cw_decoration.landform_pass` on seed 42069 used 444444's
   terrain and nobody noticed, because every 42069 zone it had ever run on had zero
   qualifying tiles. Re-sync at the entry point, not at import.

23. **A silent `hasattr` fallback is a branch no gate can see.** `cw_forest.py` chose the
   mat-38 boost with `cw_decoration._boost(...) if hasattr(cw_decoration, "_boost") else
   True`. That attribute has never existed — the name is in `cw_genscatter` — so the file
   hardcoded `True` for its whole life, and nothing failed, warned, or looked wrong. It
   only surfaced when the gate's zone set finally reached a zone where the real boost was
   False. Write the import, not the guard; if a fallback is genuinely needed, make it
   loud.
24. **Decoding a stage tells you what it CANNOT do, too, and that is worth writing down.**
   `0x51ad52` was carried for three handoffs as the likely cause of the type-0xd drift.
   Reading it settles that it spends zero draws and stamps nothing — so it is ruled out
   permanently, and the gate now asserts the negative (no drifting zone even reaches these
   stages) so the question cannot drift back open. A closed door is a result.

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
| the zone builder's **TAIL** (mat-38 -> emitter B = the dense-forest tree pass; emitter B derived and reachable from the seed) | `RE_zone_tail.md` | 6,558 / 28 even zones |
| the camp **DESCRIPTOR** — all seven fields from the seed, `+0x20` = the region mission counter | `RE_camp_descriptor.md` | 198 firings / 52 cells |
| the **LANDFORM** pass gate chain + the builder's second land mask (type 6/0xd) | `RE_zone_landform.md` | 22 / 2 zones, 16 draws ab initio |
| the pre-chain's other **TYPE-GATED STAGES** (0xd/4, 0xb, 0xc) + the gen-scatter's site-kind guard | `RE_zone_tail.md` | 50 byte/capture checks |

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

0. **Already landed (2026-07-25, RatForge `3c2f7a2`, `14ab5f5`, `8aacb8d`)** — read these
   before re-doing them:
   * **the site-kind grid is in cwgen** (`CwFeatureGrid.cpp`), gate `rederive_sitekind`
     **116/116**. cwgen already had kinds 3 and 4 derived independently (type-0xE → 3,
     type-0xA → 4, which cross-checks `RE_site_kind_grid.md` from the other end); the TOWN
     kind was missing and its old note called it a "2×2 quad", which is wrong.
   * **the town generator is rebuilt on the derived lattice** (`CwTown.h` + `Towns.cpp`),
     gate `rederive_townlattice` **16228/16228** — every live town-builder record lands in
     the plot the shipping header predicts. Three corrections: the lattice is anchored to
     the ZONE not the cell, a town spans its cell's whole 8×8 TILE (measured live: 25/25
     zones ran the builder, 9 emitted), and the falloff is the WARPED one. Houses now sit
     on their 3×3 × 13-block module grid (origin + 39/2), not the plot centre.
   * Still **faithful, not exact**, and marked so in the code: which plots come out
     buildable. Plot minH/maxH are region-cache-blocked, so the binary's exact `>16`
     flatness reject is kept and the rest is scored against cwgen terrain.

1. **Port the overworld/town PROP PLACEMENT into `cwgen`.** `CwPropEmit` (gate
   `rederive_props` 9273/9273) is only the emitter *library* — `--proptest` says so out loud:
   *"placement = the town/dungeon driver"*.
   ✅ **DONE (RatForge `1585e6a`): the odd-parity `FUN_004e0740` props.** `zoneScatterProps`
   emits stage 1's campfire and stage 2's four candidates with their real ids; gate
   `rederive_zoneprops` **5/5** replays the stream ab-initio and lands the anchor on the live
   16.16 position. ★ It also found a genuine bug in **both** ports: the retry loop draws
   **Y first** (`0x51cbbb`) then X (`0x51cbfc`), and C++ *and* `cw_decoration.py` had them
   swapped — the Python's own comment named the two return addresses in the right order
   beside variables assigned the other way round. Not cosmetic: the accepted site is what the
   mat-38 pass rejects rocks against, so fixing C++ alone broke `rederive_zonescatter` 16/17
   against a golden the old Python had generated. Both fixed, golden regenerated, 17/17.
   Settled on live data (8/8 zones), not by reading harder.
   ✅ **RENDERED (RatForge `b44fdcc`)**: `src/worldgen/ZoneProps.cpp` turns the records into
   instances and `VegScatter` gathers them, so campfires/tents/tables/stools/mats appear.
   `--proptest` now covers PLACEMENT, not just assets — 4,608 columns of 72 odd zones,
   43 props, deterministic.
   ✅ **VILLAGE PATHS are CW's own (RatForge `7ef7ae6`)**: the engine had an invented
   ground DISC, which the tile-wide town rebuild blew up into a brown landscape. CW has no
   town road segments — its paths are the cosine groove `FUN_0052d990` carves wherever the
   road field is non-zero, which cwgen already applies to the HEIGHT. `villagePath()` shares
   that derivation so colour cannot drift from geometry. ★ First cut thresholded the raw
   groove depth and covered **60%** of a village (a dirt field); normalising by strength —
   `-cos(..)` of the nearer axis, i.e. distance to a trough CENTRE — gives ~20% and a path
   grid. `--towntest` now fails above 60% so it cannot regress silently.
   ✅ **EMITTER B DONE (2026-07-25b), and the block it was behind was a MISREADING.**
   The previous note here said emitter B, the camp populator and emitter C sat behind an
   un-RE'd stage — "twelve unmodelled rand sites plus something spending thousands,
   almost certainly the ground-plant scatter". Every number in that note is right; the
   identification was wrong. The span `0x51d396`-`0x51e5c7` is the **dense-forest tree
   pass**, which this repo has had bit-exact for months (`cw_forest.py` / `CwForest.cpp`
   / `FOREST_TREE_BUILDER_513760.md`): the twelve sites are the 14x14 candidate loop's
   own, and the thousands of draws are `lib_fn_513760`'s — **counted but not recorded**,
   because `frida_zone_props2.py`'s `inRange` filter only keeps return addresses inside
   the zone-builder body. The capture already held the proof.
   ★ **DURABLE: a filtered capture's own filter is part of the measurement.** A gap
   between recorded draws is not evidence of an unknown stage until you check whether the
   rig would have recorded a known one. Reading the per-draw RETURN ADDRESSES out of the
   capture settled in minutes what a search over draw values had mis-attributed.
   Landed: `Docs/RE_zone_tail.md` + `tools/gate_zone_tail.py` (**6,558 checks**, 28 even
   zones — including a state-machine replay of all 5,488 candidates' branch structure),
   and in the engine `CwForest::zoneReplayTail` + the even branch of `zoneScatterProps`,
   gate **`rederive_zonepropsb` 5/5** over **115 live trees with every stream index
   exact** on seed 42069 (a world the forest port had never been run against). The gate
   checks four numbers per zone — pre-chain draw count, emitter B's absolute stream
   index, tree count, record — so a failure says where the drift is.
   ★ Two corrections it forced: (1) the forest replay's terrain store read
   `surface_placer`'s cover material, but a **slope-blended column gets rock 6** wherever
   the slope weight > 0.5 (`surface_assembly`, L880) — identical on flat ground, which is
   why every "flat/dry" test zone missed it, and worth **18 phantom trees** (59 vs 41) in
   the one zone that reaches into a type-0xA feature cell. **A gate that only runs on
   flat terrain does not cover cover selection — and the bug was in what the tree pass
   READS, not in the tree pass.** (2) the temperature probe is at the cell origin **+8**,
   not +2, in both axes; the climate field is flat over 6 blocks so the live capture
   cannot tell the two apart — only the disassembly can.
   ✅ **THE CAMP DESCRIPTOR IS DERIVED (2026-07-26), and the grid is ported.** The camp
   populator picks its KIND with `desc[+0x20] % len(kindList)` and spends no rand doing
   it, so that one field decided everything a camp is — and both camp gates read it out
   of the capture. It is the region's **mission counter**: seeded by the region's third
   setup draw (`rand()%10000`, which `cw_featuregen` already modelled as `local_2ac`) and
   advanced by `1 + rand()%0x32` per popped Loop-C candidate, each cell keeping the value
   from BEFORE its own advance. `+0x24` is the cell level, `+0x28` the count sub-switch.
   **52/52 cells, 198/198 firings.** Landed: `Docs/RE_camp_descriptor.md`, the two Python
   gates now derive the descriptor (13,082+3,861 and 3,138 checks), and in the engine
   `FeatureCell::mission` + `CwZoneCamp` (`rederive_campdesc` **693/693**,
   `rederive_campgrid` **15,486/15,486**, `rederive_campstream` **2/2**).
   ★ **When a derived quantity is off by a per-scope constant, search that scope's own
   rand log for the constant before theorising about global state.** The per-region base
   looked like a session-global counter for an hour; it is draw #1 of the region stream.
   ⚠ **AND IT FOUND THE THING THAT NOW BLOCKS THE WHOLE CAMP PATH.** Reaching the lattice
   ab initio needs the zone replay, and **the replay drifts in zones whose descriptor is a
   present feature cell** — 12 of 14 measured, 2 to 629 draws, in BOTH directions, types
   6/7/0xb/0xc/0xf. Every zone the replay was ever proven on has a descriptor of type
   0/0xa/0xe (or type 2, now proven by two zones). A camp only fires in the other classes,
   so **98 of 99 live firings are unreachable** and the populator cannot be ported until
   this is fixed. `zoneTreeExact` was narrowed to what is proven; `cw_forest.py` still uses
   the wider rule, so `rederive_forest` now REPORTS the one zone the C++ declines.
   ★ The live stream indices are **recovered, not captured**: msvcrt's rand is a plain LCG,
   so stepping it from the zone seed until a recorded draw run appears pins the absolute
   index. That is what turned "the port's draws are wrong" into "the port arrives 37 draws
   early", and what splits pre-chain drift from tree-loop drift.
   ✅ **THE DRIFT IS SOLVED FOR TYPE 6 (same day).** The capture above was run at zone
   (32792,32748) and answered in one shot: its whole live pre-chain is **22 draws**, and
   the first nine are at `0x51aa86` — **a 3x3 grid of ground knolls gated on
   `desc->type == 6`** (`0x51aa57`) that runs before everything else in the pre-chain and
   that no port modelled and this repo's stage map never listed (it fired in 2 of the old
   56 zones, where 18 draws read as noise). Decode in `RE_zone_tail.md`. Ported: that zone
   is now **pre 22/22 and lattice 1214/1214 ab initio**, and of the zones cwgen declines
   **13 reproduce all 39 lattice draws**, up from 2.
   ★ **The rig's draw index is not the zone's** — `frida_zone_props2.py` stamps a
   process-global counter and does not hook the zone's `srand`. Locate any recorded run in
   the zone's own LCG stream and every stage's ABSOLUTE position becomes readable; that is
   what made a 22-draw pre-chain legible at a glance, and it is worth doing FIRST on any
   future capture from that rig.
   ✅ **THE LANDFORM PREDICATE IS FIXED AND TYPE 6 IS ADMITTED (2026-07-26b).**
   `Docs/RE_zone_landform.md`, gate `tools/gate_zone_landform.py` (22/22). It was never
   the predicate: **`surfH` was short inside every type-6/0xd feature cell**, because the
   zone builder keeps **two land masks** and both ports had one. `[ebp-0x12d8]` (what
   `FUN_00523d80` returns) multiplies `term_a` in surfH and `inner`/`fb` in the predicate;
   `[ebp-0x12f4]` — that value plus a deform the builder applies *itself* for types 6/0xd
   (`0x518e6e`-`0x518fd3`) — multiplies the ROUGHNESS, so it feeds surfH's second term,
   the slope weight (`0x51904e`) and the flat-rock weight (`0x5192fa`). Zone
   (32795,32748)'s tallest relief came out **1.71 against a 2.0 cliff threshold**, so not
   one of its 110 G1-G3 columns passed G4.
   ★ **It was an UN-fix, not a discovery.** `CwColumn::roughBlend` carried exactly this
   block until commit `08c8b67` deleted it as a "type-6/0xd roughness boost", reasoning
   correctly that `cw_height.roughness` has no feature term — but the term was never in
   the roughness, it is in the land mask that multiplies it. **"X has no feature term"
   does not license deleting a feature term sitting next to X**; check which factor of
   the product the evidence is about.
   Proof: zone (32795,32748) replays its landform pass **16/16 draw values in order, ab
   initio from the zone seed** (the predicate must pick exactly 15 of the ~9,300 columns
   the stride samples), plus an independent live check — the same capture's settle
   records put four columns of that cell on the known `surfH + 2` convention where the
   old surfH was 3-5 blocks under. Blast radius measured: of `rederive_deform`'s 52,897
   feature columns across 12 types, **1,252 moved and every one is type 6**.
   Landed: `CwColumn::roughBlend` (+`SurfInfo::roughSum`/`specialLr`),
   `CwZoneScatter::landformQualifies`, `CwWorldGen::dryColumnSurface`,
   `cw_featuregrid.builder_lm_lr`, `cw_column`, `cw_forest`, `re_landform`. Result:
   `zoneTreeExact` claims `{absent,0,2,6,0xa,0xe}`, **`rederive_campgrid` replays 7 zones
   ab initio (was 1) = 273 live draw values, `rederive_campstream` 4/4 (was 2/2)**, whole
   `cwgen_test` suite green.
   ★ Also fixed in passing: **`re_landform` was pinned to seed 444444 at import** — its
   `BASE`/octave tables were computed once, so a landform pass on any other world silently
   used 444444's terrain. It never bit because every non-444444 zone the replay had run on
   had zero qualifying tiles. It now re-syncs to `cw_seed.SEED` on every call, and
   `zonescatter_oracle.py` (which rode on the import side effect) configures 444444
   explicitly. **A module that caches seed-derived tables at import is a global-state bug
   waiting for the first caller who changes the seed.**
   ✅ **THE REST OF THE TYPE-GATED PRE-CHAIN IS READ (2026-07-26c) — AND IT IS NOT THE
   DRIFT.** `Docs/RE_zone_tail.md`, gate `tools/gate_zone_prechain.py` (**50/50**).
   `0x51ad52` is shared by types 0xd **and 4**; it scans a column top at the cell centre
   and **discards it**, spending **zero draws**. That is not "no draws were recorded" but
   a property of the binary: an EXHAUSTIVE rand-site census of `0x51a000`-`0x51b200`,
   resolving `call <reg>` as well as `call [&rand]`, finds exactly 18 sites and the stage
   map accounts for all of them. So the standing expectation in this file — "type 0xd is
   the other half of the land-mask deform's gate, expect the same class of drift and the
   same one-run fix" — is **falsified**: the stage has no way to move anything.
   ★ Two genuinely new stages turned up beside it, and both were unmodelled everywhere:
   **type 0xb** (`0x51ae29`, 1 draw, one radius-100 knoll at the zone centre) and
   **type 0xc** (`0x51af34`, 1 DISCARDED draw, one GIANT tree 80x80 — builder tree type 6,
   which is what `cw_forest.py`'s docstring had already guessed "zone-cell 0xc only"), and
   both then `jmp 0x51b101`, **past the gen-scatter's count draw**: such a zone runs no
   gen-scatter at all. All three need the zone to hold the cell's CENTRE (1 zone in 64).
   ⚠ **They do NOT explain the 0xb/0xc drift.** Not one of the 14 drifting zones holds
   its cell's centre, so the game takes the `jne` there exactly as the port does. The gate
   asserts this so it cannot be silently re-opened. **Types 7 / 0xb / 0xc / 0xf are still
   unexplained — but the cause is now known not to be a missing pre-chain stage.**
   ✅ **The gen-scatter's own guard is real and both ports had dismissed it.** `0x51b05a`
   reads the per-zone **SITE-KIND** byte (not the feature-cell type) and skips the whole
   pass for kinds 1/3/4. `cw_forest.py`'s note said the guard read "a 0x10-stride record
   byte, NOT the zone's feature cell" — true, and the 0x10 stride *is* the site-kind
   grid's entry size. The capture decides it: of 56 zones exactly one has a non-zero
   derived site kind and exactly that one spends zero gen-scatter draws — **56/56**.
   ★ **DURABLE: "the guard reads a different table than I assumed" is a reason to find
   out which table, not to drop the guard.**
   ✅ **THE PRE-CHAIN HAD THREE MORE UNFIXED DUPLICATES.** `cw_forest.py` never had the
   type-6 knoll grid at all, and `CwZoneScatter`'s `zoneScatterRocks` /
   `zoneScatterProps`(odd) / `zoneScatterBlobs` each srand the zone and go straight to
   `replayGenScatter` — so every type-6 zone `classifyZone` calls Exact was 9+ draws out
   in four places. They now share `CwZoneScatter::replayPreChain`, which declines
   (new `ZoneClass::Feature`) any zone whose pre-chain stamps terrain a store-free replay
   cannot follow. Third instance of the duplicated-routine lesson.
   ✅ **AND WIDENING `rederive_forest` PAID FOR ITSELF TWICE.** `forest_oracle.ZONES`
   gained a type-6, a type-0xb-centre and a type-0xc-centre zone. (1) `cw_forest.py` had
   **hardcoded the mat-38 boost to True** for the life of the file —
   `cw_decoration._boost if hasattr(...) else True`, and `cw_decoration` has no `_boost`
   (it is in `cw_genscatter`), so the loop drew `rand()%10 + 10` where the server draws
   `rand()%10`. Every zone the file had run on happened to have boost=True; the first
   boost=False zone arrived **50 draws late**. ★ **A silent `hasattr` fallback is a branch
   no gate can see.** (2) the gate now carries the **pre-chain draw count** on both sides,
   which turned an ambiguous tree mismatch into `pre{cpp 62 / py 112}` — pre-chain vs tree
   loop, in one line. `rederive_forest` **6/6 over 8 zones / 245 trees**, and the two zones
   cwgen declines both replay tree-for-tree under `force`.
   ▶ Still missing — **which emitter fires where** for the rest:
   * descriptor types **7 / 0xb / 0xc / 0xf** still drift and are still declined. The
     type-6 cause was first a whole unmodelled stage (the knoll grid) and then a wrong
     terrain INPUT — the pre-chain is now exhaustively censused, so **look at the inputs**;
   * `Prop_settleOnTerrain` (a pure function of finished terrain — no captured state);
   * the rest of `camp_populator`: the arm tables and the coin branch are statable, and the
     waypoint draw COUNT is settled (3 iff the neighbour list is non-empty, `0x512dc1`);
     the neighbour predicate itself is still read statically;
   * the town chain (its **plot heights are region-cache-blocked**, so the verdict rule is
     statable but not seed-reproducible — port what is derivable and stop there);
   * emitters A and C, and the site-kind grid they gate on.
   Suggested order: **camp → C**, both now reachable — `zoneReplayTail` leaves the stream
   at `0x51e5c7` and `RE_zone_tail.md`'s table enumerates every rand site between there
   and them, so each is a decode job like the tree loop was, not a mystery. Then town.
   Each has a `gate_*.py` here to check the port against.
   ✅ It also surfaced AND fixed a pre-existing Python↔C++ forest drift: zone
   `(32800, 32799)` gave 58 trees in Python and 54 in C++ because **`CwForest.cpp` has its
   own copy of the pre-chain and its odd-parity site draw was still X-first** — the
   2026-07-25 Y-first fix reached `CwZoneScatter.cpp` and `cw_decoration.py` only. The
   misplaced site rejected 5 candidates it should not have, and a reject spends 2 draws
   instead of 6: exactly the 20-draw offset observed. Three filters hid it — the site loop
   is odd-parity only, `rederive_zonepropsb` tests only even zones, and the golden was
   stale. `rederive_forest` is now **5/5 with 111/111 trees and 388,538/388,538 colored
   writes** (was 107/107 / 186,419 against the stale golden).
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
