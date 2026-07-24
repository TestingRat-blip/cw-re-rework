// Shape (engine) -- cube. 6 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Shape.h"

/* plasma::Shape::vfunction4 @ 00663fe0  kind=game  attributed-by=rtti  size=5 */

/* plasma::Shape member function inherited by plasma::TextShape
   plasma::Shape member function inherited by plasma::TextShape
   plasma::Shape member function inherited by plasma::StaticMeshShape
   plasma::Shape member function inherited by plasma::StaticMeshShape
   plasma::Shape member function inherited by plasma::StaticMeshShape
   plasma::Shape member function inherited by plasma::CurveShape
   plasma::Shape member function inherited by plasma::CurveShape
   plasma::Shape member function inherited by plasma::CurveShape
   plasma::Shape member function inherited by plasma::GenericShape
   plasma::Shape member function inherited by plasma::GenericShape
   plasma::Shape member function inherited by plasma::GenericShape
   plasma::Shape member function inherited by plasma::MeshShape
   plasma::Shape member function inherited by plasma::MeshShape */

undefined1 __thiscall plasma::Shape::vfunction4(void)

{
  return 0;
}


/* plasma::Shape::vfunction13 @ 00664a00  kind=game  attributed-by=rtti  size=3 */

/* plasma::Shape member function inherited by plasma::TextShape
   plasma::Shape member function inherited by plasma::StaticMeshShape
   plasma::Shape member function inherited by plasma::GenericShape */

void __thiscall plasma::Shape::vfunction13(void)

{
  return;
}


/* plasma::Shape::Shape @ 00687b80  kind=game  attributed-by=rtti  size=154 */

Shape * __thiscall plasma::Shape::Shape(Shape *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f9153;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  Keyable::Keyable((Keyable *)this,param_1,param_2);
  this->vftablePtr = &vftable;
  (this->NamedObject_data).offset_0x3c = 0;
  (this->NamedObject_data).offset_0x40 = 0;
  local_8 = 0;
  *(undefined4 *)&(this->NamedObject_data).offset_0x44 = 0;
  *(undefined4 *)&(this->NamedObject_data).offset_0x48 = 0;
  uVar2 = FUN_00678520(uVar1);
  *(undefined4 *)&(this->NamedObject_data).offset_0x44 = uVar2;
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined2 *)&(this->NamedObject_data).offset_0x4c = 1;
  piVar3 = (int *)FUN_0064ebd0(&param_2,this);
  (this->NamedObject_data).offset_0x40 = *piVar3;
  ExceptionList = local_10;
  return this;
}


/* plasma::Shape::~Shape @ 00687c20  kind=game  attributed-by=rtti  size=40 */

void __thiscall plasma::Shape::~Shape(Shape *this)

{
  undefined4 *puVar1;
  Shape *local_8;
  
  this->vftablePtr = &vftable;
  puVar1 = *(undefined4 **)&(this->NamedObject_data).offset_0x44;
  local_8 = this;
  FUN_0067eb10(&local_8,*puVar1,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)&(this->NamedObject_data).offset_0x44);
}


/* plasma::Shape::scalar_deleting_destructor @ 00687c60  kind=game  attributed-by=rtti  size=83 */

void __thiscall plasma::Shape::scalar_deleting_destructor(Shape *this)

{
  undefined4 *puVar1;
  undefined1 local_18 [4];
  Shape *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f9178;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined destructor: plasma::Shape::~Shape */
  this->vftablePtr = &vftable;
  puVar1 = *(undefined4 **)&(this->NamedObject_data).offset_0x44;
  local_8 = 0;
  local_14 = this;
  FUN_0067eb10(local_18,*puVar1,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)&(this->NamedObject_data).offset_0x44);
}


/* plasma::Shape::vfunction14 @ 006a1aa0  kind=game  attributed-by=rtti  size=3 */

/* plasma::Shape member function inherited by plasma::StaticMeshShape */

undefined4 __thiscall plasma::Shape::vfunction14(void)

{
  return 0;
}


