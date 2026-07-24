// LookAtPlayerBehavior (ai) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "LookAtPlayerBehavior.h"

/* cube::LookAtPlayerBehavior::LookAtPlayerBehavior @ 004c8130  kind=game  attributed-by=rtti  size=9 */

LookAtPlayerBehavior * __thiscall
cube::LookAtPlayerBehavior::LookAtPlayerBehavior(LookAtPlayerBehavior *this)

{
  this->vftablePtr = &vftable;
  return this;
}


/* cube::LookAtPlayerBehavior::vfunction1 @ 004c8140  kind=game  attributed-by=rtti  size=646 */

void __thiscall
cube::LookAtPlayerBehavior::vfunction1(LookAtPlayerBehavior *this,int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar9 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  fVar12 = 64.0;
  puVar2 = (undefined4 *)**(undefined4 **)(param_2 + 4);
  iVar10 = 0;
  while (puVar2 != *(undefined4 **)(param_2 + 4)) {
    iVar3 = puVar2[6];
    if (((iVar3 != 0) && (*(char *)(iVar3 + 0x60) == '\0')) && (0.0 <= *(float *)(iVar3 + 0x16c))) {
      local_20._0_4_ = (uint)*(undefined8 *)(iVar3 + 0x10);
      local_20._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar3 + 0x10) >> 0x20);
      local_20 = CONCAT44((local_20._4_4_ - *(int *)(param_1 + 0x14)) -
                          (uint)((uint)local_20 < *(uint *)(param_1 + 0x10)),
                          (uint)local_20 - *(uint *)(param_1 + 0x10));
      local_18._0_4_ = (uint)*(undefined8 *)(iVar3 + 0x18);
      local_18._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar3 + 0x18) >> 0x20);
      local_18 = CONCAT44((local_18._4_4_ - *(int *)(param_1 + 0x1c)) -
                          (uint)((uint)local_18 < *(uint *)(param_1 + 0x18)),
                          (uint)local_18 - *(uint *)(param_1 + 0x18));
      local_10._0_4_ = (uint)*(undefined8 *)(iVar3 + 0x20);
      local_10._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar3 + 0x20) >> 0x20);
      local_10 = CONCAT44((local_10._4_4_ - *(int *)(param_1 + 0x24)) -
                          (uint)((uint)local_10 < *(uint *)(param_1 + 0x20)),
                          (uint)local_10 - *(uint *)(param_1 + 0x20));
      fVar11 = (float)local_18 * 1.5258789e-05 * (float)local_18 * 1.5258789e-05 +
               (float)local_20 * 1.5258789e-05 * (float)local_20 * 1.5258789e-05 +
               (float)local_10 * 1.5258789e-05 * (float)local_10 * 1.5258789e-05;
      if (fVar11 < fVar12) {
        iVar10 = iVar3;
        fVar12 = fVar11;
      }
    }
    if (*(char *)((int)puVar2 + 0xd) == '\0') {
      puVar4 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar4 + 0xd) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0xd);
        puVar2 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0xd);
          puVar2 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0xd);
        puVar8 = (undefined4 *)puVar2[1];
        puVar4 = puVar2;
        while ((puVar2 = puVar8, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0xd);
          puVar8 = (undefined4 *)puVar2[1];
          puVar4 = puVar2;
        }
      }
    }
  }
  *(ushort *)(param_1 + 0x124) = *(ushort *)(param_1 + 0x124) & 0xfffb;
  if (((iVar10 != 0) && (*(char *)(param_1 + 0x68) != 'S')) && (*(char *)(param_1 + 0x68) != 'T')) {
    *(ushort *)(param_1 + 0x124) = *(ushort *)(param_1 + 0x124) | 4;
    iVar3 = *(int *)(iVar10 + 0x24);
    uVar5 = *(uint *)(iVar10 + 0x18);
    iVar6 = *(int *)(iVar10 + 0x1c);
    uVar7 = *(uint *)(iVar10 + 0x20);
    *(float *)(param_1 + 0x160) =
         (float)CONCAT44((*(int *)(iVar10 + 0x14) - *(int *)(param_1 + 0x14)) -
                         (uint)(*(uint *)(iVar10 + 0x10) < *(uint *)(param_1 + 0x10)),
                         *(uint *)(iVar10 + 0x10) - *(uint *)(param_1 + 0x10)) * 1.5258789e-05;
    *(float *)(param_1 + 0x164) =
         (float)CONCAT44((iVar6 - *(int *)(param_1 + 0x1c)) -
                         (uint)(uVar5 < *(uint *)(param_1 + 0x18)),uVar5 - *(uint *)(param_1 + 0x18)
                        ) * 1.5258789e-05;
    *(float *)(param_1 + 0x168) =
         (float)CONCAT44((iVar3 - *(int *)(param_1 + 0x24)) -
                         (uint)(uVar7 < *(uint *)(param_1 + 0x20)),uVar7 - *(uint *)(param_1 + 0x20)
                        ) * 1.5258789e-05;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_0042ef10();
    __security_check_cookie(uVar9 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(uVar9 ^ (uint)&stack0xfffffffc);
  return;
}


/* cube::LookAtPlayerBehavior::vfunction2 @ 004c83d0  kind=game  attributed-by=rtti  size=24 */

undefined4 * __thiscall cube::LookAtPlayerBehavior::vfunction2(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


