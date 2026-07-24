// helpers_mutator (game_misc) -- cube. 34 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_mutator.h"

/* mutator_402350 @ 00402350  kind=gamemisc  attributed-by=role:mutator  size=30 */

bool FUN_00402350(char param_1,FILE *param_2)

{
  int iVar1;
  
  iVar1 = fputc((int)param_1,param_2);
  return iVar1 != -1;
}


/* mutator_411a90 @ 00411a90  kind=gamemisc  attributed-by=role:mutator  size=30 */

void FUN_00411a90(char param_1)

{
  int in_ECX;
  
  *(uint *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x94) + *(int *)(*(int *)(in_ECX + 0x3c) + 0x68) * 4)
       = (uint)(param_1 != '\0');
  return;
}


/* mutator_42f030 @ 0042f030  kind=gamemisc  attributed-by=role:mutator  size=15 */

void FUN_0042f030(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 4);
  return;
}


/* mutator_43b480 @ 0043b480  kind=gamemisc  attributed-by=role:mutator  size=22 */

undefined4 FUN_0043b480(void)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 3) & 0x1f) != 0) && ((*(byte *)(in_ECX + 3) & 0x1f) != 2)) {
    return 1;
  }
  return 0;
}


/* mutator_468fa0 @ 00468fa0  kind=gamemisc  attributed-by=role:mutator  size=23 */

void FUN_00468fa0(int *param_1,int param_2)

{
  int *in_ECX;
  
  *param_1 = param_2 * 0x148 + *in_ECX;
  return;
}


/* mutator_46eb80 @ 0046eb80  kind=gamemisc  attributed-by=role:mutator  size=16 */

void FUN_0046eb80(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1b4) = param_1;
  return;
}


/* mutator_46f440 @ 0046f440  kind=gamemisc  attributed-by=role:mutator  size=16 */

void FUN_0046f440(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *param_1 = *(undefined4 *)*in_ECX;
  return;
}


/* mutator_488bb0 @ 00488bb0  kind=gamemisc  attributed-by=role:mutator  size=20 */

int FUN_00488bb0(int param_1)

{
  if ((param_1 == 0) || (*(int *)(param_1 + 0x48) != 3)) {
    param_1 = 0;
  }
  return param_1;
}


/* mutator_4c0ed0 @ 004c0ed0  kind=gamemisc  attributed-by=role:mutator  size=27 */

undefined1 FUN_004c0ed0(void)

{
  int in_ECX;
  
  if (*(float *)(in_ECX + 0x1cc) == 0.0) {
    return 1;
  }
  return 0;
}


/* mutator_51de30 @ 0051de30  kind=gamemisc  attributed-by=role:mutator  size=18 */

undefined4 FUN_0051de30(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0;
}


/* mutator_51e950 @ 0051e950  kind=gamemisc  attributed-by=role:mutator  size=15 */

undefined4 FUN_0051e950(undefined4 param_1)

{
  DAT_007666a4 = param_1;
  return 0;
}


/* mutator_51ff50 @ 0051ff50  kind=gamemisc  attributed-by=role:mutator  size=24 */

undefined4 FUN_0051ff50(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 0xc);
  return 0;
}


/* mutator_522370 @ 00522370  kind=gamemisc  attributed-by=role:mutator  size=25 */

undefined4 FUN_00522370(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}


/* mutator_522660 @ 00522660  kind=gamemisc  attributed-by=role:mutator  size=22 */

void FUN_00522660(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0052266e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0076662c)();
    return;
  }
  return;
}


/* mutator_522dc1 @ 00522dc1  kind=gamemisc  attributed-by=role:mutator  size=28 */

undefined4 FUN_00522dc1(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(unaff_ESI + 0xc));
  }
  return 0;
}


/* set_0xe0_5232b0 @ 005232b0  kind=gamemisc  attributed-by=role:mutator  size=18 */

void FUN_005232b0(int param_1)

{
  *(undefined4 *)(param_1 + 0xe0) = 1;
  return;
}


/* mutator_5244c0 @ 005244c0  kind=gamemisc  attributed-by=role:mutator  size=30 */

void FUN_005244c0(int param_1)

{
  if (param_1 != 0) {
    DAT_0076b388 = DAT_0076b360;
  }
  return;
}


/* mutator_5265d0 @ 005265d0  kind=gamemisc  attributed-by=role:mutator  size=31 */

undefined4 FUN_005265d0(int param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0x60) & 0x200) != 0)) {
    return *(undefined4 *)(param_1 + 0x98);
  }
  return 0;
}


/* mutator_526b40 @ 00526b40  kind=gamemisc  attributed-by=role:mutator  size=17 */

undefined4 FUN_00526b40(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + -8);
}


/* mutator_526dc0 @ 00526dc0  kind=gamemisc  attributed-by=role:mutator  size=20 */

int FUN_00526dc0(int param_1)

{
  if (param_1 != 0) {
    return (int)*(short *)(param_1 + 0x4c);
  }
  return 0;
}


/* mutator_526f90 @ 00526f90  kind=gamemisc  attributed-by=role:mutator  size=20 */

undefined2 FUN_00526f90(int param_1)

{
  if (param_1 != 0) {
    return *(undefined2 *)(param_1 + 0x2c);
  }
  return 0;
}


/* mutator_527570 @ 00527570  kind=gamemisc  attributed-by=role:mutator  size=26 */

undefined2 FUN_00527570(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    return *(undefined2 *)(param_1 + 0x2c);
  }
  return 0;
}


/* mutator_528810 @ 00528810  kind=gamemisc  attributed-by=role:mutator  size=27 */

undefined4 FUN_00528810(int param_1)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x60) & 0x20) == 0)) {
    return 0;
  }
  return 1;
}


/* mutator_53b920 @ 0053b920  kind=gamemisc  attributed-by=role:mutator  size=24 */

undefined4 FUN_0053b920(int param_1,char *param_2)

{
  if (*param_2 == -0x67) {
    param_2[0x23] = param_2[0x23] + *(char *)(param_1 + 0x10);
  }
  return 0;
}


/* set_0x10_548960 @ 00548960  kind=gamemisc  attributed-by=role:mutator  size=20 */

undefined4 FUN_00548960(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 2;
}


/* mutator_587160 @ 00587160  kind=gamemisc  attributed-by=role:mutator  size=21 */

void FUN_00587160(int *param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(param_2 + *param_1) = param_3;
  return;
}


/* mutator_60a9f0 @ 0060a9f0  kind=gamemisc  attributed-by=role:mutator  size=14 */

void FUN_0060a9f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *param_1 = *in_ECX;
  return;
}


/* mutator_662fb0 @ 00662fb0  kind=gamemisc  attributed-by=role:mutator  size=16 */

void FUN_00662fb0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x24c) = param_1;
  return;
}


/* mutator_67fa50 @ 0067fa50  kind=gamemisc  attributed-by=role:mutator  size=13 */

void FUN_0067fa50(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x58) = param_1;
  return;
}


/* _atexit @ 0068d755  kind=gamemisc  attributed-by=role:mutator  size=21 */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2012 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  int iVar1;
  
  iVar1 = __onexit(param_1);
  return (iVar1 != 0) - 1;
}


/* mutator_68f090 @ 0068f090  kind=gamemisc  attributed-by=role:mutator  size=13 */

void FUN_0068f090(void)

{
  int in_EAX;
  
  *(int *)(in_EAX + 0x58) = *(int *)(in_EAX + 0x30) * 0x20 + *(int *)(in_EAX + 0x34);
  return;
}


/* mutator_68f190 @ 0068f190  kind=gamemisc  attributed-by=role:mutator  size=22 */

void FUN_0068f190(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)(param_1 + 0x10),1);
}


/* mutator_6a4910 @ 006a4910  kind=gamemisc  attributed-by=role:mutator  size=7 */

void FUN_006a4910(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  return;
}


/* mutator_6b1730 @ 006b1730  kind=gamemisc  attributed-by=role:mutator  size=5 */

void FUN_006b1730(void)

{
  int in_EAX;
  
  *(undefined1 *)(in_EAX + 0x20) = 0;
  return;
}


