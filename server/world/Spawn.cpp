// Spawn (world) -- server. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Spawn.h"

/* cube::Spawn::~Spawn @ 004e10c0  kind=game  attributed-by=rtti  size=259 */

void __thiscall cube::Spawn::~Spawn(Spawn *this)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = *(void **)&this[1].Spawn_data.field_0x120;
  this->vftablePtr = &vftable;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)&this[1].Spawn_data.field_0x140;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    *(undefined4 *)&this[1].Spawn_data.field_0x140 = 0;
    *(undefined4 *)&this[1].Spawn_data.field_0x144 = 0;
    *(undefined4 *)&this[1].Spawn_data.field_0x148 = 0;
  }
  pvVar1 = *(void **)&this[1].Spawn_data.field_0x130;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    *(undefined4 *)&this[1].Spawn_data.field_0x130 = 0;
    *(undefined4 *)&this[1].Spawn_data.field_0x134 = 0;
    *(undefined4 *)&this[1].Spawn_data.field_0x138 = 0;
  }
  pvVar1 = *(void **)&this[1].Spawn_data.field_0x124;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    *(undefined4 *)&this[1].Spawn_data.field_0x124 = 0;
    *(undefined4 *)&this[1].Spawn_data.field_0x128 = 0;
    *(undefined4 *)&this[1].Spawn_data.field_0x12c = 0;
  }
  puVar2 = (this->Spawn_data).offset_0xf68;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00406310(puVar2,(this->Spawn_data).offset_0xf6c);
    operator_delete((this->Spawn_data).offset_0xf68);
    (this->Spawn_data).offset_0xf68 = (void *)0x0;
    (this->Spawn_data).offset_0xf6c = (undefined4 *)0x0;
    (this->Spawn_data).offset_0xf70 = 0;
  }
  return;
}


/* cube::Spawn::scalar_deleting_destructor @ 004e11d0  kind=game  attributed-by=rtti  size=33 */

undefined4 * __thiscall cube::Spawn::scalar_deleting_destructor(Spawn *this,byte param_1)

{
  ~Spawn(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}


