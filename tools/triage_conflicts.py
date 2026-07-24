#!/usr/bin/env python3
"""Triage the label conflicts by hard evidence found in the decompiled body.

Signals are things that cannot be argued with: VC11 STL diagnostic strings (verified
against the extracted headers in ../msvc_vs2012_rtm/vc11_librarycore86), allocator calls,
CRT float helpers. Anything a signal fires on is library code, whatever a working name
claimed. What is left over goes to manual review.
"""
import json
import os
import re
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")

# Each: (verdict-tag, regex, why). Order matters -- first hit wins.
SIGNALS = [
    ("stl-container", r"_Xlength_error|_Xout_of_range|_Xbad_alloc|_Xinvalid_argument|"
                      r"list<T> too long|vector<T> too long|string too long|"
                      r"invalid (vector|string|deque)<T> subscript|map/set<T> too long",
     "VC11 STL diagnostic string (verified in VC/include)"),
    ("stl-alloc",     r"operator_delete|operator_new|_Tidy|_Freeheap|_Allocate",
     "STL allocator plumbing"),
    ("crt-float",     r"in_ST0|float10|ROUND\(|_ftol|__dtol|CIsin|CIcos",
     "x87/CRT float conversion helper"),
    ("crt-mem",       r"\b(memcpy|memmove|memset|strlen|wcslen|malloc|free|realloc)\b",
     "CRT memory/string primitive"),
]


def main():
    rows = json.load(open(os.path.join(RAW, "adjudication.json"), encoding="utf-8"))
    verdicts = []
    tally = Counter()

    for r in rows:
        body = r.get("body") or ""
        tag = why = None
        for t, pat, w in SIGNALS:
            if re.search(pat, body):
                tag, why = t, w
                break

        a, b = r["a_name"], r["b_name"]
        b_is_placeholder = bool(re.match(r"^(lib_fn_|stl_fn_|FUN_)", b))
        a_is_placeholder = bool(re.match(r"^(lib_fn_|stl_fn_|FUN_)", a))
        b_claims_lib = r["b_kind"] == "lib" or re.match(r"^(std_|stl_|lib_)", b)

        if not body:
            v, winner, note = "NO-BODY", "-", "function absent from our analysis (size %d)" % r["size"]
        elif tag:
            # Hard evidence of library code.
            if b_claims_lib and not b_is_placeholder:
                v, winner, note = "B", b, "%s; B names it correctly" % why
            elif b_is_placeholder and not a_is_placeholder:
                v, winner, note = "B-kind/A-name", b, "%s; B has the right kind but a placeholder name" % why
            else:
                v, winner, note = "NEITHER", "-", "%s; neither name reflects it" % why
        else:
            v, winner, note = "REVIEW", "-", "no hard signal -- needs reading"

        r.update({"verdict": v, "winner": winner, "note": note, "signal": tag or ""})
        verdicts.append(r)
        tally[v] += 1

    with open(os.path.join(RAW, "adjudication.json"), "w", encoding="utf-8") as g:
        json.dump(verdicts, g, indent=1)

    for k, v in tally.most_common():
        print("  %-14s %d" % (k, v))
    print()
    print("REVIEW queue by size:")
    rev = [r for r in verdicts if r["verdict"] == "REVIEW"]
    for r in sorted(rev, key=lambda x: x["size"])[:100]:
        print("   0x%s %6d B  A=%-30s B=%s" % (r["addr"], r["size"], r["a_name"][:30], r["b_name"][:34]))


if __name__ == "__main__":
    main()
