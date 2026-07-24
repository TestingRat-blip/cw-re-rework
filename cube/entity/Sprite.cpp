// Sprite (entity) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Sprite.h"

/* cube::Sprite::Sprite @ 004e6a20  kind=game  attributed-by=rtti  size=199 */

Sprite * __thiscall cube::Sprite::Sprite(Sprite *this,undefined4 param_1)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9ee6;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  _eh_vector_constructor_iterator_(&this->Sprite_data,0xc,3,FUN_005aea70,FUN_005fb860);
  local_8 = 0;
  (this->Sprite_data).offset_0x24 = (void *)0x0;
  (this->Sprite_data).offset_0x28 = 0;
  pvVar2 = (void *)FUN_0046d4b0(uVar1);
  (this->Sprite_data).offset_0x24 = pvVar2;
  (this->Sprite_data).offset_0x54 = param_1;
  (this->Sprite_data).offset_0x2c = (void *)0x0;
  (this->Sprite_data).offset_0x30 = (int *)0x0;
  (this->Sprite_data).offset_0x34 = (int *)0x0;
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


/* cube::Sprite::~Sprite @ 004e6b20  kind=game  attributed-by=rtti  size=129 */

void __thiscall cube::Sprite::~Sprite(Sprite *this)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 local_18 [4];
  Sprite *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006e9f31;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  piVar1 = (this->Sprite_data).offset_0x30;
  local_8 = 1;
  local_14 = this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar4);
  }
  piVar1 = (this->Sprite_data).offset_0x34;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  pvVar2 = (this->Sprite_data).offset_0x2c;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  puVar3 = (this->Sprite_data).offset_0x24;
  local_8 = local_8 & 0xffffff00;
  FUN_004e6e60(local_18,*puVar3,puVar3);
                    /* WARNING: Subroutine does not return */
  operator_delete((this->Sprite_data).offset_0x24);
}


/* cube::Sprite::deleting_destructor @ 004e6c30  kind=game  attributed-by=rtti  size=30 */

Sprite * __thiscall cube::Sprite::deleting_destructor(Sprite *this,byte param_1)

{
  ~Sprite(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


