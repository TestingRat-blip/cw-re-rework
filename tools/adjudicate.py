#!/usr/bin/env python3
"""Build an adjudication worksheet for the label conflicts.

For every address where cw_callgraph.py and CW_CONFIDENCE_XREF.md disagree, put the two
candidate names next to the ACTUAL decompiled body plus caller/callee/string evidence, so
the conflict is settled against the code rather than by source precedence.

Writes raw/adjudication_worksheet.md (bodies truncated) and raw/adjudication.json.
"""
import json
import os
import re

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")

BODY_CHARS = 1100


def load_conflicts():
    out = []
    p = os.path.join(RAW, "label_conflicts.md")
    for line in open(p, encoding="utf-8"):
        if not (line.startswith("| Server") or line.startswith("| Cube")):
            continue
        c = [x.strip() for x in line.strip().strip("|").split("|")]
        if len(c) < 8:
            continue
        binary, addr, n1, k1, s1, n2, k2, s2 = c[:8]
        out.append({"binary": binary, "addr": addr.strip("`").replace("0x", "").lower(),
                    "a_name": n1, "a_kind": k1, "a_src": s1,
                    "b_name": n2, "b_kind": k2, "b_src": s2})
    return out


def main():
    conflicts = load_conflicts()
    meta, dec = {}, {}
    for binary in ("Server.exe", "Cube.exe"):
        mp = os.path.join(RAW, binary + ".meta.jsonl")
        if os.path.exists(mp):
            for line in open(mp, encoding="utf-8"):
                r = json.loads(line)
                meta[(binary, r["addr"].lower())] = r
        dp = os.path.join(RAW, binary + ".decomp.jsonl")
        if os.path.exists(dp):
            for line in open(dp, encoding="utf-8"):
                r = json.loads(line)
                dec[(binary, r["addr"].lower())] = r

    rows = []
    for c in conflicts:
        key = (c["binary"], c["addr"])
        m = meta.get(key, {})
        d = dec.get(key, {})
        c["size"] = m.get("size", 0)
        c["ncallers"] = len(m.get("callers") or [])
        c["ncallees"] = len(m.get("callees") or [])
        c["strings"] = (m.get("strings") or [])[:3]
        c["proto"] = m.get("proto", "")
        c["body"] = (d.get("c") or "").strip()
        rows.append(c)

    rows.sort(key=lambda r: r["size"])

    out = os.path.join(RAW, "adjudication_worksheet.md")
    with open(out, "w", encoding="utf-8") as g:
        g.write("# Adjudication worksheet -- %d label conflicts\n\n" % len(rows))
        g.write("Ordered smallest first: small bodies are decisive.\n")
        g.write("**A** = `cw_callgraph.py`, **B** = `CW_CONFIDENCE_XREF.md`.\n\n")
        for i, r in enumerate(rows):
            g.write("---\n\n## %d. `0x%s`  (%d bytes, %d callers, %d callees)\n\n"
                    % (i + 1, r["addr"], r["size"], r["ncallers"], r["ncallees"]))
            g.write("- **A** `%s` (%s)\n- **B** `%s` (%s)\n" % (r["a_name"], r["a_kind"], r["b_name"], r["b_kind"]))
            if r["strings"]:
                g.write("- strings: %s\n" % ", ".join(repr(s) for s in r["strings"]))
            g.write("\n```c\n%s\n```\n\n" % r["body"][:BODY_CHARS])

    with open(os.path.join(RAW, "adjudication.json"), "w", encoding="utf-8") as g:
        json.dump(rows, g, indent=1)

    print("worksheet: %d conflicts -> %s" % (len(rows), os.path.normpath(out)))
    tiny = sum(1 for r in rows if r["size"] <= 80)
    print("  <=80 bytes (body decisive): %d" % tiny)
    print("  81-400 bytes: %d" % sum(1 for r in rows if 80 < r["size"] <= 400))
    print("  >400 bytes: %d" % sum(1 for r in rows if r["size"] > 400))


if __name__ == "__main__":
    main()
