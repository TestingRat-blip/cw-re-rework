#!/usr/bin/env python3
"""Verify every CW_CONFIDENCE_XREF.md row against the line it cites.

The server adjudication found the xref's `lib_fn_*` rows were an off-by-one extraction:
they cited CW_RE_MASTER_INDEX.md:158 while the naming table sat at line 159. That is a
mechanical failure, so it is mechanically checkable -- go to the cited doc:line and see
whether the address is actually there, and whether the name matches.

Verdicts per row:
  OK          address appears at the cited line
  OFF-BY-N    address appears within +/-6 lines, not at the cited one
  ABSENT      address is nowhere near the citation (in the whole doc, or at all)
  NO-DOC      cited document does not exist
"""
import os
import re
import sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.abspath(os.path.join(HERE, "..", "..", "..", ".."))
DOCS = os.path.join(REPO, "RatForge", "docs")
OUT = os.path.join(HERE, "..", "raw", "xref_citation_audit.md")

WINDOW = 6
ROW = re.compile(
    r"^\|\s*`0x([0-9a-fA-F]{5,8})`\s*\|\s*(server|cube)\s*\|\s*`?([^`|]+?)`?\s*\|\s*([a-z]+)\s*\|"
    r"(.*)\|\s*\[([A-Za-z0-9_./-]+\.md):(\d+)\]")

_cache = {}


def doclines(name):
    if name in _cache:
        return _cache[name]
    for base in (DOCS, os.path.join(REPO, "RatForge"), REPO):
        p = os.path.join(base, name)
        if os.path.exists(p):
            _cache[name] = open(p, encoding="utf-8", errors="replace").read().splitlines()
            return _cache[name]
    # search by basename
    for root, _, files in os.walk(os.path.join(REPO, "RatForge")):
        if os.path.basename(name) in files:
            p = os.path.join(root, os.path.basename(name))
            _cache[name] = open(p, encoding="utf-8", errors="replace").read().splitlines()
            return _cache[name]
    _cache[name] = None
    return None


def main():
    src = open(os.path.join(DOCS, "CW_CONFIDENCE_XREF.md"), encoding="utf-8", errors="replace").read()
    rows, tally = [], Counter()

    for line in src.splitlines():
        m = ROW.match(line)
        if not m:
            continue
        addr, binary, name, kind, note, doc, lno = m.groups()
        addr = addr.lower().rjust(6, "0")
        lno = int(lno)
        lines = doclines(doc)
        if lines is None:
            v, detail = "NO-DOC", doc
        else:
            pats = [addr, addr.lstrip("0"), "00" + addr[-6:]]

            def hit(i):
                if not (0 <= i < len(lines)):
                    return False
                low = lines[i].lower()
                return any(p in low for p in pats)

            if hit(lno - 1):
                v, detail = "OK", ""
            else:
                near = [d for d in range(-WINDOW, WINDOW + 1) if d and hit(lno - 1 + d)]
                if near:
                    v, detail = "OFF-BY-%+d" % near[0], (lines[lno - 1 + near[0]].strip()[:110])
                else:
                    anywhere = any(any(p in l.lower() for p in pats) for l in lines)
                    v, detail = ("ABSENT-in-doc" if not anywhere else "ABSENT-at-line"), ""
        key = v if not v.startswith("OFF-BY") else "OFF-BY-N"
        tally[(binary, key)] += 1
        rows.append((binary, addr, name, kind, doc, lno, v, detail))

    with open(OUT, "w", encoding="utf-8") as g:
        g.write("# Citation audit of `CW_CONFIDENCE_XREF.md`\n\n")
        g.write("Each row is checked against the doc:line it cites.\n\n")
        g.write("| binary | verdict | count |\n|---|---|---|\n")
        for (b, v), n in sorted(tally.items()):
            g.write("| %s | %s | %d |\n" % (b, v, n))
        g.write("\n## Rows whose citation does not hold\n\n")
        g.write("| binary | addr | xref name | kind | cited | verdict | what is actually there |\n")
        g.write("|---|---|---|---|---|---|---|\n")
        for b, a, n, k, d, l, v, det in rows:
            if v != "OK":
                g.write("| %s | `0x%s` | %s | %s | %s:%d | %s | %s |\n"
                        % (b, a, n[:30], k, d, l, v, det.replace("|", "\\|")[:110]))

    for (b, v), n in sorted(tally.items()):
        print("  %-7s %-15s %d" % (b, v, n))
    print("\n-> %s" % os.path.normpath(OUT))


if __name__ == "__main__":
    main()
