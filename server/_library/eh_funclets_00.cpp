// eh_funclets_00 (_library) -- server. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "eh_funclets_00.h"

/* Catch_All@00401786 @ 00401786  kind=lib  attributed-by=eh  size=32 */

undefined * Catch_All_00401786(void)

{
  void *pvVar1;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 8);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  pvVar1 = FUN_004018f0(*(int *)(unaff_EBP + 8) + 1);
  *(void **)(unaff_EBP + 8) = pvVar1;
  return &DAT_004017a6;
}


/* Catch_All@004017c3 @ 004017c3  kind=lib  attributed-by=eh  size=45 */

void Catch_All_004017c3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  if (0xf < (uint)puVar1[5]) {
    operator_delete((void *)*puVar1);
  }
  puVar1[5] = 0xf;
  puVar1[4] = 0;
  *(undefined1 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004027ef @ 004027ef  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004027ef(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00402954 @ 00402954  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00402954(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004128ba @ 004128ba  kind=lib  attributed-by=eh  size=26 */

undefined * Catch_All_004128ba(void)

{
  int unaff_EBP;
  
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (*(int *)(**(int **)(unaff_EBP + 8) + 4) + (int)*(int **)(unaff_EBP + 8)),4,true);
  return &DAT_004128d4;
}


/* Catch_All@0041391e @ 0041391e  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0041391e(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00416dff @ 00416dff  kind=lib  attributed-by=eh  size=32 */

undefined * Catch_All_00416dff(void)

{
  void *pvVar1;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 8);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  pvVar1 = FUN_00416ec0(*(int *)(unaff_EBP + 8) + 1);
  *(void **)(unaff_EBP + 8) = pvVar1;
  return &DAT_00416e1f;
}


/* Catch_All@00416e3c @ 00416e3c  kind=lib  attributed-by=eh  size=45 */

void Catch_All_00416e3c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  if (7 < (uint)puVar1[5]) {
    operator_delete((void *)*puVar1);
  }
  puVar1[5] = 7;
  puVar1[4] = 0;
  *(undefined2 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041a657 @ 0041a657  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0041a657(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041a78f @ 0041a78f  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0041a78f(void)

{
  int unaff_EBP;
  
  FUN_0041a120(*(int **)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041aaef @ 0041aaef  kind=lib  attributed-by=eh  size=9 */

void Catch_All_0041aaef(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041bb5f @ 0041bb5f  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0041bb5f(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041d4c6 @ 0041d4c6  kind=lib  attributed-by=eh  size=35 */

void Catch_All_0041d4c6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
  for (puVar2 = *(undefined4 **)(unaff_EBP + -0x14); puVar2 != puVar1; puVar2 = puVar2 + 3) {
    FUN_00406350(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041d7bf @ 0041d7bf  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0041d7bf(void)

{
  int unaff_EBP;
  
  FUN_0042f440(*(undefined4 **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041dac0 @ 0041dac0  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0041dac0(void)

{
  int unaff_EBP;
  
  FUN_0042f440(*(undefined4 **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041dc43 @ 0041dc43  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0041dc43(void)

{
  int unaff_EBP;
  
  FUN_0042f440(*(undefined4 **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041de13 @ 0041de13  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0041de13(void)

{
  int unaff_EBP;
  
  FUN_00407650(*(undefined4 **)(unaff_EBP + -0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041e520 @ 0041e520  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0041e520(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041e61e @ 0041e61e  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0041e61e(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041e71c @ 0041e71c  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0041e71c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041e820 @ 0041e820  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0041e820(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041f75d @ 0041f75d  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0041f75d(void)

{
  int unaff_EBP;
  
  FUN_0042f440(*(undefined4 **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0041f860 @ 0041f860  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0041f860(void)

{
  int unaff_EBP;
  
  FUN_00407650(*(undefined4 **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004201e2 @ 004201e2  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004201e2(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00420299 @ 00420299  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00420299(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00420362 @ 00420362  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00420362(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042052c @ 0042052c  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0042052c(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004205df @ 004205df  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004205df(void)

{
  int unaff_EBP;
  
  FUN_004f7c20(*(int **)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00420a0f @ 00420a0f  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00420a0f(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00420b74 @ 00420b74  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00420b74(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00420c39 @ 00420c39  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00420c39(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00420d09 @ 00420d09  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00420d09(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00420dd9 @ 00420dd9  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00420dd9(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fd0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00420ea9 @ 00420ea9  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00420ea9(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00420f79 @ 00420f79  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00420f79(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00421049 @ 00421049  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00421049(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fd0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00421119 @ 00421119  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00421119(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004211e9 @ 004211e9  kind=lib  attributed-by=eh  size=40 */

void Catch_All_004211e9(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004212b9 @ 004212b9  kind=lib  attributed-by=eh  size=40 */

void Catch_All_004212b9(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00421389 @ 00421389  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00421389(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00421459 @ 00421459  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00421459(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00421529 @ 00421529  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00421529(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004215f9 @ 004215f9  kind=lib  attributed-by=eh  size=40 */

void Catch_All_004215f9(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004216c9 @ 004216c9  kind=lib  attributed-by=eh  size=40 */

void Catch_All_004216c9(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00421799 @ 00421799  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00421799(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00421867 @ 00421867  kind=lib  attributed-by=eh  size=41 */

void Catch_All_00421867(void)

{
  void *this;
  int unaff_EBP;
  int iVar1;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (iVar1 != *(int *)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00421939 @ 00421939  kind=lib  attributed-by=eh  size=44 */

void Catch_All_00421939(void)

{
  void *this;
  int unaff_EBP;
  int iVar1;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (iVar1 != *(int *)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      iVar1 = iVar1 + 0x148;
    } while (iVar1 != *(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00421eff @ 00421eff  kind=lib  attributed-by=eh  size=17 */

void Catch_All_00421eff(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00421f9f @ 00421f9f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_00421f9f(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042203f @ 0042203f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0042203f(void)

{
  int unaff_EBP;
  
  FUN_00428080(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004220df @ 004220df  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004220df(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042217f @ 0042217f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0042217f(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042221f @ 0042221f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0042221f(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004222bf @ 004222bf  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004222bf(void)

{
  int unaff_EBP;
  
  FUN_00428080(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042235f @ 0042235f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0042235f(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004223ff @ 004223ff  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004223ff(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042249f @ 0042249f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0042249f(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042253f @ 0042253f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0042253f(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004225df @ 004225df  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004225df(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042267f @ 0042267f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0042267f(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042271f @ 0042271f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0042271f(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004227bf @ 004227bf  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004227bf(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00426e8e @ 00426e8e  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00426e8e(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00429040 @ 00429040  kind=lib  attributed-by=eh  size=26 */

undefined * Catch_All_00429040(void)

{
  int unaff_EBP;
  
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(**(int **)(unaff_EBP + 8) + 4) + (int)*(int **)(unaff_EBP + 8)),4,true);
  return &DAT_0042905a;
}


/* Catch_All@00429180 @ 00429180  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00429180(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00429227 @ 00429227  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00429227(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042931d @ 0042931d  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0042931d(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00429415 @ 00429415  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00429415(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042954f @ 0042954f  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0042954f(void)

{
  int unaff_EBP;
  
  FUN_0041a090(*(int **)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042a018 @ 0042a018  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0042a018(void)

{
  int unaff_EBP;
  
  FUN_0042cfc0(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042a244 @ 0042a244  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0042a244(void)

{
  int unaff_EBP;
  
  FUN_0042d000(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042a434 @ 0042a434  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0042a434(void)

{
  int unaff_EBP;
  
  FUN_0042d040(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042a624 @ 0042a624  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0042a624(void)

{
  int unaff_EBP;
  
  FUN_0042d060(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042a814 @ 0042a814  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0042a814(void)

{
  int unaff_EBP;
  
  FUN_0042d0c0(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042a908 @ 0042a908  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0042a908(void)

{
  int unaff_EBP;
  
  FUN_0042cfc0(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042aac0 @ 0042aac0  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0042aac0(void)

{
  int unaff_EBP;
  
  FUN_0042d040(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042ac24 @ 0042ac24  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0042ac24(void)

{
  int unaff_EBP;
  
  FUN_0042d060(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042ad84 @ 0042ad84  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0042ad84(void)

{
  int unaff_EBP;
  
  FUN_0042d0c0(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042ae29 @ 0042ae29  kind=lib  attributed-by=eh  size=40 */

void Catch_All_0042ae29(void)

{
  void *this;
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_0042d4c0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042af1d @ 0042af1d  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0042af1d(void)

{
  int unaff_EBP;
  
  FUN_0042d520(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042b0b6 @ 0042b0b6  kind=lib  attributed-by=eh  size=26 */

void Catch_All_0042b0b6(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)**(undefined4 **)(unaff_EBP + -0x18);
  FUN_0041a180(*(undefined4 **)(unaff_EBP + -0x18),(undefined4 *)(unaff_EBP + 8),(int *)*piVar1,
               piVar1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042b156 @ 0042b156  kind=lib  attributed-by=eh  size=26 */

void Catch_All_0042b156(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)**(undefined4 **)(unaff_EBP + -0x18);
  FUN_0041a510(*(undefined4 **)(unaff_EBP + -0x18),(undefined4 *)(unaff_EBP + 8),(int *)*piVar1,
               piVar1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042b1ff @ 0042b1ff  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0042b1ff(void)

{
  int unaff_EBP;
  
  FUN_0042d520(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042f318 @ 0042f318  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0042f318(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00430033 @ 00430033  kind=lib  attributed-by=eh  size=17 */

void Catch_All_00430033(void)

{
  int unaff_EBP;
  
  FUN_0042f440(*(undefined4 **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00430911 @ 00430911  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00430911(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00430d18 @ 00430d18  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00430d18(void)

{
  int unaff_EBP;
  
  FUN_004311a0(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00430e4d @ 00430e4d  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00430e4d(void)

{
  int unaff_EBP;
  
  FUN_004311a0(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004c5cfd @ 004c5cfd  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004c5cfd(void)

{
  int unaff_EBP;
  
  FUN_0042f440(*(undefined4 **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004c66ee @ 004c66ee  kind=lib  attributed-by=eh  size=26 */

undefined * Catch_All_004c66ee(void)

{
  int unaff_EBP;
  
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (*(int *)(**(int **)(unaff_EBP + 8) + 4) + (int)*(int **)(unaff_EBP + 8)),4,true);
  return &DAT_004c6708;
}


/* Catch_All@004c7527 @ 004c7527  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004c7527(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004c776f @ 004c776f  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004c776f(void)

{
  int unaff_EBP;
  
  FUN_004ce6e0(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004c7994 @ 004c7994  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004c7994(void)

{
  int unaff_EBP;
  
  FUN_0042d000(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004c7a8a @ 004c7a8a  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004c7a8a(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004c7c38 @ 004c7c38  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004c7c38(void)

{
  int unaff_EBP;
  
  FUN_004ce6e0(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004c7dbd @ 004c7dbd  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004c7dbd(void)

{
  int unaff_EBP;
  
  FUN_0042d000(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004c7f4d @ 004c7f4d  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004c7f4d(void)

{
  int unaff_EBP;
  
  FUN_0042d000(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004c7fdd @ 004c7fdd  kind=lib  attributed-by=eh  size=35 */

void Catch_All_004c7fdd(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
  for (puVar2 = *(undefined4 **)(unaff_EBP + -0x14); puVar2 != puVar1; puVar2 = puVar2 + 3) {
    FUN_00406350(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004c808c @ 004c808c  kind=lib  attributed-by=eh  size=38 */

void Catch_All_004c808c(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x188) {
    FUN_004c80d0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004c833c @ 004c833c  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004c833c(void)

{
  int unaff_EBP;
  
  FUN_00407650(*(undefined4 **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004ce8c7 @ 004ce8c7  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004ce8c7(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004d9aa8 @ 004d9aa8  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004d9aa8(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004d9b31 @ 004d9b31  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004d9b31(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004d9cff @ 004d9cff  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004d9cff(void)

{
  int unaff_EBP;
  
  FUN_00402ed0(*(int **)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004d9dbf @ 004d9dbf  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004d9dbf(void)

{
  int unaff_EBP;
  
  FUN_00402ed0(*(int **)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004da44c @ 004da44c  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004da44c(void)

{
  int unaff_EBP;
  
  FUN_004daf10(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004da611 @ 004da611  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004da611(void)

{
  int unaff_EBP;
  
  FUN_004daf10(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004da75f @ 004da75f  kind=lib  attributed-by=eh  size=9 */

void Catch_All_004da75f(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004da906 @ 004da906  kind=lib  attributed-by=eh  size=9 */

void Catch_All_004da906(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004dab0f @ 004dab0f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004dab0f(void)

{
  int unaff_EBP;
  
  FUN_0042f440(*(undefined4 **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e1350 @ 004e1350  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004e1350(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e1f6c @ 004e1f6c  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004e1f6c(void)

{
  int unaff_EBP;
  
  FUN_0042f440(*(undefined4 **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e24e4 @ 004e24e4  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004e24e4(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e25bc @ 004e25bc  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004e25bc(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e269d @ 004e269d  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004e269d(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004f3803 @ 004f3803  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004f3803(void)

{
  int unaff_EBP;
  
  FUN_0042f440(*(undefined4 **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004f427f @ 004f427f  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004f427f(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004f4505 @ 004f4505  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004f4505(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004f469e @ 004f469e  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004f469e(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004f483e @ 004f483e  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004f483e(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004f71a6 @ 004f71a6  kind=lib  attributed-by=eh  size=35 */

void Catch_All_004f71a6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
  for (puVar2 = *(undefined4 **)(unaff_EBP + -0x14); puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_004f7270(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004f7dd4 @ 004f7dd4  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004f7dd4(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004f7ed1 @ 004f7ed1  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004f7ed1(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004f7fbf @ 004f7fbf  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004f7fbf(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004f80af @ 004f80af  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004f80af(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0052e02c @ 0052e02c  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0052e02c(void)

{
  int unaff_EBP;
  
  FUN_00426f60(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0052e1bf @ 0052e1bf  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0052e1bf(void)

{
  int unaff_EBP;
  
  FUN_004f7c20(*(int **)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0052e567 @ 0052e567  kind=lib  attributed-by=eh  size=9 */

void Catch_All_0052e567(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0052e617 @ 0052e617  kind=lib  attributed-by=eh  size=41 */

void Catch_All_0052e617(void)

{
  void *this;
  int unaff_EBP;
  int iVar1;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (iVar1 != *(int *)(unaff_EBP + 0xc)) {
    this = *(void **)(unaff_EBP + -0x18);
    do {
      FUN_00426fa0(this,*(int **)(*(int *)(unaff_EBP + 8) + 4));
      iVar1 = iVar1 + 0x10;
    } while (iVar1 != *(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0052e906 @ 0052e906  kind=lib  attributed-by=eh  size=26 */

void Catch_All_0052e906(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)**(undefined4 **)(unaff_EBP + -0x18);
  FUN_004fc060(*(undefined4 **)(unaff_EBP + -0x18),(undefined4 *)(unaff_EBP + 8),(int *)*piVar1,
               piVar1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0052eb79 @ 0052eb79  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0052eb79(void)

{
  int unaff_EBP;
  
  FUN_0042f440(*(undefined4 **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0052ee5c @ 0052ee5c  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0052ee5c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0054928d @ 0054928d  kind=lib  attributed-by=eh  size=26 */

undefined * Catch_All_0054928d(void)

{
  int unaff_EBP;
  
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (*(int *)(**(int **)(unaff_EBP + 8) + 4) + (int)*(int **)(unaff_EBP + 8)),4,true);
  return &DAT_005492a7;
}


/* Unwind@0054b980 @ 0054b980  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054b980(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x2a4));
  return;
}


/* Unwind@0054b98b @ 0054b98b  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054b98b(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x2c0));
  return;
}


/* Unwind@0054b996 @ 0054b996  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054b996(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x2d4));
  return;
}


/* Unwind@0054b9a1 @ 0054b9a1  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054b9a1(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x2b0));
  return;
}


/* Unwind@0054b9e0 @ 0054b9e0  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054b9e0(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(*(int *)(unaff_EBP + -0x10) + 0x1178));
  return;
}


/* Unwind@0054b9ee @ 0054b9ee  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054b9ee(void)

{
  int unaff_EBP;
  
  FUN_004f7710((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x11ac));
  return;
}


/* Unwind@0054b9fc @ 0054b9fc  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054b9fc(void)

{
  int unaff_EBP;
  
  FUN_004f7710((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x11b4));
  return;
}


/* Unwind@0054ba0a @ 0054ba0a  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054ba0a(void)

{
  int unaff_EBP;
  
  FUN_00407650((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x11dc));
  return;
}


/* Unwind@0054ba18 @ 0054ba18  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054ba18(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(*(int *)(unaff_EBP + -0x10) + 0x130c));
  return;
}


/* Unwind@0054ba26 @ 0054ba26  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054ba26(void)

{
  int unaff_EBP;
  
  FUN_004f7710((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x139c));
  return;
}


/* Unwind@0054ba34 @ 0054ba34  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054ba34(void)

{
  int unaff_EBP;
  
  FUN_004f7710((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x13a4));
  return;
}


/* Unwind@0054ba42 @ 0054ba42  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054ba42(void)

{
  int unaff_EBP;
  
  FUN_004f7710((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x13ac));
  return;
}


/* Unwind@0054ba50 @ 0054ba50  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054ba50(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x13e8));
  return;
}


/* Unwind@0054ba5e @ 0054ba5e  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054ba5e(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x13f8));
  return;
}


/* Unwind@0054ba6c @ 0054ba6c  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054ba6c(void)

{
  int unaff_EBP;
  
  FUN_004072a0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x140c));
  return;
}


/* Unwind@0054ba7a @ 0054ba7a  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054ba7a(void)

{
  int unaff_EBP;
  
  FUN_004072a0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1414));
  return;
}


/* Unwind@0054ba88 @ 0054ba88  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054ba88(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(*(int *)(unaff_EBP + -0x10) + 0x1460));
  return;
}


/* Unwind@0054ba96 @ 0054ba96  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054ba96(void)

{
  int unaff_EBP;
  
  FUN_004f7710((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1468));
  return;
}


/* Unwind@0054baa4 @ 0054baa4  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054baa4(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(*(int *)(unaff_EBP + -0x10) + 0x1470));
  return;
}


/* Unwind@0054bab2 @ 0054bab2  kind=lib  attributed-by=eh  size=14 */

void Unwind_0054bab2(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x148c));
  return;
}


/* Unwind@0054bae0 @ 0054bae0  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054bae0(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x20));
  return;
}


/* Unwind@0054bb10 @ 0054bb10  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054bb10(void)

{
  int unaff_EBP;
  
  FUN_00412980((int *)(unaff_EBP + -0x24));
  return;
}


/* Unwind@0054bb18 @ 0054bb18  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054bb18(void)

{
  int unaff_EBP;
  
  FUN_004129a0((int *)(unaff_EBP + -0x24));
  return;
}


/* Unwind@0054bb40 @ 0054bb40  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054bb40(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x18));
  return;
}


/* Unwind@0054bb70 @ 0054bb70  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bb70(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}


/* Unwind@0054bb7b @ 0054bb7b  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054bb7b(void)

{
  int unaff_EBP;
  
  FUN_00413560(*(int **)(unaff_EBP + -0x10));
  return;
}


/* Unwind@0054bbc0 @ 0054bbc0  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054bbc0(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x18));
  return;
}


/* Unwind@0054bc10 @ 0054bc10  kind=lib  attributed-by=eh  size=17 */

void Unwind_0054bc10(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@0054bc80 @ 0054bc80  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bc80(void)

{
  int unaff_EBP;
  
  FUN_0041a000((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


/* Unwind@0054bc8b @ 0054bc8b  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bc8b(void)

{
  int unaff_EBP;
  
  FUN_0041a000((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


/* Unwind@0054bc96 @ 0054bc96  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bc96(void)

{
  int unaff_EBP;
  
  FUN_0041a000((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}


/* Unwind@0054bca1 @ 0054bca1  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bca1(void)

{
  int unaff_EBP;
  
  FUN_004cd8c0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}


/* Unwind@0054bcd0 @ 0054bcd0  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bcd0(void)

{
  int unaff_EBP;
  
  FUN_0041a000((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


/* Unwind@0054bd00 @ 0054bd00  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bd00(void)

{
  int unaff_EBP;
  
  FUN_0041a000((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


/* Unwind@0054bd0b @ 0054bd0b  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bd0b(void)

{
  int unaff_EBP;
  
  FUN_0041a000((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


/* Unwind@0054bd16 @ 0054bd16  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bd16(void)

{
  int unaff_EBP;
  
  FUN_0041a000((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}


/* Unwind@0054bd21 @ 0054bd21  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bd21(void)

{
  int unaff_EBP;
  
  FUN_004cd8c0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}


/* Unwind@0054bd2c @ 0054bd2c  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bd2c(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(*(int *)(unaff_EBP + -0x10) + 0x38));
  return;
}


/* Unwind@0054bd60 @ 0054bd60  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bd60(void)

{
  int unaff_EBP;
  
  FUN_0041a000((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


/* Unwind@0054bd90 @ 0054bd90  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054bd90(void)

{
  int unaff_EBP;
  
  FUN_004cd8c0((undefined4 *)(unaff_EBP + 8));
  return;
}


/* Unwind@0054bd98 @ 0054bd98  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bd98(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}


/* Unwind@0054bda3 @ 0054bda3  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054bda3(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x40));
  return;
}


/* Unwind@0054bdab @ 0054bdab  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bdab(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2c));
  return;
}


/* Unwind@0054bdb6 @ 0054bdb6  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bdb6(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2c));
  return;
}


/* Unwind@0054bdc1 @ 0054bdc1  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bdc1(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2c));
  return;
}


/* Unwind@0054bdcc @ 0054bdcc  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054bdcc(void)

{
  int unaff_EBP;
  
  FUN_004cd8c0((undefined4 *)(unaff_EBP + -0x28));
  return;
}


/* Unwind@0054bdd4 @ 0054bdd4  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bdd4(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2c));
  return;
}


/* Unwind@0054bddf @ 0054bddf  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bddf(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2c));
  return;
}


/* Unwind@0054bdea @ 0054bdea  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054bdea(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2c));
  return;
}


/* Unwind@0054be40 @ 0054be40  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054be40(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x238));
  return;
}


/* Unwind@0054be80 @ 0054be80  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054be80(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}


/* Unwind@0054beb0 @ 0054beb0  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054beb0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}


/* Unwind@0054bee0 @ 0054bee0  kind=lib  attributed-by=eh  size=17 */

void Unwind_0054bee0(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@0054c010 @ 0054c010  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054c010(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x18c));
  return;
}


/* Unwind@0054c01b @ 0054c01b  kind=lib  attributed-by=eh  size=11 */

void Unwind_0054c01b(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x180));
  return;
}


/* Unwind@0054c090 @ 0054c090  kind=lib  attributed-by=eh  size=17 */

void Unwind_0054c090(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@0054c0c0 @ 0054c0c0  kind=lib  attributed-by=eh  size=17 */

void Unwind_0054c0c0(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@0054c0f0 @ 0054c0f0  kind=lib  attributed-by=eh  size=17 */

void Unwind_0054c0f0(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@0054c3c0 @ 0054c3c0  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054c3c0(void)

{
  int unaff_EBP;
  
  FUN_00423700(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


/* Unwind@0054c3f0 @ 0054c3f0  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054c3f0(void)

{
  int unaff_EBP;
  
  FUN_00423700(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


/* Unwind@0054c420 @ 0054c420  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054c420(void)

{
  int unaff_EBP;
  
  FUN_00423700(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


/* Unwind@0054c450 @ 0054c450  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054c450(void)

{
  int unaff_EBP;
  
  FUN_00423700(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


/* Unwind@0054c480 @ 0054c480  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054c480(void)

{
  int unaff_EBP;
  
  FUN_00423700(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


/* Unwind@0054c4b0 @ 0054c4b0  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054c4b0(void)

{
  int unaff_EBP;
  
  FUN_00423700(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


/* Unwind@0054c4e0 @ 0054c4e0  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054c4e0(void)

{
  int unaff_EBP;
  
  FUN_00423700(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


/* Unwind@0054c510 @ 0054c510  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054c510(void)

{
  int unaff_EBP;
  
  FUN_00423700(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


/* Unwind@0054c540 @ 0054c540  kind=lib  attributed-by=eh  size=8 */

void Unwind_0054c540(void)

{
  int unaff_EBP;
  
  FUN_00423700(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


