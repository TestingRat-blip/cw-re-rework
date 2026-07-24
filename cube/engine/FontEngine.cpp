// FontEngine (engine) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "FontEngine.h"

/* plasma::FontEngine::FontEngine @ 00638fa0  kind=game  attributed-by=rtti  size=192 */

FontEngine * __thiscall plasma::FontEngine::FontEngine(FontEngine *this,undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5aa6;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  (this->FontEngine_data).offset_0x0 = param_1;
  (this->FontEngine_data).offset_0x4 = 0;
  (this->FontEngine_data).offset_0x8 = 0;
  uVar2 = FUN_006391e0(uVar1);
  (this->FontEngine_data).offset_0x4 = uVar2;
  local_8 = 0;
  (this->FontEngine_data).offset_0xc = (int *)0x0;
  (this->FontEngine_data).offset_0x10 = 0;
  piVar3 = (int *)FUN_0064e370();
  (this->FontEngine_data).offset_0xc = piVar3;
  local_8 = CONCAT31(local_8._1_3_,1);
  (this->FontEngine_data).offset_0x18 = (void *)0x0;
  (this->FontEngine_data).offset_0x1c = 0;
  pvVar4 = (void *)FUN_00439600(0,0);
  (this->FontEngine_data).offset_0x18 = pvVar4;
  FUN_0068e900(&(this->FontEngine_data).offset_0x14);
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->FontEngine_data).field_0x20,0x80000400);
  ExceptionList = local_10;
  return this;
}


/* plasma::FontEngine::~FontEngine @ 00639090  kind=game  attributed-by=rtti  size=193 */

void __thiscall plasma::FontEngine::~FontEngine(FontEngine *this)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f5af1;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  piVar2 = (this->FontEngine_data).offset_0xc;
  local_8 = 2;
  piVar5 = (int *)*piVar2;
  if (piVar5 != piVar2) {
    do {
      if ((undefined4 *)piVar5[10] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar5[10])(1,uVar4);
      }
      if (*(char *)((int)piVar5 + 0xd) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0xd);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0xd);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != (this->FontEngine_data).offset_0xc);
  }
  FUN_0068e950((this->FontEngine_data).offset_0x14);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->FontEngine_data).field_0x20);
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  operator_delete((this->FontEngine_data).offset_0x18);
}


/* plasma::FontEngine::deleting_destructor @ 006391b0  kind=game  attributed-by=rtti  size=30 */

FontEngine * __thiscall plasma::FontEngine::deleting_destructor(FontEngine *this,byte param_1)

{
  ~FontEngine(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


