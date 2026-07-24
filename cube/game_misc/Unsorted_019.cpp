// Unsorted_019 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_019.h"

/* FUN_006ca2c0 @ 006ca2c0  kind=gamemisc  attributed-by=none  size=35 */

void FUN_006ca2c0(void)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = FUN_006ca150(*(undefined1 *)(unaff_EDI + 0xc),*(undefined1 *)(unaff_ESI + 0xc));
  *(int *)(unaff_ESI + 8) = iVar1 + *(int *)(unaff_EDI + 8);
  return;
}


/* FUN_006ca2f0 @ 006ca2f0  kind=gamemisc  attributed-by=none  size=1229 */

byte * FUN_006ca2f0(int param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  byte *local_1c;
  int local_18;
  int local_10;
  
  iVar7 = param_1 + 0x30 + param_2 * 0x1c;
  pbVar4 = *(byte **)(iVar7 + 0x14);
  pbVar10 = pbVar4 + *(int *)(iVar7 + 0xc) * 0x30;
  local_1c = (byte *)0x0;
  local_10 = 0;
  if (param_2 == 1) {
    pbVar13 = pbVar4;
    if (pbVar4 < pbVar10) {
      do {
        if ((pbVar13[0xc] & 4) == 0) {
          iVar7 = *(int *)(pbVar13 + 0x14);
          pbVar14 = *(byte **)(pbVar13 + 0x18);
          pbVar8 = pbVar14;
          pbVar18 = pbVar13;
          if (((iVar7 != 0) ||
              ((pbVar14 != (byte *)0x0 &&
               (iVar7 = *(int *)(pbVar14 + 0x14), pbVar8 = pbVar13, pbVar18 = pbVar14, iVar7 != 0)))
              ) && (pbVar18 != (byte *)0x0)) {
            uVar5 = *(undefined4 *)(iVar7 + 8);
            pbVar18[0xc] = pbVar18[0xc] | 4;
            *(undefined4 *)(pbVar18 + 8) = uVar5;
            if ((pbVar8 != (byte *)0x0) && (*(int *)(pbVar8 + 0x14) == 0)) {
              FUN_006ca2c0(1);
              pbVar8[0xc] = pbVar8[0xc] | 4;
            }
            if (local_1c == (byte *)0x0) {
              local_1c = pbVar13;
            }
          }
        }
        pbVar13 = pbVar13 + 0x30;
      } while (pbVar13 < pbVar10);
      goto LAB_006ca3a3;
    }
  }
  else {
LAB_006ca3a3:
    if (pbVar4 < pbVar10) {
      pbVar13 = pbVar4 + 0xc;
      do {
        bVar2 = *pbVar13;
        if ((bVar2 & 4) == 0) {
          iVar7 = *(int *)(pbVar13 + 0xc);
          if (iVar7 == 0) {
            local_10 = local_10 + 1;
          }
          else if (*(int *)(iVar7 + 0x14) == 0) {
            if (local_1c == (byte *)0x0) {
              iVar9 = *(int *)(pbVar13 + -8);
              iVar15 = *(int *)(iVar7 + 4);
              iVar6 = FUN_006ca150(bVar2,*(undefined1 *)(iVar7 + 0xc));
              if (iVar6 < 0x41) {
                iVar11 = 0x20;
                local_18 = 0x20;
              }
              else {
                iVar11 = 0x26;
                local_18 = 0x1a;
              }
              if (iVar6 < 0x60) {
                iVar9 = (iVar15 - iVar9 >> 1) + iVar9;
                uVar12 = iVar9 + 0x20U & 0xffffffc0;
                iVar9 = iVar9 - uVar12;
                iVar15 = iVar9 + iVar11;
                if (iVar15 < 0) {
                  iVar15 = -iVar15;
                }
                iVar9 = iVar9 - local_18;
                if (iVar9 < 0) {
                  iVar9 = -iVar9;
                }
                if (iVar15 < iVar9) {
                  local_18 = -iVar11;
                }
                iVar9 = (uVar12 + local_18) - iVar6 / 2;
                *(int *)(pbVar13 + -4) = iVar9;
                *(int *)(iVar7 + 8) = iVar9 + iVar6;
              }
              else {
                *(uint *)(pbVar13 + -4) = iVar9 + 0x20U & 0xffffffc0;
              }
              *pbVar13 = *pbVar13 | 4;
              local_1c = pbVar13 + -0xc;
              FUN_006ca2c0(param_2);
            }
            else {
              iVar9 = *(int *)(pbVar13 + -8) + (*(int *)(local_1c + 8) - *(int *)(local_1c + 4));
              iVar16 = *(int *)(iVar7 + 4) - *(int *)(pbVar13 + -8);
              uVar3 = *(undefined1 *)(iVar7 + 0xc);
              iVar6 = iVar16 >> 1;
              iVar11 = iVar6 + iVar9;
              iVar15 = FUN_006ca150(bVar2,uVar3);
              if ((*(byte *)(iVar7 + 0xc) & 4) == 0) {
                if (iVar15 < 0x60) {
                  uVar12 = iVar11 + 0x20U & 0xffffffc0;
                  if (iVar15 < 0x41) {
                    iVar9 = 0x20;
                    iVar6 = 0x20;
                  }
                  else {
                    iVar6 = 0x26;
                    iVar9 = 0x1a;
                  }
                  iVar16 = (iVar6 - uVar12) + iVar11;
                  if (iVar16 < 0) {
                    iVar16 = -iVar16;
                  }
                  iVar11 = (iVar11 - iVar9) - uVar12;
                  if (iVar11 < 0) {
                    iVar11 = -iVar11;
                  }
                  if (iVar16 < iVar11) {
                    iVar9 = -iVar6;
                  }
                  *(uint *)(pbVar13 + -4) = (uVar12 + iVar9) - iVar15 / 2;
                  *(uint *)(iVar7 + 8) = iVar15 / 2 + uVar12 + iVar9;
                }
                else {
                  iVar11 = FUN_006ca150(bVar2,uVar3);
                  uVar12 = iVar9 + 0x20U & 0xffffffc0;
                  iVar6 = (iVar11 >> 1) - (iVar6 + iVar9);
                  iVar15 = iVar6 + uVar12;
                  if (iVar15 < 0) {
                    iVar15 = -iVar15;
                  }
                  uVar17 = (iVar16 + 0x20 + iVar9 & 0xffffffc0U) - iVar11;
                  iVar6 = iVar6 + uVar17;
                  if (iVar6 < 0) {
                    iVar6 = -iVar6;
                  }
                  if (iVar6 <= iVar15) {
                    uVar12 = uVar17;
                  }
                  *(uint *)(pbVar13 + -4) = uVar12;
                  *(uint *)(iVar7 + 8) = uVar12 + iVar11;
                }
              }
              else {
                *(int *)(pbVar13 + -4) = *(int *)(iVar7 + 8) - iVar15;
              }
              *pbVar13 = *pbVar13 | 4;
              *(byte *)(iVar7 + 0xc) = *(byte *)(iVar7 + 0xc) | 4;
              if ((pbVar4 < pbVar13 + -0xc) && (*(int *)(pbVar13 + -4) < *(int *)(pbVar13 + -0x34)))
              {
                *(int *)(pbVar13 + -4) = *(int *)(pbVar13 + -0x34);
              }
            }
          }
          else {
            FUN_006ca2c0(param_2);
            *pbVar13 = *pbVar13 | 4;
          }
        }
        pbVar14 = pbVar13 + 0x24;
        pbVar13 = pbVar13 + 0x30;
      } while (pbVar14 < pbVar10);
    }
  }
  pbVar13 = (byte *)(((int)pbVar10 - (int)pbVar4) * 0x2aaaaaab);
  iVar7 = ((int)pbVar10 - (int)pbVar4) / 0x30;
  if (param_2 == 0) {
    if (iVar7 == 6) {
      pbVar14 = pbVar4 + 0x60;
      pbVar13 = pbVar4 + 0xc0;
      pbVar8 = pbVar4;
    }
    else {
      if (iVar7 != 0xc) goto LAB_006ca67e;
      pbVar14 = pbVar4 + 0xf0;
      pbVar13 = pbVar4 + 0x1b0;
      pbVar8 = pbVar4 + 0x30;
    }
    iVar9 = (*(int *)(pbVar14 + 4) * 2 - *(int *)(pbVar13 + 4)) - *(int *)(pbVar8 + 4);
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    if (iVar9 < 8) {
      iVar9 = *(int *)(pbVar8 + 8) + *(int *)(pbVar14 + 8) * -2 + *(int *)(pbVar13 + 8);
      *(int *)(pbVar13 + 8) = *(int *)(pbVar13 + 8) - iVar9;
      if (*(int *)(pbVar13 + 0x18) != 0) {
        piVar1 = (int *)(*(int *)(pbVar13 + 0x18) + 8);
        *piVar1 = *piVar1 - iVar9;
      }
      if (iVar7 == 0xc) {
        *(int *)(pbVar4 + 0x188) = *(int *)(pbVar4 + 0x188) - iVar9;
        *(int *)(pbVar4 + 0x218) = *(int *)(pbVar4 + 0x218) - iVar9;
      }
      pbVar13[0xc] = pbVar13[0xc] | 4;
      pbVar13 = *(byte **)(pbVar13 + 0x18);
      if (pbVar13 != (byte *)0x0) {
        pbVar13[0xc] = pbVar13[0xc] | 4;
      }
    }
  }
LAB_006ca67e:
  if (((local_10 != 0) || (local_1c == (byte *)0x0)) && (pbVar4 < pbVar10)) {
    pbVar14 = pbVar4 + 0x1c;
    do {
      if ((pbVar14[-0x10] & 4) == 0) {
        if (*(int *)pbVar14 == 0) {
LAB_006ca6dc:
          if (local_1c == (byte *)0x0) {
            local_1c = pbVar14 + -0x1c;
            uVar12 = *(int *)(pbVar14 + -0x18) + 0x20U & 0xffffffc0;
          }
          else {
            for (pbVar13 = pbVar14 + -0x4c; (pbVar4 <= pbVar13 && ((pbVar13[0xc] & 4) == 0));
                pbVar13 = pbVar13 + -0x30) {
            }
            for (pbVar8 = pbVar14 + 0x14; (pbVar8 < pbVar10 && ((pbVar8[0xc] & 4) == 0));
                pbVar8 = pbVar8 + 0x30) {
            }
            if ((((pbVar13 < pbVar4) || (pbVar14 + -0x1c <= pbVar13)) || (pbVar10 <= pbVar8)) ||
               (pbVar8 <= pbVar14 + -0x1c)) {
              uVar12 = ((*(int *)(pbVar14 + -0x18) - *(int *)(local_1c + 4)) + 0x10U & 0xffffffe0) +
                       *(int *)(local_1c + 8);
            }
            else {
              if (*(int *)(pbVar8 + 4) != *(int *)(pbVar13 + 4)) {
                iVar7 = FUN_0068ea60(*(int *)(pbVar14 + -0x18) - *(int *)(pbVar13 + 4),
                                     *(int *)(pbVar8 + 8) - *(int *)(pbVar13 + 8),
                                     *(int *)(pbVar8 + 4) - *(int *)(pbVar13 + 4));
                *(int *)(pbVar14 + -0x14) = iVar7 + *(int *)(pbVar13 + 8);
                goto LAB_006ca77c;
              }
              uVar12 = *(uint *)(pbVar13 + 8);
            }
          }
          *(uint *)(pbVar14 + -0x14) = uVar12;
        }
        else {
          iVar7 = *(int *)(*(int *)pbVar14 + 4) - *(int *)(pbVar14 + -0x18);
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          if (0x4f < iVar7) goto LAB_006ca6dc;
          FUN_006cb1a0();
        }
LAB_006ca77c:
        pbVar14[-0x10] = pbVar14[-0x10] | 4;
        pbVar13 = pbVar14 + -0x1c;
        if ((pbVar4 < pbVar13) &&
           (pbVar13 = *(byte **)(pbVar14 + -0x44), *(int *)(pbVar14 + -0x14) < (int)pbVar13)) {
          *(byte **)(pbVar14 + -0x14) = pbVar13;
        }
        if (((pbVar14 + 0x14 < pbVar10) && ((pbVar14[0x20] & 4) != 0)) &&
           (pbVar13 = *(byte **)(pbVar14 + 0x1c), (int)pbVar13 < *(int *)(pbVar14 + -0x14))) {
          *(byte **)(pbVar14 + -0x14) = pbVar13;
        }
      }
      pbVar8 = pbVar14 + 0x14;
      pbVar14 = pbVar14 + 0x30;
    } while (pbVar8 < pbVar10);
  }
  return pbVar13;
}


/* FUN_006ca960 @ 006ca960  kind=gamemisc  attributed-by=none  size=724 */

void FUN_006ca960(void)

{
  int iVar1;
  int *piVar2;
  short *psVar3;
  int in_EAX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int in_ECX;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  
  piVar9 = *(int **)(in_EAX + 0x38 + in_ECX * 0x1c);
  iVar11 = *(int *)(in_EAX + 0x48 + in_ECX * 0x1c);
  iVar1 = *(int *)(*(int *)(in_EAX + 0x70) + 0x24) * 8;
  piVar14 = piVar9 + *(int *)(in_EAX + 0x30 + in_ECX * 0x1c) * 0xd;
  if (in_ECX == 0) {
    uVar15 = *(undefined4 *)(in_EAX + 4);
  }
  else {
    uVar15 = *(undefined4 *)(in_EAX + 0xc);
  }
  iVar4 = FUN_0068ec40(0xc0,uVar15);
  if (piVar9 < piVar14) {
    pcVar7 = (char *)((int)piVar9 + 1);
    do {
      if ((*(int *)(pcVar7 + 0x27) != *(int *)(pcVar7 + 0x2b)) && (*pcVar7 == iVar11)) {
        piVar5 = piVar9 + 1;
        do {
          if (((piVar5 + -1 != (int *)(pcVar7 + -1)) &&
              ((int)*(char *)((int)piVar5 + -3) + (int)*pcVar7 == 0)) &&
             (iVar12 = (int)*(short *)((int)piVar5 + -2) - (int)*(short *)(pcVar7 + 1), -1 < iVar12)
             ) {
            iVar16 = (int)*(short *)(pcVar7 + 3);
            if ((int)*(short *)(pcVar7 + 3) < (int)(short)*piVar5) {
              iVar16 = (int)(short)*piVar5;
            }
            iVar10 = (int)*(short *)(pcVar7 + 5);
            if ((int)*(short *)((int)piVar5 + 2) < (int)*(short *)(pcVar7 + 5)) {
              iVar10 = (int)*(short *)((int)piVar5 + 2);
            }
            iVar10 = iVar10 - iVar16;
            if ((int)(iVar1 + (iVar1 >> 0x1f & 0x7ffU)) >> 0xb <= iVar10) {
              iVar16 = iVar12 * 8;
              if ((iVar16 < *(int *)(pcVar7 + 0x1f) * 9) &&
                 ((iVar16 < *(int *)(pcVar7 + 0x1f) * 7 || (*(int *)(pcVar7 + 0x23) < iVar10)))) {
                *(int *)(pcVar7 + 0x1f) = iVar12;
                *(int *)(pcVar7 + 0x23) = iVar10;
                *(int **)(pcVar7 + 0x13) = piVar5 + -1;
              }
              if ((iVar16 < piVar5[7] * 9) && ((iVar16 < piVar5[7] * 7 || (piVar5[8] < iVar10)))) {
                piVar5[8] = iVar10;
                piVar5[7] = iVar12;
                piVar5[4] = (int)(pcVar7 + -1);
              }
            }
          }
          piVar2 = piVar5 + 0xc;
          piVar5 = piVar5 + 0xd;
        } while (piVar2 < piVar14);
      }
      piVar5 = (int *)(pcVar7 + 0x33);
      pcVar7 = pcVar7 + 0x34;
    } while (piVar5 < piVar14);
    if (piVar9 < piVar14) {
      piVar5 = piVar9 + 8;
      do {
        piVar2 = (int *)piVar5[-3];
        if ((((piVar2 != (int *)0x0) && ((int *)piVar2[5] == piVar5 + -8)) &&
            (*(short *)((int)piVar5 + -0x1e) < *(short *)((int)piVar2 + 2))) && (*piVar5 < iVar4)) {
          psVar13 = (short *)((int)piVar9 + 2);
          do {
            if (((*psVar13 <= *(short *)((int)piVar5 + -0x1e)) &&
                (piVar5 + -8 != (int *)(psVar13 + -1))) &&
               ((psVar3 = *(short **)(psVar13 + 9), psVar3 != (short *)0x0 &&
                (*(int **)(psVar3 + 10) == (int *)(psVar13 + -1))))) {
              if ((*(short *)((int)piVar2 + 2) <= psVar3[1]) &&
                 ((*(short *)((int)piVar5 + -0x1e) != *psVar13 ||
                  (*(short *)((int)piVar2 + 2) != psVar3[1])))) {
                iVar11 = *(int *)(psVar13 + 0xf);
                if ((*piVar5 < iVar11) &&
                   (iVar1 = *piVar5 * 4, iVar1 - iVar11 != 0 && iVar11 <= iVar1)) {
                  if (piVar5[1] < *(int *)(psVar13 + 0x11) * 3) {
                    piVar2[5] = 0;
                    piVar5[-3] = 0;
                    break;
                  }
                  piVar8 = piVar9 + 5;
                  iVar11 = (uint)((int)piVar14 + (-1 - (int)piVar9)) / 0x34 + 1;
                  do {
                    piVar6 = piVar2;
                    if ((short *)*piVar8 == psVar13 + -1) {
LAB_006caba7:
                      piVar8[1] = (int)piVar6;
                      *piVar8 = 0;
                    }
                    else if ((short *)*piVar8 == psVar3) {
                      piVar6 = piVar5 + -8;
                      goto LAB_006caba7;
                    }
                    piVar8 = piVar8 + 0xd;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                }
              }
            }
            piVar8 = (int *)(psVar13 + 0x19);
            psVar13 = psVar13 + 0x1a;
          } while (piVar8 < piVar14);
        }
        piVar2 = piVar5 + 5;
        piVar5 = piVar5 + 0xd;
      } while (piVar2 < piVar14);
    }
  }
  if (piVar9 < piVar14) {
    piVar9 = piVar9 + 5;
    do {
      iVar11 = *piVar9;
      if ((iVar11 != 0) &&
         (*(int *)(iVar11 + 0x1c) = *(int *)(iVar11 + 0x1c) + 1,
         *(int **)(iVar11 + 0x14) != piVar9 + -5)) {
        *piVar9 = 0;
        if ((*(int *)(iVar11 + 0x20) < iVar4) || (piVar9[3] < *(int *)(iVar11 + 0x20) * 4)) {
          piVar9[1] = *(int *)(iVar11 + 0x14);
        }
        else {
          *(int *)(iVar11 + 0x1c) = *(int *)(iVar11 + 0x1c) + -1;
        }
      }
      piVar5 = piVar9 + 8;
      piVar9 = piVar9 + 0xd;
    } while (piVar5 < piVar14);
  }
  return;
}


/* FUN_006cac40 @ 006cac40  kind=gamemisc  attributed-by=none  size=803 */

int FUN_006cac40(void)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  bool bVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  short *psVar11;
  undefined4 *in_ECX;
  undefined1 *puVar12;
  byte *pbVar13;
  short *psVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  short *psVar18;
  int iVar19;
  int local_30;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  short *local_14;
  short *local_4;
  
  piVar2 = in_ECX + in_EAX * 7 + 0xc;
  uVar5 = *in_ECX;
  psVar11 = (short *)piVar2[2];
  iVar8 = in_EAX * 0x18c + 0x28 + in_ECX[0x1c];
  iVar19 = *piVar2;
  piVar2[3] = 0;
  if (in_EAX == 0) {
    uVar17 = in_ECX[1];
  }
  else {
    uVar17 = in_ECX[3];
  }
  iVar7 = FUN_0068ebc0(*(undefined4 *)(iVar8 + 0xcc),uVar17);
  if (iVar7 < 0x11) {
    local_30 = *(int *)(iVar8 + 0xcc);
  }
  else {
    local_30 = FUN_0068ec40(0x10,uVar17);
  }
  if (psVar11 < psVar11 + iVar19 * 0x1a) {
    psVar14 = psVar11 + 1;
    do {
      local_14 = (short *)0x0;
      local_1c = 0xffff;
      if (piVar2[3] < 1) {
LAB_006cad9f:
        iVar8 = FUN_006c8710((int)*psVar14,(int)*(char *)((int)psVar14 + -1),uVar5,&local_4);
        psVar18 = local_4;
        if (iVar8 != 0) {
          return iVar8;
        }
        memset(local_4,0,0x30);
        psVar1 = psVar14 + -1;
        *(short **)(psVar18 + 0x14) = psVar1;
        *(short **)(psVar18 + 0x16) = psVar1;
        *psVar18 = *psVar14;
        uVar10 = FUN_0068ebc0((int)*psVar14,uVar17);
        *(undefined4 *)(psVar18 + 4) = uVar10;
        *(undefined4 *)(psVar18 + 2) = uVar10;
        *(short **)(psVar14 + 7) = psVar1;
        *(undefined1 *)((int)psVar18 + 0xd) = *(undefined1 *)((int)psVar14 + -1);
      }
      else {
        local_18 = piVar2[3];
        psVar18 = (short *)piVar2[5];
        do {
          if (*(char *)((int)psVar18 + 0xd) == *(char *)((int)psVar14 + -1)) {
            iVar8 = (int)*psVar14 - (int)*psVar18;
            if (iVar8 < 0) {
              iVar8 = -iVar8;
            }
            if ((iVar8 < local_30) && (iVar8 < local_1c)) {
              if (*(int *)(psVar14 + 9) != 0) {
                iVar9 = 0;
                iVar7 = *(int *)(psVar18 + 0x14);
                do {
                  if (*(int *)(iVar7 + 0x14) != 0) {
                    sVar3 = *(short *)(*(int *)(psVar14 + 9) + 2);
                    sVar4 = *(short *)(*(int *)(iVar7 + 0x14) + 2);
                    if (sVar4 < sVar3) {
                      iVar9 = (int)sVar3 - (int)sVar4;
                    }
                    else {
                      iVar9 = (int)sVar4 - (int)sVar3;
                    }
                    if (local_30 <= iVar9) goto LAB_006cad8a;
                  }
                  iVar7 = *(int *)(iVar7 + 0x10);
                } while (iVar7 != *(int *)(psVar18 + 0x14));
                if (local_30 <= iVar9) goto LAB_006cad8a;
              }
              local_1c = iVar8;
              local_14 = psVar18;
            }
          }
LAB_006cad8a:
          psVar18 = psVar18 + 0x18;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        if (local_14 == (short *)0x0) goto LAB_006cad9f;
        *(undefined4 *)(psVar14 + 7) = *(undefined4 *)(local_14 + 0x14);
        *(short **)(*(int *)(local_14 + 0x16) + 0x10) = psVar14 + -1;
        *(short **)(local_14 + 0x16) = psVar14 + -1;
      }
      psVar18 = psVar14 + 0x19;
      psVar14 = psVar14 + 0x1a;
    } while (psVar18 < psVar11 + iVar19 * 0x1a);
  }
  puVar16 = (undefined1 *)piVar2[5];
  puVar15 = puVar16 + piVar2[3] * 0x30;
  puVar12 = puVar16;
  if (puVar16 < puVar15) {
    do {
      iVar8 = *(int *)(puVar12 + 0x28);
      if (iVar8 != 0) {
        do {
          *(undefined1 **)(iVar8 + 0xc) = puVar12;
          iVar8 = *(int *)(iVar8 + 0x10);
        } while (iVar8 != *(int *)(puVar12 + 0x28));
      }
      puVar12 = puVar12 + 0x30;
    } while (puVar12 < puVar15);
    if (puVar16 < puVar15) {
      puVar16 = puVar16 + 0xc;
      do {
        pbVar13 = *(byte **)(puVar16 + 0x1c);
        local_24 = 0;
        local_28 = 0;
        do {
          if ((*pbVar13 & 1) == 0) {
            local_28 = local_28 + 1;
          }
          else {
            local_24 = local_24 + 1;
          }
          iVar8 = *(int *)(pbVar13 + 0x18);
          if ((iVar8 == 0) || (*(undefined1 **)(iVar8 + 0xc) == puVar16 + -0xc)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((*(int *)(pbVar13 + 0x14) != 0) || (bVar6)) {
            psVar11 = *(short **)(puVar16 + 0xc);
            iVar19 = *(int *)(pbVar13 + 0x14);
            if (bVar6) {
              psVar11 = *(short **)(puVar16 + 0x10);
              iVar19 = iVar8;
            }
            if (psVar11 == (short *)0x0) {
LAB_006caf09:
              psVar11 = *(short **)(iVar19 + 0xc);
            }
            else {
              iVar8 = (int)*(short *)(puVar16 + -0xc) - (int)*psVar11;
              if (iVar8 < 0) {
                iVar8 = -iVar8;
              }
              sVar3 = *(short *)(pbVar13 + 2);
              sVar4 = *(short *)(iVar19 + 2);
              if (sVar4 < sVar3) {
                iVar7 = (int)sVar3 - (int)sVar4;
              }
              else {
                iVar7 = (int)sVar4 - (int)sVar3;
              }
              if (iVar7 < iVar8) goto LAB_006caf09;
            }
            if (bVar6) {
              *(short **)(puVar16 + 0x10) = psVar11;
              *(byte *)(psVar11 + 6) = *(byte *)(psVar11 + 6) | 2;
            }
            else {
              *(short **)(puVar16 + 0xc) = psVar11;
            }
          }
          pbVar13 = *(byte **)(pbVar13 + 0x10);
        } while (pbVar13 != *(byte **)(puVar16 + 0x1c));
        *puVar16 = 0;
        if ((0 < local_24) && (local_28 <= local_24)) {
          *puVar16 = 1;
        }
        if ((*(int *)(puVar16 + 0x10) != 0) && (*(int *)(puVar16 + 0xc) != 0)) {
          *(undefined4 *)(puVar16 + 0x10) = 0;
        }
        puVar12 = puVar16 + 0x24;
        puVar16 = puVar16 + 0x30;
      } while (puVar12 < puVar15);
    }
  }
  return 0;
}


/* FUN_006cb000 @ 006cb000  kind=gamemisc  attributed-by=none  size=80 */

int FUN_006cb000(void)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  uint uVar2;
  int in_EDX;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0x62;
  iVar3 = in_EAX;
  if (0 < in_ECX) {
    piVar4 = (int *)(in_EDX + 4);
    do {
      iVar1 = in_EAX - *piVar4;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < iVar5) {
        iVar3 = *piVar4;
        iVar5 = iVar1;
      }
      piVar4 = piVar4 + 3;
      in_ECX = in_ECX + -1;
    } while (in_ECX != 0);
  }
  uVar2 = iVar3 + 0x20U & 0xffffffc0;
  if (in_EAX < iVar3) {
    if ((int)(uVar2 - 0x30) < in_EAX) {
      in_EAX = iVar3;
    }
  }
  else if (in_EAX < (int)(uVar2 + 0x30)) {
    return iVar3;
  }
  return in_EAX;
}


/* FUN_006cb050 @ 006cb050  kind=gamemisc  attributed-by=none  size=297 */

void FUN_006cb050(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(param_1 + 0x6c);
  if ((uVar1 & 4) != 0) {
    if (in_ECX == 1) {
      uVar1 = uVar1 & 2;
    }
    else {
      uVar1 = uVar1 & 1;
    }
    if (uVar1 != 0) {
      FUN_006cb000();
    }
  }
  return;
}


/* FUN_006cb180 @ 006cb180  kind=gamemisc  attributed-by=none  size=26 */

void __fastcall FUN_006cb180(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = FUN_006cb050(param_1);
  *(int *)(unaff_ESI + 8) = iVar1 + *(int *)(unaff_EDI + 8);
  return;
}


/* FUN_006cb1a0 @ 006cb1a0  kind=gamemisc  attributed-by=none  size=13 */

void FUN_006cb1a0(void)

{
  int in_EAX;
  int in_ECX;
  
  *(int *)(in_EAX + 8) = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) + *(int *)(in_EAX + 4);
  return;
}


/* FUN_006cb1b0 @ 006cb1b0  kind=gamemisc  attributed-by=none  size=399 */

uint FUN_006cb1b0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  int in_EDX;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *(uint *)(in_EDX + 0x6c) & 4;
  iVar7 = 0x40;
  if (uVar1 == 0) {
    if (((*(byte *)(param_1 + 0xc) & 1) == 0) || ((*(byte *)(param_2 + 0xc) & 1) == 0)) {
      iVar7 = (uint)(in_ECX == 1) * 2 + 0x3b;
    }
    else {
      iVar7 = (-(uint)(in_ECX != 1) & 0xfffffffa) + 0x37;
    }
  }
  iVar3 = *(int *)(param_2 + 4);
  iVar6 = *(int *)(param_1 + 4);
  uVar2 = FUN_006cb050();
  uVar5 = ((iVar3 + iVar6) / 2 - (int)uVar2 / 2) + param_3;
  iVar6 = uVar5 - (uVar5 & 0xffffffc0);
  iVar3 = (uVar5 + uVar2) - (uVar5 + uVar2 & 0xffffffc0);
  uVar9 = 0x40 - iVar6;
  uVar8 = 0;
  if ((iVar6 == 0) || (iVar3 == 0)) goto LAB_006cb2a9;
  if (iVar7 < (int)uVar2) {
    if ((0x3f < iVar7) ||
       ((((iVar6 < iVar7 && ((int)uVar9 < iVar7)) && (iVar3 < iVar7)) && (0x40 - iVar3 < iVar7)))) {
      uVar4 = uVar2 & 0x8000003f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
      }
      if ((int)uVar4 < 0x20) {
        if (((int)uVar9 <= (int)uVar4) || (iVar3 <= (int)uVar4)) goto LAB_006cb2a5;
      }
      else {
        uVar4 = 0x40 - iVar7;
      }
      uVar8 = iVar7 - iVar3;
      uVar10 = uVar9 - uVar4;
      if ((int)(iVar7 - uVar9) <= (int)uVar10) {
        uVar10 = -(iVar7 - uVar9);
      }
      if ((int)(iVar3 - uVar4) <= (int)uVar8) {
        uVar8 = -(iVar3 - uVar4);
      }
      if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) <=
          (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f))) {
        uVar8 = uVar10;
      }
      goto LAB_006cb2a9;
    }
  }
  else if (iVar3 < (int)uVar2) {
    uVar8 = uVar9;
    if (iVar3 < (int)uVar9) {
      uVar8 = -iVar3;
    }
    goto LAB_006cb2a9;
  }
LAB_006cb2a5:
  uVar8 = 0;
LAB_006cb2a9:
  if (uVar1 == 0) {
    if ((int)uVar8 < 0xf) {
      if ((int)uVar8 < -0xe) {
        uVar8 = 0xfffffff2;
      }
    }
    else {
      uVar8 = 0xe;
    }
  }
  iVar7 = uVar5 + uVar8;
  if (*(int *)(param_2 + 4) <= *(int *)(param_1 + 4)) {
    *(uint *)(param_1 + 8) = uVar2 + iVar7;
    *(int *)(param_2 + 8) = iVar7;
    return uVar8;
  }
  *(int *)(param_1 + 8) = iVar7;
  *(uint *)(param_2 + 8) = iVar7 + uVar2;
  return uVar8;
}


/* FUN_006cb340 @ 006cb340  kind=gamemisc  attributed-by=none  size=673 */

short * __cdecl FUN_006cb340(int param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  int in_EAX;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  byte *pbVar12;
  undefined4 local_8;
  short *local_4;
  
  iVar4 = param_1;
  iVar10 = in_EAX + 0x30 + param_1 * 0x1c;
  psVar2 = *(short **)(iVar10 + 0x14);
  psVar5 = psVar2 + *(int *)(iVar10 + 0xc) * 0x18;
  local_4 = (short *)0x0;
  local_8 = 0;
  param_1 = 0;
  for (psVar7 = psVar2; psVar7 < psVar5; psVar7 = psVar7 + 0x18) {
    if ((*(byte *)(psVar7 + 6) & 4) == 0) {
      psVar6 = *(short **)(psVar7 + 0xc);
      if (psVar6 == (short *)0x0) {
        param_1 = param_1 + 1;
      }
      else if (psVar6 < psVar7) {
        FUN_006cb180(in_EAX);
        *(byte *)(psVar7 + 6) = *(byte *)(psVar7 + 6) | 4;
      }
      else {
        if ((iVar4 == 1) || (local_4 != (short *)0x0)) {
          FUN_006cb1b0(psVar7,psVar6,local_8);
        }
        else {
          local_8 = FUN_006cb1b0(psVar7,psVar6,0);
        }
        *(byte *)(psVar7 + 6) = *(byte *)(psVar7 + 6) | 4;
        *(byte *)(psVar6 + 6) = *(byte *)(psVar6 + 6) | 4;
        local_4 = psVar7;
      }
    }
  }
  iVar9 = (int)psVar5 - (int)psVar2;
  psVar7 = (short *)(iVar9 * 0x2aaaaaab);
  iVar10 = iVar9 / 0x30;
  if (iVar4 == 0) {
    if (iVar10 == 6) {
      psVar6 = psVar2 + 0x30;
      psVar8 = psVar2 + 0x60;
      psVar11 = psVar2;
    }
    else {
      if (iVar10 != 0xc) goto LAB_006cb4bc;
      psVar6 = psVar2 + 0x78;
      psVar8 = psVar2 + 0xd8;
      psVar11 = psVar2 + 0x18;
    }
    psVar7 = (short *)((*(int *)(psVar6 + 2) * 2 - *(int *)(psVar8 + 2)) - *(int *)(psVar11 + 2));
    if ((int)psVar7 < 0) {
      psVar7 = (short *)-(int)psVar7;
    }
    if ((((*(short **)(psVar11 + 0xc) == psVar11 + 0x18) &&
         (*(short **)(psVar6 + 0xc) == psVar6 + 0x18)) &&
        (psVar3 = *(short **)(psVar8 + 0xc), psVar3 == psVar8 + 0x18)) && ((int)psVar7 < 8)) {
      psVar7 = (short *)(*(int *)(psVar11 + 4) + *(int *)(psVar6 + 4) * -2 + *(int *)(psVar8 + 4));
      *(int *)(psVar8 + 4) = *(int *)(psVar8 + 4) - (int)psVar7;
      if (psVar3 != (short *)0x0) {
        *(int *)(psVar3 + 4) = *(int *)(psVar3 + 4) - (int)psVar7;
      }
      if (iVar10 == 0xc) {
        *(int *)(psVar2 + 0xc4) = *(int *)(psVar2 + 0xc4) - (int)psVar7;
        *(int *)(psVar2 + 0x10c) = *(int *)(psVar2 + 0x10c) - (int)psVar7;
      }
      *(byte *)(psVar8 + 6) = *(byte *)(psVar8 + 6) | 4;
      if (*(int *)(psVar8 + 0xc) != 0) {
        pbVar12 = (byte *)(*(int *)(psVar8 + 0xc) + 0xc);
        *pbVar12 = *pbVar12 | 4;
      }
    }
  }
LAB_006cb4bc:
  if (param_1 != 0) {
    if (psVar2 < psVar5) {
      psVar7 = (short *)((iVar9 - 1U) * -0x55555555);
      pbVar12 = (byte *)(psVar2 + 6);
      iVar10 = (iVar9 - 1U) / 0x30 + 1;
      do {
        if (((*pbVar12 & 4) == 0) && (*(int *)(pbVar12 + 0x10) != 0)) {
          psVar7 = (short *)FUN_006cb1a0();
          *pbVar12 = *pbVar12 | 4;
          param_1 = param_1 + -1;
        }
        pbVar12 = pbVar12 + 0x30;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if ((param_1 != 0) && (psVar2 < psVar5)) {
      psVar6 = psVar2 + -0x18;
      do {
        psVar7 = psVar6;
        if ((*(byte *)(psVar6 + 0x1e) & 4) == 0) {
          for (; (psVar2 <= psVar7 && ((*(byte *)(psVar7 + 6) & 4) == 0)); psVar7 = psVar7 + -0x18)
          {
          }
          for (psVar8 = psVar6 + 0x30; (psVar8 < psVar5 && ((*(byte *)(psVar8 + 6) & 4) == 0));
              psVar8 = psVar8 + 0x18) {
          }
          if (psVar7 < psVar2) {
            if (psVar8 < psVar5) {
              FUN_006cb1a0();
            }
          }
          else if (psVar8 < psVar5) {
            sVar1 = *psVar7;
            if (*psVar8 == sVar1) {
              *(undefined4 *)(psVar6 + 0x1c) = *(undefined4 *)(psVar7 + 4);
            }
            else {
              iVar10 = FUN_0068ea60((int)psVar6[0x18] - (int)sVar1,
                                    *(int *)(psVar8 + 4) - *(int *)(psVar7 + 4),
                                    (int)*psVar8 - (int)sVar1);
              *(int *)(psVar6 + 0x1c) = iVar10 + *(int *)(psVar7 + 4);
            }
          }
          else {
            FUN_006cb1a0();
          }
        }
        psVar7 = psVar6 + 0x30;
        psVar6 = psVar6 + 0x18;
      } while (psVar7 < psVar5);
    }
  }
  return psVar7;
}


/* FUN_006cb7b0 @ 006cb7b0  kind=gamemisc  attributed-by=none  size=42 */

void FUN_006cb7b0(void)

{
  void *in_EAX;
  
  memset(in_EAX,0,0xb8);
  FUN_006c8850();
  FUN_006923a0();
  return;
}


/* FUN_006cb7e0 @ 006cb7e0  kind=gamemisc  attributed-by=none  size=42 */

void FUN_006cb7e0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_006c8870(unaff_ESI + 3);
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  FUN_006915b0(unaff_ESI[2]);
  unaff_ESI[2] = 0;
  return;
}


/* FUN_006cb810 @ 006cb810  kind=gamemisc  attributed-by=none  size=2030 */

void FUN_006cb810(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_64;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined2 local_28;
  undefined2 uStack_26;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_64;
  local_3c = (int *)param_1[0x22];
  local_50 = param_2;
  iVar1 = *(int *)(*param_1 + 0x54);
  local_38 = *(int **)(iVar1 + 0x9c);
  iVar7 = param_1[2];
  iVar4 = FUN_00692620(*param_1,param_3,param_4);
  if (iVar4 == 0) {
    iVar4 = local_38[2];
    *(char *)(param_1 + 0x23) = (char)iVar4;
    if ((char)iVar4 != '\0') {
      param_1[0x24] = local_38[3];
      param_1[0x25] = local_38[4];
      param_1[0x26] = local_38[5];
      param_1[0x27] = local_38[6];
      param_1[0x28] = local_38[7];
      local_10 = param_1[0x25];
      local_14 = param_1[0x24];
      param_1[0x29] = local_38[8];
      local_c = param_1[0x26];
      local_8 = param_1[0x27];
      FUN_0068ecd0(&local_14);
      FUN_00690500(param_1 + 0x28,&local_14);
    }
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x34);
    if (*(int *)(iVar1 + 0x48) == 0x636f6d70) {
      uVar9 = *(uint *)(iVar1 + 0x80);
      local_58 = (int)*(short *)(iVar7 + 0x16);
      local_48 = uVar9;
      local_5c = FUN_00693db0(iVar7,uVar9);
      if (local_5c != 0) goto LAB_006cbfeb;
      memcpy(*(void **)(iVar7 + 0x58),*(void **)(iVar1 + 0x84),uVar9 << 5);
      *(uint *)(iVar7 + 0x54) = uVar9;
      local_64 = 0;
      if (uVar9 != 0) {
        local_4c = *(int *)(iVar7 + 0x30) << 5;
        do {
          local_30 = param_1[0x2b];
          local_34 = param_1[0x2a];
          uVar9 = (uint)*(short *)(iVar7 + 0x16);
          local_10 = param_1[0x2d];
          local_14 = param_1[0x2c];
          local_60 = uVar9;
          local_5c = FUN_006cb810(param_1,local_50,
                                  *(undefined4 *)(*(int *)(iVar7 + 0x34) + local_4c),param_4,
                                  param_5 + 1);
          if (local_5c != 0) goto LAB_006cbfeb;
          local_40 = *(int *)(iVar7 + 0x34) + local_4c;
          if ((*(ushort *)(local_40 + 4) & 0x200) == 0) {
            param_1[0x2a] = local_34;
            param_1[0x2b] = local_30;
            param_1[0x2c] = local_14;
            param_1[0x2d] = local_10;
          }
          local_54 = (int)*(short *)(iVar7 + 0x16) - uVar9;
          if ((*(byte *)(local_40 + 4) & 200) != 0) {
            uVar10 = *(int *)(iVar7 + 0x18) + uVar9 * 8;
            local_2c = uVar10 + local_54 * 8;
            uVar9 = local_60;
            if (uVar10 < local_2c) {
              do {
                FUN_00690500(uVar10,local_40 + 0x10);
                uVar10 = uVar10 + 8;
                uVar9 = local_60;
              } while (uVar10 < local_2c);
            }
          }
          if ((*(byte *)(local_40 + 4) & 2) == 0) {
            uVar5 = local_58 + *(int *)(local_40 + 8);
            if ((uVar9 <= uVar5) || (local_54 <= *(uint *)(local_40 + 0xc))) {
              __security_check_cookie(local_4 ^ (uint)&local_64);
              return;
            }
            iVar4 = *(int *)(iVar7 + 0x18);
            iVar8 = *(uint *)(local_40 + 0xc) + uVar9 + local_58;
            uVar10 = *(int *)(iVar4 + uVar5 * 8) - *(int *)(iVar4 + iVar8 * 8);
            uVar9 = *(int *)(iVar4 + 4 + uVar5 * 8) - *(int *)(iVar4 + 4 + iVar8 * 8);
          }
          else {
            iVar4 = FUN_0068ebc0(*(undefined4 *)(local_40 + 8),param_1[4]);
            uVar10 = iVar4 + param_1[5] + 0x20U & 0xffffffc0;
            iVar4 = FUN_0068ebc0(*(undefined4 *)(local_40 + 0xc),param_1[6]);
            uVar9 = iVar4 + 0x20 + param_1[7] & 0xffffffc0;
          }
          local_20 = *(undefined4 *)(iVar7 + 0x1c);
          local_1c = *(undefined4 *)(iVar7 + 0x20);
          local_18 = *(undefined4 *)(iVar7 + 0x24);
          local_24 = *(int *)(iVar7 + 0x18) + local_60 * 8;
          _local_28 = CONCAT22((undefined2)local_54,(short)*(undefined4 *)(iVar7 + 0x14));
          FUN_006904c0(&local_28,uVar10,uVar9);
          local_4c = local_4c + 0x20;
          local_64 = local_64 + 1;
        } while (local_64 < local_48);
      }
    }
    else if (*(int *)(iVar1 + 0x48) == 0x6f75746c) {
      if ((char)param_1[0x23] != '\0') {
        FUN_006904c0(iVar1 + 0x6c,param_1[0x28],param_1[0x29]);
      }
      local_64 = (int)*(short *)(iVar1 + 0x6e) + 4;
      if (((local_64 == 0) ||
          ((uint)(*(short *)(iVar7 + 0x16) + 4 +
                 (int)*(short *)(iVar7 + 0x3a) + (int)*(short *)(iVar1 + 0x6e)) <=
           *(uint *)(iVar7 + 4))) &&
         ((*(short *)(iVar1 + 0x6c) == 0 ||
          ((uint)((int)*(short *)(iVar7 + 0x38) + (int)*(short *)(iVar7 + 0x14) +
                 (int)*(short *)(iVar1 + 0x6c)) <= *(uint *)(iVar7 + 8))))) {
        local_5c = 0;
      }
      else {
        local_5c = FUN_00693c40(iVar7,local_64,(int)*(short *)(iVar1 + 0x6c));
        if (local_5c != 0) goto LAB_006cbfeb;
      }
      memcpy(*(void **)(iVar7 + 0x3c),*(void **)(iVar1 + 0x70),*(short *)(iVar1 + 0x6e) * 8);
      memcpy(*(void **)(iVar7 + 0x44),*(void **)(iVar1 + 0x78),*(short *)(iVar1 + 0x6c) * 2);
      memcpy(*(void **)(iVar7 + 0x40),*(void **)(iVar1 + 0x74),(int)*(short *)(iVar1 + 0x6e));
      *(undefined2 *)(iVar7 + 0x3a) = *(undefined2 *)(iVar1 + 0x6e);
      *(undefined2 *)(iVar7 + 0x38) = *(undefined2 *)(iVar1 + 0x6c);
      param_1[0x2a] = param_1[5];
      param_1[0x2b] = param_1[7];
      iVar4 = FUN_0068ebc0(*(undefined4 *)(iVar1 + 0x28),param_1[4]);
      param_1[0x2c] = iVar4 + param_1[5];
      param_1[0x2d] = param_1[7];
      if (*(short *)(iVar1 + 0x6e) != 0) {
        if (*(code **)(*local_3c + 0x1c) != (code *)0x0) {
          (**(code **)(*local_3c + 0x1c))(param_1 + 3,iVar7 + 0x38,local_3c);
        }
        if (*(int *)(local_50 + 0x14) == 1) {
          iVar4 = param_1[0x2a];
          iVar8 = param_1[0x2c];
          param_1[0x2a] = param_1[0x20] + 0x20 + iVar4 & 0xffffffc0;
          param_1[0x2c] = param_1[0x21] + 0x20 + iVar8 & 0xffffffc0;
          *(int *)(iVar1 + 0x90) = param_1[0x2a] - iVar4;
          *(int *)(iVar1 + 0x94) = param_1[0x2c] - iVar8;
          FUN_0068f0c0(iVar7);
        }
        else {
          iVar4 = param_1[0x14];
          local_58 = iVar4 + -0x30 + param_1[0x12] * 0x30;
          if ((param_1[0x12] < 2) || ((*(byte *)(param_1 + 0x1d) & 4) != 0)) {
            iVar4 = param_1[0x2a];
            iVar8 = param_1[0x2c];
            uVar9 = iVar4 + 0x20U & 0xffffffc0;
            param_1[0x2a] = uVar9;
            param_1[0x2c] = iVar8 + 0x20U & 0xffffffc0;
            *(uint *)(iVar1 + 0x90) = uVar9 - iVar4;
            *(int *)(iVar1 + 0x94) = param_1[0x2c] - iVar8;
            FUN_0068f0c0(iVar7);
          }
          else {
            local_60 = *(uint *)(iVar4 + 4);
            local_50 = param_1[0x2c] - *(int *)(local_58 + 4);
            local_64 = *(uint *)(iVar4 + 8);
            iVar8 = local_64 - local_60;
            iVar4 = *(int *)(local_58 + 8) + local_50;
            if ((int)local_60 < 0x18) {
              iVar8 = iVar8 + -8;
            }
            if (local_50 < 0x18) {
              iVar4 = iVar4 + 8;
            }
            uVar9 = iVar8 + 0x20U & 0xffffffc0;
            local_54 = iVar4 + 0x20U & 0xffffffc0;
            param_1[0x2a] = uVar9;
            param_1[0x2c] = local_54;
            if (((int)local_64 <= (int)uVar9) && (0 < (int)local_60)) {
              param_1[0x2a] = uVar9 - 0x40;
            }
            if (((int)local_54 <= *(int *)(local_58 + 8)) && (0 < local_50)) {
              param_1[0x2c] = local_54 + 0x40;
            }
            *(int *)(iVar1 + 0x90) = param_1[0x2a] - iVar8;
            *(int *)(iVar1 + 0x94) = param_1[0x2c] - iVar4;
            FUN_0068f0c0(iVar7);
          }
        }
      }
    }
    else {
      local_5c = 7;
    }
    piVar2 = local_3c;
    if (param_5 == 0) {
      local_48 = *(int *)(iVar1 + 0x2c) - *(int *)(iVar1 + 0x20);
      local_44 = *(int *)(iVar1 + 0x30) - *(int *)(iVar1 + 0x24);
      local_48 = FUN_0068ebc0(local_48,local_3c[2]);
      local_44 = FUN_0068ebc0(local_44,piVar2[3]);
      if ((char)param_1[0x23] != '\0') {
        FUN_00690560(iVar7 + 0x14,param_1 + 0x24);
        FUN_00690500(&local_48,param_1 + 0x24);
      }
      if (param_1[0x2a] != 0) {
        FUN_006904c0(iVar7 + 0x14,-param_1[0x2a],0);
      }
      FUN_00690430(iVar7 + 0x14,&local_14);
      local_10 = local_10 & 0xffffffc0;
      local_c = local_c + 0x3f & 0xffffffc0;
      local_14 = local_14 & 0xffffffc0;
      local_8 = local_8 + 0x3f & 0xffffffc0;
      *(uint *)(iVar1 + 0x18) = local_c - local_14;
      *(uint *)(iVar1 + 0x20) = local_14;
      *(uint *)(iVar1 + 0x24) = local_8;
      *(uint *)(iVar1 + 0x1c) = local_8 - local_10;
      *(uint *)(iVar1 + 0x2c) = local_14 + local_48 & 0xffffffc0;
      *(uint *)(iVar1 + 0x30) = local_8 + local_44 & 0xffffffc0;
      if (((*(byte *)(*(int *)(iVar1 + 4) + 8) & 4) == 0) &&
         ((cVar3 = FUN_006c8670(), cVar3 == '\0' || ((char)piVar2[8] == '\0')))) {
        if (*(int *)(iVar1 + 0x28) != 0) {
          *(int *)(iVar1 + 0x28) = param_1[0x2c] - param_1[0x2a];
        }
      }
      else {
        uVar6 = FUN_0068ebc0(*(undefined4 *)(iVar1 + 0x28),piVar2[2]);
        *(undefined4 *)(iVar1 + 0x28) = uVar6;
        *(undefined4 *)(iVar1 + 0x90) = 0;
        *(undefined4 *)(iVar1 + 0x94) = 0;
      }
      iVar4 = FUN_0068ebc0(*(undefined4 *)(iVar1 + 0x34),piVar2[3]);
      piVar2 = local_38;
      *(uint *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + 0x20U & 0xffffffc0;
      *(uint *)(iVar1 + 0x34) = iVar4 + 0x20U & 0xffffffc0;
      FUN_0068f020(*local_38);
      iVar7 = FUN_00693e10(*piVar2,iVar7);
      if (iVar7 == 0) {
        iVar7 = *piVar2;
        *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(iVar7 + 0x14);
        *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(iVar7 + 0x18);
        *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar7 + 0x1c);
        *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar7 + 0x20);
        *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar7 + 0x24);
        *(undefined4 *)(iVar1 + 0x48) = 0x6f75746c;
        __security_check_cookie(local_4 ^ (uint)&local_64);
        return;
      }
    }
  }
LAB_006cbfeb:
  __security_check_cookie(local_4 ^ (uint)&local_64);
  return;
}


/* FUN_006cc020 @ 006cc020  kind=gamemisc  attributed-by=none  size=15 */

void FUN_006cc020(void)

{
  FUN_006cb7e0();
  return;
}


/* FUN_006cc5a0 @ 006cc5a0  kind=gamemisc  attributed-by=none  size=29 */

void FUN_006cc5a0(undefined4 *param_1)

{
  fclose((FILE *)param_1[3]);
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


/* FUN_006cc610 @ 006cc610  kind=gamemisc  attributed-by=none  size=112 */

undefined4 FUN_006cc610(int param_1,char *param_2)

{
  FILE *_File;
  long lVar1;
  
  if (param_1 == 0) {
    return 0x28;
  }
  _File = fopen(param_2,"rb");
  if (_File == (FILE *)0x0) {
    return 1;
  }
  fseek(_File,0,2);
  lVar1 = ftell(_File);
  *(long *)(param_1 + 4) = lVar1;
  fseek(_File,0,0);
  *(FILE **)(param_1 + 0xc) = _File;
  *(char **)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 **)(param_1 + 0x14) = &LAB_006cc5c0;
  *(code **)(param_1 + 0x18) = FUN_006cc5a0;
  return 0;
}


/* FUN_006cc6c0 @ 006cc6c0  kind=gamemisc  attributed-by=none  size=58 */

void FUN_006cc6c0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


/* FUN_006cc700 @ 006cc700  kind=gamemisc  attributed-by=none  size=224 */

int FUN_006cc700(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  void *_Dst;
  int *piVar2;
  int *piVar3;
  int iVar4;
  size_t _Size;
  
  piVar3 = param_3;
  piVar2 = param_2;
  uVar1 = *param_1;
  iVar4 = param_2[2];
  param_1 = (undefined4 *)0x0;
  if (param_2 == param_3) {
    return 0;
  }
  if (param_2[3] == 0) {
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    param_3[4] = param_2[4];
    param_3[5] = param_2[5];
    return 0;
  }
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  _Size = *param_2 * iVar4;
  if (param_3[3] == 0) {
    iVar4 = FUN_00691240(uVar1,_Size,&param_1);
  }
  else {
    iVar4 = param_3[2];
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (*param_3 * iVar4 - _Size == 0) goto LAB_006cc7a1;
    iVar4 = FUN_00692290(uVar1,1,*param_3 * iVar4,_Size,param_3[3],&param_1);
  }
  piVar3[3] = iVar4;
  if (param_1 != (undefined4 *)0x0) {
    return (int)param_1;
  }
LAB_006cc7a1:
  _Dst = (void *)piVar3[3];
  *piVar3 = *piVar2;
  piVar3[1] = piVar2[1];
  piVar3[2] = piVar2[2];
  piVar3[3] = piVar2[3];
  piVar3[4] = piVar2[4];
  piVar3[5] = piVar2[5];
  piVar3[3] = (int)_Dst;
  memcpy(_Dst,(void *)piVar2[3],_Size);
  return (int)param_1;
}


/* FUN_006cc7e0 @ 006cc7e0  kind=gamemisc  attributed-by=none  size=105 */

undefined4 FUN_006cc7e0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    return 0x21;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 6;
  }
  FUN_00691290(*param_1,param_2[3]);
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return 0;
}


/* FUN_006cc850 @ 006cc850  kind=gamemisc  attributed-by=none  size=57 */

int FUN_006cc850(void)

{
  int iVar1;
  undefined2 in_CX;
  
  iVar1 = FUN_006908c0();
  if (iVar1 == 0) {
    iVar1 = FUN_00691ec0();
    if ((iVar1 == 0) && (((char)in_CX != '\x1f' || ((char)((ushort)in_CX >> 8) != -99)))) {
      iVar1 = 3;
    }
  }
  return iVar1;
}


/* FUN_006cc890 @ 006cc890  kind=gamemisc  attributed-by=none  size=76 */

int FUN_006cc890(void)

{
  uint uVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    return -1;
  }
  uVar1 = FUN_006909c0(*(undefined4 *)(unaff_ESI + 0xa4),unaff_ESI + 8,
                       *(undefined4 *)(unaff_ESI + 0x34));
  *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + uVar1;
  *(uint *)(unaff_ESI + 4) = (uint)(uVar1 < *(uint *)(unaff_ESI + 0x34));
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(uint *)(unaff_ESI + 0x1c) = (uVar1 * 8 - *(uint *)(unaff_ESI + 0x34)) + 1;
  return (uVar1 != 0) - 1;
}


/* FUN_006cc8e0 @ 006cc8e0  kind=gamemisc  attributed-by=none  size=197 */

uint FUN_006cc8e0(void)

{
  byte *pbVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  
  uVar5 = *(uint *)(in_EAX + 0x18);
  uVar8 = *(uint *)(in_EAX + 0x34);
  if (((*(char *)(in_EAX + 0x20) != '\0') || (*(int *)(in_EAX + 0x1c) <= (int)uVar5)) ||
     (*(uint *)(in_EAX + 0x3c) <= *(uint *)(in_EAX + 0x38))) {
    if (*(uint *)(in_EAX + 0x3c) <= *(uint *)(in_EAX + 0x38)) {
      uVar8 = uVar8 + 1;
      *(uint *)(in_EAX + 0x34) = uVar8;
      if (uVar8 < *(uint *)(in_EAX + 0x28)) {
        iVar3 = (1 << ((byte)uVar8 & 0x1f)) + -0x100;
      }
      else {
        iVar3 = *(int *)(in_EAX + 0x30) + 1;
      }
      *(int *)(in_EAX + 0x3c) = iVar3;
    }
    if (*(char *)(in_EAX + 0x20) != '\0') {
      uVar8 = 9;
      *(undefined4 *)(in_EAX + 0x34) = 9;
      *(undefined4 *)(in_EAX + 0x3c) = 0x100;
      *(undefined1 *)(in_EAX + 0x20) = 0;
    }
    iVar3 = FUN_006cc890();
    if (iVar3 < 0) {
      return 0xffffffff;
    }
    uVar5 = 0;
  }
  pbVar1 = (byte *)(((int)uVar5 >> 3) + 8 + in_EAX);
  *(uint *)(in_EAX + 0x18) = uVar5 + uVar8;
  iVar3 = -(uVar5 & 7);
  iVar7 = iVar3 + 8;
  uVar8 = uVar8 - iVar7;
  uVar5 = (uint)(*pbVar1 >> (sbyte)(uVar5 & 7));
  pbVar6 = pbVar1 + 1;
  if (7 < uVar8) {
    bVar2 = *pbVar6;
    bVar4 = (byte)iVar7;
    pbVar6 = pbVar1 + 2;
    iVar7 = iVar3 + 0x10;
    uVar5 = uVar5 | (uint)bVar2 << (bVar4 & 0x1f);
    uVar8 = uVar8 - 8;
  }
  if (uVar8 != 0) {
    uVar5 = uVar5 | ((1 << ((byte)uVar8 & 0x1f)) - 1U & (uint)*pbVar6) << ((byte)iVar7 & 0x1f);
  }
  return uVar5;
}


/* FUN_006cc9b0 @ 006cc9b0  kind=gamemisc  attributed-by=none  size=87 */

undefined4 FUN_006cc9b0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_ESI;
  int local_4;
  
  uVar2 = *(uint *)(unaff_ESI + 0x60);
  if (uVar2 <= *(uint *)(unaff_ESI + 0x5c)) {
    iVar1 = (uVar2 >> 1) + 4 + uVar2;
    if (*(int *)(unaff_ESI + 0x58) == unaff_ESI + 100) {
      *(undefined4 *)(unaff_ESI + 0x58) = 0;
      uVar2 = 0;
    }
    uVar3 = FUN_00693a60(*(undefined4 *)(unaff_ESI + 0xa8),1,uVar2,iVar1,
                         *(undefined4 *)(unaff_ESI + 0x58),&local_4);
    *(undefined4 *)(unaff_ESI + 0x58) = uVar3;
    if (local_4 != 0) {
      return 0xffffffff;
    }
    *(int *)(unaff_ESI + 0x60) = iVar1;
  }
  return 0;
}


/* FUN_006cca10 @ 006cca10  kind=gamemisc  attributed-by=none  size=98 */

undefined4 FUN_006cca10(void)

{
  void *_Dst;
  uint _Size;
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int local_4;
  
  _Size = *(uint *)(unaff_ESI + 0x54);
  if (_Size == 0) {
    iVar2 = 0x200;
  }
  else {
    iVar2 = (_Size >> 2) + _Size;
  }
  iVar1 = FUN_00693a60(*(undefined4 *)(unaff_ESI + 0xa8),3,_Size,iVar2,
                       *(undefined4 *)(unaff_ESI + 0x4c),&local_4);
  *(int *)(unaff_ESI + 0x4c) = iVar1;
  if (local_4 != 0) {
    return 0xffffffff;
  }
  _Dst = (void *)(iVar1 + iVar2 * 2);
  *(void **)(unaff_ESI + 0x50) = _Dst;
  memmove(_Dst,(void *)(iVar1 + _Size * 2),_Size);
  *(int *)(unaff_ESI + 0x54) = iVar2;
  return 0;
}


/* FUN_006cca80 @ 006cca80  kind=gamemisc  attributed-by=none  size=34 */

void FUN_006cca80(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[0x17] = 0;
  param_1[0xd] = 9;
  *param_1 = 0;
  return;
}


/* FUN_006ccab0 @ 006ccab0  kind=gamemisc  attributed-by=none  size=82 */

void FUN_006ccab0(void *param_1,int param_2)

{
  memset(param_1,0,0xac);
  *(int *)((int)param_1 + 0xa4) = param_2;
  *(undefined4 *)((int)param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  *(int *)((int)param_1 + 0x58) = (int)param_1 + 100;
  *(undefined4 *)((int)param_1 + 0x60) = 0x40;
  FUN_006cca80(param_1);
  return;
}


/* FUN_006ccb10 @ 006ccb10  kind=gamemisc  attributed-by=none  size=91 */

void FUN_006ccb10(void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xa8);
  FUN_006cca80(param_1);
  if (*(int *)((int)param_1 + 0x58) != (int)param_1 + 100) {
    FUN_00691290(uVar1,*(int *)((int)param_1 + 0x58));
    *(undefined4 *)((int)param_1 + 0x58) = 0;
  }
  FUN_00691290(uVar1,*(undefined4 *)((int)param_1 + 0x4c));
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  memset(param_1,0,0xac);
  return;
}


/* FUN_006ccb70 @ 006ccb70  kind=gamemisc  attributed-by=none  size=668 */

uint FUN_006ccb70(int *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar4 = param_3;
  piVar2 = param_1;
  local_8 = param_1[0x11];
  uVar1 = param_1[0x10];
  local_4 = param_1[0x12];
  uVar7 = 0;
  local_c = uVar1;
  if (param_3 != 0) {
    iVar5 = *param_1;
    if (iVar5 == 0) {
      iVar5 = FUN_006908c0(param_1[0x29],2);
      if ((iVar5 == 0) && (iVar5 = FUN_006909c0(piVar2[0x29],&param_1,1), iVar5 == 1)) {
        uVar6 = (uint)param_1 & 0x1f;
        iVar5 = 1 << (sbyte)uVar6;
        piVar2[10] = uVar6;
        piVar2[0xb] = (uint)param_1 & 0x80;
        piVar2[0xc] = iVar5 + -0x100;
        if (uVar6 < 0x11) {
          piVar2[0xd] = 9;
          local_4 = 0;
          iVar3 = 0x100;
          piVar2[0xe] = (uint)(((uint)param_1 & 0x80) != 0);
          if (uVar6 < 10) {
            iVar3 = iVar5 + -0xff;
          }
          piVar2[0xf] = iVar3;
          local_c = FUN_006cc8e0();
          if (-1 < (int)local_c) {
            if (param_2 != (undefined1 *)0x0) {
              *param_2 = (char)local_c;
            }
            uVar7 = 1;
            local_8 = local_c;
            if (1 < uVar4) {
              *piVar2 = 1;
              goto LAB_006ccc7b;
            }
            goto LAB_006ccdee;
          }
        }
      }
LAB_006ccde7:
      local_c = uVar1;
      *piVar2 = 3;
    }
    else {
      if (iVar5 == 1) goto LAB_006ccc7b;
      if (iVar5 == 2) {
        do {
          iVar5 = piVar2[0x17];
          while (iVar5 != 0) {
            piVar2[0x17] = piVar2[0x17] + -1;
            if (param_2 != (undefined1 *)0x0) {
              param_2[uVar7] = *(undefined1 *)(piVar2[0x17] + piVar2[0x16]);
            }
            uVar7 = uVar7 + 1;
            if (uVar7 == param_3) goto LAB_006ccdee;
            iVar5 = piVar2[0x17];
          }
          if ((uint)piVar2[0xe] < (uint)piVar2[0xc]) {
            if (((uint)piVar2[0x15] <= (uint)piVar2[0xe]) &&
               (iVar5 = FUN_006cca10(), uVar1 = local_c, iVar5 < 0)) goto LAB_006ccde7;
            *(undefined2 *)(piVar2[0x13] + piVar2[0xe] * 2) = (undefined2)local_c;
            *(undefined1 *)(piVar2[0x14] + piVar2[0xe]) = (undefined1)local_8;
            piVar2[0xe] = piVar2[0xe] + 1;
          }
          local_c = local_4;
          *piVar2 = 1;
LAB_006ccc7b:
          uVar4 = FUN_006cc8e0();
          uVar1 = local_c;
          if ((int)uVar4 < 0) goto LAB_006ccde7;
          if ((uVar4 == 0x100) && (piVar2[0xb] != 0)) {
            piVar2[0xe] = 0;
            *(undefined1 *)(piVar2 + 8) = 1;
            uVar4 = FUN_006cc8e0();
            if ((int)uVar4 < 0) goto LAB_006ccde7;
          }
          local_4 = uVar4;
          if (0xff < uVar4) {
            if ((uint)piVar2[0xe] <= uVar4 - 0x100) {
              if (((uint)piVar2[0x18] <= (uint)piVar2[0x17]) && (iVar5 = FUN_006cc9b0(), iVar5 < 0))
              goto LAB_006ccde7;
              *(undefined1 *)(piVar2[0x16] + piVar2[0x17]) = (undefined1)local_8;
              piVar2[0x17] = piVar2[0x17] + 1;
              uVar4 = local_c;
            }
            for (; 0xff < uVar4; uVar4 = (uint)*(ushort *)(piVar2[0x13] + -0x200 + uVar4 * 2)) {
              if ((piVar2[0x13] == 0) ||
                 (((uint)piVar2[0x18] <= (uint)piVar2[0x17] && (iVar5 = FUN_006cc9b0(), iVar5 < 0)))
                 ) goto LAB_006ccde7;
              *(undefined1 *)(piVar2[0x16] + piVar2[0x17]) =
                   *(undefined1 *)(piVar2[0x14] + -0x100 + uVar4);
              piVar2[0x17] = piVar2[0x17] + 1;
            }
          }
          local_8 = uVar4;
          if (((uint)piVar2[0x18] <= (uint)piVar2[0x17]) && (iVar5 = FUN_006cc9b0(), iVar5 < 0))
          goto LAB_006ccde7;
          *(char *)(piVar2[0x16] + piVar2[0x17]) = (char)uVar4;
          piVar2[0x17] = piVar2[0x17] + 1;
          *piVar2 = 2;
        } while( true );
      }
    }
  }
LAB_006ccdee:
  piVar2[0x11] = local_8;
  piVar2[0x10] = local_c;
  piVar2[0x12] = local_4;
  return uVar7;
}


/* FUN_006cce10 @ 006cce10  kind=gamemisc  attributed-by=none  size=72 */

int FUN_006cce10(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_ECX;
  undefined4 *in_EDX;
  
  in_EDX[1] = in_EAX;
  *in_EDX = in_ECX;
  in_EDX[2] = *(undefined4 *)(in_EAX + 0x1c);
  puVar1 = in_EDX + 0x42e;
  in_EDX[0x430] = puVar1;
  in_EDX[0x42f] = puVar1;
  *puVar1 = 0;
  iVar2 = FUN_006cc850();
  if (iVar2 == 0) {
    FUN_006ccab0(in_EDX + 3);
  }
  return iVar2;
}


/* FUN_006cce60 @ 006cce60  kind=gamemisc  attributed-by=none  size=23 */

void FUN_006cce60(void)

{
  undefined4 *unaff_ESI;
  
  FUN_006ccb10(unaff_ESI + 3);
  unaff_ESI[2] = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  return;
}


/* FUN_006cce80 @ 006cce80  kind=gamemisc  attributed-by=none  size=54 */

int FUN_006cce80(void)

{
  int *piVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 *unaff_ESI;
  
  iVar2 = FUN_006908c0(*unaff_ESI,0);
  if (iVar2 == 0) {
    FUN_006cca80(unaff_ESI + 3);
    piVar1 = unaff_ESI + 0x42e;
    unaff_ESI[0x430] = piVar1;
    unaff_ESI[0x42f] = piVar1;
    *piVar1 = extraout_EDX;
    iVar2 = extraout_EDX;
  }
  return iVar2;
}


/* FUN_006ccec0 @ 006ccec0  kind=gamemisc  attributed-by=none  size=58 */

undefined4 FUN_006ccec0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  *(int *)(unaff_ESI + 0x10bc) = unaff_ESI + 0xb8;
  iVar1 = FUN_006ccb70(unaff_ESI + 0xc,unaff_ESI + 0xb8,0x1000);
  *(int *)(unaff_ESI + 0x10c0) = *(int *)(unaff_ESI + 0x10bc) + iVar1;
  uVar2 = 0x55;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}


/* FUN_006ccf00 @ 006ccf00  kind=gamemisc  attributed-by=none  size=104 */

undefined4 FUN_006ccf00(void)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EDI;
  
  uVar1 = *(int *)(unaff_EDI + 0x10c0) - *(int *)(unaff_EDI + 0x10bc);
  if (in_EAX <= uVar1) {
    uVar1 = in_EAX;
  }
  *(int *)(unaff_EDI + 0x10b8) = *(int *)(unaff_EDI + 0x10b8) + uVar1;
  uVar3 = in_EAX - uVar1;
  *(uint *)(unaff_EDI + 0x10bc) = *(int *)(unaff_EDI + 0x10bc) + uVar1;
  if (uVar3 != 0) {
    while( true ) {
      uVar1 = 0x1000;
      if (uVar3 < 0x1000) {
        uVar1 = uVar3;
      }
      uVar2 = FUN_006ccb70(unaff_EDI + 0xc,0,uVar1);
      if (uVar2 < uVar1) break;
      *(int *)(unaff_EDI + 0x10b8) = *(int *)(unaff_EDI + 0x10b8) + uVar1;
      uVar3 = uVar3 - uVar1;
      if (uVar3 == 0) {
        return 0;
      }
    }
    return 0x55;
  }
  return 0;
}


/* FUN_006ccf70 @ 006ccf70  kind=gamemisc  attributed-by=none  size=177 */

int FUN_006ccf70(int param_1,uint param_2)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(in_ECX + 0x10b8);
  iVar3 = 0;
  if (in_EAX < uVar2) {
    if ((*(int *)(in_ECX + 0x10bc) - in_ECX) - 0xb8U < uVar2 - in_EAX) {
      iVar1 = FUN_006cce80();
      if (iVar1 != 0) {
        return 0;
      }
    }
    else {
      *(uint *)(in_ECX + 0x10bc) = (*(int *)(in_ECX + 0x10bc) - uVar2) + in_EAX;
      *(uint *)(in_ECX + 0x10b8) = in_EAX;
    }
  }
  if (((in_EAX <= *(uint *)(in_ECX + 0x10b8)) || (iVar1 = FUN_006ccf00(), iVar1 == 0)) &&
     (param_2 != 0)) {
    do {
      uVar2 = *(int *)(in_ECX + 0x10c0) - (int)*(void **)(in_ECX + 0x10bc);
      if (param_2 <= uVar2) {
        uVar2 = param_2;
      }
      memcpy((void *)(param_1 + iVar3),*(void **)(in_ECX + 0x10bc),uVar2);
      *(int *)(in_ECX + 0x10bc) = *(int *)(in_ECX + 0x10bc) + uVar2;
      *(int *)(in_ECX + 0x10b8) = *(int *)(in_ECX + 0x10b8) + uVar2;
      iVar3 = iVar3 + uVar2;
      param_2 = param_2 - uVar2;
    } while ((param_2 != 0) && (iVar1 = FUN_006ccec0(), iVar1 == 0));
  }
  return iVar3;
}


/* FUN_006cd030 @ 006cd030  kind=gamemisc  attributed-by=none  size=43 */

void FUN_006cd030(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    FUN_006cce60();
    FUN_00691290(uVar2,iVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


/* FUN_006cd080 @ 006cd080  kind=gamemisc  attributed-by=none  size=170 */

int FUN_006cd080(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  param_2 = FUN_006cc850();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = uVar1;
    uVar2 = FUN_00692230(uVar1,0x10c4,&param_2);
    if (param_2 == 0) {
      param_2 = FUN_006cce10();
      if (param_2 != 0) {
        FUN_00691290(uVar1,uVar2);
        return param_2;
      }
      param_1[3] = uVar2;
      param_2 = 0;
    }
    param_1[1] = 0x7fffffff;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[5] = &LAB_006cd060;
    param_1[6] = FUN_006cd030;
  }
  return param_2;
}


/* FUN_006cd130 @ 006cd130  kind=gamemisc  attributed-by=none  size=1240 */

/* WARNING: Type propagation algorithm not settling */

void FUN_006cd130(undefined4 *param_1,undefined4 ***param_2,int param_3,int param_4,
                 undefined4 *param_5,undefined4 ****param_6,uint *param_7,uint *param_8)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 **ppuVar3;
  uint uVar4;
  uint uVar5;
  int *in_ECX;
  undefined4 ***pppuVar6;
  undefined4 ***pppuVar7;
  int iVar8;
  int *piVar9;
  undefined4 ****ppppuVar10;
  int in_EDX;
  byte bVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  undefined4 ***pppuVar16;
  undefined4 ***local_110;
  undefined4 **local_10c;
  uint *local_108;
  undefined4 ***local_104;
  int local_100;
  undefined4 ****local_fc;
  int *local_f8;
  undefined4 *local_f4;
  undefined4 ***local_f0;
  undefined4 *local_ec;
  int local_e8;
  undefined4 local_e4;
  uint local_dc;
  uint *local_d8;
  uint *local_d4;
  undefined4 *local_d0;
  int local_c8;
  undefined4 *****local_c4 [16];
  undefined4 **local_84 [18];
  int aiStack_3c [14];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_110;
  local_d0 = param_5;
  local_d4 = param_7;
  local_ec = param_1;
  local_fc = param_6;
  local_d8 = param_8;
  pppuVar16 = (undefined4 ***)0x0;
  local_84[0] = (undefined4 **)0x0;
  local_84[1] = (undefined4 **)0x0;
  local_84[2] = (undefined4 **)0x0;
  local_84[3] = (undefined4 **)0x0;
  local_84[4] = (undefined4 **)0x0;
  local_84[5] = (undefined4 **)0x0;
  local_84[6] = (undefined4 **)0x0;
  local_84[7] = (undefined4 **)0x0;
  local_84[8] = (undefined4 **)0x0;
  local_84[9] = (undefined4 **)0x0;
  local_84[10] = (undefined4 **)0x0;
  local_84[0xb] = (undefined4 **)0x0;
  local_84[0xc] = (undefined4 **)0x0;
  local_84[0xd] = (undefined4 **)0x0;
  local_84[0xe] = (undefined4 **)0x0;
  local_84[0xf] = (undefined4 **)0x0;
  piVar9 = in_ECX;
  puVar13 = param_1;
  do {
    iVar14 = *piVar9;
    local_84[iVar14] = (undefined4 **)((int)local_84[iVar14] + 1);
    pppuVar6 = local_84 + iVar14;
    piVar9 = piVar9 + 1;
    puVar13 = (undefined4 *)((int)puVar13 + -1);
  } while (puVar13 != (undefined4 *)0x0);
  iVar14 = local_100;
  if (local_84[0] == (undefined4 **)param_1) {
    *param_5 = 0;
    *param_6 = (undefined4 ***)0x0;
    local_f8 = in_ECX;
  }
  else {
    pppuVar6 = (undefined4 ***)0x1;
    do {
      if (local_84[(int)pppuVar6] != (undefined4 **)0x0) break;
      pppuVar6 = (undefined4 ***)((int)pppuVar6 + 1);
    } while (pppuVar6 < (undefined4 ***)0x10);
    local_110 = *param_6;
    if (*param_6 < pppuVar6) {
      local_110 = pppuVar6;
    }
    local_f0 = (undefined4 ***)0xf;
    do {
      if (local_84[(int)local_f0] != (undefined4 **)0x0) break;
      local_f0 = (undefined4 ***)((int)local_f0 + -1);
    } while (local_f0 != (undefined4 ***)0x0);
    if (local_f0 < local_110) {
      local_110 = local_f0;
    }
    *param_6 = local_110;
    iVar12 = 1 << ((byte)pppuVar6 & 0x1f);
    for (pppuVar7 = pppuVar6; local_104 = pppuVar6, pppuVar7 < local_f0;
        pppuVar7 = (undefined4 ***)((int)pppuVar7 + 1)) {
      local_f8 = in_ECX;
      if (iVar12 - (int)local_84[(int)pppuVar7] < 0) goto LAB_006cd5f9;
      iVar12 = (iVar12 - (int)local_84[(int)pppuVar7]) * 2;
    }
    local_10c = (undefined4 **)((int)local_f0 * 4);
    local_c8 = iVar12 - (int)local_84[(int)local_f0];
    local_f8 = in_ECX;
    if (-1 < local_c8) {
      local_84[(int)local_f0] = (undefined4 **)((int)local_84[(int)local_f0] + local_c8);
      iVar14 = (int)local_f0 + -1;
      local_84[0x11] = (undefined4 **)0x0;
      if (iVar14 != 0) {
        iVar8 = 0;
        iVar12 = 0;
        do {
          iVar8 = iVar8 + *(int *)((int)local_84 + iVar12 + 4U);
          iVar14 = iVar14 + -1;
          *(int *)((int)aiStack_3c + iVar12) = iVar8;
          iVar12 = iVar12 + 4;
        } while (iVar14 != 0);
      }
      puVar13 = (undefined4 *)0x0;
      piVar9 = in_ECX;
      do {
        iVar14 = *piVar9;
        piVar9 = piVar9 + 1;
        if (iVar14 != 0) {
          puVar1 = local_84[iVar14 + 0x10];
          param_8[(int)puVar1] = (uint)puVar13;
          local_84[iVar14 + 0x10] = (undefined4 **)((int)puVar1 + 1);
        }
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      } while (puVar13 < param_1);
      local_ec = local_84[(int)(local_f0 + 4)];
      iVar12 = -(int)local_110;
      uVar15 = 0;
      local_f4 = (undefined4 *)0x0;
      local_84[0x10] = (undefined4 **)0x0;
      local_108 = param_8;
      local_100 = -1;
      local_c4[1] = (undefined4 *****)0x0;
      local_fc = (undefined4 ****)0x0;
      iVar14 = local_100;
      local_f8 = in_ECX;
      if ((int)pppuVar6 <= (int)local_f0) {
        local_10c = local_84 + (int)pppuVar6;
        do {
          piVar9 = *local_10c;
          if (piVar9 != (int *)0x0) {
            local_dc = (int)piVar9 + 1;
            do {
              local_dc = local_dc - 1;
              piVar9 = (int *)((int)piVar9 + -1);
              local_f8 = piVar9;
              if (iVar12 + (int)local_110 < (int)local_104) {
                local_e8 = iVar12 - (int)local_110;
                iVar8 = iVar12 + (int)local_110;
                do {
                  iVar12 = iVar8;
                  iVar14 = local_100 + 1;
                  local_e8 = local_e8 + (int)local_110;
                  pppuVar6 = (undefined4 ***)((int)local_f0 - iVar12);
                  if (local_110 < (undefined4 ***)((int)local_f0 - iVar12)) {
                    pppuVar6 = local_110;
                  }
                  pppuVar7 = (undefined4 ***)((int)local_104 - iVar12);
                  uVar15 = 1 << ((byte)pppuVar7 & 0x1f);
                  if ((local_dc < uVar15) &&
                     (iVar8 = uVar15 + (-1 - (int)piVar9), ppuVar3 = local_10c, pppuVar7 < pppuVar6)
                     ) {
                    while (pppuVar7 = (undefined4 ***)((int)pppuVar7 + 1), pppuVar7 < pppuVar6) {
                      if ((undefined4 *)(iVar8 * 2) <= ppuVar3[1]) break;
                      iVar8 = iVar8 * 2 - (int)ppuVar3[1];
                      ppuVar3 = ppuVar3 + 1;
                    }
                  }
                  uVar15 = 1 << ((byte)pppuVar7 & 0x1f);
                  pppuVar6 = (undefined4 ***)(*param_7 + uVar15);
                  if ((undefined4 ***)0x5a0 < pppuVar6) goto LAB_006cd5f9;
                  local_fc = (undefined4 ****)(in_EDX + *param_7 * 8);
                  local_c4[0] = local_c4 + local_100 + 2;
                  local_c4[local_100 + 2] = (undefined4 *****)local_fc;
                  *param_7 = (uint)pppuVar6;
                  if (iVar14 == 0) {
                    *param_5 = local_fc;
                  }
                  else {
                    local_84[local_100 + 0x11] = (undefined4 **)local_f4;
                    uVar4 = (uint)local_f4 >> ((byte)local_e8 & 0x1f);
                    ppppuVar10 = local_c4[iVar14];
                    local_e4._0_2_ = CONCAT11(local_110._0_1_,(byte)pppuVar7);
                    pppuVar16 = (undefined4 ***)(((int)local_fc - (int)ppppuVar10 >> 3) - uVar4);
                    ppppuVar10[uVar4 * 2] = local_e4;
                    ppppuVar10[uVar4 * 2 + 1] = pppuVar16;
                  }
                  iVar8 = iVar12 + (int)local_110;
                  local_100 = iVar14;
                } while (iVar12 + (int)local_110 < (int)local_104);
              }
              cVar2 = (char)local_104;
              bVar11 = (byte)iVar12;
              if (local_108 < param_8 + (int)local_ec) {
                pppuVar16 = (undefined4 ***)*local_108;
                if (pppuVar16 < param_2) {
                  local_e4._0_1_ = (-(pppuVar16 < (undefined4 ***)0x100) & 0xa0U) + 0x60;
                }
                else {
                  iVar14 = ((int)pppuVar16 - (int)param_2) * 4;
                  local_e4._0_1_ = *(char *)(iVar14 + param_4) + 'P';
                  pppuVar16 = *(undefined4 ****)(iVar14 + param_3);
                }
                local_108 = local_108 + 1;
              }
              else {
                local_e4._0_1_ = -0x40;
              }
              local_e4 = (undefined4 ***)
                         CONCAT31(CONCAT21(local_e4._2_2_,cVar2 - bVar11),(char)local_e4);
              iVar14 = 1 << (cVar2 - bVar11 & 0x1f);
              uVar4 = (uint)local_f4 >> (bVar11 & 0x1f);
              if (uVar4 < uVar15) {
                ppppuVar10 = local_fc + uVar4 * 2;
                do {
                  *ppppuVar10 = local_e4;
                  ppppuVar10[1] = pppuVar16;
                  uVar4 = uVar4 + iVar14;
                  ppppuVar10 = ppppuVar10 + iVar14 * 2;
                } while (uVar4 < uVar15);
              }
              uVar5 = 1 << (cVar2 - 1U & 0x1f);
              uVar4 = (uint)local_f4 & uVar5;
              while (uVar4 != 0) {
                local_f4 = (undefined4 *)((uint)local_f4 ^ uVar5);
                uVar5 = uVar5 >> 1;
                uVar4 = (uint)local_f4 & uVar5;
              }
              local_f4 = (undefined4 *)((uint)local_f4 ^ uVar5);
              if ((undefined4 **)((1 << (bVar11 & 0x1f)) - 1U & (uint)local_f4) !=
                  local_84[local_100 + 0x10]) {
                do {
                  iVar12 = iVar12 - (int)local_110;
                  iVar8 = local_100 + -1;
                  iVar14 = local_100 + 0xf;
                  local_100 = iVar8;
                } while ((undefined4 **)((1 << ((byte)iVar12 & 0x1f)) - 1U & (uint)local_f4) !=
                         local_84[iVar14]);
              }
            } while (piVar9 != (int *)0x0);
          }
          local_10c = local_10c + 1;
          pppuVar6 = (undefined4 ***)((int)local_104 + 1);
          local_104 = pppuVar6;
          iVar14 = local_100;
        } while ((int)pppuVar6 <= (int)local_f0);
      }
    }
  }
LAB_006cd5f9:
  local_100 = iVar14;
  __security_check_cookie(local_4 ^ (uint)&local_110,pppuVar6);
  return;
}


/* FUN_006cd620 @ 006cd620  kind=gamemisc  attributed-by=none  size=158 */

int FUN_006cd620(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(unaff_EBX + 0x20))(*(undefined4 *)(unaff_EBX + 0x28),0x13,4);
  if (iVar1 == 0) {
    return -4;
  }
  iVar2 = FUN_006cd130(0x13,0x13,0,0,param_3,param_2,&local_4,iVar1);
  if (iVar2 == -3) {
    *(char **)(unaff_EBX + 0x18) = "oversubscribed dynamic bit lengths tree";
    (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
    return -3;
  }
  if ((iVar2 == -5) || (*param_2 == 0)) {
    *(char **)(unaff_EBX + 0x18) = "incomplete dynamic bit lengths tree";
    iVar2 = -3;
  }
  (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
  return iVar2;
}


/* FUN_006cd6c0 @ 006cd6c0  kind=gamemisc  attributed-by=none  size=386 */

int FUN_006cd6c0(uint param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(unaff_EBX + 0x20))(*(undefined4 *)(unaff_EBX + 0x28),0x120,4);
  if (iVar1 == 0) {
    return -4;
  }
  iVar2 = FUN_006cd130(param_1,0x101,&DAT_00736380,&DAT_00736400,param_6,param_4,&local_4,iVar1);
  if (iVar2 == 0) {
    if (*param_4 != 0) {
      iVar2 = FUN_006cd130(param_2,0,&DAT_00736480,&DAT_007364f8,param_7,param_5,&local_4,iVar1);
      if (iVar2 == 0) {
        if ((*param_5 != 0) || (param_1 < 0x102)) {
          (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
          return 0;
        }
      }
      else {
        if (iVar2 == -3) {
          *(char **)(unaff_EBX + 0x18) = "oversubscribed distance tree";
          (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
          return -3;
        }
        if (iVar2 == -5) {
          *(char **)(unaff_EBX + 0x18) = "incomplete distance tree";
          (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
          return -3;
        }
        if (iVar2 == -4) goto LAB_006cd7e9;
      }
      *(char **)(unaff_EBX + 0x18) = "empty distance tree with lengths";
      iVar2 = -3;
LAB_006cd7e9:
      (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
      return iVar2;
    }
  }
  else {
    if (iVar2 == -3) {
      *(char **)(unaff_EBX + 0x18) = "oversubscribed literal/length tree";
      (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
      return -3;
    }
    if (iVar2 == -4) goto LAB_006cd82e;
  }
  *(char **)(unaff_EBX + 0x18) = "incomplete literal/length tree";
  iVar2 = -3;
LAB_006cd82e:
  (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
  return iVar2;
}


/* FUN_006cd850 @ 006cd850  kind=gamemisc  attributed-by=none  size=31 */

undefined4 FUN_006cd850(undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  
  *in_EAX = 9;
  *in_ECX = 5;
  *in_EDX = &DAT_00736570;
  *param_1 = &DAT_00737570;
  return 0;
}


/* FUN_006cd870 @ 006cd870  kind=gamemisc  attributed-by=none  size=228 */

int FUN_006cd870(int param_1)

{
  void *_Src;
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_4;
  
  local_4 = *(void **)(unaff_EDI + 0xc);
  pvVar3 = *(void **)(unaff_ESI + 0x34);
  _Src = *(void **)(unaff_ESI + 0x30);
  if (pvVar3 < _Src) {
    pvVar3 = *(void **)(unaff_ESI + 0x2c);
  }
  uVar1 = *(uint *)(unaff_EDI + 0x10);
  uVar4 = (int)pvVar3 - (int)_Src;
  if (uVar1 < (uint)((int)pvVar3 - (int)_Src)) {
    uVar4 = uVar1;
  }
  if ((uVar4 != 0) && (param_1 == -5)) {
    param_1 = 0;
  }
  *(int *)(unaff_EDI + 0x14) = *(int *)(unaff_EDI + 0x14) + uVar4;
  *(uint *)(unaff_EDI + 0x10) = uVar1 - uVar4;
  if (*(code **)(unaff_ESI + 0x38) != (code *)0x0) {
    uVar2 = (**(code **)(unaff_ESI + 0x38))(*(undefined4 *)(unaff_ESI + 0x3c),_Src,uVar4);
    *(undefined4 *)(unaff_ESI + 0x3c) = uVar2;
    *(undefined4 *)(unaff_EDI + 0x30) = uVar2;
  }
  memcpy(local_4,_Src,uVar4);
  local_4 = (void *)((int)local_4 + uVar4);
  iVar5 = (int)_Src + uVar4;
  if (iVar5 == *(int *)(unaff_ESI + 0x2c)) {
    pvVar3 = *(void **)(unaff_ESI + 0x28);
    if (*(int *)(unaff_ESI + 0x34) == *(int *)(unaff_ESI + 0x2c)) {
      *(void **)(unaff_ESI + 0x34) = pvVar3;
    }
    uVar1 = *(uint *)(unaff_EDI + 0x10);
    uVar4 = *(int *)(unaff_ESI + 0x34) - (int)pvVar3;
    if (uVar1 < uVar4) {
      uVar4 = uVar1;
    }
    if ((uVar4 != 0) && (param_1 == -5)) {
      param_1 = 0;
    }
    *(int *)(unaff_EDI + 0x14) = *(int *)(unaff_EDI + 0x14) + uVar4;
    *(uint *)(unaff_EDI + 0x10) = uVar1 - uVar4;
    if (*(code **)(unaff_ESI + 0x38) != (code *)0x0) {
      uVar2 = (**(code **)(unaff_ESI + 0x38))(*(undefined4 *)(unaff_ESI + 0x3c),pvVar3,uVar4);
      *(undefined4 *)(unaff_ESI + 0x3c) = uVar2;
      *(undefined4 *)(unaff_EDI + 0x30) = uVar2;
    }
    memcpy(local_4,pvVar3,uVar4);
    local_4 = (void *)((int)local_4 + uVar4);
    iVar5 = (int)pvVar3 + uVar4;
  }
  *(void **)(unaff_EDI + 0xc) = local_4;
  *(int *)(unaff_ESI + 0x30) = iVar5;
  return param_1;
}


/* FUN_006cd960 @ 006cd960  kind=gamemisc  attributed-by=none  size=55 */

void FUN_006cd960(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_EAX;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),1,0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 4) = param_1;
    *(undefined1 *)((int)puVar1 + 0x11) = param_2;
    *puVar1 = 0;
    puVar1[5] = param_3;
    puVar1[6] = param_4;
  }
  return;
}


/* FUN_006cd9a0 @ 006cd9a0  kind=gamemisc  attributed-by=none  size=126 */

void FUN_006cd9a0(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int *in_EAX;
  int in_ECX;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  byte *pbVar11;
  uint local_18;
  int local_10;
  undefined1 *local_c;
  byte *pbStack_8;
  
  local_18 = *(uint *)(in_ECX + 0x20);
  uVar10 = *(uint *)(in_ECX + 0x1c);
  local_10 = in_EAX[1];
  puVar3 = *(undefined4 **)(in_ECX + 4);
  pbVar11 = (byte *)*in_EAX;
  puVar9 = *(undefined1 **)(in_ECX + 0x34);
  if (puVar9 < *(undefined1 **)(in_ECX + 0x30)) {
    local_c = *(undefined1 **)(in_ECX + 0x30) + (-1 - (int)puVar9);
  }
  else {
    local_c = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar9);
  }
  uVar4 = *puVar3;
  do {
    puVar8 = puVar9;
    switch(uVar4) {
    case 0:
      puVar3[3] = (uint)*(byte *)(puVar3 + 4);
      puVar3[2] = puVar3[5];
      *puVar3 = 1;
    case 1:
      for (; uVar10 < (uint)puVar3[3]; uVar10 = uVar10 + 8) {
        if (local_10 == 0) {
LAB_006cde2d:
          *(uint *)(in_ECX + 0x20) = local_18;
          *(uint *)(in_ECX + 0x1c) = uVar10;
          in_EAX[1] = 0;
          in_EAX[2] = (int)(pbVar11 + (in_EAX[2] - *in_EAX));
          *in_EAX = (int)pbVar11;
          *(undefined1 **)(in_ECX + 0x34) = puVar9;
          FUN_006cd870(param_1);
          return;
        }
        bVar1 = *pbVar11;
        local_10 = local_10 + -1;
        pbVar11 = pbVar11 + 1;
        param_1 = 0;
        local_18 = local_18 | (uint)bVar1 << ((byte)uVar10 & 0x1f);
      }
      pbStack_8 = (byte *)(puVar3[2] + (*(uint *)(&DAT_00737670 + puVar3[3] * 4) & local_18) * 8);
      local_18 = local_18 >> (pbStack_8[1] & 0x1f);
      uVar10 = uVar10 - pbStack_8[1];
      bVar1 = *pbStack_8;
      uVar7 = (uint)bVar1;
      if (uVar7 == 0) {
        puVar3[2] = *(undefined4 *)(pbStack_8 + 4);
        *puVar3 = 6;
      }
      else if ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) == 0) {
LAB_006cdaab:
          puVar3[3] = uVar7;
          puVar3[2] = pbStack_8 + *(int *)(pbStack_8 + 4) * 8;
        }
        else {
          if ((bVar1 & 0x20) == 0) {
            *puVar3 = 9;
            in_EAX[6] = (int)"invalid literal/length code";
            param_1 = 0xfffffffd;
            goto LAB_006cde00;
          }
          *puVar3 = 7;
        }
      }
      else {
        puVar3[2] = uVar7 & 0xf;
        puVar3[1] = *(undefined4 *)(pbStack_8 + 4);
        *puVar3 = 2;
      }
LAB_006cddf3:
      uVar4 = *puVar3;
      break;
    case 2:
      uVar7 = puVar3[2];
      for (; uVar10 < uVar7; uVar10 = uVar10 + 8) {
        if (local_10 == 0) goto LAB_006cde2d;
        bVar1 = *pbVar11;
        local_10 = local_10 + -1;
        pbVar11 = pbVar11 + 1;
        param_1 = 0;
        local_18 = local_18 | (uint)bVar1 << ((byte)uVar10 & 0x1f);
      }
      puVar3[1] = puVar3[1] + (*(uint *)(&DAT_00737670 + uVar7 * 4) & local_18);
      local_18 = local_18 >> ((byte)uVar7 & 0x1f);
      uVar10 = uVar10 - uVar7;
      puVar3[3] = (uint)*(byte *)((int)puVar3 + 0x11);
      puVar3[2] = puVar3[6];
      *puVar3 = 3;
    case 3:
      for (; uVar10 < (uint)puVar3[3]; uVar10 = uVar10 + 8) {
        if (local_10 == 0) goto LAB_006cde2d;
        bVar1 = *pbVar11;
        local_10 = local_10 + -1;
        pbVar11 = pbVar11 + 1;
        param_1 = 0;
        local_18 = local_18 | (uint)bVar1 << ((byte)uVar10 & 0x1f);
      }
      pbStack_8 = (byte *)(puVar3[2] + (*(uint *)(&DAT_00737670 + puVar3[3] * 4) & local_18) * 8);
      local_18 = local_18 >> (pbStack_8[1] & 0x1f);
      uVar10 = uVar10 - pbStack_8[1];
      bVar1 = *pbStack_8;
      uVar7 = (uint)bVar1;
      if ((bVar1 & 0x10) != 0) {
        puVar3[2] = uVar7 & 0xf;
        puVar3[3] = *(undefined4 *)(pbStack_8 + 4);
        *puVar3 = 4;
        goto LAB_006cddf3;
      }
      if ((bVar1 & 0x40) == 0) goto LAB_006cdaab;
      *puVar3 = 9;
      in_EAX[6] = (int)"invalid distance code";
      param_1 = 0xfffffffd;
      goto LAB_006cde00;
    case 4:
      uVar7 = puVar3[2];
      for (; uVar10 < uVar7; uVar10 = uVar10 + 8) {
        if (local_10 == 0) goto LAB_006cde2d;
        bVar1 = *pbVar11;
        local_10 = local_10 + -1;
        pbVar11 = pbVar11 + 1;
        param_1 = 0;
        local_18 = local_18 | (uint)bVar1 << ((byte)uVar10 & 0x1f);
      }
      puVar3[3] = puVar3[3] + (*(uint *)(&DAT_00737670 + uVar7 * 4) & local_18);
      local_18 = local_18 >> ((byte)uVar7 & 0x1f);
      uVar10 = uVar10 - uVar7;
      *puVar3 = 5;
    case 5:
      pbStack_8 = puVar9 + -puVar3[3];
      if (pbStack_8 < *(undefined1 **)(in_ECX + 0x28)) {
        do {
          pbStack_8 = pbStack_8 + (*(int *)(in_ECX + 0x2c) - (int)*(undefined1 **)(in_ECX + 0x28));
        } while (pbStack_8 < *(undefined1 **)(in_ECX + 0x28));
      }
      iVar5 = puVar3[1];
      while (iVar5 != 0) {
        puVar8 = puVar9;
        if (local_c == (undefined1 *)0x0) {
          if (puVar9 == *(undefined1 **)(in_ECX + 0x2c)) {
            local_c = *(undefined1 **)(in_ECX + 0x30);
            puVar8 = *(undefined1 **)(in_ECX + 0x28);
            if (local_c != puVar8) {
              if (puVar8 < local_c) {
                local_c = local_c + (-1 - (int)puVar8);
              }
              else {
                local_c = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar8);
              }
              puVar9 = puVar8;
              if (local_c != (undefined1 *)0x0) goto LAB_006cdd11;
            }
          }
          *(undefined1 **)(in_ECX + 0x34) = puVar9;
          param_1 = FUN_006cd870(param_1);
          puVar8 = *(undefined1 **)(in_ECX + 0x34);
          puVar9 = *(undefined1 **)(in_ECX + 0x30);
          if (puVar8 < puVar9) {
            local_c = puVar9 + (-1 - (int)puVar8);
          }
          else {
            local_c = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar8);
          }
          if ((puVar8 == *(undefined1 **)(in_ECX + 0x2c)) &&
             (puVar6 = *(undefined1 **)(in_ECX + 0x28), puVar9 != puVar6)) {
            puVar8 = puVar6;
            if (puVar6 < puVar9) {
              local_c = puVar9 + (-1 - (int)puVar6);
            }
            else {
              local_c = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar6);
            }
          }
          if (local_c == (undefined1 *)0x0) goto LAB_006cde70;
        }
LAB_006cdd11:
        uVar2 = *pbStack_8;
        pbStack_8 = pbStack_8 + 1;
        local_c = local_c + -1;
        *puVar8 = uVar2;
        puVar9 = puVar8 + 1;
        param_1 = 0;
        if (pbStack_8 == *(undefined1 **)(in_ECX + 0x2c)) {
          pbStack_8 = *(byte **)(in_ECX + 0x28);
        }
        puVar3[1] = puVar3[1] + -1;
        iVar5 = puVar3[1];
      }
LAB_006cdded:
      *puVar3 = 0;
      goto LAB_006cddf3;
    case 6:
      if (local_c == (undefined1 *)0x0) {
        if (puVar9 == *(undefined1 **)(in_ECX + 0x2c)) {
          local_c = *(undefined1 **)(in_ECX + 0x30);
          puVar8 = *(undefined1 **)(in_ECX + 0x28);
          if (local_c != puVar8) {
            if (puVar8 < local_c) {
              local_c = local_c + (-1 - (int)puVar8);
            }
            else {
              local_c = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar8);
            }
            puVar9 = puVar8;
            if (local_c != (undefined1 *)0x0) goto LAB_006cdddb;
          }
        }
        *(undefined1 **)(in_ECX + 0x34) = puVar9;
        param_1 = FUN_006cd870(param_1);
        puVar8 = *(undefined1 **)(in_ECX + 0x34);
        puVar9 = *(undefined1 **)(in_ECX + 0x30);
        if (puVar8 < puVar9) {
          local_c = puVar9 + (-1 - (int)puVar8);
        }
        else {
          local_c = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar8);
        }
        if ((puVar8 == *(undefined1 **)(in_ECX + 0x2c)) &&
           (puVar6 = *(undefined1 **)(in_ECX + 0x28), puVar9 != puVar6)) {
          puVar8 = puVar6;
          if (puVar6 < puVar9) {
            local_c = puVar9 + (-1 - (int)puVar6);
          }
          else {
            local_c = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar6);
          }
        }
        if (local_c == (undefined1 *)0x0) {
LAB_006cde70:
          *(uint *)(in_ECX + 0x20) = local_18;
          *(uint *)(in_ECX + 0x1c) = uVar10;
          in_EAX[1] = local_10;
          in_EAX[2] = (int)(pbVar11 + (in_EAX[2] - *in_EAX));
          goto LAB_006cde18;
        }
      }
LAB_006cdddb:
      *puVar8 = *(undefined1 *)(puVar3 + 2);
      puVar9 = puVar8 + 1;
      local_c = local_c + -1;
      param_1 = 0;
      goto LAB_006cdded;
    case 7:
      if (7 < uVar10) {
        local_10 = local_10 + 1;
        uVar10 = uVar10 - 8;
        pbVar11 = pbVar11 + -1;
      }
      *(undefined1 **)(in_ECX + 0x34) = puVar9;
      param_1 = FUN_006cd870(param_1);
      puVar9 = *(undefined1 **)(in_ECX + 0x34);
      if (*(undefined1 **)(in_ECX + 0x30) == puVar9) {
        *puVar3 = 8;
LAB_006cded5:
        param_1 = 1;
LAB_006cde00:
        *(uint *)(in_ECX + 0x20) = local_18;
        *(uint *)(in_ECX + 0x1c) = uVar10;
        in_EAX[1] = local_10;
      }
      else {
        *(uint *)(in_ECX + 0x20) = local_18;
        *(uint *)(in_ECX + 0x1c) = uVar10;
        in_EAX[1] = local_10;
      }
      in_EAX[2] = (int)(pbVar11 + (in_EAX[2] - *in_EAX));
      puVar8 = puVar9;
LAB_006cde18:
      *in_EAX = (int)pbVar11;
      *(undefined1 **)(in_ECX + 0x34) = puVar8;
      FUN_006cd870(param_1);
      return;
    case 8:
      goto LAB_006cded5;
    case 9:
      *(uint *)(in_ECX + 0x20) = local_18;
      *(uint *)(in_ECX + 0x1c) = uVar10;
      in_EAX[1] = local_10;
      in_EAX[2] = (int)(pbVar11 + (in_EAX[2] - *in_EAX));
      param_1 = 0xfffffffd;
      goto LAB_006cde18;
    default:
      param_1 = 0xfffffffe;
      goto LAB_006cde00;
    }
  } while( true );
}


/* FUN_006cdf30 @ 006cdf30  kind=gamemisc  attributed-by=none  size=14 */

void FUN_006cdf30(void)

{
  int in_EAX;
  
  (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28));
  return;
}


/* FUN_006cdf40 @ 006cdf40  kind=gamemisc  attributed-by=none  size=106 */

void FUN_006cdf40(void)

{
  int *in_EAX;
  int iVar1;
  int *unaff_ESI;
  int unaff_EDI;
  
  if (in_EAX != (int *)0x0) {
    *in_EAX = unaff_ESI[0xf];
  }
  if ((*unaff_ESI == 4) || (*unaff_ESI == 5)) {
    (**(code **)(unaff_EDI + 0x24))(*(undefined4 *)(unaff_EDI + 0x28),unaff_ESI[3]);
  }
  if (*unaff_ESI == 6) {
    FUN_006cdf30();
  }
  unaff_ESI[0xd] = unaff_ESI[10];
  unaff_ESI[0xc] = unaff_ESI[10];
  *unaff_ESI = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  if ((code *)unaff_ESI[0xe] != (code *)0x0) {
    iVar1 = (*(code *)unaff_ESI[0xe])(0,0,0);
    unaff_ESI[0xf] = iVar1;
    *(int *)(unaff_EDI + 0x30) = iVar1;
  }
  return;
}


/* FUN_006cdfb0 @ 006cdfb0  kind=gamemisc  attributed-by=none  size=153 */

undefined4 * FUN_006cdfb0(undefined4 param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  
  puVar1 = (undefined4 *)(**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),1,0x40);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),8,0x5a0);
    puVar1[9] = iVar2;
    if (iVar2 != 0) {
      iVar2 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),1);
      puVar1[10] = iVar2;
      if (iVar2 == 0) {
        (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),puVar1[9]);
        (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),puVar1);
        return (undefined4 *)0x0;
      }
      puVar1[0xb] = iVar2 + unaff_EBX;
      puVar1[0xe] = param_1;
      *puVar1 = 0;
      FUN_006cdf40();
      return puVar1;
    }
    (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),puVar1);
  }
  return (undefined4 *)0x0;
}


/* FUN_006ce050 @ 006ce050  kind=gamemisc  attributed-by=none  size=139 */

void FUN_006ce050(int param_1)

{
  uint *puVar1;
  byte bVar2;
  void *pvVar3;
  void *pvVar4;
  byte *pbVar5;
  int *in_EAX;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  byte bVar10;
  uint *in_ECX;
  int iVar11;
  byte *_Src;
  uint uVar12;
  int iVar13;
  uint local_3c;
  void *local_38;
  uint local_34;
  uint local_30;
  byte *local_2c;
  uint uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pvVar3 = (void *)in_ECX[0xd];
  uVar12 = in_ECX[7];
  local_34 = in_EAX[1];
  _Src = (byte *)*in_EAX;
  if (pvVar3 < (void *)in_ECX[0xc]) {
    local_30 = (int)in_ECX[0xc] + (-1 - (int)pvVar3);
  }
  else {
    local_30 = in_ECX[0xb] - (int)pvVar3;
  }
  uVar9 = *in_ECX;
  pbVar5 = _Src;
  uVar7 = in_ECX[8];
  uVar6 = in_ECX[8];
  do {
    local_3c = uVar6;
    local_38 = pvVar3;
    if (9 < uVar9) {
      iVar13 = -2;
LAB_006ce0a3:
      in_ECX[8] = local_3c;
LAB_006ce0aa:
      in_ECX[7] = uVar12;
      in_EAX[1] = local_34;
LAB_006ce0b4:
      iVar11 = (int)_Src - *in_EAX;
      *in_EAX = (int)_Src;
LAB_006ce0ba:
      in_EAX[2] = in_EAX[2] + iVar11;
      in_ECX[0xd] = (uint)local_38;
      FUN_006cd870(iVar13);
      return;
    }
    local_2c = _Src;
    switch((&PTR_LAB_006cea8c)[uVar9]) {
    case (undefined *)0x6ce0df:
      local_2c = pbVar5;
      for (; uVar6 = uVar7, uVar12 < 3; uVar12 = uVar12 + 8) {
        if (local_34 == 0) goto LAB_006ce7a8;
        bVar2 = *_Src;
        local_34 = local_34 - 1;
        _Src = _Src + 1;
        param_1 = 0;
        local_3c = uVar6 | (uint)bVar2 << ((byte)uVar12 & 0x1f);
        uVar7 = local_3c;
        local_2c = _Src;
      }
      in_ECX[6] = uVar6 & 1;
      switch((uVar6 & 7) >> 1) {
      case 0:
        uVar9 = uVar12 - 3 & 7;
        uVar6 = (uVar6 >> 3) >> (sbyte)uVar9;
        uVar12 = (uVar12 - 3) - uVar9;
        *in_ECX = 1;
        local_3c = uVar6;
        break;
      case 1:
        FUN_006cd850(&uStack_20);
        uVar9 = FUN_006cd960(uStack_14,uStack_18,uStack_1c,uStack_20);
        in_ECX[1] = uVar9;
        if (uVar9 == 0) {
          iVar13 = -4;
          goto LAB_006ce0a3;
        }
        uVar6 = local_3c >> 3;
        uVar12 = uVar12 - 3;
        *in_ECX = 6;
        local_3c = uVar6;
        break;
      case 2:
        uVar6 = uVar6 >> 3;
        uVar12 = uVar12 - 3;
        *in_ECX = 3;
        local_3c = uVar6;
        break;
      case 3:
        *in_ECX = 9;
        in_EAX[6] = (int)"invalid block type";
        in_ECX[8] = local_3c >> 3;
        uVar12 = uVar12 - 3;
        iVar13 = -3;
        goto LAB_006ce0aa;
      }
      break;
    case (undefined *)0x6ce1b9:
      for (; uVar12 < 0x20; uVar12 = uVar12 + 8) {
        if (local_34 == 0) {
          in_ECX[8] = local_3c;
          in_ECX[7] = uVar12;
          in_EAX[1] = 0;
          iVar13 = param_1;
          goto LAB_006ce0b4;
        }
        bVar2 = *_Src;
        local_34 = local_34 - 1;
        _Src = _Src + 1;
        param_1 = 0;
        uVar7 = uVar7 | (uint)bVar2 << ((byte)uVar12 & 0x1f);
        local_3c = uVar7;
        pbVar5 = _Src;
      }
      uVar9 = uVar7 & 0xffff;
      if (~uVar7 >> 0x10 != uVar9) {
        *in_ECX = 9;
        in_EAX[6] = (int)"invalid stored block lengths";
        goto LAB_006ce82e;
      }
      uVar6 = 0;
      uVar12 = 0;
      in_ECX[1] = uVar9;
      local_3c = 0;
      local_2c = pbVar5;
      if (uVar9 == 0) {
        *in_ECX = -(uint)(in_ECX[6] != 0) & 7;
      }
      else {
        *in_ECX = 2;
      }
      break;
    case (undefined *)0x6ce232:
      if (local_34 == 0) {
LAB_006ce861:
        in_ECX[8] = local_3c;
        in_ECX[7] = uVar12;
        in_EAX[1] = 0;
        in_EAX[2] = (int)(_Src + (in_EAX[2] - *in_EAX));
        *in_EAX = (int)_Src;
        in_ECX[0xd] = (uint)pvVar3;
        FUN_006cd870(param_1);
        return;
      }
      if (local_30 == 0) {
        if (pvVar3 == (void *)in_ECX[0xb]) {
          pvVar4 = (void *)in_ECX[0xc];
          local_38 = (void *)in_ECX[10];
          if (local_38 != pvVar4) {
            if (local_38 < pvVar4) {
              local_30 = (int)pvVar4 + (-1 - (int)local_38);
            }
            else {
              local_30 = (int)in_ECX[0xb] - (int)local_38;
            }
            pvVar3 = local_38;
            if (local_30 != 0) goto LAB_006ce2df;
          }
        }
        local_38 = pvVar3;
        in_ECX[0xd] = (uint)local_38;
        param_1 = FUN_006cd870(param_1);
        pvVar3 = (void *)in_ECX[0xc];
        local_38 = (void *)in_ECX[0xd];
        if (local_38 < pvVar3) {
          local_30 = (int)pvVar3 + (-1 - (int)local_38);
        }
        else {
          local_30 = in_ECX[0xb] - (int)local_38;
        }
        if (local_38 == (void *)in_ECX[0xb]) {
          pvVar4 = (void *)in_ECX[10];
          if (pvVar4 != pvVar3) {
            local_38 = pvVar4;
            if (pvVar4 < pvVar3) {
              local_30 = (int)pvVar3 + (-1 - (int)pvVar4);
            }
            else {
              local_30 = in_ECX[0xb] - (int)pvVar4;
            }
          }
        }
        if (local_30 == 0) {
          in_ECX[8] = uVar6;
          in_ECX[7] = uVar12;
          in_EAX[1] = local_34;
          goto LAB_006ce7b9;
        }
      }
LAB_006ce2df:
      param_1 = 0;
      uStack_28 = in_ECX[1];
      if (local_34 < in_ECX[1]) {
        uStack_28 = local_34;
      }
      if (local_30 < uStack_28) {
        uStack_28 = local_30;
      }
      memcpy(local_38,_Src,uStack_28);
      local_34 = local_34 - uStack_28;
      local_38 = (void *)((int)local_38 + uStack_28);
      local_30 = local_30 - uStack_28;
      _Src = _Src + uStack_28;
      puVar1 = in_ECX + 1;
      *puVar1 = *puVar1 - uStack_28;
      local_2c = _Src;
      if (*puVar1 == 0) {
        *in_ECX = -(uint)(in_ECX[6] != 0) & 7;
      }
      break;
    case (undefined *)0x6ce34b:
      for (; uVar12 < 0xe; uVar12 = uVar12 + 8) {
        if (local_34 == 0) goto LAB_006ce861;
        bVar2 = *_Src;
        local_34 = local_34 - 1;
        _Src = _Src + 1;
        param_1 = 0;
        uVar7 = uVar7 | (uint)bVar2 << ((byte)uVar12 & 0x1f);
        local_3c = uVar7;
        pbVar5 = _Src;
      }
      in_ECX[1] = uVar7 & 0x3fff;
      if ((0x1d < (uVar7 & 0x1f)) || (uVar9 = (uVar7 & 0x3fff) >> 5 & 0x1f, 0x1d < uVar9)) {
        *in_ECX = 9;
        in_EAX[6] = (int)"too many length or distance symbols";
        goto LAB_006ce82e;
      }
      uVar9 = (*(code *)in_EAX[8])(in_EAX[10],uVar9 + 0x102 + (uVar7 & 0x1f),4);
      in_ECX[3] = uVar9;
      if (uVar9 == 0) {
        in_ECX[8] = local_3c;
        in_ECX[7] = uVar12;
        in_EAX[1] = local_34;
        in_EAX[2] = (int)(_Src + (in_EAX[2] - *in_EAX));
        *in_EAX = (int)_Src;
        in_ECX[0xd] = (uint)pvVar3;
        FUN_006cd870(0xfffffffc);
        return;
      }
      uVar7 = local_3c >> 0xe;
      uVar12 = uVar12 - 0xe;
      in_ECX[2] = 0;
      *in_ECX = 4;
      local_3c = uVar7;
    case (undefined *)0x6ce3e0:
      local_2c = pbVar5;
      if (in_ECX[2] < (in_ECX[1] >> 10) + 4) {
        do {
          for (; uVar12 < 3; uVar12 = uVar12 + 8) {
            if (local_34 == 0) goto LAB_006ce861;
            bVar2 = *_Src;
            local_34 = local_34 - 1;
            _Src = _Src + 1;
            param_1 = 0;
            local_3c = uVar7 | (uint)bVar2 << ((byte)uVar12 & 0x1f);
            uVar7 = local_3c;
            local_2c = _Src;
          }
          *(uint *)(in_ECX[3] + *(int *)(&DAT_007376b8 + in_ECX[2] * 4) * 4) = uVar7 & 7;
          in_ECX[2] = in_ECX[2] + 1;
          local_3c = local_3c >> 3;
          uVar12 = uVar12 - 3;
          uVar7 = local_3c;
        } while (in_ECX[2] < (in_ECX[1] >> 10) + 4);
      }
      uVar9 = in_ECX[2];
      while (uVar9 < 0x13) {
        *(undefined4 *)(in_ECX[3] + *(int *)(&DAT_007376b8 + in_ECX[2] * 4) * 4) = 0;
        in_ECX[2] = in_ECX[2] + 1;
        uVar9 = in_ECX[2];
      }
      in_ECX[4] = 7;
      iVar13 = FUN_006cd620(in_ECX[3],in_ECX + 4,in_ECX + 5,in_ECX[9]);
      if (iVar13 != 0) {
        if (iVar13 == -3) {
          (*(code *)in_EAX[9])(in_EAX[10],in_ECX[3]);
          *in_ECX = 9;
        }
        in_ECX[8] = local_3c;
        in_ECX[7] = uVar12;
        iVar11 = *in_EAX;
        *in_EAX = (int)local_2c;
        in_EAX[2] = (int)(local_2c + (in_EAX[2] - iVar11));
        in_EAX[1] = local_34;
        in_ECX[0xd] = (uint)pvVar3;
        FUN_006cd870(iVar13);
        return;
      }
      in_ECX[2] = 0;
      *in_ECX = 5;
      uVar7 = local_3c;
      _Src = local_2c;
      pbVar5 = local_2c;
LAB_006ce4c7:
      local_2c = pbVar5;
      if (in_ECX[2] < (in_ECX[1] >> 5 & 0x1f) + 0x102 + (in_ECX[1] & 0x1f)) {
        do {
          uVar9 = in_ECX[4];
          if (uVar12 < uVar9) {
            do {
              if (local_34 == 0) goto LAB_006ce7a8;
              bVar2 = *_Src;
              local_34 = local_34 - 1;
              bVar10 = (byte)uVar12;
              uVar9 = in_ECX[4];
              _Src = _Src + 1;
              uVar12 = uVar12 + 8;
              uVar7 = uVar7 | (uint)bVar2 << (bVar10 & 0x1f);
              param_1 = 0;
              local_3c = uVar7;
              local_2c = _Src;
            } while (uVar12 < uVar9);
          }
          iVar13 = in_ECX[5] + (*(uint *)(&DAT_00737670 + uVar9 * 4) & uVar7) * 8;
          bVar2 = *(byte *)(iVar13 + 1);
          uStack_28 = (uint)bVar2;
          uStack_c = *(uint *)(iVar13 + 4);
          if (uStack_c < 0x10) {
            local_3c = uVar7 >> (bVar2 & 0x1f);
            uVar12 = uVar12 - uStack_28;
            *(uint *)(in_ECX[3] + in_ECX[2] * 4) = uStack_c;
            in_ECX[2] = in_ECX[2] + 1;
          }
          else {
            if (uStack_c == 0x12) {
              iStack_24 = 7;
            }
            else {
              iStack_24 = uStack_c - 0xe;
            }
            uStack_10 = uStack_28 + iStack_24;
            for (; uVar12 < uStack_10; uVar12 = uVar12 + 8) {
              if (local_34 == 0) goto LAB_006ce861;
              bVar10 = *_Src;
              local_34 = local_34 - 1;
              _Src = _Src + 1;
              param_1 = 0;
              uVar7 = uVar7 | (uint)bVar10 << ((byte)uVar12 & 0x1f);
              local_3c = uVar7;
              local_2c = _Src;
            }
            uVar7 = uVar7 >> (bVar2 & 0x1f);
            local_30 = (uint)(uStack_c == 0x12) * 8 + 3 +
                       (*(uint *)(&DAT_00737670 + iStack_24 * 4) & uVar7);
            local_3c = uVar7 >> ((byte)iStack_24 & 0x1f);
            uVar12 = uVar12 - (iStack_24 + uStack_28);
            uVar9 = in_ECX[2];
            if ((in_ECX[1] >> 5 & 0x1f) + 0x102 + (in_ECX[1] & 0x1f) < local_30 + uVar9) {
LAB_006ce943:
              (*(code *)in_EAX[9])(in_EAX[10],in_ECX[3]);
              *in_ECX = 9;
              in_EAX[6] = (int)"invalid bit length repeat";
              in_ECX[8] = local_3c;
              in_ECX[7] = uVar12;
              in_EAX[1] = local_34;
              in_EAX[2] = (int)(_Src + (in_EAX[2] - *in_EAX));
              *in_EAX = (int)_Src;
              in_ECX[0xd] = (uint)pvVar3;
              FUN_006cd870(0xfffffffd);
              return;
            }
            if (uStack_c == 0x10) {
              if (uVar9 == 0) goto LAB_006ce943;
              uVar8 = *(undefined4 *)((in_ECX[3] - 4) + uVar9 * 4);
            }
            else {
              uVar8 = 0;
            }
            do {
              *(undefined4 *)(in_ECX[3] + uVar9 * 4) = uVar8;
              uVar9 = uVar9 + 1;
              local_30 = local_30 + -1;
            } while (local_30 != 0);
            in_ECX[2] = uVar9;
          }
          uVar7 = local_3c;
        } while (in_ECX[2] < (in_ECX[1] >> 5 & 0x1f) + 0x102 + (in_ECX[1] & 0x1f));
      }
      in_ECX[5] = 0;
      uStack_28 = 9;
      iStack_24 = 6;
      iVar13 = FUN_006cd6c0((in_ECX[1] & 0x1f) + 0x101,(in_ECX[1] >> 5 & 0x1f) + 1,in_ECX[3],
                            &uStack_28,&iStack_24,&uStack_4,&uStack_8,in_ECX[9]);
      if (iVar13 != 0) {
        if (iVar13 == -3) {
          (*(code *)in_EAX[9])(in_EAX[10],in_ECX[3]);
          *in_ECX = 9;
        }
        in_ECX[8] = local_3c;
        in_ECX[7] = uVar12;
        iVar11 = (int)local_2c - *in_EAX;
        in_EAX[1] = local_34;
        *in_EAX = (int)local_2c;
        goto LAB_006ce0ba;
      }
      uVar9 = FUN_006cd960(uStack_28,iStack_24,uStack_4,uStack_8);
      if (uVar9 == 0) {
        in_ECX[8] = local_3c;
        in_ECX[7] = uVar12;
        iVar13 = *in_EAX;
        *in_EAX = (int)local_2c;
        in_EAX[2] = (int)(local_2c + (in_EAX[2] - iVar13));
        in_EAX[1] = local_34;
        in_ECX[0xd] = (uint)pvVar3;
        FUN_006cd870(0xfffffffc);
        return;
      }
      in_ECX[1] = uVar9;
      (*(code *)in_EAX[9])(in_EAX[10],in_ECX[3]);
      *in_ECX = 6;
LAB_006ce704:
      in_ECX[8] = local_3c;
      in_ECX[7] = uVar12;
      in_EAX[1] = local_34;
      iVar13 = *in_EAX;
      *in_EAX = (int)local_2c;
      in_EAX[2] = (int)(local_2c + (in_EAX[2] - iVar13));
      in_ECX[0xd] = (uint)pvVar3;
      iVar13 = FUN_006cd9a0(param_1);
      if (iVar13 != 1) {
        FUN_006cd870(iVar13);
        return;
      }
      param_1 = 0;
      FUN_006cdf30();
      uVar6 = in_ECX[8];
      local_38 = (void *)in_ECX[0xd];
      _Src = (byte *)*in_EAX;
      local_34 = in_EAX[1];
      uVar12 = in_ECX[7];
      if (local_38 < (void *)in_ECX[0xc]) {
        local_30 = (int)in_ECX[0xc] + (-1 - (int)local_38);
      }
      else {
        local_30 = in_ECX[0xb] - (int)local_38;
      }
      local_3c = uVar6;
      if (in_ECX[6] != 0) {
        *in_ECX = 7;
LAB_006cea1a:
        in_ECX[0xd] = (uint)local_38;
        iVar13 = FUN_006cd870(param_1);
        local_38 = (void *)in_ECX[0xd];
        if ((void *)in_ECX[0xc] == local_38) {
          *in_ECX = 8;
LAB_006cea57:
          in_ECX[8] = local_3c;
          in_ECX[7] = uVar12;
          in_EAX[1] = local_34;
          in_EAX[2] = (int)(_Src + (in_EAX[2] - *in_EAX));
          *in_EAX = (int)_Src;
          in_ECX[0xd] = (uint)local_38;
          FUN_006cd870(1);
          return;
        }
        in_ECX[8] = local_3c;
        in_ECX[7] = uVar12;
        in_EAX[1] = local_34;
        goto LAB_006ce0b4;
      }
      *in_ECX = 0;
      local_2c = _Src;
      break;
    case (undefined *)0x6ce4c7:
      goto LAB_006ce4c7;
    case (undefined *)0x6ce704:
      goto LAB_006ce704;
    case (undefined *)0x6ce82e:
LAB_006ce82e:
      in_ECX[8] = local_3c;
      in_ECX[7] = uVar12;
      in_EAX[1] = local_34;
      in_EAX[2] = (int)(_Src + (in_EAX[2] - *in_EAX));
      *in_EAX = (int)_Src;
      in_ECX[0xd] = (uint)pvVar3;
      FUN_006cd870(0xfffffffd);
      return;
    case (undefined *)0x6cea1a:
      goto LAB_006cea1a;
    case (undefined *)0x6cea57:
      goto LAB_006cea57;
    }
    uVar9 = *in_ECX;
    pvVar3 = local_38;
    pbVar5 = local_2c;
    uVar7 = uVar6;
    uVar6 = local_3c;
  } while( true );
LAB_006ce7a8:
  in_ECX[8] = local_3c;
  in_ECX[7] = uVar12;
  in_EAX[1] = 0;
LAB_006ce7b9:
  iVar13 = *in_EAX;
  *in_EAX = (int)_Src;
  in_EAX[2] = (int)(_Src + (in_EAX[2] - iVar13));
  in_ECX[0xd] = (uint)local_38;
  FUN_006cd870(param_1);
  return;
}


/* FUN_006cead0 @ 006cead0  kind=gamemisc  attributed-by=none  size=57 */

undefined4 FUN_006cead0(void)

{
  int in_EAX;
  int in_ECX;
  
  FUN_006cdf40();
  (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),*(undefined4 *)(in_ECX + 0x28));
  (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),*(undefined4 *)(in_ECX + 0x24));
  (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28));
  return 0;
}


/* FUN_006ceb10 @ 006ceb10  kind=gamemisc  attributed-by=none  size=63 */

undefined4 FUN_006ceb10(void)

{
  uint *puVar1;
  int in_EAX;
  
  if ((in_EAX != 0) && (puVar1 = *(uint **)(in_EAX + 0x1c), puVar1 != (uint *)0x0)) {
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined4 *)(in_EAX + 8) = 0;
    *(undefined4 *)(in_EAX + 0x18) = 0;
    *puVar1 = -(uint)(puVar1[3] != 0) & 7;
    FUN_006cdf40();
    return 0;
  }
  return 0xfffffffe;
}


/* FUN_006ceb50 @ 006ceb50  kind=gamemisc  attributed-by=none  size=63 */

undefined4 FUN_006ceb50(void)

{
  int unaff_ESI;
  
  if (((unaff_ESI != 0) && (*(int *)(unaff_ESI + 0x1c) != 0)) && (*(int *)(unaff_ESI + 0x24) != 0))
  {
    if (*(int *)(*(int *)(unaff_ESI + 0x1c) + 0x14) != 0) {
      FUN_006cead0();
    }
    (**(code **)(unaff_ESI + 0x24))
              (*(undefined4 *)(unaff_ESI + 0x28),*(undefined4 *)(unaff_ESI + 0x1c));
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}


/* FUN_006cef50 @ 006cef50  kind=gamemisc  attributed-by=none  size=295 */

uint FUN_006cef50(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  
  uVar2 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_2 != (byte *)0x0) {
    while (param_3 != 0) {
      uVar1 = param_3;
      if (0x15af < param_3) {
        uVar1 = 0x15b0;
      }
      param_3 = param_3 - uVar1;
      if (0xf < (int)uVar1) {
        uVar18 = uVar1 >> 4;
        uVar1 = uVar1 + uVar18 * -0x10;
        do {
          iVar3 = uVar2 + *param_2;
          iVar4 = iVar3 + (uint)param_2[1];
          iVar5 = iVar4 + (uint)param_2[2];
          iVar6 = iVar5 + (uint)param_2[3];
          iVar7 = iVar6 + (uint)param_2[4];
          iVar8 = iVar7 + (uint)param_2[5];
          iVar9 = iVar8 + (uint)param_2[6];
          iVar10 = iVar9 + (uint)param_2[7];
          iVar11 = iVar10 + (uint)param_2[8];
          iVar12 = iVar11 + (uint)param_2[9];
          iVar13 = iVar12 + (uint)param_2[10];
          iVar14 = iVar13 + (uint)param_2[0xb];
          iVar15 = iVar14 + (uint)param_2[0xc];
          iVar16 = iVar15 + (uint)param_2[0xd];
          iVar17 = iVar16 + (uint)param_2[0xe];
          uVar2 = iVar17 + (uint)param_2[0xf];
          param_1 = param_1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                    iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar2;
          param_2 = param_2 + 0x10;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        uVar2 = uVar2 + *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + uVar2;
      }
      uVar2 = uVar2 % 0xfff1;
      param_1 = param_1 % 0xfff1;
    }
    return param_1 << 0x10 | uVar2;
  }
  return 1;
}


/* FUN_006cf090 @ 006cf090  kind=gamemisc  attributed-by=none  size=29 */

void FUN_006cf090(undefined4 param_1,int param_2,int param_3)

{
  FUN_00692230(param_1,param_2 * param_3,&param_2);
  return;
}


/* thunk_FUN_006cf090 @ 006cf0c0  kind=gamemisc  attributed-by=none  size=5 */

void thunk_FUN_006cf090(undefined4 param_1,int param_2,int param_3)

{
  FUN_00692230(param_1,param_2 * param_3,&param_2);
  return;
}


/* FUN_006cf0e0 @ 006cf0e0  kind=gamemisc  attributed-by=none  size=322 */

/* WARNING: Removing unreachable block (ram,0x006cf1ff) */
/* WARNING: Removing unreachable block (ram,0x006cf1c0) */

int FUN_006cf0e0(void)

{
  char cVar1;
  int iVar2;
  undefined4 local_4;
  
  iVar2 = FUN_006908c0();
  if ((iVar2 == 0) && (iVar2 = FUN_00691ec0(), iVar2 == 0)) {
    if (((char)local_4 == '\x1f') &&
       ((((char)(local_4 >> 8) == -0x75 && (local_4._2_1_ == '\b')) && ((local_4 & 0xe0000000) == 0)
        ))) {
      iVar2 = FUN_00690900();
      if (((local_4 & 0x4000000) == 0) ||
         ((FUN_00690bf0(), iVar2 == 0 && (iVar2 = FUN_00690900(), iVar2 == 0)))) {
        if ((local_4 & 0x8000000) != 0) {
          cVar1 = FUN_00690b20();
          if (iVar2 != 0) {
            return iVar2;
          }
          while (cVar1 != '\0') {
            cVar1 = FUN_00690b20();
          }
        }
        if ((local_4 & 0x10000000) != 0) {
          cVar1 = FUN_00690b20();
          if (iVar2 != 0) {
            return iVar2;
          }
          while (cVar1 != '\0') {
            cVar1 = FUN_00690b20();
          }
        }
        if ((local_4 & 0x2000000) != 0) {
          iVar2 = FUN_00690900();
          return iVar2;
        }
      }
    }
    else {
      iVar2 = 3;
    }
  }
  return iVar2;
}


/* FUN_006cf230 @ 006cf230  kind=gamemisc  attributed-by=none  size=41 */

void FUN_006cf230(void)

{
  undefined4 *unaff_EDI;
  
  FUN_006ceb50();
  unaff_EDI[0xb] = 0;
  unaff_EDI[0xc] = 0;
  unaff_EDI[0xd] = 0;
  unaff_EDI[3] = 0;
  unaff_EDI[6] = 0;
  unaff_EDI[4] = 0;
  unaff_EDI[7] = 0;
  unaff_EDI[2] = 0;
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  return;
}


/* FUN_006cf260 @ 006cf260  kind=gamemisc  attributed-by=none  size=77 */

int FUN_006cf260(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  iVar2 = FUN_006908c0(*unaff_ESI,unaff_ESI[0x11]);
  if (iVar2 == 0) {
    FUN_006ceb10();
    unaff_ESI[6] = unaff_ESI + 0x412;
    puVar1 = unaff_ESI + 0x812;
    unaff_ESI[4] = 0;
    unaff_ESI[3] = unaff_ESI + 0x12;
    unaff_ESI[7] = 0;
    unaff_ESI[0x814] = puVar1;
    unaff_ESI[0x813] = puVar1;
    *puVar1 = 0;
  }
  return iVar2;
}


/* FUN_006cf2b0 @ 006cf2b0  kind=gamemisc  attributed-by=none  size=114 */

undefined4 FUN_006cf2b0(int *param_1)

{
  int *piVar1;
  size_t _Size;
  
  piVar1 = (int *)*param_1;
  if ((code *)piVar1[5] == (code *)0x0) {
    _Size = piVar1[1] - piVar1[2];
    if (_Size < 0x1001) {
      if (_Size == 0) {
        return 0x55;
      }
    }
    else {
      _Size = 0x1000;
    }
    memcpy(param_1 + 0x12,(void *)(*piVar1 + piVar1[2]),_Size);
  }
  else {
    _Size = (*(code *)piVar1[5])(piVar1,piVar1[2],param_1 + 0x12,0x1000);
    if (_Size == 0) {
      return 0x55;
    }
  }
  piVar1[2] = piVar1[2] + _Size;
  param_1[4] = _Size;
  param_1[3] = (int)(param_1 + 0x12);
  return 0;
}


/* FUN_006cf330 @ 006cf330  kind=gamemisc  attributed-by=none  size=110 */

int FUN_006cf330(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  *(int *)(unaff_EDI + 0x204c) = unaff_EDI + 0x1048;
  *(int *)(unaff_EDI + 0x18) = unaff_EDI + 0x1048;
  *(undefined4 *)(unaff_EDI + 0x1c) = 0x1000;
  iVar2 = 0;
  while( true ) {
    if ((*(int *)(unaff_EDI + 0x10) == 0) && (iVar2 = FUN_006cf2b0(), iVar2 != 0)) {
      return iVar2;
    }
    iVar1 = FUN_006ceb90(0);
    if (iVar1 == 1) {
      *(int *)(unaff_EDI + 0x2050) = *(int *)(unaff_EDI + 0x18);
      if (*(int *)(unaff_EDI + 0x18) != *(int *)(unaff_EDI + 0x204c)) {
        return iVar2;
      }
      return 0x55;
    }
    if (iVar1 != 0) break;
    if (*(int *)(unaff_EDI + 0x1c) == 0) {
      return iVar2;
    }
  }
  return 0x55;
}


/* FUN_006cf3a0 @ 006cf3a0  kind=gamemisc  attributed-by=none  size=60 */

int FUN_006cf3a0(void)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  while( true ) {
    uVar2 = *(int *)(in_ECX + 0x2050) - *(int *)(in_ECX + 0x204c);
    if (in_EAX <= uVar2) {
      uVar2 = in_EAX;
    }
    *(int *)(in_ECX + 0x2048) = *(int *)(in_ECX + 0x2048) + uVar2;
    in_EAX = in_EAX - uVar2;
    *(uint *)(in_ECX + 0x204c) = *(int *)(in_ECX + 0x204c) + uVar2;
    if (in_EAX == 0) break;
    iVar1 = FUN_006cf330();
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return 0;
}


/* FUN_006cf3f0 @ 006cf3f0  kind=gamemisc  attributed-by=none  size=155 */

int FUN_006cf3f0(void *param_1,uint param_2)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  uint _Size;
  int local_4;
  
  local_4 = 0;
  if ((in_EAX < *(uint *)(in_ECX + 0x2048)) && (iVar1 = FUN_006cf260(), iVar1 != 0)) {
    return 0;
  }
  if ((*(uint *)(in_ECX + 0x2048) < in_EAX) && (iVar1 = FUN_006cf3a0(), iVar1 != 0)) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  while( true ) {
    _Size = *(int *)(in_ECX + 0x2050) - (int)*(void **)(in_ECX + 0x204c);
    if (param_2 <= _Size) {
      _Size = param_2;
    }
    memcpy(param_1,*(void **)(in_ECX + 0x204c),_Size);
    local_4 = local_4 + _Size;
    *(int *)(in_ECX + 0x204c) = *(int *)(in_ECX + 0x204c) + _Size;
    *(int *)(in_ECX + 0x2048) = *(int *)(in_ECX + 0x2048) + _Size;
    param_1 = (void *)((int)param_1 + _Size);
    param_2 = param_2 - _Size;
    if (param_2 == 0) break;
    iVar1 = FUN_006cf330();
    if (iVar1 != 0) {
      return local_4;
    }
  }
  return local_4;
}


/* FUN_006cf4e0 @ 006cf4e0  kind=gamemisc  attributed-by=none  size=69 */

undefined4 FUN_006cf4e0(void)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_006908c0();
  if (iVar1 == 0) {
    uVar2 = FUN_00690cd0();
    if (in_ECX != 0) {
      uVar2 = 0;
    }
    FUN_006908c0();
  }
  return uVar2;
}


/* FUN_006cf530 @ 006cf530  kind=gamemisc  attributed-by=none  size=237 */

undefined4 FUN_006cf530(int param_1)

{
  char *in_EAX;
  int iVar1;
  int in_ECX;
  int in_EDX;
  
  if (((in_EAX == (char *)0x0) || (*in_EAX != '1')) || (param_1 != 0x38)) {
    return 0xfffffffa;
  }
  if (in_EDX == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(in_EDX + 0x18) = 0;
  if (*(int *)(in_EDX + 0x20) == 0) {
    *(code **)(in_EDX + 0x20) = thunk_FUN_006cf090;
    *(undefined4 *)(in_EDX + 0x28) = 0;
  }
  if (*(int *)(in_EDX + 0x24) == 0) {
    *(undefined **)(in_EDX + 0x24) = &DAT_006cf0d0;
  }
  iVar1 = (**(code **)(in_EDX + 0x20))(*(undefined4 *)(in_EDX + 0x28),1,0x18);
  *(int *)(in_EDX + 0x1c) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(*(int *)(in_EDX + 0x1c) + 0xc) = 0;
    if (in_ECX < 0) {
      in_ECX = -in_ECX;
      *(undefined4 *)(*(int *)(in_EDX + 0x1c) + 0xc) = 1;
    }
    if (7 < in_ECX - 8U) {
      FUN_006ceb50();
      return 0xfffffffe;
    }
    *(int *)(*(int *)(in_EDX + 0x1c) + 0x10) = in_ECX;
    iVar1 = FUN_006cdfb0(~-(uint)(*(int *)(*(int *)(in_EDX + 0x1c) + 0xc) != 0) & 0x6cef50);
    *(int *)(*(int *)(in_EDX + 0x1c) + 0x14) = iVar1;
    if (iVar1 != 0) {
      FUN_006ceb10();
      return 0;
    }
    FUN_006ceb50();
  }
  return 0xfffffffc;
}


/* FUN_006cf620 @ 006cf620  kind=gamemisc  attributed-by=none  size=142 */

int FUN_006cf620(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *in_EDX;
  
  in_EDX[1] = in_EAX;
  *in_EDX = in_ECX;
  in_EDX[2] = *(int *)(in_EAX + 0x1c);
  piVar1 = in_EDX + 0x812;
  in_EDX[0x814] = (int)piVar1;
  in_EDX[0x813] = (int)piVar1;
  *piVar1 = 0;
  iVar2 = FUN_006cf0e0();
  if (iVar2 == 0) {
    iVar3 = FUN_00690930();
    in_EDX[0x11] = iVar3;
    in_EDX[0xb] = (int)FUN_006cf090;
    in_EDX[0xc] = (int)&LAB_006cf0b0;
    in_EDX[0xd] = *(int *)(in_ECX + 0x1c);
    in_EDX[4] = 0;
    in_EDX[3] = (int)(in_EDX + 0x412);
    iVar3 = FUN_006cf530(0x38);
    if ((iVar3 != 0) || (in_EDX[3] == 0)) {
      return 3;
    }
  }
  return iVar2;
}


/* FUN_006cf6b0 @ 006cf6b0  kind=gamemisc  attributed-by=none  size=326 */

int FUN_006cf6b0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  param_2 = FUN_006cf0e0();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = uVar1;
    uVar2 = FUN_00691240(uVar1,0x2054,&param_2);
    if (param_2 == 0) {
      param_2 = FUN_006cf620();
      if (param_2 != 0) {
        FUN_00691290(uVar1,uVar2);
        return param_2;
      }
      param_1[3] = uVar2;
      param_2 = 0;
    }
    uVar3 = FUN_006cf4e0();
    if ((uVar3 != 0) && (uVar3 < 0xa000)) {
      uVar4 = FUN_00692230(uVar1,uVar3,&param_2);
      if (param_2 == 0) {
        uVar5 = FUN_006cf3f0(uVar4,uVar3);
        if (uVar5 == uVar3) {
          FUN_006cf230();
          FUN_00691290(uVar1,uVar2);
          param_1[3] = 0;
          param_1[1] = uVar3;
          param_1[2] = 0;
          param_1[5] = 0;
          *param_1 = uVar4;
          param_1[6] = &LAB_006cf490;
          return param_2;
        }
        FUN_006cf3f0(0,0);
        FUN_00691290(uVar1,uVar4);
      }
      param_2 = 0;
    }
    param_1[1] = 0x7fffffff;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[5] = &LAB_006cf4c0;
    param_1[6] = &LAB_006cf490;
  }
  return param_2;
}


/* FUN_006d0440 @ 006d0440  kind=gamemisc  attributed-by=none  size=43 */

undefined4 FUN_006d0440(int param_1,int param_2)

{
  if ((**(int **)(param_1 + 0x1c) < 0x41) && (param_2 != 0)) {
    return 0xffffffff;
  }
  (*(int **)(param_1 + 0x1c))[0x392] = (uint)(param_2 != 0);
  return 0;
}


/* FUN_006d07c0 @ 006d07c0  kind=gamemisc  attributed-by=none  size=51 */

undefined * FUN_006d07c0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 4 + param_2 * 4);
  if (iVar1 + -1 < 0) {
    return (undefined *)0x0;
  }
  return (&PTR_DAT_0073fe10)[iVar1 - *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 0xe48)];
}


/* FUN_006d0800 @ 006d0800  kind=gamemisc  attributed-by=none  size=794 */

int FUN_006d0800(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  int local_18;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 4);
  piVar3 = *(int **)(iVar2 + 0x1c);
  iVar4 = piVar3[*(int *)(param_1 + 0x28)];
  bVar9 = (char)piVar3[0x392] + 1;
  iVar13 = piVar3[1] >> (bVar9 & 0x1f);
  uVar6 = *piVar3 >> (bVar9 & 0x1f);
  if (*(int *)(param_1 + 0x18) < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30) == iVar13) {
    local_14 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      do {
        iVar5 = *(int *)(*(int *)(param_1 + 8) + local_14 * 4);
        iVar10 = 0;
        if (3 < iVar13) {
          iVar7 = (iVar13 - 4U >> 2) + 1;
          puVar14 = (undefined4 *)(iVar5 + iVar13 * 4);
          puVar11 = (undefined4 *)(iVar5 + 8);
          iVar10 = iVar7 * 4;
          do {
            uVar1 = puVar11[-2];
            puVar11[-2] = *puVar14;
            *puVar14 = uVar1;
            uVar1 = puVar11[-1];
            puVar11[-1] = puVar14[1];
            puVar14[1] = uVar1;
            uVar1 = *puVar11;
            *puVar11 = puVar14[2];
            puVar14[2] = uVar1;
            uVar1 = puVar11[1];
            puVar11[1] = puVar14[3];
            puVar14[3] = uVar1;
            puVar14 = puVar14 + 4;
            puVar11 = puVar11 + 4;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        if (iVar10 < iVar13) {
          puVar11 = (undefined4 *)(iVar5 + (iVar10 + iVar13) * 4);
          do {
            uVar1 = *(undefined4 *)(iVar5 + iVar10 * 4);
            *(undefined4 *)(iVar5 + iVar10 * 4) = *puVar11;
            iVar10 = iVar10 + 1;
            *puVar11 = uVar1;
            puVar11 = puVar11 + 1;
          } while (iVar10 < iVar13);
        }
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(iVar2 + 4));
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - iVar13;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar13;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((*(uint *)(param_1 + 0x28) ^ *(uint *)(param_1 + 0x24)) == 1) {
    local_18 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      uVar8 = (int)(uVar6 + iVar13) / 2;
      iVar10 = uVar8 - 1;
      do {
        iVar7 = *(int *)(*(int *)(param_1 + 8) + local_18 * 4);
        iVar5 = ((int)(iVar13 - uVar6) / 2) * 4 + iVar7;
        if (-1 < iVar10) {
          iVar12 = iVar10;
          if (3 < (int)uVar8) {
            uVar15 = uVar8 >> 2;
            puVar14 = (undefined4 *)(iVar7 + (uVar8 - 4) * 4);
            puVar11 = (undefined4 *)(iVar5 + -4 + iVar10 * 4);
            iVar12 = iVar10 + uVar15 * -4;
            do {
              puVar11[1] = puVar14[3];
              *puVar11 = *(undefined4 *)((iVar7 - iVar5) + (int)puVar11);
              puVar11[-1] = puVar14[1];
              puVar11[-2] = *puVar14;
              puVar11 = puVar11 + -4;
              puVar14 = puVar14 + -4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          if (-1 < iVar12) {
            puVar11 = (undefined4 *)(iVar5 + iVar12 * 4);
            do {
              iVar12 = iVar12 + -1;
              *puVar11 = *(undefined4 *)((int)puVar11 + (iVar7 - iVar5));
              puVar11 = puVar11 + -1;
            } while (-1 < iVar12);
          }
        }
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(iVar2 + 4));
    }
    iVar10 = (int)(iVar13 - uVar6) / 2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar10;
  }
  else {
    if (*(uint *)(param_1 + 0x24) != 0) goto LAB_006d0ada;
    local_14 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      iVar10 = uVar6 - 1;
      do {
        iVar7 = *(int *)(*(int *)(param_1 + 8) + local_14 * 4);
        iVar5 = (iVar13 - uVar6) * 4 + iVar7;
        if (-1 < iVar10) {
          iVar12 = iVar10;
          if (3 < (int)uVar6) {
            uVar8 = uVar6 >> 2;
            puVar14 = (undefined4 *)(iVar7 + (uVar6 - 4) * 4);
            puVar11 = (undefined4 *)(iVar5 + -4 + iVar10 * 4);
            iVar12 = iVar10 + uVar8 * -4;
            do {
              puVar11[1] = puVar14[3];
              *puVar11 = *(undefined4 *)((iVar7 - iVar5) + (int)puVar11);
              puVar11[-1] = puVar14[1];
              puVar11[-2] = *puVar14;
              puVar11 = puVar11 + -4;
              puVar14 = puVar14 + -4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (-1 < iVar12) {
            puVar11 = (undefined4 *)(iVar5 + iVar12 * 4);
            do {
              iVar12 = iVar12 + -1;
              *puVar11 = *(undefined4 *)((int)puVar11 + (iVar7 - iVar5));
              puVar11 = puVar11 + -1;
            } while (-1 < iVar12);
          }
        }
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(iVar2 + 4));
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (iVar13 - uVar6);
    iVar10 = iVar13 - uVar6;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar10;
LAB_006d0ada:
  if (param_2 != (undefined4 *)0x0) {
    iVar10 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      do {
        iVar5 = iVar10 * 4;
        iVar10 = iVar10 + 1;
        *(int *)(*(int *)(param_1 + 0xc) + -4 + iVar10 * 4) =
             *(int *)(*(int *)(param_1 + 8) + iVar5) + *(int *)(param_1 + 0x18) * 4;
      } while (iVar10 < *(int *)(iVar2 + 4));
    }
    *param_2 = *(undefined4 *)(param_1 + 0xc);
  }
  return (iVar13 - *(int *)(param_1 + 0x18)) + (iVar4 >> (bVar9 & 0x1f));
}


/* FUN_006d1b80 @ 006d1b80  kind=gamemisc  attributed-by=none  size=33 */

int FUN_006d1b80(undefined4 *param_1,undefined4 *param_2)

{
  return (uint)(*(uint *)*param_2 < *(uint *)*param_1) -
         (uint)(*(uint *)*param_1 < *(uint *)*param_2);
}


/* FUN_006d2140 @ 006d2140  kind=gamemisc  attributed-by=none  size=82 */

void FUN_006d2140(void)

{
  uint in_ECX;
  double _X;
  
  _X = (double)(in_ECX & 0x1fffff);
  if ((int)in_ECX < 0) {
    _X = -_X;
  }
  ldexp(_X,((int)in_ECX >> 0x15 & 0x3ffU) - 0x314);
  return;
}


/* FUN_006d2870 @ 006d2870  kind=gamemisc  attributed-by=none  size=307 */

undefined4 FUN_006d2870(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  double dVar3;
  
  memset(in_ECX,0,0x38);
  in_ECX[3] = in_EDX;
  in_ECX[1] = in_EDX[1];
  in_ECX[2] = in_EDX[1];
  *in_ECX = *in_EDX;
  uVar2 = FUN_006d1fa0(0);
  in_ECX[5] = uVar2;
  uVar2 = FUN_006d1f00();
  in_ECX[0xb] = uVar2;
  uVar1 = in_EDX[4];
  dVar3 = (double)(uVar1 & 0x1fffff);
  if ((int)uVar1 < 0) {
    dVar3 = -dVar3;
  }
  dVar3 = ldexp(dVar3,((int)uVar1 >> 0x15 & 0x3ffU) - 0x314);
  floor((double)((float)dVar3 + 0.5));
  uVar2 = FUN_0068d910();
  in_ECX[0xc] = uVar2;
  uVar1 = in_EDX[5];
  dVar3 = (double)(uVar1 & 0x1fffff);
  if ((int)uVar1 < 0) {
    dVar3 = -dVar3;
  }
  dVar3 = ldexp(dVar3,((int)uVar1 >> 0x15 & 0x3ffU) - 0x314);
  floor((double)((float)dVar3 + 0.5));
  uVar2 = FUN_0068d910();
  in_ECX[0xd] = uVar2;
  return 0;
}


/* FUN_006d2a00 @ 006d2a00  kind=gamemisc  attributed-by=none  size=91 */

void FUN_006d2a00(void)

{
  void *in_ECX;
  
  if (*(void **)((int)in_ECX + 0x10) != (void *)0x0) {
    free(*(void **)((int)in_ECX + 0x10));
  }
  if (*(void **)((int)in_ECX + 0x14) != (void *)0x0) {
    free(*(void **)((int)in_ECX + 0x14));
  }
  if (*(void **)((int)in_ECX + 0x18) != (void *)0x0) {
    free(*(void **)((int)in_ECX + 0x18));
  }
  if (*(void **)((int)in_ECX + 0x1c) != (void *)0x0) {
    free(*(void **)((int)in_ECX + 0x1c));
  }
  if (*(void **)((int)in_ECX + 0x20) != (void *)0x0) {
    free(*(void **)((int)in_ECX + 0x20));
  }
  memset(in_ECX,0,0x38);
  return;
}


/* FUN_006d2a60 @ 006d2a60  kind=gamemisc  attributed-by=none  size=743 */

undefined4 FUN_006d2a60(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *in_ECX;
  int in_EDX;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int local_14;
  
  iVar9 = 0;
  local_14 = 0;
  if (0 < in_ECX[2]) {
    iVar3 = param_1 / param_2;
    while (iVar3 < (param_1 + param_4) / param_2) {
      iVar6 = in_ECX[10];
      iVar4 = FUN_00401d70();
      if (iVar4 < 0) {
        uVar10 = 0;
        iVar4 = in_ECX[2];
LAB_006d2b48:
        uVar5 = FUN_00401d70();
        while ((int)uVar5 < 0) {
          if (iVar6 < 2) {
            if ((int)uVar5 < 0) {
              return 0xffffffff;
            }
            break;
          }
          iVar6 = iVar6 + -1;
          uVar5 = FUN_00401d70();
        }
        uVar5 = uVar5 << 0x10 | uVar5 >> 0x10;
        uVar5 = (uVar5 >> 8 ^ uVar5 << 8) & 0xff00ff ^ uVar5 << 8;
        uVar5 = (uVar5 >> 4 ^ uVar5 << 4) & 0xf0f0f0f ^ uVar5 << 4;
        uVar5 = (uVar5 >> 2 ^ uVar5 * 4) & 0x33333333 ^ uVar5 * 4;
        iVar7 = iVar4 - uVar10;
        if (1 < iVar7) {
          do {
            uVar8 = iVar7 >> 1;
            uVar2 = (uint)(((uVar5 >> 1 ^ uVar5 * 2) & 0x55555555 ^ uVar5 * 2) <
                          *(uint *)(in_ECX[5] + (uVar8 + uVar10) * 4));
            iVar4 = iVar4 - (-uVar2 & uVar8);
            uVar10 = uVar10 + (uVar2 - 1 & uVar8);
            iVar7 = iVar4 - uVar10;
            iVar9 = local_14;
          } while (1 < iVar7);
        }
        if (iVar6 < *(char *)(in_ECX[7] + uVar10)) {
          uVar10 = param_3[1] + iVar6;
          if (*param_3 <= param_3[4] - ((int)(uVar10 + 7) >> 3)) {
            iVar9 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 7U)) >> 3;
            param_3[3] = param_3[3] + iVar9;
            *param_3 = iVar9 + *param_3;
            param_3[1] = uVar10 & 7;
            return 0xffffffff;
          }
          param_3[3] = 0;
          *param_3 = param_3[4];
          param_3[1] = 1;
          return 0xffffffff;
        }
        uVar5 = param_3[1] + (int)*(char *)(in_ECX[7] + uVar10);
        if (param_3[4] - ((int)(uVar5 + 7) >> 3) < *param_3) {
          param_3[3] = 0;
          *param_3 = param_3[4];
          param_3[1] = 1;
        }
        else {
          iVar6 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3;
          param_3[3] = param_3[3] + iVar6;
          *param_3 = iVar6 + *param_3;
          param_3[1] = uVar5 & 7;
        }
      }
      else {
        uVar5 = *(uint *)(in_ECX[8] + iVar4 * 4);
        if ((int)uVar5 < 0) {
          uVar10 = (int)uVar5 >> 0xf & 0x7fff;
          iVar4 = in_ECX[2] - (uVar5 & 0x7fff);
          goto LAB_006d2b48;
        }
        uVar10 = (int)*(char *)(in_ECX[7] + -1 + uVar5) + param_3[1];
        if (param_3[4] - ((int)(uVar10 + 7) >> 3) < *param_3) {
          param_3[3] = 0;
          *param_3 = param_3[4];
          param_3[1] = 1;
          uVar10 = uVar5 - 1;
        }
        else {
          iVar6 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 7U)) >> 3;
          param_3[3] = param_3[3] + iVar6;
          param_3[1] = uVar10 & 7;
          *param_3 = iVar6 + *param_3;
          uVar10 = uVar5 - 1;
        }
      }
      if (uVar10 == 0xffffffff) {
        return 0xffffffff;
      }
      iVar6 = *in_ECX;
      iVar4 = in_ECX[4];
      iVar7 = 0;
      if (0 < iVar6) {
        do {
          iVar1 = *(int *)(in_EDX + iVar9 * 4);
          iVar9 = iVar9 + 1;
          *(float *)(iVar1 + iVar3 * 4) =
               *(float *)(iVar4 + iVar6 * uVar10 * 4 + iVar7 * 4) + *(float *)(iVar1 + iVar3 * 4);
          if (iVar9 == param_2) {
            iVar9 = 0;
            iVar3 = iVar3 + 1;
          }
          iVar7 = iVar7 + 1;
          local_14 = iVar9;
        } while (iVar7 < *in_ECX);
      }
    }
  }
  return 0;
}


/* FUN_006d2d60 @ 006d2d60  kind=gamemisc  attributed-by=none  size=868 */

undefined4 FUN_006d2d60(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  undefined4 *in_EDX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_c;
  uint local_8;
  
  if (in_ECX[2] < 1) {
    if (0 < param_2) {
      for (; param_2 != 0; param_2 = param_2 + -1) {
        *in_EDX = 0;
        in_EDX = in_EDX + 1;
      }
    }
  }
  else {
    iVar8 = 0;
    local_c = 0;
    if (0 < param_2) {
      do {
        iVar3 = in_ECX[10];
        iVar1 = FUN_00401d70();
        if (iVar1 < 0) {
          iVar1 = in_ECX[2];
          local_8 = 0;
LAB_006d2e38:
          uVar2 = FUN_00401d70();
          while ((int)uVar2 < 0) {
            if (iVar3 < 2) {
              if ((int)uVar2 < 0) {
                return 0xffffffff;
              }
              break;
            }
            iVar3 = iVar3 + -1;
            uVar2 = FUN_00401d70();
          }
          uVar2 = uVar2 << 0x10 | uVar2 >> 0x10;
          uVar2 = (uVar2 >> 8 ^ uVar2 << 8) & 0xff00ff ^ uVar2 << 8;
          uVar2 = (uVar2 >> 4 ^ uVar2 << 4) & 0xf0f0f0f ^ uVar2 << 4;
          uVar2 = (uVar2 >> 2 ^ uVar2 * 4) & 0x33333333 ^ uVar2 * 4;
          iVar5 = iVar1 - local_8;
          if (1 < iVar5) {
            do {
              uVar6 = iVar5 >> 1;
              uVar4 = (uint)(((uVar2 >> 1 ^ uVar2 * 2) & 0x55555555 ^ uVar2 * 2) <
                            *(uint *)(in_ECX[5] + (uVar6 + local_8) * 4));
              iVar1 = iVar1 - (-uVar4 & uVar6);
              local_8 = local_8 + (uVar4 - 1 & uVar6);
              iVar5 = iVar1 - local_8;
              iVar8 = local_c;
            } while (1 < iVar5);
          }
          if (iVar3 < *(char *)(in_ECX[7] + local_8)) {
            uVar2 = param_1[1] + iVar3;
            if (*param_1 <= param_1[4] - ((int)(uVar2 + 7) >> 3)) {
              iVar8 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
              param_1[3] = param_1[3] + iVar8;
              *param_1 = iVar8 + *param_1;
              param_1[1] = uVar2 & 7;
              return 0xffffffff;
            }
            param_1[3] = 0;
            *param_1 = param_1[4];
            param_1[1] = 1;
            return 0xffffffff;
          }
          uVar2 = param_1[1] + (int)*(char *)(in_ECX[7] + local_8);
          if (param_1[4] - ((int)(uVar2 + 7) >> 3) < *param_1) {
            param_1[3] = 0;
            *param_1 = param_1[4];
            param_1[1] = 1;
          }
          else {
            iVar3 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
            param_1[3] = param_1[3] + iVar3;
            *param_1 = iVar3 + *param_1;
            param_1[1] = uVar2 & 7;
          }
        }
        else {
          uVar2 = *(uint *)(in_ECX[8] + iVar1 * 4);
          if ((int)uVar2 < 0) {
            local_8 = (int)uVar2 >> 0xf & 0x7fff;
            iVar1 = in_ECX[2] - (uVar2 & 0x7fff);
            goto LAB_006d2e38;
          }
          uVar4 = (int)*(char *)(in_ECX[7] + -1 + uVar2) + param_1[1];
          if (param_1[4] - ((int)(uVar4 + 7) >> 3) < *param_1) {
            *param_1 = param_1[4];
            param_1[3] = 0;
            param_1[1] = 1;
            local_8 = uVar2 - 1;
          }
          else {
            iVar3 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3;
            param_1[3] = param_1[3] + iVar3;
            *param_1 = iVar3 + *param_1;
            param_1[1] = uVar4 & 7;
            local_8 = uVar2 - 1;
          }
        }
        if (local_8 == 0xffffffff) {
          return 0xffffffff;
        }
        iVar3 = in_ECX[4] + *in_ECX * local_8 * 4;
        iVar1 = 0;
        if (3 < param_2 - iVar8) {
          puVar7 = in_EDX + iVar8 + 2;
          do {
            if (*in_ECX <= iVar1) goto LAB_006d3043;
            puVar7[-2] = *(undefined4 *)(iVar3 + -4 + (iVar1 + 1) * 4);
            if (*in_ECX <= iVar1 + 1) {
              iVar8 = iVar8 + 1;
              local_c = iVar8;
              goto LAB_006d3043;
            }
            puVar7[-1] = *(undefined4 *)(iVar3 + -4 + (iVar1 + 2) * 4);
            if (*in_ECX <= iVar1 + 2) {
              iVar8 = iVar8 + 2;
              local_c = iVar8;
              goto LAB_006d3043;
            }
            iVar5 = iVar1 + 3;
            *puVar7 = *(undefined4 *)(iVar3 + -4 + iVar5 * 4);
            if (*in_ECX <= iVar5) {
              iVar8 = iVar8 + 3;
              local_c = iVar8;
              goto LAB_006d3043;
            }
            iVar8 = iVar8 + 4;
            puVar7[1] = *(undefined4 *)(iVar3 + iVar5 * 4);
            iVar1 = iVar1 + 4;
            puVar7 = puVar7 + 4;
            local_c = iVar8;
          } while (iVar8 < param_2 + -3);
        }
        if (param_2 <= iVar8) {
          return 0;
        }
        puVar7 = (undefined4 *)(iVar3 + iVar1 * 4);
        while (iVar1 < *in_ECX) {
          in_EDX[iVar8] = *puVar7;
          iVar8 = iVar8 + 1;
          iVar1 = iVar1 + 1;
          puVar7 = puVar7 + 1;
          local_c = iVar8;
          if (param_2 <= iVar8) {
            return 0;
          }
        }
LAB_006d3043:
        if (param_2 <= iVar8) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


/* FUN_006d30d0 @ 006d30d0  kind=gamemisc  attributed-by=none  size=191 */

undefined4 FUN_006d30d0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (0 < param_1[2]) {
    iVar9 = 0;
    if (*param_1 < 9) {
      if (0 < param_4) {
        do {
          iVar7 = FUN_006d3630();
          if (iVar7 == -1) {
            return 0xffffffff;
          }
          pfVar3 = (float *)(param_1[4] + *param_1 * iVar7 * 4);
          iVar7 = 0;
          switch(*param_1) {
          case 8:
            iVar5 = iVar9 * 4;
            iVar7 = 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = *pfVar3 + *(float *)(param_2 + iVar5);
          case 7:
            pfVar4 = pfVar3 + iVar7;
            iVar5 = iVar9 * 4;
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = *pfVar4 + *(float *)(param_2 + iVar5);
          case 6:
            pfVar4 = pfVar3 + iVar7;
            iVar5 = iVar9 * 4;
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = *pfVar4 + *(float *)(param_2 + iVar5);
          case 5:
            pfVar4 = pfVar3 + iVar7;
            iVar5 = iVar9 * 4;
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = *pfVar4 + *(float *)(param_2 + iVar5);
          case 4:
            pfVar4 = pfVar3 + iVar7;
            iVar5 = iVar9 * 4;
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = *pfVar4 + *(float *)(param_2 + iVar5);
          case 3:
            pfVar4 = pfVar3 + iVar7;
            iVar5 = iVar9 * 4;
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = *pfVar4 + *(float *)(param_2 + iVar5);
          case 2:
            pfVar4 = pfVar3 + iVar7;
            iVar5 = iVar9 * 4;
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = *pfVar4 + *(float *)(param_2 + iVar5);
          case 1:
            iVar5 = iVar9 * 4;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = pfVar3[iVar7] + *(float *)(param_2 + iVar5);
          }
        } while (iVar9 < param_4);
      }
    }
    else if (0 < param_4) {
      do {
        iVar7 = FUN_006d3630();
        if (iVar7 == -1) {
          return 0xffffffff;
        }
        iVar5 = *param_1;
        iVar6 = param_1[4];
        iVar8 = 0;
        if (0 < iVar5) {
          do {
            iVar1 = iVar8 * 4;
            iVar2 = iVar9 * 4;
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) =
                 *(float *)(iVar6 + iVar5 * iVar7 * 4 + iVar1) + *(float *)(param_2 + iVar2);
          } while (iVar8 < *param_1);
        }
      } while (iVar9 < param_4);
      return 0;
    }
  }
  return 0;
}


/* FUN_006d3250 @ 006d3250  kind=gamemisc  attributed-by=none  size=927 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_006d3250(int *param_1,float *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uStack_38;
  int *local_14;
  int local_10;
  int local_8;
  
  if (0 < param_1[2]) {
    param_4 = param_4 / *param_1;
    uStack_38 = 0x6d327d;
    local_14 = (int *)(&stack0xffffffcc + param_4 * -8);
    (&uStack_38)[-param_4] = 0x6d328b;
    local_10 = 0;
    if (0 < param_4) {
      do {
        iVar10 = param_1[10];
        (&uStack_38)[param_4 * -2] = 0x6d32b7;
        iVar4 = FUN_00401d70();
        if (iVar4 < 0) {
          uVar11 = 0;
          iVar4 = param_1[2];
LAB_006d3347:
          (&uStack_38)[param_4 * -2] = 0x6d3353;
          uVar5 = FUN_00401d70();
          while ((int)uVar5 < 0) {
            if (iVar10 < 2) {
              if ((int)uVar5 < 0) goto LAB_006d34bc;
              break;
            }
            iVar10 = iVar10 + -1;
            (&uStack_38)[param_4 * -2] = 0x6d3372;
            uVar5 = FUN_00401d70();
          }
          uVar5 = uVar5 << 0x10 | uVar5 >> 0x10;
          uVar5 = (uVar5 >> 8 ^ uVar5 << 8) & 0xff00ff ^ uVar5 << 8;
          uVar5 = (uVar5 >> 4 ^ uVar5 << 4) & 0xf0f0f0f ^ uVar5 << 4;
          uVar5 = (uVar5 >> 2 ^ uVar5 * 4) & 0x33333333 ^ uVar5 * 4;
          iVar8 = iVar4 - uVar11;
          if (1 < iVar8) {
            do {
              uVar9 = iVar8 >> 1;
              uVar3 = (uint)(((uVar5 >> 1 ^ uVar5 * 2) & 0x55555555 ^ uVar5 * 2) <
                            *(uint *)(param_1[5] + (uVar9 + uVar11) * 4));
              iVar4 = iVar4 - (-uVar3 & uVar9);
              uVar11 = uVar11 + (uVar3 - 1 & uVar9);
              iVar8 = iVar4 - uVar11;
            } while (1 < iVar8);
          }
          iVar4 = param_3[4];
          if (iVar10 < *(char *)(param_1[7] + uVar11)) {
            uVar11 = param_3[1] + iVar10;
            if (iVar4 - ((int)(uVar11 + 7) >> 3) < *param_3) {
              param_3[3] = 0;
              *param_3 = iVar4;
              param_3[1] = 1;
            }
            else {
              iVar10 = (int)(uVar11 + ((int)uVar11 >> 0x1f & 7U)) >> 3;
              param_3[3] = param_3[3] + iVar10;
              *param_3 = iVar10 + *param_3;
              param_3[1] = uVar11 & 7;
            }
LAB_006d34bc:
            uVar11 = 0xffffffff;
          }
          else {
            uVar5 = param_3[1] + (int)*(char *)(param_1[7] + uVar11);
            if (iVar4 - ((int)(uVar5 + 7) >> 3) < *param_3) {
              param_3[3] = 0;
              *param_3 = iVar4;
              param_3[1] = 1;
            }
            else {
              iVar10 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3;
              param_3[3] = param_3[3] + iVar10;
              *param_3 = iVar10 + *param_3;
              param_3[1] = uVar5 & 7;
            }
          }
        }
        else {
          uVar5 = *(uint *)(param_1[8] + iVar4 * 4);
          if ((int)uVar5 < 0) {
            uVar11 = (int)uVar5 >> 0xf & 0x7fff;
            iVar4 = param_1[2] - (uVar5 & 0x7fff);
            goto LAB_006d3347;
          }
          uVar11 = (int)*(char *)(param_1[7] + -1 + uVar5) + param_3[1];
          if (param_3[4] - ((int)(uVar11 + 7) >> 3) < *param_3) {
            param_3[3] = 0;
            *param_3 = param_3[4];
            param_3[1] = 1;
            uVar11 = uVar5 - 1;
          }
          else {
            iVar10 = (int)(uVar11 + ((int)uVar11 >> 0x1f & 7U)) >> 3;
            param_3[3] = param_3[3] + iVar10;
            param_3[1] = uVar11 & 7;
            *param_3 = iVar10 + *param_3;
            uVar11 = uVar5 - 1;
          }
        }
        local_14[param_4] = uVar11;
        if (uVar11 == 0xffffffff) {
          return 0xffffffff;
        }
        *local_14 = param_1[4] + *param_1 * uVar11 * 4;
        local_10 = local_10 + 1;
        local_14 = local_14 + 1;
      } while (local_10 < param_4);
    }
    iVar10 = 0;
    local_8 = 0;
    pfVar6 = param_2;
    if (0 < *param_1) {
      do {
        iVar4 = 0;
        if (3 < param_4) {
          iVar8 = (param_4 - 4U >> 2) + 1;
          iVar4 = iVar8 * 4;
          pfVar7 = pfVar6;
          piVar12 = (int *)(&stack0xffffffd4 + param_4 * -8);
          do {
            iVar1 = piVar12[-1];
            *pfVar7 = *(float *)(piVar12[-2] + iVar10 * 4) + *pfVar7;
            iVar2 = *piVar12;
            pfVar7[1] = *(float *)(iVar1 + iVar10 * 4) + pfVar7[1];
            iVar1 = piVar12[1];
            pfVar7[2] = *(float *)(iVar2 + iVar10 * 4) + pfVar7[2];
            pfVar7[3] = *(float *)(iVar1 + iVar10 * 4) + pfVar7[3];
            iVar8 = iVar8 + -1;
            pfVar7 = pfVar7 + 4;
            piVar12 = piVar12 + 4;
          } while (iVar8 != 0);
        }
        if (iVar4 < param_4) {
          pfVar7 = param_2 + local_8 + iVar4;
          do {
            iVar8 = iVar4 * 4;
            iVar4 = iVar4 + 1;
            *pfVar7 = *(float *)(*(int *)(&stack0xffffffcc + iVar8 + param_4 * -8) + iVar10 * 4) +
                      *pfVar7;
            pfVar7 = pfVar7 + 1;
          } while (iVar4 < param_4);
        }
        iVar10 = iVar10 + 1;
        local_8 = local_8 + param_4;
        pfVar6 = pfVar6 + param_4;
      } while (iVar10 < *param_1);
    }
  }
  return 0;
}


/* FUN_006d3600 @ 006d3600  kind=gamemisc  attributed-by=none  size=33 */

undefined4 FUN_006d3600(void)

{
  int iVar1;
  int in_ECX;
  
  if (0 < *(int *)(in_ECX + 8)) {
    iVar1 = FUN_006d3630();
    if (-1 < iVar1) {
      return *(undefined4 *)(*(int *)(in_ECX + 0x18) + iVar1 * 4);
    }
  }
  return 0xffffffff;
}


/* FUN_006d3630 @ 006d3630  kind=gamemisc  attributed-by=none  size=348 */

uint FUN_006d3630(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int *in_EDX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(in_ECX + 0x28);
  iVar2 = FUN_00401d70();
  if (iVar2 < 0) {
    uVar6 = 0;
    iVar2 = *(int *)(in_ECX + 8);
  }
  else {
    uVar4 = *(uint *)(*(int *)(in_ECX + 0x20) + iVar2 * 4);
    if (-1 < (int)uVar4) {
      uVar6 = (int)*(char *)(*(int *)(in_ECX + 0x1c) + -1 + uVar4) + in_EDX[1];
      if (*in_EDX <= in_EDX[4] - ((int)(uVar6 + 7) >> 3)) {
        iVar7 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 7U)) >> 3;
        in_EDX[3] = in_EDX[3] + iVar7;
        *in_EDX = iVar7 + *in_EDX;
        in_EDX[1] = uVar6 & 7;
        return uVar4 - 1;
      }
      in_EDX[3] = 0;
      *in_EDX = in_EDX[4];
      in_EDX[1] = 1;
      return uVar4 - 1;
    }
    uVar6 = (int)uVar4 >> 0xf & 0x7fff;
    iVar2 = *(int *)(in_ECX + 8) - (uVar4 & 0x7fff);
  }
  iVar3 = FUN_00401d70();
  do {
    if (-1 < iVar3) {
LAB_006d3713:
      uVar4 = FUN_006d3790();
      iVar3 = iVar2 - uVar6;
      if (1 < iVar3) {
        do {
          uVar5 = iVar3 >> 1;
          uVar1 = (uint)(uVar4 < *(uint *)(*(int *)(in_ECX + 0x14) + (uVar5 + uVar6) * 4));
          iVar2 = iVar2 - (-uVar1 & uVar5);
          uVar6 = uVar6 + (uVar1 - 1 & uVar5);
          iVar3 = iVar2 - uVar6;
        } while (1 < iVar3);
      }
      if (iVar7 < *(char *)(*(int *)(in_ECX + 0x1c) + uVar6)) {
        FUN_00401e30();
        return 0xffffffff;
      }
      FUN_00401e30();
      return uVar6;
    }
    if (iVar7 < 2) {
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      goto LAB_006d3713;
    }
    iVar7 = iVar7 + -1;
    iVar3 = FUN_00401d70();
  } while( true );
}


/* FUN_006d3790 @ 006d3790  kind=gamemisc  attributed-by=none  size=98 */

uint FUN_006d3790(void)

{
  uint in_ECX;
  uint uVar1;
  
  uVar1 = in_ECX << 0x10 | in_ECX >> 0x10;
  uVar1 = (uVar1 >> 8 ^ uVar1 << 8) & 0xff00ff ^ uVar1 << 8;
  uVar1 = (uVar1 >> 4 ^ uVar1 << 4) & 0xf0f0f0f ^ uVar1 << 4;
  uVar1 = (uVar1 >> 2 ^ uVar1 * 4) & 0x33333333 ^ uVar1 * 4;
  return (uVar1 >> 1 ^ uVar1 * 2) & 0x55555555 ^ uVar1 * 2;
}


/* FUN_006d3800 @ 006d3800  kind=gamemisc  attributed-by=none  size=63 */

undefined4 FUN_006d3800(undefined4 param_1)

{
  int in_ECX;
  int in_EDX;
  
  if ((-1 < in_EDX) && (in_EDX < *(int *)(*(int *)(in_ECX + 0xc) + 4))) {
    FUN_00401c40(param_1,*(undefined4 *)(*(int *)(in_ECX + 0x14) + in_EDX * 4),
                 *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xc) + 8) + in_EDX * 4));
    return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xc) + 8) + in_EDX * 4);
  }
  return 0;
}


/* FUN_006d3c20 @ 006d3c20  kind=gamemisc  attributed-by=none  size=2146 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_006d3c20(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  int iVar12;
  int in_ECX;
  int iVar13;
  undefined4 *puVar14;
  float *extraout_ECX;
  float *pfVar15;
  int iVar16;
  int in_EDX;
  int *piVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  undefined4 uVar30;
  size_t asStack_bc [6];
  size_t asStack_a4 [3];
  undefined4 *local_5c;
  int local_58;
  int local_50;
  int local_3c;
  int local_34;
  int local_2c;
  int local_18;
  
  iVar21 = *param_1;
  piVar11 = (int *)param_1[1];
  if (piVar11[0x7d] == 0) {
    local_58 = 0x10;
  }
  else {
    local_58 = piVar11[0x7f];
  }
  iVar1 = *(int *)(in_EDX + 0x84 + (*piVar11 * 0xf + in_ECX) * 4);
  asStack_a4[2] = 0x6d3cb1;
  iVar7 = param_7 * -4;
  asStack_a4[2 - param_7] = 0x6d3cbb;
  asStack_a4[param_7 * -2 + 2] = 0x6d3cc5;
  asStack_a4[param_7 * -3 + 2] = 0x6d3cd2;
  asStack_a4[param_7 * -4 + 2] = 0x6d3cdd;
  iVar9 = *(int *)(param_2 + 0x484) + param_7;
  asStack_a4[param_7 * -5 + 2] = 0x6d3cf4;
  iVar8 = iVar9 * -4;
  iVar22 = local_58 * param_7;
  asStack_a4[param_7 * -5 + (2 - iVar9)] = 0x6d3d26;
  *(undefined1 **)(&stack0xffffff68 + iVar7) =
       &stack0xffffff68 + iVar22 * -4 + iVar8 + param_7 * -0x14;
  asStack_a4[param_7 * -5 + ((2 - iVar22) - iVar9)] = 0x6d3d34;
  *(undefined1 **)(&stack0xffffff68 + param_7 * -8) =
       &stack0xffffff68 + iVar22 * -8 + iVar8 + param_7 * -0x14;
  asStack_a4[param_7 * -5 + ((iVar22 * -2 + 2) - iVar9)] = 0x6d3d42;
  *(undefined1 **)(&stack0xffffff68 + param_7 * -0xc) =
       &stack0xffffff68 + iVar22 * -0xc + iVar8 + param_7 * -0x14;
  asStack_a4[param_7 * -5 + ((iVar22 * -3 + 2) - iVar9)] = 0x6d3d4d;
  *(undefined1 **)(&stack0xffffff68 + param_7 * -0x10) =
       &stack0xffffff68 + iVar22 * -0x10 + iVar8 + param_7 * -0x14;
  if (1 < param_7) {
    iVar13 = local_58 << 2;
    iVar23 = param_7 + -1;
    piVar11 = (int *)(&stack0xffffff6c + param_7 * -8);
    do {
      piVar17 = piVar11 + 1;
      piVar17[param_7 + -1] = *(int *)(&stack0xffffff68 + iVar7) + iVar13;
      *piVar11 = *(int *)(&stack0xffffff68 + param_7 * -8) + iVar13;
      piVar17[-1 - param_7] = *(int *)(&stack0xffffff68 + param_7 * -0xc) + iVar13;
      piVar17[param_7 * -2 + -1] = *(int *)(&stack0xffffff68 + param_7 * -0x10) + iVar13;
      iVar13 = iVar13 + local_58 * 4;
      iVar23 = iVar23 + -1;
      piVar11 = piVar17;
    } while (iVar23 != 0);
  }
  if (0 < *(int *)(param_2 + 0x484) + param_7) {
    iVar13 = 0;
    do {
      iVar23 = iVar13 + 1;
      asStack_a4[param_7 * -5 + ((iVar13 + 3) - iVar9)] = 0;
      iVar13 = iVar23;
    } while (iVar23 < *(int *)(param_2 + 0x484) + param_7);
  }
  local_3c = 0;
  if (0 < iVar21) {
    iVar13 = iVar21;
    do {
      asStack_a4[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)] = param_7 * 4;
      asStack_a4[param_7 * -5 + ((iVar22 * -4 + 1) - iVar9)] = param_5;
      asStack_a4[param_7 * -5 + (iVar22 * -4 - iVar9)] =
           (size_t)(&stack0xffffff68 + param_7 * -0x14);
      iVar23 = local_58;
      if (iVar13 < local_58) {
        iVar23 = iVar13;
      }
      asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)] = 0x6d3e42;
      memcpy((void *)asStack_a4[param_7 * -5 + (iVar22 * -4 - iVar9)],
             (void *)asStack_a4[param_7 * -5 + ((iVar22 * -4 + 1) - iVar9)],
             asStack_a4[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)]);
      asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)] = iVar22 * 4;
      asStack_bc[param_7 * -5 + ((iVar22 * -4 + 4) - iVar9)] = 0;
      asStack_bc[param_7 * -5 + ((iVar22 * -4 + 3) - iVar9)] =
           *(undefined4 *)(&stack0xffffff68 + param_7 * -0x10);
      asStack_bc[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)] = 0x6d3e50;
      memset((void *)asStack_bc[param_7 * -5 + ((iVar22 * -4 + 3) - iVar9)],
             asStack_bc[param_7 * -5 + ((iVar22 * -4 + 4) - iVar9)],
             asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)]);
      iVar24 = 0;
      if (0 < param_7) {
        local_34 = param_7;
        piVar11 = (int *)(&stack0xffffff68 + param_7 * -0xc);
        do {
          iVar24 = *(int *)((int)piVar11 +
                            (int)(&stack0xffffff68 +
                                 (param_7 * -0x14 - param_3) +
                                 (param_3 - (int)(&stack0xffffff68 + param_7 * -0xc))) +
                           (param_4 - (int)(&stack0xffffff68 + param_7 * -0x14))) + local_3c * 4;
          if (*(int *)((int)piVar11 +
                      (int)(&stack0xffffff68 +
                           (param_7 * -0x14 - param_3) +
                           (param_3 - (int)(&stack0xffffff68 + param_7 * -0xc)))) == 0) {
            if (0 < iVar23) {
              iVar16 = 0;
              do {
                iVar16 = iVar16 + 1;
                *(undefined4 *)(*piVar11 + -4 + iVar16 * 4) = 0x2edbe6ff;
                *(undefined4 *)(piVar11[param_7 * 2] + -4 + iVar16 * 4) = 0;
                *(undefined4 *)(piVar11[param_7] + -4 + iVar16 * 4) = 0;
                *(undefined4 *)(piVar11[-param_7] + -4 + iVar16 * 4) = 0;
                *(undefined4 *)(iVar24 + -4 + iVar16 * 4) = 0;
              } while (iVar16 < iVar23);
            }
            piVar11[param_7 * -2 - iVar9] = 0;
          }
          else {
            local_18 = 0;
            if (3 < iVar23) {
              iVar16 = *piVar11;
              iVar25 = (iVar23 - 4U >> 2) + 1;
              local_18 = iVar25 * 4;
              puVar14 = (undefined4 *)(iVar16 + 4);
              piVar17 = (int *)(iVar24 + 0xc);
              do {
                puVar14[-1] = *(undefined4 *)(&DAT_0076aa90 + piVar17[-3] * 4);
                *puVar14 = *(undefined4 *)
                            (&DAT_0076aa90 + *(int *)((int)puVar14 + (iVar24 - iVar16)) * 4);
                puVar14[1] = *(undefined4 *)(&DAT_0076aa90 + piVar17[-1] * 4);
                puVar14[2] = *(undefined4 *)(&DAT_0076aa90 + *piVar17 * 4);
                iVar25 = iVar25 + -1;
                puVar14 = puVar14 + 4;
                piVar17 = piVar17 + 4;
              } while (iVar25 != 0);
            }
            if (local_18 < iVar23) {
              iVar16 = *piVar11;
              iVar25 = iVar23 - local_18;
              puVar14 = (undefined4 *)(iVar16 + local_18 * 4);
              do {
                *puVar14 = *(undefined4 *)
                            (&DAT_0076aa90 + *(int *)((int)puVar14 + (iVar24 - iVar16)) * 4);
                iVar25 = iVar25 + -1;
                puVar14 = puVar14 + 1;
              } while (iVar25 != 0);
            }
            asStack_a4[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)] = iVar23;
            asStack_a4[param_7 * -5 + ((iVar22 * -4 + 1) - iVar9)] = local_3c;
            asStack_a4[param_7 * -5 + (iVar22 * -4 - iVar9)] = piVar11[-param_7];
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)] = *piVar11;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 4) - iVar9)] = 0x6d3fa7;
            FUN_006d47e0();
            pfVar15 = extraout_ECX;
            if (0 < iVar23) {
              pfVar2 = (float *)piVar11[param_7 * 2];
              iVar16 = piVar11[param_7];
              iVar25 = *piVar11;
              pfVar15 = (float *)(*(int *)((param_3 - (int)(&stack0xffffff68 + param_7 * -0xc)) +
                                          (int)piVar11) + local_3c * 4);
              pfVar10 = pfVar2;
              iVar26 = iVar23;
              do {
                fVar29 = *pfVar15 * *pfVar15;
                *pfVar10 = fVar29;
                *(float *)((int)pfVar10 + (iVar16 - (int)pfVar2)) = fVar29;
                if (*pfVar15 <= 0.0 && *pfVar15 != 0.0) {
                  *pfVar10 = *pfVar10 * -1.0;
                }
                fVar29 = *(float *)((int)pfVar10 + (iVar25 - (int)pfVar2));
                pfVar15 = pfVar15 + 1;
                *(float *)((int)pfVar10 + (iVar25 - (int)pfVar2)) = fVar29 * fVar29;
                iVar26 = iVar26 + -1;
                pfVar10 = pfVar10 + 1;
              } while (iVar26 != 0);
            }
            asStack_a4[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)] = iVar24;
            iVar24 = piVar11[param_7 * -2 - iVar9];
            asStack_a4[param_7 * -5 + ((iVar22 * -4 + 1) - iVar9)] = iVar23;
            asStack_a4[param_7 * -5 + (iVar22 * -4 - iVar9)] = local_3c;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)] = (size_t)pfVar15;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)] = iVar24;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 4) - iVar9)] = 0;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 3) - iVar9)] = *piVar11;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)] = piVar11[param_7];
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 1) - iVar9)] = piVar11[param_7 * 2];
            asStack_bc[param_7 * -5 + (iVar22 * -4 - iVar9)] = 0x6d404b;
            FUN_006d4490();
            piVar11[param_7 * -2 - iVar9] = iVar24;
          }
          piVar11 = piVar11 + 1;
          local_34 = local_34 + -1;
          iVar24 = param_7;
        } while (local_34 != 0);
      }
      local_50 = 0;
      if (0 < *(int *)(param_2 + 0x484)) {
        local_5c = (undefined4 *)(&stack0xffffff68 + iVar24 * 4 + iVar8 + param_7 * -0x14);
        piVar11 = (int *)(param_2 + 0x888);
        do {
          iVar3 = piVar11[-0x100];
          iVar19 = *piVar11;
          iVar18 = *(int *)(param_4 + iVar3 * 4) + local_3c * 4;
          iVar27 = *(int *)(param_4 + iVar19 * 4);
          pfVar15 = *(float **)(&stack0xffffff68 + iVar3 * 4 + iVar7);
          iVar16 = *(int *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -8);
          iVar24 = *(int *)(&stack0xffffff68 + iVar19 * 4 + param_7 * -8);
          iVar12 = *(int *)(&stack0xffffff68 + iVar19 * 4 + iVar7);
          iVar4 = *(int *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -0xc);
          iVar5 = *(int *)(&stack0xffffff68 + iVar19 * 4 + param_7 * -0xc);
          iVar26 = *(int *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -0x10);
          iVar25 = *(int *)(&stack0xffffff68 + iVar19 * 4 + param_7 * -0x10);
          if ((*(int *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -0x14) != 0) ||
             (*(int *)(&stack0xffffff68 + iVar19 * 4 + param_7 * -0x14) != 0)) {
            *(undefined4 *)(&stack0xffffff68 + iVar19 * 4 + param_7 * -0x14) = 1;
            *(undefined4 *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -0x14) = 1;
            local_2c = 0;
            if (0 < iVar23) {
              iVar24 = iVar24 - (int)pfVar15;
              iVar16 = iVar16 - (int)pfVar15;
              iVar25 = iVar25 - (int)pfVar15;
              iVar26 = iVar26 - (int)pfVar15;
              iVar5 = iVar5 - (int)pfVar15;
              iVar12 = iVar12 - (int)pfVar15;
              iVar19 = (iVar27 + local_3c * 4) - (int)pfVar15;
              iVar27 = iVar18 - (int)pfVar15;
              iVar4 = iVar4 - (int)pfVar15;
              do {
                if (local_2c < iVar13 + (param_6 - iVar21)) {
                  if ((*(int *)(iVar26 + (int)pfVar15) == 0) &&
                     (*(int *)(iVar25 + (int)pfVar15) == 0)) {
                    if (local_2c < iVar13 + (iVar1 - iVar21)) {
                      fVar29 = *pfVar15 + *(float *)(iVar12 + (int)pfVar15);
                      *pfVar15 = fVar29;
                      *(float *)(iVar16 + (int)pfVar15) = ABS(fVar29);
                    }
                    else {
                      fVar29 = ABS(*(float *)(iVar12 + (int)pfVar15)) + ABS(*pfVar15);
                      if (0.0 <= *(float *)(iVar12 + (int)pfVar15) + *pfVar15) {
                        *(float *)(iVar16 + (int)pfVar15) = fVar29;
                      }
                      else {
                        *(float *)(iVar16 + (int)pfVar15) = fVar29;
                        fVar29 = -fVar29;
                      }
                      *pfVar15 = fVar29;
                    }
                    *(undefined4 *)(iVar24 + (int)pfVar15) = 0;
                    *(undefined4 *)(iVar12 + (int)pfVar15) = 0;
                    *(undefined4 *)(iVar25 + (int)pfVar15) = 1;
                    *(undefined4 *)(iVar19 + (int)pfVar15) = 0;
                  }
                  else {
                    *pfVar15 = ABS(*(float *)(iVar12 + (int)pfVar15)) + ABS(*pfVar15);
                    *(float *)(iVar16 + (int)pfVar15) =
                         *(float *)(iVar24 + (int)pfVar15) + *(float *)(iVar16 + (int)pfVar15);
                    *(undefined4 *)(iVar25 + (int)pfVar15) = 1;
                    *(undefined4 *)(iVar26 + (int)pfVar15) = 1;
                    uVar20 = *(uint *)(iVar19 + (int)pfVar15);
                    uVar6 = *(uint *)(iVar27 + (int)pfVar15);
                    if ((int)((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f)) <
                        (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) {
                      if ((int)uVar6 < 1) {
                        *(uint *)(iVar19 + (int)pfVar15) = uVar20 - uVar6;
                      }
                      else {
                        *(uint *)(iVar19 + (int)pfVar15) = uVar6 - uVar20;
                      }
                    }
                    else {
                      if ((int)uVar20 < 1) {
                        iVar28 = uVar20 - uVar6;
                      }
                      else {
                        iVar28 = uVar6 - uVar20;
                      }
                      *(int *)(iVar19 + (int)pfVar15) = iVar28;
                      *(uint *)(iVar27 + (int)pfVar15) = uVar20;
                    }
                    uVar20 = (int)*(uint *)(iVar27 + (int)pfVar15) >> 0x1f;
                    if ((int)(((*(uint *)(iVar27 + (int)pfVar15) ^ uVar20) - uVar20) * 2) <=
                        *(int *)(iVar19 + (int)pfVar15)) {
                      *(int *)(iVar19 + (int)pfVar15) = -*(int *)(iVar19 + (int)pfVar15);
                      *(int *)(iVar27 + (int)pfVar15) = -*(int *)(iVar27 + (int)pfVar15);
                    }
                  }
                }
                local_2c = local_2c + 1;
                fVar29 = *(float *)(iVar5 + (int)pfVar15) + *(float *)(iVar4 + (int)pfVar15);
                pfVar15 = pfVar15 + 1;
                *(float *)(iVar5 + -4 + (int)pfVar15) = fVar29;
                *(float *)(iVar4 + -4 + (int)pfVar15) = fVar29;
              } while (local_2c < iVar23);
            }
            asStack_a4[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)] = iVar18;
            asStack_a4[param_7 * -5 + ((iVar22 * -4 + 1) - iVar9)] = iVar23;
            asStack_a4[param_7 * -5 + (iVar22 * -4 - iVar9)] = local_3c;
            uVar30 = *local_5c;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)] = local_2c;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)] = uVar30;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 4) - iVar9)] =
                 *(undefined4 *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -0x10);
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 3) - iVar9)] =
                 *(undefined4 *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -0xc);
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)] =
                 *(undefined4 *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -8);
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 1) - iVar9)] =
                 *(undefined4 *)(&stack0xffffff68 + iVar3 * 4 + iVar7);
            asStack_bc[param_7 * -5 + (iVar22 * -4 - iVar9)] = 0x6d43e4;
            FUN_006d4490();
            *local_5c = uVar30;
            local_5c = local_5c + 1;
          }
          local_50 = local_50 + 1;
          piVar11 = piVar11 + 1;
        } while (local_50 < *(int *)(param_2 + 0x484));
      }
      iVar13 = iVar13 - local_58;
      local_3c = local_3c + local_58;
    } while (local_3c < iVar21);
  }
  iVar21 = 0;
  if (0 < *(int *)(param_2 + 0x484)) {
    piVar11 = (int *)(param_2 + 0x888);
    do {
      if ((*(int *)(param_5 + piVar11[-0x100] * 4) != 0) || (*(int *)(param_5 + *piVar11 * 4) != 0))
      {
        *(undefined4 *)(param_5 + piVar11[-0x100] * 4) = 1;
        *(undefined4 *)(param_5 + *piVar11 * 4) = 1;
      }
      iVar21 = iVar21 + 1;
      piVar11 = piVar11 + 1;
    } while (iVar21 < *(int *)(param_2 + 0x484));
  }
  return;
}


/* FUN_006d4490 @ 006d4490  kind=gamemisc  attributed-by=none  size=834 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void FUN_006d4490(int param_1,float *param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 int param_7,int param_8)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int in_EDX;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  undefined1 auVar10 [16];
  float fVar11;
  size_t asStack_6c [3];
  undefined8 uStack_60;
  float local_18;
  int local_14;
  
  iVar2 = *(int *)(in_ECX + 4);
  uStack_60._4_4_ = 0x6d44c3;
  iVar3 = param_7 * -4;
  iVar7 = param_7;
  if ((*(int *)(iVar2 + 500) != 0) && (iVar7 = *(int *)(iVar2 + 0x1f8) - param_6, param_7 < iVar7))
  {
    iVar7 = param_7;
  }
  auVar10 = ZEXT816(0);
  local_18 = 0.0;
  local_14 = 0;
  if (0 < iVar7) {
    pfVar5 = param_2;
    iVar8 = iVar7;
    do {
      if ((param_4 == 0) || (*(int *)((param_4 - (int)param_2) + (int)pfVar5) == 0)) {
        dVar9 = (double)(*pfVar5 / *(float *)((param_3 - (int)param_2) + (int)pfVar5));
        pfVar1 = (float *)((param_1 - (int)param_2) + (int)pfVar5);
        if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
          *(undefined4 *)((int)&uStack_60 + iVar3 + 4) = 0x6d458b;
          libm_sse2_sqrt_precise();
          *(double *)((int)&uStack_60 + iVar3) = dVar9 + 0.5;
          asStack_6c[2 - param_7] = 0x6d45a6;
          floor(*(double *)((int)&uStack_60 + iVar3));
          *(undefined4 *)((int)&uStack_60 + iVar3 + 4) = 0x6d45ae;
          iVar4 = FUN_0068d910();
        }
        else {
          *(undefined4 *)((int)&uStack_60 + iVar3 + 4) = 0x6d4552;
          libm_sse2_sqrt_precise();
          *(double *)((int)&uStack_60 + iVar3) = dVar9 + 0.5;
          asStack_6c[2 - param_7] = 0x6d456d;
          dVar9 = floor(*(double *)((int)&uStack_60 + iVar3));
          iVar4 = (int)-dVar9;
        }
        *(int *)((param_8 - (int)param_2) + (int)pfVar5) = iVar4;
      }
      pfVar5 = pfVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    auVar10 = ZEXT416(0);
    local_14 = iVar7;
  }
  if (local_14 < param_7) {
    piVar6 = (int *)(param_8 + local_14 * 4);
    iVar7 = (int)param_2 - param_8;
    iVar8 = 0;
    do {
      if ((param_4 == 0) || (*(int *)((param_1 - param_8) + (param_4 - param_1) + (int)piVar6) == 0)
         ) {
        fVar11 = *(float *)(iVar7 + (int)piVar6) / *(float *)((param_3 - param_8) + (int)piVar6);
        if ((0.25 <= fVar11) || ((param_4 != 0 && (local_14 < in_EDX - param_6)))) {
          dVar9 = (double)fVar11;
          pfVar5 = (float *)((param_1 - param_8) + (int)piVar6);
          if (0.0 < *pfVar5 || *pfVar5 == 0.0) {
            *(undefined4 *)((int)&uStack_60 + iVar3 + 4) = 0x6d46a9;
            libm_sse2_sqrt_precise();
            *(double *)((int)&uStack_60 + iVar3) = dVar9 + 0.5;
            asStack_6c[2 - param_7] = 0x6d46c4;
            floor(*(double *)((int)&uStack_60 + iVar3));
            *(undefined4 *)((int)&uStack_60 + iVar3 + 4) = 0x6d46cc;
            iVar4 = FUN_0068d910();
          }
          else {
            *(undefined4 *)((int)&uStack_60 + iVar3 + 4) = 0x6d4670;
            libm_sse2_sqrt_precise();
            *(double *)((int)&uStack_60 + iVar3) = dVar9 + 0.5;
            asStack_6c[2 - param_7] = 0x6d468b;
            dVar9 = floor(*(double *)((int)&uStack_60 + iVar3));
            iVar4 = (int)-dVar9;
          }
          *piVar6 = iVar4;
          *(float *)(iVar7 + (int)piVar6) =
               (float)(iVar4 * iVar4) * *(float *)((param_3 - param_8) + (int)piVar6);
          auVar10 = ZEXT416((uint)local_18);
        }
        else {
          auVar10._0_4_ = auVar10._0_4_ + fVar11;
          *(int *)(&stack0xffffffa8 + iVar8 * 4 + iVar3) = iVar7 + (int)piVar6;
          iVar8 = iVar8 + 1;
          local_18 = auVar10._0_4_;
        }
      }
      local_14 = local_14 + 1;
      piVar6 = piVar6 + 1;
    } while (local_14 < param_7);
    if (iVar8 != 0) {
      *(code **)((int)&uStack_60 + iVar3 + 4) = FUN_006d4870;
      *(undefined4 *)((int)&uStack_60 + iVar3) = 4;
      asStack_6c[2 - param_7] = iVar8;
      asStack_6c[1 - param_7] = (size_t)(&stack0xffffffa8 + iVar3);
      asStack_6c[-param_7] = 0x6d4729;
      qsort((void *)asStack_6c[1 - param_7],asStack_6c[2 - param_7],
            *(size_t *)((int)&uStack_60 + iVar3),*(_PtFuncCompare **)((int)&uStack_60 + iVar3 + 4));
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          iVar4 = *(int *)(&stack0xffffffa8 + iVar7 * 4 + iVar3) - (int)param_2 >> 2;
          if ((double)local_18 < *(double *)(iVar2 + 0x200)) {
            *(undefined4 *)(param_8 + iVar4 * 4) = 0;
            param_2[iVar4] = 0.0;
          }
          else {
            local_18 = local_18 - 1.0;
            *(int *)(param_8 + iVar4 * 4) =
                 (int)(float)(*(uint *)(param_1 + iVar4 * 4) & 0xbf800000 | 0x3f800000);
            param_2[iVar4] = *(float *)(param_3 + iVar4 * 4);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar8);
        return;
      }
    }
  }
  return;
}


/* FUN_006d47e0 @ 006d47e0  kind=gamemisc  attributed-by=none  size=130 */

void FUN_006d47e0(int param_1,uint *param_2,int param_3,int param_4)

{
  int in_ECX;
  int in_EDX;
  uint *puVar1;
  int iVar2;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float fVar3;
  
  iVar2 = 0;
  if (0 < param_4) {
    puVar1 = param_2;
    do {
      fVar3 = in_XMM1_Da;
      if (in_ECX - param_3 <= iVar2) {
        fVar3 = in_XMM2_Da;
      }
      iVar2 = iVar2 + 1;
      *puVar1 = (uint)(fVar3 <= ABS(*(float *)((int)puVar1 +
                                              (in_EDX - param_1) + (param_1 - (int)param_2))) /
                                *(float *)((param_1 - (int)param_2) + (int)puVar1));
      puVar1 = puVar1 + 1;
    } while (iVar2 < param_4);
  }
  return;
}


/* FUN_006d4870 @ 006d4870  kind=gamemisc  attributed-by=none  size=41 */

int FUN_006d4870(undefined4 *param_1,undefined4 *param_2)

{
  return (uint)(*(float *)*param_1 < *(float *)*param_2) -
         (uint)(*(float *)*param_2 < *(float *)*param_1);
}


/* FUN_006d48a0 @ 006d48a0  kind=gamemisc  attributed-by=none  size=278 */

void FUN_006d48a0(float *param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *in_ECX;
  int in_EDX;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = *in_ECX;
  fVar1 = (float)in_ECX[0xc];
  fVar2 = *(float *)(in_ECX[1] + 0xc + param_2 * 4);
  iVar4 = 0;
  if (0 < iVar3) {
    param_3 = param_3 - (int)param_1;
    param_5 = param_5 - (int)param_1;
    iVar5 = in_EDX - (int)param_1;
    param_4 = param_4 - (int)param_1;
    do {
      fVar6 = *(float *)(*(int *)(in_ECX[3] + param_2 * 4) + iVar4 * 4) +
              *(float *)(iVar5 + (int)param_1);
      if (*(float *)(in_ECX[1] + 0x6c) < fVar6) {
        fVar6 = *(float *)(in_ECX[1] + 0x6c);
      }
      fVar7 = *param_1 + fVar2;
      if (fVar7 < fVar6) {
        fVar7 = fVar6;
      }
      *(float *)(param_3 + (int)param_1) = fVar7;
      if (param_2 == 1) {
        fVar6 = fVar6 - *(float *)(param_5 + (int)param_1);
        fVar7 = fVar6 - -17.2;
        if (fVar6 <= -17.2) {
          fVar6 = 1.0 - fVar7 * 0.0003 * fVar1;
        }
        else {
          fVar6 = 1.0 - fVar7 * 0.005 * fVar1;
          if (fVar6 < 0.0) {
            fVar6 = 0.0001;
          }
        }
        *(float *)(param_4 + (int)param_1) = *(float *)(param_4 + (int)param_1) * fVar6;
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}


/* FUN_006d49c0 @ 006d49c0  kind=gamemisc  attributed-by=none  size=338 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_006d49c0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  undefined4 in_EDX;
  int iVar6;
  float *pfVar7;
  undefined4 in_XMM3_Da;
  int aiStack_44 [4];
  undefined1 auStack_34 [4];
  int iStack_30;
  
  iVar1 = *in_ECX;
  iVar2 = in_ECX[10];
  iStack_30 = 0x6d49e7;
  iVar3 = iVar2 * -4;
  param_2 = *(float *)(in_ECX[1] + 4) + param_2;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      *(undefined4 *)(&stack0xffffffd4 + iVar4 * 4 + iVar3) = 0xc61c3c00;
      iVar4 = iVar4 + 1;
    } while (iVar4 < in_ECX[10]);
  }
  if (param_2 < *(float *)(in_ECX[1] + 8)) {
    param_2 = *(float *)(in_ECX[1] + 8);
  }
  iVar4 = 0;
  if (3 < iVar1) {
    iVar5 = (iVar1 - 4U >> 2) + 1;
    iVar4 = iVar5 * 4;
    iVar6 = 8;
    pfVar7 = (float *)(param_1 + 8);
    do {
      pfVar7[-2] = *(float *)((int)pfVar7 + in_ECX[4] + -param_1 + -8) + param_2;
      pfVar7[-1] = *(float *)((int)pfVar7 + in_ECX[4] + -param_1 + -4) + param_2;
      *pfVar7 = *(float *)(iVar6 + in_ECX[4]) + param_2;
      pfVar7[1] = *(float *)((int)pfVar7 + in_ECX[4] + (4 - param_1)) + param_2;
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 0x10;
      pfVar7 = pfVar7 + 4;
    } while (iVar5 != 0);
  }
  while (iVar4 < iVar1) {
    iVar4 = iVar4 + 1;
    *(float *)(param_1 + -4 + iVar4 * 4) = *(float *)(in_ECX[4] + -4 + iVar4 * 4) + param_2;
  }
  (&iStack_30)[-iVar2] = iVar1;
  (&iStack_30)[-iVar2] = in_XMM3_Da;
  *(undefined1 **)(auStack_34 + iVar3) = &stack0xffffffd4 + iVar3;
  aiStack_44[3 - iVar2] = param_1;
  aiStack_44[2 - iVar2] = in_EDX;
  aiStack_44[1 - iVar2] = 0x6d4afb;
  FUN_006d5760();
  aiStack_44[1 - iVar2] = param_1;
  aiStack_44[-iVar2] = 0x6d4b05;
  FUN_006d54c0();
  return;
}


/* FUN_006d4b20 @ 006d4b20  kind=gamemisc  attributed-by=none  size=842 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void FUN_006d4b20(float *param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  uint *in_ECX;
  int iVar13;
  float *in_EDX;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  float afStack_48 [4];
  float fStack_38;
  float local_28 [7];
  int local_c;
  
  uVar16 = *in_ECX;
  fStack_38 = 1.003707e-38;
  iVar2 = uVar16 * -4;
  afStack_48[4 - uVar16] = -NAN;
  afStack_48[3 - uVar16] = (float)in_ECX;
  afStack_48[3 - uVar16] = 140.0;
  afStack_48[2 - uVar16] = (float)param_1;
  afStack_48[1 - uVar16] = (float)in_EDX;
  afStack_48[-uVar16] = 1.0037113e-38;
  FUN_006d4e80();
  iVar13 = 0;
  if (0 < (int)uVar16) {
    if (((3 < uVar16) &&
        ((param_1 + (uVar16 - 1) < local_28 + (-3 - uVar16) || (afStack_48 + 4 < param_1)))) &&
       ((in_EDX + (uVar16 - 1) < local_28 + (-3 - uVar16) || (afStack_48 + 4 < in_EDX)))) {
      uVar11 = uVar16 & 0x80000003;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
      }
      pfVar12 = in_EDX;
      do {
        pfVar15 = (float *)(((int)param_1 - (int)in_EDX) + (int)pfVar12);
        fVar3 = pfVar15[1];
        fVar4 = pfVar15[2];
        fVar5 = pfVar15[3];
        fVar6 = *pfVar12;
        fVar7 = pfVar12[1];
        fVar8 = pfVar12[2];
        fVar9 = pfVar12[3];
        iVar13 = iVar13 + 4;
        pfVar12 = pfVar12 + 4;
        pfVar1 = (float *)((int)afStack_48 + (iVar2 - (int)in_EDX) + 4U + (int)pfVar12);
        *pfVar1 = fVar6 - *pfVar15;
        pfVar1[1] = fVar7 - fVar3;
        pfVar1[2] = fVar8 - fVar4;
        pfVar1[3] = fVar9 - fVar5;
      } while (iVar13 < (int)(uVar16 - uVar11));
    }
    if (iVar13 < (int)uVar16) {
      if (3 < (int)(uVar16 - iVar13)) {
        pfVar12 = param_1 + iVar13 + 1;
        iVar14 = iVar13;
        pfVar15 = (float *)(&stack0xffffffd4 + iVar13 * 4 + iVar2);
        do {
          iVar13 = iVar14 + 4;
          pfVar15[-2] = in_EDX[iVar14] - pfVar12[-1];
          *(float *)((int)pfVar12 + (int)local_28 + (iVar2 - (int)param_1) + -0xc) =
               *(float *)((int)pfVar12 + ((int)in_EDX - (int)param_1)) - *pfVar12;
          *pfVar15 = *(float *)((int)pfVar15 + ((int)in_EDX - (int)(local_28 + (-3 - uVar16)))) -
                     pfVar12[1];
          pfVar15[1] = in_EDX[iVar14 + 3] - pfVar12[2];
          pfVar12 = pfVar12 + 4;
          iVar14 = iVar13;
          pfVar15 = pfVar15 + 4;
        } while (iVar13 < (int)(uVar16 - 3));
      }
      if (iVar13 < (int)uVar16) {
        iVar14 = uVar16 - iVar13;
        pfVar12 = param_1 + iVar13;
        do {
          *(float *)((int)pfVar12 + (int)local_28 + (iVar2 - (int)param_1) + -0xc) =
               *(float *)((int)pfVar12 + ((int)in_EDX - (int)param_1)) - *pfVar12;
          iVar14 = iVar14 + -1;
          pfVar12 = pfVar12 + 1;
        } while (iVar14 != 0);
      }
    }
  }
  afStack_48[4 - uVar16] = (float)*(undefined4 *)(in_ECX[1] + 0x80);
  afStack_48[3 - uVar16] = (float)in_ECX;
  afStack_48[3 - uVar16] = 0.0;
  afStack_48[2 - uVar16] = (float)param_1;
  afStack_48[1 - uVar16] = (float)(local_28 + (-3 - uVar16));
  afStack_48[-uVar16] = 1.0037683e-38;
  FUN_006d4e80();
  iVar13 = 0;
  if (0 < (int)uVar16) {
    if ((3 < uVar16) &&
       ((in_EDX + (uVar16 - 1) < local_28 + (-3 - uVar16) || (afStack_48 + 4 < in_EDX)))) {
      uVar11 = uVar16 & 0x80000003;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
      }
      pfVar12 = local_28 + (-3 - uVar16);
      do {
        pfVar15 = (float *)((int)pfVar12 + ((int)in_EDX - (int)(local_28 + (-3 - uVar16))));
        fVar3 = pfVar15[1];
        fVar4 = pfVar15[2];
        fVar5 = pfVar15[3];
        iVar13 = iVar13 + 4;
        *pfVar12 = *pfVar15 - *pfVar12;
        pfVar12[1] = fVar3 - pfVar12[1];
        pfVar12[2] = fVar4 - pfVar12[2];
        pfVar12[3] = fVar5 - pfVar12[3];
        pfVar12 = pfVar12 + 4;
      } while (iVar13 < (int)(uVar16 - uVar11));
    }
    if (iVar13 < (int)uVar16) {
      if (3 < (int)(uVar16 - iVar13)) {
        iVar14 = iVar13 + 3;
        local_c = ((uVar16 - iVar13) - 4 >> 2) + 1;
        iVar10 = iVar13 + -2;
        iVar13 = iVar13 + local_c * 4;
        pfVar12 = local_28 + (iVar10 - uVar16);
        pfVar15 = in_EDX + iVar14;
        do {
          local_c = local_c + -1;
          pfVar12[-1] = pfVar15[-3] - pfVar12[-1];
          *pfVar12 = *(float *)((int)pfVar12 + ((int)in_EDX - (int)(local_28 + (-3 - uVar16)))) -
                     *pfVar12;
          pfVar12[1] = pfVar15[-1] - pfVar12[1];
          pfVar12[2] = *pfVar15 - pfVar12[2];
          pfVar12 = pfVar12 + 4;
          pfVar15 = pfVar15 + 4;
        } while (local_c != 0);
      }
      if (iVar13 < (int)uVar16) {
        iVar14 = uVar16 - iVar13;
        pfVar12 = local_28 + ((iVar13 + -3) - uVar16);
        do {
          *pfVar12 = *(float *)((int)pfVar12 + ((int)in_EDX - (int)(local_28 + (-3 - uVar16)))) -
                     *pfVar12;
          iVar14 = iVar14 + -1;
          pfVar12 = pfVar12 + 1;
        } while (iVar14 != 0);
      }
    }
    if (0 < (int)uVar16) {
      pfVar12 = param_1;
      do {
        iVar13 = (int)(*pfVar12 + 0.5);
        if (iVar13 < 0x28) {
          if (iVar13 < 0) {
            iVar13 = 0;
          }
        }
        else {
          iVar13 = 0x27;
        }
        *pfVar12 = *(float *)(in_ECX[1] + 0x150 + iVar13 * 4) +
                   *(float *)((int)pfVar12 + (int)local_28 + (iVar2 - (int)param_1) + -0xc);
        uVar16 = uVar16 - 1;
        pfVar12 = pfVar12 + 1;
      } while (uVar16 != 0);
    }
  }
  return;
}


/* FUN_006d4e80 @ 006d4e80  kind=gamemisc  attributed-by=none  size=1557 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_006d4e80(float *param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  uint *in_EDX;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uStack_64;
  int local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_8;
  
  iVar1 = in_ECX * -4;
  (&uStack_64)[-in_ECX] = 0x6d4eab;
  (&uStack_64)[in_ECX * -2] = 0x6d4eb5;
  (&uStack_64)[in_ECX * -3] = 0x6d4ebf;
  (&uStack_64)[in_ECX * -4] = 0x6d4ec9;
  fVar15 = *param_1 + param_3;
  fVar14 = 0.0;
  local_8 = 0.0;
  local_34 = 0.0;
  if (fVar15 < 1.0) {
    fVar15 = 1.0;
  }
  fVar16 = fVar15 * fVar15 * 0.5;
  local_24 = 1.0;
  fVar12 = fVar16 + 0.0;
  local_30 = fVar16 * fVar15 + 0.0;
  *(float *)(&stack0xffffffa0 + iVar1) = fVar12;
  *(float *)(&stack0xffffffa0 + in_ECX * -8) = fVar12;
  *(undefined4 *)(&stack0xffffffa0 + in_ECX * -0xc) = 0;
  *(float *)(&stack0xffffffa0 + in_ECX * -0x10) = local_30;
  *(undefined4 *)(&stack0xffffffa0 + in_ECX * -0x14) = 0;
  if (1 < in_ECX) {
    local_38 = in_ECX + -1;
    pfVar3 = (float *)(&stack0xffffffa4 + iVar1);
    fVar15 = fVar12;
    do {
      fVar16 = *(float *)(((int)param_1 - (int)(&stack0xffffffa0 + iVar1)) + (int)pfVar3) + param_3;
      if (fVar16 < 1.0) {
        fVar16 = 1.0;
      }
      fVar13 = fVar16 * fVar16;
      pfVar4 = pfVar3 + 1;
      local_38 = local_38 + -1;
      fVar11 = local_24 * fVar13;
      fVar12 = fVar12 + fVar13;
      fVar15 = fVar15 + fVar11;
      local_30 = fVar13 * fVar16 + local_30;
      *pfVar3 = fVar12;
      fVar14 = fVar14 + fVar11 * local_24;
      pfVar4[-1 - in_ECX] = fVar15;
      local_34 = fVar11 * fVar16 + local_34;
      pfVar4[in_ECX * -2 + -1] = fVar14;
      pfVar4[in_ECX * -3 + -1] = local_30;
      local_24 = local_24 + 1.0;
      pfVar4[in_ECX * -4 + -1] = local_34;
      pfVar3 = pfVar4;
    } while (local_38 != 0);
  }
  fVar15 = 0.0;
  fVar16 = 1.0;
  uVar5 = *in_EDX;
  iVar8 = (int)uVar5 >> 0x10;
  iVar7 = 0;
  fVar14 = 0.0;
  if (iVar8 < 0) {
    iVar10 = 0;
    do {
      uVar5 = uVar5 & 0xffff;
      fVar16 = *(float *)(&stack0xffffffa0 + uVar5 * 4 + in_ECX * -8) -
               *(float *)(&stack0xffffffa0 + iVar8 * -4 + in_ECX * -8);
      local_8 = (*(float *)(&stack0xffffffa0 + iVar8 * -4 + in_ECX * -0x10) +
                *(float *)(&stack0xffffffa0 + uVar5 * 4 + in_ECX * -0x10)) *
                (*(float *)(&stack0xffffffa0 + iVar8 * -4 + in_ECX * -0xc) +
                *(float *)(&stack0xffffffa0 + uVar5 * 4 + in_ECX * -0xc)) -
                (*(float *)(&stack0xffffffa0 + uVar5 * 4 + in_ECX * -0x14) -
                *(float *)(&stack0xffffffa0 + iVar8 * -4 + in_ECX * -0x14)) * fVar16;
      fVar15 = (*(float *)(&stack0xffffffa0 + uVar5 * 4 + in_ECX * -0x14) -
               *(float *)(&stack0xffffffa0 + iVar8 * -4 + in_ECX * -0x14)) *
               (*(float *)(&stack0xffffffa0 + iVar8 * -4 + iVar1) +
               *(float *)(&stack0xffffffa0 + uVar5 * 4 + iVar1)) -
               (*(float *)(&stack0xffffffa0 + iVar8 * -4 + in_ECX * -0x10) +
               *(float *)(&stack0xffffffa0 + uVar5 * 4 + in_ECX * -0x10)) * fVar16;
      fVar16 = (*(float *)(&stack0xffffffa0 + iVar8 * -4 + in_ECX * -0xc) +
               *(float *)(&stack0xffffffa0 + uVar5 * 4 + in_ECX * -0xc)) *
               (*(float *)(&stack0xffffffa0 + iVar8 * -4 + iVar1) +
               *(float *)(&stack0xffffffa0 + uVar5 * 4 + iVar1)) - fVar16 * fVar16;
      fVar12 = (fVar14 * fVar15 + local_8) / fVar16;
      if (fVar12 < 0.0) {
        fVar12 = 0.0;
      }
      iVar7 = iVar7 + 1;
      fVar14 = fVar14 + 1.0;
      *(float *)(iVar10 + param_2) = fVar12 - param_3;
      iVar10 = iVar7 * 4;
      uVar5 = in_EDX[iVar7];
      iVar8 = (int)uVar5 >> 0x10;
    } while (iVar8 < 0);
  }
  uVar5 = in_EDX[iVar7];
  while (uVar2 = uVar5 & 0xffff, (int)uVar2 < in_ECX) {
    iVar8 = (int)uVar5 >> 0x10;
    fVar16 = *(float *)(&stack0xffffffa0 + uVar2 * 4 + in_ECX * -8) -
             *(float *)(&stack0xffffffa0 + iVar8 * 4 + in_ECX * -8);
    local_8 = (*(float *)(&stack0xffffffa0 + uVar2 * 4 + in_ECX * -0x10) -
              *(float *)(&stack0xffffffa0 + iVar8 * 4 + in_ECX * -0x10)) *
              (*(float *)(&stack0xffffffa0 + uVar2 * 4 + in_ECX * -0xc) -
              *(float *)(&stack0xffffffa0 + iVar8 * 4 + in_ECX * -0xc)) -
              (*(float *)(&stack0xffffffa0 + uVar2 * 4 + in_ECX * -0x14) -
              *(float *)(&stack0xffffffa0 + iVar8 * 4 + in_ECX * -0x14)) * fVar16;
    fVar15 = (*(float *)(&stack0xffffffa0 + uVar2 * 4 + in_ECX * -0x14) -
             *(float *)(&stack0xffffffa0 + iVar8 * 4 + in_ECX * -0x14)) *
             (*(float *)(&stack0xffffffa0 + uVar2 * 4 + iVar1 + -0x60 + 0x60) -
             *(float *)(&stack0xffffffa0 + iVar8 * 4 + iVar1 + -0x60 + 0x60)) -
             (*(float *)(&stack0xffffffa0 + uVar2 * 4 + in_ECX * -0x10) -
             *(float *)(&stack0xffffffa0 + iVar8 * 4 + in_ECX * -0x10)) * fVar16;
    fVar16 = (*(float *)(&stack0xffffffa0 + uVar2 * 4 + in_ECX * -0xc) -
             *(float *)(&stack0xffffffa0 + iVar8 * 4 + in_ECX * -0xc)) *
             (*(float *)(&stack0xffffffa0 + uVar2 * 4 + iVar1 + -0x60 + 0x60) -
             *(float *)(&stack0xffffffa0 + iVar8 * 4 + iVar1 + -0x60 + 0x60)) - fVar16 * fVar16;
    fVar12 = (fVar14 * fVar15 + local_8) / fVar16;
    if (fVar12 < 0.0) {
      fVar12 = 0.0;
    }
    iVar7 = iVar7 + 1;
    fVar14 = fVar14 + 1.0;
    *(float *)(param_2 + -4 + iVar7 * 4) = fVar12 - param_3;
    uVar5 = in_EDX[iVar7];
  }
  fVar12 = 0.0;
  while (iVar7 < in_ECX) {
    fVar11 = (fVar14 * fVar15 + local_8) / fVar16;
    if (fVar11 < 0.0) {
      fVar11 = 0.0;
    }
    iVar7 = iVar7 + 1;
    fVar14 = fVar14 + 1.0;
    *(float *)(param_2 + -4 + iVar7 * 4) = fVar11 - param_3;
  }
  if (0 < param_4) {
    iVar8 = param_4 / 2;
    iVar7 = 0;
    if (iVar8 - param_4 < 0) {
      param_1 = (float *)(iVar8 - param_4);
      iVar10 = iVar8 * 4;
      iVar9 = (iVar8 - param_4) * -4;
      iVar6 = (param_4 - iVar8) * 4;
      do {
        fVar14 = *(float *)(&stack0xffffffa0 + iVar10 + in_ECX * -8) -
                 *(float *)(&stack0xffffffa0 + iVar9 + in_ECX * -8);
        fVar15 = (*(float *)(&stack0xffffffa0 + iVar10 + in_ECX * -0x14) -
                 *(float *)(&stack0xffffffa0 + iVar9 + in_ECX * -0x14)) *
                 (*(float *)(&stack0xffffffa0 + iVar9 + iVar1) +
                 *(float *)(&stack0xffffffa0 + iVar10 + iVar1)) -
                 (*(float *)(&stack0xffffffa0 + iVar9 + in_ECX * -0x10) +
                 *(float *)(&stack0xffffffa0 + iVar10 + in_ECX * -0x10)) * fVar14;
        local_8 = (*(float *)(&stack0xffffffa0 + iVar9 + in_ECX * -0x10) +
                  *(float *)(&stack0xffffffa0 + iVar10 + in_ECX * -0x10)) *
                  (*(float *)(&stack0xffffffa0 + iVar9 + in_ECX * -0xc) +
                  *(float *)(&stack0xffffffa0 + iVar10 + in_ECX * -0xc)) -
                  (*(float *)(&stack0xffffffa0 + iVar10 + in_ECX * -0x14) -
                  *(float *)(&stack0xffffffa0 + iVar9 + in_ECX * -0x14)) * fVar14;
        fVar16 = (*(float *)(&stack0xffffffa0 + iVar9 + in_ECX * -0xc) +
                 *(float *)(&stack0xffffffa0 + iVar10 + in_ECX * -0xc)) *
                 (*(float *)(&stack0xffffffa0 + iVar9 + iVar1) +
                 *(float *)(&stack0xffffffa0 + iVar10 + iVar1)) - fVar14 * fVar14;
        fVar14 = (fVar12 * fVar15 + local_8) / fVar16 - param_3;
        if (fVar14 < *(float *)(param_2 + iVar7 * 4)) {
          *(float *)(param_2 + iVar7 * 4) = fVar14;
        }
        iVar9 = iVar6 + -4;
        iVar10 = iVar10 + 4;
        iVar7 = iVar7 + 1;
        param_1 = (float *)((int)param_1 + 1);
        fVar12 = fVar12 + 1.0;
        iVar6 = iVar9;
      } while ((int)param_1 < 0);
    }
    iVar10 = iVar8 + iVar7;
    if (iVar10 < in_ECX) {
      local_38 = iVar10 * 4;
      iVar6 = ((iVar8 - param_4) + iVar7) * 4;
      iVar8 = (iVar10 - param_4) * 4;
      do {
        fVar14 = *(float *)(&stack0xffffffa0 + local_38 + in_ECX * -8) -
                 *(float *)(&stack0xffffffa0 + iVar8 + in_ECX * -8);
        fVar15 = (*(float *)(&stack0xffffffa0 + local_38 + in_ECX * -0x14) -
                 *(float *)(&stack0xffffffa0 + iVar8 + in_ECX * -0x14)) *
                 (*(float *)(&stack0xffffffa0 + local_38 + iVar1) -
                 *(float *)(&stack0xffffffa0 + iVar8 + iVar1)) -
                 (*(float *)(&stack0xffffffa0 + local_38 + in_ECX * -0x10) -
                 *(float *)(&stack0xffffffa0 + iVar8 + in_ECX * -0x10)) * fVar14;
        local_8 = (*(float *)(&stack0xffffffa0 + local_38 + in_ECX * -0x10) -
                  *(float *)(&stack0xffffffa0 + iVar8 + in_ECX * -0x10)) *
                  (*(float *)(&stack0xffffffa0 + local_38 + in_ECX * -0xc) -
                  *(float *)(&stack0xffffffa0 + iVar8 + in_ECX * -0xc)) -
                  (*(float *)(&stack0xffffffa0 + local_38 + in_ECX * -0x14) -
                  *(float *)(&stack0xffffffa0 + iVar8 + in_ECX * -0x14)) * fVar14;
        fVar16 = (*(float *)(&stack0xffffffa0 + local_38 + in_ECX * -0xc) -
                 *(float *)(&stack0xffffffa0 + iVar8 + in_ECX * -0xc)) *
                 (*(float *)(&stack0xffffffa0 + local_38 + iVar1) -
                 *(float *)(&stack0xffffffa0 + iVar8 + iVar1)) - fVar14 * fVar14;
        fVar14 = (fVar12 * fVar15 + local_8) / fVar16 - param_3;
        if (fVar14 < *(float *)(param_2 + iVar7 * 4)) {
          *(float *)(param_2 + iVar7 * 4) = fVar14;
        }
        local_38 = local_38 + 4;
        iVar6 = iVar6 + 4;
        iVar10 = iVar10 + 1;
        iVar7 = iVar7 + 1;
        fVar12 = fVar12 + 1.0;
        iVar8 = iVar6;
      } while (iVar10 < in_ECX);
    }
    for (; iVar7 < in_ECX; iVar7 = iVar7 + 1) {
      fVar14 = (fVar12 * fVar15 + local_8) / fVar16 - param_3;
      if (fVar14 < *(float *)(param_2 + iVar7 * 4)) {
        *(float *)(param_2 + iVar7 * 4) = fVar14;
      }
      fVar12 = fVar12 + 1.0;
    }
  }
  return;
}


/* FUN_006d54c0 @ 006d54c0  kind=gamemisc  attributed-by=none  size=252 */

void FUN_006d54c0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *in_ECX;
  int in_EDX;
  int iVar5;
  int iVar6;
  
  iVar5 = in_ECX[9];
  iVar6 = 0;
  FUN_006d55d0(in_ECX[10]);
  iVar5 = (*(int *)in_ECX[5] - (iVar5 >> 1)) - in_ECX[7];
  if (1 < *in_ECX) {
    do {
      fVar2 = *(float *)(in_EDX + iVar5 * 4);
      iVar4 = iVar5;
      if (*(float *)(in_ECX[1] + 0x20) < fVar2) {
        fVar2 = *(float *)(in_ECX[1] + 0x20);
      }
      while (iVar4 = iVar4 + 1,
            iVar4 <= (*(int *)(in_ECX[5] + 4 + iVar6 * 4) + *(int *)(in_ECX[5] + iVar6 * 4) >> 1) -
                     in_ECX[7]) {
        fVar3 = *(float *)(in_EDX + 4 + iVar5 * 4);
        iVar5 = iVar5 + 1;
        if (((-9999.0 < fVar3) && (fVar3 < fVar2)) || (fVar2 == -9999.0)) {
          fVar2 = fVar3;
        }
      }
      iVar4 = in_ECX[7];
      if (iVar6 < *in_ECX) {
        do {
          if (iVar4 + iVar5 < *(int *)(in_ECX[5] + iVar6 * 4)) break;
          pfVar1 = (float *)(param_1 + iVar6 * 4);
          if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
            *(float *)(param_1 + iVar6 * 4) = fVar2;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *in_ECX);
      }
    } while (iVar6 + 1 < *in_ECX);
  }
  fVar2 = *(float *)(in_EDX + -4 + in_ECX[10] * 4);
  if (iVar6 < *in_ECX) {
    do {
      pfVar1 = (float *)(param_1 + iVar6 * 4);
      if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
        *(float *)(param_1 + iVar6 * 4) = fVar2;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *in_ECX);
  }
  return;
}


/* FUN_006d55d0 @ 006d55d0  kind=gamemisc  attributed-by=none  size=391 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_006d55d0(int param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int in_EDX;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float afStack_3c [2];
  int local_c;
  
  afStack_3c[1] = 1.0040898e-38;
  afStack_3c[1 - param_1] = 1.0040914e-38;
  iVar5 = 0;
  iVar8 = 0;
  local_c = 0;
  if (0 < param_1) {
    do {
      if ((1 < iVar5) &&
         (fVar1 = *(float *)(in_ECX + iVar8 * 4), afStack_3c[param_1 * -2 + iVar5 + 1] <= fVar1)) {
        pfVar6 = afStack_3c + (iVar5 - param_1);
        do {
          if (((((int)afStack_3c[(iVar5 + 1) - param_1] + in_EDX <= iVar8) || (iVar5 < 2)) ||
              (pfVar6[-param_1] < afStack_3c[param_1 * -2 + iVar5 + 1])) ||
             ((int)*pfVar6 + in_EDX <= iVar8)) break;
          iVar7 = param_1 * -2 + iVar5;
          iVar5 = iVar5 + -1;
          pfVar6 = pfVar6 + -1;
        } while (afStack_3c[iVar7] <= fVar1);
      }
      *(int *)(&stack0xffffffcc + iVar5 * 4 + param_1 * -4) = iVar8;
      *(undefined4 *)(&stack0xffffffcc + iVar5 * 4 + param_1 * -8) =
           *(undefined4 *)(in_ECX + iVar8 * 4);
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 1;
      local_c = iVar5;
    } while (iVar8 < param_1);
  }
  iVar5 = 0;
  iVar8 = 0;
  if (0 < local_c) {
    piVar2 = (int *)(&stack0xffffffd0 + param_1 * -4);
    do {
      if ((local_c + -1 <= iVar8) ||
         ((float)piVar2[-param_1] < *(float *)(&stack0xffffffcc + iVar8 * 4 + param_1 * -8) ||
          (float)piVar2[-param_1] == *(float *)(&stack0xffffffcc + iVar8 * 4 + param_1 * -8))) {
        iVar7 = in_EDX + 1 + piVar2[-1];
      }
      else {
        iVar7 = *piVar2;
      }
      if (param_1 < iVar7) {
        iVar7 = param_1;
      }
      if (iVar5 < iVar7) {
        if (3 < iVar7 - iVar5) {
          puVar3 = (undefined4 *)(in_ECX + iVar5 * 4 + 8);
          iVar4 = ((iVar7 - iVar5) - 4U >> 2) + 1;
          iVar5 = iVar5 + iVar4 * 4;
          do {
            puVar3[-2] = *(undefined4 *)(&stack0xffffffcc + iVar8 * 4 + param_1 * -8);
            puVar3[-1] = *(undefined4 *)(&stack0xffffffcc + iVar8 * 4 + param_1 * -8);
            *puVar3 = *(undefined4 *)(&stack0xffffffcc + iVar8 * 4 + param_1 * -8);
            puVar3[1] = *(undefined4 *)(&stack0xffffffcc + iVar8 * 4 + param_1 * -8);
            puVar3 = puVar3 + 4;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        for (; iVar5 < iVar7; iVar5 = iVar5 + 1) {
          *(undefined4 *)(in_ECX + iVar5 * 4) =
               *(undefined4 *)(&stack0xffffffcc + iVar8 * 4 + param_1 * -8);
        }
      }
      iVar8 = iVar8 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar8 < local_c);
  }
  return;
}


/* FUN_006d5760 @ 006d5760  kind=gamemisc  attributed-by=none  size=406 */

void FUN_006d5760(int param_1,int param_2,int param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int *in_ECX;
  int iVar9;
  int in_EDX;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  
  iVar4 = *in_ECX;
  fVar13 = *(float *)(in_ECX[1] + 0x1f0) - param_4;
  param_4 = 0.0;
  if (0 < iVar4) {
    do {
      iVar9 = in_ECX[5];
      iVar11 = *(int *)(iVar9 + (int)param_4 * 4);
      fVar6 = *(float *)(param_1 + (int)param_4 * 4);
      while ((iVar7 = (int)param_4 + 1, iVar7 < iVar4 &&
             (*(int *)(iVar9 + 4 + (int)param_4 * 4) == iVar11))) {
        fVar3 = *(float *)(param_1 + iVar7 * 4);
        param_4 = (float)iVar7;
        if (fVar6 < fVar3) {
          fVar6 = fVar3;
        }
      }
      pfVar1 = (float *)(param_2 + (int)param_4 * 4);
      if (*pfVar1 <= fVar6 + 6.0 && fVar6 + 6.0 != *pfVar1) {
        iVar11 = iVar11 >> ((byte)in_ECX[8] & 0x1f);
        if (iVar11 < 0x11) {
          if (iVar11 < 0) {
            iVar11 = 0;
          }
        }
        else {
          iVar11 = 0x10;
        }
        iVar7 = in_ECX[10];
        iVar5 = in_ECX[9];
        iVar8 = (int)(((fVar6 + fVar13) - 30.0) * 0.1);
        iVar10 = 0;
        if (0 < iVar8) {
          iVar10 = iVar8;
        }
        iVar8 = 7;
        if (iVar10 < 7) {
          iVar8 = iVar10;
        }
        pfVar1 = *(float **)(*(int *)(in_EDX + iVar11 * 4) + iVar8 * 4);
        fVar3 = pfVar1[1];
        iVar11 = (int)(((float)(*(int *)(iVar9 + (int)param_4 * 4) - in_ECX[7]) +
                       (*pfVar1 - 16.0) * (float)iVar5) - (float)(iVar5 >> 1));
        for (iVar9 = (int)*pfVar1; iVar9 < (int)fVar3; iVar9 = iVar9 + 1) {
          if ((0 < iVar11) &&
             (fVar12 = pfVar1[iVar9 + 2] + fVar6, pfVar2 = (float *)(param_3 + iVar11 * 4),
             *pfVar2 <= fVar12 && fVar12 != *pfVar2)) {
            *(float *)(param_3 + iVar11 * 4) = fVar12;
          }
          iVar11 = iVar11 + iVar5;
          if (iVar7 <= iVar11) break;
        }
      }
      param_4 = (float)((int)param_4 + 1);
    } while ((int)param_4 < iVar4);
  }
  return;
}


/* FUN_006d5910 @ 006d5910  kind=gamemisc  attributed-by=none  size=191 */

void FUN_006d5910(int param_1,int param_2,int param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int in_EDX;
  float fVar6;
  float in_XMM2_Da;
  
  iVar4 = (int)(((in_XMM2_Da + param_4) - 30.0) * 0.1);
  iVar5 = 0;
  if (0 < iVar4) {
    iVar5 = iVar4;
  }
  iVar4 = 7;
  if (iVar5 < 7) {
    iVar4 = iVar5;
  }
  pfVar3 = *(float **)(in_EDX + iVar4 * 4);
  fVar2 = pfVar3[1];
  iVar5 = (int)*pfVar3;
  iVar4 = (int)(((*pfVar3 - 16.0) * (float)param_3 + (float)param_1) - (float)(param_3 >> 1));
  while( true ) {
    if ((int)fVar2 <= iVar5) {
      return;
    }
    if ((0 < iVar4) &&
       (fVar6 = pfVar3[iVar5 + 2] + in_XMM2_Da, pfVar1 = (float *)(in_ECX + iVar4 * 4),
       *pfVar1 <= fVar6 && fVar6 != *pfVar1)) {
      *(float *)(in_ECX + iVar4 * 4) = fVar6;
    }
    iVar4 = iVar4 + param_3;
    if (param_2 <= iVar4) break;
    iVar5 = iVar5 + 1;
  }
  return;
}


/* FUN_006d59d0 @ 006d59d0  kind=gamemisc  attributed-by=none  size=2381 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void * FUN_006d59d0(float param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *in_ECX;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 extraout_ECX;
  float in_EDX;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float in_XMM1_Da;
  float in_XMM3_Da;
  int aiStack_7f74 [3];
  undefined8 uStack_7f68;
  float local_7f50 [55];
  float afStack_7e74 [7561];
  float local_850 [448];
  float local_150 [56];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  void *local_48;
  void *local_44;
  undefined8 local_40;
  undefined8 local_38;
  float local_30;
  float *local_2c;
  float *local_28;
  int local_24;
  float *local_20;
  float local_1c;
  float *local_18;
  float *local_14;
  float local_10;
  float *local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x6d59dd;
  uStack_7f68._4_4_ = 0x6d5a00;
  iVar1 = (int)in_EDX * -4;
  local_14 = local_7f50 + (-4 - (int)in_EDX);
  *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0x44;
  *(undefined4 *)((int)&uStack_7f68 + iVar1) = 0x6d5a0b;
  local_30 = in_EDX;
  local_1c = in_XMM1_Da;
  local_c = in_ECX;
  local_38._4_4_ = (float *)in_XMM3_Da;
  local_44 = malloc(*(size_t *)((int)&uStack_7f68 + iVar1 + 4));
  *(undefined4 *)((int)&uStack_7f68 + iVar1) = 0x7700;
  aiStack_7f74[2 - (int)in_EDX] = 0;
  aiStack_7f74[1 - (int)in_EDX] = (int)local_7f50;
  aiStack_7f74[-(int)in_EDX] = 0x6d5a21;
  memset((void *)aiStack_7f74[1 - (int)in_EDX],aiStack_7f74[2 - (int)in_EDX],
         *(size_t *)((int)&uStack_7f68 + iVar1));
  local_18 = (float *)&DAT_00737ac0;
  local_20 = local_7f50;
  local_24 = 0;
  local_2c = (float *)&DAT_00737964;
  local_10 = (float)(2 - (int)in_ECX);
  do {
    pfVar7 = local_20;
    iVar5 = (int)local_10 + (int)in_ECX;
    pfVar4 = local_150;
    iVar9 = 0x38;
    pfVar8 = local_2c;
    do {
      iVar11 = iVar9;
      if (iVar5 + -2 < 0x58) {
        fVar13 = 999.0;
        if (pfVar8[-1] < 999.0) {
          fVar13 = pfVar8[-1];
        }
      }
      else {
        fVar13 = -30.0;
      }
      if (iVar5 + -1 < 0x58) {
        if (*pfVar8 < fVar13) {
          fVar13 = *pfVar8;
        }
      }
      else if (-30.0 < fVar13) {
        fVar13 = -30.0;
      }
      if (iVar5 < 0x58) {
        if (pfVar8[1] < fVar13) {
          fVar13 = pfVar8[1];
        }
      }
      else if (-30.0 < fVar13) {
        fVar13 = -30.0;
      }
      iVar5 = iVar5 + 1;
      if (iVar5 < 0x58) {
        if (pfVar8[2] < fVar13) {
          fVar13 = pfVar8[2];
        }
      }
      else if (-30.0 < fVar13) {
        fVar13 = -30.0;
      }
      *pfVar4 = fVar13;
      pfVar8 = pfVar8 + 1;
      pfVar4 = pfVar4 + 1;
      iVar9 = iVar11 + -1;
    } while (iVar9 != 0);
    pfVar4 = local_18;
    pfVar8 = pfVar7 + 0x70;
    for (iVar9 = 0x150; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar8 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar4 = local_18;
    pfVar8 = pfVar7;
    for (iVar9 = 0x38; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar8 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar8 = pfVar8 + 1;
    }
    local_28 = pfVar7 + 0x38;
    pfVar4 = local_18;
    pfVar7 = pfVar7 + 0x38;
    for (iVar9 = 0x38; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar7 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar7 = pfVar7 + 1;
    }
    iVar11 = iVar11 + 7;
    do {
      uVar6 = 0x10;
      pfVar4 = local_20;
      do {
        fVar13 = (float)(int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) * param_1 +
                 (float)local_38._4_4_;
        if (((fVar13 < 0.0) && (0.0 < (float)local_38._4_4_)) ||
           ((0.0 < fVar13 && ((float)local_38._4_4_ < 0.0)))) {
          fVar13 = 0.0;
        }
        uVar6 = uVar6 - 1;
        local_20 = pfVar4 + 1;
        *pfVar4 = fVar13 + *pfVar4;
        pfVar4 = local_20;
      } while (-0x28 < (int)uVar6);
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    iVar9 = 0;
    fVar13 = *local_c;
    do {
      iVar5 = iVar9;
      if (iVar9 < 2) {
        iVar5 = 2;
      }
      local_40 = (double)CONCAT44(local_7f50 + (local_24 + iVar9) * 0x38,(undefined4)local_40);
      iVar11 = 0xe;
      fVar12 = ((fVar13 + 100.0) - (float)iVar5 * 10.0) - 30.0;
      pfVar4 = local_7f50 + (local_24 + iVar9) * 0x38;
      do {
        *pfVar4 = *pfVar4 + fVar12;
        pfVar4[1] = pfVar4[1] + fVar12;
        pfVar4[2] = pfVar4[2] + fVar12;
        pfVar4[3] = pfVar4[3] + fVar12;
        iVar11 = iVar11 + -1;
        pfVar4 = pfVar4 + 4;
      } while (iVar11 != 0);
      pfVar8 = local_850 + iVar9 * 0x38;
      fVar12 = (100.0 - (float)iVar9 * 10.0) - 30.0;
      pfVar4 = local_150;
      pfVar7 = pfVar8;
      for (iVar5 = 0x38; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar7 = pfVar7 + 1;
      }
      iVar5 = 7;
      pfVar4 = local_850 + iVar9 * 0x38 + 2;
      do {
        pfVar4[-2] = fVar12 + pfVar4[-2];
        pfVar4[-1] = fVar12 + pfVar4[-1];
        *pfVar4 = fVar12 + *pfVar4;
        pfVar4[1] = fVar12 + pfVar4[1];
        pfVar4[2] = fVar12 + pfVar4[2];
        pfVar4[3] = fVar12 + pfVar4[3];
        pfVar4[4] = fVar12 + pfVar4[4];
        pfVar4[5] = fVar12 + pfVar4[5];
        iVar5 = iVar5 + -1;
        pfVar4 = pfVar4 + 8;
      } while (iVar5 != 0);
      iVar11 = local_40._4_4_ - (int)pfVar8;
      iVar5 = 0x38;
      do {
        iVar10 = iVar5;
        fVar12 = *(float *)((int)pfVar8 + iVar11);
        if (*pfVar8 <= fVar12 && fVar12 != *pfVar8) {
          *pfVar8 = fVar12;
        }
        pfVar8 = pfVar8 + 1;
        iVar5 = iVar10 + -1;
      } while (iVar5 != 0);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 8);
    iVar10 = iVar10 + 6;
    pfVar4 = local_850;
    do {
      pfVar8 = pfVar4 + 0x38;
      pfVar7 = pfVar4 + 3;
      pfVar3 = pfVar4 + 0x39;
      iVar9 = 0xe;
      do {
        if (pfVar7[-3] < pfVar3[-1]) {
          pfVar3[-1] = pfVar7[-3];
        }
        fVar13 = *(float *)(((int)pfVar4 - (int)pfVar8) + (int)pfVar3);
        if (fVar13 < *pfVar3) {
          *pfVar3 = fVar13;
        }
        if (pfVar7[-1] < pfVar3[1]) {
          pfVar3[1] = pfVar7[-1];
        }
        if (*pfVar7 < pfVar3[2]) {
          pfVar3[2] = *pfVar7;
        }
        pfVar2 = local_14;
        pfVar3 = pfVar3 + 4;
        pfVar7 = pfVar7 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar9 = 0x38;
      pfVar4 = local_28;
      do {
        fVar13 = *(float *)(((int)pfVar8 - (int)local_28) + (int)pfVar4);
        if (fVar13 < *pfVar4) {
          *pfVar4 = fVar13;
        }
        pfVar4 = pfVar4 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      local_28 = local_28 + 0x38;
      iVar10 = iVar10 + -1;
      pfVar4 = pfVar8;
    } while (iVar10 != 0);
    local_18 = local_18 + 0x150;
    local_24 = local_24 + 8;
    local_2c = local_2c + 4;
    in_ECX = local_c + 1;
    local_c = in_ECX;
  } while ((int)local_2c < 0x737a74);
  local_28 = (float *)0x0;
  local_18 = (float *)0x8;
  do {
    pfVar4 = local_28;
    *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0x20;
    *(undefined4 *)((int)&uStack_7f68 + iVar1) = 0x6d5df8;
    local_48 = malloc(*(size_t *)((int)&uStack_7f68 + iVar1 + 4));
    local_58 = (double)(int)pfVar4 * 0.5;
    *(void **)((int)local_44 + (int)pfVar4 * 4) = local_48;
    dVar14 = (local_58 + 5.965784072875977) * 0.6931470036506653;
    *(undefined4 *)((int)&uStack_7f68 + iVar1) = 0x6d5e2b;
    libm_sse2_exp_precise();
    *(undefined4 *)((int)&uStack_7f68 + iVar1) = extraout_ECX;
    local_70 = dVar14 / (double)local_1c;
    *(double *)((int)&uStack_7f68 + iVar1) = dVar14 / (double)local_1c;
    aiStack_7f74[2 - (int)in_EDX] = 0x6d5e48;
    local_38 = floor(*(double *)((int)&uStack_7f68 + iVar1));
    iVar9 = (int)local_38;
    dVar14 = (double)((float)iVar9 * local_1c + 1.0);
    aiStack_7f74[2 - (int)in_EDX] = 0x6d5e6c;
    libm_sse2_log_precise();
    *(double *)((int)&uStack_7f68 + iVar1) = (dVar14 * 1.4426950216293335 - 5.965784072875977) * 2.0
    ;
    aiStack_7f74[2 - (int)in_EDX] = 0x6d5e8f;
    local_40 = ceil(*(double *)((int)&uStack_7f68 + iVar1));
    dVar14 = (double)((float)(iVar9 + 1) * local_1c);
    aiStack_7f74[2 - (int)in_EDX] = 0x6d5ea9;
    libm_sse2_log_precise();
    local_60 = (dVar14 * 1.4426950216293335 - 5.965784072875977) * 2.0;
    *(double *)((int)&uStack_7f68 + iVar1) = local_60;
    aiStack_7f74[2 - (int)in_EDX] = 0x6d5ed1;
    dVar14 = floor(*(double *)((int)&uStack_7f68 + iVar1));
    iVar9 = (int)dVar14;
    local_38._4_4_ = (float *)(int)local_40;
    if ((int)pfVar4 < (int)local_40) {
      local_38._4_4_ = pfVar4;
    }
    if ((int)local_38._4_4_ < 0) {
      local_38._4_4_ = (float *)0x0;
    }
    if (0x10 < iVar9) {
      iVar9 = 0x10;
    }
    local_38._0_4_ = SUB84(dVar14,0);
    local_40 = (double)CONCAT44(iVar9,(undefined4)local_40);
    local_c = (float *)0x0;
    do {
      pfVar4 = local_c;
      fVar13 = (float)local_38._4_4_;
      *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0xe8;
      *(undefined4 *)((int)&uStack_7f68 + iVar1) = 0x6d5f0e;
      local_2c = malloc(*(size_t *)((int)&uStack_7f68 + iVar1 + 4));
      *(float **)((int)local_48 + (int)pfVar4 * 4) = local_2c;
      fVar12 = local_30;
      pfVar7 = pfVar2;
      if (0 < (int)local_30) {
        for (; pfVar4 = local_c, fVar12 != 0.0; fVar12 = (float)((int)fVar12 + -1)) {
          *pfVar7 = 999.0;
          pfVar7 = pfVar7 + 1;
        }
      }
      local_10 = fVar13;
      if ((int)local_38._4_4_ <= local_40._4_4_) {
        local_24 = (int)(pfVar4 + (int)local_38._4_4_ * 2) * 0x38;
        local_14 = afStack_7e74 + (int)(pfVar4 + (int)local_38._4_4_ * 2) * 0x38;
        do {
          fVar12 = 0.0;
          local_50 = (double)(int)fVar13 * 0.5;
          local_20 = (float *)0x0;
          local_10 = fVar13;
          do {
            local_68 = (double)(int)local_20 * 0.125 + local_50;
            dVar14 = ((local_68 - 2.0625) + 5.965784072875977) * 0.6931470036506653;
            *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0x6d5fc6;
            libm_sse2_exp_precise();
            fVar13 = (float)(int)(dVar14 / (double)local_1c);
            dVar14 = ((local_68 - 1.9375) + 5.965784072875977) * 0.6931470036506653;
            *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0x6d5ff8;
            libm_sse2_exp_precise();
            if ((int)fVar13 < 0) {
              fVar13 = 0.0;
            }
            if ((int)local_30 < (int)fVar13) {
              fVar13 = local_30;
            }
            if ((int)fVar13 < (int)fVar12) {
              fVar12 = fVar13;
            }
            fVar13 = (float)(int)(dVar14 / (double)local_1c + 1.0);
            if ((int)fVar13 < 0) {
              fVar13 = 0.0;
            }
            if ((int)local_30 < (int)fVar13) {
              fVar13 = local_30;
            }
            for (; ((int)fVar12 < (int)fVar13 && ((int)fVar12 < (int)local_30));
                fVar12 = (float)((int)fVar12 + 1)) {
              if (local_7f50[local_24 + (int)local_20] < pfVar2[(int)fVar12]) {
                pfVar2[(int)fVar12] = local_7f50[local_24 + (int)local_20];
              }
            }
            local_20 = (float *)((int)local_20 + 1);
          } while ((int)local_20 < 0x38);
          if ((int)fVar12 < (int)local_30) {
            fVar13 = *local_14;
            do {
              if (fVar13 < pfVar2[(int)fVar12]) {
                pfVar2[(int)fVar12] = fVar13;
              }
              fVar12 = (float)((int)fVar12 + 1);
            } while ((int)fVar12 < (int)local_30);
          }
          local_24 = local_24 + 0x1c0;
          fVar13 = (float)((int)local_10 + 1);
          local_14 = local_14 + 0x1c0;
          local_10 = fVar13;
        } while ((int)fVar13 <= local_40._4_4_);
      }
      if ((int)local_28 + 1 < 0x11) {
        fVar13 = 0.0;
        local_14 = (float *)0x0;
        do {
          local_50 = (double)(int)local_14 * 0.125 + local_58;
          dVar14 = ((local_50 - 2.0625) + 5.965784072875977) * 0.6931470036506653;
          *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0x6d6107;
          libm_sse2_exp_precise();
          fVar12 = (float)(int)(dVar14 / (double)local_1c);
          dVar14 = ((local_50 - 1.9375) + 5.965784072875977) * 0.6931470036506653;
          *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0x6d6139;
          libm_sse2_exp_precise();
          if ((int)fVar12 < 0) {
            fVar12 = 0.0;
          }
          if ((int)local_30 < (int)fVar12) {
            fVar12 = local_30;
          }
          local_10 = (float)(int)(dVar14 / (double)local_1c + 1.0);
          if ((int)fVar12 < (int)fVar13) {
            fVar13 = fVar12;
          }
          if ((int)local_10 < 0) {
            local_10 = 0.0;
          }
          if ((int)local_30 < (int)local_10) {
            local_10 = local_30;
          }
          for (; ((int)fVar13 < (int)local_10 && ((int)fVar13 < (int)local_30));
              fVar13 = (float)((int)fVar13 + 1)) {
            if (local_7f50[(int)(local_14 + ((int)local_18 + (int)local_c) * 0xe)] <
                pfVar2[(int)fVar13]) {
              pfVar2[(int)fVar13] =
                   local_7f50[(int)(local_14 + ((int)local_18 + (int)local_c) * 0xe)];
            }
          }
          local_14 = (float *)((int)local_14 + 1);
        } while ((int)local_14 < 0x38);
        if ((int)fVar13 < (int)local_30) {
          fVar12 = afStack_7e74[((int)local_c + (int)local_18) * 0x38];
          do {
            if (fVar12 < pfVar2[(int)fVar13]) {
              pfVar2[(int)fVar13] = fVar12;
            }
            fVar13 = (float)((int)fVar13 + 1);
          } while ((int)fVar13 < (int)local_30);
        }
      }
      fVar13 = local_30;
      local_10 = 0.0;
      iVar9 = 8;
      do {
        dVar14 = ((((double)(int)local_10 * 0.125 + local_58) - 2.0) + 5.965784072875977) *
                 0.6931470036506653;
        *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0x6d6242;
        libm_sse2_exp_precise();
        iVar5 = (int)(dVar14 / (double)local_1c);
        if (iVar5 < 0) {
          *(undefined4 *)(iVar9 + (int)local_2c) = 0xc479c000;
        }
        else if (iVar5 < (int)fVar13) {
          *(float *)(iVar9 + (int)local_2c) = pfVar2[iVar5];
        }
        else {
          *(undefined4 *)(iVar9 + (int)local_2c) = 0xc479c000;
        }
        iVar9 = iVar9 + 4;
        local_10 = (float)((int)local_10 + 1);
      } while (iVar9 < 0xe8);
      iVar5 = 0;
      iVar9 = 0xc;
      do {
        if (-200.0 < *(float *)(iVar9 + -4 + (int)local_2c)) break;
        if (-200.0 < *(float *)(iVar9 + (int)local_2c)) {
          iVar5 = iVar5 + 1;
          break;
        }
        if (-200.0 < *(float *)(iVar9 + 4 + (int)local_2c)) {
          iVar5 = iVar5 + 2;
          break;
        }
        if (-200.0 < *(float *)(iVar9 + 8 + (int)local_2c)) {
          iVar5 = iVar5 + 3;
          break;
        }
        iVar9 = iVar9 + 0x10;
        iVar5 = iVar5 + 4;
      } while (iVar9 < 0x4c);
      iVar9 = 0x37;
      *local_2c = (float)iVar5;
      do {
        if (-200.0 < local_2c[iVar9 + 2]) break;
        if (-200.0 < local_2c[iVar9 + 1]) {
          iVar9 = iVar9 + -1;
          break;
        }
        iVar9 = iVar9 + -2;
      } while (0x11 < iVar9);
      local_c = (float *)((int)local_c + 1);
      local_2c[1] = (float)iVar9;
    } while ((int)local_c < 8);
    local_18 = (float *)((int)local_18 + 8);
    local_28 = (float *)((int)local_28 + 1);
    if (0x8f < (int)local_18) {
      return local_44;
    }
  } while( true );
}


/* FUN_006d6460 @ 006d6460  kind=gamemisc  attributed-by=none  size=34 */

void FUN_006d6460(void)

{
  return;
}


/* FUN_006d6550 @ 006d6550  kind=gamemisc  attributed-by=none  size=2236 */

void FUN_006d6550(int *param_1,int param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  
  local_18 = -99;
  memset(in_ECX,0,0x34);
  in_ECX[9] = *param_1;
  dVar8 = (double)((float)*param_1 * 8.0);
  libm_sse2_log_precise();
  dVar11 = 2.0;
  libm_sse2_log_precise();
  dVar14 = floor(dVar8 / dVar11 + 0.5);
  dVar11 = (double)param_2;
  in_ECX[8] = (int)(dVar14 - 1.0);
  dVar8 = ((double)((float)param_3 * 0.25) * 0.5) / dVar11;
  libm_sse2_log_precise();
  iVar6 = (int)((dVar8 * 1.4426950216293335 - 5.965784072875977) *
                (double)(1 << ((char)(int)(dVar14 - 1.0) + 1U & 0x1f)) - (double)*param_1);
  in_ECX[7] = iVar6;
  dVar8 = ((double)(((float)param_2 + 0.25) * (float)param_3) * 0.5) / dVar11;
  libm_sse2_log_precise();
  in_ECX[10] = ((int)((dVar8 * 1.4426950216293335 - 5.965784072875977) *
                      (double)(1 << ((char)in_ECX[8] + 1U & 0x1f)) + 0.5) - iVar6) + 1;
  pvVar1 = malloc(param_2 * 4);
  in_ECX[4] = (int)pvVar1;
  pvVar1 = malloc(param_2 * 4);
  in_ECX[5] = (int)pvVar1;
  pvVar1 = malloc(param_2 * 4);
  in_ECX[6] = (int)pvVar1;
  in_ECX[1] = in_EDX;
  *in_ECX = param_2;
  in_ECX[0xb] = param_3;
  in_ECX[0xc] = 0x3f800000;
  if (param_3 < 26000) {
    in_ECX[0xc] = 0;
  }
  else if (param_3 < 38000) {
    in_ECX[0xc] = 0x3f70a3d7;
  }
  else if (46000 < param_3) {
    in_ECX[0xc] = 0x3fa33333;
  }
  param_1 = (int *)0x0;
  iVar6 = 0;
  do {
    iVar2 = (int)param_1 + 1;
    dVar8 = (((double)iVar2 * 0.125 - 2.0) + 5.965784072875977) * 0.6931470036506653;
    libm_sse2_exp_precise();
    dVar8 = floor((dVar8 * 2.0 * dVar11) / (double)param_3 + 0.5);
    iVar4 = (int)dVar8;
    fVar10 = (float)(&DAT_00737960)[(int)param_1];
    if (iVar6 < iVar4) {
      fVar12 = ((float)(&DAT_00737964)[(int)param_1] - fVar10) / (float)(iVar4 - iVar6);
      if (3 < iVar4 - iVar6) {
        iVar3 = iVar6 + 2;
        do {
          if (param_2 <= iVar6) goto LAB_006d68d8;
          *(float *)(in_ECX[4] + iVar6 * 4) = fVar10 + 100.0;
          if (param_2 <= iVar3 + -1) {
            iVar6 = iVar6 + 1;
            goto LAB_006d68d8;
          }
          fVar9 = fVar12 + fVar12 + fVar10;
          *(float *)(in_ECX[4] + 4 + iVar6 * 4) = fVar12 + fVar10 + 100.0;
          if (param_2 <= iVar3) {
            iVar6 = iVar6 + 2;
            goto LAB_006d68d8;
          }
          fVar13 = fVar12 + fVar9;
          *(float *)(in_ECX[4] + 8 + iVar6 * 4) = fVar9 + 100.0;
          if (param_2 <= iVar3 + 1) {
            iVar6 = iVar6 + 3;
            goto LAB_006d68d8;
          }
          iVar6 = iVar6 + 4;
          iVar3 = iVar3 + 4;
          fVar10 = fVar12 + fVar13;
          *(float *)(in_ECX[4] + -4 + iVar6 * 4) = fVar13 + 100.0;
        } while (iVar6 < iVar4 + -3);
      }
      while ((iVar6 < iVar4 && (iVar6 < param_2))) {
        iVar6 = iVar6 + 1;
        *(float *)(in_ECX[4] + -4 + iVar6 * 4) = fVar10 + 100.0;
        fVar10 = fVar10 + fVar12;
      }
    }
LAB_006d68d8:
    param_1 = (int *)iVar2;
  } while (iVar2 < 0x57);
  if (iVar6 < param_2) {
    if (3 < param_2 - iVar6) {
      do {
        iVar6 = iVar6 + 4;
        *(undefined4 *)(in_ECX[4] + -0x10 + iVar6 * 4) =
             *(undefined4 *)(in_ECX[4] + -0x14 + iVar6 * 4);
        *(undefined4 *)(in_ECX[4] + -0xc + iVar6 * 4) =
             *(undefined4 *)(in_ECX[4] + -0x10 + iVar6 * 4);
        *(undefined4 *)(in_ECX[4] + -8 + iVar6 * 4) = *(undefined4 *)(in_ECX[4] + -0xc + iVar6 * 4);
        *(undefined4 *)(in_ECX[4] + -4 + iVar6 * 4) = *(undefined4 *)(in_ECX[4] + -8 + iVar6 * 4);
      } while (iVar6 < param_2 + -3);
    }
    while (iVar6 < param_2) {
      iVar6 = iVar6 + 1;
      *(undefined4 *)(in_ECX[4] + -4 + iVar6 * 4) = *(undefined4 *)(in_ECX[4] + -8 + iVar6 * 4);
    }
  }
  local_10 = 0;
  if (0 < param_2) {
    iVar2 = param_3 / (param_2 * 2);
    iVar4 = iVar2 * iVar2;
    local_1c = 0;
    local_28 = 0;
    iVar6 = 1;
    do {
      dVar8 = (double)((float)(local_28 * local_10) * 1.85e-08);
      libm_sse2_atan_precise();
      dVar14 = (double)((float)local_1c * 0.00074);
      libm_sse2_atan_precise();
      local_20 = *(int *)(in_EDX + 0x78) + local_18;
      fVar10 = (float)(dVar8 * 2.240000009536743 + dVar14 * 13.100000381469727 +
                      (double)((float)local_1c * 0.0001));
      if (local_20 < local_10) {
        fVar12 = *(float *)(in_EDX + 0x70);
        iVar3 = iVar2 * local_18;
        iVar7 = iVar4 * local_18;
        do {
          dVar8 = (double)((float)(iVar7 * local_18) * 1.85e-08);
          libm_sse2_atan_precise();
          dVar14 = (double)((float)iVar3 * 0.00074);
          libm_sse2_atan_precise();
          if ((double)(fVar10 - fVar12) <=
              dVar8 * 2.240000009536743 + dVar14 * 13.100000381469727 +
              (double)((float)iVar3 * 0.0001)) break;
          iVar7 = iVar7 + iVar4;
          iVar3 = iVar3 + iVar2;
          local_20 = local_20 + 1;
          local_18 = local_18 + 1;
        } while (local_20 < local_10);
      }
      if (iVar6 <= param_2) {
        iVar3 = *(int *)(in_EDX + 0x7c);
        iVar5 = iVar2 * iVar6;
        iVar7 = iVar4 * iVar6;
        do {
          if (iVar3 + local_10 <= iVar6) {
            dVar8 = (double)((float)(iVar6 * iVar7) * 1.85e-08);
            libm_sse2_atan_precise();
            dVar14 = (double)((float)iVar5 * 0.00074);
            libm_sse2_atan_precise();
            if ((double)(*(float *)(in_EDX + 0x74) + fVar10) <=
                dVar8 * 2.240000009536743 + dVar14 * 13.100000381469727 +
                (double)((float)iVar5 * 0.0001)) break;
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + iVar4;
          iVar5 = iVar5 + iVar2;
        } while (iVar6 <= param_2);
      }
      *(int *)(in_ECX[6] + local_10 * 4) = local_18 * 0x10000 + -0x10001 + iVar6;
      local_28 = local_28 + iVar4;
      local_1c = local_1c + iVar2;
      local_10 = local_10 + 1;
    } while (local_10 < param_2);
  }
  iVar6 = 0;
  if (0 < param_2) {
    do {
      dVar8 = ((double)((float)iVar6 + 0.25) * 0.5 * (double)param_3) / dVar11;
      libm_sse2_log_precise();
      iVar6 = iVar6 + 1;
      *(int *)(in_ECX[5] + -4 + iVar6 * 4) =
           (int)((dVar8 * 1.4426950216293335 - 5.965784072875977) *
                 (double)(1 << ((char)in_ECX[8] + 1U & 0x1f)) + 0.5);
    } while (iVar6 < param_2);
  }
  iVar6 = FUN_006d59d0();
  in_ECX[2] = iVar6;
  pvVar1 = malloc(0xc);
  in_ECX[3] = (int)pvVar1;
  iVar6 = 0;
  do {
    pvVar1 = malloc(param_2 * 4);
    iVar2 = iVar6 + 4;
    *(void **)(iVar6 + in_ECX[3]) = pvVar1;
    iVar6 = iVar2;
  } while (iVar2 < 0xc);
  iVar6 = 0;
  if (0 < param_2) {
    do {
      dVar8 = (((double)iVar6 + 0.5) * (double)param_3) / (dVar11 * 2.0);
      libm_sse2_log_precise();
      fVar12 = (float)((dVar8 * 1.4426950216293335 - 5.965784072875977) * 2.0);
      fVar10 = 0.0;
      if ((fVar12 < 0.0) || (fVar10 = 16.0, 16.0 <= fVar12)) {
        fVar12 = fVar10;
      }
      iVar2 = (int)fVar12;
      iVar6 = iVar6 + 1;
      fVar12 = fVar12 - (float)iVar2;
      fVar10 = 1.0 - fVar12;
      *(float *)(*(int *)in_ECX[3] + -4 + iVar6 * 4) =
           *(float *)(in_ECX[1] + 0x88 + iVar2 * 4) * fVar12 +
           *(float *)(in_ECX[1] + 0x84 + iVar2 * 4) * fVar10;
      *(float *)(*(int *)(in_ECX[3] + 4) + -4 + iVar6 * 4) =
           *(float *)(in_ECX[1] + 0xcc + iVar2 * 4) * fVar12 +
           *(float *)(in_ECX[1] + 200 + iVar2 * 4) * fVar10;
      *(float *)(*(int *)(in_ECX[3] + 8) + -4 + iVar6 * 4) =
           *(float *)(in_ECX[1] + 0x110 + iVar2 * 4) * fVar12 +
           *(float *)(in_ECX[1] + 0x10c + iVar2 * 4) * fVar10;
    } while (iVar6 < param_2);
  }
  return;
}


/* FUN_006d6e60 @ 006d6e60  kind=gamemisc  attributed-by=none  size=32 */

void FUN_006d6e60(void)

{
  void *in_ECX;
  
  if (in_ECX != (void *)0x0) {
    memset(in_ECX,0,0x208);
    free(in_ECX);
  }
  return;
}


/* FUN_006d6eb0 @ 006d6eb0  kind=gamemisc  attributed-by=none  size=516 */

void FUN_006d6eb0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_EDX;
  int local_24;
  int local_10;
  int local_c;
  
  local_c = *(int *)(param_3 + 4);
  local_24 = 1;
  if (0 < local_c) {
    piVar3 = (int *)(param_3 + local_c * 4 + 4);
    local_10 = in_ECX;
    do {
      iVar1 = local_10 / *piVar3;
      iVar2 = (in_ECX / local_10) * iVar1;
      local_24 = 1 - local_24;
      if (*piVar3 == 4) {
        FUN_006d7fc0();
      }
      else if (*piVar3 == 2) {
        if (local_24 == 0) {
          FUN_006d8420();
        }
        else {
          FUN_006d8420(param_1);
        }
      }
      else {
        if (in_ECX / local_10 == 1) {
          local_24 = 1 - local_24;
        }
        if (local_24 == 0) {
          FUN_006d70c0(iVar1,iVar2);
          local_24 = 1;
        }
        else {
          FUN_006d70c0(iVar1,iVar2,param_1,param_1,param_1);
          local_24 = 0;
        }
      }
      piVar3 = piVar3 + -1;
      local_c = local_c + -1;
      local_10 = iVar1;
    } while (local_c != 0);
    if (local_24 != 1) {
      iVar1 = 0;
      if (3 < in_ECX) {
        iVar2 = (in_ECX - 4U >> 2) + 1;
        iVar1 = iVar2 * 4;
        puVar5 = (undefined4 *)(param_1 + 0xc);
        puVar4 = (undefined4 *)(in_EDX + 4);
        do {
          puVar4[-1] = puVar5[-3];
          *puVar4 = *(undefined4 *)((param_1 - in_EDX) + (int)puVar4);
          puVar4[1] = puVar5[-1];
          puVar4[2] = *puVar5;
          puVar4 = puVar4 + 4;
          puVar5 = puVar5 + 4;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (iVar1 < in_ECX) {
        puVar5 = (undefined4 *)(in_EDX + iVar1 * 4);
        iVar1 = in_ECX - iVar1;
        do {
          *puVar5 = *(undefined4 *)((int)puVar5 + (param_1 - in_EDX));
          puVar5 = puVar5 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  return;
}


/* FUN_006d70c0 @ 006d70c0  kind=gamemisc  attributed-by=none  size=3787 */

void FUN_006d70c0(int param_1,float *param_2,float *param_3,float *param_4,int param_5,
                 float *param_6,float *param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int in_ECX;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 *puVar17;
  float *pfVar18;
  int in_EDX;
  int iVar19;
  int iVar20;
  int iVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  double dVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int local_48;
  int local_44;
  int local_38;
  int local_34;
  float *local_28;
  float *local_24;
  float *local_20;
  int local_1c;
  
  dVar25 = (double)(6.2831855 / (float)in_EDX);
  libm_sse2_cos_precise();
  auVar26._0_8_ = (double)(6.2831855 / (float)in_EDX);
  auVar26._8_8_ = 0;
  libm_sse2_sin_precise();
  local_48 = in_EDX + 1 >> 1;
  iVar2 = in_ECX + -1 >> 1;
  iVar19 = in_ECX * param_1;
  iVar3 = in_ECX * in_EDX;
  if (in_ECX != 1) {
    iVar4 = 0;
    if (3 < (int)param_2) {
      pfVar6 = (float *)(param_5 + 0xc);
      iVar21 = ((int)param_2 - 4U >> 2) + 1;
      pfVar18 = param_7 + 1;
      iVar4 = iVar21 * 4;
      do {
        pfVar18[-1] = pfVar6[-3];
        *pfVar18 = *(float *)((param_5 - (int)param_7) + (int)pfVar18);
        pfVar18[1] = pfVar6[-1];
        pfVar18[2] = *pfVar6;
        pfVar18 = pfVar18 + 4;
        pfVar6 = pfVar6 + 4;
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
    }
    if (iVar4 < (int)param_2) {
      pfVar6 = param_7 + iVar4;
      iVar4 = (int)param_2 - iVar4;
      do {
        *pfVar6 = *(float *)((int)pfVar6 + (param_5 - (int)param_7));
        pfVar6 = pfVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = 0;
    if (1 < in_EDX) {
      iVar21 = in_EDX + -1;
      do {
        iVar4 = iVar4 + iVar19;
        iVar5 = 0;
        iVar14 = iVar4;
        if (3 < param_1) {
          iVar20 = (param_1 - 4U >> 2) + 1;
          iVar5 = iVar20 * 4;
          do {
            param_6[iVar14] = param_4[iVar14];
            iVar14 = iVar14 + in_ECX;
            param_6[iVar14] = param_4[iVar14];
            iVar14 = iVar14 + in_ECX;
            param_6[iVar14] = param_4[iVar14];
            iVar14 = iVar14 + in_ECX;
            param_6[iVar14] = param_4[iVar14];
            iVar14 = iVar14 + in_ECX;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
        }
        if (iVar5 < param_1) {
          pfVar6 = param_6 + iVar14;
          iVar5 = param_1 - iVar5;
          do {
            *pfVar6 = *(float *)(((int)param_4 - (int)param_6) + (int)pfVar6);
            pfVar6 = pfVar6 + in_ECX;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
    }
    local_20 = (float *)-in_ECX;
    if (param_1 < iVar2) {
      if (1 < in_EDX) {
        pfVar6 = (float *)(param_8 + in_ECX * -4 + -4);
        pfVar12 = param_6 + -in_ECX;
        pfVar18 = param_4 + (-1 - in_ECX);
        local_1c = in_EDX + -1;
        do {
          pfVar12 = pfVar12 + iVar19;
          pfVar18 = pfVar18 + iVar19;
          pfVar6 = pfVar6 + in_ECX;
          pfVar7 = pfVar12;
          pfVar11 = pfVar18;
          iVar4 = param_1;
          if (0 < param_1) {
            do {
              if (2 < in_ECX) {
                iVar21 = (in_ECX - 3U >> 1) + 1;
                pfVar24 = pfVar11 + in_ECX;
                pfVar13 = pfVar6;
                pfVar8 = pfVar7 + in_ECX;
                do {
                  pfVar9 = pfVar24 + 2;
                  pfVar8 = pfVar8 + 2;
                  *(float *)(((int)param_6 - (int)param_4) + (int)pfVar9) =
                       pfVar24[2] * pfVar13[1] + pfVar24[3] * pfVar13[2];
                  *pfVar8 = pfVar24[3] * pfVar13[1] - pfVar13[2] * *pfVar9;
                  iVar21 = iVar21 + -1;
                  pfVar24 = pfVar9;
                  pfVar13 = pfVar13 + 2;
                } while (iVar21 != 0);
              }
              iVar4 = iVar4 + -1;
              pfVar7 = pfVar7 + in_ECX;
              pfVar11 = pfVar11 + in_ECX;
            } while (iVar4 != 0);
          }
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
    else if (1 < in_EDX) {
      pfVar18 = (float *)(param_8 + in_ECX * -4 + -4);
      pfVar12 = param_4 + -1;
      local_1c = in_EDX + -1;
      pfVar6 = param_6;
      do {
        pfVar6 = pfVar6 + iVar19;
        pfVar12 = pfVar12 + iVar19;
        pfVar18 = pfVar18 + in_ECX;
        if (2 < in_ECX) {
          iVar4 = (in_ECX - 3U >> 1) + 1;
          pfVar7 = pfVar18;
          pfVar11 = pfVar6;
          pfVar24 = pfVar12;
          do {
            pfVar11 = pfVar11 + 2;
            pfVar24 = pfVar24 + 2;
            pfVar13 = pfVar7 + 2;
            if (0 < param_1) {
              pfVar8 = pfVar24;
              pfVar9 = pfVar11;
              iVar21 = param_1;
              do {
                *(float *)((int)pfVar8 + ((int)param_6 - (int)param_4)) =
                     pfVar8[1] * *pfVar13 + pfVar7[1] * *pfVar8;
                fVar30 = *pfVar8;
                pfVar15 = pfVar8 + 1;
                pfVar8 = pfVar8 + in_ECX;
                *pfVar9 = pfVar7[1] * *pfVar15 - fVar30 * *pfVar13;
                pfVar9 = pfVar9 + in_ECX;
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
            }
            iVar4 = iVar4 + -1;
            pfVar7 = pfVar13;
          } while (iVar4 != 0);
        }
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    iVar21 = iVar19 * in_EDX;
    iVar4 = 0;
    if (iVar2 < param_1) {
      if (1 < local_48) {
        pfVar6 = param_4 + -in_ECX;
        pfVar18 = param_6 + (-1 - in_ECX);
        iVar5 = local_48 + -1;
        do {
          pfVar6 = pfVar6 + iVar19;
          iVar4 = iVar4 + iVar19;
          pfVar18 = pfVar18 + iVar19;
          local_20 = (float *)((int)local_20 + iVar19);
          iVar21 = iVar21 - iVar19;
          if (2 < in_ECX) {
            iVar20 = (in_ECX - 3U >> 1) + 1;
            pfVar12 = pfVar6;
            iVar14 = (int)local_20;
            pfVar7 = pfVar18;
            do {
              iVar14 = iVar14 + 2;
              pfVar12 = pfVar12 + 2;
              pfVar7 = pfVar7 + 2;
              if (0 < param_1) {
                iVar1 = iVar14 + (iVar21 - iVar4);
                pfVar8 = param_4 + iVar1;
                pfVar13 = param_6 + iVar1 + -1;
                local_28 = (float *)param_1;
                pfVar11 = pfVar7;
                pfVar24 = pfVar12;
                do {
                  pfVar11 = pfVar11 + in_ECX;
                  pfVar13 = pfVar13 + in_ECX;
                  pfVar24 = pfVar24 + in_ECX;
                  pfVar8 = pfVar8 + in_ECX;
                  local_28 = (float *)((int)local_28 + -1);
                  *(float *)((int)pfVar11 + ((int)param_4 - (int)param_6)) = *pfVar11 + *pfVar13;
                  *(float *)((int)pfVar13 + ((int)param_4 - (int)param_6)) = pfVar11[1] - pfVar13[1]
                  ;
                  *pfVar24 = pfVar13[1] + pfVar11[1];
                  *pfVar8 = *pfVar13 - *pfVar11;
                } while (local_28 != (float *)0x0);
              }
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else if (1 < local_48) {
      pfVar6 = param_4 + iVar21;
      pfVar18 = param_6 + iVar21 + -1;
      pfVar7 = param_6 + -1;
      local_28 = (float *)(local_48 + -1);
      pfVar12 = param_4;
      do {
        pfVar12 = pfVar12 + iVar19;
        pfVar7 = pfVar7 + iVar19;
        pfVar6 = pfVar6 + -iVar19;
        pfVar18 = pfVar18 + -iVar19;
        if (0 < param_1) {
          local_34 = param_1;
          pfVar11 = pfVar12;
          pfVar24 = pfVar7;
          pfVar13 = pfVar18;
          pfVar8 = pfVar6;
          do {
            if (2 < in_ECX) {
              iVar4 = (in_ECX - 3U >> 1) + 1;
              pfVar9 = pfVar24;
              pfVar15 = pfVar13;
              pfVar22 = pfVar11;
              pfVar23 = pfVar8;
              do {
                pfVar10 = pfVar9 + 2;
                pfVar16 = pfVar15 + 2;
                pfVar22 = pfVar22 + 2;
                pfVar23 = pfVar23 + 2;
                *(float *)((int)pfVar10 + ((int)param_4 - (int)param_6)) = pfVar9[2] + pfVar15[2];
                *(float *)((int)pfVar16 + ((int)param_4 - (int)param_6)) = pfVar9[3] - pfVar15[3];
                *pfVar22 = pfVar15[3] + pfVar9[3];
                *pfVar23 = *pfVar16 - *pfVar10;
                iVar4 = iVar4 + -1;
                pfVar9 = pfVar10;
                pfVar15 = pfVar16;
              } while (iVar4 != 0);
            }
            pfVar11 = pfVar11 + in_ECX;
            pfVar24 = pfVar24 + in_ECX;
            pfVar8 = pfVar8 + in_ECX;
            pfVar13 = pfVar13 + in_ECX;
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
        local_28 = (float *)((int)local_28 + -1);
      } while (local_28 != (float *)0x0);
    }
  }
  iVar4 = 0;
  if (3 < (int)param_2) {
    puVar17 = (undefined4 *)(param_5 + 4);
    pfVar6 = param_7 + 3;
    iVar21 = ((int)param_2 - 4U >> 2) + 1;
    iVar4 = iVar21 * 4;
    do {
      puVar17[-1] = pfVar6[-3];
      *puVar17 = *(undefined4 *)(((int)param_7 - param_5) + (int)puVar17);
      puVar17[1] = pfVar6[-1];
      puVar17[2] = *pfVar6;
      puVar17 = puVar17 + 4;
      pfVar6 = pfVar6 + 4;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  if (iVar4 < (int)param_2) {
    puVar17 = (undefined4 *)(param_5 + iVar4 * 4);
    iVar4 = (int)param_2 - iVar4;
    do {
      *puVar17 = *(undefined4 *)(((int)param_7 - param_5) + (int)puVar17);
      puVar17 = puVar17 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 0;
  if (1 < local_48) {
    iVar5 = -in_ECX;
    pfVar6 = param_6 + -in_ECX;
    local_24 = (float *)(local_48 + -1);
    iVar21 = in_EDX * (int)param_2;
    do {
      pfVar6 = pfVar6 + iVar19;
      iVar4 = iVar4 + iVar19;
      iVar21 = iVar21 - iVar19;
      iVar5 = iVar5 + iVar19;
      if (0 < param_1) {
        pfVar18 = param_6 + (iVar5 - iVar4) + iVar21;
        pfVar12 = pfVar6;
        iVar14 = param_1;
        do {
          pfVar7 = pfVar18 + in_ECX;
          pfVar11 = pfVar12 + in_ECX;
          pfVar18 = pfVar18 + in_ECX;
          pfVar12 = pfVar12 + in_ECX;
          *(float *)(((int)param_4 - (int)param_6) + (int)pfVar12) = *pfVar7 + *pfVar11;
          *(float *)(((int)param_4 - (int)param_6) + (int)pfVar18) = *pfVar18 - *pfVar12;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      local_24 = (float *)((int)local_24 + -1);
    } while (local_24 != (float *)0x0);
  }
  fVar30 = 1.0;
  iVar4 = (in_EDX + -1) * (int)param_2;
  fVar28 = 0.0;
  if (1 < local_48) {
    pfVar6 = param_7 + in_EDX * (int)param_2;
    iVar21 = local_48 + -1;
    pfVar18 = param_7;
    do {
      fVar31 = fVar30 * (float)auVar26._0_8_;
      fVar30 = fVar30 * (float)dVar25 - fVar28 * (float)auVar26._0_8_;
      pfVar18 = pfVar18 + (int)param_2;
      pfVar6 = pfVar6 + -(int)param_2;
      iVar5 = 0;
      fVar28 = fVar28 * (float)dVar25 + fVar31;
      if (0 < (int)param_2) {
        pfVar24 = (float *)((int)param_2 * 4 + param_5);
        pfVar12 = (float *)(param_5 + iVar4 * 4);
        pfVar7 = pfVar6;
        pfVar11 = pfVar18;
        do {
          fVar31 = *pfVar24;
          iVar5 = iVar5 + 1;
          pfVar24 = pfVar24 + 1;
          *pfVar11 = fVar31 * fVar30 + *(float *)(param_5 + -4 + iVar5 * 4);
          *pfVar7 = *pfVar12 * fVar28;
          pfVar12 = pfVar12 + 1;
          pfVar7 = pfVar7 + 1;
          pfVar11 = pfVar11 + 1;
        } while (iVar5 < (int)param_2);
      }
      if (2 < local_48) {
        pfVar12 = (float *)((int)param_2 * 4 + param_5);
        pfVar7 = (float *)(param_5 + iVar4 * 4);
        iVar5 = local_48 + -2;
        fVar31 = fVar28;
        fVar27 = fVar30;
        do {
          fVar29 = fVar27 * fVar28;
          fVar27 = fVar27 * fVar30 - fVar31 * fVar28;
          pfVar7 = pfVar7 + -(int)param_2;
          pfVar12 = pfVar12 + (int)param_2;
          fVar31 = fVar31 * fVar30 + fVar29;
          pfVar11 = pfVar6;
          pfVar24 = pfVar18;
          pfVar13 = pfVar7;
          pfVar8 = pfVar12;
          iVar14 = (int)param_2;
          if (0 < (int)param_2) {
            do {
              *pfVar24 = *pfVar8 * fVar27 + *pfVar24;
              *pfVar11 = *pfVar13 * fVar31 + *pfVar11;
              iVar14 = iVar14 + -1;
              pfVar11 = pfVar11 + 1;
              pfVar24 = pfVar24 + 1;
              pfVar13 = pfVar13 + 1;
              pfVar8 = pfVar8 + 1;
            } while (iVar14 != 0);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  iVar4 = 0;
  if (1 < local_48) {
    pfVar6 = (float *)(param_5 + 8);
    iVar21 = local_48 + -1;
    do {
      pfVar6 = pfVar6 + (int)param_2;
      iVar4 = iVar4 + (int)param_2;
      iVar14 = 0;
      iVar5 = iVar4;
      if (3 < (int)param_2) {
        iVar20 = ((int)param_2 - 4U >> 2) + 1;
        iVar14 = iVar20 * 4;
        iVar5 = iVar14 + iVar4;
        pfVar18 = param_7 + 2;
        pfVar12 = pfVar6;
        do {
          pfVar18[-2] = pfVar12[-2] + pfVar18[-2];
          pfVar18[-1] = pfVar12[-1] + pfVar18[-1];
          *pfVar18 = *pfVar12 + *pfVar18;
          pfVar18[1] = pfVar12[1] + pfVar18[1];
          iVar20 = iVar20 + -1;
          pfVar18 = pfVar18 + 4;
          pfVar12 = pfVar12 + 4;
        } while (iVar20 != 0);
      }
      if (iVar14 < (int)param_2) {
        pfVar18 = (float *)(param_5 + iVar5 * 4);
        do {
          fVar30 = *pfVar18;
          iVar5 = iVar14 + 1;
          pfVar18 = pfVar18 + 1;
          param_7[iVar14] = fVar30 + param_7[iVar14];
          iVar14 = iVar5;
        } while (iVar5 < (int)param_2);
      }
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  local_28 = (float *)0x0;
  if (in_ECX < param_1) {
    if (0 < in_ECX) {
      do {
        param_2 = (float *)0x0;
        pfVar18 = local_28;
        pfVar6 = local_28;
        if (3 < param_1) {
          iVar4 = (param_1 - 4U >> 2) + 1;
          param_2 = (float *)(iVar4 * 4);
          do {
            param_3[(int)pfVar6] = param_6[(int)pfVar18];
            param_3[(int)pfVar6 + iVar3] = param_6[(int)pfVar18 + in_ECX];
            iVar5 = (int)pfVar6 + iVar3 + iVar3;
            iVar21 = (int)pfVar18 + in_ECX + in_ECX;
            param_3[iVar5] = param_6[iVar21];
            iVar5 = iVar5 + iVar3;
            iVar21 = iVar21 + in_ECX;
            param_3[iVar5] = param_6[iVar21];
            pfVar6 = (float *)(iVar5 + iVar3);
            pfVar18 = (float *)(iVar21 + in_ECX);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if ((int)param_2 < param_1) {
          iVar4 = param_1 - (int)param_2;
          pfVar6 = param_3 + (int)pfVar6;
          pfVar18 = param_6 + (int)pfVar18;
          do {
            *pfVar6 = *pfVar18;
            pfVar18 = pfVar18 + in_ECX;
            pfVar6 = pfVar6 + iVar3;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_28 = (float *)((int)local_28 + 1);
      } while ((int)local_28 < in_ECX);
    }
  }
  else {
    param_2 = (float *)0x0;
    if (0 < param_1) {
      local_24 = param_6 + 2;
      local_20 = param_3 + 2;
      local_44 = param_1;
      do {
        iVar4 = 0;
        pfVar6 = local_28;
        iVar21 = (int)param_2;
        if (3 < in_ECX) {
          iVar5 = (in_ECX - 4U >> 2) + 1;
          iVar4 = iVar5 * 4;
          pfVar6 = (float *)((int)local_28 + iVar4);
          iVar21 = iVar4 + (int)param_2;
          pfVar12 = local_20;
          pfVar18 = local_24;
          do {
            pfVar12[-2] = pfVar18[-2];
            pfVar12[-1] = pfVar18[-1];
            *pfVar12 = *pfVar18;
            pfVar12[1] = pfVar18[1];
            pfVar18 = pfVar18 + 4;
            pfVar12 = pfVar12 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (iVar4 < in_ECX) {
          pfVar18 = param_3 + iVar21;
          pfVar6 = param_6 + (int)pfVar6;
          iVar4 = in_ECX - iVar4;
          do {
            *pfVar18 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar18 = pfVar18 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_24 = local_24 + in_ECX;
        local_20 = local_20 + iVar3;
        local_28 = (float *)((int)local_28 + in_ECX);
        param_2 = (float *)((int)param_2 + iVar3);
        local_44 = local_44 + -1;
      } while (local_44 != 0);
    }
  }
  iVar4 = iVar19 * in_EDX;
  if (1 < local_48) {
    pfVar6 = param_6 + iVar4;
    iVar21 = local_48 + -1;
    pfVar18 = param_3;
    pfVar12 = param_6;
    do {
      pfVar18 = pfVar18 + in_ECX * 2;
      pfVar12 = pfVar12 + iVar19;
      pfVar6 = pfVar6 + -iVar19;
      pfVar7 = pfVar18;
      pfVar11 = pfVar12;
      iVar5 = param_1;
      pfVar24 = pfVar6;
      if (0 < param_1) {
        do {
          pfVar7[-1] = *pfVar11;
          *pfVar7 = *pfVar24;
          iVar5 = iVar5 + -1;
          pfVar7 = pfVar7 + iVar3;
          pfVar11 = pfVar11 + in_ECX;
          pfVar24 = pfVar24 + in_ECX;
        } while (iVar5 != 0);
      }
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  if (in_ECX != 1) {
    if (iVar2 < param_1) {
      iVar2 = 0;
      if (1 < local_48) {
        pfVar6 = param_6 + iVar4 + 2;
        iVar21 = 4;
        iVar4 = -2;
        param_6 = param_6 + 2;
        param_2 = param_3 + -2;
        local_48 = local_48 + -1;
        do {
          param_2 = param_2 + in_ECX * 2;
          iVar4 = iVar4 + in_ECX * 2;
          iVar21 = iVar21 + in_ECX * -2;
          iVar2 = iVar2 + in_ECX * 2;
          param_6 = param_6 + iVar19;
          pfVar6 = pfVar6 + -iVar19;
          if (2 < in_ECX) {
            iVar20 = (in_ECX - 3U >> 1) + 1;
            iVar5 = iVar21;
            iVar14 = iVar4;
            pfVar18 = pfVar6;
            local_28 = param_2;
            local_24 = param_6;
            do {
              if (0 < param_1) {
                pfVar12 = param_3 + iVar5 + iVar14 + iVar2;
                local_38 = param_1;
                pfVar7 = local_24;
                pfVar11 = pfVar18;
                pfVar24 = local_28;
                do {
                  pfVar12[-1] = pfVar11[-1] + pfVar7[-1];
                  pfVar24[-1] = pfVar7[-1] - pfVar11[-1];
                  *pfVar12 = *pfVar11 + *pfVar7;
                  fVar30 = *pfVar11;
                  fVar28 = *pfVar7;
                  pfVar11 = pfVar11 + in_ECX;
                  pfVar7 = pfVar7 + in_ECX;
                  pfVar12 = pfVar12 + iVar3;
                  *pfVar24 = fVar30 - fVar28;
                  pfVar24 = pfVar24 + iVar3;
                  local_38 = local_38 + -1;
                } while (local_38 != 0);
              }
              local_28 = local_28 + -2;
              iVar14 = iVar14 + -2;
              local_24 = local_24 + 2;
              pfVar18 = pfVar18 + 2;
              iVar5 = iVar5 + 4;
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          }
          local_48 = local_48 + -1;
        } while (local_48 != 0);
        return;
      }
    }
    else if (1 < local_48) {
      pfVar6 = param_3 + 2;
      pfVar18 = param_6 + iVar4 + 2;
      param_6 = param_6 + 2;
      param_3 = param_3 + -2;
      local_28 = (float *)(local_48 + -1);
      do {
        param_3 = param_3 + in_ECX * 2;
        pfVar6 = pfVar6 + in_ECX * 2;
        param_6 = param_6 + iVar19;
        pfVar18 = pfVar18 + -iVar19;
        if (0 < param_1) {
          local_34 = param_1;
          pfVar12 = param_6;
          pfVar7 = pfVar18;
          pfVar11 = pfVar6;
          pfVar24 = param_3;
          do {
            if (2 < in_ECX) {
              iVar2 = (in_ECX - 3U >> 1) + 1;
              pfVar13 = pfVar12;
              pfVar8 = pfVar7;
              pfVar9 = pfVar11;
              pfVar15 = pfVar24;
              do {
                pfVar9[-1] = pfVar8[-1] + pfVar13[-1];
                pfVar15[-1] = pfVar13[-1] - pfVar8[-1];
                *pfVar9 = *pfVar13 + *pfVar8;
                *pfVar15 = *pfVar8 - *pfVar13;
                iVar2 = iVar2 + -1;
                pfVar13 = pfVar13 + 2;
                pfVar8 = pfVar8 + 2;
                pfVar9 = pfVar9 + 2;
                pfVar15 = pfVar15 + -2;
              } while (iVar2 != 0);
            }
            pfVar11 = pfVar11 + iVar3;
            pfVar24 = pfVar24 + iVar3;
            pfVar12 = pfVar12 + in_ECX;
            pfVar7 = pfVar7 + in_ECX;
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
        local_28 = (float *)((int)local_28 + -1);
      } while (local_28 != (float *)0x0);
    }
  }
  return;
}


/* FUN_006d7fc0 @ 006d7fc0  kind=gamemisc  attributed-by=none  size=1094 */

void FUN_006d7fc0(int param_1,float *param_2,int param_3,int param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  uint in_ECX;
  int iVar5;
  float *pfVar6;
  int in_EDX;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float *local_50;
  int local_48;
  float *local_44;
  float *local_40;
  float *local_3c;
  int local_38;
  float *local_34;
  float *local_30;
  float *local_2c;
  float *local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  float *local_10;
  int local_c;
  
  iVar5 = in_ECX * in_EDX;
  iVar7 = 0;
  if (0 < in_EDX) {
    pfVar6 = (float *)(param_1 + iVar5 * 4);
    local_14 = (float *)(param_1 + iVar5 * 0xc);
    local_10 = (float *)(param_1 + iVar5 * 8);
    local_44 = (float *)in_EDX;
    do {
      fVar9 = *local_14;
      fVar11 = *pfVar6;
      fVar10 = *(float *)(param_1 + iVar7 * 4) + *local_10;
      param_2[iVar7 * 4] = fVar10 + fVar9 + fVar11;
      param_2[in_ECX * 4 + iVar7 * 4 + -1] = fVar10 - (fVar9 + fVar11);
      iVar1 = iVar7 * 4;
      iVar2 = iVar7 * 4 + in_ECX * 2;
      iVar7 = iVar7 + in_ECX;
      param_2[iVar2 + -1] = *(float *)(param_1 + iVar1) - *local_10;
      fVar9 = *local_14;
      local_10 = local_10 + in_ECX;
      local_14 = local_14 + in_ECX;
      param_2[iVar2] = fVar9 - *pfVar6;
      pfVar6 = pfVar6 + in_ECX;
      local_44 = (float *)((int)local_44 + -1);
    } while (local_44 != (float *)0x0);
  }
  if (1 < (int)in_ECX) {
    if (in_ECX != 2) {
      local_38 = 0;
      if (0 < in_EDX) {
        local_3c = param_2;
        local_44 = (float *)(param_1 + iVar5 * 0xc);
        local_40 = (float *)(param_1 + iVar5 * 4);
        local_50 = (float *)in_EDX;
        do {
          iVar7 = local_38 * 4 + in_ECX * 2;
          if (2 < (int)in_ECX) {
            local_24 = local_3c;
            local_34 = param_5;
            local_18 = local_40;
            pfVar3 = (float *)(param_3 + 4);
            local_1c = local_44;
            local_48 = (in_ECX - 3 >> 1) + 1;
            pfVar6 = param_2 + iVar7;
            local_30 = param_2 + iVar7 + in_ECX * 2;
            local_2c = param_2 + local_38 * 4 + in_ECX * 2;
            local_20 = (float *)(local_38 * 4 + param_1);
            local_14 = (float *)(param_1 + (local_38 + iVar5 * 2) * 4);
            do {
              pfVar4 = local_18 + 2;
              pfVar8 = local_14 + 2;
              fVar12 = pfVar3[-1] * *pfVar4 - *pfVar3 * local_18[1];
              fVar9 = *(float *)((param_4 - param_3) + (int)pfVar3);
              fVar11 = *(float *)((param_4 - (int)param_5) + (int)local_34);
              fVar15 = pfVar3[-1] * local_18[1] + *pfVar4 * *pfVar3;
              fVar13 = fVar11 * local_14[1] + fVar9 * *pfVar8;
              fVar17 = fVar11 * *pfVar8 - fVar9 * local_14[1];
              fVar9 = *(float *)(((int)param_5 - param_3) + (int)pfVar3);
              fVar11 = local_1c[2];
              fVar16 = local_1c[1] * *local_34 + fVar9 * fVar11;
              fVar10 = local_20[2];
              fVar14 = fVar11 * *local_34 - fVar9 * local_1c[1];
              fVar9 = fVar16 - fVar15;
              fVar11 = local_20[1] + fVar13;
              fVar13 = local_20[1] - fVar13;
              fVar16 = fVar16 + fVar15;
              fVar15 = fVar14 + fVar12;
              fVar12 = fVar12 - fVar14;
              fVar14 = fVar10 + fVar17;
              fVar10 = fVar10 - fVar17;
              local_24[1] = fVar11 + fVar16;
              local_24[2] = fVar14 + fVar15;
              pfVar6[-3] = fVar13 - fVar12;
              pfVar6[-2] = fVar9 - fVar10;
              local_34 = local_34 + 2;
              local_2c[1] = fVar13 + fVar12;
              pfVar3 = pfVar3 + 2;
              local_48 = local_48 + -1;
              local_2c[2] = fVar10 + fVar9;
              local_30[-3] = fVar11 - fVar16;
              local_30[-2] = fVar15 - fVar14;
              pfVar6 = pfVar6 + -2;
              local_30 = local_30 + -2;
              local_2c = local_2c + 2;
              local_24 = local_24 + 2;
              local_20 = local_20 + 2;
              local_1c = local_1c + 2;
              local_18 = pfVar4;
              local_14 = pfVar8;
            } while (local_48 != 0);
          }
          local_3c = local_3c + in_ECX * 4;
          local_40 = local_40 + in_ECX;
          local_44 = local_44 + in_ECX;
          local_38 = local_38 + in_ECX;
          local_50 = (float *)((int)local_50 + -1);
        } while (local_50 != (float *)0x0);
      }
      if ((in_ECX & 1) != 0) {
        return;
      }
    }
    iVar7 = (in_ECX - 1) + iVar5;
    if (0 < in_EDX) {
      pfVar6 = (float *)(param_1 + (iVar7 + iVar5 * 2) * 4);
      pfVar3 = param_2 + in_ECX;
      local_50 = (float *)(param_1 + iVar7 * 4);
      param_2 = param_2 + in_ECX * 3;
      pfVar4 = (float *)(param_1 + (iVar7 + iVar5) * 4);
      pfVar8 = (float *)(param_1 + (iVar7 - iVar5) * 4);
      local_c = in_EDX;
      do {
        fVar9 = *local_50;
        local_50 = local_50 + in_ECX;
        fVar11 = (fVar9 - *pfVar6) * 0.70710677;
        fVar10 = (fVar9 + *pfVar6) * -0.70710677;
        pfVar6 = pfVar6 + in_ECX;
        pfVar3[-1] = *pfVar8 + fVar11;
        fVar9 = *pfVar8;
        pfVar8 = pfVar8 + in_ECX;
        param_2[-1] = fVar9 - fVar11;
        *pfVar3 = fVar10 - *pfVar4;
        fVar9 = *pfVar4;
        pfVar3 = pfVar3 + in_ECX * 4;
        pfVar4 = pfVar4 + in_ECX;
        *param_2 = fVar9 + fVar10;
        param_2 = param_2 + in_ECX * 4;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  return;
}


/* FUN_006d8420 @ 006d8420  kind=gamemisc  attributed-by=none  size=538 */

void FUN_006d8420(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  uint uVar2;
  uint in_ECX;
  float *pfVar3;
  int in_EDX;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  int local_30;
  int local_20;
  float *local_1c;
  int local_c;
  
  iVar4 = in_ECX * in_EDX;
  if (0 < in_EDX) {
    pfVar8 = param_1 + iVar4;
    pfVar10 = param_2 + in_ECX * 2 + -1;
    pfVar1 = param_1;
    pfVar5 = param_2;
    local_c = in_EDX;
    do {
      *pfVar5 = *pfVar1 + *pfVar8;
      fVar12 = *pfVar1;
      fVar13 = *pfVar8;
      pfVar5 = pfVar5 + in_ECX * 2;
      pfVar1 = pfVar1 + in_ECX;
      pfVar8 = pfVar8 + in_ECX;
      *pfVar10 = fVar12 - fVar13;
      pfVar10 = pfVar10 + in_ECX * 2;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  if (1 < (int)in_ECX) {
    if (in_ECX != 2) {
      if (0 < in_EDX) {
        pfVar8 = param_1 + iVar4;
        pfVar10 = param_2 + in_ECX * 2;
        pfVar1 = param_2;
        pfVar5 = param_1;
        local_30 = in_EDX;
        do {
          if (2 < (int)in_ECX) {
            local_1c = (float *)(param_3 + 4);
            local_20 = (in_ECX - 3 >> 1) + 1;
            pfVar3 = pfVar8;
            pfVar6 = pfVar5;
            pfVar9 = pfVar10;
            pfVar11 = pfVar1;
            do {
              pfVar7 = pfVar6 + 2;
              fVar12 = pfVar3[2] * *local_1c + local_1c[-1] * pfVar3[1];
              fVar13 = local_1c[-1] * pfVar3[2] - *local_1c * pfVar3[1];
              local_1c = local_1c + 2;
              local_20 = local_20 + -1;
              pfVar11[2] = *pfVar7 + fVar13;
              pfVar9[-2] = fVar13 - *pfVar7;
              pfVar11[1] = fVar12 + pfVar6[1];
              pfVar9[-3] = pfVar6[1] - fVar12;
              pfVar3 = pfVar3 + 2;
              pfVar6 = pfVar7;
              pfVar9 = pfVar9 + -2;
              pfVar11 = pfVar11 + 2;
            } while (local_20 != 0);
          }
          pfVar10 = pfVar10 + in_ECX * 2;
          pfVar5 = pfVar5 + in_ECX;
          pfVar8 = pfVar8 + in_ECX;
          pfVar1 = pfVar1 + in_ECX * 2;
          local_30 = local_30 + -1;
        } while (local_30 != 0);
      }
      uVar2 = in_ECX & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      if (uVar2 == 1) {
        return;
      }
    }
    if (0 < in_EDX) {
      param_2 = param_2 + in_ECX;
      pfVar8 = param_1 + (in_ECX - 1);
      param_1 = param_1 + (in_ECX - 1) + iVar4;
      do {
        fVar12 = *param_1;
        param_1 = param_1 + in_ECX;
        *param_2 = -fVar12;
        fVar12 = *pfVar8;
        pfVar8 = pfVar8 + in_ECX;
        param_2[-1] = fVar12;
        param_2 = param_2 + in_ECX * 2;
        in_EDX = in_EDX + -1;
      } while (in_EDX != 0);
    }
  }
  return;
}


/* FUN_006d8650 @ 006d8650  kind=gamemisc  attributed-by=none  size=26 */

void FUN_006d8650(undefined4 param_1)

{
  int in_ECX;
  
  if (in_ECX != 1) {
    FUN_006d8670(param_1);
  }
  return;
}


/* FUN_006d8670 @ 006d8670  kind=gamemisc  attributed-by=none  size=500 */

void FUN_006d8670(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  int in_EDX;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  int local_14;
  int local_8;
  
  piVar3 = param_1;
  iVar9 = 0;
  iVar1 = -1;
  iVar7 = 0;
  local_8 = in_ECX;
  do {
    do {
      iVar1 = iVar1 + 1;
      if (iVar1 < 4) {
        iVar9 = *(int *)(&DAT_0076ae94 + iVar1 * 4);
      }
      else {
        iVar9 = iVar9 + 2;
      }
    } while (local_8 != (local_8 / iVar9) * iVar9);
    piVar2 = param_1 + iVar7;
    iVar5 = local_8 / iVar9;
    local_14 = iVar7;
    do {
      local_8 = iVar5;
      iVar7 = local_14 + 1;
      piVar2[2] = iVar9;
      if ((iVar9 == 2) && (iVar7 != 1)) {
        piVar4 = piVar2 + 1;
        iVar5 = local_14;
        if (1 < iVar7) {
          do {
            piVar4[1] = *piVar4;
            iVar5 = iVar5 + -1;
            piVar4 = piVar4 + -1;
          } while (iVar5 != 0);
        }
        param_1[2] = 2;
      }
      if (local_8 == 1) {
        param_1[1] = iVar7;
        *param_1 = in_ECX;
        param_1 = (int *)0x0;
        local_8 = 1;
        if ((local_14 != 0) && (0 < local_14)) {
          piVar3 = piVar3 + 2;
          do {
            iVar7 = *piVar3 * local_8;
            iVar9 = in_ECX / iVar7;
            iVar1 = *piVar3 + -1;
            iVar5 = 0;
            if (0 < iVar1) {
              pfVar6 = (float *)(in_EDX + (int)param_1 * 4);
              param_1 = (int *)((int)param_1 + iVar1 * iVar9);
              do {
                iVar5 = iVar5 + local_8;
                fVar11 = 0.0;
                if (2 < iVar9) {
                  iVar8 = (iVar9 - 3U >> 1) + 1;
                  pfVar10 = pfVar6;
                  do {
                    fVar11 = fVar11 + 1.0;
                    fVar12 = fVar11 * (float)iVar5 * (6.2831855 / (float)in_ECX);
                    dVar13 = (double)fVar12;
                    libm_sse2_cos_precise();
                    *pfVar10 = (float)dVar13;
                    dVar13 = (double)fVar12;
                    libm_sse2_sin_precise();
                    pfVar10[1] = (float)dVar13;
                    iVar8 = iVar8 + -1;
                    pfVar10 = pfVar10 + 2;
                  } while (iVar8 != 0);
                }
                pfVar6 = pfVar6 + iVar9;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
            piVar3 = piVar3 + 1;
            local_14 = local_14 + -1;
            local_8 = iVar7;
          } while (local_14 != 0);
        }
        return;
      }
      piVar2 = piVar2 + 1;
      iVar5 = local_8 / iVar9;
      local_14 = iVar7;
    } while (local_8 == (local_8 / iVar9) * iVar9);
  } while( true );
}


/* FUN_006d8870 @ 006d8870  kind=gamemisc  attributed-by=none  size=76 */

void FUN_006d8870(void)

{
  void *pvVar1;
  int *in_ECX;
  int in_EDX;
  
  *in_ECX = in_EDX;
  pvVar1 = calloc(in_EDX * 3,4);
  in_ECX[1] = (int)pvVar1;
  pvVar1 = calloc(0x20,4);
  in_ECX[2] = (int)pvVar1;
  if (in_EDX != 1) {
    FUN_006d8670(pvVar1);
  }
  return;
}


/* FUN_006d88c0 @ 006d88c0  kind=gamemisc  attributed-by=none  size=57 */

void FUN_006d88c0(void)

{
  undefined8 *in_ECX;
  
  if (in_ECX != (undefined8 *)0x0) {
    if (*(void **)((int)in_ECX + 4) != (void *)0x0) {
      free(*(void **)((int)in_ECX + 4));
    }
    if (*(void **)(in_ECX + 1) != (void *)0x0) {
      free(*(void **)(in_ECX + 1));
    }
    *in_ECX = 0;
    *(undefined4 *)(in_ECX + 1) = 0;
  }
  return;
}


/* FUN_006d8990 @ 006d8990  kind=gamemisc  attributed-by=none  size=871 */

void FUN_006d8990(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int *in_ECX;
  float *pfVar5;
  float *pfVar6;
  float *in_EDX;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  
  iVar3 = *in_ECX >> 1;
  iVar8 = *in_ECX >> 2;
  pfVar10 = (float *)(param_1 + (iVar3 + iVar8) * 4);
  iVar8 = iVar8 * 4;
  pfVar4 = (float *)(in_ECX[2] + iVar8);
  pfVar5 = pfVar10;
  pfVar7 = in_EDX + iVar3 + -7;
  do {
    pfVar9 = pfVar7 + -8;
    pfVar5[-4] = -(pfVar7[2] * pfVar4[3]) - *pfVar7 * pfVar4[2];
    pfVar5[-3] = *pfVar7 * pfVar4[3] - pfVar7[2] * pfVar4[2];
    pfVar5[-2] = -(pfVar4[1] * pfVar7[6]) - pfVar7[4] * *pfVar4;
    pfVar5[-1] = pfVar4[1] * pfVar7[4] - *pfVar4 * pfVar7[6];
    pfVar4 = pfVar4 + 4;
    pfVar5 = pfVar5 + -4;
    pfVar7 = pfVar9;
  } while (in_EDX <= pfVar9);
  pfVar4 = in_EDX + iVar3 + -8;
  pfVar5 = (float *)(in_ECX[2] + iVar8);
  pfVar7 = pfVar10;
  do {
    pfVar6 = pfVar5 + -4;
    pfVar9 = pfVar4 + -8;
    *pfVar7 = pfVar4[4] * pfVar5[-1] + pfVar5[-2] * pfVar4[6];
    pfVar7[1] = pfVar4[4] * pfVar5[-2] - pfVar5[-1] * pfVar4[6];
    pfVar7[2] = pfVar4[2] * *pfVar6 + *pfVar4 * pfVar5[-3];
    pfVar7[3] = *pfVar4 * *pfVar6 - pfVar5[-3] * pfVar4[2];
    pfVar4 = pfVar9;
    pfVar5 = pfVar6;
    pfVar7 = pfVar7 + 4;
  } while (in_EDX <= pfVar9);
  FUN_006d8ec0(iVar3);
  FUN_006d8d10();
  pfVar4 = pfVar10;
  pfVar5 = (float *)(in_ECX[2] + iVar3 * 4);
  pfVar7 = (float *)(param_1 + 0xc);
  pfVar9 = pfVar10 + 2;
  do {
    pfVar6 = pfVar7 + 5;
    pfVar9[-3] = pfVar5[1] * pfVar7[-3] - *pfVar5 * pfVar7[-2];
    *pfVar4 = -(pfVar7[-3] * *pfVar5 + pfVar5[1] * pfVar7[-2]);
    pfVar9[-4] = pfVar7[-1] * pfVar5[3] - *pfVar7 * pfVar5[2];
    pfVar4[1] = -(*pfVar7 * pfVar5[3] + pfVar7[-1] * pfVar5[2]);
    pfVar9[-5] = pfVar5[5] * pfVar7[1] - pfVar7[2] * pfVar5[4];
    pfVar4[2] = -(pfVar5[5] * pfVar7[2] + pfVar7[1] * pfVar5[4]);
    pfVar9[-6] = pfVar5[7] * pfVar7[3] - pfVar5[6] * pfVar7[4];
    pfVar4[3] = -(pfVar5[7] * pfVar7[4] + pfVar5[6] * pfVar7[3]);
    pfVar1 = pfVar9 + -6;
    pfVar4 = pfVar4 + 4;
    pfVar5 = pfVar5 + 8;
    pfVar7 = pfVar7 + 8;
    pfVar9 = pfVar9 + -4;
  } while (pfVar6 < pfVar1);
  pfVar4 = pfVar10;
  pfVar5 = (float *)(iVar8 + param_1 + 8);
  pfVar7 = pfVar10 + (2 - iVar3);
  do {
    fVar2 = pfVar4[-1];
    pfVar7[-3] = fVar2;
    pfVar6 = pfVar4 + -4;
    pfVar5[-2] = -fVar2;
    fVar2 = pfVar4[-2];
    pfVar7[-4] = fVar2;
    pfVar5[-1] = -fVar2;
    fVar2 = pfVar4[-3];
    pfVar7[-5] = fVar2;
    *pfVar5 = -fVar2;
    fVar2 = *pfVar6;
    pfVar7[-6] = fVar2;
    pfVar5[1] = -fVar2;
    pfVar9 = pfVar5 + 2;
    pfVar4 = pfVar6;
    pfVar5 = pfVar5 + 4;
    pfVar7 = pfVar7 + -4;
  } while (pfVar9 < pfVar6);
  pfVar4 = pfVar10 + 2;
  do {
    pfVar5 = pfVar10 + -4;
    *pfVar5 = pfVar4[1];
    pfVar10[-3] = *pfVar4;
    pfVar10[-2] = pfVar4[-1];
    pfVar10[-1] = pfVar4[-2];
    pfVar4 = pfVar4 + 4;
    pfVar10 = pfVar5;
  } while ((float *)(param_1 + iVar3 * 4) < pfVar5);
  return;
}


/* FUN_006d8d10 @ 006d8d10  kind=gamemisc  attributed-by=none  size=424 */

void FUN_006d8d10(void)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int *in_ECX;
  int in_EDX;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *local_c;
  float *local_8;
  
  iVar2 = in_EDX + (*in_ECX >> 1) * 4;
  local_8 = (float *)(in_ECX[2] + *in_ECX * 4);
  iVar5 = in_EDX - in_ECX[3];
  pfVar6 = (float *)(iVar2 + 0xc);
  piVar7 = (int *)in_ECX[3];
  local_c = (float *)(in_EDX + 8);
  do {
    iVar4 = *piVar7;
    fVar9 = *(float *)(iVar2 + iVar4 * 4);
    fVar11 = *(float *)(iVar2 + 4 + piVar7[1] * 4);
    fVar3 = *(float *)(iVar2 + piVar7[1] * 4);
    fVar12 = *(float *)(iVar2 + 4 + iVar4 * 4) - fVar11;
    fVar10 = fVar9 + fVar3;
    fVar13 = *local_8 * fVar10 + local_8[1] * fVar12;
    fVar11 = (fVar11 + *(float *)(iVar2 + 4 + iVar4 * 4)) * 0.5;
    fVar10 = local_8[1] * fVar10 - *local_8 * fVar12;
    fVar9 = (fVar9 - fVar3) * 0.5;
    *(float *)(iVar5 + (int)piVar7) = fVar13 + fVar11;
    pfVar6[-5] = fVar11 - fVar13;
    piVar8 = piVar7 + 4;
    local_c[-1] = fVar10 + fVar9;
    pfVar6[-4] = fVar10 - fVar9;
    iVar4 = piVar7[2];
    fVar9 = *(float *)(iVar2 + iVar4 * 4);
    fVar11 = *(float *)(iVar2 + 4 + piVar7[3] * 4);
    fVar3 = *(float *)(iVar2 + piVar7[3] * 4);
    fVar12 = *(float *)(iVar2 + 4 + iVar4 * 4) - fVar11;
    fVar10 = fVar9 + fVar3;
    fVar13 = local_8[3] * fVar10 - local_8[2] * fVar12;
    fVar11 = (fVar11 + *(float *)(iVar2 + 4 + iVar4 * 4)) * 0.5;
    fVar10 = local_8[3] * fVar12 + local_8[2] * fVar10;
    local_8 = local_8 + 4;
    fVar9 = (fVar9 - fVar3) * 0.5;
    *local_c = fVar10 + fVar11;
    pfVar6[-7] = fVar11 - fVar10;
    local_c[1] = fVar13 + fVar9;
    pfVar6[-6] = fVar13 - fVar9;
    pfVar1 = pfVar6 + -7;
    pfVar6 = pfVar6 + -4;
    piVar7 = piVar8;
    local_c = local_c + 4;
  } while ((float *)(iVar5 + (int)piVar8) < pfVar1);
  return;
}


/* FUN_006d8ec0 @ 006d8ec0  kind=gamemisc  attributed-by=none  size=613 */

void FUN_006d8ec0(int param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  byte bVar4;
  int in_ECX;
  float *in_EDX;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint local_10;
  uint local_8;
  
  pfVar1 = *(float **)(in_ECX + 8);
  iVar6 = *(int *)(in_ECX + 4);
  if (0 < iVar6 + -6) {
    FUN_006d9300(param_1);
  }
  bVar4 = 1;
  local_10 = 2;
  for (iVar6 = iVar6 + -7; 0 < iVar6; iVar6 = iVar6 + -1) {
    if (0 < (int)local_10) {
      iVar2 = 4 << (bVar4 & 0x1f);
      iVar7 = param_1 >> (bVar4 & 0x1f);
      pfVar11 = in_EDX;
      local_8 = local_10;
      do {
        pfVar3 = pfVar11 + (iVar7 >> 1) + -8 + (iVar7 - (iVar7 >> 1)) + 7;
        pfVar5 = pfVar11 + (iVar7 >> 1) + -8;
        pfVar8 = pfVar1;
        do {
          fVar12 = *pfVar3 - pfVar5[7];
          fVar13 = pfVar3[-1] - pfVar5[6];
          pfVar3[-1] = pfVar3[-1] + pfVar5[6];
          *pfVar3 = *pfVar3 + pfVar5[7];
          pfVar5[6] = *pfVar8 * fVar13 + fVar12 * pfVar8[1];
          pfVar9 = pfVar8 + iVar2;
          pfVar5[7] = *pfVar8 * fVar12 - fVar13 * pfVar8[1];
          fVar12 = pfVar3[-2];
          fVar13 = pfVar5[5];
          fVar14 = pfVar3[-3] - pfVar5[4];
          pfVar3[-3] = pfVar5[4] + pfVar3[-3];
          pfVar3[-2] = pfVar5[5] + pfVar3[-2];
          pfVar5[4] = *pfVar9 * fVar14 + (fVar12 - fVar13) * pfVar9[1];
          pfVar8 = pfVar9 + iVar2;
          pfVar5[5] = *pfVar9 * (fVar12 - fVar13) - fVar14 * pfVar9[1];
          fVar12 = pfVar3[-4];
          fVar13 = pfVar5[3];
          fVar14 = pfVar3[-5] - pfVar5[2];
          pfVar3[-5] = pfVar5[2] + pfVar3[-5];
          pfVar3[-4] = pfVar5[3] + pfVar3[-4];
          pfVar5[2] = *pfVar8 * fVar14 + (fVar12 - fVar13) * pfVar8[1];
          pfVar10 = pfVar8 + iVar2;
          pfVar5[3] = *pfVar8 * (fVar12 - fVar13) - fVar14 * pfVar8[1];
          fVar12 = pfVar3[-6];
          fVar13 = pfVar5[1];
          fVar14 = pfVar3[-7] - *pfVar5;
          pfVar3[-7] = *pfVar5 + pfVar3[-7];
          pfVar3[-6] = pfVar5[1] + pfVar3[-6];
          *pfVar5 = *pfVar10 * fVar14 + (fVar12 - fVar13) * pfVar10[1];
          pfVar9 = pfVar5 + -8;
          pfVar8 = pfVar10 + iVar2;
          pfVar3 = pfVar3 + -8;
          pfVar5[1] = *pfVar10 * (fVar12 - fVar13) - fVar14 * pfVar10[1];
          pfVar5 = pfVar9;
        } while (pfVar11 <= pfVar9);
        pfVar11 = pfVar11 + iVar7;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    local_10 = local_10 << 1 | (uint)((int)local_10 < 0);
    bVar4 = bVar4 + 1;
  }
  if (0 < param_1) {
    do {
      iVar6 = FUN_006d94c0();
    } while (iVar6 != 1);
  }
  return;
}


/* FUN_006d9130 @ 006d9130  kind=gamemisc  attributed-by=none  size=461 */

void FUN_006d9130(int param_1,int param_2)

{
  float *pfVar1;
  float *in_ECX;
  float *pfVar2;
  float *in_EDX;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar1 = in_EDX + (param_1 >> 1) + -8 + (param_1 - (param_1 >> 1)) + 7;
  pfVar2 = in_EDX + (param_1 >> 1) + -8;
  do {
    fVar6 = *pfVar1;
    fVar8 = pfVar2[7];
    fVar7 = pfVar1[-1] - pfVar2[6];
    pfVar1[-1] = pfVar1[-1] + pfVar2[6];
    *pfVar1 = pfVar2[7] + *pfVar1;
    pfVar2[6] = in_ECX[1] * (fVar6 - fVar8) + *in_ECX * fVar7;
    pfVar3 = in_ECX + param_2;
    pfVar2[7] = *in_ECX * (fVar6 - fVar8) - in_ECX[1] * fVar7;
    fVar6 = pfVar1[-2] - pfVar2[5];
    fVar8 = pfVar1[-3] - pfVar2[4];
    pfVar1[-3] = pfVar1[-3] + pfVar2[4];
    pfVar1[-2] = pfVar1[-2] + pfVar2[5];
    pfVar2[4] = pfVar3[1] * fVar6 + *pfVar3 * fVar8;
    pfVar4 = pfVar3 + param_2;
    pfVar2[5] = *pfVar3 * fVar6 - pfVar3[1] * fVar8;
    fVar6 = pfVar1[-4] - pfVar2[3];
    fVar8 = pfVar1[-5] - pfVar2[2];
    pfVar1[-5] = pfVar1[-5] + pfVar2[2];
    pfVar1[-4] = pfVar1[-4] + pfVar2[3];
    pfVar2[2] = pfVar4[1] * fVar6 + *pfVar4 * fVar8;
    pfVar5 = pfVar4 + param_2;
    pfVar2[3] = *pfVar4 * fVar6 - pfVar4[1] * fVar8;
    fVar8 = pfVar1[-7] - *pfVar2;
    fVar6 = pfVar1[-6] - pfVar2[1];
    pfVar1[-7] = pfVar1[-7] + *pfVar2;
    pfVar1[-6] = pfVar1[-6] + pfVar2[1];
    pfVar3 = pfVar2 + -8;
    pfVar1 = pfVar1 + -8;
    *pfVar2 = pfVar5[1] * fVar6 + *pfVar5 * fVar8;
    in_ECX = pfVar5 + param_2;
    pfVar2[1] = *pfVar5 * fVar6 - pfVar5[1] * fVar8;
    pfVar2 = pfVar3;
  } while (in_EDX <= pfVar3);
  return;
}


/* FUN_006d9300 @ 006d9300  kind=gamemisc  attributed-by=none  size=441 */

void FUN_006d9300(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int in_ECX;
  float *pfVar4;
  float *in_EDX;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  pfVar4 = (float *)(in_ECX + 0x10);
  pfVar3 = in_EDX + (param_1 >> 1) + -8 + (param_1 - (param_1 >> 1)) + 7;
  pfVar5 = in_EDX + (param_1 >> 1) + -8;
  do {
    fVar7 = *pfVar3 - pfVar5[7];
    fVar8 = pfVar3[-1] - pfVar5[6];
    pfVar3[-1] = pfVar3[-1] + pfVar5[6];
    *pfVar3 = *pfVar3 + pfVar5[7];
    pfVar5[6] = pfVar4[-4] * fVar8 + pfVar4[-3] * fVar7;
    pfVar5[7] = pfVar4[-4] * fVar7 - pfVar4[-3] * fVar8;
    fVar7 = pfVar3[-2] - pfVar5[5];
    fVar8 = pfVar3[-3] - pfVar5[4];
    pfVar3[-3] = pfVar3[-3] + pfVar5[4];
    pfVar3[-2] = pfVar3[-2] + pfVar5[5];
    pfVar5[4] = pfVar4[1] * fVar7 + fVar8 * *pfVar4;
    pfVar5[5] = fVar7 * *pfVar4 - pfVar4[1] * fVar8;
    fVar7 = pfVar3[-4] - pfVar5[3];
    fVar8 = pfVar3[-5] - pfVar5[2];
    pfVar3[-5] = pfVar3[-5] + pfVar5[2];
    pfVar3[-4] = pfVar3[-4] + pfVar5[3];
    pfVar5[2] = pfVar4[5] * fVar7 + pfVar4[4] * fVar8;
    pfVar5[3] = pfVar4[4] * fVar7 - pfVar4[5] * fVar8;
    fVar8 = pfVar3[-7] - *pfVar5;
    fVar7 = pfVar3[-6] - pfVar5[1];
    pfVar3[-7] = pfVar3[-7] + *pfVar5;
    pfVar3[-6] = pfVar3[-6] + pfVar5[1];
    *pfVar5 = pfVar4[9] * fVar7 + pfVar4[8] * fVar8;
    pfVar1 = pfVar4 + 8;
    pfVar2 = pfVar4 + 9;
    pfVar6 = pfVar5 + -8;
    pfVar3 = pfVar3 + -8;
    pfVar4 = pfVar4 + 0x10;
    pfVar5[1] = *pfVar1 * fVar7 - *pfVar2 * fVar8;
    pfVar5 = pfVar6;
  } while (in_EDX <= pfVar6);
  return;
}


/* FUN_006d94c0 @ 006d94c0  kind=gamemisc  attributed-by=none  size=1887 */

void FUN_006d94c0(void)

{
  float *in_ECX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = in_ECX[0x1f];
  fVar2 = in_ECX[0xe];
  in_ECX[0x1f] = in_ECX[0xf] + in_ECX[0x1f];
  fVar1 = in_ECX[0x1d] - in_ECX[0xd];
  in_ECX[0xe] = in_ECX[0x1e] - fVar2;
  in_ECX[0xf] = fVar3 - in_ECX[0xf];
  fVar3 = in_ECX[0x1c] - in_ECX[0xc];
  in_ECX[0x1d] = in_ECX[0xd] + in_ECX[0x1d];
  in_ECX[0x1c] = in_ECX[0xc] + in_ECX[0x1c];
  in_ECX[0xc] = fVar3 * 0.9238795 - fVar1 * 0.38268343;
  fVar4 = in_ECX[0x1a] - in_ECX[10];
  in_ECX[0xd] = fVar1 * 0.9238795 + fVar3 * 0.38268343;
  fVar1 = in_ECX[0x1b] - in_ECX[0xb];
  in_ECX[0x1a] = in_ECX[10] + in_ECX[0x1a];
  in_ECX[0x1e] = fVar2 + in_ECX[0x1e];
  in_ECX[0x1b] = in_ECX[0xb] + in_ECX[0x1b];
  fVar3 = in_ECX[6];
  fVar5 = in_ECX[0x18] - in_ECX[8];
  in_ECX[10] = (fVar4 - fVar1) * 0.70710677;
  in_ECX[0xb] = (fVar1 + fVar4) * 0.70710677;
  fVar2 = in_ECX[0x19] - in_ECX[9];
  in_ECX[0x19] = in_ECX[9] + in_ECX[0x19];
  in_ECX[0x18] = in_ECX[8] + in_ECX[0x18];
  in_ECX[8] = fVar5 * 0.38268343 - fVar2 * 0.9238795;
  in_ECX[9] = fVar2 * 0.38268343 + fVar5 * 0.9238795;
  in_ECX[6] = in_ECX[7] - in_ECX[0x17];
  in_ECX[0x17] = in_ECX[0x17] + in_ECX[7];
  fVar2 = in_ECX[5] - in_ECX[0x15];
  in_ECX[7] = in_ECX[0x16] - fVar3;
  fVar1 = in_ECX[4] - in_ECX[0x14];
  in_ECX[0x15] = in_ECX[0x15] + in_ECX[5];
  in_ECX[0x16] = fVar3 + in_ECX[0x16];
  in_ECX[0x14] = in_ECX[0x14] + in_ECX[4];
  in_ECX[4] = fVar2 * 0.9238795 + fVar1 * 0.38268343;
  fVar3 = in_ECX[3] - in_ECX[0x13];
  fVar4 = in_ECX[2] - in_ECX[0x12];
  in_ECX[5] = fVar2 * 0.38268343 - fVar1 * 0.9238795;
  in_ECX[0x13] = in_ECX[0x13] + in_ECX[3];
  in_ECX[0x12] = in_ECX[0x12] + in_ECX[2];
  in_ECX[3] = (fVar3 - fVar4) * 0.70710677;
  in_ECX[2] = (fVar3 + fVar4) * 0.70710677;
  fVar2 = in_ECX[1] - in_ECX[0x11];
  fVar3 = *in_ECX - in_ECX[0x10];
  in_ECX[0x11] = in_ECX[0x11] + in_ECX[1];
  in_ECX[0x10] = in_ECX[0x10] + *in_ECX;
  fVar1 = fVar2 * 0.38268343 + fVar3 * 0.9238795;
  fVar5 = fVar2 * 0.9238795 - fVar3 * 0.38268343;
  fVar2 = fVar1 - in_ECX[8];
  fVar1 = fVar1 + in_ECX[8];
  fVar4 = fVar5 - in_ECX[9];
  in_ECX[8] = fVar1;
  fVar3 = in_ECX[3];
  in_ECX[9] = fVar5 + in_ECX[9];
  *in_ECX = (fVar2 + fVar4) * 0.70710677;
  in_ECX[1] = (fVar4 - fVar2) * 0.70710677;
  fVar2 = in_ECX[10];
  in_ECX[10] = in_ECX[2] + fVar2;
  in_ECX[3] = fVar2 - in_ECX[2];
  in_ECX[2] = fVar3 - in_ECX[0xb];
  in_ECX[0xb] = fVar3 + in_ECX[0xb];
  fVar2 = in_ECX[0xc] - in_ECX[4];
  fVar3 = in_ECX[0xd] - in_ECX[5];
  fVar4 = in_ECX[0xe] - in_ECX[6];
  in_ECX[0xd] = in_ECX[5] + in_ECX[0xd];
  in_ECX[0xc] = in_ECX[4] + in_ECX[0xc];
  in_ECX[0xe] = in_ECX[0xe] + in_ECX[6];
  fVar5 = (fVar3 + fVar2) * 0.70710677;
  in_ECX[4] = (fVar2 - fVar3) * 0.70710677;
  fVar8 = in_ECX[0xf] - in_ECX[7];
  in_ECX[0xf] = in_ECX[0xf] + in_ECX[7];
  fVar2 = in_ECX[2] + fVar4;
  fVar4 = fVar4 - in_ECX[2];
  fVar3 = *in_ECX + in_ECX[4];
  fVar6 = in_ECX[4] - *in_ECX;
  in_ECX[6] = fVar3 + fVar2;
  in_ECX[4] = fVar2 - fVar3;
  fVar3 = fVar5 - in_ECX[1];
  fVar2 = fVar8 - in_ECX[3];
  fVar8 = in_ECX[3] + fVar8;
  fVar5 = in_ECX[1] + fVar5;
  *in_ECX = fVar4 + fVar3;
  in_ECX[2] = fVar4 - fVar3;
  in_ECX[3] = fVar6 + fVar2;
  in_ECX[1] = fVar2 - fVar6;
  in_ECX[7] = fVar8 + fVar5;
  in_ECX[5] = fVar8 - fVar5;
  fVar4 = in_ECX[10] + in_ECX[0xe];
  fVar8 = in_ECX[0xe] - in_ECX[10];
  fVar3 = in_ECX[0xc] - fVar1;
  fVar1 = in_ECX[0xc] + fVar1;
  fVar2 = in_ECX[0xd] - in_ECX[9];
  fVar5 = in_ECX[9] + in_ECX[0xd];
  in_ECX[0xe] = fVar1 + fVar4;
  in_ECX[0xc] = fVar4 - fVar1;
  fVar1 = in_ECX[0xf] - in_ECX[0xb];
  fVar4 = in_ECX[0xb] + in_ECX[0xf];
  in_ECX[8] = fVar8 + fVar2;
  in_ECX[10] = fVar8 - fVar2;
  in_ECX[0xb] = fVar3 + fVar1;
  in_ECX[9] = fVar1 - fVar3;
  in_ECX[0xf] = fVar4 + fVar5;
  in_ECX[0xd] = fVar4 - fVar5;
  fVar1 = in_ECX[0x10] - in_ECX[0x18];
  fVar3 = in_ECX[0x1a];
  fVar4 = in_ECX[0x11] - in_ECX[0x19];
  in_ECX[0x18] = in_ECX[0x18] + in_ECX[0x10];
  in_ECX[0x19] = in_ECX[0x19] + in_ECX[0x11];
  in_ECX[0x10] = (fVar1 + fVar4) * 0.70710677;
  fVar2 = in_ECX[0x12];
  in_ECX[0x11] = (fVar4 - fVar1) * 0.70710677;
  in_ECX[0x12] = in_ECX[0x13] - in_ECX[0x1b];
  in_ECX[0x1b] = in_ECX[0x1b] + in_ECX[0x13];
  in_ECX[0x1a] = fVar2 + fVar3;
  in_ECX[0x13] = fVar3 - fVar2;
  fVar2 = in_ECX[0x1c] - in_ECX[0x14];
  fVar3 = in_ECX[0x1d] - in_ECX[0x15];
  in_ECX[0x1d] = in_ECX[0x15] + in_ECX[0x1d];
  in_ECX[0x1c] = in_ECX[0x14] + in_ECX[0x1c];
  in_ECX[0x14] = (fVar2 - fVar3) * 0.70710677;
  fVar8 = in_ECX[0x1f] - in_ECX[0x17];
  in_ECX[0x15] = (fVar3 + fVar2) * 0.70710677;
  fVar5 = in_ECX[0x1e] - in_ECX[0x16];
  in_ECX[0x1f] = in_ECX[0x17] + in_ECX[0x1f];
  fVar3 = in_ECX[0x14] + in_ECX[0x10];
  fVar7 = in_ECX[0x14] - in_ECX[0x10];
  in_ECX[0x1e] = in_ECX[0x16] + in_ECX[0x1e];
  fVar1 = in_ECX[0x12] + fVar5;
  fVar5 = fVar5 - in_ECX[0x12];
  fVar2 = in_ECX[0x15] - in_ECX[0x11];
  fVar6 = in_ECX[0x15] + in_ECX[0x11];
  in_ECX[0x16] = fVar3 + fVar1;
  fVar4 = fVar8 - in_ECX[0x13];
  fVar8 = in_ECX[0x13] + fVar8;
  in_ECX[0x14] = fVar1 - fVar3;
  in_ECX[0x10] = fVar5 + fVar2;
  in_ECX[0x12] = fVar5 - fVar2;
  in_ECX[0x13] = fVar7 + fVar4;
  in_ECX[0x11] = fVar4 - fVar7;
  in_ECX[0x17] = fVar8 + fVar6;
  in_ECX[0x15] = fVar8 - fVar6;
  fVar3 = in_ECX[0x1c] + in_ECX[0x18];
  fVar4 = in_ECX[0x1c] - in_ECX[0x18];
  fVar1 = in_ECX[0x1a] + in_ECX[0x1e];
  fVar8 = in_ECX[0x1e] - in_ECX[0x1a];
  fVar2 = in_ECX[0x1d] - in_ECX[0x19];
  in_ECX[0x1e] = fVar3 + fVar1;
  in_ECX[0x1c] = fVar1 - fVar3;
  fVar3 = in_ECX[0x1f] - in_ECX[0x1b];
  in_ECX[0x18] = fVar8 + fVar2;
  fVar1 = in_ECX[0x1b] + in_ECX[0x1f];
  fVar5 = in_ECX[0x19] + in_ECX[0x1d];
  in_ECX[0x1a] = fVar8 - fVar2;
  in_ECX[0x1b] = fVar4 + fVar3;
  in_ECX[0x19] = fVar3 - fVar4;
  in_ECX[0x1f] = fVar1 + fVar5;
  in_ECX[0x1d] = fVar1 - fVar5;
  return;
}


/* FUN_006d9c20 @ 006d9c20  kind=gamemisc  attributed-by=none  size=611 */

void FUN_006d9c20(void)

{
  float *in_ECX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = *in_ECX - in_ECX[8];
  fVar5 = in_ECX[1] - in_ECX[9];
  in_ECX[8] = in_ECX[8] + *in_ECX;
  fVar1 = in_ECX[10];
  in_ECX[9] = in_ECX[9] + in_ECX[1];
  fVar4 = in_ECX[0xf];
  *in_ECX = (fVar2 + fVar5) * 0.70710677;
  in_ECX[1] = (fVar5 - fVar2) * 0.70710677;
  fVar2 = in_ECX[3];
  in_ECX[10] = in_ECX[2] + in_ECX[10];
  in_ECX[3] = fVar1 - in_ECX[2];
  fVar5 = in_ECX[0xd] - in_ECX[5];
  in_ECX[2] = fVar2 - in_ECX[0xb];
  in_ECX[0xb] = in_ECX[0xb] + fVar2;
  fVar2 = in_ECX[0xc] - in_ECX[4];
  in_ECX[0xd] = in_ECX[5] + in_ECX[0xd];
  in_ECX[0xc] = in_ECX[4] + in_ECX[0xc];
  in_ECX[4] = (fVar2 - fVar5) * 0.70710677;
  fVar3 = in_ECX[0xe] - in_ECX[6];
  fVar1 = in_ECX[4] + *in_ECX;
  fVar6 = in_ECX[4] - *in_ECX;
  in_ECX[0xe] = in_ECX[0xe] + in_ECX[6];
  in_ECX[5] = (fVar5 + fVar2) * 0.70710677;
  fVar5 = in_ECX[2] + fVar3;
  fVar3 = fVar3 - in_ECX[2];
  in_ECX[0xf] = in_ECX[7] + in_ECX[0xf];
  fVar2 = in_ECX[5] - in_ECX[1];
  in_ECX[6] = fVar1 + fVar5;
  in_ECX[4] = fVar5 - fVar1;
  fVar1 = (fVar4 - in_ECX[7]) - in_ECX[3];
  *in_ECX = fVar3 + fVar2;
  fVar5 = in_ECX[5] + in_ECX[1];
  fVar4 = in_ECX[3] + (fVar4 - in_ECX[7]);
  in_ECX[2] = fVar3 - fVar2;
  in_ECX[3] = fVar6 + fVar1;
  in_ECX[1] = fVar1 - fVar6;
  in_ECX[7] = fVar4 + fVar5;
  in_ECX[5] = fVar4 - fVar5;
  fVar1 = in_ECX[0xc] + in_ECX[8];
  fVar5 = in_ECX[0xc] - in_ECX[8];
  fVar2 = in_ECX[10] + in_ECX[0xe];
  fVar6 = in_ECX[0xe] - in_ECX[10];
  fVar4 = in_ECX[0xd] - in_ECX[9];
  fVar3 = in_ECX[9] + in_ECX[0xd];
  in_ECX[0xe] = fVar1 + fVar2;
  in_ECX[0xc] = fVar2 - fVar1;
  fVar1 = in_ECX[0xf] - in_ECX[0xb];
  in_ECX[8] = fVar6 + fVar4;
  fVar2 = in_ECX[0xb] + in_ECX[0xf];
  in_ECX[10] = fVar6 - fVar4;
  in_ECX[0xb] = fVar5 + fVar1;
  in_ECX[9] = fVar1 - fVar5;
  in_ECX[0xf] = fVar2 + fVar3;
  in_ECX[0xd] = fVar2 - fVar3;
  return;
}


/* FUN_006d9e90 @ 006d9e90  kind=gamemisc  attributed-by=none  size=177 */

void FUN_006d9e90(void)

{
  float *in_ECX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *in_ECX + in_ECX[4];
  fVar4 = in_ECX[4] - *in_ECX;
  fVar3 = in_ECX[2] + in_ECX[6];
  fVar6 = in_ECX[6] - in_ECX[2];
  fVar2 = in_ECX[5] - in_ECX[1];
  fVar5 = in_ECX[1] + in_ECX[5];
  in_ECX[6] = fVar1 + fVar3;
  in_ECX[4] = fVar3 - fVar1;
  fVar1 = in_ECX[7] - in_ECX[3];
  *in_ECX = fVar6 + fVar2;
  fVar3 = in_ECX[3] + in_ECX[7];
  in_ECX[2] = fVar6 - fVar2;
  in_ECX[3] = fVar4 + fVar1;
  in_ECX[1] = fVar1 - fVar4;
  in_ECX[7] = fVar3 + fVar5;
  in_ECX[5] = fVar3 - fVar5;
  return;
}


/* FUN_006d9f50 @ 006d9f50  kind=gamemisc  attributed-by=none  size=596 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_006d9f50(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_EDX;
  int iVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float afStack_3c [2];
  
  iVar3 = *in_ECX;
  iVar6 = iVar3 >> 2;
  iVar7 = iVar3 >> 3;
  iVar12 = iVar3 >> 1;
  afStack_3c[1] = 1.0067293e-38;
  pfVar11 = (float *)(&stack0xffffffcc + iVar3 * -4);
  iVar2 = iVar12 * 4;
  iVar10 = in_EDX + (iVar12 + iVar6) * 4;
  iVar8 = 0;
  pfVar13 = (float *)(iVar10 + 4);
  pfVar4 = (float *)(in_ECX[2] + iVar2);
  pfVar5 = pfVar4;
  iVar9 = iVar8;
  if (0 < iVar7) {
    do {
      fVar15 = *(float *)(iVar10 + -8) + *pfVar13;
      fVar14 = pfVar13[2] + *(float *)(iVar10 + -0x10);
      iVar10 = iVar10 + -0x10;
      pfVar4 = pfVar5 + -2;
      iVar8 = iVar9 + 2;
      pfVar13 = pfVar13 + 4;
      afStack_3c[(iVar12 + iVar8) - iVar3] = pfVar5[-1] * fVar14 + pfVar5[-2] * fVar15;
      afStack_3c[(iVar12 + iVar9 + 3) - iVar3] = *pfVar4 * fVar14 - pfVar5[-1] * fVar15;
      pfVar5 = pfVar4;
      iVar9 = iVar8;
    } while (iVar8 < iVar7);
  }
  pfVar13 = (float *)(in_EDX + 4);
  while (iVar8 < iVar12 - iVar7) {
    fVar15 = *(float *)(iVar10 + -8) - *pfVar13;
    fVar14 = *(float *)(iVar10 + -0x10) - pfVar13[2];
    iVar10 = iVar10 + -0x10;
    pfVar13 = pfVar13 + 4;
    afStack_3c[(iVar12 + iVar8 + 2) - iVar3] = pfVar4[-1] * fVar14 + pfVar4[-2] * fVar15;
    afStack_3c[(iVar12 + iVar8 + 3) - iVar3] = pfVar4[-2] * fVar14 - pfVar4[-1] * fVar15;
    pfVar4 = pfVar4 + -2;
    iVar8 = iVar8 + 2;
  }
  iVar10 = in_EDX + iVar3 * 4;
  while (iVar8 < iVar12) {
    pfVar5 = (float *)(iVar10 + -8);
    pfVar1 = (float *)(iVar10 + -0x10);
    iVar10 = iVar10 + -0x10;
    fVar15 = -*pfVar5 - *pfVar13;
    fVar14 = -*pfVar1 - pfVar13[2];
    pfVar13 = pfVar13 + 4;
    afStack_3c[(iVar12 + iVar8 + 2) - iVar3] = pfVar4[-1] * fVar14 + pfVar4[-2] * fVar15;
    afStack_3c[(iVar12 + iVar8 + 3) - iVar3] = pfVar4[-2] * fVar14 - pfVar4[-1] * fVar15;
    pfVar4 = pfVar4 + -2;
    iVar8 = iVar8 + 2;
  }
  afStack_3c[1 - iVar3] = (float)iVar12;
  afStack_3c[-iVar3] = 1.0067892e-38;
  FUN_006d8ec0();
  afStack_3c[1 - iVar3] = 1.0067909e-38;
  FUN_006d8d10();
  pfVar13 = (float *)(in_ECX[2] + iVar2);
  pfVar4 = (float *)(iVar2 + param_1);
  iVar10 = 0;
  if (0 < iVar6) {
    do {
      pfVar4 = pfVar4 + -1;
      iVar10 = iVar10 + 1;
      *(float *)(param_1 + -4 + iVar10 * 4) =
           (pfVar13[1] * pfVar11[1] + *pfVar13 * *pfVar11) * (float)in_ECX[4];
      *pfVar4 = (pfVar13[1] * *pfVar11 - *pfVar13 * pfVar11[1]) * (float)in_ECX[4];
      pfVar13 = pfVar13 + 2;
      pfVar11 = pfVar11 + 2;
    } while (iVar10 < iVar6);
  }
  return;
}


/* FUN_006da4b0 @ 006da4b0  kind=gamemisc  attributed-by=none  size=25 */

undefined4 FUN_006da4b0(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(*(int *)(*(int *)(in_ECX + 0x40) + 0x68) + 0x50);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* FUN_006da4e0 @ 006da4e0  kind=gamemisc  attributed-by=none  size=557 */

void FUN_006da4e0(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_EDX;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  
  iVar7 = 0;
  if (param_3 != 0) {
    iVar7 = param_2;
  }
  puVar2 = (&PTR_DAT_0073fe10)[*(int *)(in_EDX + iVar7 * 4)];
  iVar13 = 0;
  if (param_3 != 0) {
    iVar13 = param_4;
  }
  puVar3 = (&PTR_DAT_0073fe10)[*(int *)(in_EDX + iVar13 * 4)];
  iVar6 = *(int *)(param_1 + param_3 * 4);
  iVar7 = *(int *)(param_1 + iVar7 * 4);
  iVar13 = *(int *)(param_1 + iVar13 * 4);
  iVar12 = (int)((iVar6 >> 0x1f & 3U) + iVar6) >> 2;
  iVar10 = iVar12 - ((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2);
  iVar4 = iVar7 / 2 + iVar10;
  iVar12 = (iVar6 / 2 - ((int)((iVar13 >> 0x1f & 3U) + iVar13) >> 2)) + iVar12;
  iVar7 = iVar13 / 2 + iVar12;
  iVar8 = 0;
  iVar9 = iVar10;
  puVar14 = in_ECX;
  if (0 < iVar10) {
    for (; iVar8 = iVar10, iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
  }
  param_3 = 0;
  if (iVar8 < iVar4) {
    if (3 < iVar4 - iVar8) {
      iVar10 = ((iVar4 - iVar8) - 4U >> 2) + 1;
      iVar9 = iVar8 + 2;
      param_3 = iVar10 * 4;
      iVar8 = iVar8 + param_3;
      pfVar5 = (float *)(in_ECX + iVar9);
      pfVar11 = (float *)(puVar2 + 8);
      do {
        pfVar5[-2] = pfVar11[-2] * pfVar5[-2];
        pfVar5[-1] = pfVar11[-1] * pfVar5[-1];
        *pfVar5 = *pfVar5 * *pfVar11;
        pfVar5[1] = pfVar11[1] * pfVar5[1];
        iVar10 = iVar10 + -1;
        pfVar5 = pfVar5 + 4;
        pfVar11 = pfVar11 + 4;
      } while (iVar10 != 0);
    }
    if (iVar8 < iVar4) {
      pfVar5 = (float *)(puVar2 + param_3 * 4);
      do {
        fVar1 = *pfVar5;
        iVar9 = iVar8 + 1;
        pfVar5 = pfVar5 + 1;
        in_ECX[iVar8] = fVar1 * (float)in_ECX[iVar8];
        iVar8 = iVar9;
      } while (iVar9 < iVar4);
    }
  }
  iVar13 = iVar13 / 2 + -1;
  if (iVar12 < iVar7) {
    if (3 < iVar7 - iVar12) {
      iVar8 = iVar12 + 2;
      iVar9 = iVar13 * 4;
      iVar4 = ((iVar7 - iVar12) - 4U >> 2) + 1;
      iVar12 = iVar12 + iVar4 * 4;
      iVar13 = iVar13 + iVar4 * -4;
      pfVar5 = (float *)(in_ECX + iVar8);
      pfVar11 = (float *)(puVar3 + iVar9 + -8);
      do {
        pfVar5[-2] = pfVar11[2] * pfVar5[-2];
        pfVar5[-1] = pfVar11[1] * pfVar5[-1];
        *pfVar5 = *pfVar11 * *pfVar5;
        pfVar5[1] = pfVar11[-1] * pfVar5[1];
        iVar4 = iVar4 + -1;
        pfVar5 = pfVar5 + 4;
        pfVar11 = pfVar11 + -4;
      } while (iVar4 != 0);
    }
    if (iVar12 < iVar7) {
      pfVar5 = (float *)(puVar3 + iVar13 * 4);
      iVar13 = iVar12;
      do {
        fVar1 = *pfVar5;
        iVar12 = iVar13 + 1;
        pfVar5 = pfVar5 + -1;
        in_ECX[iVar13] = fVar1 * (float)in_ECX[iVar13];
        iVar13 = iVar12;
      } while (iVar12 < iVar7);
    }
  }
  if (iVar12 < iVar6) {
    puVar14 = in_ECX + iVar12;
    for (iVar6 = iVar6 - iVar12; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
  }
  return;
}


/* FUN_006da730 @ 006da730  kind=gamemisc  attributed-by=none  size=414 */

undefined4 FUN_006da730(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_8;
  
  piVar1 = (int *)*param_2;
  iVar2 = piVar1[2];
  iVar3 = *(int *)param_2[4];
  iVar4 = *(int *)(param_1 + 0x24) * param_5 >> 1;
  if (piVar1[1] < iVar4) {
    iVar4 = piVar1[1];
  }
  if (0 < iVar4 - *piVar1) {
    iVar4 = (iVar4 - *piVar1) / iVar2;
    piVar5 = (int *)FUN_006d1ab0();
    iVar9 = 0;
    if (0 < param_5) {
      do {
        if (*(int *)(param_4 + iVar9 * 4) != 0) break;
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_5);
    }
    if ((iVar9 != param_5) && (local_8 = 0, 0 < param_2[2])) {
      do {
        iVar9 = 0;
        piVar6 = piVar5;
        if (0 < iVar4) {
          do {
            if (local_8 == 0) {
              iVar10 = param_2[4];
              if (*(int *)(iVar10 + 8) < 1) {
                return 0;
              }
              iVar7 = FUN_006d3630();
              if (iVar7 < 0) {
                return 0;
              }
              iVar10 = *(int *)(*(int *)(iVar10 + 0x18) + iVar7 * 4);
              if (iVar10 == -1) {
                return 0;
              }
              if (piVar1[4] <= iVar10) {
                return 0;
              }
              iVar10 = *(int *)(param_2[7] + iVar10 * 4);
              *piVar6 = iVar10;
              if (iVar10 == 0) {
                return 0;
              }
            }
            iVar10 = 0;
            if (0 < iVar3) {
              iVar7 = iVar9 * iVar2;
              do {
                if (iVar4 <= iVar9) break;
                iVar8 = *(int *)(*piVar6 + iVar10 * 4);
                if ((((piVar1[iVar8 + 6] & 1 << ((byte)local_8 & 0x1f)) != 0) &&
                    (*(int *)(*(int *)(param_2[5] + iVar8 * 4) + local_8 * 4) != 0)) &&
                   (iVar8 = FUN_006d2a60(*piVar1 + iVar7,param_5,param_1 + 4,iVar2), iVar8 == -1)) {
                  return 0;
                }
                iVar7 = iVar7 + iVar2;
                iVar10 = iVar10 + 1;
                iVar9 = iVar9 + 1;
              } while (iVar10 < iVar3);
            }
            piVar6 = piVar6 + 1;
          } while (iVar9 < iVar4);
        }
        local_8 = local_8 + 1;
      } while (local_8 < param_2[2]);
    }
  }
  return 0;
}


/* FUN_006da8d0 @ 006da8d0  kind=gamemisc  attributed-by=none  size=273 */

undefined4
FUN_006da8d0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int *param_5,int param_6,
            undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint _Size;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = param_2;
  piVar1 = (int *)(param_2 + 0x48);
  iVar7 = *(int *)(param_2 + 0x24) / 2;
  _Size = iVar7 * param_6 * 4 + 7U & 0xfffffff8;
  param_2 = 0;
  if (*(int *)(iVar2 + 0x4c) < (int)(*piVar1 + _Size)) {
    if (*(int *)(iVar2 + 0x44) != 0) {
      puVar3 = malloc(8);
      *(int *)(iVar2 + 0x50) = *(int *)(iVar2 + 0x50) + *(int *)(iVar2 + 0x48);
      puVar3[1] = *(undefined4 *)(iVar2 + 0x54);
      *puVar3 = *(undefined4 *)(iVar2 + 0x44);
      *(undefined4 **)(iVar2 + 0x54) = puVar3;
    }
    *(uint *)(iVar2 + 0x4c) = _Size;
    pvVar4 = malloc(_Size);
    *(void **)(iVar2 + 0x44) = pvVar4;
    *(undefined4 *)(iVar2 + 0x48) = 0;
  }
  local_14 = *(int *)(iVar2 + 0x44) + *(int *)(iVar2 + 0x48);
  *(uint *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + _Size;
  if (0 < param_6) {
    param_4 = param_4 - (int)param_5;
    local_c = local_14 - (int)param_5;
    local_8 = param_6;
    do {
      iVar2 = *(int *)(param_4 + (int)param_5);
      if (*param_5 != 0) {
        param_2 = param_2 + 1;
      }
      iVar5 = 0;
      if (0 < iVar7) {
        local_10 = param_6 * 4;
        puVar3 = (undefined4 *)(local_c + (int)param_5);
        do {
          *puVar3 = *(undefined4 *)(iVar2 + iVar5 * 4);
          iVar5 = iVar5 + 1;
          puVar3 = puVar3 + param_6;
        } while (iVar5 < iVar7);
      }
      param_5 = param_5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (param_2 != 0) {
      uVar6 = FUN_006db230(param_3,&local_14,1,param_7);
      return uVar6;
    }
  }
  return 0;
}


/* FUN_006da9f0 @ 006da9f0  kind=gamemisc  attributed-by=none  size=526 */

int * FUN_006da9f0(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  code *pcVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int local_20;
  int local_10;
  
  iVar3 = param_5;
  iVar13 = 0;
  iVar4 = 0;
  if (0 < param_5) {
    do {
      if (*(int *)(param_4 + iVar4 * 4) != 0) {
        iVar13 = iVar13 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_5);
    if (iVar13 != 0) {
      piVar2 = (int *)*param_2;
      iVar4 = piVar2[3];
      iVar13 = piVar2[2];
      iVar5 = (piVar2[1] - *piVar2) / iVar13;
      iVar8 = *(int *)(param_1 + 0x48);
      pcVar14 = malloc_exref;
      if (*(int *)(param_1 + 0x4c) < iVar8 + 8) {
        if (*(int *)(param_1 + 0x44) != 0) {
          puVar6 = malloc(8);
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar8;
          puVar6[1] = *(undefined4 *)(param_1 + 0x54);
          *puVar6 = *(undefined4 *)(param_1 + 0x44);
          pcVar14 = malloc_exref;
          *(undefined4 **)(param_1 + 0x54) = puVar6;
        }
        *(undefined4 *)(param_1 + 0x4c) = 8;
        uVar7 = (*pcVar14)(8);
        pcVar14 = malloc_exref;
        *(undefined4 *)(param_1 + 0x44) = uVar7;
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      piVar1 = (int *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48));
      iVar8 = *(int *)(param_1 + 0x48) + 8;
      uVar16 = iVar5 * 4 + 7U & 0xfffffff8;
      *(int *)(param_1 + 0x48) = iVar8;
      if (*(int *)(param_1 + 0x4c) < (int)(iVar8 + uVar16)) {
        if (*(int *)(param_1 + 0x44) != 0) {
          puVar6 = (undefined4 *)(*pcVar14)(8);
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar8;
          puVar6[1] = *(undefined4 *)(param_1 + 0x54);
          *puVar6 = *(undefined4 *)(param_1 + 0x44);
          *(undefined4 **)(param_1 + 0x54) = puVar6;
        }
        *(uint *)(param_1 + 0x4c) = uVar16;
        pvVar9 = malloc(uVar16);
        *(void **)(param_1 + 0x44) = pvVar9;
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      pvVar9 = (void *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48));
      *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + uVar16;
      *piVar1 = (int)pvVar9;
      memset(pvVar9,0,iVar5 * 4);
      param_5 = *piVar2 / param_5;
      local_20 = 0;
      if (0 < iVar5) {
        do {
          iVar8 = 0;
          iVar17 = 0;
          local_10 = 0;
          if (0 < iVar13) {
            do {
              uVar16 = *(uint *)(*param_3 + param_5 * 4);
              uVar15 = (int)uVar16 >> 0x1f;
              iVar10 = (uVar16 ^ uVar15) - uVar15;
              if (iVar17 < iVar10) {
                iVar17 = iVar10;
              }
              iVar10 = 1;
              if (1 < iVar3) {
                do {
                  uVar16 = *(uint *)(param_3[iVar10] + param_5 * 4);
                  uVar15 = (int)uVar16 >> 0x1f;
                  iVar11 = (uVar16 ^ uVar15) - uVar15;
                  if (iVar8 < iVar11) {
                    iVar8 = iVar11;
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 < iVar3);
              }
              local_10 = local_10 + iVar3;
              param_5 = param_5 + 1;
            } while (local_10 < iVar13);
          }
          iVar10 = 0;
          if (0 < iVar4 + -1) {
            piVar12 = piVar2 + 0x286;
            do {
              if ((iVar17 <= piVar12[-0x40]) && (iVar8 <= *piVar12)) break;
              iVar10 = iVar10 + 1;
              piVar12 = piVar12 + 1;
            } while (iVar10 < iVar4 + -1);
          }
          local_20 = local_20 + 1;
          *(int *)(*piVar1 + -4 + local_20 * 4) = iVar10;
        } while (local_20 < iVar5);
      }
      param_2[10] = param_2[10] + 1;
      return piVar1;
    }
  }
  return (int *)0x0;
}


/* FUN_006dac00 @ 006dac00  kind=gamemisc  attributed-by=none  size=86 */

undefined4
FUN_006dac00(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_5) {
    puVar2 = param_3;
    do {
      if (*(int *)((param_4 - (int)param_3) + (int)puVar2) != 0) {
        param_3[iVar3] = *puVar2;
        iVar3 = iVar3 + 1;
      }
      puVar2 = puVar2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
    if (iVar3 != 0) {
      uVar1 = FUN_006dafa0(param_3,iVar3,FUN_006d30d0);
      return uVar1;
    }
  }
  return 0;
}


/* FUN_006dac60 @ 006dac60  kind=gamemisc  attributed-by=none  size=640 */

int * FUN_006dac60(int param_1,int *param_2,undefined4 *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  int *piVar9;
  code *pcVar10;
  int *piVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int local_24;
  int local_20;
  int local_18;
  
  iVar14 = 0;
  if (0 < param_5) {
    puVar5 = param_3;
    do {
      if (*(int *)((param_4 - (int)param_3) + (int)puVar5) != 0) {
        param_3[iVar14] = *puVar5;
        iVar14 = iVar14 + 1;
      }
      puVar5 = puVar5 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
    if (iVar14 != 0) {
      piVar1 = (int *)*param_2;
      iVar2 = piVar1[3];
      iVar3 = piVar1[2];
      iVar4 = (piVar1[1] - *piVar1) / iVar3;
      iVar15 = *(int *)(param_1 + 0x48);
      uVar18 = iVar14 * 4 + 7U & 0xfffffff8;
      pcVar10 = malloc_exref;
      if (*(int *)(param_1 + 0x4c) < (int)(iVar15 + uVar18)) {
        if (*(int *)(param_1 + 0x44) != 0) {
          puVar5 = malloc(8);
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar15;
          puVar5[1] = *(undefined4 *)(param_1 + 0x54);
          *puVar5 = *(undefined4 *)(param_1 + 0x44);
          pcVar10 = malloc_exref;
          *(undefined4 **)(param_1 + 0x54) = puVar5;
        }
        *(uint *)(param_1 + 0x4c) = uVar18;
        uVar6 = (*pcVar10)(uVar18);
        pcVar10 = malloc_exref;
        *(undefined4 *)(param_1 + 0x44) = uVar6;
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      piVar13 = (int *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48));
      iVar15 = 0;
      *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + uVar18;
      if (0 < iVar14) {
        uVar18 = iVar4 * 4 + 7U & 0xfffffff8;
        do {
          if (*(int *)(param_1 + 0x4c) < (int)(*(int *)(param_1 + 0x48) + uVar18)) {
            if (*(int *)(param_1 + 0x44) != 0) {
              puVar5 = (undefined4 *)(*pcVar10)(8);
              *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x48);
              puVar5[1] = *(undefined4 *)(param_1 + 0x54);
              *puVar5 = *(undefined4 *)(param_1 + 0x44);
              *(undefined4 **)(param_1 + 0x54) = puVar5;
            }
            *(uint *)(param_1 + 0x4c) = uVar18;
            pvVar7 = malloc(uVar18);
            *(void **)(param_1 + 0x44) = pvVar7;
            *(undefined4 *)(param_1 + 0x48) = 0;
          }
          pvVar7 = (void *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48));
          *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + uVar18;
          piVar13[iVar15] = (int)pvVar7;
          memset(pvVar7,0,iVar4 * 4);
          iVar15 = iVar15 + 1;
          pcVar10 = malloc_exref;
        } while (iVar15 < iVar14);
      }
      local_18 = 0;
      if (0 < iVar4) {
        local_24 = 0;
        do {
          iVar15 = *piVar1;
          if (0 < iVar14) {
            piVar11 = piVar13;
            local_20 = iVar14;
            do {
              iVar17 = 0;
              iVar19 = 0;
              if (0 < iVar3) {
                puVar12 = (uint *)(*(int *)(((int)param_3 - (int)piVar13) + (int)piVar11) +
                                  (iVar15 + local_24) * 4);
                iVar16 = iVar3;
                do {
                  uVar18 = (int)*puVar12 >> 0x1f;
                  iVar8 = (*puVar12 ^ uVar18) - uVar18;
                  if (iVar17 < iVar8) {
                    iVar17 = iVar8;
                  }
                  iVar19 = iVar19 + iVar8;
                  puVar12 = puVar12 + 1;
                  iVar16 = iVar16 + -1;
                } while (iVar16 != 0);
              }
              iVar16 = 0;
              if (0 < iVar2 + -1) {
                piVar9 = piVar1 + 0x286;
                do {
                  if ((iVar17 <= piVar9[-0x40]) &&
                     ((*piVar9 < 0 || ((int)((float)iVar19 * (100.0 / (float)iVar3)) < *piVar9))))
                  break;
                  iVar16 = iVar16 + 1;
                  piVar9 = piVar9 + 1;
                } while (iVar16 < iVar2 + -1);
              }
              iVar17 = *piVar11;
              piVar11 = piVar11 + 1;
              local_20 = local_20 + -1;
              *(int *)(iVar17 + local_18 * 4) = iVar16;
            } while (local_20 != 0);
          }
          local_18 = local_18 + 1;
          local_24 = local_24 + iVar3;
        } while (local_18 < iVar4);
      }
      param_2[10] = param_2[10] + 1;
      return piVar13;
    }
  }
  return (int *)0x0;
}


/* FUN_006daee0 @ 006daee0  kind=gamemisc  attributed-by=none  size=87 */

undefined4
FUN_006daee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            int param_5,int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_6) {
    puVar2 = param_4;
    do {
      if (*(int *)((param_5 - (int)param_4) + (int)puVar2) != 0) {
        param_4[iVar3] = *puVar2;
        iVar3 = iVar3 + 1;
      }
      puVar2 = puVar2 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
    if (iVar3 != 0) {
      uVar1 = FUN_006db230(param_3,param_4,iVar3,param_7);
      return uVar1;
    }
  }
  return 0;
}


/* FUN_006daf40 @ 006daf40  kind=gamemisc  attributed-by=none  size=86 */

undefined4
FUN_006daf40(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_5) {
    puVar2 = param_3;
    do {
      if (*(int *)((param_4 - (int)param_3) + (int)puVar2) != 0) {
        param_3[iVar3] = *puVar2;
        iVar3 = iVar3 + 1;
      }
      puVar2 = puVar2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
    if (iVar3 != 0) {
      uVar1 = FUN_006dafa0(param_3,iVar3,FUN_006d3250);
      return uVar1;
    }
  }
  return 0;
}


/* FUN_006dafa0 @ 006dafa0  kind=gamemisc  attributed-by=none  size=643 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_006dafa0(int param_1,int param_2,code *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int in_ECX;
  code *pcVar10;
  int *in_EDX;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iStack_4c;
  int local_2c;
  int local_28;
  int local_1c;
  int local_c;
  
  piVar1 = (int *)*in_EDX;
  iVar2 = piVar1[2];
  iVar3 = *(int *)in_EDX[4];
  iVar5 = *(int *)(in_ECX + 0x24) >> 1;
  if (piVar1[1] < iVar5) {
    iVar5 = piVar1[1];
  }
  if (0 < iVar5 - *piVar1) {
    iVar6 = (iVar5 - *piVar1) / iVar2;
    iVar5 = param_2 * -4;
    puVar12 = &stack0xffffffb8 + iVar5;
    iVar16 = 0;
    if (0 < param_2) {
      uVar14 = ((iVar6 + -1 + iVar3) / iVar3) * 4 + 7U & 0xfffffff8;
      puVar12 = &stack0xffffffb8 + iVar5;
      do {
        if (*(int *)(in_ECX + 0x4c) < (int)(*(int *)(in_ECX + 0x48) + uVar14)) {
          pcVar10 = malloc_exref;
          if (*(int *)(in_ECX + 0x44) != 0) {
            *(undefined4 *)(puVar12 + -4) = 8;
            *(undefined4 *)(puVar12 + -8) = 0x6db027;
            puVar7 = malloc(*(size_t *)(puVar12 + -4));
            *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + *(int *)(in_ECX + 0x48);
            puVar7[1] = *(undefined4 *)(in_ECX + 0x54);
            *puVar7 = *(undefined4 *)(in_ECX + 0x44);
            pcVar10 = malloc_exref;
            *(undefined4 **)(in_ECX + 0x54) = puVar7;
          }
          *(uint *)(puVar12 + -4) = uVar14;
          *(uint *)(in_ECX + 0x4c) = uVar14;
          puVar11 = puVar12 + -8;
          *(undefined4 *)(puVar12 + -8) = 0x6db04d;
          uVar8 = (*pcVar10)();
          puVar12 = puVar11 + 4;
          *(undefined4 *)(in_ECX + 0x44) = uVar8;
          *(undefined4 *)(in_ECX + 0x48) = 0;
        }
        iVar17 = *(int *)(in_ECX + 0x48);
        *(uint *)(in_ECX + 0x48) = iVar17 + uVar14;
        iVar16 = iVar16 + 1;
        (&iStack_4c)[iVar16 - param_2] = *(int *)(in_ECX + 0x44) + iVar17;
      } while (iVar16 < param_2);
    }
    local_1c = 0;
    if (0 < in_EDX[2]) {
      do {
        iVar16 = 0;
        local_28 = 0;
        if (0 < iVar6) {
          local_c = 0;
          do {
            if ((local_1c == 0) && (iVar17 = 0, 0 < param_2)) {
              do {
                iVar16 = in_EDX[4];
                if (*(int *)(iVar16 + 8) < 1) {
                  return 0;
                }
                *(undefined4 *)(puVar12 + -4) = 0x6db0cd;
                iVar9 = FUN_006d3630();
                if (iVar9 < 0) {
                  return 0;
                }
                iVar16 = *(int *)(*(int *)(iVar16 + 0x18) + iVar9 * 4);
                if (iVar16 == -1) {
                  return 0;
                }
                if (piVar1[4] <= iVar16) {
                  return 0;
                }
                *(undefined4 *)(local_c + *(int *)(&stack0xffffffb8 + iVar17 * 4 + iVar5)) =
                     *(undefined4 *)(in_EDX[7] + iVar16 * 4);
                if (*(int *)(local_c + *(int *)(&stack0xffffffb8 + iVar17 * 4 + iVar5)) == 0) {
                  return 0;
                }
                iVar17 = iVar17 + 1;
                iVar16 = local_28;
              } while (iVar17 < param_2);
            }
            local_2c = 0;
            if (0 < iVar3) {
              iVar17 = iVar16 * iVar2;
              do {
                if (iVar6 <= iVar16) break;
                iVar9 = 0;
                if (0 < param_2) {
                  piVar15 = (int *)(&stack0xffffffb8 + iVar5);
                  do {
                    iVar16 = *piVar1;
                    iVar4 = *(int *)(*(int *)(local_c + *piVar15) + local_2c * 4);
                    if (((piVar1[iVar4 + 6] & 1 << ((byte)local_1c & 0x1f)) != 0) &&
                       (iVar4 = *(int *)(*(int *)(in_EDX[5] + iVar4 * 4) + local_1c * 4), iVar4 != 0
                       )) {
                      *(int *)(puVar12 + -4) = iVar2;
                      *(int *)(puVar12 + -8) = in_ECX + 4;
                      *(int *)(puVar12 + -0xc) =
                           *(int *)((param_1 - (int)(&stack0xffffffb8 + iVar5)) + (int)piVar15) +
                           (iVar16 + iVar17) * 4;
                      *(int *)(puVar12 + -0x10) = iVar4;
                      puVar13 = puVar12 + -0x14;
                      *(undefined4 *)(puVar12 + -0x14) = 0x6db1bc;
                      iVar16 = (*param_3)();
                      puVar12 = puVar13 + 0x10;
                      if (iVar16 == -1) {
                        return 0;
                      }
                    }
                    iVar9 = iVar9 + 1;
                    piVar15 = piVar15 + 1;
                    iVar16 = local_28;
                  } while (iVar9 < param_2);
                }
                local_2c = local_2c + 1;
                iVar16 = iVar16 + 1;
                iVar17 = iVar17 + iVar2;
                local_28 = iVar16;
              } while (local_2c < iVar3);
            }
            local_c = local_c + 4;
          } while (iVar16 < iVar6);
        }
        local_1c = local_1c + 1;
      } while (local_1c < in_EDX[2]);
    }
  }
  return 0;
}


/* FUN_006db230 @ 006db230  kind=gamemisc  attributed-by=none  size=575 */

undefined4 FUN_006db230(int *param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_434 [128];
  int local_234 [128];
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = (int *)*param_1;
  local_30 = local_20[3];
  iVar2 = local_20[2];
  local_c = *(int *)param_1[4];
  local_14 = (local_20[1] - *local_20) / iVar2;
  local_18 = iVar2;
  memset(local_434,0,0x200);
  memset(local_234,0,0x200);
  local_8 = 0;
  iVar4 = local_14;
  if (0 < param_1[2]) {
    do {
      iVar8 = 0;
      iVar3 = local_8;
      if (0 < iVar4) {
        do {
          if ((iVar3 == 0) && (local_10 = 0, iVar4 = local_14, 0 < param_3)) {
            do {
              iVar4 = 1;
              piVar7 = (int *)(param_4[local_10] + iVar8 * 4);
              iVar2 = *piVar7;
              if (1 < local_c) {
                do {
                  piVar7 = piVar7 + 1;
                  iVar2 = iVar2 * local_30;
                  if (iVar4 + iVar8 < local_14) {
                    iVar2 = iVar2 + *piVar7;
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < local_c);
              }
              iVar4 = param_1[4];
              if (iVar2 < *(int *)(iVar4 + 4)) {
                if ((iVar2 < 0) || (*(int *)(*(int *)(iVar4 + 0xc) + 4) <= iVar2)) {
                  param_1[9] = param_1[9];
                }
                else {
                  iVar2 = iVar2 * 4;
                  FUN_00401c40(local_1c,*(undefined4 *)(*(int *)(iVar4 + 0x14) + iVar2),
                               *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0xc) + 8) + iVar2));
                  param_1[9] = param_1[9] + *(int *)(iVar2 + *(int *)(*(int *)(iVar4 + 0xc) + 8));
                }
              }
              local_10 = local_10 + 1;
              iVar4 = local_14;
              iVar3 = local_8;
              iVar2 = local_18;
            } while (local_10 < param_3);
          }
          local_10 = 0;
          if (0 < local_c) {
            local_24 = iVar8 * iVar2;
            iVar6 = local_c;
            do {
              if (iVar4 <= iVar8) goto LAB_006db459;
              bVar1 = (byte)iVar3 & 0x1f;
              uVar5 = 1 << bVar1 | 1U >> 0x20 - bVar1;
              local_34 = *local_20 + local_24;
              local_2c = uVar5;
              if (0 < param_3) {
                local_28 = param_2 - (int)param_4;
                iVar4 = param_3;
                piVar7 = param_4;
                do {
                  if (iVar3 == 0) {
                    local_234[*(int *)(*piVar7 + iVar8 * 4)] =
                         local_234[*(int *)(*piVar7 + iVar8 * 4)] + local_18;
                  }
                  iVar2 = *(int *)(*piVar7 + iVar8 * 4);
                  if (((local_20[iVar2 + 6] & uVar5) != 0) &&
                     (iVar2 = *(int *)(*(int *)(param_1[5] + iVar2 * 4) + local_8 * 4), iVar2 != 0))
                  {
                    iVar2 = FUN_006db8a0(local_1c,*(int *)(local_28 + (int)piVar7) + local_34 * 4,
                                         local_18,iVar2,0);
                    uVar5 = local_2c;
                    param_1[8] = param_1[8] + iVar2;
                    local_434[*(int *)(*piVar7 + iVar8 * 4)] =
                         local_434[*(int *)(*piVar7 + iVar8 * 4)] + iVar2;
                  }
                  piVar7 = piVar7 + 1;
                  iVar4 = iVar4 + -1;
                  iVar3 = local_8;
                  iVar6 = local_c;
                  iVar2 = local_18;
                } while (iVar4 != 0);
              }
              local_10 = local_10 + 1;
              local_24 = local_24 + iVar2;
              iVar8 = iVar8 + 1;
              iVar4 = local_14;
            } while (local_10 < iVar6);
          }
        } while (iVar8 < iVar4);
      }
LAB_006db459:
      local_8 = iVar3 + 1;
    } while (iVar3 + 1 < param_1[2]);
  }
  return 0;
}


/* FUN_006db470 @ 006db470  kind=gamemisc  attributed-by=none  size=467 */

int * FUN_006db470(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int in_ECX;
  int *in_EDX;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int local_20;
  int local_10;
  
  iVar5 = param_2;
  piVar2 = (int *)*in_EDX;
  iVar3 = piVar2[3];
  iVar4 = piVar2[2];
  iVar6 = (piVar2[1] - *piVar2) / iVar4;
  iVar9 = *(int *)(in_ECX + 0x48);
  if (*(int *)(in_ECX + 0x4c) < iVar9 + 8) {
    if (*(int *)(in_ECX + 0x44) != 0) {
      puVar7 = malloc(8);
      *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + iVar9;
      puVar7[1] = *(undefined4 *)(in_ECX + 0x54);
      *puVar7 = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 **)(in_ECX + 0x54) = puVar7;
    }
    *(undefined4 *)(in_ECX + 0x4c) = 8;
    pvVar8 = malloc(8);
    *(void **)(in_ECX + 0x44) = pvVar8;
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  piVar1 = (int *)(*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x48));
  iVar9 = *(int *)(in_ECX + 0x48) + 8;
  uVar15 = iVar6 * 4 + 7U & 0xfffffff8;
  *(int *)(in_ECX + 0x48) = iVar9;
  if (*(int *)(in_ECX + 0x4c) < (int)(iVar9 + uVar15)) {
    if (*(int *)(in_ECX + 0x44) != 0) {
      puVar7 = malloc(8);
      *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + iVar9;
      puVar7[1] = *(undefined4 *)(in_ECX + 0x54);
      *puVar7 = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 **)(in_ECX + 0x54) = puVar7;
    }
    *(uint *)(in_ECX + 0x4c) = uVar15;
    pvVar8 = malloc(uVar15);
    *(void **)(in_ECX + 0x44) = pvVar8;
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  pvVar8 = (void *)(*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x48));
  *(uint *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + uVar15;
  *piVar1 = (int)pvVar8;
  memset(pvVar8,0,iVar6 * 4);
  param_2 = *piVar2 / param_2;
  local_20 = 0;
  if (0 < iVar6) {
    do {
      iVar9 = 0;
      iVar14 = 0;
      local_10 = 0;
      if (0 < iVar4) {
        iVar9 = 0;
        do {
          uVar15 = *(uint *)(*param_1 + param_2 * 4);
          uVar13 = (int)uVar15 >> 0x1f;
          iVar10 = (uVar15 ^ uVar13) - uVar13;
          if (iVar14 < iVar10) {
            iVar14 = iVar10;
          }
          iVar10 = 1;
          if (1 < iVar5) {
            do {
              uVar15 = *(uint *)(param_1[iVar10] + param_2 * 4);
              uVar13 = (int)uVar15 >> 0x1f;
              iVar11 = (uVar15 ^ uVar13) - uVar13;
              if (iVar9 < iVar11) {
                iVar9 = iVar11;
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar5);
          }
          local_10 = local_10 + iVar5;
          param_2 = param_2 + 1;
        } while (local_10 < iVar4);
      }
      iVar10 = 0;
      if (0 < iVar3 + -1) {
        piVar12 = piVar2 + 0x286;
        do {
          if ((iVar14 <= piVar12[-0x40]) && (iVar9 <= *piVar12)) break;
          iVar10 = iVar10 + 1;
          piVar12 = piVar12 + 1;
        } while (iVar10 < iVar3 + -1);
      }
      local_20 = local_20 + 1;
      *(int *)(*piVar1 + -4 + local_20 * 4) = iVar10;
    } while (local_20 < iVar6);
  }
  in_EDX[10] = in_EDX[10] + 1;
  return piVar1;
}


/* FUN_006db650 @ 006db650  kind=gamemisc  attributed-by=none  size=583 */

int * FUN_006db650(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  int *piVar9;
  int in_ECX;
  code *pcVar10;
  int *piVar11;
  uint *puVar12;
  int *in_EDX;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int local_24;
  int local_20;
  int local_18;
  
  piVar1 = (int *)*in_EDX;
  iVar2 = piVar1[3];
  iVar3 = piVar1[2];
  iVar4 = (piVar1[1] - *piVar1) / iVar3;
  iVar14 = *(int *)(in_ECX + 0x48);
  uVar17 = param_2 * 4 + 7U & 0xfffffff8;
  pcVar10 = malloc_exref;
  if (*(int *)(in_ECX + 0x4c) < (int)(iVar14 + uVar17)) {
    if (*(int *)(in_ECX + 0x44) != 0) {
      puVar5 = malloc(8);
      *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + iVar14;
      puVar5[1] = *(undefined4 *)(in_ECX + 0x54);
      *puVar5 = *(undefined4 *)(in_ECX + 0x44);
      pcVar10 = malloc_exref;
      *(undefined4 **)(in_ECX + 0x54) = puVar5;
    }
    *(uint *)(in_ECX + 0x4c) = uVar17;
    uVar6 = (*pcVar10)(uVar17);
    pcVar10 = malloc_exref;
    *(undefined4 *)(in_ECX + 0x44) = uVar6;
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  piVar13 = (int *)(*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x48));
  iVar14 = 0;
  *(uint *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + uVar17;
  if (0 < param_2) {
    uVar17 = iVar4 * 4 + 7U & 0xfffffff8;
    do {
      if (*(int *)(in_ECX + 0x4c) < (int)(*(int *)(in_ECX + 0x48) + uVar17)) {
        if (*(int *)(in_ECX + 0x44) != 0) {
          puVar5 = (undefined4 *)(*pcVar10)(8);
          *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + *(int *)(in_ECX + 0x48);
          puVar5[1] = *(undefined4 *)(in_ECX + 0x54);
          *puVar5 = *(undefined4 *)(in_ECX + 0x44);
          *(undefined4 **)(in_ECX + 0x54) = puVar5;
        }
        *(uint *)(in_ECX + 0x4c) = uVar17;
        pvVar7 = malloc(uVar17);
        *(void **)(in_ECX + 0x44) = pvVar7;
        *(undefined4 *)(in_ECX + 0x48) = 0;
      }
      pvVar7 = (void *)(*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x48));
      *(uint *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + uVar17;
      piVar13[iVar14] = (int)pvVar7;
      memset(pvVar7,0,iVar4 * 4);
      iVar14 = iVar14 + 1;
      pcVar10 = malloc_exref;
    } while (iVar14 < param_2);
  }
  local_18 = 0;
  if (0 < iVar4) {
    local_24 = 0;
    do {
      iVar14 = *piVar1;
      if (0 < param_2) {
        piVar11 = piVar13;
        local_20 = param_2;
        do {
          iVar16 = 0;
          iVar18 = 0;
          if (0 < iVar3) {
            puVar12 = (uint *)(*(int *)((param_1 - (int)piVar13) + (int)piVar11) +
                              (iVar14 + local_24) * 4);
            iVar15 = iVar3;
            do {
              uVar17 = (int)*puVar12 >> 0x1f;
              iVar8 = (*puVar12 ^ uVar17) - uVar17;
              if (iVar16 < iVar8) {
                iVar16 = iVar8;
              }
              iVar18 = iVar18 + iVar8;
              puVar12 = puVar12 + 1;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          iVar15 = 0;
          if (0 < iVar2 + -1) {
            piVar9 = piVar1 + 0x286;
            do {
              if ((iVar16 <= piVar9[-0x40]) &&
                 ((*piVar9 < 0 || ((int)((float)iVar18 * (100.0 / (float)iVar3)) < *piVar9))))
              break;
              iVar15 = iVar15 + 1;
              piVar9 = piVar9 + 1;
            } while (iVar15 < iVar2 + -1);
          }
          iVar16 = *piVar11;
          piVar11 = piVar11 + 1;
          local_20 = local_20 + -1;
          *(int *)(iVar16 + local_18 * 4) = iVar15;
        } while (local_20 != 0);
      }
      local_18 = local_18 + 1;
      local_24 = local_24 + iVar3;
    } while (local_18 < iVar4);
  }
  in_EDX[10] = in_EDX[10] + 1;
  return piVar13;
}


/* FUN_006db8a0 @ 006db8a0  kind=gamemisc  attributed-by=none  size=136 */

int FUN_006db8a0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  piVar1 = param_4;
  param_4 = (int *)(param_3 / *param_4);
  iVar2 = 0;
  local_8 = 0;
  if (0 < (int)param_4) {
    do {
      iVar2 = FUN_006db930();
      if ((iVar2 < 0) || (*(int *)(piVar1[3] + 4) <= iVar2)) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 * 4;
        FUN_00401c40(param_1,*(undefined4 *)(piVar1[5] + iVar2),
                     *(undefined4 *)(*(int *)(piVar1[3] + 8) + iVar2));
        iVar2 = *(int *)(iVar2 + *(int *)(piVar1[3] + 8));
      }
      iVar2 = local_8 + iVar2;
      param_4 = (int *)((int)param_4 + -1);
      local_8 = iVar2;
    } while (param_4 != (int *)0x0);
  }
  return iVar2;
}


/* FUN_006db930 @ 006db930  kind=gamemisc  attributed-by=none  size=1000 */

int FUN_006db930(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *in_ECX;
  int *piVar6;
  int *in_EDX;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  int aiStack_54 [8];
  int *local_34;
  int *local_30;
  uint *local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar5 = in_ECX[0xc];
  local_10 = in_ECX[0xd];
  uVar8 = in_ECX[0xb];
  iVar10 = 0;
  local_24 = *in_ECX;
  iVar2 = (int)uVar8 >> 1;
  local_28 = iVar2;
  local_1c = local_24;
  local_8 = uVar5;
  local_20 = uVar8;
  local_c = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_2c = in_ECX;
  local_14 = in_EDX;
  if (local_10 == 1) {
    if ((int)local_24 < 1) goto LAB_006dba80;
    piVar7 = (int *)((int)&local_78 + local_24 * 4);
    local_34 = piVar7;
    local_30 = (int *)((int)in_EDX - (int)&local_78);
    piVar9 = (int *)((int)in_EDX - (int)&local_78);
    do {
      iVar3 = *(int *)((int)piVar7 + (int)piVar9 + -4) - uVar5;
      piVar7 = piVar7 + -1;
      if (iVar3 < iVar2) {
        iVar4 = (iVar2 - iVar3) * 2 + -1;
      }
      else {
        iVar4 = (iVar3 - iVar2) * 2;
      }
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if ((int)uVar8 <= iVar4) {
        iVar4 = uVar8 - 1;
      }
      iVar10 = iVar10 * uVar8 + iVar4;
      uVar11 = local_24 - 1;
      local_24 = uVar11;
      *piVar7 = uVar5 + iVar3;
      piVar9 = local_30;
    } while (uVar11 != 0);
  }
  else {
    if ((int)local_24 < 1) goto LAB_006dba80;
    local_18 = (int)in_EDX - (int)&local_78;
    local_30 = (int *)((int)&local_78 + local_24 * 4);
    local_34 = (int *)((int)local_10 >> 1);
    piVar7 = (int *)((int)local_10 >> 1);
    do {
      piVar9 = local_34;
      local_30 = local_30 + -1;
      iVar3 = (int)((*(int *)(local_18 + (int)local_30) - local_8) + (int)piVar7) / (int)local_10;
      if (iVar3 < iVar2) {
        iVar4 = (iVar2 - iVar3) * 2 + -1;
      }
      else {
        iVar4 = (iVar3 - iVar2) * 2;
      }
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if ((int)uVar8 <= iVar4) {
        iVar4 = uVar8 - 1;
      }
      iVar10 = iVar10 * uVar8 + iVar4;
      uVar5 = local_24 - 1;
      local_24 = uVar5;
      *local_30 = iVar3 * local_10 + local_8;
      piVar7 = piVar9;
    } while (uVar5 != 0);
  }
  local_c = iVar10;
  uVar5 = local_8;
  uVar8 = local_20;
LAB_006dba80:
  iVar2 = local_c;
  piVar7 = local_14;
  uVar11 = local_1c;
  if (*(int *)(*(int *)(local_2c[3] + 8) + local_c * 4) < 1) {
    piVar9 = (int *)((uVar8 - 1) * local_10 + uVar5);
    local_28 = -1;
    local_58 = 0;
    aiStack_54[0] = 0;
    aiStack_54[1] = 0;
    aiStack_54[2] = 0;
    aiStack_54[3] = 0;
    aiStack_54[4] = 0;
    aiStack_54[5] = 0;
    aiStack_54[6] = 0;
    local_30 = piVar9;
    local_24 = 0;
    aiStack_54[7] = local_2c[1];
    if (0 < (int)local_2c[1]) {
      local_2c = *(uint **)(local_2c[3] + 8);
      do {
        if (0 < (int)*local_2c) {
          iVar2 = 0;
          local_8 = 0;
          if (((0 < (int)uVar11) && (3 < uVar11)) && (1 < DAT_0076e2a0)) {
            iVar10 = uVar11 * 4;
            iVar3 = 0;
            iVar4 = 0;
            iVar13 = 0;
            iVar14 = 0;
            if ((piVar7 + (uVar11 - 1) < &local_58) ||
               (uVar11 = local_1c, (int *)((int)&local_60 + iVar10 + 4) < piVar7)) {
              uVar5 = local_1c & 0x80000003;
              if ((int)uVar5 < 0) {
                uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
              }
              piVar9 = piVar7;
              do {
                piVar6 = (int *)(((int)&local_58 - (int)piVar7) + (int)piVar9);
                iVar2 = iVar2 + 4;
                auVar12._0_4_ = *piVar6 - *piVar9;
                auVar12._4_4_ = piVar6[1] - piVar9[1];
                auVar12._8_4_ = piVar6[2] - piVar9[2];
                auVar12._12_4_ = piVar6[3] - piVar9[3];
                auVar12 = pmulld(auVar12,auVar12);
                iVar3 = iVar3 + auVar12._0_4_;
                iVar4 = iVar4 + auVar12._4_4_;
                iVar13 = iVar13 + auVar12._8_4_;
                iVar14 = iVar14 + auVar12._12_4_;
                piVar9 = piVar9 + 4;
              } while (iVar2 < (int)(local_1c - uVar5));
              local_8 = iVar3 + iVar13 + iVar4 + iVar14;
              uVar11 = local_1c;
            }
          }
          iVar10 = 0;
          local_18 = 0;
          local_20 = 0;
          if (iVar2 < (int)uVar11) {
            if (1 < (int)(uVar11 - iVar2)) {
              iVar3 = -(int)piVar7;
              iVar4 = ((uVar11 - iVar2) - 2 >> 1) + 1;
              piVar9 = piVar7 + iVar2;
              local_34 = (int *)((int)aiStack_54 + iVar3);
              iVar2 = iVar2 + iVar4 * 2;
              do {
                iVar10 = *(int *)((int)&local_58 + iVar3 + (int)piVar9) - *piVar9;
                iVar10 = local_18 + iVar10 * iVar10;
                local_18 = iVar10;
                iVar13 = *(int *)((int)&local_60 + iVar3 + 4 + (int)(piVar9 + 2)) - piVar9[1];
                local_20 = local_20 + iVar13 * iVar13;
                iVar4 = iVar4 + -1;
                piVar9 = piVar9 + 2;
                piVar7 = local_14;
              } while (iVar4 != 0);
            }
            if (iVar2 < (int)uVar11) {
              local_8 = local_8 + ((&local_58)[iVar2] - piVar7[iVar2]) *
                                  ((&local_58)[iVar2] - piVar7[iVar2]);
            }
            local_8 = local_8 + local_20 + iVar10;
          }
          piVar9 = local_30;
          if ((local_28 == -1) || (iVar2 = local_c, (int)local_8 < local_28)) {
            local_78 = CONCAT44(aiStack_54[0],local_58);
            uStack_70 = CONCAT44(aiStack_54[2],aiStack_54[1]);
            local_68 = CONCAT44(aiStack_54[4],aiStack_54[3]);
            local_60 = CONCAT44(aiStack_54[6],aiStack_54[5]);
            local_28 = local_8;
            local_c = local_24;
            iVar2 = local_c;
          }
        }
        iVar10 = 0;
        if ((int)piVar9 <= local_58) {
          piVar6 = &local_58;
          do {
            *piVar6 = 0;
            iVar10 = iVar10 + 1;
            piVar6 = &local_58 + iVar10;
          } while ((int)piVar9 <= (&local_58)[iVar10]);
        }
        piVar1 = local_14;
        piVar6 = &local_58 + iVar10;
        if (-1 < *piVar6) {
          *piVar6 = *piVar6 + local_10;
          piVar7 = piVar1;
        }
        *piVar6 = -*piVar6;
        local_24 = local_24 + 1;
        local_2c = local_2c + 1;
      } while ((int)local_24 < aiStack_54[7]);
    }
  }
  if ((-1 < iVar2) && (iVar10 = 0, 0 < (int)uVar11)) {
    if ((3 < uVar11) &&
       ((&stack0xffffff84 + uVar11 * 4 < piVar7 || (piVar7 + (uVar11 - 1) < &local_78)))) {
      uVar5 = uVar11 & 0x80000003;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
      }
      piVar9 = (int *)&local_78;
      do {
        iVar3 = piVar9[1];
        iVar4 = piVar9[2];
        iVar13 = piVar9[3];
        iVar10 = iVar10 + 4;
        *piVar7 = *piVar7 - *piVar9;
        piVar7[1] = piVar7[1] - iVar3;
        piVar7[2] = piVar7[2] - iVar4;
        piVar7[3] = piVar7[3] - iVar13;
        piVar7 = piVar7 + 4;
        piVar9 = piVar9 + 4;
      } while (iVar10 < (int)(uVar11 - uVar5));
    }
    for (; iVar10 < (int)uVar11; iVar10 = iVar10 + 1) {
      *piVar7 = *piVar7 - *(int *)((int)&local_78 + iVar10 * 4);
      piVar7 = piVar7 + 1;
    }
  }
  return iVar2;
}


/* FUN_006dbd20 @ 006dbd20  kind=gamemisc  attributed-by=none  size=520 */

int * FUN_006dbd20(int param_1,int param_2)

{
  size_t _Count;
  int iVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  size_t _Count_00;
  int iVar9;
  size_t local_1c;
  int local_10;
  
  piVar2 = calloc(1,0x2c);
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x1c);
  _Count = *(size_t *)(param_2 + 0xc);
  iVar9 = *(int *)(iVar6 + 0xb20);
  iVar1 = *(int *)(param_2 + 0x14);
  piVar2[1] = _Count;
  piVar8 = (int *)(iVar9 + iVar1 * 0x38);
  iVar7 = 0;
  *piVar2 = param_2;
  iVar1 = *piVar8;
  local_10 = 0;
  local_1c = 0;
  piVar2[3] = iVar9;
  piVar2[4] = (int)piVar8;
  pvVar3 = calloc(_Count,4);
  piVar2[5] = (int)pvVar3;
  param_1 = 0;
  if (0 < (int)_Count) {
    do {
      uVar4 = *(uint *)(param_2 + 0x18 + param_1 * 4);
      _Count_00 = 0;
      if (uVar4 != 0) {
        do {
          _Count_00 = _Count_00 + 1;
          uVar4 = uVar4 >> 1;
        } while (uVar4 != 0);
        if (_Count_00 != 0) {
          if ((int)local_1c < (int)_Count_00) {
            local_1c = _Count_00;
          }
          pvVar5 = calloc(_Count_00,4);
          iVar9 = 0;
          *(void **)((int)pvVar3 + param_1 * 4) = pvVar5;
          uVar4 = 1;
          if (0 < (int)_Count_00) {
            piVar8 = (int *)(param_2 + 0x118 + iVar7 * 4);
            do {
              if ((*(uint *)(param_2 + 0x18 + param_1 * 4) & uVar4) != 0) {
                iVar7 = *piVar8;
                local_10 = local_10 + 1;
                piVar8 = piVar8 + 1;
                *(int *)(*(int *)((int)pvVar3 + param_1 * 4) + iVar9 * 4) =
                     *(int *)(iVar6 + 0xb20) + iVar7 * 0x38;
              }
              uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
              iVar9 = iVar9 + 1;
              iVar7 = local_10;
            } while (iVar9 < (int)_Count_00);
          }
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < (int)_Count);
  }
  piVar2[6] = 1;
  if (0 < iVar1) {
    iVar9 = 1;
    iVar6 = iVar1;
    do {
      iVar9 = iVar9 * piVar2[1];
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    piVar2[6] = iVar9;
  }
  iVar6 = piVar2[6];
  piVar2[2] = local_1c;
  pvVar3 = malloc(iVar6 * 4);
  piVar2[7] = (int)pvVar3;
  param_1 = 0;
  if (iVar6 < 1) {
    return piVar2;
  }
  do {
    iVar6 = iVar6 / piVar2[1];
    piVar8 = (int *)((int)pvVar3 + param_1 * 4);
    pvVar5 = malloc(iVar1 * 4);
    *piVar8 = (int)pvVar5;
    iVar9 = 0;
    param_2 = param_1;
    if (0 < iVar1) {
      do {
        iVar7 = param_2 / iVar6;
        iVar9 = iVar9 + 1;
        param_2 = param_2 - iVar7 * iVar6;
        iVar6 = iVar6 / piVar2[1];
        *(int *)(*piVar8 + -4 + iVar9 * 4) = iVar7;
      } while (iVar9 < iVar1);
    }
    iVar6 = piVar2[6];
    param_1 = param_1 + 1;
  } while (param_1 < iVar6);
  return piVar2;
}


/* FUN_006dbf30 @ 006dbf30  kind=gamemisc  attributed-by=none  size=443 */

undefined4 * FUN_006dbf30(int param_1)

{
  undefined4 *_Dst;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint *local_10;
  int local_c;
  
  iVar7 = 0;
  _Dst = calloc(1,0xb18);
  iVar5 = *(int *)(param_1 + 0x1c);
  uVar1 = FUN_00401e80();
  *_Dst = uVar1;
  uVar1 = FUN_00401e80();
  _Dst[1] = uVar1;
  iVar2 = FUN_00401e80();
  _Dst[2] = iVar2 + 1;
  iVar2 = FUN_00401e80();
  _Dst[3] = iVar2 + 1;
  iVar2 = FUN_00401e80();
  _Dst[5] = iVar2;
  if (-1 < iVar2) {
    local_c = 0;
    if (0 < (int)_Dst[3]) {
      local_10 = _Dst + 6;
      do {
        uVar3 = FUN_00401e80();
        iVar2 = FUN_00401e80();
        if (iVar2 < 0) goto LAB_006dc0ce;
        if (iVar2 != 0) {
          iVar2 = FUN_00401e80();
          if (iVar2 < 0) goto LAB_006dc0ce;
          uVar3 = uVar3 | iVar2 << 3;
        }
        iVar2 = 0;
        *local_10 = uVar3;
        for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
          iVar2 = iVar2 + (uVar3 & 1);
        }
        local_c = local_c + 1;
        local_10 = local_10 + 1;
        iVar7 = iVar7 + iVar2;
      } while (local_c < (int)_Dst[3]);
    }
    iVar2 = 0;
    if (0 < iVar7) {
      piVar6 = _Dst + 0x46;
      do {
        iVar4 = FUN_00401e80();
        if (iVar4 < 0) goto LAB_006dc0ce;
        *piVar6 = iVar4;
        iVar2 = iVar2 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar2 < iVar7);
    }
    iVar2 = _Dst[5];
    if (iVar2 < *(int *)(iVar5 + 0x18)) {
      iVar4 = 0;
      if (0 < iVar7) {
        piVar6 = _Dst + 0x46;
        do {
          if ((*(int *)(iVar5 + 0x18) <= *piVar6) ||
             (*(int *)(*(int *)(iVar5 + 0x720 + *piVar6 * 4) + 0xc) == 0)) goto LAB_006dc0ce;
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar4 < iVar7);
        iVar2 = _Dst[5];
      }
      iVar7 = 1;
      piVar6 = *(int **)(iVar5 + 0x720 + iVar2 * 4);
      iVar5 = *piVar6;
      iVar2 = piVar6[1];
      if (0 < iVar5) {
        if (0 < iVar5) {
          do {
            iVar7 = iVar7 * _Dst[3];
            if (iVar7 - iVar2 != 0 && iVar2 <= iVar7) goto LAB_006dc0ce;
            iVar5 = iVar5 + -1;
          } while (0 < iVar5);
        }
        _Dst[4] = iVar7;
        return _Dst;
      }
    }
  }
LAB_006dc0ce:
  memset(_Dst,0,0xb18);
  free(_Dst);
  return (undefined4 *)0x0;
}


/* FUN_006dc0f0 @ 006dc0f0  kind=gamemisc  attributed-by=none  size=234 */

void FUN_006dc0f0(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int local_8;
  
  iVar4 = 0;
  FUN_00401c40(param_2,*param_1,0x18);
  FUN_00401c40(param_2,param_1[1],0x18);
  FUN_00401c40(param_2,param_1[2] + -1,0x18);
  FUN_00401c40(param_2,param_1[3] + -1,6);
  FUN_00401c40(param_2,param_1[5],8);
  local_8 = 0;
  if (0 < (int)param_1[3]) {
    puVar5 = param_1 + 6;
    do {
      uVar2 = *puVar5;
      iVar3 = 0;
      uVar1 = uVar2;
      if (uVar2 == 0) {
LAB_006dc181:
        FUN_00401c40(param_2,uVar2,4);
      }
      else {
        do {
          iVar3 = iVar3 + 1;
          uVar1 = uVar1 >> 1;
        } while (uVar1 != 0);
        if (iVar3 < 4) goto LAB_006dc181;
        FUN_00401c40(param_2,uVar2,3);
        FUN_00401c40(param_2,1,1);
        FUN_00401c40(param_2,(int)*puVar5 >> 3,5);
      }
      iVar3 = 0;
      for (uVar2 = *puVar5; uVar2 != 0; uVar2 = uVar2 >> 1) {
        iVar3 = iVar3 + (uVar2 & 1);
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + iVar3;
      puVar5 = puVar5 + 1;
    } while (local_8 < (int)param_1[3]);
  }
  if (0 < iVar4) {
    param_1 = param_1 + 0x46;
    do {
      FUN_00401c40(param_2,*param_1,8);
      param_1 = param_1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


/* FUN_006dc210 @ 006dc210  kind=gamemisc  attributed-by=none  size=112 */

void FUN_006dc210(void *param_1)

{
  void *_Memory;
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = 0;
    if (0 < *(int *)((int)param_1 + 4)) {
      do {
        _Memory = *(void **)(*(int *)((int)param_1 + 0x14) + iVar1 * 4);
        if (_Memory != (void *)0x0) {
          free(_Memory);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((int)param_1 + 4));
    }
    free(*(void **)((int)param_1 + 0x14));
    iVar1 = 0;
    if (0 < *(int *)((int)param_1 + 0x18)) {
      do {
        free(*(void **)(*(int *)((int)param_1 + 0x1c) + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((int)param_1 + 0x18));
    }
    free(*(void **)((int)param_1 + 0x1c));
    memset(param_1,0,0x2c);
    free(param_1);
  }
  return;
}


/* FUN_006dc280 @ 006dc280  kind=gamemisc  attributed-by=none  size=37 */

void FUN_006dc280(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xb18);
    free(param_1);
  }
  return;
}


/* FUN_006dc2b0 @ 006dc2b0  kind=gamemisc  attributed-by=none  size=763 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_006dc2b0(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 uStack_40;
  int *local_1c;
  uint *local_10;
  
  iVar3 = *(int *)(param_1[0x10] + 4);
  iVar23 = *(int *)(param_1[0x10] + 0x68);
  iVar4 = *(int *)(iVar3 + 0x1c);
  uVar5 = *(uint *)(iVar4 + param_1[7] * 4);
  param_1[9] = uVar5;
  iVar6 = *(int *)(iVar3 + 4);
  uStack_40 = 0x6dc2ee;
  local_10 = (uint *)(&stack0xffffffc4 + iVar6 * -0xc);
  puVar20 = &stack0xffffffc4 + iVar6 * -0x10;
  puVar15 = &stack0xffffffc4 + iVar6 * -0x10;
  (&uStack_40)[-iVar6] = 0x6dc2f8;
  (&uStack_40)[iVar6 * -2] = 0x6dc302;
  (&uStack_40)[iVar6 * -3] = 0x6dc30e;
  iVar21 = 0;
  if (0 < iVar6) {
    do {
      puVar7 = (&PTR_DAT_00737958)[*(int *)(iVar4 + 800 + param_2[param_2[iVar21 + 1] + 0x101] * 4)]
      ;
      *(undefined4 *)(puVar15 + -4) =
           *(undefined4 *)(*(int *)(iVar23 + 0x30) + param_2[param_2[iVar21 + 1] + 0x101] * 4);
      pcVar8 = *(code **)(puVar7 + 0x14);
      *(int **)(puVar15 + -8) = param_1;
      puVar16 = puVar15 + -0xc;
      *(undefined4 *)(puVar15 + -0xc) = 0x6dc36b;
      uVar9 = (*pcVar8)();
      *(uint *)(puVar16 + -4) = (uVar5 & 0x3fffffff) << 1;
      local_10[-iVar6] = uVar9;
      *(undefined4 *)(puVar16 + -8) = 0;
      *local_10 = (uint)(uVar9 != 0);
      *(undefined4 *)(puVar16 + -0xc) = *(undefined4 *)(*param_1 + iVar21 * 4);
      *(undefined4 *)(puVar16 + -0x10) = 0x6dc38c;
      memset(*(void **)(puVar16 + -0xc),*(int *)(puVar16 + -8),*(size_t *)(puVar16 + -4));
      local_10 = local_10 + 1;
      iVar21 = iVar21 + 1;
      puVar15 = puVar16 + 8;
      puVar20 = puVar16 + 8;
    } while (iVar21 < *(int *)(iVar3 + 4));
  }
  iVar21 = 0;
  if (0 < param_2[0x121]) {
    piVar11 = param_2 + 0x222;
    do {
      if ((*(int *)(&stack0xffffffc4 + piVar11[-0x100] * 4 + iVar6 * -0xc) != 0) ||
         (*(int *)(&stack0xffffffc4 + *piVar11 * 4 + iVar6 * -0xc) != 0)) {
        *(undefined4 *)(&stack0xffffffc4 + piVar11[-0x100] * 4 + iVar6 * -0xc) = 1;
        *(undefined4 *)(&stack0xffffffc4 + *piVar11 * 4 + iVar6 * -0xc) = 1;
      }
      iVar21 = iVar21 + 1;
      piVar11 = piVar11 + 1;
    } while (iVar21 < param_2[0x121]);
  }
  local_10 = (uint *)0x0;
  if (0 < *param_2) {
    local_1c = param_2 + 0x111;
    puVar18 = puVar20;
    do {
      iVar21 = 0;
      iVar22 = 0;
      puVar13 = (uint *)(&stack0xffffffc4 + iVar6 * -8);
      if (0 < *(int *)(iVar3 + 4)) {
        do {
          puVar14 = puVar13;
          if ((uint *)param_2[iVar21 + 1] == local_10) {
            iVar22 = iVar22 + 1;
            puVar14 = puVar13 + 1;
            *puVar13 = (uint)(*(int *)(&stack0xffffffc4 + iVar21 * 4 + iVar6 * -0xc) != 0);
            puVar14[iVar6 + -1] = *(uint *)(*param_1 + iVar21 * 4);
          }
          iVar21 = iVar21 + 1;
          puVar13 = puVar14;
        } while (iVar21 < *(int *)(iVar3 + 4));
      }
      iVar21 = *local_1c;
      *(int *)(puVar18 + -4) = iVar22;
      iVar22 = *(int *)(iVar4 + 0x520 + iVar21 * 4);
      *(undefined1 **)(puVar18 + -8) = &stack0xffffffc4 + iVar6 * -8;
      puVar7 = (&PTR_DAT_00737948)[iVar22];
      *(undefined1 **)(puVar18 + -0xc) = &stack0xffffffc4 + iVar6 * -4;
      *(undefined4 *)(puVar18 + -0x10) = *(undefined4 *)(*(int *)(iVar23 + 0x34) + iVar21 * 4);
      pcVar8 = *(code **)(puVar7 + 0x1c);
      *(int **)(puVar18 + -0x14) = param_1;
      puVar17 = puVar18 + -0x18;
      *(undefined4 *)(puVar18 + -0x18) = 0x6dc476;
      (*pcVar8)();
      local_1c = local_1c + 1;
      local_10 = (uint *)((int)local_10 + 1);
      puVar20 = puVar17 + 0x14;
      puVar18 = puVar17 + 0x14;
    } while ((int)local_10 < *param_2);
  }
  iVar21 = param_2[0x121] + -1;
  if (-1 < iVar21) {
    piVar11 = param_2 + param_2[0x121] + 0x221;
    do {
      pfVar12 = *(float **)(*param_1 + piVar11[-0x100] * 4);
      if (0 < (int)uVar5 / 2) {
        iVar10 = *(int *)(*param_1 + *piVar11 * 4) - (int)pfVar12;
        iVar22 = (int)uVar5 / 2;
        do {
          fVar1 = *pfVar12;
          fVar2 = *(float *)(iVar10 + (int)pfVar12);
          if (fVar1 <= 0.0) {
            if (fVar2 <= 0.0) {
              *(float *)(iVar10 + (int)pfVar12) = fVar1;
              *pfVar12 = fVar1 - fVar2;
            }
            else {
              *(float *)(iVar10 + (int)pfVar12) = fVar2 + fVar1;
            }
          }
          else if (fVar2 <= 0.0) {
            *(float *)(iVar10 + (int)pfVar12) = fVar1;
            *pfVar12 = fVar2 + fVar1;
          }
          else {
            *(float *)(iVar10 + (int)pfVar12) = fVar1 - fVar2;
          }
          pfVar12 = pfVar12 + 1;
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      piVar11 = piVar11 + -1;
      iVar21 = iVar21 + -1;
    } while (-1 < iVar21);
  }
  iVar21 = 0;
  puVar18 = puVar20;
  if (0 < *(int *)(iVar3 + 4)) {
    do {
      iVar22 = param_2[param_2[iVar21 + 1] + 0x101];
      puVar7 = (&PTR_DAT_00737958)[*(int *)(iVar4 + 800 + iVar22 * 4)];
      *(undefined4 *)(puVar18 + -4) = *(undefined4 *)(*param_1 + iVar21 * 4);
      *(undefined4 *)(puVar18 + -8) = *(undefined4 *)(&stack0xffffffc4 + iVar21 * 4 + iVar6 * -0x10)
      ;
      *(undefined4 *)(puVar18 + -0xc) = *(undefined4 *)(*(int *)(iVar23 + 0x30) + iVar22 * 4);
      pcVar8 = *(code **)(puVar7 + 0x18);
      *(int **)(puVar18 + -0x10) = param_1;
      puVar19 = puVar18 + -0x14;
      *(undefined4 *)(puVar18 + -0x14) = 0x6dc576;
      (*pcVar8)();
      iVar21 = iVar21 + 1;
      puVar20 = puVar19 + 0x10;
      puVar18 = puVar19 + 0x10;
    } while (iVar21 < *(int *)(iVar3 + 4));
  }
  iVar23 = 0;
  if (0 < *(int *)(iVar3 + 4)) {
    do {
      *(undefined4 *)(puVar20 + -4) = *(undefined4 *)(*param_1 + iVar23 * 4);
      *(undefined4 *)(puVar20 + -8) = 0x6dc5a7;
      FUN_006d8990();
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(iVar3 + 4));
  }
  return 0;
}


/* FUN_006dc5c0 @ 006dc5c0  kind=gamemisc  attributed-by=none  size=3811 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_006dc5c0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  bool bVar11;
  int *piVar12;
  code *pcVar13;
  int iVar14;
  void *pvVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int *piVar23;
  int *piVar24;
  int iVar25;
  float *pfVar26;
  int iVar27;
  int iVar28;
  float *pfVar29;
  undefined4 *puVar30;
  int iVar31;
  undefined4 *puVar32;
  int iVar33;
  uint *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  size_t asStack_84 [2];
  int local_58;
  int local_50;
  float local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_28;
  
  iVar4 = *(int *)(param_1[0x10] + 4);
  iVar5 = *(int *)(param_1[0x10] + 0x68);
  iVar14 = *(int *)(iVar4 + 4);
  iVar6 = *(int *)(iVar4 + 0x1c);
  iVar7 = param_1[0x1a];
  iVar18 = param_1[9];
  asStack_84[1] = 0x6dc5fa;
  iVar10 = iVar14 * -4;
  puVar37 = &stack0xffffff84 + iVar10;
  puVar35 = &stack0xffffff84 + iVar10;
  uVar42 = iVar14 * 4 + 7U & 0xfffffff8;
  if (param_1[0x13] < (int)(param_1[0x12] + uVar42)) {
    pcVar13 = malloc_exref;
    if (param_1[0x11] != 0) {
      asStack_84[1 - iVar14] = 8;
      asStack_84[-iVar14] = 0x6dc61c;
      piVar12 = malloc(asStack_84[1 - iVar14]);
      puVar35 = &stack0xffffff84 + iVar10;
      param_1[0x14] = param_1[0x14] + param_1[0x12];
      piVar12[1] = param_1[0x15];
      *piVar12 = param_1[0x11];
      pcVar13 = malloc_exref;
      param_1[0x15] = (int)piVar12;
    }
    *(uint *)(puVar35 + -4) = uVar42;
    param_1[0x13] = uVar42;
    puVar36 = puVar35 + -8;
    *(undefined4 *)(puVar35 + -8) = 0x6dc640;
    iVar14 = (*pcVar13)();
    puVar37 = puVar36 + 4;
    param_1[0x11] = iVar14;
    param_1[0x12] = 0;
  }
  iVar14 = param_1[0x11] + param_1[0x12];
  iVar1 = param_1[0x12] + uVar42;
  param_1[0x12] = iVar1;
  uVar42 = *(int *)(iVar4 + 4) * 4 + 7U & 0xfffffff8;
  if (param_1[0x13] < (int)(iVar1 + uVar42)) {
    if (param_1[0x11] != 0) {
      *(undefined4 *)(puVar37 + -4) = 8;
      *(undefined4 *)(puVar37 + -8) = 0x6dc683;
      piVar12 = malloc(*(size_t *)(puVar37 + -4));
      param_1[0x14] = param_1[0x14] + iVar1;
      piVar12[1] = param_1[0x15];
      *piVar12 = param_1[0x11];
      param_1[0x15] = (int)piVar12;
    }
    *(uint *)(puVar37 + -4) = uVar42;
    param_1[0x13] = uVar42;
    *(undefined4 *)(puVar37 + -8) = 0x6dc6a6;
    pvVar15 = malloc(*(size_t *)(puVar37 + -4));
    param_1[0x11] = (int)pvVar15;
    param_1[0x12] = 0;
  }
  puVar2 = (undefined4 *)(param_1[0x11] + param_1[0x12]);
  iVar1 = param_1[0x12] + uVar42;
  param_1[0x12] = iVar1;
  uVar42 = *(int *)(iVar4 + 4) * 4 + 7U & 0xfffffff8;
  if (param_1[0x13] < (int)(iVar1 + uVar42)) {
    if (param_1[0x11] != 0) {
      *(undefined4 *)(puVar37 + -4) = 8;
      *(undefined4 *)(puVar37 + -8) = 0x6dc6e9;
      piVar12 = malloc(*(size_t *)(puVar37 + -4));
      param_1[0x14] = param_1[0x14] + iVar1;
      piVar12[1] = param_1[0x15];
      *piVar12 = param_1[0x11];
      param_1[0x15] = (int)piVar12;
    }
    *(uint *)(puVar37 + -4) = uVar42;
    param_1[0x13] = uVar42;
    *(undefined4 *)(puVar37 + -8) = 0x6dc70c;
    pvVar15 = malloc(*(size_t *)(puVar37 + -4));
    param_1[0x11] = (int)pvVar15;
    param_1[0x12] = 0;
  }
  piVar23 = (int *)(param_1[0x11] + param_1[0x12]);
  param_1[0x12] = param_1[0x12] + uVar42;
  local_40 = *(float *)(iVar7 + 4);
  iVar1 = *(int *)(iVar4 + 4);
  *(undefined4 *)(puVar37 + -4) = 0x6dc741;
  iVar1 = iVar1 * -4;
  pfVar26 = (float *)(puVar37 + iVar1);
  iVar8 = param_1[7];
  piVar12 = *(int **)(iVar6 + 0x220 + iVar8 * 4);
  piVar24 = (int *)(((-(uint)(iVar8 != 0) & 2) + *(int *)(iVar7 + 8)) * 0x34 +
                   *(int *)(iVar5 + 0x38));
  param_1[10] = iVar8;
  local_34 = 0;
  if (0 < *(int *)(iVar4 + 4)) {
    uVar42 = (iVar18 / 2) * 4 + 7U & 0xfffffff8;
    iVar16 = iVar14 - (int)(puVar37 + iVar1);
    do {
      pfVar29 = *(float **)(*param_1 + local_34 * 4);
      if (param_1[0x13] < (int)(param_1[0x12] + uVar42)) {
        if (param_1[0x11] != 0) {
          *(undefined4 *)(puVar37 + iVar1 + -4) = 8;
          *(undefined4 *)(puVar37 + iVar1 + -8) = 0x6dc7f0;
          piVar17 = malloc(*(size_t *)(puVar37 + iVar1 + -4));
          param_1[0x14] = param_1[0x14] + param_1[0x12];
          piVar17[1] = param_1[0x15];
          *piVar17 = param_1[0x11];
          param_1[0x15] = (int)piVar17;
        }
        *(uint *)(puVar37 + iVar1 + -4) = uVar42;
        param_1[0x13] = uVar42;
        *(undefined4 *)(puVar37 + iVar1 + -8) = 0x6dc816;
        pvVar15 = malloc(*(size_t *)(puVar37 + iVar1 + -4));
        param_1[0x11] = (int)pvVar15;
        param_1[0x12] = 0;
      }
      iVar25 = param_1[0x12];
      param_1[0x12] = iVar25 + uVar42;
      *(int *)((int)puVar2 + (int)pfVar26 + (iVar16 - iVar14)) = param_1[0x11] + iVar25;
      if (param_1[0x13] < (int)(param_1[0x12] + uVar42)) {
        if (param_1[0x11] != 0) {
          *(undefined4 *)(puVar37 + iVar1 + -4) = 8;
          *(undefined4 *)(puVar37 + iVar1 + -8) = 0x6dc859;
          piVar17 = malloc(*(size_t *)(puVar37 + iVar1 + -4));
          param_1[0x14] = param_1[0x14] + param_1[0x12];
          piVar17[1] = param_1[0x15];
          *piVar17 = param_1[0x11];
          param_1[0x15] = (int)piVar17;
        }
        *(uint *)(puVar37 + iVar1 + -4) = uVar42;
        param_1[0x13] = uVar42;
        *(undefined4 *)(puVar37 + iVar1 + -8) = 0x6dc87f;
        pvVar15 = malloc(*(size_t *)(puVar37 + iVar1 + -4));
        param_1[0x11] = (int)pvVar15;
        param_1[0x12] = 0;
      }
      iVar25 = param_1[0x12];
      param_1[0x12] = iVar25 + uVar42;
      *(int *)(iVar16 + (int)pfVar26) = param_1[0x11] + iVar25;
      *(int *)(puVar37 + iVar1 + -4) = param_1[8];
      *(int *)(puVar37 + iVar1 + -8) = param_1[7];
      *(int *)(puVar37 + iVar1 + -0xc) = param_1[6];
      *(int *)(puVar37 + iVar1 + -0x10) = iVar6;
      fVar3 = (((float)(int)ABS(4.0 / (float)iVar18) + 0.0) * 7.1771143e-07 - 764.6162) + 0.345;
      *(undefined4 *)(puVar37 + iVar1 + -0x14) = 0x6dc90a;
      FUN_006da4e0();
      *(undefined4 *)(puVar37 + iVar1 + -0x14) = *(undefined4 *)(iVar16 + (int)pfVar26);
      *(undefined4 *)(puVar37 + iVar1 + -0x18) = 0x6dc924;
      FUN_006d9f50();
      iVar25 = param_1[7];
      iVar31 = *(int *)(iVar5 + 0x14 + iVar25 * 0xc);
      if (iVar31 != 1) {
        iVar33 = *(int *)(iVar5 + 0x18 + iVar25 * 0xc);
        *(undefined4 *)(puVar37 + iVar1 + -4) = *(undefined4 *)(iVar5 + 0x1c + iVar25 * 0xc);
        *(int *)(puVar37 + iVar1 + -8) = iVar33 + iVar31 * 4;
        *(int *)(puVar37 + iVar1 + -0xc) = iVar33;
        *(undefined4 *)(puVar37 + iVar1 + -0x10) = 0x6dc951;
        FUN_006d6eb0();
      }
      iVar25 = 1;
      fVar44 = (((float)(int)ABS(*pfVar29) + 0.0) * 7.1771143e-07 - 764.6162) + fVar3 + 0.345;
      *pfVar29 = fVar44;
      *pfVar26 = fVar44;
      if (1 < iVar18 + -1) {
        do {
          fVar44 = (((float)(int)ABS(pfVar29[iVar25 + 1] * pfVar29[iVar25 + 1] +
                                     pfVar29[iVar25] * pfVar29[iVar25]) + 0.0) * 7.1771143e-07 -
                   764.6162) * 0.5 + fVar3 + 0.345;
          pfVar29[iVar25 + 1 >> 1] = fVar44;
          if (*pfVar26 <= fVar44 && fVar44 != *pfVar26) {
            *pfVar26 = fVar44;
          }
          iVar25 = iVar25 + 2;
        } while (iVar25 < iVar18 + -1);
      }
      if (0.0 < *pfVar26) {
        *pfVar26 = 0.0;
      }
      if (local_40 < *pfVar26) {
        local_40 = *pfVar26;
      }
      local_34 = local_34 + 1;
      pfVar26 = pfVar26 + 1;
    } while (local_34 < *(int *)(iVar4 + 4));
  }
  iVar18 = iVar18 / 2;
  uVar42 = iVar18 * 4 + 7U & 0xfffffff8;
  if (param_1[0x13] < (int)(param_1[0x12] + uVar42)) {
    if (param_1[0x11] != 0) {
      *(undefined4 *)(puVar37 + iVar1 + -4) = 8;
      *(undefined4 *)(puVar37 + iVar1 + -8) = 0x6dcab0;
      piVar17 = malloc(*(size_t *)(puVar37 + iVar1 + -4));
      param_1[0x14] = param_1[0x14] + param_1[0x12];
      piVar17[1] = param_1[0x15];
      *piVar17 = param_1[0x11];
      param_1[0x15] = (int)piVar17;
    }
    *(uint *)(puVar37 + iVar1 + -4) = uVar42;
    param_1[0x13] = uVar42;
    *(undefined4 *)(puVar37 + iVar1 + -8) = 0x6dcad4;
    pvVar15 = malloc(*(size_t *)(puVar37 + iVar1 + -4));
    param_1[0x11] = (int)pvVar15;
    param_1[0x12] = 0;
  }
  iVar16 = param_1[0x11] + param_1[0x12];
  iVar25 = param_1[0x12] + uVar42;
  param_1[0x12] = iVar25;
  if (param_1[0x13] < (int)(iVar25 + uVar42)) {
    if (param_1[0x11] != 0) {
      *(undefined4 *)(puVar37 + iVar1 + -4) = 8;
      *(undefined4 *)(puVar37 + iVar1 + -8) = 0x6dcb0e;
      piVar17 = malloc(*(size_t *)(puVar37 + iVar1 + -4));
      param_1[0x14] = param_1[0x14] + iVar25;
      piVar17[1] = param_1[0x15];
      *piVar17 = param_1[0x11];
      param_1[0x15] = (int)piVar17;
    }
    *(uint *)(puVar37 + iVar1 + -4) = uVar42;
    param_1[0x13] = uVar42;
    *(undefined4 *)(puVar37 + iVar1 + -8) = 0x6dcb32;
    pvVar15 = malloc(*(size_t *)(puVar37 + iVar1 + -4));
    param_1[0x11] = (int)pvVar15;
    param_1[0x12] = 0;
  }
  pfVar26 = (float *)(param_1[0x11] + param_1[0x12]);
  param_1[0x12] = param_1[0x12] + uVar42;
  local_58 = 0;
  if (0 < *(int *)(iVar4 + 4)) {
    piVar17 = piVar23;
    do {
      iVar25 = piVar12[local_58 + 1];
      iVar31 = *(int *)((iVar14 - (int)(puVar37 + iVar1)) +
                       (int)(puVar37 + (iVar1 - (int)piVar23) + (int)piVar17));
      iVar33 = *(int *)(*param_1 + local_58 * 4);
      param_1[10] = iVar8;
      if (param_1[0x13] < param_1[0x12] + 0x40) {
        if (param_1[0x11] != 0) {
          *(undefined4 *)(puVar37 + iVar1 + -4) = 8;
          *(undefined4 *)(puVar37 + iVar1 + -8) = 0x6dcbb6;
          piVar19 = malloc(*(size_t *)(puVar37 + iVar1 + -4));
          param_1[0x14] = param_1[0x14] + param_1[0x12];
          piVar19[1] = param_1[0x15];
          *piVar19 = param_1[0x11];
          param_1[0x15] = (int)piVar19;
        }
        *(undefined4 *)(puVar37 + iVar1 + -4) = 0x40;
        param_1[0x13] = 0x40;
        *(undefined4 *)(puVar37 + iVar1 + -8) = 0x6dcbdc;
        pvVar15 = malloc(*(size_t *)(puVar37 + iVar1 + -4));
        param_1[0x11] = (int)pvVar15;
        param_1[0x12] = 0;
      }
      iVar20 = param_1[0x12];
      iVar27 = param_1[0x11] + iVar20;
      *(undefined4 *)(puVar37 + iVar1 + -4) = 0x3c;
      *(undefined4 *)(puVar37 + iVar1 + -8) = 0;
      param_1[0x12] = iVar20 + 0x40;
      *(int *)(puVar37 + iVar1 + -0xc) = iVar27;
      *piVar17 = iVar27;
      *(undefined4 *)(puVar37 + iVar1 + -0x10) = 0x6dcc06;
      memset(*(void **)(puVar37 + iVar1 + -0xc),*(int *)(puVar37 + iVar1 + -8),
             *(size_t *)(puVar37 + iVar1 + -4));
      iVar20 = 0;
      if (3 < iVar18) {
        iVar27 = iVar33 + iVar18 * 4;
        iVar28 = (iVar18 - 4U >> 2) + 1;
        iVar20 = iVar28 * 4;
        pfVar29 = (float *)(iVar27 + 4);
        puVar34 = (uint *)(iVar31 + 0xc);
        do {
          pfVar29[-1] = (((float)(puVar34[-3] & 0x7fffffff) + 0.0) * 7.1771143e-07 - 764.6162) +
                        0.345;
          *pfVar29 = (((float)(*(uint *)((iVar31 - iVar27) + -0x10 + (int)(pfVar29 + 4)) &
                              0x7fffffff) + 0.0) * 7.1771143e-07 - 764.6162) + 0.345;
          pfVar29[1] = (((float)(puVar34[-1] & 0x7fffffff) + 0.0) * 7.1771143e-07 - 764.6162) +
                       0.345;
          pfVar29[2] = (((float)(*puVar34 & 0x7fffffff) + 0.0) * 7.1771143e-07 - 764.6162) + 0.345;
          iVar28 = iVar28 + -1;
          pfVar29 = pfVar29 + 4;
          puVar34 = puVar34 + 4;
        } while (iVar28 != 0);
      }
      if (iVar20 < iVar18) {
        iVar27 = iVar33 + iVar18 * 4;
        iVar28 = iVar18 - iVar20;
        pfVar29 = (float *)(iVar27 + iVar20 * 4);
        do {
          *pfVar29 = (((float)(*(uint *)((int)pfVar29 + (iVar31 - iVar27)) & 0x7fffffff) + 0.0) *
                      7.1771143e-07 - 764.6162) + 0.345;
          iVar28 = iVar28 + -1;
          pfVar29 = pfVar29 + 1;
        } while (iVar28 != 0);
      }
      *(int *)(puVar37 + iVar1 + -4) = iVar16;
      *(undefined4 *)(puVar37 + iVar1 + -8) = 0x6dcdff;
      FUN_006d4b20();
      *(undefined4 *)(puVar37 + iVar1 + -4) =
           *(undefined4 *)(puVar37 + (iVar1 - (int)piVar23) + (int)piVar17);
      *(float **)(puVar37 + iVar1 + -8) = pfVar26;
      *(undefined4 *)(puVar37 + iVar1 + -0xc) = 0x6dce1e;
      FUN_006d49c0();
      iVar20 = *piVar24;
      fVar3 = (float)piVar24[0xc];
      fVar44 = *(float *)(piVar24[1] + 0x10);
      iVar27 = 0;
      if (0 < iVar20) {
        pfVar29 = pfVar26;
        do {
          fVar43 = *(float *)(*(int *)(piVar24[3] + 4) + iVar27 * 4) +
                   *(float *)((iVar16 - (int)pfVar26) + (int)pfVar29);
          if (*(float *)(piVar24[1] + 0x6c) < fVar43) {
            fVar43 = *(float *)(piVar24[1] + 0x6c);
          }
          fVar45 = fVar44 + *pfVar29;
          if (fVar45 < fVar43) {
            fVar45 = fVar43;
          }
          *(float *)((int)pfVar29 + (iVar33 - (int)pfVar26)) = fVar45;
          fVar43 = fVar43 - *(float *)((int)pfVar29 + ((iVar33 + iVar18 * 4) - (int)pfVar26));
          fVar45 = fVar43 - -17.2;
          if (fVar43 <= -17.2) {
            fVar43 = 1.0 - fVar45 * 0.0003 * fVar3;
          }
          else {
            fVar43 = 1.0 - fVar45 * 0.005 * fVar3;
            if (fVar43 < 0.0) {
              fVar43 = 0.0001;
            }
          }
          iVar27 = iVar27 + 1;
          *(float *)((int)pfVar29 + (iVar31 - (int)pfVar26)) =
               fVar43 * *(float *)((int)pfVar29 + (iVar31 - (int)pfVar26));
          pfVar29 = pfVar29 + 1;
        } while (iVar27 < iVar20);
      }
      if (*(int *)(iVar6 + 800 + piVar12[iVar25 + 0x101] * 4) != 1) {
        return 0xffffffff;
      }
      *(int *)(puVar37 + iVar1 + -4) = iVar33;
      *(int *)(puVar37 + iVar1 + -8) = iVar33 + iVar18 * 4;
      *(undefined4 *)(puVar37 + iVar1 + -0xc) = 0x6dcf6b;
      uVar21 = FUN_006deed0();
      *(undefined4 *)(*piVar17 + 0x1c) = uVar21;
      *(undefined4 *)(puVar37 + iVar1 + -4) = 0x6dcf7d;
      uVar46 = FUN_006da4b0();
      piVar19 = (int *)((ulonglong)uVar46 >> 0x20);
      if (((int)uVar46 != 0) && (*(int *)(*piVar19 + 0x1c) != 0)) {
        iVar31 = 0;
        iVar25 = *piVar24;
        fVar3 = *(float *)(piVar24[1] + 0x14);
        if (0 < iVar25) {
          pfVar29 = pfVar26;
          do {
            fVar44 = *(float *)(*(int *)(piVar24[3] + 8) + iVar31 * 4) +
                     *(float *)((iVar16 - (int)pfVar26) + (int)pfVar29);
            if (*(float *)(piVar24[1] + 0x6c) < fVar44) {
              fVar44 = *(float *)(piVar24[1] + 0x6c);
            }
            fVar43 = fVar3 + *pfVar29;
            if (fVar44 <= fVar43) {
              fVar44 = fVar43;
            }
            *(float *)((int)pfVar29 + (iVar33 - (int)pfVar26)) = fVar44;
            iVar31 = iVar31 + 1;
            pfVar29 = pfVar29 + 1;
          } while (iVar31 < iVar25);
        }
        *(int *)(puVar37 + iVar1 + -4) = iVar33;
        *(int *)(puVar37 + iVar1 + -8) = iVar33 + iVar18 * 4;
        *(undefined4 *)(puVar37 + iVar1 + -0xc) = 0x6dd034;
        uVar21 = FUN_006deed0();
        iVar31 = 0;
        *(undefined4 *)(*piVar17 + 0x38) = uVar21;
        iVar25 = *piVar24;
        fVar3 = *(float *)(piVar24[1] + 0xc);
        if (0 < iVar25) {
          pfVar29 = pfVar26;
          do {
            fVar44 = *(float *)(*(int *)piVar24[3] + iVar31 * 4) +
                     *(float *)((iVar16 - (int)pfVar26) + (int)pfVar29);
            if (*(float *)(piVar24[1] + 0x6c) < fVar44) {
              fVar44 = *(float *)(piVar24[1] + 0x6c);
            }
            fVar43 = fVar3 + *pfVar29;
            if (fVar44 <= fVar43) {
              fVar44 = fVar43;
            }
            *(float *)((int)pfVar29 + (iVar33 - (int)pfVar26)) = fVar44;
            iVar31 = iVar31 + 1;
            pfVar29 = pfVar29 + 1;
          } while (iVar31 < iVar25);
        }
        *(int *)(puVar37 + iVar1 + -4) = iVar33;
        *(int *)(puVar37 + iVar1 + -8) = iVar33 + iVar18 * 4;
        *(undefined4 *)(puVar37 + iVar1 + -0xc) = 0x6dd0de;
        uVar21 = FUN_006deed0();
        local_50 = 4;
        *(undefined4 *)*piVar17 = uVar21;
        iVar25 = 0x10000;
        do {
          puVar30 = (undefined4 *)*piVar17;
          *(int *)(puVar37 + iVar1 + -4) = iVar25 / 7;
          *(undefined4 *)(puVar37 + iVar1 + -8) = puVar30[7];
          *(undefined4 *)(puVar37 + iVar1 + -0xc) = *puVar30;
          *(undefined4 *)(puVar37 + iVar1 + -0x10) = 0x6dd12c;
          uVar21 = FUN_006df4c0();
          *(undefined4 *)(local_50 + *piVar17) = uVar21;
          iVar25 = iVar25 + 0x10000;
          local_50 = local_50 + 4;
        } while (iVar25 < 0x70000);
        iVar25 = 0x20;
        iVar31 = 0x10000;
        do {
          iVar33 = *piVar17;
          *(int *)(puVar37 + iVar1 + -4) = iVar31 / 7;
          *(undefined4 *)(puVar37 + iVar1 + -8) = *(undefined4 *)(iVar33 + 0x38);
          *(undefined4 *)(puVar37 + iVar1 + -0xc) = *(undefined4 *)(iVar33 + 0x1c);
          *(undefined4 *)(puVar37 + iVar1 + -0x10) = 0x6dd199;
          uVar21 = FUN_006df4c0();
          iVar31 = iVar31 + 0x10000;
          *(undefined4 *)(iVar25 + *piVar17) = uVar21;
          iVar25 = iVar25 + 4;
          piVar19 = piVar17;
        } while (iVar31 < 0x70000);
      }
      local_58 = local_58 + 1;
      piVar17 = piVar19 + 1;
    } while (local_58 < *(int *)(iVar4 + 4));
  }
  *(float *)(iVar7 + 4) = local_40;
  iVar18 = *(int *)(iVar4 + 4);
  *(undefined4 *)(puVar37 + iVar1 + -4) = 0x6dd1eb;
  iVar16 = iVar18 * -4;
  *(undefined4 *)(puVar37 + iVar16 + iVar1 + -4) = 0x6dd1f5;
  piVar17 = (int *)(*(int *)(param_1[0x10] + 0x68) + 0x50);
  if ((piVar17 == (int *)0x0) || (*piVar17 == 0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  local_3c = 7;
  if (bVar11) {
    local_3c = 0;
  }
  *(undefined4 *)(puVar37 + iVar18 * -8 + iVar1 + -4) = 0x6dd234;
  iVar25 = FUN_006da4b0();
  puVar38 = puVar37 + iVar18 * -8 + iVar1;
  if (local_3c <= (-(uint)(iVar25 != 0) & 7) + 7) {
    do {
      *(undefined4 *)(puVar38 + -4) = 1;
      uVar21 = *(undefined4 *)(iVar7 + 0xc + local_3c * 4);
      *(undefined4 *)(puVar38 + -8) = 0;
      *(undefined4 *)(puVar38 + -0xc) = uVar21;
      *(undefined4 *)(puVar38 + -0x10) = 0x6dd25a;
      FUN_00401c40();
      *(undefined4 *)(puVar38 + -0x10) = *(undefined4 *)(iVar5 + 0x2c);
      *(int *)(puVar38 + -0x14) = iVar8;
      *(undefined4 *)(puVar38 + -0x18) = uVar21;
      *(undefined4 *)(puVar38 + -0x1c) = 0x6dd269;
      FUN_00401c40();
      if (param_1[7] != 0) {
        *(undefined4 *)(puVar38 + -4) = 1;
        *(int *)(puVar38 + -8) = param_1[6];
        *(undefined4 *)(puVar38 + -0xc) = uVar21;
        *(undefined4 *)(puVar38 + -0x10) = 0x6dd27d;
        FUN_00401c40();
        *(undefined4 *)(puVar38 + -0x10) = 1;
        *(int *)(puVar38 + -0x14) = param_1[8];
        *(undefined4 *)(puVar38 + -0x18) = uVar21;
        *(undefined4 *)(puVar38 + -0x1c) = 0x6dd288;
        FUN_00401c40();
      }
      local_58 = 0;
      if (0 < *(int *)(iVar4 + 4)) {
        piVar17 = piVar23;
        piVar19 = piVar12;
        do {
          piVar19 = piVar19 + 1;
          *(undefined4 *)(puVar38 + -4) =
               *(undefined4 *)(((int)puVar2 - (int)piVar23) + (int)piVar17);
          iVar25 = *piVar19;
          *(undefined4 *)(puVar38 + -8) = *(undefined4 *)(*piVar17 + local_3c * 4);
          *(undefined4 *)(puVar38 + -0xc) =
               *(undefined4 *)(*(int *)(iVar5 + 0x30) + piVar12[iVar25 + 0x101] * 4);
          *(undefined4 *)(puVar38 + -0x10) = 0x6dd2de;
          uVar22 = FUN_006df570();
          *(undefined4 *)(&stack0xffffff84 + (iVar10 - (int)piVar23) + (int)piVar17) = uVar22;
          local_58 = local_58 + 1;
          piVar17 = piVar17 + 1;
        } while (local_58 < *(int *)(iVar4 + 4));
      }
      iVar25 = param_1[7];
      *(undefined4 *)(puVar38 + -4) = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(puVar38 + -8) =
           *(undefined4 *)(iVar6 + ((iVar25 + 0x36) * 0xf + local_3c) * 4);
      *(undefined1 **)(puVar38 + -0xc) = &stack0xffffff84 + iVar10;
      *(undefined4 **)(puVar38 + -0x10) = puVar2;
      *(int *)(puVar38 + -0x14) = iVar14;
      *(int **)(puVar38 + -0x18) = piVar12;
      *(int **)(puVar38 + -0x1c) = piVar24;
      *(undefined4 *)(puVar38 + -0x20) = 0x6dd339;
      FUN_006d3c20();
      local_28 = 0;
      puVar41 = puVar38;
      if (0 < *piVar12) {
        piVar17 = piVar12 + 0x111;
        do {
          iVar25 = *piVar17;
          iVar31 = 0;
          local_38 = 0;
          if (0 < *(int *)(iVar4 + 4)) {
            puVar30 = (undefined4 *)(puVar37 + iVar18 * -8 + iVar1);
            puVar32 = puVar2;
            piVar19 = piVar12;
            do {
              piVar19 = piVar19 + 1;
              if (*piVar19 == local_28) {
                *puVar30 = 0;
                uVar22 = *puVar30;
                if (*(int *)(&stack0xffffff84 + (iVar10 - (int)puVar2) + (int)puVar32) != 0) {
                  uVar22 = 1;
                }
                local_38 = local_38 + 1;
                *puVar30 = uVar22;
                puVar30[iVar18] = *puVar32;
                puVar30 = puVar30 + 1;
              }
              iVar31 = iVar31 + 1;
              puVar32 = puVar32 + 1;
            } while (iVar31 < *(int *)(iVar4 + 4));
          }
          *(int *)(puVar38 + -4) = local_38;
          iVar31 = *(int *)(iVar6 + 0x520 + iVar25 * 4);
          *(undefined1 **)(puVar38 + -8) = puVar37 + iVar18 * -8 + iVar1;
          puVar9 = (&PTR_DAT_00737948)[iVar31];
          *(undefined1 **)(puVar38 + -0xc) = puVar37 + iVar16 + iVar1;
          *(undefined4 *)(puVar38 + -0x10) = *(undefined4 *)(*(int *)(iVar5 + 0x34) + iVar25 * 4);
          pcVar13 = *(code **)(puVar9 + 0x14);
          *(int **)(puVar38 + -0x14) = param_1;
          puVar39 = puVar38 + -0x18;
          *(undefined4 *)(puVar38 + -0x18) = 0x6dd3f5;
          uVar22 = (*pcVar13)();
          iVar31 = 0;
          iVar33 = 0;
          piVar19 = piVar12;
          if (0 < *(int *)(iVar4 + 4)) {
            do {
              if (piVar19[1] == local_28) {
                iVar33 = iVar33 + 1;
                *(undefined4 *)(puVar37 + iVar33 * 4 + iVar16 + iVar1 + -4) = puVar2[iVar31];
              }
              iVar31 = iVar31 + 1;
              piVar19 = piVar19 + 1;
            } while (iVar31 < *(int *)(iVar4 + 4));
          }
          *(int *)(puVar39 + 0x10) = local_28;
          *(undefined4 *)(puVar39 + 0xc) = uVar22;
          iVar31 = *(int *)(iVar6 + 0x520 + iVar25 * 4);
          *(int *)(puVar39 + 8) = iVar33;
          puVar9 = (&PTR_DAT_00737948)[iVar31];
          *(undefined1 **)(puVar39 + 4) = puVar37 + iVar18 * -8 + iVar1;
          *(undefined1 **)puVar39 = puVar37 + iVar16 + iVar1;
          *(undefined4 *)(puVar39 + -4) = *(undefined4 *)(*(int *)(iVar5 + 0x34) + iVar25 * 4);
          pcVar13 = *(code **)(puVar9 + 0x18);
          *(int **)(puVar39 + -8) = param_1;
          *(undefined4 *)(puVar39 + -0xc) = uVar21;
          puVar40 = puVar39 + -0x10;
          *(undefined4 *)(puVar39 + -0x10) = 0x6dd462;
          (*pcVar13)();
          local_28 = local_28 + 1;
          piVar17 = piVar17 + 1;
          puVar38 = puVar40 + 0x20;
          puVar41 = puVar40 + 0x20;
        } while (local_28 < *piVar12);
      }
      local_3c = local_3c + 1;
      *(undefined4 *)(puVar41 + -4) = 0x6dd491;
      iVar25 = FUN_006da4b0();
      puVar38 = puVar41;
    } while ((int)local_3c <= (int)((-(uint)(iVar25 != 0) & 7) + 7));
  }
  return 0;
}


/* FUN_006dd4b0 @ 006dd4b0  kind=gamemisc  attributed-by=none  size=65 */

void FUN_006dd4b0(void)

{
  return;
}


/* FUN_006dd500 @ 006dd500  kind=gamemisc  attributed-by=none  size=533 */

int * FUN_006dd500(int param_1)

{
  int iVar1;
  int *_Dst;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int local_c;
  int *local_8;
  
  _Dst = calloc(1,0xc88);
  iVar1 = *(int *)(param_1 + 0x1c);
  memset(_Dst,0,0xc88);
  iVar2 = FUN_00401e80();
  if (-1 < iVar2) {
    if (iVar2 == 0) {
      *_Dst = 1;
    }
    else {
      iVar2 = FUN_00401e80();
      *_Dst = iVar2 + 1;
      if (iVar2 + 1 < 1) goto LAB_006dd559;
    }
    iVar2 = FUN_00401e80();
    if (-1 < iVar2) {
      if (iVar2 != 0) {
        iVar2 = FUN_00401e80();
        _Dst[0x121] = iVar2 + 1;
        if (iVar2 + 1 < 1) goto LAB_006dd559;
        local_8 = _Dst + 0x222;
        local_c = 0;
        do {
          if (*(int *)(param_1 + 4) != 0) {
            for (uVar3 = *(int *)(param_1 + 4) - 1; uVar3 != 0; uVar3 = uVar3 >> 1) {
            }
          }
          iVar2 = FUN_00401e80();
          local_8[-0x100] = iVar2;
          if (*(int *)(param_1 + 4) != 0) {
            for (uVar3 = *(int *)(param_1 + 4) - 1; uVar3 != 0; uVar3 = uVar3 >> 1) {
            }
          }
          iVar4 = FUN_00401e80();
          *local_8 = iVar4;
          if ((((iVar2 < 0) || (iVar4 < 0)) || (iVar2 == iVar4)) ||
             ((*(int *)(param_1 + 4) <= iVar2 || (*(int *)(param_1 + 4) <= iVar4))))
          goto LAB_006dd559;
          local_c = local_c + 1;
          local_8 = local_8 + 1;
        } while (local_c < _Dst[0x121]);
      }
      iVar2 = FUN_00401e80();
      if (iVar2 == 0) {
        if ((1 < *_Dst) && (iVar2 = 0, piVar5 = _Dst, 0 < *(int *)(param_1 + 4))) {
          do {
            iVar4 = FUN_00401e80();
            piVar5[1] = iVar4;
            if ((*_Dst <= iVar4) || (iVar4 < 0)) goto LAB_006dd559;
            iVar2 = iVar2 + 1;
            piVar5 = piVar5 + 1;
          } while (iVar2 < *(int *)(param_1 + 4));
        }
        iVar2 = 0;
        if (0 < *_Dst) {
          piVar5 = _Dst + 0x111;
          do {
            FUN_00401e80();
            iVar4 = FUN_00401e80();
            piVar5[-0x10] = iVar4;
            if ((*(int *)(iVar1 + 0x10) <= iVar4) || (iVar4 < 0)) goto LAB_006dd559;
            iVar4 = FUN_00401e80();
            *piVar5 = iVar4;
            if ((*(int *)(iVar1 + 0x14) <= iVar4) || (iVar4 < 0)) goto LAB_006dd559;
            iVar2 = iVar2 + 1;
            piVar5 = piVar5 + 1;
          } while (iVar2 < *_Dst);
        }
        return _Dst;
      }
    }
  }
LAB_006dd559:
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,0xc88);
    free(_Dst);
  }
  return (int *)0x0;
}


/* FUN_006dd730 @ 006dd730  kind=gamemisc  attributed-by=none  size=345 */

void FUN_006dd730(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  if (*param_2 < 2) {
    FUN_00401c40(param_3,0,1);
  }
  else {
    FUN_00401c40(param_3,1,1);
    FUN_00401c40(param_3,*param_2 + -1,4);
  }
  if (param_2[0x121] < 1) {
    FUN_00401c40(param_3,0,1);
  }
  else {
    FUN_00401c40(param_3,1,1);
    FUN_00401c40(param_3,param_2[0x121] + -1,8);
    local_8 = 0;
    if (0 < param_2[0x121]) {
      piVar3 = param_2 + 0x222;
      do {
        iVar2 = 0;
        if (*(int *)(param_1 + 4) != 0) {
          for (uVar1 = *(int *)(param_1 + 4) - 1; uVar1 != 0; uVar1 = uVar1 >> 1) {
            iVar2 = iVar2 + 1;
          }
        }
        FUN_00401c40(param_3,piVar3[-0x100],iVar2);
        iVar2 = 0;
        if (*(int *)(param_1 + 4) != 0) {
          for (uVar1 = *(int *)(param_1 + 4) - 1; uVar1 != 0; uVar1 = uVar1 >> 1) {
            iVar2 = iVar2 + 1;
          }
        }
        FUN_00401c40(param_3,*piVar3,iVar2);
        local_8 = local_8 + 1;
        piVar3 = piVar3 + 1;
      } while (local_8 < param_2[0x121]);
    }
  }
  FUN_00401c40(param_3,0,2);
  if ((1 < *param_2) && (iVar2 = 0, piVar3 = param_2, 0 < *(int *)(param_1 + 4))) {
    do {
      FUN_00401c40(param_3,piVar3[1],4);
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  iVar2 = 0;
  if (0 < *param_2) {
    piVar3 = param_2 + 0x111;
    do {
      FUN_00401c40(param_3,0,8);
      FUN_00401c40(param_3,piVar3[-0x10],8);
      FUN_00401c40(param_3,*piVar3,8);
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *param_2);
  }
  return;
}


/* FUN_006dd8b0 @ 006dd8b0  kind=gamemisc  attributed-by=none  size=37 */

void FUN_006dd8b0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xc88);
    free(param_1);
  }
  return;
}


/* FUN_006dd8e0 @ 006dd8e0  kind=gamemisc  attributed-by=none  size=428 */

undefined4 FUN_006dd8e0(int param_1,int param_2,int *param_3,void *param_4)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  iVar1 = *(int *)(param_2 + 0x510);
  iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c) +
                  *(int *)(param_1 + 0x1c) * 4) / 2;
  if (param_3 == (int *)0x0) {
    memset(param_4,0,iVar7 * 4);
    return 0;
  }
  iVar4 = *(int *)(iVar1 + 0x340) * *param_3;
  iVar8 = 0;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  local_8 = 1;
  if (1 < *(int *)(param_2 + 0x504)) {
    piVar2 = (int *)(param_2 + 0x108);
    iVar6 = iVar4;
    do {
      uVar5 = param_3[*piVar2] & 0x7fff;
      iVar4 = iVar6;
      if (uVar5 == param_3[*piVar2]) {
        iVar8 = *(int *)(iVar1 + 0x344 + *piVar2 * 4);
        iVar4 = *(int *)(iVar1 + 0x340) * uVar5;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (0xff < iVar4) {
          iVar4 = 0xff;
        }
        FUN_006de4d0(iVar8,iVar6,iVar4,param_4);
      }
      local_8 = local_8 + 1;
      piVar2 = piVar2 + 1;
      iVar6 = iVar4;
    } while (local_8 < *(int *)(param_2 + 0x504));
  }
  if (iVar8 < iVar7) {
    if (3 < iVar7 - iVar8) {
      iVar6 = ((iVar7 - iVar8) - 4U >> 2) + 1;
      iVar1 = iVar8 * 4;
      iVar8 = iVar8 + iVar6 * 4;
      pfVar3 = (float *)((int)param_4 + iVar1 + 8);
      do {
        pfVar3[-2] = (float)(&DAT_007454c0)[iVar4] * pfVar3[-2];
        pfVar3[-1] = pfVar3[-1] * (float)(&DAT_007454c0)[iVar4];
        *pfVar3 = (float)(&DAT_007454c0)[iVar4] * *pfVar3;
        pfVar3[1] = (float)(&DAT_007454c0)[iVar4] * pfVar3[1];
        iVar6 = iVar6 + -1;
        pfVar3 = pfVar3 + 4;
      } while (iVar6 != 0);
    }
    while (iVar8 < iVar7) {
      iVar1 = iVar8 * 4;
      iVar8 = iVar8 + 1;
      *(float *)((int)param_4 + iVar8 * 4 + -4) =
           *(float *)((int)param_4 + iVar1) * (float)(&DAT_007454c0)[iVar4];
    }
  }
  return 1;
}


/* FUN_006ddaa0 @ 006ddaa0  kind=gamemisc  attributed-by=none  size=774 */

undefined4 * FUN_006ddaa0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  int local_20;
  int local_1c;
  int *local_14;
  
  piVar1 = *(int **)(param_2 + 0x510);
  iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c) + 0xb20);
  iVar3 = FUN_00401e80();
  if (iVar3 != 1) {
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)FUN_006d1ab0();
  for (uVar11 = *(int *)(param_2 + 0x50c) - 1; uVar11 != 0; uVar11 = uVar11 >> 1) {
  }
  uVar5 = FUN_00401e80();
  *puVar4 = uVar5;
  for (uVar11 = *(int *)(param_2 + 0x50c) - 1; uVar11 != 0; uVar11 = uVar11 >> 1) {
  }
  uVar5 = FUN_00401e80();
  puVar4[1] = uVar5;
  local_1c = 0;
  local_14 = (int *)0x2;
  piVar12 = piVar1;
  if (0 < *piVar1) {
    do {
      iVar3 = piVar12[1];
      uVar11 = 0;
      iVar2 = piVar1[iVar3 + 0x20];
      bVar10 = (byte)piVar1[iVar3 + 0x30];
      if (piVar1[iVar3 + 0x30] != 0) {
        iVar14 = piVar1[iVar3 + 0x40];
        if (*(int *)(iVar9 + 8 + iVar14 * 0x38) < 1) {
          return (undefined4 *)0x0;
        }
        iVar6 = FUN_006d3630();
        if (iVar6 < 0) {
          return (undefined4 *)0x0;
        }
        uVar11 = *(uint *)(*(int *)(iVar9 + iVar14 * 0x38 + 0x18) + iVar6 * 4);
        if (uVar11 == 0xffffffff) {
          return (undefined4 *)0x0;
        }
      }
      iVar14 = 0;
      if (0 < iVar2) {
        piVar15 = puVar4 + (int)local_14;
        do {
          uVar7 = (1 << (bVar10 & 0x1f)) - 1U & uVar11;
          uVar11 = (int)uVar11 >> (bVar10 & 0x1f);
          iVar6 = piVar1[uVar7 + iVar3 * 8 + 0x50];
          if (iVar6 < 0) {
            *piVar15 = 0;
          }
          else {
            if ((*(int *)(iVar9 + 8 + iVar6 * 0x38) < 1) || (iVar8 = FUN_006d3630(), iVar8 < 0)) {
              iVar6 = -1;
            }
            else {
              iVar6 = *(int *)(*(int *)(iVar9 + iVar6 * 0x38 + 0x18) + iVar8 * 4);
            }
            *piVar15 = iVar6;
            if (iVar6 == -1) {
              return (undefined4 *)0x0;
            }
          }
          iVar14 = iVar14 + 1;
          piVar15 = piVar15 + 1;
        } while (iVar14 < iVar2);
      }
      local_14 = (int *)((int)local_14 + iVar2);
      local_1c = local_1c + 1;
      piVar12 = piVar12 + 1;
    } while (local_1c < *piVar1);
  }
  local_20 = 2;
  if (2 < *(int *)(param_2 + 0x504)) {
    piVar12 = (int *)(param_2 + 0x30c);
    local_14 = piVar1 + 0xd3;
    do {
      uVar11 = (puVar4[*piVar12] & 0x7fff) - (puVar4[piVar12[0x3f]] & 0x7fff);
      iVar9 = (int)(((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f)) *
                   (*local_14 - piVar1[piVar12[0x3f] + 0xd1])) /
              (piVar1[*piVar12 + 0xd1] - piVar1[piVar12[0x3f] + 0xd1]);
      if ((int)uVar11 < 0) {
        iVar9 = -iVar9;
      }
      uVar7 = (puVar4[piVar12[0x3f]] & 0x7fff) + iVar9;
      uVar11 = puVar4[local_20];
      uVar16 = *(int *)(param_2 + 0x50c) - uVar7;
      if (uVar11 == 0) {
        puVar4[local_20] = uVar7 | 0x8000;
      }
      else {
        uVar13 = uVar7;
        if ((int)uVar16 < (int)uVar7) {
          uVar13 = uVar16;
        }
        if ((int)uVar11 < (int)(uVar13 * 2)) {
          if ((uVar11 & 1) == 0) {
            iVar9 = (int)uVar11 >> 1;
          }
          else {
            iVar9 = -((int)(uVar11 + 1) >> 1);
          }
        }
        else if ((int)uVar7 < (int)uVar16) {
          iVar9 = uVar11 - uVar7;
        }
        else {
          iVar9 = (uVar16 - uVar11) + -1;
        }
        puVar4[local_20] = iVar9 + uVar7 & 0x7fff;
        puVar4[piVar12[0x3f]] = puVar4[piVar12[0x3f]] & 0x7fff;
        puVar4[*piVar12] = puVar4[*piVar12] & 0x7fff;
      }
      local_14 = local_14 + 1;
      local_20 = local_20 + 1;
      piVar12 = piVar12 + 1;
    } while (local_20 < *(int *)(param_2 + 0x504));
  }
  return puVar4;
}


/* FUN_006dddb0 @ 006dddb0  kind=gamemisc  attributed-by=none  size=41 */

int FUN_006dddb0(int param_1)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  
  param_1 = param_1 * 4;
  iVar1 = *(int *)(param_1 + in_ECX);
  if (iVar1 < 0) {
    return *(int *)(param_1 + in_EDX);
  }
  if (-1 < *(int *)(param_1 + in_EDX)) {
    iVar1 = iVar1 + *(int *)(param_1 + in_EDX) >> 1;
  }
  return iVar1;
}


/* FUN_006ddde0 @ 006ddde0  kind=gamemisc  attributed-by=none  size=531 */

bool FUN_006ddde0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int in_EDX;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_8;
  
  uVar9 = param_2 - param_1;
  iVar8 = in_EDX - in_ECX;
  iVar2 = (int)uVar9 / iVar8;
  iVar3 = iVar2 + -1;
  if (-1 < (int)uVar9) {
    iVar3 = iVar2 + 1;
  }
  iVar10 = 0;
  fVar1 = *(float *)(param_3 + in_ECX * 4);
  iVar4 = (int)(fVar1 * 7.3142858 + 1023.5);
  if (iVar4 < 0x400) {
    if (iVar4 < 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 0x3ff;
  }
  uVar6 = iVar2 * iVar8 >> 0x1f;
  param_2 = (param_1 - iVar4) * (param_1 - iVar4);
  local_8 = 1;
  if (fVar1 <= *(float *)(param_4 + in_ECX * 4) + *(float *)(param_5 + 0x458)) {
    if ((*(float *)(param_5 + 0x448) + (float)param_1 < (float)iVar4) ||
       ((float)iVar4 < (float)param_1 - *(float *)(param_5 + 0x44c))) {
      return true;
    }
  }
  iVar4 = in_ECX + 1;
  if (iVar4 < in_EDX) {
    pfVar7 = (float *)(param_3 + iVar4 * 4);
    do {
      iVar10 = iVar10 + (((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) -
                        ((iVar2 * iVar8 ^ uVar6) - uVar6));
      iVar5 = iVar2;
      if (iVar8 <= iVar10) {
        iVar10 = iVar10 - iVar8;
        iVar5 = iVar3;
      }
      param_1 = param_1 + iVar5;
      iVar5 = (int)(*pfVar7 * 7.3142858 + 1023.5);
      if (iVar5 < 0x400) {
        if (iVar5 < 0) {
          iVar5 = 0;
        }
      }
      else {
        iVar5 = 0x3ff;
      }
      local_8 = local_8 + 1;
      param_2 = param_2 + (param_1 - iVar5) * (param_1 - iVar5);
      if ((*pfVar7 <= *(float *)((param_4 - param_3) + (int)pfVar7) + *(float *)(param_5 + 0x458))
         && (iVar5 != 0)) {
        if (*(float *)(param_5 + 0x448) + (float)param_1 < (float)iVar5) {
          return true;
        }
        if ((float)iVar5 < (float)param_1 - *(float *)(param_5 + 0x44c)) {
          return true;
        }
      }
      iVar4 = iVar4 + 1;
      pfVar7 = pfVar7 + 1;
    } while (iVar4 < in_EDX);
  }
  fVar1 = *(float *)(param_5 + 0x450);
  if (((*(float *)(param_5 + 0x448) * *(float *)(param_5 + 0x448)) / (float)local_8 <= fVar1) &&
     ((*(float *)(param_5 + 0x44c) * *(float *)(param_5 + 0x44c)) / (float)local_8 <= fVar1)) {
    return fVar1 < (float)(param_2 / local_8);
  }
  return false;
}


/* FUN_006de000 @ 006de000  kind=gamemisc  attributed-by=none  size=695 */

undefined4 FUN_006de000(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int in_EDX;
  int *piVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar2 = *in_ECX;
  dVar6 = 0.0;
  iVar3 = in_ECX[in_EDX * 0xe + -0xd];
  dVar7 = dVar6;
  dVar8 = dVar6;
  dVar9 = dVar6;
  dVar10 = dVar6;
  if (0 < in_EDX) {
    piVar4 = in_ECX + 8;
    do {
      iVar1 = piVar4[-1];
      dVar5 = (double)(((float)(piVar4[5] + iVar1) * *(float *)(param_3 + 0x454)) /
                      (float)(iVar1 + 1)) + 1.0;
      dVar7 = dVar7 + (double)piVar4[-6] * dVar5 + (double)*piVar4;
      dVar9 = dVar9 + (double)piVar4[-5] * dVar5 + (double)piVar4[1];
      dVar8 = dVar8 + (double)piVar4[-4] * dVar5 + (double)piVar4[2];
      dVar10 = dVar10 + (double)piVar4[-2] * dVar5 + (double)piVar4[4];
      dVar6 = dVar6 + (double)iVar1 * dVar5 + (double)piVar4[5];
      in_EDX = in_EDX + -1;
      piVar4 = piVar4 + 0xe;
    } while (in_EDX != 0);
  }
  iVar1 = *param_1;
  if (-1 < iVar1) {
    dVar7 = dVar7 + (double)iVar2;
    dVar6 = dVar6 + 1.0;
    dVar9 = dVar9 + (double)iVar1;
    dVar8 = dVar8 + (double)(iVar2 * iVar2);
    dVar10 = dVar10 + (double)(iVar1 * iVar2);
  }
  iVar1 = *param_2;
  if (-1 < iVar1) {
    dVar7 = dVar7 + (double)iVar3;
    dVar6 = dVar6 + 1.0;
    dVar9 = dVar9 + (double)iVar1;
    dVar8 = dVar8 + (double)(iVar3 * iVar3);
    dVar10 = dVar10 + (double)(iVar1 * iVar3);
  }
  dVar5 = dVar6 * dVar8 - dVar7 * dVar7;
  if (dVar5 <= 0.0) {
    *param_2 = 0;
    *param_1 = 0;
    return 1;
  }
  dVar6 = (dVar6 * dVar10 - dVar9 * dVar7) / dVar5;
  dVar5 = (dVar8 * dVar9 - dVar10 * dVar7) / dVar5;
  floor((double)iVar2 * dVar6 + dVar5 + 0.5);
  iVar2 = FUN_0068d910();
  floor((double)iVar3 * dVar6 + dVar5 + 0.5);
  iVar3 = FUN_0068d910();
  if (0x3ff < iVar2) {
    iVar2 = 0x3ff;
  }
  *param_1 = iVar2;
  iVar2 = *param_1;
  if (0x3ff < iVar3) {
    iVar3 = 0x3ff;
  }
  *param_2 = iVar3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *param_1 = iVar2;
  iVar2 = *param_2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *param_2 = iVar2;
  return 0;
}


/* FUN_006de2c0 @ 006de2c0  kind=gamemisc  attributed-by=none  size=368 */

int FUN_006de2c0(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int in_ECX;
  int iVar1;
  int in_EDX;
  int iVar2;
  float *pfVar3;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar2 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  memset(param_3,0,0x38);
  *param_3 = param_1;
  param_3[1] = param_2;
  if (param_4 <= param_2) {
    param_2 = param_4 + -1;
  }
  if (param_1 <= param_2) {
    pfVar3 = (float *)(in_ECX + param_1 * 4);
    iVar2 = 0;
    do {
      iVar1 = (int)(*pfVar3 * 7.3142858 + 1023.5);
      if (iVar1 < 0x400) {
        if ((-1 < iVar1) && (iVar1 != 0)) goto LAB_006de37c;
      }
      else {
        iVar1 = 0x3ff;
LAB_006de37c:
        if (*(float *)((in_EDX - in_ECX) + (int)pfVar3) + *(float *)(param_5 + 0x458) < *pfVar3) {
          local_28 = local_28 + param_1 * param_1;
          local_24 = local_24 + iVar1;
          local_20 = local_20 + param_1;
          local_2c = local_2c + iVar1 * iVar1;
          local_30 = local_30 + iVar1 * param_1;
          local_34 = local_34 + 1;
        }
        else {
          local_14 = local_14 + param_1 * param_1;
          local_10 = local_10 + iVar1;
          local_c = local_c + param_1;
          local_18 = local_18 + iVar1 * iVar1;
          local_1c = local_1c + iVar1 * param_1;
          iVar2 = iVar2 + 1;
        }
      }
      param_1 = param_1 + 1;
      pfVar3 = pfVar3 + 1;
    } while (param_1 <= param_2);
  }
  param_3[2] = local_c;
  param_3[3] = local_10;
  param_3[4] = local_14;
  param_3[5] = local_18;
  param_3[6] = local_1c;
  param_3[8] = local_20;
  param_3[9] = local_24;
  param_3[10] = local_28;
  param_3[0xb] = local_2c;
  param_3[0xc] = local_30;
  param_3[0xd] = local_34;
  param_3[7] = iVar2;
  return iVar2;
}


/* FUN_006de430 @ 006de430  kind=gamemisc  attributed-by=none  size=147 */

void FUN_006de430(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int in_EDX;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = param_1 - in_EDX;
  uVar8 = param_3 - param_2;
  iVar2 = (int)uVar8 / iVar7;
  iVar4 = iVar2 + -1;
  if (-1 < (int)uVar8) {
    iVar4 = iVar2 + 1;
  }
  uVar6 = iVar2 * iVar7 >> 0x1f;
  iVar5 = 0;
  if (param_1 < in_ECX) {
    in_ECX = param_1;
  }
  if (in_EDX < in_ECX) {
    *(int *)(param_4 + in_EDX * 4) = param_2;
  }
  iVar3 = in_EDX + 1;
  while (iVar3 < in_ECX) {
    iVar5 = iVar5 + (((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) -
                    ((iVar2 * iVar7 ^ uVar6) - uVar6));
    iVar1 = iVar2;
    if (iVar7 <= iVar5) {
      iVar5 = iVar5 - iVar7;
      iVar1 = iVar4;
    }
    param_2 = param_2 + iVar1;
    iVar3 = iVar3 + 1;
    *(int *)(param_4 + -4 + iVar3 * 4) = param_2;
  }
  return;
}


/* FUN_006de4d0 @ 006de4d0  kind=gamemisc  attributed-by=none  size=188 */

void FUN_006de4d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int in_EDX;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = param_3 - param_2;
  iVar9 = param_1 - in_EDX;
  iVar2 = (int)uVar8 / iVar9;
  iVar4 = iVar2 + -1;
  if (-1 < (int)uVar8) {
    iVar4 = iVar2 + 1;
  }
  uVar6 = iVar2 * iVar9 >> 0x1f;
  iVar5 = 0;
  if (param_1 < in_ECX) {
    in_ECX = param_1;
  }
  if (in_EDX < in_ECX) {
    *(float *)(param_4 + in_EDX * 4) =
         (float)(&DAT_007454c0)[param_2] * *(float *)(param_4 + in_EDX * 4);
  }
  iVar7 = in_EDX + 1;
  if (iVar7 < in_ECX) {
    pfVar3 = (float *)(&DAT_007454c0 + param_2);
    do {
      iVar5 = iVar5 + (((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) -
                      ((iVar2 * iVar9 ^ uVar6) - uVar6));
      iVar1 = iVar2;
      if (iVar9 <= iVar5) {
        iVar5 = iVar5 - iVar9;
        iVar1 = iVar4;
      }
      pfVar3 = pfVar3 + iVar1;
      iVar1 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      *(float *)(param_4 + -4 + iVar7 * 4) = *(float *)(param_4 + iVar1) * *pfVar3;
    } while (iVar7 < in_ECX);
  }
  return;
}


/* FUN_006de5c0 @ 006de5c0  kind=gamemisc  attributed-by=none  size=74 */

int FUN_006de5c0(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  uint uVar2;
  
  param_1 = param_1 & 0x7fff;
  uVar2 = (param_2 & 0x7fff) - param_1;
  iVar1 = (int)((param_3 - in_ECX) * ((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) /
          (in_EDX - in_ECX);
  if ((int)uVar2 < 0) {
    return param_1 - iVar1;
  }
  return param_1 + iVar1;
}


/* FUN_006de610 @ 006de610  kind=gamemisc  attributed-by=none  size=650 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_006de610(undefined4 param_1,int *param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint _NumOfElements;
  int iVar8;
  undefined1 auVar9 [16];
  int local_128 [66];
  void *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar7 = 0;
  iVar8 = 0;
  pvVar1 = calloc(1,0x520);
  *(int **)((int)pvVar1 + 0x510) = param_2;
  *(int *)((int)pvVar1 + 0x508) = param_2[0xd2];
  local_10 = *param_2;
  iVar2 = 0;
  local_8 = (int *)0x0;
  if (1 < local_10) {
    iVar5 = (local_10 - 2U >> 1) + 1;
    iVar2 = iVar5 * 2;
    iVar8 = 0;
    piVar4 = param_2;
    do {
      iVar7 = iVar7 + param_2[piVar4[1] + 0x20];
      iVar8 = iVar8 + param_2[piVar4[2] + 0x20];
      iVar5 = iVar5 + -1;
      piVar4 = piVar4 + 2;
      local_c = iVar2;
    } while (iVar5 != 0);
  }
  if (iVar2 < local_10) {
    local_8 = (int *)param_2[param_2[iVar2 + 1] + 0x20];
  }
  _NumOfElements = iVar7 + iVar8 + (int)local_8 + 2;
  iVar2 = 0;
  *(uint *)((int)pvVar1 + 0x504) = _NumOfElements;
  local_20 = pvVar1;
  if (0 < (int)_NumOfElements) {
    if ((3 < _NumOfElements) && (1 < DAT_0076e2a0)) {
      uVar3 = _NumOfElements & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      piVar4 = local_128;
      do {
        auVar9._4_4_ = iVar2 + 1;
        auVar9._0_4_ = iVar2;
        auVar9._8_4_ = iVar2 + 2;
        auVar9._12_4_ = iVar2 + 3;
        auVar9 = pmulld(auVar9,_DAT_00745ec0);
        iVar2 = iVar2 + 4;
        *piVar4 = (int)param_2 + auVar9._0_4_ + 0x344;
        piVar4[1] = (int)param_2 + auVar9._4_4_ + 0x344;
        piVar4[2] = (int)param_2 + auVar9._8_4_ + 0x344;
        piVar4[3] = (int)param_2 + auVar9._12_4_ + 0x344;
        piVar4 = piVar4 + 4;
      } while (iVar2 < (int)(_NumOfElements - uVar3));
    }
    if (iVar2 < (int)_NumOfElements) {
      piVar4 = param_2 + iVar2 + 0xd1;
      do {
        local_128[iVar2] = (int)piVar4;
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < (int)_NumOfElements);
    }
  }
  qsort(local_128,_NumOfElements,4,FUN_006dec50);
  iVar2 = 0;
  if (0 < (int)_NumOfElements) {
    piVar4 = (int *)((int)pvVar1 + 0x104);
    do {
      piVar6 = local_128 + iVar2;
      iVar2 = iVar2 + 1;
      *piVar4 = (*piVar6 - (int)param_2) + -0x344 >> 2;
      piVar4 = piVar4 + 1;
    } while (iVar2 < (int)_NumOfElements);
  }
  iVar2 = 0;
  if (0 < (int)_NumOfElements) {
    piVar4 = (int *)((int)pvVar1 + 0x104);
    do {
      iVar7 = *piVar4;
      piVar4 = piVar4 + 1;
      *(int *)((int)pvVar1 + iVar7 * 4 + 0x208) = iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)_NumOfElements);
  }
  iVar2 = 0;
  if (0 < (int)_NumOfElements) {
    do {
      iVar7 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(int *)((int)pvVar1 + iVar2 * 4 + -4) = param_2[*(int *)((int)pvVar1 + iVar7 + 0x104) + 0xd1]
      ;
    } while (iVar2 < (int)_NumOfElements);
  }
  switch(param_2[0xd0]) {
  case 1:
    *(undefined4 *)((int)pvVar1 + 0x50c) = 0x100;
    break;
  case 2:
    *(undefined4 *)((int)pvVar1 + 0x50c) = 0x80;
    break;
  case 3:
    *(undefined4 *)((int)pvVar1 + 0x50c) = 0x56;
    break;
  case 4:
    *(undefined4 *)((int)pvVar1 + 0x50c) = 0x40;
  }
  local_c = _NumOfElements - 2;
  if (0 < local_c) {
    piVar4 = (int *)((int)pvVar1 + 0x30c);
    local_8 = param_2 + 0xd3;
    iVar2 = 2;
    do {
      iVar7 = *(int *)((int)pvVar1 + 0x508);
      iVar8 = 0;
      local_18 = 0;
      local_14 = 1;
      local_1c = 0;
      if (0 < iVar2) {
        piVar6 = param_2 + 0xd1;
        do {
          iVar5 = *piVar6;
          if ((local_1c < iVar5) && (iVar5 < *local_8)) {
            local_1c = iVar5;
            local_18 = iVar8;
          }
          if ((iVar5 < iVar7) && (*local_8 < iVar5)) {
            iVar7 = iVar5;
            local_14 = iVar8;
          }
          iVar8 = iVar8 + 1;
          piVar6 = piVar6 + 1;
          pvVar1 = local_20;
        } while (iVar8 < iVar2);
      }
      local_8 = local_8 + 1;
      piVar4[0x3f] = local_18;
      *piVar4 = local_14;
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return pvVar1;
}


/* FUN_006de900 @ 006de900  kind=gamemisc  attributed-by=none  size=812 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_006de900(int param_1)

{
  uint _NumOfElements;
  int *_Dst;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auVar7 [16];
  int local_11c [65];
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_10 = *(int *)(param_1 + 0x1c);
  iVar4 = -1;
  _Dst = calloc(1,0x460);
  iVar1 = FUN_00401e80();
  local_8 = (int *)0x0;
  *_Dst = iVar1;
  if (0 < iVar1) {
    local_c = _Dst + 1;
    do {
      iVar1 = FUN_00401e80();
      *local_c = iVar1;
      if (iVar1 < 0) goto LAB_006dec26;
      if (iVar4 < iVar1) {
        iVar4 = iVar1;
      }
      local_c = local_c + 1;
      local_8 = (int *)((int)local_8 + 1);
    } while ((int)local_8 < *_Dst);
  }
  local_18 = iVar4 + 1;
  local_14 = 0;
  if (0 < local_18) {
    local_8 = _Dst + 0x50;
    piVar3 = _Dst + 0x40;
    do {
      local_c = piVar3;
      iVar4 = FUN_00401e80();
      piVar3[-0x20] = iVar4 + 1;
      iVar4 = FUN_00401e80();
      piVar3[-0x10] = iVar4;
      if (iVar4 < 0) goto LAB_006dec26;
      if (iVar4 != 0) {
        iVar4 = FUN_00401e80();
        *piVar3 = iVar4;
      }
      if ((*piVar3 < 0) || (*(int *)(local_10 + 0x18) <= *piVar3)) goto LAB_006dec26;
      iVar4 = 0;
      piVar5 = local_8;
      if (0 < 1 << ((byte)piVar3[-0x10] & 0x1f)) {
        do {
          iVar1 = FUN_00401e80();
          iVar1 = iVar1 + -1;
          *piVar5 = iVar1;
          if ((iVar1 < -1) || (*(int *)(local_10 + 0x18) <= iVar1)) goto LAB_006dec26;
          iVar4 = iVar4 + 1;
          piVar3 = local_c;
          piVar5 = piVar5 + 1;
        } while (iVar4 < 1 << ((byte)local_c[-0x10] & 0x1f));
      }
      local_8 = local_8 + 8;
      local_14 = local_14 + 1;
      piVar3 = piVar3 + 1;
      local_c = piVar3;
    } while (local_14 < local_18);
  }
  iVar4 = FUN_00401e80();
  _Dst[0xd0] = iVar4 + 1;
  iVar4 = FUN_00401e80();
  if (iVar4 < 0) {
LAB_006dec26:
    memset(_Dst,0,0x460);
    free(_Dst);
    return (int *)0x0;
  }
  iVar6 = 0;
  local_10 = 0;
  iVar1 = 0;
  if (0 < *_Dst) {
    local_8 = _Dst + 1;
    local_14 = 0;
    do {
      local_14 = local_14 + _Dst[*local_8 + 0x20];
      if (0x3f < local_14) goto LAB_006dec26;
      if (iVar6 < local_14) {
        piVar3 = _Dst + iVar6 + 0xd3;
        do {
          iVar1 = FUN_00401e80();
          *piVar3 = iVar1;
          if ((iVar1 < 0) || (1 << ((byte)iVar4 & 0x1f) <= iVar1)) goto LAB_006dec26;
          iVar6 = iVar6 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar6 < local_14);
      }
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      iVar1 = local_14;
    } while (local_10 < *_Dst);
  }
  _NumOfElements = iVar1 + 2;
  iVar1 = 0;
  _Dst[0xd1] = 0;
  _Dst[0xd2] = 1 << ((byte)iVar4 & 0x1f);
  if (0 < (int)_NumOfElements) {
    if ((3 < _NumOfElements) && (1 < DAT_0076e2a0)) {
      uVar2 = _NumOfElements & 0x80000003;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
      }
      piVar3 = local_11c;
      do {
        auVar7._4_4_ = iVar1 + 1;
        auVar7._0_4_ = iVar1;
        auVar7._8_4_ = iVar1 + 2;
        auVar7._12_4_ = iVar1 + 3;
        auVar7 = pmulld(auVar7,_DAT_00745ec0);
        iVar1 = iVar1 + 4;
        *piVar3 = (int)_Dst + auVar7._0_4_ + 0x344;
        piVar3[1] = (int)_Dst + auVar7._4_4_ + 0x344;
        piVar3[2] = (int)_Dst + auVar7._8_4_ + 0x344;
        piVar3[3] = (int)_Dst + auVar7._12_4_ + 0x344;
        piVar3 = piVar3 + 4;
      } while (iVar1 < (int)(_NumOfElements - uVar2));
    }
    if (iVar1 < (int)_NumOfElements) {
      piVar3 = _Dst + iVar1 + 0xd1;
      do {
        local_11c[iVar1] = (int)piVar3;
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar1 < (int)_NumOfElements);
    }
  }
  qsort(local_11c,_NumOfElements,4,FUN_006dec50);
  iVar4 = 1;
  if (1 < (int)_NumOfElements) {
    do {
      if (*(int *)local_11c[iVar4 + -1] == *(int *)local_11c[iVar4]) goto LAB_006dec26;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)_NumOfElements);
  }
  return _Dst;
}


/* FUN_006dec50 @ 006dec50  kind=gamemisc  attributed-by=none  size=19 */

int FUN_006dec50(undefined4 *param_1,undefined4 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}


