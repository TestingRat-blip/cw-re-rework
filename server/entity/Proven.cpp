// Proven (entity) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Proven.h"

/* SpeechDb_loadBlobToVector @ 00413130  kind=game  attributed-by=ledger  size=78 */

undefined4 __thiscall FUN_00413130(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *local_c;
  uint local_8;
  
  uVar1 = FUN_00413070(this,param_1,(uint *)&local_c,&local_8);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  param_2[3] = 0;
  FUN_00413180(param_2,local_8);
  pvVar2 = memcpy((void *)*param_2,local_c,local_8);
  return CONCAT31((int3)((uint)pvVar2 >> 8),1);
}


/* ItemData_copy (0x118) @ 00413710  kind=gamemisc  attributed-by=ledger  size=163 */

undefined1 * __thiscall FUN_00413710(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  *(undefined1 *)this = *param_1;
  *(undefined1 *)((int)this + 1) = param_1[1];
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined1 *)((int)this + 0xc) = param_1[0xc];
  *(undefined1 *)((int)this + 0xd) = param_1[0xd];
  *(undefined1 *)((int)this + 0xe) = param_1[0xe];
  *(undefined2 *)((int)this + 0x10) = *(undefined2 *)(param_1 + 0x10);
  iVar3 = 0x1f;
  puVar2 = param_1 + 0x17;
  puVar1 = (undefined1 *)((int)this + 0x16);
  do {
    iVar3 = iVar3 + -1;
    puVar1[-2] = puVar2[-3];
    puVar1[-1] = puVar2[-2];
    *puVar1 = puVar1[(int)param_1 - (int)this];
    puVar1[1] = *puVar2;
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 1);
    puVar2 = puVar2 + 8;
    puVar1 = puVar1 + 8;
  } while (-1 < iVar3);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  return this;
}


/* loot_append @ 00528530  kind=game  attributed-by=ledger  size=132 */

void __thiscall FUN_00528530(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined1 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined1 **)((int)this + 8)) {
      FUN_00413940(this,1);
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_00413710(*(void **)((int)this + 4),
                   (undefined1 *)((((int)param_1 - (int)puVar2) / 0x118) * 0x118 + *(int *)this));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x118;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined1 **)((int)this + 8)) {
      FUN_00413940(this,1);
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_00413710(*(void **)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x118;
  return;
}


