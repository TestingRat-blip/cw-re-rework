// Texture (engine) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Texture.h"

/* plasma::Texture::Texture @ 00661050  kind=game  attributed-by=rtti  size=379 */

Texture * __thiscall
plasma::Texture::Texture(Texture *this,int param_1,undefined4 param_2,char param_3)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f71eb;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* inlined constructor: plasma::NamedObject::NamedObject */
  Object::Object((Object *)this,param_1);
  this->vftablePtr = (Texture_vftable *)&NamedObject::vftable;
  (this->NamedObject_data).offset_0x18 = (undefined **)0x7;
  (this->NamedObject_data).offset_0x14 = 0;
  local_8 = 0;
  *(undefined2 *)&(this->NamedObject_data).field_0x4 = 0;
  FUN_0040f680(param_2,0,0xffffffff);
  cVar2 = param_3;
  this->vftablePtr = &vftable;
  (this->NamedObject_data).offset_0x1c = 0;
  (this->NamedObject_data).offset_0x20 = 0;
  (this->NamedObject_data).offset_0x24 = 0;
  (this->NamedObject_data).offset_0x28 = (void *)0x1;
  (this->NamedObject_data).offset_0x2c = 1;
  (this->NamedObject_data).offset_0x30 = 1;
  (this->NamedObject_data).offset_0x34 = 1;
  (this->NamedObject_data).offset_0x38 = 1;
  (this->NamedObject_data).offset_0x3c = 0;
  (this->NamedObject_data).offset_0x40 = 0;
  *(undefined4 *)&(this->NamedObject_data).offset_0x44 = 0xffffffff;
  (this->NamedObject_data).offset_0x48 = param_3;
  local_8 = 2;
  (this->NamedObject_data).offset_0x4c = 0;
  puVar6 = (undefined4 *)FUN_0064ec40(&param_3,this);
  (this->NamedObject_data).offset_0x4c = *puVar6;
  if (cVar2 == '\0') {
    FUN_00650a90(uVar5);
    iVar7 = -1;
    puVar6 = (undefined4 *)**(undefined4 **)(param_1 + 300);
    while (puVar6 != *(undefined4 **)(param_1 + 300)) {
      if (iVar7 < (int)puVar6[4]) {
        iVar7 = puVar6[4];
      }
      if (*(char *)((int)puVar6 + 0xd) == '\0') {
        puVar3 = (undefined4 *)puVar6[2];
        if (*(char *)((int)puVar3 + 0xd) == '\0') {
          cVar2 = *(char *)((int)*puVar3 + 0xd);
          puVar6 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
          while (cVar2 == '\0') {
            cVar2 = *(char *)((int)*puVar3 + 0xd);
            puVar6 = puVar3;
            puVar3 = (undefined4 *)*puVar3;
          }
        }
        else {
          cVar2 = *(char *)((int)puVar6[1] + 0xd);
          puVar4 = (undefined4 *)puVar6[1];
          puVar3 = puVar6;
          while ((puVar6 = puVar4, cVar2 == '\0' && (puVar3 == (undefined4 *)puVar6[2]))) {
            cVar2 = *(char *)((int)puVar6[1] + 0xd);
            puVar4 = (undefined4 *)puVar6[1];
            puVar3 = puVar6;
          }
        }
      }
    }
    pcVar1 = &(this->NamedObject_data).offset_0x44;
    *(int *)pcVar1 = iVar7 + 1;
    puVar6 = (undefined4 *)FUN_00468910(pcVar1);
    *puVar6 = this;
    FUN_006531f0();
  }
  ExceptionList = local_10;
  return this;
}


/* plasma::Texture::~Texture @ 006611d0  kind=game  attributed-by=rtti  size=64 */

void __thiscall plasma::Texture::~Texture(Texture *this)

{
  void *pvVar1;
  
  this->vftablePtr = &vftable;
  pvVar1 = (void *)(this->NamedObject_data).offset_0x1c;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
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


/* plasma::Texture::deleting_destructor @ 00661230  kind=game  attributed-by=rtti  size=30 */

Texture * __thiscall plasma::Texture::deleting_destructor(Texture *this,byte param_1)

{
  ~Texture(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


