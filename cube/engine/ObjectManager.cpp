// ObjectManager (engine) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "ObjectManager.h"

/* plasma::ObjectManager::~ObjectManager @ 0064dde0  kind=game  attributed-by=rtti  size=129 */

void __thiscall plasma::ObjectManager::~ObjectManager(ObjectManager *this)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f642b;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  piVar1 = (this->ObjectManager_data).offset_0x4;
  (this->ObjectManager_data).offset_0x0 = 1;
  piVar6 = (int *)*piVar1;
  local_8 = 0;
  if (piVar6 != piVar1) {
    do {
      if ((undefined4 *)piVar6[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar6[2])(1,uVar5);
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (this->ObjectManager_data).offset_0x4);
  }
  puVar2 = (this->ObjectManager_data).offset_0x4;
  pvVar3 = (void *)*puVar2;
  *puVar2 = puVar2;
  pvVar4 = (this->ObjectManager_data).offset_0x4;
  *(void **)((int)pvVar4 + 4) = pvVar4;
  (this->ObjectManager_data).offset_0x8 = 0;
  if (pvVar3 != (this->ObjectManager_data).offset_0x4) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((this->ObjectManager_data).offset_0x4);
}


/* plasma::ObjectManager::deleting_destructor @ 0064e2e0  kind=game  attributed-by=rtti  size=30 */

ObjectManager * __thiscall
plasma::ObjectManager::deleting_destructor(ObjectManager *this,byte param_1)

{
  ~ObjectManager(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


