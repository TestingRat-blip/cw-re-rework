// WalkPathBehavior (ai) -- cube. 4 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "WalkPathBehavior.h"

/* cube::WalkPathBehavior::WalkPathBehavior @ 0058cf60  kind=game  attributed-by=rtti  size=55 */

WalkPathBehavior * __thiscall
cube::WalkPathBehavior::WalkPathBehavior(WalkPathBehavior *this,int param_1)

{
  this->vftablePtr = &vftable;
  FUN_0058ceb0(param_1 + 4);
  this[2].vftablePtr = *(WalkPathBehavior_vftable **)(param_1 + 0x10);
  this[2].WalkPathBehavior_data = 0;
  this[3].vftablePtr = *(WalkPathBehavior_vftable **)(param_1 + 0x18);
  return this;
}


/* cube::WalkPathBehavior::WalkPathBehavior @ 0058cfa0  kind=game  attributed-by=rtti  size=53 */

WalkPathBehavior * __thiscall
cube::WalkPathBehavior::WalkPathBehavior(WalkPathBehavior *this,WalkPathBehavior_vftable *param_1)

{
  this->vftablePtr = &vftable;
  this->WalkPathBehavior_data = 0;
  this[1].vftablePtr = (WalkPathBehavior_vftable *)0x0;
  this[1].WalkPathBehavior_data = 0;
  this[2].vftablePtr = (WalkPathBehavior_vftable *)0x0;
  this[3].vftablePtr = param_1;
  return this;
}


/* cube::WalkPathBehavior::vfunction1 @ 0058d050  kind=game  attributed-by=rtti  size=1464 */

void __thiscall
cube::WalkPathBehavior::vfunction1
          (WalkPathBehavior *this,int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_EDX;
  WalkPathBehavior_vftable *pWVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint local_98;
  int local_90;
  undefined1 local_8c [24];
  undefined1 local_74 [24];
  uint local_5c;
  int iStack_58;
  uint local_54;
  int iStack_50;
  uint local_4c;
  int iStack_48;
  uint local_44 [7];
  int iStack_28;
  int local_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((WalkPathBehavior_vftable *)this->WalkPathBehavior_data == this[1].vftablePtr) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,in_EDX,param_2);
    return;
  }
  puVar1 = &this[2].WalkPathBehavior_data;
  *puVar1 = *puVar1 - param_3;
  iVar3 = this[2].WalkPathBehavior_data;
  if ((int)*puVar1 < 0) {
    iVar3 = 0;
  }
  this[2].WalkPathBehavior_data = iVar3;
  if (iVar3 != 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,in_EDX,param_2);
    return;
  }
  if ((int)this[2].vftablePtr < 0) {
    this[2].vftablePtr = (WalkPathBehavior_vftable *)0x0;
  }
  local_90 = 0;
  local_14 = 0;
  this[2].vftablePtr =
       (WalkPathBehavior_vftable *)
       ((uint)this[2].vftablePtr %
       (uint)(((int)this[1].vftablePtr - this->WalkPathBehavior_data) / 0x18));
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar3 = this->WalkPathBehavior_data;
  pWVar8 = this[2].vftablePtr;
  local_5c = *(uint *)(iVar3 + (int)pWVar8 * 0x18);
  iStack_58 = *(int *)(iVar3 + 4 + (int)pWVar8 * 0x18);
  local_54 = *(uint *)(iVar3 + 8 + (int)pWVar8 * 0x18);
  iStack_50 = *(int *)(iVar3 + 0xc + (int)pWVar8 * 0x18);
  local_4c = *(uint *)(iVar3 + 0x10 + (int)pWVar8 * 0x18);
  iStack_48 = *(int *)(iVar3 + 0x14 + (int)pWVar8 * 0x18);
  do {
    local_98 = local_4c;
    iVar9 = 0;
    local_c = *(float *)(param_1 + 0x88) * 0.5;
    iVar3 = iStack_48;
    do {
      uVar12 = FUN_0068d946();
      local_44[iVar9 * 2] = (uint)uVar12;
      local_44[iVar9 * 2 + 1] = (uint)((ulonglong)uVar12 >> 0x20);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
    stack0xffffffd4 =
         CONCAT44(iStack_58 + local_44[1] + (uint)CARRY4(local_5c,local_44[0]),
                  local_5c + local_44[0]);
    _local_24 = CONCAT44(iStack_50 + local_44[3] + (uint)CARRY4(local_54,local_44[2]),
                         local_54 + local_44[2]);
    _local_1c = CONCAT44(iStack_48 + local_44[5] + (uint)CARRY4(local_4c,local_44[4]),
                         local_4c + local_44[4]);
    cVar2 = FUN_0059f0a0(local_44 + 6,param_1 + 0x80,0);
    if (cVar2 != '\0') {
      local_90 = 0;
      local_14 = 0;
      goto LAB_0058d260;
    }
    local_4c = local_98 - 0x10000;
    iVar3 = iVar3 + -1 + (uint)(0xffff < local_98);
    local_90 = local_90 + 1;
    iStack_48 = iVar3;
  } while (local_90 < 0x15);
  goto LAB_0058d415;
  while( true ) {
    if (*(int *)(param_1 + 0x1464) != 0) {
      iVar9 = *(int *)(*(int *)(param_1 + 0x1460) + 4);
      piVar7 = (int *)FUN_0042f040(&iStack_20,param_1 + 0x1440);
      uVar12 = *(undefined8 *)(iVar9 + 8);
      iVar10 = *(int *)(iVar9 + 0x10) - piVar7[2];
      local_14._4_4_ = (int)((ulonglong)uVar12 >> 0x20);
      iVar9 = local_14._4_4_ - piVar7[1];
      local_14._0_4_ = (int)uVar12;
      iVar6 = (int)local_14 - *piVar7;
      local_14 = uVar12;
      if ((float)(iVar10 * iVar10 + iVar9 * iVar9 + iVar6 * iVar6) <
          *(float *)(param_1 + 0x1458) * *(float *)(param_1 + 0x1458)) break;
    }
    FUN_005aaab0(param_1);
    FUN_005a7c90(param_1);
    iVar3 = iVar3 + 1;
    if (9 < iVar3) break;
LAB_0058d570:
    if (0x32 < *(int *)(param_1 + 0x1464)) break;
  }
LAB_0058d5ff:
  *(ushort *)(param_1 + 0x124) = *(ushort *)(param_1 + 0x124) & 0xffbf;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
  while( true ) {
    bVar11 = 0xfffeffff < local_98;
    local_98 = local_98 + 0x10000;
    iVar3 = iVar3 + (uint)bVar11;
    local_90 = local_90 + 1;
    local_4c = local_98;
    iStack_48 = iVar3;
    if (0x14 < local_90) break;
LAB_0058d260:
    iVar9 = 0;
    local_c = *(float *)(param_1 + 0x88) * 0.5;
    do {
      uVar12 = FUN_0068d946();
      local_44[iVar9 * 2] = (uint)uVar12;
      local_44[iVar9 * 2 + 1] = (uint)((ulonglong)uVar12 >> 0x20);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
    stack0xffffffd4 =
         CONCAT44(iStack_58 + local_44[1] + (uint)CARRY4(local_5c,local_44[0]),
                  local_5c + local_44[0]);
    _local_24 = CONCAT44(iStack_50 + local_44[3] + (uint)CARRY4(local_54,local_44[2]),
                         local_54 + local_44[2]);
    _local_1c = CONCAT44(iStack_48 + local_44[5] + (uint)CARRY4(local_4c,local_44[4]),
                         local_4c + local_44[4]);
    cVar2 = FUN_0059f0a0(local_44 + 6,param_1 + 0x80,0);
    if (cVar2 == '\0') {
      local_c = *(float *)(param_1 + 0x88) * 0.5;
      local_14 = 0;
      FUN_0042c460(&local_14);
      puVar14 = &local_5c;
      puVar13 = local_8c;
      FUN_0042c7a0(local_74,local_44);
      uVar4 = FUN_0042c7a0(puVar13,puVar14);
      pfVar5 = (float *)FUN_0042c4a0(uVar4);
      if ((float)this[3].vftablePtr * (float)this[3].vftablePtr <=
          *pfVar5 * *pfVar5 + pfVar5[1] * pfVar5[1] + pfVar5[2] * pfVar5[2]) {
        if (*(int *)(param_1 + 0x1464) == 0) {
          FUN_0042ef10();
          local_c = 0.1 - *(float *)(param_1 + 0x88) * 0.5;
          local_14 = 0;
          FUN_0042c460(&local_14);
          uVar4 = FUN_0042c800(local_74,local_44);
          FUN_0042c5b0(uVar4);
          FUN_0042c5b0(&local_5c);
          iVar9 = __alldiv(*(undefined4 *)(param_1 + 0x1448),*(undefined4 *)(param_1 + 0x144c),
                           0x10000,0);
          iVar9 = (int)(iVar9 + (iVar9 >> 0x1f & 0xffU)) >> 8;
          iVar6 = __alldiv(*(undefined4 *)(param_1 + 0x1440),*(undefined4 *)(param_1 + 0x1444),
                           0x10000,0);
          uVar12 = FUN_00434d10((int)(iVar6 + (iVar6 >> 0x1f & 0xffU)) >> 8,iVar9);
          pWVar8 = (WalkPathBehavior_vftable *)((ulonglong)uVar12 >> 0x20);
          if ((int)uVar12 == 0) goto LAB_0058d439;
          FUN_005a9f90(param_1);
          *(WalkPathBehavior_vftable **)(param_1 + 0x1458) = this[3].vftablePtr;
          FUN_005aaab0(param_1);
          FUN_005a7c90(param_1);
          *(undefined4 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x44) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
        }
        if (*(int *)(param_1 + 0x1410) == 0) goto LAB_0058d5ff;
        iVar3 = 0;
        goto LAB_0058d570;
      }
      FUN_0042ef10();
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      iVar9 = rand();
      this[2].WalkPathBehavior_data = iVar9 % 4000 + 2000;
      break;
    }
  }
LAB_0058d415:
  this[2].vftablePtr = (WalkPathBehavior_vftable *)((int)&(this[2].vftablePtr)->vfunction1 + 1);
  pWVar8 = (WalkPathBehavior_vftable *)
           ((uint)this[2].vftablePtr %
           (uint)(((int)this[1].vftablePtr - this->WalkPathBehavior_data) / 0x18));
  this[2].vftablePtr = pWVar8;
LAB_0058d439:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,pWVar8,param_2,iVar3);
  return;
}


/* cube::WalkPathBehavior::vfunction2 @ 0058d630  kind=game  attributed-by=rtti  size=140 */

undefined4 * __thiscall cube::WalkPathBehavior::vfunction2(WalkPathBehavior *this)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7dcb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x1c);
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &vftable;
    FUN_0058ceb0(&this->WalkPathBehavior_data);
    puVar1[4] = this[2].vftablePtr;
    puVar1[5] = 0;
    puVar1[6] = this[3].vftablePtr;
    ExceptionList = local_10;
    return puVar1;
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}


