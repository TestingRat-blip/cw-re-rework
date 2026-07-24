# CRT DLLs with PDB symbols — applied

The three VC11 runtime DLLs the game ships (`msvcr110` / `msvcp110` / `vccorlib110`) are
imported into a Ghidra project here with their matching public PDBs applied, giving the
CRT full symbols. This is the follow-up flagged as item #2 in `PIPELINE.md`.

## What and where

| | |
|---|---|
| project | `ghidra_crt/CwCrt` (3 DLLs imported + analyzed) |
| PDBs | `../crt_symbols/` (GUID-verified against the shipped DLLs) |
| apply script | `tools/ApplyPdb.java` (uses `DefaultPdbApplicator.applyNoAnalysisState()`) |
| symbol dumps | `raw/{msvcr110,msvcp110,vccorlib110}.dll.symbols.tsv` |
| import bridge | `raw/crt_import_map.md` (game imports → PDB-named functions) |

Symbols applied: **msvcr110 +3,716, msvcp110 +2,313, vccorlib110 +3,887 = 9,916.**

## Why this was worth doing — and the one thing it settled

The game is `/MD`, so CRT code lives in these DLLs and the exes import it *by name*; the
PDBs therefore do **not** rename anything inside `Cube.exe`/`Server.exe`. Their payoff is
loading the DLLs *themselves* with full symbols so a call's exact target routine is known.

The concrete result — the question the forest/rand ports kept hitting:

> **Both binaries import ONLY the `_precise` trig variants.**
> `_libm_sse2_cos_precise`, `_sin_precise`, `_sqrt_precise`, `_pow_precise`, `_exp_precise`,
> `_acos_precise`, `_asin_precise` (client adds `_atan_precise`, `_log_precise`, `_tan_precise`).
> **Neither imports a single plain `__libm_sse2_cos`.**

That is the fingerprint of **`/fp:precise`** (the VC11 default), consistent with the
toolchain in `../msvc_vs2012_rtm/README.md`. It answers the ULP risk raised in
`docs/CWGEN_PORT_FOREST_CPP_NEXT.md:47`: a bit-exact port must call the **`_precise`**
routines — not plain, and never `/fp:fast`. RatForge builds `/fp:strict`, which is safe
here (stricter than `/fp:precise`), but any use of a fast-math trig approximation would
diverge. Corroborated in the decompiled body of `0x4d7870`, which calls
`libm_sse2_sqrt_precise()` directly.

## Resolution rate (`raw/crt_import_map.md`)

`msvcr110` (C names) resolve well — Server 59/72, Cube ~ the same. The msvcr110 remainder
is 3 data globals (`_commode`, `_fmode`, `__initenv`) and a couple of EH handlers, not
functions. `msvcp110` shows 0/91 *by string* only because its C++ imports are **mangled**
(`??0?$basic_ios@…`) while Ghidra stores demangled names — the functions are present in the
applied PDB (that DLL gained 2,313 symbols); it is a name-format mismatch, not a gap.

## How to use it

- To confirm which CRT routine a game call targets: find the import thunk in the exe (its
  name is in `raw/crt_import_map.md`), then read that function's body in `CwCrt` where it
  now carries its real name and signature.
- To re-apply after a Ghidra upgrade: `ApplyPdb.java <pdb-path>` against each `-process`.
