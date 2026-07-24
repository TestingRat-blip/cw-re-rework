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
  `writeVoxel 0x1ff00`, `dungeon_assembler 0x100300`, `creature_spawn_builder 0x124540`,
  `dungeon_mob_populator 0x10702a`.
- Captured data already on disk: `raw/dungeon_spawn_capture.json` (137 dungeon spawns with
  positions, orient, caller RVA), `raw/spawn_capture.json` (6,305 overworld spawns).

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
6. **0 direct callers ≠ artifact.** Vtable slots, dispatch-table targets and **jumptable
   case-bodies** all look like orphans. `IndirectRefs.java` catches the first two; it still
   misses jumptable case-bodies (that's how `0050702a` got mis-tagged `role:artifact`).
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
- **`FUN_0050702a` = `dungeon_mob_populator`** — IN PROGRESS. The caller. It **grid-scans the
  dungeon volume on a 10-unit lattice** and places a creature at qualifying cells, via 4 call
  sites (RVAs `0x107552/5fd/6a8/753` → 38/35/33/31 = 137 mobs). 2,957 lines, 31 loops, only
  **5 direct `rand()`** (one is `% 0x28`). It is a **case-body of the big dungeon dispatcher**
  (`4e310a`/`4eaa7a`/`4ee3aa`) — decompiles with `unaff_EBP`/`unaff_EBX`.

## YOUR TASK

Continue `FUN_0050702a` (`dungeon_mob_populator`). Next step, in priority order:

1. **The cell-qualification test** — what gates a spawn at a lattice cell (it reads the dungeon
   voxel grid; look for `World_getBlockAt` / `Chunk_getColumnAt` / `Column_getBlockChecked` in
   its body). Reproducing *lattice scan + cell test* should reproduce the 137 captured
   positions — that's the first bit-exact gate on the populator.
2. What the **4 call sites** distinguish (categories? sub-regions? passes — same volume,
   overlapping positions).
3. The **5 `rand()` draws** (density/variant decisions).
4. If needed, RE it inside its **parent dispatcher** for the EBP/EBX context.

**Gate data is already captured:** `raw/dungeon_spawn_capture.json` holds the 137
`(pos, orient, caller RVA)` tuples. Re-capture any time with
`python tools/frida_dungeon_spawn.py` (takes ~1–2 min).

Optional follow-ups once the populator is gated: the prop/vegetation placement layer
(`FUN_004c8420`), and fixing `IndirectRefs.java` to resolve jumptable case-bodies.
