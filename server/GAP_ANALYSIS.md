# Gap analysis -- Server.exe

Functions automation could not name (still `FUN_`), excluding library code.
Ordered by size: the big ones are where the remaining game logic is.

Rows flagged **orphan** have zero callers. At this size that usually means a
**body split**: Ghidra started a function on the 6-byte alignment NOP MSVC emits
to 16-align a loop head, mid-body, and gave it the rest of the enclosing function.
The code is real -- `0x4eaa7a` is the town builder, `0x50702a` the dungeon
assembler -- so treat an orphan as a fragment of its owner, not as dead code.
`tools/nop_split_audit.py` identifies them and names the owner.

| addr | size | callers | callees | flag | sample strings |
|---|---|---|---|---|---|
| `00431400` | 187427 | 1 | 23 |  | body2.cub, body3.cub, body4.cub |
| `004e310a` | 28175 | 0 | 73 | orphan |  |
| `00541d9a` | 19159 | 0 | 110 | orphan |  |
| `0040a840` | 17600 | 7 | 4 |  |  |
| `004ee3aa` | 17215 | 0 | 106 | orphan |  |
| `00524540` | 15842 | 7 | 51 |  | list<T> too long |
| `004eaa7a` | 14586 | 0 | 60 | orphan |  |
| `0053cba1` | 13776 | 0 | 106 | orphan |  |
| `0051ed6a` | 12564 | 0 | 106 | orphan |  |
| `004dde90` | 10330 | 6 | 18 |  |  |
| `00502dca` | 9401 | 0 | 32 | orphan |  |
| `0051c90a` | 9278 | 0 | 35 | orphan | list<T> too long |
| `0050e080` | 9264 | 1 | 39 |  | mission, monster, vector<T> too long |
| `00515d6a` | 9225 | 0 | 15 | orphan | list<T> too long |
| `0050702a` | 8946 | 0 | 61 | orphan |  |
| `0051880a` | 8528 | 0 | 22 | orphan |  |
| `0054687a` | 8010 | 0 | 70 | orphan |  |
| `005343fa` | 7810 | 0 | 101 | orphan |  |
| `004816ca` | 7194 | 0 | 22 | orphan | ORDER |
| `004db200` | 7104 | 1 | 28 |  | list<T> too long |
| `005054fa` | 6960 | 0 | 35 | orphan |  |
| `004cfd50` | 6604 | 4 | 29 |  | list<T> too long |
| `00500300` | 6267 | 1 | 10 |  |  |
| `0051b26a` | 5776 | 0 | 17 | orphan |  |
| `005290d0` | 5775 | 2 | 9 |  |  |
| `004240ea` | 5015 | 0 | 58 | orphan | vector<T> too long |
| `004f9b70` | 4874 | 4 | 10 |  |  |
| `0051210a` | 4767 | 0 | 30 | orphan | list<T> too long |
| `004d2ae0` | 4682 | 1 | 17 |  |  |
| `004cea80` | 4604 | 3 | 45 |  | list<T> too long |
| `00530a7a` | 4589 | 0 | 6 | orphan |  |
| `004738d0` | 4528 | 1 | 39 |  | Expression tree is too large (maximum de |
| `004d6730` | 4391 | 2 | 5 |  |  |
| `00532cfa` | 3472 | 0 | 50 | orphan |  |
| `0050c550` | 3330 | 1 | 17 |  | list<T> too long, vector<T> too long |
| `004272d0` | 3290 | 1 | 27 |  | list<T> too long |
| `004254a0` | 2935 | 1 | 28 |  |  joined., Client version: , Connection failed. |
| `0052b470` | 2765 | 2 | 7 |  |  |
| `00501e0a` | 2715 | 0 | 8 | orphan |  |
| `00549c50` | 2242 | 1 | 58 |  | list<T> too long, server_, stopping generation thread... |
| `005154aa` | 2225 | 0 | 5 | orphan |  |
| `0041b050` | 2218 | 1 | 14 |  | list<T> too long |
| `00532473` | 2175 | 0 | 45 | orphan |  |
| `004bb5da` | 2138 | 0 | 17 | orphan | cannot use index: %s |
| `004084b0` | 2086 | 8 | 1 |  |  |
| `004e28e0` | 2083 | 1 | 7 |  |  |
| `0052fc3a` | 2080 | 0 | 5 | orphan |  |
| `004757f0` | 2074 | 1 | 9 |  | BINARY, auto-index |
| `0052ef00` | 2032 | 2 | 5 |  |  |
| `004d4f90` | 1952 | 2 | 5 |  |  |
| `0053670a` | 1882 | 0 | 28 | orphan |  |
| `0046f990` | 1866 | 2 | 4 |  |  |
| `004d1a70` | 1805 | 3 | 3 |  |  |
| `004dd2e0` | 1779 | 6 | 8 |  |  |
| `00426020` | 1774 | 1 | 30 |  |  |
| `00416210` | 1759 | 1 | 18 |  |  |
| `005370b7` | 1742 | 0 | 35 | orphan |  |
| `00410690` | 1740 | 1 | 4 |  |  |
| `0041ee20` | 1708 | 1 | 13 |  | list<T> too long |
| `0054140a` | 1693 | 0 | 22 | orphan |  |
| `004721aa` | 1690 | 0 | 16 | orphan | Child page depth differs, Corruption detected in cell %d on page %, Fragmentation of %d bytes reported as %d |
| `0050d260` | 1642 | 2 | 22 |  | list<T> too long |
| `004ff59a` | 1600 | 0 | 10 | orphan |  |
| `00531c6a` | 1561 | 0 | 4 | orphan |  |
| `0050da73` | 1541 | 0 | 13 | orphan | list<T> too long |
| `0052a830` | 1448 | 1 | 7 |  |  |
| `00418410` | 1415 | 1 | 7 |  |  |
| `0047afc0` | 1397 | 1 | 14 |  | Expression tree is too large (maximum de |
| `00533e8a` | 1392 | 0 | 17 | orphan |  |
| `00522e20` | 1376 | 6 | 2 |  |  |
| `004d7c50` | 1363 | 2 | 16 |  | mission, monster |
| `004f2ee0` | 1359 | 1 | 7 |  |  |
| `0052f6fa` | 1344 | 0 | 1 | orphan |  |
| `0052c820` | 1325 | 14 | 2 |  |  |
| `00485a80` | 1322 | 1 | 12 |  | localtime, month, start of  |
| `004a2f1a` | 1249 | 0 | 5 | orphan | %s mode not allowed: %s, access, cache |
| `00528bf0` | 1240 | 5 | 6 |  |  |
| `00462330` | 1221 | 0 | 13 | orphan | %.16g, %06.3f, string or blob too big |
| `005236d0` | 1212 | 1 | 1 |  |  |
| `0051819a` | 1161 | 0 | 6 | orphan |  |
| `004834d0` | 1140 | 3 | 16 |  | BINARY, MATCH, NOCASE |
| `004cd99a` | 1140 | 0 | 12 | orphan |  |
| `00522840` | 1137 | 2 | 4 |  |  |
| `0053778c` | 1110 | 0 | 20 | orphan |  |
| `004f9010` | 1085 | 1 | 3 |  |  |
| `00415dd0` | 1074 | 1 | 12 |  |  |
| `004dd9da` | 1061 | 0 | 3 | orphan |  |
| `00406ad0` | 1054 | 2 | 1 |  |  |
| `0046178a` | 1018 | 0 | 7 | orphan | SetFilePointer, string or blob too big |
| `0050998a` | 1013 | 0 | 24 | orphan |  |
| `0046a100` | 955 | 2 | 15 |  | c0e09560d26f0a6456be9dd3447f5311eb4f238f, cannot open file at line %d of [%.10s], delayed %dms for lock/sharing conflict |
| `0041faa0` | 953 | 1 | 2 |  |  |
| `00521ed0` | 952 | 1 | 0 |  |  |
| `00422f90` | 950 | 3 | 3 |  |  |
| `0052ae10` | 934 | 1 | 3 |  |  |
| `00465c90` | 904 | 1 | 1 |  | create, explain, temporary |
| `004f5170` | 899 | 1 | 0 |  |  |
| `004f55b0` | 899 | 1 | 0 |  |  |
| `00407db0` | 898 | 6 | 1 |  |  |
| `0041df70` | 876 | 3 | 3 |  |  |
| `004d863a` | 870 | 0 | 17 | orphan | Save/world_ |
| `00418ea0` | 869 | 1 | 5 |  |  |
| `00485faa` | 868 | 0 | 5 | orphan | minute, month, second |
| `00413df0` | 858 | 1 | 0 |  |  |
| `00470360` | 858 | 2 | 2 |  |  |
| `00486540` | 856 | 2 | 2 |  |  |
| `00460010` | 855 | 0 | 13 | orphan | %!.15g, %!.20e, string or blob too big |
| `0047f1a0` | 848 | 1 | 5 |  |  |
| `00502a7a` | 840 | 0 | 3 | orphan |  |
| `0047c700` | 823 | 1 | 13 |  |  |
| `0052c4e0` | 820 | 5 | 6 |  |  |
| `00468a90` | 811 | 0 | 4 | orphan | string or blob too big |
| `004d5740` | 806 | 1 | 5 |  |  |
| `004f6db0` | 802 | 1 | 2 |  |  |
| `004c24f0` | 796 | 1 | 12 |  | %s-shm, winOpenShm |
| `00423dd0` | 794 | 1 | 8 |  |  |
| `004d9410` | 770 | 1 | 4 |  |  |
| `004bedfa` | 768 | 0 | 8 | orphan | -mj%06X9%02X, MJ collide: %s, MJ delete: %s |
| `00463860` | 764 | 0 | 13 | orphan | %s\%s, GetFullPathNameA1, GetFullPathNameA2 |
| `0047db10` | 754 | 2 | 11 |  | %s\etilqs_, abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMN, ilqs_ |
| `00541aaa` | 752 | 0 | 20 | orphan |  |
| `004febd0` | 749 | 2 | 2 |  |  |
| `00465720` | 737 | 0 | 9 | orphan |  |
| `00408f70` | 735 | 1 | 4 |  |  |
| `0052cd50` | 731 | 5 | 6 |  |  |
| `0046c7b0` | 721 | 0 | 4 | orphan |  |
| `004feec0` | 721 | 1 | 2 |  |  |
| `00472ef0` | 718 | 1 | 8 |  |  |
| `0041a240` | 717 | 1 | 7 |  | invalid map/set<T> iterator |
| `004d2810` | 715 | 3 | 9 |  |  |
| `0042d9b0` | 708 | 1 | 9 |  | invalid map/set<T> iterator |
| `00411800` | 704 | 1 | 5 |  |  |
| `0042dd40` | 702 | 1 | 8 |  | invalid map/set<T> iterator |
| `0040a4f0` | 680 | 3 | 7 |  | invalid map/set<T> iterator |
| `0042d640` | 680 | 1 | 7 |  | invalid map/set<T> iterator |
| `004d3ed0` | 680 | 1 | 7 |  | invalid map/set<T> iterator |
| `004d4180` | 680 | 1 | 7 |  | invalid map/set<T> iterator |
| `00409f20` | 678 | 1 | 7 |  | invalid map/set<T> iterator |
| `004667da` | 676 | 0 | 4 | orphan |  |
| `004d9160` | 676 | 2 | 5 |  | list<T> too long |
| `0042f5a0` | 674 | 1 | 7 |  | invalid map/set<T> iterator |
| `004239f0` | 670 | 7 | 2 |  |  |
| `00409780` | 669 | 2 | 1 |  |  |
| `004f654a` | 669 | 0 | 1 | orphan |  |
| `004f6b0a` | 669 | 0 | 1 | orphan |  |
| `004d83a0` | 663 | 3 | 2 |  |  |
| `00411d60` | 662 | 3 | 1 |  |  |
| `0053afb9` | 662 | 0 | 12 | orphan |  |
| `00522580` | 659 | 2 | 9 |  | list<T> too long |
| `0042f9a0` | 656 | 2 | 10 |  |  |
| `0051ae9a` | 656 | 0 | 6 | orphan |  |
| `004110d0` | 655 | 3 | 5 |  |  |
| `00411ad0` | 655 | 2 | 4 |  |  |
| `00410010` | 637 | 1 | 2 |  |  |
| `004609b0` | 637 | 0 | 11 | orphan | string or blob too big |
| `00407020` | 634 | 2 | 3 |  |  |
| `00419210` | 631 | 1 | 2 |  |  |
| `004da210` | 627 | 2 | 5 |  |  |
| `00429bc0` | 626 | 2 | 3 |  | map/set<T> too long |
| `004f42d0` | 622 | 1 | 5 |  |  |
| `00466b60` | 620 | 0 | 9 | orphan | %s%.*s"%w", string or blob too big |
| `004d5f40` | 617 | 2 | 6 |  | list<T> too long |
| `004f67f0` | 616 | 1 | 2 |  |  |
| `00415750` | 607 | 1 | 1 |  |  |
| `0040a1d0` | 601 | 8 | 7 |  | invalid map/set<T> iterator |
| `00536e64` | 595 | 0 | 16 | orphan |  |
| `00409ac0` | 586 | 1 | 2 |  |  |
| `00412300` | 586 | 1 | 2 |  |  |
| `0048e670` | 584 | 1 | 9 |  |  |
| `004778d0` | 581 | 2 | 6 |  | %s (rowid<?), %s (rowid=?), %s (rowid>? AND rowid<?) |
| `004d9720` | 571 | 1 | 2 |  |  |
| `00537cef` | 569 | 0 | 11 | orphan |  |
| `004025f0` | 565 | 1 | 5 |  |  |
| `00420810` | 565 | 1 | 5 |  |  |
| `004c7570` | 565 | 1 | 5 |  |  |
| `004f4080` | 565 | 1 | 5 |  |  |
| `0040fda0` | 559 | 10 | 2 |  |  |
| `00429570` | 559 | 2 | 2 |  | map/set<T> too long |
| `0048951a` | 559 | 0 | 5 | orphan | GROUP, ORDER, a GROUP BY clause is required before HAV |
| `004c6af0` | 559 | 2 | 2 |  | map/set<T> too long |
| `004c6d20` | 559 | 2 | 2 |  | map/set<T> too long |
| `004c6f50` | 559 | 2 | 2 |  | map/set<T> too long |
| `004d9de0` | 559 | 2 | 2 |  | map/set<T> too long |
| `00401140` | 558 | 1 | 0 |  |  |
| `004706c0` | 543 | 2 | 5 |  |  |
| `0047f780` | 543 | 1 | 8 |  | local time unavailable |
| `005234b0` | 538 | 1 | 2 |  |  |
| `004700da` | 537 | 0 | 2 | orphan |  |
| `0045f5b0` | 532 | 0 | 10 | orphan | winShmMap1, winShmMap2, winShmMap3 |
| `004e1b40` | 532 | 1 | 1 |  |  |
| `00462930` | 528 | 0 | 6 | orphan |  |
| `004297a0` | 527 | 2 | 3 |  | map/set<T> too long |
| `00429e40` | 525 | 1 | 4 |  |  |
| `00430b40` | 525 | 1 | 4 |  |  |
| `004d5d30` | 522 | 37 | 1 |  |  |
| `00420600` | 518 | 2 | 2 |  | map/set<T> too long |
| `004c68e0` | 518 | 2 | 2 |  | map/set<T> too long |
| `004f3c60` | 518 | 2 | 2 |  | map/set<T> too long |
| `004f3e70` | 518 | 4 | 2 |  | map/set<T> too long |
| `00536506` | 516 | 0 | 19 | orphan |  |
| `004299b0` | 515 | 2 | 2 |  | map/set<T> too long |
| `00430930` | 515 | 2 | 2 |  | map/set<T> too long |
| `0041a7b0` | 511 | 1 | 2 |  | map/set<T> too long |
| `004c7180` | 511 | 1 | 2 |  | map/set<T> too long |
| `004da010` | 511 | 1 | 2 |  | map/set<T> too long |
| `0052e250` | 511 | 1 | 2 |  | map/set<T> too long |
| `00462b60` | 505 | 0 | 10 | orphan | delayed %dms for lock/sharing conflict, winAccess |
| `00430230` | 501 | 1 | 5 |  |  |
| `0052d990` | 498 | 4 | 7 |  |  |
| `004d81b0` | 494 | 3 | 11 |  |  |
| `00419c90` | 489 | 6 | 2 |  |  |
| `004776e0` | 487 | 1 | 2 |  |  AND , rowid |
| `00423510` | 484 | 2 | 9 |  |  |
| `00410400` | 479 | 1 | 3 |  |  |
| `00461e80` | 478 | 0 | 7 | orphan | cannot DETACH database within transactio, cannot detach database %s, database %s is locked |
| `004d5a80` | 476 | 2 | 1 |  |  |
| `004c7380` | 475 | 1 | 4 |  |  |
| `00518630` | 474 | 1 | 8 |  |  |
| `0046a520` | 473 | 1 | 12 |  | delayed %dms for lock/sharing conflict, winDelete |
| `00411360` | 472 | 1 | 4 |  |  |
| `004d4d80` | 472 | 3 | 3 |  |  |
| `0049fbea` | 469 | 0 | 8 | orphan |  |
| `0042a070` | 468 | 1 | 6 |  |  |
| `0042a260` | 468 | 1 | 6 |  |  |
| `0042a450` | 468 | 2 | 6 |  |  |
| `0042a640` | 468 | 1 | 6 |  |  |
| `004c77c0` | 468 | 1 | 6 |  |  |
| `00417ae0` | 464 | 1 | 0 |  |  |
| `005308b0` | 458 | 1 | 2 |  |  |
| `004dafe0` | 454 | 7 | 6 |  | list<T> too long |
| `0045f3e0` | 449 | 0 | 6 | orphan | ESCAPE expression must be a single chara, LIKE or GLOB pattern too complex |
| `00409270` | 448 | 3 | 4 |  |  |
| `0052b230` | 448 | 2 | 3 |  |  |
| `004da4a0` | 447 | 1 | 4 |  |  |
| `0046af10` | 445 | 0 | 3 | orphan |  |
| `004681c0` | 441 | 0 | 6 | orphan |  |
| `004692f0` | 437 | 0 | 7 | orphan |  |
| `0041dc60` | 435 | 1 | 6 |  |  |
| `004d2190` | 431 | 1 | 4 |  | list<T> too long |
| `00414550` | 428 | 3 | 1 |  |  |
| `00412150` | 427 | 10 | 2 |  |  |
| `00412710` | 426 | 10 | 4 |  |  |
| `00463f80` | 425 | 0 | 9 | orphan | c0e09560d26f0a6456be9dd3447f5311eb4f238f, misuse at line %d of [%.10s] |
| `00466440` | 420 | 0 | 7 | orphan |  |
| `00408300` | 419 | 1 | 2 |  |  |
| `00411540` | 419 | 1 | 2 |  |  |
| `0050d8d0` | 419 | 1 | 3 |  |  |
| `0040f8f0` | 416 | 0 | 2 | orphan |  |
| `004198e0` | 415 | 0 | 2 | orphan |  |
| `004762d0` | 413 | 4 | 5 |  | c0e09560d26f0a6456be9dd3447f5311eb4f238f, misuse at line %d of [%.10s], unable to delete/modify collation sequen |
| `004ff1a0` | 409 | 1 | 4 |  |  |
| `00407730` | 405 | 4 | 0 |  |  |
| `00468460` | 405 | 0 | 3 | orphan |  |
| `004da790` | 400 | 2 | 3 |  |  |
| `004d61c0` | 395 | 1 | 5 |  |  |
| `0054709a` | 395 | 0 | 16 | orphan |  |
| `004653d0` | 393 | 0 | 6 | orphan |  |
| `0041ebc0` | 385 | 1 | 0 |  |  |
| `004bec7a` | 384 | 0 | 3 | orphan | %s-mjXXXXXX9XXz |
| `004f46c0` | 382 | 1 | 3 |  |  |
| `004a2cfa` | 381 | 0 | 6 | orphan |  |
| `0042e090` | 380 | 4 | 3 |  |  |
| `00413240` | 379 | 1 | 8 |  | DATABASE WRITE ERROR, INSERT INTO blobs(key, value) VALUES(?, , SELECT 1 FROM blobs WHERE key = ? |
| `00461610` | 378 | 0 | 2 | orphan |  |
| `0040f2f0` | 377 | 1 | 1 |  |  |
| `0047d250` | 374 | 2 | 9 |  | OsError 0x%x (%u) |
| `0042c820` | 369 | 1 | 14 |  |  |
| `0047ebd0` | 369 | 1 | 4 |  |  |
| `0041d950` | 368 | 2 | 4 |  |  |
| `004c7c50` | 365 | 1 | 4 |  |  |
| `004c7de0` | 365 | 1 | 4 |  |  |
| `004d7ae0` | 364 | 1 | 5 |  |  |
| `004c6580` | 363 | 1 | 4 |  |  |
| `00419770` | 362 | 0 | 1 | orphan |  |
| `004886ea` | 362 | 0 | 4 | orphan | DISTINCT aggregates must have exactly on |
| `004c7ad0` | 360 | 1 | 3 |  |  |
| `00468fa0` | 356 | 0 | 7 | orphan | win32 |
| `0041dae0` | 355 | 1 | 4 |  |  |
| `00537fb4` | 355 | 0 | 5 | orphan |  |
| `00460630` | 354 | 0 | 5 | orphan | string or blob too big |
| `00412e20` | 347 | 1 | 7 |  | 1.2.3 |
| `00406970` | 346 | 4 | 0 |  |  |
| `004d4c20` | 345 | 1 | 2 |  |  |
| `004f4b50` | 345 | 1 | 1 |  |  |
| `004f4dd0` | 345 | 1 | 1 |  |  |
| `0052c370` | 341 | 1 | 1 |  |  |
| `0041f880` | 338 | 1 | 1 |  |  |
| `0049a9aa` | 337 | 0 | 7 | orphan |  |
| `0053ae68` | 337 | 0 | 8 | orphan |  |
| `00417e40` | 336 | 1 | 0 |  |  |
| `00428ef0` | 336 | 1 | 8 |  |  |
| `0042a970` | 336 | 1 | 5 |  |  |
| `00465a50` | 332 | 0 | 5 | orphan | delayed %dms for lock/sharing conflict, winWrite |
| `0053630d` | 332 | 0 | 11 | orphan |  |
| `0042f070` | 331 | 4 | 5 |  |  |
| `00476470` | 331 | 2 | 8 |  | c0e09560d26f0a6456be9dd3447f5311eb4f238f, misuse at line %d of [%.10s] |
| `004159b0` | 330 | 1 | 1 |  |  |
| `0042aae0` | 324 | 1 | 4 |  |  |
| `0042ac40` | 324 | 1 | 4 |  |  |
| `004695b0` | 324 | 0 | 8 | orphan |  |
| `0051b12a` | 320 | 0 | 1 | orphan |  |
| `0041a9b0` | 319 | 2 | 3 |  |  |
| `004753b0` | 319 | 7 | 1 |  |  |
| `00431020` | 318 | 2 | 4 |  |  |
| `004f4560` | 318 | 1 | 3 |  |  |
| `00402840` | 316 | 1 | 3 |  |  |
| `00420a60` | 316 | 1 | 3 |  |  |
| `0042cad0` | 316 | 1 | 8 |  |  |
| `004891f0` | 311 | 1 | 6 |  | %r %s BY term out of range - should be b |
| `0052bfa0` | 311 | 2 | 1 |  |  |
| `004f5cc0` | 310 | 2 | 5 |  |  |
| `004f5e00` | 310 | 2 | 5 |  |  |
| `004f5f40` | 310 | 2 | 5 |  |  |
| `004f6080` | 310 | 2 | 5 |  |  |
| `0052e450` | 310 | 1 | 2 |  |  |
| `004dd1a0` | 307 | 2 | 6 |  |  |
| `00413420` | 306 | 2 | 2 |  |  |
| `0047693a` | 304 | 0 | 4 | orphan | c0e09560d26f0a6456be9dd3447f5311eb4f238f, database corruption at line %d of [%.10s |
| `0050529a` | 304 | 0 | 3 | orphan |  |
| `005053ca` | 304 | 0 | 3 | orphan |  |
| `00485950` | 303 | 3 | 2 |  |  |
| `0048be3a` | 303 | 0 | 4 | orphan | AUTOINCREMENT is only allowed on an INTE, INTEGER |
| `00473660` | 302 | 2 | 9 |  |  |
| `00462eb0` | 300 | 0 | 6 | orphan |  |
| `0053ad3c` | 300 | 0 | 7 | orphan |  |
| `0042c9a0` | 299 | 1 | 7 |  |  |
| `004094a0` | 296 | 1 | 2 |  |  |
| `0042a830` | 294 | 1 | 3 |  |  |
| `004d8c90` | 294 | 3 | 3 |  | list<T> too long |
| `00523380` | 292 | 1 | 0 |  |  |
| `0047eaa0` | 289 | 5 | 7 |  |  |
| `00412550` | 288 | 1 | 1 |  |  |
| `00428aca` | 288 | 0 | 5 | orphan |  |
| `004312e0` | 287 | 1 | 4 |  | string too long |
| `00413ac0` | 286 | 1 | 1 |  |  |
| `00463000` | 286 | 0 | 5 | orphan |  |
| `0047d5d0` | 286 | 2 | 5 |  |  |
| `00496e0a` | 286 | 0 | 0 | orphan |  |
| `0041f640` | 285 | 1 | 3 |  |  |
| `00461bb0` | 283 | 1 | 8 |  | %04d-%02d-%02d %02d:%02d:%02d, string or blob too big |
| `005306d0` | 282 | 1 | 3 |  |  |
| `00401920` | 279 | 3 | 5 |  | invalid string position, string too long |
| `00475680` | 279 | 6 | 1 |  |  |
| `004f4f30` | 279 | 1 | 2 |  |  |
| `00402030` | 278 | 4 | 2 |  |  |
| `0046eada` | 278 | 0 | 1 | orphan |  |
| `0046f5da` | 277 | 0 | 2 | orphan |  |
| `0048b660` | 277 | 2 | 2 |  |  |
| `004aac4a` | 277 | 0 | 5 | orphan |  |
| `00414350` | 275 | 1 | 1 |  |  |
| `00418bd0` | 275 | 1 | 1 |  |  |
| `004172f0` | 273 | 14 | 5 |  | invalid string position, string too long |
| `0042ea90` | 273 | 1 | 5 |  |  |
| `004f4cb0` | 273 | 1 | 2 |  |  |
| `00469830` | 271 | 0 | 5 | orphan |  |
| `00464310` | 270 | 0 | 4 | orphan |  |
| `0042f890` | 269 | 3 | 5 |  |  |
| `00410290` | 268 | 1 | 0 |  |  |
| `00423400` | 267 | 1 | 12 |  |  |
| `0046f880` | 267 | 1 | 2 |  |  |
| `004d8e60` | 265 | 1 | 4 |  |  |
| `0052ea70` | 265 | 1 | 4 |  |  |
| `004671c0` | 264 | 0 | 6 | orphan | source and destination must be distinct |
| `00549330` | 264 | 1 | 5 |  |  |
| `00549440` | 264 | 1 | 5 |  |  |
| `0048a3ba` | 263 | 0 | 2 | orphan | %s:%d |
| `00461420` | 262 | 0 | 4 | orphan |  |
| `004dab90` | 262 | 2 | 4 |  |  |
| `0042c710` | 261 | 2 | 5 |  |  |
| `00413ce0` | 260 | 1 | 1 |  |  |
| `00465210` | 260 | 0 | 6 | orphan | delayed %dms for lock/sharing conflict, winRead |
| `00486cc0` | 259 | 1 | 3 |  |  |
| `00430d70` | 257 | 1 | 3 |  |  |
| `004cdef0` | 257 | 1 | 6 |  |  |
| `00416d60` | 256 | 4 | 4 |  |  |
| `00470aa0` | 256 | 2 | 5 |  | c0e09560d26f0a6456be9dd3447f5311eb4f238f, misuse at line %d of [%.10s] |
| `004a5e90` | 256 | 2 | 8 |  | c0e09560d26f0a6456be9dd3447f5311eb4f238f, misuse at line %d of [%.10s] |
| `004e15f0` | 256 | 1 | 1 |  |  |
| `004c79b0` | 255 | 1 | 3 |  |  |
| `00419670` | 254 | 0 | 2 | orphan |  |
| `00462150` | 254 | 1 | 7 |  | %04d-%02d-%02d, string or blob too big |
| `004bf0fa` | 254 | 0 | 4 | orphan |  |
| `004da680` | 254 | 4 | 2 |  |  |
| `00461d80` | 251 | 1 | 7 |  | %02d:%02d:%02d, string or blob too big |
| `00467060` | 251 | 0 | 3 | orphan |  |
| `00401a40` | 247 | 10 | 4 |  | string too long |
| `004179e0` | 247 | 1 | 0 |  |  |
| `00417410` | 246 | 5 | 4 |  | string too long |
| `004016f0` | 245 | 6 | 4 |  |  |
| `0042ff40` | 243 | 1 | 3 |  |  |
| `00467f70` | 242 | 0 | 7 | orphan |  |
| `004189b0` | 241 | 1 | 3 |  |  |
| `0041de30` | 240 | 2 | 1 |  |  |
| `0041f770` | 240 | 3 | 3 |  |  |
| `00422b10` | 240 | 1 | 1 |  |  |
| `0042af50` | 239 | 1 | 8 |  | bad cast |
| `0042e9a0` | 239 | 2 | 8 |  | bad cast |
| `004672d0` | 238 | 0 | 4 | orphan | %.*s"%w"%s, string or blob too big |
| `004311f0` | 237 | 2 | 4 |  | invalid string position, string too long |
| `00423ce0` | 235 | 2 | 6 |  |  |

**Total unnamed non-library functions: 1646** (117 of the listed 400 are orphans)
