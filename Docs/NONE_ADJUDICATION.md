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
| `body-split` | entry bytes are an MSVC alignment NOP inside a bigger function | **merge into its owner** |
| `artifact` | no incoming reference of any kind | skip — dead code / EH fragment |
| `vfunc-indirect` / `dispatch-target` / `callback` | reached only indirectly (`IndirectRefs.java`) | **REVIEW — real function** |
| `logic` | none of the above | **REVIEW — genuine logic** |

`body-split` comes from `nop_split_audit.py` and **overrides every other role**: the address is
not a function at all, so its structural shape is meaningless. Ghidra started a function on the
6-byte `lea ebx,[ebx+0]` MSVC emits to 16-align a loop head, mid-body, and handed it the rest
of the enclosing function. The code is real — it files under its **owner's** subsystem in
`_body_splits`, not in the artifact bin. Before this role existed, 77 of them sat in
`_artifacts` labelled "dead code", among them the dungeon assembler and the town builder
(`Docs/RE_50702a_mob_populator.md`).

## Result

| | pool | skip (trivial + artifact) | body-split | glance | indirect-real | genuine `logic` |
|---|---|---|---|---|---|---|
| Server.exe | 1,307 | 130 | **78** | 222 | 266 | **611** |
| Cube.exe | 2,630 | 328 | **0** | 528 | 608 | **1,166** |

The trivial helpers are named (`get_0x1c`, `set_0x40`, `fwd_004xxxxx`, …) and split into
`game_misc/_helpers_<role>.cpp`, so the `Unsorted_*` files now hold only functions that
actually need reverse-engineering.

The Server/Cube asymmetry in `body-split` is real, not a tooling difference: Cube.exe has
**0** — its zero-reference functions all start on real prologues (105 of 147 are `55 8b ec`).

Where a `logic` function's classified callers agree on a subsystem by ≥60%, it is filed
under that module (`logic:caller-vote`) instead of the generic `game_misc` — a weak module
hint, marked as such, never a name.

## Honest limits

- The role is a *shape*, not a purpose: `get_0x1c` says "returns the field at 0x1c", not what
  that field means. That is exactly the point — it tells a reviewer the function is trivial.
- `wrapper` / `ctor-like` / `dtor-like` are "glance", not "skip": they can carry a little
  logic, so they are separated from both the skippable helpers and the real review pile.
- 1,777 functions remain genuine `logic`. That is the real floor of what automated evidence
  can classify; going further needs per-function RE, which is what the tree now scopes.
- `body-split` says *this address is a fragment of function X*, not what the fragment does.
  Reviewing one means reviewing X.

## Pipeline ordering

`adjudicate_none.py` reads `attribution.tsv`, so it runs *after* a `structure.py` pass and
feeds the next one. Combined with the island fixpoint, a full rebuild after any change is:

```
structure.py            # writes attribution.tsv (islands/roles not yet applied)
flirt_islands.py        # reads attribution.tsv barrier -> libislands.json
adjudicate_none.py      # reads attribution.tsv -> none_roles.json
structure.py            # reads islands + roles -> final tree
```

### Re-running it is safe now

It used to be destructive. The pool was `attributed_by == "none"`, but the rows it classified
come back reading `role:*` — so a second run did not see them and silently dropped every
classification the first had made, degrading the tree on the next `structure.py`. (Same
failure family as running `flirt_islands.py` against an already-carved tree.)

The pool is now every row this pass owns — `none`, `role:*`, `logic:*` — **plus the addresses
it classified last time**, minus anything a hard source (ledger / RTTI / library) has since
claimed. Without that memory the pool ratchets *down* instead, because a row promoted to
`caller-vote` would leave it for good (1,248 → 1,181 → 1,177 in testing).

With it, `adjudicate_none.py` + `structure.py` iterated repeatedly reaches an exact fixpoint
after ~4 rounds and stays there (verified: rounds 5, 6 and 7 produce a byte-identical
`attribution.tsv` for both binaries). The first few rounds still move a little because the
module hint and `structure.py`'s caller vote depend on each other — a pre-existing property
of the two-pass design, not of this change.
