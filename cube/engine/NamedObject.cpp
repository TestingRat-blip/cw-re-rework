// NamedObject (engine) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "NamedObject.h"

/* plasma::NamedObject::vfunction1 @ 00627850  kind=game  attributed-by=rtti  size=66 */

NamedObject * __thiscall plasma::NamedObject::vfunction1(NamedObject *this,byte param_1)

{
  if ((undefined **)0x7 < (this->NamedObject_data).offset_0x18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)&(this->NamedObject_data).field_0x4);
  }
  (this->NamedObject_data).offset_0x18 = (undefined **)0x7;
  (this->NamedObject_data).offset_0x14 = 0;
  *(undefined2 *)&(this->NamedObject_data).field_0x4 = 0;
  Object::~Object((Object *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


