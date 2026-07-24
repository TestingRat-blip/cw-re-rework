// Button (engine) -- cube. 12 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Button.h"

/* plasma::Button::Button @ 00664d60  kind=game  attributed-by=rtti  size=491 */

Button * __thiscall
plasma::Button::Button(Button *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7608;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Widget::Widget((Widget *)this,param_1,param_2,param_4);
  this->vftablePtr = &vftable_for_NamedObject;
  this->vftablePtr = &vftable_for_Deformer;
  (this->Button_data).offset_0x14 = 7;
  (this->Button_data).offset_0x10 = 0;
  local_8 = 0;
  (this->Button_data).offset_0x0 = 0;
  FUN_0040f7a0(L"button:press",0xc);
  (this->Button_data).offset_0x2c = 7;
  (this->Button_data).offset_0x28 = 0;
  local_8._0_1_ = 1;
  (this->Button_data).offset_0x18 = 0;
  FUN_0040f7a0(L"button:release",0xe);
  (this->Button_data).offset_0x44 = 7;
  (this->Button_data).offset_0x40 = 0;
  local_8._0_1_ = 2;
  (this->Button_data).offset_0x30 = 0;
  FUN_0040f7a0(L"button:enter",0xc);
  (this->Button_data).offset_0x5c = 7;
  (this->Button_data).offset_0x58 = 0;
  local_8._0_1_ = 3;
  (this->Button_data).offset_0x48 = 0;
  FUN_0040f7a0(L"button:leave",0xc);
  (this->Button_data).offset_0x74 = 7;
  (this->Button_data).offset_0x70 = 0;
  local_8._0_1_ = 4;
  (this->Button_data).offset_0x60 = 0;
  FUN_0040f7a0(L"button:press:checked",0x14);
  (this->Button_data).offset_0x8c = 7;
  (this->Button_data).offset_0x88 = 0;
  local_8._0_1_ = 5;
  (this->Button_data).offset_0x78 = 0;
  FUN_0040f7a0(L"button:release:checked",0x16);
  (this->Button_data).offset_0xa4 = 7;
  (this->Button_data).offset_0xa0 = 0;
  local_8._0_1_ = 6;
  (this->Button_data).offset_0x90 = 0;
  FUN_0040f7a0(L"button:enter:checked",0x14);
  local_8._0_1_ = 7;
  (this->Button_data).offset_0xbc = 7;
  (this->Button_data).offset_0xb8 = 0;
  (this->Button_data).offset_0xa8 = 0;
  FUN_0040f7a0(L"button:leave:checked",0x14);
  local_8 = CONCAT31(local_8._1_3_,8);
  (this->Button_data).offset_0xc0 = (void *)0x0;
  (this->Button_data).offset_0xc4 = 0;
  pvVar1 = (void *)FUN_0046d550(0,0);
  (this->Button_data).offset_0xc0 = pvVar1;
  (this->Button_data).offset_0xcc = param_3;
  (this->Button_data).offset_0xc8 = 0;
  this->offset_0x2c = 1;
  ExceptionList = local_10;
  return this;
}


/* plasma::Button::Button @ 00664f50  kind=game  attributed-by=rtti  size=518 */

Button * __thiscall plasma::Button::Button(Button *this,int param_1,int param_2)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f76a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Widget::Widget((Widget *)this,param_1,param_2);
  this->vftablePtr = &vftable_for_NamedObject;
  this->vftablePtr = &vftable_for_Deformer;
  (this->Button_data).offset_0x14 = 7;
  (this->Button_data).offset_0x10 = 0;
  (this->Button_data).offset_0x0 = 0;
  local_8 = 0;
  FUN_0040f680(param_1 + 0x160,0,0xffffffff);
  (this->Button_data).offset_0x2c = 7;
  (this->Button_data).offset_0x28 = 0;
  (this->Button_data).offset_0x18 = 0;
  local_8._0_1_ = 1;
  FUN_0040f680(param_1 + 0x178,0,0xffffffff);
  (this->Button_data).offset_0x44 = 7;
  (this->Button_data).offset_0x40 = 0;
  (this->Button_data).offset_0x30 = 0;
  local_8._0_1_ = 2;
  FUN_0040f680(param_1 + 400,0,0xffffffff);
  (this->Button_data).offset_0x5c = 7;
  (this->Button_data).offset_0x58 = 0;
  (this->Button_data).offset_0x48 = 0;
  local_8._0_1_ = 3;
  FUN_0040f680(param_1 + 0x1a8,0,0xffffffff);
  (this->Button_data).offset_0x74 = 7;
  (this->Button_data).offset_0x70 = 0;
  (this->Button_data).offset_0x60 = 0;
  local_8._0_1_ = 4;
  FUN_0040f680(param_1 + 0x1c0,0,0xffffffff);
  (this->Button_data).offset_0x8c = 7;
  (this->Button_data).offset_0x88 = 0;
  (this->Button_data).offset_0x78 = 0;
  local_8._0_1_ = 5;
  FUN_0040f680(param_1 + 0x1d8,0,0xffffffff);
  local_8._0_1_ = 6;
  (this->Button_data).offset_0xa4 = 7;
  (this->Button_data).offset_0xa0 = 0;
  (this->Button_data).offset_0x90 = 0;
  FUN_0040f680(param_1 + 0x1f0,0,0xffffffff);
  (this->Button_data).offset_0xbc = 7;
  (this->Button_data).offset_0xb8 = 0;
  (this->Button_data).offset_0xa8 = 0;
  local_8._0_1_ = 7;
  FUN_0040f680(param_1 + 0x208,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,8);
  (this->Button_data).offset_0xc0 = (void *)0x0;
  (this->Button_data).offset_0xc4 = 0;
  pvVar1 = (void *)FUN_0046d550(0,0);
  (this->Button_data).offset_0xc0 = pvVar1;
  (this->Button_data).offset_0xc8 = 0;
  (this->Button_data).offset_0xcc = *(undefined4 *)(param_1 + 0x22c);
  this->offset_0x2c = 1;
  ExceptionList = local_10;
  return this;
}


/* plasma::Button::~Button @ 00665160  kind=game  attributed-by=rtti  size=73 */

void __thiscall plasma::Button::~Button(Button *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  
  this->vftablePtr = &vftable_for_NamedObject;
  this->vftablePtr = &vftable_for_Deformer;
  puVar1 = (this->Button_data).offset_0xc0;
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  pvVar3 = (this->Button_data).offset_0xc0;
  *(void **)((int)pvVar3 + 4) = pvVar3;
  (this->Button_data).offset_0xc4 = 0;
  if (pvVar2 != (this->Button_data).offset_0xc0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((this->Button_data).offset_0xc0);
}


/* plasma::Button::deleting_destructor_for_NamedObject @ 00665370  kind=game  attributed-by=rtti  size=30 */

Button * __thiscall plasma::Button::deleting_destructor_for_NamedObject(Button *this,byte param_1)

{
  ~Button(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::Button::clone_for_NamedObject @ 00665550  kind=game  attributed-by=rtti  size=114 */

Button * __thiscall plasma::Button::clone_for_NamedObject(Button *this,int param_1)

{
  Button *pBVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pBVar1 = operator_new(0x238);
  local_8 = 0;
  if (pBVar1 != (Button *)0x0) {
    pBVar1 = Button(pBVar1,(int)this,param_1);
    ExceptionList = local_10;
    return pBVar1;
  }
  ExceptionList = local_10;
  return (Button *)0x0;
}


/* plasma::Button::vfunction8_for_NamedObject @ 006655d0  kind=game  attributed-by=rtti  size=964 */

void __thiscall plasma::Button::vfunction8_for_NamedObject(Button *this)

{
  void **ppvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  Button *pBVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined2 *puVar11;
  int *local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  Button *local_1c;
  Button *local_18;
  Button *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f76e0;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = this;
  Widget::vfunction8_for_NamedObject((Widget *)this);
  puVar2 = (this->Button_data).offset_0xc0;
  ppvVar1 = &(this->Button_data).offset_0xc0;
  pvVar3 = (void *)*puVar2;
  *puVar2 = puVar2;
  *(void **)((int)*ppvVar1 + 4) = *ppvVar1;
  (this->Button_data).offset_0xc4 = 0;
  if (pvVar3 != *ppvVar1) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  iVar6 = FUN_0062b400(uVar5);
  if ((*(uint *)(this->offset_0x13c + 200) >> 4 & 1) != 0) {
    if (iVar6 == 0) goto LAB_0066580d;
    iVar6 = FUN_0062b400(uVar5);
  }
  if (iVar6 != 0) {
    FUN_00629140(&local_24);
    local_8._0_1_ = 0;
    local_8._1_3_ = 0;
    piVar10 = (int *)*local_24;
    piVar9 = local_24;
    if (piVar10 != local_24) {
      do {
        if ((*(uint *)(this->offset_0x13c + 200) >> 4 & 1) != 0) {
          FUN_00629140(&local_2c);
          local_8._0_1_ = 1;
          piVar10 = (int *)*local_2c;
          piVar9 = local_2c;
          if (piVar10 != local_2c) {
            do {
              local_18 = (Button *)piVar10[2];
              if ((local_18 == (Button *)0x0) || (local_18->offset_0x2c != 1)) {
                local_18 = (Button *)0x0;
              }
              if (((local_18 != (Button *)0x0) && (local_18 != local_14)) &&
                 ((local_18->Button_data).offset_0xcc == 2)) {
                local_1c = *ppvVar1;
                iVar7 = FUN_00583cb0(local_1c,(local_1c->Object_data).offset_0x0,&local_18);
                iVar6 = (this->Button_data).offset_0xc4;
                if (iVar6 == 0x15555554) {
LAB_00665836:
                    /* WARNING: Subroutine does not return */
                  std::_Xlength_error("list<T> too long");
                }
                (this->Button_data).offset_0xc4 = iVar6 + 1;
                (local_1c->Object_data).offset_0x0 = iVar7;
                **(int **)(iVar7 + 4) = iVar7;
                piVar9 = local_2c;
              }
              piVar10 = (int *)*piVar10;
            } while (piVar10 != piVar9);
          }
          piVar10 = (int *)*piVar9;
          *piVar9 = (int)piVar9;
          local_8 = (uint)local_8._1_3_ << 8;
          local_2c[1] = (int)local_2c;
          local_28 = 0;
          if (piVar10 == local_2c) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_2c);
          }
                    /* WARNING: Subroutine does not return */
          operator_delete(piVar10);
        }
        local_1c = (Button *)piVar10[2];
        if ((local_1c == (Button *)0x0) || (local_1c->offset_0x2c != 1)) {
          local_1c = (Button *)0x0;
        }
        if (((local_1c != (Button *)0x0) && (local_1c != this)) &&
           ((local_1c->Button_data).offset_0xcc == 2)) {
          local_18 = *ppvVar1;
          iVar7 = FUN_00583cb0(local_18,(local_18->Object_data).offset_0x0,&local_1c);
          iVar6 = (this->Button_data).offset_0xc4;
          if (iVar6 == 0x15555554) goto LAB_00665836;
          (this->Button_data).offset_0xc4 = iVar6 + 1;
          (local_18->Object_data).offset_0x0 = iVar7;
          **(int **)(iVar7 + 4) = iVar7;
          piVar9 = local_24;
        }
        piVar10 = (int *)*piVar10;
      } while (piVar10 != piVar9);
    }
    piVar10 = (int *)*piVar9;
    *piVar9 = (int)piVar9;
    local_8 = 0xffffffff;
    local_24[1] = (int)local_24;
    local_20 = 0;
    if (piVar10 == local_24) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_24);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar10);
  }
LAB_0066580d:
  pBVar4 = local_14;
  if (local_14->offset_0x150 != '\0') {
    if ((local_14->Button_data).offset_0xcc == 0) {
      puVar11 = &(local_14->Button_data).offset_0x18;
    }
    else {
      puVar11 = &(local_14->Button_data).offset_0x60;
      FUN_00636810(puVar11,0);
      uVar8 = FUN_00636f70(puVar11);
      FUN_00636cb0(uVar8);
      FUN_00636f10();
      puVar11 = &(pBVar4->Button_data).offset_0x78;
    }
    FUN_00636810(puVar11,0);
    uVar8 = FUN_00636f70(puVar11);
    FUN_00636cb0(uVar8);
    FUN_00636f10();
    puVar11 = &(pBVar4->Button_data).offset_0x18;
    FUN_00636810(puVar11,0);
    uVar8 = FUN_00636f70(puVar11);
    FUN_00636cb0(uVar8);
    FUN_00636f10();
    puVar11 = &(pBVar4->Button_data).offset_0x48;
    FUN_00636810(puVar11,0);
    uVar8 = FUN_00636f70(puVar11);
    FUN_00636cb0(uVar8);
    FUN_00636f10();
    if (*(char *)((int)&(pBVar4->Button_data).offset_0xc8 + 1) != '\0') {
      FUN_00636810(&pBVar4->Button_data,0);
      uVar8 = FUN_00636f70(&pBVar4->Button_data);
      FUN_00636cb0(uVar8);
      FUN_00636f10();
      puVar11 = &(pBVar4->Button_data).offset_0x78;
      FUN_00636810(puVar11,0);
      uVar8 = FUN_00636f70(puVar11);
      FUN_00636cb0(uVar8);
      FUN_00636f10();
      puVar11 = &(pBVar4->Button_data).offset_0xa8;
      FUN_00636810(puVar11,0);
      uVar8 = FUN_00636f70(puVar11);
      FUN_00636cb0(uVar8);
      FUN_00636f10();
    }
  }
  ExceptionList = local_10;
  return;
}


/* plasma::Button::vfunction14_for_NamedObject @ 006659d0  kind=game  attributed-by=rtti  size=5 */

/* plasma::Button member function inherited by plasma::ScrollButton
   plasma::Button member function inherited by plasma::PopUpButton
   plasma::Button member function inherited by plasma::ScrollSlider */

void __thiscall plasma::Button::vfunction14_for_NamedObject(Button *this)

{
                    /* WARNING: Could not recover jumptable at 0x006659d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->vftablePtr->vfunction12_for_NamedObject)();
  return;
}


/* plasma::Button::vfunction12_for_NamedObject @ 006659e0  kind=game  attributed-by=rtti  size=216 */

void __thiscall plasma::Button::vfunction12_for_NamedObject(Button *this)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  Button_data *pBVar4;
  int *piVar5;
  
  FUN_0064efe0(this->offset_0x13c);
  iVar2 = (this->Button_data).offset_0xcc;
  this->field197_0x230 = (Button_vftable_for_NamedObject *)0xfffffe0c;
  this->field198_0x234 = 0x96;
  *(undefined1 *)&(this->Button_data).offset_0xc8 = 1;
  if (iVar2 != 0) {
    if ((iVar2 == 2) &&
       (piVar3 = (this->Button_data).offset_0xc0, piVar5 = (int *)*piVar3, piVar5 != piVar3)) {
      do {
        if (*(char *)(piVar5[2] + 0x229) != '\0') {
          *(undefined1 *)(piVar5[2] + 0x229) = 0;
          FUN_00636810(piVar5[2] + 0x1a8,0);
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (this->Button_data).offset_0xc0);
    }
    pBVar4 = (Button_data *)&(this->Button_data).offset_0x60;
    if (*(char *)((int)&(this->Button_data).offset_0xc8 + 1) == '\0') {
      pBVar4 = &this->Button_data;
    }
    FUN_00636810(pBVar4,0);
    cVar1 = *(char *)((int)&(this->Button_data).offset_0xc8 + 1);
    if ((cVar1 == '\0') || ((this->Button_data).offset_0xcc != 2)) {
      *(bool *)((int)&(this->Button_data).offset_0xc8 + 1) = cVar1 == '\0';
    }
    return;
  }
  FUN_00636810(&this->Button_data,0);
  return;
}


/* plasma::Button::vfunction13_for_NamedObject @ 00665ac0  kind=game  attributed-by=rtti  size=64 */

/* plasma::Button member function inherited by plasma::ScrollButton
   plasma::Button member function inherited by plasma::ScrollSlider */

void __thiscall plasma::Button::vfunction13_for_NamedObject(Button *this)

{
  undefined2 *puVar1;
  
  FUN_00659cf0();
  *(undefined1 *)&(this->Button_data).offset_0xc8 = 0;
  if (((this->Button_data).offset_0xcc == 0) ||
     (puVar1 = &(this->Button_data).offset_0x78,
     *(char *)((int)&(this->Button_data).offset_0xc8 + 1) == '\0')) {
    puVar1 = &(this->Button_data).offset_0x18;
  }
  FUN_00636810(puVar1,0);
  return;
}


/* plasma::Button::vfunction23_for_NamedObject @ 00665b00  kind=game  attributed-by=rtti  size=45 */

/* plasma::Button member function inherited by plasma::ScrollButton
   plasma::Button member function inherited by plasma::PopUpButton
   plasma::Button member function inherited by plasma::ScrollSlider */

void __thiscall plasma::Button::vfunction23_for_NamedObject(Button *this)

{
  undefined2 *puVar1;
  
  if (((this->Button_data).offset_0xcc == 0) ||
     (puVar1 = &(this->Button_data).offset_0x90,
     *(char *)((int)&(this->Button_data).offset_0xc8 + 1) == '\0')) {
    puVar1 = &(this->Button_data).offset_0x30;
  }
  FUN_00636810(puVar1,0);
  return;
}


/* plasma::Button::vfunction24_for_NamedObject @ 00665b30  kind=game  attributed-by=rtti  size=45 */

/* plasma::Button member function inherited by plasma::ScrollButton
   plasma::Button member function inherited by plasma::PopUpButton
   plasma::Button member function inherited by plasma::ScrollSlider */

void __thiscall plasma::Button::vfunction24_for_NamedObject(Button *this)

{
  undefined2 *puVar1;
  
  if (((this->Button_data).offset_0xcc == 0) ||
     (puVar1 = &(this->Button_data).offset_0xa8,
     *(char *)((int)&(this->Button_data).offset_0xc8 + 1) == '\0')) {
    puVar1 = &(this->Button_data).offset_0x48;
  }
  FUN_00636810(puVar1,0);
  return;
}


/* plasma::Button::vfunction28_for_NamedObject @ 00665b60  kind=game  attributed-by=rtti  size=106 */

/* plasma::Button member function inherited by plasma::PopUpButton
   plasma::Button member function inherited by plasma::ScrollSlider */

void __thiscall plasma::Button::vfunction28_for_NamedObject(Button *this)

{
  int iVar1;
  
  if ((*(char *)&(this->Button_data).offset_0xc8 != '\0') &&
     (this->field197_0x230 =
           (Button_vftable_for_NamedObject *)
           ((int)&this->field197_0x230->deleting_destructor_for_NamedObject +
           *(int *)((this->Object_data).offset_0x0 + 0xe4)),
     this->field198_0x234 < (int)this->field197_0x230)) {
    do {
      FUN_00653620(this->offset_0x13c,0x15);
      iVar1 = this->field198_0x234;
      this->field197_0x230 = (Button_vftable_for_NamedObject *)((int)this->field197_0x230 - iVar1);
      if (0x32 < iVar1) {
        this->field198_0x234 = iVar1 + -10;
      }
    } while (this->field198_0x234 < (int)this->field197_0x230);
  }
  return;
}


