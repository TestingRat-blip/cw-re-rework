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

### The one input that isn't the grid

`World_getBlockAt(x, y, baseZ+(K+1)*10)` reads the *terrain column*, not the grid, so the gate
replays its result from the capture rather than deriving it. It is not vacuous — it rejects
1, 2 and 3 cells in three of the six dungeons — and the model calling it at exactly the
capture's cell sequence (1,350/1,350) is what proves the rest of the qualification is right.
Deriving it needs the column state at assembly time; that is the one open thread here.

---

## Gate results

`python tools/gate_50702a_mobs.py --all`

| zone | style | rot / mirror | mob-pass cells | solid rejects | spawns |
|---|---|---|---|---|---|
| (32795, 32796) | 3 | 3 / 1 | 217/217 | 0 | **137/137** |
| (32780, 32788) | 1 | 0 / 0 | 187/187 | 1 | **163/163** |
| (32787, 32796) | 2 | 0 / 0 | 204/204 | 2 | **210/210** |
| (32796, 32787) | 0 | 1 / 1 | 244/244 | 0 | **197/197** |
| (32804, 32788) | 3 | 1 / 1 | 217/217 | 0 | **152/152** |
| (32804, 32811) | 2 | 1 / 0 | 281/281 | 3 | **263/263** |
| **total** | | | **1,350/1,350** | 6 | **1,122/1,122** |

Every spawn matches on position, orientation **and** originating call site, in call order.
Coverage gaps, stated plainly: rotation 2 and dungeon styles 4/5 (jungle temple, pyramid) had
no scanned instance, and every dungeon seen was 22³.

## Rig

`tools/frida_dungeon_grid.py` — same dungeon recipe as `frida_dungeon_spawn.py` (sandbox
seed 42069, stub the region-cache scheduler at `0xd78e0` + `0x149550`, force-build via the
zone builder), plus three probes:

- `0x104784` — one-shot at the loop head: dumps the grid header + all 10,648 cells, the
  origin (`baseX/baseY/baseZ`), the style and `src`.
- `0x107401` — every cell entering the mob pass, with `I/J/K`, both cell bytes and `src`.
- `0x107499` — the terrain-probe result, in call order.

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
   perimeter-placement effect comes from `FUN_004f84a0` returning kind `1` off the grid.
