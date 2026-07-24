// Proven (entity) -- server. 8 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Proven.h"

/* monster_level_formula @ 00411090  kind=game  attributed-by=ledger  size=52 */

float10 __cdecl FUN_00411090(float param_1)

{
  return (float10)((1.0 / (1.0 - param_1) - 1.0) * 20.0 + 1.0);
}


/* SpeechDb_loadBlobToVector @ 00413130  kind=game  attributed-by=ledger  size=78 */

undefined4 __thiscall FUN_00413130(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *local_c;
  uint local_8;
  
  uVar1 = FUN_00413070(this,param_1,(uint *)&local_c,&local_8);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  param_2[3] = 0;
  FUN_00413180(param_2,local_8);
  pvVar2 = memcpy((void *)*param_2,local_c,local_8);
  return CONCAT31((int3)((uint)pvVar2 >> 8),1);
}


/* ItemData_copy (0x118) @ 00413710  kind=gamemisc  attributed-by=ledger  size=163 */

undefined1 * __thiscall FUN_00413710(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  *(undefined1 *)this = *param_1;
  *(undefined1 *)((int)this + 1) = param_1[1];
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined1 *)((int)this + 0xc) = param_1[0xc];
  *(undefined1 *)((int)this + 0xd) = param_1[0xd];
  *(undefined1 *)((int)this + 0xe) = param_1[0xe];
  *(undefined2 *)((int)this + 0x10) = *(undefined2 *)(param_1 + 0x10);
  iVar3 = 0x1f;
  puVar2 = param_1 + 0x17;
  puVar1 = (undefined1 *)((int)this + 0x16);
  do {
    iVar3 = iVar3 + -1;
    puVar1[-2] = puVar2[-3];
    puVar1[-1] = puVar2[-2];
    *puVar1 = puVar1[(int)param_1 - (int)this];
    puVar1[1] = *puVar2;
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 1);
    puVar2 = puVar2 + 8;
    puVar1 = puVar1 + 8;
  } while (-1 < iVar3);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  return this;
}


/* ItemData_vector_push_back @ 00528530  kind=gamemisc  attributed-by=ledger  size=132 */

void __thiscall FUN_00528530(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined1 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined1 **)((int)this + 8)) {
      FUN_00413940(this,1);
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_00413710(*(void **)((int)this + 4),
                   (undefined1 *)((((int)param_1 - (int)puVar2) / 0x118) * 0x118 + *(int *)this));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x118;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined1 **)((int)this + 8)) {
      FUN_00413940(this,1);
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_00413710(*(void **)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x118;
  return;
}


/* item_gen_kinds_4_9 @ 00528bf0  kind=game  attributed-by=ledger  size=1240 */

void FUN_00528bf0(void *param_1,undefined2 param_2,undefined1 param_3,int param_4)

{
  void *pvVar1;
  uint uVar2;
  bool bVar3;
  void *local_138;
  int local_134;
  undefined4 local_130;
  undefined1 local_12c;
  undefined1 local_12b;
  int local_128;
  undefined4 local_124;
  undefined1 local_120;
  char local_11f;
  undefined1 local_11e;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005560db;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_138 = (void *)0x0;
  local_134 = 0;
  local_130 = 0;
  local_8 = 0;
  local_12b = 0;
  local_124 = 0;
  local_11e = 0;
  local_18 = 0;
  memset(local_118,0,0x100);
  local_11c = param_2;
  local_120 = param_3;
  if ((param_4 == 1) || (param_4 < 0)) {
    local_11f = 1;
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 4;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 5;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 6;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
  }
  if ((param_4 == 3) || (param_4 < 0)) {
    local_11f = 0x19;
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 4;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 5;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 6;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
  }
  if ((param_4 == 2) || (param_4 < 0)) {
    local_11f = 0x1a;
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 4;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 5;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 6;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
  }
  if ((param_4 == 4) || (param_4 < 0)) {
    local_11f = 0x1b;
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 4;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 5;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 6;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
  }
  uVar2 = rand();
  uVar2 = uVar2 & 0x80000001;
  bVar3 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar3 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
  }
  local_11f = !bVar3 + '\v';
  local_12c = 8;
  local_128 = rand();
  local_128 = local_128 % 100;
  FUN_00528530(&local_138,&local_12c);
  uVar2 = rand();
  uVar2 = uVar2 & 0x80000001;
  bVar3 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar3 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
  }
  local_11f = !bVar3 + '\v';
  local_12c = 9;
  local_128 = rand();
  local_128 = local_128 % 100;
  FUN_00528530(&local_138,&local_12c);
  uVar2 = rand();
  pvVar1 = local_138;
  FUN_00413710(param_1,(undefined1 *)
                       ((uVar2 % (uint)((local_134 - (int)local_138) / 0x118)) * 0x118 +
                       (int)local_138));
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* item_special_candidate @ 0052a760  kind=game  attributed-by=ledger  size=194 */

void FUN_0052a760(byte *param_1,undefined2 param_2,undefined1 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 local_120 [280];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  param_1[0x10] = 1;
  param_1[0x11] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  memset(param_1 + 0x14,0,0x100);
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000001;
  bVar3 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar3 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar3) {
    puVar2 = (undefined1 *)FUN_00528bf0(local_120,param_2,param_3,-1);
  }
  else {
    puVar2 = (undefined1 *)FUN_0052c4e0(local_120,param_2,param_3,-1);
  }
  FUN_00402a70(param_1,puVar2);
  *(uint *)(param_1 + 8) = (uint)*param_1;
  *param_1 = 2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* item_generator @ 0052b470  kind=game  attributed-by=ledger  size=2765 */

void FUN_0052b470(void *param_1,undefined2 param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  void *local_138;
  int local_134;
  undefined4 local_130;
  byte local_12c [4];
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_11e;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005561ab;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_138 = (void *)0x0;
  local_134 = 0;
  local_130 = 0;
  local_8 = 0;
  local_128 = 0;
  local_124 = 0;
  local_11e = 0;
  local_18 = 0;
  memset(local_118,0,0x100);
  local_11c = param_2;
  rand();
  rand();
  rand();
  rand();
  local_11f = 1;
  local_12c[0] = 3;
  iVar2 = rand();
  iVar6 = param_3 + 1;
  local_12c[1] = (char)(iVar2 % 3);
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  rand();
  rand();
  rand();
  rand();
  rand();
  local_12c[1] = 0xd;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_11f = 2;
  local_12c[1] = 6;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[1] = 7;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[1] = 10;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[1] = 0xb;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 7;
  local_12c[1] = 0;
  local_11f = 1;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 4;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 5;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 6;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_11f = 0x19;
  local_12c[0] = 7;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 7;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 4;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 5;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 6;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_11f = 0x1a;
  local_12c[0] = 7;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 7;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 4;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 5;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 6;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_11f = 0x1b;
  local_12c[0] = 7;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 7;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 4;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 5;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  local_12c[0] = 6;
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 1000 == 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = rand();
  if (iVar3 % 10000 == 0) {
    iVar2 = iVar2 + 1;
  }
  if (4 < iVar2) {
    iVar2 = 4;
  }
  local_120 = (undefined1)iVar2;
  FUN_00528530(&local_138,local_12c);
  puVar4 = (undefined1 *)FUN_0052a760(local_12c,param_2,(char)param_3);
  FUN_00528530(&local_138,puVar4);
  uVar5 = rand();
  pvVar1 = local_138;
  FUN_00413710(param_1,(undefined1 *)
                       ((uVar5 % (uint)((local_134 - (int)local_138) / 0x118)) * 0x118 +
                       (int)local_138));
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* item_gen_kind_3 @ 0052c4e0  kind=game  attributed-by=ledger  size=820 */

void FUN_0052c4e0(void *param_1,undefined2 param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *local_138;
  int local_134;
  undefined4 local_130;
  undefined1 local_12c;
  char local_12b;
  int local_128;
  undefined4 local_124;
  undefined1 local_120;
  char local_11f;
  undefined1 local_11e;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005561eb;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_138 = (void *)0x0;
  local_134 = 0;
  local_130 = 0;
  local_8 = 0;
  local_12b = 0;
  local_128 = 0;
  local_124 = 0;
  local_11e = 0;
  local_18 = 0;
  memset(local_118,0,0x100);
  local_11c = param_2;
  local_120 = param_3;
  local_11f = 1;
  local_12c = 3;
  if ((param_4 == 1) || (pvVar3 = (void *)0x0, param_4 < 0)) {
    iVar1 = rand();
    local_12b = (char)(iVar1 % 3);
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_11f = 1;
    iVar1 = rand();
    local_12b = (char)(iVar1 % 3) + '\x0f';
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12b = 0xd;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    pvVar3 = local_138;
  }
  if ((param_4 == 4) || (param_4 < 0)) {
    local_12b = 3;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12b = 5;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12b = 4;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    pvVar3 = local_138;
  }
  local_11f = '\x02';
  if ((param_4 == 2) || (param_4 < 0)) {
    local_12b = 6;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    rand();
    local_12b = 8;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    pvVar3 = local_138;
  }
  if ((param_4 == 3) || (param_4 < 0)) {
    local_12b = 10;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12b = 0xb;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12b = 0xc;
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    local_11f = '\f' - (uVar2 != 0);
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    pvVar3 = local_138;
  }
  uVar2 = rand();
  FUN_00413710(param_1,(undefined1 *)
                       ((uVar2 % (uint)((local_134 - (int)pvVar3) / 0x118)) * 0x118 + (int)pvVar3));
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


