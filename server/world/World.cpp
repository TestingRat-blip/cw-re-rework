// World (world) -- server. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "World.h"

/* cube::World::~World @ 004cd940  kind=game  attributed-by=rtti  size=74 */

void __thiscall cube::World::~World(World *this)

{
  undefined4 *this_00;
  void **this_01;
  char cVar1;
  World *pWVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  void **this_02;
  void *local_1c;
  int local_18;
  World *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0055486b;
  local_10 = ExceptionList;
  uVar4 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  pvVar9 = (void *)0x0;
  local_8 = 0x12;
  local_1c = (void *)0x0;
  piVar6 = &(this->World_data).offset_0xb8;
  local_18 = 0;
  local_14 = this;
  while( true ) {
    do {
      iVar8 = local_18;
      if (*piVar6 != 0) {
        if ((local_14->World_data).offset_0xb0 == '\0') {
          iVar7 = 0x10018;
          do {
            iVar10 = 0x40;
            do {
              FUN_004d81b0(local_14,*(int *)(*piVar6 + iVar7));
              iVar8 = local_18;
              pvVar9 = local_1c;
              iVar7 = iVar7 + 4;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          } while (iVar7 < 0x14018);
          FUN_004d7c50(local_14,(int)local_1c,local_18);
        }
        if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar6)(1,uVar4);
        }
      }
      if ((void *)piVar6[0x100000] != (void *)0x0) {
        operator_delete((void *)piVar6[0x100000]);
      }
      pWVar2 = local_14;
      local_18 = iVar8 + 1;
      piVar6 = piVar6 + 1;
    } while (local_18 < 0x400);
    pvVar9 = (void *)((int)pvVar9 + 1);
    local_1c = pvVar9;
    if (0x3ff < (int)pvVar9) break;
    local_18 = 0;
  }
  piVar6 = (local_14->World_data).offset_0x0;
  piVar5 = (int *)*piVar6;
  if (piVar5 != piVar6) {
    do {
      if ((undefined4 *)piVar5[6] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar5[6])(1);
      }
      if (*(char *)((int)piVar5 + 0xd) == '\0') {
        piVar6 = (int *)piVar5[2];
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0xd);
          piVar5 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0xd);
            piVar5 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0xd);
          piVar3 = (int *)piVar5[1];
          piVar6 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar6 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0xd);
            piVar3 = (int *)piVar5[1];
            piVar6 = piVar5;
          }
        }
      }
    } while (piVar5 != (pWVar2->World_data).offset_0x0);
  }
  piVar6 = (pWVar2->World_data).offset_0x8;
  piVar5 = (int *)*piVar6;
  if (piVar5 != piVar6) {
    do {
      local_1c = (void *)piVar5[6];
      if (local_1c != (void *)0x0) {
        this_00 = (undefined4 *)((int)local_1c + 0x78);
        FUN_004fc060(this_00,&local_18,*(int **)*this_00,(int *)*this_00);
        operator_delete((void *)*this_00);
        operator_delete(local_1c);
      }
      if (*(char *)((int)piVar5 + 0xd) == '\0') {
        piVar6 = (int *)piVar5[2];
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0xd);
          piVar5 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0xd);
            piVar5 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0xd);
          piVar3 = (int *)piVar5[1];
          piVar6 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar6 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0xd);
            piVar3 = (int *)piVar5[1];
            piVar6 = piVar5;
          }
        }
      }
    } while (piVar5 != (pWVar2->World_data).offset_0x8);
  }
  this_02 = &(pWVar2->World_data).offset_0x8;
  DeleteCriticalSection((LPCRITICAL_SECTION)&pWVar2[0xaaab].World_data.field_0x7c);
  DeleteCriticalSection((LPCRITICAL_SECTION)&pWVar2[0xaaab].World_data.field_0x94);
  piVar6 = *(int **)&pWVar2[0xaaac].World_data.field_0x50;
  local_8._0_1_ = 0x11;
  FUN_004fc060(&pWVar2[0xaaac].World_data.field_0x50,&local_1c,(int *)*piVar6,piVar6);
  operator_delete(*(void **)&pWVar2[0xaaac].World_data.field_0x50);
  piVar6 = *(int **)&pWVar2[0xaaac].World_data.field_0x48;
  local_8._0_1_ = 0x10;
  FUN_0041a510(&pWVar2[0xaaac].World_data.field_0x48,&local_1c,(int *)*piVar6,piVar6);
  operator_delete(*(void **)&pWVar2[0xaaac].World_data.field_0x48);
  piVar6 = *(int **)&pWVar2[0xaaac].World_data.field_0x40;
  local_8._0_1_ = 0xf;
  FUN_0041a510(&pWVar2[0xaaac].World_data.field_0x40,&local_1c,(int *)*piVar6,piVar6);
  operator_delete(*(void **)&pWVar2[0xaaac].World_data.field_0x40);
  piVar6 = *(int **)&pWVar2[0xaaac].World_data.field_0x38;
  local_8._0_1_ = 0xe;
  FUN_0041a510(&pWVar2[0xaaac].World_data.field_0x38,&local_1c,(int *)*piVar6,piVar6);
  operator_delete(*(void **)&pWVar2[0xaaac].World_data.field_0x38);
  piVar6 = *(int **)&pWVar2[0xaaac].World_data.field_0x30;
  local_8._0_1_ = 0xd;
  FUN_004d3e10(&pWVar2[0xaaac].World_data.field_0x30,&local_1c,(int *)*piVar6,piVar6);
  operator_delete(*(void **)&pWVar2[0xaaac].World_data.field_0x30);
  piVar6 = *(int **)&pWVar2[0xaaac].World_data.field_0x28;
  local_8._0_1_ = 0xc;
  FUN_004d3e10(&pWVar2[0xaaac].World_data.field_0x28,&local_1c,(int *)*piVar6,piVar6);
  operator_delete(*(void **)&pWVar2[0xaaac].World_data.field_0x28);
  piVar6 = *(int **)&pWVar2[0xaaac].World_data.field_0x20;
  local_8._0_1_ = 0xb;
  FUN_004d3e10(&pWVar2[0xaaac].World_data.field_0x20,&local_1c,(int *)*piVar6,piVar6);
  operator_delete(*(void **)&pWVar2[0xaaac].World_data.field_0x20);
  piVar6 = *(int **)&pWVar2[0xaaac].World_data.field_0x18;
  local_8._0_1_ = 10;
  FUN_0042d580(&pWVar2[0xaaac].World_data.field_0x18,&local_1c,(int *)*piVar6,piVar6);
  operator_delete(*(void **)&pWVar2[0xaaac].World_data.field_0x18);
  piVar6 = pWVar2[0xaaac].World_data.offset_0x10;
  local_8._0_1_ = 9;
  FUN_0042d580(&pWVar2[0xaaac].World_data.offset_0x10,&local_1c,(int *)*piVar6,piVar6);
  operator_delete(pWVar2[0xaaac].World_data.offset_0x10);
  piVar6 = pWVar2[0xaaac].World_data.offset_0x8;
  local_8._0_1_ = 8;
  FUN_0042d580(&pWVar2[0xaaac].World_data.offset_0x8,&local_1c,(int *)*piVar6,piVar6);
  operator_delete(pWVar2[0xaaac].World_data.offset_0x8);
  piVar6 = pWVar2[0xaaac].World_data.offset_0x0;
  local_8._0_1_ = 7;
  FUN_0042d580(&pWVar2[0xaaac].World_data,&local_1c,(int *)*piVar6,piVar6);
  operator_delete(pWVar2[0xaaac].World_data.offset_0x0);
  local_8 = CONCAT31(local_8._1_3_,6);
  Database::Database((Database *)&(pWVar2->World_data).field_0xa8);
  if (0xf < (pWVar2->World_data).offset_0xa4) {
    operator_delete((pWVar2->World_data).offset_0x90);
  }
  (pWVar2->World_data).offset_0xa4 = 0xf;
  (pWVar2->World_data).offset_0xa0 = 0;
  this_01 = &(pWVar2->World_data).offset_0x84;
  *(undefined1 *)&(pWVar2->World_data).offset_0x90 = 0;
  local_8._0_1_ = 4;
  if (*this_01 != (void *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)this_01);
    operator_delete(*this_01);
    *this_01 = (void *)0x0;
    (pWVar2->World_data).offset_0x88 = 0;
    (pWVar2->World_data).offset_0x8c = 0;
  }
  local_8._0_1_ = 3;
  Speech::~Speech((Speech *)&(pWVar2->World_data).field_0x2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  SpriteManager::~SpriteManager((SpriteManager *)&(pWVar2->World_data).field_0x18);
  piVar6 = (pWVar2->World_data).offset_0x10;
  piVar5 = (int *)*piVar6;
  *piVar6 = (int)piVar6;
  pvVar9 = (pWVar2->World_data).offset_0x10;
  *(void **)((int)pvVar9 + 4) = pvVar9;
  (pWVar2->World_data).offset_0x14 = 0;
  if (piVar5 != (pWVar2->World_data).offset_0x10) {
    do {
      piVar6 = (int *)*piVar5;
      operator_delete(piVar5);
      piVar5 = piVar6;
    } while (piVar6 != (pWVar2->World_data).offset_0x10);
  }
  operator_delete((pWVar2->World_data).offset_0x10);
  local_8 = local_8 & 0xffffff00;
  FUN_004fc060(this_02,&local_1c,*(int **)*this_02,*this_02);
  operator_delete(*this_02);
  piVar6 = (pWVar2->World_data).offset_0x0;
  local_8 = 0xffffffff;
  FUN_004fc060(&pWVar2->World_data,&local_1c,(int *)*piVar6,piVar6);
  operator_delete((pWVar2->World_data).offset_0x0);
  ExceptionList = local_10;
  return;
}


/* cube::World::scalar_deleting_destructor @ 004ce540  kind=game  attributed-by=rtti  size=33 */

undefined4 * __thiscall cube::World::scalar_deleting_destructor(World *this,byte param_1)

{
  ~World(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}


