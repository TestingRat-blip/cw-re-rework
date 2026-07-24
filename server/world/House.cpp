// House (world) -- server. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "House.h"

/* cube::House::~House @ 004e2250  kind=game  attributed-by=rtti  size=207 */

void __thiscall cube::House::~House(House *this)

{
  this->vftablePtr = &vftable;
  operator_delete__(this[0xe].vftablePtr);
  if ((void *)this[10].field1_0x4 != (void *)0x0) {
    operator_delete((void *)this[10].field1_0x4);
    this[10].field1_0x4 = 0;
    this[0xb].vftablePtr = (House_vftable *)0x0;
    this[0xb].field1_0x4 = 0;
  }
  if (this[9].vftablePtr != (House_vftable *)0x0) {
    operator_delete(this[9].vftablePtr);
    this[9].vftablePtr = (House_vftable *)0x0;
    this[9].field1_0x4 = 0;
    this[10].vftablePtr = (House_vftable *)0x0;
  }
  if ((void *)this[7].field1_0x4 != (void *)0x0) {
    operator_delete((void *)this[7].field1_0x4);
    this[7].field1_0x4 = 0;
    this[8].vftablePtr = (House_vftable *)0x0;
    this[8].field1_0x4 = 0;
  }
  if (this[6].vftablePtr != (House_vftable *)0x0) {
    operator_delete(this[6].vftablePtr);
    this[6].vftablePtr = (House_vftable *)0x0;
    this[6].field1_0x4 = 0;
    this[7].vftablePtr = (House_vftable *)0x0;
  }
  if ((void *)this[4].field1_0x4 != (void *)0x0) {
    operator_delete((void *)this[4].field1_0x4);
    this[4].field1_0x4 = 0;
    this[5].vftablePtr = (House_vftable *)0x0;
    this[5].field1_0x4 = 0;
  }
  return;
}


/* cube::House::scalar_deleting_destructor @ 004e2380  kind=game  attributed-by=rtti  size=33 */

undefined4 * __thiscall cube::House::scalar_deleting_destructor(House *this,byte param_1)

{
  ~House(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}


