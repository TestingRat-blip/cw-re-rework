// Movie (engine) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Movie.h"

/* plasma::Movie::Movie @ 00677bc0  kind=game  attributed-by=rtti  size=149 */

Movie * __thiscall plasma::Movie::Movie(Movie *this,int param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8408;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined constructor: plasma::NamedObject::NamedObject */
  Object::Object((Object *)this,param_1);
  this->vftablePtr = (Movie_vftable *)&NamedObject::vftable;
  (this->NamedObject_data).offset_0x18 = (undefined **)0x7;
  (this->NamedObject_data).offset_0x14 = 0;
  local_8 = 0;
  *(undefined2 *)&(this->NamedObject_data).field_0x4 = 0;
  FUN_0040f680(param_2,0,0xffffffff);
  this->vftablePtr = &vftable;
  (this->NamedObject_data).offset_0x1c = 0;
  (this->NamedObject_data).offset_0x20 = 0;
  (this->NamedObject_data).offset_0x24 = 0;
  (this->NamedObject_data).offset_0x28 = (void *)0x0;
  ExceptionList = local_10;
  return this;
}


/* plasma::Movie::~Movie @ 00677c60  kind=game  attributed-by=rtti  size=86 */

void __thiscall plasma::Movie::~Movie(Movie *this)

{
  int iVar1;
  undefined1 local_5;
  
  iVar1 = (this->NamedObject_data).offset_0x1c;
  if (iVar1 != 0) {
    FUN_00677ac0(iVar1,(this->NamedObject_data).offset_0x20,&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)(this->NamedObject_data).offset_0x1c);
  }
  if ((undefined **)0x7 < (this->NamedObject_data).offset_0x18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)&(this->NamedObject_data).field_0x4);
  }
  (this->NamedObject_data).offset_0x18 = (undefined **)0x7;
  (this->NamedObject_data).offset_0x14 = 0;
  *(undefined2 *)&(this->NamedObject_data).field_0x4 = 0;
  Object::~Object((Object *)this);
  return;
}


/* plasma::Movie::deleting_destructor @ 00677ce0  kind=game  attributed-by=rtti  size=30 */

Movie * __thiscall plasma::Movie::deleting_destructor(Movie *this,byte param_1)

{
  ~Movie(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


