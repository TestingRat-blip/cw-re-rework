// helpers_dtor_like (world) -- cube. 4 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like.h"

/* FUN_004c6840 @ 004c6840  kind=gamemisc  attributed-by=role:dtor-like  size=219 */

void FUN_004c6840(void *param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = (uint)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e83f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != (void *)0x0) {
    if (param_1 < 0xea0ea1) {
      pvVar2 = operator_new((int)param_1 * 0x118);
      if (pvVar2 != (void *)0x0) goto LAB_004c68a4;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004c68a4:
  local_8 = 0;
  FUN_004c67b0(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (void *)*in_ECX;
  if (param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  in_ECX[2] = (void *)(uVar1 * 0x118 + (int)pvVar2);
  in_ECX[1] = (void *)(((in_ECX[1] - (int)param_1) / 0x118) * 0x118 + (int)pvVar2);
  *in_ECX = pvVar2;
  ExceptionList = local_10;
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


