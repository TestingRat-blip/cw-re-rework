# The dungeon's creature-species containers — SOLVED, gated, and ported

Where every creature the dungeon assembler spawns gets its *identity*. Two containers, both
built in the assembler's **prologue** by one jump table, and exactly three consumers.

```
python tools/frida_dungeon_patrol.py [zx zz]   # capture -> raw/dungeon_patrol_capture*.json
python tools/gate_dungeon_species.py           # 6 dungeons, 32 patrol + 51 companion species
```

---

## The two containers

`FUN_00500300`'s prologue (`0x500370`–`0x500727`) builds both from a **five-entry jump table on
`style - 1`** at `0x5003d3`:

```
005003b8  lea eax, [edx - 1]           ; edx = style
005003ca  cmp eax, 4
005003cd  ja  0x50065b                 ; the DEFAULT arm
005003d3  jmp dword ptr [eax*4 + 0x509d80]
```

| local | type | consumers |
|---|---|---|
| `[ebp-0x2be8]` | `vector<int>` | the **boss** pick, the **guard fans**, the **centre arc** |
| `[ebp-0x2bf4]` | `vector<Group>` | the **patrol NPC** (`list0`) and its **companions** (`list1`) |

A `Group` is 0x18 bytes: two `vector<int>` at `+0x00` and `+0x0c`.

Reading the table off the binary — note the arms, not the styles, are what matters:

| style | arm | flat vector | groups |
|---|---|---|---|
| 1 | `0x500538` | `{15, 16}` | `{{15,16},{0x60}}` **and** `{{L2},{}}` |
| 2 | `0x500538` | `{15, 16}` | `{{15,16},{0x60}}` **and** `{{L2},{}}` |
| 3 | `0x5004ae` | `{2, 3}` | `{{2,3},{0x13}}` |
| 4 | `0x50065b` (default) | `{11, 12}` | `{{0x2e},{0x13}}` |
| 5 | `0x5003da` | `{78, 77}` | `{{0x11,0x51},{0x3e,0x1e}}` |
| 0 | default — `0 - 1` fails the `ja` | `{11, 12}` | `{{0x2e},{0x13}}` |

Three things a reader would get wrong from a decompile:

- **styles 1 and 2 share an arm**, so it is a four-way table, not six;
- **style 5's flat pair is stored descending** (`0x4e` then `0x4d`);
- **styles 1 and 2 are the only ones with two groups**, and the second group's single id `L2` is
  a **prologue `rand() % 3`** (`0x5005f0`): `0 → 0x61`, `1 → 0x5e`, `2 → 0x11`. All three
  outcomes appear across the three captured style-1/2 dungeons.

That `%3` is a real draw in the assembler's stream, and it happens **before the cell grid is
generated** — any port has to spend it in the right place.

---

## The three consumers

The whole 36 KB assembler contains exactly **three** `FUN_00402bb0` (`vector<int>::operator[]`)
call sites. That census is what proves the containers feed nothing else:

```c
0x5079cd  BOSS       spawn[0x2c] = flat[ rand() % flat.size() ];
0x508c4a  PATROL     g = groups[ rand() % groups.size() ];          // 0x508ac9
                     if (g.list0.empty()) skip the whole block;      // 0x508ae3
                     spawn[0x2c] = g.list0[ rand() % g.list0.size() ];
0x509292  COMPANION  if (g.list1.empty()) skip -- INCLUDING the count draw;   // 0x5091ee
                     n = rand() % 3 + 1;
                     n x  spawn[0x2c] = g.list1[ rand() % g.list1.size() ];
```

**The empty-`list1` guard at `0x5091ee` is the one that bites a port.** A style-1/2 patrol that
draws the *second* group emits no companions **and consumes one draw fewer**. Nothing downstream
notices in the server (the patrol runs last), but a re-implementation that always takes the draw
diverges from that point on.

The guard fans and the centre arc index `flat` the same way the boss does, one draw each.

### The mob pass reads neither

There is no fourth `operator[]`. The dungeon mob pass's spawns take `FUN_00524540`'s own
`param_5` model byte, which is not style-dependent — so "mob species" is a property of the spawn
builder, not of these containers.

⚠ **This corrects `RE_dungeon_markers.md`**, which guessed that `0x50754d` hands `FUN_00524540`
a species list at `[ebp-0x374]`. It does not: `FUN_004010b0` (`0x5074f7`) is a twelve-instruction
**vec4 float store** and `FUN_004e1200` (`0x507503`) its `cvttss2si` companion, so `[ebp-0x374]`
is an all-zero int4. The lead looked right and was wrong; reading the two twelve-instruction
callees settled it in a minute.

---

## Gate

`tools/gate_dungeon_species.py` derives both containers from the style alone and checks every
species the run actually stored:

| zone | style | flat | groups | patrol | companion |
|---|---|---|---|---|---|
| (32795, 32796) | 3 | `{2,3}` | `{{2,3},{0x13}}` | 5 | 8 |
| (32780, 32788) | 1 | `{15,16}` | + `{{0x5e},{}}` | 3 | 3 |
| (32787, 32796) | 2 | `{15,16}` | + `{{0x11},{}}` | 5 | 6 |
| (32796, 32787) | 0 | `{11,12}` | `{{0x2e},{0x13}}` | 8 | 16 |
| (32804, 32788) | 3 | `{2,3}` | `{{2,3},{0x13}}` | 5 | 10 |
| (32804, 32811) | 2 | `{15,16}` | + `{{0x61},{}}` | 6 | 8 |

**6/6 containers; 32 patrol + 51 companion species, every one indexed out of its own group**, and
the companion count is zero exactly when the owning group's `list1` is empty — the empty-list1
skip observed rather than assumed.

---

## Ported

RatForge's `dungeonPatrolPass` had the **style-3** ids hardcoded (`(rand()%2) ? 3 : 2`,
companion `0x13`) with a note to parameterise later, and always took the companion-count draw.
Now in `CwDungeonDecor.h`:

- `SpeciesGroup` / `DungeonSpecies` and `cwDungeonSpecies(rng, style)`, which reproduces the
  jump table **and spends the style-1/2 `%3` draw**;
- `buildDungeon` calls it immediately after `srand`, **before `genDungeonGrid`**, matching where
  the prologue sits;
- the patrol, companion, guard, arc and boss picks all index the real containers, and the
  companion block now honours the empty-`list1` skip.

For style 3 `cwDungeonSpecies` draws nothing and yields exactly the previously hardcoded ids, so
`rederive_dundecor` stays **52/52** and the output hash stays **`AB6C2A00E6BF77A4`**. Styles 1
and 2 now spend the extra prologue draw, so their in-engine dungeons shift — that is the point:
`--dungeontest`'s style-2 dungeon near spawn rebuilds at a different anchor and passes.

## Status

| item | state |
|---|---|
| flat species vector `[ebp-0x2be8]` | derived from the jump table, 6/6 |
| group vector `[ebp-0x2bf4]` | derived, including the `%3` second group, 6/6 |
| boss / guard / arc pick | `flat[rand() % size]`, one draw each |
| patrol / companion pick | derived, 32 + 51 species, empty-`list1` skip observed |
| mob-pass species | **not from these containers** — `FUN_00524540`'s `param_5` byte |
| port | done; hash unchanged, styles 1/2 now draw-faithful |
