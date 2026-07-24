// helpers_dtor_like (ai) -- server. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like.h"

/* FUN_00405330 @ 00405330  kind=gamemisc  attributed-by=role:dtor-like  size=171 */

void __fastcall FUN_00405330(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)(param_1 + 0x140c);
  FUN_00402ed0(*(int **)(*(int *)(param_1 + 0x140c) + 4));
  piVar2 = (int *)(param_1 + 0x1414);
  *(int *)(*piVar1 + 4) = *piVar1;
  *(int *)*piVar1 = *piVar1;
  *(int *)(*piVar1 + 8) = *piVar1;
  *(undefined4 *)(param_1 + 0x1410) = 0;
  FUN_00402ed0(*(int **)(*piVar2 + 4));
  *(int *)(*piVar2 + 4) = *piVar2;
  *(int *)*piVar2 = *piVar2;
  *(int *)(*piVar2 + 8) = *piVar2;
  *(undefined4 *)(param_1 + 0x1418) = 0;
  piVar2 = *(int **)(param_1 + 0x1460);
  piVar3 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *(int *)(*(int *)(param_1 + 0x1460) + 4) = *(int *)(param_1 + 0x1460);
  *(undefined4 *)(param_1 + 0x1464) = 0;
  if (piVar3 != *(int **)(param_1 + 0x1460)) {
    do {
      piVar2 = (int *)*piVar3;
      operator_delete(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x1460));
  }
  *(int *)(param_1 + 0x1408) = *piVar1;
  FUN_004f8520((int *)(param_1 + 0x1468));
  return;
}


