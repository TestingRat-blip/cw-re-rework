# reccmp — byte-match workspace

Reconstructions compiled with the RTM compiler (`../../msvc_vs2012_rtm/compiler_bin`) and
diffed against the shipped functions. Full write-up: `../RECCMP.md`.

| file | result |
|---|---|
| `formula_inverse.c` | FUN_00411090 — **100% (14/14)** |
| `falloff_squared_v2.cpp` | FUN_0052dee0 — **100% (19/19)**, correct source |
| `falloff_squared.cpp` | the FIRST attempt — structural-only, **wrong source order**; kept as the worked example of the "rule out source before blaming the compiler" lesson in RECCMP.md |
| `falloff_squared.c` | dead first draft (C free-func can't be `__thiscall`) |
| `*.asm` | `cl /FA` listings of our recompile · `*.orig.txt` — Ghidra disasm of the shipped fn |
| `compare.py` | normalise (mask calls/consts/stack/jump-synonyms) + diff; linear + multiset scores |

Rebuild any: from PowerShell (not MSYS — `/nologo` mangling),
`& ..\..\msvc_vs2012_rtm\compiler_bin\cl.exe /nologo /c /O2 /Oy- /arch:SSE2 /fp:precise /Fa <name>.c`
then `python compare.py <name>`.
