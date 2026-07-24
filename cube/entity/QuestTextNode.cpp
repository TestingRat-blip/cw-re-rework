// QuestTextNode (entity) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "QuestTextNode.h"

/* cube::QuestTextNode::QuestTextNode @ 004da3b0  kind=game  attributed-by=rtti  size=206 */

QuestTextNode * __thiscall cube::QuestTextNode::QuestTextNode(QuestTextNode *this)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8ebc;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  (this->QuestTextNode_data).offset_0x0 = 0;
  (this->QuestTextNode_data).offset_0x4 = 0;
  uVar2 = FUN_0046d520(uVar1);
  (this->QuestTextNode_data).offset_0x0 = uVar2;
  local_8 = 0;
  (this->QuestTextNode_data).offset_0x8 = 0;
  (this->QuestTextNode_data).offset_0xc = 0;
  uVar2 = FUN_0046d520();
  (this->QuestTextNode_data).offset_0x8 = uVar2;
  local_8._0_1_ = 1;
  (this->QuestTextNode_data).offset_0x10 = 0;
  (this->QuestTextNode_data).offset_0x14 = 0;
  uVar2 = FUN_0046d520();
  (this->QuestTextNode_data).offset_0x10 = uVar2;
  (this->QuestTextNode_data).offset_0x2c = 7;
  (this->QuestTextNode_data).offset_0x28 = 0;
  (this->QuestTextNode_data).offset_0x18 = 0;
  (this->QuestTextNode_data).offset_0x30 = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  (this->QuestTextNode_data).offset_0x34 = (void *)0x0;
  (this->QuestTextNode_data).offset_0x38 = 0;
  pvVar3 = (void *)FUN_0046d550(0,0);
  (this->QuestTextNode_data).offset_0x34 = pvVar3;
  (this->QuestTextNode_data).offset_0x3c = 0;
  ExceptionList = local_10;
  return this;
}


/* cube::QuestTextNode::~QuestTextNode @ 004da540  kind=game  attributed-by=rtti  size=128 */

void __thiscall cube::QuestTextNode::~QuestTextNode(QuestTextNode *this)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e8f47;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  piVar1 = (this->QuestTextNode_data).offset_0x34;
  local_8 = 4;
  piVar6 = (int *)*piVar1;
  if (piVar6 != piVar1) {
    do {
      if ((undefined4 *)piVar6[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar6[2])(1,uVar5);
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (this->QuestTextNode_data).offset_0x34);
  }
  puVar2 = (this->QuestTextNode_data).offset_0x34;
  pvVar3 = (void *)*puVar2;
  *puVar2 = puVar2;
  pvVar4 = (this->QuestTextNode_data).offset_0x34;
  *(void **)((int)pvVar4 + 4) = pvVar4;
  (this->QuestTextNode_data).offset_0x38 = 0;
  if (pvVar3 != (this->QuestTextNode_data).offset_0x34) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((this->QuestTextNode_data).offset_0x34);
}


/* cube::QuestTextNode::deleting_destructor @ 004da700  kind=game  attributed-by=rtti  size=30 */

QuestTextNode * __thiscall
cube::QuestTextNode::deleting_destructor(QuestTextNode *this,byte param_1)

{
  ~QuestTextNode(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


