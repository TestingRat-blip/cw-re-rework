// helpers_dtor_like (entity) -- server. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like.h"

/* FUN_0041a090 @ 0041a090  kind=gamemisc  attributed-by=role:dtor-like  size=129 */

void FUN_0041a090(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_0041a090((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    if (7 < (uint)param_1[0xf]) {
      operator_delete((void *)param_1[10]);
    }
    param_1[0xf] = 7;
    param_1[0xe] = 0;
    *(undefined2 *)(param_1 + 10) = 0;
    if (7 < (uint)param_1[9]) {
      operator_delete((void *)param_1[4]);
    }
    param_1[9] = 7;
    param_1[8] = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}


/* FUN_0041a120 @ 0041a120  kind=gamemisc  attributed-by=role:dtor-like  size=92 */

void FUN_0041a120(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_0041a120((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    if (7 < (uint)param_1[9]) {
      operator_delete((void *)param_1[4]);
    }
    param_1[9] = 7;
    param_1[8] = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}


