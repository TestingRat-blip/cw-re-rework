# Adjudication of the unattributed (`none`) functions

By **structural role**, read from each decompiled body. No names are invented; a
function stays `logic` (unattributed) unless its role is mechanically provable.
The point is to separate trivial mechanical helpers a reviewer can skip from the
genuine unknown game logic that is the real remaining RE surface.

## Server.exe — 1287 unattributed

| role | count | reviewer action |
|---|---|---|
| logic | 906 | **REVIEW — genuine logic** |
| wrapper | 155 | glance — thin wrapper |
| dtor-like | 53 | glance — destructor |
| computed | 50 |  |
| thunk | 43 | skip — forwarder |
| mutator | 26 | skip — field setter |
| ctor-like | 21 | glance — constructor |
| dispatch | 15 | skip — vtable dispatch |
| accessor | 15 | skip — field getter |
| stub | 2 | skip — trivial/empty |
| identity | 1 | skip — returns this |

**381 of 1287 (30%) are trivial mechanical helpers; 906 remain genuine logic.**

## Cube.exe — 2548 unattributed

| role | count | reviewer action |
|---|---|---|
| logic | 1733 | **REVIEW — genuine logic** |
| wrapper | 299 | glance — thin wrapper |
| dtor-like | 218 | glance — destructor |
| thunk | 109 | skip — forwarder |
| computed | 65 |  |
| dispatch | 53 | skip — vtable dispatch |
| mutator | 34 | skip — field setter |
| ctor-like | 20 | glance — constructor |
| accessor | 11 | skip — field getter |
| stub | 5 | skip — trivial/empty |
| identity | 1 | skip — returns this |

**815 of 2548 (32%) are trivial mechanical helpers; 1733 remain genuine logic.**

Consumed by `structure.py` as the `role` source: trivial roles get their descriptive
name and drop into `game_misc/_helpers`, isolating the `logic` functions in the tree.
