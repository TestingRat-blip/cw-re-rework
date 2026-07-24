// Spawn (world) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Spawn.h"

/* cube::Spawn::Spawn @ 005adb20  kind=game  attributed-by=rtti  size=380 */

Spawn * __thiscall cube::Spawn::Spawn(Spawn *this)

{
  this->vftablePtr = &vftable;
  (this->Spawn_data).offset_0x4 = 0x43480000;
  (this->Spawn_data).offset_0x24 = 1;
  (this->Spawn_data).offset_0x28 = 4;
  (this->Spawn_data).offset_0x2c = 0;
  (this->Spawn_data).offset_0x30 = 1;
  (this->Spawn_data).offset_0x34 = 0;
  (this->Spawn_data).offset_0x38 = 0;
  (this->Spawn_data).offset_0x3c = 0;
  (this->Spawn_data).offset_0x40 = 0;
  (this->Spawn_data).offset_0x44 = 0;
  (this->Spawn_data).offset_0x48 = 0;
  (this->Spawn_data).offset_0x4c = 0;
  (this->Spawn_data).offset_0x50 = 0;
  (this->Spawn_data).offset_0x54 = 0;
  (this->Spawn_data).offset_0x58 = 0;
  (this->Spawn_data).offset_0x5c = 0xffffffff;
  (this->Spawn_data).offset_0x60 = 0xffffffff;
  (this->Spawn_data).offset_0x64 = 0;
  (this->Spawn_data).offset_0x68 = 0xffffffff;
  (this->Spawn_data).offset_0x6c = 0;
  FUN_00428750();
  FUN_0043bc00();
  (this->Spawn_data).offset_0xf54 = 0x42c80000;
  (this->Spawn_data).offset_0xf58 = 0x3f800000;
  (this->Spawn_data).offset_0xf5c = 0x3f800000;
  (this->Spawn_data).offset_0xf60 = 0x3f800000;
  (this->Spawn_data).offset_0xf64 = 0x3f800000;
  FUN_0043c020();
  *(undefined4 *)&this[1].Spawn_data.field_0x124 = 0;
  *(undefined4 *)&this[1].Spawn_data.field_0x128 = 0;
  *(undefined4 *)&this[1].Spawn_data.field_0x12c = 0;
  *(undefined4 *)&this[1].Spawn_data.field_0x130 = 0;
  *(undefined4 *)&this[1].Spawn_data.field_0x134 = 0;
  *(undefined4 *)&this[1].Spawn_data.field_0x138 = 0;
  *(undefined4 *)&this[1].Spawn_data.field_0x13c = 0;
  *(undefined4 *)&this[1].Spawn_data.field_0x140 = 0;
  *(undefined4 *)&this[1].Spawn_data.field_0x144 = 0;
  *(undefined4 *)&this[1].Spawn_data.field_0x148 = 0;
  *(undefined4 *)&this[1].Spawn_data.field_0x14c = 0;
  *(undefined4 *)&this[1].Spawn_data.field_0x150 = 0xffffffff;
  *(undefined4 *)&this[1].Spawn_data.field_0x168 = 0;
  *(undefined4 *)&this[1].Spawn_data.field_0x16c = 0;
  this[1].Spawn_data.field_0x170 = 0;
  this[1].Spawn_data.field_0x154 = 0;
  return this;
}


/* cube::Spawn::~Spawn @ 005adca0  kind=game  attributed-by=rtti  size=124 */

void __thiscall cube::Spawn::~Spawn(Spawn *this)

{
  void *pvVar1;
  undefined1 local_5;
  
  pvVar1 = *(void **)&this[1].Spawn_data.field_0x124;
  this->vftablePtr = &vftable;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)&this[1].Spawn_data.field_0x144;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)&this[1].Spawn_data.field_0x134;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)&this[1].Spawn_data.field_0x128;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (this->Spawn_data).offset_0xf68;
  if (pvVar1 != (void *)0x0) {
    FUN_00639cf0(pvVar1,(this->Spawn_data).offset_0xf6c,&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete((this->Spawn_data).offset_0xf68);
  }
  return;
}


/* cube::Spawn::deleting_destructor @ 005addb0  kind=game  attributed-by=rtti  size=30 */

Spawn * __thiscall cube::Spawn::deleting_destructor(Spawn *this,byte param_1)

{
  ~Spawn(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


