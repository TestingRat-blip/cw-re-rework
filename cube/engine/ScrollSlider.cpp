// ScrollSlider (engine) -- cube. 7 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "ScrollSlider.h"

/* plasma::ScrollSlider::ScrollSlider @ 006627f0  kind=game  attributed-by=rtti  size=62 */

ScrollSlider * __thiscall
plasma::ScrollSlider::ScrollSlider(ScrollSlider *this,int param_1,int param_2,undefined4 param_3)

{
  Button::Button((Button *)this,param_1,param_2,0,param_3);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  this->field193_0x238 = 0;
  this->field198_0x24c = (int *)0x0;
  return this;
}


/* plasma::ScrollSlider::deleting_destructor @ 00662830  kind=game  attributed-by=rtti  size=43 */

ScrollSlider * __thiscall plasma::ScrollSlider::deleting_destructor(ScrollSlider *this,byte param_1)

{
                    /* inlined destructor: plasma::ScrollSlider::~ScrollSlider */
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  Button::~Button((Button *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::ScrollSlider::vfunction41 @ 00662a00  kind=game  attributed-by=rtti  size=156 */

Button * __thiscall plasma::ScrollSlider::vfunction41(ScrollSlider *this,int param_1)

{
  Button *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7dcb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = operator_new(0x254);
  local_8 = 0;
  if (this_00 != (Button *)0x0) {
    Button::Button(this_00,(int)this,param_1);
    this_00->vftablePtr = (Button_vftable_for_NamedObject *)&vftable;
    this_00->vftablePtr = (Button_vftable_for_Deformer *)&vftable;
    this_00[1].vftablePtr = (Button_vftable_for_NamedObject *)this->field193_0x238;
    *(undefined4 *)&this_00[1].field_0x14 = 0;
    ExceptionList = local_10;
    return this_00;
  }
  ExceptionList = local_10;
  return (Button *)0x0;
}


/* plasma::ScrollSlider::vfunction8 @ 00662aa0  kind=game  attributed-by=rtti  size=99 */

void __thiscall plasma::ScrollSlider::vfunction8(ScrollSlider *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  Button::vfunction8_for_NamedObject((Button *)this);
  iVar1 = FUN_0062b400();
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00662e10(iVar1);
    if (piVar2 == (int *)0x0) {
      uVar3 = FUN_0062b400();
      piVar2 = (int *)FUN_00662dd0(uVar3);
    }
  }
  this->field198_0x24c = piVar2;
  if (piVar2 != (int *)0x0) {
    if (this->field193_0x238 == 0) {
      FUN_0062de40();
      FUN_00662860();
      return;
    }
    FUN_0062ddf0(this);
  }
  FUN_00662860();
  return;
}


/* plasma::ScrollSlider::vfunction12 @ 00662b10  kind=game  attributed-by=rtti  size=100 */

void __thiscall plasma::ScrollSlider::vfunction12(ScrollSlider *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  Button::vfunction12_for_NamedObject((Button *)this);
  puVar2 = (undefined4 *)FUN_00631db0(local_10,1);
  uVar1 = *puVar2;
  this->field194_0x23c = uVar1;
  this->field195_0x240 = puVar2[1];
  this->field196_0x244 = uVar1;
  this->field197_0x248 = this->field195_0x240;
  FUN_00662860();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::ScrollSlider::vfunction22 @ 00662b80  kind=game  attributed-by=rtti  size=557 */

void __thiscall plasma::ScrollSlider::vfunction22(ScrollSlider *this)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  undefined1 *puVar8;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [4];
  float local_1c;
  float local_18 [4];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  Widget::vfunction22_for_NamedObject((Widget *)this);
  iVar2 = FUN_0062b400();
  if ((iVar2 != 0) && ((*(byte *)((this->Object_data).offset_0x0 + 0xf4) & 1) != 0)) {
    uVar6 = (uint)(this->field193_0x238 != 1);
    pfVar7 = local_18 + 2;
    FUN_0062b400(pfVar7);
    iVar2 = FUN_0062de60(pfVar7);
    iVar3 = FUN_0062de60(local_20);
    local_1c = *(float *)(iVar2 + uVar6 * 4) - *(float *)(iVar3 + uVar6 * 4);
    FUN_0062b510(local_18);
    iVar2 = (this->Object_data).offset_0x0;
    local_18[2] = *(float *)(iVar2 + 0xd4) - *(float *)(iVar2 + 0xdc);
    local_18[3] = *(float *)(iVar2 + 0xd8) - *(float *)(iVar2 + 0xe0);
    local_18[uVar6] = local_18[uVar6 + 2] + local_18[uVar6];
    if (local_18[uVar6] <= 0.0 && local_18[uVar6] != 0.0) {
      local_18[uVar6] = 0.0;
    }
    if (local_1c < local_18[uVar6]) {
      local_18[uVar6] = local_1c;
    }
    FUN_006295a0(local_18,1);
    if ((this->field198_0x24c != (int *)0x0) && (iVar2 = FUN_0062b400(), iVar2 != 0)) {
      iVar2 = FUN_0062de60(local_18 + 2);
      puVar8 = local_20;
      FUN_0062b400(puVar8);
      iVar3 = FUN_0062de60(puVar8);
      fVar1 = *(float *)(iVar3 + uVar6 * 4);
      pfVar7 = (float *)(iVar2 + uVar6 * 4);
      if (*pfVar7 <= fVar1 && fVar1 != *pfVar7) {
        FUN_0062b510(local_18 + 2);
        local_1c = (float)FUN_0062b510(local_28);
        puVar8 = local_30;
        FUN_0062b400(puVar8);
        iVar2 = FUN_0062de60(puVar8);
        iVar3 = FUN_0062de60(local_38);
        puVar8 = local_40;
        FUN_0062b400(puVar8);
        iVar4 = FUN_0062de60(puVar8);
        iVar5 = FUN_0062de60(local_48);
        local_18[uVar6 + 2] =
             (*(float *)((int)local_1c + uVar6 * 4) /
             (*(float *)(iVar2 + uVar6 * 4) - *(float *)(iVar3 + uVar6 * 4))) *
             (*(float *)(iVar4 + uVar6 * 4) - *(float *)(iVar5 + uVar6 * 4));
        FUN_006295a0(local_18 + 2,1);
      }
      FUN_006278a0();
      (**(code **)(*this->field198_0x24c + 0xa8))();
      FUN_00653620(this->field198_0x24c[0x52],0x11);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::ScrollSlider::vfunction10 @ 00662db0  kind=game  attributed-by=rtti  size=29 */

void __thiscall plasma::ScrollSlider::vfunction10(ScrollSlider *this,float *param_1,float *param_2)

{
  Widget::vfunction10_for_NamedObject((Widget *)this,param_1,param_2);
  FUN_00662860();
  return;
}


