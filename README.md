# `cw_decomp` — a fresh reverse-engineering of Cube World alpha

A from-scratch reconstruction of the Cube World alpha client (`Cube.exe`, 13,011 functions)
and dedicated server (`Server.exe`, 6,268 functions) into an organised, provenance-tracked
source tree — built from our own Ghidra analysis, our own proven-label ledger, and the
original build toolchain recovered as closely as it can be obtained.

The guiding rule throughout: **trust no label until the binary says so.** Every function
carries an `attributed_by` column recording *how* its identity was decided, so a heuristic
guess is never mistaken for a proven fact.

## Where things are

```
README.md              you are here — the whole attempt, start to finish
Docs/                  the detailed write-ups (one per stage)
  TREE_GUIDE.md          what the reconstructed tree is; attribution order; caveats
  PIPELINE.md            every tool in run order, with the reason each exists
  ADJUDICATION.md        113 server label conflicts, settled against the code
  ADJUDICATION_CUBE.md   the client: plasma-is-first-party proof + 8 kind fixes
  CRT_SYMBOLS.md         applying the VC11 CRT PDBs; the /fp:precise finding
  STRUCT_RECOVERY.md     RTTI → struct layout recovery
  NONE_ADJUDICATION.md   splitting the unattributed pile by structural role
  RECCMP.md              byte-matching reconstructions against the shipped code
  UPDATE1_INVESTIGATION.md   the toolchain gap and whether to chase Update 1
tools/                 the pipeline (Ghidra scripts + Python passes)
raw/                   intermediate JSONL + every audit trail
reccmp/                byte-match workspace (sources, listings, compare.py)
cube/  server/         the organised trees, mirroring tools/Source_check
ghidra/ ghidra_srv/    copies of the analysis (the permanent CubeAudit is never mutated)
ghidra_crt/            the three CRT DLLs with PDB symbols applied
```

> **Path convention:** file paths written inside `Docs/*.md` are relative to this
> `cw_decomp/` root (e.g. `raw/labels.json`, `../crt_symbols/`), not to `Docs/`.
>
> **External dependencies not in this repo:** the docs reference two sibling folders that
> are intentionally *not* committed here — `../crt_symbols/` (Microsoft public CRT PDBs,
> re-downloadable from the symbol server) and `../msvc_vs2012_rtm/` (the VS2012 toolchain
> and ISO, Microsoft copyright). Each has a README describing how to obtain it. This repo
> is the reverse-engineering work product; those are the tools it was produced with.

## What was done, and what it produced

| stage | outcome |
|---|---|
| **RTTI class recovery** | CubeAudit had never had it run — 0 game classes. Recovered **55 (server) / 188 (client)** classes. |
| **Bulk decompile** | all 19,279 functions, into `cube/`+`server/` trees laid out like `Source_check` for file-for-file diffing. |
| **Label ledger + conflict audit** | consolidated every proven identity; surfaced **112 self-contradictions in our own corpus** and an **off-by-one extraction bug** in `CW_CONFIDENCE_XREF.md` that had filed proven worldgen functions as `lib_fn_*` — 16 rows fixed at source. |
| **qad3n cross-check** | proved `plasma::`/`abstr::` are Wollay's own engine (qad3n mis-filed them as library); 282 disagreements resolved in our favour with evidence. |
| **Static-library carving** | SQLite (**822**/845) and FreeType (**202**) split into `_library/` as contiguous linker blocks. zlib needed nothing — it's dynamically linked. |
| **RTTI struct recovery** | field layouts inferred from usage: **25 classes / 48 fields (server), 147 / 1,830 (client)**; member bodies now decompile against typed `this`. |
| **`none` adjudication** | unattributed functions split by structural role; the genuine-logic review surface dropped **30% (server) / 32% (client)**. |

Final state of the two binaries:

| | identified | trivial helper | **genuine logic (needs RE)** |
|---|---|---|---|
| Server.exe (6,268) | 4,985 | 381 | **902** |
| Cube.exe (13,011) | 10,466 | 815 | **1,730** |

## Getting as close to the original build as possible (without the true Update 1)

Bit-exact reverse engineering depends on knowing — and ideally running — the exact compiler
that built the game. We got most of the way there:

1. **Identified the toolchain.** The game was built with **MSVC 11.0 (Visual Studio 2012),
   compiler build 17.00.51106 = Update 1**, `/O2 /Oy- /arch:SSE2 /fp:precise`, x86. Proven
   from the binaries' Rich headers, `VC_FEATURE` records, CodeView PDB paths, and the
   shipped `msvcr110/msvcp110` redists. (`cw-build-toolchain` memory.)

2. **Recovered the exact CRT symbols.** The matching public PDBs for `msvcr110`/`msvcp110`/
   `vccorlib110` were pulled and GUID-verified, then **applied** to those DLLs in Ghidra.
   This settled a long-standing question directly from the binary: the game imports **only
   the `_precise` `__libm_sse2_*` trig variants** — the `/fp:precise` fingerprint that tells
   the ports which routines to match. (`Docs/CRT_SYMBOLS.md`.)

3. **Stood up the compiler and proved byte-matching.** The exact build 51106 could not be
   obtained — its installer is dead on every public CDN, and **you cannot reconstruct one
   compiler build from another** (they are monolithic, not deltas). So we extracted the
   closest available build, **RTM 17.00.50727**, from the VS2012 ISO and got `cl.exe` running
   standalone (`../msvc_vs2012_rtm/compiler_bin/`). With it, reconstructed functions compiled
   and **byte-matched the shipped code 100%** — `formula_inverse` 14/14, `falloffSquared`
   19/19 (`Docs/RECCMP.md`).

4. **Measured the RTM-vs-Update-1 gap honestly.** Despite the build-number difference (we have
   50727, the game is 51106), **no codegen difference between them has actually surfaced** —
   every function tested matches RTM exactly. One case *looked* like a version gap; it turned
   out to be a source error in the reconstruction, corrected once the condition was written
   the way the decompiler showed it. The lesson — *rule out source and flags before blaming
   the toolchain* — is baked into the docs.

**So how close are we without the true Update 1?** Close enough that it hasn't mattered yet.
The toolchain is identified exactly, the CRT is symbol-resolved exactly, the build flags are
pinned by real byte-matches, and RTM has reproduced every function tested. The remaining
theoretical gap — that some function's codegen changed between 50727 and 51106 — has not
appeared in practice. If it ever does (a reconstruction confirmed equivalent yet still
differing), the path forward is Update 3 first (live, 2.1 GB) then the exact 51106 via a free
my.visualstudio.com account. Full analysis in `Docs/UPDATE1_INVESTIGATION.md`.

## Rebuilding

The passes form a fixpoint (each reads the previous one's `attribution.tsv`):

```
python tools/harvest_labels.py        # consolidate proven identities  -> raw/labels.json
python tools/structure.py             # emit tree + attribution.tsv
python tools/flirt_islands.py         # carve SQLite/FreeType           -> raw/*.libislands.json
python tools/adjudicate_none.py       # role-classify the residue       -> raw/*.none_roles.json
python tools/structure.py             # re-emit with islands + roles
```

Ghidra stages (analysis, RTTI recovery, decompile, PDB apply, struct recovery) and their
exact `analyzeHeadless` invocations are in `Docs/PIPELINE.md`.
