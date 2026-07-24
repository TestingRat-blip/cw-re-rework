#!/usr/bin/env python3
"""Consolidate every proven / documented function identity in the corpus into one ledger.

Sources, in ascending order of authority (later wins):
  1. tools/cw_coverage/cw_callgraph.py   MAPPED dict          (server, working names)
  2. tools/cw_coverage/cw_callgraph2.py  name maps            (server)
  3. modding/CUBEWORLD_ALPHA_SOURCE.md   function table       (server, gate-proven)
  4. docs/CW_CONFIDENCE_XREF.md          255-row xref         (both binaries, has kind)

Output: raw/labels.json
    {"Server.exe": {"004d83a0": {"name":..., "kind":..., "src":...}, ...}, "Cube.exe": {...}}

`kind` is one of game / gamemisc / lib, matching the Source_check attribution model.
"""
import json
import os
import re
import sys

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", "..", ".."))
OUT = os.path.join(os.path.dirname(__file__), "..", "raw", "labels.json")

SERVER, CUBE = "Server.exe", "Cube.exe"
led = {SERVER: {}, CUBE: {}}


conflicts = []


def put(binary, addr, name, kind, src):
    if not name or name.startswith("_(") or "none" in name.lower()[:6]:
        return
    key = "%08x" % addr
    prev = led[binary].get(key)
    # A later source overwriting an earlier one with a *different* identity is a real
    # inconsistency in our own corpus, not a merge detail. Record it rather than
    # silently letting precedence hide it. (e.g. 0x411090: monster_level_formula/game
    # in cw_callgraph.py vs formula_inverse/lib in CW_CONFIDENCE_XREF.md)
    if prev and (prev["name"] != name or prev["kind"] != kind):
        conflicts.append((binary, key, prev["name"], prev["kind"], prev["src"], name, kind, src))
    led[binary][key] = {"name": name, "kind": kind, "src": src}


def read(*parts):
    p = os.path.join(REPO, *parts)
    if not os.path.exists(p):
        print("  ! missing %s" % p, file=sys.stderr)
        return ""
    with open(p, encoding="utf-8", errors="replace") as fh:
        return fh.read()


# ---- 1/2. cw_callgraph*.py working name maps --------------------------------
for fn in ("cw_callgraph.py", "cw_callgraph2.py"):
    src = read("RatForge", "tools", "cw_coverage", fn)
    for m in re.finditer(r"0x([0-9a-fA-F]{5,8})\s*:\s*[\"']([^\"']+)[\"']", src):
        put(SERVER, int(m.group(1), 16), m.group(2), "game", fn)

# ---- 3. CUBEWORLD_ALPHA_SOURCE.md gate table --------------------------------
src = read("RatForge", "modding", "CUBEWORLD_ALPHA_SOURCE.md")
for m in re.finditer(r"\|\s*`FUN_([0-9a-fA-F]{8})`[^|]*\|\s*`?([A-Za-z_][\w:]*)`?[^|]*\|", src):
    put(SERVER, int(m.group(1), 16), m.group(2), "game", "CUBEWORLD_ALPHA_SOURCE.md")

# ---- 4. CW_CONFIDENCE_XREF.md (highest authority: has binary + kind) --------
src = read("RatForge", "docs", "CW_CONFIDENCE_XREF.md")
rows = 0
for line in src.splitlines():
    m = re.match(r"^\|\s*`0x([0-9a-fA-F]{5,8})`\s*\|\s*(server|cube)\s*\|\s*`?([^`|]+?)`?\s*\|\s*([a-z]+)\s*\|", line)
    if not m:
        continue
    addr = int(m.group(1), 16)
    binary = SERVER if m.group(2) == "server" else CUBE
    name = m.group(3).strip()
    kind = m.group(4).strip()
    if kind not in ("game", "gamemisc", "lib"):
        kind = "game"
    put(binary, addr, name, kind, "CW_CONFIDENCE_XREF.md")
    rows += 1

# ---- 5. adjudicated verdicts -- highest authority of all --------------------
# These were settled by reading the decompiled body (see ../ADJUDICATION.md), so they
# outrank both sources that produced the conflict. Recorded without touching `conflicts`,
# since resolving a conflict is not itself one.
adj_path = os.path.join(os.path.dirname(OUT), "adjudicated.json")
n_adj = 0
if os.path.exists(adj_path):
    with open(adj_path, encoding="utf-8") as fh:
        for binary, entries in json.load(fh).items():
            for key, v in entries.items():
                led.setdefault(binary, {})[key] = {
                    "name": v["name"], "kind": v["kind"], "src": "ADJUDICATION.md"}
                n_adj += 1

os.makedirs(os.path.dirname(OUT), exist_ok=True)
with open(OUT, "w", encoding="utf-8") as fh:
    json.dump(led, fh, indent=1, sort_keys=True)

conf_path = os.path.join(os.path.dirname(OUT), "label_conflicts.md")
with open(conf_path, "w", encoding="utf-8") as fh:
    fh.write("# Label conflicts inside our own corpus\n\n")
    fh.write("Addresses where two of our documented sources give a different name or kind.\n")
    fh.write("Precedence resolved these silently; they are listed so the disagreement is\n")
    fh.write("visible and can be adjudicated. **Winner is the right-hand entry.**\n\n")
    fh.write("| binary | addr | earlier | kind | source | winner | kind | source |\n")
    fh.write("|---|---|---|---|---|---|---|---|\n")
    for c in sorted(conflicts):
        fh.write("| %s | `0x%s` | %s | %s | %s | %s | %s | %s |\n" % c)
    fh.write("\n**Total: %d**\n" % len(conflicts))

print("labels: Server.exe=%d  Cube.exe=%d  (xref rows parsed: %d)"
      % (len(led[SERVER]), len(led[CUBE]), rows))
print("label conflicts recorded: %d -> %s" % (len(conflicts), os.path.normpath(conf_path)))
by_kind = {}
for b in (SERVER, CUBE):
    for v in led[b].values():
        by_kind[v["kind"]] = by_kind.get(v["kind"], 0) + 1
print("by kind:", by_kind)
print("->", os.path.normpath(OUT))
