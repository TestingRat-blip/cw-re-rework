// ZoneTile (world) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "ZoneTile.h"

/* cube::ZoneTile::ZoneTile @ 005fb7f0  kind=game  attributed-by=rtti  size=102 */

ZoneTile * __thiscall cube::ZoneTile::ZoneTile(ZoneTile *this)

{
  void *pvVar1;
  
  this->vftablePtr = &vftable;
  (this->ZoneTile_data).offset_0x0 = 0;
  (this->ZoneTile_data).offset_0x4 = (undefined4 *)0x0;
  (this->ZoneTile_data).offset_0x8 = 0;
  (this->ZoneTile_data).offset_0xc = 0;
  (this->ZoneTile_data).offset_0x10 = 0;
  (this->ZoneTile_data).offset_0x14 = 1;
  (this->ZoneTile_data).offset_0x18 = 0;
  (this->ZoneTile_data).offset_0x1c = (void *)0x0;
  (this->ZoneTile_data).offset_0x20 = 0;
  pvVar1 = (void *)FUN_0043c8e0(0,0);
  (this->ZoneTile_data).offset_0x1c = pvVar1;
  (this->ZoneTile_data).offset_0x24 = 0;
  (this->ZoneTile_data).offset_0x28 = 0;
  (this->ZoneTile_data).offset_0x2c = 0;
  return this;
}


/* cube::ZoneTile::~ZoneTile @ 005fb960  kind=game  attributed-by=rtti  size=112 */

void __thiscall cube::ZoneTile::~ZoneTile(ZoneTile *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f4a0b;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  puVar1 = (this->ZoneTile_data).offset_0x4;
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,uVar4);
  }
  puVar1 = (this->ZoneTile_data).offset_0x1c;
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  pvVar3 = (this->ZoneTile_data).offset_0x1c;
  *(void **)((int)pvVar3 + 4) = pvVar3;
  (this->ZoneTile_data).offset_0x20 = 0;
  if (pvVar2 != (this->ZoneTile_data).offset_0x1c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((this->ZoneTile_data).offset_0x1c);
}


/* cube::ZoneTile::deleting_destructor @ 005fbb00  kind=game  attributed-by=rtti  size=30 */

ZoneTile * __thiscall cube::ZoneTile::deleting_destructor(ZoneTile *this,byte param_1)

{
  ~ZoneTile(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


