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
Those are two different ledgers and they are not in step. Emitter A and the town builder's
verdict scan have since been ported (07-27c, 07-28c); **emitter C still has a green RE gate
here and no cwgen port at all**. Where a cwgen gate exists it is named in the last column.
Nothing below needs another capture session; every open question left is reachable from the
captures already on disk.

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
| 07-28k | ★ **`0x4ea254` is one of ELEVEN rand sites in the HOUSE ENTITY pass — RE'd and gated, and the observable was already in the capture.** Ninth slice running where reading the span first re-scoped the work: `0x4ea254` (1,653 draws) is the inhabitant coin of a stage running `0x4e74a5`-`0x4ea988`, five walks over the house's own 3×3×4 module grid spending **7,597 draws**. ★ **THE FIND: these are not props, they are `creature_spawn_builder` calls — and `frida_town_props.py` has hooked that function all along.** So unlike every other town stage, each record's POSITION, ORIENTATION and TYPE are in the capture, and 19,352 of them are checked field by field with no new rig (lesson 7h from a new direction: the observable was misfiled, not missing). ★ The geometry lands exactly on the FURNISHING pass's lattice: the house anchor is `plotOrigin + 7` and the record sits at the module's own `+7`, which is where `RE_town_furnish.md` §5b.2 puts the kind-0 centre — two stages decoded a week apart from different observables agreeing. ⚠ **The trap: a spawn "site" is a RETURN ADDRESS, and up to seven emit sites `jmp` to the same call**, so the per-site model offset is not one number; the emit→tail map is walked out of the binary (34 sites) and every per-site claim is made at the granularity the capture can see. ⚠ `FUN_00402150/60/70` take **no argument** — the `push eax` in front of each belongs to the `vec3_store` three lines later. ⚠ **NOT PORTED** — §9 says what a port would have to be FED | `RE_town_entities.md` | **`gate_town_entities` 46,344** |
| 07-28j | ★ **the HOUSE FURNISHING pass PORTED — and the port found four things the RE had not, three of which no draw count could ever have caught.** ★ **`VoxelGrid_cellAt3D` is not an array index**: `FUN_004d1950` calls `FUN_004d8f90` on its indices FIRST, which rotates `(a,b)` by `house[+4] & 3` and mirrors `b` on `house[+8]` — so one layout furnishes eight ways. A rigid transform preserves the (wall, non-wall neighbour) count, so the draw TOTAL is identical under any rotation and only the POSITIONS move (lesson 13 from the other side). ★ **The house sits `plotOrigin + 7`**, not at the plot origin: 39 blocks centred in the 51-block plot. `CwTown.h` carried 0 with a comment asserting it was deliberately NOT centred — a sentence copied forward, and 6 blocks wrong in the engine's town rendering (lesson 7e). ⚠ The decomposition alone does **not** pin the 7 — 7 and 8 both close — and what breaks the tie is that the offsets are the span's own `.rdata` literals; the gate reports both halves. ★ **The type-`0x10` jitter is f32** (`divss`/`mulss`): in double it is off by one 16.16 unit in 1 record in 5,000, which is exactly how it was found. ★ And the pass's first draw is the house's first RECORDED draw in **323 of 323** houses, so the gate has no free parameter at all. The 21 offsets are machine-derived from the 6,759 records, never scraped (lesson 7i) | `RE_town_furnish.md` §5b | **`rederive_townfurnish` 1,004/1,004** — 323/323 site sequences draw-for-draw over 8,717 recorded + **12,248 hidden** draws, 6,759 records / 40,554 fields DERIVED; `gate_town_furnish` 26,891 → **34,307** |
| 07-28i | ★ **the `0x4eafd2` CLUSTER is one stage — the HOUSE FURNISHING pass — RE'd and gated.** Seven table rows that all fired in exactly **35** towns turned out to be one walk over the house's own 3x3x4 MODULE GRID: at every WALL module, furniture against each of the four horizontal faces whose neighbour is not a wall, then a centre piece chosen by the module's `+8` KIND byte. **13 rand sites / 8,717 body draws / 21 push sites / 6,759 records.** ★ **THE FIND: the cost is somewhere the rig cannot see.** Every record is built by `FUN_004f2ee0`, a 1,359-byte factory with **eight more rand sites**, and `frida_town_props.py` filters to the builder body (lesson 18). Those draws were recovered anyway — msvcrt's rand is a plain LCG, so stepping it from the town's own zone seed pins every unrecorded index (lesson 33) — and the decoded factory then reproduces the type AND the extents of **4,958 of 4,958** live records, **0 failures**. ★ The null baseline is reported with it: the branch structure admits **exactly one type in 2,466 of the 4,958 gaps** and two in 2,424, so half the corpus is forced (lesson 5). ⚠ **Slot E takes no coin** and its record count is what says so: 1,005 against 653-664 for the six coined slots. ⚠ **NOT PORTED** — `RE_town_furnish.md` §7 lists what a port has (the module grid, now carrying `kind`/`flag`) and the one thing it does not (a per-record voxel read) | `RE_town_furnish.md` | **`gate_town_furnish` 26,891** |
| 07-28h | ★ **the town builder's ROLE-0/7 PLOT RE'd, gated and PORTED — and the census re-scoped it DOWNWARDS.** `0x4ef7c8` (52,811 draws, 23% of the builder) reads as a monster and is a **shade jitter on a voxel**: the stage paints a radius-8 disc at each of the four QUADRANT CENTRES of every role-0/7 plot, one draw per voxel in the 7..8 annulus. **The whole thing pins on one number** — 208 disc cells, 52 ring cells, so flat ground costs exactly `2 x 52 = 104` draws, and over 430 captured discs the minimum run is **104, never lower, 178 of them exactly**. That single count fixes the box, both radii, the half-block offsets and the per-column formula at once. ★ **Every input was already in a port**, three under another name (lesson 7h, fifth slice running) — and the sixth closed a standing open thread: **`lib_fn_4fc140` is not a library function**, it is a 50-byte `World_columnHumidity` (`col+8`, else `FUN_004f8b40`), which is why three independent decisions threshold it at exactly 0.8. ★ The **RUIN** half needs no terrain at all: role + `falloffSquared >= 0.72` predicts the tree-site count in **32 of 32** dry ruins, and the 3 misses are all coastal, which the gate bounds instead of tuning. ⚠ Also settled: `FUN_004d8e30` is length **SQUARED** (that is why 49/64 are r=7/r=8), and `0x4e310a`/`0x4eaa7a`/`0x4ee3aa` are **alignment NOPs**, not functions — the builder really is one 65,033-byte body | `RE_town_plaza.md` | **`gate_town_plaza` 11,877**; **`rederive_townplaza` 169/169** |
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

### The next slice: EMITTER C — and it is now genuinely close

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

✅ **Open problem 0 is fully closed (07-28) and `cwgen_test` is GREEN for the first time**
— all gates pass, both configs, hash `2D52E0BE1C55FFAB`. So the list below is the whole of
what is next; take item 1.

1. **The rest of the town chain.** ⚠ **Re-scoped again 07-28d — read
   `RE_town_promotion.md` §5 and `RE_town_verdict.md` §6 before planning it.** Two of the
   builder's stages are now RE'd *and ported*: the verdict SCAN (`rederive_townverdict`,
   arrival 34/34, whole scan exact in 29/34) and the PROMOTION pass
   (`rederive_townpromo` 140/140, whole pass exact in the same 29/34 — it adds no new
   error). The builder is entered at zone-stream index **0 in 23 of 71 towns**, median 53,
   so arriving was never the hard part; the rand sites *downstream* are, and there are now
   **172** of them left.

   ✅ **`0x4eda58` (07-28e), the HOUSE PASS (07-28f), the ROLE-6 YARD (07-28g), the
   ROLE-0/7 PLAZA (07-28h), the HOUSE FURNISHING pass (07-28i/j) and the HOUSE ENTITY
   pass (07-28k) are CLOSED.** Counted mechanically by span census (the method is written
   down in `RE_town_plaza.md` §9 so the next recount is reproducible): **77 of the 176
   firing sites are closed, carrying 211,484 of the 228,413 draws the rig records inside
   the body** (92.6%; the count including callees is larger — the rig's filter is the
   difference, lesson 18, and 07-28i is the
   slice that finally measured through it). ⚠ The 07-28j figure of 66 / 203,887 / 89.3%
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
   The per-house region is now closed end to end: house pass → entity pass → interior
   marking → furnishing.

   **Next: the `0x4ed03e` FAMILY** — eight sites at `0x4ed03e` / `0x4ed162` / `0x4ed2a4` /
   `0x4ed3c6` / `0x4ed513` / `0x4ed633` / `0x4ed76d` / `0x4ed895`, **800-802 draws each in
   exactly 35 towns** (6,408 draws = 38% of everything left). The same-town-count tell
   that named the `0x4eafd2` cluster as one stage says the same here, and eight
   `Prop_settleOnTerrain` sites sit interleaved with them (`0x4ed133` … `0x4ed988`, the
   `settles` array in the capture) — so this stage's records ARE hooked. Read
   `0x4ecf20`-`0x4eda0b`, the span between the furnishing walk and the inhabitant scatter.
   After that the largest single site left is `0x4f1f4b` (1,176 draws, 35 towns), which is
   in a CALLEE, not the builder body.

   There is no monster left: the two that carried "36% of everything the layer spends"
   were `0x4e54e8` and `0x4ef7c8` and both are closed, so **the rest of the town chain is
   a long tail** — **99 sites, 16,929 draws**, none over 1,200.

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

**Known-good as of 07-28k:** the `cw_decomp` gate suite is **fully green** (35 gates —
`gate_town_entities` is new), and **`cwgen_test` is fully green** (35 gates). Hash
**`0FA08D5CB7998A34`** in both Debug and Release, re-verified at the start of 07-28k
before anything changed.

⚠ **07-28k changed no hash and touched no golden**, because the slice is RE + gate only:
it adds `tools/gate_town_entities.py`, `Docs/RE_town_entities.md` and three `DEEP_RE`
entries, and nothing in `cwgen`. If a later port of this stage lands, the isolation run
below applies to it.

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

**Superseded:** hash **`CE700304401BFC57`** was the 07-28i known-good,
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

⚠ **Grepping the suite for "FAIL" gives two false alarms.** `gate_zone_bed.py` ends with
`44 ok, 0 FAIL`, and six gates (`gate_dungeon_counter`, `gate_zone_landform`,
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
