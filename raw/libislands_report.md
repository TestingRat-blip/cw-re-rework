# Static-library islands — SQLite / FreeType

**Not byte-hash FLIRT.** That needs the exact `.lib`/`.obj` the game was built
from, and the hashes break under any compiler-flag difference we cannot
reproduce. Instead each library is carved as its **contiguous linker block**:
seed from its distinctive strings, take the densest seed cluster as the block,
then claim functions reachable from the seeds *inside that block*, stopping at
the proven-game barrier and at any function carrying VC11 STL diagnostics.
Every claimed function is provably reachable only from library code within the
library's own address range — stronger and more robust than a flag-sensitive hash.

`zlib` is **dynamically** linked (`zlib1.dll`) and already resolved by import.

## Server.exe

- **sqlite**: 72 seed anchors → **822 functions**, linker block `0x457b30-0x4cb670`

## Cube.exe

- **sqlite**: 70 seed anchors → **845 functions**, linker block `0x515170-0x588cd0`
- **freetype**: 7 seed anchors → **202 functions**, linker block `0x648e80-0x6b7310`

## Validation (each island)

- 0 functions in a `cube`/`plasma`/`abstr` game namespace
- 0 functions carrying STL diagnostics (`string too long`, `bad cast`, …)
- ~80%% call another island member — the density of a real library block
- contiguous address range, matching a single static-library block

Written to `raw/<prog>.libislands.json`; consumed by `structure.py` as the
`lib-island` attribution (above name heuristics, below the proven ledger),
producing `_library/sqlite` and `_library/freetype` in the tree.
