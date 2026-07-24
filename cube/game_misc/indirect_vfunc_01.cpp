// indirect_vfunc_01 (game_misc) -- cube. 34 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "indirect_vfunc_01.h"

/* FUN_006c0a20 @ 006c0a20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=25 */

void FUN_006c0a20(int param_1)

{
  if (*(char *)(param_1 + 300) != '\0') {
    FUN_006c0950();
  }
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return;
}


/* FUN_006c63d0 @ 006c63d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=161 */

undefined4 FUN_006c63d0(ushort param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  undefined4 in_ECX;
  uint uVar1;
  undefined4 local_4;
  
  local_4._1_3_ = (undefined3)((uint)in_ECX >> 8);
  local_4 = CONCAT31(local_4._1_3_,~(byte)(param_4 >> 9)) & 0xffffff01;
  if ((param_4 & 0x10) == 0) {
    uVar1 = 0;
    if (param_3 != 0) {
      do {
        FUN_006bf970(local_4);
        *(uint *)(param_5 + uVar1 * 4) = (uint)param_1;
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_3);
    }
  }
  else {
    uVar1 = 0;
    if (param_3 != 0) {
      do {
        FUN_006bf9b0(uVar1 + param_2);
        *(uint *)(param_5 + uVar1 * 4) = param_4 & 0xffff;
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_3);
      return 0;
    }
  }
  return 0;
}


/* FUN_006c64d0 @ 006c64d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=109 */

int FUN_006c64d0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = param_2;
  piVar1 = param_1;
  iVar3 = *param_1;
  iVar4 = 0;
  if ((*(byte *)(iVar3 + 8) & 2) != 0) {
    iVar4 = (**(code **)(*(int *)(iVar3 + 0x214) + 0x94))(iVar3,param_2,&param_1);
    if (iVar4 == 0) {
      iVar3 = FUN_006c6480(piVar1,param_1);
      return iVar3;
    }
    piVar1[0x1c] = -1;
  }
  FUN_0068f5f0(*piVar1,uVar2);
  if ((*(byte *)(*piVar1 + 8) & 1) != 0) {
    iVar4 = FUN_006c0a40();
  }
  return iVar4;
}


/* FUN_006c7400 @ 006c7400  kind=gamemisc  attributed-by=role:vfunc-indirect  size=300 */

int FUN_006c7400(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  
  iVar2 = FUN_0068fdf0(*(undefined4 *)(*(int *)(param_2 + 0x60) + 4),&DAT_007235ec);
  if (iVar2 == 0) {
    return 2;
  }
  iVar3 = FUN_006908c0(param_1,0);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = (**(code **)(iVar2 + 4))(param_1,param_2,param_3,param_4,param_5);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = *(int *)(param_2 + 0x94);
  if (((iVar3 != 0x10000) && (iVar3 != 0x20000)) && (iVar3 != 0x74727565)) {
    return 2;
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
  if (param_3 < 0) {
    return 0;
  }
  iVar2 = (**(code **)(iVar2 + 8))(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0) {
    cVar1 = FUN_006c0910();
    if (cVar1 != '\0') {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
    }
    iVar2 = FUN_006bf740(param_2,param_1);
    if (iVar2 == 0) {
      if (((((*(byte *)(param_2 + 8) & 1) != 0) &&
           ((*(int *)(*(int *)(param_2 + 0x80) + 0x34) != 0 ||
            (iVar2 = FUN_006bf480(param_1), iVar2 == 0)))) &&
          (iVar2 = FUN_006c6540(param_1), iVar2 == 0)) && (iVar2 = FUN_006bf6a0(), iVar2 == 0)) {
        FUN_006bf6f0();
      }
      FUN_006c0280();
      return extraout_ECX;
    }
    return iVar2;
  }
  return iVar2;
}


/* FUN_006c7530 @ 006c7530  kind=gamemisc  attributed-by=role:vfunc-indirect  size=171 */

void FUN_006c7530(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 100);
    uVar2 = *(undefined4 *)(param_1 + 0x68);
    iVar3 = *(int *)(param_1 + 0x214);
    if (*(code **)(param_1 + 0x2b8) != (code *)0x0) {
      (**(code **)(param_1 + 0x2b8))(*(undefined4 *)(param_1 + 0x2b4));
    }
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))(param_1);
    }
    FUN_006bf680();
    FUN_006bf8d0();
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x2a0));
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x29c) = 0;
    FUN_00691ee0(uVar2,param_1 + 0x290);
    FUN_00691ee0(uVar2,param_1 + 0x298);
    *(undefined4 *)(param_1 + 0x28c) = 0;
    *(undefined4 *)(param_1 + 0x294) = 0;
    FUN_006c6340();
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  return;
}


/* FUN_006c7c30 @ 006c7c30  kind=gamemisc  attributed-by=role:vfunc-indirect  size=509 */

int FUN_006c7c30(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  int local_18;
  int local_14;
  uint *local_10;
  uint local_c;
  undefined4 local_8;
  int local_4;
  
  local_8 = *(undefined4 *)(param_1 + 100);
  iVar5 = 0;
  local_18 = 0;
  if ((*(int *)(param_1 + 0x2c8) != 0) || (local_18 = FUN_006c5630(param_1,0), local_18 == 0)) {
    iVar9 = *(int *)(param_1 + 0x2c8);
    puVar7 = *(uint **)(iVar9 + 8);
    local_10 = puVar7;
    local_4 = iVar9;
    if (param_2 == *puVar7) {
      iVar5 = FUN_00693a60(local_8,4,0,*puVar7,0,&local_18);
      local_14 = iVar5;
      if (local_18 == 0) {
        local_c = 0;
        if (*puVar7 != 0) {
          piVar6 = (int *)(puVar7[3] + 8);
          iVar3 = iVar5 - (int)param_3;
          do {
            iVar9 = *param_3;
            iVar1 = piVar6[1];
            iVar5 = local_14;
            if ((iVar1 < iVar9) || (iVar9 < piVar6[-1])) goto LAB_006c7d9e;
            iVar5 = *piVar6;
            if (iVar9 < iVar5) {
              iVar5 = FUN_0068ea60(iVar9 - iVar5,0x10000,piVar6[-1] - iVar5);
              iVar5 = -iVar5;
LAB_006c7d29:
              *(int *)(iVar3 + (int)param_3) = iVar5;
            }
            else {
              if (iVar1 != iVar5) {
                iVar5 = FUN_0068ea60(iVar9 - iVar5,0x10000,iVar1 - iVar5);
                goto LAB_006c7d29;
              }
              *(undefined4 *)(iVar3 + (int)param_3) = 0;
            }
            local_c = local_c + 1;
            param_3 = param_3 + 1;
            piVar6 = piVar6 + 6;
            puVar7 = local_10;
            iVar9 = local_4;
          } while (local_c < *local_10);
        }
        iVar5 = local_14;
        if (*(char *)(iVar9 + 0x10) == '\0') {
          FUN_006c5120();
        }
        puVar10 = *(ushort **)(iVar9 + 0x14);
        if ((puVar10 != (ushort *)0x0) && (uVar4 = 0, *puVar7 != 0)) {
          do {
            uVar8 = 1;
            if (1 < *puVar10) {
              piVar6 = *(int **)(puVar10 + 2);
              iVar9 = *(int *)(iVar5 + uVar4 * 4);
              do {
                piVar6 = piVar6 + 2;
                if (iVar9 < *piVar6) {
                  iVar5 = *(int *)(puVar10 + 2);
                  piVar6 = (int *)(iVar5 + uVar8 * 8);
                  iVar3 = piVar6[-2];
                  uVar2 = FUN_0068ea60(iVar9 - iVar3,0x10000,*piVar6 - iVar3,
                                       *(int *)(iVar5 + 4 + uVar8 * 8) -
                                       *(int *)(iVar5 + -4 + uVar8 * 8),0x10000);
                  iVar5 = FUN_0068ea60(uVar2);
                  *(int *)(local_14 + uVar4 * 4) =
                       iVar5 + *(int *)(*(int *)(puVar10 + 2) + -4 + uVar8 * 8);
                  iVar5 = local_14;
                  break;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < *puVar10);
            }
            uVar4 = uVar4 + 1;
            puVar10 = puVar10 + 4;
          } while (uVar4 < *local_10);
        }
        local_18 = FUN_006c7ab0(param_1,param_2,iVar5);
      }
    }
    else {
LAB_006c7d9e:
      local_18 = 6;
    }
  }
  FUN_00691290(local_8,iVar5);
  return local_18;
}


/* FUN_006cc020 @ 006cc020  kind=gamemisc  attributed-by=role:vfunc-indirect  size=15 */

void FUN_006cc020(void)

{
  FUN_006cb7e0();
  return;
}


/* FUN_006da730 @ 006da730  kind=gamemisc  attributed-by=role:vfunc-indirect  size=414 */

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


/* FUN_006da8d0 @ 006da8d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=273 */

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


/* FUN_006da9f0 @ 006da9f0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=526 */

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


/* FUN_006dac00 @ 006dac00  kind=gamemisc  attributed-by=role:vfunc-indirect  size=86 */

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


/* FUN_006dac60 @ 006dac60  kind=gamemisc  attributed-by=role:vfunc-indirect  size=640 */

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


/* FUN_006daee0 @ 006daee0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=87 */

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


/* FUN_006dbd20 @ 006dbd20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=520 */

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


/* FUN_006dbf30 @ 006dbf30  kind=gamemisc  attributed-by=role:vfunc-indirect  size=443 */

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


/* FUN_006dc210 @ 006dc210  kind=gamemisc  attributed-by=role:vfunc-indirect  size=112 */

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


/* FUN_006dc280 @ 006dc280  kind=gamemisc  attributed-by=role:vfunc-indirect  size=37 */

void FUN_006dc280(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xb18);
    free(param_1);
  }
  return;
}


/* FUN_006dc2b0 @ 006dc2b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=763 */

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


/* FUN_006dc5c0 @ 006dc5c0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=3811 */

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


/* FUN_006dd500 @ 006dd500  kind=gamemisc  attributed-by=role:vfunc-indirect  size=533 */

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


/* FUN_006dd8b0 @ 006dd8b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=37 */

void FUN_006dd8b0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xc88);
    free(param_1);
  }
  return;
}


/* FUN_006dd8e0 @ 006dd8e0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=428 */

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


/* FUN_006ddaa0 @ 006ddaa0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=774 */

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


/* FUN_006de610 @ 006de610  kind=gamemisc  attributed-by=role:vfunc-indirect  size=650 */

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


/* FUN_006de900 @ 006de900  kind=gamemisc  attributed-by=role:vfunc-indirect  size=812 */

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


/* FUN_006dec70 @ 006dec70  kind=gamemisc  attributed-by=role:vfunc-indirect  size=454 */

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


/* FUN_006dee70 @ 006dee70  kind=gamemisc  attributed-by=role:vfunc-indirect  size=37 */

void FUN_006dee70(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x520);
    free(param_1);
  }
  return;
}


/* FUN_006deea0 @ 006deea0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=37 */

void FUN_006deea0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x460);
    free(param_1);
  }
  return;
}


/* FUN_006dfba0 @ 006dfba0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=142 */

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


/* FUN_006dfc30 @ 006dfc30  kind=gamemisc  attributed-by=role:vfunc-indirect  size=312 */

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


/* FUN_006dfd70 @ 006dfd70  kind=gamemisc  attributed-by=role:vfunc-indirect  size=53 */

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


/* FUN_006dff90 @ 006dff90  kind=gamemisc  attributed-by=role:vfunc-indirect  size=242 */

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


/* FUN_006e0090 @ 006e0090  kind=gamemisc  attributed-by=role:vfunc-indirect  size=93 */

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


/* FUN_006e00f0 @ 006e00f0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=34 */

void FUN_006e00f0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x60);
    free(param_1);
  }
  return;
}


