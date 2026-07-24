// helpers_dtor_like (world) -- server. 17 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like.h"

/* FUN_004016f0 @ 004016f0  kind=gamemisc  attributed-by=role:dtor-like  size=245 */

void __thiscall FUN_004016f0(void *this,uint param_1,size_t param_2)

{
  uint uVar1;
  uint uVar2;
  void *_Src;
  uint uVar3;
  void *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054b920;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = param_1 | 0xf;
  if (uVar3 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar2 = uVar1 >> 1;
    param_1 = uVar3;
    if ((uVar3 / 3 < uVar2) && (param_1 = uVar2 + uVar1, -uVar2 - 2 < uVar1)) {
      param_1 = 0xfffffffe;
    }
  }
  local_8 = 0;
  local_18 = (void *)0x0;
  if ((param_1 + 1 != 0) && (local_18 = operator_new(param_1 + 1), local_18 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  if (param_2 != 0) {
    _Src = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      _Src = *(void **)this;
    }
    if (param_2 != 0) {
      memcpy(local_18,_Src,param_2);
    }
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    operator_delete(*(void **)this);
  }
  *(undefined1 *)this = 0;
  *(void **)this = local_18;
  *(uint *)((int)this + 0x14) = param_1;
  *(size_t *)((int)this + 0x10) = param_2;
  if (0xf < param_1) {
    this = local_18;
  }
  *(undefined1 *)((int)this + param_2) = 0;
  ExceptionList = local_10;
  return;
}


/* FUN_00406310 @ 00406310  kind=gamemisc  attributed-by=role:dtor-like  size=62 */

void __cdecl FUN_00406310(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if ((void *)*param_1 != (void *)0x0) {
      operator_delete((void *)*param_1);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
  }
  return;
}


/* FUN_00412b60 @ 00412b60  kind=gamemisc  attributed-by=role:dtor-like  size=109 */

void __thiscall FUN_00412b60(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)0x0;
  if ((param_1 != 0) && (_Dst = operator_new(param_1), _Dst == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  memmove(_Dst,*(void **)this,*(int *)((int)this + 4) - (int)*(void **)this);
  pvVar1 = *(void **)this;
  iVar2 = *(int *)((int)this + 4);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  *(uint *)((int)this + 8) = (int)_Dst + param_1;
  *(void **)this = _Dst;
  *(int *)((int)this + 4) = (int)_Dst + (iVar2 - (int)pvVar1);
  return;
}


/* FUN_004135d0 @ 004135d0  kind=gamemisc  attributed-by=role:dtor-like  size=98 */

void FUN_004135d0(int *param_1)

{
  int *piVar1;
  
  if ((int *)param_1[4] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_function_call();
  }
  (**(code **)(*(int *)param_1[4] + 8))();
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
    param_1[4] = 0;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
    param_1[4] = 0;
  }
  operator_delete(param_1);
                    /* WARNING: Could not recover jumptable at 0x0041362c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _endthread();
  return;
}


/* FUN_0041ba90 @ 0041ba90  kind=gamemisc  attributed-by=role:dtor-like  size=207 */

void __thiscall FUN_0041ba90(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054be20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x15555556) {
      puVar3 = operator_new(param_1 * 0xc);
      if (puVar3 != (undefined4 *)0x0) goto LAB_0041baef;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0041baef:
  local_8 = 0;
  FUN_0041b930(*(undefined4 **)this,*(undefined4 **)((int)this + 4),puVar3);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined4 **)this = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3 + param_1 * 3;
  *(undefined4 **)((int)this + 4) = puVar3 + ((iVar1 - iVar2) / 0xc) * 3;
  ExceptionList = local_10;
  return;
}


/* FUN_0041d390 @ 0041d390  kind=gamemisc  attributed-by=role:dtor-like  size=118 */

undefined4 * __cdecl FUN_0041d390(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != param_1) {
      if ((void *)*param_3 != (void *)0x0) {
        operator_delete((void *)*param_3);
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
      }
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0041e450 @ 0041e450  kind=gamemisc  attributed-by=role:dtor-like  size=208 */

void __thiscall FUN_0041e450(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bf90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xccccccd) {
      puVar3 = operator_new(param_1 * 0x14);
      if (puVar3 != (undefined4 *)0x0) goto LAB_0041e4af;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0041e4af:
  local_8 = 0;
  FUN_0041d600(*(undefined1 **)this,*(undefined1 **)((int)this + 4),puVar3);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined4 **)this = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3 + param_1 * 5;
  *(undefined4 **)((int)this + 4) = puVar3 + ((iVar1 - iVar2) / 0x14) * 5;
  ExceptionList = local_10;
  return;
}


/* FUN_0041e640 @ 0041e640  kind=gamemisc  attributed-by=role:dtor-like  size=220 */

void __thiscall FUN_0041e640(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bfd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xc7ce0d) {
      pvVar3 = operator_new(param_1 * 0x148);
      if (pvVar3 != (void *)0x0) goto LAB_0041e6a4;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0041e6a4:
  local_8 = 0;
  FUN_0041d680(*(undefined1 **)this,*(undefined1 **)((int)this + 4),pvVar3);
  pvVar1 = *(void **)this;
  iVar2 = *(int *)((int)this + 4);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  *(void **)((int)this + 8) = (void *)(param_1 * 0x148 + (int)pvVar3);
  *(void **)((int)this + 4) = (void *)(((iVar2 - (int)pvVar1) / 0x148) * 0x148 + (int)pvVar3);
  *(void **)this = pvVar3;
  ExceptionList = local_10;
  return;
}


/* FUN_0041e740 @ 0041e740  kind=gamemisc  attributed-by=role:dtor-like  size=224 */

void __thiscall FUN_0041e740(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bff0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x15555556) {
      puVar3 = operator_new(param_1 * 0xc);
      if (puVar3 != (undefined4 *)0x0) goto LAB_0041e79f;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0041e79f:
  local_8 = 0;
  FUN_0041d6c0(*(undefined4 **)this,*(undefined4 **)((int)this + 4),puVar3);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    FUN_00406310(*(undefined4 **)this,*(undefined4 **)((int)this + 4));
    operator_delete(*(void **)this);
  }
  *(undefined4 **)this = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3 + param_1 * 3;
  *(undefined4 **)((int)this + 4) = puVar3 + ((iVar1 - iVar2) / 0xc) * 3;
  ExceptionList = local_10;
  return;
}


/* FUN_00423710 @ 00423710  kind=gamemisc  attributed-by=role:dtor-like  size=62 */

void __fastcall FUN_00423710(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  if (piVar2 != (int *)*param_1) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  operator_delete((void *)*param_1);
  return;
}


/* FUN_00426d30 @ 00426d30  kind=gamemisc  attributed-by=role:dtor-like  size=125 */

void __thiscall FUN_00426d30(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x40000000) {
      _Dst = operator_new(param_1 * 4);
      if (_Dst != (void *)0x0) goto LAB_00426d65;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00426d65:
  memmove(_Dst,*(void **)this,*(int *)((int)this + 4) - (int)*(void **)this & 0xfffffffc);
  pvVar1 = *(void **)this;
  iVar2 = *(int *)((int)this + 4);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  *(void **)((int)this + 8) = (void *)((int)_Dst + param_1 * 4);
  *(void **)this = _Dst;
  *(void **)((int)this + 4) = (void *)((int)_Dst + (iVar2 - (int)pvVar1 >> 2) * 4);
  return;
}


/* FUN_004ce3e0 @ 004ce3e0  kind=gamemisc  attributed-by=role:dtor-like  size=91 */

void __thiscall FUN_004ce3e0(void *this)

{
  ios_base *piVar1;
  
  piVar1 = (ios_base *)((int)this + 0x68);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   (piVar1 + *(int *)(*(int *)this + 4) + -0x68) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)(piVar1 + *(int *)(*(int *)this + 4) + -0x6c) = *(int *)(*(int *)this + 4) + -0x68;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable **)((int)this + 0x18)
       = &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_004ce990((int)this + 0x18);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)((int)this + 0x18));
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)((int)this + 0x20));
  *(code **)piVar1 = _vftable__exref;
  *(code **)piVar1 = _vftable__exref;
  std::ios_base::_Ios_base_dtor(piVar1);
  return;
}


/* FUN_004ce720 @ 004ce720  kind=gamemisc  attributed-by=role:dtor-like  size=92 */

void FUN_004ce720(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_004ce720((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    if (7 < (uint)param_1[0xb]) {
      operator_delete((void *)param_1[6]);
    }
    param_1[0xb] = 7;
    param_1[10] = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}


/* FUN_004ce7e0 @ 004ce7e0  kind=gamemisc  attributed-by=role:dtor-like  size=231 */

void __thiscall FUN_004ce7e0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554930;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xa72f06) {
      pvVar3 = operator_new(param_1 * 0x188);
      if (pvVar3 != (void *)0x0) goto LAB_004ce841;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004ce841:
  local_8 = 0;
  FUN_004c8020(*(undefined4 **)this,*(undefined4 **)((int)this + 4),pvVar3);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    FUN_004c6860(*(undefined4 **)this,*(undefined4 **)((int)this + 4));
    operator_delete(*(void **)this);
  }
  *(void **)((int)this + 8) = (void *)(param_1 * 0x188 + (int)pvVar3);
  *(void **)((int)this + 4) = (void *)(((iVar1 - iVar2) / 0x188) * 0x188 + (int)pvVar3);
  *(void **)this = pvVar3;
  ExceptionList = local_10;
  return;
}


/* FUN_004e1280 @ 004e1280  kind=gamemisc  attributed-by=role:dtor-like  size=208 */

void __thiscall FUN_004e1280(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554ee0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xaaaaaab) {
      puVar3 = operator_new(param_1 * 0x18);
      if (puVar3 != (undefined4 *)0x0) goto LAB_004e12df;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004e12df:
  local_8 = 0;
  FUN_004e1230(*(undefined4 **)this,*(undefined4 **)((int)this + 4),puVar3);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined4 **)this = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3 + param_1 * 6;
  *(undefined4 **)((int)this + 4) = puVar3 + ((iVar1 - iVar2) / 0x18) * 6;
  ExceptionList = local_10;
  return;
}


/* FUN_004f3bf0 @ 004f3bf0  kind=gamemisc  attributed-by=role:dtor-like  size=104 */

void __cdecl FUN_004f3bf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 3;
    do {
      if ((void *)*puVar2 != (void *)0x0) {
        operator_delete((void *)*puVar2);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      if ((void *)puVar2[-3] != (void *)0x0) {
        operator_delete((void *)puVar2[-3]);
        puVar2[-3] = 0;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
      }
      puVar1 = puVar2 + 3;
      puVar2 = puVar2 + 6;
    } while (puVar1 != param_2);
  }
  return;
}


/* FUN_004f7d00 @ 004f7d00  kind=gamemisc  attributed-by=role:dtor-like  size=212 */

void __thiscall FUN_004f7d00(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00555650;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xcccccd) {
      pvVar3 = operator_new(param_1 * 0x140);
      if (pvVar3 != (void *)0x0) goto LAB_004f7d5f;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004f7d5f:
  local_8 = 0;
  FUN_004f70f0(*(undefined4 **)this,*(undefined4 **)((int)this + 4),pvVar3);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(void **)((int)this + 8) = (void *)(param_1 * 0x140 + (int)pvVar3);
  *(void **)((int)this + 4) = (void *)(((iVar1 - iVar2) / 0x140) * 0x140 + (int)pvVar3);
  *(void **)this = pvVar3;
  ExceptionList = local_10;
  return;
}


