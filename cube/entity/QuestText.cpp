// QuestText (entity) -- cube. 4 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "QuestText.h"

/* cube::QuestText::QuestText @ 004da380  kind=game  attributed-by=rtti  size=47 */

QuestText * __thiscall cube::QuestText::QuestText(QuestText *this)

{
  void *pvVar1;
  
  this->vftablePtr = &vftable;
  (this->QuestText_data).offset_0x0 = (undefined4 *)0x0;
  (this->QuestText_data).offset_0x4 = (void *)0x0;
  (this->QuestText_data).offset_0x8 = 0;
  pvVar1 = (void *)FUN_0046d520();
  (this->QuestText_data).offset_0x4 = pvVar1;
  return this;
}


/* cube::QuestText::~QuestText @ 004da4c0  kind=game  attributed-by=rtti  size=100 */

void __thiscall cube::QuestText::~QuestText(QuestText *this)

{
  undefined4 *puVar1;
  uint uVar2;
  QuestText *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e8eeb;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  puVar1 = (this->QuestText_data).offset_0x0;
  local_8 = 0;
  local_14 = this;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,uVar2);
  }
  puVar1 = (this->QuestText_data).offset_0x4;
  local_8 = 0xffffffff;
  FUN_00661a20(&local_14,*puVar1,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete((this->QuestText_data).offset_0x4);
}


/* cube::QuestText::scalar_deleting_destructor @ 004da670  kind=game  attributed-by=rtti  size=101 */

void __thiscall cube::QuestText::scalar_deleting_destructor(QuestText *this)

{
  undefined4 *puVar1;
  uint uVar2;
  QuestText *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e8f7b;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* inlined destructor: cube::QuestText::~QuestText */
  this->vftablePtr = &vftable;
  puVar1 = (this->QuestText_data).offset_0x0;
  local_8 = 0;
  local_14 = this;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,uVar2);
  }
  puVar1 = (this->QuestText_data).offset_0x4;
  local_8 = 0xffffffff;
  FUN_00661a20(&local_14,*puVar1,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete((this->QuestText_data).offset_0x4);
}


/* cube::QuestText::~QuestText @ 004e0250  kind=game  attributed-by=rtti  size=149 */

int __thiscall cube::QuestText::~QuestText(QuestText *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9489;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_004e34b0();
  iVar1 = param_1;
  *(undefined2 *)(iVar2 + 0xc) = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (iVar2 != -0x10) {
    FUN_0040eaf0(param_1);
    *(QuestText_vftable **)(iVar2 + 0x28) = &vftable;
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar1 + 0x1c);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004e1830(iVar1 + 0x20,(int)&param_1 + 3);
  }
  ExceptionList = local_10;
  return iVar2;
}


