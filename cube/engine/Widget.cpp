// Widget (engine) -- cube. 19 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Widget.h"

/* plasma::Widget::vfunction5_for_NamedObject @ 00411330  kind=game  attributed-by=rtti  size=3 */

/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by plasma::Edit
   plasma::Widget member function inherited by plasma::Button
   plasma::Widget member function inherited by plasma::ScrollButton
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by plasma::PopUpButton
   plasma::Widget member function inherited by cube::AdaptionWidget
   plasma::Widget member function inherited by plasma::ScrollSlider */

undefined1 __thiscall plasma::Widget::vfunction5_for_NamedObject(void)

{
  return 0;
}


/* plasma::Widget::Widget @ 00627260  kind=game  attributed-by=rtti  size=487 */

Widget * __thiscall plasma::Widget::Widget(Widget *this,int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f558c;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* inlined constructor: plasma::NamedObject::NamedObject */
  Object::Object((Object *)this,param_1);
  this->vftablePtr = (Widget_vftable_for_NamedObject *)&NamedObject::vftable;
  this->offset_0x14 = 7;
  this->offset_0x10 = 0;
  local_8 = 0;
  this->offset_0x0 = 0;
  FUN_0040f680(param_3,0,0xffffffff);
                    /* inlined constructor: plasma::Deformer::Deformer */
  this->vftablePtr = (Widget_vftable_for_Deformer *)&Deformer::vftable;
  this->vftablePtr = &vftable_for_NamedObject;
  this->vftablePtr = &vftable_for_Deformer;
  this->offset_0x1c = 1.0;
  this->offset_0x20 = 0.0;
  this->offset_0x24 = 0.0;
  this->offset_0x28 = (void *)0x1;
  this->offset_0x2c = 0.0;
  this->offset_0x30 = 0.0;
  this->offset_0x34 = 0.0;
  this->offset_0x38 = 0.0;
  this->offset_0x3c = 0.0;
  this->offset_0x40 = 0.0;
  this->offset_0x44 = 1.0;
  this->offset_0x48 = 1.0;
  this->offset_0x4c = 0.0;
  this->offset_0x50 = 0.0;
  this->offset_0x54 = 1.0;
  this->offset_0x58 = 1.0;
  this->offset_0x5c = 0.0;
  this->offset_0x60 = 0.0;
  this->offset_0x64 = 1.0;
  this->offset_0x68 = 1.0;
  this->offset_0x6c = 0.0;
  this->offset_0x70 = 0.0;
  this->offset_0x88 = 7;
  this->offset_0x84 = 0;
  this->offset_0x74 = 0;
  this->offset_0x11c = 0;
  this->offset_0x120 = 0;
  this->offset_0x124 = 0;
  this->offset_0x128 = 0;
  this->offset_0x134 = 0;
  this->offset_0x138 = 0;
  this->offset_0x13c = param_2;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  this->offset_0x144 = (void *)0x0;
  this->offset_0x148 = 0;
  pvVar2 = (void *)FUN_0043c870(uVar1);
  this->offset_0x144 = pvVar2;
  this->offset_0x14c = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  this->offset_0x150 = '\x01';
  FUN_00423e70();
  FUN_00423e70();
  puVar3 = (undefined4 *)FUN_0064ed40(&param_3,this);
  this->offset_0x14c = *puVar3;
  if (param_2 != 0) {
    *(Widget **)(param_2 + 0x40) = this;
  }
  ExceptionList = local_10;
  return this;
}


/* plasma::Widget::Widget @ 00627450  kind=game  attributed-by=rtti  size=543 */

Widget * __thiscall plasma::Widget::Widget(Widget *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f55dc;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* inlined constructor: plasma::NamedObject::NamedObject */
  Object::Object((Object *)this,*(int *)(param_1 + 4));
  this->vftablePtr = (Widget_vftable_for_NamedObject *)&NamedObject::vftable;
  this->offset_0x14 = 7;
  this->offset_0x10 = 0;
  this->offset_0x0 = 0;
  local_8 = 0;
  FUN_0040f680(iVar1 + 0xc,0,0xffffffff);
                    /* inlined constructor: plasma::Deformer::Deformer */
  this->vftablePtr = (Widget_vftable_for_Deformer *)&Deformer::vftable;
  this->vftablePtr = &vftable_for_NamedObject;
  this->vftablePtr = &vftable_for_Deformer;
  this->offset_0x1c = *(float *)(iVar1 + 0x28);
  this->offset_0x20 = *(float *)(iVar1 + 0x2c);
  this->offset_0x24 = *(float *)(iVar1 + 0x30);
  this->offset_0x28 = *(void **)(iVar1 + 0x34);
  this->offset_0x30 = 0.0;
  this->offset_0x3c = *(float *)(iVar1 + 0x48);
  this->offset_0x40 = *(float *)(iVar1 + 0x4c);
  this->offset_0x44 = *(float *)(iVar1 + 0x50);
  this->offset_0x48 = *(float *)(iVar1 + 0x54);
  this->offset_0x4c = *(float *)(iVar1 + 0x58);
  this->offset_0x50 = *(float *)(iVar1 + 0x5c);
  this->offset_0x54 = *(float *)(iVar1 + 0x60);
  this->offset_0x58 = *(float *)(iVar1 + 100);
  this->offset_0x5c = *(float *)(iVar1 + 0x68);
  this->offset_0x60 = *(float *)(iVar1 + 0x6c);
  this->offset_0x64 = *(float *)(iVar1 + 0x70);
  this->offset_0x68 = *(float *)(iVar1 + 0x74);
  this->offset_0x6c = *(float *)(iVar1 + 0x78);
  this->offset_0x70 = *(float *)(iVar1 + 0x7c);
  this->offset_0x88 = 7;
  this->offset_0x84 = 0;
  this->offset_0x74 = 0;
  local_8 = 1;
  FUN_0040f680(iVar1 + 0x80,0,0xffffffff);
  puVar4 = (undefined4 *)(iVar1 + 0xa8);
  puVar6 = &this->offset_0x9c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = (undefined4 *)(iVar1 + 0xe8);
  puVar6 = &this->offset_0xdc;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  local_8._0_1_ = 2;
  this->offset_0x11c = *(uint *)(iVar1 + 0x128);
  this->offset_0x120 = *(undefined4 *)(iVar1 + 300);
  this->offset_0x124 = *(undefined4 *)(iVar1 + 0x130);
  this->offset_0x128 = 0;
  this->offset_0x12c = *(int *)(iVar1 + 0x138);
  this->offset_0x130 = *(int *)(iVar1 + 0x13c);
  this->offset_0x134 = 0;
  this->offset_0x138 = 0;
  this->offset_0x13c = param_2;
  this->offset_0x144 = (void *)0x0;
  this->offset_0x148 = 0;
  pvVar3 = (void *)FUN_0043c870(uVar2);
  this->offset_0x144 = pvVar3;
  this->offset_0x14c = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  puVar4 = (undefined4 *)FUN_0064ed40(&param_1,this);
  this->offset_0x14c = *puVar4;
  this->offset_0x150 = *(char *)(iVar1 + 0x15c);
  if (param_2 != 0) {
    *(Widget **)(param_2 + 0x40) = this;
  }
  ExceptionList = local_10;
  return this;
}


/* plasma::Widget::~Widget @ 006276a0  kind=game  attributed-by=rtti  size=227 */

void __thiscall plasma::Widget::~Widget(Widget *this)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_18 [4];
  Widget *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f5624;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable_for_NamedObject;
  this->vftablePtr = &vftable_for_Deformer;
  local_8 = 2;
  piVar4 = *(int **)this->offset_0x144;
  local_14 = this;
  if (piVar4 != this->offset_0x144) {
    do {
      if ((void *)piVar4[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)piVar4[5]);
      }
      if (*(char *)((int)piVar4 + 0xd) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0xd);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0xd);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != this->offset_0x144);
  }
  if (this->offset_0x30 != 0.0) {
    FUN_006504c0(this->offset_0x30);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0067eb10(local_18,*(undefined4 *)this->offset_0x144,this->offset_0x144);
                    /* WARNING: Subroutine does not return */
  operator_delete(this->offset_0x144);
}


/* plasma::Widget::clone_for_NamedObject @ 00627dc0  kind=game  attributed-by=rtti  size=114 */

/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by cube::AdaptionWidget */

Widget * __thiscall plasma::Widget::clone_for_NamedObject(Widget *this,int param_1)

{
  Widget *pWVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pWVar1 = operator_new(0x160);
  local_8 = 0;
  if (pWVar1 != (Widget *)0x0) {
    pWVar1 = Widget(pWVar1,(int)this,param_1);
    ExceptionList = local_10;
    return pWVar1;
  }
  ExceptionList = local_10;
  return (Widget *)0x0;
}


/* plasma::Widget::vfunction1_for_Deformer @ 00627e40  kind=game  attributed-by=rtti  size=4333 */

/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by plasma::Edit
   plasma::Widget member function inherited by plasma::Button
   plasma::Widget member function inherited by plasma::ScrollButton
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by plasma::PopUpButton
   plasma::Widget member function inherited by cube::AdaptionWidget
   plasma::Widget member function inherited by plasma::ScrollSlider */

void __thiscall
plasma::Widget::vfunction1_for_Deformer(Widget *this,float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  int iVar24;
  float *pfVar25;
  float *pfVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  Widget_vftable_for_Deformer *pWVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  Widget_vftable_for_Deformer *local_cc;
  float local_c8;
  float local_a0 [5];
  float local_8c;
  float local_84;
  float local_7c;
  float local_74;
  float local_6c;
  float local_64;
  float local_60 [8];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  Widget_vftable_for_Deformer *local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  fVar27 = ((float)this->vftablePtr + this->offset_0x38) - (float)this->offset_0x28;
  fVar48 = (this->offset_0x1c + this->offset_0x3c) - this->offset_0x2c;
  pWVar56 = (Widget_vftable_for_Deformer *)
            ((this->offset_0x20 + this->offset_0x48) - this->offset_0x30);
  local_10 = (Widget_vftable_for_Deformer *)
             ((this->offset_0x20 + this->offset_0x40) - this->offset_0x30);
  local_c = (this->offset_0x24 + this->offset_0x44) - this->offset_0x34;
  local_60[2] = fVar27;
  fVar55 = (this->offset_0x24 + this->offset_0x4c) - this->offset_0x34;
  local_60[3] = fVar48;
  if ((float)pWVar56 < 0.0) {
    pWVar56 = (Widget_vftable_for_Deformer *)0x0;
  }
  local_cc = local_10;
  if ((float)local_10 < (float)pWVar56) {
    local_10 = pWVar56;
    local_cc = pWVar56;
  }
  if (fVar55 < 0.0) {
    fVar55 = 0.0;
  }
  local_c8 = local_c;
  if (local_c < fVar55) {
    local_c = fVar55;
    local_c8 = fVar55;
  }
  fVar55 = this->offset_0x20;
  local_60[0] = fVar55;
  local_60[1] = this->offset_0x24;
  iVar23 = 0;
  do {
    local_10 = local_cc;
    if (*(float *)((int)&local_10 + iVar23) != *(float *)((int)local_60 + iVar23))
    goto LAB_00627fb9;
    iVar23 = iVar23 + 4;
  } while (iVar23 < 8);
  local_10 = this->vftablePtr;
  local_c = this->offset_0x1c;
  iVar23 = 0;
  while (*(float *)((int)local_60 + iVar23 + 8) == *(float *)((int)&local_10 + iVar23)) {
    iVar23 = iVar23 + 4;
    if (7 < iVar23) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
LAB_00627fb9:
  iVar23 = this->field137_0x124;
  fVar28 = *(float *)(iVar23 + 0x88);
  fVar57 = *(float *)(iVar23 + 0x8c);
  pfVar25 = &this->field46_0x84;
  pfVar26 = local_60 + 4;
  for (iVar24 = 0x10; fVar9 = local_28, fVar8 = local_2c, fVar7 = local_30, fVar6 = local_38,
      fVar5 = local_3c, fVar4 = local_40, fVar3 = local_60[6], fVar47 = local_60[5],
      fVar60 = local_60[4], iVar24 != 0; iVar24 = iVar24 + -1) {
    *pfVar26 = *pfVar25;
    pfVar25 = pfVar25 + 1;
    pfVar26 = pfVar26 + 1;
  }
  fVar1 = *(float *)(iVar23 + 0xc0);
  fVar2 = *(float *)(iVar23 + 0xc4);
  fVar57 = fVar28 * local_60[4] + fVar57 * local_40 + *(float *)(iVar23 + 0x90) * local_30 +
           *(float *)(iVar23 + 0x94) * local_20;
  local_60[4] = fVar57;
  fVar58 = *(float *)(iVar23 + 0x98) * fVar60 + *(float *)(iVar23 + 0x9c) * local_40 +
           *(float *)(iVar23 + 0xa0) * local_30 + *(float *)(iVar23 + 0xa4) * local_20;
  fVar28 = *(float *)(iVar23 + 0xac) * local_40;
  local_40 = fVar58;
  fVar59 = *(float *)(iVar23 + 0xa8) * fVar60 + fVar28 + *(float *)(iVar23 + 0xb0) * local_30 +
           *(float *)(iVar23 + 0xb4) * local_20;
  local_30 = fVar59;
  fVar60 = *(float *)(iVar23 + 0xb8) * fVar60 + *(float *)(iVar23 + 0xbc) * fVar4 + fVar1 * fVar7 +
           fVar2 * local_20;
  local_20 = fVar60;
  local_60[5] = *(float *)(iVar23 + 0x88) * local_60[5] + *(float *)(iVar23 + 0x8c) * local_3c +
                *(float *)(iVar23 + 0x90) * local_2c + *(float *)(iVar23 + 0x94) * local_1c;
  fVar28 = *(float *)(iVar23 + 0xac) * local_3c;
  local_3c = *(float *)(iVar23 + 0x98) * fVar47 + *(float *)(iVar23 + 0x9c) * local_3c +
             *(float *)(iVar23 + 0xa0) * local_2c + *(float *)(iVar23 + 0xa4) * local_1c;
  local_2c = *(float *)(iVar23 + 0xa8) * fVar47 + fVar28 + *(float *)(iVar23 + 0xb0) * local_2c +
             *(float *)(iVar23 + 0xb4) * local_1c;
  local_1c = *(float *)(iVar23 + 0xb8) * fVar47 + *(float *)(iVar23 + 0xbc) * fVar5 + fVar1 * fVar8
             + fVar2 * local_1c;
  local_60[6] = *(float *)(iVar23 + 0x88) * local_60[6] + *(float *)(iVar23 + 0x8c) * local_38 +
                *(float *)(iVar23 + 0x90) * local_28 + *(float *)(iVar23 + 0x94) * local_18;
  fVar28 = *(float *)(iVar23 + 0xac) * local_38;
  local_38 = *(float *)(iVar23 + 0x98) * fVar3 + *(float *)(iVar23 + 0x9c) * local_38 +
             *(float *)(iVar23 + 0xa0) * local_28 + *(float *)(iVar23 + 0xa4) * local_18;
  local_28 = *(float *)(iVar23 + 0xa8) * fVar3 + fVar28 + *(float *)(iVar23 + 0xb0) * local_28 +
             *(float *)(iVar23 + 0xb4) * local_18;
  local_18 = *(float *)(iVar23 + 0xb8) * fVar3 + *(float *)(iVar23 + 0xbc) * fVar6 + fVar1 * fVar9 +
             fVar2 * local_18;
  local_60[7] = local_60[7] * *(float *)(iVar23 + 0x88) + local_34 * *(float *)(iVar23 + 0x8c) +
                local_24 * *(float *)(iVar23 + 0x90) + local_14 * *(float *)(iVar23 + 0x94);
  local_34 = *(float *)(iVar23 + 0x98) * local_60[7] + local_34 * *(float *)(iVar23 + 0x9c) +
             local_24 * *(float *)(iVar23 + 0xa0) + local_14 * *(float *)(iVar23 + 0xa4);
  local_24 = *(float *)(iVar23 + 0xa8) * local_60[7] + *(float *)(iVar23 + 0xac) * local_34 +
             local_24 * *(float *)(iVar23 + 0xb0) + local_14 * *(float *)(iVar23 + 0xb4);
  local_14 = *(float *)(iVar23 + 0xb8) * local_60[7] + *(float *)(iVar23 + 0xbc) * local_34 +
             fVar1 * local_24 + local_14 * fVar2;
  pfVar25 = local_60 + 4;
  pfVar26 = local_a0;
  for (iVar24 = 0x10; iVar24 != 0; iVar24 = iVar24 + -1) {
    *pfVar26 = *pfVar25;
    pfVar25 = pfVar25 + 1;
    pfVar26 = pfVar26 + 1;
  }
  fVar28 = *(float *)(param_3 + 0x4c);
  fVar47 = *(float *)(param_3 + 0x48);
  fVar3 = *(float *)(param_3 + 0x50);
  fVar4 = *(float *)(param_3 + 0x54);
  fVar5 = *(float *)(param_3 + 0x58);
  fVar6 = *(float *)(param_3 + 0x7c);
  fVar7 = *(float *)(param_3 + 0x5c);
  fVar8 = *(float *)(param_3 + 0x80);
  fVar9 = *(float *)(param_3 + 0x60);
  fVar1 = *(float *)(param_3 + 0x78);
  fVar2 = *(float *)(param_3 + 100);
  fVar10 = *(float *)(param_3 + 0x84);
  fVar29 = local_8c * *(float *)(param_3 + 0x4c);
  fVar64 = local_a0[1] * *(float *)(param_3 + 0x48);
  fVar30 = local_7c * *(float *)(param_3 + 0x50);
  fVar31 = local_6c * *(float *)(param_3 + 0x54);
  fVar32 = local_8c * *(float *)(param_3 + 0x5c);
  fVar53 = local_8c * *(float *)(param_3 + 0x7c);
  fVar33 = local_a0[1] * *(float *)(param_3 + 0x58);
  fVar34 = local_7c * *(float *)(param_3 + 0x60);
  fVar51 = local_7c * fVar8;
  fVar35 = local_6c * *(float *)(param_3 + 100);
  fVar49 = local_6c * fVar10;
  fVar36 = local_a0[1] * fVar1;
  fVar65 = local_a0[3] * *(float *)(param_3 + 0x48);
  fVar37 = local_84 * *(float *)(param_3 + 0x4c);
  fVar38 = local_74 * *(float *)(param_3 + 0x50);
  fVar39 = local_64 * *(float *)(param_3 + 0x54);
  fVar40 = local_84 * *(float *)(param_3 + 0x5c);
  fVar54 = local_84 * *(float *)(param_3 + 0x7c);
  fVar41 = local_a0[3] * *(float *)(param_3 + 0x58);
  fVar42 = local_74 * *(float *)(param_3 + 0x60);
  fVar52 = local_74 * fVar8;
  fVar43 = local_64 * *(float *)(param_3 + 100);
  fVar50 = local_64 * fVar10;
  fVar44 = local_a0[3] * fVar1;
  pfVar25 = (float *)(param_3 + 0x88);
  pfVar26 = local_60 + 4;
  for (iVar24 = 0x10; fVar20 = local_28, fVar19 = local_2c, fVar18 = local_30, fVar17 = local_34,
      fVar16 = local_38, fVar15 = local_3c, fVar63 = local_40, fVar14 = local_60[7],
      fVar13 = local_60[6], fVar66 = local_60[5], fVar46 = local_60[4], iVar24 != 0;
      iVar24 = iVar24 + -1) {
    *pfVar26 = *pfVar25;
    pfVar25 = pfVar25 + 1;
    pfVar26 = pfVar26 + 1;
  }
  fVar11 = *(float *)(iVar23 + 0x80);
  fVar12 = *(float *)(iVar23 + 0x84);
  fVar61 = local_60[4] * *(float *)(iVar23 + 0x48) + local_40 * *(float *)(iVar23 + 0x4c) +
           local_30 * *(float *)(iVar23 + 0x50) + local_20 * *(float *)(iVar23 + 0x54);
  local_60[4] = fVar61;
  fVar62 = *(float *)(iVar23 + 0x58) * fVar46 + local_40 * *(float *)(iVar23 + 0x5c) +
           local_30 * *(float *)(iVar23 + 0x60) + local_20 * *(float *)(iVar23 + 100);
  fVar45 = *(float *)(iVar23 + 0x6c) * local_40;
  local_40 = fVar62;
  fVar45 = *(float *)(iVar23 + 0x68) * fVar46 + fVar45 + local_30 * *(float *)(iVar23 + 0x70) +
           local_20 * *(float *)(iVar23 + 0x74);
  local_30 = fVar45;
  fVar63 = *(float *)(iVar23 + 0x78) * fVar46 + *(float *)(iVar23 + 0x7c) * fVar63 + fVar11 * fVar18
           + local_20 * fVar12;
  local_20 = fVar63;
  local_60[5] = local_60[5] * *(float *)(iVar23 + 0x48) + local_3c * *(float *)(iVar23 + 0x4c) +
                local_2c * *(float *)(iVar23 + 0x50) + local_1c * *(float *)(iVar23 + 0x54);
  fVar46 = *(float *)(iVar23 + 0x6c) * local_3c;
  local_3c = *(float *)(iVar23 + 0x58) * fVar66 + local_3c * *(float *)(iVar23 + 0x5c) +
             local_2c * *(float *)(iVar23 + 0x60) + local_1c * *(float *)(iVar23 + 100);
  local_2c = *(float *)(iVar23 + 0x68) * fVar66 + fVar46 + local_2c * *(float *)(iVar23 + 0x70) +
             local_1c * *(float *)(iVar23 + 0x74);
  local_1c = *(float *)(iVar23 + 0x78) * fVar66 + *(float *)(iVar23 + 0x7c) * fVar15 +
             fVar11 * fVar19 + local_1c * fVar12;
  local_60[6] = local_60[6] * *(float *)(iVar23 + 0x48) + local_38 * *(float *)(iVar23 + 0x4c) +
                local_28 * *(float *)(iVar23 + 0x50) + local_18 * *(float *)(iVar23 + 0x54);
  fVar46 = *(float *)(iVar23 + 0x6c) * local_38;
  local_38 = *(float *)(iVar23 + 0x58) * fVar13 + local_38 * *(float *)(iVar23 + 0x5c) +
             local_28 * *(float *)(iVar23 + 0x60) + local_18 * *(float *)(iVar23 + 100);
  local_28 = *(float *)(iVar23 + 0x68) * fVar13 + fVar46 + local_28 * *(float *)(iVar23 + 0x70) +
             local_18 * *(float *)(iVar23 + 0x74);
  fVar66 = fVar11 * local_24;
  local_18 = *(float *)(iVar23 + 0x78) * fVar13 + *(float *)(iVar23 + 0x7c) * fVar16 +
             fVar11 * fVar20 + local_18 * fVar12;
  local_60[7] = local_60[7] * *(float *)(iVar23 + 0x48) + local_34 * *(float *)(iVar23 + 0x4c) +
                local_24 * *(float *)(iVar23 + 0x50) + local_14 * *(float *)(iVar23 + 0x54);
  fVar46 = *(float *)(iVar23 + 0x6c) * local_34;
  local_34 = *(float *)(iVar23 + 0x58) * fVar14 + local_34 * *(float *)(iVar23 + 0x5c) +
             local_24 * *(float *)(iVar23 + 0x60) + local_14 * *(float *)(iVar23 + 100);
  local_24 = *(float *)(iVar23 + 0x68) * fVar14 + fVar46 + local_24 * *(float *)(iVar23 + 0x70) +
             local_14 * *(float *)(iVar23 + 0x74);
  fVar46 = this->offset_0xbc;
  local_14 = *(float *)(iVar23 + 0x78) * fVar14 + *(float *)(iVar23 + 0x7c) * fVar17 + fVar66 +
             local_14 * fVar12;
  fVar66 = this->field86_0xc4;
  pfVar25 = local_60 + 4;
  pfVar26 = local_a0;
  for (iVar23 = 0x10; iVar23 != 0; iVar23 = iVar23 + -1) {
    *pfVar26 = *pfVar25;
    pfVar25 = pfVar25 + 1;
    pfVar26 = pfVar26 + 1;
  }
  local_c = fVar61 * fVar66 + fVar62 * fVar46 + fVar45 * this->offset_0xc0 +
            fVar63 * this->offset_0xc4;
  fVar13 = this->field104_0x100;
  fVar14 = this->field102_0xf8;
  local_60[1] = fVar61 * this->offset_0xc8 + fVar62 * this->offset_0xcc + fVar45 * this->offset_0xd0
                + fVar63 * this->offset_0xd4;
  fVar15 = this->field103_0xfc;
  fVar16 = this->offset_0xc0;
  fVar17 = this->offset_0xc4;
  fVar18 = this->offset_0xc8;
  fVar19 = this->offset_0xcc;
  fVar20 = this->offset_0xd0;
  fVar11 = this->offset_0xd4;
  fVar12 = this->field101_0xf4;
  fVar21 = *param_2;
  local_60[3] = this->field101_0xf4 * local_a0[3] + fVar14 * local_84 + fVar15 * local_74 +
                local_64 * fVar13;
  fVar22 = param_2[1];
  fVar37 = 1.0 / (fVar21 * (fVar65 + fVar37 + fVar38 + fVar39) +
                  fVar22 * (fVar40 + fVar41 + fVar42 + fVar43) + fVar44 + fVar54 + fVar52 + fVar50);
  pWVar56 = this->vftablePtr;
  fVar28 = fVar37 * (fVar21 * (fVar57 * fVar47 + fVar58 * fVar28 + fVar59 * fVar3 + fVar60 * fVar4)
                     + fVar22 * (fVar5 * fVar57 + fVar58 * fVar7 + fVar9 * fVar59 + fVar2 * fVar60)
                    + fVar1 * fVar57 + fVar6 * fVar58 + fVar8 * fVar59 + fVar10 * fVar60);
  fVar37 = fVar37 * (fVar21 * (fVar64 + fVar29 + fVar30 + fVar31) +
                     fVar22 * (fVar32 + fVar33 + fVar34 + fVar35) +
                    fVar36 + fVar53 + fVar51 + fVar49);
  if ((float)pWVar56 <= fVar28) {
    fVar55 = this->offset_0x20;
    if ((float)pWVar56 + fVar55 <= fVar28) {
      fVar57 = 1.0;
    }
    else {
      fVar57 = (fVar28 - (float)pWVar56) / fVar55;
    }
  }
  else {
    fVar57 = 0.0;
  }
  fVar60 = this->offset_0x1c;
  if (fVar60 <= fVar37) {
    if (fVar60 + this->offset_0x24 <= fVar37) {
      fVar47 = 1.0;
    }
    else {
      fVar47 = (fVar37 - fVar60) / this->offset_0x24;
    }
  }
  else {
    fVar47 = 0.0;
  }
  fVar55 = ((fVar28 + fVar27) - (float)this->vftablePtr) + fVar57 * ((float)local_cc - fVar55);
  fVar27 = ((fVar37 + fVar48) - fVar60) + fVar47 * (local_c8 - this->offset_0x24);
  fVar48 = 1.0 / ((this->offset_0xc8 * local_a0[3] + local_84 * this->offset_0xcc +
                   this->offset_0xd0 * local_74 + local_64 * this->offset_0xd4) * fVar27 +
                  (local_a0[3] * this->field86_0xc4 + local_84 * this->offset_0xbc +
                   this->offset_0xc0 * local_74 + local_64 * this->offset_0xc4) * fVar55 +
                 local_60[3]);
  *param_1 = (local_60[1] * fVar27 + local_c * fVar55 +
             fVar61 * this->field101_0xf4 + fVar62 * fVar14 + fVar45 * fVar15 + fVar63 * fVar13) *
             fVar48;
  param_1[1] = ((fVar18 * local_a0[1] + local_8c * fVar19 + local_7c * fVar20 + local_6c * fVar11) *
                fVar27 + (local_a0[1] * fVar66 + local_8c * fVar46 + local_7c * fVar16 +
                         local_6c * fVar17) * fVar55 +
               fVar12 * local_a0[1] + fVar14 * local_8c + local_7c * fVar15 + local_6c * fVar13) *
               fVar48;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::Widget::vfunction42_for_NamedObject @ 00628f40  kind=game  attributed-by=rtti  size=370 */

/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by plasma::Edit
   plasma::Widget member function inherited by plasma::Button
   plasma::Widget member function inherited by plasma::ScrollButton
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by plasma::PopUpButton
   plasma::Widget member function inherited by cube::AdaptionWidget
   plasma::Widget member function inherited by plasma::ScrollSlider */

void __thiscall plasma::Widget::vfunction42_for_NamedObject(Widget *this,char param_1)

{
  undefined4 uVar1;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5660;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->offset_0x150 = param_1;
  if (param_1 == '\0') {
    FUN_0040eb60(L"widget:disable");
    local_8 = 2;
    FUN_00636810(local_2c,0);
    local_8 = 0xffffffff;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    FUN_0040eb60(L"widget:disable");
    local_8 = 3;
    uVar1 = FUN_00636f70(local_44);
    FUN_00636cb0(uVar1);
    local_8 = 0xffffffff;
    if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
    local_30 = 7;
    local_34 = 0;
    local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  }
  else {
    FUN_0040eb60(L"widget:enable");
    local_8 = 0;
    FUN_00636810(local_2c,0);
    local_8 = 0xffffffff;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    FUN_0040eb60(L"widget:enable");
    local_8 = 1;
    uVar1 = FUN_00636f70(local_2c);
    FUN_00636cb0(uVar1);
    local_8 = 0xffffffff;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
  }
  local_8 = 0xffffffff;
  FUN_00636f10();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::Widget::vfunction36_for_NamedObject @ 0062a690  kind=game  attributed-by=rtti  size=225 */

/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by plasma::Edit
   plasma::Widget member function inherited by plasma::Button
   plasma::Widget member function inherited by plasma::ScrollButton
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by plasma::PopUpButton
   plasma::Widget member function inherited by cube::AdaptionWidget
   plasma::Widget member function inherited by plasma::ScrollSlider */

void __thiscall plasma::Widget::vfunction36_for_NamedObject(Widget *this)

{
  int iVar1;
  char cVar2;
  float *pfVar3;
  int iVar4;
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((((this->offset_0x11c & 1) != 0) || ((this->offset_0x11c >> 1 & 1) != 0)) &&
     (iVar1 = *(int *)(this->offset_0x13c + 0x28), iVar4 = iVar1, iVar1 != 0)) {
    while (*(int *)(iVar4 + 0x40) == 0) {
      iVar4 = *(int *)(iVar4 + 0x28);
      if (iVar4 == 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x28)) {
      if (*(int *)(iVar1 + 0x40) != 0) {
        iVar4 = *(int *)(iVar1 + 0x40);
        goto LAB_0062a6ff;
      }
    }
    iVar4 = 0;
LAB_0062a6ff:
    cVar2 = FUN_00629300(*(undefined4 *)(iVar4 + 0x148));
    if (cVar2 != '\0') {
      FUN_0064efe0(this->offset_0x13c);
      pfVar3 = (float *)FUN_0062b430(local_10);
      this->field57_0x98 = *pfVar3;
      this->field58_0x9c = pfVar3[1];
      iVar4 = *(int *)(this->offset_0x13c + 0x38);
      iVar1 = *(int *)(iVar4 + 0x68);
      iVar4 = *(int *)(iVar4 + 0x94);
      this->field59_0xa0 = *(float *)(iVar4 + iVar1 * 8);
      this->field60_0xa4 = *(float *)(iVar4 + 4 + iVar1 * 8);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::Widget::vfunction37_for_NamedObject @ 0062a780  kind=game  attributed-by=rtti  size=46 */

/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by plasma::Edit
   plasma::Widget member function inherited by plasma::Button
   plasma::Widget member function inherited by plasma::ScrollButton
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by plasma::PopUpButton
   plasma::Widget member function inherited by cube::AdaptionWidget
   plasma::Widget member function inherited by plasma::ScrollSlider */

void __thiscall plasma::Widget::vfunction37_for_NamedObject(Widget *this)

{
  if ((((this->offset_0x11c & 1) != 0) || ((this->offset_0x11c >> 1 & 1) != 0)) &&
     (this->field1_0x4[0x32] == this->offset_0x13c)) {
    FUN_00659cf0();
    return;
  }
  return;
}


/* plasma::Widget::vfunction40_for_NamedObject @ 0062a7b0  kind=game  attributed-by=rtti  size=253 */

/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by plasma::Edit
   plasma::Widget member function inherited by plasma::Button
   plasma::Widget member function inherited by plasma::ScrollButton
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by plasma::PopUpButton
   plasma::Widget member function inherited by cube::AdaptionWidget
   plasma::Widget member function inherited by plasma::ScrollSlider */

void __thiscall plasma::Widget::vfunction40_for_NamedObject(Widget *this)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined4 local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (((this->offset_0x11c >> 1 & 1) != 0) &&
     (iVar2 = *(int *)(this->offset_0x13c + 0x28), iVar5 = iVar2, iVar2 != 0)) {
    while (*(int *)(iVar5 + 0x40) == 0) {
      iVar5 = *(int *)(iVar5 + 0x28);
      if (iVar5 == 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x28)) {
      if (*(int *)(iVar2 + 0x40) != 0) {
        iVar5 = *(int *)(iVar2 + 0x40);
        goto LAB_0062a819;
      }
    }
    iVar5 = 0;
LAB_0062a819:
    cVar3 = FUN_00629300(*(undefined4 *)(iVar5 + 0x148));
    if (cVar3 != '\0') {
      iVar5 = FUN_0062b510(local_18);
      fVar1 = *(float *)(iVar5 + 4);
      iVar5 = this->field1_0x4[0x40];
      puVar4 = (undefined4 *)FUN_0062b510(local_20);
      local_10 = *puVar4;
      local_c = (float)(iVar5 * 10) + fVar1;
      FUN_006295a0(&local_10,1);
      FUN_006278a0();
      FUN_00653620(this->offset_0x13c,0x11);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::Widget::vfunction8_for_NamedObject @ 0062a8b0  kind=game  attributed-by=rtti  size=293 */

/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by cube::AdaptionWidget */

void __thiscall plasma::Widget::vfunction8_for_NamedObject(Widget *this)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f56e0;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->offset_0x12c = this->field1_0x4[0x43];
  this->offset_0x130 = this->field1_0x4[0x44];
  this->offset_0x6c = this->offset_0x54 - this->offset_0x44;
  this->offset_0x70 = this->offset_0x58 - this->offset_0x48;
  local_14 = uVar1;
  if (this->offset_0x150 == '\0') {
    FUN_0040eb60(L"widget:disable");
    local_8 = 0;
    FUN_00636810(local_44,0);
    local_8 = 0xffffffff;
    if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
    FUN_0040eb60(L"widget:disable");
    local_8 = 1;
    uVar2 = FUN_00636f70(local_2c);
    FUN_00636cb0(uVar2);
    local_8 = 0xffffffff;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  }
  local_8 = 0xffffffff;
  FUN_0062b920(uVar1);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::Widget::vfunction12_for_NamedObject @ 0062a9e0  kind=game  attributed-by=rtti  size=500 */

/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by cube::AdaptionWidget */

void __thiscall plasma::Widget::vfunction12_for_NamedObject(Widget *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((this->offset_0x11c >> 7 & 1) != 0) {
    this->field150_0x14c = 0;
    this->field151_0x14d = 0;
    pfVar1 = (float *)FUN_0062d7f0(local_48);
    fVar4 = 1.0 / (pfVar1[7] * 0.0 + pfVar1[3] * 0.0 + pfVar1[0xf]);
    fVar5 = (float)this->field1_0x4[0x35] - fVar4 * (pfVar1[4] * 0.0 + *pfVar1 * 0.0 + pfVar1[0xc]);
    fVar4 = (float)this->field1_0x4[0x36] -
            fVar4 * (pfVar1[5] * 0.0 + pfVar1[1] * 0.0 + pfVar1[0xd]);
    if (fVar5 < (this->offset_0x5c + this->offset_0x3c) - this->offset_0x4c) {
      FUN_0064efe0(this->offset_0x13c);
      this->field150_0x14c = 0xff;
    }
    fVar3 = (this->offset_0x44 + this->offset_0x6c) - this->offset_0x54;
    fVar2 = (this->offset_0x44 + this->offset_0x64) - this->offset_0x54;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    if (fVar2 < fVar3) {
      fVar2 = fVar3;
    }
    if (fVar2 + ((this->offset_0x5c + this->offset_0x3c) - this->offset_0x4c) < fVar5) {
      FUN_0064efe0(this->offset_0x13c);
      this->field150_0x14c = 1;
    }
    if (fVar4 < (this->offset_0x60 + this->offset_0x40) - this->offset_0x50) {
      FUN_0064efe0(this->offset_0x13c);
      this->field151_0x14d = 0xff;
    }
    fVar2 = (this->offset_0x70 + this->offset_0x48) - this->offset_0x58;
    fVar5 = (this->offset_0x68 + this->offset_0x48) - this->offset_0x58;
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    if (fVar5 < fVar2) {
      fVar5 = fVar2;
    }
    if (fVar5 + ((this->offset_0x60 + this->offset_0x40) - this->offset_0x50) < fVar4) {
      FUN_0064efe0(this->offset_0x13c);
      this->field151_0x14d = 1;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::Widget::vfunction13_for_NamedObject @ 0062abe0  kind=game  attributed-by=rtti  size=52 */

/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by cube::AdaptionWidget */

void __thiscall plasma::Widget::vfunction13_for_NamedObject(Widget *this)

{
  if ((this->field1_0x4[0x32] != 0) && (*(Widget **)(this->field1_0x4[0x32] + 0x44) == this)) {
    FUN_00659cf0();
  }
  this->field150_0x14c = 0;
  this->field151_0x14d = 0;
  return;
}


/* plasma::Widget::vfunction22_for_NamedObject @ 0062ac20  kind=game  attributed-by=rtti  size=743 */

/* WARNING: Type propagation algorithm not settling */
/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by plasma::Button
   plasma::Widget member function inherited by plasma::ScrollButton
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by plasma::PopUpButton
   plasma::Widget member function inherited by cube::AdaptionWidget */

void __thiscall plasma::Widget::vfunction22_for_NamedObject(Widget *this)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18 [4];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((((this->offset_0x11c >> 7 & 1) != 0) && ((*(byte *)(this->field1_0x4 + 0x3d) & 1) != 0)) &&
     ((this->field150_0x14c != '\0' || (this->field151_0x14d != '\0')))) {
    FUN_0062b510(local_18);
    FUN_0062de60(local_18 + 2);
    iVar5 = 0;
    do {
      if ((&this->field150_0x14c)[iVar5] == -1) {
        FUN_0062d7f0(&local_70);
        FUN_0058c440();
        piVar2 = this->field1_0x4;
        local_30[0] = ((float)piVar2[0x36] - (float)piVar2[0x38]) * local_60 +
                      ((float)piVar2[0x35] - (float)piVar2[0x37]) * local_70;
        local_30[1] = local_5c * ((float)piVar2[0x36] - (float)piVar2[0x38]) +
                      local_6c * ((float)piVar2[0x35] - (float)piVar2[0x37]);
        local_18[iVar5] = local_30[iVar5] + local_18[iVar5];
        FUN_0062d7f0(&local_70);
        FUN_0058c440();
        piVar2 = this->field1_0x4;
        local_20 = ((float)piVar2[0x36] - (float)piVar2[0x38]) * local_60 +
                   ((float)piVar2[0x35] - (float)piVar2[0x37]) * local_70;
        local_1c = local_5c * ((float)piVar2[0x36] - (float)piVar2[0x38]) +
                   local_6c * ((float)piVar2[0x35] - (float)piVar2[0x37]);
        fVar6 = local_18[iVar5 + 2] - local_30[iVar5 + 4];
LAB_0062ae05:
        local_18[iVar5 + 2] = fVar6;
      }
      else if ((&this->field150_0x14c)[iVar5] == '\x01') {
        FUN_0062d7f0(&local_70);
        FUN_0058c440();
        piVar2 = this->field1_0x4;
        local_30[2] = ((float)piVar2[0x36] - (float)piVar2[0x38]) * local_60 +
                      ((float)piVar2[0x35] - (float)piVar2[0x37]) * local_70;
        local_30[3] = local_5c * ((float)piVar2[0x36] - (float)piVar2[0x38]) +
                      local_6c * ((float)piVar2[0x35] - (float)piVar2[0x37]);
        fVar6 = local_30[iVar5 + 2] + local_18[iVar5 + 2];
        goto LAB_0062ae05;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    FUN_006295a0(local_18,0);
    FUN_0062bb90(local_18 + 2,1);
  }
  if ((((this->offset_0x11c & 1) != 0) || ((this->offset_0x11c >> 1 & 1) != 0)) &&
     (((uint)this->field1_0x4[0x3d] >> 2 & 1) != 0)) {
    pfVar4 = (float *)FUN_0062b430(local_30 + 4);
    fVar7 = *pfVar4 - this->field57_0x98;
    fVar6 = pfVar4[1] - this->field58_0x9c;
    if ((this->offset_0x11c & 1) == 0) {
      fVar7 = 0.0;
    }
    if ((this->offset_0x11c >> 1 & 1) == 0) {
      fVar6 = 0.0;
    }
    fVar1 = this->field60_0xa4;
    iVar5 = *(int *)(this->offset_0x13c + 0x38);
    iVar3 = *(int *)(iVar5 + 0x68);
    iVar5 = *(int *)(iVar5 + 0x94);
    *(float *)(iVar5 + iVar3 * 8) = this->field59_0xa0 + fVar7;
    *(float *)(iVar5 + 4 + iVar3 * 8) = fVar1 + fVar6;
    (**(code **)(**(int **)(this->offset_0x13c + 0x38) + 4))(1);
    FUN_006278a0();
    FUN_00653620(this->offset_0x13c,0x11);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::Widget::vfunction10_for_NamedObject @ 0062af10  kind=game  attributed-by=rtti  size=1088 */

/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by plasma::Edit
   plasma::Widget member function inherited by plasma::Button
   plasma::Widget member function inherited by plasma::ScrollButton
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by plasma::PopUpButton
   plasma::Widget member function inherited by cube::AdaptionWidget */

void __thiscall
plasma::Widget::vfunction10_for_NamedObject(Widget *this,float *param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  float local_60;
  float local_5c;
  float local_50;
  float local_4c;
  float local_40;
  float local_3c;
  float local_30;
  float local_2c;
  undefined1 local_20 [8];
  undefined1 local_18 [4];
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this->offset_0x13c + 0x28) == 0) goto LAB_0062b269;
  if ((this->offset_0x124 == 1) && ((this->offset_0x11c >> 2 & 1) == 0)) {
    iVar2 = FUN_0062b510(local_18);
    local_e4 = *(float *)(iVar2 + 4);
    pfVar3 = (float *)FUN_0062b510(local_20);
    local_10 = *param_1 + *pfVar3 + *param_2;
LAB_0062afbf:
    local_c = local_e4;
    FUN_006295a0(&local_10,1);
  }
  else if (this->offset_0x124 == 2) {
    iVar2 = FUN_0062b510(local_20);
    local_e4 = *(float *)(iVar2 + 4);
    pfVar3 = (float *)FUN_0062b510(local_18);
    local_10 = *param_2 * 0.5 + *pfVar3;
    goto LAB_0062afbf;
  }
  if ((this->offset_0x120 == 1) && ((this->offset_0x11c >> 3 & 1) == 0)) {
    iVar2 = FUN_0062b510(local_20);
    fVar4 = *(float *)(iVar2 + 4);
    pfVar3 = (float *)FUN_0062b510(local_18);
    local_10 = *pfVar3;
    local_c = param_1[1] + fVar4 + param_2[1];
LAB_0062b07c:
    FUN_006295a0(&local_10,1);
  }
  else if (this->offset_0x120 == 2) {
    iVar2 = FUN_0062b510(local_20);
    fVar4 = *(float *)(iVar2 + 4);
    pfVar3 = (float *)FUN_0062b510(local_18);
    local_10 = *pfVar3;
    local_c = param_2[1] * 0.5 + fVar4;
    goto LAB_0062b07c;
  }
  FUN_00423e70();
  for (iVar2 = *(int *)(this->offset_0x13c + 0x28); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x28)) {
    if (*(int *)(iVar2 + 0x40) != 0) {
      if (*(int *)(iVar2 + 0x40) != 0) {
        pfVar3 = (float *)FUN_0062c5b0(local_a0);
        fVar4 = 1.0 / (pfVar3[7] * 0.0 + pfVar3[3] * 0.0 + pfVar3[0xf]);
        fVar5 = (pfVar3[4] * 0.0 + *pfVar3 * 0.0 + pfVar3[0xc]) * fVar4 * -1.0;
        fVar4 = (pfVar3[5] * 0.0 + pfVar3[1] * 0.0 + pfVar3[0xd]) * fVar4 * -1.0;
        local_14 = local_50 * fVar4 + local_60 * fVar5 + local_30;
        local_e4 = local_4c * fVar4 + local_5c * fVar5 + local_2c;
        goto LAB_0062b0cb;
      }
      break;
    }
  }
  local_e4 = local_2c;
  local_14 = local_30;
LAB_0062b0cb:
  pfVar3 = (float *)FUN_0062c5b0(local_e0);
  local_c = *pfVar3 * local_60 + pfVar3[1] * local_50 + pfVar3[2] * local_40 + pfVar3[3] * local_14;
  uVar1 = this->offset_0x11c;
  fVar4 = pfVar3[7] * local_14;
  local_14 = *pfVar3 * local_5c + pfVar3[1] * local_4c + pfVar3[2] * local_3c + pfVar3[3] * local_e4
  ;
  fVar4 = local_c * this->offset_0x64 +
          (pfVar3[5] * local_50 + pfVar3[4] * local_60 + pfVar3[6] * local_40 + fVar4) *
          this->offset_0x68;
  fVar5 = local_14 * this->offset_0x64 +
          (pfVar3[5] * local_4c + pfVar3[4] * local_5c + pfVar3[6] * local_3c + pfVar3[7] * local_e4
          ) * this->offset_0x68;
  if (((uVar1 >> 2 & 1) != 0) || ((uVar1 >> 3 & 1) != 0)) {
    local_10 = fVar4;
    if ((uVar1 >> 2 & 1) != 0) {
      local_10 = fVar4 + *param_2;
    }
    local_c = fVar5;
    if ((uVar1 >> 3 & 1) != 0) {
      local_c = param_2[1] + fVar5;
    }
    FUN_0062bb90(&local_10,1);
  }
  if (this->offset_0x134 != 0) {
    FUN_00662860();
  }
  if (this->offset_0x138 != 0) {
    FUN_00662860();
  }
  if ((this->offset_0x138 != 0) || (this->offset_0x134 != 0)) {
    FUN_006278a0();
  }
LAB_0062b269:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::Widget::vfunction9_for_NamedObject @ 0062b350  kind=game  attributed-by=rtti  size=167 */

/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by plasma::Edit
   plasma::Widget member function inherited by plasma::Button
   plasma::Widget member function inherited by plasma::ScrollButton
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by plasma::PopUpButton
   plasma::Widget member function inherited by cube::AdaptionWidget
   plasma::Widget member function inherited by plasma::ScrollSlider */

void __thiscall plasma::Widget::vfunction9_for_NamedObject(Widget *this)

{
  int iVar1;
  float local_18 [3];
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  for (iVar1 = *(int *)(this->offset_0x13c + 0x28); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x28)) {
    if (*(int *)(iVar1 + 0x40) != 0) goto LAB_0062b3cd;
  }
  local_18[2] = (float)(this->field1_0x4[0x43] - this->offset_0x12c);
  local_c = (float)(this->field1_0x4[0x44] - this->offset_0x130);
  local_18[0] = 0.0;
  local_18[1] = 0.0;
  (*this->vftablePtr->vfunction10_for_NamedObject)(this,local_18,local_18 + 2);
LAB_0062b3cd:
  this->offset_0x12c = this->field1_0x4[0x43];
  this->offset_0x130 = this->field1_0x4[0x44];
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::Widget::vfunction2_for_Deformer @ 0062e180  kind=game  attributed-by=rtti  size=4421 */

/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by plasma::Edit
   plasma::Widget member function inherited by plasma::Button
   plasma::Widget member function inherited by plasma::ScrollButton
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by plasma::PopUpButton
   plasma::Widget member function inherited by cube::AdaptionWidget
   plasma::Widget member function inherited by plasma::ScrollSlider */

void __thiscall
plasma::Widget::vfunction2_for_Deformer(Widget *this,float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  int iVar25;
  float *pfVar26;
  float *pfVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  Widget_vftable_for_Deformer *pWVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float local_d0;
  Widget_vftable_for_Deformer *local_c4;
  float local_a0 [5];
  float local_8c;
  float local_84;
  float local_7c;
  float local_74;
  float local_6c;
  float local_64;
  float local_60 [8];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  Widget_vftable_for_Deformer *local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  fVar28 = (this->offset_0x1c + this->offset_0x3c) - this->offset_0x2c;
  fVar48 = ((float)this->vftablePtr + this->offset_0x38) - (float)this->offset_0x28;
  pWVar57 = (Widget_vftable_for_Deformer *)
            ((this->offset_0x20 + this->offset_0x48) - this->offset_0x30);
  local_10 = (Widget_vftable_for_Deformer *)
             ((this->offset_0x20 + this->offset_0x40) - this->offset_0x30);
  local_c = (this->offset_0x24 + this->offset_0x44) - this->offset_0x34;
  local_60[1] = fVar28;
  fVar55 = (this->offset_0x24 + this->offset_0x4c) - this->offset_0x34;
  local_60[0] = fVar48;
  if ((float)pWVar57 < 0.0) {
    pWVar57 = (Widget_vftable_for_Deformer *)0x0;
  }
  local_c4 = local_10;
  if ((float)local_10 < (float)pWVar57) {
    local_10 = pWVar57;
    local_c4 = pWVar57;
  }
  if (fVar55 < 0.0) {
    fVar55 = 0.0;
  }
  local_d0 = local_c;
  if (local_c < fVar55) {
    local_c = fVar55;
    local_d0 = fVar55;
  }
  local_60[2] = this->offset_0x20;
  local_60[3] = this->offset_0x24;
  iVar24 = 0;
  do {
    local_10 = local_c4;
    if (*(float *)((int)&local_10 + iVar24) != *(float *)((int)local_60 + iVar24 + 8))
    goto LAB_0062e2e9;
    iVar24 = iVar24 + 4;
  } while (iVar24 < 8);
  local_10 = this->vftablePtr;
  local_c = this->offset_0x1c;
  iVar24 = 0;
  while (*(float *)((int)local_60 + iVar24) == *(float *)((int)&local_10 + iVar24)) {
    iVar24 = iVar24 + 4;
    if (7 < iVar24) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
LAB_0062e2e9:
  iVar24 = this->field137_0x124;
  fVar55 = *(float *)(iVar24 + 0x88);
  fVar58 = *(float *)(iVar24 + 0x8c);
  pfVar26 = &this->field46_0x84;
  pfVar27 = local_60 + 4;
  for (iVar25 = 0x10; fVar10 = local_28, fVar9 = local_2c, fVar8 = local_30, fVar7 = local_38,
      fVar6 = local_3c, fVar5 = local_40, fVar4 = local_60[6], fVar3 = local_60[5],
      fVar61 = local_60[4], iVar25 != 0; iVar25 = iVar25 + -1) {
    *pfVar27 = *pfVar26;
    pfVar26 = pfVar26 + 1;
    pfVar27 = pfVar27 + 1;
  }
  fVar1 = *(float *)(iVar24 + 0xc0);
  fVar2 = *(float *)(iVar24 + 0xc4);
  fVar58 = fVar55 * local_60[4] + fVar58 * local_40 + *(float *)(iVar24 + 0x90) * local_30 +
           *(float *)(iVar24 + 0x94) * local_20;
  local_60[4] = fVar58;
  fVar59 = *(float *)(iVar24 + 0x98) * fVar61 + *(float *)(iVar24 + 0x9c) * local_40 +
           *(float *)(iVar24 + 0xa0) * local_30 + *(float *)(iVar24 + 0xa4) * local_20;
  fVar55 = *(float *)(iVar24 + 0xac) * local_40;
  local_40 = fVar59;
  fVar60 = *(float *)(iVar24 + 0xa8) * fVar61 + fVar55 + *(float *)(iVar24 + 0xb0) * local_30 +
           *(float *)(iVar24 + 0xb4) * local_20;
  local_30 = fVar60;
  fVar61 = *(float *)(iVar24 + 0xb8) * fVar61 + *(float *)(iVar24 + 0xbc) * fVar5 + fVar1 * fVar8 +
           fVar2 * local_20;
  local_20 = fVar61;
  local_60[5] = *(float *)(iVar24 + 0x88) * local_60[5] + *(float *)(iVar24 + 0x8c) * local_3c +
                *(float *)(iVar24 + 0x90) * local_2c + *(float *)(iVar24 + 0x94) * local_1c;
  fVar55 = *(float *)(iVar24 + 0xac) * local_3c;
  local_3c = *(float *)(iVar24 + 0x98) * fVar3 + *(float *)(iVar24 + 0x9c) * local_3c +
             *(float *)(iVar24 + 0xa0) * local_2c + *(float *)(iVar24 + 0xa4) * local_1c;
  local_2c = *(float *)(iVar24 + 0xa8) * fVar3 + fVar55 + *(float *)(iVar24 + 0xb0) * local_2c +
             *(float *)(iVar24 + 0xb4) * local_1c;
  local_1c = *(float *)(iVar24 + 0xb8) * fVar3 + *(float *)(iVar24 + 0xbc) * fVar6 + fVar1 * fVar9 +
             fVar2 * local_1c;
  local_60[6] = *(float *)(iVar24 + 0x88) * local_60[6] + *(float *)(iVar24 + 0x8c) * local_38 +
                *(float *)(iVar24 + 0x90) * local_28 + *(float *)(iVar24 + 0x94) * local_18;
  fVar55 = *(float *)(iVar24 + 0xac) * local_38;
  local_38 = *(float *)(iVar24 + 0x98) * fVar4 + *(float *)(iVar24 + 0x9c) * local_38 +
             *(float *)(iVar24 + 0xa0) * local_28 + *(float *)(iVar24 + 0xa4) * local_18;
  local_28 = *(float *)(iVar24 + 0xa8) * fVar4 + fVar55 + *(float *)(iVar24 + 0xb0) * local_28 +
             *(float *)(iVar24 + 0xb4) * local_18;
  local_18 = *(float *)(iVar24 + 0xb8) * fVar4 + *(float *)(iVar24 + 0xbc) * fVar7 + fVar1 * fVar10
             + fVar2 * local_18;
  local_60[7] = local_60[7] * *(float *)(iVar24 + 0x88) + local_34 * *(float *)(iVar24 + 0x8c) +
                local_24 * *(float *)(iVar24 + 0x90) + local_14 * *(float *)(iVar24 + 0x94);
  local_34 = *(float *)(iVar24 + 0x98) * local_60[7] + local_34 * *(float *)(iVar24 + 0x9c) +
             local_24 * *(float *)(iVar24 + 0xa0) + local_14 * *(float *)(iVar24 + 0xa4);
  local_24 = *(float *)(iVar24 + 0xa8) * local_60[7] + *(float *)(iVar24 + 0xac) * local_34 +
             local_24 * *(float *)(iVar24 + 0xb0) + local_14 * *(float *)(iVar24 + 0xb4);
  local_14 = *(float *)(iVar24 + 0xb8) * local_60[7] + *(float *)(iVar24 + 0xbc) * local_34 +
             fVar1 * local_24 + local_14 * fVar2;
  pfVar26 = local_60 + 4;
  pfVar27 = local_a0;
  for (iVar25 = 0x10; iVar25 != 0; iVar25 = iVar25 + -1) {
    *pfVar27 = *pfVar26;
    pfVar26 = pfVar26 + 1;
    pfVar27 = pfVar27 + 1;
  }
  fVar55 = *(float *)(param_3 + 0x4c);
  fVar3 = *(float *)(param_3 + 0x48);
  fVar4 = *(float *)(param_3 + 0x50);
  fVar5 = *(float *)(param_3 + 0x54);
  fVar6 = *(float *)(param_3 + 0x58);
  fVar7 = *(float *)(param_3 + 0x5c);
  fVar8 = *(float *)(param_3 + 0x78);
  fVar9 = *(float *)(param_3 + 0x7c);
  fVar10 = *(float *)(param_3 + 0x60);
  fVar1 = *(float *)(param_3 + 0x80);
  fVar2 = *(float *)(param_3 + 100);
  fVar11 = *(float *)(param_3 + 0x84);
  fVar29 = *(float *)(param_3 + 0x48) * local_a0[1];
  fVar30 = fVar55 * local_8c;
  fVar31 = fVar4 * local_7c;
  fVar32 = *(float *)(param_3 + 0x54) * local_6c;
  fVar33 = *(float *)(param_3 + 0x58) * local_a0[1];
  fVar34 = *(float *)(param_3 + 0x5c) * local_8c;
  fVar53 = local_8c * *(float *)(param_3 + 0x7c);
  fVar35 = *(float *)(param_3 + 0x60) * local_7c;
  fVar56 = *(float *)(param_3 + 0x48) * local_a0[3];
  fVar36 = local_6c * *(float *)(param_3 + 100);
  fVar51 = local_7c * fVar1;
  fVar37 = local_a0[1] * fVar8;
  fVar49 = local_6c * fVar11;
  fVar38 = *(float *)(param_3 + 0x4c) * local_84;
  fVar39 = *(float *)(param_3 + 0x50) * local_74;
  fVar40 = *(float *)(param_3 + 0x54) * local_64;
  fVar41 = *(float *)(param_3 + 0x58) * local_a0[3];
  fVar12 = *(float *)(iVar24 + 0x84);
  fVar42 = *(float *)(param_3 + 0x5c) * local_84;
  fVar54 = local_84 * *(float *)(param_3 + 0x7c);
  fVar43 = *(float *)(param_3 + 0x60) * local_74;
  fVar52 = local_74 * fVar1;
  fVar44 = local_64 * *(float *)(param_3 + 100);
  fVar50 = local_64 * fVar11;
  fVar45 = local_a0[3] * fVar8;
  pfVar26 = (float *)(param_3 + 0x88);
  pfVar27 = local_60 + 4;
  for (iVar25 = 0x10; fVar21 = local_28, fVar20 = local_2c, fVar19 = local_30, fVar18 = local_34,
      fVar17 = local_38, fVar16 = local_3c, fVar64 = local_40, fVar15 = local_60[7],
      fVar14 = local_60[6], fVar65 = local_60[5], fVar47 = local_60[4], iVar25 != 0;
      iVar25 = iVar25 + -1) {
    *pfVar27 = *pfVar26;
    pfVar26 = pfVar26 + 1;
    pfVar27 = pfVar27 + 1;
  }
  fVar13 = *(float *)(iVar24 + 0x80);
  fVar62 = local_60[4] * *(float *)(iVar24 + 0x48) + local_40 * *(float *)(iVar24 + 0x4c) +
           local_30 * *(float *)(iVar24 + 0x50) + local_20 * *(float *)(iVar24 + 0x54);
  local_60[4] = fVar62;
  fVar63 = *(float *)(iVar24 + 0x58) * fVar47 + local_40 * *(float *)(iVar24 + 0x5c) +
           local_30 * *(float *)(iVar24 + 0x60) + local_20 * *(float *)(iVar24 + 100);
  fVar46 = *(float *)(iVar24 + 0x6c) * local_40;
  local_40 = fVar63;
  fVar46 = *(float *)(iVar24 + 0x68) * fVar47 + fVar46 + local_30 * *(float *)(iVar24 + 0x70) +
           local_20 * *(float *)(iVar24 + 0x74);
  local_30 = fVar46;
  fVar64 = *(float *)(iVar24 + 0x78) * fVar47 + *(float *)(iVar24 + 0x7c) * fVar64 + fVar13 * fVar19
           + local_20 * fVar12;
  local_20 = fVar64;
  local_60[5] = local_60[5] * *(float *)(iVar24 + 0x48) + local_3c * *(float *)(iVar24 + 0x4c) +
                local_2c * *(float *)(iVar24 + 0x50) + local_1c * *(float *)(iVar24 + 0x54);
  fVar47 = *(float *)(iVar24 + 0x6c) * local_3c;
  local_3c = *(float *)(iVar24 + 0x58) * fVar65 + local_3c * *(float *)(iVar24 + 0x5c) +
             local_2c * *(float *)(iVar24 + 0x60) + local_1c * *(float *)(iVar24 + 100);
  local_2c = *(float *)(iVar24 + 0x68) * fVar65 + fVar47 + local_2c * *(float *)(iVar24 + 0x70) +
             local_1c * *(float *)(iVar24 + 0x74);
  local_1c = *(float *)(iVar24 + 0x78) * fVar65 + *(float *)(iVar24 + 0x7c) * fVar16 +
             fVar13 * fVar20 + local_1c * fVar12;
  local_60[6] = local_60[6] * *(float *)(iVar24 + 0x48) + local_38 * *(float *)(iVar24 + 0x4c) +
                local_28 * *(float *)(iVar24 + 0x50) + local_18 * *(float *)(iVar24 + 0x54);
  fVar47 = *(float *)(iVar24 + 0x6c) * local_38;
  local_38 = *(float *)(iVar24 + 0x58) * fVar14 + local_38 * *(float *)(iVar24 + 0x5c) +
             local_28 * *(float *)(iVar24 + 0x60) + local_18 * *(float *)(iVar24 + 100);
  local_28 = *(float *)(iVar24 + 0x68) * fVar14 + fVar47 + local_28 * *(float *)(iVar24 + 0x70) +
             local_18 * *(float *)(iVar24 + 0x74);
  fVar65 = fVar13 * local_24;
  local_18 = *(float *)(iVar24 + 0x78) * fVar14 + *(float *)(iVar24 + 0x7c) * fVar17 +
             fVar13 * fVar21 + local_18 * fVar12;
  local_60[7] = local_60[7] * *(float *)(iVar24 + 0x48) + local_34 * *(float *)(iVar24 + 0x4c) +
                local_24 * *(float *)(iVar24 + 0x50) + local_14 * *(float *)(iVar24 + 0x54);
  fVar47 = *(float *)(iVar24 + 0x6c) * local_34;
  local_34 = *(float *)(iVar24 + 0x58) * fVar15 + local_34 * *(float *)(iVar24 + 0x5c) +
             local_24 * *(float *)(iVar24 + 0x60) + local_14 * *(float *)(iVar24 + 100);
  local_24 = *(float *)(iVar24 + 0x68) * fVar15 + fVar47 + local_24 * *(float *)(iVar24 + 0x70) +
             local_14 * *(float *)(iVar24 + 0x74);
  local_14 = *(float *)(iVar24 + 0x78) * fVar15 + *(float *)(iVar24 + 0x7c) * fVar18 + fVar65 +
             local_14 * fVar12;
  fVar12 = this->offset_0xbc;
  fVar47 = this->field86_0xc4;
  pfVar26 = local_60 + 4;
  pfVar27 = local_a0;
  for (iVar24 = 0x10; iVar24 != 0; iVar24 = iVar24 + -1) {
    *pfVar27 = *pfVar26;
    pfVar26 = pfVar26 + 1;
    pfVar27 = pfVar27 + 1;
  }
  local_c = fVar62 * fVar47 + fVar63 * fVar12 + fVar46 * this->offset_0xc0 +
            fVar64 * this->offset_0xc4;
  fVar65 = this->field104_0x100;
  fVar14 = this->field102_0xf8;
  local_60[3] = fVar62 * this->offset_0xc8 + fVar63 * this->offset_0xcc + fVar46 * this->offset_0xd0
                + fVar64 * this->offset_0xd4;
  fVar15 = this->field103_0xfc;
  fVar16 = this->offset_0xc0;
  fVar17 = this->offset_0xc4;
  fVar18 = this->offset_0xcc;
  fVar19 = this->offset_0xc8;
  fVar20 = this->offset_0xd0;
  fVar21 = this->offset_0xd4;
  fVar13 = this->field101_0xf4;
  fVar22 = param_2[1];
  local_60[1] = this->field101_0xf4 * local_a0[3] + fVar14 * local_84 + fVar15 * local_74 +
                local_64 * fVar65;
  fVar23 = *param_2;
  fVar38 = 1.0 / (fVar23 * (fVar56 + fVar38 + fVar39 + fVar40) +
                  (fVar41 + fVar42 + fVar43 + fVar44) * fVar22 + fVar45 + fVar54 + fVar52 + fVar50);
  fVar55 = fVar38 * ((fVar55 * fVar59 + fVar3 * fVar58 + fVar4 * fVar60 + fVar5 * fVar61) * fVar23 +
                     (fVar6 * fVar58 + fVar7 * fVar59 + fVar10 * fVar60 + fVar61 * fVar2) * fVar22 +
                    fVar8 * fVar58 + fVar9 * fVar59 + fVar1 * fVar60 + fVar11 * fVar61);
  fVar38 = fVar38 * ((fVar29 + fVar30 + fVar31 + fVar32) * fVar23 +
                     (fVar33 + fVar34 + fVar35 + fVar36) * fVar22 +
                    fVar37 + fVar53 + fVar51 + fVar49);
  if (fVar48 <= fVar55) {
    if ((float)local_c4 + fVar48 <= fVar55) {
      fVar58 = 1.0;
    }
    else {
      fVar58 = (fVar55 - fVar48) / (float)local_c4;
    }
  }
  else {
    fVar58 = 0.0;
  }
  if (fVar28 <= fVar38) {
    if (local_d0 + fVar28 <= fVar38) {
      fVar61 = 1.0;
    }
    else {
      fVar61 = (fVar38 - fVar28) / local_d0;
    }
  }
  else {
    fVar61 = 0.0;
  }
  fVar48 = (((float)this->vftablePtr + fVar55) - fVar48) +
           fVar58 * (this->offset_0x20 - (float)local_c4);
  fVar28 = ((this->offset_0x1c + fVar38) - fVar28) + fVar61 * (this->offset_0x24 - local_d0);
  fVar55 = 1.0 / ((local_84 * this->offset_0xcc + this->offset_0xc8 * local_a0[3] +
                   this->offset_0xd0 * local_74 + local_64 * this->offset_0xd4) * fVar28 +
                  (local_a0[3] * this->field86_0xc4 + local_84 * this->offset_0xbc +
                   this->offset_0xc0 * local_74 + local_64 * this->offset_0xc4) * fVar48 +
                 local_60[1]);
  *param_1 = (local_60[3] * fVar28 + local_c * fVar48 +
             fVar62 * this->field101_0xf4 + fVar63 * fVar14 + fVar46 * fVar15 + fVar64 * fVar65) *
             fVar55;
  param_1[1] = ((local_8c * fVar18 + fVar19 * local_a0[1] + local_7c * fVar20 + local_6c * fVar21) *
                fVar28 + (local_a0[1] * fVar47 + local_8c * fVar12 + local_7c * fVar16 +
                         local_6c * fVar17) * fVar48 +
               fVar13 * local_a0[1] + fVar14 * local_8c + local_7c * fVar15 + local_6c * fVar65) *
               fVar55;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::Widget::vfunction3_for_NamedObject @ 00687cf0  kind=game  attributed-by=rtti  size=23 */

/* plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterPreviewWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::InventoryWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::SpriteWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by cube::WorldPreviewWidget
   plasma::Widget member function inherited by plasma::Edit
   plasma::Widget member function inherited by plasma::Edit
   plasma::Widget member function inherited by plasma::Button
   plasma::Widget member function inherited by plasma::Button
   plasma::Widget member function inherited by plasma::ScrollButton
   plasma::Widget member function inherited by plasma::ScrollButton
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by plasma::PopUpButton
   plasma::Widget member function inherited by plasma::PopUpButton
   plasma::Widget member function inherited by cube::AdaptionWidget
   plasma::Widget member function inherited by cube::AdaptionWidget
   plasma::Widget member function inherited by plasma::ScrollSlider
   plasma::Widget member function inherited by plasma::ScrollSlider */

void __thiscall plasma::Widget::vfunction3_for_NamedObject(Widget *this,undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


/* plasma::Widget::vfunction6_for_NamedObject @ 00687d10  kind=game  attributed-by=rtti  size=5 */

/* plasma::Widget member function inherited by cube::CharacterStyleWidget
   plasma::Widget member function inherited by cube::BlueprintPreviewWidget
   plasma::Widget member function inherited by cube::CharacterWidget
   plasma::Widget member function inherited by cube::ChatWidget
   plasma::Widget member function inherited by cube::EnchantWidget
   plasma::Widget member function inherited by cube::MapOverlayWidget
   plasma::Widget member function inherited by cube::ObjectiveWidget
   plasma::Widget member function inherited by cube::OptionsWidget
   plasma::Widget member function inherited by cube::PreviewWidget
   plasma::Widget member function inherited by cube::SkillWidget
   plasma::Widget member function inherited by cube::SpeechWidget
   plasma::Widget member function inherited by cube::StartMenuWidget
   plasma::Widget member function inherited by cube::StatisticsWidget
   plasma::Widget member function inherited by cube::SystemWidget
   plasma::Widget member function inherited by cube::VoxelWidget
   plasma::Widget member function inherited by plasma::Button
   plasma::Widget member function inherited by plasma::ScrollButton
   plasma::Widget member function inherited by plasma::ListWidget
   plasma::Widget member function inherited by plasma::PopUpButton
   plasma::Widget member function inherited by cube::AdaptionWidget
   plasma::Widget member function inherited by plasma::ScrollSlider */

undefined1 __thiscall plasma::Widget::vfunction6_for_NamedObject(void)

{
  return 0;
}


