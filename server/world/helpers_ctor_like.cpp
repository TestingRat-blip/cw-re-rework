// helpers_ctor_like (world) -- server. 6 functions. Bodies = Ghidra pseudo-C.
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


/* FUN_0041d720 @ 0041d720  kind=gamemisc  attributed-by=role:ctor-like  size=159 */

undefined4 * __thiscall FUN_0041d720(void *this,int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bf10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = FUN_0041e320(this,(param_1[1] - *param_1) / 0x11c);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    puVar2 = FUN_0041d500((undefined4 *)*param_1,(undefined4 *)param_1[1],*(undefined4 **)this);
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_00422af0 @ 00422af0  kind=gamemisc  attributed-by=role:ctor-like  size=30 */

undefined4 * __fastcall FUN_00422af0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}


/* FUN_004c82a0 @ 004c82a0  kind=gamemisc  attributed-by=role:ctor-like  size=156 */

undefined4 * __thiscall FUN_004c82a0(void *this,int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554500;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = FUN_004ce580(this,(param_1[1] - *param_1) / 0xc);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    pvVar2 = FUN_004c7f70((int *)*param_1,(int *)param_1[1],*(void **)this);
    *(void **)((int)this + 4) = pvVar2;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_004e1ed0 @ 004e1ed0  kind=gamemisc  attributed-by=role:ctor-like  size=156 */

undefined4 * __thiscall FUN_004e1ed0(void *this,int *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554f00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = FUN_004ce580(this,(param_1[1] - *param_1) / 0xc);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    uVar1 = FUN_004e1d70((undefined4 *)*param_1,(undefined4 *)param_1[1],*(undefined4 **)this);
    *(undefined4 *)((int)this + 4) = uVar1;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_004e2190 @ 004e2190  kind=gamemisc  attributed-by=role:ctor-like  size=185 */

undefined4 * __fastcall FUN_004e2190(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
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
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return param_1;
}


