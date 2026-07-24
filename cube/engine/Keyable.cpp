// Keyable (engine) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Keyable.h"

/* plasma::Keyable::Keyable @ 00664a10  kind=game  attributed-by=rtti  size=185 */

Keyable * __thiscall plasma::Keyable::Keyable(Keyable *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7570;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined constructor: plasma::NamedObject::NamedObject */
  Object::Object((Object *)this,param_1);
  this->vftablePtr = (Keyable_vftable *)&NamedObject::vftable;
  (this->NamedObject_data).offset_0x18 = (undefined **)0x7;
  (this->NamedObject_data).offset_0x14 = 0;
  local_8 = 0;
  *(undefined2 *)&(this->NamedObject_data).field_0x4 = 0;
  FUN_0040f680(param_2,0,0xffffffff);
  this->vftablePtr = &vftable;
  local_8 = 1;
  (this->NamedObject_data).offset_0x1c = 0;
  (this->NamedObject_data).offset_0x20 = 0;
  uVar1 = FUN_0046d550(0,0);
  (this->NamedObject_data).offset_0x1c = uVar1;
  *(undefined2 *)&(this->NamedObject_data).offset_0x24 = 0;
  (this->NamedObject_data).offset_0x3c = 7;
  (this->NamedObject_data).offset_0x38 = 0;
  *(undefined2 *)&(this->NamedObject_data).offset_0x28 = 0;
  ExceptionList = local_10;
  return this;
}


/* plasma::Keyable::~Keyable @ 00664ad0  kind=game  attributed-by=rtti  size=85 */

void __thiscall plasma::Keyable::~Keyable(Keyable *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  
  this->vftablePtr = &vftable;
  if (7 < (uint)(this->NamedObject_data).offset_0x3c) {
                    /* WARNING: Subroutine does not return */
    operator_delete((this->NamedObject_data).offset_0x28);
  }
  (this->NamedObject_data).offset_0x3c = 7;
  (this->NamedObject_data).offset_0x38 = 0;
  *(undefined2 *)&(this->NamedObject_data).offset_0x28 = 0;
  puVar1 = (undefined4 *)(this->NamedObject_data).offset_0x1c;
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  iVar3 = (this->NamedObject_data).offset_0x1c;
  *(int *)(iVar3 + 4) = iVar3;
  (this->NamedObject_data).offset_0x20 = 0;
  if (pvVar2 != (void *)(this->NamedObject_data).offset_0x1c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)(this->NamedObject_data).offset_0x1c);
}


/* plasma::Keyable::deleting_destructor @ 00664b70  kind=game  attributed-by=rtti  size=30 */

Keyable * __thiscall plasma::Keyable::deleting_destructor(Keyable *this,byte param_1)

{
  ~Keyable(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


