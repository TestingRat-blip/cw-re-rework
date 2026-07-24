// SpawnLocationBehavior (world) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "SpawnLocationBehavior.h"

/* cube::SpawnLocationBehavior::SpawnLocationBehavior @ 004dfab0  kind=game  attributed-by=rtti  size=9 */

SpawnLocationBehavior * __thiscall
cube::SpawnLocationBehavior::SpawnLocationBehavior(SpawnLocationBehavior *this)

{
  this->vftablePtr = &vftable;
  return this;
}


/* cube::SpawnLocationBehavior::vfunction1 @ 004dfad0  kind=game  attributed-by=rtti  size=1379 */

void __thiscall
cube::SpawnLocationBehavior::vfunction1(SpawnLocationBehavior *this,int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  int local_7c;
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined8 local_5c;
  uint local_50 [8];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar12 = *(int *)(param_1 + 0x1490);
  if (*(int *)(param_1 + 0x148c) == iVar12) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar11 = 0;
  iVar9 = 0;
  if (0 < (int)(iVar12 - *(int *)(param_1 + 0x148c) & 0xffffffe0U)) {
    piVar7 = (int *)(*(int *)(param_1 + 0x148c) + 0x18);
    do {
      iVar2 = *piVar7;
      piVar7 = piVar7 + 8;
      if (iVar2 <= *(int *)(param_2 + 0x80015c)) {
        iVar11 = iVar9;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar12 - *(int *)(param_1 + 0x148c) >> 5);
  }
  if (iVar11 != *(int *)(param_1 + 0x1488)) {
    FUN_0042ef10();
    *(int *)(param_1 + 0x1488) = iVar11;
    local_50[6] = 0;
    local_50[7] = 0;
    iVar12 = 0;
    local_30 = 0.5 - *(float *)(param_1 + 0x88) * 0.5;
    do {
      uVar15 = FUN_0068d946();
      local_50[iVar12 * 2] = (uint)uVar15;
      local_50[iVar12 * 2 + 1] = (uint)((ulonglong)uVar15 >> 0x20);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 3);
    *(uint *)(param_1 + 0x1428) = *(uint *)(param_1 + 0x10) + local_50[0];
    *(uint *)(param_1 + 0x1434) =
         *(int *)(param_1 + 0x1c) + local_50[3] +
         (uint)CARRY4(*(uint *)(param_1 + 0x18),local_50[2]);
    *(uint *)(param_1 + 0x142c) =
         *(int *)(param_1 + 0x14) + local_50[1] +
         (uint)CARRY4(*(uint *)(param_1 + 0x10),local_50[0]);
    *(uint *)(param_1 + 0x1438) = *(uint *)(param_1 + 0x20) + local_50[4];
    *(uint *)(param_1 + 0x143c) =
         *(int *)(param_1 + 0x24) + local_50[5] +
         (uint)CARRY4(*(uint *)(param_1 + 0x20),local_50[4]);
    *(uint *)(param_1 + 0x1430) = *(uint *)(param_1 + 0x18) + local_50[2];
    puVar10 = (undefined4 *)(*(int *)(param_1 + 0x1488) * 0x20 + *(int *)(param_1 + 0x148c));
    iVar12 = 0;
    *(undefined4 *)(param_1 + 0x1440) = *puVar10;
    *(undefined4 *)(param_1 + 0x1444) = puVar10[1];
    *(undefined4 *)(param_1 + 0x1448) = puVar10[2];
    *(undefined4 *)(param_1 + 0x144c) = puVar10[3];
    *(undefined4 *)(param_1 + 0x1450) = puVar10[4];
    *(undefined4 *)(param_1 + 0x1454) = puVar10[5];
    do {
      iVar11 = FUN_0042f860(*(undefined4 *)(param_1 + 0x1440),*(undefined4 *)(param_1 + 0x1444),
                            *(undefined4 *)(param_1 + 0x1448),*(undefined4 *)(param_1 + 0x144c),
                            *(undefined4 *)(param_1 + 0x1450),*(undefined4 *)(param_1 + 0x1454),0);
      if (((*(byte *)(iVar11 + 3) & 0x1f) == 0) || ((*(byte *)(iVar11 + 3) & 0x1f) == 2)) {
        iVar12 = 0;
        do {
          iVar11 = FUN_0042f860(*(undefined4 *)(param_1 + 0x1440),*(undefined4 *)(param_1 + 0x1444),
                                *(undefined4 *)(param_1 + 0x1448),*(undefined4 *)(param_1 + 0x144c),
                                *(uint *)(param_1 + 0x1450) - 0x10000,
                                *(int *)(param_1 + 0x1454) -
                                (uint)(*(uint *)(param_1 + 0x1450) < 0x10000),0);
          if (((*(byte *)(iVar11 + 3) & 0x1f) != 0) && ((*(byte *)(iVar11 + 3) & 0x1f) != 2)) {
            FUN_005a9f90(param_1);
            *(undefined4 *)(param_1 + 0x1458) = 0x40800000;
            FUN_005aaab0(param_1);
            FUN_005a7c90(param_1);
            *(undefined4 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x44) = 0;
            *(undefined4 *)(param_1 + 0x48) = 0;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          puVar1 = (uint *)(param_1 + 0x1450);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 0x10000;
          *(int *)(param_1 + 0x1454) = *(int *)(param_1 + 0x1454) + -1 + (uint)(0xffff < uVar3);
          iVar12 = iVar12 + 1;
        } while (iVar12 < 0xb);
        break;
      }
      puVar1 = (uint *)(param_1 + 0x1450);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + 0x10000;
      *(int *)(param_1 + 0x1454) = *(int *)(param_1 + 0x1454) + (uint)(0xfffeffff < uVar3);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0xb);
LAB_004dfcb4:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (*(int *)(param_1 + 0x1484) == *(int *)(param_1 + 0x1488)) goto LAB_004dfcb4;
  piVar7 = *(int **)(param_2 + 4);
  fVar14 = 40000.0;
  piVar8 = (int *)*piVar7;
  if (piVar8 != piVar7) {
    do {
      iVar12 = piVar8[6];
      if ((iVar12 != 0) && (*(char *)(iVar12 + 0x60) == '\0')) {
        local_20._0_4_ = (uint)*(undefined8 *)(iVar12 + 0x10);
        local_20._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar12 + 0x10) >> 0x20);
        local_20 = CONCAT44((local_20._4_4_ - *(int *)(param_1 + 0x14)) -
                            (uint)((uint)local_20 < *(uint *)(param_1 + 0x10)),
                            (uint)local_20 - *(uint *)(param_1 + 0x10));
        local_18._0_4_ = (uint)*(undefined8 *)(iVar12 + 0x18);
        local_18._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar12 + 0x18) >> 0x20);
        local_18 = CONCAT44((local_18._4_4_ - *(int *)(param_1 + 0x1c)) -
                            (uint)((uint)local_18 < *(uint *)(param_1 + 0x18)),
                            (uint)local_18 - *(uint *)(param_1 + 0x18));
        local_10._0_4_ = (uint)*(undefined8 *)(iVar12 + 0x20);
        local_10._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar12 + 0x20) >> 0x20);
        local_10 = CONCAT44((local_10._4_4_ - *(int *)(param_1 + 0x24)) -
                            (uint)((uint)local_10 < *(uint *)(param_1 + 0x20)),
                            (uint)local_10 - *(uint *)(param_1 + 0x20));
        local_2c = (float)local_20 * 1.5258789e-05;
        local_28 = (float)local_18 * 1.5258789e-05;
        local_24 = (float)local_10 * 1.5258789e-05;
        fVar13 = local_28 * local_28 + local_2c * local_2c + local_24 * local_24;
        if (fVar13 < fVar14) {
          fVar14 = fVar13;
        }
      }
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar5 = (int *)piVar8[2];
        if (*(char *)((int)piVar5 + 0xd) == '\0') {
          cVar4 = *(char *)(*piVar5 + 0xd);
          piVar8 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar4 == '\0') {
            cVar4 = *(char *)(*piVar5 + 0xd);
            piVar8 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar4 = *(char *)(piVar8[1] + 0xd);
          piVar6 = (int *)piVar8[1];
          piVar5 = piVar8;
          while ((piVar8 = piVar6, cVar4 == '\0' && (piVar5 == (int *)piVar8[2]))) {
            cVar4 = *(char *)(piVar8[1] + 0xd);
            piVar6 = (int *)piVar8[1];
            piVar5 = piVar8;
          }
        }
      }
    } while (piVar8 != piVar7);
    if (65536.0 <= fVar14) goto LAB_004e002f;
  }
  if (*(int *)(param_1 + 0x1410) != 0) {
    local_7c = 0;
    do {
      if (0x32 < *(int *)(param_1 + 0x1464)) break;
      if (*(int *)(param_1 + 0x1464) != 0) {
        iVar12 = *(int *)(*(int *)(param_1 + 0x1460) + 4);
        piVar7 = (int *)FUN_0042f040(local_68,param_1 + 0x1440);
        uVar15 = *(undefined8 *)(iVar12 + 8);
        iVar9 = *(int *)(iVar12 + 0x10) - piVar7[2];
        local_5c._4_4_ = (int)((ulonglong)uVar15 >> 0x20);
        iVar12 = local_5c._4_4_ - piVar7[1];
        local_5c._0_4_ = (int)uVar15;
        iVar11 = (int)local_5c - *piVar7;
        local_5c = uVar15;
        if ((float)(iVar9 * iVar9 + iVar12 * iVar12 + iVar11 * iVar11) <
            *(float *)(param_1 + 0x1458) * *(float *)(param_1 + 0x1458)) break;
      }
      FUN_005aaab0(param_1);
      FUN_005a7c90(param_1);
      local_7c = local_7c + 1;
    } while (local_7c < 10);
  }
  uVar3 = *(uint *)(param_1 + 0x1464);
  if (uVar3 != 0) {
    iVar12 = *(int *)(*(int *)(param_1 + 0x1460) + 4);
    piVar7 = (int *)FUN_0042f040(local_74,param_1 + 0x1440);
    iVar11 = 0;
    iVar12 = (iVar12 + 8) - (int)piVar7;
    do {
      if (*piVar7 != *(int *)(iVar12 + (int)piVar7)) goto LAB_004dffc5;
      iVar11 = iVar11 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar11 < 3);
    if (2 < uVar3) {
LAB_004dffc5:
      if (uVar3 != 0) goto LAB_004e002f;
    }
  }
  FUN_0042ef10();
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(int *)(param_1 + 0x1484) = *(int *)(param_1 + 0x1488);
  puVar10 = (undefined4 *)(*(int *)(param_1 + 0x1488) * 0x20 + *(int *)(param_1 + 0x148c));
  *(undefined4 *)(param_1 + 0x1c0) = *puVar10;
  *(undefined4 *)(param_1 + 0x1c4) = puVar10[1];
  *(undefined4 *)(param_1 + 0x1c8) = puVar10[2];
  *(undefined4 *)(param_1 + 0x1cc) = puVar10[3];
  *(undefined4 *)(param_1 + 0x1d0) = puVar10[4];
  *(undefined4 *)(param_1 + 0x1d4) = puVar10[5];
LAB_004e002f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* cube::SpawnLocationBehavior::vfunction2 @ 004e0050  kind=game  attributed-by=rtti  size=24 */

undefined4 * __thiscall cube::SpawnLocationBehavior::vfunction2(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


