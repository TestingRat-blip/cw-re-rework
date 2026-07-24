// Field (world) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Field.h"

/* cube::Field::Field @ 00450bf0  kind=game  attributed-by=rtti  size=58 */

Field * __thiscall cube::Field::Field(Field *this)

{
  this->vftablePtr = &vftable;
  (this->Field_data).offset_0x0 = 0;
  (this->Field_data).offset_0x4 = 0;
  (this->Field_data).offset_0x8 = 0;
  (this->Field_data).offset_0xc = 0;
  (this->Field_data).offset_0x10 = 0;
  (this->Field_data).offset_0x14 = (void *)0x0;
  (this->Field_data).offset_0x18 = 0;
  return this;
}


/* cube::Field::~Field @ 00450c30  kind=game  attributed-by=rtti  size=20 */

void __thiscall cube::Field::~Field(Field *this)

{
  void *pvVar1;
  
  pvVar1 = (this->Field_data).offset_0x14;
  this->vftablePtr = &vftable;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  return;
}


/* cube::Field::deleting_destructor @ 00624700  kind=game  attributed-by=rtti  size=82 */

Field * __thiscall cube::Field::deleting_destructor(Field *this,uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) != 0) {
    puVar1 = &this[-1].Field_data.offset_0x18;
    _eh_vector_destructor_iterator_(this,0x20,this[-1].Field_data.offset_0x18,~Field);
    if ((param_1 & 1) != 0) {
      operator_delete__(puVar1);
    }
    return (Field *)puVar1;
  }
  ~Field(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


