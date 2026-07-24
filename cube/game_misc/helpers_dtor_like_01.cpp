// helpers_dtor_like_01 (game_misc) -- cube. 8 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like_01.h"

/* FUN_006fb1b0 @ 006fb1b0  kind=gamemisc  attributed-by=role:dtor-like  size=74 */

void FUN_006fb1b0(void)

{
  void *pvVar1;
  
  FUN_0046f990();
  pvVar1 = DAT_0076b06c;
  FUN_00458de0();
  cube::Controller::vfunction6();
  FUN_00458de0();
  cube::Controller::vfunction6();
  FUN_00458de0();
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar1);
}


/* FUN_006fb270 @ 006fb270  kind=gamemisc  attributed-by=role:dtor-like  size=87 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fb270(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_0076b104;
  if (7 < DAT_0076b118) {
    FUN_00458de0();
    cube::Controller::vfunction6();
    FUN_00458de0();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  DAT_0076b118 = 7;
  _DAT_0076b114 = 0;
  DAT_0076b104 = (void *)((uint)DAT_0076b104 & 0xffff0000);
  return;
}


/* FUN_006fb2d0 @ 006fb2d0  kind=gamemisc  attributed-by=role:dtor-like  size=87 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fb2d0(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_0076b11c;
  if (7 < DAT_0076b130) {
    FUN_00458de0();
    cube::Controller::vfunction6();
    FUN_00458de0();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  DAT_0076b130 = 7;
  _DAT_0076b12c = 0;
  DAT_0076b11c = (void *)((uint)DAT_0076b11c & 0xffff0000);
  return;
}


/* FUN_006fb330 @ 006fb330  kind=gamemisc  attributed-by=role:dtor-like  size=79 */

void FUN_006fb330(void)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 local_9;
  undefined1 local_5;
  
  uVar2 = DAT_0076b0ac;
  pvVar1 = DAT_0076b0a8;
  if (DAT_0076b0a8 != (void *)0x0) {
    FUN_0046dcb0(&local_5);
    FUN_00639cf0(pvVar1,uVar2,&local_5,local_9);
    FUN_00458de0();
                    /* WARNING: Subroutine does not return */
    operator_delete(DAT_0076b0a8);
  }
  return;
}


/* FUN_006fb3b0 @ 006fb3b0  kind=gamemisc  attributed-by=role:dtor-like  size=79 */

void FUN_006fb3b0(void)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 local_9;
  undefined1 local_5;
  
  uVar2 = DAT_0076b0b8;
  pvVar1 = DAT_0076b0b4;
  if (DAT_0076b0b4 != (void *)0x0) {
    FUN_0046dcb0(&local_5);
    FUN_00639cf0(pvVar1,uVar2,&local_5,local_9);
    FUN_00458de0();
                    /* WARNING: Subroutine does not return */
    operator_delete(DAT_0076b0b4);
  }
  return;
}


/* FUN_006fb430 @ 006fb430  kind=gamemisc  attributed-by=role:dtor-like  size=79 */

void FUN_006fb430(void)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 local_9;
  undefined1 local_5;
  
  uVar2 = DAT_0076b09c;
  pvVar1 = DAT_0076b098;
  if (DAT_0076b098 != (void *)0x0) {
    FUN_0046dcb0(&local_5);
    FUN_00639cf0(pvVar1,uVar2,&local_5,local_9);
    FUN_00458de0();
                    /* WARNING: Subroutine does not return */
    operator_delete(DAT_0076b098);
  }
  return;
}


/* FUN_006fb5f0 @ 006fb5f0  kind=gamemisc  attributed-by=role:dtor-like  size=74 */

void FUN_006fb5f0(void)

{
  void *pvVar1;
  
  FUN_0046f990();
  pvVar1 = DAT_0076b7fc;
  FUN_00458de0();
  cube::Controller::vfunction6();
  FUN_00458de0();
  cube::Controller::vfunction6();
  FUN_00458de0();
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar1);
}


/* FUN_006fb9f0 @ 006fb9f0  kind=gamemisc  attributed-by=role:dtor-like  size=172 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fb9f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)*DAT_0076dea0;
  *DAT_0076dea0 = DAT_0076dea0;
  DAT_0076dea0[1] = DAT_0076dea0;
  puVar2 = DAT_0076dea0;
  _DAT_0076dea4 = 0;
  if (puVar1 != DAT_0076dea0) {
    FUN_00458de0();
    cube::Controller::vfunction6();
    FUN_00458de0();
    cube::Controller::vfunction6();
    FUN_00458de0();
    cube::Controller::vfunction6();
    FUN_00458de0();
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar1);
  }
  FUN_00458de0();
  cube::Controller::vfunction6();
  FUN_00458de0();
  cube::Controller::vfunction6();
  FUN_00458de0();
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar2);
}


