// QuestText (entity) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "QuestText.h"

/* cube::QuestText::QuestText @ 0041ab90  kind=game  attributed-by=rtti  size=47 */

QuestText * __thiscall cube::QuestText::QuestText(QuestText *this)

{
  void *pvVar1;
  
  this->vftablePtr = &vftable;
  (this->QuestText_data).offset_0x0 = (undefined4 *)0x0;
  (this->QuestText_data).offset_0x4 = (void *)0x0;
  (this->QuestText_data).offset_0x8 = 0;
  pvVar1 = (void *)FUN_0041a060();
  (this->QuestText_data).offset_0x4 = pvVar1;
  return this;
}


/* cube::QuestText::~QuestText @ 0041ac90  kind=game  attributed-by=rtti  size=119 */

void __thiscall cube::QuestText::~QuestText(QuestText *this)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  QuestText *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054bcdb;
  local_10 = ExceptionList;
  uVar3 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  puVar1 = (this->QuestText_data).offset_0x0;
  local_8 = 0;
  local_14 = this;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,uVar3);
  }
  piVar2 = (this->QuestText_data).offset_0x4;
  local_8 = 0xffffffff;
  FUN_0041a510(&(this->QuestText_data).offset_0x4,&local_14,(int *)*piVar2,piVar2);
  operator_delete((this->QuestText_data).offset_0x4);
  ExceptionList = local_10;
  return;
}


/* cube::QuestText::scalar_deleting_destructor @ 0041ae70  kind=game  attributed-by=rtti  size=140 */

undefined4 * __thiscall cube::QuestText::scalar_deleting_destructor(QuestText *this,byte param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  QuestText *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054bd6b;
  local_10 = ExceptionList;
  uVar3 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* inlined destructor: cube::QuestText::~QuestText */
  this->vftablePtr = &vftable;
  puVar1 = (this->QuestText_data).offset_0x0;
  local_8 = 0;
  local_14 = this;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,uVar3);
  }
  piVar2 = (this->QuestText_data).offset_0x4;
  local_8 = 0xffffffff;
  FUN_0041a510(&(this->QuestText_data).offset_0x4,&local_14,(int *)*piVar2,piVar2);
  operator_delete((this->QuestText_data).offset_0x4);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  ExceptionList = local_10;
  return &this->vftablePtr;
}


