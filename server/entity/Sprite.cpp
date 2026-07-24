// Sprite (entity) -- server. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Sprite.h"

/* cube::Sprite::Sprite @ 0042ebb0  kind=game  attributed-by=rtti  size=199 */

Sprite * __thiscall cube::Sprite::Sprite(Sprite *this,undefined4 param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d226;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  _eh_vector_constructor_iterator_(&this->Sprite_data,0xc,3,FUN_004e1eb0,FUN_0042f440);
  local_8 = 0;
  (this->Sprite_data).offset_0x24 = 0;
  (this->Sprite_data).offset_0x28 = 0;
  uVar1 = FUN_0042f040();
  (this->Sprite_data).offset_0x24 = uVar1;
  (this->Sprite_data).offset_0x54 = param_1;
  (this->Sprite_data).offset_0x2c = 0;
  (this->Sprite_data).offset_0x30 = 0;
  (this->Sprite_data).offset_0x34 = 0;
  (this->Sprite_data).offset_0x40 = 0;
  (this->Sprite_data).offset_0x44 = 0;
  (this->Sprite_data).offset_0x48 = 0;
  (this->Sprite_data).offset_0x4c = 0;
  (this->Sprite_data).offset_0x50 = 0x100;
  (this->Sprite_data).offset_0x58 = 0;
  (this->Sprite_data).offset_0x5a = 0;
  (this->Sprite_data).offset_0x52 = 0;
  ExceptionList = local_10;
  return this;
}


/* cube::Sprite::scalar_deleting_destructor @ 0042ef80  kind=game  attributed-by=rtti  size=163 */

undefined4 * __thiscall cube::Sprite::scalar_deleting_destructor(Sprite *this,byte param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 local_18;
  Sprite *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054d266;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined destructor: cube::Sprite::~Sprite */
  this->vftablePtr = &vftable;
  pvVar1 = (void *)(this->Sprite_data).offset_0x2c;
  local_8 = 0;
  local_14 = this;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  piVar2 = (int *)(this->Sprite_data).offset_0x24;
  FUN_0042f4e0(&(this->Sprite_data).offset_0x24,&local_18,(int *)*piVar2,piVar2);
  operator_delete((void *)(this->Sprite_data).offset_0x24);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(&this->Sprite_data,0xc,3,FUN_0042f440);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  ExceptionList = local_10;
  return &this->vftablePtr;
}


