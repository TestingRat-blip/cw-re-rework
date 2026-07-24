// Speech (entity) -- server. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Speech.h"

/* cube::Speech::~Speech @ 0042c450  kind=game  attributed-by=rtti  size=632 */

void __thiscall cube::Speech::~Speech(Speech *this)

{
  void **this_00;
  char cVar1;
  undefined4 *this_01;
  int *piVar2;
  Speech *pSVar3;
  Speech *pSVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined4 local_18;
  Speech *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0054d03e;
  local_10 = ExceptionList;
  uVar6 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  this_00 = &this[7].Speech_data;
  local_8 = 9;
  piVar7 = *(int **)*this_00;
  local_14 = this;
  if (piVar7 != *this_00) {
    do {
      this_01 = (undefined4 *)piVar7[10];
      if (this_01 != (undefined4 *)0x0) {
        FUN_0042dc80(this_01,&local_18,*(int **)*this_01,(int *)*this_01);
        operator_delete((void *)*this_01);
        operator_delete(this_01);
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar2 = (int *)piVar7[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar7 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar5 = (int *)piVar7[1];
          piVar2 = piVar7;
          while ((piVar7 = piVar5, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar5 = (int *)piVar7[1];
            piVar2 = piVar7;
          }
        }
      }
    } while (piVar7 != *this_00);
  }
  pSVar3 = local_14;
  piVar7 = *(int **)local_14[8].Speech_data;
  if (piVar7 != local_14[8].Speech_data) {
    do {
      if ((undefined4 *)piVar7[10] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar7[10])(1,uVar6);
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar2 = (int *)piVar7[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar7 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar5 = (int *)piVar7[1];
          piVar2 = piVar7;
          while ((piVar7 = piVar5, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar5 = (int *)piVar7[1];
            piVar2 = piVar7;
          }
        }
      }
    } while (piVar7 != pSVar3[8].Speech_data);
  }
  pSVar4 = local_14;
  local_8._0_1_ = 8;
  FUN_0042d580(&local_14[9].Speech_data,&local_18,*(int **)local_14[9].Speech_data,
               local_14[9].Speech_data);
  operator_delete(pSVar4[9].Speech_data);
  local_8._0_1_ = 7;
  FUN_0041a510(&pSVar3[8].Speech_data,&local_18,*(int **)pSVar3[8].Speech_data,pSVar3[8].Speech_data
              );
  operator_delete(pSVar3[8].Speech_data);
  local_8._0_1_ = 6;
  FUN_0041a510(this_00,&local_18,*(int **)*this_00,*this_00);
  operator_delete(*this_00);
  local_8._0_1_ = 5;
  FUN_0041a180(&pSVar4[6].Speech_data,&local_18,*(int **)pSVar4[6].Speech_data,pSVar4[6].Speech_data
              );
  operator_delete(pSVar4[6].Speech_data);
  local_8._0_1_ = 4;
  FUN_0041a180(&pSVar4[5].Speech_data,&local_18,*(int **)pSVar4[5].Speech_data,pSVar4[5].Speech_data
              );
  operator_delete(pSVar4[5].Speech_data);
  local_8._0_1_ = 3;
  FUN_0041a180(&pSVar4[4].Speech_data,&local_18,*(int **)pSVar4[4].Speech_data,pSVar4[4].Speech_data
              );
  operator_delete(pSVar4[4].Speech_data);
  local_8._0_1_ = 2;
  FUN_0041a180(&pSVar4[3].Speech_data,&local_18,*(int **)pSVar4[3].Speech_data,pSVar4[3].Speech_data
              );
  operator_delete(pSVar4[3].Speech_data);
  local_8._0_1_ = 1;
  FUN_0041a180(&pSVar4[2].Speech_data,&local_18,*(int **)pSVar4[2].Speech_data,pSVar4[2].Speech_data
              );
  operator_delete(pSVar4[2].Speech_data);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0041a180(&pSVar4[1].Speech_data,&local_18,*(int **)pSVar4[1].Speech_data,pSVar4[1].Speech_data
              );
  operator_delete(pSVar4[1].Speech_data);
  local_8 = 0xffffffff;
  FUN_0042d8f0(&pSVar4->Speech_data,&local_18,*(int **)pSVar4->Speech_data,pSVar4->Speech_data);
  operator_delete(pSVar4->Speech_data);
  ExceptionList = local_10;
  return;
}


/* cube::Speech::scalar_deleting_destructor @ 0042ce60  kind=game  attributed-by=rtti  size=33 */

undefined4 * __thiscall cube::Speech::scalar_deleting_destructor(Speech *this,byte param_1)

{
  ~Speech(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}


