// Helpers_01 (world) -- server. 16 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers_01.h"

/* FUN_004f8180 @ 004f8180  kind=gamemisc  attributed-by=caller-vote  size=162 */

void __thiscall FUN_004f8180(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x18)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  if (0xaaaaaaaU - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  uVar3 = iVar1 + param_1;
  if (0xaaaaaaa - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_004f7df0(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_004f7df0(this,uVar2);
  return;
}


/* FUN_004ff1a0 @ 004ff1a0  kind=gamemisc  attributed-by=caller-vote  size=409 */

void __cdecl
FUN_004ff1a0(int param_1,uint *param_2,uint param_3,int param_4,int param_5,int param_6,int param_7)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar3 = FUN_00521ed0(param_1,param_4,param_5,param_6,param_3,&local_14,&local_20);
  if ((char)iVar3 == '\0') {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar7 = FUN_0054a946();
  uVar5 = local_10 + local_1c;
  uVar4 = local_14 + local_20;
  uVar6 = local_c + local_18;
  local_34 = ((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10;
  local_2c = ((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10;
  local_24 = ((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10;
  local_30 = uVar5 * 0x10000;
  local_28 = uVar6 * 0x10000;
  local_38 = uVar4 * 0x10000;
  FUN_00402db0(&local_38,(uint)uVar7,(int)(uVar7 >> 0x20));
  *(int *)(param_7 + 8) = local_38;
  *(uint *)(param_7 + 0xc) = local_34;
  *(int *)(param_7 + 0x10) = local_30;
  *(uint *)(param_7 + 0x14) = local_2c;
  *(uint *)(param_7 + 0x1c) = ((int)local_c >> 0x1f) << 0x10 | local_c >> 0x10;
  *(uint *)(param_7 + 0x18) = local_c << 0x10;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  puVar1 = (uint *)(param_7 + 8);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 + uVar5 * 0x10000;
  *(int *)(param_7 + 0xc) =
       *(int *)(param_7 + 0xc) + (((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10) +
       (uint)CARRY4(uVar4,uVar5 * 0x10000);
  puVar1 = (uint *)(param_7 + 0x10);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 + uVar6 * 0x10000;
  *(int *)(param_7 + 0x14) =
       *(int *)(param_7 + 0x14) + (((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10) +
       (uint)CARRY4(uVar4,uVar6 * 0x10000);
  puVar1 = (uint *)(param_7 + 0x18);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 + uVar2 * 0x10000;
  *(int *)(param_7 + 0x1c) =
       *(int *)(param_7 + 0x1c) + (((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10) +
       (uint)CARRY4(uVar4,uVar2 * 0x10000);
  local_1c = local_1c - local_10;
  local_20 = local_20 - local_14;
  if (local_1c < local_20) {
    *(undefined4 *)(param_7 + 0x20) = 0;
    iVar3 = local_20;
    local_20 = local_1c;
  }
  else {
    *(undefined4 *)(param_7 + 0x20) = 1;
    iVar3 = local_1c;
  }
  *(float *)(param_7 + 0x2c) = (float)(int)(local_18 - local_c);
  *(float *)(param_7 + 0x28) = (float)local_20;
  *(float *)(param_7 + 0x24) = (float)iVar3;
  *(undefined1 *)(param_7 + 0x30) = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00521ed0 @ 00521ed0  kind=gamemisc  attributed-by=caller-vote  size=952 */

int __cdecl
FUN_00521ed0(int param_1,int param_2,int param_3,int param_4,uint param_5,int *param_6,int *param_7)

{
  char cVar1;
  int iVar2;
  uint3 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined2 local_8;
  undefined1 local_6;
  
  *param_6 = param_2;
  param_6[1] = param_3;
  param_6[2] = param_4;
  *param_7 = param_2;
  param_7[1] = param_3;
  param_7[2] = param_4;
  if (((((param_2 < 0) || (param_3 < 0)) || (param_4 < 0)) ||
      ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= param_3)))) ||
     (*(int *)(param_1 + 0x4c) <= param_4)) {
    puVar4 = (undefined2 *)&DAT_00583dfc;
  }
  else {
    puVar4 = (undefined2 *)
             (((*(int *)(param_1 + 0x48) * param_4 + param_3) * *(int *)(param_1 + 0x44) + param_2)
              * 3 + *(int *)(param_1 + 0x30));
  }
  local_8 = *puVar4;
  iVar5 = param_2 + -1;
  local_6 = *(undefined1 *)(puVar4 + 1);
  if (((iVar5 < 0) || (param_3 < 0)) ||
     ((param_4 < 0 ||
      (((*(int *)(param_1 + 0x44) <= iVar5 || (*(int *)(param_1 + 0x48) <= param_3)) ||
       (*(int *)(param_1 + 0x4c) <= param_4)))))) {
    puVar6 = &DAT_00583dfc;
  }
  else {
    puVar6 = (undefined1 *)
             (((*(int *)(param_1 + 0x48) * param_4 + param_3) * *(int *)(param_1 + 0x44) + iVar5) *
              3 + *(int *)(param_1 + 0x30));
  }
  puVar4 = &local_8;
  iVar5 = 0;
  iVar7 = (int)puVar6 - (int)puVar4;
  while( true ) {
    cVar1 = ((char *)((int)&local_8 + iVar5))[iVar7];
    uVar3 = (uint3)((uint)puVar4 >> 8);
    puVar4 = (undefined2 *)CONCAT31(uVar3,cVar1);
    if (cVar1 != *(char *)((int)&local_8 + iVar5)) break;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return (uint)uVar3 << 8;
    }
  }
  iVar5 = param_3 + -1;
  if (((param_2 < 0) || (iVar5 < 0)) ||
     (((param_4 < 0 ||
       ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= iVar5)))) ||
      (*(int *)(param_1 + 0x4c) <= param_4)))) {
    puVar6 = &DAT_00583dfc;
  }
  else {
    puVar6 = (undefined1 *)
             (((*(int *)(param_1 + 0x48) * param_4 + iVar5) * *(int *)(param_1 + 0x44) + param_2) *
              3 + *(int *)(param_1 + 0x30));
  }
  puVar4 = &local_8;
  iVar5 = 0;
  iVar7 = (int)puVar6 - (int)puVar4;
  while( true ) {
    cVar1 = ((char *)((int)&local_8 + iVar5))[iVar7];
    uVar3 = (uint3)((uint)puVar4 >> 8);
    puVar4 = (undefined2 *)CONCAT31(uVar3,cVar1);
    if (cVar1 != *(char *)((int)&local_8 + iVar5)) break;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return (uint)uVar3 << 8;
    }
  }
  iVar5 = param_4 + -1;
  if ((((param_2 < 0) || (param_3 < 0)) || (iVar5 < 0)) ||
     (((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= param_3)) ||
      (*(int *)(param_1 + 0x4c) <= iVar5)))) {
    puVar6 = &DAT_00583dfc;
  }
  else {
    puVar6 = (undefined1 *)
             (((iVar5 * *(int *)(param_1 + 0x48) + param_3) * *(int *)(param_1 + 0x44) + param_2) *
              3 + *(int *)(param_1 + 0x30));
  }
  puVar4 = &local_8;
  iVar5 = 0;
  iVar7 = (int)puVar6 - (int)puVar4;
  while( true ) {
    cVar1 = ((char *)((int)&local_8 + iVar5))[iVar7];
    uVar3 = (uint3)((uint)puVar4 >> 8);
    puVar4 = (undefined2 *)CONCAT31(uVar3,cVar1);
    if (cVar1 != *(char *)((int)&local_8 + iVar5)) break;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return (uint)uVar3 << 8;
    }
  }
  iVar5 = *(int *)(param_1 + 0x44);
  iVar7 = param_2;
  if (param_2 < iVar5) {
    do {
      if (((iVar7 < 0) || (param_3 < 0)) ||
         ((param_4 < 0 ||
          ((*(int *)(param_1 + 0x48) <= param_3 || (*(int *)(param_1 + 0x4c) <= param_4)))))) {
        puVar6 = &DAT_00583dfc;
      }
      else {
        puVar6 = (undefined1 *)
                 (((*(int *)(param_1 + 0x48) * param_4 + param_3) * iVar5 + iVar7) * 3 +
                 *(int *)(param_1 + 0x30));
      }
      iVar5 = 0;
      do {
        if (((char *)((int)&local_8 + iVar5))[(int)puVar6 - (int)&local_8] !=
            *(char *)((int)&local_8 + iVar5)) goto LAB_005220d5;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      *param_7 = iVar7;
      iVar5 = *(int *)(param_1 + 0x44);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
LAB_005220d5:
  iVar5 = *(int *)(param_1 + 0x48);
  iVar7 = param_3;
  if (param_3 < iVar5) {
    do {
      if ((((param_2 < 0) || (iVar7 < 0)) || (param_4 < 0)) ||
         ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x4c) <= param_4)))) {
        puVar6 = &DAT_00583dfc;
      }
      else {
        puVar6 = (undefined1 *)
                 (((iVar5 * param_4 + iVar7) * *(int *)(param_1 + 0x44) + param_2) * 3 +
                 *(int *)(param_1 + 0x30));
      }
      iVar5 = 0;
      do {
        if (((char *)((int)&local_8 + iVar5))[(int)puVar6 - (int)&local_8] !=
            *(char *)((int)&local_8 + iVar5)) goto LAB_00522146;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      param_7[1] = iVar7;
      iVar5 = *(int *)(param_1 + 0x48);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
LAB_00522146:
  if (param_4 < *(int *)(param_1 + 0x4c)) {
    do {
      if (((param_2 < 0) || (param_3 < 0)) ||
         ((param_4 < 0 ||
          ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= param_3)))))) {
        puVar6 = &DAT_00583dfc;
      }
      else {
        puVar6 = (undefined1 *)
                 (((*(int *)(param_1 + 0x48) * param_4 + param_3) * *(int *)(param_1 + 0x44) +
                  param_2) * 3 + *(int *)(param_1 + 0x30));
      }
      iVar5 = 0;
      do {
        if (((char *)((int)&local_8 + iVar5))[(int)puVar6 - (int)&local_8] !=
            *(char *)((int)&local_8 + iVar5)) goto LAB_005221b1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      param_7[2] = param_4;
      param_4 = param_4 + 1;
    } while (param_4 < *(int *)(param_1 + 0x4c));
  }
LAB_005221b1:
  uVar8 = param_5 & 0x80000003;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
  }
  if (uVar8 == 1) {
    iVar7 = *(int *)(param_1 + 0x44);
    iVar2 = *param_6;
    iVar5 = param_6[2];
    *param_6 = param_6[1];
    param_6[1] = (iVar7 - iVar2) + -1;
  }
  else {
    if (uVar8 != 2) {
      if (uVar8 == 3) {
        iVar5 = *param_6;
        *param_6 = (*(int *)(param_1 + 0x48) - param_6[1]) + -1;
        param_6[1] = iVar5;
        param_6[2] = param_6[2];
      }
      goto LAB_00522210;
    }
    iVar7 = *(int *)(param_1 + 0x48);
    iVar5 = param_6[2];
    *param_6 = (*(int *)(param_1 + 0x44) - *param_6) + -1;
    param_6[1] = (iVar7 - param_6[1]) + -1;
  }
  param_6[2] = iVar5;
LAB_00522210:
  if (uVar8 == 1) {
    iVar5 = *(int *)(param_1 + 0x44);
    iVar7 = *param_7;
    *param_7 = param_7[1];
    param_7[1] = (iVar5 - iVar7) + -1;
  }
  else if (uVar8 == 2) {
    iVar5 = *(int *)(param_1 + 0x48);
    *param_7 = (*(int *)(param_1 + 0x44) - *param_7) + -1;
    param_7[1] = (iVar5 - param_7[1]) + -1;
  }
  else if (uVar8 == 3) {
    iVar5 = *param_7;
    *param_7 = (*(int *)(param_1 + 0x48) - param_7[1]) + -1;
    param_7[1] = iVar5;
  }
  iVar5 = *param_6;
  if (*param_7 < iVar5) {
    *param_6 = *param_7;
    *param_7 = iVar5;
  }
  iVar5 = param_6[1];
  if (param_7[1] < iVar5) {
    param_6[1] = param_7[1];
    param_7[1] = iVar5;
  }
  iVar5 = param_6[2];
  iVar7 = param_7[2];
  if (iVar7 < iVar5) {
    param_6[2] = iVar7;
    param_7[2] = iVar5;
  }
  *param_7 = *param_7 + 1;
  param_7[1] = param_7[1] + 1;
  param_7[2] = param_7[2] + 1;
  return CONCAT31((int3)((uint)iVar7 >> 8),1);
}


/* FUN_00522820 @ 00522820  kind=gamemisc  attributed-by=caller-vote  size=20 */

undefined1 __fastcall FUN_00522820(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (((cVar1 != '\0') && (cVar1 != '\x02')) && (cVar1 != '\x01')) {
    return 0;
  }
  return 1;
}


/* FUN_005284a0 @ 005284a0  kind=gamemisc  attributed-by=caller-vote  size=130 */

void __thiscall FUN_005284a0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004f80d0(this,1);
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_004f7400(*(void **)((int)this + 4),
                   (undefined4 *)((((int)param_1 - (int)puVar2) / 0x140) * 0x140 + *(int *)this));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x140;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004f80d0(this,1);
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_004f7400(*(void **)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x140;
  return;
}


/* FUN_005285c0 @ 005285c0  kind=gamemisc  attributed-by=caller-vote  size=213 */

void __thiscall FUN_005285c0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005560b2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)((int)this + 4);
  if ((param_1 < piVar1) && (piVar2 = *(int **)this, piVar2 <= param_1)) {
    if (piVar1 == *(int **)((int)this + 8)) {
      FUN_004f8180(this,1);
    }
    this_00 = *(void **)((int)this + 4);
    param_1 = (int *)(*(int *)this + (((int)param_1 - (int)piVar2) / 0x18) * 0x18);
    local_8 = 0;
    if (this_00 == (void *)0x0) goto LAB_0052867d;
    FUN_004daa80(this_00,param_1);
    local_8 = CONCAT31(local_8._1_3_,1);
  }
  else {
    if (piVar1 == *(int **)((int)this + 8)) {
      FUN_004f8180(this,1);
    }
    this_00 = *(void **)((int)this + 4);
    local_8 = 2;
    if (this_00 == (void *)0x0) goto LAB_0052867d;
    FUN_004daa80(this_00,param_1);
    local_8 = CONCAT31(local_8._1_3_,3);
  }
  FUN_004daa80((void *)((int)this_00 + 0xc),param_1 + 3);
LAB_0052867d:
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  ExceptionList = local_10;
  return;
}


/* FUN_0052d820 @ 0052d820  kind=gamemisc  attributed-by=caller-vote  size=25 */

undefined4 __fastcall FUN_0052d820(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return *(undefined4 *)(param_1 + 0xc);
}


/* FUN_0052d840 @ 0052d840  kind=gamemisc  attributed-by=caller-vote  size=25 */

undefined4 __fastcall FUN_0052d840(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  return *(undefined4 *)(param_1 + 0x10);
}


/* FUN_0052de60 @ 0052de60  kind=gamemisc  attributed-by=caller-vote  size=123 */

void __thiscall FUN_0052de60(void *this,int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 8) != '\0') {
    *param_2 = (*(int *)((int)this + 0x10) - *param_2) + -1;
  }
  uVar2 = *(uint *)((int)this + 4) & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  if (uVar2 == 1) {
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    *param_2 = (*(int *)((int)this + 0x10) - iVar1) + -1;
  }
  else {
    if (uVar2 == 2) {
      *param_1 = (*(int *)((int)this + 0xc) - *param_1) + -1;
      *param_2 = (*(int *)((int)this + 0x10) - *param_2) + -1;
      return;
    }
    if (uVar2 == 3) {
      iVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = iVar1;
      *param_1 = (*(int *)((int)this + 0xc) - *param_1) + -1;
      return;
    }
  }
  return;
}


/* FUN_0052df80 @ 0052df80  kind=gamemisc  attributed-by=caller-vote  size=44 */

undefined4 * __thiscall FUN_0052df80(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0052ed60(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
  }
  return puVar1;
}


/* FUN_0052ed60 @ 0052ed60  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * __fastcall FUN_0052ed60(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}


/* FUN_00530550 @ 00530550  kind=gamemisc  attributed-by=caller-vote  size=14 */

void __thiscall FUN_00530550(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)this;
  return;
}


/* FUN_00549300 @ 00549300  kind=gamemisc  attributed-by=caller-vote  size=40 */

void FUN_00549300(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00426a30(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
  }
  return;
}


/* FUN_00549330 @ 00549330  kind=gamemisc  attributed-by=caller-vote  size=264 */

basic_istream<char,std::char_traits<char>_> * __thiscall
FUN_00549330(void *this,char *param_1,uint param_2,int *param_3,int param_4)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0055668d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_4 != 0) {
    *(undefined ***)this = &PTR_0055b4f8;
    *(code **)((int)this + 0x70) = _vftable__exref;
    *(code **)((int)this + 0x70) = _vftable__exref;
    local_8 = 0;
  }
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)((int)this + 0x10);
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (this,(basic_streambuf<char,std::char_traits<char>_> *)this_00,false);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ifstream<char,std::char_traits<char>_> */
  *(basic_ifstream<char,std::char_traits<char>_>_vftable **)((int)this + *(int *)(*(int *)this + 4))
       = &std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*(int *)this + 4) + -4 + (int)this) = *(int *)(*(int *)this + 4) + -0x70;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  local_8._0_1_ = 2;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  *this_00 = (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x55) = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this_00);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x58) = DAT_00583e00;
  *(undefined4 *)((int)this + 0x50) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  pbVar1 = FUN_0042f890(this_00,param_1,param_2 | 1,param_3);
  if (pbVar1 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*(int *)this + 4) + (int)this),2
               ,false);
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_00549440 @ 00549440  kind=gamemisc  attributed-by=caller-vote  size=264 */

basic_ostream<char,std::char_traits<char>_> * __thiscall
FUN_00549440(void *this,char *param_1,uint param_2,int *param_3,int param_4)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005566ed;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_4 != 0) {
    *(undefined ***)this = &PTR_0055b510;
    *(code **)((int)this + 0x60) = _vftable__exref;
    *(code **)((int)this + 0x60) = _vftable__exref;
    local_8 = 0;
  }
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)((int)this + 4);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (this,(basic_streambuf<char,std::char_traits<char>_> *)this_00,false);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ofstream<char,std::char_traits<char>_> */
  *(basic_ofstream<char,std::char_traits<char>_>_vftable **)((int)this + *(int *)(*(int *)this + 4))
       = &std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*(int *)this + 4) + -4 + (int)this) = *(int *)(*(int *)this + 4) + -0x60;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  local_8._0_1_ = 2;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  *this_00 = (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x49) = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this_00);
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x4c) = DAT_00583e00;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  pbVar1 = FUN_0042f890(this_00,param_1,param_2 | 2,param_3);
  if (pbVar1 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*(int *)this + 4) + (int)this),2
               ,false);
  }
  ExceptionList = local_10;
  return this;
}


/* Facet_Register @ 0054a710  kind=gamemisc  attributed-by=caller-vote  size=40 */

/* Library Function - Multiple Matches With Same Base Name
    private: static void __cdecl std::locale::facet::_Facet_Register(class std::locale::facet *)
    void __cdecl std::_Facet_Register(class std::_Facet_base *)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void __cdecl Facet_Register(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = DAT_005842f4;
    puVar1[1] = param_1;
  }
  DAT_005842f4 = puVar1;
  return;
}


