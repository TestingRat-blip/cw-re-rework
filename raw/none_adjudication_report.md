# Adjudication of the unattributed (`none`) functions

By **structural role**, read from each decompiled body. No names are invented; a
function stays `logic` (unattributed) unless its role is mechanically provable.
The point is to separate trivial mechanical helpers a reviewer can skip from the
genuine unknown game logic that is the real remaining RE surface.

## Server.exe — 1307 unattributed

| role | count | reviewer action |
|---|---|---|
| logic | 611 | **REVIEW — genuine logic** |
| wrapper | 144 | glance — thin wrapper |
| vfunc-indirect | 133 | REVIEW — vtable method (indirect) |
| dispatch-target | 109 | REVIEW — dispatch-table handler |
| body-split | 78 | MERGE — fragment of its owner, not a function |
| dtor-like | 56 | glance — destructor |
| computed | 46 |  |
| thunk | 27 | skip — forwarder |
| callback | 24 | REVIEW — callback |
| ctor-like | 22 | glance — constructor |
| artifact | 22 | SKIP — no refs (dead code / EH fragment) |
| mutator | 13 | skip — field setter |
| dispatch | 13 | skip — vtable dispatch |
| accessor | 6 | skip — field getter |
| stub | 2 | skip — trivial/empty |
| identity | 1 | skip — returns this |

**130 skippable (trivial helpers + artifacts); 266 indirect real functions recovered (vtable/dispatch/callback); 78 body splits merged into their owner; 611 remain genuine logic.**

## Cube.exe — 2630 unattributed

| role | count | reviewer action |
|---|---|---|
| logic | 1166 | **REVIEW — genuine logic** |
| dispatch-target | 294 | REVIEW — dispatch-table handler |
| wrapper | 276 | glance — thin wrapper |
| vfunc-indirect | 234 | REVIEW — vtable method (indirect) |
| dtor-like | 229 | glance — destructor |
| artifact | 101 | SKIP — no refs (dead code / EH fragment) |
| thunk | 89 | skip — forwarder |
| callback | 80 | REVIEW — callback |
| computed | 61 |  |
| dispatch | 46 | skip — vtable dispatch |
| ctor-like | 23 | glance — constructor |
| mutator | 22 | skip — field setter |
| stub | 5 | skip — trivial/empty |
| identity | 2 | skip — returns this |
| accessor | 2 | skip — field getter |

**328 skippable (trivial helpers + artifacts); 608 indirect real functions recovered (vtable/dispatch/callback); 0 body splits merged into their owner; 1166 remain genuine logic.**

Consumed by `structure.py` as the `role` source: skippables get a descriptive name
in `game_misc/_helpers_*` / `_artifacts`, indirect-real go to `_indirect_*` under
their subsystem, body splits go to `_body_splits` under their **owner's**
subsystem, isolating true `logic` in the `Unsorted` files.
