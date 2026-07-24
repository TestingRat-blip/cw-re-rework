// Font (engine) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Font.h"

/* plasma::Font::Font @ 00687d20  kind=game  attributed-by=rtti  size=404 */

Font * __thiscall plasma::Font::Font(Font *this,Font *param_1,int param_2)

{
  void **ppvVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  Font *pFVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar5 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f91c6;
  local_10 = ExceptionList;
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* inlined constructor: plasma::NamedObject::NamedObject */
  Object::Object((Object *)this,(int)param_1);
  this->vftablePtr = (Font_vftable *)&NamedObject::vftable;
  (this->NamedObject_data).offset_0x18 = (undefined **)0x7;
  (this->NamedObject_data).offset_0x14 = 0;
  local_8 = 0;
  *(undefined2 *)&(this->NamedObject_data).field_0x4 = 0;
  FUN_0040f680(param_2,0,0xffffffff);
  this->vftablePtr = &vftable;
  local_8 = 1;
  (this->NamedObject_data).offset_0x1c = 0;
  (this->NamedObject_data).offset_0x20 = 0;
  uVar8 = FUN_0043c870(uVar7);
  (this->NamedObject_data).offset_0x1c = uVar8;
  (this->NamedObject_data).offset_0x24 = 0;
  (this->NamedObject_data).offset_0x40 = 7;
  (this->NamedObject_data).offset_0x3c = 0;
  *(undefined2 *)&(this->NamedObject_data).offset_0x2c = 0;
  *(undefined4 *)&(this->NamedObject_data).offset_0x44 = 0;
  *(undefined4 *)&(this->NamedObject_data).offset_0x48 = 0;
  *(undefined1 *)&(this->NamedObject_data).offset_0x4c = 0;
  param_2 = (pFVar5->NamedObject_data).offset_0x9c;
  local_8 = CONCAT31(local_8._1_3_,3);
  param_1 = this;
  iVar9 = FUN_00583cb0(param_2,*(undefined4 *)(param_2 + 4),&param_1);
  iVar11 = *(int *)&(pFVar5->NamedObject_data).field_0xa0;
  if (iVar11 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)&(pFVar5->NamedObject_data).field_0xa0 = iVar11 + 1;
  iVar11 = -1;
  *(int *)(param_2 + 4) = iVar9;
  **(int **)(iVar9 + 4) = iVar9;
  (this->NamedObject_data).offset_0x24 = *(int *)((pFVar5->NamedObject_data).offset_0x9c + 4);
  puVar10 = (undefined4 *)(pFVar5->NamedObject_data).offset_0x12c;
  puVar3 = (undefined4 *)*puVar10;
  while (puVar3 != puVar10) {
    if (iVar11 < (int)puVar3[4]) {
      iVar11 = puVar3[4];
    }
    if (*(char *)((int)puVar3 + 0xd) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0xd) == '\0') {
        cVar2 = *(char *)((int)*puVar4 + 0xd);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar2 == '\0') {
          cVar2 = *(char *)((int)*puVar4 + 0xd);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar2 = *(char *)((int)puVar3[1] + 0xd);
        puVar6 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar6, cVar2 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar2 = *(char *)((int)puVar3[1] + 0xd);
          puVar6 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  ppvVar1 = &(this->NamedObject_data).offset_0x28;
  *ppvVar1 = (void *)(iVar11 + 1);
  puVar10 = (undefined4 *)FUN_00468910(ppvVar1);
  *puVar10 = this;
  ExceptionList = local_10;
  return this;
}


/* plasma::Font::~Font @ 00687ec0  kind=game  attributed-by=rtti  size=74 */

void __thiscall plasma::Font::~Font(Font *this)

{
  undefined4 *puVar1;
  Font *local_8;
  
  this->vftablePtr = &vftable;
  local_8 = this;
  if (7 < (uint)(this->NamedObject_data).offset_0x40) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)(this->NamedObject_data).offset_0x2c);
  }
  (this->NamedObject_data).offset_0x40 = 7;
  (this->NamedObject_data).offset_0x3c = 0;
  *(undefined2 *)&(this->NamedObject_data).offset_0x2c = 0;
  puVar1 = (undefined4 *)(this->NamedObject_data).offset_0x1c;
  FUN_0067eb10(&local_8,*puVar1,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)(this->NamedObject_data).offset_0x1c);
}


/* plasma::Font::deleting_destructor @ 00687f50  kind=game  attributed-by=rtti  size=30 */

Font * __thiscall plasma::Font::deleting_destructor(Font *this,byte param_1)

{
  ~Font(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


