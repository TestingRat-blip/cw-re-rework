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
  original 137), `raw/spawn_capture.json` (6,305 overworld spawns).
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

1. **The rest of the dungeon entity layer** — the `cell.flags & 4` block at `0x5078b3` (fires
   on exactly one cell per dungeon, the apex/boss room), the chandelier at `0x507760`
   (`style == 3 && rand() % 10 == 0`), the kind-4 entrance marker at `0x504832`, and the
   loot/item generation loop that runs earlier in the same cell body. DONE and gated already:
   the `cell.flags & 4` boss block at `0x5078b3`, and the item generator `FUN_0052b470` the
   loop shares with it.
3. **Prop / vegetation placement** (`FUN_004c8420`) — Phase 2 of `Docs/WORLDGEN_RE_PLAN.md`,
   still the largest genuinely-new slice.
4. **`FUN_0052a760`'s two sub-generators** (`FUN_00528bf0` / `FUN_0052c4e0`, 16 or 24 draws) —
   what the item generator's 26th candidate actually wraps. Their client twins are
   `FUN_005f51e0` / `FUN_005f8ad0`.
5. **Port the mob pass + boss spawn + item generator into `cw_rederive`.** It now depends only on the finished dungeon voxel
   stamp, which the port already produces bit-exact — no captured booleans, no order state.

**Gate data is on disk:** `raw/dungeon_grid_capture*.json` (6 dungeons). Re-capture with
`python tools/frida_dungeon_grid.py [zx zz]` (~1-2 min each); verify with
`python tools/gate_50702a_mobs.py --all`.

⚠ **The pipeline fixpoint is order-sensitive and destructive if you get it wrong.** Running
`flirt_islands.py` / `adjudicate_none.py` against an already-structured tree finds nothing and
overwrites `raw/*.libislands.json` + `raw/*.none_roles.json` with empties, silently degrading
the tree. If you only changed labels, run `final_adjudication.py -> harvest_labels.py ->
structure.py` and stop.
