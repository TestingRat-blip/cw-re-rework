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
  public at **https://github.com/TestingRat-blip/cw-re-rework** (branch `master`).
  Everything below lives here unless stated.

**Read first, in this order:** `README.md` (the whole attempt), `Docs/PIPELINE.md` (every tool
+ why), `Docs/WORLDGEN_RE_PLAN.md` (the current objective — Phases 1-3 are closed, Phase 4 is
not), then this file's **"Where we are right now"** table and whichever `Docs/RE_*.md` it
points at for the slice you are picking up.

**In a hurry?** "Hard-won lessons" group B, then "YOUR TASK". The rest is reference.

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
| `extract_market_slots.py` | INTERPRET the market's 20 perimeter slots out of `Server.exe`; `--cpp` writes `CwTownMarketTables.h` |
| `extract_surround_slots.py` | INTERPRET the house surround's 8 emit slots; `--cpp` writes `CwTownSurroundTables.h` |
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
| `disasm_range.py` | disassemble a VA range with labels + `.rdata` floats resolved — the workhorse for any new stage |
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

Grouped, because they repeat. If you are about to write a finding down, read group A;
if you are about to trust a green gate, read group B. Every one of these cost real time.

### A. What counts as evidence

1. **A captured byte is data; what it *means* is still a guess until you test it.**
   Two retractions in one session came from reading semantics off raw values: a uniform
   grey `(200,200,200)` read as "the dungeon's own palette stone" (it is global
   underground rock — one `Counter` across three differently-styled dungeons kills it),
   and a pointer passed next to a spawn call read as "the species list" (twelve
   instructions of its callee show a vec4 float store). **Before writing a finding down,
   name the cheapest observation that would falsify it and make it.**
2. **Trust the binary over the decompiler's pseudo-C.** Live capture has corrected static
   reads at least three times.
3. **A spatial pattern read off ONE sample is a hypothesis, not a rule.** "Kind 1 is
   always a 2×2 block of zones" survived one region and died on the next (it is the top
   four of 64 by *warped* falloff, and the town's own centre zone often is not among
   them). Second manufactured stencil in this project — see also the nearest-neighbour
   "fence group" in `RE_town_props.md`. Test on the next sample before writing it down.
4. **A deletion needs the same evidence bar as a claim, and about the RIGHT factor.**
   `surfH`'s roughness term was `lm * roughness`; a feature deform belonging to `lm` was
   deleted because *`roughness`* has no feature term. True premise, wrong factor, and it
   left `surfH` wrong inside every type-6/0xd cell for months. **"X has no feature term"
   does not license deleting a feature term sitting next to X** — check which factor of
   the product the evidence is about.
5. **A candidate that scores WORSE than a constant is not a wrong formula — the rows are
   misaligned.** The landform switch's inner-draw gate was predicted 106 times out of 161
   by `surf <= sh`, against a 112/161 null baseline (always answer "no"). A wrong
   threshold degrades gracefully; an uncorrelated score means the per-tile observations
   are attributed to the wrong tiles. That turned a hunt for a missing term into "the
   enumeration order is wrong", which the loop tail confirmed in one disassembly.
   **Always compute the null baseline before believing a fit.**
6. **Decoding a stage tells you what it CANNOT do, too, and that is worth writing down.**
   `0x51ad52` was carried for three handoffs as the likely cause of the type-0xd drift.
   Reading it settles that it spends zero draws and stamps nothing — ruled out
   permanently, and the gate now asserts the negative so the question cannot drift back
   open. **A closed door is a result.**
7. **A comment about one render path is not a statement about all of them.** `Store`'s
   note that only tree fills reach its render sink was read as "the engine does not draw
   the pre-chain knolls" — wrong: knolls and rocks reach the mesher through
   `ForestBlobs`/`StoneBlobs` entirely separately. **Grep for the other consumers before
   concluding a thing is not drawn.** (Same session, an earlier guess — "the props stand
   on tree canopies" — fell to one run streaming the zone's tree voxels.)

7b. **A capture a doc cites is not a capture still on disk, and a stage sized by WHERE
   its draws are is not a stage whose draws were counted.** Two of these landed in one
   slice. `raw/spawn_capture.json` is cited across three docs for 6,305 overworld spawns;
   it is 57 bytes and holds zero, overwritten by a later run of its own rig. And the
   creature scatter was carried as "nearly all of the median 2,646-draw gap" to emitter C
   on the strength of *where* it sits in the stream — one histogram bucketing the 56-zone
   capture by stage put it at a median **58** draws and the already-ported tree pass at
   **3,837**. Both cost nothing to check and both changed the plan. **`ls` the capture,
   and bucket the stream, before scoping work around either.**

7e. **A modelling claim written in a comment is not a reading, and "provably inert" is a
   claim about the WORLDS YOU MEASURED.** Three ports and this repo's own doc said the
   river/lake bed pass's carve level was "base_height(open, closed gate) + the 4/6/7/0xd
   deform (NO village/ocean repulsion)". The binary calls `FUN_004f9b70` at `0x51bcde` with
   the same three-argument shape the zone builder's bh-table fill uses — and the ocean-site
   repulsion is *inside* that function. Nobody had followed the call; the sentence had been
   copied forward instead. It survived a 44/44 live gate over 37,476 draws because the
   repulsion needs an OCEAN nearest-site and none of those eight zones has one — group B
   again, from the other direction: not "the branch that never ran", but **a term that is
   identically zero in every world the gate visited**. When a port drops a term, write down
   which worlds would show it, and go find one.

7d. **Before blaming a term for a residual, check the term is BIG ENOUGH to pay for it —
   and price the alternatives too.** A 36-of-109 height residual at type-10 cell centres
   was carried for a whole handoff as "a small error in the pre-truncation float inside
   the type-10 deform", on the strength of one plausible-looking `frac(surf)` correlation.
   Three measurements, none costing more than a printf, killed it before any code moved:
   the land-mask term is worth **at most 0.32 blocks** there and is < 0.0001 in 20 of the
   38 drifting zones, several of which need |δ| > 0.9; the only other type-10-specific
   term, the ocean repulsion, is `smoothstep(clamped) * (int)elev` and so is **exactly 0
   or +100**, never a fraction; and no constant or height-proportional δ beats the status
   quo by more than one zone. The real cause was three blocks away — the settle probing
   the wrong column. **A residual your suspect cannot pay for is evidence about the
   suspect.** Corollary, and the third instance in this project: when a stage carries a
   16.16 bias, ask whether its PROBES carry it too (see 14, and the site list's proximity
   test).

7c. **A literal table copied out of an image needs a machine to keep it honest.**
   `CwZoneCreatures.cpp`'s species group/level tables were typed by hand instead of pasted
   from the extractor that had just printed them, and were wrong in **17 and 109 entries**.
   Nothing showed it: no gate compares a level, and the group table only surfaced through a
   second-order consequence -- one zone's pack came out a member short, because pack size
   is `roll % groupRange(species)`. **If you transcribe data out of a binary, add the diff
   against the binary to a gate in the same commit** (`gate_zone_creatures.py` now re-reads
   all three tables and diffs them against the source literals every run).

7f. **A stage sized by what it SPENDS is not sized by where it STARTS — and a
   conservative classification can be vacuous for the consumer you are about to run.**
   Both halves landed in one slice, and together they turned "the town chain needs the
   whole 64 KB builder" into a gate in an afternoon. The 07-27f measurement was right and
   its conclusion did not follow: `FUN_004e28e0` really does spend 17-19,576 draws across
   176 rand sites, but **reaching** it is a different question, and one script answers it
   — LCG-recovering every captured town's absolute entry index puts the builder at stream
   index **0 in 23 of 71 towns**, median 53. Then the port still declined every town zone,
   because a town classifies as `Village` — a flag that exists for exactly two consumers,
   the gen-scatter keep-gate and the mat-38 rejection, **both of which a site-kind 1/3/4
   zone skips**. The classification had been correct when it was written and was now
   guarding nothing. **Before scoping work around a stage's cost, measure its ENTRY; and
   before accepting a "not replayable" verdict, check whether the thing that motivated it
   still runs.**

7g. **"What is X's <thing>?" can be the wrong question, and the cheapest check is
   whether X is a LIBRARY function.** A whole handoff item was scoped as "the promotion
   pass needs `FUN_004e19f0`'s sort key". `FUN_004e19f0` has no sort key: it is MSVC's
   `std::_Sort` over a 4-byte element (the `_ISORT_MAX` `cmp eax, 0x20`, the ideal
   halving, `_Insertion_sort` below 32), and the key lives in the **predicate** it
   forwards untouched. Ten minutes of disassembly turned an open question into a
   one-line answer — and the same slice found `site+0x79`, carried as "the faction" for
   a year, was the site-kind grid's corner rank that `cw_featuregen` **was already
   computing and discarding** (26, third instance), and that a third input nobody had
   named at all (the ruin's `desc+0x1c`) fell to one byte scan. **Read the function
   before budgeting for what is inside it.**

7h. **Four slices running, the blocking input was MISFILED rather than missing — and
   twice it was a literal.** 7g recorded three instances in one afternoon; `0x4eda58`
   made it four. That site was carried as "the first genuinely broad site, and the
   first that is not nearly free" (2,968 draws, 69 towns) and is a self-contained
   creature scatter: its **species list is five `push_back`s of an immediate** at the
   head of the builder, seed- and climate-independent, and its one descriptor input
   `desc+0x28` is the field `cw_featuregen` has produced as `msub` since the camp
   descriptor was derived. Neither needed RE; both needed *looking*. The pattern is now
   strong enough to act on: **before budgeting for a stage, disassemble its span and
   grep the ports for its inputs under other names.** The cost of that check has been
   ten minutes every time; the cost of skipping it has been a whole handoff item.

7i. **A GENERATED table needs a gate that regenerates it, and a table you can EXECUTE
   should never be transcribed.** The town house's 23 module grids live in a decision
   tree of 114 `cellAt3D` + store pairs. Two MSVC habits make reading them off a listing
   quietly wrong, and both were tried first: the three `push imm` of a cell lookup are
   **hoisted above the branch** that picks between two variants, so the successors share
   them and a block-at-a-time scan gives that cell to one variant and shorts the other;
   and the store for call N is emitted **after the pushes for call N+1** and is not
   always `mov byte [eax], t` (the record has fields at +2/+3/+8, written 19 times).
   Neither shows in the output — both yield plausible grids. The fix was to stop reading
   and start *executing*: the region is 30 instruction forms, so
   `extract_house_layouts.py` interprets it, and `gate_town_house.py` re-runs the
   generator and diffs the emitted C++ header every time. **If a region is small enough
   to interpret, interpret it; and treat a generated file with no regeneration check as a
   hand-typed one** (7c).

7j. **A geometric transform between a table and the code that consumes it is invisible
   to every draw count — and the sentence saying there is no transform may never have
   been read.** Both halves landed porting the furnishing walk. `VoxelGrid_cellAt3D`
   calls `FUN_004d8f90` on its indices *before* it indexes, rotating the house's module
   grid by `house[+4] & 3` and mirroring it on `house[+8]`, so one layout furnishes eight
   ways — and a rigid transform preserves the number of (wall, non-wall neighbour)
   pairs, so the draw TOTAL is identical under all eight and only the POSITIONS move (13,
   from the other side: here the count could not have caught it and a position gate
   does). Meanwhile the port's own house anchor carried 0 with a comment asserting the
   house was *deliberately* not centred in its plot; the real offset is **7**, six blocks
   out in the engine's town rendering, and that sentence had been copied forward rather
   than read (7e, second instance). Note also how the 7 was pinned: the decomposition
   closes for **both** 7 and 8, and what breaks the tie is that the offsets are the
   span's own `.rdata` literals — report the ambiguity and the thing that removes it,
   not the conclusion (5). **When a port reads a table someone else generated, look for a
   transform between them; and when a comment explains why a value is surprising, that is
   the value to go and read.**

7k. **A COUNT is not a READING, and the observable you need may already be in the capture
   — grep the RIG, not just the docs.** Nine town slices were gated on draw counts and
   prop pushes. `frida_town_props.py` has recorded `creature_spawn_builder`'s arguments —
   source, **position, orientation, type** — in a `spawncalls` array since the capture was
   taken, and this was not even unnoticed: `RE_town_props.md` reports "17,488 calls from
   21 sites" and closes with *"nothing here decodes that split"*, and `gate_town_props.py`
   prints the total every run. **What nobody had done was read one record's fields.** For
   the house entity pass that array holds **19,352 fully specified records**, which is why
   07-28k needed no new rig and could gate GEOMETRY rather than counts. This is 7h from
   one more direction (misfiled, not missing) and its cheapest form: **before scoping a
   slice around what you cannot see, read the rig's own hook list — and treat a number
   your own docs print without using as an unopened box.** Concretely still open:
   `RE_town_furnish.md` §7 says the `id 0xd` record at `0x4eaf3f` "goes to a container no
   capture hooks" — that is a statement about the PROP hooks, and it should be re-checked
   against the spawn hook before it is carried again.

7l. **A constant pinned by an ARGUMENT is worth re-pinning by a SWEEP, and the stage that
   can sweep it is usually a later one.** `RE_town_furnish.md` §5b had to record that its
   own decomposition does not pin the house anchor — 7 and 8 both close — and broke the
   tie by reasoning about which literals the span owns. That is a good argument and it
   was still an argument. One stage later the same constant is *measurable*: every offset
   in the SURROUND pass is a literal relative to the anchor and the plot base comes from
   the derived lattice, so sweeping the anchor over a whole 13-block module stride gives
   **1,059/1,059 records at +7 and 0 at all twelve other offsets**. The sweep cost four
   lines. **When you carry a constant that a doc had to argue for, ask which later
   consumer could sweep it — and put the sweep in that consumer's gate.** Corollary from
   the same slice, and it is 7i pointed at my own work: the gate's first draft *typed*
   the byte offsets of five `mov [esi+0x24], imm` stores off a listing and got **two of
   the five wrong**, because MSVC emits those three stores in a different order in
   different arms. Nothing about the wrong values looked wrong. The fix was to stop
   typing and scan for the instruction — **a gate that hand-copies bytes out of the
   binary is the thing lesson 7i is about, whichever side of the fence it sits on.**

7m. **A stage that emits nothing your rig hooks is not an ungateable stage — and a callee
   you have not read can still be PRICED.** Nine slices of town work had trained a habit:
   find the stage's records in `pushes` / `settles` / `spawncalls` and gate the geometry.
   The NPC pass has **zero** records in all three, and the ten minutes that established
   that (one census over the return addresses, before any budgeting) is what stopped the
   slice from being scoped as "blocked, needs a new rig". What replaced the geometry was
   the *draw structure*: the pass has five per-town booleans and, once the four apparently
   data-dependent sub-tests were checked and found true in 396 of 396 observations, **no
   free parameter per villager at all** — so 5 bits predict 7,386 draws in order.
   ★ The same slice's other half is the transferable one: the rig stamps a **process-global**
   draw index, so the GAP after a call is the callee's cost *whether or not you have read
   the callee*. That priced three undecoded `lib_fn_*` at 669-1038 / 3322-3335 /
   2010-2018 draws — and the two arms that call the SAME function agreeing to within 8 is
   a check on the attribution, not an assumption about it. **Before concluding a stage is
   not observable, ask what the stage's OTHER observables are; and before deciding a
   callee must be decoded to be budgeted, subtract two draw indices.**

7n. **A "next region" in the queue can be the ELSE of a branch you just decoded, and one
   set-intersection says so.** `0x4f1d7d`-`0x4f26b3` was queued as the following slice on
   its own draw count. It is the else arm of the very test the NPC pass is the then arm of
   (`desc[0x18] == 1` at `0x4f0128`): 35 towns run one, 35 run the other, **0 run both**.
   That reframes it from "a new 2,872-draw problem" to "the same pass for the other site
   classes, read `RE_town_npcs.md` first". The check cost one command over data already on
   disk. **When two spans sit either side of a `jne`, partition the corpus by them before
   treating them as independent work.**

7o. **A function's END is a boundary claim too — and your RIG probably inherited it.**
   Lesson 20 is about Ghidra inventing boundaries *inside* a body, and this project has
   applied it four times. `0x4f16bb` is the mirror image: three interior NOP splits were
   correctly merged into "one 65,033-byte body, `0x4e28e0`-`0x4f26e9`", and **nobody checked
   the far end**. The `ret 8` is at `0x4f2b42`; the body is 1,116 bytes longer; the last
   stage in the builder branches straight over the old end. The damage was not in the doc,
   it was **downstream of it**: `frida_town_props.py`'s draw filter is `[0xe28e0, 0xf26f0)`,
   copied from the same number, so **seven rand sites and a `spawn_ctor` have never been
   recorded in any town capture** — and every "N of 176 sites, M of 228,413 draws" census in
   four handoffs was taken over a truncated body. Nothing looked wrong, because a filter
   that drops draws produces a smaller, entirely self-consistent stream (lesson 18, from the
   third direction: the filter cutting off the FUNCTION rather than a callee). ★ The
   recovery is 7m's: the gap after the last recorded site was **8 in 35 firings and 1 in 42,
   never anything else**, matching the seven disassembled sites exactly — and *which* it is
   is predicted by that draw's own recorded value `% 2`, 77/77, so the pricing is measured
   from two independent directions. **When you merge a split body, find its `ret`; and when
   a rig carries a span constant, check where that constant came from.** Corollary from the
   same census: two of the seven are `call edi` (the thunk cached in a register at
   `0x4f26ab`), so a site census matching only `call dword ptr [__imp__rand]` finds five of
   seven and stays self-consistent — **census the register form too.**

7p. **A "this observable does not work" verdict is scoped to the corpus that produced it,
   and the next class of world may make it exact.** `RE_town_npcs.md` §7 spent a section
   establishing that `site+0x18` is *not* a usable total — predicted NPCs matched
   `ents - ents0` in 22 of 92 towns, because six other `spawn_ctor` sites push into the same
   vector — and closed with "it will only become a gate when the other six are decoded too."
   Every word true, and the conclusion does not transfer: **a RUIN runs only two of the
   thirteen** `spawn_ctor` sites, so for the ruin arm the same quantity is an exact identity,
   **35 of 35 with residual zero**, and it is the only evidence that the invisible block of
   7o spawns anything at all. The generalisation that failed was "`ents` is a sum over
   stages" → "`ents` is useless"; it is only useless when more than one summand is
   undecoded. **Before inheriting a negative result, ask which subset of the corpus it was
   measured on and whether the stage you are on runs fewer of the contributors.** (Same
   shape as 7f's vacuous `Village` flag: a classification that was correct when written and
   is guarding nothing now.)

7q. **Two decodes of the same DATA by different routes is the strongest check you can get
   for free.** The ruin's species tables are byte-derived and no capture records a single
   one of its spawn records, so on its own the decode has no live proof at all. But two of
   the nine arms turn out to be **byte-identical to the dungeon assembler's species
   containers** — a different function, decoded a year earlier from live dungeon captures
   and gated 6/6 — down to the same three second-group ids in the same order. That is not a
   coincidence to note in passing: it is a *test*, so the gate asserts the equality, and
   either decode drifting now breaks the other. **When a table you have just extracted looks
   familiar, go and diff it against the one it reminds you of, and make the diff a gate.**

7r. **A span bounded by its own CONTENTS is a hypothesis — twice in one day, at two
   scales.** 07-29 found the town builder's body ended 1,116 bytes past where four handoffs
   put it (7o). 07-29b found the same mistake one scale down and in the same ledger:
   `RE_town_npcs.md` §9 gave the last open band as `0x4e39ea`-`0x4e4fb3`, and `0x4e4fb3` is
   the band's **last rand site**. Its 20th block's settle (`0x4e5001`) and push
   (`0x4e5014`) sit past it, so the census reported 20 rand pairs against 19 settles and 19
   pushes — and that asymmetry read like a block that legitimately does not settle, which
   is exactly the kind of "interesting detail" a slice then goes and explains. **End a span
   at something the binary states** — a `ret`, a `jne` target, a role gate — **not at the
   last thing you happened to observe inside it.** Here the honest bound was free: the
   role-9 section's own `jne 0x4e5023`.

7s. **A NAME is a claim, and it can contradict the comment directly above it.**
   `0x4f3630` was carried as `TownProp_make_0x15` with a `DEEP_RE` comment reading
   *"it ends `type = rand() % 3 + 0x15`"*. The comment is right; the name says the function
   makes type 0x15, which is the one thing it does not do — it makes one of **three**, and
   through `prop_ids.json` those three are `market-stand1/2/3`. Two slices read past that
   contradiction. It is 7e's shape (a sentence copied forward) aimed at the label rather
   than the code, and the fix costs one line. **When you write a name next to an
   explanation, check that they say the same thing.**

7t. **The namespace is what licenses a semantic reading — and it is checkable.**
   `RE_town_yard.md` 07-28g had to withdraw an id-to-model reading: the ids resolved
   through `prop_ids.json` to plausible furniture, but the yard pushes to `site+4` /
   `site+0x30`, which no capture hooks, so nothing tied an id to a model. The market pass
   makes the same kind of claim and it is allowed, because its 20 push sites all do
   `lea ecx, [edi + 0xc]` and `site+0xc` is exactly the namespace `prop_ids.json` was built
   for. ★ The transferable part is not "check the namespace", it is **make the gate assert
   it**: `gate_town_market.py` reads the push target out of the binary, so if the claim is
   ever moved to a stage that pushes elsewhere it fails instead of quietly becoming wrong
   again. Corroboration is cheap too — the extents are `.rdata` literals and a market stall
   comes out 3.5 x 2.0 x 3.0 blocks.

7u. **A callee's NAME is evidence about the CALLEE, not about what the caller is doing
   with it.** `0x4eee4f` and `0x4ef03e` were carried for three handoffs as "the role-0x14
   and role-0x12 plots' **town NPC** spawns", and `RE_town_plaza.md` §9's decode next to
   that phrase was already correct (`rand() % K + 0x84c` into the model DB). The word "NPC"
   came from the callee's label — `creature_spawn_builder` — and `FUN_00524540` is the
   *generic* entity builder. Read its arguments instead and it is placing
   **`antique-building1..4.cub`** with a constant `type` of 0, on the two plot roles that
   occur **only in ruins**. This is 7s from the other side: there a name contradicted the
   comment beside it, here a name inherited a claim from a function it merely calls.
   ★ The check that settled it cost nothing and is worth copying: **the position is the
   plot centre minus half the model's own footprint, so the live positions MEASURE the
   model's dimensions** — and `model_id_map.json` already had those dimensions, read out of
   the decoded `.cub` files by a completely separate effort. Two sources, same numbers
   (−16 for the 32-wide models, −12 for the 24-wide), and then all 45 positions predict
   exactly. **When a stage places something by id, look for a second source that knows that
   id's geometry, and make the agreement the gate.**

7v. **"The disassembly cannot resolve this" is a claim about the WALKER, not about the
   binary — and the fix is usually to follow a different thing.** `RE_town_market.md` §5
   spent a paragraph establishing that the market ring's jitter AXIS could not be
   disassembled and had to be one fitted bit per block, *and its diagnosis was correct*:
   MSVC emits a slot's two coordinates through two different shapes, one via
   `int_to_fixed16_16` and one inlining the widening as `cdq / shld / shl`, so a walk that
   follows REGISTERS resolves only one of the pair. The conclusion did not follow. The
   section reads its geometry out of four FRAME SLOTS (`plotOriginX`, `plotOriginZ`,
   `span/2`, `span`), and following those instead derives all twenty axes, because the
   jitter term lands inside whichever origin's expression owns it whatever the widening
   downstream does. Twenty minutes turned a fitted bit into a generated table the gate
   regenerates. ★ The general form: **when a decode records that something is unresolvable,
   the note almost always names the thing the resolver was tracking — read that sentence as
   a hypothesis about the tool, not a property of the code.** (Same family as 7g "read the
   function before budgeting for what is inside it", pointed at your own analysis.)

7w. **An interpreter run CUMULATIVELY fills its own gaps with the previous item's value,
   and the result is complete, plausible and wrong.** Four of the market's twenty slots emit
   no `add` for their along-offset, because MSVC does not encode `add reg, 0`. Running the
   slot interpreter per-block leaves those four blank — obviously incomplete, obviously in
   need of a second source. Running it cumulatively across the section "fixes" them by
   letting the previous block's `−7` leak in, and produces a full twenty-row table with no
   gaps and no warning. Nothing about the output looks wrong. ★ **An absent encoding is an
   ABSENCE, not a default — report it as one and let a second source fill it.** Here the
   capture confirmed all four are the `K = 0` blocks; the interpreter states the inference
   rather than hiding it. This is 7i's shape one level up: 7i says stop reading and start
   executing, and this says **check what your executor does when the binary says nothing.**

7x. **A WINDOW is a guess; a measured GAP is a check — and a window's failures are sized to
   look like nothing.** The house-surround golden first assigned prop records to houses with
   an index window round each house's coin group, and produced 1,035 records against the
   1,059 the capture holds. That is a 2.3% shortfall spread over 14 towns — small enough to
   read as a rounding detail, big enough to have made the port's own gate quietly weaker.
   What replaced it cost one command: over the whole capture the settle sits **exactly 2
   draws after its coin 771 times and 3 times 288**, and its emit slot matches in all 1,059,
   so each zero coin pairs with the *next* settle and the generator **asserts the gap and
   the slot**. Those same two numbers are the factory's cost split arrived at from the other
   direction (`RE_town_surround.md` §5), which is the tell that the pairing is right.
   ★ **Before writing a proximity rule into a gate, measure the proximity.**

7y. **A stage's SHAPE is not its call census, and the census costs one command.** Two
   documents and a gate all described the market as "for each of 20 perimeter slots:
   `Chunk_getColumnAt(x, y)`; if it exists push into the flag-B list; …". Counting the calls
   in the role-9 section by TARGET gives 20 settles, 20 `push_back`s, 40 `rand`s — and
   **one** `Chunk_getColumnAt` and **one** landmark push, both handed `plotOrigin + span/2`
   on both axes. The pseudocode had been written from what the stage plausibly does rather
   than from what it calls, and nobody had run the count because no draw depends on it: the
   column read spends nothing, so every draw-count gate in nine slices passed over it. It
   mattered the moment someone needed the stage's TERRAIN dependency, which is exactly what
   a port needs. ★ **`collections.Counter` over the call targets of a span, before writing
   its pseudocode.** (7k's shape — a number nobody computed — with the number being a
   count of calls.)

### B. What a green gate does NOT prove

The single most expensive family in this project. Five separate instances of the same
shape: **the pass under test was fine, and the branch that never ran was not.**

8. **A gate that only ever ran on flat ground does not cover what happens on a slope.**
   The forest replay was proven on "flat/dry" zones for months. Its terrain store read the
   plain cover material, missing that a slope-blended column gets rock 6 — worth 18
   phantom trees in the first zone whose candidates reached into a feature deform. Note
   where the bug was: not in the pass under test, but in **what that pass reads**. When a
   replay is validated on one terrain class, its INPUTS are only validated there too.
9. **A replay proven in one class of world has not been proven in the class it never ran
   in.** The zone-stream replay was believed exact everywhere except four descriptor
   types. It had only ever RUN where the descriptor was absent or type 0/0xa/0xe, because
   that is what the earlier captures happened to cover; the first gate to enter a type-6
   zone found it 37 draws out. **Before trusting a green gate, ask which worlds it never
   visited.**
10. **A parity-gated bug needs a gate that runs BOTH branches.** The site loop is
    odd-parity only, and every gate added in one whole programme happened to be
    even-parity — `rederive_zonepropsb` structurally cannot cover it, because emitter B
    *is* the even branch. `forest_oracle.ZONES` now deliberately keeps an odd zone.
11. **When a replay models a CALLEE as a constant, that is a branch too.** The site loop
    calls `FUN_004e0740` and both ports encoded "it accepts, for 11 draws". It retries up
    to ten times (3 draws each) and sometimes accepts nothing — true in 10 of 28 odd zones.
12. **A gate that feeds the port the CAPTURED draws does not prove the port derives
    them.** Every odd-parity zone gate in this project replays the recorded stream; the
    first thing to derive an odd zone's stream from the seed found 13 of 28 arriving at
    the site loop at the wrong index, in the descriptor class everything else called
    proven. **Ask what a green gate actually FEEDS its port before reading it as coverage**
    — and prefer to find this out when choosing the gate's design, not after.
13. **Transposing a loop is invisible to every gate that counts.** `for wz: for wx:` and
    `for wx: for wz:` visit the same tiles, so the qualifying-tile SET, the draw COUNT and
    every total derived from them are identical. Order can only be caught by an observable
    attached to an individual item — here the switch's per-tile inner draws. **When a pass
    is validated only by totals, its order is an untested free parameter; say so.**
14. **A test that walks a LIST is dead code until something puts an entry in it — and the
    copy that was right may be the copy that never runs.** The builder's "within 40 blocks
    of a site" test has five port copies. The one with the correct 16.16 form was the
    type-6 knoll grid's, which walks a provably-always-empty list; the two that can see a
    non-empty list compared block integers and were wrong by up to 80 in d² at a 1600
    threshold. Nothing caught it for a year because it needs BOTH an odd-parity zone that
    accepts a site AND a candidate within ~1.5 blocks of the ring. **When you port a
    proximity test, port the ARITHMETIC from the copy that runs.**
15. **A silent `hasattr` fallback is a branch no gate can see.** `cw_forest.py` chose the
    mat-38 boost with `cw_decoration._boost(...) if hasattr(cw_decoration, "_boost") else
    True`. That attribute has never existed — the name is in `cw_genscatter` — so the file
    hardcoded `True` for its whole life, and nothing failed, warned or looked wrong.
    **Write the import, not the guard;** if a fallback is genuinely needed, make it loud.
16. **A helper can be wrong most of the time and invisible to every gate.** `ftol`
    (`FUN_0054a946` = `_ftol2`) TRUNCATES: `fistp` rounds, then the function corrects the
    result back toward zero. Two of the three places this project implements it had it as
    round-half-even, and 91,021 of the suite's 133,408 calls disagree between the two —
    yet the whole suite, hash included, is byte-identical, because every result is a 16.16
    coordinate and the error is 1/65536 of a block. **Ask what resolution a value is
    *compared* at, not how often it is computed.** It took the camp ring — the first
    consumer checked at full 16.16 against live data — to make it observable at all.
17. **A stale golden agrees with the port by accident, and it can hide a real bug.**
    `golden_rederive/*.bin` is gitignored and has no manifest, so `rederive_forest` had
    been green against a golden an older `cw_forest.py` produced, through a real
    Python↔C++ drift. **Regenerate a port-produced golden before trusting a gate that uses
    it, and remember what it can prove: port == port, never port == game.**
18. **A filtered capture's own filter is part of the measurement.** `frida_zone_props2.py`
    records only draws whose return address is inside the zone builder, but stamps each
    with a GLOBAL draw index — so a callee's draws are counted and not listed, and the gap
    reads exactly like an unknown stage. A whole slice was blocked on "twelve unmodelled
    rand sites plus something spending thousands"; the span was the **dense-forest tree
    pass this repo already had bit-exact**. **Before believing a gap, ask whether the rig
    would have recorded a stage you already know.** A histogram of the per-draw RETURN
    ADDRESSES answers in one command what a search over draw values mis-attributes.

### C. Reading the binary

19. **Ghidra collapses `/GS` function bodies** to just the security-cookie epilogue —
    `0x522cc0` looked like a stub but is a 16.16 fixed-point distance. Check raw bytes when
    a body looks too short for its size.
20. **0 direct callers ≠ artifact — and ≠ a function.** Vtable slots and dispatch-table
    targets look like orphans; `IndirectRefs.java` catches those. But a zero-reference
    "function" may be no function at all: **90 of Server.exe's 129 zero-reference functions
    start on an MSVC alignment NOP inside a bigger body** (`tools/nop_split_audit.py`).
    `0050702a` was one — `8d 9b 00 00 00 00`, jumped over by an `eb 06` at `0x507028`,
    inside the dungeon assembler. Check the entry bytes before believing a function
    boundary. (Cube.exe has 0 of these; its orphans are real functions.)
21. **`unaff_EBP` in a decompile means the frame belongs to someone else** — that is a
    function boundary error, not an exotic calling convention.
22. **When Ghidra warns it cannot track the stack, read the disassembly for loop induction
    variables.** In the mob pass the decompiled C aliased `K` and `K+1` onto one name and
    made the qualification test unreadable; twelve lines of disassembly settled it.
23. **A thiscall table read from the decompile can be two tables.** The client's prop
    type→model init block fills TWO `vector<VoxelModel*>`s; the implicit `this` makes both
    print as a bare `vector_at_stride4(type)`, so every low type looks assigned twice and
    taking either the first or the last value is wrong for a different half of the range.
    Only the `lea ecx, [ebx + …]` separates them. **Census by byte-scanning the image when
    a decompile pattern search comes up short** — the six site-kind stores were found that
    way after a text search over the decompile missed one entirely.
24. **When you mirror a game loop in a checker, mirror the BRANCH, not your idea of it.**
    The column run-walk's `jge` at `0x51fa92` makes the LAST block always qualify, reading
    the class at index `count` — one past the counted extent. Modelling it `k < n-1`
    undercounted by 3–18 per town and failed the gate. (Mirroring an out-of-range read can
    also *fault* under Frida where the game survives on allocation slack — guard it.)
25. **Both label sources are unreliable in opposite directions**: `CW_CONFIDENCE_XREF.md`
    had an off-by-one that filed proven worldgen as `lib_fn_*` (16 rows fixed);
    `cw_callgraph.py` gives game names to STL primitives. Always verify against the body.

### D. Porting

26. **Check the existing port before doing new RE.** The `counter` feeding the level
    formula was documented as "must arrive by another route" because the decompile showed
    only a `= 0` store. It was the loop's induction variable, and **both ports were already
    computing the value** (`_sub_count(idx)` / `cellLevel(k)`) and discarding it. When a
    value lives inside a function that is already bit-exact, the answer is in the port, not
    the binary.
27. **When a fix lands in a duplicated routine, grep for the duplicate.** `%0xa0 + 0x30`
    had four copies; three got the fix. The pre-chain had four more. One grep each time.
28. **A list you build yourself is an input you invented — check that the binary ever
    fills it.** Both ports seeded the zone builder's site list with every feature-cell
    centre in the 3x3 region neighbourhood. The list (`[ebp-0x1378]`) is `_Buynode`'d with
    `_Mysize = 0` and gets exactly ONE insert in the whole 19KB body: the odd-parity
    accepted site. **One `find` over the frame slot's disp32 settles who writes a list.**
29. **A module that caches seed-derived tables at import is a global-state bug waiting for
    the first caller who changes the seed.** `re_landform` computed its `BASE` and octave
    offsets once, for 444444; a pass on seed 42069 silently used 444444's terrain. Three
    instances now — and note the shape of the third: the caller that tripped it is a
    **classifier**, so its wrong answer reads as a policy decision rather than a failure.
    Re-sync at the entry point, not at import.
30. **Regenerating an asset can silently delete content if a hardcoded consumer
    disagrees.** `dungeonPropModelName` carried `chest-base` where the `.cub` is
    `chest-base02`; it resolved only because the old map propagated the same wrong name
    into the pack. Diff every hardcoded consumer against the new source *before*
    rebuilding.
31. **Rule out your own source/flags before blaming the compiler.** A "RTM vs Update 1
    codegen gap" turned out to be my reconstruction writing `if (0<f)` instead of the
    decompiler's `if (f<=0)`. Fixing the source gave a 100% match.

### E. Rigs and tooling

32. **A hook that reads a float mid-expression can CHANGE the value it reads.** Frida's
    ia32 Interceptor preserves neither x87 nor SSE state. Hooking `0x51e913`/`0x51e926` —
    inside live `xmm0` and mid-way through `0x52c820`'s x87 result — returned a *constant*
    2.74e21 weight and zero candidates for a zone that really keeps 22. The tell was
    uniformity across 39 different positions; the falsifier was one command, running the
    already-ported function on the same inputs. **Hook where the values are spilled to the
    frame** (here `rand()`'s own entry, where EBP is still the caller's). Related: never
    `Interceptor.attach` `FUN_00406100` — the hottest function in a zone build; it stalled
    one zone past 13 minutes.
33. **The rig's draw index is not the zone's.** `frida_zone_props2.py` stamps a
    process-global counter and does not hook the zone's `srand`. msvcrt's rand is a plain
    LCG, so stepping it from the zone seed until a recorded draw run appears pins the
    ABSOLUTE index of every stage. That is what turns "the port's draws are wrong" into
    "the port arrives 37 draws early". **Do this FIRST on any capture from that rig.**
34. **Big functions need a 600s decompiler timeout**, not the 60s default — the four
    "failures" were the zone/town/dungeon builders and the `.cub` loader.
35. **`analyzeHeadless` splits script args on commas** — pass address lists as separate
    args.
36. **A rig's per-record "site" is a RETURN ADDRESS, and the compiler shares tails.** In
    the house entity pass up to **seven** different emit sites `jmp` to one `call`, so
    "the model behind site `0x4e8524`" is five models and "the constant offset at that
    site" is not one constant. A gate that assumes one per site fails on 5% of the corpus
    and looks like a decode error. **Derive the emit → tail map out of the binary before
    treating a recorded site as a unit** (`gate_town_entities.emit_sites` walks the `jmp`
    chains; 34 emits, 16 tails, nothing typed). Corollary: counting `push` sites still
    under-counts when the source arrives in a register or through a slot the walk
    rewrites — override those with the byte-checked instruction that loads it.
37. **A tie in the rig's draw index can still be DECIDED — prove a minimum gap.** The
    house ctor hook stamps the index at entry and a spawn can carry the same one, so the
    per-house split is ambiguous at the boundary. It is not actually ambiguous: the house
    pass spends draws between the ctor and the pass's first record, so a record stamped
    exactly `ctor(i+1)` must be house i's. The gate **asserts that minimum** (measured:
    38) instead of assuming it, which turns a boundary convention into a measurement.

## Working style expected

Verify before claiming; report failures with the evidence; correct your own earlier statements
plainly when the data contradicts them (this happened repeatedly and is normal here). Keep
everything logged: update the relevant `Docs/*.md`, add settled identities to the `DEEP_RE`
dict in `final_adjudication.py`, re-run the pipeline, and **git commit + push to the public
repo** after each meaningful step.

## Where we are right now

Objective: **finish "populated worldgen"**. The deterministic geometry was already bit-exact;
this year's work has been the **entity / prop layer**.

⚠ **Read this table as "the RE is done and gated *in this repo*" — not "the port is done".**
Those are two different ledgers. As of 07-29c the **town builder's RE is complete**
(176/176 rand sites, 100.00% of its recorded draws); as of **07-29d three of the six unported
town stages are ported** — the MARKET, the ANTIQUE BUILDINGS and the HOUSE SURROUND pass —
so **four layers still have a green RE gate and no cwgen port**: emitter C, the HOUSE ENTITY
pass, the village NPC pass and the RUIN OCCUPANT pass. Closing that gap is "YOUR TASK", and
the two NPC/ruin items share one blocker (the building list). Where a cwgen gate exists it is
named in the last column.

Nothing below needs another capture session; every open question left is reachable from the
captures already on disk. ⚠ One caveat worth carrying: a *fresh* town capture would be
worth taking before the ports, because `frida_town_props.py`'s draw filter was 1,116 bytes
short until 07-29 and **every `town_props_capture*.json` on disk predates the fix** — seven
rand sites are priced off the draw index rather than recorded (`RE_town_ruin.md` §2).

| layer (RE + gate in THIS repo) | doc | gate coverage |
|---|---|---|
| `FUN_00524540` = `creature_spawn_builder` (0 `rand()` for type 0) | `RE_524540_creature_spawn.md` | 6,442 live spawns |
| the dungeon mob pass (`0x507401`-`0x50775a`; `FUN_0050702a` is an alignment NOP, not a function) | `RE_50702a_mob_populator.md` | 1,350 cells / 1,122 spawns |
| the rest of the dungeon entity layer — boss, lights, scatter, wall decor, loot, markers, species, level/rank | `RE_dungeon_*.md`, `RE_52*.md` | 9 gates, 6 dungeons |
| the overworld prop scatter + `Prop_settleOnTerrain` | `RE_zone_props.md` | 7,256 / 56 zones |
| `FUN_005104e0` = `camp_populator` (overworld encampments) | `RE_5104e0_camp.md` | 2,742 / 99 zones |
| the town prop chain: plot lattice → promotion → role-2 house → 3×3 modules → 13-block lattice | `RE_town_props.md` | 8,646+ / 67 towns |
| the camp populator's **candidate grid** | `RE_zone_grid.md` | 16,250 / 99 zones |
| zone emitters **A** (runestone circle) + **C** (village street light) — ⚠ **RE only, NOT ported** | `RE_zone_emitters_ac.md` | 3,937 / 256 zones |
| the per-zone **site-kind grid**, from the seed | `RE_site_kind_grid.md` | 590 / 118 regions |
| the **prop-id table**, from the client's own init block | `RE_prop_ids.md` | 75 of 78 slots |
| the zone builder's **TAIL** (mat-38 -> emitter B = the dense-forest tree pass; emitter B derived and reachable from the seed) | `RE_zone_tail.md` | 6,558 / 28 even zones |
| the camp **DESCRIPTOR** — all seven fields from the seed, `+0x20` = the region mission counter | `RE_camp_descriptor.md` | 198 firings / 52 cells |
| the **LANDFORM** pass gate chain + the builder's second land mask (type 6/0xd) | `RE_zone_landform.md` | 22 / 2 zones, 16 draws ab initio |
| the pre-chain's other **TYPE-GATED STAGES** (0xd/4, 0xb, 0xc) + the gen-scatter's site-kind guard | `RE_zone_tail.md` | 50 byte/capture checks |
| the **ODD-PARITY SITE LOOP** + the builder's site list (it holds one entry, never the feature cells) | `RE_zone_site_loop.md` | 228 checks, 56 zones |
| `Prop_settleOnTerrain` = `FUN_005287b0`, the 3x3 flatness test that decides the site loop | `RE_zone_site_loop.md` | **24/24** odd zones ab initio |
| the landform 742-loop's **ITERATION ORDER** (X-outer, Z-inner) — what the odd-zone upstream drift was | `RE_zone_landform.md` | 187 checks, 161/161 live per-tile decisions |
| the **RIVER/LAKE BED PASS** (`0x51c09a`) + its mat-6 consumer — the last pre-chain stage | `RE_zone_tail.md` | 44 checks, 8 zones, 37,476 live draws |
| the site list's **16.16 proximity test** (`0x51cf20` / `0x51ded7`) — the entry carries a half block | `RE_zone_site_loop.md` | `rederive_campgrid` 15990/15990, 13 zones |
| the **CAMP POPULATOR** `FUN_005104e0` end to end — every prop and every `Spawn` record | `RE_5104e0_camp.md` | 1,598 record checks / 99 zones; `rederive_camppop` 3111/3111 |
| **EMITTER A** (the runestone circle) — RE'd *and ported*, reached from the seed; its Z settle probes `(cx+3, cz+3)` | `RE_zone_emitters_ac.md` | `gate_zone_ac` 1,232 / 112 zones; **`rederive_zoneac` 109/109 ab initio**, record Y included |
| the **OVERWORLD CREATURE SCATTER** (`0x51ed60`-`0x51f981`) — 3x3 grid, species tree, pack ring; RE'd *and ported* | `RE_zone_creatures.md` | `gate_zone_creatures` **217/217**; **`rederive_creatures` 1043/1043 ab initio**, 18 zones |
| `FUN_005290d0` = `World_pickCreatureSpecies` + `FUN_0052bfa0` = `World_pickPackMemberSpecies` | `RE_zone_creatures.md` | (folded into the two above) |
| the town builder's **PLOT VERDICT** pass (`0x4e2a80`-`0x4e3093`) + its plot score + its rotation/nudge, from the seed — RE'd *and ported* | `RE_town_verdict.md` | `gate_town_verdict` **5,469** / 72 towns; **`rederive_townverdict` 641/641 ab initio**, 34/34 arrivals |
| the town builder's **PROMOTION** pass (`0x4e3095`-`0x4e39e9`) — the sort key, `site+0x79` and the ruin `desc+0x1c`, all from the seed — RE'd *and ported* | `RE_town_promotion.md` | `gate_town_promotion` **2,071** / 92 towns; **`rederive_townpromo` 140/140 ab initio** |
| the town builder's **INHABITANT SCATTER** (`0x4eda0b`-`0x4edcbf`) — the 2x2 quadrant coin, the hardcoded species list, the kind-5 Entity — RE'd *and ported* | `RE_town_creatures.md` | `gate_town_creatures` **3,045**; **`rederive_towncreatures` 140/140** |
| the town builder's **HOUSE PASS** (`0x4e6520`-`0x4e74a5`) — 13 rand sites, 23 module grids EXECUTED out of the binary, the door rule — RE'd *and ported* | `RE_town_house.md` | `gate_town_house` **1,446** / 435 houses; **`rederive_townhouse` 140/140** |
| the town builder's **ROLE-6 PLOT** (`0x4e503a`-`0x4e5b9e`) — the fenced yard: 14 rand sites, **49.6% of every draw in the builder body**; fences derived field-by-field, the other two containers unhooked — RE'd *and ported* | `RE_town_yard.md` | `gate_town_yard` **2,822**; **`rederive_townyard` 51/51**, site sequence exact draw-for-draw in 17/17 towns |
| the town builder's **ROLE-0/7 PLOT** (`0x4ef248`-`0x4f0046`) — the sand plaza: 7 rand sites, 24.6% of the body; `0x4ef7c8` is one draw per RING VOXEL of a radius-8 disc, not a scatter; the RUIN site set derived from the seed alone — RE'd *and ported* | `RE_town_plaza.md` | `gate_town_plaza` **11,877**; **`rederive_townplaza` 169/169**, falloff gate 430/430 ab initio |
| the town builder's **HOUSE ENTITY** pass (`0x4e74a5`-`0x4ea988`) — the four face walks, the roof walk, the wall/roof walk (`0x4ea254`) and the four-neighbour walk: 11 rand sites, 34 emit sites, 16 spawn tails, **19,352 `creature_spawn_builder` records checked field by field**; ⚠ **RE + gate only, NOT ported** | `RE_town_entities.md` | `gate_town_entities` **46,344** / 435 houses |
| the town builder's **HOUSE SURROUND** pass (`0x4ecfb5`-`0x4ed9ea`) — the clutter against the outside walls: 8 rand sites, 4 faces × 2 slots, **1,059 prop records checked field by field**; `FUN_004f2cd0` the PROP FACTORY, whose hidden draws are LCG-recovered; it also pins `kTownHouseOrigin = 7` by a **sweep** — RE'd *and ported* | `RE_town_surround.md` | `gate_town_surround` **6,643**; **`rederive_townsurround` 1004/1004**, 323/323 site sequences draw-for-draw |
| the town builder's **NPC / DAILY-ROUTINE** pass (`0x4f0046`-`0x4f16b6`) — the last stage in the builder: five named-occupant arms + `1 + rand()%2` villagers per building, each with a behaviour tree and a **daily schedule**; 38 rand sites, **7,386 recorded + 47,230 hidden draws**; five per-town bits predict every draw in order; ⚠ **RE + gate only, NOT ported** | `RE_town_npcs.md` | `gate_town_npcs` **16,117** / 35 towns, 440 villagers |
| the town builder's **ANTIQUE BUILDINGS** (`0x4eee3e`-`0x4ef248`, roles 0x14/0x12) — the LAST two rand sites: one `antique-building1..4` model per ruin plot, centred by half its own `.cub` footprint; 45/45 positions predicted exactly, and it CORRECTS "town NPC spawns" — RE'd *and ported* | `RE_town_antique.md` | `gate_town_antique` **290**; **`rederive_townantique` 62/62**, 45/45 placements with NO terrain |
| the town builder's **MARKET** (`0x4e3a3f`-`0x4e5023`, role 9) — 20 perimeter slots, 12 stalls + 8 goods, both factories' hidden `rand()` LCG-recovered so TYPE and EXTENTS are **derived**, not just counted; the 20-slot ring is now INTERPRETED out of the binary too; it also names the NPC pass's flag-B list; ⚠ the role-8 half of the band is **dead code** (role 8 is never assigned) — RE'd *and ported* | `RE_town_market.md` | `gate_town_market` **450**; **`rederive_townmarket` 18/18**, 98/98 records, 6/6 streams draw-for-draw |
| the town builder's **RUIN OCCUPANT** pass (`0x4f16bb`-`0x4f2b45`) — the ELSE of `desc[0x18]==1`, and the ruin's mirror of the NPC pass: a species table by `desc[0x1c]`, a plot guard, a `rand()%5` quadrant loner, 2-4-creature packs on a semicircle, and a patrol; **18 rand sites, 7 of them past the rig's filter and priced off the global draw index**; `ents-ents0` exact 35/35; ⚠ **RE + gate only, NOT ported** | `RE_town_ruin.md` | `gate_town_ruin` **3,041** / 35 ruins, 677 entities |
| the town builder's **HOUSE FURNISHING** pass (`0x4ead3a`-`0x4ecf20`) — 13 rand sites, 21 push sites, 6,759 records; `FUN_004f2ee0` the FURNITURE FACTORY, whose 8 rand sites the rig cannot see; `cellAt3D` ROTATES the module grid; the house sits `plotOrigin + 7` — RE'd *and ported* | `RE_town_furnish.md` | `gate_town_furnish` **34,307**; the factory **4,958/4,958** from LCG-recovered hidden draws; **`rederive_townfurnish` 1,004/1,004**, 323 houses draw-for-draw |

Two structural facts worth carrying:

- **The region's per-zone SITE-KIND grid** (`region + idx*16 + 0x18`,
  `idx = (zx%64)*64 + (zz%64)`, 4096 entries) is what the zone builder gates its site
  branches on — **1 = town, 3 = dungeon, 4 = runestone circle** — and it is a product of
  `FUN_0050e080`, the feature generator `cw_featuregen` already ports bit-exact. Its
  entry's **second byte** (`+0x19`) matters too: a site record's descriptor base is
  `site+0x60`, so those two bytes are `site+0x78`/`site+0x79`, and for a town the second
  is the zone's **corner rank 1..4** — the byte the town builder's promotion pass picks
  its whole role set from (`zoneSiteTag`, 92/92).
- **There are two static-entity namespaces**, not one: `world+0x800718` (vegetation / wall
  decor, the "hanging" ids) and `world+0x800724` (the props proper, 78 slots).

## What landed recently — do NOT redo

All closed, gated and documented. One line each, newest first; the detail is in the doc and
the gate named is what keeps it true. None of it needed a capture session — every one was
mined out of the captures already on disk.

| when | slice | doc | gate |
|---|---|---|---|
| 07-29d | ★★ **THE FIRST THREE TOWN PORTS LAND: the MARKET, the ANTIQUE BUILDINGS and the HOUSE SURROUND pass are now in cwgen**, taking the unported-town-stage count from six to three (and the whole unported list from seven to four). All three were gated ab initio and all three isolation-run clean. ★ **The market needs NOTHING fed but the plot roles** — 6/6 site sequences draw for draw over 334 draws (116 of them inside the two factories) and **98/98 records, 686 fields**, geometry with no terrain at all. ★ **And porting it CORRECTED the decode twice.** (1) `RE_town_market.md` §0 and `gate_town_market.py`'s own docstring both put the `Chunk_getColumnAt` and the flag-B landmark push **inside** the 20-slot loop; censusing the role-9 section by call target finds **exactly one of each**, at the PLOT CENTRE, against 20 settles and 20 pushes. Flag B's meaning is unchanged, its count is one per market rather than twenty — and the draw stream needs no terrain. (2) §5's *"the SIGN is disassembled; the AXIS is fitted, one bit per block"* is **withdrawn**: that walker followed REGISTERS through the 16.16 widening, which MSVC emits two ways; following the four FRAME SLOTS instead derives all twenty, and `extract_market_slots.py` now writes a GENERATED `CwTownMarketTables.h` the gate regenerates and diffs. The capture became a cross-check (**98/98** offsets) instead of the evidence. ★ **The surround port is the strongest of the three**: 323/323 per-house site sequences draw for draw over 7,755 draws (**1,347 of them inside the prop factory the rig cannot see**) and **1,059/1,059 records, 8,472 fields** — and the house's layout, rotation and mirror coin are DERIVED, because the golden ships the house pass's own draws and the port runs `townHouseOne` for real. ★ **A cross-stage find**: the surround's factory `FUN_004f2cd0` and the market's goods factory `FUN_004f3490` have the **same first four arms** — two functions decoded a day apart from different stages. cwgen shares one implementation and both gates assert the agreement (lesson 7q). ⚠ Not byte-identical (the `pop edi` moves), so the claim is about the arms' RESULTS. ⚠ **The surround golden's first draft silently lost 24 of 1,059 records** to an index window; the fix was the measured gap (settle sits exactly 2 or 3 draws after its coin, 771/288, slot matching 1,059/1,059). Hash `0FA08D5CB7998A34` → **`CB8B2AB38BD28130`**, isolated one golden at a time | `RE_town_market.md`, `RE_town_antique.md`, `RE_town_surround.md` | **`rederive_townmarket` 18/18**, **`rederive_townantique` 62/62**, **`rederive_townsurround` 1004/1004** |
| 07-29c | ★★ **THE TOWN BUILDER IS CLOSED: 176 of 176 firing rand sites, 228,413 of 228,413 recorded draws — 100.00%.** The last two sites, `0x4eee4f` (31 draws) and `0x4ef03e` (14), are two structurally identical plot-role sections differing in one mask: `role == 0x14` takes `0x84c + rand()%2` and `role == 0x12` takes `0x84c + rand()%4`, and each places ONE model from the world model DB at the centre of its plot, dropped to the ground. ★ **A CORRECTION: they are not "town NPC spawns"** as `RE_town_plaza.md` §9 and three handoffs have called them. Ids `0x84c`-`0x84f` are **`antique-building1..4.cub`**, the call's `type` argument is a constant **0**, and roles `0x12`/`0x14` occur **in ruins and in no village** (14 and 31 plots, 0 elsewhere) — so these two sites place **the ruined buildings a ruin is made of**. The old name came from the callee's LABEL (`creature_spawn_builder`) rather than its ARGUMENTS; `FUN_00524540` is the generic entity builder. ★★ **And the geometry closes against a second, independent source.** The position is the plot centre minus **half the model's own footprint**, so the live spawn positions MEASURE the model dims — offsets group to exactly (−16,−16) for coins 0/1 and (−12,−12) for 2/3 — and `model_id_map.json`, which knows nothing about this pass, says `0x84c`/`0x84d` are 32 wide and `0x84e`/`0x84f` are 24. Two sources, same numbers; with the map's dims fed in, **all 45 positions are predicted exactly** off the seed-derived plot lattice, and the recorded `orient` equals `plot[+0x14]` 45/45. ⚠ Null baseline stated: role 0x14's `%2` is **unobservable** (both its models are 32×32), role 0x12's `%4` resolves only 2-way, and the w/h swap is invisible because all four models are square. ⚠ **NOT PORTED** | `RE_town_antique.md` | **`gate_town_antique` 290** |
| 07-29b | ★ **the LAST open band is the town builder's MARKET — RE'd and gated, and the town builder is now 99.98% closed.** `0x4e39ea`-`0x4e4fb3` was queued as "40 sites / 218 draws … but 20 `prop_push` and 20 settle sites hang off it, so unlike the last four stages it *is* checkable field by field". Right, and it undersold it. ★ **It is TWO plot-role sections**: `role == 8` at `0x4e3ac0` and `role == 9` at `0x4e3e15`. The role-9 half is a **MARKET** — 20 slots round one plot's perimeter, each `Chunk_getColumnAt` → landmark push → `rand()%5 != 0` → `rand()%3` jitter along the edge → a prop → settle → `site+0xc`. ★★ **THE SEMANTIC READING LANDS, and this time in the namespace that resolves**: `FUN_004f3630` gives `0x15 + rand()%3` and `FUN_004f3490` `0x18 + rand()%4`, which through `prop_ids.json` are **market-stand1/2/3** and **barrel/crate/open-crate/sack** — 12 stalls and 8 crates of goods. ⚠ `RE_town_yard.md` had to *withdraw* the same kind of reading because its ids go to `site+4`/`site+0x30`, which nothing hooks; **these go to `site+0xc`, which is exactly what `prop_ids.json` covers**, and the gate asserts the push target out of the binary so the distinction cannot be lost. ★★ **AND IT NAMES AN INPUT THE NPC PASS COULD NOT**: `RE_town_npcs.md` §8 lists flag B as "pushed at `0x4e3ea2`, in the not-yet-RE'd band" — `0x4e3ea2` is this pass's landmark push, so **flag B is the market-stall list**, `B ⟺ D` is explained, and the villagers' 1-3 hour schedule stop at `0x4f0fc0` is **a trip to the market**. ★★ **The hidden factory draws are DERIVED, not just priced**: both factories sit outside the builder body, LCG-recovered they reproduce the **TYPE 90/90 and all three EXTENTS 270/270**, and the measured gap (2 or 3, never anything else) predicts one-or-two hidden draws **93/93**. ★ **Role 8 has a code section, a rand site and a prop push, and is NEVER ASSIGNED** — the builder's complete set of role stores is `{0,2,3,5,6,7,9..20}`, so roles 4 and 8 are dead code, and both of role 8's emitters are empty in 92 towns. ⚠ **The band was 20 blocks, not 19**: the ledger ended it at `0x4e4fb3`, its last RAND site, which cut the 20th block's settle and push into the gap before the yard — the same mistake as 07-29's, one scale down. ⚠ **NOT PORTED**; §8's FED table is nearly empty — everything the draw stream needs is derived | `RE_town_market.md` | **`gate_town_market` 445** |
| 07-29 | ★ **the `0x4f16bb` REGION is the town builder's RUIN OCCUPANT pass — RE'd and gated — and the slice's real find is that THE BUILDER'S BODY IS 1,116 BYTES LONGER THAN THIS REPO HAS CARRIED.** The queue had it as "the ELSE branch of `desc[0x18] == 1`, so the same NPC pass for the other site classes". The partition was right and the conclusion was wrong twice over. ★ **`desc[0x18]` is 1 or 5 and nothing else** — 50 villages, 42 ruins, exactly the split `RE_town_verdict.md` already reports — so the else arm is the **RUIN's** half of the fork, and it does the opposite thing: an abandoned town repopulated with **hostile creatures** drawn from a species table, `Sequential[Combat(20.0f), WalkPath(2.0f)]`, no `LookAtPlayer`, no interaction, no schedule. The gate censuses the behaviour ctors in BOTH spans and contrasts them (village 7 kinds, ruin 3, strict subset) rather than asserting a negative from one side. ★★ **AND THE SPAN WAS WRONG: `0x4f26e9` is not the end of the builder.** The `ret 8` is at **`0x4f2b42`** — the body is `0x4e28e0`-`0x4f2b45` = **66,149 bytes**. `RE_town_plaza.md` §0 took 65,033 off Ghidra's boundary and **`frida_town_props.py`'s `inTB` has the same bound**, so **seven rand sites and one `spawn_ctor` in `0x4f26f0`-`0x4f2a5b` have never been recorded in any capture** (lesson 18 from a new direction — the filter cutting off the FUNCTION, not a callee; and two of the seven are `call edi`, which a memory-form census also misses). They are priced anyway off the global draw index: the gap after `0x4f26b3` is **8 in 35 firings and 1 in 42, never anything else, and WHICH it is, is predicted by that draw's own recorded value % 2 — 77/77.** ★★ **The species tables cross-check against a container decoded a year ago**: interpreted (never typed — the region shares tails through `0x4f1b93`) out of the binary, the `desc[0x1c]>4` and `desc[0x1c]=4` arms are **byte-identical to the DUNGEON assembler's default and style-1/2 species containers** (`RE_dungeon_species.md`, gated 6/6 live), same three `L2` ids in the same order — two functions, two methods, one table. The ruin reads `desc[0x20]%3` where the dungeon spends a `rand()`. ★★ **And `ents` CLOSES EXACTLY**, which `RE_town_npcs.md` §7 had written off: a ruin runs only 2 of the 13 `spawn_ctor` sites, so `ents-ents0` = guard+quadrant+pack+patrol+inhabitant-scatter is an identity, **35/35, residual zero, 842 entities** — every term ablated (dropping one gives 0-5/35) and the coin's modulus swept (`%5` 35/35 vs 2-7/35 for its neighbours). It is the **only** evidence the invisible block spawns anything. ⚠ **NOT PORTED**; §9 is the FED table and the ask is small — vector SIZES per building, plus the plot table. ⚠ Arm 0 pushes `0x60` into the flat list **twice** (byte-checked): a port must reproduce it or the pick becomes `%3` instead of `%4` | `RE_town_ruin.md` | **`gate_town_ruin` 3,041** |
| 07-28m | ★ **the `0x4f0396`-`0x4f147f` REGION is one stage — the town builder's NPC / DAILY-ROUTINE pass — RE'd and gated, and it is the LAST stage in the builder.** The queue's "34 sites, 59% of everything left" is `0x4f0046`-`0x4f16b6`: after the plot loop finishes, the builder walks the town's BUILDING list (`site+0x88`) and gives each building its inhabitants. Five kinds get one **named occupant** each (`cmp ecx, K` chain, kinds 1/2/4/3/5, entity types 0x84/0x80/0x82/0x81/0x83); every other building gets `1 + rand()%2` **villagers** of type 0x88, each with a behaviour tree and a **daily schedule** of (position, time) waypoints. **38 rand sites / 7,386 recorded draws / 440 villagers.** ★ **THE FIND: five bits per town predict every draw in the stage, in order.** The villager body is eight blocks guarded by five list-empty flags computed once per building — and the four tests that look data-dependent come back non-empty in **396 of 396** observations, so there is **no free parameter per villager at all**: 440 of 440 sequences exact draw-for-draw. Three of the five bits are pinned independently (C ⟺ the kind-1 arm fired, D ⟺ the kind-2/3/4/5 arms fired, B ⟺ D), which is what stops it being read off its own answer sheet (lesson 12). ★ **THE SEMANTIC CHECK IS THE CLOCK.** `0xea60` = 60000 ms = one minute and `0x1a4` = 420 = 07:00; decoded out of the recorded draw values the chain puts every villager's first waypoint at **07:00-09:58** and the last at **10:17-20:45**, monotone 440/440, **0 past midnight** — where the arithmetic *allows* 26 hours. ★ **And the hidden draws are priced with no new rig**: 7,328 of 7,351 transitions are index+1, so the villager path spends nothing off-body; the 23 that are not are exactly the four arms calling `lib_fn_4fd920` / `lib_fn_4fc180` / `lib_fn_4fde90`, priced at 669-1038 / 3322-3335 / 2010-2018 — **the two arms sharing `0x4fde90` agree to within 8, which is a check on the attribution and not an assumption**. ⚠ **This stage emits NOTHING the rig hooks** — 0 pushes, 0 settles, 0 `creature_spawn_builder` calls in the whole span — so it is a draw-structure gate, not a geometry gate, and `ents` cannot serve either (§7: six other `spawn_ctor` sites push into the same `site+0x18`). ⚠ **NOT PORTED**; §8 is the FED table, and it is small — a port needs three vector SIZES per building and the five bits, no positions | `RE_town_npcs.md` | **`gate_town_npcs` 16,117** |
| 07-28l | ★ **the `0x4ed03e` FAMILY is one stage — the HOUSE SURROUND pass — RE'd and gated, and it is the first town stage checkable field by field with no new anything.** Eight table rows at 800-802 draws each in exactly 35 towns are one walk over the house's GROUND STOREY: at every BASE module with an EMPTY horizontal neighbour, two `rand() % 6` coins drop clutter against that outside face. **8 rand sites / 6,408 draws / 1,059 records**, models `barrel`/`crate`/`open-crate`/`sack`/`bench`/`stool`/`shelter`. ★ **THE FIND: the per-house SITE SEQUENCE is predicted draw-for-draw from the module grid `CwTownHouseTables.h` already holds** — 323 of 323 houses — because `cellAt3D` rotates before it indexes and the per-direction split, unlike a draw total, is **not** rotation-invariant (lesson 13 from the strong side). ★ **And it PINS `kTownHouseOrigin` outright**: every offset here is a literal relative to the anchor, so sweeping the anchor over a whole 13-block stride gives **1,059/1,059 at +7 and 0 at all twelve others** — where `RE_town_furnish.md` §5b could only argue 7 against 8. ★ The factory `FUN_004f2cd0` spends a hidden `rand() % 7` (and a second on two of its seven arms); LCG-recovered, it reproduces the TYPE and the EXTENTS of 1,059 of 1,059. ⚠ An off-grid neighbour reads as EMPTY — `cellAt3D` returns the **zeroed global at `0x584258`** — which is the whole reason props land on the outside walls. ⚠ **NOT PORTED**, but §9 says it could be: the only FED value would be the base Y | `RE_town_surround.md` | **`gate_town_surround` 6,639** |
| 07-28k | ★ **`0x4ea254` is one of ELEVEN rand sites in the HOUSE ENTITY pass — RE'd and gated, and the observable was already in the capture.** Ninth slice running where reading the span first re-scoped the work: `0x4ea254` (1,653 draws) is the inhabitant coin of a stage running `0x4e74a5`-`0x4ea988`, five walks over the house's own 3×3×4 module grid spending **7,597 draws**. ★ **THE FIND: these are not props, they are `creature_spawn_builder` calls — and `frida_town_props.py` has hooked that function all along.** So unlike every other town stage, each record's POSITION, ORIENTATION and TYPE are in the capture, and 19,352 of them are checked field by field with no new rig (lesson 7h from a new direction: the observable was misfiled, not missing). ★ The geometry lands exactly on the FURNISHING pass's lattice: the house anchor is `plotOrigin + 7` and the record sits at the module's own `+7`, which is where `RE_town_furnish.md` §5b.2 puts the kind-0 centre — two stages decoded a week apart from different observables agreeing. ⚠ **The trap: a spawn "site" is a RETURN ADDRESS, and up to seven emit sites `jmp` to the same call**, so the per-site model offset is not one number; the emit→tail map is walked out of the binary (34 sites) and every per-site claim is made at the granularity the capture can see. ⚠ `FUN_00402150/60/70` take **no argument** — the `push eax` in front of each belongs to the `vec3_store` three lines later. ⚠ **NOT PORTED** — §9 says what a port would have to be FED | `RE_town_entities.md` | **`gate_town_entities` 46,344** |
| 07-28j | ★ **the HOUSE FURNISHING pass PORTED — and the port found four things the RE had not, three of which no draw count could ever have caught.** ★ **`VoxelGrid_cellAt3D` is not an array index**: `FUN_004d1950` calls `FUN_004d8f90` on its indices FIRST, which rotates `(a,b)` by `house[+4] & 3` and mirrors `b` on `house[+8]` — so one layout furnishes eight ways. A rigid transform preserves the (wall, non-wall neighbour) count, so the draw TOTAL is identical under any rotation and only the POSITIONS move (lesson 13 from the other side). ★ **The house sits `plotOrigin + 7`**, not at the plot origin: 39 blocks centred in the 51-block plot. `CwTown.h` carried 0 with a comment asserting it was deliberately NOT centred — a sentence copied forward, and 6 blocks wrong in the engine's town rendering (lesson 7e). ⚠ The decomposition alone does **not** pin the 7 — 7 and 8 both close — and what breaks the tie is that the offsets are the span's own `.rdata` literals; the gate reports both halves. ★ **The type-`0x10` jitter is f32** (`divss`/`mulss`): in double it is off by one 16.16 unit in 1 record in 5,000, which is exactly how it was found. ★ And the pass's first draw is the house's first RECORDED draw in **323 of 323** houses, so the gate has no free parameter at all. The 21 offsets are machine-derived from the 6,759 records, never scraped (lesson 7i) | `RE_town_furnish.md` §5b | **`rederive_townfurnish` 1,004/1,004** — 323/323 site sequences draw-for-draw over 8,717 recorded + **12,248 hidden** draws, 6,759 records / 40,554 fields DERIVED; `gate_town_furnish` 26,891 → **34,307** |
| 07-28i | ★ **the `0x4eafd2` CLUSTER is one stage — the HOUSE FURNISHING pass — RE'd and gated.** Seven table rows that all fired in exactly **35** towns turned out to be one walk over the house's own 3x3x4 MODULE GRID: at every WALL module, furniture against each of the four horizontal faces whose neighbour is not a wall, then a centre piece chosen by the module's `+8` KIND byte. **13 rand sites / 8,717 body draws / 21 push sites / 6,759 records.** ★ **THE FIND: the cost is somewhere the rig cannot see.** Every record is built by `FUN_004f2ee0`, a 1,359-byte factory with **eight more rand sites**, and `frida_town_props.py` filters to the builder body (lesson 18). Those draws were recovered anyway — msvcrt's rand is a plain LCG, so stepping it from the town's own zone seed pins every unrecorded index (lesson 33) — and the decoded factory then reproduces the type AND the extents of **4,958 of 4,958** live records, **0 failures**. ★ The null baseline is reported with it: the branch structure admits **exactly one type in 2,466 of the 4,958 gaps** and two in 2,424, so half the corpus is forced (lesson 5). ⚠ **Slot E takes no coin** and its record count is what says so: 1,005 against 653-664 for the six coined slots. ⚠ **NOT PORTED** — `RE_town_furnish.md` §7 lists what a port has (the module grid, now carrying `kind`/`flag`) and the one thing it does not (a per-record voxel read) | `RE_town_furnish.md` | **`gate_town_furnish` 26,891** |
| 07-28h | ★ **the town builder's ROLE-0/7 PLOT RE'd, gated and PORTED — and the census re-scoped it DOWNWARDS.** `0x4ef7c8` (52,811 draws, 23% of the builder) reads as a monster and is a **shade jitter on a voxel**: the stage paints a radius-8 disc at each of the four QUADRANT CENTRES of every role-0/7 plot, one draw per voxel in the 7..8 annulus. **The whole thing pins on one number** — 208 disc cells, 52 ring cells, so flat ground costs exactly `2 x 52 = 104` draws, and over 430 captured discs the minimum run is **104, never lower, 178 of them exactly**. That single count fixes the box, both radii, the half-block offsets and the per-column formula at once. ★ **Every input was already in a port**, three under another name (lesson 7h, fifth slice running) — and the sixth closed a standing open thread: **`lib_fn_4fc140` is not a library function**, it is a 50-byte `World_columnHumidity` (`col+8`, else `FUN_004f8b40`), which is why three independent decisions threshold it at exactly 0.8. ★ The **RUIN** half needs no terrain at all: role + `falloffSquared >= 0.72` predicts the tree-site count in **32 of 32** dry ruins, and the 3 misses are all coastal, which the gate bounds instead of tuning. ⚠ Also settled: `FUN_004d8e30` is length **SQUARED** (that is why 49/64 are r=7/r=8), and `0x4e310a`/`0x4eaa7a`/`0x4ee3aa` are **alignment NOPs**, not functions — the builder really is one body (⚠ **but 66,149 bytes, not the 65,033 recorded here**: 07-29 found the `ret 8` at `0x4f2b42`, so this entry's end address was Ghidra's and wrong — lesson 7o) | `RE_town_plaza.md` | **`gate_town_plaza` 11,877**; **`rederive_townplaza` 169/169** |
| 07-28g | ★ **the town builder's ROLE-6 PLOT RE'd, gated and PORTED — the biggest single stage in the builder.** `0x4e54e8` (80,117 draws) was one table row; censusing the rand sites inside its SPAN found **fourteen** in one ~2.9 KB stage spending **113,353 draws over 50 plots = 49.6% of the body's 228,413**. Sixth slice running where reading the span first re-scoped the work. Two plot-loop free parameters got *pinned* rather than carried: the plot order is r-outer/c-inner indexed `r + n*c` (**59/59**, recovered from the fence rows' own origins), and `span`=51 falls straight out of `15,606 = 6 x 51²`. ★ The port emits a **per-draw SITE TAG** — six of the fourteen sites cost one draw each, so a wrong branch between a pair moves no count and is invisible to a draw total; the gate compares tag sequences **draw for draw, 17/17 towns**. ⚠ **A semantic reading was written down and withdrawn**: the ids resolve through `prop_ids.json` to market furniture, but that is the `site+0xc` namespace and these go to `site+4` / `site+0x30`, which **no capture hooks** (lesson A1). Fences ARE proven — `0x34+rand()&3` = `fence01..04`, 1,213/1,213 records | `RE_town_yard.md` | **`gate_town_yard` 2,822**; **`rederive_townyard` 51/51** |
| 07-28f | ★ **the town builder's HOUSE PASS RE'd, gated and PORTED — one site turned into a whole closed stage.** `0x4e742e` (15,609 draws) is the module-orientation roll, and reading its SPAN found it is the last of **thirteen** rand sites in the same ~1 KB spending **17,947 draws over 435 houses**. Selector = `plot[+0x10]`, the field the PROMOTION slice decoded. The 23 module grids are **executed out of Server.exe** by `extract_house_layouts.py`, never typed — two MSVC habits (pushes hoisted above the variant branch; the store for call N emitted after call N+1's pushes) make a listing scrape silently wrong. ★ The tables predict **51 doors** and `435x36 - 15,609 = 51` | `RE_town_house.md` | **`gate_town_house` 1,446**; **`rederive_townhouse` 140/140** |
| 07-28e | ★ **the town builder's INHABITANT SCATTER (`0x4eda58`) RE'd, gated and PORTED** — per plot with role != 2 and score > 0.2, the four QUADRANT CENTRES each take a `rand() & 7` and a zero spawns a **kind-5 Entity** (the overworld scatter's record class, not the camp's). Fourth slice running whose blocking input was **misfiled, not missing**: the species list is a **hardcoded five-entry literal** at the head of the builder, and `desc+0x28` is `cw_featuregen`'s `msub`. ⚠ It does NOT advance the stream — interleaved with the other 169 sites in 66 of 69 towns | `RE_town_creatures.md` | **`gate_town_creatures` 3,045**; **`rederive_towncreatures` 140/140** |
| 07-28d | ★ **the town builder's PROMOTION pass RE'd, gated and PORTED** — and all three of its inputs were misfiled: `FUN_004e19f0` is `std::sort` (the key is `plot[+0x18]` ASCENDING, in the predicate), `site+0x79` is **not a faction** but the site-kind grid's CORNER RANK (which `cw_featuregen` already computed and threw away), and the RUIN's `desc+0x1c` — a third input the lead never named — is a no-draw climate branch on the region site. Corner tag **4 hands out no role at all**, closing `RE_town_props.md` open problem 2 | `RE_town_promotion.md` | **`gate_town_promotion` 2,071**; **`rederive_townpromo` 140/140** |
| 07-28c | ★ **the TOWN BUILDER's scan pass PORTED, and towns become reachable**: the builder sits at the HEAD of the zone stream (entry index **0 in 23 of 71** towns, median 53), and a town zone's `Village` classification is **vacuous** — both its consumers are skipped at site kind 1/3/4. First ab-initio gate ever to enter a town zone | `RE_town_verdict.md` §6 | **`rederive_townverdict` 641/641**, arrival **34/34**, whole scan phase exact in **29/34**; `gate_town_verdict` 3,984 → **5,469** |
| 07-28b | ✅ **`cwgen_test` GOES FULLY GREEN**: the bed pass's CARVE LEVEL is `FUN_004f9b70` in FULL — the type-1 village damp and the ocean-site repulsion live inside it, and all three ports used the *open* base height. `rederive_zoneac` 107/109 → **109/109** | `RE_zone_tail.md` | `gate_zone_bed` still 44/44; `rederive_river` regenerated (1 row of 3,005, `w` by 1 ULP) |
| 07-28 | ★ **the "type-10 terrain drift" RETRACTED** — it was emitter A settling on the zone centre instead of `(cx+3, cz+3)`; Y went 73/109 → **109/109**, terrain untouched. Plus three prologue findings, one of them an open gap (the land mask's village-road cube) | `RE_zone_emitters_ac.md`, `RE_zone_landform.md` | `rederive_zoneac` Y **109/109**, now in the pass criterion |
| 07-27f | the town builder's **plot verdict** decoded in full + the town-builder draw cost MEASURED (17-19,576); `gate_town_props` fixed and green | `RE_town_verdict.md` | `gate_town_verdict` 3,984 |
| 07-27e | **the scatter PORTED ab initio** + both species pickers decoded; the port's hand-typed tables were wrong | `RE_zone_creatures.md` | `rederive_creatures` 1043/1043 |
| 07-27d | **the OVERWORLD CREATURE SCATTER** RE'd + gated — and the emitter-C gap is the TREE PASS, not this | `RE_zone_creatures.md` | `gate_zone_creatures` 217/217 |
| 07-27c | **EMITTER A ported ab initio**, and `0x51cd79` — the mat-38 loop's site-kind guard **no port had** | `RE_zone_emitters_ac.md`, `RE_zone_tail.md` | `rederive_zoneac` 107/109 |
| 07-27b | the camp's **RENDERING** half — `columnCampProps`, wired into `VegScatter`, cached per zone | `RE_5104e0_camp.md` §Rendering | `--proptest` 5/5 |
| 07-27 | **`FUN_005104e0` end to end** — every prop and every `Spawn` field, from the seed | `RE_5104e0_camp.md` | `gate_zone_camp` 4,340; `rederive_camppop` 3111/3111 |
| 07-27 | the site list's proximity test is **16.16 — the entry carries a half block** | `RE_zone_site_loop.md` | `rederive_campgrid` 15990/15990 |
| 07-26g | the **river/lake bed pass** (`0x51c09a`) — the last pre-chain stage | `RE_zone_tail.md` | `gate_zone_bed` 44/44 |
| 07-26f | the landform 742-loop runs **X-outer, Z-inner** — the odd-zone upstream drift | `RE_zone_landform.md` | `gate_zone_landform_order` 187/187 |
| 07-26e | **`Prop_settleOnTerrain` = `FUN_005287b0`**, a 3×3 flatness test | `RE_zone_site_loop.md` | 24/24 odd zones ab initio |
| 07-26d | the site list holds **one** entry; the site loop **retries** up to 10× | `RE_zone_site_loop.md` | `gate_zone_siteloop` 228/228 |
| 07-26c | the rest of the type-gated pre-chain (0xd/4, 0xb, 0xc) + the gen-scatter's site-kind guard | `RE_zone_tail.md` | `gate_zone_prechain` 50/50 |
| 07-26b | the landform predicate — **`surfH` was short in every type-6/0xd cell** (two land masks) | `RE_zone_landform.md` | `gate_zone_landform` 22/22 |
| 07-26 | the camp **descriptor** is derived; `+0x20` is the region mission counter | `RE_camp_descriptor.md` | `rederive_campdesc` 693/693 |
| 07-26 | the **type-6 3×3 knoll grid** at `0x51aa57` — nine draws no port modelled | `RE_zone_tail.md` | (folded into the above) |
| 07-25b | **emitter B is the dense-forest tree pass** — already bit-exact; the "gap" was the rig's own filter | `RE_zone_tail.md` | `gate_zone_tail` 6,558; `rederive_zonepropsb` 5/5 |
| 07-25 | the odd-parity `FUN_004e0740` props; village paths are CW's own cosine groove | `RE_zone_props.md` | `rederive_zoneprops` 5/5 |
| 07-25 | the site-kind grid in cwgen; the town generator on the derived lattice | `RE_site_kind_grid.md`, `RE_town_props.md` | `rederive_sitekind` 116/116; `rederive_townlattice` 16228/16228 |

**Corrections inside those that are easy to re-break.** Each was a real bug, and each maps
to a numbered lesson above:

* the odd-parity retry loop draws **Y first** (`0x51cbbb`) then X (`0x51cbfc`). Both ports
  had them swapped — found and re-found in three files on three separate occasions (27).
* **`ftol` truncates** — it is `_ftol2`, not a rounding (16).
* the landform 742-loop is **X-outer, Z-inner** (13).
* the site list is **never** seeded with feature-cell centres (28).
* `surfH` multiplies the **second** land mask `[ebp-0x12f4]` inside types 6/0xd (4).
* `cw_seed.configure()` must re-point `cw_featuregrid`, and nothing may cache
  seed-derived tables at import (29).

## YOUR TASK

### The next slice: PORT the town builder. The RE side of it is finished.

**As of 07-29c the town builder is CLOSED on the RE side** — 176 of 176 firing rand sites,
228,413 of 228,413 recorded draws, 100.00%, nothing open (`RE_town_antique.md` §5, where
the census is re-run over every corrected span). There is no decoding work left in
`FUN_004e28e0`.

**What is left is the PORT.** Eleven of the builder's stages are now in `cwgen`; **three are
RE'd and gated with no port at all**. Each names what it would have to be FED in its own
file, and the tables are much smaller than the stages' draw counts suggest.

✅ **Items 1-3 are DONE (07-29d)** and are kept here because their entries were accurate and
the method transferred:

| # | stage | doc | outcome |
|---|---|---|---|
| ✅ 1 | **MARKET** (role 9) | `RE_town_market.md` §8 | "**nothing FED**" was right — and it was *more* right than written: the one column read is at the plot centre, so the geometry needs no terrain at all. `rederive_townmarket` 18/18 |
| ✅ 2 | **ANTIQUE BUILDINGS** (roles 0x14/0x12) | `RE_town_antique.md` §6 | "**one table**" was right — the four `.cub` dims out of `model_id_map.json`. `rederive_townantique` 62/62, 45/45 positions |
| ✅ 3 | **HOUSE SURROUND** | `RE_town_surround.md` §9 | "*could* be ported today, only the base **Y** is FED" was right. `rederive_townsurround` 1004/1004, 1,059/1,059 records |

**These three are what is left, in this order:**

| # | stage | doc | what a port needs |
|---|---|---|---|
| 4 | **RUIN OCCUPANTS** | `RE_town_ruin.md` §9 | the building list `site+0x88` and each building's vector **SIZES** (the picks are `rand() % size`, so only the size advances the stream) |
| 5 | **VILLAGE NPC** | `RE_town_npcs.md` §8 | the same building list, three vector sizes per building, and five per-town bits. **No positions at all** |
| 6 | **HOUSE ENTITY** | `RE_town_entities.md` §9 | the hardest: a per-emit-site model anchor that lives in the server's model DB and nothing in `cwgen` reads |

⚠ **4 and 5 share one blocker and it is the only real one: the BUILDING LIST.** Both walk
`site+0x88`, which the house/plot chain produces and `CwTown` does not have. Deriving it
once unblocks both, and `RE_town_market.md` §3 has already identified one of its consumers
(flag B is the market-stall list, pushed once per market at the plot centre — see the
07-29d correction).

★ **START HERE — 07-29d censused it, and the answer reorders this queue.** Every
`lea ecx, [reg + 0x88]` in the whole builder body (`0x4e28e0`-`0x4f2b45`) is:

```
4E76DB  -> 0x4F2BE0   the ONE write        (in the HOUSE ENTITY pass, item 6's span)
4F0065  -> 0x530550 |
4F02D9  -> 0x530550 |  the village NPC pass's reads
4F02EB  -> 0x4D3DE0 |
4F168F  -> 0x4D3DE0 |
4F21F9  -> 0x530550 |  the ruin occupant pass's reads
4F220B  -> 0x4D3DE0 |
```

and the census is **exhaustive for the other address forms too** — no direct
`mov [reg+0x88], …`, no `add reg, 0x88`, and no indexed `[reg + reg*s + 0x88]` anywhere in
the body (lesson 7o's "census the register form too", applied up front this time). So the
list has exactly **one producer and six consumers**, and `0x4f2be0` is
`std::vector<T*>::push_back` (element size
4; it range-checks the argument against its own storage, grows through `0x426eb0`, then
copies — so a vector of POINTERS). That single push sits at `0x4e76db`, inside
`0x4e74a5`-`0x4ea988` — the per-house entity pass — which means:

* **the building list is one entry per HOUSE, in house order**, and `townHousePass` already
  produces exactly that sequence. The "blocker" for 4 and 5 is largely a *plumbing* problem,
  not a derivation one;
* but it lives **inside item 6's span**, so 6 is no longer clearly last — read `0x4e76db`'s
  neighbourhood before choosing between 4/5 and 6.

⚠ **What this census does NOT establish**, and it is the next thing to pin: whether the
pushed object is the same `house` the house pass builds (the pointer comes from a frame slot
set further up, not from the visible instructions), and the **three vector SIZES per
building** that `RE_town_npcs.md` §8 asks for. The write site is byte-censused and certain;
"one per house" follows from where it sits and is strong; the object identity and the sizes
are neither. A plausible cross-check to run first: buildings ≈ houses, and both passes report
**35 towns** against the surround's **35 towns / 323 houses**.

⚠ **Every one of these WILL move the hash.** So the isolation-run discipline at the end of
this file is not optional: move only the new golden aside, confirm the old hash returns
exactly, and **diff the whole output**, not just the hash — a measured number nobody diffs
is a gate that cannot fail. All three 07-29d ports were isolated this way, one at a time,
and each restored the previous hash exactly with every other gate's numbers byte-identical.

★ **What the three finished ports teach about the three left** (and it is the same thing
four earlier slices found from the RE side): **porting a stage re-reads it, and the re-read
corrects it.** The market's decode was wrong about *where its column read sits* and about
*whether its jitter axis was derivable* — neither error moved a single draw count, so nine
gates and three handoffs passed over both. Budget the port of 4/5/6 as a re-read of the
decode, not as transcription; and when a doc says a thing "cannot be resolved from the
disassembly", check what the resolver was tracking before believing it (lesson 7v below).

★ **Read `RE_town_yard.md` §6.1 and §6.2 before writing the first port.** §6.1 is the
ASSERTED / FED / MEASURED table this kind of stage needs; §6.2 is the trap that cost a day
(feeding a gate a terrain COUNT is fine, feeding it a terrain SHAPE is not). And
`RE_town_furnish.md` §5b/§7 is the one to read for technique: the golden ships the
**contiguous LCG stream**, hidden callee draws included, so a body draw only lands on its
recorded index if every unrecorded draw in front of it was spent too — that is how a
factory the rig cannot see gets its draw counts under test.

### Reference: EMITTER C, and why it is not the task

Kept because the analysis is still true and still the reason the town chain was done first.

**The creature scatter is RE'd, gated and PORTED ab initio** (07-27e,
`gate_zone_creatures` 217/217, `rederive_creatures` 1043/1043, `RE_zone_creatures.md`).
Both species pickers are decoded: `FUN_005290d0` = `World_pickCreatureSpecies` (a climate
candidate list, one draw) and `FUN_0052bfa0` = `World_pickPackMemberSpecies` (a random
sibling from the leader's species family, 0 or 1 draw).

So the tail is now walkable from a seed all the way to `0x51f981`:

```
pre-chain -> tree pass -> emitter B -> camp lattice -> FUN_005104e0 -> creature scatter
```

and `CwZoneCamp::zoneAfterCamp` is the route (it runs the camp stages *conditionally* --
`0x51e804` sends descriptor types 0/1/5/0xa/0xe past them spending no draws, and
everything downstream still runs; the camp path's own entry points stop at `NotFiring`).

**What is left between there and emitter C is the TOWN BUILDER, and nothing else.**
Emitter C only fires in kind-1 (town) zones, and a town zone's descriptor is type 1, which
is exactly the type that gates `FUN_004e28e0` in at `0x51d43e` -- upstream of the tree
pass.

⚠ **2026-07-27f: the "three rand sites" lead is SETTLED, and it does not open emitter C.**
The previous handoff carried `0x4e2d83` / `0x4e2e3b` / `0x4e3039` as "each spent
unconditionally per plot", from which the builder's draw COST would follow. Measured
against the 92 towns already on disk (`randN1 - randN0`, which `frida_town_props.py`
records, so the cost is a subtraction and not an estimate):

* only `0x4e2d83` is unconditional -- exactly `plotCount` draws in **92 of 92** towns.
  `0x4e2e3b` fires 0-25 times and `0x4e3039` 0-14, and `0x4e3039` never fires in a ruin.
* the builder spends **17 to 19,576** draws (median 1,820) across **176 firing rand
  sites**; the scan phase accounts for at most ~50 of them. The two hottest --
  `0x4e54e8` (a `rand()%10` scatter gate) and `0x4ef7c8` -- are per-column loops over the
  town's own finished terrain and carry 36% of everything the layer spends.
  ✅ **Both are now CLOSED** (`RE_town_yard.md` 07-28g, `RE_town_plaza.md` 07-28h), and
  neither needed the whole builder: each was one stage whose span, read first, held all
  of it.

So **emitter C needs essentially the whole 64 KB builder ported**, not a per-plot formula,
and the plot heights are not the binding constraint -- the size of the thing is. That is a
real result and it is why emitter C is no longer the next task. What the slice *did* close
is the **plot verdict** (`RE_town_verdict.md`, `gate_town_verdict` 3,984 checks): a plot is
a 2 iff it is not water, has a column scoring above 0.1, is not sand (sand -> role 7), and
passes `score + 0.25 > rand()/32767` -- then the `maxH - minH > 16` cull; and the score is
`World_falloffSquared(cell, plotOrigin + span/2)`, **derived from the seed**, 1,485/1,485.
Role 6 is a later villages-only coin pass. Read that file before touching the builder.

⚠ **And read its §5 before re-deriving anything about towns.** Most of that verdict rule
had been in `RatForge/tools/cubeworld_re/cw_town.py` since 2026-07-07 — validated against
one town — while this repo's `RE_town_props.md` carried it as open. Two corpora, one
question, asked twice (lesson 26). **Grep the old tree first.**

⚠ Two things that will bite at emitter C, both already paid for elsewhere:
* it gates on the per-zone **site-kind** byte, which cwgen derives
  (`rederive_sitekind` 116/116) -- do not re-derive it from the feature-cell type.
* `lib_fn_4fc140` is thresholded at exactly 0.8 by emitter C's street-light variant *and*
  by the forest tree builder's type pick. See the open thread below -- read the body before
  labelling it.

⚠ **`0x51fa10` is not the whole of emitter C.** The tail table names it as the emitter, but
`0x51f9f2` starts a 256-column nest and `0x51fa10` is a `mov [ebp-0x141c], 0x1d6` inside
it. Read the span before assuming where the emitter begins.

### Left undone in the creature slice, deliberately

* **No Python mirror.** `cw_rederive` has no `cw_creatures.py`; the C++ is the only port.
  The golden is capture-derived rather than Python-derived so nothing needs it today, but
  every other stage in this tail has both.
* **Positions are byte-proven, not live-proven.** No capture records where a creature
  LANDED -- only draws. The 85-block spacing, the `+0x18`, the half-block on X/Z and the
  ring radius 8 all come from the disassembly. A rig reading the `[ebp-0x1308]+0x18`
  vector the way `frida_zone_props2.py` reads the prop vector would close it; it is the
  one thing in this slice that would want a capture session.
* **Zone (33020,32660)** is the one capture zone whose LCG origin `make_creatures_golden.py`
  cannot find, so it is absent from the golden. It is also the only kind-3 zone of the 56.
  Not chased.
* **`0x51f285`** (the mat-12 species branch) has still never fired in any capture.

### Then, in order

✅ **Open problem 0 is fully closed (07-28) and `cwgen_test` has been GREEN since** — all
gates pass, both configs; the current hash is **`0FA08D5CB7998A34`** (`2D52E0BE1C55FFAB`
was the 07-28b one). The list below is what follows the PORT work at the top of this
section.

1. ✅ **The rest of the town chain — the RE half is DONE (07-29c), 176/176 sites, 100.00%.**
   What survives of this item is the PORT, which is promoted to the top of this section.
   The history below is kept because its *method* is the transferable part — every one of
   these stages was re-scoped by reading its span first.
   ⚠ **Re-scoped again 07-28d — read
   `RE_town_promotion.md` §5 and `RE_town_verdict.md` §6 before planning it.** Two of the
   builder's stages are now RE'd *and ported*: the verdict SCAN (`rederive_townverdict`,
   arrival 34/34, whole scan exact in 29/34) and the PROMOTION pass
   (`rederive_townpromo` 140/140, whole pass exact in the same 29/34 — it adds no new
   error). The builder is entered at zone-stream index **0 in 23 of 71 towns**, median 53,
   so arriving was never the hard part; the rand sites *downstream* are, and after 07-29
   there are **42** of them left, all but two in one band.

   ✅ **`0x4eda58` (07-28e), the HOUSE PASS (07-28f), the ROLE-6 YARD (07-28g), the
   ROLE-0/7 PLAZA (07-28h), the HOUSE FURNISHING pass (07-28i/j), the HOUSE ENTITY
   pass (07-28k), the HOUSE SURROUND pass (07-28l), the NPC / DAILY-ROUTINE pass
   (07-28m), the RUIN OCCUPANT pass (07-29), the MARKET (07-29b) and the ANTIQUE
   BUILDINGS (07-29c) are CLOSED.** Counted mechanically
   by span census (the method is written down in `RE_town_plaza.md` §9 so the next recount
   is reproducible): **all 176 firing sites are closed, carrying all 228,413 of the
   draws the rig records inside the body** (100.00%; the count including callees is
   much larger — the rig's filter is the difference, lesson 18, and 07-28i is the
   slice that finally measured through it, 07-28m the one that priced a whole stage's
   callees off the global draw index, and 07-29 the one that found the filter was also
   **cutting off the end of the builder itself**, lesson 7o). ⚠ The 07-29b figure of
   174 / 228,368 / 99.98%, the 07-29 figure of 134 / 228,150 / 99.88%, the 07-28m figure of
   123 / 225,278 / 98.6%, the 07-28l figure of 85 / 217,892 / 95.4%, the
   07-28k figure of 77 / 211,484 / 92.6%,
   the 07-28j figure of 66 / 203,887 / 89.3%
   and the 07-28g figure of 39 / 138,935 are
   superseded by this census, which is the reproducible one. The guess that `0x4e5136`/`0x4e54fe` "sit in the same neighbourhood as
   `0x4e54e8` and may well fall with it" was right, and understated: **all fourteen** sites
   in `0x4e5000`-`0x4e5c00` fell together as one stage.

   ✅ **`0x4ef7c8` is CLOSED too (07-28h)** — and the 07-28g note on it was right about
   the shape and wrong about the sub-stage: `0x4ef938`/`0x4ef94e` are **not** a separate
   stage, they are the same site's tree, reached by ruins (which skip the disc) as well as
   villages. `RE_town_plaza.md` has it all. The **plot heights** stay region-cache-blocked
   and are still not the binding constraint.

   ✅ **The `0x4eafd2` cluster is CLOSED too (07-28i)** — it was seven rows of one
   stage, the HOUSE FURNISHING pass, and the census found **thirteen** sites in it, not
   seven (four are `call edi`, which a six-byte-pattern census misses — that is also why
   the whole-builder census finds 170 sites where the capture holds 176). `RE_town_furnish.md`.
   ✅ **And PORTED 07-28j** — it was the only stage in this run left RE'd-and-gated
   without a port, and §5b/§7 of that file record what the port had to find first.

   ✅ **The furnishing pass is PORTED too (07-28j)** — `townFurnishHouse` in `CwTown.h`,
   `rederive_townfurnish` 1,004/1,004. Read `RE_town_furnish.md` §5b and §7 before the
   next port: §5b is four findings the RE did not have and the port could not do without,
   and §7 is the ASSERTED / FED table. The one genuinely new gate technique is worth
   reusing: the golden ships the **contiguous LCG stream**, hidden callee draws included,
   so a body draw only lands back on its recorded index if every unrecorded draw in front
   of it was spent too — that is how a callee the rig cannot see gets its draw COUNTS
   under test.

   ✅ **`0x4ea254` and its whole stage are CLOSED (07-28k)** — it was one of ELEVEN rand
   sites in the HOUSE ENTITY pass, `RE_town_entities.md`, `gate_town_entities` 46,344.
   With 07-28l the per-house region is closed end to end: house pass → entity pass →
   interior marking → furnishing → **surround**, `0x4e6520` all the way to `0x4ed9ea`
   with no unexplained draw in between.

   ✅ **The `0x4ed03e` FAMILY is CLOSED too (07-28l)** — it was one stage, the HOUSE
   SURROUND pass, `RE_town_surround.md`, `gate_town_surround` 6,639. The same-town-count
   tell was right for the fourth time running.

   ✅ **The `0x4f0396`-`0x4f147f` REGION is CLOSED too (07-28m)** — it was one stage, the
   NPC / DAILY-ROUTINE pass (`0x4f0046`-`0x4f16b6`), `RE_town_npcs.md`,
   `gate_town_npcs` 16,117. The advice above paid twice over: checking `settles`/`pushes`
   first returned **zero records in the span**, which is what said immediately that this
   could not be a geometry gate, and reading the span named the stage from its call list
   (`SequentialBehavior`, `WalkPathBehavior`, `RandomWalkBehavior`) before a line of
   analysis. **A stage that emits nothing the rig hooks is still gateable** — here on the
   draw structure, because five bits per town fix every sequence.

   ✅ **The `0x4f16bb` REGION is CLOSED too (07-29)** — it was the **RUIN OCCUPANT pass**
   (`0x4f16bb`-`0x4f2b45`), `RE_town_ruin.md`, `gate_town_ruin` 3,041. Not "the NPC pass
   for the other site classes": `desc[0x18]` is only ever 1 (village) or 5 (ruin), so it
   is the ruin's own stage — hostile creatures, no schedule. **Read its §2 before touching
   the builder again**: the body ends at `0x4f2b45`, not `0x4f26e9`, and the capture rig
   had the short bound.

   ✅ **The `0x4e39ea` band is CLOSED too (07-29b)** — it was the **MARKET** (role 9),
   `RE_town_market.md`, `gate_town_market` 445, and its span is `0x4e3a3f`-`0x4e5023`
   (the ledger's `-0x4e4fb3` was the band's last RAND site and cut off its 20th block).

   ✅ **The last two sites are CLOSED too (07-29c)** — `0x4eee4f` / `0x4ef03e` are the
   **ANTIQUE-BUILDING** placements on ruin plots, `RE_town_antique.md`,
   `gate_town_antique` 290.

   ★★ **THE TOWN BUILDER IS CLOSED.** By the same span census (method in
   `RE_town_plaza.md` §9, re-run 07-29c over both captures with every corrected span):
   **176 of 176 firing rand sites, 228,413 of 228,413 recorded draws — 100.00%, nothing
   open.** ⚠ The 07-29b figure of 174 / 228,368 / 99.98%, the 07-29 figure of
   134 / 228,150 / 99.88%, the 07-28m figure of 123 / 225,278 / 98.6% and the 07-28l one
   are all superseded.

   ⚠ **Two things that "100%" does NOT mean.** (1) It is a statement about the **recorded**
   stream: the furnishing, surround and market factories, the NPC pass's three occupant
   initialisers and the seven sites past the old body bound all spend draws that are not in
   the 228,413 — each is priced or derived in its own file, none is counted here.
   (2) **RE-closed is not PORT-closed** — see the next item.

   ▶ **So the town work that is LEFT is the PORT** — and as of 07-29d it is half done.
   The MARKET, the ANTIQUE BUILDINGS and the HOUSE SURROUND pass are **in cwgen and gated
   ab initio**; **three stages** are still RE'd and gated with no port: the HOUSE ENTITY
   pass (`RE_town_entities.md`), the village NPC pass (`RE_town_npcs.md`) and the RUIN
   OCCUPANT pass (`RE_town_ruin.md`). Each names what a port would have to be FED in its own
   §8/§9. The three that landed confirmed those tables were accurate — and in the market's
   case optimistic in the right direction, since the stage turned out to need no terrain at
   all.

   ⚠ **And two of the dispatch's sections are DEAD**: roles **4 and 8** have code and are
   never assigned — the builder's complete set of stores to a plot's `+0xc` is
   `{0,2,3,5,6,7,9,10..20}`. Role 8's section even has its own rand site and prop push, and
   both are empty in 92 towns. Do not scope work on either without re-checking that
   (`RE_town_market.md` §2).

   ⚠ **A correction: `0x4f1f4b` is NOT "in a CALLEE".** Earlier handoffs said so; it is
   inside the builder's own body (`0x4e28e0`-`0x4f2b45`, `RE_town_plaza.md` §0 as corrected
   07-29, where `0x4ee3aa` is proven to be an alignment NOP and not a boundary), at offset
   0xF66B.

   ⚠ **And a second-order one worth carrying: lesson 20 was applied to the interior splits
   and not to the far boundary.** Merging Ghidra's three NOP-split fragments fixed where it
   cut the body in two and said nothing about where it decided the body STOPPED — which was
   1,116 bytes early, and which the rig then inherited. **When you merge a split body, check
   its `ret` too.**

   There is no monster left, and after 07-29c there is nothing left at all: the two that
   carried "36% of everything the layer spends" were `0x4e54e8` and `0x4ef7c8`, both closed,
   and the tail closed behind them one band at a time. **The whole builder is decoded.**

   ✅ **The role-6 yard is now PORTED too** (`townYardPass` in `CwTown.h`,
   `rederive_townyard` 51/51). Read `RE_town_yard.md` §6 before writing the next port —
   §6.1 is the ASSERTED / FED / MEASURED table this kind of stage needs, and §6.2 is the
   trap: feeding a gate a terrain COUNT is fine, feeding it a terrain SHAPE is not. The
   first tape front-loaded the qualifying cells and desynchronised 5 of 17 towns at the
   centre cell; the fix needed no new golden field, because the CENTRE draw's position
   among the CELL draws is itself an observation.

   ⚠ **Read the span before budgeting for it — EIGHT for eight now.** 07-28i is the
   fourth where neighbouring table rows sharing an exact town count (all seven of the
   `0x4eafd2` cluster fire in exactly 35 towns) was the tell that they are one stage;
   and 07-28h was the first where the census re-scoped the work **downwards**: `0x4ef7c8` is 23% of the
   whole builder's draws and turned out to be a shade jitter on a voxel, with every input
   already in a port. 07-28g beat 07-28f's record: `0x4e54e8` was one line in a table and turned out to be one of
   **fourteen** sites in a single ~2.9 KB stage worth **half of everything the builder
   spends**, which then closed in an afternoon *because* the span was read first.
   07-28f was the previous best: `0x4e742e` was one line in a table and turned out to be
   the last of thirteen sites in one ~1 KB stage, which then closed entirely in a day. `0x4eda58` was filed as "not nearly free" and its two inputs
   were a hardcoded literal and a field already in a port under another name; the
   promotion slice said the same thing three times in one afternoon. **Before budgeting
   for a stage, disassemble its span, census the rand sites INSIDE that span, and grep
   the ports for its inputs.** The site census is the cheap part and it has re-scoped
   every one of these.

   ⚠ **What the promotion slice teaches about scoping the rest** (and it happened three
   times in one afternoon): every input that slice was blocked on was *misfiled*, not
   missing. `FUN_004e19f0` was asked for "its sort key" and has none — it is `std::sort`
   and the key is in the predicate. `site+0x79` was called a faction for a year and is the
   site-kind grid's corner rank, **which `cw_featuregen` was already computing and
   discarding** (lesson 26, the third instance). And the ruin's `desc+0x1c` — an input
   nothing had named at all — fell to one byte scan. **Before budgeting for a stage, check
   whether its inputs are already in a port under another name.**
2. **The dungeon mob pass + boss spawn + light sources** into `cw_rederive`/`cwgen`. All
   gated; all pure functions of the finished dungeon voxel stamp, which the port already
   produces bit-exact — no captured booleans, no order state. Then the engine half of
   **light emission** (rendering kind-7 / kind-4 records as actual lights), RatForge work.
3. **Phase 4 — the infrastructure completeness sweep** (`WORLDGEN_RE_PLAN.md`): the ~84
   `world/logic` functions that are chunk/zone containers, serialisation and `map`/`set`
   storage. Low RE value, no gates needed; the goal is coverage, so no `Unsorted` worldgen
   residue is left.

### Open problems

~~**0. The two things `rederive_zoneac` measured on its first run (07-27c).**~~
✅ **BOTH CLOSED 2026-07-28, and NEITHER was what it was filed as.** `rederive_zoneac` is
**109/109** — the first cwgen gate to derive an overworld emitter from the seed with
nothing left over.

  * ~~the river/lake BED pass over-counts in 2 of its 30 river zones~~ — **the CARVE LEVEL
    was wrong in all three ports.** `0x51bcde` calls `FUN_004f9b70` with the same
    three-argument shape the zone builder's bh-table fill uses at `0x518a55`, and **both the
    type-1 village damp and the ocean-site repulsion (`0x4fa965`-`0x4fab54`) live inside that
    function**, ahead of the per-type deforms. Every port modelled the carve level as the
    *open* base height plus the 4/6/7/0xd deform — a claim, never a reading. Invisible in the
    eight zones `gate_zone_bed` was proven on because the repulsion needs the
    cell-centre-nearest region site to be OCEAN and none of them has one; in (32523,32659)
    the open base height at a bed column is **-99.99**, the repulsion's own -100 site
    elevation showing through. `gate_zone_bed` is **still 44/44** with the fix, and of the 13
    port-produced goldens exactly one changed (`rederive_river.bin`, 1 row of 3,005, `w` by
    **1 ULP** — the repulsion's smoothstep tail). `RE_zone_tail.md`.
  * ~~**★ cwgen's terrain is 1-2 blocks out at a TYPE-10 cell CENTRE**~~ — **there was never a
    terrain bug.** Emitter A's Z settle reuses the record's own `+ftol(229376.0)` 16.16
    coordinates, so it probes column `(cx+3, cz+3)`; the port settled on the zone centre
    three blocks away. Y went **73/109 → 109/109** with cwgen's terrain untouched, and Y is
    now part of the gate's pass criterion. `RE_zone_emitters_ac.md`; the general lesson is
    7d below.

*Closed doors from the bed-pass hunt, byte-proven, recorded so they stay shut:* the three
block templates `World_getBlockAt` (`0x405fd0`) returns are initialised at `0x556a10` /
`0x5569b0` / `0x5569e0` as `DAT_00583d0c` = class **2 water**, `DAT_00583d10` = class **0
air**, `DAT_00583d14` = (200,200,200) class **1 solid** — so `Store::rawBlock`'s below-base
mapping was right and "the below-base template reads as water" is dead (it would have
explained one zone exactly); the SHORE nest is not writing the water either (`waterDepth`
at those columns is 106.3-107.2, 0 of 30 pass its `<= 0.02` gate); `bedY >= terrace` really
is `>=` (`0x51bfcf` is `jl → skip`); and the gate is called `(X, Z)` with X the outer loop
variable, the same order `FUN_004f9b70` gets — no transposition.

⚠ **A retraction of this file's own 07-28 morning entry.** It narrowed the bed-pass
over-count to "the replay `Store` never materialises a WATER column". That was read off
(32523,32659) alone, whose 30 columns all sit at `bedY = 0` — sea level. **(32595,32891)
kills it**: all 12,631 of its bed columns have `bedY ≥ 40` with a clamped base well above 0,
nowhere near ocean water. A stencil off one sample again (lesson 3), and it survived less
than a day.

**1. Descriptor types 7 / 0xb / 0xc / 0xf still drift and are still declined.**
⚠ **Re-measure before hunting — the standing note is stale.** The five-zone list below was
taken when `rederive_campgrid` replayed **7** zones ab initio; it now replays **13**, after
the bed pass and the 16.16 half-block fix both changed reachability. The old note also said
"the live candidate is the site-loop retry, and porting `0x5287b0` is how" — `0x5287b0` was
ported in 07-26e and the retry is now modelled, so that hypothesis has been actioned and
its result has not been re-read. Start by re-running `rederive_campstream` /
`rederive_campgrid` and rebuilding the drifting-zone list.

*Ruled out, and recorded so they stay shut:* a missing pre-chain stage (the rand-site
census of `0x51a000`-`0x51b200` is exhaustive — 18 sites, all accounted for); a missing
terrain deform (the ONLY descriptor-type gate in the whole column prologue
`0x518630`-`0x51a300` is the 6/0xd pair, already ported, and `World_objectFalloffWeight`'s
0xb/0xc/0xe/0xd cases plus `base_height`'s type-0xb ocean-repulsion exclusion are both
already in the port); and a wrong `surfH` — see the free probe below.

*The last measured state, for reference only:* all five drifting zones were ODD
((32726,32791) 0xf, (32726,32869) 7, (32752,32765) 0xb, (32856,32739) 0xc,
(32869,32726) 0xb), which pointed at the site loop. A misplaced site moves ~15 of the tree
loop's 196 candidates between the 2-draw and the 6+-draw path, i.e. ±60 draws either way
before any tree-builder cost — the observed magnitude AND the observed bidirectionality.

**2. ★ A FREE LIVE TERRAIN PROBE — use it before asking for a capture session.** Every
camp-capture hit carries a `cand` vector: the accepted lattice cells as `FUN_005104e0`
sees them, `0x18` bytes each = int64 `x16`, `z16`, `y16`. `y16 >> 16` is the finished
world's surface at a known column with no rand stream involved. Over 27 zones and types
3/4/6/7/0xf the port sits on the known `surfH + 2` convention, the outliers all reading
HIGH (the candidate settled on something stamped). Type-0xf zone (32843,32817) samples
terrain at **-19/-31/-33** and matches at +2, so deeply negative terrain is REAL — two of
the drifting zones sit at `surfH ~ -85` and that looks like a port bug until this is
checked. (The tree loop's own `top < 0` bail is real too: `test ecx,ecx / js` at
`0x51e462`.)
  * *Corroborated from the other end, on a different seed and one zone only* (07-27b, so
    do not over-generalise it): replaying zone (32796,32804) on 444444, every candidate
    sits at exactly `storeTop + 1`, 12 of its 17 columns have `storeTop == bare + 1`, and
    the other 5 carry +3/+8/+24/+37/+45 of stamp. Trees were **excluded** for those five by
    streaming the zone's tree voxels — so in that zone the outliers are knoll/rock stamps,
    not canopy.

**3. The engine's terrain stamps are faithful, not bit-exact.** `ForestBlobs`/`StoneBlobs`
place cwgen's knolls and rocks with their own scatter, so the server's bump and the
engine's are not in the same place, and a camp prop that settled on a server bump can
render over flat ground. **The fix is to make the stamps bit-exact, never to move the
prop** — a camp record's `Y16` is proven field-by-field against the live server. The
zone-builder store already computes the real stamps during `zoneReplayTail`; what is
missing is routing them to a render sink the way tree fills already are.

**4. The camp's waypoint NEIGHBOUR predicate is the one soft spot in `FUN_005104e0`**
(`25 < dx² + dz² < 16384` in f32 over the 16.16 deltas). Its only observable is whether
the list is empty, so the thresholds are read statically and only the empty/non-empty
split is live-proven (141/141 draws, 47 of 48 creature branches non-empty). Camp kind **7**
still never came up in 99 firings.

### Smaller open threads, if you want a short task

- ~~**`lib_fn_4fc140` is probably misfiled under `_library`.**~~ ✅ **CLOSED 07-28h, and the
  lead was right.** It is **fifty bytes**: `World_columnHumidity` — the resident column's own
  cached humidity (`col+8`), falling back to the blended climate `FUN_004f8b40` when there is
  no column. The reason three independent decisions threshold it at exactly 0.8 is that **it
  IS the humidity**; the forest's `humid > 0.8` reaches the same number through
  `FUN_004f8b40` directly. `RE_town_plaza.md` §4. Lesson 7g again: read the function before
  budgeting for what is inside it — this cost ten minutes and had been carried for a
  handoff.
- ⚠ **A `lib_fn_*` name in this tree means "no evidence yet", not "library" — and the town
  builder's neighbourhood has now produced SEVEN.** 07-28h found `lib_fn_4fc140` was fifty
  bytes of `World_columnHumidity`; 07-28l found `lib_fn_4f2cd0` was 498 bytes of the
  house-surround **prop factory**; 07-28m found `lib_fn_4fd920` / `lib_fn_4fc180` /
  `lib_fn_4fde90` are the NPC pass's three named-occupant initialisers, called from
  nowhere else and spending 669-1038 / 3322-3335 / 2010-2018 `rand()` draws apiece; and
  07-29b added two more — `lib_fn_4f3490` is the market's **goods factory** (`0x18 +
  rand()%4`, a 4-arm jump table) and `lib_fn_513400` is game code in the structure-building
  layer, called from the town builder AND five sites inside the dungeon assembler. All
  seven sat in `_library/cw_lib.cpp` and all seven were read in minutes. **If a stage you
  are scoping calls a `lib_fn_*`, disassemble it before budgeting around it**
  (lessons 7g, 25). ★ **And note how 07-28m priced its three without decoding them**: the
  rig's draw index is global, so the gap after the call IS the callee's cost — you can
  budget a callee you have not read. ⚠ **`lib_fn_513400` is the first one this sweep has
  named that it could not DECODE**: the town builder's only call to it is in the role-8
  section, which is dead code (`RE_town_market.md` §2), so it has never been observed
  running from there. Its five dungeon-assembler callers are where to look. The sweep is
  still worth finishing: how many other `lib_fn_*` in `server/_library/` are called from
  `world/`?
- **Prop slots 6, 14 and 70 are null** in the client's array. `sandstone-table.cub` is loaded
  into the model DB and never bound, so a type-`0x0e` prop renders nothing in the shipped
  game — the engine deliberately diverges and draws it anyway.
- The three **gate-suite problems** in `RatForge/docs/CW_RE_MASTER_INDEX.md` §7 (split
  goldens, 23 probably-stale failures, `golden_rederive` has no manifest) are still
  untriaged. ~~`tools/gate_town_props.py` FAILS~~ — **fixed 07-27f**: the failure was two
  over-claims of its own, not a `CwTown` drift (`RE_town_verdict.md` §4). The **whole
  `cw_decomp` gate suite is now green.**

## Before you start, and before you finish

**Gate data is on disk** — every `raw/*_capture*.json` in this repo, with the rig that made it
named in the matching `Docs/RE_*.md`. Re-run any gate with `python tools/gate_<name>.py`; they
read the captures and need no server.

**Establish the baseline before building on it** (a stale build has hidden a broken invariant
here before): run the gate suite, then `cwgen_test` in **both** Debug and Release —
`build/cwgen_test.exe tools/cw_rederive/golden_rederive` and the same under `build-release/`.
The two output hashes must be identical; if `build-release` is stale that check is silently
not running. Rebuild release with CMake via the VS-bundled toolchain (`build.bat` only does
Debug) — it needs `vcvars64.bat` sourced first, or every translation unit fails on
`cstdint`:

```
cmd /c "\"<VS>\VC\Auxiliary\Build\vcvars64.bat\" >nul && \"<VS>\...\CMake\bin\cmake.exe\" --build build-release --target cwgen_test"
```

**Known-good as of 07-29d:** the `cw_decomp` gate suite is **fully green** (40 gates), and
**`cwgen_test` is fully green**. Hash **`CB8B2AB38BD28130`**, verified in **both** Debug and
Release with the two 158-line outputs diffed byte-for-byte against each other — identical.
The 07-29c baseline `0FA08D5CB7998A34` was re-verified in Debug before anything changed.

⚠ **A COUNT CORRECTION, and it is this file's own.** Every entry above says `cwgen_test` has
**35 gates**; the number has been copied forward for at least eight slices and it is wrong.
Counted off the run: the 07-29c baseline reports **56 `[PASS]` and 27 `[skip]`**, and with
07-29d's three it is **59 `[PASS]` and 27 `[skip]`**. (The isolation runs confirm the
arithmetic: 56 → 57 with the market golden → 58 with the antique → 59 with the surround.)
Do not re-copy the 35 — count the `[PASS]` lines. A number nobody recomputes is exactly the
lesson this file already carries about measured numbers nobody diffs.

⚠ **07-29d is the first slice in this run to move the hash**, because it is the first to be
a PORT rather than RE + gate. The chain, each step isolated in place and the WHOLE output
diffed, not just the hash:

```
0FA08D5CB7998A34   the 07-29c baseline
183F01AC8AE28963   + rederive_townmarket      (isolated: removing only its golden restores the line above, every other gate byte-identical)
AB6C3F09F789C1F9   + rederive_townantique     (isolated the same way)
CB8B2AB38BD28130   + rederive_townsurround    (isolated the same way)
```

Each isolation diff came back as exactly the new gate's own lines plus the hash — no other
gate's reported numbers moved. That is the check `A measured number nobody diffs is a gate
that cannot fail` asks for, and it is cheap: one extra run per golden.

⚠ **07-29d also adds two GENERATED headers**, and both follow the `CwTownHouseTables.h`
rule — the generator is the source of truth and the gate re-runs it:

```
python tools/cw_decomp/tools/extract_market_slots.py   --cpp > src/worldgen/cw/CwTownMarketTables.h
python tools/cw_decomp/tools/extract_surround_slots.py --cpp > src/worldgen/cw/CwTownSurroundTables.h
```

`gate_town_market.py` [10] and `gate_town_surround.py` regenerate and diff them every run,
so a hand edit fails rather than survives (lesson 7c/7i). Both extractors also cross-check
themselves against the live capture — the market ring predicts 98/98 recorded offsets, which
is the whole reason §5's fitted bit could be retired.

⚠ **07-29b RENAMED a `DEEP_RE` entry rather than adding one**, and the reason is worth
keeping: `0x4f3630` was `TownProp_make_0x15`, and the comment directly above it already
said `type = rand() % 3 + 0x15`. The decode was right and the NAME contradicted it — the
function makes one of THREE types, not type 0x15. **A name is a claim; check it against the
comment you wrote next to it.**

⚠ **07-29 also edits `tools/frida_town_props.py`** — the first slice in this run to change a
RIG. Its `inTB` upper bound was `0xf26f0`, 1,116 bytes short of the town builder's real
`ret`; it is now `0xf2b45` (lesson 7o). **Every `raw/town_props_capture*.json` on disk was
taken with the OLD bound and is unchanged** — they are still correct as far as they go, and
`gate_town_ruin.py` recovers the missing draws from the global draw index instead. Its
`RIG_HI` constant is therefore a property of the DATA, not of the script, and is commented
as such: do not "fix" it to match the rig. A fresh town capture would record the seven
sites directly and is the cheapest way to upgrade that part of the gate from priced to
observed.

⚠ **The `DEEP_RE` entries do move the tree, even when they move no hash.** 07-28m's five
pull `0x4e0f40`, `0x4e20d0`, `0x4fd920`, `0x4fc180` and `0x4fde90` out of
`server/_library/cw_lib.cpp` into `server/entity/`, so `git status` after the pipeline
shows ~2,000 lines of churn in files the slice never edited by hand. That is the label
pipeline working, not a regression — but run it the label-only way
(`final_adjudication.py -> harvest_labels.py -> structure.py`, and **stop**), never the
full fixpoint. (07-29's six are all `gamemisc` container/trig helpers and move ~110 lines.)

⚠ **`cwgen_test` takes about 5 minutes per config** — the town scan reads all 65,536
columns of every town zone it replays. That is the gate doing real work, not a hang.

⚠ **Every hash change here is isolated before it is accepted.** 07-28j: moving *only*
`rederive_townfurnish.bin` aside restores `CE700304401BFC57` exactly, and the whole
141-line output was diffed — every other gate's reported numbers are byte-identical and
Debug and Release agree byte for byte, so the delta is entirely the new gate's own hashed
records. (That also proves the `kTownHouseOrigin` correction moved nothing in cwgen: its
only consumer is the engine's `Towns.cpp`.) 07-28h: moving *only*
`rederive_townplaza.bin` aside restores `2D6C3B72E99E055E` exactly, and the whole 136-line
output was diffed: every other gate's reported numbers are byte-identical, and Debug and
Release agree byte for byte. 07-28g: moving *only*
`rederive_townyard.bin` aside restores `126A1A6F4853E2A4` exactly — and this time the
whole 134-line output was diffed, not just the hash: **every other gate's reported numbers
are byte-identical**, which is the check the warning two paragraphs down asks for. 07-28f: moving *only*
`rederive_townhouse.bin` aside restores `8BAE4DDD7C271C62` exactly. 07-28e: moving *only*
`rederive_towncreatures.bin` aside restores `E2A65B45E448E9C6` exactly, so the whole delta
is the new gate's own hashed spawn records. 07-28d: moving *only*
`rederive_townpromo.bin` aside restores `F20252B941259929` exactly, so the delta is the new
gate's own hashed values — and that also proves the slice's `FeatureCell.subtype` change
(village + ruin, previously unset) moved nothing else. 07-28c was the same check against
`rederive_townverdict.bin` and `2D52E0BE1C55FFAB`. Do it on any new gate: it costs one run
and turns "I think nothing else changed" into a measurement (lesson 17).

⚠ **And check the OLD gates' reported numbers, not just their verdicts.** The promotion
port initially wrote its rotation back into the same `TownPlot::rot` the scan leaves, which
is what the binary does — and silently dropped `rederive_townverdict`'s scan-exact count
from 29/34 to **21/34** while both gates still said PASS, because that count is *reported*
and not asserted. The fix is a separate `rotFinal`. A measured number nobody diffs is a
gate that cannot fail.

⚠ **Do the isolation run IN PLACE — a copied golden directory silently loses a gate.**
`gateDungeonDecor` reads `<goldenDir>/../dungeonterr.bin`, a file OUTSIDE the golden dir,
and reports a plain `[skip] rederive_dundecor (golden missing)` when it is absent. Running
the 07-28e isolation against a scratch copy therefore produced a third hash that looked
like a real regression and was purely the harness. Move the one file aside inside
`tools/cw_rederive/golden_rederive` and put it back. (This is one concrete instance of the
"`golden_rederive` has no manifest" problem still open in `CW_RE_MASTER_INDEX.md` §7.)

⚠ **A generated source file needs a gate that REGENERATES it.** `CwTownHouseTables.h` is
written by `tools/extract_house_layouts.py --cpp`, which executes 0x4e6520-0x4e6f8d out of
`Server.exe`; `gate_town_house.py` re-runs the generator every time and diffs it against
the header on disk. Without that the header is just another hand-typed table with a
comment claiming otherwise (lesson 7c). Regenerate it with:
`python tools/cw_decomp/tools/extract_house_layouts.py --cpp > src/worldgen/cw/CwTownHouseTables.h`

**Superseded:** hash **`0FA08D5CB7998A34`** was the 07-29c known-good,
**`CE700304401BFC57`** the 07-28i one,
**`2D6C3B72E99E055E`** the 07-28g one,
**`126A1A6F4853E2A4`** the 07-28f one,
**`8BAE4DDD7C271C62`** the 07-28e one,
**`E2A65B45E448E9C6`** the 07-28d one,
**`F20252B941259929`** the 07-28c one and
**`2D52E0BE1C55FFAB`** the 07-28b one. The whole chain was
re-verified from the 07-27f baseline (`F5D7D16E92EE5C38`) before anything changed.

⚠ **The hash changed TWICE on 07-28**, both deliberately and both because a real bug was
fixed: `F5D7D16E92EE5C38` → `01BF4F82DADAB46E` when emitter A's settle moved to
`(cx+3, cz+3)` (the runestone's `Y16` feeds the hash), then → `2D52E0BE1C55FFAB` when the
river carve level picked up the ocean repulsion (the carve geometry feeds several gates).
Every other gate's counts are unchanged across both.

⚠ **`rederive_river.bin` was regenerated** (`python tools/cw_rederive/rederive_oracle.py
tools/cw_rederive/golden_rederive`) because it is a PORT-PRODUCED golden and the Python
moved with the C++. Of the 13 goldens that script writes, only that one changed, in 1 row of
3,005 and only in `w`, by 1 ULP — diff the directory before and after, as here, so the blast
radius is a measurement and not a hope (lesson 17).

⚠ **Grepping the suite for "FAIL" gives seven false alarms.** `gate_zone_bed.py` ends with
`44 ok, 0 FAIL`, `gate_town_surround.py` with `6643 ok, 0 FAIL`, `gate_town_npcs.py`
with `16117 ok, 0 FAIL`, `gate_town_ruin.py` with `3041 ok, 0 FAIL` and
`gate_town_market.py` with `450 ok, 0 FAIL` and `gate_town_antique.py` with
`290 ok, 0 FAIL` (the last three then print `RESULT: PASS`), and six gates
(`gate_dungeon_counter`, `gate_zone_landform`,
`gate_zone_landform_order`, `gate_zone_prechain`, `gate_zone_siteloop`, `gate_zone_tail`)
print their own verdict format with no PASS/FAIL token at all. Read the tail of each.

~~⚠ **That 107/109 is deliberate and is not to be tuned green.**~~ — obsolete: it went green
on 2026-07-28 for the right reason (the bed pass's carve level), not by tuning. The
principle stands and is worth keeping: **a red gate that names a real bug beats a green one
that hides it** — leaving `rederive_zoneac` red for a day is what kept both bugs findable.

⚠ **The pipeline fixpoint is order-sensitive and destructive if you get it wrong.** Running
`flirt_islands.py` / `adjudicate_none.py` against an already-structured tree finds nothing and
overwrites `raw/*.libislands.json` + `raw/*.none_roles.json` with empties, silently degrading
the tree. If you only changed labels, run `final_adjudication.py -> harvest_labels.py ->
structure.py` and stop.
