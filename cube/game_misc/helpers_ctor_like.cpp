// helpers_ctor_like (game_misc) -- cube. 17 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_ctor_like.h"

/* FUN_00424ba0 @ 00424ba0  kind=gamemisc  attributed-by=role:ctor-like  size=381 */

basic_ostream<wchar_t,std::char_traits<wchar_t>_> *
FUN_00424ba0(basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1,wchar_t *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar8;
  int iVar9;
  __int64 _Var10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1c60;
  local_10 = ExceptionList;
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = *(uint *)(param_2 + 8);
  bVar5 = false;
  iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  iVar9 = *(int *)((int)&param_1[9].vbtablePtr + iVar2);
  uVar3 = *(uint *)((int)&param_1[8].vbtablePtr + iVar2);
  if ((iVar9 < 0) || (((iVar9 < 1 && (uVar3 == 0)) || (uVar3 <= uVar1)))) {
    iVar9 = 0;
  }
  else {
    iVar9 = uVar3 - uVar1;
  }
  piVar4 = *(int **)((int)&param_1[0xe].vbtablePtr + iVar2);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = 0;
  iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  if ((*(int *)((int)&param_1[3].vbtablePtr + iVar2) == 0) &&
     (pbVar8 = *(basic_ostream<wchar_t,std::char_traits<wchar_t>_> **)
                ((int)&param_1[0xf].vbtablePtr + iVar2),
     pbVar8 != (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)0x0)) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::flush(pbVar8);
  }
  iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  local_8 = 1;
  if (*(int *)((int)&param_1[3].vbtablePtr + iVar2) != 0) {
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
               ((int)&param_1->vbtablePtr +
               param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset),4,false);
    local_8 = 0xffffffff;
    bVar5 = std::uncaught_exception();
    if (!bVar5) {
      std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Osfx(param_1);
    }
    piVar4 = *(int **)((int)&param_1[0xe].vbtablePtr +
                      param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_8 = 2;
  if ((*(uint *)((int)&param_1[5].vbtablePtr + iVar2) & 0x1c0) == 0x40) {
LAB_00424ca0:
    if (7 < *(uint *)(param_2 + 10)) {
      param_2 = *(wchar_t **)param_2;
    }
    _Var10 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputn
                       (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                         ((int)&param_1[0xe].vbtablePtr +
                         param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset),
                        param_2,(ulonglong)uVar7 << 0x20);
    if (((uint)_Var10 != uVar1) || ((int)((ulonglong)_Var10 >> 0x20) != 0)) goto LAB_00424d09;
  }
  else {
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
      uVar6 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc
                        (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                          ((int)&param_1[0xe].vbtablePtr + iVar2),
                         *(wchar_t *)((int)&param_1[0x10].vbtablePtr + iVar2));
      if (uVar6 == 0xffff) {
        bVar5 = true;
        break;
      }
    }
    if (!bVar5) goto LAB_00424ca0;
  }
  while ((iVar9 != 0 &&
         (iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset,
         uVar6 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc
                           (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                             ((int)&param_1[0xe].vbtablePtr + iVar2),
                            *(wchar_t *)((int)&param_1[0x10].vbtablePtr + iVar2)), uVar6 != 0xffff))
        ) {
    iVar9 = iVar9 + -1;
  }
LAB_00424d09:
  iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  *(undefined4 *)((int)&param_1[8].vbtablePtr + iVar2) = 0;
  *(undefined4 *)((int)&param_1[9].vbtablePtr + iVar2) = 0;
  pbVar8 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_00424d40();
  return pbVar8;
}


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


/* FUN_004ce2a0 @ 004ce2a0  kind=gamemisc  attributed-by=role:ctor-like  size=313 */

basic_istream<char,std::char_traits<char>_> *
FUN_004ce2a0(basic_istream<char,std::char_traits<char>_> *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  basic_istream<char,std::char_traits<char>_> *pbVar10;
  uint uVar11;
  int iVar12;
  int *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e85a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar12 = 0;
  bVar4 = false;
  piVar1 = *(int **)((int)&param_1[0xe].vbtablePtr +
                    param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = 0;
  bVar5 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(param_1,false);
  local_8 = 1;
  if (bVar5) {
    uVar6 = std::ios_base::getloc
                      ((ios_base *)
                       ((int)&param_1->vbtablePtr +
                       param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset));
    local_8._0_1_ = 2;
    iVar7 = FUN_004ce460(uVar6);
    local_8._0_1_ = 1;
    if ((local_1c != (int *)0x0) &&
       (puVar8 = (undefined4 *)(**(code **)(*local_1c + 8))(), puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    param_2[4] = 0;
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    *(undefined1 *)param_2 = 0;
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar2 = param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
    iVar3 = *(int *)((int)&param_1[9].vbtablePtr + iVar2);
    uVar11 = *(uint *)((int)&param_1[8].vbtablePtr + iVar2);
    if ((iVar3 < 0) || (((iVar3 < 1 && (uVar11 == 0)) || (0xfffffffd < uVar11)))) {
      uVar11 = 0xfffffffe;
    }
    uVar9 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        ((int)&param_1[0xe].vbtablePtr + iVar2));
    bVar4 = false;
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      if (uVar9 == 0xffffffff) {
        pbVar10 = (basic_istream<char,std::char_traits<char>_> *)FUN_004ce3f9();
        return pbVar10;
      }
      if ((*(byte *)(*(int *)(iVar7 + 0xc) + (uVar9 & 0xff) * 2) & 0x48) != 0) break;
      FUN_0040bff0(1,uVar9);
      bVar4 = true;
      uVar9 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          ((int)&param_1[0xe].vbtablePtr +
                          param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset));
    }
  }
  local_8 = 1;
  iVar7 = param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  *(undefined4 *)((int)&param_1[8].vbtablePtr + iVar7) = 0;
  *(undefined4 *)((int)&param_1[9].vbtablePtr + iVar7) = 0;
  if (!bVar4) {
    iVar12 = 2;
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             ((int)&param_1->vbtablePtr +
             param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),iVar12,false);
  local_8 = 0xffffffff;
  piVar1 = *(int **)((int)&param_1[0xe].vbtablePtr +
                    param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
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


/* FUN_004d7c30 @ 004d7c30  kind=gamemisc  attributed-by=role:ctor-like  size=172 */

ushort * FUN_004d7c30(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  void *local_c;
  int local_8;
  
  local_c = (void *)0x0;
  local_8 = 0;
  while( true ) {
    while( true ) {
      iVar2 = local_8;
      if (*param_1 < 0x80) {
        bVar3 = (&DAT_00703680)[*param_1];
      }
      else {
        bVar3 = 0;
      }
      if ((bVar3 & 1) != 0) break;
      param_1 = param_1 + 1;
    }
    uVar1 = *param_1;
    if (uVar1 == 0x3c) break;
    if (uVar1 == 0x26) {
      param_1 = (ushort *)FUN_004d96f0(param_1,&local_c);
    }
    else {
      if (uVar1 == 0) {
        return param_1;
      }
      param_1 = param_1 + 1;
    }
  }
  if (local_c != (void *)0x0) {
    memmove((void *)((int)local_c + local_8 * -2),local_c,(int)param_1 - (int)local_c);
    param_1[-iVar2] = 0;
    return param_1 + 1;
  }
  *param_1 = 0;
  return param_1 + 1;
}


/* FUN_004d8f40 @ 004d8f40  kind=gamemisc  attributed-by=role:ctor-like  size=178 */

ushort * FUN_004d8f40(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  void *local_c;
  int local_8;
  
  local_c = (void *)0x0;
  local_8 = 0;
  while( true ) {
    while( true ) {
      iVar2 = local_8;
      if (*param_1 < 0x80) {
        bVar3 = (&DAT_00703680)[*param_1];
      }
      else {
        bVar3 = 0;
      }
      if ((bVar3 & 2) != 0) break;
      param_1 = param_1 + 1;
    }
    uVar1 = *param_1;
    if (uVar1 == param_2) break;
    if (uVar1 == 0x26) {
      param_1 = (ushort *)FUN_004d96f0(param_1,&local_c);
    }
    else {
      if (uVar1 == 0) {
        return (ushort *)0x0;
      }
      param_1 = param_1 + 1;
    }
  }
  if (local_c != (void *)0x0) {
    memmove((void *)((int)local_c + local_8 * -2),local_c,(int)param_1 - (int)local_c);
    param_1[-iVar2] = 0;
    return param_1 + 1;
  }
  *param_1 = 0;
  return param_1 + 1;
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


/* FUN_00629140 @ 00629140  kind=gamemisc  attributed-by=role:ctor-like  size=131 */

undefined4 * FUN_00629140(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f56a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_0046d550(0,0);
  *param_1 = uVar1;
  local_8 = 0;
  FUN_006290d0(*(undefined4 *)(in_ECX + 0x148),param_1);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0064b0d0 @ 0064b0d0  kind=gamemisc  attributed-by=role:ctor-like  size=498 */

basic_ostream<wchar_t,std::char_traits<wchar_t>_> *
FUN_0064b0d0(basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1,wchar_t param_2)

{
  int *piVar1;
  int iVar2;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  int local_28;
  int iStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5fe0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = 0;
  piVar1 = *(int **)((int)&param_1[0xe].vbtablePtr +
                    param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = 0;
  iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  if ((*(int *)((int)&param_1[3].vbtablePtr + iVar2) == 0) &&
     (this = *(basic_ostream<wchar_t,std::char_traits<wchar_t>_> **)
              ((int)&param_1[0xf].vbtablePtr + iVar2),
     this != (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)0x0)) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::flush(this);
  }
  iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  if (*(int *)((int)&param_1[3].vbtablePtr + iVar2) == 0) {
    iStack_24 = *(int *)((int)&param_1[9].vbtablePtr + iVar2);
    uVar3 = *(uint *)((int)&param_1[8].vbtablePtr + iVar2);
    if ((iStack_24 < 1) && ((iStack_24 < 0 || (uVar3 < 2)))) {
      iStack_24 = 0;
      local_28 = 0;
    }
    else {
      local_28 = uVar3 - 1;
      iStack_24 = iStack_24 - (uint)(uVar3 == 0);
    }
    local_8 = 2;
    if ((*(uint *)((int)&param_1[5].vbtablePtr + iVar2) & 0x1c0) == 0x40) {
LAB_0064b1e8:
      uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc
                        (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                          ((int)&param_1[0xe].vbtablePtr +
                          param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset)
                         ,param_2);
      if (uVar4 == 0xffff) {
        iVar5 = 4;
      }
      for (; ((iVar5 == 0 && (-1 < iStack_24)) && ((0 < iStack_24 || (local_28 != 0))));
          local_28 = local_28 + -1) {
        iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
        uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc
                          (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                            ((int)&param_1[0xe].vbtablePtr + iVar2),
                           *(wchar_t *)((int)&param_1[0x10].vbtablePtr + iVar2));
        if (uVar4 == 0xffff) {
          iVar5 = 4;
        }
        iStack_24 = iStack_24 + -1 + (uint)(local_28 != 0);
      }
    }
    else {
      while (iVar5 == 0) {
        if ((iStack_24 < 0) || ((iStack_24 < 1 && (local_28 == 0)))) goto LAB_0064b1e8;
        iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
        uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc
                          (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                            ((int)&param_1[0xe].vbtablePtr + iVar2),
                           *(wchar_t *)((int)&param_1[0x10].vbtablePtr + iVar2));
        if (uVar4 == 0xffff) {
          iVar5 = 4;
        }
        bVar6 = local_28 != 0;
        local_28 = local_28 + -1;
        iStack_24 = iStack_24 + -1 + (uint)bVar6;
      }
    }
  }
  local_8 = 1;
  iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  *(undefined4 *)((int)&param_1[8].vbtablePtr + iVar2) = 0;
  *(undefined4 *)((int)&param_1[9].vbtablePtr + iVar2) = 0;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             ((int)&param_1->vbtablePtr +
             param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset),iVar5,false)
  ;
  local_8 = 0xffffffff;
  bVar6 = std::uncaught_exception();
  if (!bVar6) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Osfx(param_1);
  }
  piVar1 = *(int **)((int)&param_1[0xe].vbtablePtr +
                    param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}


/* FUN_006b61b0 @ 006b61b0  kind=gamemisc  attributed-by=role:ctor-like  size=345 */

int * FUN_006b61b0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int local_c;
  int local_8;
  
  piVar3 = param_1;
  iVar1 = *param_1;
  param_1 = (int *)0x0;
  uVar2 = *(undefined4 *)(iVar1 + 0x1c);
  *param_2 = 0;
  local_c = 0;
  if (((((piVar3[6] != 0) || (param_1 = (int *)FUN_006b6030(), param_1 == (int *)0x0)) &&
       (piVar3[2] != 0)) &&
      (piVar4 = (int *)FUN_00693a60(uVar2,4,0,piVar3[2] + 1,0,&param_1), piVar10 = param_3,
      param_1 == (int *)0x0)) &&
     ((param_3 == (int *)0x0 ||
      (local_c = FUN_00692230(uVar2,piVar3[5] + piVar3[2],&param_1), param_1 == (int *)0x0)))) {
    iVar1 = piVar3[7];
    uVar7 = *(int *)piVar3[6] - 1;
    local_8 = 0;
    if ((uint)piVar3[5] <= uVar7) {
      uVar7 = 0;
    }
    iVar6 = local_c;
    if (piVar10 == (int *)0x0) {
      iVar6 = iVar1;
    }
    *piVar4 = uVar7 + iVar6;
    uVar5 = piVar3[2];
    uVar8 = 1;
    if (uVar5 != 0) {
      do {
        uVar9 = *(int *)(piVar3[6] + uVar8 * 4) - 1;
        if (((uVar9 == 0) || (uVar9 < uVar7)) || (((uint)piVar3[5] <= uVar9 && (uVar8 < uVar5)))) {
          uVar9 = uVar7;
        }
        if (param_3 == (int *)0x0) {
          piVar4[uVar8] = uVar9 + iVar1;
        }
        else {
          iVar6 = uVar9 + local_8 + local_c;
          piVar4[uVar8] = iVar6;
          if (uVar9 != uVar7) {
            memcpy((void *)piVar4[uVar8 - 1],(void *)(uVar7 + iVar1),iVar6 - piVar4[uVar8 - 1]);
            *(undefined1 *)piVar4[uVar8] = 0;
            piVar4[uVar8] = piVar4[uVar8] + 1;
            local_8 = local_8 + 1;
          }
        }
        uVar5 = piVar3[2];
        uVar8 = uVar8 + 1;
        uVar7 = uVar9;
        piVar10 = param_3;
      } while (uVar8 <= uVar5);
    }
    *param_2 = (int)piVar4;
    if (piVar10 != (int *)0x0) {
      *piVar10 = local_c;
    }
  }
  return param_1;
}


/* FUN_006c0820 @ 006c0820  kind=gamemisc  attributed-by=role:ctor-like  size=234 */

int FUN_006c0820(int param_1,undefined2 param_2)

{
  undefined4 *in_EAX;
  undefined4 uVar1;
  undefined4 unaff_EDI;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  in_EAX[8] = 0;
  *in_EAX = unaff_EDI;
  uVar1 = FUN_00693a60();
  in_EAX[3] = uVar1;
  if (param_1 != 0) {
    FUN_006c07c0();
    return param_1;
  }
  uVar1 = FUN_00693a60();
  in_EAX[4] = uVar1;
  uVar1 = FUN_00693a60();
  in_EAX[5] = uVar1;
  uVar1 = FUN_00693a60();
  in_EAX[6] = uVar1;
  uVar1 = FUN_00693a60();
  in_EAX[7] = uVar1;
  *(undefined2 *)(in_EAX + 1) = 0;
  *(undefined2 *)((int)in_EAX + 6) = param_2;
  return 0;
}


/* FUN_006c6890 @ 006c6890  kind=gamemisc  attributed-by=role:ctor-like  size=506 */

int * FUN_006c6890(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  piVar3 = param_1;
  iVar2 = param_1[3];
  iVar4 = *(int *)(iVar2 + 0x3c);
  iVar6 = (int)*(short *)(iVar2 + 0x3a);
  *(int *)(iVar4 + iVar6 * 8) = param_1[0x11];
  *(int *)(iVar4 + 4 + iVar6 * 8) = param_1[0x12];
  iVar4 = *(int *)(iVar2 + 0x3c);
  *(int *)(iVar4 + 8 + iVar6 * 8) = param_1[0x13];
  *(int *)(iVar4 + 0xc + iVar6 * 8) = param_1[0x14];
  iVar4 = *(int *)(iVar2 + 0x3c);
  *(int *)(iVar4 + 0x10 + iVar6 * 8) = param_1[0x2e];
  *(int *)(iVar4 + 0x14 + iVar6 * 8) = param_1[0x2f];
  iVar4 = *(int *)(iVar2 + 0x3c);
  *(int *)(iVar4 + 0x18 + iVar6 * 8) = param_1[0x30];
  *(int *)(iVar4 + 0x1c + iVar6 * 8) = param_1[0x31];
  *(undefined1 *)(iVar6 + *(int *)(iVar2 + 0x40)) = 0;
  *(undefined1 *)(iVar6 + 1 + *(int *)(iVar2 + 0x40)) = 0;
  *(undefined1 *)(iVar6 + 2 + *(int *)(iVar2 + 0x40)) = 0;
  *(undefined1 *)(iVar6 + 3 + *(int *)(iVar2 + 0x40)) = 0;
  iVar6 = iVar6 + 4;
  if (*(char *)(*param_1 + 0x2c4) != '\0') {
    local_8 = *(undefined4 *)(*param_1 + 100);
    iVar4 = FUN_006c5e40(param_1[5],&local_c,iVar6);
    if (iVar4 != 0) {
      return (int *)iVar4;
    }
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        piVar1 = (int *)(*(int *)(iVar2 + 0x3c) + iVar4 * 8);
        *piVar1 = *piVar1 + *(int *)(local_c + iVar4 * 8);
        piVar1 = (int *)(*(int *)(iVar2 + 0x3c) + 4 + iVar4 * 8);
        *piVar1 = *piVar1 + *(int *)(local_c + 4 + iVar4 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
    FUN_00691290(local_8,local_c);
  }
  param_1 = (int *)0x0;
  if ((*(byte *)(piVar3 + 4) & 2) == 0) {
    FUN_006c02c0();
    memcpy((void *)piVar3[0x24],(void *)piVar3[0x23],(uint)*(ushort *)(piVar3 + 0x21) * 8 + 0x20);
  }
  if ((*(byte *)(piVar3 + 4) & 1) == 0) {
    puVar7 = *(undefined4 **)(iVar2 + 0x3c);
    local_8 = *(undefined4 *)(piVar3[1] + 0x30);
    local_c = *(int *)(piVar3[1] + 0x34);
    local_4 = puVar7 + iVar6 * 2;
    if (puVar7 < local_4) {
      do {
        uVar5 = FUN_0068ebc0(*puVar7,local_8);
        *puVar7 = uVar5;
        uVar5 = FUN_0068ebc0(puVar7[1],local_c);
        puVar7[1] = uVar5;
        puVar7 = puVar7 + 2;
      } while (puVar7 < local_4);
    }
    iVar4 = *(int *)(iVar2 + 0x3c);
    piVar3[0x11] = *(int *)(iVar4 + -0x20 + iVar6 * 8);
    piVar3[0x12] = *(int *)(iVar4 + -0x1c + iVar6 * 8);
    iVar4 = *(int *)(iVar2 + 0x3c);
    piVar3[0x13] = *(int *)(iVar4 + -0x18 + iVar6 * 8);
    piVar3[0x14] = *(int *)(iVar4 + -0x14 + iVar6 * 8);
    iVar4 = *(int *)(iVar2 + 0x3c);
    piVar3[0x2e] = *(int *)(iVar4 + -0x10 + iVar6 * 8);
    piVar3[0x2f] = *(int *)(iVar4 + -0xc + iVar6 * 8);
    iVar2 = *(int *)(iVar2 + 0x3c);
    piVar3[0x30] = *(int *)(iVar2 + -8 + iVar6 * 8);
    piVar3[0x31] = *(int *)(iVar2 + -4 + iVar6 * 8);
  }
  if ((*(byte *)(piVar3 + 4) & 2) == 0) {
    *(short *)(piVar3 + 0x21) = (short)piVar3[0x21] + 4;
    param_1 = (int *)FUN_006c6620(piVar3,0);
  }
  return param_1;
}


/* FUN_006c77d0 @ 006c77d0  kind=gamemisc  attributed-by=role:ctor-like  size=405 */

int * FUN_006c77d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar3 = param_1;
  iVar1 = *param_1;
  uVar2 = *(undefined4 *)(iVar1 + 100);
  *(undefined2 *)(param_1 + 0x4b) = 1;
  param_1[0x1e] = (uint)*(ushort *)(iVar1 + 0x118);
  param_1[0x21] = (uint)*(ushort *)(iVar1 + 0x11a);
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x3c] = *(int *)(iVar1 + 0x29c);
  *(undefined2 *)(param_1 + 0x3e) = *(undefined2 *)(iVar1 + 0x116);
  *(undefined2 *)((int)param_1 + 0x6d) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  iVar5 = FUN_00693a60(uVar2,0x10,0,param_1[0x1e],0,&param_1);
  piVar3[0x1f] = iVar5;
  if (param_1 == (int *)0x0) {
    iVar5 = FUN_00693a60(uVar2,0x10,0,piVar3[0x21],0,&param_1);
    piVar3[0x22] = iVar5;
    if (param_1 == (int *)0x0) {
      iVar5 = FUN_00693a60(uVar2,4,0,piVar3[0x3c],0,&param_1);
      piVar3[0x3d] = iVar5;
      if (param_1 == (int *)0x0) {
        iVar5 = FUN_00693a60(uVar2,4,0,(short)piVar3[0x3e],0,&param_1);
        piVar3[0x3f] = iVar5;
        if (param_1 == (int *)0x0) {
          sVar4 = *(short *)(iVar1 + 0x114) + 4;
          param_1 = (int *)FUN_006c0820(sVar4,0);
          if (param_1 == (int *)0x0) {
            *(short *)(piVar3 + 0x42) = sVar4;
            piVar6 = &DAT_00735e08;
            piVar7 = piVar3 + 0x2b;
            for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            iVar5 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 4) + 0xb4);
            *(int *)(iVar1 + 0x2b0) = iVar5;
            if (iVar5 == 0) {
              *(undefined1 **)(iVar1 + 0x2b0) = &LAB_006c4130;
            }
            param_1 = (int *)FUN_006c75e0(piVar3);
            if (param_1 == (int *)0x0) {
              return (int *)0x0;
            }
          }
        }
      }
    }
  }
  FUN_006c0950();
  return param_1;
}


