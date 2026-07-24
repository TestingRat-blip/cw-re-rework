// Node (engine) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Node.h"

/* plasma::Node::Node @ 00630470  kind=game  attributed-by=rtti  size=532 */

Node * __thiscall
plasma::Node::Node(Node *this,int param_1,int param_2,Node *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_1c [8];
  Node *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f58d5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
                    /* inlined constructor: plasma::NamedObject::NamedObject */
  Object::Object((Object *)this,param_1);
  this->vftablePtr = (Node_vftable *)&NamedObject::vftable;
  (this->NamedObject_data).offset_0x18 = (undefined **)0x7;
  (this->NamedObject_data).offset_0x14 = 0;
  local_8 = 0;
  *(undefined2 *)&(this->NamedObject_data).field_0x4 = 0;
  FUN_0040f680(param_5,0,0xffffffff);
  this->vftablePtr = &vftable;
  (this->NamedObject_data).offset_0x1c = 0;
  (this->NamedObject_data).offset_0x20 = 0;
  local_8 = 1;
  (this->NamedObject_data).offset_0x24 = 0;
  (this->NamedObject_data).offset_0x28 = (void *)0x0;
  iVar2 = FUN_0046d550(0,0);
  iVar1 = param_4;
  (this->NamedObject_data).offset_0x24 = iVar2;
  (this->NamedObject_data).offset_0x2c = (int)param_3;
  (this->NamedObject_data).offset_0x30 = param_2;
  (this->NamedObject_data).offset_0x34 = param_4;
  (this->NamedObject_data).offset_0x38 = 0;
  (this->NamedObject_data).offset_0x3c = 0;
  *(undefined4 *)&(this->NamedObject_data).offset_0xc0 = 0;
  *(undefined1 *)&(this->NamedObject_data).offset_0xc4 = 0;
  (this->NamedObject_data).offset_0xc8 = 0;
  (this->NamedObject_data).offset_0xcc = 0;
  local_8._0_1_ = 2;
  (this->NamedObject_data).offset_0xd0 = 0;
  (this->NamedObject_data).offset_0xd4 = 0;
  uVar3 = FUN_0046d550(0,0);
  (this->NamedObject_data).offset_0xd0 = uVar3;
  local_8._0_1_ = 3;
  (this->NamedObject_data).offset_0xd8 = 0;
  (this->NamedObject_data).offset_0xdc = 0;
  uVar3 = FUN_00439600(0,0);
  (this->NamedObject_data).offset_0xd8 = uVar3;
  local_8._0_1_ = 4;
  (this->NamedObject_data).offset_0xe0 = 0;
  *(undefined4 *)&(this->NamedObject_data).field_0xe4 = 0;
  uVar3 = FUN_00630a10();
  (this->NamedObject_data).offset_0xe0 = uVar3;
  local_8 = CONCAT31(local_8._1_3_,5);
  if (param_3 != (Node *)0x0) {
    param_3 = this;
    FUN_0058e7d0(local_1c,0,&param_3,DAT_0076de66);
  }
  if (param_2 != 0) {
    param_3 = this;
    FUN_0058e7d0(local_1c,0,&param_3,DAT_0076de66);
  }
  if (iVar1 != 0) {
    param_3 = this;
    FUN_0058e7d0(local_1c,0,&param_3,DAT_0076de66);
  }
  puVar4 = (undefined4 *)FUN_0064eae0(&param_3,this);
  (this->NamedObject_data).offset_0xcc = *puVar4;
  FUN_00423e70();
  FUN_00423e70();
  ExceptionList = local_10;
  return this;
}


/* plasma::Node::~Node @ 006306e0  kind=game  attributed-by=rtti  size=122 */

void __thiscall plasma::Node::~Node(Node *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_18 [4];
  Node *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f592d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  iVar1 = (this->NamedObject_data).offset_0xc8;
  local_8 = 4;
  local_14 = this;
  if ((iVar1 != 0) && ((char)this->field1_0x4[1] == '\0')) {
    FUN_006504c0(iVar1);
  }
  puVar2 = (undefined4 *)(this->NamedObject_data).offset_0xe0;
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00633900(local_18,*puVar2,puVar2);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)(this->NamedObject_data).offset_0xe0);
}


/* plasma::Node::deleting_destructor @ 006309e0  kind=game  attributed-by=rtti  size=30 */

Node * __thiscall plasma::Node::deleting_destructor(Node *this,byte param_1)

{
  ~Node(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


