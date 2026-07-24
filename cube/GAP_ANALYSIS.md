# Gap analysis -- Cube.exe

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
| `004ee230` | 187427 | 1 | 23 |  | body2.cub, body3.cub, body4.cub |
| `005af170` | 61916 | 1 | 148 |  |  |
| `0060c510` | 60126 | 1 | 262 |  |  |
| `005e4850` | 37430 | 1 | 143 |  | list<T> too long |
| `005cc510` | 36702 | 1 | 96 |  |  |
| `004b39e0` | 29233 | 1 | 131 |  |  |
| `004128f0` | 26870 | 3 | 63 |  |  |
| `005fc1b0` | 23279 | 2 | 45 |  |  |
| `00460600` | 21094 | 1 | 133 |  |  |
| `005df960` | 20099 | 2 | 22 |  | list<T> too long |
| `0043f7c0` | 17600 | 8 | 4 |  |  |
| `004e7870` | 16417 | 8 | 9 |  |  |
| `005f0ce0` | 15724 | 4 | 51 |  | list<T> too long |
| `00471d50` | 15203 | 2 | 15 |  | list<T> too long |
| `005dc6e0` | 11761 | 1 | 34 |  | list<T> too long |
| `00498d0b` | 10740 | 0 | 114 | orphan | bar2, info, rarename |
| `005aaab0` | 10330 | 6 | 18 |  |  |
| `005a0ed0` | 9823 | 7 | 5 |  | Arak, Auri, Dama |
| `004a6b50` | 9118 | 1 | 14 |  |  |
| `005da280` | 9007 | 1 | 38 |  | mission, monster, vector<T> too long |
| `004be760` | 7509 | 2 | 11 |  |  |
| `005a7eb0` | 7409 | 2 | 29 |  | list<T> too long |
| `00484350` | 6972 | 16 | 5 |  | absorb.wav, arrow-destroy.wav, blade1.wav |
| `004ec400` | 6657 | 10 | 3 |  |  |
| `005d6040` | 6651 | 1 | 32 |  | list<T> too long, vector<T> too long |
| `0060ab30` | 6596 | 1 | 7 |  |  |
| `00596d30` | 6562 | 1 | 29 |  | list<T> too long |
| `006758f0` | 6499 | 1 | 14 |  | vector<T> too long |
| `006555d0` | 6041 | 1 | 61 |  |  |
| `005c8390` | 6000 | 1 | 9 |  |  |
| `006b8b40` | 5939 | 1 | 9 |  |  |
| `0059d640` | 5865 | 1 | 8 |  |  |
| `005f56c0` | 5772 | 2 | 9 |  |  |
| `00603a00` | 5672 | 1 | 41 |  | discovered, list<T> too long |
| `004bd160` | 5601 | 1 | 9 |  |  |
| `00609480` | 5444 | 2 | 7 |  |  |
| `0049bf44` | 5184 | 3 | 84 |  |  |
| `004b21f3` | 5018 | 0 | 75 | orphan |  |
| `005c5e20` | 4874 | 5 | 10 |  |  |
| `0059b180` | 4679 | 1 | 17 |  |  |
| `00595a60` | 4586 | 2 | 45 |  | list<T> too long |
| `005a35d0` | 4391 | 5 | 5 |  |  |
| `006295a0` | 4261 | 11 | 8 |  |  |
| `0065c040` | 4069 | 1 | 11 |  | list<T> too long |
| `00632910` | 4045 | 4 | 12 |  |  |
| `0063fec0` | 3851 | 3 | 20 |  |  |
| `006dc5c0` | 3811 | 0 | 14 | orphan |  |
| `006d70c0` | 3787 | 1 | 2 |  |  |
| `004cf3c0` | 3610 | 1 | 14 |  | Apply, Cancel, leftbutton |
| `004758c0` | 3484 | 8 | 14 |  |  |
| `006024d0` | 3413 | 1 | 28 |  |  |
| `00681c70` | 3394 | 1 | 44 |  | Button, Display, GenericShape |
| `005ca0a0` | 3348 | 1 | 9 |  |  |
| `0044be40` | 3318 | 1 | 26 |  | list<T> too long |
| `00685b10` | 3305 | 1 | 23 |  | Attribute.frame, Attribute.sequence, TextShape.color |
| `005d8750` | 3274 | 1 | 17 |  | list<T> too long, vector<T> too long |
| `004482a0` | 3166 | 17 | 1 |  |  |
| `00684ef0` | 3032 | 1 | 32 |  | SmoothMeshShape.extrusionBackColors, SmoothMeshShape.extrusionFrontColors, SmoothMeshShape.extrusionMatrix |
| `00476660` | 3004 | 3 | 10 |  |  |
| `0047fae0` | 2977 | 2 | 7 |  | list<T> too long |
| `00584300` | 2888 | 1 | 19 |  | button:click, button:hover, checkbox:mark |
| `005c7730` | 2867 | 5 | 4 |  |  |
| `00470d80` | 2847 | 1 | 8 |  | list<T> too long |
| `005a9f90` | 2834 | 6 | 9 |  |  |
| `004a5710` | 2785 | 1 | 19 |  | description:, details:, resource1.dat |
| `00633e70` | 2766 | 3 | 3 |  |  |
| `005f7a60` | 2762 | 1 | 7 |  |  |
| `0063f3b0` | 2753 | 1 | 8 |  | vector<T> too long |
| `004dc8e0` | 2752 | 1 | 26 |  | list<T> too long |
| `004c8ae0` | 2647 | 1 | 50 |  | Could not initialize Direct3D. Please ma, Could not initialize DirectInput8. Pleas, Could not initialize XAudio2. Please mak |
| `00427ce0` | 2616 | 1 | 19 |  | leftbutton, rightbutton |
| `0062c5b0` | 2579 | 5 | 3 |  |  |
| `004bc760` | 2556 | 1 | 6 |  |  |
| `004c04c0` | 2548 | 0 | 6 | orphan |  |
| `0063e020` | 2526 | 2 | 6 |  |  |
| `0058c440` | 2525 | 10 | 1 |  |  |
| `0062bb90` | 2518 | 6 | 5 |  |  |
| `004bbd80` | 2502 | 2 | 6 |  |  |
| `0044d790` | 2431 | 1 | 5 |  |  |
| `006d59d0` | 2381 | 1 | 8 |  |  |
| `00469c10` | 2309 | 1 | 30 |  |  |
| `00698500` | 2300 | 0 | 12 | orphan | COMMENT, ENCODING, STARTCHAR |
| `006d6550` | 2236 | 0 | 7 | orphan |  |
| `0066c050` | 2197 | 2 | 3 |  |  |
| `00543120` | 2184 | 1 | 13 |  | localtime, minute, month |
| `00631520` | 2184 | 5 | 3 |  |  |
| `00631db0` | 2184 | 5 | 3 |  |  |
| `004ce6e0` | 2183 | 1 | 7 |  | antiAliasing, cameraSmoothness, cameraSpeed |
| `00630be0` | 2168 | 7 | 4 |  | list<T> too long |
| `00635760` | 2168 | 1 | 4 |  | list<T> too long |
| `006d3c20` | 2146 | 1 | 5 |  |  |
| `0063b360` | 2109 | 1 | 2 |  |  |
| `004da850` | 2102 | 1 | 13 |  |  |
| `0043d1a0` | 2086 | 11 | 1 |  |  |
| `0062cfd0` | 2066 | 2 | 1 |  |  |
| `00671750` | 2062 | 1 | 3 |  |  |
| `00683f00` | 2046 | 1 | 27 |  | Node.child, Node.display, Node.flags |
| `006cb810` | 2030 | 1 | 16 |  |  |
| `005cb600` | 2020 | 1 | 10 |  |  |
| `005d7f60` | 2010 | 1 | 6 |  |  |
| `005ad320` | 1983 | 1 | 13 |  |  |
| `00686820` | 1976 | 1 | 19 |  | Texture.compressedPixels, Texture.format.horizontalWrap, Texture.format.maxFilter |
| `00603230` | 1958 | 1 | 21 |  |  |
| `0065f3d0` | 1958 | 1 | 28 |  |  |
| `0059f0a0` | 1952 | 2 | 5 |  |  |
| `004a62c0` | 1934 | 1 | 14 |  | resource1.dat, specialization:mage:fire, specialization:mage:water |
| `005d9ad0` | 1926 | 1 | 16 |  | list<T> too long |
| `005effa0` | 1920 | 3 | 9 |  |  |
| `00634dd0` | 1910 | 3 | 4 |  |  |
| `0066b200` | 1893 | 3 | 16 |  | list<T> too long, vector<T> too long |
| `006d94c0` | 1887 | 1 | 0 |  |  |
| `005c56e0` | 1822 | 5 | 12 |  |  |
| `006c6ce0` | 1813 | 2 | 12 |  |  |
| `0059a0e0` | 1805 | 3 | 3 |  |  |
| `005cbe00` | 1802 | 1 | 9 |  |  |
| `006a1010` | 1780 | 0 | 6 | orphan |  |
| `00584fb0` | 1778 | 1 | 1 |  |  |
| `006ae0f0` | 1770 | 0 | 10 | orphan |  |
| `006998b0` | 1752 | 0 | 16 | orphan | COMMENT, FONTBOUNDINGBOX, FONT_ASCENT |
| `004456a0` | 1740 | 1 | 4 |  |  |
| `004ab190` | 1736 | 1 | 2 |  |  |
| `004cdaa0` | 1726 | 1 | 18 |  |  |
| `004cd3e0` | 1725 | 0 | 13 | orphan |  |
| `004e4350` | 1718 | 2 | 10 |  | $creature, $item, $name |
| `006d21b0` | 1714 | 1 | 8 |  |  |
| `004882e0` | 1708 | 1 | 15 |  | innkeeper |
| `0044cdb0` | 1681 | 1 | 13 |  | list<T> too long |
| `006260c0` | 1656 | 1 | 18 |  |  |
| `00469590` | 1650 | 1 | 15 |  |  |
| `005d9460` | 1642 | 2 | 22 |  | list<T> too long |
| `006d0bb0` | 1639 | 2 | 0 |  |  |
| `004816f0` | 1568 | 0 | 18 | orphan |  |
| `006d4e80` | 1557 | 1 | 1 |  |  |
| `006df570` | 1555 | 1 | 2 |  |  |
| `006bcfa0` | 1536 | 0 | 5 | orphan | .notdef |
| `00658630` | 1530 | 1 | 15 |  |  |
| `0063ad70` | 1510 | 1 | 2 |  |  |
| `005c7140` | 1509 | 3 | 7 |  |  |
| `006deed0` | 1494 | 1 | 6 |  |  |
| `00682a80` | 1487 | 9 | 13 |  | Attribute.sequence.key, Attribute.sequence.key.frame, Attribute.sequence.key.smoothness |
| `005c4800` | 1482 | 13 | 4 |  |  |
| `005a52e0` | 1481 | 3 | 19 |  | Save/world_ |
| `0043a500` | 1478 | 2 | 13 |  | list<T> too long |
| `00654ff0` | 1470 | 1 | 12 |  |  |
| `005f6e20` | 1445 | 1 | 7 |  |  |
| `005f9620` | 1426 | 8 | 5 |  |  |
| `004d7e70` | 1415 | 1 | 7 |  |  |
| `0059cff0` | 1395 | 2 | 4 |  |  |
| `0051ec50` | 1390 | 0 | 9 | orphan | Human, string or blob too big |
| `00674970` | 1378 | 1 | 2 |  |  |
| `005ef040` | 1376 | 8 | 2 |  |  |
| `005f0720` | 1376 | 1 | 2 |  |  |
| `0069dd70` | 1374 | 0 | 2 | orphan |  |
| `00687560` | 1366 | 7 | 14 |  | Widget.bindMatrix, Widget.bindPos, Widget.bindSize |
| `005bf7c0` | 1356 | 1 | 7 |  |  |
| `00638610` | 1354 | 6 | 10 |  |  |
| `00683870` | 1339 | 1 | 14 |  | GenericShape.name, GenericShape.position, GenericShape.size |
| `00657f80` | 1338 | 1 | 26 |  |  |
| `005f8e10` | 1325 | 12 | 2 |  | itembox |
| `0069a1e0` | 1310 | 0 | 9 | orphan | AVERAGE_WIDTH, CHARSET_ENCODING, CHARSET_REGISTRY |
| `0063ea00` | 1307 | 2 | 4 |  |  |
| `00653ad0` | 1307 | 9 | 10 |  |  |
| `005a4af0` | 1303 | 2 | 16 |  | mission, monster |
| `004772b0` | 1296 | 1 | 15 |  |  |
| `00605420` | 1295 | 3 | 15 |  |  |
| `0065b2a0` | 1271 | 1 | 16 |  | list<T> too long |
| `006c5e40` | 1269 | 2 | 11 |  |  |
| `004c1510` | 1265 | 1 | 2 |  |  |
| `004878a0` | 1262 | 5 | 26 |  | wrote  |
| `005d7a70` | 1252 | 1 | 4 |  |  |
| `005a03d0` | 1244 | 1 | 5 |  | list<T> too long |
| `006cd130` | 1240 | 2 | 1 |  |  |
| `005f51e0` | 1237 | 6 | 6 |  |  |
| `004690a0` | 1234 | 1 | 16 |  |  |
| `00674160` | 1229 | 2 | 13 |  | list<T> too long, vector<T> too long |
| `006ca2f0` | 1229 | 0 | 4 | orphan |  |
| `005c4dd0` | 1228 | 13 | 2 |  |  |
| `00683270` | 1227 | 1 | 17 |  | Display.blurRadius, Display.clipping, Display.fillColor |
| `004a14c0` | 1224 | 4 | 10 |  |  |
| `005ef8f0` | 1212 | 1 | 1 |  |  |
| `00654900` | 1212 | 1 | 11 |  |  |
| `006b1190` | 1209 | 1 | 7 |  |  |
| `00625c00` | 1204 | 2 | 16 |  |  |
| `0066b9c0` | 1200 | 1 | 2 |  |  |
| `005a6550` | 1195 | 1 | 10 |  | antis, mala, remo |
| `00625130` | 1183 | 2 | 12 |  |  |
| `0063ef20` | 1168 | 1 | 3 |  |  |
| `006751d0` | 1165 | 0 | 3 | orphan |  |
| `006b2a70` | 1165 | 1 | 8 |  |  |
| `00654240` | 1155 | 1 | 20 |  |  |
| `00540b70` | 1140 | 3 | 16 |  | BINARY, MATCH, NOCASE |
| `004e65a0` | 1139 | 1 | 11 |  |  |
| `005eea60` | 1137 | 2 | 4 |  |  |
| `004a19d0` | 1134 | 1 | 9 |  | vector<T> too long |
| `0065ded0` | 1130 | 1 | 7 |  |  |
| `004a1e50` | 1128 | 1 | 10 |  | list<T> too long |
| `0063bba0` | 1111 | 1 | 1 |  |  |
| `006c5630` | 1096 | 2 | 10 |  | OpticalSize, Slant, Weight |
| `006d7fc0` | 1094 | 1 | 0 |  |  |
| `00686ff0` | 1092 | 1 | 16 |  | Transformation.deformation, Transformation.name, Transformation.pivot |
| `005c52a0` | 1085 | 1 | 3 |  |  |
| `005c9b30` | 1083 | 1 | 8 |  |  |
| `005f4da0` | 1077 | 3 | 6 |  |  |
| `004ccfa0` | 1074 | 0 | 12 | orphan |  |
| `0062d7f0` | 1072 | 7 | 3 |  |  |
| `006721d0` | 1064 | 1 | 3 |  |  |
| `0043bc00` | 1054 | 4 | 1 |  |  |
| `006afcd0` | 1054 | 0 | 1 | orphan | .notdef |
| `0062b510` | 1036 | 13 | 3 |  |  |
| `00672600` | 1022 | 2 | 2 |  |  |
| `0059cbf0` | 1013 | 1 | 5 |  |  |
| `005953a0` | 1012 | 2 | 13 |  |  |
| `006db930` | 1000 | 1 | 0 |  |  |
| `006b7030` | 999 | 0 | 14 | orphan |  |
| `0063a980` | 998 | 1 | 1 |  |  |
| `006af8e0` | 998 | 0 | 2 | orphan |  |
| `006bfc40` | 994 | 0 | 3 | orphan |  |
| `004809a0` | 971 | 1 | 24 |  |  |
| `004c1bb0` | 964 | 1 | 13 |  | downbutton, scrollbutton, upbutton |
| `00698130` | 961 | 1 | 8 |  | COMMENT, DEFAULT_CHAR, FONT_ASCENT |
| `0040cc40` | 959 | 1 | 11 |  |  |
| `0065bc70` | 958 | 9 | 9 |  |  |
| `00625670` | 957 | 2 | 17 |  |  |
| `006bda20` | 956 | 1 | 7 |  | .notdef |
| `00424f30` | 955 | 8 | 0 |  |  |
| `00527740` | 955 | 2 | 15 |  | c0e09560d26f0a6456be9dd3447f5311eb4f238f, cannot open file at line %d of [%.10s], delayed %dms for lock/sharing conflict |
| `004709c0` | 954 | 1 | 16 |  | You can't carry more of these items.
 |
| `0044e340` | 953 | 1 | 2 |  |  |
| `005ee0f0` | 952 | 1 | 0 |  |  |
| `00466050` | 950 | 4 | 3 |  |  |
| `00486d00` | 949 | 5 | 5 |  | invalid string position, string too long |
| `006d3840` | 946 | 1 | 5 |  |  |
| `006570c0` | 935 | 1 | 15 |  |  |
| `005f7400` | 931 | 1 | 3 |  |  |
| `0068ff90` | 931 | 1 | 0 |  |  |
| `006bd5a0` | 930 | 1 | 3 |  | CharStrings, FontDirectory, Notice |
| `006c5a90` | 930 | 2 | 10 |  |  |
| `006d3250` | 927 | 0 | 2 | orphan |  |
| `006d1570` | 924 | 1 | 8 |  |  |
| `006b4c60` | 921 | 0 | 10 | orphan |  |
| `0047f3c0` | 915 | 1 | 5 |  |  |
| `004a23d0` | 912 | 5 | 21 |  | online_ |
| `005232d0` | 904 | 1 | 1 |  | create, explain, temporary |
| `005c1720` | 899 | 1 | 0 |  |  |
| `005c1b60` | 899 | 1 | 0 |  |  |
| `0043caa0` | 898 | 10 | 1 |  |  |
| `00662300` | 897 | 2 | 1 |  |  |
| `00412400` | 890 | 3 | 0 |  |  |
| `0042c080` | 889 | 12 | 7 |  |  |
| `0069bc10` | 887 | 0 | 6 | orphan |  |
| `00595010` | 882 | 1 | 10 |  |  |
| `0044b040` | 876 | 6 | 3 |  |  |
| `00594c80` | 876 | 2 | 10 |  |  |
| `004821a0` | 873 | 0 | 18 | orphan | edit |
| `00487520` | 873 | 5 | 26 |  |  |
| `00658fa0` | 872 | 1 | 16 |  |  |
| `006d8990` | 871 | 1 | 2 |  |  |
| `004d8900` | 869 | 1 | 5 |  |  |
| `006bb400` | 869 | 1 | 8 |  | eexec |
| `006d2d60` | 868 | 1 | 1 |  |  |
| `005df600` | 864 | 2 | 6 |  |  |
| `00636190` | 862 | 1 | 1 |  |  |
| `004c7250` | 858 | 4 | 0 |  |  |
| `00634a70` | 857 | 1 | 2 |  |  |
| `00659940` | 857 | 6 | 14 |  |  |
| `00543be0` | 856 | 2 | 2 |  |  |
| `00653770` | 847 | 4 | 23 |  | list<T> too long, read  |
| `006a4490` | 847 | 1 | 3 |  |  |
| `006050b0` | 845 | 3 | 17 |  |  |
| `006ad550` | 844 | 1 | 11 |  | AVERAGE_WIDTH, CHARSET_ENCODING, CHARSET_REGISTRY |
| `0059c890` | 842 | 1 | 5 |  |  |
| `006d4b20` | 842 | 1 | 2 |  |  |
| `006278a0` | 841 | 6 | 6 |  |  |
| `00658c40` | 840 | 2 | 14 |  |  |
| `0065fb80` | 837 | 1 | 12 |  |  |
| `006d4490` | 834 | 1 | 5 |  |  |
| `005c2a50` | 833 | 1 | 2 |  |  |
| `005c3010` | 833 | 1 | 2 |  |  |
| `006b6a80` | 833 | 1 | 7 |  |  |
| `0065b8f0` | 831 | 2 | 9 |  |  |
| `004563d0` | 830 | 1 | 2 |  |  |
| `006c8910` | 830 | 0 | 5 | orphan |  |
| `006e0390` | 828 | 1 | 2 |  |  |
| `006b3400` | 825 | 0 | 7 | orphan |  |
| `005f8ad0` | 817 | 6 | 6 |  |  |
| `006de900` | 812 | 0 | 5 | orphan |  |
| `005260e0` | 811 | 0 | 4 | orphan | string or blob too big |
| `006b4090` | 811 | 1 | 8 |  |  |
| `0059f850` | 806 | 1 | 5 |  |  |
| `0065fef0` | 804 | 1 | 11 |  |  |
| `00626740` | 803 | 1 | 22 |  |  |
| `0069f720` | 803 | 0 | 1 | orphan |  |
| `006cac40` | 803 | 0 | 4 | orphan |  |
| `005c3360` | 802 | 1 | 2 |  |  |
| `00659320` | 802 | 1 | 14 |  |  |
| `006637a0` | 802 | 1 | 11 |  | vector<T> too long |
| `006af5b0` | 802 | 0 | 3 | orphan | .notdef, ExpertEncoding, ISOLatin1Encoding |
| `004015c0` | 799 | 6 | 6 |  |  |
| `0057fb50` | 796 | 1 | 12 |  | %s-shm, winOpenShm |
| `006d0800` | 794 | 0 | 0 | orphan |  |
| `00689f30` | 793 | 3 | 2 |  |  |
| `00626ab0` | 791 | 1 | 4 |  |  |
| `006a4eb0` | 789 | 1 | 4 |  |  |
| `006bf050` | 789 | 0 | 6 | orphan | Black, Regular, postscript-cmaps |
| `00546ad0` | 787 | 0 | 6 | orphan | GROUP, ORDER, a GROUP BY clause is required before HAV |
| `0062de60` | 783 | 9 | 3 |  |  |
| `006b6750` | 779 | 1 | 10 |  |  |
| `006e0ec0` | 778 | 0 | 2 | orphan |  |
| `006ddaa0` | 774 | 0 | 3 | orphan |  |
| `005a5f60` | 770 | 0 | 4 | orphan |  |
| `00624c70` | 770 | 3 | 15 |  |  |
| `00520ea0` | 764 | 0 | 13 | orphan | %s\%s, GetFullPathNameA1, GetFullPathNameA2 |
| `006dc2b0` | 763 | 0 | 3 | orphan |  |
| `0059aba0` | 762 | 1 | 2 |  |  |
| `0062f2d0` | 757 | 1 | 3 |  |  |
| `00679740` | 757 | 1 | 3 |  |  |
| `00483e70` | 756 | 0 | 12 | orphan |  |
| `0053b1b0` | 754 | 1 | 11 |  | %s\etilqs_, abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMN, ilqs_ |
| `00650b00` | 754 | 1 | 11 |  |  |
| `006e0bd0` | 752 | 2 | 2 |  |  |
| `006ac920` | 751 | 1 | 9 |  |  |
| `005cade0` | 749 | 3 | 2 |  |  |
| `006b24c0` | 746 | 1 | 8 |  |  |
| `00523dd0` | 744 | 0 | 4 | orphan |  |
| `006d2a60` | 743 | 1 | 1 |  |  |
| `006aabd0` | 742 | 0 | 1 | orphan |  |
| `006a1e90` | 740 | 0 | 9 | orphan |  |
| `00671450` | 739 | 1 | 7 |  |  |
| `006b2f40` | 737 | 1 | 2 |  |  |
| `0066f380` | 736 | 2 | 0 |  |  |
| `005f9340` | 731 | 5 | 6 |  |  |
| `0067fde0` | 731 | 1 | 10 |  | ArrayAttribute.frame, ArrayAttribute.size, Attribute.sequence |
| `006800d0` | 731 | 1 | 10 |  | ArrayAttribute.frame, ArrayAttribute.size, Attribute.sequence |
| `006803c0` | 731 | 1 | 10 |  | ArrayAttribute.frame, ArrayAttribute.size, Attribute.sequence |
| `0066eef0` | 728 | 2 | 0 |  |  |
| `006d1c20` | 728 | 1 | 3 |  |  |
| `006cfa70` | 727 | 1 | 4 |  |  |
| `006ca960` | 724 | 0 | 1 | orphan |  |
| `00529de0` | 721 | 0 | 4 | orphan |  |
| `005cb0d0` | 721 | 2 | 2 |  |  |
| `0046ebe0` | 717 | 15 | 9 |  |  |
| `00456710` | 715 | 1 | 1 |  |  |
| `004aabd0` | 715 | 1 | 1 |  |  |
| `0059aeb0` | 715 | 1 | 9 |  |  |
| `006b3970` | 712 | 1 | 12 |  | %!PS-Adobe-3.0 Resource-CIDFont, (Hex), /sfnts |
| `0069e550` | 708 | 0 | 1 | orphan |  |
| `004aaeb0` | 707 | 1 | 1 |  |  |
| `006b5650` | 705 | 3 | 1 |  |  |
| `00446bb0` | 704 | 2 | 5 |  |  |
| `0043dc60` | 702 | 1 | 4 |  |  |
| `0049d650` | 696 | 3 | 15 |  |  |
| `004806c0` | 695 | 3 | 18 |  |  |
| `006de000` | 695 | 1 | 2 |  |  |
| `00653360` | 694 | 4 | 9 |  |  |
| `006c9ca0` | 692 | 0 | 4 | orphan |  |
| `0064ac00` | 691 | 4 | 2 |  |  |
| `006a2820` | 691 | 2 | 14 |  |  |
| `00684970` | 689 | 1 | 10 |  | Button.type, ScrollButton.direction |
| `00684c30` | 689 | 1 | 10 |  | Button.type, ScrollSlider.direction |
| `006da1f0` | 687 | 1 | 6 |  |  |
| `006905a0` | 685 | 1 | 2 |  |  |
| `004778b0` | 681 | 1 | 7 |  | invalid map/set<T> iterator |
| `006a8800` | 680 | 0 | 7 | orphan |  |
| `00588250` | 678 | 1 | 5 |  |  |
| `00636560` | 678 | 7 | 4 |  |  |
| `006339c0` | 677 | 1 | 7 |  | invalid map/set<T> iterator |
| `006b27c0` | 675 | 1 | 7 |  |  |
| `00488030` | 673 | 1 | 10 |  | There is nothing special. |
| `006504e0` | 673 | 6 | 10 |  |  |
| `006cb340` | 673 | 0 | 4 | orphan |  |
| `0043e6a0` | 669 | 4 | 1 |  |  |
| `006ccb70` | 668 | 2 | 5 |  |  |
| `006a7070` | 667 | 2 | 5 |  |  |
| `005fab40` | 665 | 1 | 1 |  |  |
| `004cef80` | 663 | 1 | 6 |  | antiAliasing , cameraSmoothness , cameraSpeed  |
| `00447310` | 662 | 4 | 1 |  |  |
| `00639530` | 660 | 1 | 7 |  | invalid map/set<T> iterator |
| `004e4000` | 657 | 1 | 8 |  | invalid map/set<T> iterator |
| `005ee7a0` | 656 | 1 | 9 |  | list<T> too long |
| `005a5cb0` | 652 | 2 | 5 |  | list<T> too long |
| `006de610` | 650 | 0 | 2 | orphan |  |
| `006b0770` | 648 | 0 | 6 | orphan | Regular, postscript-cmaps, psaux |
| `00481d30` | 647 | 0 | 11 | orphan | Save\map_, Save\world_ |
| `004e3900` | 647 | 1 | 7 |  | invalid map/set<T> iterator |
| `0059c550` | 647 | 1 | 7 |  | invalid map/set<T> iterator |
| `00661ae0` | 647 | 1 | 7 |  | invalid map/set<T> iterator |
| `0040c850` | 645 | 1 | 7 |  | invalid map/set<T> iterator |
| `0043f100` | 645 | 1 | 7 |  | invalid map/set<T> iterator |
| `006d12e0` | 644 | 7 | 5 |  |  |
| `006685d0` | 643 | 1 | 9 |  | vector<T> too long |
| `006dafa0` | 643 | 2 | 3 |  |  |
| `005fa750` | 641 | 1 | 0 |  |  |
| `006dac60` | 640 | 0 | 2 | orphan |  |
| `0059ff60` | 639 | 2 | 1 |  | Material, MaterialBone, MaterialCopper |
| `0069aac0` | 639 | 2 | 2 |  |  |
| `00445020` | 637 | 2 | 2 |  |  |
| `0051dff0` | 637 | 0 | 11 | orphan | string or blob too big |
| `0043c100` | 634 | 5 | 3 |  |  |
| `004d8c70` | 631 | 1 | 2 |  |  |
| `004e7290` | 627 | 4 | 10 |  |  |

**Total unnamed non-library functions: 4056** (56 of the listed 400 are orphans)
