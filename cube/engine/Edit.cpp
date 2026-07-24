// Edit (engine) -- cube. 12 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Edit.h"

/* plasma::Edit::Edit @ 00637700  kind=game  attributed-by=rtti  size=87 */

Edit * __thiscall plasma::Edit::Edit(Edit *this,int param_1,int param_2,undefined4 param_3)

{
  Widget::Widget((Widget *)this,param_1,param_2,param_3);
  this->vftablePtr = &vftable_for_NamedObject;
  this->vftablePtr = &vftable_for_Deformer;
  this->Edit_data = (int *)0x0;
  *(undefined4 *)&this->field_0x164 = 0;
  this->field219_0x174 = 0;
  this->field220_0x178 = 0;
  this->offset_0x2c = 2;
  return this;
}


/* plasma::Edit::deleting_destructor_for_NamedObject @ 00637760  kind=game  attributed-by=rtti  size=43 */

Edit * __thiscall plasma::Edit::deleting_destructor_for_NamedObject(Edit *this,byte param_1)

{
                    /* inlined destructor: plasma::Edit::~Edit */
  this->vftablePtr = &vftable_for_NamedObject;
  this->vftablePtr = &vftable_for_Deformer;
  Widget::~Widget((Widget *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::Edit::vfunction41_for_NamedObject @ 00637790  kind=game  attributed-by=rtti  size=183 */

Widget * __thiscall plasma::Edit::vfunction41_for_NamedObject(Edit *this,int param_1)

{
  Widget *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7dcb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = operator_new(0x17c);
  local_8 = 0;
  if (this_00 != (Widget *)0x0) {
    Widget::Widget(this_00,(int)this,param_1);
    this_00->vftablePtr = (Widget_vftable_for_NamedObject *)&vftable_for_NamedObject;
    this_00->vftablePtr = (Widget_vftable_for_Deformer *)&vftable_for_Deformer;
    this_00[1].vftablePtr = (Widget_vftable_for_NamedObject *)0x0;
    this_00[1].field1_0x4 = *(int **)&this->field_0x164;
    *(undefined4 *)&this_00[1].field_0x14 = 0;
    *(undefined4 *)&this_00[1].field_0x18 = 0;
    this_00->offset_0x2c = 2.8026e-45;
    ExceptionList = local_10;
    return this_00;
  }
  ExceptionList = local_10;
  return (Widget *)0x0;
}


/* plasma::Edit::vfunction2_for_NamedObject @ 006378e0  kind=game  attributed-by=rtti  size=880 */

void __thiscall plasma::Edit::vfunction2_for_NamedObject(Edit *this)

{
  int iVar1;
  int *piVar2;
  Edit *pEVar3;
  int iVar4;
  int iVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  uint local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pEVar3 = (Edit *)FUN_006531e0();
  if ((pEVar3 == this) && (this->Edit_data[0x7a] != 0)) {
    FUN_00639460();
    FUN_00660240(this->Edit_data[0x6f],0);
    iVar1 = this->field219_0x174;
    iVar5 = this->field220_0x178 + iVar1;
    iVar4 = iVar1;
    if (iVar5 < iVar1) {
      iVar4 = iVar5;
      iVar5 = iVar1;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (*(int *)(this->Edit_data[0x2a] + 0x10 + this->Edit_data[0x1f] * 0x18) < iVar5) {
      iVar5 = *(int *)(this->Edit_data[0x2a] + 0x10 + this->Edit_data[0x1f] * 0x18);
    }
    piVar2 = this->Edit_data;
    FUN_0065e8d0(piVar2[0x2a] + piVar2[0x1f] * 0x18,iVar4,this->offset_0x13c + 0x48,piVar2[0x6f],
                 piVar2[0x70],piVar2[0x71],piVar2[0x72],piVar2[0x79],&local_10,&local_20,
                 piVar2[0x7b],*(byte *)(piVar2 + 0x7c) & 1);
    piVar2 = this->Edit_data;
    local_14 = local_10;
    FUN_0065e8d0(piVar2[0x2a] + piVar2[0x1f] * 0x18,iVar5,this->offset_0x13c + 0x48,piVar2[0x6f],
                 piVar2[0x70],piVar2[0x71],piVar2[0x72],piVar2[0x79],&local_10,&local_20,
                 piVar2[0x7b],*(byte *)(piVar2 + 0x7c) & 1);
    local_20 = local_10;
    local_10 = local_14;
    local_c = this->Edit_data[0x6f] ^ 0x80000000;
    local_20 = local_20 - local_14;
    local_1c = (float)this->Edit_data[0x6f] * 1.25;
    (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x10))(&local_10,&local_20);
    iVar1 = this->field219_0x174;
    if ((-1 < iVar1) &&
       (piVar2 = this->Edit_data, iVar1 <= *(int *)(piVar2[0x2a] + 0x10 + piVar2[0x1f] * 0x18))) {
      FUN_0065e8d0(piVar2[0x2a] + piVar2[0x1f] * 0x18,iVar1,this->offset_0x13c + 0x48,piVar2[0x6f],
                   piVar2[0x70],piVar2[0x71],piVar2[0x72],piVar2[0x79],local_28,&local_18,
                   piVar2[0x7b],*(byte *)(piVar2 + 0x7c) & 1);
      local_24 = this->Edit_data[0x6f] ^ 0x80000000;
      local_18 = 0x3f800000;
      local_14 = (float)this->Edit_data[0x6f] * 1.25;
      local_38 = 0x3f800000;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0x3f800000;
      (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0xc))(local_28,&local_18,&local_38);
    }
    FUN_00639a60();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::Edit::vfunction6_for_NamedObject @ 00637c50  kind=game  attributed-by=rtti  size=5 */

undefined1 __thiscall plasma::Edit::vfunction6_for_NamedObject(void)

{
  return 1;
}


/* plasma::Edit::vfunction8_for_NamedObject @ 00637e80  kind=game  attributed-by=rtti  size=119 */

void __thiscall plasma::Edit::vfunction8_for_NamedObject(Edit *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(this->offset_0x13c + 0x34);
  if ((piVar3 == (int *)0x0) || (piVar3[0x12] != 3)) {
    piVar3 = (int *)0x0;
  }
  this->Edit_data = piVar3;
  FUN_00638cf0();
  if (((this->offset_0x13c != 0) && (iVar1 = *(int *)(this->offset_0x13c + 0x28), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x34) != 0)) {
    *(undefined4 *)
     (*(int *)(*(int *)(iVar1 + 0x3c) + 0xec) + *(int *)(*(int *)(iVar1 + 0x3c) + 0xc0) * 4) = 1;
  }
  iVar1 = *(int *)(this->offset_0x13c + 0x38);
  iVar2 = *(int *)(iVar1 + 0x68);
  iVar1 = *(int *)(iVar1 + 0x94);
  *(undefined4 *)&this->field_0x16c = *(undefined4 *)(iVar1 + iVar2 * 8);
  *(undefined4 *)&this->field_0x170 = *(undefined4 *)(iVar1 + 4 + iVar2 * 8);
  return;
}


/* plasma::Edit::vfunction27_for_NamedObject @ 00637f00  kind=game  attributed-by=rtti  size=436 */

void __thiscall plasma::Edit::vfunction27_for_NamedObject(Edit *this,undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  ushort local_60 [2];
  undefined1 local_5c [24];
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_006f59d8;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if (this->Edit_data == (int *)0x0) goto LAB_0063809c;
  if ((ushort)param_1 < 0x20) goto LAB_0063809c;
  this->offset_0x128 = 1;
  FUN_0040eb60(&PTR_006fccac);
  local_8 = 0;
  FUN_00425390(1,param_1);
  if (this->field220_0x178 == 0) {
LAB_00637fc9:
    local_18 = 7;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    local_1c = 0;
    FUN_0040f680(this->Edit_data[0x2a] + this->Edit_data[0x1f] * 0x18,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00638cf0();
    FUN_0043a270(this->field219_0x174,local_44,0,0xffffffff);
    if (*(undefined4 **)&this->field_0x164 != (undefined4 *)0x0) {
      cVar1 = (**(code **)**(undefined4 **)&this->field_0x164)(local_2c);
      if (cVar1 == '\0') {
        FUN_00593e50();
        goto LAB_0063808b;
      }
    }
    FUN_00636ad0(local_2c);
    this->field219_0x174 = this->field219_0x174 + 1;
    FUN_00638610();
    FUN_00627cb0(0x14);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  }
  else {
    if (*(int *)&this->field_0x164 == 0) {
LAB_00637fc2:
      FUN_00637850();
      goto LAB_00637fc9;
    }
    local_60[1] = 0;
    local_60[0] = (ushort)param_1;
    FUN_0040eb60(local_60);
    local_8._0_1_ = 1;
    cVar1 = (**(code **)**(undefined4 **)&this->field_0x164)(local_5c,uVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00593e50();
    if (cVar1 != '\0') goto LAB_00637fc2;
  }
LAB_0063808b:
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
LAB_0063809c:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::Edit::vfunction25_for_NamedObject @ 006380c0  kind=game  attributed-by=rtti  size=598 */

void __thiscall plasma::Edit::vfunction25_for_NamedObject(Edit *this,short param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  
  if (this->Edit_data == (int *)0x0) {
    return;
  }
  FUN_00638cf0();
  this->offset_0x128 = 1;
  if (param_1 == 0xd) {
    FUN_00659df0(0);
    FUN_00638610();
    return;
  }
  if (param_1 == 0x25) {
    if (0 < this->field219_0x174) {
      this->field219_0x174 = this->field219_0x174 + -1;
      cVar3 = FUN_0043a3f0(0x10);
      if (cVar3 != '\0') {
        this->field220_0x178 = this->field220_0x178 + 1;
        FUN_00638610();
        return;
      }
      this->field220_0x178 = 0;
    }
    FUN_00638610();
    return;
  }
  if (param_1 == 0x27) {
    if (this->field219_0x174 < *(int *)(this->Edit_data[0x2a] + 0x10 + this->Edit_data[0x1f] * 0x18)
       ) {
      this->field219_0x174 = this->field219_0x174 + 1;
      cVar3 = FUN_0043a3f0(0x10);
      if (cVar3 != '\0') {
        this->field220_0x178 = this->field220_0x178 + -1;
        FUN_00638610();
        return;
      }
      this->field220_0x178 = 0;
      FUN_00638610();
      return;
    }
LAB_00638309:
    FUN_00638610();
    return;
  }
  if (param_1 != 0x2e) {
    if (param_1 != 8) {
      if (param_1 == 0x24) {
        cVar3 = FUN_0043a3f0(0x10);
        if (cVar3 != '\0') {
          this->field220_0x178 = this->field220_0x178 + this->field219_0x174;
          this->field219_0x174 = 0;
          FUN_00638610();
          return;
        }
        this->field220_0x178 = 0;
        this->field219_0x174 = 0;
        FUN_00638610();
        return;
      }
      if (param_1 != 0x23) {
        return;
      }
      cVar3 = FUN_0043a3f0(0x10);
      if (cVar3 == '\0') {
        this->field220_0x178 = 0;
      }
      else {
        this->field220_0x178 =
             this->field220_0x178 +
             (this->field219_0x174 -
             *(int *)(this->Edit_data[0x2a] + 0x10 + this->Edit_data[0x1f] * 0x18));
      }
      this->field219_0x174 = *(int *)(this->Edit_data[0x2a] + 0x10 + this->Edit_data[0x1f] * 0x18);
      goto LAB_00638309;
    }
    if (this->field220_0x178 == 0) {
      if (this->field219_0x174 < 1) {
        return;
      }
      iVar1 = this->Edit_data[0x1f];
      iVar2 = this->Edit_data[0x2a];
      puVar4 = (undefined4 *)(iVar2 + iVar1 * 0x18);
      if (7 < *(uint *)(iVar2 + 0x14 + iVar1 * 0x18)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      FUN_00439fc0(&param_1,(int)puVar4 + this->field219_0x174 * 2 + -2);
      this->field219_0x174 = this->field219_0x174 + -1;
      (**(code **)(*this->Edit_data + 4))(1);
      FUN_00638610();
      FUN_00627cb0(0x14);
      return;
    }
  }
  FUN_00637850();
  FUN_00638610();
  return;
}


/* plasma::Edit::vfunction14_for_NamedObject @ 00638320  kind=game  attributed-by=rtti  size=72 */

void __thiscall plasma::Edit::vfunction14_for_NamedObject(Edit *this)

{
  int *piVar1;
  
  piVar1 = this->Edit_data;
  if (piVar1 != (int *)0x0) {
    this->field219_0x174 = *(int *)(piVar1[0x2a] + 0x10 + piVar1[0x1f] * 0x18);
    this->field220_0x178 = -*(int *)(piVar1[0x2a] + 0x10 + piVar1[0x1f] * 0x18);
    FUN_00638610();
    return;
  }
  return;
}


/* plasma::Edit::vfunction12_for_NamedObject @ 00638370  kind=game  attributed-by=rtti  size=377 */

void __thiscall plasma::Edit::vfunction12_for_NamedObject(Edit *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  Edit *pEVar7;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (this->Edit_data != (int *)0x0) {
    iVar3 = this->offset_0x13c;
    iVar4 = (this->Object_data).offset_0x0;
    this->field207_0x168 = 0;
    fVar1 = *(float *)(iVar4 + 0xd4);
    fVar2 = *(float *)(iVar4 + 0xd8);
    local_c = 1.0 / (*(float *)(iVar3 + 0x94) * fVar1 + *(float *)(iVar3 + 0xa4) * fVar2 +
                    *(float *)(iVar3 + 0xc4));
    local_10 = local_c * (*(float *)(iVar3 + 0x98) * fVar2 + fVar1 * *(float *)(iVar3 + 0x88) +
                         *(float *)(iVar3 + 0xb8));
    local_c = local_c * (*(float *)(iVar3 + 0x8c) * fVar1 + *(float *)(iVar3 + 0x9c) * fVar2 +
                        *(float *)(iVar3 + 0xbc));
    pEVar7 = (Edit *)FUN_006531e0();
    if (pEVar7 == this) {
      cVar6 = FUN_0043a3f0(0x10);
      if (cVar6 == '\0') {
        FUN_00638b60(&local_10);
        this->field220_0x178 = 0;
      }
      else {
        iVar3 = this->field219_0x174;
        FUN_00638b60(&local_10);
        this->field220_0x178 = this->field220_0x178 - (this->field219_0x174 + iVar3);
      }
      this->field207_0x168 = 1;
    }
    else {
      piVar5 = this->Edit_data;
      this->field219_0x174 = *(int *)(piVar5[0x2a] + 0x10 + piVar5[0x1f] * 0x18);
      this->field220_0x178 = -*(int *)(piVar5[0x2a] + 0x10 + piVar5[0x1f] * 0x18);
      FUN_00659df0(this);
    }
    FUN_00638cf0();
    FUN_00638610();
    FUN_0064efe0(this->offset_0x13c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::Edit::vfunction13_for_NamedObject @ 006384f0  kind=game  attributed-by=rtti  size=8 */

void __thiscall plasma::Edit::vfunction13_for_NamedObject(void)

{
  FUN_00659cf0();
  return;
}


/* plasma::Edit::vfunction22_for_NamedObject @ 00638500  kind=game  attributed-by=rtti  size=263 */

void __thiscall plasma::Edit::vfunction22_for_NamedObject(Edit *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  Edit *pEVar5;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((*(byte *)((this->Object_data).offset_0x0 + 0xf4) & 1) != 0) {
    pEVar5 = (Edit *)FUN_006531e0();
    if ((pEVar5 == this) && (this->field207_0x168 != '\0')) {
      iVar3 = (this->Object_data).offset_0x0;
      fVar1 = *(float *)(iVar3 + 0xd4);
      fVar2 = *(float *)(iVar3 + 0xd8);
      iVar3 = this->offset_0x13c;
      iVar4 = this->field219_0x174;
      local_c = 1.0 / (*(float *)(iVar3 + 0x94) * fVar1 + *(float *)(iVar3 + 0xa4) * fVar2 +
                      *(float *)(iVar3 + 0xc4));
      local_10 = local_c * (*(float *)(iVar3 + 0x98) * fVar2 + fVar1 * *(float *)(iVar3 + 0x88) +
                           *(float *)(iVar3 + 0xb8));
      local_c = local_c * (*(float *)(iVar3 + 0x8c) * fVar1 + *(float *)(iVar3 + 0x9c) * fVar2 +
                          *(float *)(iVar3 + 0xbc));
      FUN_00638b60(&local_10);
      this->field220_0x178 = this->field220_0x178 + (iVar4 - this->field219_0x174);
      FUN_00638cf0();
      FUN_00638610();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


