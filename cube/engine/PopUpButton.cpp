// PopUpButton (engine) -- cube. 7 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "PopUpButton.h"

/* plasma::PopUpButton::PopUpButton @ 0067dae0  kind=game  attributed-by=rtti  size=59 */

PopUpButton * __thiscall
plasma::PopUpButton::PopUpButton(PopUpButton *this,int param_1,int param_2,undefined4 param_3)

{
  Button::Button((Button *)this,param_1,param_2,0,param_3);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->PopUpButton_data).offset_0x8 = 0;
  (this->PopUpButton_data).offset_0xc = 1;
  return this;
}


/* plasma::PopUpButton::deleting_destructor @ 0067db20  kind=game  attributed-by=rtti  size=43 */

PopUpButton * __thiscall plasma::PopUpButton::deleting_destructor(PopUpButton *this,byte param_1)

{
                    /* inlined destructor: plasma::PopUpButton::~PopUpButton */
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  Button::~Button((Button *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::PopUpButton::vfunction41 @ 0067db50  kind=game  attributed-by=rtti  size=156 */

Button * __thiscall plasma::PopUpButton::vfunction41(PopUpButton *this,int param_1)

{
  Button *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7dcb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = operator_new(0x240);
  local_8 = 0;
  if (this_00 != (Button *)0x0) {
    Button::Button(this_00,(int)this,param_1);
    this_00->vftablePtr = (Button_vftable_for_NamedObject *)&vftable;
    this_00->vftablePtr = (Button_vftable_for_Deformer *)&vftable;
    this_00[1].vftablePtr = (Button_vftable_for_NamedObject *)0x0;
    *(undefined1 *)&this_00[1].Object_data.offset_0x0 = (this->PopUpButton_data).offset_0xc;
    ExceptionList = local_10;
    return this_00;
  }
  ExceptionList = local_10;
  return (Button *)0x0;
}


/* plasma::PopUpButton::vfunction31 @ 0067dd70  kind=game  attributed-by=rtti  size=162 */

void __thiscall plasma::PopUpButton::vfunction31(PopUpButton *this)

{
  int iVar1;
  char cVar2;
  
  cube::Controller::vfunction12();
  cVar2 = *(char *)((int)&(this->Button_data).offset_0xc8 + 1);
  if ((cVar2 != '\0') && (iVar1 = (this->PopUpButton_data).offset_0x8, iVar1 != 0)) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x148) + 0x3c);
    if ((*(int *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) != 0) != (bool)cVar2) {
      FUN_006653a0(*(int *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) != 0,0);
    }
  }
  if ((((this->PopUpButton_data).offset_0x8 != 0) && ((this->PopUpButton_data).offset_0xc != '\0'))
     && (iVar1 = *(int *)((this->Object_data).offset_0x0 + 0xfc), iVar1 != 0)) {
    cVar2 = FUN_006326a0(*(undefined4 *)(iVar1 + 0x148));
    if (cVar2 != '\0') {
      FUN_0062ddc0(*(int *)((this->Object_data).offset_0x0 + 0xfc) + 0x80,1);
    }
  }
  return;
}


/* plasma::PopUpButton::vfunction8 @ 0067de20  kind=game  attributed-by=rtti  size=52 */

void __thiscall plasma::PopUpButton::vfunction8(PopUpButton *this)

{
  int iVar1;
  
  Button::vfunction8_for_NamedObject((Button *)this);
  iVar1 = FUN_0067dbf0();
  (this->PopUpButton_data).offset_0x8 = iVar1;
  if (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x148) + 0x3c);
    *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 0;
  }
  return;
}


/* plasma::PopUpButton::vfunction12 @ 0067de60  kind=game  attributed-by=rtti  size=39 */

void __thiscall plasma::PopUpButton::vfunction12(PopUpButton *this)

{
  int iVar1;
  
  Button::vfunction12_for_NamedObject((Button *)this);
  if ((*(char *)((int)&(this->Button_data).offset_0xc8 + 1) != '\0') &&
     (iVar1 = (this->PopUpButton_data).offset_0x8, iVar1 != 0)) {
    FUN_00653360(iVar1,this);
  }
  return;
}


/* plasma::PopUpButton::vfunction13 @ 0067de90  kind=game  attributed-by=rtti  size=35 */

void __thiscall plasma::PopUpButton::vfunction13(PopUpButton *this)

{
  Button::vfunction13_for_NamedObject((Button *)this);
  if (*(char *)((int)&(this->Button_data).offset_0xc8 + 1) != '\0') {
    FUN_00653360((this->PopUpButton_data).offset_0x8,0);
  }
  return;
}


