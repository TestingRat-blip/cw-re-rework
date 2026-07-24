// helpers_wrapper_01 (game_misc) -- cube. 78 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper_01.h"

/* FUN_0069f6a0 @ 0069f6a0  kind=gamemisc  attributed-by=role:wrapper  size=57 */

undefined4 FUN_0069f6a0(void)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  int unaff_ESI;
  uint unaff_EDI;
  
  if (*(uint *)(unaff_ESI + 0x1c) < unaff_EDI) {
    *(undefined4 *)(unaff_ESI + 0x24) = in_ECX;
    uVar1 = FUN_00693a60();
    *(undefined4 *)(unaff_ESI + 0x20) = uVar1;
    *(uint *)(unaff_ESI + 0x1c) = unaff_EDI;
  }
  return 0;
}


/* FUN_006a0860 @ 006a0860  kind=gamemisc  attributed-by=role:wrapper  size=46 */

void FUN_006a0860(void)

{
  int unaff_ESI;
  
  FUN_00691ee0(*(undefined4 *)(unaff_ESI + 0x68),unaff_ESI + 0x304);
  *(undefined4 *)(unaff_ESI + 0x308) = 0;
  *(undefined4 *)(unaff_ESI + 0x30c) = 0;
  *(undefined4 *)(unaff_ESI + 0x310) = 0;
  *(undefined4 *)(unaff_ESI + 0x314) = 0;
  return;
}


/* FUN_006a1c20 @ 006a1c20  kind=gamemisc  attributed-by=role:wrapper  size=59 */

uint FUN_006a1c20(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  uint in_ECX;
  
  uVar1 = FUN_00690cd0();
  *(undefined4 *)(in_EAX + 0xc) = uVar1;
  if (in_ECX == 0) {
    iVar2 = FUN_00692010();
    in_ECX = (uint)(iVar2 != 0);
  }
  return in_ECX;
}


/* FUN_006a3780 @ 006a3780  kind=gamemisc  attributed-by=role:wrapper  size=59 */

int FUN_006a3780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = FUN_006a30a0(param_1,param_2,&local_4);
  if (iVar1 == 0) {
    FUN_00691360(param_3,local_4,param_4);
  }
  return iVar1;
}


/* FUN_006a38b0 @ 006a38b0  kind=gamemisc  attributed-by=role:wrapper  size=90 */

void FUN_006a38b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_18;
  *param_4 = 0x7fffffff;
  local_14 = param_2;
  local_18 = 0;
  local_10 = param_3;
  local_c = 0;
  local_8 = 0;
  FUN_006a2240(param_1,&local_18,param_4);
  __security_check_cookie(local_4 ^ (uint)&local_18);
  return;
}


/* FUN_006a3e30 @ 006a3e30  kind=gamemisc  attributed-by=role:wrapper  size=69 */

void FUN_006a3e30(int param_1,undefined4 param_2)

{
  char cVar1;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  
  cVar1 = *(char *)(param_1 + 0x5a);
  FUN_006a3cb0(param_2,-in_EDX,-in_EAX,-in_ECX);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x5a) == '\0')) {
    *(int *)(*(int *)(param_1 + 0x5c) + 0x14) = -*(int *)(*(int *)(param_1 + 0x5c) + 0x14);
  }
  return;
}


/* FUN_006a5430 @ 006a5430  kind=gamemisc  attributed-by=role:wrapper  size=57 */

int * FUN_006a5430(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_2;
  *param_2 = 0;
  iVar2 = FUN_00692230(param_1,0x18,&param_2);
  if (param_2 == (int *)0x0) {
    *(undefined4 *)(iVar2 + 8) = param_1;
    *piVar1 = iVar2;
    return (int *)0x0;
  }
  return param_2;
}


/* FUN_006a5de0 @ 006a5de0  kind=gamemisc  attributed-by=role:wrapper  size=35 */

void FUN_006a5de0(void)

{
  FUN_006a5a60();
  FUN_006a5a60();
  FUN_006a58a0();
  return;
}


/* FUN_006a5e40 @ 006a5e40  kind=gamemisc  attributed-by=role:wrapper  size=29 */

void FUN_006a5e40(undefined4 param_1)

{
  undefined1 local_4 [4];
  
  FUN_006a5e20();
  FUN_006a5ae0(param_1,local_4);
  return;
}


/* FUN_006a5e60 @ 006a5e60  kind=gamemisc  attributed-by=role:wrapper  size=45 */

void FUN_006a5e60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_006a5e40();
  if (iVar1 == 0) {
    FUN_006a5b70(param_1,param_3);
  }
  return;
}


/* FUN_006a6000 @ 006a6000  kind=gamemisc  attributed-by=role:wrapper  size=26 */

void FUN_006a6000(undefined4 param_1)

{
  FUN_006a5e20();
  FUN_006a5d80(param_1);
  return;
}


/* FUN_006a6070 @ 006a6070  kind=gamemisc  attributed-by=role:wrapper  size=46 */

void FUN_006a6070(void)

{
  int in_EAX;
  int in_EDX;
  
  if ((0 < in_EAX) && (in_EAX < 3)) {
    *(int *)(in_EDX + 0xc) = in_EAX;
    *(undefined4 *)(in_EDX + 4) = 0;
    FUN_006a5e10();
    FUN_006a5e10();
    return;
  }
  *(undefined4 *)(in_EDX + 4) = 6;
  *(int *)(in_EDX + 0xc) = in_EAX;
  return;
}


/* FUN_006a6370 @ 006a6370  kind=gamemisc  attributed-by=role:wrapper  size=68 */

void FUN_006a6370(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_0068e970(*param_3);
  FUN_0068e970(param_3[1]);
  FUN_006a60a0(1);
  return;
}


/* FUN_006a74e0 @ 006a74e0  kind=gamemisc  attributed-by=role:wrapper  size=63 */

void FUN_006a74e0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_EDI;
  
  uVar1 = unaff_EDI[4];
  FUN_006a6cd0();
  FUN_006a6cd0();
  FUN_00691290(uVar1,unaff_EDI[2]);
  unaff_EDI[2] = 0;
  FUN_00691290(uVar1,unaff_EDI[3]);
  unaff_EDI[3] = 0;
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  unaff_EDI[4] = 0;
  return;
}


/* FUN_006a8e80 @ 006a8e80  kind=gamemisc  attributed-by=role:wrapper  size=80 */

void FUN_006a8e80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = param_1[8];
  if (param_1[3] == -0x21524111) {
    FUN_00691290(uVar1,*param_1);
    *param_1 = 0;
    FUN_00691290(uVar1,param_1[6]);
    param_1[6] = 0;
    FUN_00691290(uVar1,param_1[7]);
    param_1[7] = 0;
    param_1[3] = 0;
  }
  return;
}


/* FUN_006a9660 @ 006a9660  kind=gamemisc  attributed-by=role:wrapper  size=85 */

void FUN_006a9660(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (*(char *)(param_1 + 0x44) != '\0') {
    sVar2 = *(short *)(iVar3 + 2);
    iVar4 = *(int *)(iVar3 + 8);
    piVar1 = (int *)(*(int *)(iVar3 + 4) + sVar2 * 8);
    iVar5 = FUN_0068e970(param_2);
    *piVar1 = iVar5 >> 0x10;
    iVar5 = FUN_0068e970(param_3);
    piVar1[1] = iVar5 >> 0x10;
    *(char *)(iVar4 + sVar2) = (param_4 == '\0') + '\x01';
  }
  *(short *)(iVar3 + 2) = *(short *)(iVar3 + 2) + 1;
  return;
}


/* FUN_006a96c0 @ 006a96c0  kind=gamemisc  attributed-by=role:wrapper  size=49 */

int FUN_006a96c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_006a9620(param_1,1);
  if (iVar1 == 0) {
    FUN_006a9660(param_1,param_2,param_3,1);
  }
  return iVar1;
}


/* FUN_006aa020 @ 006aa020  kind=gamemisc  attributed-by=role:wrapper  size=46 */

void FUN_006aa020(void)

{
  char *pcVar1;
  char *in_EAX;
  undefined4 *unaff_EBX;
  
  FUN_006a9f80();
  pcVar1 = (char *)*unaff_EBX;
  if ((pcVar1 < in_EAX) && (*pcVar1 == '#')) {
    *unaff_EBX = pcVar1 + 1;
    FUN_006a9f80();
  }
  return;
}


/* FUN_006aa8b0 @ 006aa8b0  kind=gamemisc  attributed-by=role:wrapper  size=24 */

void FUN_006aa8b0(undefined4 param_1)

{
  FUN_006a92c0(param_1);
  FUN_006aa020();
  return;
}


/* FUN_006aa950 @ 006aa950  kind=gamemisc  attributed-by=role:wrapper  size=31 */

void FUN_006aa950(int param_1,undefined4 param_2)

{
  FUN_006a92c0(param_1);
  FUN_006aa050(param_1,*(undefined4 *)(param_1 + 8),param_2);
  return;
}


/* FUN_006aa970 @ 006aa970  kind=gamemisc  attributed-by=role:wrapper  size=36 */

void FUN_006aa970(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006a92c0(param_1);
  FUN_006aa2e0(param_1,*(undefined4 *)(param_1 + 8),param_2,param_3);
  return;
}


/* FUN_006aa9a0 @ 006aa9a0  kind=gamemisc  attributed-by=role:wrapper  size=41 */

void FUN_006aa9a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_006a92c0(param_1);
  FUN_006aa3e0(param_1,*(undefined4 *)(param_1 + 8),param_2,param_3,param_4);
  return;
}


/* FUN_006af030 @ 006af030  kind=gamemisc  attributed-by=role:wrapper  size=48 */

undefined4 FUN_006af030(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_006931e0(*(undefined4 *)(*param_1 + 500),&param_1);
  piVar1[0xb] = (int)param_1;
  FUN_0068fcc0(param_1);
  return uVar2;
}


/* FUN_006af100 @ 006af100  kind=gamemisc  attributed-by=role:wrapper  size=54 */

void FUN_006af100(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00691390(*(int *)(*param_1 + 500) + 0x6c,param_1[0xb]);
  if (iVar1 != 0) {
    FUN_006919d0(param_1[0xb]);
    param_1[0xb] = 0;
  }
  return;
}


/* FUN_006af140 @ 006af140  kind=gamemisc  attributed-by=role:wrapper  size=58 */

void FUN_006af140(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 500);
  if (*(int *)(*(int *)(param_1 + 4) + 0x54) == 0) {
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0x54);
    return;
  }
  FUN_00692580(iVar1,&param_1);
  *(int *)(iVar2 + 0xa0) = param_1;
  return;
}


/* FUN_006af1a0 @ 006af1a0  kind=gamemisc  attributed-by=role:wrapper  size=114 */

void FUN_006af1a0(void)

{
  int unaff_ESI;
  
  FUN_00691600();
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  *(undefined4 *)(unaff_ESI + 0x70) = 0;
  *(undefined4 *)(unaff_ESI + 0x74) = 0;
  *(undefined4 *)(unaff_ESI + 0x78) = 0;
  *(undefined4 *)(unaff_ESI + 0x7c) = 0;
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  *(undefined4 *)(unaff_ESI + 0x58) = 0;
  *(undefined4 *)(unaff_ESI + 0x5c) = 0;
  *(undefined4 *)(unaff_ESI + 0x60) = 0;
  *(undefined4 *)(unaff_ESI + 100) = 0;
  *(undefined4 *)(unaff_ESI + 0x68) = 0;
  *(undefined4 *)(unaff_ESI + 0x80) = 0;
  *(undefined4 *)(unaff_ESI + 0x84) = 0;
  *(undefined4 *)(unaff_ESI + 0x88) = 0;
  *(undefined4 *)(unaff_ESI + 0x8c) = 0;
  *(undefined4 *)(unaff_ESI + 0x98) = 0;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  return;
}


/* FUN_006b0370 @ 006b0370  kind=gamemisc  attributed-by=role:wrapper  size=44 */

void FUN_006b0370(void)

{
  void *unaff_ESI;
  
  memset(unaff_ESI,0,0x130);
  *(undefined4 *)((int)unaff_ESI + 0x90) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x58) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x68) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xd4) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xa0) = 0;
  return;
}


/* FUN_006b0b80 @ 006b0b80  kind=gamemisc  attributed-by=role:wrapper  size=57 */

void FUN_006b0b80(void)

{
  int iVar1;
  uint uVar2;
  uint *unaff_EBX;
  
  iVar1 = FUN_006908c0();
  if (iVar1 != 0) {
    *unaff_EBX = 0;
    return;
  }
  uVar2 = FUN_00690b80();
  *unaff_EBX = uVar2 & 0xffff;
  return;
}


/* FUN_006b1680 @ 006b1680  kind=gamemisc  attributed-by=role:wrapper  size=59 */

void FUN_006b1680(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  uVar1 = **(undefined4 **)(unaff_ESI + 0x1c);
  FUN_00691290(uVar1,*(undefined4 *)(unaff_ESI + 8));
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 4) = 0;
  FUN_00691290(uVar1,*(undefined4 *)(unaff_ESI + 0x18));
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined1 *)(unaff_ESI + 0x20) = 0;
  return;
}


/* FUN_006b1890 @ 006b1890  kind=gamemisc  attributed-by=role:wrapper  size=19 */

void FUN_006b1890(void)

{
  int unaff_ESI;
  
  FUN_006b16c0();
  FUN_0068f0c0(*(undefined4 *)(unaff_ESI + 0x1c));
  return;
}


/* FUN_006b33d0 @ 006b33d0  kind=gamemisc  attributed-by=role:wrapper  size=46 */

void FUN_006b33d0(void)

{
  int unaff_ESI;
  
  FUN_0068f020(*(undefined4 *)(unaff_ESI + 0x1c));
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  FUN_006b3230();
  return;
}


/* FUN_006b46c0 @ 006b46c0  kind=gamemisc  attributed-by=role:wrapper  size=55 */

undefined4 FUN_006b46c0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *in_EAX;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(*in_EAX + 0x140);
  iVar3 = FUN_0068fd80(*(undefined4 *)(*(int *)(*in_EAX + 0x60) + 4),"pshinter");
  if (((iVar3 != 0) && (puVar1 != (undefined4 *)0x0)) &&
     (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) {
    uVar4 = (*pcVar2)(iVar3);
    return uVar4;
  }
  return 0;
}


/* FUN_006b5920 @ 006b5920  kind=gamemisc  attributed-by=role:wrapper  size=37 */

int FUN_006b5920(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  if (*(char *)*in_ECX == '\x1e') {
    iVar1 = FUN_006b5650(in_ECX[1],0,0);
    return iVar1 >> 0x10;
  }
  iVar1 = FUN_006b55b0();
  return iVar1;
}


/* FUN_006b5950 @ 006b5950  kind=gamemisc  attributed-by=role:wrapper  size=38 */

int FUN_006b5950(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  if (*(char *)*in_ECX == '\x1e') {
    iVar1 = FUN_006b5650(in_ECX[1],0,0);
    return iVar1;
  }
  iVar1 = FUN_006b55b0();
  return iVar1 << 0x10;
}


/* FUN_006b5980 @ 006b5980  kind=gamemisc  attributed-by=role:wrapper  size=45 */

int FUN_006b5980(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int unaff_ESI;
  
  if (*(char *)*in_ECX == '\x1e') {
    iVar1 = FUN_006b5650(in_ECX[1]);
    return iVar1;
  }
  iVar1 = FUN_006b55b0();
  return iVar1 * *(int *)(&DAT_00734690 + unaff_ESI * 4) * 0x10000;
}


/* FUN_006b6530 @ 006b6530  kind=gamemisc  attributed-by=role:wrapper  size=41 */

void FUN_006b6530(undefined4 param_1)

{
  undefined1 *unaff_ESI;
  
  if (*(int *)(unaff_ESI + 8) != 0) {
    FUN_00691ee0(param_1,unaff_ESI + 8);
  }
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *unaff_ESI = 0;
  *(undefined4 *)(unaff_ESI + 4) = 0;
  return;
}


/* FUN_006b6700 @ 006b6700  kind=gamemisc  attributed-by=role:wrapper  size=22 */

void FUN_006b6700(void)

{
  int unaff_ESI;
  
  FUN_00691290();
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  return;
}


/* FUN_006b6720 @ 006b6720  kind=gamemisc  attributed-by=role:wrapper  size=40 */

void FUN_006b6720(void)

{
  undefined4 uVar1;
  int in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = *(undefined4 *)(in_EAX + 0x1c);
  FUN_006b6700();
  FUN_00691290(uVar1,in_ECX[2]);
  in_ECX[2] = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}


/* FUN_006b7000 @ 006b7000  kind=gamemisc  attributed-by=role:wrapper  size=48 */

void FUN_006b7000(undefined4 param_1)

{
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    FUN_006b5fe0();
    FUN_00691290(param_1,*(undefined4 *)(unaff_EDI + 0x234));
    *(undefined4 *)(unaff_EDI + 0x234) = 0;
  }
  return;
}


/* FUN_006b7540 @ 006b7540  kind=gamemisc  attributed-by=role:wrapper  size=61 */

undefined4 FUN_006b7540(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *in_EAX;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(*(int *)(*in_EAX + 0x2b4) + 0x804);
  iVar3 = FUN_0068fd80(*(undefined4 *)(*(int *)(*in_EAX + 0x60) + 4),"pshinter");
  if (((iVar3 != 0) && (puVar1 != (undefined4 *)0x0)) &&
     (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) {
    uVar4 = (*pcVar2)(iVar3);
    return uVar4;
  }
  return 0;
}


/* FUN_006b86d0 @ 006b86d0  kind=gamemisc  attributed-by=role:wrapper  size=43 */

int FUN_006b86d0(void)

{
  int iVar1;
  
  iVar1 = FUN_006b8660();
  if (iVar1 == 0) {
    FUN_006b8690(1);
  }
  return iVar1;
}


/* FUN_006bb130 @ 006bb130  kind=gamemisc  attributed-by=role:wrapper  size=92 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006bb130(undefined2 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *unaff_EBX;
  
  *param_1 = 0;
  *unaff_EBX = 0;
  sVar1 = FUN_00690b80();
  if ((param_1 == (undefined2 *)0x0) &&
     ((_DAT_00000000 = sVar1, sVar1 == -0x7fff || (sVar1 == -0x7ffe)))) {
    uVar2 = FUN_00690d40();
    *unaff_EBX = uVar2;
  }
  return;
}


/* FUN_006bd950 @ 006bd950  kind=gamemisc  attributed-by=role:wrapper  size=68 */

void FUN_006bd950(void)

{
  void *unaff_ESI;
  
  memset(unaff_ESI,0,0x178);
  *(undefined4 *)((int)unaff_ESI + 0x98) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x60) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x70) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xdc) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xa8) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x148) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x110) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x170) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x174) = 0;
  return;
}


/* FUN_006bdde0 @ 006bdde0  kind=gamemisc  attributed-by=role:wrapper  size=55 */

undefined4 FUN_006bdde0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *in_EAX;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(*in_EAX + 0x228);
  iVar3 = FUN_0068fd80(*(undefined4 *)(*(int *)(*in_EAX + 0x60) + 4),"pshinter");
  if (((iVar3 != 0) && (puVar1 != (undefined4 *)0x0)) &&
     (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) {
    uVar4 = (*pcVar2)(iVar3);
    return uVar4;
  }
  return 0;
}


/* FUN_006bdea0 @ 006bdea0  kind=gamemisc  attributed-by=role:wrapper  size=64 */

undefined4 FUN_006bdea0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_006bdde0();
  FUN_0068f5f0(*param_1,param_2);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 4))(param_1[10],param_1[4],param_1[5],0,0);
  }
  return 0;
}


/* FUN_006be8e0 @ 006be8e0  kind=gamemisc  attributed-by=role:wrapper  size=47 */

void FUN_006be8e0(void)

{
  int unaff_ESI;
  
  FUN_00691290();
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  FUN_00691290();
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  FUN_00691290();
  return;
}


/* FUN_006bf680 @ 006bf680  kind=gamemisc  attributed-by=role:wrapper  size=30 */

void FUN_006bf680(void)

{
  int unaff_ESI;
  
  FUN_00691ee0(*(undefined4 *)(unaff_ESI + 0x68),unaff_ESI + 0x2e0);
  *(undefined4 *)(unaff_ESI + 0x2dc) = 0;
  return;
}


/* FUN_006bf8d0 @ 006bf8d0  kind=gamemisc  attributed-by=role:wrapper  size=52 */

void FUN_006bf8d0(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x68);
  FUN_00691290(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(in_EAX + 0x2f4));
  *(undefined4 *)(in_EAX + 0x2f4) = 0;
  FUN_00691ee0(iVar1,in_EAX + 0x2e4);
  return;
}


/* FUN_006c07c0 @ 006c07c0  kind=gamemisc  attributed-by=role:wrapper  size=93 */

void FUN_006c07c0(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  if (iVar1 != 0) {
    FUN_00691290(iVar1,unaff_ESI[7]);
    unaff_ESI[7] = 0;
    FUN_00691290(iVar1,unaff_ESI[6]);
    unaff_ESI[6] = 0;
    FUN_00691290(iVar1,unaff_ESI[4]);
    unaff_ESI[4] = 0;
    FUN_00691290(iVar1,unaff_ESI[3]);
    unaff_ESI[3] = 0;
    FUN_00691290(iVar1,unaff_ESI[5]);
    unaff_ESI[5] = 0;
    unaff_ESI[2] = 0;
    unaff_ESI[1] = 0;
    *unaff_ESI = 0;
  }
  return;
}


/* FUN_006c0a20 @ 006c0a20  kind=gamemisc  attributed-by=role:wrapper  size=25 */

void FUN_006c0a20(int param_1)

{
  if (*(char *)(param_1 + 300) != '\0') {
    FUN_006c0950();
  }
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return;
}


/* FUN_006c0c20 @ 006c0c20  kind=gamemisc  attributed-by=role:wrapper  size=107 */

undefined4 FUN_006c0c20(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  uVar1 = unaff_ESI[2];
  unaff_ESI[0x6e] = 0;
  FUN_00691290(uVar1,unaff_ESI[6]);
  unaff_ESI[6] = 0;
  unaff_ESI[5] = 0;
  FUN_00691290(uVar1,unaff_ESI[0x6d]);
  unaff_ESI[0x6d] = 0;
  unaff_ESI[0x6c] = 0;
  unaff_ESI[0x6b] = 0;
  FUN_00691290(uVar1,unaff_ESI[0x62]);
  unaff_ESI[0x62] = 0;
  unaff_ESI[0x61] = 0;
  unaff_ESI[1] = 0;
  *unaff_ESI = 0;
  FUN_00691290(uVar1);
  return 0;
}


/* FUN_006c0c90 @ 006c0c90  kind=gamemisc  attributed-by=role:wrapper  size=102 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006c0c90(void)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = in_EAX;
  *(undefined4 *)(in_ECX + 0x1b0) = 0x20;
  uVar1 = FUN_00693a60();
  *(undefined4 *)(in_ECX + 0x1b4) = uVar1;
  if (in_ECX != 0) {
    FUN_006c0c20();
    return in_ECX;
  }
  uRam00000014 = 0;
  uRam00000184 = 0;
  uRam00000018 = 0;
  uRam00000188 = 0;
  _DAT_00000000 = 0;
  uRam00000004 = 0;
  uRam000001b8 = 0;
  return 0;
}


/* FUN_006c1250 @ 006c1250  kind=gamemisc  attributed-by=role:wrapper  size=27 */

void FUN_006c1250(void)

{
  int in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_006c11c0();
  FUN_0068ebc0(*(undefined2 *)(in_EAX + 0xfc),uVar1);
  return;
}


/* FUN_006c1290 @ 006c1290  kind=gamemisc  attributed-by=role:wrapper  size=35 */

void FUN_006c1290(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006c11c0();
  FUN_0068ebc0(*(undefined4 *)(*(int *)(param_1 + 0x180) + param_2 * 4),uVar1);
  return;
}


/* FUN_006c12e0 @ 006c12e0  kind=gamemisc  attributed-by=role:wrapper  size=39 */

void FUN_006c12e0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006c11c0();
  uVar1 = FUN_0068ec40(param_3,uVar1);
  *(undefined4 *)(*(int *)(param_1 + 0x180) + param_2 * 4) = uVar1;
  return;
}


/* FUN_006c1d80 @ 006c1d80  kind=gamemisc  attributed-by=role:wrapper  size=66 */

void FUN_006c1d80(void)

{
  void *_Dst;
  int iVar1;
  undefined4 uVar2;
  int *in_EAX;
  int iVar3;
  int unaff_ESI;
  
  iVar1 = *in_EAX;
  if ((0 < iVar1) && (iVar1 <= *(int *)(unaff_ESI + 0x1c))) {
    iVar3 = *(int *)(unaff_ESI + 0x1c) - iVar1;
    uVar2 = *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + iVar3 * 4);
    _Dst = (void *)(*(int *)(unaff_ESI + 0x18) + iVar3 * 4);
    memmove(_Dst,(void *)((int)_Dst + 4),iVar1 * 4 - 4);
    *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + -4 + *(int *)(unaff_ESI + 0x1c) * 4) = uVar2;
    return;
  }
  *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  return;
}


/* FUN_006ca2c0 @ 006ca2c0  kind=gamemisc  attributed-by=role:wrapper  size=35 */

void FUN_006ca2c0(void)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = FUN_006ca150(*(undefined1 *)(unaff_EDI + 0xc),*(undefined1 *)(unaff_ESI + 0xc));
  *(int *)(unaff_ESI + 8) = iVar1 + *(int *)(unaff_EDI + 8);
  return;
}


/* FUN_006cb180 @ 006cb180  kind=gamemisc  attributed-by=role:wrapper  size=26 */

void __fastcall FUN_006cb180(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = FUN_006cb050(param_1);
  *(int *)(unaff_ESI + 8) = iVar1 + *(int *)(unaff_EDI + 8);
  return;
}


/* FUN_006cb7e0 @ 006cb7e0  kind=gamemisc  attributed-by=role:wrapper  size=42 */

void FUN_006cb7e0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_006c8870(unaff_ESI + 3);
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  FUN_006915b0(unaff_ESI[2]);
  unaff_ESI[2] = 0;
  return;
}


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


/* FUN_006dc280 @ 006dc280  kind=gamemisc  attributed-by=role:wrapper  size=37 */

void FUN_006dc280(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xb18);
    free(param_1);
  }
  return;
}


/* FUN_006dd8b0 @ 006dd8b0  kind=gamemisc  attributed-by=role:wrapper  size=37 */

void FUN_006dd8b0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xc88);
    free(param_1);
  }
  return;
}


/* FUN_006dee70 @ 006dee70  kind=gamemisc  attributed-by=role:wrapper  size=37 */

void FUN_006dee70(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x520);
    free(param_1);
  }
  return;
}


/* FUN_006deea0 @ 006deea0  kind=gamemisc  attributed-by=role:wrapper  size=37 */

void FUN_006deea0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x460);
    free(param_1);
  }
  return;
}


/* FUN_006e00f0 @ 006e00f0  kind=gamemisc  attributed-by=role:wrapper  size=34 */

void FUN_006e00f0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x60);
    free(param_1);
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


