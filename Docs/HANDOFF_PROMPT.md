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
  `e6c62b3`). Everything below lives here unless stated.

**Read first, in this order:** `README.md` (the whole attempt), `Docs/PIPELINE.md` (every tool
+ why), `Docs/WORLDGEN_RE_PLAN.md` (the current objective), then the two active write-ups
`Docs/RE_50702a_mob_populator.md` and `Docs/RE_524540_creature_spawn.md`.

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

Objective: **finish "populated worldgen"** — the deterministic geometry is done; what remains
is the entity layer. Two functions are freshly RE'd:

- **`FUN_00524540` = `creature_spawn_builder`** — SOLVED. A *deterministic* constructor: given
  (`src`, `pos`, `orient`, `type=0`) it builds the `Spawn` record (type byte `+0x28`, model
  byte `+0x2c`, facing `(2-orient)·90°`, equipment `+0x54` via `ItemData_copy`) and the
  behaviour tree `Sequential{Combat(20), LookAtPlayer, WalkPath(2)}`. **Consumes ZERO `rand()`**
  for type 0 — confirmed across 6,442 live spawns. Its 33 `rand()` sites are in the types 1–15
  branches (rare bosses/quest NPCs) that never fire in normal generation.
- **The dungeon mob pass (`0x507401`-`0x50775a`)** — SOLVED and gated bit-exact on 6 dungeons
  (1,350/1,350 qualifying cells, 1,122/1,122 spawns; `Docs/RE_50702a_mob_populator.md`).
  `FUN_0050702a` turned out **not to be a function** — it is an alignment NOP inside the
  dungeon assembler `FUN_00500300`, so there is no dispatcher and no jumptable. The pass walks
  the 22x22x22 cell grid `I->J->K`, and for each kind-3 room cell with nothing above it and
  solid terrain overhead, probes the 4 horizontal neighbours; each neighbour that is not a room
  cell places one mob at `(baseX+I*10, baseY+J*10, baseZ+K*10)` facing it. The 4 call sites are
  those 4 directions (orient 0/2/3/1), not 4 categories. **It draws zero `rand()`** — the whole
  mob layer is deterministic.

## YOUR TASK

The dungeon mob pass is done. Pick up from there, in rough priority order:

1. **~~Identify the `counter` feeding `monster_level_formula`~~ — DONE 2026-07-24.** It is the
   **Pass-3 candidate loop index** `[esp+0x28]` (`0x50ea0e` → `0x50f27c`): 64 iterations, even
   ones pop a candidate, and `(counter>>1)&1` is the dungeon branch — so a dungeon only ever
   sits at `counter ≡ 2 (mod 4)` and each level pins to a unique counter. Both ports already
   computed it (`cw_featuregen._sub_count(idx)` / cwgen `cellLevel(k)`) and threw it away.
   `tools/gate_dungeon_counter.py` reproduces **level 6/6 and rank 6/6** ab-initio from the
   seed; `dunLevel`/`dunRank` are now wired through cwgen (hash unchanged).
2. **~~The rest of the dungeon entity layer~~ — DONE 2026-07-24 (`RE_dungeon_markers.md`).**
   **Every emitter and every gate of the assembler is now reproducible.** The four containers:
   `site+4` (all six emitters — `RE_52c370_wall_decor.md`, `RE_hanging_decor.md`), `site+0xc`
   (`RE_dungeon_lights.md`, `RE_52a830_scatter.md`), `site+0x30` (`RE_dungeon_loot.md`), and
   `site+0x48` — a **fourth container** this session found, holding the two structure markers
   (kind-4 entrance type 5, boss type 6), 12/12. Also closed: the **wall stub's third gate**
   (the off-lattice terrain probe — order-free, and it reduces to the mob pass's material test;
   480/480 derived, so the whole 280-stub set is now predicted in emit order) and the **boss
   species vector** (a four-way jump table on `style-1` in the prologue, no capture needed,
   6/6). New rig `tools/frida_dungeon_marker.py`.
   **Creature SPECIES is done too (`RE_dungeon_species.md`)** — both containers are prologue
   products of the same `style-1` jump table, the assembler holds exactly three `operator[]`
   sites (boss / patrol / companion), and it is derived 6/6 + ported. Two traps it found: styles
   1/2 spend a prologue `rand()%3`, and an empty companion list skips its own count draw. It also
   falsified the previous session's guess that the mob pass reads those containers — it does not;
   `[ebp-0x374]` is an all-zero int4, and mob species is `FUN_00524540`'s `param_5` byte.
   ⚠ **The "stub occlusion port gap" this list used to name is RETRACTED** — it was my own bad
   read of the reject census. `(200,200,200, class 1)` is global underground rock, not the
   dungeon's palette (it is byte-identical across three differently-coloured dungeons), and the
   probe lands one block past the core shell's overhang in a never-stamped kind-0 cell. The
   box-aware probe was built and measured identical on 305 candidates, then reverted; the pure
   terrain rule `z <= surfH + 1` reproduces 476/480 live verdicts and is what the port already
   did. **The dungeon assembler now has no known port gap.**
3. **Prop / vegetation placement** — Phase 2, the largest genuinely-new slice. ⚠ Its old
   `FUN_004c8420` starting point is WRONG (that is `DungeonProp_copy_0x188`). The zone
   builder's own two parity emitters are now **derived record-for-record** over 56 live zones
   — 7,256 checks green (`frida_zone_props2.py`, `gate_zone_props2.py`,
   `Docs/RE_zone_props.md`): parity is a literal `(zx+zz)%2` at `0x51cb66`, both emitters'
   positions come out of named `rand()` draws, and `FUN_005287b0` (`Prop_settleOnTerrain`) is
   a **pure function of the finished terrain** — drop ≤50 / raise ≤50 / needs full support /
   not in water — so the layer is portable with no captured state.
   ⚠ **Two claims from the first cut are RETRACTED** (both caused by hooking the out-of-line
   `push_back`): "exactly one prop per zone" is an artifact — an odd zone carries **0–5**,
   because `FUN_004e0740`'s stage 2 pushes into the SAME `site+0xc` through an **inlined**
   `push_back`; and the nine-caller census does not scope the layer, because an inlined
   `push_back` never calls `FUN_004d6670`. The census that holds is over **`FUN_004ce8e0`**
   (`PropVector_reserve`), and it turns up a **fifth emitter, `FUN_005104e0`**, that the old
   one could not see.
   **`FUN_005104e0` is now DONE too — it is `camp_populator`, the overworld ENCAMPMENT
   builder (`Docs/RE_5104e0_camp.md`, rig `frida_zone_camp.py`, gate `gate_zone_camp.py`,
   2,742 checks over 99 firing zones).** It picks a camp KIND from the feature descriptor
   with **zero rand** (`kinds[desc[+0x20] % len]`, a 10-way jump table), builds that kind's
   species groups, and turns each candidate position into either a camp structure
   (**`FUN_004e0740`'s two prop shapes verbatim** plus a ring of `rand()%3+1` creatures) or
   a creature group with a behaviour tree. Camp kinds `{0,1,2,3,4,5,6,8,9,10}` are covered;
   **kind 7 never fired** and is read statically only.
   **The TOWN builder is mapped too (`Docs/RE_town_props.md`, rig `frida_town_props.py`,
   gate `gate_town_props.py`, 8,646 checks over 67 towns).** ⚠ Its "three emitters"
   `004e310a`/`004eaa7a`/`004ee3aa` are **alignment NOPs, not emitters and not functions** —
   the real surface is 56 push sites / 32 placement tests / 170 rand sites. Gated: the
   settle-then-push contract (32 test sites, each paired with exactly one push site), the
   container, and a per-site prop-type table. **Positions are still open** — take them from
   the parent project's already-bit-exact plot table.
   ★ To find towns, do NOT sweep: ask `cw_featuregen` for the type-1/5 feature cells and go
   to their own zones (67 for 67 fire; a 256-zone sparse grid found one, and it emitted
   nothing).
   **The candidate grid the camp populator is handed is now DERIVED too
   (`Docs/RE_zone_grid.md`, rig `frida_zone_grid.py`, gate `gate_zone_grid.py`, 8,308 checks
   over 51 firing zones).** The 14×14 lattice at `0x51e839`-`0x51eab5` is filtered by a literal
   `(i + 3j) % 5` (`M = [ebp-0x1368]`, read live), so a fixed **39 of the 196** cells are
   rolled and the loop draws exactly 39 `rand()`s per firing zone; a rolled cell is kept when
   `rand()/32767 <= max(0, 1-w)² · 0.75`, and `w` = `FUN_0052c820` is reproduced **bit-exactly
   ab initio** by `cw_feature.falloff_weight` at all 1,989 rolled cells. Positions carry a
   `+0.5` block bias (`[0x5737c0] = -32768.0`, *subtracted*). ⇒ `gate_zone_camp.py` no longer
   rests on a captured input this repo cannot derive. It also **overturns `ADJUDICATION.md`,
   which ruled `0x52c820` "NEITHER — x87/CRT float conversion helper"** for both candidate
   names; it is the feature falloff, now settled in `DEEP_RE`.
   ★ **DURABLE (rig): a Frida hook that reads a float mid-expression can change the value it
   reads.** Frida's ia32 interceptor preserves neither x87 nor SSE state, so hooks at
   `0x51e913`/`0x51e926` (live `xmm0`, and mid-way through `0x52c820`'s x87 result) returned a
   *constant* 2.74e21 weight and zero candidates for a zone that really keeps 22. The tell was
   uniformity across 39 different positions; the falsifying observation was one command —
   run the already-ported function on the same inputs. Hook where the values are **spilled to
   the frame** instead (here `rand()`'s own entry, where EBP is still the caller's).
   **Emitters A and C are DONE too (`Docs/RE_zone_emitters_ac.md`, rig `frida_zone_ac.py`,
   gate `gate_zone_ac.py`, 3,937 checks over 256 zones) — PHASE 2 HAS NO EMITTER LEFT OPEN.**
   Reading their gates statically first is exactly what found them: both key off a table
   nothing in this project had touched, the region's **per-zone SITE-KIND grid** at
   `region + idx*16 + 0x18` with `idx = (zx%64)*64 + (zz%64)`, 4096 entries per region.
   **kind 1 = town** (always a 2×2 block), **3 = dungeon** (16/region — and the six holdout
   dungeon zones are **6/6**, matching the independently-derived ≤16 bound), **4 = runestone
   circle**. At 4 kind-4 zones per 4096, emitter A was never going to appear in a 512-zone
   sweep — reading the gate turned a hopeless search into four zones that all fire.
   * **A = the runestone circle** (prop `0x2d` = `runestone`): a ring of `rand()%3 + 6` stone
     blobs at radius 25 (angle `i·π/N` — HALF a circle) around the **zone** centre, then one
     record at that centre **+3.5 blocks** (`ftol(229376.0)`), size `(4,4,5)`, `dir = rand()%4`,
     Z settled by an **uncapped** inline descend-then-ascend over `World_getBlockFloat` — not
     `Prop_settleOnTerrain`. Whole draw stream `1 + 2N + 1`. 112/112 zones.
   * **C = the village street light** (`0x32`/`0x33` = `street-light01`/`02`): class-`0xb`
     (sand) column with air above, `road > 0.75` (`FUN_004d19f0`, so inside ~0.37 of the
     village radius), `(x + 90y) % 470 == 0`, `rand()%16 == 0`, seven clear blocks — i.e.
     **desert towns only**. 381 lights over 144 towns.
   ⚠ **RETRACTED: emitter C does not build a string.** `FUN_004cde40` is an eight-instruction
   `int -> int64 16.16`, `FUN_00406380` copies six dwords (`ret 0x18`), `FUN_00402a40` copies
   the same 24 bytes — they build the record's **position**. The decompile looked like string
   work only because those calls return a struct by value, so Ghidra printed the hidden
   return-slot addresses (`0x51fc72`/`0x51fc82`/`0x51fc92`) as arguments. One disassembly of an
   eight-instruction function settled it.
   ★ Two rig lessons: `FUN_004d6670` is **thiscall** — the record is `args[0]`, and reading
   `args[1]` gives plausible-looking garbage (type `0x80035ff`, position −82e9). And when
   mirroring a game loop in a checker, mirror the **branch**, not your idea of it: the run walk
   `jge` at `0x51fa92` makes the LAST block always qualify, reading the class at index `count`
   — one past the counted extent. Modelling it as `k < n-1` undercounted by 3–18 per town.
   **The SITE-KIND GRID IS NOW DERIVED FROM THE SEED TOO (`Docs/RE_site_kind_grid.md`, gate
   `gate_site_kind.py`, 590 checks over 118 regions — every one of 483,328 grid slots
   accounted, nothing replayed).** ★ It is written by **`FUN_0050e080`, the feature generator
   `cw_featuregen` already reproduces bit-exact** — the dungeon-`counter` lesson again: check
   the existing port before opening the decompiler. A byte scan of the whole image for
   `mov byte [reg+reg*s+0x18], imm8` finds **exactly six** site-kind stores, all in that one
   function (`0x50ec3f` = 3, `0x50f3a2` = 4, `0x50fd5d/7d/9d/bd` = 1, each paired with a
   `+0x19` corner tag 1..4). Rules: **kind 3** at every **type-14** cell's zone · **kind 4** at
   every **type-10** cell's zone · **kind 1** at the **top four of the 64 zones of the type-1
   cell's own tile**, scored `max(0, 1-w)²` against the same `FUN_0052c820` and sorted
   DESCENDING. ⚠ It FALSIFIES this session's own earlier "kind 1 is always a 2×2 block" — the
   four town zones are the top-4 by **warped** falloff and scatter; the town's centre zone is
   often not among them. Only the count 4 is invariant. Two things deliberately NOT claimed:
   the write-order precedence (3→4→1) is read from the store addresses but **0 collisions in
   118 regions**, so it is untested; and the loop shapes are not claimed (the decompile reads
   as a fixed 5 iterations for kind 4, but regions carry 4 *and* 5 type-10 cells).
   **The PROP IDS are named too (`Docs/RE_prop_ids.md`, tool `extract_prop_models.py`) —
   PHASE 2 IS CLOSED.** The client's type→model table is an init block at
   `Cube.exe:0x461ca0`-`0x4634e0`. ★ **It fills TWO `vector<VoxelModel*>` arrays and both
   are thiscall, so the DECOMPILE MERGES THEM** — every low type prints as assigned twice,
   and taking either the first or last value is wrong for a different half of the range.
   Only the `lea ecx, [ebx + …]` separates `world+0x800718` (vegetation / wall decor = the
   "hanging" namespace, 64 slots) from `world+0x800724` (the static props, 78 slots,
   `resize(0x4e)` at `0x462c02`; types 6, 14, 70 are null).
   **`0x41` = campfire · `0x42` = tent · `0x45` = wood-mat** — with `0x10` stool and `0x0c`
   table, `FUN_004e0740` is building a **campsite**, and every record size matches its model
   (a 2×2×0.1 record is a mat, a 4×4×3 record is a tent). `0x43`/`0x44` = beach-umbrella /
   beach-towel. `0x0f` = stone-stool (the style-4 dungeon id). 38 ids the file lacked.
   The method validates on data it did not fit: it reproduces all 8 `hanging` rows exactly.
   ⚠ **Three corrections to `assets/props/prop_ids.json`**: type 17 is sandstone-stool (not
   stone-stool), and **50/51 are SWAPPED** — 50 = street-light02, 51 = street-light01,
   corroborated by emitter C's own gated sizes. Its type 14 (sandstone-table) has no slot at
   all. ▶ **Follow-up (engine side, not RE):** regenerate the engine asset from the proven
   table in `raw/static_prop_models.json` — `cw_rederive/cw_extract_props.py` rebuilds
   `assets/props/prop_ids.json` + `props.pack`, so it is a deliberate engine change, not
   done here.
4. **Port the mob pass + boss spawn + light sources into `cw_rederive`** (the item-generation
   family is ported, and now fed with a real level/rank). Then the RatForge engine half of
   "light emission" — rendering the kind-7 / kind-4 records as actual lights — which is engine
   work in that repo, not RE.
   All four are gated; the family (`0052b470` -> `0052a760` -> `00528bf0`/`0052c4e0`) is a pure
   function of `(level, rank)` and the rand stream, with 10 discarded draws that must be burnt. It now depends only on the finished dungeon voxel
   stamp, which the port already produces bit-exact — no captured booleans, no order state.

**Gate data is on disk:** `raw/dungeon_grid_capture*.json` (6 dungeons). Re-capture with
`python tools/frida_dungeon_grid.py [zx zz]` (~1-2 min each); verify with
`python tools/gate_50702a_mobs.py --all`.

⚠ **The pipeline fixpoint is order-sensitive and destructive if you get it wrong.** Running
`flirt_islands.py` / `adjudicate_none.py` against an already-structured tree finds nothing and
overwrites `raw/*.libislands.json` + `raw/*.none_roles.json` with empties, silently degrading
the tree. If you only changed labels, run `final_adjudication.py -> harvest_labels.py ->
structure.py` and stop.
