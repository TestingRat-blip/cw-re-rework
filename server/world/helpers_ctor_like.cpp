// helpers_ctor_like (world) -- server. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_ctor_like.h"

/* FUN_00412710 @ 00412710  kind=gamemisc  attributed-by=role:ctor-like  size=426 */

basic_ostream<char,std::char_traits<char>_> *
FUN_00412710(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  uint uVar7;
  char *pcVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar9;
  int extraout_ECX_01;
  bool bVar10;
  __int64 _Var11;
  int local_28;
  int iStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bb20;
  local_10 = ExceptionList;
  uVar4 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar3 = false;
  if (*param_2 == '\0') {
    uVar7 = 0;
  }
  else {
    pcVar8 = param_2;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar7 = (int)pcVar8 - (int)(param_2 + 1);
  }
  iVar9 = *(int *)(*(int *)param_1 + 4);
  iStack_24 = *(int *)(param_1 + iVar9 + 0x24);
  uVar2 = *(uint *)(param_1 + iVar9 + 0x20);
  if ((iStack_24 < 0) ||
     ((iStack_24 < 1 && (((uVar2 == 0 || (iStack_24 < 0)) || ((iStack_24 < 1 && (uVar2 <= uVar7)))))
      ))) {
    iStack_24 = 0;
    local_28 = 0;
  }
  else {
    local_28 = uVar2 - uVar7;
    iStack_24 = iStack_24 - (uint)(uVar2 < uVar7);
  }
  if (*(int **)(param_1 + iVar9 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + iVar9 + 0x38) + 4))();
  }
  local_8 = 0;
  if ((*(int *)(param_1 + *(int *)(*(int *)param_1 + 4) + 0xc) == 0) &&
     (*(basic_ostream<char,std::char_traits<char>_> **)
       (param_1 + *(int *)(*(int *)param_1 + 4) + 0x3c) !=
      (basic_ostream<char,std::char_traits<char>_> *)0x0)) {
    std::basic_ostream<char,std::char_traits<char>_>::flush
              (*(basic_ostream<char,std::char_traits<char>_> **)
                (param_1 + *(int *)(*(int *)param_1 + 4) + 0x3c));
  }
  iVar9 = *(int *)(*(int *)param_1 + 4);
  local_8 = 1;
  if (*(int *)(param_1 + iVar9 + 0xc) != 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(param_1 + *(int *)(*(int *)param_1 + 4)),
               4,false);
    local_8 = 0xffffffff;
    bVar3 = std::uncaught_exception();
    if (!bVar3) {
      std::basic_ostream<char,std::char_traits<char>_>::_Osfx
                ((basic_ostream<char,std::char_traits<char>_> *)param_1);
    }
    if (*(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) + 8))();
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_8 = 2;
  if ((*(uint *)(param_1 + iVar9 + 0x14) & 0x1c0) != 0x40) {
    while( true ) {
      if ((iStack_24 < 0) || ((iStack_24 < 1 && (local_28 == 0)))) goto LAB_00412834;
      iVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38),
                         (char)param_1[*(int *)(*(int *)param_1 + 4) + 0x40]);
      iVar9 = extraout_ECX;
      if (iVar5 == -1) break;
      bVar10 = local_28 != 0;
      local_28 = local_28 + -1;
      iStack_24 = iStack_24 + -1 + (uint)bVar10;
    }
    bVar3 = true;
LAB_00412834:
    if (bVar3) goto LAB_004128a3;
  }
  _Var11 = std::basic_streambuf<char,std::char_traits<char>_>::sputn
                     (*(basic_streambuf<char,std::char_traits<char>_> **)
                       (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38),param_2,
                      (ulonglong)uVar4 << 0x20);
  iVar9 = extraout_ECX_00;
  if (((uint)_Var11 == uVar7) && ((int)((ulonglong)_Var11 >> 0x20) == 0)) {
    while ((-1 < iStack_24 &&
           (((0 < iStack_24 || (local_28 != 0)) &&
            (iVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                               (*(basic_streambuf<char,std::char_traits<char>_> **)
                                 (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38),
                                (char)param_1[*(int *)(*(int *)param_1 + 4) + 0x40]),
            iVar9 = extraout_ECX_01, iVar5 != -1))))) {
      bVar3 = local_28 != 0;
      local_28 = local_28 + -1;
      iStack_24 = iStack_24 + -1 + (uint)bVar3;
    }
  }
LAB_004128a3:
  iVar5 = *(int *)(*(int *)param_1 + 4);
  *(undefined4 *)(param_1 + iVar5 + 0x20) = 0;
  *(undefined4 *)(param_1 + iVar5 + 0x24) = 0;
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_004128da(iVar9,(int *)param_1);
  return pbVar6;
}


