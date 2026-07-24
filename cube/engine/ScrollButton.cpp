// ScrollButton (engine) -- cube. 6 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "ScrollButton.h"

/* plasma::ScrollButton::ScrollButton @ 0067d450  kind=game  attributed-by=rtti  size=72 */

ScrollButton * __thiscall
plasma::ScrollButton::ScrollButton(ScrollButton *this,int param_1,int param_2,undefined4 param_3)

{
  Button::Button((Button *)this,param_1,param_2,0,param_3);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  this->field205_0x238 = 0;
  *(undefined4 *)&this->field_0x23c = 0x41200000;
  this->field210_0x240 = (int *)0x0;
  return this;
}


/* plasma::ScrollButton::deleting_destructor @ 0067d4a0  kind=game  attributed-by=rtti  size=43 */

ScrollButton * __thiscall plasma::ScrollButton::deleting_destructor(ScrollButton *this,byte param_1)

{
                    /* inlined destructor: plasma::ScrollButton::~ScrollButton */
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  Button::~Button((Button *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::ScrollButton::vfunction41 @ 0067d4d0  kind=game  attributed-by=rtti  size=170 */

Button * __thiscall plasma::ScrollButton::vfunction41(ScrollButton *this,int param_1)

{
  Button *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7dcb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = operator_new(0x24c);
  local_8 = 0;
  if (this_00 != (Button *)0x0) {
    Button::Button(this_00,(int)this,param_1);
    this_00->vftablePtr = (Button_vftable_for_NamedObject *)&vftable;
    this_00->vftablePtr = (Button_vftable_for_Deformer *)&vftable;
    this_00[1].vftablePtr = (Button_vftable_for_NamedObject *)this->field205_0x238;
    this_00[1].Object_data.offset_0x0 = *(int *)&this->field_0x23c;
    this_00[1].Object_data.offset_0x4 = this->field210_0x240;
    ExceptionList = local_10;
    return this_00;
  }
  ExceptionList = local_10;
  return (Button *)0x0;
}


/* plasma::ScrollButton::vfunction8 @ 0067d580  kind=game  attributed-by=rtti  size=67 */

void __thiscall plasma::ScrollButton::vfunction8(ScrollButton *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  Button::vfunction8_for_NamedObject((Button *)this);
  iVar1 = FUN_0062b400();
  if (iVar1 == 0) {
    this->field210_0x240 = (int *)0x0;
    return;
  }
  piVar2 = (int *)FUN_0067d8e0(iVar1);
  if (piVar2 == (int *)0x0) {
    uVar3 = FUN_0062b400();
    piVar2 = (int *)FUN_0067d8a0(uVar3);
  }
  this->field210_0x240 = piVar2;
  return;
}


/* plasma::ScrollButton::vfunction12 @ 0067d5d0  kind=game  attributed-by=rtti  size=121 */

void __thiscall plasma::ScrollButton::vfunction12(ScrollButton *this)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  Button::vfunction12_for_NamedObject((Button *)this);
  if (this->field210_0x240 == (int *)0x0) {
    return;
  }
  switch(this->field205_0x238) {
  case 0:
    uVar4 = 1;
    fVar1 = (float10)FUN_0062f660(1);
    fVar2 = (float)fVar1 + 20.0;
    goto LAB_0067d617;
  case 1:
    uVar4 = 1;
    fVar1 = (float10)FUN_0062f660(1);
    fVar2 = (float)fVar1 - 20.0;
LAB_0067d617:
    fVar1 = (float10)FUN_0062f630(fVar2);
    fVar3 = (float)fVar1;
    break;
  case 2:
    uVar4 = 1;
    fVar1 = (float10)FUN_0062f660(1);
    fVar2 = (float)fVar1;
    fVar1 = (float10)FUN_0062f630(fVar2);
    fVar3 = (float)fVar1 + 20.0;
    break;
  case 3:
    uVar4 = 1;
    fVar1 = (float10)FUN_0062f660(1);
    fVar2 = (float)fVar1;
    fVar1 = (float10)FUN_0062f630(fVar2);
    fVar3 = (float)fVar1 - 20.0;
    break;
  default:
    goto LAB_0067d6a6;
  }
  FUN_0062a650(fVar3,fVar2,uVar4);
LAB_0067d6a6:
  FUN_006278a0();
  FUN_0062f5d0();
  this->field211_0x244 = (ScrollButton_vftable0 *)0x0;
  (**(code **)(*this->field210_0x240 + 0xa8))();
  FUN_00653620(this->field210_0x240[0x52],0x11);
  return;
}


/* plasma::ScrollButton::vfunction28 @ 0067d700  kind=game  attributed-by=rtti  size=394 */

void __thiscall plasma::ScrollButton::vfunction28(ScrollButton *this)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  if (this->field210_0x240 == (int *)0x0) {
    return;
  }
  if (*(char *)&(this->Button_data).offset_0xc8 == '\0') {
    return;
  }
  switch(this->field205_0x238) {
  case 0:
    uVar5 = 1;
    iVar1 = *(int *)((this->Object_data).offset_0x0 + 0xe4);
    fVar2 = (float10)FUN_0062f660(1);
    fVar3 = (float)fVar2 + (float)(iVar1 * 0x14) * 0.01;
    goto LAB_0067d76a;
  case 1:
    uVar5 = 1;
    iVar1 = *(int *)((this->Object_data).offset_0x0 + 0xe4);
    fVar2 = (float10)FUN_0062f660(1);
    fVar3 = (float)fVar2 - (float)(iVar1 * 0x14) * 0.01;
LAB_0067d76a:
    fVar2 = (float10)FUN_0062f630(fVar3);
    fVar4 = (float)fVar2;
    break;
  case 2:
    uVar5 = 1;
    iVar1 = *(int *)((this->Object_data).offset_0x0 + 0xe4);
    fVar2 = (float10)FUN_0062f660(1);
    fVar3 = (float)fVar2;
    fVar2 = (float10)FUN_0062f630(fVar3);
    fVar4 = (float)fVar2 + (float)(iVar1 * 0x14) * 0.01;
    break;
  case 3:
    uVar5 = 1;
    iVar1 = *(int *)((this->Object_data).offset_0x0 + 0xe4);
    fVar2 = (float10)FUN_0062f660(1);
    fVar3 = (float)fVar2;
    fVar2 = (float10)FUN_0062f630(fVar3);
    fVar4 = (float)fVar2 - (float)(iVar1 * 0x14) * 0.01;
    break;
  default:
    goto switchD_0067d732_default;
  }
  FUN_0062a650(fVar4,fVar3,uVar5);
switchD_0067d732_default:
  FUN_006278a0();
  FUN_0062f5d0();
  (**(code **)(*this->field210_0x240 + 0xa8))();
  FUN_00653620(this->field210_0x240[0x52],0x11);
  return;
}


