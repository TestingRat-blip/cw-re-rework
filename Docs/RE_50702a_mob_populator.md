# The dungeon mob pass (`0x507401`–`0x50775a`) — SOLVED, bit-exact

The pass that fills a finished dungeon with creatures, calling `creature_spawn_builder`
(`0x524540`) once per placed mob. **Gated bit-exact on 6 dungeons across 4 dungeon styles,
3 grid rotations and both mirror states: 1,350/1,350 qualifying cells and 1,122/1,122 spawns
reproduced ab-initio — position, orientation and call site, in call order.**

```
python tools/frida_dungeon_grid.py [zx zz]     # capture   -> raw/dungeon_grid_capture*.json
python tools/gate_50702a_mobs.py --all         # gate
```

---

## First: `FUN_0050702a` is not a function

The previous write-up had it as "a case-body of the big dungeon dispatcher, jumped to via an
unresolved jumptable". **That is wrong, and so is the premise it rests on.** The bytes at
`0x50702a` are

```
00507028  eb 06                    jmp  0x507030
0050702a  8d 9b 00 00 00 00        lea  ebx,[ebx+0]     <-- "FUN_0050702a" starts here
00507030  6a 01                    push 1
```

`8d 9b 00 00 00 00` is the 6-byte NOP MSVC 11 emits to 16-align a loop head, and the `jmp`
right before it hops exactly over it. `raw/Server.exe.indirefs.jsonl` confirms `0x50702a` has
**zero incoming references of any kind** — no call, no code pointer, no data pointer. A
jumptable case-body would show up as a `code_ptr`/`data_ptr`; this has neither.

So Ghidra started a function on padding in the middle of a body and handed it the remaining
8,946 bytes. The real owner is **`FUN_00500300`, the dungeon assembler** (sole caller
`0x51b26a`), whose body runs `0x500300`–`0x50931c` and is split by Ghidra into eight
"functions", **every one of which starts on the same alignment NOP**:

| split start | bytes Ghidra gave it |
|---|---|
| `0x501e0a` `0x502a7a` `0x502dca` `0x50529a` `0x5053ca` `0x5054fa` `0x50702a` `0x50998a` | 2,715 / 840 / 9,401 / 304 / 304 / 6,960 / 8,946 / 1,013 |

That also explains the `unaff_EBP` / `unaff_EBX` in the decompile: `EBP` is the assembler's
frame and `EBX` holds `rand` (`mov ebx,[0x5582f4]`), both established thousands of bytes
earlier.

**This generalises — see `tools/nop_split_audit.py`.** 90 of Server.exe's 129 zero-reference
functions start on an alignment NOP (82 of them with the `jmp`-over signature), all traced to
an owning function. Those 90 are body splits, not the "true artifacts" Phase 0 counted them
as. Cube.exe has **0** — its 147 zero-reference functions all start on real prologues
(105 are `55 8b ec`), so they are genuinely unreferenced code, a different thing entirely.

Two other identities fall out of the same audit and are worth stating explicitly, because both
have been repeated in our own docs:

- **`0x4e310a`, `0x4eaa7a` and `0x4ee3aa` are not "the big dungeon dispatchers"** — they are
  alignment-NOP splits of **`FUN_004e28e0`, the town builder**, carrying 28,175 / 14,586 /
  17,215 bytes of its body. `RE_524540_creature_spawn.md` lists them among `524540`'s callers;
  the caller is really the town builder, once.
- The standing note that these huge zero-caller blobs are "`/EHsc` landing pads and `/GS`
  epilogues — not real routines" is **wrong in a way that matters**: the bodies are real game
  code, they just belong to a bigger function. Discarding them would discard the town builder.

---

## The cell grid

The assembler holds a dungeon cell grid at `[ebp-0x2bcc]`, read through `FUN_004f84a0`:

| field | meaning |
|---|---|
| `+0x04` | rotation (`& 3`) |
| `+0x08` | mirror flag (byte) |
| `+0x0c` `+0x10` `+0x14` | raw dims — **22 × 22 × 22** in every dungeon captured |
| `+0x18` | data, **2 bytes per cell**: `(kind, flags)` |

`FUN_004f84a0(i, j, k)` first maps the view coords through `FUN_0052dde0` (the rot/mirror
transform), then indexes `((dimY*k + j)*dimX + i) * 2`. **Any out-of-range index returns
`&DAT_005842c8`, whose kind byte is `1`** — that fallback is what makes the grid boundary read
as a wall, and reproducing it is required for the gate to pass.
`FUN_0052d820`/`_840` swap the reported X/Y dims when the rotation is odd.

Observed cell kinds (all six dungeons agree):

| kind | count/dungeon | meaning |
|---|---|---|
| 0 | ~10,200–10,330 | solid rock / unused |
| 2 | 117–214 | connector cells — **not** eligible for the mob pass |
| 3 | 187–281 | room cells — the only kind that gets mobs |
| 4 | **exactly 1** | the entrance; emits a type-5 marker entity at `+5,+5` (`0x504832`) |

Flag byte: bit 0 skips the box-fill and jumps straight to the mob pass (`0x5058dd`); bit 2 is
set on exactly one cell per dungeon and gates a separate block at `0x5078b3`.

---

## The mob pass

The assembler's triple loop is `I` → `J` → `K` (x, then y, then z), bounds from the *rotated*
dims, entered at `0x504784`:

```c
for (I = 0; I < grid.dimX(); I++)
  for (J = 0; J < grid.dimY(); J++)
    for (K = 0; K < grid.dimZ(); K++) {
      cell = grid(I,J,K);                       // 0x504813, cached at [ebp-0x2b60]
      if (cell.kind != 3 && cell.kind != 4) continue;          // 0x504820
      ... box fill / decoration / loot ...
      if (cell.kind == 4) goto flag_pass;                      // 0x5058d0
      // ---------------- the mob pass -------------------------------------------
      if (grid(I,J,K+1).kind == 3)          goto flag_pass;    // 0x50742f
      if (src == 0)                         goto chandelier;   // 0x50743f
      x = baseX + I*10;  y = baseY + J*10;
      if (!World_getBlockAt(x, y, baseZ + (K+1)*10).solid)
                                            goto chandelier;   // 0x5074a1
      if (grid(I-1, J, K).kind != 3) spawn(x,y,z, orient=0);   // 0x507552
      if (grid(I+1, J, K).kind != 3) spawn(x,y,z, orient=2);   // 0x5075fd
      if (grid(I, J-1, K).kind != 3) spawn(x,y,z, orient=3);   // 0x5076a8
      if (grid(I, J+1, K).kind != 3) spawn(x,y,z, orient=1);   // 0x507753
      // z = baseZ + K*10
    }
```

### What the 4 call sites distinguish — the four horizontal neighbours

They are not four passes or four creature categories. They are the **west / east / south /
north** neighbour probes of a single cell, in that source order, and the `orient` each passes
is a constant:

| call site | probe | `orient` | facing = `(2-orient)·90°` |
|---|---|---|---|
| `0x107552` | `grid(I-1, J, K)` | 0 | 180° |
| `0x1075fd` | `grid(I+1, J, K)` | 2 | 0° |
| `0x1076a8` | `grid(I, J-1, K)` | 3 | 270° |
| `0x107753` | `grid(I, J+1, K)` | 1 | 90° |

So **a mob is placed against every wall face of every qualifying room cell, facing that
wall.** A cell in the middle of a room gets none; an edge cell gets one; a corner gets two; a
1-cell-wide corridor cell gets two opposite ones; a dead end gets three. The capture bears
this out exactly — a room's whole perimeter fires and its interior does not — and the
`ra → orient` mapping is a perfect bijection over all 1,122 spawns.

### The other call arguments

All four sites pass the same constants:

```c
FUN_00524540(world, src, &vec3(x,y,z), orient, /*p4*/ 0x46, /*type*/ 0, /*p6*/ site,
             /*p7*/ 0, /*outList*/ &zero16, /*p9*/ 0);
```

`0x46` (70) is pushed as `param_4`, and `param_5` (the `type` the 16-way switch keys on) is
**0** — matching every captured spawn. `outList` is a distinct 16-byte local per direction
(`-0x374 / -0x38c / -0x3b8 / -0x3d0`), zeroed via `FUN_004010b0` + `FUN_004e1200` (a
float4→int4 truncation of `{0,0,0,0}`), so it carries no per-cell state.

### The 5 `rand()` draws — there are none

The old note's "5 direct `rand()` calls" was a property of the mis-scoped Ghidra function, not
of this pass. `EBX` holds `rand`, and between `0x507401` and `0x50775a` there is **no `call
ebx` at all**; the nearest are `0x507325` (before) and `0x507760` (after — the `style == 3 &&
rand() % 10 == 0` chandelier gate). Confirmed live: **all 1,122 captured spawns have
`rand_draws == 0`.**

Combined with `524540` itself consuming zero `rand()` for type 0, **the dungeon mob layer is
fully deterministic**: it is a pure function of the cell grid, the dungeon origin, and the
terrain probe. There is no RNG stream to align, which is why this gated on the first try.

### The terrain probe at `0x5074a1` — derived

This is the one input that is not the cell grid. It is now **derived, not replayed**: the gate
evaluates it itself and matches the live verdict **757/757**, including all 6 rejects.

**It reduces to a single material test.** `FUN_00405fd0` has three "no block" returns —
`DAT_00583d14` (no column, or `z` below it), `DAT_00583d0c` and `DAT_00583d10` (`z` at or above
the column top). All three are **zero in the image, and nothing in `.text` ever writes them**:
disassembling the whole `.text` finds exactly five references to those addresses and all five
are the `mov eax, 0x583dxx` loads inside `FUN_00405fd0` itself. So every out-of-column case
reads material 0 and fails `FUN_004061f0`. The gate is therefore

```c
solid(x,y,z)  ==  block exists at (x,y,z)  &&  (block[3] & 0x1f) not in {0, 2}
```

**It reads the finished dungeon, not the terrain.** Live, every probe lands *inside* the
column (0 of 757 hit a sentinel), and the byte it reads is one of only three values:

| block[3] | material | count | what it is |
|---|---|---|---|
| `0x46` | 6 | 748 | dungeon stone — the room's ceiling |
| `0x4d` | 13 | 3 | a second dungeon material |
| `0xc0` | **0** | **6** | **carved air — the only rejects** |

So the pass is asking *"does this room have a ceiling?"*, and the answer comes from the
dungeon's own stamped voxels.

**The stamp is already final when the pass runs** — which is what makes deriving it sound.
Re-reading every probed coordinate at `asmLeave`, after the assembler has done all its
remaining work, returns exactly what the probe saw: **170/170 unchanged** on zone
(32804, 32811). The probe is not observing a half-built world.

**How the gate derives it.** `frida_dungeon_grid.py` samples the finished world on the
dungeon's own 10-unit lattice — the material byte at `(baseX+I*10, baseY+J*10, baseZ+L*10)`
for every `I,J` and every `L` in `0..dimZ`, whether or not that cell qualifies — and the model
applies the `FUN_00405fd0` + `FUN_004061f0` reduction above to it. Nothing about which cells
get probed is fed in. That replaces the replayed boolean with a real check of the reduction.

**What it is *not* derivable from: the cell grid.** Worth stating because it is the obvious
guess. Every probed ceiling cell is kind 2 whether the probe passes or fails (449 solid / 5 air
in one split), so the grid carries no bit that decides it. The closest the grid gets is a
*necessary* condition: all 6 rejects have a room (kind 3) cell directly **west or south** at
level `K+1` — never east or north — but 92 cells with that same property are solid. The
direction asymmetry is consistent with the room carve `FUN_004d2500(x, y, z, vec3(10,10,10))`
covering its `+10` face inclusively, so a west/south room's carve reaches exactly the probe
point while an east/north room's does not; the 92 are then cells the box pass stamped back
solid and the 6 are openings it left. That last step is inferred from the arithmetic, not
separately proven.

**Where this leaves the port.** The mob layer now depends only on the finished dungeon voxel
stamp, which `cw_rederive` already produces bit-exact (box list + writes). There is no
remaining dependency on captured booleans and none on assembly *order*.

---

## The boss spawn — the `cell.flags & 4` block at `0x5078b3`

The last statement of the same per-cell body, and the other half of what that flag byte is
for. **Exactly one cell per dungeon** carries bit 2 — always a kind-3 room cell — and it builds
a single `cube::Spawn` of **0x10f0 bytes**, an order of magnitude larger than the ordinary mob
spawns, with its own equipment roll and a `CombatBehavior`. Gated on the same 6 dungeons:

```
python tools/frida_dungeon_boss.py [zx zz]     # capture -> raw/dungeon_boss_capture*.json
python tools/gate_5078b3_boss.py --all         # gate
```

```c
if (cell.flags & 4) {                                    // 0x5078b3
    boss = new cube::Spawn();                            // 0x10f0, ctor cube::Spawn::Spawn
    boss[0x10] = ftol((float)((float)(baseX + I*10) + 4.5f) * 65536.0f);   // 0x402a10
    boss[0x18] = ftol((float)((float)(baseY + J*10) + 4.5f) * 65536.0f);
    boss[0x20] = (int64)(baseZ + K*10 + 1) << 16;                          // 0x4cde40
    boss[0x28] = 1;
    boss[0x34] = max(1, level);                          // level from [ebp-0x2bac]
    boss[0x58] = (byte)[ebp-0x2bd4];
    boss[0x2c] = species[ rand() % species.size() ];     // draw A  <- the species pick
    rank = FUN_0052bf40(boss[0x58], /*forced*/ 1);       // 4 rands, then forced to byte+1
    addItem(boss.equip, FUN_0052b470(level, rank));      // the item generator
    boss[0x7a] |= 0x1000; ... |= 0x200;
    boss[0x109c] = new cube::CombatBehavior(20.0f);
    emit(site+0x48, record{kind 6, boss.pos, boss[0x2c], site->spawns.size()});
    n = rand() % 4;                                      // draw B  <- extra items
    for (i = 0; i < n; i++) addItem(boss.equip, <fixed item 0x0101, quality = level>);
    boss[0x08] = 150.0f;  boss[0x10e8] = 1;
    site->spawns.push_back(boss);                        // 0x4f2be0
}
```

### The position hides a float32 rounding that changes the answer

`FUN_00402a10` decompiles as a bare `ftol` wrapper — **the decompiler drops a `mulss`.** The
disassembly is `movss / mulss xmm0, [0x55878c] / fld / call ftol_trunc`, and `DAT_0055878c` is
`65536.0`, so it is a float→16.16 converter, not a truncation. (`FUN_004cde40`, used for z, is
an exact integer `<< 16`.)

That matters because of what the `+ 4.5f` does at world scale. Dungeon coordinates are ~8.4e6,
past float32's 2^23 integer-exact range, so `(float)(baseX + I*10) + 4.5f` cannot hold the
half — it rounds to an even integer and **the `.5` disappears**. Computing the same expression
in double puts the boss **32768 fixed-point units — half a block — off, in all 6 dungeons**.
The gate reproduces the float32 rounding and matches the captured `int64` exactly, 6/6.

This is the same shape as the forest-pass lesson: *the decompiler hides SSE conversion
scaling; check the disassembly before trusting an arithmetic tail.*

### The two `rand()` draws

The block consumes 134 or 142 draws, but only two are its own — the rest are inside the item
generator `FUN_0052b470` and the rank roll `FUN_0052bf40`.

| draw | expression | outcome | verified |
|---|---|---|---|
| A, first of the block | `rand() % species.size()` | `boss[0x2c]`, the species | 6/6 |
| B, last of the block | `rand() % 4` | how many extra items | 6/6 |

Draw B is the *last* rand the block consumes, which pins it: `addItem` (`FUN_00427000`) draws
none. The `n` extra items are identical, so they **stack into one slot** — the equipment vector
ends up with `1 + (n > 0 ? 1 : 0)` entries, not `1 + n`. That is what the gate checks, and it
separates `n = 0` from `n > 0` correctly in all 6 (`n` was 0, 1, 0, 3, 0, 2).

`FUN_0052bf40(byte, 1)` is a rarity roll — `rand() % (byte+1)` plus 1-in-100 / 1-in-1000 /
1-in-10000 bumps, capped at 4 — but its second argument is the constant `1`, which **discards
all of that and returns `byte + 1`**. It still burns its 4 draws. Worth knowing before porting:
the draws are load-bearing for the stream, the result is not.

### Gate results — 6 dungeons, 6 bosses

| zone | style | flag cell (I,J,K) | level | species | draw A → picked | n | equip slots |
|---|---|---|---|---|---|---|---|
| (32795, 32796) | 3 | (17, 17, 11) | 3 | `[2, 3]` | 30506 → 2 | 0 | 1 |
| (32780, 32788) | 1 | (18, 18, 9) | 23 | `[15, 16]` | 9714 → 15 | 1 | 2 |
| (32787, 32796) | 2 | (10, 11, 2) | 6 | `[15, 16]` | 8316 → 15 | 0 | 1 |
| (32796, 32787) | 0 | (3, 3, 10) | 30 | `[11, 12]` | 32696 → 11 | 3 | 2 |
| (32804, 32788) | 3 | (2, 2, 12) | 52 | `[2, 3]` | 15892 → 2 | 0 | 1 |
| (32804, 32811) | 2 | (12, 11, 3) | 1 | `[15, 16]` | 20917 → 16 | 2 | 2 |

All derived: the flag cell is found in the cell grid, the position from the origin, every
deterministic field, and both rand-driven outcomes. **6/6 on every check.**

Three inputs are *taken from the capture*, not derived — they are computed earlier in the
assembler and belong to other threads: the dungeon `level` (`[ebp-0x2bac]`), the
`[ebp-0x2bd4]` byte that seeds the rarity roll, and the 2-entry species vector. The species
list is always 2 consecutive ids (`[2,3]`, `[11,12]`, `[15,16]`) — the dungeon's monster pair.

### One field the flag cell does *not* change

The flag-4 cell is a normal room cell for every other purpose: it goes through the mob pass
first (it is kind 3), gets its wall mobs, and only then builds the boss. The 218 cells reaching
`0x5078b3` in zone (32795, 32796) are the 217 mob-pass cells **plus the single kind-4
entrance**, which arrives via the `0x5058d0` shortcut — a useful cross-check that the two
control-flow paths into this block are the ones the mob-pass model says they are.

---

## Gate results

`python tools/gate_50702a_mobs.py --all`

| zone | style | rot / mirror | mob-pass cells | terrain probe (derived) | rejects | spawns |
|---|---|---|---|---|---|---|
| (32795, 32796) | 3 | 3 / 1 | 217/217 | 101/101 | 0 | **137/137** |
| (32780, 32788) | 1 | 0 / 0 | 187/187 | 107/107 | 1 | **163/163** |
| (32787, 32796) | 2 | 0 / 0 | 204/204 | 120/120 | 2 | **210/210** |
| (32796, 32787) | 0 | 1 / 1 | 244/244 | 143/143 | 0 | **197/197** |
| (32804, 32788) | 3 | 1 / 1 | 217/217 | 116/116 | 0 | **152/152** |
| (32804, 32811) | 2 | 1 / 0 | 281/281 | 170/170 | 3 | **263/263** |
| **total** | | | **1,350/1,350** | **757/757** | 6 | **1,122/1,122** |

Every spawn matches on position, orientation **and** originating call site, in call order, and
every terrain-probe verdict is computed rather than replayed.
Coverage gaps, stated plainly: rotation 2 and dungeon styles 4/5 (jungle temple, pyramid) had
no scanned instance, and every dungeon seen was 22³.

## Rigs

`tools/frida_dungeon_boss.py` captures the boss block; `tools/frida_dungeon_grid.py` the mob
pass — same dungeon recipe as `frida_dungeon_spawn.py` (sandbox
seed 42069, stub the region-cache scheduler at `0xd78e0` + `0x149550`, force-build via the
zone builder), plus three probes:

- `0x104784` — one-shot at the loop head: dumps the grid header + all 10,648 cells, the
  origin (`baseX/baseY/baseZ`), the style and `src`.
- `0x107492` / `0x107499` — the terrain probe's raw block read and the gate's verdict, in
  call order (the verdict is the cross-check the derived value is compared against).
- `0x107401` — every cell entering the mob pass, with `I/J/K`, both cell bytes and `src`.
- at `asmLeave` — a re-read of every probed coordinate (the "geometry is final" proof) and the
  lattice sample of the finished world that the derivation runs on.

## Lessons this one paid out

1. **A "function" with zero incoming references may not be a function.** Check the entry
   bytes before believing the boundary — an alignment NOP mid-body produced 90 phantom
   functions in Server.exe alone, one of which had been given a name and a write-up.
2. **The decompiler's `unaff_*` registers are the tell.** `unaff_EBP` means the frame belongs
   to somebody else; that is a boundary error, not an exotic calling convention.
3. **Read the disassembly for loop induction variables.** Ghidra's stack tracking failed
   here (`WARNING (jumptable): Unable to track spacebase fully for stack`) and the decompiled
   C aliased `K` and `K+1` onto the same name, which made the qualification test unreadable.
   Twelve lines of `objdump`-equivalent settled it.
4. **Reproduce the out-of-bounds behaviour, not just the in-bounds math.** The whole
   perimeter-placement effect comes from `FUN_004f84a0` returning kind `1` off the grid — and
   symmetrically, the terrain probe's three "no block" returns are all permanently zero, so
   every out-of-column case is a *reject*. Both fallbacks are load-bearing.
5. **This body resists instrumentation in three specific ways** (all cost a run to find):
   patching mid-instruction at the two `call ebx` sites to read the draw values faults the
   generator; Frida cannot place a trampoline on `FUN_00427000` at all ("unable to intercept
   function"); and hooking `FUN_0052b470` / `FUN_005284a0` kills the process. Hooking the
   *call site* `0x507b30` also faults — hook `FUN_004f2be0`'s own entry instead. Snapshot
   points on `ebp`-relative addresses are safe. Confirm a run is clean by checking the total
   `rand()` count against an uninstrumented capture — it matched to the draw here.
6. **Check whether a value is stable before deciding it is underivable.** The terrain probe
   looked like it needed the world's state mid-assembly. Re-reading the same coordinates after
   the assembler finished showed 170/170 identical — so it only ever needed the *finished*
   world, which is already bit-exact.
