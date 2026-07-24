# The `cw_decomp` pipeline — process, tools, and rationale

How the fresh Cube World decompilation was produced, in the order it ran, with the reason
each tool exists. Everything here is re-runnable; the commands are in `README.md`.

The through-line: **treat no label as true until the binary says so.** Every earlier tree
in this repo (qad3n's `Source_check`, our own scattered ledgers) mixed proven identities
with guesses and lost track of which was which. This pipeline keeps provenance attached to
every function and settles disagreements against the decompiled body, not against whichever
document spoke last.

---

## Stage 0 — establish the ground truth the whole pipeline leans on

Before any decompilation, the **build toolchain was pinned**: MSVC 11.0 (Visual Studio
2012), `/MD /EHsc /GS /sdl- /SAFESEH`, x86. Method and evidence are in
`../msvc_vs2012_rtm/README.md` and `../crt_symbols/README.md`.

Why this comes first: it is what lets the classifier separate game code from compiler
scaffolding. Concretely it paid for itself three times downstream —

- **10,393 exception funclets** (`Catch_All@…`) across the two binaries are recognisable as
  `/EHsc` output rather than mystery functions, only because the EH model is known.
- **`Concurrency::` is Microsoft PPL** (`<ppl.h>`, ships with VC11) → library, not game.
- STL diagnostics in the decompiled bodies were checked against the **actual VC11 headers**
  we extracted (`../msvc_vs2012_rtm/vc11_librarycore86/…/VC/include`) — e.g. the string
  `"list<T> too long"` is confirmed at `VC/include/list:1951`, which is what identified two
  functions as `std::list::push_back`.

Tools: a PE Rich-header parser and the Microsoft symbol server (see those READMEs).

---

## Stage 1 — analysis (Ghidra, reused not rebuilt)

The Ghidra project here is a **copy** of `tools/ghidra_proj/CubeAudit` (~208 MB), so the
permanent project is never mutated. A fresh re-import was tried and **abandoned**: it wedged
on a `VarnodeContext: out of address spaces` error, and the stored analysis is known-good
and matches the qad3n function counts exactly (12,983 client / 6,152 server).

`ghidra/` and `ghidra_srv/` are two copies. Ghidra locks a project while a headless script
runs, so a second copy lets a long client job and a server job run in parallel.

**`RecoverClassesFromRTTIScript.java`** (Ghidra built-in) was the missing step. `CubeAudit`
had been auto-analysed but RTTI class recovery had **never been run on it** — a metadata dump
found 0 game class namespaces. Running it recovered **55 classes (server) / 188 (client)** and
1,802 client virtual functions. This is where the `cube::`, `plasma::` and `abstr::` class
architecture comes from.

---

## Stage 2 — extraction (custom Ghidra scripts)

Ghidra's own export formats are either too coarse or too slow at this scale, so two scripts:

| tool | what & why |
|---|---|
| **`MetaDump.java`** | Per-function metadata → `raw/<prog>.meta.jsonl`: address, name, RTTI namespace, size, prototype, direct callers/callees, and referenced string literals. No decompilation, so it is fast (seconds). This is the skeleton everything else joins against. |
| **`DecompDump.java`** | Bulk decompiler → `raw/<prog>.decomp.jsonl`. Multi-threaded (one `DecompInterface` per worker — the interface is not thread-safe), because ~19k functions single-threaded is impractical. |

**A trap this stage taught:** the four functions that "failed" at the 60 s default timeout
were the **crown jewels** — the zone builder, town builder, dungeon assembler and `.cub`
loader — not noise. They decompile to 225 KB–731 KB of C and need a 600 s timeout. `DecompDump`
gained an addresses+timeout retry lane specifically for them. **A decompile failure on a big
function is a signal to retry, not a rounding error to report and move on.**

---

## Stage 3 — the label ledger (`harvest_labels.py`)

Consolidates every proven / documented identity in the repo into one file, `raw/labels.json`,
in ascending authority: `cw_callgraph.py` working names → `CUBEWORLD_ALPHA_SOURCE.md` gate
table → `CW_CONFIDENCE_XREF.md` → **adjudicated verdicts** (stage 6, highest).

Crucially it **records every overwrite as a conflict** rather than letting precedence hide
it. That single change surfaced the 112 places where our own corpus contradicts itself —
the finding that drove stages 5–7.

---

## Stage 4 — structuring (`structure.py`)

Emits the `cube/` and `server/` trees, `attribution.tsv`, and `GAP_ANALYSIS.md`. Layout
mirrors `Source_check` so the two diff file-for-file. Attribution order, highest first:

1. **ledger** — our proven/adjudicated identities
2. **RTTI** — recovered class; `cube`/`plasma`/`abstr` are first-party, `std`/`Concurrency`/
   `C[A-Z]*` (MFC/SDK convention, e.g. `CRefTime`) are library
3. **library heuristics** — CRT/STL name shapes, import namespaces, EH funclets, and static
   third-party by string signature (SQLite/FreeType/zlib)
4. **caller-vote** — an unattributed function whose classified callers *unanimously* sit in
   one subsystem inherits it (split votes stay unattributed)
5. **none** — lands in `game_misc/Unsorted`, listed in `GAP_ANALYSIS.md`

The decisive column in `attribution.tsv` is **`attributed_by`**: it records *how* each
placement was decided, so a heuristic guess is never mistaken for a proven fact. Files are
capped on both function count (200) and bytes (1.5 MB) — a boundary-artifact function can
decompile to half a megabyte, and 150 of those once made a 10.9 MB file.

---

## Stage 5 — cross-check (`compare_qad3n.py`)

Diffs our game-vs-library attribution against `Source_check`. Reports **genuine conflicts
separately from "we made no claim"** — counting our unattributed defaults as disagreements
would have inflated the server conflict number from 44 to 2,130 and implied contradictions
we do not assert. Result: 44 real server conflicts, 302 client — most of the client ones
being the `plasma::` engine layer qad3n mis-filed as library.

---

## Stage 6 — adjudication (the heart of it)

| tool | what & why |
|---|---|
| **`adjudicate.py`** | Builds a worksheet putting each conflict next to its actual decompiled body + caller/callee/string evidence. Ordered smallest-first: a 13-byte body is decisive. |
| **`triage_conflicts.py`** | Auto-resolves conflicts on hard signals (VC11 STL diagnostics, allocator calls, CRT float helpers). ~75 of 113 fell to evidence; 38 needed reading. |
| **`final_adjudication.py`** | The settled server verdicts (read by hand where triage could not decide), exported back into the ledger as top authority. |
| **`verify_xref_citations.py`** | Re-checks every `CW_CONFIDENCE_XREF.md` row against the doc:line it cites. This is what proved the xref's `lib_fn_*` rows were an **off-by-one extraction artifact** (server 14 rows; cube 0 — clean). |
| **`final_adjudication_cube.py`** | The client verdicts: `plasma::` proven first-party (3 independent lines of evidence), plus 8 kind-corrections the citation audit could not catch. |
| **`fix_xref_rows.py`** | Applies the 16 citation fixes back to `CW_CONFIDENCE_XREF.md` (with a `.bak`), re-pointing each to the line its address actually appears on. |

**Two failure modes, in opposite directions, both found here:**

- `CW_CONFIDENCE_XREF.md` demoted proven game functions to `lib_fn_*` by citing the row
  *above* the naming table (off-by-one). `0x4f9010`/`0x5234b0`/`0x5236d0` cited
  `CW_RE_MASTER_INDEX.md:158` while line 159 records them as *bit-exact vs captures*.
- `cw_callgraph.py` gave game names to STL/CRT primitives — `0x4013f0` is
  `std::vector<int>::at`, not `model_db_lookup`.

One decompiler artifact also caught: Ghidra collapsed `0x522cc0` to just its `/GS` epilogue,
making it look like a security-cookie stub; the raw bytes (`shld …,0x10` + `sub`/`sbb`) show
it is the 16.16 fixed-point squared-distance `dist2_16_16`. **A `/GS` function whose body is
suspiciously short must be checked against disassembly.**

---

## Deliverables

```
README.md                     what the tree is, status, caveats
PIPELINE.md                   this file
ADJUDICATION.md               113 server conflicts, settled
ADJUDICATION_CUBE.md          client: plasma proof + 8 kind-fixes
cube/  server/                the organised trees (+ attribution.tsv, GAP_ANALYSIS.md each)
raw/                          all intermediate JSONL + the audit trail
  labels.json                   consolidated ledger
  label_conflicts.md            the 112 self-contradictions
  adjudication.json             per-conflict evidence + verdict
  xref_citation_audit.md        every xref row vs its citation
  xref_fixes_applied.md         the 16 corrections + backup pointer
ghidra/  ghidra_srv/           copies of the analysis (never the original)
```

---

## What would make the RE better from here

Ordered by leverage. These are follow-ups the pipeline exposes, not blockers.

1. **RTTI → struct layout recovery — ✅ DONE (`STRUCT_RECOVERY.md`).** Usage-inference via
   Ghidra's `FillOutStructureHelper` over each class's member functions, merged and applied:
   **25 classes / 48 fields (server), 147 / 1,830 (client)**. Recovers name + size + vftable(s)
   + touched fields; member bodies now decompile against typed `this`. Hard limit documented:
   RTTI encodes class *name* not *layout*, and only ~3 methods/class are RTTI-assigned, so
   field maps are shallow where a class's writers are non-RTTI `FUN_` functions. The two
   named levers for going deeper (arg-0 type propagation; canonical template layouts) are
   in that doc.
2. **Import the CRT DLLs into Ghidra with their PDBs — ✅ DONE (`CRT_SYMBOLS.md`).**
   9,916 symbols applied across the three DLLs. It settled the standing trig question:
   **both binaries import only the `_precise` `__libm_sse2_*` variants** (`/fp:precise`
   fingerprint), so a bit-exact port must call the precise routines, never plain or fast.
   The `raw/crt_import_map.md` bridge ties each game import to its now-named CRT function.
3. **Signature the static third-party code — ✅ DONE (`flirt_islands.py`).** Not byte-hash
   FLIRT (which needs Wollay's exact `.lib` and is flag-fragile) but **linker-block
   carving**: seed from each library's distinctive strings, take the densest seed cluster
   as its contiguous block, claim functions reachable inside it, stop at the game barrier
   and at STL-diagnostic strings. Result: **SQLite 822 (server) / 845 (client)** and
   **FreeType 202 (client)** functions moved to `_library/`, dropping the unnamed pile from
   2,455→1,639 (server) and 5,102→4,056 (client). Each island validated: 0 game-namespace,
   0 STL leak, contiguous range, ~80%% internal connectivity. `zlib` needed nothing — it is
   dynamically linked (`zlib1.dll`).
4. **Adjudicate the `none` functions in bulk — ✅ DONE (`NONE_ADJUDICATION.md`).**
   `adjudicate_none.py` classifies each unattributed function by structural role read from
   its body. Trivial helpers (accessors, mutators, thunks, computed, stubs, dispatch) are
   named and split into `game_misc/helpers_<role>.cpp`; the genuine-logic review surface
   dropped **1,287→902 (server)** and **2,548→1,730 (client)**, ~30%%. What remains as
   `logic` is the real per-function RE floor. No names invented.
5. **Byte-match against a recompile — ✅ WORKFLOW PROVEN (`RECCMP.md`).** Stood up the VS2012
   `cl.exe` (17.00.50727, from the ISO cab, no install) and matched reconstructions against
   the shipped code per-instruction (`reccmp/compare.py`). **`formula_inverse` = 100% exact
   byte-match**; flags pinned to `/O2 /Oy- /arch:SSE2 /fp:precise`. `falloffSquared` matches
   structurally but not byte-for-byte — the shipped binary's optimiser is strictly better,
   empirically confirming the **RTM (50727) vs Update 1 (51106)** gap: byte-exact matching of
   *every* function needs the Update 1 compiler; servicing-stable functions match on RTM today.
6. **Fold the adjudicated names upstream.** The verdicts corrected `CW_CONFIDENCE_XREF.md`;
   the same names should propagate into `cw_callgraph.py`'s working map so the two never
   drift apart again. (The stale-canopy fix of 2026-07-23 was one instance of this drift.)
