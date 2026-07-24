#!/usr/bin/env python3
"""Gate: the dungeon's two creature-species containers, and every species they hand out.

Both are built in the assembler's PROLOGUE (0x500370-0x500727) by ONE jump table on `style - 1`
at `0x5003d3` (`jmp [eax*4 + 0x509d80]`; `cmp eax,4 / ja` -> the default arm at 0x50065b, which
style 0 reaches because `0 - 1` is unsigned-huge):

    [ebp-0x2be8]   vector<int>     the FLAT species vector -- boss, guard fans, centre arc
    [ebp-0x2bf4]   vector<Group>   the GROUP vector        -- patrol NPC and its companions

A `Group` is 0x18 bytes: two `vector<int>` at +0x00 and +0x0c.

| style | arm | flat vector | groups |
|---|---|---|---|
| 1, 2 | 0x500538 | {15, 16} | `{{15,16},{0x60}}` **and** `{{L2},{}}` |
| 3 | 0x5004ae | {2, 3} | `{{2,3},{0x13}}` |
| 5 | 0x5003da | {78, 77} | `{{0x11,0x51},{0x3e,0x1e}}` |
| 0, 4 | 0x50065b | {11, 12} | `{{0x2e},{0x13}}` |

Styles 1 and 2 are the only ones with **two** groups, and their second group's single id is a
prologue `rand() % 3` (`0x5005f0`): 0 -> 0x61, 1 -> 0x5e, 2 -> 0x11. All three outcomes are
observed across the three captured style-1/2 dungeons.

Consumers -- the whole assembler has exactly three `FUN_00402bb0` (operator[]) sites:

    0x5079cd  BOSS       flat[ rand() % flat.size() ]
    0x508c4a  PATROL     g = groups[rand() % groups.size()];  g.list0[ rand() % list0.size() ]
    0x509292  COMPANION  g.list1[ rand() % list1.size() ]

and the companion block is gated on `!g.list1.empty()` at `0x5091ee`, which **also skips its
`rand()%3 + 1` count draw** -- so a style-1/2 patrol that draws the second group emits no
companions and consumes one draw fewer. RatForge's C++ `dungeonPatrolPass` always takes that
draw and hardcodes the style-3 ids.

The MOB pass reads neither container: there is no fourth `operator[]`, and its spawns take
`FUN_00524540`'s own `param_5` model byte. "Mob species" is a property of the spawn builder,
not of these containers.

Reads raw/dungeon_patrol_capture*.json (tools/frida_dungeon_patrol.py).
"""
import glob
import json
import os
import sys

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")

# style -> (flat species vector, groups) ; groups as (list0, list1). `None` in place of the
# style-1/2 second group's id means "the prologue rand()%3 decides it".
FLAT = {1: [0x0F, 0x10], 2: [0x0F, 0x10], 3: [0x02, 0x03], 5: [0x4E, 0x4D]}
PCT3 = {0: 0x61, 1: 0x5E, 2: 0x11}          # 0x5005f0 -> 0x500601 / 0x50063d / 0x50061f


def flat_for(style):
    return FLAT.get(style, [0x0B, 0x0C])     # styles 0 and 4 take the default arm


def groups_for(style, second=None):
    """`second` = the id the prologue rand()%3 produced (styles 1/2 only)."""
    if style in (1, 2):
        g = [([0x0F, 0x10], [0x60])]
        if second is not None:
            g.append(([second], []))
        return g
    if style == 3:
        return [([0x02, 0x03], [0x13])]
    if style == 5:
        return [([0x11, 0x51], [0x3E, 0x1E])]
    return [([0x2E], [0x13])]


def check(what, model, live):
    if model == live:
        print(f"[PASS] {what}")
        return True
    print(f"[FAIL] {what}\n        model {model}\n         live {live}")
    return False


def one(name):
    cap = json.load(open(os.path.join(RAW, name)))
    c = cap["containers"][0]
    style = c["style"]
    live_groups = [(g["list0"], g["list1"]) for g in c["groups"]]
    print(f"== {name}  zone {tuple(cap['zone'])}  style {style}")
    ok = True

    ok &= check("flat species vector [ebp-0x2be8] from the jump table",
                flat_for(style), c["speciesVec"])

    # for styles 1/2 the second group's id is a prologue draw -- take it from the capture and
    # check it is one of the three the branch can produce, then check the whole shape.
    second = None
    if style in (1, 2):
        if len(live_groups) != 2 or len(live_groups[1][0]) != 1:
            ok &= check("styles 1/2 have a second single-id group", "2 groups", live_groups)
        else:
            second = live_groups[1][0][0]
            ok &= check("the second group's id is a rand()%%3 outcome (0x61/0x5e/0x11), got %#x"
                        % (second,), True, second in PCT3.values())
    ok &= check("group vector [ebp-0x2bf4] from the jump table",
                groups_for(style, second), live_groups)

    # ---- every species store must come from the container it is indexed out of -----------
    # stores arrive in emit order: a patrol, then that patrol's companions.
    bad, npat, ncomp = [], 0, 0
    cur = None
    for s in cap["species"]:
        if s["what"] == "patrol":
            npat += 1
            owners = [g for g in live_groups if s["sp"] in g[0]]
            if len(owners) != 1:
                bad.append(("patrol species not in exactly one group's list0", hex(s["sp"])))
                cur = None
            else:
                cur = owners[0]
        else:
            ncomp += 1
            if cur is None:
                bad.append(("companion with no owning patrol", hex(s["sp"])))
            elif s["sp"] not in cur[1]:
                bad.append(("companion species not in its patrol group's list1", hex(s["sp"])))
    ok &= check(f"every species store indexes its own container ({npat} patrol, {ncomp} companion)",
                [], bad)

    # ---- the empty-list1 skip: a patrol from a group with no list1 emits no companions ----
    runs, cur_owner, run = [], None, 0
    for s in cap["species"]:
        if s["what"] == "patrol":
            if cur_owner is not None:
                runs.append((cur_owner, run))
            owners = [g for g in live_groups if s["sp"] in g[0]]
            cur_owner, run = (owners[0] if len(owners) == 1 else None), 0
        else:
            run += 1
    if cur_owner is not None:
        runs.append((cur_owner, run))
    viol = [(o[0], n) for o, n in runs if o is not None and ((o[1] == []) != (n == 0))]
    ok &= check("companion count is 0 exactly when the patrol's group has an empty list1", [], viol)
    ok &= check("companion runs are all within rand()%3+1 = 1..3", [],
                [n for o, n in runs if o is not None and o[1] and not (1 <= n <= 3)])

    print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    return (0 if ok else 1), npat, ncomp


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("-")]
    names = args or sorted(os.path.basename(f) for f in
                           glob.glob(os.path.join(RAW, "dungeon_patrol_capture*.json")))
    rc = p = c = 0
    for n in names:
        r, a, b = one(n)
        rc |= r
        p += a
        c += b
        print()
    print(f"== {len(names)} dungeons, {p} patrol + {c} companion species  "
          + ("ALL PASS" if rc == 0 else "FAILURES"))
    return rc


if __name__ == "__main__":
    sys.exit(main())
