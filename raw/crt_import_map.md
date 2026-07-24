# CRT import map — game imports resolved against the PDB-applied DLLs

## Server.exe

- **msvcr110.dll**: 72 imports, 59 matched a PDB-named function by string, 13 not  — 9 of the 13 'unresolved' are C++ mangled names (`?...`); the functions ARE in the applied PDB, they just don't string-match Ghidra's demangled labels. Not a coverage gap.
  - genuinely unmatched (non-mangled): __CxxFrameHandler3, __initenv, _commode, _fmode
- **msvcp110.dll**: 91 imports, 0 matched a PDB-named function by string, 91 not  — 91 of the 91 'unresolved' are C++ mangled names (`?...`); the functions ARE in the applied PDB, they just don't string-match Ghidra's demangled labels. Not a coverage gap.

## Cube.exe

- **msvcr110.dll**: 119 imports, 85 matched a PDB-named function by string, 34 not  — 29 of the 34 'unresolved' are C++ mangled names (`?...`); the functions ARE in the applied PDB, they just don't string-match Ghidra's demangled labels. Not a coverage gap.
  - genuinely unmatched (non-mangled): __CxxFrameHandler3, __uncaught_exception, _acmdln, _commode, _fmode
- **msvcp110.dll**: 122 imports, 0 matched a PDB-named function by string, 122 not  — 122 of the 122 'unresolved' are C++ mangled names (`?...`); the functions ARE in the applied PDB, they just don't string-match Ghidra's demangled labels. Not a coverage gap.

## Trig routines now named in the CRT DLLs

These are the exact functions a game call can target; `_precise` vs plain is the ULP distinction the forest/rand ports needed:

- `__libm_sse2_acos`
- `__libm_sse2_acosf`
- `__libm_sse2_asin`
- `__libm_sse2_asinf`
- `__libm_sse2_atan`
- `__libm_sse2_atan2`
- `__libm_sse2_atanf`
- `__libm_sse2_cos`
- `__libm_sse2_cosf`
- `__libm_sse2_exp`
- `__libm_sse2_expf`
- `__libm_sse2_log`
- `__libm_sse2_log10`
- `__libm_sse2_log10f`
- `__libm_sse2_logf`
- `__libm_sse2_pow`
- `__libm_sse2_sin`
- `__libm_sse2_sinf`
- `__libm_sse2_tan`
- `__libm_sse2_tanf`
- `libm_sse2_acos_precise`
- `libm_sse2_asin_precise`
- `libm_sse2_atan_precise`
- `libm_sse2_cos_precise`
- `libm_sse2_exp_precise`
- `libm_sse2_log10_precise`
- `libm_sse2_log_precise`
- `libm_sse2_pow_precise`
- `libm_sse2_sin_precise`
- `libm_sse2_sqrt_precise`
- `libm_sse2_tan_precise`
