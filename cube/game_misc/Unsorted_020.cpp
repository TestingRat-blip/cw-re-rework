// Unsorted_020 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_020.h"

/* FUN_006dec70 @ 006dec70  kind=gamemisc  attributed-by=none  size=454 */

void FUN_006dec70(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar3 = param_1[0xd2];
  local_c = 0;
  local_14 = -1;
  FUN_00401c40(param_2,*param_1,5);
  local_8 = (int *)0x0;
  piVar4 = param_1;
  if (0 < *param_1) {
    do {
      piVar4 = piVar4 + 1;
      FUN_00401c40(param_2,*piVar4,4);
      if (local_14 < *piVar4) {
        local_14 = *piVar4;
      }
      local_8 = (int *)((int)local_8 + 1);
    } while ((int)local_8 < *param_1);
  }
  local_14 = local_14 + 1;
  if (0 < local_14) {
    local_8 = param_1 + 0x50;
    piVar4 = param_1 + 0x30;
    do {
      FUN_00401c40(param_2,piVar4[-0x10] + -1,3);
      FUN_00401c40(param_2,*piVar4,2);
      if (*piVar4 != 0) {
        FUN_00401c40(param_2,piVar4[0x10],8);
      }
      local_10 = 0;
      piVar5 = local_8;
      if (0 < 1 << ((byte)*piVar4 & 0x1f)) {
        do {
          FUN_00401c40(param_2,*piVar5 + 1,8);
          local_10 = local_10 + 1;
          piVar5 = piVar5 + 1;
        } while (local_10 < 1 << ((byte)*piVar4 & 0x1f));
      }
      local_8 = local_8 + 8;
      piVar4 = piVar4 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  FUN_00401c40(param_2,param_1[0xd0] + -1,2);
  iVar1 = 0;
  if (iVar3 != 0) {
    for (uVar2 = iVar3 - 1; uVar2 != 0; uVar2 = uVar2 >> 1) {
      iVar1 = iVar1 + 1;
    }
  }
  FUN_00401c40(param_2,iVar1,4);
  local_8 = (int *)0x0;
  if (iVar3 != 0) {
    local_8 = (int *)0;
    for (uVar2 = iVar3 - 1; uVar2 != 0; uVar2 = uVar2 >> 1) {
      local_8 = (int *)((int)local_8 + 1);
    }
  }
  iVar3 = 0;
  local_14 = 0;
  piVar4 = param_1;
  if (0 < *param_1) {
    do {
      local_c = local_c + param_1[piVar4[1] + 0x20];
      if (iVar3 < local_c) {
        iVar1 = local_c - iVar3;
        piVar5 = param_1 + iVar3 + 0xd3;
        iVar3 = iVar3 + iVar1;
        do {
          FUN_00401c40(param_2,*piVar5,local_8);
          piVar5 = piVar5 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      local_14 = local_14 + 1;
      piVar4 = piVar4 + 1;
    } while (local_14 < *param_1);
  }
  return;
}


/* FUN_006dee70 @ 006dee70  kind=gamemisc  attributed-by=none  size=37 */

void FUN_006dee70(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x520);
    free(param_1);
  }
  return;
}


/* FUN_006deea0 @ 006deea0  kind=gamemisc  attributed-by=none  size=37 */

void FUN_006deea0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x460);
    free(param_1);
  }
  return;
}


/* FUN_006deed0 @ 006deed0  kind=gamemisc  attributed-by=none  size=1494 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 * FUN_006deed0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int in_EDX;
  int iVar11;
  int iVar12;
  int **ppiVar13;
  undefined1 *puVar14;
  int *local_1370;
  int local_136c;
  int *local_1368;
  int local_1364;
  int *local_1360;
  int *local_135c;
  int local_1358;
  int **local_1354;
  int *local_1350;
  int local_134c;
  int local_1348;
  int local_1344;
  int *local_1340;
  int **local_133c;
  undefined4 local_1338;
  int local_1334;
  int *local_1330 [66];
  int *local_1228 [66];
  int local_1120 [66];
  int local_1018 [66];
  int local_f10 [66];
  undefined1 local_e08 [3580];
  undefined4 uStack_c;
  
  uStack_c = 0x6deee0;
  iVar12 = *(int *)(in_EDX + 0x504);
  iVar3 = *(int *)(in_EDX + 0x510);
  if (0 < iVar12) {
    ppiVar13 = local_1228;
    for (iVar7 = iVar12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppiVar13 = (int *)0xffffff38;
      ppiVar13 = ppiVar13 + 1;
    }
    ppiVar13 = local_1330;
    for (iVar7 = iVar12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppiVar13 = (int *)0xffffff38;
      ppiVar13 = ppiVar13 + 1;
    }
    piVar9 = local_1120;
    for (iVar7 = iVar12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar9 = 0;
      piVar9 = piVar9 + 1;
    }
    if (0 < iVar12) {
      piVar9 = local_1018;
      for (iVar7 = iVar12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar9 = 1;
        piVar9 = piVar9 + 1;
      }
      piVar9 = local_f10;
      for (iVar7 = iVar12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar9 = -1;
        piVar9 = piVar9 + 1;
      }
    }
  }
  local_136c = iVar3;
  local_1364 = in_EDX;
  local_1344 = iVar12;
  if (iVar12 == 0) {
    iVar2 = FUN_006de2c0(0,*(undefined4 *)(in_EDX + 0x508),local_e08,*(undefined4 *)(in_EDX + 0x508)
                         ,iVar3);
    iVar11 = iVar12;
  }
  else {
    iVar7 = 0;
    if (iVar12 + -1 < 1) {
      return (undefined4 *)0x0;
    }
    puVar14 = local_e08;
    iVar2 = 0;
    do {
      iVar3 = FUN_006de2c0(*(undefined4 *)(local_1364 + iVar7 * 4),
                           *(undefined4 *)(local_1364 + 4 + iVar7 * 4),puVar14,
                           *(undefined4 *)(local_1364 + 0x508),local_136c);
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + iVar3;
      puVar14 = puVar14 + 0x38;
      iVar11 = local_1344;
      iVar3 = local_136c;
    } while (iVar7 < iVar12 + -1);
  }
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    local_1370 = (int *)0xffffff38;
    local_1368 = (int *)0xffffff38;
    FUN_006de000(&local_1370,&local_1368,iVar3);
    iVar12 = 2;
    local_1228[0] = local_1370;
    local_1330[0] = local_1370;
    local_1330[1] = local_1368;
    local_1228[1] = local_1368;
    if (2 < iVar11) {
      local_1368 = (int *)(local_1364 + 0x210);
      iVar3 = local_1364;
      do {
        iVar7 = local_1120[*local_1368];
        local_1334 = local_1018[*local_1368];
        if (local_f10[iVar7] != local_1334) {
          local_1338 = *(undefined4 *)(iVar3 + 0x208 + iVar7 * 4);
          local_1348 = *(int *)(iVar3 + 0x208 + local_1334 * 4);
          local_135c = *(int **)(local_136c + 0x344 + iVar7 * 4);
          local_1358 = *(int *)(local_136c + 0x344 + local_1334 * 4);
          piVar9 = local_1228[iVar7];
          local_f10[iVar7] = local_1334;
          if ((int)piVar9 < 0) {
            piVar9 = local_1330[iVar7];
            local_1354 = local_1330 + iVar7;
          }
          else {
            local_1354 = local_1330 + iVar7;
            if (-1 < (int)*local_1354) {
              piVar9 = (int *)((int)piVar9 + (int)*local_1354 >> 1);
            }
          }
          local_133c = local_1228 + local_1334;
          local_1370 = *local_133c;
          if ((int)local_1370 < 0) {
            local_1370 = local_1330[local_1334];
          }
          else if (-1 < (int)local_1330[local_1334]) {
            local_1370 = (int *)((int)local_1370 + (int)local_1330[local_1334] >> 1);
          }
          if ((piVar9 == (int *)0xffffffff) || (local_1370 == (int *)0xffffffff)) {
                    /* WARNING: Subroutine does not return */
            exit(1);
          }
          iVar3 = FUN_006ddde0(piVar9,local_1370,param_2,param_1,local_136c);
          if (iVar3 != 0) {
            local_1340 = (int *)0xffffff38;
            local_1360 = (int *)0xffffff38;
            local_1350 = (int *)0xffffff38;
            local_135c = (int *)0xffffff38;
            local_1358 = FUN_006de000(&local_1340,&local_1360,local_136c);
            local_1348 = FUN_006de000(&local_1350,&local_135c,local_136c);
            piVar10 = local_1340;
            if (local_1358 != 0) {
              local_1360 = local_1350;
              piVar10 = piVar9;
            }
            piVar9 = local_135c;
            if (local_1348 != 0) {
              piVar9 = local_1370;
              local_1350 = local_1360;
            }
            if ((local_1358 == 0) || (local_1348 == 0)) {
              *local_1354 = piVar10;
              if (iVar7 == 0) {
                local_1228[0] = piVar10;
              }
              local_1228[iVar12] = local_1360;
              local_1330[iVar12] = local_1350;
              *local_133c = piVar9;
              if (local_1334 == 1) {
                local_1330[1] = piVar9;
              }
              iVar3 = local_1364;
              if ((-1 < (int)local_1360) || (-1 < (int)local_1350)) {
                iVar2 = *local_1368;
                iVar1 = iVar2;
                while ((iVar1 = iVar1 + -1, -1 < iVar1 && (local_1018[iVar1] == local_1334))) {
                  local_1018[iVar1] = iVar12;
                }
                while ((iVar2 = iVar2 + 1, iVar2 < iVar11 && (local_1120[iVar2] == iVar7))) {
                  local_1120[iVar2] = iVar12;
                }
              }
              goto LAB_006df2c2;
            }
          }
          local_1330[iVar12] = (int *)0xffffff38;
          local_1228[iVar12] = (int *)0xffffff38;
          iVar3 = local_1364;
        }
LAB_006df2c2:
        iVar12 = iVar12 + 1;
        local_1368 = local_1368 + 1;
      } while (iVar12 < iVar11);
    }
    piVar10 = local_1228[1];
    piVar9 = local_1330[0];
    uVar8 = iVar11 * 4 + 7U & 0xfffffff8;
    if (*(int *)(local_134c + 0x4c) < (int)(*(int *)(local_134c + 0x48) + uVar8)) {
      if (*(int *)(local_134c + 0x44) != 0) {
        puVar4 = malloc(8);
        *(int *)(local_134c + 0x50) = *(int *)(local_134c + 0x50) + *(int *)(local_134c + 0x48);
        puVar4[1] = *(undefined4 *)(local_134c + 0x54);
        *puVar4 = *(undefined4 *)(local_134c + 0x44);
        *(undefined4 **)(local_134c + 0x54) = puVar4;
      }
      *(uint *)(local_134c + 0x4c) = uVar8;
      pvVar5 = malloc(uVar8);
      *(void **)(local_134c + 0x44) = pvVar5;
      *(undefined4 *)(local_134c + 0x48) = 0;
    }
    puVar4 = (undefined4 *)(*(int *)(local_134c + 0x44) + *(int *)(local_134c + 0x48));
    *(uint *)(local_134c + 0x48) = *(int *)(local_134c + 0x48) + uVar8;
    piVar6 = piVar9;
    if ((-1 < (int)local_1228[0]) && (piVar6 = local_1228[0], -1 < (int)piVar9)) {
      piVar6 = (int *)((int)piVar9 + (int)local_1228[0] >> 1);
    }
    *puVar4 = piVar6;
    piVar9 = local_1330[1];
    if ((-1 < (int)piVar10) && (piVar9 = piVar10, -1 < (int)local_1330[1])) {
      piVar9 = (int *)((int)piVar10 + (int)local_1330[1] >> 1);
    }
    puVar4[1] = piVar9;
    local_1358 = 2;
    if (2 < iVar11) {
      local_1370 = (int *)(local_136c + 0x34c);
      piVar9 = (int *)(local_1364 + 0x30c);
      do {
        iVar12 = *(int *)(local_136c + 0x344 + piVar9[0x3f] * 4);
        uVar8 = (puVar4[*piVar9] & 0x7fff) - (puVar4[piVar9[0x3f]] & 0x7fff);
        iVar12 = (int)(((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) *
                      (*local_1370 - iVar12)) /
                 (*(int *)(local_136c + 0x344 + *piVar9 * 4) - iVar12);
        if ((int)uVar8 < 0) {
          iVar12 = -iVar12;
        }
        piVar6 = (int *)((puVar4[piVar9[0x3f]] & 0x7fff) + iVar12);
        piVar10 = local_1228[local_1358];
        if ((int)piVar10 < 0) {
          piVar10 = local_1330[local_1358];
        }
        else if (-1 < (int)local_1330[local_1358]) {
          piVar10 = (int *)((int)piVar10 + (int)local_1330[local_1358] >> 1);
        }
        if (((int)piVar10 < 0) || (piVar6 == piVar10)) {
          puVar4[local_1358] = (uint)piVar6 | 0x8000;
        }
        else {
          puVar4[local_1358] = piVar10;
        }
        local_1370 = local_1370 + 1;
        local_1358 = local_1358 + 1;
        piVar9 = piVar9 + 1;
      } while (local_1358 < local_1344);
      return puVar4;
    }
  }
  return puVar4;
}


/* FUN_006df4c0 @ 006df4c0  kind=gamemisc  attributed-by=none  size=164 */

int FUN_006df4c0(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int in_EDX;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(in_EDX + 0x504);
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  iVar1 = FUN_006d1ab0();
  if (0 < iVar4) {
    param_1 = param_1 - (int)param_2;
    iVar3 = iVar1 - (int)param_2;
    do {
      uVar2 = (int)((*(uint *)(param_1 + (int)param_2) & 0x7fff) * (0x10000 - param_3) + 0x8000 +
                   (*param_2 & 0x7fff) * param_3) >> 0x10;
      *(uint *)(iVar3 + (int)param_2) = uVar2;
      if (((*(uint *)(param_1 + (int)param_2) & 0x8000) != 0) && ((*param_2 & 0x8000) != 0)) {
        *(uint *)(iVar3 + (int)param_2) = uVar2 | 0x8000;
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar1;
}


/* FUN_006df570 @ 006df570  kind=gamemisc  attributed-by=none  size=1555 */

undefined4 FUN_006df570(int param_1,int *param_2,void *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 in_ECX;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int in_EDX;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int local_17c [65];
  int aiStack_78 [8];
  int local_58 [9];
  undefined4 local_34;
  int local_30;
  uint *local_2c;
  int local_28;
  uint *local_24;
  int local_20;
  uint *local_1c;
  int *local_18;
  uint local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar8 = *(int **)(param_1 + 0x510);
  local_28 = *(int *)(*(int *)(*(int *)(in_EDX + 0x40) + 4) + 0x1c);
  iVar6 = *(int *)(param_1 + 0x504);
  local_30 = *(int *)(local_28 + 0xb20);
  local_c = piVar8;
  if (param_2 == (int *)0x0) {
    FUN_00401c40();
    memset(param_3,0,*(int *)(in_EDX + 0x24) / 2 << 2);
    return 0;
  }
  if (0 < iVar6) {
    iVar19 = 0;
    do {
      uVar17 = param_2[iVar19] & 0x7fff;
      switch(piVar8[0xd0]) {
      case 1:
        uVar17 = (int)uVar17 >> 2;
        break;
      case 2:
        uVar17 = (int)uVar17 >> 3;
        break;
      case 3:
        uVar17 = uVar17 / 0xc;
        break;
      case 4:
        uVar17 = (int)uVar17 >> 4;
      }
      param_2[iVar19] = param_2[iVar19] & 0x8000U | uVar17;
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar6);
  }
  iVar19 = *param_2;
  iVar16 = param_2[1];
  if (2 < iVar6) {
    piVar10 = (int *)(param_1 + 0x30c);
    local_1c = (uint *)(param_2 + 2);
    local_10 = piVar8 + 0xd3;
    iVar11 = (int)local_17c - (int)param_2;
    local_18 = (int *)(iVar6 + -2);
    do {
      iVar6 = *piVar10;
      puVar1 = (uint *)(param_2 + piVar10[0x3f]);
      puVar2 = (uint *)(param_2 + iVar6);
      uVar17 = *puVar1 & 0x7fff;
      uVar20 = (param_2[iVar6] & 0x7fffU) - uVar17;
      iVar6 = (int)(((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f)) *
                   (*local_10 - piVar8[piVar10[0x3f] + 0xd1])) /
              (piVar8[iVar6 + 0xd1] - piVar8[piVar10[0x3f] + 0xd1]);
      if ((int)uVar20 < 0) {
        iVar6 = -iVar6;
      }
      uVar14 = uVar17 + iVar6;
      uVar20 = *local_1c;
      if (((uVar20 & 0x8000) == 0) && (uVar14 != uVar20)) {
        uVar7 = *(int *)(param_1 + 0x50c) - uVar14;
        uVar18 = uVar14;
        if ((int)uVar7 < (int)uVar14) {
          uVar18 = uVar7;
        }
        iVar6 = uVar20 - uVar14;
        if (iVar6 < 0) {
          if (iVar6 < (int)-uVar18) {
            iVar6 = (uVar18 - iVar6) + -1;
          }
          else {
            iVar6 = iVar6 * -2 + -1;
          }
        }
        else if (iVar6 < (int)uVar18) {
          iVar6 = iVar6 * 2;
        }
        else {
          iVar6 = iVar6 + uVar18;
        }
        *(int *)(iVar11 + (int)local_1c) = iVar6;
        *puVar1 = uVar17;
        *puVar2 = *puVar2 & 0x7fff;
      }
      else {
        *local_1c = uVar14 | 0x8000;
        *(undefined4 *)(iVar11 + (int)local_1c) = 0;
      }
      local_10 = local_10 + 1;
      piVar10 = piVar10 + 1;
      local_1c = local_1c + 1;
      local_18 = (int *)((int)local_18 + -1);
    } while (local_18 != (int *)0x0);
    local_18 = (int *)0x0;
    local_2c = puVar2;
    local_24 = puVar1;
    local_20 = iVar11;
    local_14 = uVar17;
    local_8 = piVar10;
  }
  local_17c[0] = iVar19;
  local_17c[1] = iVar16;
  local_58[8] = in_EDX;
  local_34 = in_ECX;
  FUN_00401c40(in_ECX,1,1);
  uVar5 = local_34;
  *(int *)(param_1 + 0x51c) = *(int *)(param_1 + 0x51c) + 1;
  iVar6 = 0;
  uVar17 = *(int *)(param_1 + 0x50c) - 1;
  for (uVar20 = uVar17; uVar20 != 0; uVar20 = uVar20 >> 1) {
    iVar6 = iVar6 + 1;
  }
  *(int *)(param_1 + 0x518) = *(int *)(param_1 + 0x518) + iVar6 * 2;
  iVar6 = 0;
  for (; uVar17 != 0; uVar17 = uVar17 >> 1) {
    iVar6 = iVar6 + 1;
  }
  FUN_00401c40(local_34,iVar19,iVar6);
  iVar6 = 0;
  for (uVar17 = *(int *)(param_1 + 0x50c) - 1; uVar17 != 0; uVar17 = uVar17 >> 1) {
    iVar6 = iVar6 + 1;
  }
  FUN_00401c40(uVar5,iVar16,iVar6);
  local_1c = (uint *)0x0;
  local_10 = (int *)0x2;
  if (0 < *local_c) {
    local_24 = (uint *)(local_c + 1);
    piVar8 = local_c;
    do {
      iVar6 = local_28;
      local_14 = *local_24;
      piVar10 = piVar8 + local_14 + 0x30;
      iVar19 = 1 << ((byte)*piVar10 & 0x1f);
      iVar16 = 0;
      local_20 = piVar8[local_14 + 0x20];
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[4] = 0;
      local_58[5] = 0;
      local_58[6] = 0;
      local_58[7] = 0;
      local_8 = (int *)0x0;
      piVar8 = local_c;
      if (*piVar10 != 0) {
        iVar11 = 0;
        if (0 < iVar19) {
          piVar8 = local_c + (local_14 + 10) * 8;
          do {
            if (*piVar8 < 0) {
              aiStack_78[iVar11] = 1;
            }
            else {
              aiStack_78[iVar11] = *(int *)(*(int *)(iVar6 + 0x720 + *piVar8 * 4) + 4);
            }
            iVar11 = iVar11 + 1;
            piVar8 = piVar8 + 1;
          } while (iVar11 < iVar19);
        }
        uVar17 = 0;
        iVar6 = 0;
        if (0 < local_20) {
          piVar8 = local_17c + (int)local_10;
          do {
            iVar11 = 0;
            if (0 < iVar19) {
              do {
                if (*piVar8 < aiStack_78[iVar11]) {
                  local_58[iVar6] = iVar11;
                  break;
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < iVar19);
            }
            piVar10 = local_58 + iVar6;
            iVar6 = iVar6 + 1;
            piVar8 = piVar8 + 1;
            uVar17 = (uint)local_8 | *piVar10 << ((byte)iVar16 & 0x1f);
            local_8 = (int *)uVar17;
            iVar16 = iVar16 + local_c[local_14 + 0x30];
          } while (iVar6 < local_20);
        }
        piVar8 = local_c;
        iVar6 = local_30 + local_c[local_14 + 0x40] * 0x38;
        if (((int)uVar17 < 0) || (*(int *)(*(int *)(iVar6 + 0xc) + 4) <= (int)uVar17)) {
          *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 0x514);
        }
        else {
          FUN_00401c40(local_34,*(undefined4 *)(*(int *)(iVar6 + 0x14) + uVar17 * 4),
                       *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0xc) + 8) + uVar17 * 4));
          *(int *)(param_1 + 0x514) =
               *(int *)(param_1 + 0x514) +
               *(int *)(*(int *)(*(int *)(iVar6 + 0xc) + 8) + uVar17 * 4);
        }
      }
      iVar6 = 0;
      if (0 < local_20) {
        local_18 = local_17c + (int)local_10;
        local_2c = (uint *)(local_14 * 8 + 0x50);
        do {
          iVar19 = piVar8[local_58[iVar6] + (int)local_2c];
          if (-1 < iVar19) {
            iVar11 = *local_18;
            iVar16 = local_30 + iVar19 * 0x38;
            piVar8 = local_c;
            if (iVar11 < *(int *)(local_30 + 4 + iVar19 * 0x38)) {
              if ((iVar11 < 0) || (*(int *)(*(int *)(iVar16 + 0xc) + 4) <= iVar11)) {
                iVar19 = 0;
              }
              else {
                FUN_00401c40(local_34,*(undefined4 *)(*(int *)(iVar16 + 0x14) + iVar11 * 4),
                             *(undefined4 *)(*(int *)(*(int *)(iVar16 + 0xc) + 8) + iVar11 * 4));
                iVar19 = *(int *)(*(int *)(*(int *)(iVar16 + 0xc) + 8) + iVar11 * 4);
              }
              *(int *)(param_1 + 0x518) = *(int *)(param_1 + 0x518) + iVar19;
              piVar8 = local_c;
            }
          }
          iVar6 = iVar6 + 1;
          local_18 = local_18 + 1;
        } while (iVar6 < local_20);
      }
      local_10 = (int *)((int)local_10 + local_20);
      local_1c = (uint *)((int)local_1c + 1);
      local_24 = local_24 + 1;
    } while ((int)local_1c < *piVar8);
  }
  iVar19 = local_c[0xd0] * *param_2;
  iVar16 = *(int *)(local_28 + *(int *)(local_58[8] + 0x1c) * 4) / 2;
  iVar6 = 0;
  local_8 = (int *)0x0;
  local_30 = 1;
  if (1 < *(int *)(param_1 + 0x504)) {
    piVar8 = (int *)(param_1 + 0x108);
    iVar11 = iVar19;
    do {
      uVar17 = param_2[*piVar8] & 0x7fff;
      iVar19 = iVar11;
      if (uVar17 == param_2[*piVar8]) {
        iVar6 = local_c[*piVar8 + 0xd1];
        iVar19 = local_c[0xd0] * uVar17;
        uVar17 = iVar19 - iVar11;
        iVar21 = iVar6 - (int)local_8;
        iVar9 = (int)uVar17 / iVar21;
        iVar12 = iVar9 + -1;
        if (-1 < (int)uVar17) {
          iVar12 = iVar9 + 1;
        }
        uVar20 = iVar9 * iVar21 >> 0x1f;
        iVar13 = 0;
        iVar15 = iVar16;
        if (iVar6 < iVar16) {
          iVar15 = iVar6;
        }
        if ((int)local_8 < iVar15) {
          *(int *)((int)param_3 + (int)local_8 * 4) = iVar11;
        }
        while (iVar4 = (int)local_8 + 1, local_8 = (int *)iVar6, iVar4 < iVar15) {
          iVar13 = iVar13 + (((uVar17 ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f)) -
                            ((iVar9 * iVar21 ^ uVar20) - uVar20));
          iVar3 = iVar9;
          if (iVar21 <= iVar13) {
            iVar13 = iVar13 - iVar21;
            iVar3 = iVar12;
          }
          iVar11 = iVar11 + iVar3;
          *(int *)((int)param_3 + iVar4 * 4) = iVar11;
          local_8 = (int *)iVar4;
        }
      }
      local_30 = local_30 + 1;
      piVar8 = piVar8 + 1;
      iVar11 = iVar19;
    } while (local_30 < *(int *)(param_1 + 0x504));
  }
  if (iVar6 < *(int *)(local_58[8] + 0x24) / 2) {
    do {
      iVar6 = iVar6 + 1;
      *(int *)((int)param_3 + iVar6 * 4 + -4) = iVar19;
    } while (iVar6 < *(int *)(local_58[8] + 0x24) / 2);
  }
  return 1;
}


/* FUN_006dfba0 @ 006dfba0  kind=gamemisc  attributed-by=none  size=142 */

undefined4 FUN_006dfba0(int param_1,undefined4 *param_2,int param_3,void *param_4)

{
  int iVar1;
  
  iVar1 = param_2[5];
  FUN_006dfdb0(param_2);
  if (param_3 != 0) {
    FUN_006e0150(param_2[*(int *)(param_1 + 0x1c) + 3],*param_2,param_3,param_2[1],
                 *(undefined4 *)(param_3 + param_2[1] * 4),(float)*(int *)(iVar1 + 0x10));
    return 1;
  }
  memset(param_4,0,param_2[*(int *)(param_1 + 0x1c) + 3] << 2);
  return 0;
}


/* FUN_006dfc30 @ 006dfc30  kind=gamemisc  attributed-by=none  size=312 */

int FUN_006dfc30(int param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar4 = (int)param_2;
  iVar1 = *(int *)((int)param_2 + 0x14);
  iVar5 = FUN_00401e80();
  if (0 < iVar5) {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar1 + 0x10);
    for (uVar6 = *(uint *)(iVar1 + 0x14); uVar6 != 0; uVar6 = uVar6 >> 1) {
    }
    iVar7 = FUN_00401e80();
    if ((iVar7 != -1) && (iVar7 < *(int *)(iVar1 + 0x14))) {
      iVar1 = *(int *)(iVar1 + 0x18 + iVar7 * 4);
      param_2 = 0.0;
      iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c) + 0xb20);
      iVar8 = FUN_006d1ab0();
      iVar9 = FUN_006d2d60(param_1 + 4,*(undefined4 *)(iVar4 + 4));
      if (iVar9 != -1) {
        iVar9 = *(int *)(iVar4 + 4);
        iVar10 = 0;
        if (0 < iVar9) {
          do {
            iVar11 = 0;
            if (iVar10 < iVar9) {
              do {
                if (*(int *)(iVar7 + iVar1 * 0x38) <= iVar11) break;
                iVar9 = iVar10 * 4;
                iVar10 = iVar10 + 1;
                iVar11 = iVar11 + 1;
                *(float *)(iVar8 + -4 + iVar10 * 4) = *(float *)(iVar8 + iVar9) + param_2;
              } while (iVar10 < *(int *)(iVar4 + 4));
            }
            iVar9 = *(int *)(iVar4 + 4);
            param_2 = *(float *)(iVar8 + -4 + iVar10 * 4);
          } while (iVar10 < iVar9);
        }
        *(float *)(iVar8 + *(int *)(iVar4 + 4) * 4) =
             ((float)iVar5 / (float)((1 << ((byte)uVar2 & 0x1f)) + -1)) * (float)iVar3;
        return iVar8;
      }
    }
  }
  return 0;
}


/* FUN_006dfd70 @ 006dfd70  kind=gamemisc  attributed-by=none  size=53 */

undefined4 * FUN_006dfd70(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = calloc(1,0x20);
  puVar1[1] = *param_2;
  *puVar1 = param_2[2];
  puVar1[5] = param_2;
  pvVar2 = calloc(2,4);
  puVar1[2] = pvVar2;
  return puVar1;
}


/* FUN_006dfdb0 @ 006dfdb0  kind=gamemisc  attributed-by=none  size=477 */

void FUN_006dfdb0(int *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int in_ECX;
  int iVar4;
  int in_EDX;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (*(int *)(param_1[2] + iVar1 * 4) == 0) {
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x40) + 4) + 0x1c) + iVar1 * 4) / 2;
    fVar11 = (float)*(int *)(in_EDX + 4) * 0.5;
    dVar7 = (double)(fVar11 * fVar11 * 1.85e-08);
    libm_sse2_atan_precise();
    dVar8 = (double)(fVar11 * 0.00074);
    libm_sse2_atan_precise();
    iVar2 = *param_1;
    pvVar3 = malloc(iVar5 * 4 + 4);
    *(void **)(param_1[2] + iVar1 * 4) = pvVar3;
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        fVar12 = (((float)*(int *)(in_EDX + 4) * 0.5) / (float)iVar5) * (float)iVar6;
        dVar9 = (double)(fVar12 * fVar12 * 1.85e-08);
        libm_sse2_atan_precise();
        dVar10 = (double)(fVar12 * 0.00074);
        libm_sse2_atan_precise();
        dVar9 = floor((dVar9 * 2.240000009536743 + dVar10 * 13.100000381469727 +
                      (double)(fVar12 * 0.0001)) *
                      (double)(float)((double)iVar2 /
                                     (dVar7 * 2.240000009536743 + dVar8 * 13.100000381469727 +
                                     (double)(fVar11 * 0.0001))));
        iVar4 = (int)dVar9;
        if (*param_1 <= iVar4) {
          iVar4 = *param_1 + -1;
        }
        iVar6 = iVar6 + 1;
        *(int *)(*(int *)(param_1[2] + iVar1 * 4) + -4 + iVar6 * 4) = iVar4;
      } while (iVar6 < iVar5);
    }
    *(undefined4 *)(*(int *)(param_1[2] + iVar1 * 4) + iVar6 * 4) = 0xffffffff;
    param_1[iVar1 + 3] = iVar5;
  }
  return;
}


/* FUN_006dff90 @ 006dff90  kind=gamemisc  attributed-by=none  size=242 */

int * FUN_006dff90(int param_1)

{
  int iVar1;
  int *piVar2;
  int *_Dst;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  _Dst = malloc(0x60);
  iVar3 = FUN_00401e80();
  *_Dst = iVar3;
  iVar3 = FUN_00401e80();
  _Dst[1] = iVar3;
  iVar3 = FUN_00401e80();
  _Dst[2] = iVar3;
  iVar3 = FUN_00401e80();
  _Dst[3] = iVar3;
  iVar3 = FUN_00401e80();
  _Dst[4] = iVar3;
  iVar3 = FUN_00401e80();
  iVar3 = iVar3 + 1;
  _Dst[5] = iVar3;
  if ((((0 < *_Dst) && (0 < _Dst[1])) && (0 < _Dst[2])) && (0 < iVar3)) {
    iVar4 = 0;
    if (0 < iVar3) {
      piVar5 = _Dst + 6;
      do {
        iVar3 = FUN_00401e80();
        *piVar5 = iVar3;
        if (((iVar3 < 0) || (*(int *)(iVar1 + 0x18) <= iVar3)) ||
           ((piVar2 = *(int **)(iVar1 + 0x720 + iVar3 * 4), piVar2[3] == 0 || (*piVar2 < 1))))
        goto LAB_006e006d;
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar4 < _Dst[5]);
    }
    return _Dst;
  }
LAB_006e006d:
  memset(_Dst,0,0x60);
  free(_Dst);
  return (int *)0x0;
}


/* FUN_006e0090 @ 006e0090  kind=gamemisc  attributed-by=none  size=93 */

void FUN_006e0090(undefined8 *param_1)

{
  void *_Memory;
  
  if (param_1 != (undefined8 *)0x0) {
    if (*(undefined4 **)(param_1 + 1) != (undefined4 *)0x0) {
      _Memory = (void *)**(undefined4 **)(param_1 + 1);
      if (_Memory != (void *)0x0) {
        free(_Memory);
      }
      if (*(void **)(*(int *)(param_1 + 1) + 4) != (void *)0x0) {
        free(*(void **)(*(int *)(param_1 + 1) + 4));
      }
      free(*(void **)(param_1 + 1));
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    free(param_1);
  }
  return;
}


/* FUN_006e00f0 @ 006e00f0  kind=gamemisc  attributed-by=none  size=34 */

void FUN_006e00f0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x60);
    free(param_1);
  }
  return;
}


/* FUN_006e0120 @ 006e0120  kind=gamemisc  attributed-by=none  size=37 */

int FUN_006e0120(float *param_1,float *param_2)

{
  return (uint)(*param_1 < *param_2) - (uint)(*param_2 < *param_1);
}


/* FUN_006e0150 @ 006e0150  kind=gamemisc  attributed-by=none  size=549 */

void FUN_006e0150(int param_1,int param_2,undefined8 *param_3,uint param_4,float param_5,
                 float param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int *in_EDX;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_20;
  
  iVar5 = 0;
  if (0 < (int)param_4) {
    if (1 < param_4) {
      uVar2 = param_4 & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      puVar4 = param_3;
      do {
        dVar7 = (double)(float)*puVar4;
        dVar8 = (double)(float)((ulonglong)*puVar4 >> 0x20);
        FUN_006e0390();
        iVar5 = iVar5 + 2;
        *puVar4 = CONCAT44((float)(dVar8 * 2.0),(float)(dVar7 * 2.0));
        puVar4 = puVar4 + 1;
      } while (iVar5 < (int)(param_4 - uVar2));
    }
    while (iVar5 < (int)param_4) {
      dVar7 = (double)*(float *)((int)param_3 + iVar5 * 4);
      libm_sse2_cos_precise();
      iVar5 = iVar5 + 1;
      *(float *)((int)param_3 + iVar5 * 4 + -4) = (float)(dVar7 * 2.0);
    }
  }
  iVar5 = 0;
  if (0 < param_1) {
    iVar6 = 0;
    iVar3 = *in_EDX;
    do {
      local_20 = 0.5;
      dVar7 = (double)((float)iVar3 * (3.1415927 / (float)param_2));
      libm_sse2_cos_precise();
      uVar2 = 1;
      fVar10 = (float)(dVar7 * 2.0);
      if ((int)param_4 < 2) {
        fVar12 = 0.5;
        local_20 = fVar12;
      }
      else {
        fVar12 = 0.5;
        do {
          iVar1 = uVar2 * 4;
          uVar2 = uVar2 + 2;
          fVar12 = fVar12 * (fVar10 - *(float *)((int)param_3 + iVar1 + -4));
          local_20 = (fVar10 - *(float *)((int)param_3 + uVar2 * 4 + -8)) * local_20;
        } while ((int)uVar2 < (int)param_4);
      }
      if (uVar2 == param_4) {
        fVar9 = fVar10 - *(float *)((int)param_3 + uVar2 * 4 + -4);
        fVar11 = 4.0;
        fVar10 = fVar10 * fVar10;
        fVar9 = fVar9 * fVar12;
        fVar9 = fVar9 * fVar9;
      }
      else {
        fVar11 = 2.0;
        fVar9 = (fVar10 + 2.0) * fVar12 * fVar12;
      }
      dVar7 = (double)(fVar9 + (fVar11 - fVar10) * local_20 * local_20);
      libm_sse2_sqrt_precise();
      dVar7 = ((double)param_5 / dVar7 - (double)param_6) * 0.1151292473077774;
      libm_sse2_exp_precise();
      iVar5 = iVar5 + 1;
      *(float *)(iVar6 + in_ECX) = (float)dVar7 * *(float *)(iVar6 + in_ECX);
      iVar1 = in_EDX[iVar5];
      while (iVar6 = iVar5 * 4, iVar1 == iVar3) {
        iVar5 = iVar5 + 1;
        *(float *)(iVar6 + in_ECX) = (float)dVar7 * *(float *)(iVar6 + in_ECX);
        iVar1 = in_EDX[iVar5];
      }
      iVar3 = iVar1;
    } while (iVar5 < param_1);
  }
  return;
}


/* FUN_006e0390 @ 006e0390  kind=gamemisc  attributed-by=none  size=828 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e0390(void)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  double dVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double local_20;
  double dStack_18;
  double local_10;
  double dStack_8;
  
  if (DAT_0076e2a0 < 2) {
    FUN_006e03b0();
    return;
  }
  auVar4 = in_XMM0 & _DAT_0076f250;
  dVar3 = auVar4._0_8_;
  dVar5 = auVar4._8_8_;
  auVar8._0_8_ = (dVar3 + 1.5707963267948966) * 0.3183098861837907;
  auVar8._8_8_ = (dVar5 + 1.5707963267948966) * 0.3183098861837907;
  auVar4 = auVar4 & _DAT_0076f250;
  auVar8 = roundpd(auVar8,auVar8,0);
  auVar6._0_4_ = -(uint)(0 < auVar4._0_4_);
  auVar6._4_4_ = -(uint)(0x40ff4000 < auVar4._4_4_);
  auVar6._8_4_ = -(uint)(0 < auVar4._8_4_);
  auVar6._12_4_ = -(uint)(0x40ff4000 < auVar4._12_4_);
  dVar7 = auVar8._0_8_ - 0.5;
  dVar9 = auVar8._8_8_ - 0.5;
  uVar1 = movmskpd(in_EAX,auVar6);
  if (uVar1 != 0) {
    auVar4._8_8_ = -(ulonglong)(1073741824.0 <= ABS(dVar5));
    auVar4._0_8_ = -(ulonglong)(1073741824.0 <= ABS(dVar3));
    iVar2 = movmskpd(&stack0x00000000,auVar4);
    if (uVar1 == 3) {
      if (iVar2 == 0) {
        return;
      }
    }
    else {
      local_10 = ((dVar3 - dVar7 * 3.141592502593994) - dVar7 * 1.5099578831723193e-07) -
                 dVar7 * 1.078060505991553e-14;
      dStack_8 = ((dVar5 - dVar9 * 3.141592502593994) - dVar9 * 1.5099578831723193e-07) -
                 dVar9 * 1.078060505991553e-14;
      local_20 = dVar7 * -6.564007085747001e-22 + local_10;
      dStack_18 = dVar9 * -6.564007085747001e-22 + dStack_8;
      local_10 = local_10 * local_10;
      dStack_8 = dStack_8 * dStack_8;
    }
    if ((uVar1 & 1) != 0) {
      FUN_006e0bd0(ABS(dVar3),&local_20);
      local_10 = local_20 * local_20;
    }
    if ((uVar1 & 2) != 0) {
      FUN_006e0bd0(ABS(dVar5),&dStack_18);
    }
  }
                    /* WARNING: Read-only address (ram,0x0076f250) is written */
  return;
}


/* FUN_006e03b0 @ 006e03b0  kind=gamemisc  attributed-by=none  size=416 */

void FUN_006e03b0(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  int in_XMM0_Da;
  uint in_XMM0_Db;
  int in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 local_70 [8];
  undefined1 auStack_68 [12];
  uint uStack_5c;
  int iStack_58;
  uint uStack_54;
  
  auVar1._4_4_ = -(uint)(0x40ff4000 < (in_XMM0_Db & 0x7fffffff));
  auVar1._0_4_ = -(uint)(0 < in_XMM0_Da);
  auVar1._8_4_ = -(uint)(0 < in_XMM0_Dc);
  auVar1._12_4_ = -(uint)(0x40ff4000 < (in_XMM0_Dd & 0x7fffffff));
  iVar2 = movmskpd(&stack0x00000000,auVar1);
  if (iVar2 != 0) {
    uStack_5c = in_XMM0_Db & 0x7fffffff;
    uStack_54 = in_XMM0_Dd & 0x7fffffff;
    iStack_58 = in_XMM0_Dc;
    FUN_006e0bd0(CONCAT44(in_XMM0_Db,in_XMM0_Da) & 0x7fffffffffffffff,local_70);
    FUN_006e0bd0(CONCAT44(uStack_54,iStack_58),auStack_68);
  }
  return;
}


/* ___common_srl @ 006e0b70  kind=gamemisc  attributed-by=none  size=45 */

/* Library Function - Single Match
    ___common_srl
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined8 ___common_srl(uint param_1,int param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = param_2 >> 0x1f;
  if (0x3f < param_3) {
    return CONCAT44(iVar1,iVar1);
  }
  if (param_3 < 0x20) {
    return CONCAT44(param_2 >> (param_3 & 0x1f),
                    param_1 >> (param_3 & 0x1f) | param_2 << 0x20 - (param_3 & 0x1f));
  }
  return CONCAT44(iVar1,param_2 >> (param_3 & 0x1f));
}


/* ___common_sll @ 006e0ba0  kind=gamemisc  attributed-by=none  size=43 */

/* Library Function - Single Match
    ___common_sll
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

longlong ___common_sll(uint param_1,int param_2,byte param_3)

{
  if (0x3f < param_3) {
    return 0;
  }
  if (param_3 < 0x20) {
    return CONCAT44(param_2 << (param_3 & 0x1f) | param_1 >> 0x20 - (param_3 & 0x1f),
                    param_1 << (param_3 & 0x1f));
  }
  return (ulonglong)(param_1 << (param_3 & 0x1f)) << 0x20;
}


/* FUN_006e0bd0 @ 006e0bd0  kind=gamemisc  attributed-by=none  size=752 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006e0bd0(undefined4 param_1,uint param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  undefined8 uVar9;
  uint uStack_6c;
  undefined2 uStack_68;
  uint uStack_5c;
  undefined2 uStack_58;
  undefined8 local_30;
  float10 local_28;
  
  if ((int)param_2 < 0x7ff00000) {
    if (param_2 < 0x40ff4000) {
      uVar5 = (int)ROUND(_DAT_0076f770 * (float10)(double)CONCAT44(param_2,param_1)) | 1;
      fVar6 = (float10)(int)uVar5;
      local_28 = ((((float10)(double)CONCAT44(param_2,param_1) - (float10)1.570796325802803 * fVar6)
                  - (float10)9.920935739593517e-10 * fVar6) - (float10)5.721188709663575e-18 * fVar6
                 ) - (float10)1.6446256936324258e-26 * fVar6;
    }
    else {
      uVar5 = param_2 >> 0x14 & 0x7ff;
      fVar7 = (float10)(double)CONCAT44(param_2 + 0xf3800000,param_1);
      uStack_6c = (uint)((unkuint10)fVar7 >> 0x20);
      uStack_68 = (undefined2)((unkuint10)fVar7 >> 0x40);
      iVar4 = (int)(uVar5 - 0x41c) / 0x19;
      fVar6 = (float10)CONCAT28(uStack_68,((ulonglong)uStack_6c & 0xffffffc0) << 0x20);
      fVar7 = fVar7 - fVar6;
      if ((int)(iVar4 * -0x19 + -0x41c + uVar5) < 0x11) {
        local_28 = _DAT_0076f740;
      }
      else {
        iVar3 = iVar4 * 8;
        iVar1 = iVar4 * 8;
        iVar4 = iVar4 + 1;
        local_28 = (float10)*(double *)(&DAT_0076f408 + iVar1) * fVar6 +
                   fVar7 * (float10)*(double *)(&DAT_0076f400 + iVar3);
        uStack_5c = (uint)((unkuint10)local_28 >> 0x20);
        uStack_58 = (undefined2)((unkuint10)local_28 >> 0x40);
        local_28 = local_28 -
                   (float10)CONCAT28(uStack_58,((ulonglong)uStack_5c & 0xffffffc0) << 0x20);
      }
      fVar8 = (float10)*(double *)(&DAT_0076f408 + iVar4 * 8) * fVar7 +
              (float10)*(double *)(&DAT_0076f410 + iVar4 * 8) * fVar6;
      local_28 = local_28 +
                 fVar6 * (float10)*(double *)(&DAT_0076f408 + iVar4 * 8) +
                 (float10)*(double *)(&DAT_0076f400 + iVar4 * 8) * fVar7;
      dVar2 = (double)(local_28 + fVar8);
      iVar3 = 0x433 - ((uint)((ulonglong)dVar2 >> 0x34) & 0x7ff);
      uVar9 = ___common_srl(dVar2,iVar3);
      uVar5 = (uint)uVar9 | 1;
      local_30 = (double)___common_sll(uVar5,(int)((ulonglong)uVar9 >> 0x20),iVar3);
      fVar6 = (float10)CONCAT28(uStack_68,((ulonglong)uStack_6c & 0xffffffc0) << 0x20);
      local_28 = _DAT_0076f760 *
                 ((float10)*(double *)(&DAT_0076f438 + iVar4 * 8) * fVar6 +
                  fVar7 * (float10)*(double *)(&DAT_0076f430 + iVar4 * 8) +
                 (float10)*(double *)(&DAT_0076f430 + iVar4 * 8) * fVar6 +
                 (float10)*(double *)(&DAT_0076f428 + iVar4 * 8) * fVar7 +
                 (float10)*(double *)(&DAT_0076f420 + iVar4 * 8) * fVar7 +
                 (float10)*(double *)(&DAT_0076f428 + iVar4 * 8) * fVar6 +
                 (float10)*(double *)(&DAT_0076f420 + iVar4 * 8) * fVar6 +
                 (float10)*(double *)(&DAT_0076f418 + iVar4 * 8) * fVar7 +
                 (float10)*(double *)(&DAT_0076f410 + iVar4 * 8) * fVar7 +
                 (float10)*(double *)(&DAT_0076f418 + iVar4 * 8) * fVar6 +
                 fVar8 + (local_28 - (float10)local_30));
    }
    *param_3 = (double)local_28;
    return ~(uVar5 << 0x1e) & 0x80000000;
  }
  *(undefined4 *)param_3 = 0xffffffff;
  *(undefined4 *)((int)param_3 + 4) = 0x7fffffff;
  return 0;
}


/* FUN_006e0ec0 @ 006e0ec0  kind=gamemisc  attributed-by=none  size=778 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006e0ec0(undefined4 param_1,uint param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  longlong lVar9;
  uint uStack_6c;
  undefined2 uStack_68;
  uint uStack_5c;
  undefined2 uStack_58;
  undefined8 local_40;
  float10 local_38;
  
  if (0x7fefffff < (int)param_2) {
    *(undefined4 *)param_3 = 0xffffffff;
    *(undefined4 *)((int)param_3 + 4) = 0x7fffffff;
    return 0;
  }
  if (param_2 < 0x40ff4000) {
    uVar4 = (int)ROUND(_DAT_0076f7b0 * (float10)(double)CONCAT44(param_2,param_1)) + 1U & 0xfffffffe
    ;
    fVar6 = (float10)(int)uVar4;
    local_38 = ((((float10)(double)CONCAT44(param_2,param_1) - (float10)0.7853981629014015 * fVar6)
                - (float10)4.960467869796759e-10 * fVar6) - (float10)2.8605943548317875e-18 * fVar6)
               - fVar6 * (float10)8.223128468162129e-27;
  }
  else {
    uVar4 = param_2 >> 0x14 & 0x7ff;
    fVar7 = (float10)(double)CONCAT44(param_2 + 0xf3800000,param_1);
    uStack_6c = (uint)((unkuint10)fVar7 >> 0x20);
    uStack_68 = (undefined2)((unkuint10)fVar7 >> 0x40);
    iVar5 = (int)(uVar4 - 0x41c) / 0x19;
    fVar6 = (float10)CONCAT28(uStack_68,((ulonglong)uStack_6c & 0xffffffc0) << 0x20);
    fVar7 = fVar7 - fVar6;
    if ((int)(iVar5 * -0x19 + -0x41c + uVar4) < 0x11) {
      local_38 = _DAT_0076f750;
    }
    else {
      iVar3 = iVar5 * 8;
      iVar1 = iVar5 * 8;
      iVar5 = iVar5 + 1;
      local_38 = (float10)*(double *)(&DAT_0076f5a8 + iVar1) * fVar6 +
                 fVar7 * (float10)*(double *)(&DAT_0076f5a0 + iVar3);
      uStack_5c = (uint)((unkuint10)local_38 >> 0x20);
      uStack_58 = (undefined2)((unkuint10)local_38 >> 0x40);
      local_38 = local_38 - (float10)CONCAT28(uStack_58,((ulonglong)uStack_5c & 0xffffffc0) << 0x20)
      ;
    }
    fVar8 = fVar6 * (float10)*(double *)(&DAT_0076f5b0 + iVar5 * 8) +
            fVar7 * (float10)*(double *)(&DAT_0076f5a8 + iVar5 * 8);
    local_38 = local_38 +
               fVar6 * (float10)*(double *)(&DAT_0076f5a8 + iVar5 * 8) +
               (float10)*(double *)(&DAT_0076f5a0 + iVar5 * 8) * fVar7;
    dVar2 = (double)(local_38 + fVar8);
    iVar3 = 0x433 - ((uint)((ulonglong)dVar2 >> 0x34) & 0x7ff);
    lVar9 = ___common_srl(dVar2,iVar3);
    uVar4 = (uint)(lVar9 + 1) & 0xfffffffe;
    local_40 = (double)___common_sll(uVar4,(int)((ulonglong)(lVar9 + 1) >> 0x20),iVar3);
    fVar6 = (float10)CONCAT28(uStack_68,((ulonglong)uStack_6c & 0xffffffc0) << 0x20);
    local_38 = (fVar6 * (float10)*(double *)(&DAT_0076f5d0 + iVar5 * 8) +
                (float10)*(double *)(&DAT_0076f5c8 + iVar5 * 8) * fVar7 +
                fVar6 * (float10)*(double *)(&DAT_0076f5c8 + iVar5 * 8) +
                (float10)*(double *)(&DAT_0076f5c0 + iVar5 * 8) * fVar7 +
                fVar6 * (float10)*(double *)(&DAT_0076f5c0 + iVar5 * 8) +
                (float10)*(double *)(&DAT_0076f5b8 + iVar5 * 8) * fVar7 +
                (float10)*(double *)(&DAT_0076f5b0 + iVar5 * 8) * fVar7 +
                (float10)*(double *)(&DAT_0076f5b8 + iVar5 * 8) * fVar6 +
                (local_38 - (float10)local_40) + fVar8 +
               (float10)*(double *)(&DAT_0076f5d0 + iVar5 * 8) * fVar7 +
               fVar6 * (float10)*(double *)(&DAT_0076f5d8 + iVar5 * 8)) * _DAT_0076f7a0;
  }
  iVar5 = (int)uVar4 >> 1;
  if (_DAT_0076f7a0 < local_38) {
    iVar5 = iVar5 + -3;
    local_38 = local_38 - _DAT_0076f760;
  }
  *param_3 = (double)local_38;
  return iVar5;
}


/* FUN_006f93e0 @ 006f93e0  kind=gamemisc  attributed-by=none  size=12 */

void FUN_006f93e0(void)

{
  _atexit(std::error_category::~error_category);
  return;
}


/* FUN_006f93f0 @ 006f93f0  kind=gamemisc  attributed-by=none  size=12 */

void FUN_006f93f0(void)

{
  _atexit(std::error_category::~error_category);
  return;
}


/* FUN_006f9400 @ 006f9400  kind=gamemisc  attributed-by=none  size=12 */

void FUN_006f9400(void)

{
  _atexit(std::error_category::~error_category);
  return;
}


/* FUN_006f9430 @ 006f9430  kind=gamemisc  attributed-by=none  size=29 */

void FUN_006f9430(void)

{
  FUN_0040c280(&DAT_006fc918,0);
  _atexit(FUN_006fb150);
  return;
}


/* FUN_006f9450 @ 006f9450  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9450(void)

{
  _DAT_0076af6c = 0xffff;
  DAT_0076af6e = 0xff;
  DAT_0076af6f = 0;
  return;
}


/* FUN_006f9480 @ 006f9480  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9480(void)

{
  _DAT_0076af70 = 0xc8c8;
  _DAT_0076af72 = 0x1c8;
  return;
}


/* FUN_006f94b0 @ 006f94b0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f94b0(void)

{
  _DAT_0076af68 = 0xffff;
  DAT_0076af6a = 0xff;
  DAT_0076af6b = 0x82;
  return;
}


/* FUN_006f94e0 @ 006f94e0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f94e0(void)

{
  _DAT_0076af80 = 0xffff;
  DAT_0076af82 = 0xff;
  DAT_0076af83 = 0;
  return;
}


/* FUN_006f9510 @ 006f9510  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9510(void)

{
  _DAT_0076af84 = 0xc8c8;
  _DAT_0076af86 = 0x1c8;
  return;
}


/* FUN_006f9540 @ 006f9540  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9540(void)

{
  _DAT_0076af7c = 0xffff;
  DAT_0076af7e = 0xff;
  DAT_0076af7f = 0x82;
  return;
}


/* FUN_006f9570 @ 006f9570  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9570(void)

{
  _DAT_0076af90 = 0xffff;
  DAT_0076af92 = 0xff;
  DAT_0076af93 = 0;
  return;
}


/* FUN_006f95a0 @ 006f95a0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f95a0(void)

{
  _DAT_0076af94 = 0xc8c8;
  _DAT_0076af96 = 0x1c8;
  return;
}


/* FUN_006f95d0 @ 006f95d0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f95d0(void)

{
  _DAT_0076af8c = 0xffff;
  DAT_0076af8e = 0xff;
  DAT_0076af8f = 0x82;
  return;
}


/* FUN_006f9600 @ 006f9600  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9600(void)

{
  _DAT_0076afa0 = 0xffff;
  DAT_0076afa2 = 0xff;
  DAT_0076afa3 = 0;
  return;
}


/* FUN_006f9630 @ 006f9630  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9630(void)

{
  _DAT_0076afa4 = 0xc8c8;
  _DAT_0076afa6 = 0x1c8;
  return;
}


/* FUN_006f9660 @ 006f9660  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9660(void)

{
  _DAT_0076af9c = 0xffff;
  DAT_0076af9e = 0xff;
  DAT_0076af9f = 0x82;
  return;
}


/* FUN_006f9690 @ 006f9690  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9690(void)

{
  _DAT_0076afb0 = 0xffff;
  DAT_0076afb2 = 0xff;
  DAT_0076afb3 = 0;
  return;
}


/* FUN_006f96c0 @ 006f96c0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f96c0(void)

{
  _DAT_0076afb4 = 0xc8c8;
  _DAT_0076afb6 = 0x1c8;
  return;
}


/* FUN_006f96f0 @ 006f96f0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f96f0(void)

{
  _DAT_0076afac = 0xffff;
  DAT_0076afae = 0xff;
  DAT_0076afaf = 0x82;
  return;
}


/* FUN_006f9720 @ 006f9720  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9720(void)

{
  _DAT_0076afc0 = 0xffff;
  DAT_0076afc2 = 0xff;
  DAT_0076afc3 = 0;
  return;
}


/* FUN_006f9750 @ 006f9750  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9750(void)

{
  _DAT_0076afc4 = 0xc8c8;
  _DAT_0076afc6 = 0x1c8;
  return;
}


/* FUN_006f9780 @ 006f9780  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9780(void)

{
  _DAT_0076afbc = 0xffff;
  DAT_0076afbe = 0xff;
  DAT_0076afbf = 0x82;
  return;
}


/* FUN_006f97b0 @ 006f97b0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f97b0(void)

{
  _DAT_0076afdc = 0xffff;
  DAT_0076afde = 0xff;
  DAT_0076afdf = 0;
  return;
}


/* FUN_006f97e0 @ 006f97e0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f97e0(void)

{
  _DAT_0076afe0 = 0xc8c8;
  _DAT_0076afe2 = 0x1c8;
  return;
}


/* FUN_006f9810 @ 006f9810  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9810(void)

{
  _DAT_0076afd8 = 0xffff;
  DAT_0076afda = 0xff;
  DAT_0076afdb = 0x82;
  return;
}


/* FUN_006f9840 @ 006f9840  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9840(void)

{
  _DAT_0076aff0 = 0xffff;
  DAT_0076aff2 = 0xff;
  DAT_0076aff3 = 0;
  return;
}


/* FUN_006f9870 @ 006f9870  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9870(void)

{
  _DAT_0076aff4 = 0xc8c8;
  _DAT_0076aff6 = 0x1c8;
  return;
}


/* FUN_006f98a0 @ 006f98a0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f98a0(void)

{
  _DAT_0076afec = 0xffff;
  DAT_0076afee = 0xff;
  DAT_0076afef = 0x82;
  return;
}


/* FUN_006f98d0 @ 006f98d0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f98d0(void)

{
  _DAT_0076b000 = 0xffff;
  DAT_0076b002 = 0xff;
  DAT_0076b003 = 0;
  return;
}


/* FUN_006f9900 @ 006f9900  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9900(void)

{
  _DAT_0076b004 = 0xc8c8;
  _DAT_0076b006 = 0x1c8;
  return;
}


/* FUN_006f9930 @ 006f9930  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9930(void)

{
  _DAT_0076affc = 0xffff;
  DAT_0076affe = 0xff;
  DAT_0076afff = 0x82;
  return;
}


/* FUN_006f9960 @ 006f9960  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9960(void)

{
  _DAT_0076b014 = 0xffff;
  DAT_0076b016 = 0xff;
  DAT_0076b017 = 0;
  return;
}


/* FUN_006f9990 @ 006f9990  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9990(void)

{
  _DAT_0076b018 = 0xc8c8;
  _DAT_0076b01a = 0x1c8;
  return;
}


/* FUN_006f99c0 @ 006f99c0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f99c0(void)

{
  _DAT_0076b010 = 0xffff;
  DAT_0076b012 = 0xff;
  DAT_0076b013 = 0x82;
  return;
}


/* FUN_006f99f0 @ 006f99f0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f99f0(void)

{
  _DAT_0076b024 = 0xffff;
  DAT_0076b026 = 0xff;
  DAT_0076b027 = 0;
  return;
}


/* FUN_006f9a20 @ 006f9a20  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9a20(void)

{
  _DAT_0076b028 = 0xc8c8;
  _DAT_0076b02a = 0x1c8;
  return;
}


/* FUN_006f9a50 @ 006f9a50  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9a50(void)

{
  _DAT_0076b020 = 0xffff;
  DAT_0076b022 = 0xff;
  DAT_0076b023 = 0x82;
  return;
}


/* FUN_006f9a80 @ 006f9a80  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9a80(void)

{
  _DAT_0076b034 = 0xffff;
  DAT_0076b036 = 0xff;
  DAT_0076b037 = 0;
  return;
}


/* FUN_006f9ab0 @ 006f9ab0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9ab0(void)

{
  _DAT_0076b038 = 0xc8c8;
  _DAT_0076b03a = 0x1c8;
  return;
}


/* FUN_006f9ae0 @ 006f9ae0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9ae0(void)

{
  _DAT_0076b030 = 0xffff;
  DAT_0076b032 = 0xff;
  DAT_0076b033 = 0x82;
  return;
}


/* FUN_006f9b10 @ 006f9b10  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9b10(void)

{
  _DAT_0076b058 = 0xffff;
  DAT_0076b05a = 0xff;
  DAT_0076b05b = 0;
  return;
}


/* FUN_006f9b40 @ 006f9b40  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9b40(void)

{
  _DAT_0076b05c = 0xc8c8;
  _DAT_0076b05e = 0x1c8;
  return;
}


/* FUN_006f9b70 @ 006f9b70  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9b70(void)

{
  _DAT_0076b054 = 0xffff;
  DAT_0076b056 = 0xff;
  DAT_0076b057 = 0x82;
  return;
}


/* FUN_006f9ba0 @ 006f9ba0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9ba0(void)

{
  _DAT_0076b158 = 0xffff;
  DAT_0076b15a = 0xff;
  DAT_0076b15b = 0;
  return;
}


/* FUN_006f9bd0 @ 006f9bd0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9bd0(void)

{
  _DAT_0076b15c = 0xc8c8;
  _DAT_0076b15e = 0x1c8;
  return;
}


/* FUN_006f9c00 @ 006f9c00  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9c00(void)

{
  _DAT_0076b154 = 0xffff;
  DAT_0076b156 = 0xff;
  DAT_0076b157 = 0x82;
  return;
}


/* FUN_006f9c30 @ 006f9c30  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9c30(void)

{
  _DAT_0076b174 = 0xffff;
  DAT_0076b176 = 0xff;
  DAT_0076b177 = 0;
  return;
}


/* FUN_006f9c60 @ 006f9c60  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9c60(void)

{
  _DAT_0076b178 = 0xc8c8;
  _DAT_0076b17a = 0x1c8;
  return;
}


/* FUN_006f9c90 @ 006f9c90  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9c90(void)

{
  _DAT_0076b170 = 0xffff;
  DAT_0076b172 = 0xff;
  DAT_0076b173 = 0x82;
  return;
}


/* FUN_006f9cc0 @ 006f9cc0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9cc0(void)

{
  _DAT_0076b188 = 0xffff;
  DAT_0076b18a = 0xff;
  DAT_0076b18b = 0;
  return;
}


/* FUN_006f9cf0 @ 006f9cf0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9cf0(void)

{
  _DAT_0076b18c = 0xc8c8;
  _DAT_0076b18e = 0x1c8;
  return;
}


/* FUN_006f9d20 @ 006f9d20  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9d20(void)

{
  _DAT_0076b184 = 0xffff;
  DAT_0076b186 = 0xff;
  DAT_0076b187 = 0x82;
  return;
}


/* FUN_006f9d50 @ 006f9d50  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9d50(void)

{
  _DAT_0076b198 = 0xffff;
  DAT_0076b19a = 0xff;
  DAT_0076b19b = 0;
  return;
}


/* FUN_006f9d80 @ 006f9d80  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9d80(void)

{
  _DAT_0076b19c = 0xc8c8;
  _DAT_0076b19e = 0x1c8;
  return;
}


/* FUN_006f9db0 @ 006f9db0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9db0(void)

{
  _DAT_0076b194 = 0xffff;
  DAT_0076b196 = 0xff;
  DAT_0076b197 = 0x82;
  return;
}


/* FUN_006f9de0 @ 006f9de0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9de0(void)

{
  _DAT_0076b1ac = 0xffff;
  DAT_0076b1ae = 0xff;
  DAT_0076b1af = 0;
  return;
}


/* FUN_006f9e10 @ 006f9e10  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9e10(void)

{
  _DAT_0076b1b0 = 0xc8c8;
  _DAT_0076b1b2 = 0x1c8;
  return;
}


/* FUN_006f9e40 @ 006f9e40  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9e40(void)

{
  _DAT_0076b1a8 = 0xffff;
  DAT_0076b1aa = 0xff;
  DAT_0076b1ab = 0x82;
  return;
}


/* FUN_006f9ee0 @ 006f9ee0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9ee0(void)

{
  _DAT_0076b20c = 0xffff;
  DAT_0076b20e = 0xff;
  DAT_0076b20f = 0;
  return;
}


/* FUN_006f9f20 @ 006f9f20  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9f20(void)

{
  _DAT_0076b210 = 0xc8c8;
  _DAT_0076b212 = 0x1c8;
  return;
}


/* FUN_006f9f50 @ 006f9f50  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9f50(void)

{
  _DAT_0076b208 = 0xffff;
  DAT_0076b20a = 0xff;
  DAT_0076b20b = 0x82;
  return;
}


/* FUN_006f9f80 @ 006f9f80  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9f80(void)

{
  _DAT_0076b240 = 0xffff;
  DAT_0076b242 = 0xff;
  DAT_0076b243 = 0;
  return;
}


/* FUN_006f9fb0 @ 006f9fb0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9fb0(void)

{
  _DAT_0076b244 = 0xc8c8;
  _DAT_0076b246 = 0x1c8;
  return;
}


/* FUN_006f9ff0 @ 006f9ff0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9ff0(void)

{
  _DAT_0076b23c = 0xffff;
  DAT_0076b23e = 0xff;
  DAT_0076b23f = 0x82;
  return;
}


/* FUN_006fa020 @ 006fa020  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa020(void)

{
  _DAT_0076b260 = 0xffff;
  DAT_0076b262 = 0xff;
  DAT_0076b263 = 0;
  return;
}


/* FUN_006fa050 @ 006fa050  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa050(void)

{
  _DAT_0076b264 = 0xc8c8;
  _DAT_0076b266 = 0x1c8;
  return;
}


/* FUN_006fa080 @ 006fa080  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa080(void)

{
  _DAT_0076b25c = 0xffff;
  DAT_0076b25e = 0xff;
  DAT_0076b25f = 0x82;
  return;
}


/* FUN_006fa0b0 @ 006fa0b0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa0b0(void)

{
  _DAT_0076b278 = 0xffff;
  DAT_0076b27a = 0xff;
  DAT_0076b27b = 0;
  return;
}


/* FUN_006fa0e0 @ 006fa0e0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa0e0(void)

{
  _DAT_0076b27c = 0xc8c8;
  _DAT_0076b27e = 0x1c8;
  return;
}


/* FUN_006fa110 @ 006fa110  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa110(void)

{
  _DAT_0076b274 = 0xffff;
  DAT_0076b276 = 0xff;
  DAT_0076b277 = 0x82;
  return;
}


/* FUN_006fa140 @ 006fa140  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa140(void)

{
  _DAT_0076b288 = 0xffff;
  DAT_0076b28a = 0xff;
  DAT_0076b28b = 0;
  return;
}


/* FUN_006fa170 @ 006fa170  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa170(void)

{
  _DAT_0076b28c = 0xc8c8;
  _DAT_0076b28e = 0x1c8;
  return;
}


/* FUN_006fa1a0 @ 006fa1a0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa1a0(void)

{
  _DAT_0076b284 = 0xffff;
  DAT_0076b286 = 0xff;
  DAT_0076b287 = 0x82;
  return;
}


/* FUN_006fa1d0 @ 006fa1d0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa1d0(void)

{
  _DAT_0076b29c = 0xffff;
  DAT_0076b29e = 0xff;
  DAT_0076b29f = 0;
  return;
}


/* FUN_006fa200 @ 006fa200  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa200(void)

{
  _DAT_0076b2a0 = 0xc8c8;
  _DAT_0076b2a2 = 0x1c8;
  return;
}


/* FUN_006fa230 @ 006fa230  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa230(void)

{
  _DAT_0076b298 = 0xffff;
  DAT_0076b29a = 0xff;
  DAT_0076b29b = 0x82;
  return;
}


/* FUN_006fa260 @ 006fa260  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa260(void)

{
  _DAT_0076b2b0 = 0xffff;
  DAT_0076b2b2 = 0xff;
  DAT_0076b2b3 = 0;
  return;
}


/* FUN_006fa290 @ 006fa290  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa290(void)

{
  _DAT_0076b2b4 = 0xc8c8;
  _DAT_0076b2b6 = 0x1c8;
  return;
}


/* FUN_006fa2c0 @ 006fa2c0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa2c0(void)

{
  _DAT_0076b2ac = 0xffff;
  DAT_0076b2ae = 0xff;
  DAT_0076b2af = 0x82;
  return;
}


/* FUN_006fa2f0 @ 006fa2f0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa2f0(void)

{
  _DAT_0076b2c0 = 0xffff;
  DAT_0076b2c2 = 0xff;
  DAT_0076b2c3 = 0;
  return;
}


/* FUN_006fa320 @ 006fa320  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa320(void)

{
  _DAT_0076b2c4 = 0xc8c8;
  _DAT_0076b2c6 = 0x1c8;
  return;
}


/* FUN_006fa350 @ 006fa350  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa350(void)

{
  _DAT_0076b2bc = 0xffff;
  DAT_0076b2be = 0xff;
  DAT_0076b2bf = 0x82;
  return;
}


/* FUN_006fa380 @ 006fa380  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa380(void)

{
  _DAT_0076b2d0 = 0xffff;
  DAT_0076b2d2 = 0xff;
  DAT_0076b2d3 = 0;
  return;
}


/* FUN_006fa3b0 @ 006fa3b0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa3b0(void)

{
  _DAT_0076b2d4 = 0xc8c8;
  _DAT_0076b2d6 = 0x1c8;
  return;
}


/* FUN_006fa3e0 @ 006fa3e0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa3e0(void)

{
  _DAT_0076b2cc = 0xffff;
  DAT_0076b2ce = 0xff;
  DAT_0076b2cf = 0x82;
  return;
}


/* FUN_006fa410 @ 006fa410  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa410(void)

{
  _DAT_0076b2e0 = 0xffff;
  DAT_0076b2e2 = 0xff;
  DAT_0076b2e3 = 0;
  return;
}


/* FUN_006fa440 @ 006fa440  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa440(void)

{
  _DAT_0076b2e4 = 0xc8c8;
  _DAT_0076b2e6 = 0x1c8;
  return;
}


/* FUN_006fa470 @ 006fa470  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa470(void)

{
  _DAT_0076b2dc = 0xffff;
  DAT_0076b2de = 0xff;
  DAT_0076b2df = 0x82;
  return;
}


/* FUN_006fa4a0 @ 006fa4a0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa4a0(void)

{
  _DAT_0076b2f0 = 0xffff;
  DAT_0076b2f2 = 0xff;
  DAT_0076b2f3 = 0;
  return;
}


/* FUN_006fa4d0 @ 006fa4d0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa4d0(void)

{
  _DAT_0076b2f4 = 0xc8c8;
  _DAT_0076b2f6 = 0x1c8;
  return;
}


/* FUN_006fa500 @ 006fa500  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa500(void)

{
  _DAT_0076b2ec = 0xffff;
  DAT_0076b2ee = 0xff;
  DAT_0076b2ef = 0x82;
  return;
}


/* FUN_006fa530 @ 006fa530  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa530(void)

{
  _DAT_0076b300 = 0xffff;
  DAT_0076b302 = 0xff;
  DAT_0076b303 = 0;
  return;
}


/* FUN_006fa560 @ 006fa560  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa560(void)

{
  _DAT_0076b304 = 0xc8c8;
  _DAT_0076b306 = 0x1c8;
  return;
}


/* FUN_006fa590 @ 006fa590  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa590(void)

{
  _DAT_0076b2fc = 0xffff;
  DAT_0076b2fe = 0xff;
  DAT_0076b2ff = 0x82;
  return;
}


/* FUN_006fa5c0 @ 006fa5c0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa5c0(void)

{
  _DAT_0076b310 = 0xffff;
  DAT_0076b312 = 0xff;
  DAT_0076b313 = 0;
  return;
}


/* FUN_006fa5f0 @ 006fa5f0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa5f0(void)

{
  _DAT_0076b314 = 0xc8c8;
  _DAT_0076b316 = 0x1c8;
  return;
}


/* FUN_006fa620 @ 006fa620  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa620(void)

{
  _DAT_0076b30c = 0xffff;
  DAT_0076b30e = 0xff;
  DAT_0076b30f = 0x82;
  return;
}


/* FUN_006fa650 @ 006fa650  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa650(void)

{
  _DAT_0076b320 = 0xffff;
  DAT_0076b322 = 0xff;
  DAT_0076b323 = 0;
  return;
}


/* FUN_006fa680 @ 006fa680  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa680(void)

{
  _DAT_0076b324 = 0xc8c8;
  _DAT_0076b326 = 0x1c8;
  return;
}


/* FUN_006fa6b0 @ 006fa6b0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa6b0(void)

{
  _DAT_0076b31c = 0xffff;
  DAT_0076b31e = 0xff;
  DAT_0076b31f = 0x82;
  return;
}


/* FUN_006fa6e0 @ 006fa6e0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa6e0(void)

{
  _DAT_0076b330 = 0xffff;
  DAT_0076b332 = 0xff;
  DAT_0076b333 = 0;
  return;
}


/* FUN_006fa710 @ 006fa710  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa710(void)

{
  _DAT_0076b334 = 0xc8c8;
  _DAT_0076b336 = 0x1c8;
  return;
}


/* FUN_006fa740 @ 006fa740  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa740(void)

{
  _DAT_0076b32c = 0xffff;
  DAT_0076b32e = 0xff;
  DAT_0076b32f = 0x82;
  return;
}


/* FUN_006fa770 @ 006fa770  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa770(void)

{
  _DAT_0076b350 = 0xffff;
  DAT_0076b352 = 0xff;
  DAT_0076b353 = 0;
  return;
}


/* FUN_006fa7a0 @ 006fa7a0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa7a0(void)

{
  _DAT_0076b354 = 0xc8c8;
  _DAT_0076b356 = 0x1c8;
  return;
}


/* FUN_006fa7d0 @ 006fa7d0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa7d0(void)

{
  _DAT_0076b34c = 0xffff;
  DAT_0076b34e = 0xff;
  DAT_0076b34f = 0x82;
  return;
}


/* FUN_006fa800 @ 006fa800  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa800(void)

{
  _DAT_0076b77c = 0xffff;
  DAT_0076b77e = 0xff;
  DAT_0076b77f = 0;
  return;
}


/* FUN_006fa830 @ 006fa830  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa830(void)

{
  _DAT_0076b780 = 0xc8c8;
  _DAT_0076b782 = 0x1c8;
  return;
}


/* FUN_006fa860 @ 006fa860  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa860(void)

{
  _DAT_0076b778 = 0xffff;
  DAT_0076b77a = 0xff;
  DAT_0076b77b = 0x82;
  return;
}


/* FUN_006fa890 @ 006fa890  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa890(void)

{
  _DAT_0076b78c = 0xffff;
  DAT_0076b78e = 0xff;
  DAT_0076b78f = 0;
  return;
}


/* FUN_006fa8c0 @ 006fa8c0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa8c0(void)

{
  _DAT_0076b790 = 0xc8c8;
  _DAT_0076b792 = 0x1c8;
  return;
}


/* FUN_006fa8f0 @ 006fa8f0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa8f0(void)

{
  _DAT_0076b788 = 0xffff;
  DAT_0076b78a = 0xff;
  DAT_0076b78b = 0x82;
  return;
}


/* FUN_006fa920 @ 006fa920  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa920(void)

{
  _DAT_0076b7a0 = 0xffff;
  DAT_0076b7a2 = 0xff;
  DAT_0076b7a3 = 0;
  return;
}


/* FUN_006fa950 @ 006fa950  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa950(void)

{
  _DAT_0076b7a4 = 0xc8c8;
  _DAT_0076b7a6 = 0x1c8;
  return;
}


/* FUN_006fa980 @ 006fa980  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa980(void)

{
  _DAT_0076b79c = 0xffff;
  DAT_0076b79e = 0xff;
  DAT_0076b79f = 0x82;
  return;
}


/* FUN_006fa9b0 @ 006fa9b0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa9b0(void)

{
  _DAT_0076b7b0 = 0xffff;
  DAT_0076b7b2 = 0xff;
  DAT_0076b7b3 = 0;
  return;
}


/* FUN_006fa9e0 @ 006fa9e0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa9e0(void)

{
  _DAT_0076b7b4 = 0xc8c8;
  _DAT_0076b7b6 = 0x1c8;
  return;
}


/* FUN_006faa10 @ 006faa10  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006faa10(void)

{
  _DAT_0076b7ac = 0xffff;
  DAT_0076b7ae = 0xff;
  DAT_0076b7af = 0x82;
  return;
}


/* FUN_006faa40 @ 006faa40  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006faa40(void)

{
  _DAT_0076b7c0 = 0xffff;
  DAT_0076b7c2 = 0xff;
  DAT_0076b7c3 = 0;
  return;
}


/* FUN_006faa70 @ 006faa70  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006faa70(void)

{
  _DAT_0076b7c4 = 0xc8c8;
  _DAT_0076b7c6 = 0x1c8;
  return;
}


/* FUN_006faaa0 @ 006faaa0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006faaa0(void)

{
  _DAT_0076b7bc = 0xffff;
  DAT_0076b7be = 0xff;
  DAT_0076b7bf = 0x82;
  return;
}


/* FUN_006faad0 @ 006faad0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006faad0(void)

{
  _DAT_0076b7d0 = 0xffff;
  DAT_0076b7d2 = 0xff;
  DAT_0076b7d3 = 0;
  return;
}


/* FUN_006fab00 @ 006fab00  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fab00(void)

{
  _DAT_0076b7d4 = 0xc8c8;
  _DAT_0076b7d6 = 0x1c8;
  return;
}


/* FUN_006fab30 @ 006fab30  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fab30(void)

{
  _DAT_0076b7cc = 0xffff;
  DAT_0076b7ce = 0xff;
  DAT_0076b7cf = 0x82;
  return;
}


/* FUN_006fab60 @ 006fab60  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fab60(void)

{
  _DAT_0076dda8 = 0xffff;
  DAT_0076ddaa = 0xff;
  DAT_0076ddab = 0;
  return;
}


/* FUN_006fab90 @ 006fab90  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fab90(void)

{
  _DAT_0076ddac = 0xc8c8;
  _DAT_0076ddae = 0x1c8;
  return;
}


/* FUN_006fabc0 @ 006fabc0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fabc0(void)

{
  _DAT_0076dda4 = 0xffff;
  DAT_0076dda6 = 0xff;
  DAT_0076dda7 = 0x82;
  return;
}


/* FUN_006fabf0 @ 006fabf0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fabf0(void)

{
  _DAT_0076ddb8 = 0xffff;
  DAT_0076ddba = 0xff;
  DAT_0076ddbb = 0;
  return;
}


/* FUN_006fac20 @ 006fac20  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fac20(void)

{
  _DAT_0076ddbc = 0xc8c8;
  _DAT_0076ddbe = 0x1c8;
  return;
}


