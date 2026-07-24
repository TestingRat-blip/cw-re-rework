# Getting the Update 1 compiler — investigation

The game was built with MSVC **17.00.51106** (VS2012 Update 1). We have **17.00.50727** (RTM).
This records what's obtainable and whether it's worth pursuing.

## Can Update 1 be reconstructed from Update 2/3? — No.

A compiler toolset (`cl.exe` + `c1`/`c1xx`/`c2`) is a set of **monolithic binaries**. There
is no patch/delta mechanism that turns build 60315 (U2) or 60610 (U3) back into 51106 (U1) —
each servicing release ships its own complete compiler, not a diff over the previous one.
"Rebuilding U1 from U2/U3" isn't a thing. The only ways to get 51106 are to obtain that exact
build, or to find a distribution that contains it.

## The compiler build per release

| release | `cl.exe` build | how confirmed |
|---|---|---|
| RTM | 17.00.**50727** | our `compiler_bin/cl.exe`, and the ISO |
| **Update 1** | 17.00.**51106** | the **game's** Rich header + its `msvcr110/msvcp110` redists (`cw-build-toolchain`) |
| Update 2 | 17.00.60315 | reported |
| Update 3 | 17.00.60610 | reported |
| Update 4 | 17.00.61030 | reported |
| Update 5 | 17.00.**61219** | archive.org title of `VS2012.5.iso` |

## What's actually obtainable (checked 2026-07-23)

- **Update 1 installer** (`vsupdate_KB2707250.exe`) — **dead.** The download.microsoft.com
  path 404s; the `go.microsoft.com/fwlink` IDs now redirect to unrelated pages. Not on
  archive.org (which has only Update 5).
- **Update 3 ISO** — `download.microsoft.com/.../VS2012.3.iso`, **live, 2.1 GB** (full product
  at U3 = cl 60610).
- **Update 5 ISO** — `.../VS2012.5.iso`, **live, 2.4 GB** (cl 61219); also on archive.org
  (`vs-2012.5`).
- **my.visualstudio.com** (free Visual Studio Dev Essentials) — its download archive has
  historically carried VS2012 servicing packages including Update 1. Requires a Microsoft
  account sign-in, so it can't be scripted here; **this is the most likely route to the exact
  51106 compiler.**

## Is it worth pursuing? — Not on current evidence.

**Every function byte-matched on RTM 100%** — `formula_inverse` (14/14) and
`falloffSquared` (19/19). The one case that *looked* like an RTM-vs-Update-1 codegen gap was
a **source error** in the reconstruction, not a compiler difference (see `RECCMP.md` case 2).

So although the build numbers differ (50727 vs 51106), **no observable codegen difference
between them has been found.** Two MSVC servicing builds very often emit identical code for
the same source and flags; that appears to be the case here for everything tested.

**Recommendation:** do not spend the 2 GB download (or the my.visualstudio.com hunt) yet.
Pursue the Update 1 compiler only if a specific function *provably* fails to byte-match on
RTM **and** the failure survives correcting the source and flags — i.e. the reconstruction is
confirmed equivalent yet the instructions still differ. At that point:

1. Try **Update 3** first (live, closest obtainable to U1 in the codegen timeline). If the
   game's sequence is servicing-stable from U1 onward, U3 will reproduce it even though it
   isn't 51106. Extract its compiler the same way as RTM (`msvc_vs2012_rtm/README.md` +
   `compiler_bin/README.md`).
2. If U3 still differs, the exact 51106 from my.visualstudio.com is the only remaining option.

## Changelogs

Microsoft's per-update notes are **feature/bug-fix** level, not instruction-level codegen
diffs, so they won't tell you in advance which functions differ:

- VS2012 Update 1 (KB2707250) bug-fix list — MS Learn archive (`blogs/zainnab`).
- "How to install VS2012 Update N offline" — MS Learn archive (`blogs/robcaron`).
- Compiler version ↔ VS release mapping — MS Learn `cpp/overview/compiler-versions`.

None enumerate optimizer changes at the granularity that matters for byte-matching. The
empirical test (compile on RTM, then on U3 if needed, and diff) is the only reliable way to
know whether a given function's codegen moved between builds.
