// Object (engine) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Object.h"

/* plasma::Object::Object @ 00662730  kind=game  attributed-by=rtti  size=47 */

Object * __thiscall plasma::Object::Object(Object *this,int param_1)

{
  undefined4 *puVar1;
  
  this->vftablePtr = &vftable;
  this->field1_0x4 = (int *)param_1;
  this[1].vftablePtr = (Object_vftable *)0x0;
  puVar1 = (undefined4 *)FUN_0064eb60(&param_1,this);
  this[1].vftablePtr = (Object_vftable *)*puVar1;
  return this;
}


/* plasma::Object::~Object @ 00662760  kind=game  attributed-by=rtti  size=47 */

void __thiscall plasma::Object::~Object(Object *this)

{
  Object_vftable *pOVar1;
  
  this->vftablePtr = &vftable;
  if (((char)this->field1_0x4[1] == '\0') &&
     (pOVar1 = this[1].vftablePtr, pOVar1 != (Object_vftable *)this->field1_0x4[2])) {
    *(deleting_destructor **)pOVar1[1].deleting_destructor = pOVar1->deleting_destructor;
    *(deleting_destructor **)(pOVar1->deleting_destructor + 4) = pOVar1[1].deleting_destructor;
                    /* WARNING: Subroutine does not return */
    operator_delete(pOVar1);
  }
  return;
}


/* plasma::Object::deleting_destructor @ 006627a0  kind=game  attributed-by=rtti  size=71 */

Object * __thiscall plasma::Object::deleting_destructor(Object *this,byte param_1)

{
  Object_vftable *pOVar1;
  
                    /* inlined destructor: plasma::Object::~Object */
  this->vftablePtr = &vftable;
  if (((char)this->field1_0x4[1] == '\0') &&
     (pOVar1 = this[1].vftablePtr, pOVar1 != (Object_vftable *)this->field1_0x4[2])) {
    *(deleting_destructor **)pOVar1[1].deleting_destructor = pOVar1->deleting_destructor;
    *(deleting_destructor **)(pOVar1->deleting_destructor + 4) = pOVar1[1].deleting_destructor;
                    /* WARNING: Subroutine does not return */
    operator_delete(pOVar1);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


