// Attribute (engine) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Attribute.h"

/* plasma::Attribute::Attribute @ 00661480  kind=game  attributed-by=rtti  size=184 */

Attribute * __thiscall plasma::Attribute::Attribute(Attribute *this,undefined4 param_1)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7246;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  (this->Attribute_data).offset_0x0 = (void *)0x0;
  (this->Attribute_data).offset_0x4 = 0;
  pvVar2 = (void *)FUN_0064e370(uVar1);
  (this->Attribute_data).offset_0x0 = pvVar2;
  local_8 = 0;
  FUN_00459a90();
  (this->Attribute_data).offset_0x18 = 0;
  (this->Attribute_data).offset_0x1c = 0;
  (this->Attribute_data).offset_0x34 = 0xf;
  (this->Attribute_data).offset_0x30 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined1 *)&(this->Attribute_data).offset_0x20 = 0;
  FUN_0040c0a0(param_1,0,0xffffffff);
  (this->Attribute_data).offset_0x38 = 0xffffffff;
  (this->Attribute_data).offset_0x3c = 0;
  (this->Attribute_data).offset_0x40 = 0;
  (this->Attribute_data).offset_0x44 = 1;
  ExceptionList = local_10;
  return this;
}


/* plasma::Attribute::~Attribute @ 00661570  kind=game  attributed-by=rtti  size=198 */

void __thiscall plasma::Attribute::~Attribute(Attribute *this)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  Attribute *local_8;
  
  piVar2 = (this->Attribute_data).offset_0x0;
  this->vftablePtr = &vftable;
  piVar6 = (int *)*piVar2;
  local_8 = this;
  if (piVar6 != piVar2) {
    do {
      puVar3 = (undefined4 *)piVar6[10];
      if (puVar3 != (undefined4 *)0x0) {
        if ((void *)*puVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(puVar3);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar3);
      }
      if (*(char *)((int)piVar6 + 0xd) == '\0') {
        piVar2 = (int *)piVar6[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar6 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0xd);
          piVar5 = (int *)piVar6[1];
          piVar2 = piVar6;
          while ((piVar6 = piVar5, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0xd);
            piVar5 = (int *)piVar6[1];
            piVar2 = piVar6;
          }
        }
      }
    } while (piVar6 != (this->Attribute_data).offset_0x0);
  }
  if ((this->Attribute_data).offset_0x34 < 0x10) {
    (this->Attribute_data).offset_0x34 = 0xf;
    (this->Attribute_data).offset_0x30 = 0;
    *(undefined1 *)&(this->Attribute_data).offset_0x20 = 0;
    pvVar4 = (this->Attribute_data).offset_0x8;
    if (pvVar4 == (void *)0x0) {
      puVar3 = (this->Attribute_data).offset_0x0;
      FUN_00661a20(&local_8,*puVar3,puVar3);
                    /* WARNING: Subroutine does not return */
      operator_delete((this->Attribute_data).offset_0x0);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar4);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((this->Attribute_data).offset_0x20);
}


/* plasma::Attribute::deleting_destructor @ 00661910  kind=game  attributed-by=rtti  size=30 */

Attribute * __thiscall plasma::Attribute::deleting_destructor(Attribute *this,byte param_1)

{
  ~Attribute(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


