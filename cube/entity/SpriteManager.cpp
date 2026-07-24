// SpriteManager (entity) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "SpriteManager.h"

/* cube::SpriteManager::SpriteManager @ 004ec0a0  kind=game  attributed-by=rtti  size=42 */

SpriteManager * __thiscall
cube::SpriteManager::SpriteManager(SpriteManager *this,undefined4 param_1)

{
  this->vftablePtr = &vftable;
  (this->SpriteManager_data).offset_0x0 = (void *)0x0;
  (this->SpriteManager_data).offset_0x4 = 0;
  (this->SpriteManager_data).offset_0x8 = 0;
  (this->SpriteManager_data).offset_0xc = param_1;
  return this;
}


/* cube::SpriteManager::~SpriteManager @ 004ec110  kind=game  attributed-by=rtti  size=130 */

void __thiscall cube::SpriteManager::~SpriteManager(SpriteManager *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ea05b;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  iVar4 = 0;
  local_8 = 0;
  if (0 < (int)((this->SpriteManager_data).offset_0x4 - (int)(this->SpriteManager_data).offset_0x0 &
               0xfffffffcU)) {
    do {
      puVar1 = *(undefined4 **)((int)(this->SpriteManager_data).offset_0x0 + iVar4 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1,uVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (this->SpriteManager_data).offset_0x4 -
                     (int)(this->SpriteManager_data).offset_0x0 >> 2);
  }
  pvVar2 = (this->SpriteManager_data).offset_0x0;
  if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  ExceptionList = local_10;
  return;
}


/* cube::SpriteManager::deleting_destructor @ 004ec340  kind=game  attributed-by=rtti  size=30 */

SpriteManager * __thiscall
cube::SpriteManager::deleting_destructor(SpriteManager *this,byte param_1)

{
  ~SpriteManager(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


