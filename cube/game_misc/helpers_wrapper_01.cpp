// helpers_wrapper_01 (game_misc) -- cube. 14 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper_01.h"

/* FUN_006cc890 @ 006cc890  kind=gamemisc  attributed-by=role:wrapper  size=76 */

int FUN_006cc890(void)

{
  uint uVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    return -1;
  }
  uVar1 = FUN_006909c0(*(undefined4 *)(unaff_ESI + 0xa4),unaff_ESI + 8,
                       *(undefined4 *)(unaff_ESI + 0x34));
  *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + uVar1;
  *(uint *)(unaff_ESI + 4) = (uint)(uVar1 < *(uint *)(unaff_ESI + 0x34));
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(uint *)(unaff_ESI + 0x1c) = (uVar1 * 8 - *(uint *)(unaff_ESI + 0x34)) + 1;
  return (uVar1 != 0) - 1;
}


/* FUN_006ccab0 @ 006ccab0  kind=gamemisc  attributed-by=role:wrapper  size=82 */

void FUN_006ccab0(void *param_1,int param_2)

{
  memset(param_1,0,0xac);
  *(int *)((int)param_1 + 0xa4) = param_2;
  *(undefined4 *)((int)param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  *(int *)((int)param_1 + 0x58) = (int)param_1 + 100;
  *(undefined4 *)((int)param_1 + 0x60) = 0x40;
  FUN_006cca80(param_1);
  return;
}


/* FUN_006cce10 @ 006cce10  kind=gamemisc  attributed-by=role:wrapper  size=72 */

int FUN_006cce10(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_ECX;
  undefined4 *in_EDX;
  
  in_EDX[1] = in_EAX;
  *in_EDX = in_ECX;
  in_EDX[2] = *(undefined4 *)(in_EAX + 0x1c);
  puVar1 = in_EDX + 0x42e;
  in_EDX[0x430] = puVar1;
  in_EDX[0x42f] = puVar1;
  *puVar1 = 0;
  iVar2 = FUN_006cc850();
  if (iVar2 == 0) {
    FUN_006ccab0(in_EDX + 3);
  }
  return iVar2;
}


/* FUN_006cce80 @ 006cce80  kind=gamemisc  attributed-by=role:wrapper  size=54 */

int FUN_006cce80(void)

{
  int *piVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 *unaff_ESI;
  
  iVar2 = FUN_006908c0(*unaff_ESI,0);
  if (iVar2 == 0) {
    FUN_006cca80(unaff_ESI + 3);
    piVar1 = unaff_ESI + 0x42e;
    unaff_ESI[0x430] = piVar1;
    unaff_ESI[0x42f] = piVar1;
    *piVar1 = extraout_EDX;
    iVar2 = extraout_EDX;
  }
  return iVar2;
}


/* FUN_006ccec0 @ 006ccec0  kind=gamemisc  attributed-by=role:wrapper  size=58 */

undefined4 FUN_006ccec0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  *(int *)(unaff_ESI + 0x10bc) = unaff_ESI + 0xb8;
  iVar1 = FUN_006ccb70(unaff_ESI + 0xc,unaff_ESI + 0xb8,0x1000);
  *(int *)(unaff_ESI + 0x10c0) = *(int *)(unaff_ESI + 0x10bc) + iVar1;
  uVar2 = 0x55;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}


/* FUN_006cd030 @ 006cd030  kind=gamemisc  attributed-by=role:wrapper  size=43 */

void FUN_006cd030(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    FUN_006cce60();
    FUN_00691290(uVar2,iVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


/* FUN_006ceb10 @ 006ceb10  kind=gamemisc  attributed-by=role:wrapper  size=63 */

undefined4 FUN_006ceb10(void)

{
  uint *puVar1;
  int in_EAX;
  
  if ((in_EAX != 0) && (puVar1 = *(uint **)(in_EAX + 0x1c), puVar1 != (uint *)0x0)) {
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined4 *)(in_EAX + 8) = 0;
    *(undefined4 *)(in_EAX + 0x18) = 0;
    *puVar1 = -(uint)(puVar1[3] != 0) & 7;
    FUN_006cdf40();
    return 0;
  }
  return 0xfffffffe;
}


/* FUN_006cf260 @ 006cf260  kind=gamemisc  attributed-by=role:wrapper  size=77 */

int FUN_006cf260(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  iVar2 = FUN_006908c0(*unaff_ESI,unaff_ESI[0x11]);
  if (iVar2 == 0) {
    FUN_006ceb10();
    unaff_ESI[6] = unaff_ESI + 0x412;
    puVar1 = unaff_ESI + 0x812;
    unaff_ESI[4] = 0;
    unaff_ESI[3] = unaff_ESI + 0x12;
    unaff_ESI[7] = 0;
    unaff_ESI[0x814] = puVar1;
    unaff_ESI[0x813] = puVar1;
    *puVar1 = 0;
  }
  return iVar2;
}


/* FUN_006d2140 @ 006d2140  kind=gamemisc  attributed-by=role:wrapper  size=82 */

void FUN_006d2140(void)

{
  uint in_ECX;
  double _X;
  
  _X = (double)(in_ECX & 0x1fffff);
  if ((int)in_ECX < 0) {
    _X = -_X;
  }
  ldexp(_X,((int)in_ECX >> 0x15 & 0x3ffU) - 0x314);
  return;
}


/* FUN_006d3800 @ 006d3800  kind=gamemisc  attributed-by=role:wrapper  size=63 */

undefined4 FUN_006d3800(undefined4 param_1)

{
  int in_ECX;
  int in_EDX;
  
  if ((-1 < in_EDX) && (in_EDX < *(int *)(*(int *)(in_ECX + 0xc) + 4))) {
    FUN_00401c40(param_1,*(undefined4 *)(*(int *)(in_ECX + 0x14) + in_EDX * 4),
                 *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xc) + 8) + in_EDX * 4));
    return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xc) + 8) + in_EDX * 4);
  }
  return 0;
}


/* FUN_006d6e60 @ 006d6e60  kind=gamemisc  attributed-by=role:wrapper  size=32 */

void FUN_006d6e60(void)

{
  void *in_ECX;
  
  if (in_ECX != (void *)0x0) {
    memset(in_ECX,0,0x208);
    free(in_ECX);
  }
  return;
}


/* FUN_006d8870 @ 006d8870  kind=gamemisc  attributed-by=role:wrapper  size=76 */

void FUN_006d8870(void)

{
  void *pvVar1;
  int *in_ECX;
  int in_EDX;
  
  *in_ECX = in_EDX;
  pvVar1 = calloc(in_EDX * 3,4);
  in_ECX[1] = (int)pvVar1;
  pvVar1 = calloc(0x20,4);
  in_ECX[2] = (int)pvVar1;
  if (in_EDX != 1) {
    FUN_006d8670(pvVar1);
  }
  return;
}


/* FUN_006f9430 @ 006f9430  kind=gamemisc  attributed-by=role:wrapper  size=29 */

void FUN_006f9430(void)

{
  FUN_0040c280(&DAT_006fc918,0);
  _atexit(FUN_006fb150);
  return;
}


/* FUN_006fb0f0 @ 006fb0f0  kind=gamemisc  attributed-by=role:wrapper  size=31 */

void FUN_006fb0f0(void)

{
  DAT_0076dea0 = FUN_004ccbf0(0,0);
  _atexit(FUN_006fb9f0);
  return;
}


