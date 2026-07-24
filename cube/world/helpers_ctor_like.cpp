// helpers_ctor_like (world) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_ctor_like.h"

/* FUN_00449150 @ 00449150  kind=gamemisc  attributed-by=role:ctor-like  size=426 */

basic_ostream<char,std::char_traits<char>_> *
FUN_00449150(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  __int64 _Var11;
  int local_28;
  int iStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2c10;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar4 = false;
  if (*param_2 == '\0') {
    uVar8 = 0;
  }
  else {
    pcVar9 = param_2;
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar8 = (int)pcVar9 - (int)(param_2 + 1);
  }
  iVar6 = param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  iStack_24 = *(int *)((int)&param_1[9].vbtablePtr + iVar6);
  uVar2 = *(uint *)((int)&param_1[8].vbtablePtr + iVar6);
  if ((iStack_24 < 0) ||
     ((iStack_24 < 1 && (((uVar2 == 0 || (iStack_24 < 0)) || ((iStack_24 < 1 && (uVar2 <= uVar8)))))
      ))) {
    iStack_24 = 0;
    local_28 = 0;
  }
  else {
    local_28 = uVar2 - uVar8;
    iStack_24 = iStack_24 - (uint)(uVar2 < uVar8);
  }
  piVar3 = *(int **)((int)&param_1[0xe].vbtablePtr + iVar6);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = 0;
  iVar6 = param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  if ((*(int *)((int)&param_1[3].vbtablePtr + iVar6) == 0) &&
     (pbVar7 = *(basic_ostream<char,std::char_traits<char>_> **)
                ((int)&param_1[0xf].vbtablePtr + iVar6),
     pbVar7 != (basic_ostream<char,std::char_traits<char>_> *)0x0)) {
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar7);
  }
  iVar6 = param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  local_8 = 1;
  if (*(int *)((int)&param_1[3].vbtablePtr + iVar6) != 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               ((int)&param_1->vbtablePtr +
               param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),4,false);
    local_8 = 0xffffffff;
    bVar4 = std::uncaught_exception();
    if (!bVar4) {
      std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
    }
    piVar3 = *(int **)((int)&param_1[0xe].vbtablePtr +
                      param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_8 = 2;
  if ((*(uint *)((int)&param_1[5].vbtablePtr + iVar6) & 0x1c0) != 0x40) {
    while( true ) {
      if ((iStack_24 < 0) || ((iStack_24 < 1 && (local_28 == 0)))) goto LAB_00449274;
      iVar6 = param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
      iVar6 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          ((int)&param_1[0xe].vbtablePtr + iVar6),
                         *(char *)((int)&param_1[0x10].vbtablePtr + iVar6));
      if (iVar6 == -1) break;
      bVar10 = local_28 != 0;
      local_28 = local_28 + -1;
      iStack_24 = iStack_24 + -1 + (uint)bVar10;
    }
    bVar4 = true;
LAB_00449274:
    if (bVar4) goto LAB_004492e3;
  }
  _Var11 = std::basic_streambuf<char,std::char_traits<char>_>::sputn
                     (*(basic_streambuf<char,std::char_traits<char>_> **)
                       ((int)&param_1[0xe].vbtablePtr +
                       param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),param_2,
                      (ulonglong)uVar5 << 0x20);
  if (((uint)_Var11 == uVar8) && ((int)((ulonglong)_Var11 >> 0x20) == 0)) {
    while ((-1 < iStack_24 &&
           (((0 < iStack_24 || (local_28 != 0)) &&
            (iVar6 = param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset,
            iVar6 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                              (*(basic_streambuf<char,std::char_traits<char>_> **)
                                ((int)&param_1[0xe].vbtablePtr + iVar6),
                               *(char *)((int)&param_1[0x10].vbtablePtr + iVar6)), iVar6 != -1)))))
    {
      bVar4 = local_28 != 0;
      local_28 = local_28 + -1;
      iStack_24 = iStack_24 + -1 + (uint)bVar4;
    }
  }
LAB_004492e3:
  iVar6 = param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  *(undefined4 *)((int)&param_1[8].vbtablePtr + iVar6) = 0;
  *(undefined4 *)((int)&param_1[9].vbtablePtr + iVar6) = 0;
  pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_0044931a();
  return pbVar7;
}


