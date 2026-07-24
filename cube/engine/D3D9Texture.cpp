// D3D9Texture (engine) -- cube. 4 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "D3D9Texture.h"

/* plasma::D3D9Texture::D3D9Texture @ 0068bb90  kind=game  attributed-by=rtti  size=120 */

D3D9Texture * __thiscall
plasma::D3D9Texture::D3D9Texture
          (D3D9Texture *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,char param_7)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f9358;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Texture::Texture((Texture *)this,param_1,param_6,param_7);
  local_8 = 0;
  this->vftablePtr = &vftable;
  (this->NamedObject_data).offset_0x4c = 0;
  (this->NamedObject_data).offset_0x50 = param_1;
  FUN_00661260(param_2,param_3,param_4,param_5);
  ExceptionList = local_10;
  return this;
}


/* plasma::D3D9Texture::deleting_destructor @ 0068bc10  kind=game  attributed-by=rtti  size=113 */

D3D9Texture * __thiscall plasma::D3D9Texture::deleting_destructor(D3D9Texture *this,byte param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f9388;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* inlined destructor: plasma::D3D9Texture::~D3D9Texture */
  this->vftablePtr = &vftable;
  piVar1 = (int *)(this->NamedObject_data).offset_0x4c;
  local_8 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  local_8 = 0xffffffff;
  Texture::~Texture((Texture *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  ExceptionList = local_10;
  return this;
}


/* plasma::D3D9Texture::vfunction2 @ 0068bc90  kind=game  attributed-by=rtti  size=336 */

void __thiscall plasma::D3D9Texture::vfunction2(D3D9Texture *this,undefined4 param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int unaff_EDI;
  undefined4 uVar4;
  
  if (((this->NamedObject_data).offset_0x4c == 0) &&
     ((*this->vftablePtr->vfunction3)((this->NamedObject_data).offset_0x18,unaff_EDI),
     (this->NamedObject_data).offset_0x44 != '\0')) {
    (this->NamedObject_data).offset_0x1c = (this->NamedObject_data).offset_0x18;
  }
  piVar1 = *(int **)((this->NamedObject_data).offset_0x50 + 0x2c0);
  (**(code **)(*piVar1 + 0x104))(piVar1,param_1,(this->NamedObject_data).offset_0x4c);
  pvVar2 = (this->NamedObject_data).offset_0x28;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 1;
LAB_0068bcf9:
    piVar1 = *(int **)((this->NamedObject_data).offset_0x50 + 0x2c0);
    (**(code **)(*piVar1 + 0x114))(piVar1,param_1,6,uVar4);
    uVar4 = 0;
LAB_0068bd10:
    piVar1 = *(int **)((this->NamedObject_data).offset_0x50 + 0x2c0);
    (**(code **)(*piVar1 + 0x114))(piVar1,param_1,7,uVar4);
  }
  else {
    if (pvVar2 == (void *)0x1) {
      uVar4 = 2;
      goto LAB_0068bcf9;
    }
    if (pvVar2 == (void *)0x2) {
      piVar1 = *(int **)((this->NamedObject_data).offset_0x50 + 0x2c0);
      (**(code **)(*piVar1 + 0x114))(piVar1,param_1,6,3);
      uVar4 = 2;
      goto LAB_0068bd10;
    }
  }
  iVar3 = (this->NamedObject_data).offset_0x2c;
  if (iVar3 == 0) {
    uVar4 = 1;
LAB_0068bd54:
    piVar1 = *(int **)((this->NamedObject_data).offset_0x50 + 0x2c0);
    (**(code **)(*piVar1 + 0x114))(piVar1,param_1,5,uVar4);
    uVar4 = 0;
LAB_0068bd6b:
    piVar1 = *(int **)((this->NamedObject_data).offset_0x50 + 0x2c0);
    (**(code **)(*piVar1 + 0x114))(piVar1,param_1,7,uVar4);
  }
  else {
    if (iVar3 == 1) {
      uVar4 = 2;
      goto LAB_0068bd54;
    }
    if (iVar3 == 2) {
      piVar1 = *(int **)((this->NamedObject_data).offset_0x50 + 0x2c0);
      (**(code **)(*piVar1 + 0x114))(piVar1,param_1,5,3);
      uVar4 = 2;
      goto LAB_0068bd6b;
    }
  }
  iVar3 = (this->NamedObject_data).offset_0x30;
  if (iVar3 == 0) {
    uVar4 = 4;
  }
  else if (iVar3 == 1) {
    uVar4 = 1;
  }
  else {
    if (iVar3 != 2) goto LAB_0068bdad;
    uVar4 = 2;
  }
  piVar1 = *(int **)((this->NamedObject_data).offset_0x50 + 0x2c0);
  (**(code **)(*piVar1 + 0x114))(piVar1,param_1,1,uVar4);
LAB_0068bdad:
  iVar3 = (this->NamedObject_data).offset_0x34;
  if (iVar3 == 0) {
    uVar4 = 4;
  }
  else if (iVar3 == 1) {
    uVar4 = 1;
  }
  else {
    if (iVar3 != 2) {
      return;
    }
    uVar4 = 2;
  }
  piVar1 = *(int **)((this->NamedObject_data).offset_0x50 + 0x2c0);
  (**(code **)(*piVar1 + 0x114))(piVar1,param_1,2,uVar4);
  return;
}


/* plasma::D3D9Texture::vfunction3 @ 0068bde0  kind=game  attributed-by=rtti  size=392 */

void __thiscall plasma::D3D9Texture::vfunction3(D3D9Texture *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = (int *)(this->NamedObject_data).offset_0x4c;
  puVar1 = &(this->NamedObject_data).offset_0x4c;
  local_20 = puVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *puVar1 = 0;
  }
  iVar5 = 4;
  local_10 = 4;
  uVar4 = 0x15;
  if ((this->NamedObject_data).offset_0x24 == 0) {
    iVar5 = 3;
    local_10 = 3;
    uVar4 = 0x14;
  }
  piVar2 = *(int **)((this->NamedObject_data).offset_0x50 + 0x2c0);
  (**(code **)(*piVar2 + 0x5c))
            (piVar2,(this->NamedObject_data).offset_0x38,(this->NamedObject_data).offset_0x3c,
             (this->NamedObject_data).offset_0x28 != (void *)0x2,0,uVar4,1,puVar1,0);
  piVar2 = (int *)*puVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x4c))(piVar2,0,&local_28,0,0x2000);
    iVar7 = 0;
    if (iVar5 == 3) {
      if (0 < (int)(this->NamedObject_data).offset_0x3c) {
        do {
          iVar5 = (this->NamedObject_data).offset_0x38;
          memcpy((void *)(local_28 * iVar7 + local_24),(void *)(param_1 + iVar5 * iVar7 * 3),
                 iVar5 * 3);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(this->NamedObject_data).offset_0x3c);
      }
    }
    else {
      local_c = 0;
      if (0 < (int)(this->NamedObject_data).offset_0x3c) {
        do {
          iVar7 = (this->NamedObject_data).offset_0x38;
          puVar3 = (undefined1 *)(local_c * local_28 + local_24);
          iVar5 = iVar7 * local_c * iVar5 + param_1;
          iVar6 = 0;
          if (0 < iVar7) {
            local_8 = (iVar5 - (int)puVar3) + 2;
            local_18 = (iVar5 - (int)puVar3) + 1;
            local_14 = iVar5 - (int)puVar3;
            local_1c = (iVar5 - (int)puVar3) + 3;
            do {
              *puVar3 = puVar3[local_8];
              puVar3[1] = puVar3[local_18];
              iVar6 = iVar6 + 1;
              puVar3[2] = puVar3[local_14];
              puVar3[3] = puVar3[local_1c];
              puVar3 = puVar3 + 4;
            } while (iVar6 < (int)(this->NamedObject_data).offset_0x38);
          }
          local_c = local_c + 1;
          iVar5 = local_10;
        } while (local_c < (int)(this->NamedObject_data).offset_0x3c);
      }
    }
    (**(code **)(*(int *)*local_20 + 0x50))((int *)*local_20,0);
  }
  return;
}


