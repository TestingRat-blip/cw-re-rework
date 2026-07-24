// Speech (entity) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Speech.h"

/* cube::Speech::~Speech @ 004e2b10  kind=game  attributed-by=rtti  size=303 */

void __thiscall cube::Speech::~Speech(Speech *this)

{
  char cVar1;
  undefined4 *puVar2;
  Speech *pSVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_18 [4];
  Speech *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e990e;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 9;
  piVar7 = this[7].field1_0x4;
  piVar6 = (int *)*piVar7;
  local_14 = this;
  if (piVar6 != piVar7) {
    do {
      puVar2 = (undefined4 *)piVar6[10];
      if (puVar2 != (undefined4 *)0x0) {
        FUN_004e3f40(local_18,*(undefined4 *)*puVar2,(undefined4 *)*puVar2);
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar2);
      }
      if (*(char *)((int)piVar6 + 0xd) == '\0') {
        piVar7 = (int *)piVar6[2];
        if (*(char *)((int)piVar7 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar7 + 0xd);
          piVar6 = piVar7;
          piVar7 = (int *)*piVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar7 + 0xd);
            piVar6 = piVar7;
            piVar7 = (int *)*piVar7;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0xd);
          piVar4 = (int *)piVar6[1];
          piVar7 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar7 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0xd);
            piVar4 = (int *)piVar6[1];
            piVar7 = piVar6;
          }
        }
      }
    } while (piVar6 != this[7].field1_0x4);
  }
  piVar7 = *(int **)this[8].field1_0x4;
  if (piVar7 != this[8].field1_0x4) {
    do {
      if ((undefined4 *)piVar7[10] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar7[10])(1,uVar5);
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar6 = (int *)piVar7[2];
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0xd);
          piVar7 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0xd);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar4 = (int *)piVar7[1];
          piVar6 = piVar7;
          while ((piVar7 = piVar4, cVar1 == '\0' && (piVar6 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar4 = (int *)piVar7[1];
            piVar6 = piVar7;
          }
        }
      }
    } while (piVar7 != this[8].field1_0x4);
  }
  pSVar3 = local_14;
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_004e3840(local_18,*(undefined4 *)local_14[9].field1_0x4,local_14[9].field1_0x4);
                    /* WARNING: Subroutine does not return */
  operator_delete(pSVar3[9].field1_0x4);
}


/* cube::Speech::deleting_destructor @ 004e3450  kind=game  attributed-by=rtti  size=30 */

Speech * __thiscall cube::Speech::deleting_destructor(Speech *this,byte param_1)

{
  ~Speech(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


