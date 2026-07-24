# `FUN_0052b470` — the server item generator — SOLVED, gated

The function that produces every generated item on the server: the dungeon boss's equipment
and the dungeon loot loop's drops. **Gated on 6 dungeons / 18 invocations / 450 candidates and
6 final picks, all reproduced from `(level, rank)` plus the `rand()` stream.** It also closes a
documented open item — the loot server↔client twin map — and falsifies four client labels.

```
python tools/frida_itemgen.py [zx zz]          # capture -> raw/itemgen_capture*.json
python tools/gate_52b470_itemgen.py --all      # gate
```

## It is a fixed table, not a decision tree

```c
void FUN_0052b470(ItemData *out, short level, int rank)
```

The 11 KB of decompiled C is 25 copies of one block. It builds a **fixed 26-entry candidate
list** in a `vector<ItemData>` (stride 0x118), rolling a rarity for each, and then returns a
uniformly random one:

```c
out = candidates[ rand() % 26 ];               // FUN_00413710 = ItemData_copy
```

Nothing about the caller, the world, or the level steers *which* item you get — only its
rarity distribution. The level is copied verbatim into every candidate's `+0x10`.

### The candidate table

| # | kind | subtype | material |
|---|---|---|---|
| 0 | 3 | `rand() % 3` | 1 |
| 1 | 3 | 13 | 1 |
| 2–5 | 3 | 6, 7, 10, 11 | 2 |
| 6–9 | 7, 4, 5, 6 | 0 | 1 |
| 10–14 | 7, **7**, 4, 5, 6 | 0 | 25 |
| 15–19 | 7, **7**, 4, 5, 6 | 0 | 26 |
| 20–24 | 7, **7**, 4, 5, 6 | 0 | 27 |
| 25 | 2 | — | from `FUN_0052a760` |

The asymmetry is real and reproduced in every capture: the material-1 group has **four**
entries (7, 4, 5, 6) while each of the material-25/26/27 groups has **five** — kind 7 appears
twice. Entry 0 is the only one whose subtype is rolled.

The `+0x14` payload (0x100 bytes) is `memset` to 0 at entry and never written here, so a
candidate is fully described by `{kind, subtype, material, rarity, level}`.

### The rarity roll

Four draws per candidate — the same code as `FUN_0052bf40`, inlined 25 times:

```c
r = rand() % (rank + 1);
if (rand() %   100 == 0) r++;
if (rand() %  1000 == 0) r++;
if (rand() % 10000 == 0) r++;
r = min(r, 4);
```

### Draw accounting — 128 or 136 per call

| draws | what |
|---|---|
| **4** | **discarded** — four bare `rand()` calls at entry whose results are never read |
| 1 | entry 0's subtype |
| **5** | **discarded** — five more before entry 1 |
| 100 | 25 rarity rolls × 4 |
| 1 | `FUN_0052a760`'s coin flip |
| 24 *or* 16 | the coin's `FUN_00528bf0` / `FUN_0052c4e0` branch |
| 1 | the final `rand() % 26` pick |

The **nine discarded draws are confirmed in the disassembly**, not a decompiler artifact:
`call esi` ×4 at `0x52b529`, results untouched. They look like a removed roll, and a port must
burn them or the whole downstream stream desynchronises.

`FUN_0052bf40(byte, 1)` — the function the boss block uses to compute `rank` — is the same roll
with an override: its second argument is the constant `1`, which **discards the entire
computation and returns `byte + 1`**. It still burns its 4 draws.

## `ItemData` — the copy defines which bytes are live

`FUN_00413710` (`ItemData_copy`) copies `+0x00`, `+0x01`, `+0x04..0x0B`, `+0x0C`, `+0x0D`,
`+0x0E`, `+0x10..0x11`, `+0x14..0x113`, `+0x114..0x117` — **and nothing else**. So

> `+0x02`, `+0x03`, `+0x0F`, `+0x12`, `+0x13` are padding

and they carry whatever the source stack slot happened to hold. The gate found this the honest
way: the chosen candidate and the caller's stored item differ at exactly `0x0f`, `0x12`, `0x13`
and match on every copied byte. Comparing the full 0x118 bytes would have reported a false
failure; comparing only the copied set passes 6/6.

## Gate results

`python tools/gate_52b470_itemgen.py --all`

| zone | invocations | levels | ranks | sub-branch |
|---|---|---|---|---|
| (32795, 32796) | 1 | 3 | 1 | 24 |
| (32780, 32788) | 5 | 23 | 4 | 16 / 24 |
| (32787, 32796) | 2 | 6 | 0, 1 | 16 / 24 |
| (32796, 32787) | 4 | 30 | 3 | 16 |
| (32804, 32788) | 5 | 52 | 3 | 16 / 24 |
| (32804, 32811) | 1 | 1 | 1 | 24 |
| **total** | **18** | 1–52 | 0–4 | both |

**450/450 candidates** exact on `{kind, subtype, material, rarity, level}` plus a zero payload,
and **6/6 final picks** — the chosen candidate matches the caller's stored `ItemData` on every
copied byte. Three call sites are covered: `0x107a0b` (the dungeon boss) and `0x106f49` /
`0x107218` (the dungeon loot loop).

The 26th candidate — the one `FUN_0052a760` wraps — is gated separately below, so nothing in
this function is left opaque.

## The 26th candidate: `FUN_0052a760` and its two sub-generators — also gated

```
python tools/gate_52a760_subgen.py --all
```

`FUN_0052a760(out, level, rank)` is a thin wrapper: it zeroes an `ItemData`, coin-flips between
two sub-generators, copies the result, then **moves the kind byte aside and overwrites it**:

```c
if (rand() % 2 == 0) FUN_00528bf0(tmp, level, rank, -1);
else                 FUN_0052c4e0(tmp, level, rank, -1);
FUN_00402a70(out, tmp);            // ItemData copy
out[+0x08] = out[+0x00];           // the real kind moves to +0x08
out[+0x00] = 2;                    // and kind becomes 2
```

So the parent's 26th candidate always reads `kind = 2` with the true kind at `+0x08` — which
is why it looked like a distinct item family in the parent's table and is not one.

### Both sub-generators are the parent's own shape, with two differences

Each is a fixed table filtered by `param_4` (`-1` from `FUN_0052a760` = take every group), one
roll per candidate, then a uniform pick. But unlike the parent:

- **the rarity byte `+0x0c` is the caller's `rank` verbatim** — no roll at all; and
- each candidate carries a **`rand() % 100`** value at `+0x04`, which the parent's own
  candidates leave at 0.

| | `FUN_00528bf0` | `FUN_0052c4e0` |
|---|---|---|
| candidates | 21 | 11 |
| draws | 24 | 16 |
| kind | **4, 5, 6, 7, 8, 9** | **3, and only 3** |
| subtype | always 0 | 15 distinct values |
| materials | 1, 25, 26, 27, and 11/12 | 1, 2, and 11/12 |
| `param_4` groups | by material (1→1, 3→25, 2→26, 4→27) | by subtype set |

`FUN_00528bf0`'s four groups are **the same table as the parent's candidates 6–24** — same
materials 1/25/26/27, same kind patterns `[7,4,5,6]` then `[7,7,4,5,6]` three times. The parent
inlines it and drops only the kinds 8/9 pair.

Two details a port has to copy exactly:

- `FUN_0052c4e0` has **another discarded draw**, a bare `rand()` between the subtype-6 and
  subtype-8 candidates.
- The coin-flipped material at the end of each is written with **opposite polarity**:
  `FUN_00528bf0` uses `11 + (r % 2 != 0)` (11 on even), `FUN_0052c4e0` uses
  `12 - (r % 2 != 0)` (12 on even). Both branches are observed live.

### Gate: 18 invocations, 298 candidates

Every sub-generator candidate reproduced on `{kind, subtype, +0x04 roll, material, rarity,
level}`, the pick index reproduced, **and** the picked candidate verified through
`FUN_0052a760`'s mutation into the parent's 26th entry — 18/18 across the 6 dungeons, with both
branches and ranks 0–4 covered.

### What they are

Not asserted, but worth recording: six kinds with no subtype versus one kind with fifteen
subtypes is the shape of *equipment slots* versus *weapon types*, and it agrees with the
corpus's older weapon/armour reading of the client twins — while **pinning the direction**,
which had never been fixed: `FUN_005f8ad0` (kind 3) is the weapon side and `FUN_005f51e0`
(kinds 4–9) the equipment side. The ledger names them for what is proven —
`item_gen_kind_3` and `item_gen_kinds_4_9` — not for what that probably means.

---

## The server↔client twin map — closed

`CW_RE_MASTER_INDEX.md:171` lists "Loot server↔client twin map (`FUN_0052b470`… vs
`FUN_005f8ad0`…) — never reconciled". It reconciles exactly:

| server | client | size (srv / cli) | role |
|---|---|---|---|
| `FUN_0052b470` | `FUN_005f7a60` | 2765 / 2762 | item generator (this document) |
| `FUN_0052bf40` | `FUN_005f8530` | 94 / **94** | rarity roll |
| `FUN_0052a760` | `FUN_005f6d50` | 194 / **194** | special candidate (coin flip, kind := 2) |
| `FUN_00528bf0` | `FUN_005f51e0` | 1240 / 1237 | the coin's even branch — kinds 4–9 |
| `FUN_0052c4e0` | `FUN_005f8ad0` | 820 / 817 | the coin's odd branch — kind 3 |
| `FUN_00528530` | `FUN_004c7830` | 132 / **132** | `vector<ItemData>::push_back` |

Three pairs are **byte-identical in size** and the other three differ by exactly 3 — and the
bodies match statement for statement (`FUN_005f7a60` has the same 26 push_backs, the same 111
`rand()` calls, and the same per-push draw deltas `[9, 9, 4×23, 0]`). The two binaries share
this source.

### Four client labels this falsifies

The client side had been labelled from the xref, and the twin identification overturns it:

| client addr | old label | actual |
|---|---|---|
| `0x5f8530` | `WorldInfo_vectorElementAt` | **`rarityRoll`** — it indexes nothing; the body is 4 `rand()` draws and a clamp |
| `0x5f6d50` | `World_emitDecalOrParticle` | **`item_special_candidate`** — it zeroes an `ItemData` and memsets its 0x100 payload |
| `0x5f51e0` | `GameController_buildDecalMesh` | **`item_gen_kinds_4_9`** — the even branch of the above |
| `0x5f8ad0` | `GameController_buildDecalMesh2` | **`item_gen_kind_3`** — the odd branch |

The last two were already flagged in the xref as a pre-existing corpus conflict; this settles
which side was right. Their names state what their tables provably emit, not what it means.

`FUN_0052b470` and `FUN_0052a760` were themselves filed `lib_fn_*`. They are game code.

## Instrumentation notes

`FUN_0052b470` **cannot be hooked** — a Frida trampoline on it kills the process, as it does on
`FUN_005284a0`. `FUN_00413710` and `FUN_00427000` cannot be intercepted at all ("unable to
intercept function"). So the rig instruments the two helpers it *can* hook and filters on the
return address:

- `FUN_00528530` — one hit per candidate, in push order. Frida hooks it before its prologue, so
  `ebp` still belongs to `FUN_0052b470` and its arguments are readable at `[ebp+8/0xc/0x10]`.
  That is how `level` and `rank` are captured without touching the function itself.
- `rand()` with return-address attribution, charging each draw to the function that made it.

Two capture-window subtleties, both handled in the gate rather than papered over:

1. A call's final-pick draw happens *after* its last `push_back`, so it lands at the head of
   the **next** window. A call's own stream is therefore the **last** 110 itemgen draws in its
   window, not the first.
2. `FUN_0052a760` has other callers, so an unrelated special can appear in the window too.
   Take the last one.

`FUN_00528530` is `__thiscall`: `this` is in `ecx`, so the `ItemData` pointer is `args[0]`, not
`args[1]`. Getting that wrong silently produced zero candidates (every read threw and was
swallowed by the `try`) — the tell was the candidate count being 0 while the draw count was
right.
