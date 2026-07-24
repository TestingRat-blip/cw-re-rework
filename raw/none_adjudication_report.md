# Adjudication of the unattributed (`none`) functions

By **structural role**, read from each decompiled body. No names are invented; a
function stays `logic` (unattributed) unless its role is mechanically provable.
The point is to separate trivial mechanical helpers a reviewer can skip from the
genuine unknown game logic that is the real remaining RE surface.

## Server.exe — 1287 unattributed

| role | count | reviewer action |
|---|---|---|
| logic | 591 | **REVIEW — genuine logic** |
| wrapper | 141 | glance — thin wrapper |
| vfunc-indirect | 133 | REVIEW — vtable method (indirect) |
| dispatch-target | 109 | REVIEW — dispatch-table handler |
| artifact | 107 | SKIP — no refs (EH/GS fragment or dead code) |
| dtor-like | 52 | glance — destructor |
| computed | 46 |  |
| thunk | 27 | skip — forwarder |
| callback | 24 | REVIEW — callback |
| ctor-like | 21 | glance — constructor |
| dispatch | 14 | skip — vtable dispatch |
| mutator | 13 | skip — field setter |
| accessor | 6 | skip — field getter |
| stub | 2 | skip — trivial/empty |
| identity | 1 | skip — returns this |

**216 skippable (trivial helpers + artifacts); 266 indirect real functions recovered (vtable/dispatch/callback); 591 remain genuine logic.**

## Cube.exe — 2548 unattributed

| role | count | reviewer action |
|---|---|---|
| logic | 1113 | **REVIEW — genuine logic** |
| dispatch-target | 294 | REVIEW — dispatch-table handler |
| wrapper | 270 | glance — thin wrapper |
| vfunc-indirect | 234 | REVIEW — vtable method (indirect) |
| dtor-like | 216 | glance — destructor |
| artifact | 101 | SKIP — no refs (EH/GS fragment or dead code) |
| thunk | 84 | skip — forwarder |
| callback | 80 | REVIEW — callback |
| computed | 61 |  |
| dispatch | 46 | skip — vtable dispatch |
| mutator | 21 | skip — field setter |
| ctor-like | 20 | glance — constructor |
| stub | 5 | skip — trivial/empty |
| accessor | 2 | skip — field getter |
| identity | 1 | skip — returns this |

**321 skippable (trivial helpers + artifacts); 608 indirect real functions recovered (vtable/dispatch/callback); 1113 remain genuine logic.**

Consumed by `structure.py` as the `role` source: skippables get a descriptive name
in `game_misc/_helpers_*` / `_artifacts`, indirect-real go to `_indirect_*` under
their subsystem, isolating true `logic` in the `Unsorted` files.
