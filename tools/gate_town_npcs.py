"""Gate: the town builder's NPC / DAILY-ROUTINE pass, 0x4f0046-0x4f16b6.

Decode: Docs/RE_town_npcs.md.  Source data: raw/town_props_capture*.json
(tools/frida_town_props.py, seed 42069, 92 towns, 35 of which reach this stage).

The last stage of the town builder walks the town's BUILDING list (`site+0x88`) and gives
every building its inhabitants.  Five building kinds get one named occupant each -- a
`cmp ecx, K` chain on the building's `+0x60`, kinds 1/2/4/3/5 in that order, entity type
bytes 0x84/0x80/0x82/0x81/0x83 -- and every OTHER building gets `1 + rand()%2` ordinary
villagers of type 0x88.  Each NPC is an `operator_new(0x10f0)` + `spawn_ctor`, a position
drawn from one of the building's own cell vectors, a behaviour tree, and -- for the
villagers -- a DAILY SCHEDULE: a list of (position, time) waypoints pushed into
`spawn+0x10a0`, times in milliseconds, `0xea60` = 60000 = one minute.

★ WHAT MAKES THIS ONE CHECKABLE.  There is no prop and no `creature_spawn_builder` call in
the whole stage, so `pushes`, `settles` and `spawncalls` are all empty here (checked below,
0 records in the span) -- this is a DRAW-STRUCTURE gate, not a geometry gate.  What makes
it a strong one is that the structure has **no free parameter per villager**: the site
sequence of a villager is fixed by five per-town booleans, and all four of the
data-dependent inner tests are true in 396 of 396 observations.  So 5 bits per town predict
every one of the stage's draws, in order.

★ AND THE FIVE BITS ARE CROSS-CHECKED, not fitted.  Flag C (the kind-1 building list is
non-empty) must agree with "the kind-1 arm fired", flag D with "the kind-2/3/4/5 arms
fired", and flag B with D; the three blocks that share flag E must have identical per-town
counts, as must the two that share flag D.  Those agreements are what stops the model from
being read off its own answer sheet (lesson 12).

★ THE SCHEDULE IS THE SEMANTIC CHECK.  Decoding the time chain out of the recorded draw
values -- `(rand()%0xb4 + 0x1a4)` minutes for the first waypoint, then a `(rand()%M + K)`
gap per stop and a flat `0x1b7740` ms for the walk home -- puts every villager's first
waypoint at 07:00-09:59 and the last at 10:17-20:45, and NONE of the 440 runs past
midnight.  A wrong modulus or a wrong unit does not land on a day.

★ THE HIDDEN DRAWS ARE PRICED.  The rig filters to the builder body (lesson 18), so a
callee's draws are invisible -- but it stamps a process-global index, so a gap in that
index measures them.  34 of the 38 sites are always followed by index+1: the villager path
spends nothing off-body.  The other four are exactly the special arms that call out to
`lib_fn_4fd920` / `lib_fn_4fc180` / `lib_fn_4fde90`, and the gaps price those at 669-1038,
3322-3335 and 2010-2018 draws -- the two arms that share `lib_fn_4fde90` agreeing to
within 8 is itself a check.

Nothing in this file is typed off a listing (lessons 7i, 7l): the rand-site table, the five
arms with their kind/type/callee, and the flag->guard map are all disassembled out of
Server.exe at run time and diffed against the model.

    python tools/gate_town_npcs.py
"""
import collections
import glob
import json
import os
import statistics
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
SPAN_LO, SPAN_HI = 0x4F0046, 0x4F16B6
RAND_THUNK = 0x5582F4                     # __imp__rand
VEC_EMPTY = 0x4E28D0                      # int_vector_empty
SPAWN_CTOR = 0x4E0F40
MINUTE_MS = 0xEA60                        # 60000
WALK_HOME_MS = 0x1B7740                   # 1800000 == 30 minutes

# ---------------------------------------------------------------------------
# THE MODEL.  Everything here is asserted against the binary further down; it is
# written out so the gate has something to be wrong about.
# ---------------------------------------------------------------------------

# the five named-occupant arms, in the order the `cmp ecx, K` chain tests them:
#   building kind -> (first rand site, second rand site, entity type byte, extra callee)
ARMS = [
    (1, 0x4F0396, 0x4F03CA, 0x84, None),
    (2, 0x4F055A, 0x4F058E, 0x80, 0x4FD920),
    (4, 0x4F0736, 0x4F076A, 0x82, 0x4FC180),
    (3, 0x4F0912, 0x4F0946, 0x81, 0x4FDE90),
    (5, 0x4F0AEE, 0x4F0B22, 0x83, 0x4FDE90),
]
ARM_HEAD = {a[1]: a[0] for a in ARMS}
ARM_TAIL = {a[1]: a[2] for a in ARMS}

GEN_N = 0x4F0CA7                          # n = 1 + rand()%2 villagers for this building

# the five per-town booleans, by the frame slot of the list they test.
#   key -> (list slot, flag slot)   ... both derived from the binary below
FLAGS = ["A", "B", "C", "D", "E"]
FLAG_LIST = {"A": -0x40, "B": -0x5D80, "C": -0x4C, "D": -0x5D58, "E": -0x5D64}

# the villager body, in emission order.  Each entry is
#   (guarding flag or None, [sites], sub-block or None)
# a sub-block is (pick site, [sites]) and fires when the picked element's +0x30 is not
# empty -- which is true in every observation in the corpus (asserted below).
BODY = [
    (None, [0x4F0D66, 0x4F0D98], None),               # position, spawn+0x2c coin
    ("A",  [0x4F0DC9], None),                         # the round-robin landmark coin
    (None, [0x4F0E49, 0x4F0E81], None),               # spawn+0x5c coin, wake time
    ("E",  [0x4F0EBB, 0x4F0F21], None),
    ("B",  [0x4F0F5A, 0x4F0FC0], None),
    ("D",  [0x4F0FF9], (0x4F0FF9, [0x4F1032, 0x4F108C])),
    ("E",  [0x4F10C4, 0x4F112A], None),
    ("C",  [0x4F1160], (0x4F1160, [0x4F1196, 0x4F11F0])),
    ("D",  [0x4F122F], (0x4F122F, [0x4F1268, 0x4F12C2])),
    ("D2", [0x4F12E0], (0x4F12E0, [0x4F131D, 0x4F1377])),
    ("E",  [0x4F13AF, 0x4F1415], None),
    ("*",  [0x4F1442, 0x4F147F], None),               # the building's own +0x30 vector
]

# the schedule chain: site -> (modulus, base minutes).  0x4f0e81 is the absolute wake
# time; every other entry is a gap added to the previous waypoint's time.
SCHED = {0x4F0E81: (0xB4, 0x1A4), 0x4F0F21: (0x3C, 0x3C), 0x4F0FC0: (0xB4, 0x3C),
         0x4F108C: (0x14, 0), 0x4F112A: (0x3C, 0x3C), 0x4F11F0: (0xB4, 0x3C),
         0x4F12C2: (0x1E, 0), 0x4F1377: (0x1E, 0), 0x4F1415: (0x3C, 0x3C),
         0x4F147F: (0x3C, 0x3C)}

# the picks whose sub-block is gated on the picked element's +0x30 being non-empty
INNER = {0x4F0FF9: 0x4F1032, 0x4F1160: 0x4F1196,
         0x4F122F: 0x4F1268, 0x4F12E0: 0x4F131D}


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


def file_off(secs, va):
    for v, vsz, ptr in secs:
        if v <= va < v + vsz:
            return ptr + (va - v)
    return None


def disasm(data, secs, lo, hi):
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    md.detail = True
    off = file_off(secs, lo)
    return list(md.disasm(data[off:off + (hi - lo)], lo))


def imm_of(ins, n=0):
    ops = ins.operands
    if len(ops) > n and ops[n].type == capstone.x86.X86_OP_IMM:
        return ops[n].imm
    return None


def ebp_disp(ins, n=0):
    """the [ebp - x] displacement of operand n, or None."""
    ops = ins.operands
    if len(ops) > n and ops[n].type == capstone.x86.X86_OP_MEM:
        m = ops[n].mem
        if m.base == capstone.x86.X86_REG_EBP and m.index == 0:
            return m.disp
    return None


# ---------------------------------------------------------------------------
# [1] the rand-site census, straight out of the binary
# ---------------------------------------------------------------------------
def scan_sites(ins):
    """-> {return address: ('imm', m) | ('rt',) | ('unused',)} and the schedule bases."""
    sites, sched = {}, {}
    for i, x in enumerate(ins):
        if x.mnemonic != "call":
            continue
        op = x.operands[0]
        if not (op.type == capstone.x86.X86_OP_MEM and op.mem.base == 0
                and op.mem.disp == RAND_THUNK):
            continue
        ra = x.address + x.size
        nxt = ins[i + 1:i + 6]
        form = ("unused",)
        # MSVC's signed `% 2` is `and eax, 0x80000001` + the sign fixup; the coin at
        # 0x4f0ca7 moves the result to esi first, so look at the next few, not just one.
        if any(y.mnemonic == "and" and imm_of(y, 1) == 0x80000001 for y in nxt[:2]):
            form = ("imm", 2)
        elif nxt and nxt[0].mnemonic == "xor" and nxt[1].mnemonic == "div":
            form = ("rt",)                       # rand() % <runtime size>
        elif nxt and nxt[0].mnemonic == "cdq" and nxt[1].mnemonic == "mov" \
                and nxt[2].mnemonic == "idiv":
            form = ("imm", imm_of(nxt[1], 1))
        sites[ra] = form
        # a schedule time: ... imul eax, eax, 0xea60, with the base in the lea before it
        base = None
        for j, y in enumerate(nxt):
            if y.mnemonic == "lea" and ebp_disp(y, 1) is None:
                m = y.operands[1].mem
                if m.base == capstone.x86.X86_REG_EDX:
                    base = m.disp
            elif y.mnemonic == "mov" and y.op_str == "eax, edx":
                base = 0
            elif y.mnemonic == "imul" and imm_of(y, 2) == MINUTE_MS:
                sched[ra] = (form[1] if form[0] == "imm" else None, base)
                break
    return sites, sched


# ---------------------------------------------------------------------------
# [2] the five arms
# ---------------------------------------------------------------------------
def scan_arms(ins):
    """-> [(kind, type byte, extra callee or None)] in test order."""
    arms, pending = [], None
    for i, x in enumerate(ins):
        if x.mnemonic == "cmp" and x.op_str.startswith("ecx, ") and imm_of(x, 1) is not None \
                and ins[i + 1].mnemonic == "jne":
            pending = {"kind": imm_of(x, 1), "type": None, "calls": []}
            arms.append(pending)
        elif pending is not None:
            if x.mnemonic == "mov" and x.operands[0].type == capstone.x86.X86_OP_MEM \
                    and x.operands[0].mem.base == capstone.x86.X86_REG_ESI \
                    and x.operands[0].mem.disp == 0x30 and pending["type"] is None:
                pending["type"] = imm_of(x, 1)
            elif x.mnemonic == "call" and pending["type"] is not None:
                # the FIRST call after the entity-type store settles it: an arm with an
                # extra callee calls it here, an arm without one goes straight to the
                # operator_new of its behaviour tree.
                t = imm_of(x, 0)
                if t is not None:
                    if t != 0x54A7B6:                          # operator_new
                        pending["calls"].append(t)
                    pending = None
    return [(a["kind"], a["type"], (a["calls"] or [None])[0]) for a in arms if a["type"]]


# ---------------------------------------------------------------------------
# [3] the flag definitions and their guards
# ---------------------------------------------------------------------------
def scan_flags(ins):
    defs, guards, last_lea = {}, [], None
    pending_call = None
    for i, x in enumerate(ins):
        if x.mnemonic == "lea" and x.op_str.startswith("ecx,"):
            d = ebp_disp(x, 1)
            if d is not None:
                last_lea = d
        elif x.mnemonic == "call" and imm_of(x, 0) == VEC_EMPTY:
            pending_call = last_lea
        elif x.mnemonic == "mov" and x.op_str.endswith(", al") and pending_call is not None:
            d = ebp_disp(x, 0)
            if d is not None:
                defs[d] = pending_call          # flag slot -> list slot
                pending_call = None
        elif x.mnemonic == "cmp" and imm_of(x, 1) == 0 and x.op_str.startswith("byte ptr"):
            d = ebp_disp(x, 0)
            if d is None:
                continue
            # MSVC hoists the flag test above stores that do not touch the flags, so the
            # `jne` can sit several instructions later -- take the next branch, not the
            # next instruction.
            for y in ins[i + 1:i + 8]:
                if y.mnemonic == "jne":
                    guards.append((x.address, d, imm_of(y, 0)))
                    break
                if y.mnemonic[0] == "j" or y.mnemonic in ("cmp", "test"):
                    break
    return defs, guards


# ---------------------------------------------------------------------------
# capture side
# ---------------------------------------------------------------------------
def stage_draws(hit):
    return [(ra + BASE, rv, n) for ra, rv, n in hit["draws"]
            if SPAN_LO <= ra + BASE <= SPAN_HI]


def predict(flags, inner, own30):
    """the villager's site sequence, given the five per-town bits."""
    out = []
    for guard, sites, sub in BODY:
        if guard == "*":
            if own30:
                out += sites
            continue
        g = "D" if guard == "D2" else guard
        if g is not None and not flags[g]:
            continue
        out += sites
        if sub is not None and inner.get(sub[0]):
            out += sub[1]
    return out


def main():
    data, secs = load_image()
    ins = disasm(data, secs, SPAN_LO, SPAN_HI)
    ok = fail = 0
    notes = []

    def check(cond, msg, n=1):
        """n is the number of RECORDS the assertion covers, so the run's ok/FAIL count
        is a size and not a line count (the other town gates read the same way)."""
        nonlocal ok, fail
        if cond:
            ok += n
        else:
            fail += n
            if len(notes) < 8:
                notes.append(msg)

    print("gate_town_npcs -- the town builder's NPC / daily-routine pass"
          " (0x%06X-0x%06X)" % (SPAN_LO, SPAN_HI))

    # -- [1] the site census -------------------------------------------------
    sites, sched = scan_sites(ins)
    model_sites = {GEN_N} | set(ARM_HEAD) | set(ARM_TAIL.values())
    for guard, ss, sub in BODY:
        model_sites |= set(ss)
        if sub:
            model_sites |= set(sub[1])
    check(set(sites) == model_sites,
          "the binary's rand sites differ from the model: only-in-binary %s, only-in-model %s"
          % (sorted("%X" % a for a in set(sites) - model_sites),
             sorted("%X" % a for a in model_sites - set(sites))))
    check(sites.get(GEN_N) == ("imm", 2),
          "0x%X is not a %% 2 coin: %s" % (GEN_N, sites.get(GEN_N)))
    check(all(sites.get(a[2]) == ("imm", 2) for a in ARMS),
          "an arm's second draw is not a %% 2 coin")
    check(all(sites.get(a[1]) == ("rt",) for a in ARMS),
          "an arm's first draw is not a runtime-modulus pick")
    unused = [a for a, f in sites.items() if f == ("unused",)]
    check(unused == [0x4F1442],
          "expected exactly one discarded rand (0x4F1442), got %s"
          % ["%X" % a for a in unused])
    print("  [1] rand sites disassembled out of Server.exe : %d, all %d in the model"
          % (len(sites), len(model_sites)))
    print("      one draw is taken and DISCARDED at 0x%X (its value reaches nothing)"
          % unused[0])

    # the schedule chain, machine-derived
    check(sched == SCHED,
          "the schedule chain differs from the model:\n        binary %s\n        model  %s"
          % ({"%X" % k: v for k, v in sorted(sched.items())},
             {"%X" % k: v for k, v in sorted(SCHED.items())}))
    print("      the %d schedule times all multiply by 0x%X = %d ms = one minute; the"
          " chain (mod, base) is diffed against the model"
          % (len(sched), MINUTE_MS, MINUTE_MS))

    # -- [2] the arms --------------------------------------------------------
    arms = scan_arms(ins)
    model_arms = [(k, t, c) for k, _, _, t, c in ARMS]
    check(arms == model_arms,
          "the arm chain differs:\n        binary %s\n        model  %s" % (arms, model_arms))
    print("  [2] the named-occupant arms, in `cmp ecx, K` order:")
    for k, t, c in arms:
        print("      kind %d -> entity type 0x%02X%s"
              % (k, t, "" if c is None else "  (calls 0x%06X)" % c))

    # -- [3] the flags -------------------------------------------------------
    defs, guards = scan_flags(ins)
    slot2flag = {v: k for k, v in FLAG_LIST.items()}
    got_defs = {}
    for flagslot, listslot in defs.items():
        if listslot in slot2flag:
            got_defs[slot2flag[listslot]] = flagslot
    check(set(got_defs) == set(FLAGS),
          "the five list-empty flags were not all found: %s" % sorted(got_defs))
    flag_of_slot = {v: k for k, v in got_defs.items()}
    guard_order = [flag_of_slot[d] for _, d, _ in guards if d in flag_of_slot]
    # D2 is the SECOND pick of block 7 and shares block 7's single `cmp` -- it is a guard
    # in the model's emission order but not a separate test in the binary.
    model_order = [g for g, _, _ in BODY if g not in (None, "*", "D2")]
    check(guard_order == model_order,
          "the guard order differs:\n        binary %s\n        model  %s"
          % (guard_order, model_order))
    print("  [3] flag guards in address order, disassembled : %s" % " ".join(guard_order))
    print("      (A=[ebp%d] landmarks, B=[ebp%d], C=[ebp%d] kind-1 buildings,"
          " D=[ebp%d] kind-2/3/4/5, E=[ebp%d] plaza spots)"
          % tuple(FLAG_LIST[f] for f in "ABCDE"))

    # -- the capture ---------------------------------------------------------
    towns = villagers = seq_ok = cnt_ok = cnt_tot = 0
    parse_fail = []
    inner_obs = inner_true = 0
    own30_obs = own30_true = 0
    gap_ok = gap_tot = 0
    arm_gaps = collections.defaultdict(list)
    firsts, lasts = [], []
    monotone_ok = monotone_tot = 0
    xcheck = []
    flagcount = collections.Counter()
    null_len = collections.Counter()
    null_flat = 0
    nonempty_arrays = collections.Counter()
    named = collections.Counter()
    ents_ok = ents_tot = 0

    for name in sorted(glob.glob(os.path.join(RAW, "town_props_capture*.json"))):
        cap = json.load(open(name))
        for h in cap["hits"]:
            # this stage emits no prop, no settle and no creature_spawn_builder call
            for arr in ("pushes", "settles", "spawncalls"):
                for r in h.get(arr, []):
                    if SPAN_LO <= r["ra"] + BASE <= SPAN_HI:
                        nonempty_arrays[arr] += 1
            # ★ what site+0x18 does NOT give us: this stage pushes into it, but so do six
            # other spawn_ctor sites in the builder, so the total is a sum over stages.
            ents_tot += 1
            c0 = collections.Counter(ra + BASE for ra, _, _ in h["draws"])
            ents_ok += (c0[0x4F0D66] + sum(c0[a] for a in ARM_HEAD)
                        == h["ents"] - h["ents0"])
            dr = stage_draws(h)
            if not dr:
                continue
            towns += 1
            z = tuple(h["zone"])
            ras = set(x[0] for x in dr)
            flags = {"A": 0x4F0DC9 in ras, "B": 0x4F0F5A in ras, "C": 0x4F1160 in ras,
                     "D": 0x4F0FF9 in ras, "E": 0x4F0EBB in ras}
            flagcount["".join(f for f in FLAGS if flags[f]) or "-"] += 1

            # -- cross-checks on the five bits, against the arms that fired ----
            arm_kinds = set(ARM_HEAD[x[0]] for x in dr if x[0] in ARM_HEAD)
            gen = any(x[0] == GEN_N for x in dr)
            if gen:                       # a town with no villager observes no flag
                xcheck.append(("C", z, flags["C"], 1 in arm_kinds))
                xcheck.append(("D", z, flags["D"], bool(arm_kinds & {2, 3, 4, 5})))
                xcheck.append(("B=D", z, flags["B"], flags["D"]))

            # -- per-town co-firing of the blocks that share a flag ------------
            c = collections.Counter(x[0] for x in dr)
            check(c[0x4F0EBB] == c[0x4F10C4] == c[0x4F13AF],
                  "%s: the three flag-E blocks disagree: %d/%d/%d"
                  % (z, c[0x4F0EBB], c[0x4F10C4], c[0x4F13AF]))
            check(c[0x4F0FF9] == c[0x4F122F] == c[0x4F12E0],
                  "%s: the three flag-D picks disagree: %d/%d/%d"
                  % (z, c[0x4F0FF9], c[0x4F122F], c[0x4F12E0]))

            # -- hidden draws --------------------------------------------------
            for a, b in zip(dr, dr[1:]):
                gap_tot += 1
                if b[2] - a[2] == 1:
                    gap_ok += 1
                elif a[0] in ARM_TAIL.values():
                    arm_gaps[a[0]].append(b[2] - a[2])

            # -- walk the buildings -------------------------------------------
            i = 0
            while i < len(dr):
                ra = dr[i][0]
                if ra in ARM_HEAD:
                    if i + 1 >= len(dr) or dr[i + 1][0] != ARM_TAIL[ra]:
                        parse_fail.append("%s: arm 0x%X not followed by 0x%X"
                                          % (z, ra, ARM_TAIL[ra]))
                        break
                    named[ARM_HEAD[ra]] += 1
                    i += 2
                    continue
                if ra != GEN_N:
                    parse_fail.append("%s: orphan site 0x%X" % (z, ra))
                    break
                n = 1 + dr[i][1] % 2
                i += 1
                # the villagers of this building
                j = i
                got = 0
                while j < len(dr) and dr[j][0] not in ARM_HEAD and dr[j][0] != GEN_N:
                    if dr[j][0] == 0x4F0D66:
                        got += 1
                    j += 1
                cnt_tot += 1
                if got == n:
                    cnt_ok += 1
                # split the tail into villagers and check each sequence
                bounds = [k for k in range(i, j) if dr[k][0] == 0x4F0D66] + [j]
                for a, b in zip(bounds, bounds[1:]):
                    seq = [dr[k][0] for k in range(a, b)]
                    inner = {}
                    for k in range(a, b):
                        if dr[k][0] in INNER:
                            inner_obs += 1
                            t = (k + 1 < b and dr[k + 1][0] == INNER[dr[k][0]])
                            inner[dr[k][0]] = t
                            inner_true += t
                    own30 = 0x4F1442 in seq
                    own30_obs += 1
                    own30_true += own30
                    villagers += 1
                    p = predict(flags, inner, own30)
                    seq_ok += (p == seq)
                    check(p == seq, "%s: villager sequence mismatch\n"
                                    "        pred %s\n        got  %s"
                                    % (z, ["%X" % x for x in p], ["%X" % x for x in seq]),
                          n=len(seq))
                    null_len[len(seq)] += 1
                    # -- the schedule -------------------------------------------
                    t = None
                    prev = None
                    mono = True
                    for k in range(a, b):
                        if dr[k][0] in SCHED:
                            m, base = SCHED[dr[k][0]]
                            step = dr[k][1] % m + base
                            t = step if dr[k][0] == 0x4F0E81 else t + step
                            if prev is not None and t < prev:
                                mono = False
                            prev = t
                    if t is not None:
                        monotone_tot += 1
                        monotone_ok += mono
                        firsts.append(dr[a][1] % SCHED[0x4F0E81][0] + SCHED[0x4F0E81][1])
                        lasts.append(t + WALK_HOME_MS // MINUTE_MS)
                i = j
            null_flat += 1

    check(not parse_fail, "the draw stream does not segment: %s" % parse_fail[:3])
    check(sum(nonempty_arrays.values()) == 0,
          "the span emitted something the rig hooks: %s" % dict(nonempty_arrays))
    check(cnt_ok == cnt_tot,
          "the villager count rule failed in %d of %d buildings" % (cnt_tot - cnt_ok, cnt_tot),
          n=cnt_tot)
    check(inner_true == inner_obs,
          "an inner +0x30 test came back EMPTY: %d of %d" % (inner_obs - inner_true, inner_obs),
          n=inner_obs)
    check(own30_true == own30_obs,
          "a building's own +0x30 vector came back EMPTY: %d of %d"
          % (own30_obs - own30_true, own30_obs), n=own30_obs)
    check(gap_ok + sum(len(v) for v in arm_gaps.values()) == gap_tot,
          "a draw index gap appeared somewhere other than the four special arms",
          n=gap_tot)
    check(monotone_ok == monotone_tot,
          "%d schedules are not monotone" % (monotone_tot - monotone_ok), n=monotone_tot)
    check(lasts and max(lasts) < 1440,
          "a schedule runs past midnight: max %s min" % (max(lasts) if lasts else "-"))
    for what, z, got, want in xcheck:
        check(got == want, "%s: flag %s is %s but the arms say %s" % (z, what, got, want))

    def hm(x):
        return "%02d:%02d" % (int(x) // 60 % 24, int(x) % 60)

    print("  [4] the capture: %d towns reach the stage, %d buildings, %d villagers"
          % (towns, cnt_tot, villagers))
    print("      the stage pushes NO prop, settles NOTHING and calls"
          " creature_spawn_builder ZERO times -- 0 records in pushes/settles/spawncalls")
    print("      named occupants by building kind: %s (%d), ordinary villagers %d"
          % (dict(sorted(named.items())), sum(named.values()), villagers))
    print("  [5] villagers per building = 1 + rand()%%2       : %d / %d buildings"
          % (cnt_ok, cnt_tot))
    print("  [6] villager SITE SEQUENCE from the five bits   : %d / %d, draw for draw"
          % (seq_ok, villagers))
    print("  [7] flag cross-checks (C<->kind-1 arm, D<->kinds 2/3/4/5, B<->D) : %d"
          % len(xcheck))
    print("      per-town flag sets observed: %s" % dict(flagcount))
    print("  [8] inner +0x30 tests true                      : %d / %d"
          % (inner_true, inner_obs))
    print("      the building's own +0x30 vector non-empty   : %d / %d"
          % (own30_true, own30_obs))
    print("  [9] successor draw index == +1 (no hidden draw) : %d / %d transitions"
          % (gap_ok, gap_tot))
    for ra in sorted(arm_gaps):
        g = arm_gaps[ra]
        kind = [k for k, h, t, _, _ in ARMS if t == ra][0]
        callee = [c for k, _, t, _, c in ARMS if t == ra][0]
        print("      0x%X (kind %d, 0x%06X) hides %d-%d draws, %d gaps priced"
              % (ra, kind, callee, min(g), max(g), len(g)))
    shared = arm_gaps.get(0x4F0946, []) + arm_gaps.get(0x4F0B22, [])
    if shared:
        print("      -- kinds 3 and 5 call the SAME 0x4FDE90, and their %d priced gaps all"
              " land in [%d, %d]: a spread of %d on a ~%d-draw callee"
              % (len(shared), min(shared), max(shared), max(shared) - min(shared),
                 int(statistics.median(shared))))
    print("      the stage therefore costs %d recorded + %d hidden draws over %d towns"
          % (gap_tot + towns, sum(sum(v) - len(v) for v in arm_gaps.values()), towns))
    print("  [10] the DAILY SCHEDULE decoded from the draw values:")
    print("      first waypoint  %s .. %s (median %s)"
          % (hm(min(firsts)), hm(max(firsts)), hm(statistics.median(firsts))))
    print("      last  waypoint  %s .. %s (median %s)"
          % (hm(min(lasts)), hm(max(lasts)), hm(statistics.median(lasts))))
    print("      monotone %d / %d, past midnight 0 / %d"
          % (monotone_ok, monotone_tot, len(lasts)))

    print("  THE NULL BASELINES (measured every run -- what the data does NOT pin):")
    print("    villager sequence LENGTHS take %d values %s -- a length gate would pass"
          " %d of %d villagers on the commonest alone"
          % (len(null_len), sorted(null_len),
             null_len.most_common(1)[0][1], villagers))
    print("    the four inner +0x30 tests are true in ALL %d observations, so no list"
          " SIZE is pinned by them: every size 1..24 stays consistent" % inner_obs)
    print("    the schedule times are DERIVED, never observed -- the only check on them"
          " is that they land inside a day (they do, %d / %d)" % (len(lasts), len(lasts)))
    print("    site+0x18 (`ents`) is NOT a total for this stage: the NPCs this pass makes"
          " equal ents-ents0 in only %d of %d towns, because six other spawn_ctor sites"
          " in the builder push into the same vector" % (ents_ok, ents_tot))
    print("  %d ok, %d FAIL" % (ok, fail))
    for m in notes:
        print("    !", m)
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
