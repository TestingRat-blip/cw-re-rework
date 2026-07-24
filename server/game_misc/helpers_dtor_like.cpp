// helpers_dtor_like (game_misc) -- server. 46 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like.h"

/* FUN_00405570 @ 00405570  kind=gamemisc  attributed-by=role:dtor-like  size=40 */

void __thiscall FUN_00405570(void *this,ushort param_1,char param_2)

{
  if (param_2 != '\0') {
    *(ushort *)((int)this + 0x114) = *(ushort *)((int)this + 0x114) | param_1;
    return;
  }
  *(ushort *)((int)this + 0x114) = *(ushort *)((int)this + 0x114) & ~param_1;
  return;
}


/* FUN_004129d0 @ 004129d0  kind=gamemisc  attributed-by=role:dtor-like  size=234 */

int * __thiscall FUN_004129d0(void *this,int *param_1)

{
  void *_Dst;
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  size_t _Size;
  
  if (this != param_1) {
    pvVar2 = (void *)*param_1;
    pvVar3 = (void *)param_1[1];
    if (pvVar2 == pvVar3) {
      *(undefined4 *)((int)this + 4) = *(undefined4 *)this;
      return this;
    }
    _Dst = *(void **)this;
    uVar4 = *(int *)((int)this + 4) - (int)_Dst;
    if ((uint)((int)pvVar3 - (int)pvVar2) <= uVar4) {
      memmove(_Dst,pvVar2,(int)pvVar3 - (int)pvVar2);
      *(int *)((int)this + 4) = (param_1[1] - *param_1) + *(int *)this;
      return this;
    }
    if ((uint)((int)pvVar3 - (int)pvVar2) <= (uint)(*(int *)((int)this + 8) - (int)_Dst)) {
      pvVar3 = (void *)(uVar4 + (int)pvVar2);
      memmove(_Dst,pvVar2,(int)pvVar3 - (int)pvVar2);
      iVar1 = param_1[1];
      pvVar2 = memmove(*(void **)((int)this + 4),pvVar3,iVar1 - (int)pvVar3);
      *(int *)((int)this + 4) = (int)pvVar2 + (iVar1 - (int)pvVar3);
      return this;
    }
    if (_Dst != (void *)0x0) {
      operator_delete(_Dst);
    }
    uVar4 = FUN_00412b00(this,param_1[1] - *param_1);
    if ((char)uVar4 != '\0') {
      _Size = param_1[1] - *param_1;
      pvVar2 = memmove(*(void **)this,(void *)*param_1,_Size);
      *(size_t *)((int)this + 4) = (int)pvVar2 + _Size;
    }
  }
  return this;
}


/* FUN_00412c70 @ 00412c70  kind=gamemisc  attributed-by=role:dtor-like  size=131 */

void __fastcall FUN_00412c70(int *param_1)

{
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054bb48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[3] = 0;
  local_1c = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  FUN_00412d00(param_1,&local_1c);
  FUN_004129d0(param_1,(int *)&local_1c);
  if (local_1c != (void *)0x0) {
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00412d90 @ 00412d90  kind=gamemisc  attributed-by=role:dtor-like  size=131 */

void __fastcall FUN_00412d90(int *param_1)

{
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054bb48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[3] = 0;
  local_1c = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  FUN_00412e20(param_1,(int *)&local_1c);
  FUN_004129d0(param_1,(int *)&local_1c);
  if (local_1c != (void *)0x0) {
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_0041a090 @ 0041a090  kind=gamemisc  attributed-by=role:dtor-like  size=129 */

void FUN_0041a090(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_0041a090((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    if (7 < (uint)param_1[0xf]) {
      operator_delete((void *)param_1[10]);
    }
    param_1[0xf] = 7;
    param_1[0xe] = 0;
    *(undefined2 *)(param_1 + 10) = 0;
    if (7 < (uint)param_1[9]) {
      operator_delete((void *)param_1[4]);
    }
    param_1[9] = 7;
    param_1[8] = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}


/* FUN_0041a120 @ 0041a120  kind=gamemisc  attributed-by=role:dtor-like  size=92 */

void FUN_0041a120(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_0041a120((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    if (7 < (uint)param_1[9]) {
      operator_delete((void *)param_1[4]);
    }
    param_1[9] = 7;
    param_1[8] = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
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


/* FUN_0041e540 @ 0041e540  kind=gamemisc  attributed-by=role:dtor-like  size=222 */

void __thiscall FUN_0041e540(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bfb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xe6c2b5) {
      puVar3 = operator_new(param_1 * 0x11c);
      if (puVar3 != (undefined4 *)0x0) goto LAB_0041e5a4;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0041e5a4:
  local_8 = 0;
  FUN_0041d410(*(undefined4 **)this,*(undefined4 **)((int)this + 4),puVar3);
  pvVar1 = *(void **)this;
  iVar2 = *(int *)((int)this + 4);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  *(undefined4 **)((int)this + 8) = puVar3 + param_1 * 0x47;
  *(undefined4 **)((int)this + 4) = puVar3 + ((iVar2 - (int)pvVar1) / 0x11c) * 0x47;
  *(undefined4 **)this = puVar3;
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


/* FUN_00423770 @ 00423770  kind=gamemisc  attributed-by=role:dtor-like  size=64 */

void __fastcall FUN_00423770(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(param_1 + 8) + 4) = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (piVar2 != *(int **)(param_1 + 8)) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 8));
  }
  operator_delete(*(void **)(param_1 + 8));
  return;
}


/* FUN_00426c20 @ 00426c20  kind=gamemisc  attributed-by=role:dtor-like  size=74 */

void FUN_00426c20(void *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)((int)param_1 + 0x10);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)((int)param_1 + 0x10) + 4) = *(int *)((int)param_1 + 0x10);
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  if (piVar2 != *(int **)((int)param_1 + 0x10)) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)((int)param_1 + 0x10));
  }
  operator_delete(*(void **)((int)param_1 + 0x10));
  operator_delete(param_1);
  return;
}


/* FUN_00426db0 @ 00426db0  kind=gamemisc  attributed-by=role:dtor-like  size=222 */

void __thiscall FUN_00426db0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c990;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x2222223) {
      pvVar3 = operator_new(param_1 * 0x78);
      if (pvVar3 != (void *)0x0) goto LAB_00426e13;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00426e13:
  local_8 = 0;
  FUN_00421980(*(undefined4 **)this,*(undefined4 **)((int)this + 4),pvVar3);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(void **)this = pvVar3;
  *(void **)((int)this + 8) = (void *)((int)pvVar3 + param_1 * 0x78);
  *(void **)((int)this + 4) = (void *)((int)pvVar3 + ((iVar1 - iVar2) / 0x78) * 0x78);
  ExceptionList = local_10;
  return;
}


/* FUN_00426f60 @ 00426f60  kind=gamemisc  attributed-by=role:dtor-like  size=52 */

void __fastcall FUN_00426f60(int *param_1)

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
  return;
}


/* FUN_00428080 @ 00428080  kind=gamemisc  attributed-by=role:dtor-like  size=112 */

void __fastcall FUN_00428080(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = (int *)*param_1;
  piVar4 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  if (piVar4 != (int *)*param_1) {
    do {
      piVar1 = (int *)piVar4[4];
      piVar2 = (int *)*piVar4;
      piVar3 = (int *)*piVar1;
      *piVar1 = (int)piVar1;
      *(int *)(piVar4[4] + 4) = piVar4[4];
      piVar4[5] = 0;
      if (piVar3 != (int *)piVar4[4]) {
        do {
          piVar1 = (int *)*piVar3;
          operator_delete(piVar3);
          piVar3 = piVar1;
        } while (piVar1 != (int *)piVar4[4]);
      }
      operator_delete((void *)piVar4[4]);
      operator_delete(piVar4);
      piVar4 = piVar2;
    } while (piVar2 != (int *)*param_1);
  }
  return;
}


/* FUN_0042af50 @ 0042af50  kind=gamemisc  attributed-by=role:dtor-like  size=239 */

facet * __cdecl FUN_0042af50(locale *param_1)

{
  int iVar1;
  uint uVar2;
  _Locimp *p_Var3;
  facet *pfVar4;
  bad_cast local_24 [12];
  _Lockit local_18 [4];
  facet *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054cd39;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::_Lockit::_Lockit(local_18,0);
  local_8 = 0;
  local_14 = DAT_00583df0;
  uVar2 = std::locale::id::operator_unsigned_int((id *)id_exref);
  iVar1 = *(int *)param_1;
  if (uVar2 < *(uint *)(iVar1 + 0xc)) {
    pfVar4 = *(facet **)(*(int *)(iVar1 + 8) + uVar2 * 4);
    if (pfVar4 != (facet *)0x0) goto LAB_0042b022;
  }
  else {
    pfVar4 = (facet *)0x0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_0042afcf:
    if (pfVar4 != (facet *)0x0) goto LAB_0042b022;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (uVar2 < *(uint *)(p_Var3 + 0xc)) {
      pfVar4 = *(facet **)(*(int *)(p_Var3 + 8) + uVar2 * 4);
      goto LAB_0042afcf;
    }
  }
  pfVar4 = local_14;
  if (local_14 == (facet *)0x0) {
    uVar2 = std::ctype<wchar_t>::_Getcat(&local_14,param_1);
    pfVar4 = local_14;
    if (uVar2 == 0xffffffff) {
      std::bad_cast::bad_cast(local_24,"bad cast");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_24,(ThrowInfo *)&DAT_005779e4);
    }
    DAT_00583df0 = local_14;
    (**(code **)(*(int *)local_14 + 4))();
    Facet_Register(pfVar4);
  }
LAB_0042b022:
  std::_Lockit::~_Lockit(local_18);
  ExceptionList = local_10;
  return pfVar4;
}


/* FUN_0042c2e0 @ 0042c2e0  kind=gamemisc  attributed-by=role:dtor-like  size=99 */

void __fastcall FUN_0042c2e0(undefined4 *param_1)

{
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_0042d520(param_1 + 8);
  operator_delete((void *)param_1[8]);
  FUN_0041a180(param_1 + 6,&local_8,*(int **)param_1[6],(int *)param_1[6]);
  operator_delete((void *)param_1[6]);
  if (7 < (uint)param_1[5]) {
    operator_delete((void *)*param_1);
  }
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}


/* FUN_0042c350 @ 0042c350  kind=gamemisc  attributed-by=role:dtor-like  size=77 */

void __fastcall FUN_0042c350(undefined4 *param_1)

{
  if (7 < (uint)param_1[0xb]) {
    operator_delete((void *)param_1[6]);
  }
  param_1[0xb] = 7;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  if (7 < (uint)param_1[5]) {
    operator_delete((void *)*param_1);
  }
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}


/* FUN_0042c410 @ 0042c410  kind=gamemisc  attributed-by=role:dtor-like  size=59 */

void __fastcall FUN_0042c410(undefined4 *param_1)

{
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_0042d520(param_1 + 2);
  operator_delete((void *)param_1[2]);
  FUN_0041a180(param_1,&local_8,*(int **)*param_1,(int *)*param_1);
  operator_delete((void *)*param_1);
  return;
}


/* FUN_0042d060 @ 0042d060  kind=gamemisc  attributed-by=role:dtor-like  size=95 */

void FUN_0042d060(void *param_1)

{
  if (7 < *(uint *)((int)param_1 + 0x3c)) {
    operator_delete(*(void **)((int)param_1 + 0x28));
  }
  *(undefined4 *)((int)param_1 + 0x3c) = 7;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined2 *)((int)param_1 + 0x28) = 0;
  if (7 < *(uint *)((int)param_1 + 0x24)) {
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 7;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined2 *)((int)param_1 + 0x10) = 0;
  operator_delete(param_1);
  return;
}


/* FUN_0042d4c0 @ 0042d4c0  kind=gamemisc  attributed-by=role:dtor-like  size=84 */

void __thiscall FUN_0042d4c0(void *this,int *param_1)

{
  if (param_1 != *(int **)this) {
    *(int *)param_1[1] = *param_1;
    *(int *)(*param_1 + 4) = param_1[1];
    if (7 < (uint)param_1[7]) {
      operator_delete((void *)param_1[2]);
    }
    param_1[7] = 7;
    param_1[6] = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    operator_delete(param_1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return;
}


/* FUN_0042e000 @ 0042e000  kind=gamemisc  attributed-by=role:dtor-like  size=142 */

int * __thiscall FUN_0042e000(void *this,int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  if ((param_2 == (int *)**(int **)this) && (param_3 == *(int **)this)) {
    FUN_0042d520(this);
    *param_1 = *(int *)this;
    return param_1;
  }
  while (piVar1 = param_2, piVar1 != param_3) {
    param_2 = (int *)*piVar1;
    if (piVar1 != *(int **)this) {
      *(int **)piVar1[1] = param_2;
      *(int *)(*piVar1 + 4) = piVar1[1];
      if (7 < (uint)piVar1[7]) {
        operator_delete((void *)piVar1[2]);
      }
      piVar1[7] = 7;
      piVar1[6] = 0;
      *(undefined2 *)(piVar1 + 2) = 0;
      operator_delete(piVar1);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
    }
  }
  *param_1 = (int)param_3;
  return param_1;
}


/* FUN_0042eee0 @ 0042eee0  kind=gamemisc  attributed-by=role:dtor-like  size=65 */

ios_base * __thiscall FUN_0042eee0(void *this,byte param_1)

{
  FUN_0042ecd0(this);
  *(code **)this = _vftable__exref;
  *(code **)this = _vftable__exref;
  std::ios_base::_Ios_base_dtor(this);
  if ((param_1 & 1) != 0) {
    operator_delete((ios_base *)((int)this + -0x70));
  }
  return (ios_base *)((int)this + -0x70);
}


/* FUN_0042ef30 @ 0042ef30  kind=gamemisc  attributed-by=role:dtor-like  size=65 */

ios_base * __thiscall FUN_0042ef30(void *this,byte param_1)

{
  FUN_0042ed40(this);
  *(code **)this = _vftable__exref;
  *(code **)this = _vftable__exref;
  std::ios_base::_Ios_base_dtor(this);
  if ((param_1 & 1) != 0) {
    operator_delete((ios_base *)((int)this + -0x60));
  }
  return (ios_base *)((int)this + -0x60);
}


/* FUN_00430ec0 @ 00430ec0  kind=gamemisc  attributed-by=role:dtor-like  size=64 */

void __fastcall FUN_00430ec0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (piVar2 != *(int **)(param_1 + 4)) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 4));
  }
  operator_delete(*(void **)(param_1 + 4));
  return;
}


/* FUN_00469960 @ 00469960  kind=gamemisc  attributed-by=role:dtor-like  size=198 */

void __cdecl FUN_00469960(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
  pbVar2 = (byte *)FUN_004ae680((int *)*param_3,1);
  piVar1 = (int *)*param_3;
  if (((*(byte *)(piVar1 + 7) & 0x10) == 0) && (iVar3 = FUN_004ae680(piVar1,1), iVar3 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = piVar1[6];
    if ((*(ushort *)(piVar1 + 7) & 0x4000) != 0) {
      uVar6 = uVar6 + piVar1[4];
    }
  }
  if ((pbVar2 != (byte *)0x0) &&
     (pvVar4 = (void *)FUN_00476020(param_1,uVar6 + 1,
                                    ((int)uVar6 >> 0x1f) + (uint)(0xfffffffe < uVar6)),
     pvVar4 != (void *)0x0)) {
    if (0 < (int)uVar6) {
      uVar5 = uVar6;
      pbVar7 = pbVar2;
      do {
        (pbVar7 + 1)[(int)pvVar4 + (-1 - (int)pbVar2)] =
             ~((&DAT_00569720)[*pbVar7] & 0x20) & *pbVar7;
        uVar5 = uVar5 - 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar5 != 0);
    }
    iVar3 = FUN_004b79e0((int *)(param_1 + 8),pvVar4,uVar6,'\x01',FUN_00466dd0);
    if (iVar3 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
  }
  return;
}


/* FUN_004c24b0 @ 004c24b0  kind=gamemisc  attributed-by=role:dtor-like  size=53 */

void __cdecl FUN_004c24b0(int param_1,byte param_2,uint *param_3)

{
  if ((int)*param_3 < 0) {
    *param_3 = (uint)((*(byte *)(param_1 + 0x10) & param_2) != 0);
    return;
  }
  if (*param_3 == 0) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & ~param_2;
    return;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | param_2;
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


/* FUN_004ce480 @ 004ce480  kind=gamemisc  attributed-by=role:dtor-like  size=119 */

ios_base * __thiscall FUN_004ce480(void *this,byte param_1)

{
  ios_base *piVar1;
  int iVar2;
  
  piVar1 = (ios_base *)((int)this + -0x68);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   (*(int *)(*(int *)piVar1 + 4) + -0x68 + (int)this) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar2 = *(int *)(*(int *)((int)this + -0x68) + 4);
  *(int *)(iVar2 + -0x6c + (int)this) = iVar2 + -0x68;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)this + -0x50) =
       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_004ce990((int)this + -0x50);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)((int)this + -0x50));
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)((int)this + -0x48));
  *(code **)this = _vftable__exref;
  *(code **)this = _vftable__exref;
  std::ios_base::_Ios_base_dtor(this);
  if ((param_1 & 1) != 0) {
    operator_delete(piVar1);
  }
  return piVar1;
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


/* FUN_004dab90 @ 004dab90  kind=gamemisc  attributed-by=role:dtor-like  size=262 */

int * __thiscall FUN_004dab90(void *this,int *param_1)

{
  size_t _Size;
  void *_Src;
  void *_Dst;
  void *pvVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (this != param_1) {
    pvVar1 = (void *)param_1[1];
    _Src = (void *)*param_1;
    if (_Src == pvVar1) {
      *(undefined4 *)((int)this + 4) = *(undefined4 *)this;
      return this;
    }
    _Dst = *(void **)this;
    uVar4 = *(int *)((int)this + 4) - (int)_Dst >> 2;
    uVar3 = (int)pvVar1 - (int)_Src >> 2;
    if (uVar3 <= uVar4) {
      memmove(_Dst,_Src,(int)pvVar1 - (int)_Src & 0xfffffffc);
      *(int *)((int)this + 4) = *(int *)this + (param_1[1] - *param_1 >> 2) * 4;
      return this;
    }
    if (uVar3 <= (uint)(*(int *)((int)this + 8) - (int)_Dst >> 2)) {
      pvVar1 = (void *)((int)_Src + uVar4 * 4);
      memmove(_Dst,_Src,(int)pvVar1 - (int)_Src & 0xfffffffc);
      _Size = (param_1[1] - (int)pvVar1 >> 2) * 4;
      pvVar1 = memmove(*(void **)((int)this + 4),pvVar1,_Size);
      *(void **)((int)this + 4) = (void *)((int)pvVar1 + _Size);
      return this;
    }
    if (_Dst != (void *)0x0) {
      operator_delete(_Dst);
    }
    uVar2 = FUN_004dae20(this,param_1[1] - *param_1 >> 2);
    if ((char)uVar2 != '\0') {
      pvVar1 = FUN_004da990((void *)*param_1,param_1[1],*(void **)this);
      *(void **)((int)this + 4) = pvVar1;
    }
  }
  return this;
}


/* FUN_004dcff0 @ 004dcff0  kind=gamemisc  attributed-by=role:dtor-like  size=147 */

bool __thiscall FUN_004dcff0(void *this,undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  local_8 = 0;
  FUN_0045f080(&local_10,3);
  piVar2 = local_10;
  *local_10 = (int)param_1;
  local_10[1] = param_2;
  local_10[2] = param_3;
  puVar1 = *(undefined4 **)((int)this + 0x1414);
  param_1 = FUN_004daf50((void *)((int)this + 0x1414),&local_10);
  if (param_1 != puVar1) {
    uVar3 = FUN_004da930(piVar2,local_c,(int *)param_1[4],(int *)param_1[5]);
    if ((char)uVar3 == '\0') goto LAB_004dd065;
  }
  param_1 = puVar1;
LAB_004dd065:
  operator_delete(local_10);
  return param_1 != puVar1;
}


/* FUN_004dd0f0 @ 004dd0f0  kind=gamemisc  attributed-by=role:dtor-like  size=171 */

undefined4 * __thiscall FUN_004dd0f0(void *this,undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  local_8 = 0;
  FUN_0045f080(&local_10,3);
  piVar2 = local_10;
  *local_10 = (int)param_1;
  local_10[1] = param_2;
  local_10[2] = param_3;
  param_1 = FUN_004daf50((void *)((int)this + 0x140c),&local_10);
  puVar1 = *(undefined4 **)((int)this + 0x140c);
  if (param_1 != puVar1) {
    uVar3 = FUN_004da930(piVar2,local_c,(int *)param_1[4],(int *)param_1[5]);
    if ((char)uVar3 == '\0') goto LAB_004dd165;
  }
  param_1 = puVar1;
LAB_004dd165:
  if (param_1 == puVar1) {
    operator_delete(piVar2);
    return (undefined4 *)0x0;
  }
  operator_delete(piVar2);
  return param_1 + 7;
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


/* FUN_004e2400 @ 004e2400  kind=gamemisc  attributed-by=role:dtor-like  size=228 */

void __thiscall FUN_004e2400(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554f80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined8 *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x924924a) {
      puVar3 = operator_new(param_1 * 0x1c);
      if (puVar3 != (undefined8 *)0x0) goto LAB_004e2465;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004e2465:
  local_8 = 0;
  FUN_004e1e00(*(undefined8 **)this,*(undefined8 **)((int)this + 4),puVar3);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined8 **)this = puVar3;
  *(uint *)((int)this + 8) = (int)puVar3 + param_1 * 0x1c;
  *(int *)((int)this + 4) = (int)puVar3 + ((iVar1 - iVar2) / 0x1c) * 0x1c;
  ExceptionList = local_10;
  return;
}


/* FUN_004e2500 @ 004e2500  kind=gamemisc  attributed-by=role:dtor-like  size=188 */

void __thiscall FUN_004e2500(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554fa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x8000000) {
      puVar3 = operator_new(param_1 << 5);
      if (puVar3 != (undefined4 *)0x0) goto LAB_004e2561;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004e2561:
  local_8 = 0;
  FUN_0052e660(*(undefined4 **)this,*(undefined4 **)((int)this + 4),puVar3);
  pvVar1 = *(void **)this;
  iVar2 = *(int *)((int)this + 4);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  *(undefined4 **)((int)this + 8) = puVar3 + param_1 * 8;
  *(uint *)((int)this + 4) = (iVar2 - (int)pvVar1 & 0xffffffe0U) + (int)puVar3;
  *(undefined4 **)this = puVar3;
  ExceptionList = local_10;
  return;
}


/* FUN_004f7270 @ 004f7270  kind=gamemisc  attributed-by=role:dtor-like  size=84 */

void FUN_004f7270(undefined4 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
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


/* FUN_004f7fe0 @ 004f7fe0  kind=gamemisc  attributed-by=role:dtor-like  size=207 */

void __thiscall FUN_004f7fe0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005556b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x15555556) {
      puVar3 = operator_new(param_1 * 0xc);
      if (puVar3 != (undefined4 *)0x0) goto LAB_004f803f;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004f803f:
  local_8 = 0;
  FUN_004f7230(*(undefined4 **)this,*(undefined4 **)((int)this + 4),puVar3);
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


/* FUN_0052ea70 @ 0052ea70  kind=gamemisc  attributed-by=role:dtor-like  size=265 */

int * __thiscall FUN_0052ea70(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00556300;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_1) {
    puVar5 = (undefined4 *)*param_1;
    if (puVar5 == (undefined4 *)param_1[1]) {
      iVar2 = *(int *)this;
    }
    else {
      puVar1 = *(undefined4 **)this;
      uVar3 = param_1[1] - (int)puVar5 >> 5;
      uVar4 = *(int *)((int)this + 4) - (int)puVar1 >> 5;
      if (uVar4 < uVar3) {
        if ((uint)(*(int *)((int)this + 8) - (int)puVar1 >> 5) < uVar3) {
          if (puVar1 != (undefined4 *)0x0) {
            operator_delete(puVar1);
          }
          uVar3 = FUN_0052ecc0(this,param_1[1] - *param_1 >> 5);
          if ((char)uVar3 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          iVar2 = FUN_0052e660((undefined4 *)*param_1,(undefined4 *)param_1[1],*(undefined4 **)this)
          ;
        }
        else {
          puVar5 = (undefined4 *)*param_1 + uVar4 * 8;
          FUN_0052e0c0((undefined4 *)*param_1,puVar5,puVar1);
          iVar2 = FUN_0052e660(puVar5,(undefined4 *)param_1[1],*(undefined4 **)((int)this + 4));
        }
      }
      else {
        FUN_0052e0c0(puVar5,(undefined4 *)param_1[1],puVar1);
        iVar2 = (param_1[1] - *param_1 & 0xffffffe0U) + *(int *)this;
      }
    }
    *(int *)((int)this + 4) = iVar2;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_0052eda0 @ 0052eda0  kind=gamemisc  attributed-by=role:dtor-like  size=188 */

void __thiscall FUN_0052eda0(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00556320;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x10000000) {
      puVar3 = operator_new(param_1 << 4);
      if (puVar3 != (undefined4 *)0x0) goto LAB_0052ee01;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0052ee01:
  local_8 = 0;
  FUN_0052e6b0(*(int *)this,*(int *)((int)this + 4),puVar3);
  pvVar1 = *(void **)this;
  iVar2 = *(int *)((int)this + 4);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  *(undefined4 **)((int)this + 8) = puVar3 + param_1 * 4;
  *(uint *)((int)this + 4) = (iVar2 - (int)pvVar1 & 0xfffffff0U) + (int)puVar3;
  *(undefined4 **)this = puVar3;
  ExceptionList = local_10;
  return;
}


/* FUN_0054a6ec @ 0054a6ec  kind=gamemisc  attributed-by=role:dtor-like  size=36 */

void FUN_0054a6ec(void)

{
  undefined4 *puVar1;
  
  while (puVar1 = DAT_005842f4, DAT_005842f4 != (undefined4 *)0x0) {
    DAT_005842f4 = (undefined4 *)*DAT_005842f4;
    FUN_0054a6d7((int)puVar1);
    operator_delete(puVar1);
  }
  return;
}


/* __IsNonwritableInCurrentImage @ 0054b700  kind=gamemisc  attributed-by=role:dtor-like  size=164 */

/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio 2012 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = FUN_0054b4c9;
  local_14 = ExceptionList;
  local_c = DAT_00583cc8 ^ 0x57f498;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}


