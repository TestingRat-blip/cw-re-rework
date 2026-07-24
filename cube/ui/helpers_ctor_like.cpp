// helpers_ctor_like (ui) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_ctor_like.h"

/* FUN_0040e440 @ 0040e440  kind=gamemisc  attributed-by=role:ctor-like  size=566 */

basic_ostream<wchar_t,std::char_traits<wchar_t>_> *
FUN_0040e440(basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this;
  bool bVar4;
  ushort uVar5;
  wchar_t wVar6;
  int *piVar7;
  undefined4 uVar8;
  ctype<wchar_t> *this_00;
  undefined4 *puVar9;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar10;
  char *pcVar11;
  ios_base *this_01;
  bool bVar12;
  int local_34;
  int iStack_30;
  int local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e19a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar4 = false;
  pcVar11 = param_2;
  do {
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  local_18 = (int)pcVar11 - (int)(param_2 + 1);
  local_1c = 0;
  piVar7 = (int *)((int)&param_1->vbtablePtr +
                  param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
  iStack_30 = piVar7[9];
  uVar2 = piVar7[8];
  if (((iStack_30 < 0) || (((iStack_30 < 1 && (uVar2 == 0)) || (iStack_30 < 0)))) ||
     ((iStack_30 < 1 && (uVar2 <= local_18)))) {
    iStack_30 = 0;
    local_34 = 0;
  }
  else {
    local_34 = uVar2 - local_18;
    iStack_30 = iStack_30 - (uint)(uVar2 < local_18);
  }
  if ((int *)piVar7[0xe] != (int *)0x0) {
    (**(code **)(*(int *)piVar7[0xe] + 4))();
  }
  local_8 = 0;
  iVar3 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  if ((*(int *)((int)&param_1[3].vbtablePtr + iVar3) == 0) &&
     (pbVar10 = *(basic_ostream<wchar_t,std::char_traits<wchar_t>_> **)
                 ((int)&param_1[0xf].vbtablePtr + iVar3),
     pbVar10 != (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)0x0)) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::flush(pbVar10);
  }
  this_01 = (ios_base *)
            ((int)&param_1->vbtablePtr +
            param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
  local_8 = 1;
  if (*(int *)(this_01 + 1) != 0) {
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
               ((int)&param_1->vbtablePtr +
               param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset),4,false);
    local_8 = 0xffffffff;
    bVar4 = std::uncaught_exception();
    if (!bVar4) {
      std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Osfx(param_1);
    }
    piVar7 = *(int **)((int)&param_1[0xe].vbtablePtr +
                      param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))();
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  uVar8 = std::ios_base::getloc(this_01);
  local_8._0_1_ = 3;
  this_00 = (ctype<wchar_t> *)FUN_0040e940(uVar8);
  local_8 = CONCAT31(local_8._1_3_,2);
  if ((piVar7 != (int *)0x0) &&
     (puVar9 = (undefined4 *)(**(code **)(*piVar7 + 8))(), puVar9 != (undefined4 *)0x0)) {
    (**(code **)*puVar9)(1);
  }
  if ((*(uint *)((int)&param_1[5].vbtablePtr +
                param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) & 0x1c0)
      != 0x40) {
    while( true ) {
      if ((iStack_30 < 0) || ((iStack_30 < 1 && (local_34 == 0)))) goto LAB_0040e5b0;
      iVar3 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
      uVar5 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc
                        (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                          ((int)&param_1[0xe].vbtablePtr + iVar3),
                         *(wchar_t *)((int)&param_1[0x10].vbtablePtr + iVar3));
      if (uVar5 == 0xffff) break;
      bVar12 = local_34 != 0;
      local_34 = local_34 + -1;
      iStack_30 = iStack_30 + -1 + (uint)bVar12;
    }
    bVar4 = true;
  }
LAB_0040e5b0:
  do {
    if (bVar4) goto LAB_0040e651;
    if ((local_1c < 0) || ((local_1c < 1 && (local_18 == 0)))) break;
    this = *(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
            ((int)&param_1[0xe].vbtablePtr +
            param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
    wVar6 = std::ctype<wchar_t>::widen(this_00,*param_2);
    uVar5 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc(this,wVar6);
    if (uVar5 == 0xffff) {
      bVar4 = true;
    }
    bVar12 = local_18 != 0;
    local_18 = local_18 - 1;
    local_1c = local_1c + -1 + (uint)bVar12;
    param_2 = param_2 + 1;
  } while( true );
  while ((-1 < iStack_30 &&
         (((0 < iStack_30 || (local_34 != 0)) &&
          (iVar3 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset,
          uVar5 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc
                            (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                              ((int)&param_1[0xe].vbtablePtr + iVar3),
                             *(wchar_t *)((int)&param_1[0x10].vbtablePtr + iVar3)), uVar5 != 0xffff)
          )))) {
    bVar4 = local_34 != 0;
    local_34 = local_34 + -1;
    iStack_30 = iStack_30 + -1 + (uint)bVar4;
  }
LAB_0040e651:
  iVar3 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  *(undefined4 *)((int)&param_1[8].vbtablePtr + iVar3) = 0;
  *(undefined4 *)((int)&param_1[9].vbtablePtr + iVar3) = 0;
  pbVar10 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e696();
  return pbVar10;
}


/* FUN_0040e6f0 @ 0040e6f0  kind=gamemisc  attributed-by=role:ctor-like  size=454 */

basic_ostream<wchar_t,std::char_traits<wchar_t>_> *
FUN_0040e6f0(basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar8;
  uint uVar9;
  wchar_t *pwVar10;
  bool bVar11;
  __int64 _Var12;
  int local_24;
  int iStack_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e19e0;
  local_10 = ExceptionList;
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar5 = false;
  if (*param_2 == L'\0') {
    uVar9 = 0;
  }
  else {
    pwVar10 = param_2;
    do {
      wVar1 = *pwVar10;
      pwVar10 = pwVar10 + 1;
    } while (wVar1 != L'\0');
    uVar9 = (int)pwVar10 - (int)(param_2 + 1) >> 1;
  }
  iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  iStack_20 = *(int *)((int)&param_1[9].vbtablePtr + iVar2);
  uVar3 = *(uint *)((int)&param_1[8].vbtablePtr + iVar2);
  if ((iStack_20 < 0) ||
     ((iStack_20 < 1 && (((uVar3 == 0 || (iStack_20 < 0)) || ((iStack_20 < 1 && (uVar3 <= uVar9)))))
      ))) {
    iStack_20 = 0;
    local_24 = 0;
  }
  else {
    local_24 = uVar3 - uVar9;
    iStack_20 = iStack_20 - (uint)(uVar3 < uVar9);
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
  if ((*(uint *)((int)&param_1[5].vbtablePtr + iVar2) & 0x1c0) != 0x40) {
    while( true ) {
      if ((iStack_20 < 0) || ((iStack_20 < 1 && (local_24 == 0)))) goto LAB_0040e825;
      iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
      uVar6 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc
                        (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                          ((int)&param_1[0xe].vbtablePtr + iVar2),
                         *(wchar_t *)((int)&param_1[0x10].vbtablePtr + iVar2));
      if (uVar6 == 0xffff) break;
      bVar11 = local_24 != 0;
      local_24 = local_24 + -1;
      iStack_20 = iStack_20 + -1 + (uint)bVar11;
    }
    bVar5 = true;
LAB_0040e825:
    if (bVar5) goto LAB_0040e89f;
  }
  _Var12 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputn
                     (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                       ((int)&param_1[0xe].vbtablePtr +
                       param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset),
                      param_2,(ulonglong)uVar7 << 0x20);
  if (((uint)_Var12 == uVar9) && ((int)((ulonglong)_Var12 >> 0x20) == 0)) {
    while ((-1 < iStack_20 &&
           (((0 < iStack_20 || (local_24 != 0)) &&
            (iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset,
            uVar6 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc
                              (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                                ((int)&param_1[0xe].vbtablePtr + iVar2),
                               *(wchar_t *)((int)&param_1[0x10].vbtablePtr + iVar2)),
            uVar6 != 0xffff))))) {
      bVar5 = local_24 != 0;
      local_24 = local_24 + -1;
      iStack_20 = iStack_20 + -1 + (uint)bVar5;
    }
  }
LAB_0040e89f:
  iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  *(undefined4 *)((int)&param_1[8].vbtablePtr + iVar2) = 0;
  *(undefined4 *)((int)&param_1[9].vbtablePtr + iVar2) = 0;
  pbVar8 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e8d6();
  return pbVar8;
}


