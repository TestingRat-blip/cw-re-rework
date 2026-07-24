// Chunk (world) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Chunk.h"

/* cube::Chunk::Chunk @ 004596e0  kind=game  attributed-by=rtti  size=275 */

Chunk * __thiscall cube::Chunk::Chunk(Chunk *this)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3b14;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  (this->Chunk_data).offset_0x4 = (int *)0x0;
  (this->Chunk_data).offset_0x8 = 0;
  piVar1 = (int *)FUN_0046d550(0,0);
  (this->Chunk_data).offset_0x4 = piVar1;
  local_8 = 0;
  (this->Chunk_data).offset_0xc = (int *)0x0;
  (this->Chunk_data).offset_0x10 = 0;
  piVar1 = (int *)FUN_0046d550(0,0);
  (this->Chunk_data).offset_0xc = piVar1;
  (this->Chunk_data).offset_0x14 = 0xffffffff;
  (this->Chunk_data).offset_0x18 = 0xffffffff;
  (this->Chunk_data).offset_0x6c = 0;
  (this->Chunk_data).offset_0x70 = 0;
  (this->Chunk_data).offset_0x238 = 0;
  local_8._0_1_ = 1;
  (this->Chunk_data).offset_0x23c = 0;
  (this->Chunk_data).offset_0x240 = 0;
  uVar2 = FUN_00688b20(0,0);
  (this->Chunk_data).offset_0x23c = uVar2;
  local_8 = CONCAT31(local_8._1_3_,2);
  (this->Chunk_data).offset_0x244 = (void *)0x0;
  (this->Chunk_data).offset_0x248 = 0;
  pvVar3 = (void *)FUN_00688b20(0,0);
  (this->Chunk_data).offset_0x244 = pvVar3;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->Chunk_data).field_0x24c,0x80000400);
  ExceptionList = local_10;
  return this;
}


/* cube::Chunk::~Chunk @ 00466bf0  kind=game  attributed-by=rtti  size=185 */

void __thiscall cube::Chunk::~Chunk(Chunk *this)

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
  
  puStack_c = &LAB_006e50b2;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  piVar1 = (this->Chunk_data).offset_0x4;
  local_8 = 3;
  piVar6 = (int *)*piVar1;
  if (piVar6 != piVar1) {
    do {
      if ((undefined4 *)piVar6[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar6[2])(1,uVar5);
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (this->Chunk_data).offset_0x4);
  }
  piVar1 = (this->Chunk_data).offset_0xc;
  piVar6 = (int *)*piVar1;
  if (piVar6 != piVar1) {
    do {
      if ((undefined4 *)piVar6[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar6[2])(1);
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (this->Chunk_data).offset_0xc);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->Chunk_data).field_0x24c);
  puVar2 = (this->Chunk_data).offset_0x244;
  pvVar3 = (void *)*puVar2;
  *puVar2 = puVar2;
  pvVar4 = (this->Chunk_data).offset_0x244;
  *(void **)((int)pvVar4 + 4) = pvVar4;
  (this->Chunk_data).offset_0x248 = 0;
  if (pvVar3 == (this->Chunk_data).offset_0x244) {
                    /* WARNING: Subroutine does not return */
    operator_delete((this->Chunk_data).offset_0x244);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar3);
}


/* cube::Chunk::deleting_destructor @ 0046d260  kind=game  attributed-by=rtti  size=85 */

Chunk * __thiscall cube::Chunk::deleting_destructor(Chunk *this,uint param_1)

{
  undefined1 *puVar1;
  
  if ((param_1 & 2) != 0) {
    puVar1 = &this[-1].Chunk_data.field_0x24c;
    _eh_vector_destructor_iterator_(this,0x268,*(int *)&this[-1].Chunk_data.field_0x24c,~Chunk);
    if ((param_1 & 1) != 0) {
      operator_delete__(puVar1);
    }
    return (Chunk *)puVar1;
  }
  ~Chunk(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


