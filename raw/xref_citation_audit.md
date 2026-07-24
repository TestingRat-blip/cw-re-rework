# Citation audit of `CW_CONFIDENCE_XREF.md`

Each row is checked against the doc:line it cites.

| binary | verdict | count |
|---|---|---|
| cube | OK | 89 |
| server | ABSENT-at-line | 2 |
| server | OK | 64 |

## Rows whose citation does not hold

| binary | addr | xref name | kind | cited | verdict | what is actually there |
|---|---|---|---|---|---|---|
| server | `0x4286f0` | World_getTileAtCoords | gamemisc | CW_RE_SOURCE.md:4395 | ABSENT-at-line |  |
| server | `0x52a830` | dungeon_scatter_emitter | game | CW_RE_SOURCE.md:4752 | ABSENT-at-line |  |
