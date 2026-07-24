# Adjudicating the unattributed (`none`) functions

After the ledger, RTTI, library islands and struct recovery, a residue of functions carried
no attribution: **1,287 (server) / 2,548 (client)**. `adjudicate_none.py` splits that residue
by **structural role** — read from each decompiled body — so the review surface separates
into *trivial mechanical helpers a reviewer can skip* and *genuine unknown game logic*.

No names are invented. A function stays `logic` (still unattributed) unless its role is
mechanically provable from the code.

## Roles (each verifiable from the body)

| role | test | reviewer action |
|---|---|---|
| `accessor` | `return *(T*)(this+off)` | skip — field getter |
| `computed` | small, single return-expr, **no calls** (bitfield extract, predicate, `end-begin`) | skip |
| `mutator` | small field store(s), no calls | skip |
| `thunk` | single-call forwarder | skip |
| `identity` | `return this` | skip |
| `stub` | empty / `return const` | skip |
| `dispatch` | indirect call through a vtable | skip |
| `wrapper` | small, 1–2 calls, ≤1 branch | glance |
| `ctor-like` | zero-inits ≥4 fields, returns this | glance |
| `dtor-like` | frees memory | glance |
| `logic` | none of the above | **REVIEW — genuine logic** |

## Result

| | was `none` | trivial helper | genuine `logic` (review) |
|---|---|---|---|
| Server.exe | 1,287 | 381 | **902** |
| Cube.exe | 2,548 | 815 | **1,730** |

The genuine-logic review surface dropped **30% (server)** and **32% (client)**. The trivial
helpers are named (`get_0x1c`, `set_0x40`, `fwd_004xxxxx`, …) and split into
`game_misc/helpers_<role>.cpp`, so the `Unsorted_*` files now hold only functions that
actually need reverse-engineering.

Where a `logic` function's classified callers agree on a subsystem by ≥60%, it is filed
under that module (`logic:caller-vote`) instead of the generic `game_misc` — a weak module
hint, marked as such, never a name.

## Honest limits

- The role is a *shape*, not a purpose: `get_0x1c` says "returns the field at 0x1c", not what
  that field means. That is exactly the point — it tells a reviewer the function is trivial.
- `wrapper` / `ctor-like` / `dtor-like` are "glance", not "skip": they can carry a little
  logic, so they are separated from both the skippable helpers and the real review pile.
- 2,632 functions remain genuine `logic`. That is the real floor of what automated evidence
  can classify; going further needs per-function RE, which is what the tree now scopes.

## Pipeline ordering

`adjudicate_none.py` reads `attribution.tsv`, so it runs *after* a `structure.py` pass and
feeds the next one. Combined with the island fixpoint, a full rebuild after any change is:

```
structure.py            # writes attribution.tsv (islands/roles not yet applied)
flirt_islands.py        # reads attribution.tsv barrier -> libislands.json
adjudicate_none.py      # reads attribution.tsv -> none_roles.json
structure.py            # reads islands + roles -> final tree
```
