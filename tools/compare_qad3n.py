#!/usr/bin/env python3
"""Diff our fresh attribution against the qad3n tree (tools/Source_check).

The standing assessment of that tree is "bodies reliable, labels and _library placement
not". This quantifies the disagreement so the claim stops being folklore, and writes
COMPARISON_vs_Source_check.md next to each binary's tree.

Only *kind* (game / gamemisc / lib) is compared -- names are not directly comparable,
since theirs are RTTI/heuristic and ours are ledger-first.
"""
import os
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
OUT = os.path.join(HERE, "..")
SC = os.path.join(HERE, "..", "..", "Source_check")

PAIRS = [("server", "Server.exe"), ("cube", "Cube.exe")]


def load(path, addr_col=0, kind_col=2, norm=True):
    out = {}
    if not os.path.exists(path):
        return out
    with open(path, encoding="utf-8", errors="replace") as fh:
        next(fh, None)
        for line in fh:
            p = line.rstrip("\n").split("\t")
            if len(p) <= max(addr_col, kind_col):
                continue
            a = p[addr_col].strip().lower().lstrip("0").rjust(8, "0")
            out[a] = (p[kind_col].strip(), p[1].strip() if len(p) > 1 else "")
    return out


def main():
    for folder, binary in PAIRS:
        ours_p = os.path.join(OUT, folder, "attribution.tsv")
        theirs_p = os.path.join(SC, folder, "attribution.tsv")
        ours, theirs = load(ours_p), load(theirs_p)
        if not ours or not theirs:
            print("  skip %s (ours=%d theirs=%d)" % (folder, len(ours), len(theirs)))
            continue

        # how each of ours was attributed -- an unattributed default is not evidence
        why = {}
        with open(ours_p, encoding="utf-8") as fh:
            next(fh, None)
            for line in fh:
                p = line.rstrip("\n").split("\t")
                if len(p) > 5:
                    why[p[0].strip().lower().rjust(8, "0")] = p[5].strip()

        common = set(ours) & set(theirs)
        agree = Counter()
        disagree = Counter()          # only where WE have positive evidence
        undecided = Counter()         # we defaulted; not a real contradiction
        examples = []
        for a in sorted(common):
            ok, on = ours[a]
            tk, tn = theirs[a]
            ol = "lib" if ok == "lib" else "game"
            tl = "lib" if tk == "lib" else "game"
            evidence = why.get(a, "none") not in ("none", "caller-vote")
            if ol == tl:
                agree[ol] += 1
            elif not evidence:
                undecided["ours=unattributed theirs=%s" % tl] += 1
            else:
                disagree["ours=%s(%s) theirs=%s" % (ol, why.get(a, "?"), tl)] += 1
                if len(examples) < 60:
                    examples.append((a, on, ok + "/" + why.get(a, "?"), tn, tk))

        path = os.path.join(OUT, folder, "COMPARISON_vs_Source_check.md")
        with open(path, "w", encoding="utf-8") as g:
            g.write("# Our attribution vs the qad3n tree -- %s\n\n" % binary)
            g.write("Compares `kind` only (game vs library). Names are not comparable: theirs are\n")
            g.write("RTTI/heuristic, ours are ledger-first. Source: `tools/Source_check/%s`.\n\n" % folder)
            g.write("| | count |\n|---|---|\n")
            g.write("| functions in both trees | %d |\n" % len(common))
            g.write("| only in ours | %d |\n" % len(set(ours) - set(theirs)))
            g.write("| only in theirs | %d |\n" % len(set(theirs) - set(ours)))
            g.write("| **agree** | **%d** (%.1f%%) |\n"
                    % (sum(agree.values()), 100.0 * sum(agree.values()) / max(1, len(common))))
            g.write("| **disagree (we hold evidence)** | **%d** (%.1f%%) |\n"
                    % (sum(disagree.values()), 100.0 * sum(disagree.values()) / max(1, len(common))))
            g.write("| we left unattributed -- no claim made | %d |\n" % sum(undecided.values()))
            g.write("\nOnly the **disagree** row is a genuine conflict of evidence. Where we defaulted\n")
            g.write("to unattributed we assert nothing, so those are counted apart rather than being\n")
            g.write("passed off as our tree contradicting theirs.\n")
            g.write("\n## Disagreement breakdown\n\n| direction | count |\n|---|---|\n")
            for k, v in disagree.most_common():
                g.write("| %s | %d |\n" % (k, v))
            g.write("\n## Sample disagreements\n\n")
            g.write("| addr | our name | our kind | their name | their kind |\n|---|---|---|---|---|\n")
            for a, on, ok, tn, tk in examples:
                g.write("| `%s` | %s | %s | %s | %s |\n" % (a, on, ok, tn, tk))

        print("%-7s common=%d agree=%d (%.1f%%) real-disagree=%d undecided=%d -> %s"
              % (folder, len(common), sum(agree.values()),
                 100.0 * sum(agree.values()) / max(1, len(common)),
                 sum(disagree.values()), sum(undecided.values()), os.path.basename(path)))
        for k, v in disagree.most_common():
            print("           %s: %d" % (k, v))


if __name__ == "__main__":
    main()
