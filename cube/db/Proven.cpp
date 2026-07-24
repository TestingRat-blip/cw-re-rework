// Proven (db) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Proven.h"

/* db_loadBlobByKey @ 00449810  kind=gamemisc  attributed-by=ledger  size=191 */

undefined4 FUN_00449810(undefined4 param_1,undefined4 *param_2,size_t *param_3)

{
  undefined4 *puVar1;
  size_t *psVar2;
  int iVar3;
  undefined4 uVar4;
  size_t sVar5;
  void *_Src;
  int in_ECX;
  
  puVar1 = param_2;
  *param_2 = 0;
  *param_3 = 0;
  while( true ) {
    iVar3 = FUN_00526480(*(undefined4 *)(in_ECX + 4),"SELECT value FROM blobs WHERE key = ?",
                         0xffffffff,&param_2,0);
    if (iVar3 != 0) {
      return 0;
    }
    uVar4 = FUN_0040c380(0xffffffff,0);
    FUN_00526b60(param_2,1,uVar4);
    iVar3 = FUN_00527300(param_2);
    if (iVar3 == 100) break;
    iVar3 = FUN_00528070(param_2);
    if (iVar3 != 0x11) {
      return 0;
    }
  }
  sVar5 = FUN_00527610(param_2,0);
  psVar2 = param_3;
  *param_3 = sVar5;
  uVar4 = FUN_0068d652(sVar5);
  *puVar1 = uVar4;
  sVar5 = *psVar2;
  _Src = (void *)FUN_00527590(param_2,0);
  memcpy((void *)*puVar1,_Src,sVar5);
  FUN_00528070(param_2);
  return 1;
}


/* db_getBlobInto @ 004498d0  kind=gamemisc  attributed-by=ledger  size=78 */

undefined1 FUN_004498d0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  void *local_c;
  size_t local_8;
  
  cVar1 = FUN_00449810(param_1,&local_c,&local_8);
  if (cVar1 == '\0') {
    return 0;
  }
  param_2[3] = 0;
  FUN_005870c0(local_8);
  memcpy((void *)*param_2,local_c,local_8);
  return 1;
}


