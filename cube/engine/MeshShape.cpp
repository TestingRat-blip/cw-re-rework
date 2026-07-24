// MeshShape (engine) -- cube. 11 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "MeshShape.h"

/* plasma::MeshShape::MeshShape @ 00666580  kind=game  attributed-by=rtti  size=3493 */

void __thiscall plasma::MeshShape::MeshShape(MeshShape *this,int param_1,undefined4 param_2)

{
  int **ppiVar1;
  Object_data *pOVar2;
  undefined4 *puVar3;
  Attribute *pAVar4;
  int *this_00;
  int iVar5;
  undefined1 local_98 [64];
  MeshShape *local_58;
  Attribute *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  Attribute *local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7b31;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_58 = this;
                    /* inlined constructor: plasma::MeshShape::MeshShape */
  Shape::Shape((Shape *)this,param_1,param_2);
  local_8 = 0;
  this->vftablePtr = &vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("positions",9);
  local_50 = 0;
  local_4c = 0;
  local_48 = (Attribute *)0x0;
  local_8._0_1_ = 2;
  ContinuousArrayAttribute<plasma::Vector<2,float>_>::
  ContinuousArrayAttribute<plasma::Vector<2,float>_>
            ((ContinuousArrayAttribute<plasma::Vector<2,float>_> *)&this[4].field2_0xc,local_2c,
             &local_50);
  local_8._0_1_ = 5;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("texCoords",9);
  local_50 = 0;
  local_4c = 0;
  local_48 = (Attribute *)0x0;
  local_8._0_1_ = 7;
  ContinuousArrayAttribute<plasma::Vector<2,float>_>::
  ContinuousArrayAttribute<plasma::Vector<2,float>_>
            ((ContinuousArrayAttribute<plasma::Vector<2,float>_> *)(this + 9),local_44,&local_50);
  local_8._0_1_ = 10;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("colors",6);
  local_50 = 0;
  local_4c = 0;
  local_48 = (Attribute *)0x0;
  local_8._0_1_ = 0xc;
  ContinuousArrayAttribute<plasma::Vector<4,float>_>::
  ContinuousArrayAttribute<plasma::Vector<4,float>_>
            ((ContinuousArrayAttribute<plasma::Vector<4,float>_> *)&this[0xd].Object_data.offset_0x4
             ,local_2c,&local_50);
  local_8._0_1_ = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("strokeColors",0xc);
  local_50 = 0;
  local_4c = 0;
  local_48 = (Attribute *)0x0;
  local_8._0_1_ = 0x11;
  ContinuousArrayAttribute<plasma::Vector<4,float>_>::
  ContinuousArrayAttribute<plasma::Vector<4,float>_>
            ((ContinuousArrayAttribute<plasma::Vector<4,float>_> *)&this[0x11].field3_0x10,local_44,
             &local_50);
  local_8._0_1_ = 0x14;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("extrusionBackColors",0x13);
  local_50 = 0;
  local_4c = 0;
  local_48 = (Attribute *)0x0;
  local_8._0_1_ = 0x16;
  ContinuousArrayAttribute<plasma::Vector<4,float>_>::
  ContinuousArrayAttribute<plasma::Vector<4,float>_>
            ((ContinuousArrayAttribute<plasma::Vector<4,float>_> *)&this[0x16].Object_data,local_2c,
             &local_50);
  local_8._0_1_ = 0x19;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("extrusionFrontColors",0x14);
  local_50 = 0;
  local_4c = 0;
  local_48 = (Attribute *)0x0;
  local_8._0_1_ = 0x1b;
  ContinuousArrayAttribute<plasma::Vector<4,float>_>::
  ContinuousArrayAttribute<plasma::Vector<4,float>_>
            ((ContinuousArrayAttribute<plasma::Vector<4,float>_> *)&this[0x1a].field2_0xc,local_44,
             &local_50);
  local_8._0_1_ = 0x1e;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("strokeWidths",0xc);
  local_50 = 0;
  local_4c = 0;
  local_48 = (Attribute *)0x0;
  local_8._0_1_ = 0x20;
  ContinuousArrayAttribute<float>::ContinuousArrayAttribute<float>
            ((ContinuousArrayAttribute<float> *)(this + 0x1f),local_2c,&local_50);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  this[0x23].Object_data.offset_0x4 = (int *)0x0;
  this[0x23].field2_0xc = 0;
  this[0x23].field3_0x10 = 0;
  this[0x24].vftablePtr = (MeshShape_vftable *)0x0;
  this[0x24].Object_data.offset_0x0 = 0;
  this[0x24].Object_data.offset_0x4 = (int *)0x0;
  local_8._0_1_ = 0x25;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("textureTranslation",0x12);
  local_8._0_1_ = 0x26;
  local_4c = 0;
  local_48 = (Attribute *)0x0;
  ContinuousAttribute<plasma::Vector<2,float>_>::ContinuousAttribute<plasma::Vector<2,float>_>
            ((ContinuousAttribute<plasma::Vector<2,float>_> *)&this[0x24].field2_0xc,local_44,
             &local_4c);
  local_8._0_1_ = 0x28;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("texturePivot",0xc);
  local_8._0_1_ = 0x29;
  local_4c = 0;
  local_48 = (Attribute *)0x0;
  ContinuousAttribute<plasma::Vector<2,float>_>::ContinuousAttribute<plasma::Vector<2,float>_>
            ((ContinuousAttribute<plasma::Vector<2,float>_> *)(this + 0x29),local_2c,&local_4c);
  local_8._0_1_ = 0x2b;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("textureRotation",0xf);
  ppiVar1 = &this[0x2d].Object_data.offset_0x4;
  local_8._0_1_ = 0x2c;
  local_50 = 0;
  local_4c = 0;
  local_48 = (Attribute *)0x0;
  local_54 = (Attribute *)ppiVar1;
                    /* inlined constructor: plasma::DiscreteAttribute<int>::DiscreteAttribute<int>
                       inlined constructor:
                       plasma::ContinuousAttribute<plasma::Vector<3,float>_>::ContinuousAttribute<plasma::Vector<3,float>_>
                       inlined constructor:
                       plasma::ContinuousAttribute<float>::ContinuousAttribute<float> */
  Attribute::Attribute((Attribute *)ppiVar1,local_44);
  *ppiVar1 = (int *)&ContinuousAttribute<plasma::Vector<3,float>_>::vftable;
  this[0x31].Object_data.offset_0x0 = 0;
  this[0x31].Object_data.offset_0x4 = (int *)0x0;
  this[0x31].field2_0xc = 0;
  local_8._0_1_ = 0x2e;
  FUN_0066b180(2,&local_50);
  local_8._0_1_ = 0x30;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("textureDeformation",0x12);
  local_8._0_1_ = 0x31;
  ContinuousAttribute<plasma::Matrix<float>_>::ContinuousAttribute<plasma::Matrix<float>_>
            ((ContinuousAttribute<plasma::Matrix<float>_> *)&this[0x31].field3_0x10,local_2c,
             local_98);
  local_8._0_1_ = 0x33;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_54 = (Attribute *)0x3f800000;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("textureOpacity",0xe);
  pOVar2 = &this[0x36].Object_data;
  local_8._0_1_ = 0x34;
  local_48 = (Attribute *)pOVar2;
  Attribute::Attribute((Attribute *)pOVar2,local_44);
  pOVar2->offset_0x0 = (int)&ContinuousAttribute<float>::vftable;
  this[0x3a].vftablePtr = (MeshShape_vftable *)0x0;
  this[0x3a].Object_data.offset_0x0 = 0;
  this[0x3a].Object_data.offset_0x4 = (int *)0x0;
  local_8._0_1_ = 0x36;
  FUN_0066b110(2,&local_54);
  local_8._0_1_ = 0x38;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_54 = (Attribute *)0x3f800000;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("textureBrightness",0x11);
  puVar3 = &this[0x3a].field2_0xc;
  local_8._0_1_ = 0x39;
  local_48 = (Attribute *)puVar3;
  Attribute::Attribute((Attribute *)puVar3,local_2c);
  *puVar3 = &ContinuousAttribute<float>::vftable;
  this[0x3e].Object_data.offset_0x4 = (int *)0x0;
  this[0x3e].field2_0xc = 0;
  this[0x3e].field3_0x10 = 0;
  local_8._0_1_ = 0x3b;
  FUN_0066b110(2,&local_54);
  local_8._0_1_ = 0x3d;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_54 = (Attribute *)0x3f800000;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("textureContrast",0xf);
  pAVar4 = (Attribute *)(this + 0x3f);
  local_8._0_1_ = 0x3e;
  local_48 = pAVar4;
  Attribute::Attribute(pAVar4,local_44);
  pAVar4->vftablePtr = (Attribute_vftable *)&ContinuousAttribute<float>::vftable;
  this[0x42].field3_0x10 = 0;
  this[0x43].vftablePtr = (MeshShape_vftable *)0x0;
  this[0x43].Object_data.offset_0x0 = 0;
  local_8._0_1_ = 0x40;
  FUN_0066b110(2,&local_54);
  local_8._0_1_ = 0x42;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_54 = (Attribute *)0x3f800000;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("textureSaturation",0x11);
  ppiVar1 = &this[0x43].Object_data.offset_0x4;
  local_8._0_1_ = 0x43;
  local_48 = (Attribute *)ppiVar1;
  Attribute::Attribute((Attribute *)ppiVar1,local_2c);
  *ppiVar1 = (int *)&ContinuousAttribute<float>::vftable;
  this[0x47].Object_data.offset_0x0 = 0;
  this[0x47].Object_data.offset_0x4 = (int *)0x0;
  this[0x47].field2_0xc = 0;
  local_8._0_1_ = 0x45;
  FUN_0066b110(2,&local_54);
  local_8._0_1_ = 0x47;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_54 = (Attribute *)0x3f800000;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("strokeTextureOpacity",0x14);
  this_00 = &this[0x47].field3_0x10;
  local_8._0_1_ = 0x48;
  local_48 = (Attribute *)this_00;
  Attribute::Attribute((Attribute *)this_00,local_44);
  *this_00 = (int)&ContinuousAttribute<float>::vftable;
  this[0x4b].field2_0xc = 0;
  this[0x4b].field3_0x10 = 0;
  this[0x4c].vftablePtr = (MeshShape_vftable *)0x0;
  local_8._0_1_ = 0x4a;
  FUN_0066b110(2,&local_54);
  local_8._0_1_ = 0x4c;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_54 = (Attribute *)0x3f800000;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("strokeTextureBrightness",0x17);
  pOVar2 = &this[0x4c].Object_data;
  local_8._0_1_ = 0x4d;
  local_48 = (Attribute *)pOVar2;
  Attribute::Attribute((Attribute *)pOVar2,local_2c);
  pOVar2->offset_0x0 = (int)&ContinuousAttribute<float>::vftable;
  this[0x50].vftablePtr = (MeshShape_vftable *)0x0;
  this[0x50].Object_data.offset_0x0 = 0;
  this[0x50].Object_data.offset_0x4 = (int *)0x0;
  local_8._0_1_ = 0x4f;
  FUN_0066b110(2,&local_54);
  local_8._0_1_ = 0x51;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_54 = (Attribute *)0x3f800000;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("strokeTextureContrast",0x15);
  puVar3 = &this[0x50].field2_0xc;
  local_8._0_1_ = 0x52;
  local_48 = (Attribute *)puVar3;
  Attribute::Attribute((Attribute *)puVar3,local_44);
  *puVar3 = &ContinuousAttribute<float>::vftable;
  this[0x54].Object_data.offset_0x4 = (int *)0x0;
  this[0x54].field2_0xc = 0;
  this[0x54].field3_0x10 = 0;
  local_8._0_1_ = 0x54;
  FUN_0066b110(2,&local_54);
  local_8._0_1_ = 0x56;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_54 = (Attribute *)0x3f800000;
  FUN_00403350("strokeTextureSaturation");
  pAVar4 = (Attribute *)(this + 0x55);
  local_8._0_1_ = 0x57;
  local_48 = pAVar4;
  Attribute::Attribute(pAVar4,local_2c);
  pAVar4->vftablePtr = (Attribute_vftable *)&ContinuousAttribute<float>::vftable;
  this[0x58].field3_0x10 = 0;
  this[0x59].vftablePtr = (MeshShape_vftable *)0x0;
  this[0x59].Object_data.offset_0x0 = 0;
  local_8._0_1_ = 0x59;
  FUN_0066b110(2,&local_54);
  local_8._0_1_ = 0x5b;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_54 = (Attribute *)0x3f800000;
  FUN_00403350("strokeTextureStretch");
  ppiVar1 = &this[0x59].Object_data.offset_0x4;
  local_8._0_1_ = 0x5c;
  local_48 = (Attribute *)ppiVar1;
  Attribute::Attribute((Attribute *)ppiVar1,local_44);
  *ppiVar1 = (int *)&ContinuousAttribute<float>::vftable;
  this[0x5d].Object_data.offset_0x0 = 0;
  this[0x5d].Object_data.offset_0x4 = (int *)0x0;
  this[0x5d].field2_0xc = 0;
  local_8._0_1_ = 0x5e;
  FUN_0066b110(2,&local_54);
  local_8._0_1_ = 0x60;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00403350("extrusionMatrix");
  local_8._0_1_ = 0x61;
  ContinuousAttribute<plasma::Matrix<float>_>::ContinuousAttribute<plasma::Matrix<float>_>
            ((ContinuousAttribute<plasma::Matrix<float>_> *)&this[0x5d].field3_0x10,local_2c,
             local_98);
  local_8._0_1_ = 99;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_54 = (Attribute *)0xffffffff;
  FUN_00403350("texture");
  pOVar2 = &this[0x62].Object_data;
  local_8._0_1_ = 100;
  local_48 = (Attribute *)pOVar2;
  Attribute::Attribute((Attribute *)pOVar2,local_44);
  pOVar2->offset_0x0 = (int)&DiscreteAttribute<int>::vftable;
  this[0x66].vftablePtr = (MeshShape_vftable *)0x0;
  this[0x66].Object_data.offset_0x0 = 0;
  this[0x66].Object_data.offset_0x4 = (int *)0x0;
  local_8._0_1_ = 0x66;
  FUN_004871e0(2,&local_54);
  local_8._0_1_ = 0x68;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_54 = (Attribute *)0xffffffff;
  FUN_00403350("strokeTexture");
  puVar3 = &this[0x66].field2_0xc;
  local_8._0_1_ = 0x69;
  local_48 = (Attribute *)puVar3;
  Attribute::Attribute((Attribute *)puVar3,local_2c);
  *puVar3 = &DiscreteAttribute<int>::vftable;
  this[0x6a].Object_data.offset_0x4 = (int *)0x0;
  this[0x6a].field2_0xc = 0;
  this[0x6a].field3_0x10 = 0;
  local_8._0_1_ = 0x6b;
  FUN_004871e0(2,&local_54);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  this[0x6b].vftablePtr = (MeshShape_vftable *)0x0;
  this[0x6b].Object_data.offset_0x0 = 0;
  this[0x6b].Object_data.offset_0x4 = (int *)0x0;
  this[0x6b].field2_0xc = 0;
  this[0x6b].field3_0x10 = 0;
  this[0x6c].vftablePtr = (MeshShape_vftable *)0x0;
  this[0x6c].Object_data.offset_0x0 = 0;
  this[0x6d].Object_data.offset_0x0 = 0;
  this[0x6d].Object_data.offset_0x4 = (int *)0x0;
  local_8._0_1_ = 0x6e;
  this[0x70].field3_0x10 = 0;
  this[0x71].vftablePtr = (MeshShape_vftable *)0x0;
  iVar5 = FUN_0043c870();
  this[0x70].field3_0x10 = iVar5;
  this[0x71].Object_data.offset_0x0 = 0;
  this[0x71].Object_data.offset_0x4 = (int *)0x0;
  this[0x71].field2_0xc = 0;
  local_8 = CONCAT31(local_8._1_3_,0x70);
  this[3].field2_0xc = 1;
  FUN_00664ba0(&this[4].field2_0xc);
  FUN_00664ba0(this + 9);
  FUN_00664ba0(&this[0xd].Object_data.offset_0x4);
  FUN_00664ba0(&this[0x11].field3_0x10);
  FUN_00664ba0(&this[0x1a].field2_0xc);
  FUN_00664ba0(&this[0x16].Object_data);
  FUN_00664ba0(this + 0x1f);
  FUN_00664ba0(&this[0x24].field2_0xc);
  FUN_00664ba0(this + 0x29);
  FUN_00664ba0(&this[0x2d].Object_data.offset_0x4);
  FUN_00664ba0(&this[0x31].field3_0x10);
  FUN_00664ba0(&this[0x36].Object_data);
  FUN_00664ba0(&this[0x3a].field2_0xc);
  FUN_00664ba0(this + 0x3f);
  FUN_00664ba0(&this[0x43].Object_data.offset_0x4);
  FUN_00664ba0(&this[0x47].field3_0x10);
  FUN_00664ba0(&this[0x4c].Object_data);
  FUN_00664ba0(&this[0x50].field2_0xc);
  FUN_00664ba0(this + 0x55);
  FUN_00664ba0(&this[0x59].Object_data.offset_0x4);
  FUN_00664ba0(&this[0x62].Object_data);
  FUN_00664ba0(puVar3);
  FUN_00664ba0(&this[0x5d].field3_0x10);
  FUN_00423e70();
  FUN_00423e70();
  FUN_00423e70();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::MeshShape::~MeshShape @ 006674b0  kind=game  attributed-by=rtti  size=132 */

void __thiscall plasma::MeshShape::~MeshShape(MeshShape *this)

{
  int iVar1;
  uint uVar2;
  undefined1 local_1c [4];
  MeshShape *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7cb5;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  iVar1 = this[0x71].Object_data.offset_0x0;
  local_8 = 0x18;
  local_18 = this;
  if (iVar1 != 0) {
    FUN_00639cf0(iVar1,this[0x71].Object_data.offset_0x4,&local_11,this,uVar2);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[0x71].Object_data.offset_0x0);
  }
  FUN_0067eb10(local_1c,*(undefined4 *)this[0x70].field3_0x10,(undefined4 *)this[0x70].field3_0x10);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)this[0x70].field3_0x10);
}


/* plasma::MeshShape::deleting_destructor @ 00667da0  kind=game  attributed-by=rtti  size=30 */

MeshShape * __thiscall plasma::MeshShape::deleting_destructor(MeshShape *this,byte param_1)

{
  ~MeshShape(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::MeshShape::vfunction19 @ 00668b60  kind=game  attributed-by=rtti  size=435 */

/* plasma::MeshShape member function inherited by plasma::SmoothMeshShape */

void __thiscall plasma::MeshShape::vfunction19(MeshShape *this,float *param_1,float *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int extraout_EDX;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 *puVar10;
  undefined1 local_71 [65];
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  undefined8 local_20;
  float local_18;
  float fStack_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_71[0] = 1;
  FUN_00423e70();
  puVar10 = local_71;
  cVar4 = (*this->vftablePtr->vfunction10)(this,&local_10,&local_30);
  iVar5 = extraout_EDX;
  if (cVar4 != '\0') {
    fVar9 = (*param_2 - *param_1) / (local_30 - local_10);
    fVar8 = (param_2[1] - param_1[1]) / (local_2c - local_c);
    if (ABS(fVar9) < 1e-18) {
      fVar9 = 1.0;
      local_10 = *param_1;
    }
    if (ABS(fVar8) < 1e-18) {
      fVar8 = 1.0;
      local_c = param_1[1];
    }
    piVar2 = (int *)*this[8].Object_data.offset_0x4;
    iVar5 = 0;
    if (0 < (int)(piVar2[1] - *piVar2 & 0xfffffff8U)) {
      do {
        iVar5 = iVar5 + 1;
        iVar3 = *(int *)this[8].Object_data.offset_0x4[this[6].Object_data.offset_0x0];
        uVar1 = *(undefined8 *)(iVar3 + -8 + iVar5 * 8);
        local_28 = (float)uVar1;
        local_28 = local_28 - local_10;
        fStack_24 = (float)((ulonglong)uVar1 >> 0x20);
        fStack_24 = fStack_24 - local_c;
        fVar6 = local_28 * fVar9;
        fVar7 = fStack_24 * fVar8;
        _local_18 = CONCAT44(fVar7,fVar6);
        local_20 = CONCAT44(fVar7 + param_1[1],*param_1 + fVar6);
        *(undefined8 *)(iVar3 + -8 + iVar5 * 8) = local_20;
      } while (iVar5 < piVar2[1] - *piVar2 >> 3);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,iVar5,puVar10);
  return;
}


/* plasma::MeshShape::vfunction8 @ 00669060  kind=game  attributed-by=rtti  size=27 */

/* plasma::MeshShape member function inherited by plasma::SmoothMeshShape */

void __thiscall plasma::MeshShape::vfunction8(MeshShape *this,undefined4 *param_1)

{
  MeshShape_vftable *pMVar1;
  
  pMVar1 = this[0x6d].vftablePtr;
  *param_1 = this[0x6c].field3_0x10;
  param_1[1] = pMVar1;
  return;
}


/* plasma::MeshShape::vfunction7 @ 00669080  kind=game  attributed-by=rtti  size=27 */

/* plasma::MeshShape member function inherited by plasma::SmoothMeshShape */

void __thiscall plasma::MeshShape::vfunction7(MeshShape *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = this[0x6c].field2_0xc;
  *param_1 = this[0x6c].Object_data.offset_0x4;
  param_1[1] = uVar1;
  return;
}


/* plasma::MeshShape::vfunction14 @ 006690a0  kind=game  attributed-by=rtti  size=421 */

int * __thiscall plasma::MeshShape::vfunction14(MeshShape *this)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0064f380(&this->field2_0xc);
  FUN_0063ce30(&this[4].field2_0xc);
  FUN_0063cf40(&this[0xd].Object_data.offset_0x4);
  FUN_0063cf40(&this[0x11].field3_0x10);
  FUN_0063cd20(this + 0x1f);
  FUN_0063ce30(this + 9);
  FUN_00661680(&this[0x62].Object_data);
  FUN_0067a7b0(this + 0x66);
  FUN_00661680(&this[0x66].field2_0xc);
  FUN_0067a7b0(&this[0x6a].Object_data.offset_0x4);
  FUN_00661680(&this[0x24].field2_0xc);
  FUN_0063d170(&this[0x28].Object_data.offset_0x4);
  FUN_00661680(&this[0x2d].Object_data.offset_0x4);
  FUN_0063d290(&this[0x31].Object_data);
  FUN_00661680(this + 0x29);
  FUN_0063d170(&this[0x2c].field3_0x10);
  FUN_00661680(&this[0x31].field3_0x10);
  FUN_0063d050(&this[0x35].field2_0xc);
  FUN_0067a7b0(&this[0x23].Object_data.offset_0x4);
  FUN_0067a7b0(this + 0x24);
  piVar1[0x217] = (int)this[0x6b].vftablePtr;
  piVar1[0x219] = (int)this[0x6b].Object_data.offset_0x4;
  piVar1[0x218] = this[0x6b].Object_data.offset_0x0;
  piVar1[0x21a] = this[0x6b].field2_0xc;
  FUN_0066b200(&this[0x6b].field3_0x10);
  (**(code **)(*piVar1 + 0x4c))();
  return piVar1;
}


/* plasma::MeshShape::vfunction10 @ 00669460  kind=game  attributed-by=rtti  size=364 */

/* plasma::MeshShape member function inherited by plasma::SmoothMeshShape */

void __thiscall
plasma::MeshShape::vfunction10
          (MeshShape *this,float *param_1,float *param_2,float *param_3,char *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  piVar4 = (int *)*this[8].Object_data.offset_0x4;
  iVar7 = 0;
  if (0 < (int)(piVar4[1] - *piVar4 & 0xfffffff8U)) {
    do {
      iVar5 = *(int *)this[8].Object_data.offset_0x4[this[6].Object_data.offset_0x0];
      fVar2 = *(float *)(iVar5 + iVar7 * 8);
      fVar3 = *(float *)(iVar5 + 4 + iVar7 * 8);
      fVar8 = 1.0 / (param_3[3] * fVar2 + param_3[7] * fVar3 + param_3[0xf]);
      fVar9 = fVar8 * (*param_3 * fVar2 + param_3[4] * fVar3 + param_3[0xc]);
      fVar8 = fVar8 * (param_3[1] * fVar2 + param_3[5] * fVar3 + param_3[0xd]);
      local_10 = CONCAT44(fVar8,fVar9);
      if (*param_4 == '\0') {
        pfVar6 = (float *)&local_10;
        if (*param_1 <= fVar9 && fVar9 != *param_1) {
          pfVar6 = param_1;
        }
        pfVar1 = param_1 + 1;
        *param_1 = *pfVar6;
        pfVar6 = (float *)((int)&local_10 + 4);
        if (*pfVar1 <= fVar8 && fVar8 != *pfVar1) {
          pfVar6 = pfVar1;
        }
        *pfVar1 = *pfVar6;
        pfVar6 = (float *)&local_10;
        if (fVar9 < *param_2) {
          pfVar6 = param_2;
        }
        pfVar1 = param_2 + 1;
        *param_2 = *pfVar6;
        pfVar6 = (float *)((int)&local_10 + 4);
        if (fVar8 < *pfVar1) {
          pfVar6 = pfVar1;
        }
        *pfVar1 = *pfVar6;
      }
      else {
        *(undefined8 *)param_1 = local_10;
        *(undefined8 *)param_2 = local_10;
        *param_4 = '\0';
      }
      iVar7 = iVar7 + 1;
      piVar4 = (int *)*this[8].Object_data.offset_0x4;
    } while (iVar7 < piVar4[1] - *piVar4 >> 3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::MeshShape::vfunction5 @ 0066ac20  kind=game  attributed-by=rtti  size=354 */

void __thiscall plasma::MeshShape::vfunction5(MeshShape *this,float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  fVar1 = *param_1;
  if (((((float)this[0x6c].Object_data.offset_0x4 <= fVar1) &&
       (fVar2 = param_1[1], (float)this[0x6c].field2_0xc <= fVar2)) &&
      (fVar1 < (float)this[0x6c].field3_0x10 || fVar1 == (float)this[0x6c].field3_0x10)) &&
     (fVar2 < (float)this[0x6d].vftablePtr || fVar2 == (float)this[0x6d].vftablePtr)) {
    piVar8 = (int *)this[0x6b].field3_0x10;
    iVar4 = ((int)this[0x6c].vftablePtr - (int)piVar8) / 0xc;
    local_24 = 0;
    if (0 < iVar4) {
      do {
        piVar9 = (int *)*piVar8;
        if (piVar9 != (int *)piVar8[1]) {
          iVar3 = *(int *)this[8].Object_data.offset_0x4[this[6].Object_data.offset_0x0];
          iVar6 = (piVar8[1] - (int)piVar9 >> 2) + -2;
          local_20 = *(undefined8 *)(iVar3 + *piVar9 * 8);
          iVar7 = 0;
          if (0 < iVar6) {
            piVar9 = piVar9 + 2;
            do {
              local_18 = *(undefined8 *)(iVar3 + piVar9[-1] * 8);
              local_10 = *(undefined8 *)(iVar3 + *piVar9 * 8);
              cVar5 = FUN_0067aa70(&local_20,param_1);
              if (cVar5 != '\0') {
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
              iVar7 = iVar7 + 1;
              piVar9 = piVar9 + 1;
            } while (iVar7 < iVar6);
          }
        }
        local_24 = local_24 + 1;
        piVar8 = piVar8 + 3;
      } while (local_24 < iVar4);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::MeshShape::vfunction20 @ 0066be90  kind=game  attributed-by=rtti  size=438 */

/* plasma::MeshShape member function inherited by plasma::SmoothMeshShape */

void __thiscall plasma::MeshShape::vfunction20(MeshShape *this)

{
  float fVar1;
  MeshShape_vftable *pMVar2;
  deleting_destructor *pdVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  FUN_0066c050();
  pdVar3 = (&(this[0x66].vftablePtr)->deleting_destructor)[this[99].field3_0x10];
  if (pdVar3 == (deleting_destructor *)0xffffffff) {
    this[0x6d].Object_data.offset_0x0 = 0;
  }
  else {
    iVar7 = this[0x6d].Object_data.offset_0x0;
    if ((iVar7 == 0) || (*(deleting_destructor **)(iVar7 + 0x4c) != pdVar3)) {
      iVar7 = FUN_00659ef0(pdVar3);
      this[0x6d].Object_data.offset_0x0 = iVar7;
    }
  }
  iVar7 = this[0x6a].Object_data.offset_0x4[this[0x68].Object_data.offset_0x0];
  if (iVar7 == -1) {
    this[0x6d].Object_data.offset_0x4 = (int *)0x0;
  }
  else {
    piVar6 = this[0x6d].Object_data.offset_0x4;
    if ((piVar6 == (int *)0x0) || (piVar6[0x13] != iVar7)) {
      piVar6 = (int *)FUN_00659ef0(iVar7);
      this[0x6d].Object_data.offset_0x4 = piVar6;
    }
  }
  piVar6 = (int *)*this[8].Object_data.offset_0x4;
  if ((piVar6[1] - *piVar6 & 0xfffffff8U) != 0) {
    iVar7 = 1;
    puVar4 = *(undefined4 **)this[8].Object_data.offset_0x4[this[6].Object_data.offset_0x0];
    this[0x6c].Object_data.offset_0x4 = (int *)*puVar4;
    this[0x6c].field2_0xc = puVar4[1];
    this[0x6c].field3_0x10 = (int)this[0x6c].Object_data.offset_0x4;
    this[0x6d].vftablePtr = (MeshShape_vftable *)this[0x6c].field2_0xc;
    piVar6 = (int *)*this[8].Object_data.offset_0x4;
    if ((int)(piVar6[1] - *piVar6 & 0xfffffff8U) < 9) {
      *(undefined1 *)((int)&this[2].Object_data.offset_0x0 + 1) = 1;
      return;
    }
    do {
      iVar5 = *(int *)this[8].Object_data.offset_0x4[this[6].Object_data.offset_0x0];
      piVar6 = *(int **)(iVar5 + iVar7 * 8);
      if ((float)piVar6 < (float)this[0x6c].Object_data.offset_0x4) {
        this[0x6c].Object_data.offset_0x4 = piVar6;
      }
      fVar1 = *(float *)(iVar5 + 4 + iVar7 * 8);
      if (fVar1 < (float)this[0x6c].field2_0xc) {
        this[0x6c].field2_0xc = fVar1;
      }
      fVar1 = *(float *)(iVar5 + iVar7 * 8);
      if ((float)this[0x6c].field3_0x10 <= fVar1 && fVar1 != (float)this[0x6c].field3_0x10) {
        this[0x6c].field3_0x10 = (int)fVar1;
      }
      pMVar2 = *(MeshShape_vftable **)(iVar5 + 4 + iVar7 * 8);
      if ((float)this[0x6d].vftablePtr <= (float)pMVar2 &&
          (float)pMVar2 != (float)this[0x6d].vftablePtr) {
        this[0x6d].vftablePtr = pMVar2;
      }
      iVar7 = iVar7 + 1;
      piVar6 = (int *)*this[8].Object_data.offset_0x4;
    } while (iVar7 < piVar6[1] - *piVar6 >> 3);
    *(undefined1 *)((int)&this[2].Object_data.offset_0x0 + 1) = 1;
    return;
  }
  this[0x6c].Object_data.offset_0x4 = (int *)0x0;
  this[0x6c].field2_0xc = 0;
  this[0x6c].field3_0x10 = 0;
  this[0x6d].vftablePtr = (MeshShape_vftable *)0x0;
  *(undefined1 *)((int)&this[2].Object_data.offset_0x0 + 1) = 1;
  return;
}


/* plasma::MeshShape::vfunction13 @ 0066c8f0  kind=game  attributed-by=rtti  size=781 */

/* plasma::MeshShape member function inherited by plasma::SmoothMeshShape */

void __thiscall
plasma::MeshShape::vfunction13
          (MeshShape *this,float *param_1,float *param_2,float *param_3,undefined8 *param_4,
          float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_64;
  int local_5c;
  float local_58;
  float fStack_54;
  float local_18;
  float fStack_14;
  
  uVar6 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_5c = 0;
  iVar7 = (**(code **)(this[4].field2_0xc + 4))();
  if (0 < iVar7) {
    do {
      local_64 = 0;
      piVar4 = this[8].Object_data.offset_0x4;
      piVar5 = (int *)*piVar4;
      if (0 < (int)(piVar5[1] - *piVar5 & 0xfffffff8U)) {
        pfVar8 = *(float **)piVar4[local_5c];
        do {
          fVar1 = *pfVar8;
          fVar2 = pfVar8[1];
          fVar3 = *param_1;
          fVar9 = 1.0 / (param_5[3] * fVar1 + param_5[7] * fVar2 + param_5[0xf]);
          fVar10 = (fVar1 * *param_5 + fVar2 * param_5[4] + param_5[0xc]) * fVar9;
          fVar9 = (fVar1 * param_5[1] + fVar2 * param_5[5] + param_5[0xd]) * fVar9;
          if (fVar3 <= fVar10) {
            if (*param_2 + fVar3 <= fVar10) {
              local_18 = 1.0;
            }
            else {
              local_18 = (fVar10 - fVar3) / *param_2;
            }
          }
          else {
            local_18 = 0.0;
          }
          fVar1 = param_1[1];
          if (fVar1 <= fVar9) {
            if (param_2[1] + fVar1 <= fVar9) {
              fStack_14 = 1.0;
            }
            else {
              fStack_14 = (fVar9 - fVar1) / param_2[1];
            }
          }
          else {
            fStack_14 = 0.0;
          }
          local_64 = local_64 + 1;
          local_58 = (float)*param_4;
          fStack_54 = (float)((ulonglong)*param_4 >> 0x20);
          fVar10 = *param_3 + (fVar10 - fVar3) + local_18 * (local_58 - *param_2);
          fVar9 = param_3[1] + (fVar9 - fVar1) + fStack_14 * (fStack_54 - param_2[1]);
          fVar1 = param_6[5];
          fVar2 = param_6[1];
          fVar3 = param_6[0xd];
          fVar11 = 1.0 / (fVar9 * param_6[7] + fVar10 * param_6[3] + param_6[0xf]);
          *pfVar8 = (*param_6 * fVar10 + fVar9 * param_6[4] + param_6[0xc]) * fVar11;
          pfVar8[1] = (fVar9 * fVar1 + fVar10 * fVar2 + fVar3) * fVar11;
          pfVar8 = pfVar8 + 2;
        } while (local_64 < piVar5[1] - *piVar5 >> 3);
      }
      local_5c = local_5c + 1;
      iVar7 = (**(code **)(this[4].field2_0xc + 4))();
    } while (local_5c < iVar7);
  }
  (*this->vftablePtr->vfunction20)(this);
  __security_check_cookie(uVar6 ^ (uint)&stack0xfffffffc);
  return;
}


