// WalkPathBehavior (ai) -- server. 4 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "WalkPathBehavior.h"

/* cube::WalkPathBehavior::WalkPathBehavior @ 004c5d10  kind=game  attributed-by=rtti  size=55 */

WalkPathBehavior * __thiscall
cube::WalkPathBehavior::WalkPathBehavior(WalkPathBehavior *this,int param_1)

{
  this->vftablePtr = &vftable;
  FUN_004c5c60(&this->WalkPathBehavior_data,(int *)(param_1 + 4));
  this[2].vftablePtr = *(WalkPathBehavior_vftable **)(param_1 + 0x10);
  this[2].WalkPathBehavior_data = 0;
  this[3].vftablePtr = *(WalkPathBehavior_vftable **)(param_1 + 0x18);
  return this;
}


/* cube::WalkPathBehavior::WalkPathBehavior @ 004c5d50  kind=game  attributed-by=rtti  size=53 */

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


/* cube::WalkPathBehavior::vfunction1 @ 004c5e00  kind=game  attributed-by=rtti  size=1464 */

void __thiscall
cube::WalkPathBehavior::vfunction1(WalkPathBehavior *this,void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  WalkPathBehavior_vftable *pWVar2;
  char cVar3;
  int iVar4;
  uint *this_00;
  uint *puVar5;
  float *pfVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  uint *puVar15;
  int local_9c;
  uint local_98;
  int local_90;
  uint local_8c [6];
  uint local_74 [6];
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
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if ((WalkPathBehavior_vftable *)this->WalkPathBehavior_data == this[1].vftablePtr) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  puVar1 = &this[2].WalkPathBehavior_data;
  *puVar1 = *puVar1 - param_3;
  iVar4 = this[2].WalkPathBehavior_data;
  if ((int)*puVar1 < 0) {
    iVar4 = 0;
  }
  this[2].WalkPathBehavior_data = iVar4;
  if (iVar4 != 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
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
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  iVar4 = this->WalkPathBehavior_data;
  pWVar2 = this[2].vftablePtr;
  local_5c = *(uint *)(iVar4 + (int)pWVar2 * 0x18);
  iStack_58 = *(int *)(iVar4 + 4 + (int)pWVar2 * 0x18);
  local_54 = *(uint *)(iVar4 + 8 + (int)pWVar2 * 0x18);
  iStack_50 = *(int *)(iVar4 + 0xc + (int)pWVar2 * 0x18);
  local_4c = *(uint *)(iVar4 + 0x10 + (int)pWVar2 * 0x18);
  iStack_48 = *(int *)(iVar4 + 0x14 + (int)pWVar2 * 0x18);
  do {
    local_9c = iStack_48;
    local_98 = local_4c;
    iVar4 = 0;
    local_c = *(float *)((int)param_1 + 0x88) * 0.5;
    do {
      uVar13 = FUN_0054a946();
      local_44[iVar4 * 2] = (uint)uVar13;
      local_44[iVar4 * 2 + 1] = (uint)(uVar13 >> 0x20);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    stack0xffffffd4 =
         CONCAT44(iStack_58 + local_44[1] + (uint)CARRY4(local_5c,local_44[0]),
                  local_5c + local_44[0]);
    _local_24 = CONCAT44(iStack_50 + local_44[3] + (uint)CARRY4(local_54,local_44[2]),
                         local_54 + local_44[2]);
    _local_1c = CONCAT44(iStack_48 + local_44[5] + (uint)CARRY4(local_4c,local_44[4]),
                         local_4c + local_44[4]);
    cVar3 = FUN_004d4f90(param_2,local_44 + 6,(float *)((int)param_1 + 0x80),'\0');
    if (cVar3 != '\0') {
      local_90 = 0;
      local_14 = 0;
      goto LAB_004c6010;
    }
    local_4c = local_98 - 0x10000;
    iStack_48 = local_9c + -1 + (uint)(0xffff < local_98);
    local_90 = local_90 + 1;
  } while (local_90 < 0x15);
  goto LAB_004c61c5;
  while( true ) {
    if (*(int *)((int)param_1 + 0x1464) != 0) {
      iVar9 = *(int *)(*(int *)((int)param_1 + 0x1460) + 4);
      piVar8 = (int *)FUN_00405450(&iStack_20,(uint *)((int)param_1 + 0x1440));
      uVar14 = *(undefined8 *)(iVar9 + 8);
      iVar11 = *(int *)(iVar9 + 0x10) - piVar8[2];
      local_14._4_4_ = (int)((ulonglong)uVar14 >> 0x20);
      iVar9 = local_14._4_4_ - piVar8[1];
      local_14._0_4_ = (int)uVar14;
      iVar10 = (int)local_14 - *piVar8;
      local_14 = uVar14;
      if ((float)(iVar11 * iVar11 + iVar9 * iVar9 + iVar10 * iVar10) <
          *(float *)((int)param_1 + 0x1458) * *(float *)((int)param_1 + 0x1458)) break;
    }
    FUN_004dde90(param_2,param_1);
    FUN_004dafe0(param_1);
    iVar4 = iVar4 + 1;
    if (9 < iVar4) break;
LAB_004c6320:
    if (0x32 < *(int *)((int)param_1 + 0x1464)) break;
  }
LAB_004c63af:
  *(ushort *)((int)param_1 + 0x124) = *(ushort *)((int)param_1 + 0x124) & 0xffbf;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
  while( true ) {
    bVar12 = 0xfffeffff < local_98;
    local_98 = local_98 + 0x10000;
    local_9c = local_9c + (uint)bVar12;
    local_90 = local_90 + 1;
    local_4c = local_98;
    iStack_48 = local_9c;
    if (0x14 < local_90) break;
LAB_004c6010:
    iVar4 = 0;
    local_c = *(float *)((int)param_1 + 0x88) * 0.5;
    do {
      uVar13 = FUN_0054a946();
      local_44[iVar4 * 2] = (uint)uVar13;
      local_44[iVar4 * 2 + 1] = (uint)(uVar13 >> 0x20);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    stack0xffffffd4 =
         CONCAT44(iStack_58 + local_44[1] + (uint)CARRY4(local_5c,local_44[0]),
                  local_5c + local_44[0]);
    _local_24 = CONCAT44(iStack_50 + local_44[3] + (uint)CARRY4(local_54,local_44[2]),
                         local_54 + local_44[2]);
    _local_1c = CONCAT44(iStack_48 + local_44[5] + (uint)CARRY4(local_4c,local_44[4]),
                         local_4c + local_44[4]);
    cVar3 = FUN_004d4f90(param_2,local_44 + 6,(float *)((int)param_1 + 0x80),'\0');
    if (cVar3 == '\0') {
      local_c = *(float *)((int)param_1 + 0x88) * 0.5;
      local_14 = 0;
      FUN_00402510((int)local_44);
      puVar5 = &local_5c;
      puVar15 = local_8c;
      this_00 = FUN_00402c50((void *)((int)param_1 + 0x10),local_74,local_44);
      puVar5 = FUN_00402c50(this_00,puVar15,puVar5);
      pfVar6 = FUN_00402550(&iStack_20,(longlong *)puVar5);
      if ((float)this[3].vftablePtr * (float)this[3].vftablePtr <=
          *pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1] + pfVar6[2] * pfVar6[2]) {
        if (*(int *)((int)param_1 + 0x1464) == 0) {
          FUN_00405330((int)param_1);
          local_c = 0.1 - *(float *)((int)param_1 + 0x88) * 0.5;
          local_14 = 0;
          FUN_00402510((int)local_44);
          puVar5 = FUN_00402cb0((void *)((int)param_1 + 0x10),local_74,local_44);
          FUN_00402a40((void *)((int)param_1 + 0x1428),puVar5);
          FUN_00402a40((void *)((int)param_1 + 0x1440),&local_5c);
          uVar14 = __alldiv(*(uint *)((int)param_1 + 0x1448),*(uint *)((int)param_1 + 0x144c),
                            0x10000,0);
          uVar7 = (int)((int)uVar14 + ((int)uVar14 >> 0x1f & 0xffU)) >> 8;
          uVar14 = __alldiv(*(uint *)((int)param_1 + 0x1440),*(uint *)((int)param_1 + 0x1444),
                            0x10000,0);
          iVar4 = FUN_00406290(param_2,(int)((int)uVar14 + ((int)uVar14 >> 0x1f & 0xffU)) >> 8,uVar7
                              );
          if (iVar4 == 0) goto LAB_004c61e9;
          FUN_004dd2e0(param_2,param_1);
          *(WalkPathBehavior_vftable **)((int)param_1 + 0x1458) = this[3].vftablePtr;
          FUN_004dde90(param_2,param_1);
          FUN_004dafe0(param_1);
          *(undefined4 *)((int)param_1 + 0x40) = 0;
          *(undefined4 *)((int)param_1 + 0x44) = 0;
          *(undefined4 *)((int)param_1 + 0x48) = 0;
        }
        if (*(int *)((int)param_1 + 0x1410) == 0) goto LAB_004c63af;
        iVar4 = 0;
        goto LAB_004c6320;
      }
      FUN_00405330((int)param_1);
      *(undefined4 *)((int)param_1 + 0x40) = 0;
      *(undefined4 *)((int)param_1 + 0x44) = 0;
      *(undefined4 *)((int)param_1 + 0x48) = 0;
      iVar4 = rand();
      this[2].WalkPathBehavior_data = iVar4 % 4000 + 2000;
      break;
    }
  }
LAB_004c61c5:
  this[2].vftablePtr = (WalkPathBehavior_vftable *)((int)&(this[2].vftablePtr)->vfunction1 + 1);
  this[2].vftablePtr =
       (WalkPathBehavior_vftable *)
       ((uint)this[2].vftablePtr %
       (uint)(((int)this[1].vftablePtr - this->WalkPathBehavior_data) / 0x18));
LAB_004c61e9:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* cube::WalkPathBehavior::vfunction2 @ 004c63e0  kind=game  attributed-by=rtti  size=140 */

undefined4 * __thiscall cube::WalkPathBehavior::vfunction2(WalkPathBehavior *this)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0055431b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x1c);
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &vftable;
    FUN_004c5c60(puVar1 + 1,&this->WalkPathBehavior_data);
    puVar1[4] = this[2].vftablePtr;
    puVar1[5] = 0;
    puVar1[6] = this[3].vftablePtr;
    ExceptionList = local_10;
    return puVar1;
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}


