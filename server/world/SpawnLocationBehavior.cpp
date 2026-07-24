// SpawnLocationBehavior (world) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "SpawnLocationBehavior.h"

/* cube::SpawnLocationBehavior::SpawnLocationBehavior @ 00428920  kind=game  attributed-by=rtti  size=9 */

SpawnLocationBehavior * __thiscall
cube::SpawnLocationBehavior::SpawnLocationBehavior(SpawnLocationBehavior *this)

{
  this->vftablePtr = &vftable;
  return this;
}


/* cube::SpawnLocationBehavior::vfunction1 @ 00428940  kind=game  attributed-by=rtti  size=1097 */

void __thiscall cube::SpawnLocationBehavior::vfunction1(SpawnLocationBehavior *this,void *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  void *in_stack_00000008;
  int local_7c;
  int local_74 [3];
  int local_68 [3];
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
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar13 = *(int *)((int)param_1 + 0x1490);
  if (*(int *)((int)param_1 + 0x148c) == iVar13) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar12 = 0;
  iVar10 = 0;
  if (0 < (int)(iVar13 - *(int *)((int)param_1 + 0x148c) & 0xffffffe0U)) {
    piVar8 = (int *)(*(int *)((int)param_1 + 0x148c) + 0x18);
    do {
      iVar2 = *piVar8;
      piVar8 = piVar8 + 8;
      if (iVar2 <= *(int *)((int)in_stack_00000008 + 0x80015c)) {
        iVar12 = iVar10;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar13 - *(int *)((int)param_1 + 0x148c) >> 5);
  }
  if (iVar12 != *(int *)((int)param_1 + 0x1488)) {
    FUN_00405330((int)param_1);
    *(int *)((int)param_1 + 0x1488) = iVar12;
    local_50[6] = 0;
    local_50[7] = 0;
    iVar13 = 0;
    local_30 = 0.5 - *(float *)((int)param_1 + 0x88) * 0.5;
    do {
      uVar16 = FUN_0054a946();
      local_50[iVar13 * 2] = (uint)uVar16;
      local_50[iVar13 * 2 + 1] = (uint)(uVar16 >> 0x20);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    *(uint *)((int)param_1 + 0x1428) = *(uint *)((int)param_1 + 0x10) + local_50[0];
    *(uint *)((int)param_1 + 0x1434) =
         *(int *)((int)param_1 + 0x1c) + local_50[3] +
         (uint)CARRY4(*(uint *)((int)param_1 + 0x18),local_50[2]);
    *(uint *)((int)param_1 + 0x142c) =
         *(int *)((int)param_1 + 0x14) + local_50[1] +
         (uint)CARRY4(*(uint *)((int)param_1 + 0x10),local_50[0]);
    *(uint *)((int)param_1 + 0x1438) = *(uint *)((int)param_1 + 0x20) + local_50[4];
    *(uint *)((int)param_1 + 0x143c) =
         *(int *)((int)param_1 + 0x24) + local_50[5] +
         (uint)CARRY4(*(uint *)((int)param_1 + 0x20),local_50[4]);
    *(uint *)((int)param_1 + 0x1430) = *(uint *)((int)param_1 + 0x18) + local_50[2];
    puVar11 = (undefined4 *)
              (*(int *)((int)param_1 + 0x1488) * 0x20 + *(int *)((int)param_1 + 0x148c));
    iVar13 = 0;
    *(undefined4 *)((int)param_1 + 0x1440) = *puVar11;
    *(undefined4 *)((int)param_1 + 0x1444) = puVar11[1];
    *(undefined4 *)((int)param_1 + 0x1448) = puVar11[2];
    *(undefined4 *)((int)param_1 + 0x144c) = puVar11[3];
    *(undefined4 *)((int)param_1 + 0x1450) = puVar11[4];
    *(undefined4 *)((int)param_1 + 0x1454) = puVar11[5];
    do {
      iVar12 = FUN_00406050(in_stack_00000008,*(uint *)((int)param_1 + 0x1440),
                            *(uint *)((int)param_1 + 0x1444),*(uint *)((int)param_1 + 0x1448),
                            *(uint *)((int)param_1 + 0x144c),*(uint *)((int)param_1 + 0x1450),
                            *(uint *)((int)param_1 + 0x1454),0);
      if (((*(byte *)(iVar12 + 3) & 0x1f) == 0) || ((*(byte *)(iVar12 + 3) & 0x1f) == 2)) {
        iVar13 = 0;
        do {
          iVar12 = FUN_00406050(in_stack_00000008,*(uint *)((int)param_1 + 0x1440),
                                *(uint *)((int)param_1 + 0x1444),*(uint *)((int)param_1 + 0x1448),
                                *(uint *)((int)param_1 + 0x144c),
                                *(uint *)((int)param_1 + 0x1450) - 0x10000,
                                *(int *)((int)param_1 + 0x1454) -
                                (uint)(*(uint *)((int)param_1 + 0x1450) < 0x10000),0);
          if (((*(byte *)(iVar12 + 3) & 0x1f) != 0) && ((*(byte *)(iVar12 + 3) & 0x1f) != 2)) {
            FUN_004dd2e0(in_stack_00000008,param_1);
            *(undefined4 *)((int)param_1 + 0x1458) = 0x40800000;
            FUN_004dde90(in_stack_00000008,param_1);
            FUN_004dafe0(param_1);
            *(undefined4 *)((int)param_1 + 0x40) = 0;
            *(undefined4 *)((int)param_1 + 0x44) = 0;
            *(undefined4 *)((int)param_1 + 0x48) = 0;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          puVar1 = (uint *)((int)param_1 + 0x1450);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 0x10000;
          *(int *)((int)param_1 + 0x1454) =
               *(int *)((int)param_1 + 0x1454) + -1 + (uint)(0xffff < uVar3);
          iVar13 = iVar13 + 1;
        } while (iVar13 < 0xb);
        break;
      }
      puVar1 = (uint *)((int)param_1 + 0x1450);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + 0x10000;
      *(int *)((int)param_1 + 0x1454) = *(int *)((int)param_1 + 0x1454) + (uint)(0xfffeffff < uVar3)
      ;
      iVar13 = iVar13 + 1;
    } while (iVar13 < 0xb);
LAB_00428b24:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (*(int *)((int)param_1 + 0x1484) == *(int *)((int)param_1 + 0x1488)) goto LAB_00428b24;
  piVar8 = *(int **)((int)in_stack_00000008 + 4);
  fVar15 = 40000.0;
  piVar9 = (int *)*piVar8;
  if (piVar9 != piVar8) {
    do {
      iVar13 = piVar9[6];
      if ((iVar13 != 0) && (*(char *)(iVar13 + 0x60) == '\0')) {
        local_20._0_4_ = (uint)*(undefined8 *)(iVar13 + 0x10);
        local_20._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar13 + 0x10) >> 0x20);
        local_20 = CONCAT44((local_20._4_4_ - *(int *)((int)param_1 + 0x14)) -
                            (uint)((uint)local_20 < *(uint *)((int)param_1 + 0x10)),
                            (uint)local_20 - *(uint *)((int)param_1 + 0x10));
        local_18._0_4_ = (uint)*(undefined8 *)(iVar13 + 0x18);
        local_18._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar13 + 0x18) >> 0x20);
        local_18 = CONCAT44((local_18._4_4_ - *(int *)((int)param_1 + 0x1c)) -
                            (uint)((uint)local_18 < *(uint *)((int)param_1 + 0x18)),
                            (uint)local_18 - *(uint *)((int)param_1 + 0x18));
        local_10._0_4_ = (uint)*(undefined8 *)(iVar13 + 0x20);
        local_10._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar13 + 0x20) >> 0x20);
        local_10 = CONCAT44((local_10._4_4_ - *(int *)((int)param_1 + 0x24)) -
                            (uint)((uint)local_10 < *(uint *)((int)param_1 + 0x20)),
                            (uint)local_10 - *(uint *)((int)param_1 + 0x20));
        local_2c = (float)local_20 * 1.5258789e-05;
        local_28 = (float)local_18 * 1.5258789e-05;
        local_24 = (float)local_10 * 1.5258789e-05;
        fVar14 = local_28 * local_28 + local_2c * local_2c + local_24 * local_24;
        if (fVar14 < fVar15) {
          fVar15 = fVar14;
        }
      }
      if (*(char *)((int)piVar9 + 0xd) == '\0') {
        piVar6 = (int *)piVar9[2];
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          cVar5 = *(char *)(*piVar6 + 0xd);
          piVar9 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar5 == '\0') {
            cVar5 = *(char *)(*piVar6 + 0xd);
            piVar9 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar5 = *(char *)(piVar9[1] + 0xd);
          piVar7 = (int *)piVar9[1];
          piVar6 = piVar9;
          while ((piVar9 = piVar7, cVar5 == '\0' && (piVar6 == (int *)piVar9[2]))) {
            cVar5 = *(char *)(piVar9[1] + 0xd);
            piVar7 = (int *)piVar9[1];
            piVar6 = piVar9;
          }
        }
      }
    } while (piVar9 != piVar8);
    if (65536.0 <= fVar15) goto LAB_00428e9f;
  }
  if (*(int *)((int)param_1 + 0x1410) != 0) {
    local_7c = 0;
    do {
      if (0x32 < *(int *)((int)param_1 + 0x1464)) break;
      if (*(int *)((int)param_1 + 0x1464) != 0) {
        iVar13 = *(int *)(*(int *)((int)param_1 + 0x1460) + 4);
        piVar8 = (int *)FUN_00405450(local_68,(uint *)((int)param_1 + 0x1440));
        uVar4 = *(undefined8 *)(iVar13 + 8);
        iVar10 = *(int *)(iVar13 + 0x10) - piVar8[2];
        local_5c._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
        iVar13 = local_5c._4_4_ - piVar8[1];
        local_5c._0_4_ = (int)uVar4;
        iVar12 = (int)local_5c - *piVar8;
        local_5c = uVar4;
        if ((float)(iVar10 * iVar10 + iVar13 * iVar13 + iVar12 * iVar12) <
            *(float *)((int)param_1 + 0x1458) * *(float *)((int)param_1 + 0x1458)) break;
      }
      FUN_004dde90(in_stack_00000008,param_1);
      FUN_004dafe0(param_1);
      local_7c = local_7c + 1;
    } while (local_7c < 10);
  }
  uVar3 = *(uint *)((int)param_1 + 0x1464);
  if (uVar3 != 0) {
    iVar13 = *(int *)(*(int *)((int)param_1 + 0x1460) + 4);
    piVar8 = (int *)FUN_00405450(local_74,(uint *)((int)param_1 + 0x1440));
    iVar12 = 0;
    iVar13 = (iVar13 + 8) - (int)piVar8;
    do {
      if (*piVar8 != *(int *)(iVar13 + (int)piVar8)) goto LAB_00428e35;
      iVar12 = iVar12 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar12 < 3);
    if (2 < uVar3) {
LAB_00428e35:
      if (uVar3 != 0) goto LAB_00428e9f;
    }
  }
  FUN_00405330((int)param_1);
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(int *)((int)param_1 + 0x1484) = *(int *)((int)param_1 + 0x1488);
  puVar11 = (undefined4 *)(*(int *)((int)param_1 + 0x1488) * 0x20 + *(int *)((int)param_1 + 0x148c))
  ;
  *(undefined4 *)((int)param_1 + 0x1c0) = *puVar11;
  *(undefined4 *)((int)param_1 + 0x1c4) = puVar11[1];
  *(undefined4 *)((int)param_1 + 0x1c8) = puVar11[2];
  *(undefined4 *)((int)param_1 + 0x1cc) = puVar11[3];
  *(undefined4 *)((int)param_1 + 0x1d0) = puVar11[4];
  *(undefined4 *)((int)param_1 + 0x1d4) = puVar11[5];
LAB_00428e9f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* cube::SpawnLocationBehavior::vfunction2 @ 00428ec0  kind=game  attributed-by=rtti  size=24 */

undefined4 * __thiscall cube::SpawnLocationBehavior::vfunction2(SpawnLocationBehavior *this)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


