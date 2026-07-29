"""Gate: the town builder's RUIN OCCUPANT pass, 0x4f16bb-0x4f2b45.

Decode: Docs/RE_town_ruin.md.  Source data: raw/town_props_capture*.json
(tools/frida_town_props.py, seed 42069, 92 towns = 50 villages + 42 ruins).

The else arm of the `desc[0x18] == 1` test whose then arm is the NPC / daily-routine pass
(Docs/RE_town_npcs.md).  It is not "the same pass for the other site classes": it is the
RUIN's half of the same fork.  `desc[0x18]` is 1 (village) or 5 (ruin) and nothing else in
the corpus, so the two stages partition it -- and where the village pass gives every
building a villager with a daily schedule, this one fills an abandoned town with hostile
creatures whose behaviour tree is `Sequential[Combat(20.0f), WalkPath(2.0f)]`: no
LookAtPlayer, no RandomInteraction, no schedule.

  phase 1  0x4f16bb-0x4f1bbd  the SPECIES TABLES.  Zero draws.  A `vector<int>` (the flat
                              list) and a `vector<SpeciesGroup>`, picked by a five-way jump
                              table on `desc[0x1c]` plus a `desc[0x20] % 3` sub-switch.
  phase 2  0x4f1bbd-0x4f21f2  the PLOT LOOP, r-outer/c-inner indexed `r + n*c`.  A role-0x14
                              plot gets one guard; any other plot with role != 2 and
                              score > 0.2 rolls `rand() % 5 == 0` at each of its four
                              quadrant centres.
  phase 3  0x4f21f2-0x4f2698  the BUILDING LOOP over `site+0x88`.  `rand() % 3` packs per
                              building, each `rand()%3 + 2` creatures on a semicircle of
                              radius 2 at a randomly drawn, then erased, building cell.
  phase 4  0x4f2698-0x4f2a55  a `rand() % 2` PATROL per building -- and this one is INVISIBLE
                              to the capture; see [0].

★ [0] IS THE FINDING, AND IT IS ABOUT THE RIG.  Every capture on disk was taken with
`frida_town_props.py` filtering draws to `inTB = [0x4e28e0, 0x4f26f0)`, because Ghidra
reports the builder's body as ending at 0x4f26e9.  It does not: the `ret 8` is at 0x4f2b42,
so the body runs 1,116 bytes further than every doc in this repo has carried, and SEVEN rand
sites plus one `spawn_ctor` live in the part that filter threw away (lesson 18, from a new
direction -- here it is cutting off the function, not a callee).  They are recovered anyway,
because the rig stamps a process-global draw index: the gap after the last recorded site
prices them, and it is exactly 8 in every one of the 35 firings and 1 in the other 42 --
predicted, not fitted, by the parity of that site's own RECORDED VALUE (lessons 7m, 33).
The rig has since been corrected to 0x4f2b45, so a FRESH capture would record the seven
directly; the captures this gate reads still do not, and `RIG_HI` below describes the data
rather than the script.

★ AND THE SPECIES TABLES CROSS-CHECK AGAINST A CONTAINER DECODED A YEAR AGO.  Two of the
nine arms are byte-identical to the DUNGEON assembler's species containers
(Docs/RE_dungeon_species.md, which gate_dungeon_species.py proves live over 6 dungeons):
the `desc[0x1c] > 4` arm is the dungeon's default arm and the `desc[0x1c] == 4` arm is its
style-1/2 arm, down to the same three second-group ids in the same order.  Two functions,
two decodes, two methods, one table.  The tables here are INTERPRETED out of Server.exe by
this file, never typed (lessons 7i, 7l) -- the region shares tails through 0x4f1b93/0x4f1b96
and hoists its immediates above the branch, so a block-at-a-time scan of the listing gets
them wrong in a way that still looks plausible.

★ AND `ents` CLOSES EXACTLY HERE.  Docs/RE_town_npcs.md §7 recorded that `site+0x18` is not
a usable total, because six other `spawn_ctor` sites push into it -- true for a VILLAGE.  In
a ruin only two stages push into it, so `ents - ents0` is an exact count, 35 of 35, and it
is the only evidence that the invisible phase-4 block creates an entity at all.  Every term
is ablated below and the coin's modulus is swept against its neighbours (lesson 5).

    python tools/gate_town_ruin.py
"""
import collections
import glob
import json
import os
import struct
import sys

try:
    import capstone
except ImportError:                                            # pragma: no cover
    sys.exit("needs capstone (pip install capstone)")

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
EXE = os.path.normpath(os.path.join(HERE, "..", "..", "..", "..", "Server.exe"))

BASE = 0x400000
BODY_LO = 0x4E28E0                    # FUN_004e28e0, the town builder
BODY_HI = 0x4F2B45                    # the byte after its `ret 8` -- NOT Ghidra's 0x4f26e9
GHIDRA_HI = 0x4F26E9                  # what every doc in this repo has carried
# The `inTB` upper bound the captures ON DISK were taken with.  frida_town_props.py has
# since been corrected to 0x4f2b45, so this is a property of raw/town_props_capture*.json
# and NOT of the current rig -- do not "fix" it to match the script, or [0] stops
# describing the data it is checking.
RIG_HI = 0x4F26F0

SPAN_LO, SPAN_HI = 0x4F16BB, BODY_HI
TABLE_LO, TABLE_HI = 0x4F16BB, 0x4F1BBD        # phase 1, the species tables

RAND_THUNK = 0x5582F4                 # __imp__rand
SPAWN_CTOR = 0x4E0F40
PUSH_INT = 0x4F2BE0                   # std::vector<int>::push_back
GRP_CTOR = 0x4F7540                   # SpeciesGroup::SpeciesGroup -- zeroes 0x18 == 2 vectors
GRP_PUSH = 0x5285C0                   # vector<SpeciesGroup>::push_back
VEC_CLEAR = 0x4DAFD0                  # [ecx+4] = [ecx]
GRP_DTOR = 0x4F77A0
JMPTAB = 0x4F2BC8
# For the record, not used by the interpreter -- the CONSUMERS of what phase 1 builds:
#   0x4e28d0  int_vector_empty   the guards at 0x4f2262 / 0x4f2698 / 0x4f2766
#   0x402bb0  int_vector_at      the species picks at 0x4f1dbf / 0x4f2144 / 0x4f24f9 /
#                                0x4f283e -- the last of which is the only one that reads a
#                                GROUP rather than the flat list
#   0x4f79b0  SpeciesGroupVector_at  (`begin + idx*24`, which is how the 0x18 element size
#                                is confirmed a third time)

# frame slots
VAL = -0x5C48                         # the scratch every immediate goes through
FLAT = -0x5D10                        # the flat species list
GA, GB = -0x34, -0x28                 # the temp group's two vectors (GA + 0xc == GB)
                                      # (the vector<SpeciesGroup> itself is [ebp-0x5d34];
                                      #  the interpreter models it as a python list)

# ---------------------------------------------------------------------------
# THE MODEL.  Asserted against the binary and the capture further down.
# ---------------------------------------------------------------------------
GUARD_O, GUARD_S = 0x4F1D7D, 0x4F1DBF          # the role-0x14 plot's one occupant
COIN, QUAD_O, QUAD_S = 0x4F1F4B, 0x4F20F9, 0x4F2144
NPACK, PICK, NMEMB = 0x4F2275, 0x4F22B7, 0x4F2307
MEMB_S, MEMB_I = 0x4F24F9, 0x4F2600
PATROL = 0x4F26B3                              # the last RECORDED draw in the builder

RECORDED = [GUARD_O, GUARD_S, COIN, QUAD_O, QUAD_S,
            NPACK, PICK, NMEMB, MEMB_S, MEMB_I, PATROL]
# the seven the rig never saw, in address order
HIDDEN = [0x4F26F3, 0x4F274C, 0x4F27F7, 0x4F283E, 0x4F2947, 0x4F297C, 0x4F29D7]
PATROL_COST = 8                                # 7 hidden draws + 1 to the next recorded

QUAD_MOD = 5                                   # the quadrant coin
INHAB_COIN = 0x4EDA58                          # the inhabitant scatter's, RE_town_creatures.md
INHAB_MASK = 7

ROLE_GUARD, ROLE_HOUSE = 0x14, 2
SCORE_MIN = 0.2

# The behaviour-tree constructors, labelled in Docs/RE_town_npcs.md.  What separates a
# ruin's occupants from a village's is WHICH of these each stage calls, so the counts are
# censused in both spans and contrasted rather than asserted from one side.
NPC_SPAN = (0x4F0046, 0x4F16B6)                # the village pass, RE_town_npcs.md
BEHAVIOURS = {0x41CFC0: "Sequential", 0x4029E0: "Combat", 0x4C5D50: "WalkPath",
              0x414720: "LookAtPlayer", 0x428920: "SpawnLocation",
              0x41BA60: "RandomInteraction", 0x41CB90: "RandomWalk"}
RUIN_TREE = {"Sequential": 3, "Combat": 3, "WalkPath": 3}

# Docs/RE_dungeon_species.md, derived from FUN_00500300's prologue and proven live over
# 6 dungeons by gate_dungeon_species.py.  Two of this stage's arms must equal these.
DUNGEON_DEFAULT = ([0xB, 0xC], [([0x2E], [0x13])])
DUNGEON_STYLE12 = ([0xF, 0x10], [([0xF, 0x10], [0x60])])
DUNGEON_L2 = {0: 0x61, 1: 0x5E, 2: 0x11}       # its prologue `rand() % 3`


# ---------------------------------------------------------------------------
# reading Server.exe
# ---------------------------------------------------------------------------
def load_image():
    data = open(EXE, "rb").read()
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    optsz = struct.unpack_from("<H", data, pe + 20)[0]
    base = struct.unpack_from("<I", data, pe + 24 + 28)[0]
    off, secs = pe + 24 + optsz, []
    for _ in range(nsec):
        vsz, va, rsz, ptr = struct.unpack_from("<IIII", data, off + 8)
        secs.append((base + va, vsz, ptr))
        off += 40
    return data, secs


DATA, SECS = load_image()


def foff(va):
    for v, vsz, ptr in SECS:
        if v <= va < v + vsz:
            return ptr + (va - v)
    raise KeyError("%X" % va)


def read(va, n):
    o = foff(va)
    return DATA[o:o + n]


MD = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
MD.detail = True


def disasm(lo, hi):
    return list(MD.disasm(read(lo, hi - lo), lo))


def imm_of(ins, n=0):
    ops = ins.operands
    if len(ops) > n and ops[n].type == capstone.x86.X86_OP_IMM:
        return ops[n].imm
    return None


def ebp_disp(op):
    if op.type == capstone.x86.X86_OP_MEM and op.mem.base == capstone.x86.X86_REG_EBP \
            and op.mem.index == 0:
        return op.mem.disp
    return None


# ---------------------------------------------------------------------------
# [1] the rand-site census, over the CORRECTED span
#
# Two forms reach `rand` here.  Most sites are the plain `call dword ptr [__imp__rand]`;
# the phase-4 block loads the thunk into EDI once (0x4f26ab, again at 0x4f2a3c) and then
# calls through the register, so a census that only matches the memory form silently
# misses two of the seven.  EDI is tracked, not assumed.
# ---------------------------------------------------------------------------
SPAN_INS = disasm(SPAN_LO, BODY_HI)


def scan_rand_sites(lo, hi):
    """-> {return address: form}.  form is ('imm', m) | ('rt',) | ('f32',) | ('unused',)."""
    out = {}
    edi_is_rand = False
    for i, x in enumerate(SPAN_INS):
        if x.address < SPAN_LO or x.address >= BODY_HI:
            continue
        if x.mnemonic == "mov" and x.op_str.startswith("edi,"):
            op = x.operands[1]
            edi_is_rand = (op.type == capstone.x86.X86_OP_MEM and op.mem.base == 0
                           and op.mem.disp == RAND_THUNK)
        if x.mnemonic != "call" or not x.operands:
            continue
        op = x.operands[0]
        mem_form = (op.type == capstone.x86.X86_OP_MEM and op.mem.base == 0
                    and op.mem.disp == RAND_THUNK)
        reg_form = (op.type == capstone.x86.X86_OP_REG
                    and op.reg == capstone.x86.X86_REG_EDI and edi_is_rand)
        if not (mem_form or reg_form):
            continue
        if not (lo <= x.address + x.size <= hi):
            continue
        ra = x.address + x.size
        nxt = SPAN_INS[i + 1:i + 6]
        form = ("unused",)
        if any(y.mnemonic == "and" and imm_of(y, 1) == 0x80000001 for y in nxt[:2]):
            form = ("imm", 2)
        elif nxt and nxt[0].mnemonic in ("xor", "mov") and \
                any(y.mnemonic == "div" for y in nxt[:3]):
            form = ("rt",)                        # unsigned rand() % <runtime size>
        elif nxt and nxt[0].mnemonic == "cdq" and nxt[1].mnemonic == "mov" \
                and nxt[2].mnemonic == "idiv":
            form = ("imm", imm_of(nxt[1], 1))
        elif nxt and nxt[0].mnemonic == "movd":
            form = ("f32",)                       # rand() * 360.0f / 32767.0f
        out[ra] = form
    return out


def scan_calls(lo, hi, target):
    return [x.address + x.size for x in SPAN_INS
            if lo <= x.address + x.size <= hi
            and x.mnemonic == "call" and imm_of(x, 0) == target]


# ---------------------------------------------------------------------------
# [2] the species tables -- INTERPRETED, never typed
# ---------------------------------------------------------------------------
TABLE_INS = {x.address: x for x in disasm(TABLE_LO, TABLE_HI)}


def run_table(entry, mod3):
    """Symbolically execute one arm of phase 1.  -> (flat list, [(list0, list1)])."""
    pc, val, ecx = entry, None, None
    vecs = {FLAT: [], GA: [], GB: []}
    groups = []
    for _ in range(4000):
        if pc >= TABLE_HI:
            return vecs[FLAT], groups
        x = TABLE_INS.get(pc)
        if x is None:
            raise RuntimeError("no instruction at %X -- misaligned arm" % pc)
        m, ops = x.mnemonic, x.operands
        if m == "mov" and len(ops) == 2 and ebp_disp(ops[0]) == VAL \
                and ops[1].type == capstone.x86.X86_OP_IMM:
            val = ops[1].imm
        elif m == "lea":
            if ops[0].reg == capstone.x86.X86_REG_ECX:
                ecx = ebp_disp(ops[1])
        elif m == "call" and ops[0].type == capstone.x86.X86_OP_IMM:
            t = ops[0].imm
            if t == PUSH_INT:
                vecs[ecx].append(val)
            elif t == GRP_CTOR:
                vecs[GA], vecs[GB] = [], []
            elif t == GRP_PUSH:
                groups.append((list(vecs[GA]), list(vecs[GB])))
            elif t == VEC_CLEAR:
                vecs[ecx] = []
            elif t == GRP_DTOR:
                pass
            else:
                raise RuntimeError("unmodelled call 0x%X at %X" % (t, pc))
        elif m == "jmp" and ops[0].type == capstone.x86.X86_OP_IMM:
            pc = ops[0].imm
            continue
        elif m == "je":
            # the only conditionals inside an arm body are the desc[0x20] %% 3 switch
            if pc == 0x4F1AD9 and mod3 == 1:
                pc = ops[0].imm
                continue
            if pc == 0x4F1ADC and mod3 == 2:
                pc = ops[0].imm
                continue
            if pc not in (0x4F1AD9, 0x4F1ADC):
                raise RuntimeError("unexpected conditional at %X" % pc)
        pc += x.size
    raise RuntimeError("runaway arm from %X" % entry)


def species_tables():
    """-> {(sub, mod3): (flat, groups)} for every reachable arm of phase 1."""
    cases = [struct.unpack("<I", read(JMPTAB + 4 * i, 4))[0] for i in range(5)]
    out = {}
    for sub, entry in enumerate(cases):
        needs_mod3 = 0x4F1AD9 in [x.address for x in disasm(entry, TABLE_HI)
                                  if x.address >= entry] and entry == 0x4F1A24
        for m in ((0, 1, 2) if needs_mod3 else (None,)):
            out[(sub, m)] = run_table(entry, m if m is not None else 0)
    out[("default", None)] = run_table(0x4F1B2C, 0)     # desc[0x1c] > 4
    out[("village-class", None)] = run_table(0x4F16DA, 0)   # desc[0x18] not 5 and not 1
    return cases, out


# ---------------------------------------------------------------------------
# the capture
# ---------------------------------------------------------------------------
def load_hits():
    out = []
    for name in sorted(glob.glob(os.path.join(RAW, "town_props_capture*.json"))):
        for h in json.load(open(name))["hits"]:
            out.append(h)
    return out


def stage_draws(h):
    return [(ra + BASE, rv, n) for ra, rv, n in h["draws"] if SPAN_LO <= ra + BASE <= SPAN_HI]


def plot_order(h):
    """the plot table in the order phase 2 visits it: r-outer, c-inner, index r + n*c."""
    pl = [bytes(p) for p in h["plotsLate"]]
    n = int(round(len(pl) ** 0.5))
    rec = [(struct.unpack_from("<i", b, 0xC)[0], struct.unpack_from("<f", b, 0x18)[0])
           for b in pl]
    return [rec[r + n * c] for r in range(n) for c in range(n)], n


def patrol_fired(dr, i):
    """did the invisible phase-4 block run after the PATROL draw at index i?"""
    if i + 1 < len(dr):
        return dr[i + 1][2] - dr[i][2] == PATROL_COST
    return dr[i][1] % 2 == 1               # the town's last draw has no successor


def predict_counts(h, dr, quad_mod=QUAD_MOD, drop=None):
    c = collections.Counter(x[0] for x in dr)
    quad = sum(1 for x in dr if x[0] == COIN and x[1] % quad_mod == 0) \
        if quad_mod != QUAD_MOD else c[QUAD_O]
    patrol = sum(1 for i, x in enumerate(dr) if x[0] == PATROL and patrol_fired(dr, i))
    inhab = sum(1 for ra, rv, _ in h["draws"]
                if ra + BASE == INHAB_COIN and (rv & INHAB_MASK) == 0)
    parts = {"guard": c[GUARD_O], "quad": quad, "pack": c[MEMB_S],
             "patrol": patrol, "inhab": inhab}
    if drop:
        parts[drop] = 0
    return parts


def simulate(h, dr):
    """Replay the whole stage from the plot table + the RECORDED draw values.

    Returns (True, n) if every draw in the town was predicted, in order, with nothing left
    over; (False, message) otherwise.  Nothing about the sequence is read off the draws
    themselves -- the roles and scores come from the plot table and the branch decisions
    from the values the game rolled.
    """
    order, _ = plot_order(h)
    i = 0

    def take(site, why):
        nonlocal i
        if i >= len(dr) or dr[i][0] != site:
            got = "0x%X" % dr[i][0] if i < len(dr) else "end of stage"
            raise ValueError("draw %d: expected 0x%X (%s), got %s" % (i, site, why, got))
        v = dr[i][1]
        i += 1
        return v

    for role, score in order:
        if role == ROLE_GUARD:
            take(GUARD_O, "role-0x14 guard orientation")
            take(GUARD_S, "role-0x14 guard species")
        elif role == ROLE_HOUSE or score <= SCORE_MIN:
            continue
        else:
            for _ in range(4):                       # the four quadrant centres
                if take(COIN, "quadrant coin") % QUAD_MOD == 0:
                    take(QUAD_O, "quadrant orientation")
                    take(QUAD_S, "quadrant species")
    for _ in range(sum(1 for role, _ in order if role == ROLE_HOUSE)):
        for _ in range(take(NPACK, "packs for this building") % 3):
            if i < len(dr) and dr[i][0] != PICK:
                break                                # the cell list ran out
            take(PICK, "pack cell")
            for _ in range(take(NMEMB, "pack size") % 3 + 2):
                take(MEMB_S, "member species")
                take(MEMB_I, "member inventory")
        take(PATROL, "patrol coin")
    if i != len(dr):
        raise ValueError("%d draws left over after the model finished" % (len(dr) - i))
    return len(dr)


def main():
    ok = fail = 0
    notes = []

    def check(cond, msg, n=1):
        """n is the number of RECORDS covered, so ok/FAIL reads as a size (as the other
        town gates do)."""
        nonlocal ok, fail
        if cond:
            ok += n
        else:
            fail += n
            if len(notes) < 8:
                notes.append(msg)

    print("gate_town_ruin -- the town builder's RUIN OCCUPANT pass (0x%06X-0x%06X)"
          % (SPAN_LO, SPAN_HI))

    # -- [0] the body is longer than every doc here has carried --------------
    tail = read(BODY_HI - 3, 3)
    check(tail == b"\xc2\x08\x00", "0x%X is not `ret 8`: %s" % (BODY_HI - 3, tail.hex()))
    check(read(GHIDRA_HI - 3, 3) != b"\xc2\x08\x00",
          "0x%X really is a `ret 8` after all" % (GHIDRA_HI - 3))
    hidden_sites = scan_rand_sites(RIG_HI, BODY_HI)
    hidden_ctor = scan_calls(RIG_HI, BODY_HI, SPAWN_CTOR)
    check(sorted(hidden_sites) == HIDDEN,
          "the hidden rand sites differ: binary %s model %s"
          % (["%X" % a for a in sorted(hidden_sites)], ["%X" % a for a in HIDDEN]))
    check(len(hidden_ctor) == 1,
          "expected exactly one spawn_ctor past the rig filter, got %s"
          % ["%X" % a for a in hidden_ctor])
    print("  [0] the builder's body ends at its `ret 8` at 0x%06X, not Ghidra's 0x%06X"
          % (BODY_HI - 3, GHIDRA_HI))
    print("      -> the body is %d bytes, %d more than this repo has carried"
          % (BODY_HI - BODY_LO, BODY_HI - GHIDRA_HI))
    print("      the captures on disk were taken with inTB = [0x%06X, 0x%06X), so"
          % (BODY_LO, RIG_HI))
    print("      %d rand sites and %d spawn_ctor in [0x%06X, 0x%06X) were NEVER RECORDED:"
          % (len(hidden_sites), len(hidden_ctor), RIG_HI, BODY_HI))
    print("        %s" % " ".join("0x%X" % a for a in sorted(hidden_sites)))

    # -- [1] the recorded rand sites ----------------------------------------
    sites = scan_rand_sites(SPAN_LO, RIG_HI)
    check(sorted(sites) == sorted(RECORDED),
          "the recorded rand sites differ: binary %s model %s"
          % (["%X" % a for a in sorted(sites)], ["%X" % a for a in sorted(RECORDED)]))
    check(sites.get(NPACK) == ("imm", 3), "0x%X is not a %% 3" % NPACK)
    check(sites.get(NMEMB) == ("imm", 3), "0x%X is not a %% 3" % NMEMB)
    check(sites.get(PATROL) == ("imm", 2), "0x%X is not a %% 2" % PATROL)
    check(sites.get(MEMB_I) == ("imm", 2), "0x%X is not a %% 2" % MEMB_I)
    check(sites.get(GUARD_S) == ("rt",) and sites.get(QUAD_S) == ("rt",)
          and sites.get(MEMB_S) == ("rt",) and sites.get(PICK) == ("rt",),
          "a species/cell pick is not an unsigned runtime-modulus divide")
    check(sites.get(GUARD_O) == ("f32",) and sites.get(QUAD_O) == ("f32",),
          "an orientation draw is not the f32 360/32767 form")
    quad_imm = struct.unpack("<i", read(COIN + 2, 4))[0]
    check(quad_imm == QUAD_MOD,
          "the quadrant coin's modulus is %d in the binary, %d in the model"
          % (quad_imm, QUAD_MOD))
    print("  [1] rand sites disassembled out of Server.exe : %d recorded + %d hidden = %d"
          % (len(sites), len(hidden_sites), len(sites) + len(hidden_sites)))
    print("      the quadrant coin's modulus is read from the `mov ecx, imm` at 0x%X : %d"
          % (COIN + 1, quad_imm))

    # -- [2] the species tables, interpreted --------------------------------
    cases, tabs = species_tables()
    check(len(set(cases)) == 5, "the jump table has duplicate arms: %s" % cases)
    dflt = tabs[("default", None)]
    check(dflt == DUNGEON_DEFAULT,
          "the desc[0x1c]>4 arm is not the dungeon's default container:\n"
          "        here    %s\n        dungeon %s" % (dflt, DUNGEON_DEFAULT))
    for m, l2 in DUNGEON_L2.items():
        got = tabs[(4, m)]
        want = (DUNGEON_STYLE12[0], DUNGEON_STYLE12[1] + [([l2], [])])
        check(got == want,
              "the desc[0x1c]=4, %%3=%d arm is not the dungeon's style-1/2 container:\n"
              "        here    %s\n        dungeon %s" % (m, got, want))
    flat0 = tabs[(0, None)][0]
    check(flat0.count(0x60) == 2,
          "arm 0's flat list no longer double-counts 0x60: %s" % [hex(v) for v in flat0])
    print("  [2] the species tables, INTERPRETED out of 0x%06X-0x%06X (never typed):"
          % (TABLE_LO, TABLE_HI))
    for key in [("village-class", None)] + [(s, m) for s in range(5)
                                            for m in ((0, 1, 2) if s == 4 else (None,))] \
            + [("default", None)]:
        flat, grps = tabs[key]
        sub, m = key
        label = ("desc[0x1c]=%s" % sub) if isinstance(sub, int) else str(sub)
        if m is not None:
            label += ", desc[0x20]%%3=%d" % m
        print("      %-32s flat %-24s groups %s"
              % (label, [hex(v) for v in flat],
                 " ".join("(%s|%s)" % ([hex(v) for v in a], [hex(v) for v in b])
                          for a, b in grps)))
    print("      *** the desc[0x1c]>4 and desc[0x1c]=4 arms are BYTE-IDENTICAL to the dungeon"
          " assembler's")
    print("        default and style-1/2 species containers (RE_dungeon_species.md,"
          " gate_dungeon_species 6/6 live)")
    print("      !! arm 0 pushes 0x60 into the FLAT list twice (0x4F1774 and 0x4F17D5, both"
          " targeting")
    print("        [ebp-0x5D10]); the surrounding pattern would put the second in the"
          " group -- a port must")
    print("        reproduce it: it makes the pick a % 4 and not a % 3")

    # -- [2b] hostile, not resident: the behaviour trees ---------------------
    def tree_census(lo, hi):
        c = collections.Counter()
        for x in MD.disasm(read(lo, hi - lo), lo):
            if x.mnemonic == "call" and imm_of(x, 0) in BEHAVIOURS:
                c[BEHAVIOURS[imm_of(x, 0)]] += 1
        return c

    ruin_tree = tree_census(SPAN_LO, BODY_HI)
    npc_tree = tree_census(*NPC_SPAN)
    check(dict(ruin_tree) == RUIN_TREE,
          "the ruin behaviour trees are %s, expected %s" % (dict(ruin_tree), RUIN_TREE))
    check(set(ruin_tree) < set(npc_tree),
          "the ruin's behaviours are not a strict subset of the village's: %s vs %s"
          % (sorted(ruin_tree), sorted(npc_tree)))
    print("  [2b] behaviour-tree constructors called, censused in BOTH spans:")
    print("      ruin    0x%06X-0x%06X : %s"
          % (SPAN_LO, BODY_HI, dict(sorted(ruin_tree.items()))))
    print("      village 0x%06X-0x%06X : %s"
          % (NPC_SPAN[0], NPC_SPAN[1], dict(sorted(npc_tree.items()))))
    print("      -> the ruin's occupants are Sequential[Combat(20.0f), WalkPath(2.0f)] and"
          " nothing else:")
    print("         no LookAtPlayer, no RandomInteraction, no SpawnLocation, no schedule."
          "  Hostile.")
    print("      -> and only 3 trees for 4 spawn kinds: the QUADRANT creature is built with"
          " no AI at all")

    # -- the corpus ----------------------------------------------------------
    hits = load_hits()
    village = ruin = stage = 0
    both = 0
    seq_ok = seq_draws = 0
    ents_ok = 0
    gap_ok = gap_tot = 0
    parity_ok = 0
    hooked = collections.Counter()
    subs = collections.Counter()
    per_town = []
    for h in hits:
        d = bytes(h["desc"])
        cls = struct.unpack_from("<i", d, 0x18)[0]
        village += cls == 1
        ruin += cls == 5
        for arr in ("pushes", "settles", "spawncalls"):
            for r in h.get(arr, []):
                if SPAN_LO <= r["ra"] + BASE <= SPAN_HI:
                    hooked[arr] += 1
        dr = stage_draws(h)
        npc = any(0x4F0046 <= ra + BASE <= 0x4F16B6 for ra, _, _ in h["draws"])
        if dr and npc:
            both += 1
        if not dr:
            continue
        stage += 1
        check(cls == 5, "%s reaches the stage with desc[0x18]=%d" % (h["zone"], cls))
        subs[struct.unpack_from("<i", d, 0x1C)[0]] += 1

        # the whole sequence, draw for draw
        try:
            n = simulate(h, dr)
            seq_ok += 1
            seq_draws += n
            check(True, "", n=n)
        except ValueError as e:
            check(False, "%s: %s" % (h["zone"], e), n=len(dr))

        # the invisible block, priced by the global index and predicted by the parity
        for i, x in enumerate(dr):
            if x[0] != PATROL or i + 1 >= len(dr):
                continue
            gap_tot += 1
            g = dr[i + 1][2] - dr[i][2]
            want = PATROL_COST if x[1] % 2 == 1 else 1
            gap_ok += g in (1, PATROL_COST)
            parity_ok += g == want
            check(g == want, "%s: patrol gap %d, parity says %d" % (h["zone"], g, want))

        parts = predict_counts(h, dr)
        got = h["ents"] - h["ents0"]
        ents_ok += sum(parts.values()) == got
        check(sum(parts.values()) == got,
              "%s: ents-ents0 = %d, model = %d %s" % (h["zone"], got, sum(parts.values()),
                                                      parts))
        per_town.append((h, dr, got))

    check(both == 0, "%d towns run BOTH this stage and the NPC pass" % both)
    check(sum(hooked.values()) == 0,
          "the span emitted something the rig hooks: %s" % dict(hooked))
    print("  [3] the corpus: %d villages + %d ruins; %d ruins reach this stage,"
          " %d run BOTH it and the NPC pass"
          % (village, ruin, stage, both))
    print("      desc[0x18] is 1 (village -> RE_town_npcs.md) or 5 (ruin -> here) and"
          " nothing else")
    print("      desc[0x1c] arms actually exercised: %s" % dict(sorted(subs.items())))
    print("      the stage pushes NO prop, settles NOTHING and calls"
          " creature_spawn_builder ZERO times")
    print("  [4] the WHOLE stage replayed from the plot table + the recorded values:"
          " %d / %d towns" % (seq_ok, stage))
    print("      %d draws predicted in order, nothing left over" % seq_draws)
    print("  [5] the invisible phase-4 block, priced off the process-global draw index:")
    print("      the gap after 0x%X is 1 or %d and never anything else : %d / %d"
          % (PATROL, PATROL_COST, gap_ok, gap_tot))
    print("      and WHICH it is, is predicted by that draw's own value %% 2 : %d / %d"
          % (parity_ok, gap_tot))
    print("      gap %d - 1 = %d hidden draws = the %d rand sites disassembled in [0]"
          % (PATROL_COST, PATROL_COST - 1, len(HIDDEN)))

    # -- [6] ents, with the ablations ---------------------------------------
    print("  [6] site+0x18 IS an exact total for a ruin (it is not for a village,"
          " RE_town_npcs.md sec.7):")
    print("      ents-ents0 == guard + quadrant + pack + patrol + inhabitant scatter"
          "  : %d / %d" % (ents_ok, stage))
    print("      THE ABLATIONS -- every term is load-bearing:")
    for drop in ("guard", "quad", "pack", "patrol", "inhab"):
        n = sum(1 for h, dr, got in per_town
                if sum(predict_counts(h, dr, drop=drop).values()) == got)
        print("        without the %-8s term : %2d / %d" % (drop, n, stage))
    print("      THE NULL BASELINE -- the quadrant coin's modulus, swept:")
    for m in (3, 4, 5, 6, 7):
        n = sum(1 for h, dr, got in per_town
                if sum(predict_counts(h, dr, quad_mod=m).values()) == got)
        print("        rand() %% %d == 0        : %2d / %d%s"
              % (m, n, stage, "   <- the binary's" if m == QUAD_MOD else ""))
    print("      *** dropping the PATROL term is what matters: those %d entities are the"
          % sum(predict_counts(h, dr)["patrol"] for h, dr, _ in per_town))
    print("        only evidence that the block past the rig's filter spawns anything"
          " at all")

    print("  THE NULL BASELINES (what this run does NOT pin):")
    print("    the species tables are BYTE-derived.  No capture records this stage's spawn")
    print("    records, so the ids themselves are unverified live -- what is checked is"
          " that two")
    print("    of the nine arms match a container proven live elsewhere, and that every"
          " arm's")
    print("    two lists are non-empty (which the 0x%X / 0x%X guards observe, %d times)"
          % (NPACK, PATROL, stage))
    print("    only desc[0x1c] arms %s ever fire in 42 ruins: arms %s are UNEXERCISED"
          % (sorted(subs), sorted(set(range(5)) - set(subs))))
    print("    the phase-1 `desc[0x18] != 5` arm is unreachable in this corpus too -- the"
          " zone")
    print("    builder only calls the town builder for feature type 1 or 5 (lesson 9:"
          " said out")
    print("    loud so a later reader knows which worlds this gate never visited)")
    print("    the group's SECOND vector (list1) is never read by this stage: it is the"
          " dungeon")
    print("    companion list, and here it is dead data")
    print("  %d ok, %d FAIL" % (ok, fail))
    for m in notes:
        print("    !", m)
    print("  RESULT: %s" % ("PASS" if not fail else "FAIL"))
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
