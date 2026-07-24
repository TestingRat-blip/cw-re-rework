// helpers_dtor_like (control) -- cube. 7 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like.h"

/* FUN_004041c0 @ 004041c0  kind=gamemisc  attributed-by=role:dtor-like  size=275 */

void FUN_004041c0(uint *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_34 [4];
  void *local_30 [4];
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e13a8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_00408fc0(param_1);
  if (iVar1 != *in_ECX) {
    piVar2 = (int *)(iVar1 + 0x10);
    if (0xf < *(uint *)(iVar1 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    iVar3 = FUN_0040c520(0,param_1[4],piVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar3) goto LAB_004042b5;
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  if (param_1[5] < 0x10) {
    if (param_1[4] + 1 != 0) {
      memmove(local_30,param_1,param_1[4] + 1);
    }
  }
  else {
    local_30[0] = (void *)*param_1;
    *param_1 = 0;
  }
  local_20 = param_1[4];
  local_1c = param_1[5];
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  local_18 = 0;
  local_8 = 0;
  iVar3 = FUN_004021e0(local_30);
  FUN_004028d0(local_34,iVar1,iVar3 + 0x10,iVar3);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_30[0]);
  }
LAB_004042b5:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0046e330 @ 0046e330  kind=gamemisc  attributed-by=role:dtor-like  size=205 */

void FUN_0046e330(uint param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *in_ECX;
  void *pvVar3;
  uint uStack_30;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e56b0;
  local_10 = ExceptionList;
  uStack_30 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  puVar2 = &uStack_30;
  if (param_1 != 0) {
    puVar2 = &uStack_30;
    if (param_1 < 0x20000000) {
      pvVar3 = operator_new(param_1 << 3);
      puVar2 = (uint *)local_14;
      if (pvVar3 != (void *)0x0) goto LAB_0046e38b;
    }
    local_14 = (undefined1 *)puVar2;
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0046e38b:
  local_14 = (undefined1 *)puVar2;
  local_8 = 0;
  FUN_00456a40(*in_ECX,in_ECX[1],pvVar3,&local_15,0,param_1);
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 == (undefined4 *)0x0) {
    *in_ECX = (int)pvVar3;
    in_ECX[2] = (int)((int)pvVar3 + param_1 * 8);
    in_ECX[1] = (int)((int)pvVar3 + (in_ECX[1] - (int)puVar1 >> 3) * 8);
    ExceptionList = local_10;
    return;
  }
  if (puVar1 != (undefined4 *)in_ECX[1]) {
    FUN_0046f990();
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar1);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_004e75c0 @ 004e75c0  kind=gamemisc  attributed-by=role:dtor-like  size=131 */

void FUN_004e75c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  void *_Dst;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x44) = param_1;
  *(undefined4 *)(in_ECX + 0x48) = param_2;
  *(int *)(in_ECX + 0x4c) = param_3;
  if (*(void **)(in_ECX + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(in_ECX + 0x30));
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  if (((0 < *(int *)(in_ECX + 0x44)) && (0 < *(int *)(in_ECX + 0x48))) &&
     (0 < *(int *)(in_ECX + 0x4c))) {
    lVar1 = (ulonglong)(uint)(*(int *)(in_ECX + 0x48) * *(int *)(in_ECX + 0x44) * param_3) * 3;
    _Dst = (void *)FUN_0068d652(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    *(void **)(in_ECX + 0x30) = _Dst;
    memset(_Dst,0,*(int *)(in_ECX + 0x48) * *(int *)(in_ECX + 0x4c) * *(int *)(in_ECX + 0x44) * 3);
  }
  return;
}


/* FUN_00636ad0 @ 00636ad0  kind=gamemisc  attributed-by=role:dtor-like  size=158 */

void FUN_00636ad0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  if ((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) != 0) {
    piVar3 = *(int **)(in_ECX + 0x34);
    if ((piVar3 != (int *)0x0) && (piVar3[0x12] == 3)) {
      puVar1 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar1 = (undefined4 *)*param_1;
      }
      iVar2 = FUN_00428db0(0,*(undefined4 *)(piVar3[0x2a] + piVar3[0x1f] * 0x18 + 0x10),puVar1,
                           param_1[4]);
      if (iVar2 != 0) {
        if ((undefined4 *)(piVar3[0x2a] + piVar3[0x1f] * 0x18) != param_1) {
          FUN_0040f680(param_1,0,0xffffffff);
        }
        (**(code **)(*piVar3 + 4))(1);
      }
    }
    piVar3 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar3 != *(int **)(in_ECX + 0x2c)) {
      do {
        FUN_00636ad0(param_1);
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
    }
  }
  return;
}


/* FUN_00658530 @ 00658530  kind=gamemisc  attributed-by=role:dtor-like  size=238 */

void FUN_00658530(undefined1 *param_1,basic_istream<char,std::char_traits<char>_> *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 extraout_EDX;
  uint unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar5;
  int local_28;
  basic_istream<char,std::char_traits<char>_> *local_24;
  void *local_20 [4];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_24 = param_2;
  uVar5 = 0;
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_2,(char *)&local_28,(ulonglong)unaff_ESI << 0x20);
  if (local_28 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_0040c280(&DAT_006fc918,0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar5);
    return;
  }
  pcVar2 = (char *)FUN_0068d652(local_28 + 1);
  pcVar2[local_28] = '\0';
  std::basic_istream<char,std::char_traits<char>_>::read
            (local_24,pcVar2,CONCAT44(unaff_EDI,local_28 >> 0x1f));
  local_c = 0xf;
  local_10 = 0;
  local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
  if (*pcVar2 == '\0') {
    iVar3 = 0;
  }
  else {
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar4 - (int)(pcVar2 + 1);
  }
  FUN_0040c280(pcVar2,iVar3);
  operator_delete__(pcVar2);
  FUN_004032e0(local_20);
  if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20[0]);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00661830 @ 00661830  kind=gamemisc  attributed-by=role:dtor-like  size=216 */

void FUN_00661830(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_34 [4];
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f72a8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_004e3790(param_1);
  if (iVar1 != *in_ECX) {
    piVar2 = (int *)(iVar1 + 0x10);
    if (7 < *(uint *)(iVar1 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    iVar3 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar3) goto LAB_006618ea;
  }
  local_1c = 7;
  local_20 = 0;
  local_30[0] = (void *)((uint)local_30[0] & 0xffff0000);
  FUN_0040f680(param_1,0,0xffffffff);
  local_18 = 0;
  local_8 = 0;
  iVar3 = FUN_0058d8f0(local_30);
  FUN_00638db0(local_34,iVar1,iVar3 + 0x10,iVar3);
  if (7 < local_1c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_30[0]);
  }
LAB_006618ea:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00677d10 @ 00677d10  kind=gamemisc  attributed-by=role:dtor-like  size=239 */

void FUN_00677d10(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8430;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x924924a) {
      pvVar3 = operator_new(param_1 * 0x1c);
      if (pvVar3 != (void *)0x0) goto LAB_00677d75;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00677d75:
  local_8 = 0;
  FUN_00677b00(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  iVar1 = *in_ECX;
  if (*in_ECX != 0) {
    FUN_00677ac0(*in_ECX,in_ECX[1],(int)&param_1 + 3,param_1);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *in_ECX = (int)pvVar3;
  in_ECX[2] = (int)((int)pvVar3 + uVar2 * 0x1c);
  in_ECX[1] = (int)((int)pvVar3 + ((in_ECX[1] - iVar1) / 0x1c) * 0x1c);
  ExceptionList = local_10;
  return;
}


