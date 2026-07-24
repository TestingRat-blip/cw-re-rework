// QuestTextNode (entity) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "QuestTextNode.h"

/* cube::QuestTextNode::QuestTextNode @ 0041abc0  kind=game  attributed-by=rtti  size=206 */

QuestTextNode * __thiscall cube::QuestTextNode::QuestTextNode(QuestTextNode *this)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bcac;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  (this->QuestTextNode_data).offset_0x0 = (void *)0x0;
  (this->QuestTextNode_data).offset_0x4 = 0;
  pvVar1 = (void *)FUN_0041a060();
  (this->QuestTextNode_data).offset_0x0 = pvVar1;
  local_8 = 0;
  (this->QuestTextNode_data).offset_0x8 = (void *)0x0;
  (this->QuestTextNode_data).offset_0xc = 0;
  pvVar1 = (void *)FUN_0041a060();
  (this->QuestTextNode_data).offset_0x8 = pvVar1;
  local_8._0_1_ = 1;
  (this->QuestTextNode_data).offset_0x10 = (void *)0x0;
  (this->QuestTextNode_data).offset_0x14 = 0;
  pvVar1 = (void *)FUN_0041a060();
  (this->QuestTextNode_data).offset_0x10 = pvVar1;
  (this->QuestTextNode_data).offset_0x2c = 7;
  (this->QuestTextNode_data).offset_0x28 = 0;
  *(undefined2 *)&(this->QuestTextNode_data).offset_0x18 = 0;
  (this->QuestTextNode_data).offset_0x30 = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  (this->QuestTextNode_data).offset_0x34 = (void *)0x0;
  (this->QuestTextNode_data).offset_0x38 = 0;
  pvVar1 = (void *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
  (this->QuestTextNode_data).offset_0x34 = pvVar1;
  (this->QuestTextNode_data).offset_0x3c = 0;
  ExceptionList = local_10;
  return this;
}


/* cube::QuestTextNode::~QuestTextNode @ 0041ad10  kind=game  attributed-by=rtti  size=297 */

void __thiscall cube::QuestTextNode::~QuestTextNode(QuestTextNode *this)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_18;
  QuestTextNode *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0054bd37;
  local_10 = ExceptionList;
  uVar3 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  piVar1 = (this->QuestTextNode_data).offset_0x34;
  local_8 = 4;
  piVar4 = (int *)*piVar1;
  local_14 = this;
  if (piVar4 != piVar1) {
    do {
      if ((undefined4 *)piVar4[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar4[2])(1,uVar3);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (this->QuestTextNode_data).offset_0x34);
  }
  piVar1 = (this->QuestTextNode_data).offset_0x34;
  piVar4 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  pvVar2 = (this->QuestTextNode_data).offset_0x34;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  (this->QuestTextNode_data).offset_0x38 = 0;
  if (piVar4 != (this->QuestTextNode_data).offset_0x34) {
    do {
      piVar1 = (int *)*piVar4;
      operator_delete(piVar4);
      piVar4 = piVar1;
    } while (piVar1 != (this->QuestTextNode_data).offset_0x34);
  }
  operator_delete((this->QuestTextNode_data).offset_0x34);
  if (7 < (this->QuestTextNode_data).offset_0x2c) {
    operator_delete((this->QuestTextNode_data).offset_0x18);
  }
  (this->QuestTextNode_data).offset_0x2c = 7;
  (this->QuestTextNode_data).offset_0x28 = 0;
  *(undefined2 *)&(this->QuestTextNode_data).offset_0x18 = 0;
  piVar1 = (this->QuestTextNode_data).offset_0x10;
  local_8._0_1_ = 1;
  FUN_0041a510(&(this->QuestTextNode_data).offset_0x10,&local_18,(int *)*piVar1,piVar1);
  operator_delete((this->QuestTextNode_data).offset_0x10);
  piVar1 = (this->QuestTextNode_data).offset_0x8;
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0041a510(&(this->QuestTextNode_data).offset_0x8,&local_18,(int *)*piVar1,piVar1);
  operator_delete((this->QuestTextNode_data).offset_0x8);
  piVar1 = (this->QuestTextNode_data).offset_0x0;
  local_8 = 0xffffffff;
  FUN_0041a510(&this->QuestTextNode_data,&local_18,(int *)*piVar1,piVar1);
  operator_delete((this->QuestTextNode_data).offset_0x0);
  ExceptionList = local_10;
  return;
}


/* cube::QuestTextNode::scalar_deleting_destructor @ 0041af00  kind=game  attributed-by=rtti  size=33 */

undefined4 * __thiscall
cube::QuestTextNode::scalar_deleting_destructor(QuestTextNode *this,byte param_1)

{
  ~QuestTextNode(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}


