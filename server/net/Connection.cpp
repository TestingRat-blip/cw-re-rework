// Connection (net) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Connection.h"

/* cube::Connection::Connection @ 00422910  kind=game  attributed-by=rtti  size=231 */

Connection * __thiscall cube::Connection::Connection(Connection *this)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c6b7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  FUN_00423510(&(this->Connection_data).offset_0x14);
  local_8 = 0;
  (this->Connection_data).offset_0x7c = (void *)0x0;
  (this->Connection_data).offset_0x80 = 0;
  pvVar1 = (void *)FUN_00426a30((undefined4 *)0x0,(undefined4 *)0x0);
  (this->Connection_data).offset_0x7c = pvVar1;
  local_8._0_1_ = 1;
  (this->Connection_data).offset_0x84 = (void *)0x0;
  (this->Connection_data).offset_0x88 = 0;
  pvVar1 = (void *)FUN_00426a30((undefined4 *)0x0,(undefined4 *)0x0);
  (this->Connection_data).offset_0x84 = pvVar1;
  local_8 = CONCAT31(local_8._1_3_,2);
  (this->Connection_data).offset_0x8c = (void *)0x0;
  (this->Connection_data).offset_0x90 = 0;
  pvVar1 = (void *)FUN_00426830((undefined4 *)0x0,(undefined4 *)0x0);
  (this->Connection_data).offset_0x8c = pvVar1;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->Connection_data).field_0x94,0x80000400);
  ExceptionList = local_10;
  return this;
}


/* cube::Connection::~Connection @ 004237b0  kind=game  attributed-by=rtti  size=205 */

void __thiscall cube::Connection::~Connection(Connection *this)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  
  this->vftablePtr = &vftable;
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->Connection_data).field_0x94);
  FUN_00428100((int *)&(this->Connection_data).offset_0x8c);
  operator_delete((this->Connection_data).offset_0x8c);
  piVar1 = (this->Connection_data).offset_0x84;
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  pvVar2 = (this->Connection_data).offset_0x84;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  (this->Connection_data).offset_0x88 = 0;
  if (piVar3 != (this->Connection_data).offset_0x84) {
    do {
      piVar1 = (int *)*piVar3;
      operator_delete(piVar3);
      piVar3 = piVar1;
    } while (piVar1 != (this->Connection_data).offset_0x84);
  }
  operator_delete((this->Connection_data).offset_0x84);
  piVar1 = (this->Connection_data).offset_0x7c;
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  pvVar2 = (this->Connection_data).offset_0x7c;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  (this->Connection_data).offset_0x80 = 0;
  if (piVar3 != (this->Connection_data).offset_0x7c) {
    do {
      piVar1 = (int *)*piVar3;
      operator_delete(piVar3);
      piVar3 = piVar1;
    } while (piVar1 != (this->Connection_data).offset_0x7c);
  }
  operator_delete((this->Connection_data).offset_0x7c);
  FUN_004239f0(&(this->Connection_data).offset_0x14);
  return;
}


/* cube::Connection::scalar_deleting_destructor @ 00426750  kind=game  attributed-by=rtti  size=33 */

undefined4 * __thiscall cube::Connection::scalar_deleting_destructor(Connection *this,byte param_1)

{
  ~Connection(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}


