// helpers_ctor_like (control) -- cube. 7 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_ctor_like.h"

/* FUN_00451550 @ 00451550  kind=gamemisc  attributed-by=role:ctor-like  size=146 */

undefined4 * FUN_00451550(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 *_Src;
  int iVar2;
  char *pcVar3;
  
  if (*param_3 == '\0') {
    iVar2 = 0;
  }
  else {
    pcVar3 = param_3;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar2 = (int)pcVar3 - (int)(param_3 + 1);
  }
  _Src = (undefined4 *)FUN_0046f050(param_3,iVar2);
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  if ((uint)_Src[5] < 0x10) {
    if (_Src[4] + 1 != 0) {
      memmove(param_1,_Src,_Src[4] + 1);
    }
  }
  else {
    *param_1 = *_Src;
    *_Src = 0;
  }
  param_1[4] = _Src[4];
  param_1[5] = _Src[5];
  _Src[5] = 0xf;
  _Src[4] = 0;
  *(undefined1 *)_Src = 0;
  return param_1;
}


/* FUN_004515f0 @ 004515f0  kind=gamemisc  attributed-by=role:ctor-like  size=227 */

undefined4 * FUN_004515f0(undefined4 *param_1,int param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e31c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  local_8 = 0;
  if (*param_3 == '\0') {
    iVar5 = 0;
  }
  else {
    pcVar6 = param_3;
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    iVar5 = (int)pcVar6 - (int)(param_3 + 1);
  }
  uVar2 = param_1[4];
  uVar1 = iVar5 + *(int *)(param_2 + 0x10);
  if (((uVar2 <= uVar1) && (param_1[5] != uVar1)) && (cVar3 = FUN_00407d50(uVar1,1), cVar3 != '\0'))
  {
    param_1[4] = uVar2;
    puVar4 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar4 + uVar2) = 0;
  }
  FUN_0046ef60(param_2,0,0xffffffff);
  if (*param_3 == '\0') {
    iVar5 = 0;
  }
  else {
    pcVar6 = param_3;
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    iVar5 = (int)pcVar6 - (int)(param_3 + 1);
  }
  FUN_0046f050(param_3,iVar5);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004516e0 @ 004516e0  kind=gamemisc  attributed-by=role:ctor-like  size=228 */

undefined4 * FUN_004516e0(undefined4 *param_1,char *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e31c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  local_8 = 0;
  if (*param_2 == '\0') {
    iVar5 = 0;
  }
  else {
    pcVar6 = param_2;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    iVar5 = (int)pcVar6 - (int)(param_2 + 1);
  }
  uVar1 = param_1[4];
  uVar3 = *(int *)(param_3 + 0x10) + iVar5;
  if (((uVar1 <= uVar3) && (param_1[5] != uVar3)) && (cVar2 = FUN_00407d50(uVar3,1), cVar2 != '\0'))
  {
    param_1[4] = uVar1;
    puVar4 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar4 + uVar1) = 0;
  }
  if (*param_2 == '\0') {
    iVar5 = 0;
  }
  else {
    pcVar6 = param_2;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    iVar5 = (int)pcVar6 - (int)(param_2 + 1);
  }
  FUN_0046f050(param_2,iVar5);
  FUN_0046ef60(param_3,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00480e00 @ 00480e00  kind=gamemisc  attributed-by=role:ctor-like  size=417 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_00480e00(undefined2 *param_1,int param_2,void *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  undefined4 in_stack_0000001c;
  uint in_stack_00000020;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006e6280;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 4);
  local_8 = 0;
  local_14 = FUN_004e3790(param_2);
  if (local_14 == *piVar1) {
LAB_00480e76:
    local_14 = *piVar1;
  }
  else {
    piVar4 = (int *)(local_14 + 0x10);
    if (7 < *(uint *)(local_14 + 0x24)) {
      piVar4 = (int *)*piVar4;
    }
    iVar3 = FUN_00428db0(0,*(undefined4 *)(param_2 + 0x10),piVar4,*(undefined4 *)(local_14 + 0x20));
    if (iVar3 < 0) goto LAB_00480e76;
  }
  if ((DAT_0076b074 & 1) == 0) {
    DAT_0076b074 = DAT_0076b074 | 1;
    local_8._0_1_ = 1;
    _DAT_0076b064 = 0;
    _DAT_0076b068 = 0;
    _DAT_0076b064 = FUN_00630a10(uVar2);
    local_8._0_1_ = 2;
    DAT_0076b06c = 0;
    _DAT_0076b070 = 0;
    DAT_0076b06c = FUN_00439600(0,0);
    _atexit(FUN_006fb1b0);
    local_8 = (uint)local_8._1_3_ << 8;
  }
  if (local_14 == *piVar1) {
    FUN_0040eb60(&PTR_006fccac);
    goto LAB_00480f7d;
  }
  piVar1 = (int *)(local_14 + 0x28);
  local_14 = FUN_004e3790(&param_3);
  if (local_14 == *piVar1) {
LAB_00480f40:
    local_14 = *piVar1;
  }
  else {
    piVar4 = (int *)(local_14 + 0x10);
    if (7 < *(uint *)(local_14 + 0x24)) {
      piVar4 = (int *)*piVar4;
    }
    iVar3 = FUN_00428db0(0,in_stack_0000001c,piVar4,*(undefined4 *)(local_14 + 0x20));
    if (iVar3 < 0) goto LAB_00480f40;
  }
  if (local_14 == *piVar1) {
    FUN_0040eb60(&PTR_006fccac);
  }
  else {
    *(undefined4 *)(param_1 + 10) = 7;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = 0;
    FUN_0040f680(local_14 + 0x28,0,0xffffffff);
  }
LAB_00480f7d:
  if (in_stack_00000020 < 8) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_3);
}


/* FUN_004ce550 @ 004ce550  kind=gamemisc  attributed-by=role:ctor-like  size=264 */

void * __thiscall
FUN_004ce550(void *this,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e860d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_5 != 0) {
    *(undefined ***)this = &PTR_007030ac;
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
  *(undefined4 *)((int)this + 0x4c) = DAT_0076af5c;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar1 = FUN_0040d240(param_2,param_3 | 2,param_4);
  if (iVar1 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*(int *)this + 4) + (int)this),2
               ,false);
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_00583bf0 @ 00583bf0  kind=gamemisc  attributed-by=role:ctor-like  size=182 */

undefined4 * FUN_00583bf0(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e31c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  uVar3 = *(int *)(param_2 + 0x10) + *(int *)(param_3 + 0x10);
  uVar1 = param_1[4];
  local_8 = 0;
  if (((uVar1 <= uVar3) && (param_1[5] != uVar3)) && (cVar2 = FUN_00407d50(uVar3,1), cVar2 != '\0'))
  {
    param_1[4] = uVar1;
    puVar4 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar4 + uVar1) = 0;
  }
  FUN_0046ef60(param_2,0,0xffffffff);
  FUN_0046ef60(param_3,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0058d7a0 @ 0058d7a0  kind=gamemisc  attributed-by=role:ctor-like  size=182 */

undefined4 * FUN_0058d7a0(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f1619;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  uVar1 = param_1[4];
  local_8 = 0;
  uVar3 = *(int *)(param_2 + 0x10) + *(int *)(param_3 + 0x10);
  if (((uVar1 <= uVar3) && (param_1[5] != uVar3)) && (cVar2 = FUN_0040f300(uVar3,1), cVar2 != '\0'))
  {
    param_1[4] = uVar1;
    puVar4 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    *(undefined2 *)((int)puVar4 + uVar1 * 2) = 0;
  }
  FUN_0046f170(param_2,0,0xffffffff);
  FUN_0046f170(param_3,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}


