# Byte-matching against a VS2012 recompile (reccmp workflow)

Proving a C reconstruction compiles to the **same machine code** as the shipped binary —
upgrading a gate from behavioural (same outputs) to structural (same instructions). Full
whole-binary decomp is a multi-month project; this stands up the toolchain and proves the
workflow on individual functions RatForge has already ported.

## Toolchain — VS2012 cl.exe, running standalone

The compiler was extracted from `../msvc_vs2012_rtm/VS2012_WDX_ENU.iso` (no install):
`vc_CompilerCore86.cab` → `cl.exe c1.dll c1xx.dll c2.dll link.exe mspdb110.dll msobj110.dll`,
plus `1033/clui.dll` from `vc_CompilerCore86Res.cab`. **Kept permanently at
`../msvc_vs2012_rtm/compiler_bin/`** (25 MB, runnable in place — see its README).

```
cl.exe  ->  Microsoft (R) C/C++ Optimizing Compiler Version 17.00.50727.1 for x86
```

Note **50727 = RTM**; the shipped game is **51106 = Update 1** (see `../msvc_vs2012_rtm`).
That one-servicing-release gap is the crux of the results below.

## Flags pinned by the match

`formula_inverse` matches only under **`/O2 /Oy- /arch:SSE2 /fp:precise`**. Each flag is now
evidence-based, not assumed:

- **`/arch:SSE2`** — the original computes in SSE scalar (`movss`/`divss`), not x87. On 32-bit
  VS2012 that requires `/arch:SSE2`; the default (x87) would not match.
- **`/Oy-`** — the original keeps a frame pointer (`push ebp; mov ebp,esp`). `/O2` implies
  `/Oy` (omit); `/Oy-` restores it.
- **`/fp:precise`** — the CRT-import evidence (`CRT_SYMBOLS.md`: only `_precise` trig imported)
  already fixed this; the match is consistent with it.

## Case 1 — `formula_inverse` (FUN_00411090): **100% exact**

```
LINEAR MATCH:   14/14 instructions (100.0%)
```

The reconstruction `(1.0f/(1.0f-x)-1.0f)*20.0f+1.0f` compiles to the shipped binary's exact
instruction sequence, constant for constant (`__real@3f800000` = 1.0f at `[0x5586dc]`,
`__real@41a00000` = 20.0f at `[0x55874c]`). This function's codegen did not change between
RTM and Update 1, so our RTM compiler reproduces it exactly. **`formula_inverse` is now a
structural byte-match, not just a behavioural identity.**

## Case 2 — `World::falloffSquared` (FUN_0052dee0): **100% exact** — after fixing the source

`__thiscall`, an external call, a branch, and the x87-return-into-SSE pattern —
`f = 1 - feature_falloff(a,b); return f<=0 ? 0 : f*f`. **19/19 instructions match.**

This one carries a lesson worth keeping. The *first* reconstruction wrote the condition as
`if (0.0f < f) return f*f; return 0;` and matched only structurally — the shipped binary
zeroed a register with `xorps` and branched `jc`, while ours loaded `0.0` from the constant
pool and branched `jbe`. It was tempting to call that the **RTM-vs-Update 1 compiler delta**.
It was not. Writing the condition the way the decompiler actually showed it —
`if (f <= 0.0f) return 0; return f*f;` (`falloff_squared_v2.cpp`) — makes RTM emit the
shipped sequence exactly, `xorps` and all. **The difference was the source, not the
compiler.** Rule out source and flags before ever blaming the toolchain version.

## What this establishes

1. The reccmp workflow works end-to-end with the recovered toolchain: reconstruct → compile
   → normalise → diff, scored per instruction (`compare.py`).
2. Four build flags are now pinned by actual byte-matches: **`/O2 /Oy- /arch:SSE2 /fp:precise`**.
3. **Both functions tested byte-match 100% on RTM.** Despite the game being built with
   Update 1 (51106) and our compiler being RTM (50727), no codegen difference has surfaced.
   The one that looked like a version gap was a source error. So the RTM-vs-Update-1 concern
   is, on the evidence so far, **theoretical** — RTM has reproduced every function exactly.
   See `UPDATE1_INVESTIGATION.md` for whether chasing the Update 1 compiler is warranted
   (short version: not until a function provably fails on RTM for version reasons).

## Files

```
reccmp/
  formula_inverse.c        reconstruction — 100% byte-match
  falloff_squared.cpp      reconstruction — structural match (RTM≠U1)
  *.asm                    cl /FA listings (our recompile)
  *.orig.txt               Ghidra disasm of the shipped function
  compare.py               normalise + diff, linear and multiset scores
```

Compile (from PowerShell, to avoid MSYS arg mangling), then compare:

```
$cl = "..\msvc_vs2012_rtm\compiler_bin\cl.exe"
& $cl /nologo /c /O2 /Oy- /arch:SSE2 /fp:precise /Fa <name>.c
python compare.py <name>
```
