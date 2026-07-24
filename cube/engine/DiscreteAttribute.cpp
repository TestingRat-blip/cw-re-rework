// DiscreteAttribute (engine) -- cube. 15 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "DiscreteAttribute.h"

/* plasma::DiscreteAttribute<int>::DiscreteAttribute<int> @ 0064ce50  kind=game  attributed-by=rtti  size=119 */

DiscreteAttribute<int> * __thiscall
plasma::DiscreteAttribute<int>::DiscreteAttribute<int>
          (DiscreteAttribute<int> *this,undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f60a3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Attribute::Attribute((Attribute *)this,param_1);
  this->vftablePtr = &vftable;
  (this->DiscreteAttribute<int>_data).offset_0x0 = 0;
  (this->DiscreteAttribute<int>_data).offset_0x4 = 0;
  (this->DiscreteAttribute<int>_data).offset_0x8 = 0;
  local_8 = 1;
  FUN_004871e0(2,param_2);
  ExceptionList = local_10;
  return this;
}


/* plasma::DiscreteAttribute<int>::vfunction1 @ 0064e260  kind=game  attributed-by=rtti  size=45 */

DiscreteAttribute<int> * __thiscall
plasma::DiscreteAttribute<int>::vfunction1(DiscreteAttribute<int> *this,byte param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(this->DiscreteAttribute<int>_data).offset_0x0;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  Attribute::~Attribute((Attribute *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::DiscreteAttribute<int>::vfunction7 @ 006531a0  kind=game  attributed-by=rtti  size=62 */

void __thiscall
plasma::DiscreteAttribute<int>::vfunction7
          (DiscreteAttribute<int> *this,undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  float in_stack_0000001c;
  
  if (in_stack_0000001c < 1.0) {
    iVar1 = (this->DiscreteAttribute<int>_data).offset_0x0;
    *(undefined4 *)(iVar1 + (this->Attribute_data).offset_0x1c * 4) =
         *(undefined4 *)(iVar1 + param_2 * 4);
    return;
  }
  iVar1 = (this->DiscreteAttribute<int>_data).offset_0x0;
  *(undefined4 *)(iVar1 + (this->Attribute_data).offset_0x1c * 4) =
       *(undefined4 *)(iVar1 + param_3 * 4);
  return;
}


/* plasma::DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 00663180  kind=game  attributed-by=rtti  size=189 */

DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> *
__thiscall
plasma::
DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::
DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7373;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Attribute::Attribute((Attribute *)this,param_1);
  this->vftablePtr = &vftable;
  (this->
  DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
  ).offset_0x0 = 0;
  (this->
  DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
  ).offset_0x4 = 0;
  (this->
  DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
  ).offset_0x8 = 0;
  iVar1 = (this->
          DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
          ).offset_0x4;
  uVar2 = (iVar1 - (this->
                   DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
                   ).offset_0x0) / 0x18;
  local_8 = 1;
  if (uVar2 < 3) {
    if (uVar2 < 2) {
      FUN_006637a0(&param_1,iVar1,2 - uVar2,param_2);
    }
  }
  else {
    FUN_00663ee0(&param_1,(this->
                          DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
                          ).offset_0x0 + 0x30,iVar1);
  }
  ExceptionList = local_10;
  return this;
}


/* plasma::DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::vfunction1 @ 00663710  kind=game  attributed-by=rtti  size=66 */

DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> *
__thiscall
plasma::
DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::
vfunction1(DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *this,uint param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  iVar1 = (this->
          DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
          ).offset_0x0;
  uStack_8 = this;
  if (iVar1 != 0) {
    FUN_00452650(iVar1,(this->
                       DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
                       ).offset_0x4,(int)&uStack_8 + 3,param_1);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)(this->
                            DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
                            ).offset_0x0);
  }
  Attribute::~Attribute((Attribute *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::vfunction3 @ 00663b60  kind=game  attributed-by=rtti  size=185 */

void __thiscall
plasma::
DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::
vfunction3(DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *this)

{
  int iVar1;
  bool bVar2;
  undefined4 local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f74c0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = (this->
          DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
          ).offset_0x0;
  local_18 = 7;
  local_1c = 0;
  bVar2 = iVar1 != (this->
                   DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
                   ).offset_0x4;
  if (bVar2) {
    local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
    FUN_0040f680(iVar1 + (this->Attribute_data).offset_0x1c * 0x18,0,0xffffffff);
  }
  else {
    local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
  }
  local_8 = (uint)bVar2;
  FUN_00486950(&local_2c);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  iVar1 = (this->
          DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
          ).offset_0x4 -
          (this->
          DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
          ).offset_0x0;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,iVar1 / 0x18 + (iVar1 >> 0x1f));
  return;
}


/* plasma::DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::vfunction5 @ 00663f70  kind=game  attributed-by=rtti  size=101 */

void __thiscall
plasma::
DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::
vfunction5(DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_1) &&
     (iVar3 = (this->
              DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
              ).offset_0x4,
     param_1 < (iVar3 - (this->
                        DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
                        ).offset_0x0) / 0x18)) {
    iVar2 = (this->
            DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
            ).offset_0x0 + param_1 * 0x18;
    FUN_00663000(iVar2 + 0x18,iVar3,iVar2,param_1);
    iVar3 = (this->
            DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
            ).offset_0x4;
    FUN_00452650(iVar3 + -0x18,iVar3,(int)&param_1 + 3,param_1);
    piVar1 = &(this->
              DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
              ).offset_0x4;
    *piVar1 = *piVar1 + -0x18;
  }
  return;
}


/* plasma::DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::vfunction4 @ 00663ff0  kind=game  attributed-by=rtti  size=194 */

void __thiscall
plasma::
DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::
vfunction4(DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *this,int param_1)

{
  void **ppvVar1;
  int iVar2;
  void *local_20 [4];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((-1 < param_1) &&
     (iVar2 = (this->
              DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
              ).offset_0x0,
     param_1 < ((this->
                DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
                ).offset_0x4 - iVar2) / 0x18)) {
    local_20[0] = (void *)((uint)local_20[0] & 0xffff0000);
    local_c = 7;
    local_10 = 0;
    FUN_0040f680(iVar2 + param_1 * 0x18,0,0xffffffff);
    ppvVar1 = (void **)((this->
                        DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
                        ).offset_0x0 + (this->Attribute_data).offset_0x1c * 0x18);
    if (ppvVar1 != local_20) {
      if ((void *)0x7 < ppvVar1[5]) {
                    /* WARNING: Subroutine does not return */
        operator_delete(*ppvVar1);
      }
      ppvVar1[5] = (void *)0x7;
      ppvVar1[4] = (void *)0x0;
      *(undefined2 *)ppvVar1 = 0;
      FUN_0040f110(local_20);
    }
    if (7 < local_c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_20[0]);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::vfunction7 @ 006640c0  kind=game  attributed-by=rtti  size=317 */

void __thiscall
plasma::
DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::
vfunction7(DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *this,undefined4 param_1,int param_2,int param_3)

{
  void **ppvVar1;
  bool bVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  void **ppvVar4;
  float in_stack_0000001c;
  undefined4 uVar5;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006f7509;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar5 = 0;
  bVar2 = 1.0 <= in_stack_0000001c;
  if (bVar2) {
    local_18 = 7;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    local_1c = 0;
    FUN_0040f680((this->
                 DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
                 ).offset_0x0 + param_3 * 0x18,0,0xffffffff);
    ppvVar4 = local_2c;
    uVar3 = extraout_EDX_00;
  }
  else {
    local_30 = 7;
    local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
    local_34 = 0;
    FUN_0040f680((this->
                 DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
                 ).offset_0x0 + param_2 * 0x18,0,0xffffffff);
    ppvVar4 = local_44;
    uVar3 = extraout_EDX;
  }
  ppvVar1 = (void **)((this->
                      DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
                      ).offset_0x0 + (this->Attribute_data).offset_0x1c * 0x18);
  if (ppvVar1 != ppvVar4) {
    if ((void *)0x7 < ppvVar1[5]) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*ppvVar1);
    }
    ppvVar1[5] = (void *)0x7;
    ppvVar1[4] = (void *)0x0;
    *(undefined2 *)ppvVar1 = 0;
    FUN_0040f110(ppvVar4);
    uVar3 = extraout_EDX_01;
  }
  if (bVar2) {
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  }
  if ((!bVar2) && (7 < local_30)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,uVar3,uVar5);
  return;
}


/* plasma::DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::vfunction2 @ 00664680  kind=game  attributed-by=rtti  size=24 */

int __thiscall
plasma::
DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::
vfunction2(DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *this)

{
  return ((this->
          DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
          ).offset_0x4 -
         (this->
         DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
         ).offset_0x0) / 0x18;
}


/* plasma::DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::vfunction6 @ 006646a0  kind=game  attributed-by=rtti  size=194 */

void __thiscall
plasma::
DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::
vfunction6(DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *this,int param_1)

{
  void **ppvVar1;
  int iVar2;
  void *local_20 [4];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((-1 < param_1) &&
     (iVar2 = (this->
              DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
              ).offset_0x0,
     param_1 < ((this->
                DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
                ).offset_0x4 - iVar2) / 0x18)) {
    local_20[0] = (void *)((uint)local_20[0] & 0xffff0000);
    local_c = 7;
    local_10 = 0;
    FUN_0040f680(iVar2 + (this->Attribute_data).offset_0x1c * 0x18,0,0xffffffff);
    ppvVar1 = (void **)((this->
                        DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_data
                        ).offset_0x0 + param_1 * 0x18);
    if (ppvVar1 != local_20) {
      if ((void *)0x7 < ppvVar1[5]) {
                    /* WARNING: Subroutine does not return */
        operator_delete(*ppvVar1);
      }
      ppvVar1[5] = (void *)0x7;
      ppvVar1[4] = (void *)0x0;
      *(undefined2 *)ppvVar1 = 0;
      FUN_0040f110(local_20);
    }
    if (7 < local_c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_20[0]);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::DiscreteAttribute<int>::vfunction3 @ 00668ea0  kind=game  attributed-by=rtti  size=76 */

int __thiscall plasma::DiscreteAttribute<int>::vfunction3(DiscreteAttribute<int> *this)

{
  int iVar1;
  DiscreteAttribute<int> *local_8;
  
  iVar1 = (this->DiscreteAttribute<int>_data).offset_0x0;
  if (iVar1 == (this->DiscreteAttribute<int>_data).offset_0x4) {
    local_8 = (DiscreteAttribute<int> *)0x0;
    FUN_0066add0(&local_8);
    return ((int)((this->DiscreteAttribute<int>_data).offset_0x4 -
                 (this->DiscreteAttribute<int>_data).offset_0x0) >> 2) + -1;
  }
  local_8 = this;
  FUN_0066add0(iVar1 + (this->Attribute_data).offset_0x1c * 4);
  return ((int)((this->DiscreteAttribute<int>_data).offset_0x4 -
               (this->DiscreteAttribute<int>_data).offset_0x0) >> 2) + -1;
}


/* plasma::DiscreteAttribute<int>::vfunction5 @ 00669310  kind=game  attributed-by=rtti  size=64 */

void __thiscall plasma::DiscreteAttribute<int>::vfunction5(DiscreteAttribute<int> *this,int param_1)

{
  void *_Src;
  undefined4 *puVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  if (-1 < param_1) {
    iVar2 = (this->DiscreteAttribute<int>_data).offset_0x4;
    iVar3 = (this->DiscreteAttribute<int>_data).offset_0x0;
    if (param_1 < iVar2 - iVar3 >> 2) {
      _Dst = (void *)(iVar3 + param_1 * 4);
      _Src = (void *)((int)_Dst + 4);
      memmove(_Dst,_Src,iVar2 - (int)_Src & 0xfffffffc);
      puVar1 = &(this->DiscreteAttribute<int>_data).offset_0x4;
      *puVar1 = *puVar1 + -4;
    }
  }
  return;
}


/* plasma::DiscreteAttribute<int>::vfunction4 @ 00669630  kind=game  attributed-by=rtti  size=40 */

void __thiscall plasma::DiscreteAttribute<int>::vfunction4(DiscreteAttribute<int> *this,int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) &&
     (iVar1 = (this->DiscreteAttribute<int>_data).offset_0x0,
     param_1 < (this->DiscreteAttribute<int>_data).offset_0x4 - iVar1 >> 2)) {
    *(undefined4 *)(iVar1 + (this->Attribute_data).offset_0x1c * 4) =
         *(undefined4 *)(iVar1 + param_1 * 4);
  }
  return;
}


/* plasma::DiscreteAttribute<int>::vfunction6 @ 0066b020  kind=game  attributed-by=rtti  size=40 */

void __thiscall plasma::DiscreteAttribute<int>::vfunction6(DiscreteAttribute<int> *this,int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) &&
     (iVar1 = (this->DiscreteAttribute<int>_data).offset_0x0,
     param_1 < (this->DiscreteAttribute<int>_data).offset_0x4 - iVar1 >> 2)) {
    *(undefined4 *)(iVar1 + param_1 * 4) =
         *(undefined4 *)(iVar1 + (this->Attribute_data).offset_0x1c * 4);
  }
  return;
}


