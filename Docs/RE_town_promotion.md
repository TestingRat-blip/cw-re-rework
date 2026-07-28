# The town builder's PROMOTION pass — decoded, gated and ported

> **The question this slice was opened to answer** (`HANDOFF_PROMPT.md`, item 1, and
> `RE_town_verdict.md` §7.3): the promotion pass is the stage immediately after the
> verdict scan and costs almost nothing — a **median of 1 draw per town** — but it was
> blocked on two inputs nobody had, *`FUN_004e19f0`'s sort key* and *whether `site+0x79`
> is derivable from the seed*.
>
> **Both are settled, and neither is what it was filed as.** `FUN_004e19f0` carries no
> key at all — it is `std::sort` and the key lives in the predicate. And `site+0x79` is
> not a faction: it is the per-zone **site-kind grid entry's second byte**, which
> `cw_featuregen` has been computing and throwing away since the grid was derived. The
> pass is now RE'd, live-gated and ported ab initio.

```
python tools/gate_town_promotion.py                       # 2,071 checks, 92 / 70 towns
build/cwgen_test.exe tools/cw_rederive/golden_rederive     # rederive_townpromo 140/140
```

---

## 1. The two inputs

### 1.1 The sort key — `plot[+0x18]`, ASCENDING

`FUN_004e19f0` is **MSVC's `std::_Sort`** over a **4-byte** element: the `sar eax, 2`
element count at `0x4e1a03`, the `_ISORT_MAX` test `cmp eax, 0x20` at `0x4e1a06`, the
`_Med3`/`_Unguarded_partition`/`_Make_heap` calls, and the predicate passed straight
through as `[ebp+0x14]`. So it is correctly filed under `_library`, and asking for "its
sort key" was the wrong question — the key is in the **comparator**, a one-dword functor
whose value is `&plotBase` (the address of the frame slot holding the plot array
pointer, pushed at `0x4e31b4`).

MSVC inlined that comparator into two separate instantiations, and they agree:

```
0x4e159c  (_Adjust_heap)      edi = *pred                        ; = plotBase
          movss xmm0, [edi + (arr[i-1]*7)*4 + 0x18]
          comiss xmm0, [edi + (arr[i]*7)*4 + 0x18]   ; jbe -> no --idx
0x4e164e  (_Insertion_sort)   movss xmm1, score(plot[*_Next])    ; the value being placed
          movss xmm0, score(plot[*_First])
          comiss xmm0, xmm1                          ; jbe -> not a front-insert
```

Both reduce to **`pred(u, v) = plot[u].score < plot[v].score`** — a plain ascending sort
on the plot record's `+0x18`, the `World_falloffSquared` score `RE_town_verdict.md`
already derives from the seed. Since the sort is ascending, **`pop_back` takes the
highest-scoring plot**, which is what makes the deterministic roles land on the most
central plot of a town.

Every town in the sample has `plotCount` 16 or 25, so `_Sort` never reaches the introsort
body: `count <= 0x20` jumps straight to `_Insertion_sort`, which is **stable**. Equal
scores therefore keep ascending plot-index order, and the port only needs the insertion
sort.

**Measured against the live plot tables (70 towns, 1,435 records):**

| sort | plots exact |
|---|---|
| **ascending by score** | **1,435 / 1,435** |
| descending by score | 941 |
| unsorted (plot-index order) | 973 |
| reversed plot-index order | 1,015 |
| ascending by `minH` / `maxH` / `interior` / rotation | 986 / 998 / 989 / 995 |
| no promotion at all (the null) | 1,093 |

The null matters (lesson 5): 342 of the 1,435 records genuinely change in this pass, so
the gate is not measuring a table that promotion barely touches.

### 1.2 `site+0x79` is a CORNER RANK, not a faction

`RE_town_props.md` named this byte "the faction" because its value selects the role set,
and left "value 4, whose set no town revealed" open. It is the **site-kind grid entry's
second byte**, and `RE_site_kind_grid.md` had already found where it is written without
connecting the two:

> The four town stores each pair with a `+0x19` store of `1`, `2`, `3`, `4` — a corner
> index

The site record's descriptor base is `site+0x60` (`RE_dungeon_level_rank.md`), so
`site+0x78` is the kind byte and `site+0x79` is that second byte. For a town it is the
zone's **rank 1..4 among the four zones of the type-1 cell's tile**, in descending
warped-falloff order; for a zone with no site entry it is **0** — which is why every one
of the 42 captured **ruins reads 0**: a type-5 cell writes no site-kind entry at all.

Derived from the seed with `gate_site_kind.town_zones` and compared against the live byte:

| derived → | 0 | 1 | 2 | 3 | 4 |
|---|---|---|---|---|---|
| live | 66 | 6 | 12 | 4 | 4 |

**92 / 92**, against a null ("always 0") of 66. Lesson 26 again, from the good side: the
value was already being computed by a port and discarded.

### 1.3 A third input the lead did not name — the RUIN's `desc+0x1c`

The ruin half of the pass branches on the descriptor's subtype, and cwgen was producing
**0 for every ruin** while the live descriptor holds 0 or 3. One byte scan of the feature
generator for stores to the descriptor's `+0x18`/`+0x1c` finds it at `0x50ee4f`,
immediately after the `type = 5` store:

```
0x50ee4f  desc.type = 5
          h = climate[+0x10] ; t = climate[+0xc]
          if h <= 0.8:                subtype = 0        0x50ee62
          elif t >  0.8:              subtype = 3        0x50ee6e
          elif t <  0.2:              subtype = 2        0x50ee88
          else:                       subtype = 0        0x50ee95
```

No draw. The climate record is the **REGION SITE's**, not the cell's — which the data
says before the disassembly is even read: over the 42 captured ruins the subtype is
**constant within each of the 19 regions, 0 disagreements**, several regions holding
three or four ruins. `+0x10` is humidity and `+0xc` temperature, the same pair the
dungeon-type override at `0x50ed30` uses.

**19 / 19 regions**, against a null ("always 0") of 12/19. The third arm is exercised:
region (510,512) is humid (0.892) but temperate (0.469) and really is a **0**, and
region (512,513) is temp 0.99999 but dry (0.042) and is also a 0 — so neither term alone
explains the split. **Subtype 2 has never been observed**: it needs a humid *and* cold
region and no sampled region is one.

The village's `desc+0x1c` is the region's **field 5** — the `rand() & 3` setup draw at
S2, overridden to `(rand() & 1) + 4` when `site.humid > 0.81` at S4 — which the Python
port already had and the C++ did not. 50/50 villages.

---

## 2. The pass itself — `0x4e3095`-`0x4e39e9`

```
A = [i for i in 0..plotCount-1 if plot[i].verdict == 2]      0x4e3119
B = [i for i in 0..plotCount-1 if plot[i].verdict == 7]      0x4e3147   (never read again)
if A is empty: the whole pass is SKIPPED                     0x4e31aa
n0 = len(A)
A.sort(key = lambda i: plot[i].score)                        0x4e31c7   ascending, stable
tag = site[0x79] ; ty = desc[0x18] ; sub = desc[0x1c]

if ty == 1:                                        # VILLAGE
    tag == 1 and n0 > 1  :  A.pop()          -> role 9                       0x4e31e1
    tag == 3             :  4x A.pop(rand%n) -> roles 0xa, 0xb, 0xc, 0xd     0x4e3211
    tag == 2             :  3x A.pop(rand%n) -> roles 0xe, 0x10, 0xf         0x4e33a1
    tag == 3, len(A) > 1 :  A.pop()          -> role 3                       0x4e34d1
    tag in (0,3), len>1  :  A.pop()          -> plot[+0x10] = 1              0x4e3517
    tag == 1             :  4x A.pop()       -> plot[+0x10] = 2,3,4,5        0x4e3556
    tag == 0             :  A.pop(rand%n)    -> role 5   (NO empty guard)    0x4e35ae
    6x: if len(A) > 3    :  A.pop(rand%n)    -> role 0                       0x4e360b
elif ty == 5:                                      # RUIN
    site.zone == cellCentreZone and n0 > 1 : A.pop() -> role 0x14            0x4e36d8
    2x: if len(A) > 3    :  A.pop(rand%n)    -> role 0                       0x4e3732
    sub == 0 : 2x if len(A) > 3 : A.pop(rand%n) -> role 0x12, rot = rand()&3 0x4e3921
    sub == 2 : if rand()&1 and len(A) > 3 : pop -> role 0x11, rot = rand()&3 0x4e37e8
               if rand()&1 and len(A) > 3 : pop -> role 0x13, rot = rand()&3 0x4e3883
    (sub == 3, and anything else, spends nothing past the cull)              0x4e37e2
```

`A.pop(k)` is `idx = rand() % len(A)` then the `memmove` that erases entry `idx`
(`call [0x5582d4]`), so it is an order-preserving `vector::erase`. Because every
assignment is a pop, **a given special role lands on at most one plot per town**.

Three notes the disassembly settles:

* **`plot[+0x10]` is decoded.** `RE_town_verdict.md` §2 listed the record's `+0x10` as
  "—". It is written only here: `1` for tag 0/3, and `2, 3, 4, 5` for the four plots
  tag 1 pops. Live: 13 plots carry 1 and six each carry 2/3/4/5.
* **The promotion overwrites `plot[+0x14]`.** The ruin's 0x11/0x12/0x13 pops re-roll the
  rotation the scan's nudge pass produced (13 of 14 observed pops change it). The port
  keeps the two apart — `rot` after the nudge, `rotFinal` after promotion — because
  folding them together silently cost `rederive_townverdict` 8 towns before it was caught.
* **The `n0` guards read the PRE-SORT count.** `[ebp-0x5c80]` is stamped at `0x4e31c1`
  and the tag-1 and ruin guards both test it, not the live length. Nothing has popped by
  then, so it makes no difference — but it is what the binary does.

### ★ Tag 4 hands out NOTHING — and that closes an open problem

`RE_town_props.md` open problem 2 was "`site+0x79` = 4, whose special-role set no town in
the sample revealed". Read the branch list: **4 matches none of them.** A tag-4 town runs
only the six-iteration cull. The live draw census agrees without being asked — all four
tag-4 towns spend exactly **6** promotion draws, every one at `0x4e3646`, and their
`plotsLate` roles are `{0, 2, 6, 7}` only. A closed door rather than an unobserved set
(lesson 6).

---

## 3. What is gated

### 3.1 `tools/gate_town_promotion.py` — 2,071 checks

| claim | result |
|---|---|
| `site+0x79` == the site-kind grid's corner tag, **from the seed** | **92 / 92** |
| `desc+0x18` == the governing cell's type, from the seed | 92 / 92 |
| `desc+0x1c` == the village field-5 / ruin climate rule, from the seed | **92 / 92** |
| every promotion `rand()` return address is one the branch structure predicts | 12 sites, 280 draws |
| the replay consumes exactly the promotion draws the capture holds, in order | 70 / 70 towns |
| every plot's post-promotion `+0xc`, `+0x10` and `+0x14` | **1,435 / 1,435** |

**What the replay is fed** (lesson 12): the plot table as `plotsAtSort` recorded it and
the town's own recorded draws. Deriving the table needs the scan's three terrain
booleans, which are region-cache-blocked. So this gate proves the promotion **rule**; the
three seed-derived inputs above it are the ab-initio half, and they need no capture
replay at all.

### 3.2 `rederive_townpromo` (cwgen, section 61) — 140/140

The pass criterion is only the two inputs that are pure functions of the seed, and
neither needs the plan to replay, so both are asserted for **every** town in the golden —
including the 36 cwgen declines as `Landform`/`Feature`:

| asserted | of |
|---|---|
| `site+0x79` = `zoneSiteTag(zone)` | **70 / 70** |
| `desc+0x1c` = the cell's subtype | **70 / 70** |

Measured every run and never asserted, because they inherit the scan's terrain block:

| measured | of |
|---|---|
| the whole promotion exact — every role, `+0x10` and `+0x14` | **29 / 34 towns** |
| the promotion draw count | 33 / 34 towns |
| per plot: role 511, `+0x10` 607, `+0x14` 521 | 607 plots |

29 of 34 is the same figure the scan phase reaches, which is the point: **the promotion
adds no new error.** Where the scan is exact the promotion is exact.

---

## 4. Deliberately not claimed

1. **The ruin's zone guard is UNFALSIFIED.** `0x4e36d8`/`0x4e3701` compares
   `site[+0x60]/[+0x64]` — the SITE record's zone, not the zone being built — against the
   descriptor cell's centre zone. All 35 replayable ruins satisfy it, so no capture can
   distinguish it from a constant `true`, and the four ruins that get no role `0x14` are
   all explained by `n0 == 1` instead. The port computes it from the zone being built,
   which agrees with every sample; if a ruin's builder ever runs in a *neighbouring* zone
   the two forms diverge and nothing here would notice.
2. **Ruin subtype 2 has never occurred**, so the `0x4e37e8` coin path — the only place
   roles `0x11` and `0x13` come from — has never run in any capture. It is ported from
   the disassembly alone.
3. **Roles `0x11` and `0x13` are consequently unobserved**, as is the tag-3 role set
   beyond the four towns that carry it.
4. **The top-four corner ranking assumes no tie.** A tie at the top-4 boundary would make
   the rank ill-defined (the binary's sort and the port's partial selection need not break
   ties the same way). Measured rather than assumed: over the 25 type-1 cells of the
   sampled regions there is **no tie anywhere in or at the boundary of the top four**, and
   the smallest 4th-best score is 0.287.
5. **`FUN_004e19f0`'s introsort body is not exercised.** Every town has `plotCount` 16 or
   25, so `count <= 0x20` always and the port implements only `_Insertion_sort`. A town
   with more than 32 buildable plots cannot exist on this lattice, but the port would be
   wrong on a stable-vs-unstable tie if one did.

## 5. What this does NOT open

Emitter C is still behind the **173 rand sites downstream of the scan**
(`RE_town_verdict.md` §7.3). The promotion is the second of them and it is now closed;
the next is `0x4eda58` (2,968 draws, 69 towns), then the two per-column loops
`0x4e54e8` / `0x4ef7c8` that carry 36% of everything this layer spends. The plot heights
stay region-cache-blocked.
