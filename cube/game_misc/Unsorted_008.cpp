// Unsorted_008 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_008.h"

/* FUN_00594760 @ 00594760  kind=gamemisc  attributed-by=none  size=47 */

void FUN_00594760(void *param_1)

{
  if (7 < *(uint *)((int)param_1 + 0x2c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x18));
  }
  *(undefined4 *)((int)param_1 + 0x2c) = 7;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  *(undefined2 *)((int)param_1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_005947a0 @ 005947a0  kind=gamemisc  attributed-by=none  size=47 */

void FUN_005947a0(void *param_1)

{
  if (7 < *(uint *)((int)param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 7;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined2 *)((int)param_1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_005947e0 @ 005947e0  kind=gamemisc  attributed-by=none  size=78 */

void FUN_005947e0(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_005947e0(*(undefined4 *)((int)param_1 + 8));
  if (7 < *(uint *)((int)param_1 + 0x2c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x18));
  }
  *(undefined4 *)((int)param_1 + 0x2c) = 7;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  *(undefined2 *)((int)param_1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_00594c80 @ 00594c80  kind=gamemisc  attributed-by=none  size=876 */

void FUN_00594c80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_f8 [4];
  int local_f4;
  undefined4 local_f0;
  void *local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  void *local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  void *local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1b87;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_f0 = param_1;
  local_14 = uVar3;
  uVar4 = FUN_0059aa60(local_a4,param_2);
  local_8 = 0;
  piVar5 = (int *)FUN_005a02d0(uVar4);
  local_8 = 0xffffffff;
  if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a4[0]);
  }
  local_90 = 7;
  local_94 = 0;
  local_a4[0] = (void *)((uint)local_a4[0] & 0xffff0000);
  piVar7 = *(int **)piVar5[2];
  if (piVar7 != (int *)piVar5[2]) {
    do {
      local_8 = 0xffffffff;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daec,1);
      local_8 = 1;
      uVar4 = FUN_004517d0(local_8c,local_44,local_f0,uVar3);
      local_8._0_1_ = 2;
      uVar4 = FUN_00451800(local_74,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 3;
      uVar4 = FUN_004517d0(local_5c,uVar4,piVar7 + 2);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004da1a0(local_f8,0,uVar4,DAT_0076b7ca);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
      local_78 = 7;
      local_7c = 0;
      local_8c[0] = (void *)((uint)local_8c[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)piVar5[2]);
  }
  piVar7 = *(int **)*piVar5;
  if (piVar7 != (int *)*piVar5) {
    local_f4 = param_5 + 8;
    do {
      local_8 = 0xffffffff;
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daf0,1);
      local_8 = 5;
      uVar4 = FUN_004517d0(local_ec,local_2c,local_f0);
      local_8._0_1_ = 6;
      uVar4 = FUN_00451800(local_d4,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 7;
      uVar4 = FUN_004517d0(local_bc,uVar4,piVar7 + 4);
      local_8 = CONCAT31(local_8._1_3_,8);
      piVar6 = (int *)FUN_004689a0(uVar4);
      if (piVar6 != piVar7 + 10) {
        FUN_0040f680(piVar7 + 10,0,0xffffffff);
      }
      if (7 < local_a8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_bc[0]);
      }
      local_a8 = 7;
      local_ac = 0;
      local_bc[0] = (void *)((uint)local_bc[0] & 0xffff0000);
      if (7 < local_c0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_d4[0]);
      }
      local_c0 = 7;
      local_c4 = 0;
      local_d4[0] = (void *)((uint)local_d4[0] & 0xffff0000);
      if (7 < local_d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_ec[0]);
      }
      local_d8 = 7;
      local_dc = 0;
      local_ec[0] = (void *)((uint)local_ec[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar6 = (int *)piVar7[2];
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0xd);
          piVar7 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0xd);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar2 = (int *)piVar7[1];
          piVar6 = piVar7;
          while ((piVar7 = piVar2, cVar1 == '\0' && (piVar6 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar2 = (int *)piVar7[1];
            piVar6 = piVar7;
          }
        }
      }
    } while (piVar7 != (int *)*piVar5);
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00595010 @ 00595010  kind=gamemisc  attributed-by=none  size=882 */

void FUN_00595010(undefined4 param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_f8 [4];
  int local_f4;
  undefined4 local_f0;
  void *local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  void *local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  void *local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1b87;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_f0 = param_1;
  local_14 = uVar3;
  uVar4 = FUN_0059fbf0(local_a4,*param_2,param_2[1]);
  local_8 = 0;
  piVar5 = (int *)FUN_005a02d0(uVar4);
  local_8 = 0xffffffff;
  if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a4[0]);
  }
  local_90 = 7;
  local_94 = 0;
  local_a4[0] = (void *)((uint)local_a4[0] & 0xffff0000);
  piVar7 = *(int **)piVar5[2];
  if (piVar7 != (int *)piVar5[2]) {
    do {
      local_8 = 0xffffffff;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daec,1);
      local_8 = 1;
      uVar4 = FUN_004517d0(local_8c,local_44,local_f0,uVar3);
      local_8._0_1_ = 2;
      uVar4 = FUN_00451800(local_74,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 3;
      uVar4 = FUN_004517d0(local_5c,uVar4,piVar7 + 2);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004da1a0(local_f8,0,uVar4,DAT_0076b7ca);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
      local_78 = 7;
      local_7c = 0;
      local_8c[0] = (void *)((uint)local_8c[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)piVar5[2]);
  }
  piVar7 = *(int **)*piVar5;
  if (piVar7 != (int *)*piVar5) {
    local_f4 = param_3 + 8;
    do {
      local_8 = 0xffffffff;
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daf0,1);
      local_8 = 5;
      uVar4 = FUN_004517d0(local_ec,local_2c,local_f0);
      local_8._0_1_ = 6;
      uVar4 = FUN_00451800(local_d4,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 7;
      uVar4 = FUN_004517d0(local_bc,uVar4,piVar7 + 4);
      local_8 = CONCAT31(local_8._1_3_,8);
      piVar6 = (int *)FUN_004689a0(uVar4);
      if (piVar6 != piVar7 + 10) {
        FUN_0040f680(piVar7 + 10,0,0xffffffff);
      }
      if (7 < local_a8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_bc[0]);
      }
      local_a8 = 7;
      local_ac = 0;
      local_bc[0] = (void *)((uint)local_bc[0] & 0xffff0000);
      if (7 < local_c0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_d4[0]);
      }
      local_c0 = 7;
      local_c4 = 0;
      local_d4[0] = (void *)((uint)local_d4[0] & 0xffff0000);
      if (7 < local_d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_ec[0]);
      }
      local_d8 = 7;
      local_dc = 0;
      local_ec[0] = (void *)((uint)local_ec[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar6 = (int *)piVar7[2];
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0xd);
          piVar7 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0xd);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar2 = (int *)piVar7[1];
          piVar6 = piVar7;
          while ((piVar7 = piVar2, cVar1 == '\0' && (piVar6 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar2 = (int *)piVar7[1];
            piVar6 = piVar7;
          }
        }
      }
    } while (piVar7 != (int *)*piVar5);
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005953a0 @ 005953a0  kind=gamemisc  attributed-by=none  size=1012 */

void FUN_005953a0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  void **ppvVar7;
  int *piVar8;
  undefined1 local_c0 [4];
  int local_bc;
  int local_b4;
  undefined4 local_b0;
  int *local_ac;
  undefined4 local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1c0e;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_a8 = param_1;
  local_b4 = param_2;
  local_14 = uVar3;
  uVar4 = FUN_005a5240(local_a4,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
  local_8 = 0;
  piVar5 = (int *)FUN_005a02d0(uVar4);
  local_8 = 0xffffffff;
  local_ac = piVar5;
  if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a4[0]);
  }
  local_90 = 7;
  local_94 = 0;
  local_a4[0] = (void *)((uint)local_a4[0] & 0xffff0000);
  piVar8 = *(int **)piVar5[2];
  if (piVar8 != (int *)piVar5[2]) {
    do {
      local_8 = 0xffffffff;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daec,1);
      local_8 = 1;
      uVar4 = FUN_004517d0(local_2c,local_44,local_a8,uVar3);
      local_8._0_1_ = 2;
      uVar4 = FUN_00451800(local_74,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 3;
      uVar4 = FUN_004517d0(local_5c,uVar4,piVar8 + 2);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004da1a0(local_c0,0,uVar4,DAT_0076b7ca);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)piVar5[2]);
  }
  piVar8 = *(int **)*piVar5;
  if (piVar8 != (int *)*piVar5) {
    local_bc = param_3 + 8;
    local_b0 = 0x40;
    do {
      local_8 = 0xffffffff;
      local_8c[0] = (void *)((uint)local_8c[0] & 0xffff0000);
      local_78 = 7;
      local_7c = 0;
      FUN_0040f680(piVar8 + 10,0,0xffffffff);
      local_8._0_1_ = 5;
      local_8._1_3_ = 0;
      iVar6 = FUN_004d9950(&local_b0,0,1);
      if (iVar6 != -1) {
        uVar4 = FUN_005a0ed0(local_2c,*(undefined4 *)(local_b4 + 0x20),0xffffffff);
        local_8._0_1_ = 6;
        FUN_00486d00(iVar6,1,uVar4,0,0xffffffff);
        local_8._0_1_ = 5;
        if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c[0]);
        }
      }
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daf0,1);
      local_8._0_1_ = 7;
      uVar4 = FUN_004517d0(local_5c,local_44,local_a8);
      local_8._0_1_ = 8;
      uVar4 = FUN_00451800(local_74,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 9;
      uVar4 = FUN_004517d0(local_2c,uVar4,piVar8 + 4);
      local_8 = CONCAT31(local_8._1_3_,10);
      ppvVar7 = (void **)FUN_004689a0(uVar4);
      if (ppvVar7 != local_8c) {
        FUN_0040f680(local_8c,0,0xffffffff);
      }
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      local_8 = 0xffffffff;
      if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar5 = (int *)piVar8[2];
        if (*(char *)((int)piVar5 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0xd);
          piVar8 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0xd);
            piVar8 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar8[1] + 0xd);
          piVar2 = (int *)piVar8[1];
          piVar5 = piVar8;
          while ((piVar8 = piVar2, cVar1 == '\0' && (piVar5 == (int *)piVar8[2]))) {
            cVar1 = *(char *)(piVar8[1] + 0xd);
            piVar2 = (int *)piVar8[1];
            piVar5 = piVar8;
          }
        }
      }
    } while (piVar8 != (int *)*local_ac);
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00595850 @ 00595850  kind=gamemisc  attributed-by=none  size=145 */

void FUN_00595850(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  float local_1c;
  int local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  float fStack_8;
  
  piVar3 = (int *)FUN_00468910(&param_2);
  uVar1 = local_20;
  uVar5 = param_2;
  if (0 < *piVar3) {
    return;
  }
  local_20 = local_20 & 0xffffff00;
  uVar2 = local_20;
  local_1c = 0.0;
  local_18 = 0;
  local_10 = 0;
  local_38 = (local_38 >> 8 & 0xffffff) << 8;
  local_30 = (ulonglong)local_30._4_4_ << 0x20;
  local_28 = 0;
  local_20._1_3_ = SUB43(uVar1,1);
  switch(param_2) {
  case 0x61:
    local_20 = CONCAT31(local_20._1_3_,3);
    fVar6 = (float10)FUN_0043ed60(0x61,0xffffffff);
    local_18 = (int)((float)fVar6 * 12000.0 + 8000.0);
    break;
  default:
    goto LAB_00595a19;
  case 100:
    local_20 = CONCAT31(local_20._1_3_,0xc);
    local_18 = 10000;
    fVar6 = (float10)FUN_0043ed60(100,0xffffffff);
    local_1c = (float)fVar6 + 1.0;
    break;
  case 0x65:
    local_20 = CONCAT31(local_20._1_3_,1);
    local_18 = 10000;
    fVar6 = (float10)FUN_0043ed60(0x65,0xffffffff);
    local_1c = 0.75 - (float)fVar6 * 0.3;
    FUN_00446af0(&local_20);
    if (0 < *(int *)(param_1 + 300)) {
      *(undefined4 *)(param_1 + 300) = 0;
    }
    goto LAB_005959da;
  case 0x66:
    local_20 = CONCAT31(local_20._1_3_,2);
    local_18 = 10000;
    break;
  case 0x67:
    local_20 = CONCAT31(local_20._1_3_,6);
    local_18 = 30000;
    fVar6 = (float10)FUN_0043ed60(0x67,0xffffffff);
    fStack_8 = (float)fVar6 + 1.0;
    fVar6 = (float10)FUN_00446e80();
    local_1c = (float)fVar6 * 2.0 * fStack_8;
  }
  FUN_00446af0(&local_20);
LAB_005959da:
  local_38 = CONCAT44(local_1c,local_20);
  uStack_44 = *(undefined4 *)(param_1 + 0xc);
  uStack_48 = *(undefined4 *)(param_1 + 8);
  local_30 = CONCAT44(uStack_14,local_18);
  local_28 = local_10;
  uStack_40 = uStack_48;
  uStack_3c = uStack_44;
  FUN_004460a0(&uStack_48);
  uVar2 = local_20;
LAB_00595a19:
  local_20 = uVar2;
  puVar4 = (undefined4 *)FUN_00468910(&param_2);
  uVar5 = FUN_0043e6a0(uVar5,0xffffffff);
  *puVar4 = uVar5;
  return;
}


/* FUN_00596ca0 @ 00596ca0  kind=gamemisc  attributed-by=none  size=141 */

undefined1 FUN_00596ca0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(param_1 + 0x60);
  if ((((cVar1 == '\x05') && (*(char *)(param_2 + 0x60) == '\0')) || (cVar1 == '\x06')) ||
     (*(char *)(param_2 + 0x60) == '\x06')) {
    return 0;
  }
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x60) != '\x01') {
      return 1;
    }
    cVar1 = FUN_00444680();
    cVar2 = FUN_00444680();
    if (cVar2 != cVar1) {
      return 1;
    }
  }
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(char *)(param_1 + 0x60) != '\x01') {
      return 1;
    }
    cVar1 = FUN_00444680();
    cVar2 = FUN_00444680();
    if (cVar1 != cVar2) {
      return 1;
    }
  }
  if (((*(byte *)(param_1 + 0x124) & 0x20) == 0) && ((*(byte *)(param_2 + 0x124) & 0x20) == 0)) {
    return 0;
  }
  return 1;
}


/* FUN_00598840 @ 00598840  kind=gamemisc  attributed-by=none  size=82 */

undefined4 FUN_00598840(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x800154);
  cVar1 = *(char *)((int)puVar2[1] + 0xd);
  puVar4 = puVar2;
  puVar6 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((int)puVar6[4] < (int)param_1) {
      puVar5 = (undefined4 *)puVar6[2];
      puVar6 = puVar4;
    }
    else {
      puVar5 = (undefined4 *)*puVar6;
    }
    puVar4 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0xd);
  }
  if ((puVar4 == puVar2) || (bVar3 = (int)param_1 < (int)puVar4[4], param_1 = puVar4, bVar3)) {
    param_1 = puVar2;
  }
  if (param_1 != puVar2) {
    return param_1[5];
  }
  return 0;
}


/* FUN_0059a0e0 @ 0059a0e0  kind=gamemisc  attributed-by=none  size=1805 */

/* WARNING: Removing unreachable block (ram,0x0059a64d) */

void FUN_0059a0e0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int local_1c;
  int local_18;
  ushort local_c;
  undefined2 local_8;
  
  iVar17 = param_1 - param_5;
  iVar13 = param_3 + param_5;
  if (iVar17 < iVar13) {
    iVar15 = iVar17;
    do {
      iVar5 = param_2 - param_5;
      if (param_2 - param_5 < param_4 + param_5) {
        do {
          iVar3 = FUN_004347a0(iVar15,iVar5,param_6);
          if (iVar3 != 0) {
            iVar3 = *(int *)(iVar3 + 0x1c);
            bVar2 = true;
            while (iVar3 = iVar3 + -1, -1 < iVar3) {
              puVar4 = (ushort *)FUN_0059aaf0(iVar3);
              if (((*(byte *)((int)puVar4 + 3) & 0x1f) == 0) ||
                 ((*(byte *)((int)puVar4 + 3) & 0x1f) == 2)) {
                if (bVar2) {
                  local_8 = CONCAT11(0xff,(byte)*puVar4);
                  bVar14 = 0xff;
                }
                else {
                  local_c = (ushort)(byte)*puVar4;
                  bVar14 = 0;
                  local_8 = local_c;
                }
                *puVar4 = local_8;
                *(byte *)(puVar4 + 1) = bVar14;
              }
              else {
                bVar2 = false;
              }
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_4 + param_5);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar13);
  }
  local_1c = 0;
  do {
    if (iVar17 < iVar13) {
      iVar15 = iVar17;
      do {
        iVar5 = param_2 - param_5;
        if (param_2 - param_5 < param_4 + param_5) {
          do {
            iVar3 = FUN_004347a0(iVar15,iVar5,param_6);
            if ((iVar3 != 0) && (local_18 = 0, 0 < *(int *)(iVar3 + 0x1c))) {
              do {
                iVar6 = FUN_0059aaf0(local_18);
                if ((((*(byte *)(iVar6 + 3) & 0x1f) == 0) || ((*(byte *)(iVar6 + 3) & 0x1f) == 2))
                   && (*(char *)(iVar6 + 2) != -1)) {
                  iVar18 = *(int *)(iVar3 + 0x10) + local_18;
                  uVar16 = 0;
                  iVar7 = FUN_004347a0(iVar15 + -1,iVar5,param_6);
                  if (iVar7 == 0) {
                    puVar8 = &DAT_0076b7d4;
                  }
                  else {
                    iVar11 = *(int *)(iVar7 + 0x10);
                    if (iVar18 < iVar11) {
                      puVar8 = &DAT_0076b7d4;
                    }
                    else if (iVar18 < *(int *)(iVar7 + 0x1c) + iVar11) {
                      puVar8 = (undefined *)FUN_0042f730(iVar18 - iVar11);
                      if ((((puVar8[3] & 0x1f) == 0) && (iVar18 < 1)) && ((puVar8[3] & 0x40) == 0))
                      {
                        puVar8 = &DAT_0076b7cc;
                      }
                    }
                    else {
                      puVar8 = &DAT_0076b7cc;
                      if (0 < iVar18) {
                        puVar8 = &DAT_0076b7d0;
                      }
                    }
                  }
                  bVar14 = puVar8[3] & 0x1f;
                  if (bVar14 == 0xd) {
                    uVar9 = 0xff;
LAB_0059a2f6:
                    uVar16 = uVar9;
                    if (uVar9 < 0xff) goto LAB_0059a303;
                  }
                  else {
                    if (((puVar8[3] & 0x1f) == 0) || (bVar14 == 2)) {
                      if ((byte)puVar8[2] < 5) {
                        uVar9 = 5;
                      }
                      else {
                        uVar9 = (uint)(byte)puVar8[2];
                        if (uVar9 == 0) goto LAB_0059a303;
                      }
                      goto LAB_0059a2f6;
                    }
LAB_0059a303:
                    iVar7 = FUN_004347a0(iVar15 + 1,iVar5,param_6);
                    if (iVar7 == 0) {
                      puVar8 = &DAT_0076b7d4;
                    }
                    else {
                      iVar11 = *(int *)(iVar7 + 0x10);
                      if (iVar18 < iVar11) {
                        puVar8 = &DAT_0076b7d4;
                      }
                      else if (iVar18 < *(int *)(iVar7 + 0x1c) + iVar11) {
                        puVar8 = (undefined *)FUN_0042f730(iVar18 - iVar11);
                        if ((((puVar8[3] & 0x1f) == 0) && (iVar18 < 1)) && ((puVar8[3] & 0x40) == 0)
                           ) {
                          puVar8 = &DAT_0076b7cc;
                        }
                      }
                      else {
                        puVar8 = &DAT_0076b7cc;
                        if (0 < iVar18) {
                          puVar8 = &DAT_0076b7d0;
                        }
                      }
                    }
                    bVar14 = puVar8[3] & 0x1f;
                    if (bVar14 == 0xd) {
                      uVar10 = 0xff;
                    }
                    else if (((puVar8[3] & 0x1f) == 0) || (bVar14 == 2)) {
                      if ((byte)puVar8[2] < 5) {
                        uVar10 = 5;
                      }
                      else {
                        uVar10 = (uint)(byte)puVar8[2];
                      }
                    }
                    else {
                      uVar10 = 0;
                    }
                    uVar9 = uVar16;
                    if (uVar16 < uVar10) {
                      uVar9 = uVar10;
                    }
                    if (uVar9 < 0xff) {
                      iVar7 = FUN_004347a0(iVar15,iVar5 + -1,param_6);
                      if (iVar7 == 0) {
                        puVar8 = &DAT_0076b7d4;
                      }
                      else {
                        iVar11 = *(int *)(iVar7 + 0x10);
                        if (iVar18 < iVar11) {
                          puVar8 = &DAT_0076b7d4;
                        }
                        else if (iVar18 < *(int *)(iVar7 + 0x1c) + iVar11) {
                          puVar8 = (undefined *)FUN_0042f730(iVar18 - iVar11);
                          if ((((puVar8[3] & 0x1f) == 0) && (iVar18 < 1)) &&
                             ((puVar8[3] & 0x40) == 0)) {
                            puVar8 = &DAT_0076b7cc;
                          }
                        }
                        else {
                          puVar8 = &DAT_0076b7cc;
                          if (0 < iVar18) {
                            puVar8 = &DAT_0076b7d0;
                          }
                        }
                      }
                      bVar14 = puVar8[3] & 0x1f;
                      if (bVar14 == 0xd) {
                        uVar16 = 0xff;
                      }
                      else if (((puVar8[3] & 0x1f) == 0) || (bVar14 == 2)) {
                        if ((byte)puVar8[2] < 5) {
                          uVar16 = 5;
                        }
                        else {
                          uVar16 = (uint)(byte)puVar8[2];
                        }
                      }
                      else {
                        uVar16 = 0;
                      }
                      if (uVar9 < uVar16) {
                        uVar9 = uVar16;
                      }
                      if (uVar9 < 0xff) {
                        iVar7 = FUN_004347a0(iVar15,iVar5 + 1,param_6);
                        if (iVar7 == 0) {
                          puVar8 = &DAT_0076b7d4;
                        }
                        else {
                          iVar11 = *(int *)(iVar7 + 0x10);
                          if (iVar18 < iVar11) {
                            puVar8 = &DAT_0076b7d4;
                          }
                          else if (iVar18 < *(int *)(iVar7 + 0x1c) + iVar11) {
                            puVar8 = (undefined *)FUN_0042f730(iVar18 - iVar11);
                            if ((((puVar8[3] & 0x1f) == 0) && (iVar18 < 1)) &&
                               ((puVar8[3] & 0x40) == 0)) {
                              puVar8 = &DAT_0076b7cc;
                            }
                          }
                          else {
                            puVar8 = &DAT_0076b7cc;
                            if (0 < iVar18) {
                              puVar8 = &DAT_0076b7d0;
                            }
                          }
                        }
                        bVar14 = puVar8[3] & 0x1f;
                        if (bVar14 == 0xd) {
                          uVar16 = 0xff;
                        }
                        else if (((puVar8[3] & 0x1f) == 0) || (bVar14 == 2)) {
                          if ((byte)puVar8[2] < 5) {
                            uVar16 = 5;
                          }
                          else {
                            uVar16 = (uint)(byte)puVar8[2];
                          }
                        }
                        else {
                          uVar16 = 0;
                        }
                        if (uVar9 < uVar16) {
                          uVar9 = uVar16;
                        }
                        if (uVar9 < 0xff) {
                          iVar7 = iVar18 + -1;
                          iVar11 = FUN_004347a0(iVar15,iVar5,param_6);
                          if (iVar11 == 0) {
                            puVar8 = &DAT_0076b7d4;
                          }
                          else {
                            iVar1 = *(int *)(iVar11 + 0x10);
                            if (iVar7 < iVar1) {
                              puVar8 = &DAT_0076b7d4;
                            }
                            else if (iVar7 < *(int *)(iVar11 + 0x1c) + iVar1) {
                              puVar8 = (undefined *)FUN_0042f730(iVar7 - iVar1);
                              if ((((puVar8[3] & 0x1f) == 0) && (iVar7 < 1)) &&
                                 ((puVar8[3] & 0x40) == 0)) {
                                puVar8 = &DAT_0076b7cc;
                              }
                            }
                            else {
                              puVar8 = &DAT_0076b7cc;
                              if (0 < iVar7) {
                                puVar8 = &DAT_0076b7d0;
                              }
                            }
                          }
                          bVar14 = puVar8[3] & 0x1f;
                          if (bVar14 == 0xd) {
                            uVar16 = 0xff;
                          }
                          else if (((puVar8[3] & 0x1f) == 0) || (bVar14 == 2)) {
                            if ((byte)puVar8[2] < 5) {
                              uVar16 = 5;
                            }
                            else {
                              uVar16 = (uint)(byte)puVar8[2];
                            }
                          }
                          else {
                            uVar16 = 0;
                          }
                          if (uVar9 < uVar16) {
                            uVar9 = uVar16;
                          }
                          if (uVar9 < 0xff) {
                            iVar18 = iVar18 + 1;
                            iVar7 = FUN_004347a0(iVar15,iVar5,param_6);
                            if (iVar7 == 0) {
                              puVar8 = &DAT_0076b7d4;
                            }
                            else {
                              iVar11 = *(int *)(iVar7 + 0x10);
                              if (iVar18 < iVar11) {
                                puVar8 = &DAT_0076b7d4;
                              }
                              else if (iVar18 < *(int *)(iVar7 + 0x1c) + iVar11) {
                                puVar8 = (undefined *)FUN_0042f730(iVar18 - iVar11);
                                if ((((puVar8[3] & 0x1f) == 0) && (iVar18 < 1)) &&
                                   ((puVar8[3] & 0x40) == 0)) {
                                  puVar8 = &DAT_0076b7cc;
                                }
                              }
                              else {
                                puVar8 = &DAT_0076b7cc;
                                if (0 < iVar18) {
                                  puVar8 = &DAT_0076b7d0;
                                }
                              }
                            }
                            bVar14 = puVar8[3] & 0x1f;
                            if (bVar14 == 0xd) {
                              if (uVar9 < 0xff) {
                                uVar9 = 0xff;
                              }
                            }
                            else if (((puVar8[3] & 0x1f) == 0) || (bVar14 == 2)) {
                              bVar14 = puVar8[2];
                              if (bVar14 < 5) {
                                if (uVar9 < 5) {
                                  uVar9 = 5;
                                }
                              }
                              else if (uVar9 < bVar14) {
                                uVar9 = (uint)bVar14;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  *(char *)(iVar6 + 1) = (char)((uVar9 * 0x55) / 100);
                }
                local_18 = local_18 + 1;
              } while (local_18 < *(int *)(iVar3 + 0x1c));
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_4 + param_5);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar13);
    }
    if (iVar17 < iVar13) {
      iVar15 = iVar17;
      do {
        iVar5 = param_2 - param_5;
        if (param_2 - param_5 < param_4 + param_5) {
          do {
            iVar3 = FUN_004347a0(iVar15,iVar5,param_6);
            if ((iVar3 != 0) && (iVar6 = 0, 0 < *(int *)(iVar3 + 0x1c))) {
              do {
                iVar18 = FUN_0059aaf0(iVar6);
                if (((*(byte *)(iVar18 + 3) & 0x1f) == 0) || ((*(byte *)(iVar18 + 3) & 0x1f) == 2))
                {
                  *(undefined1 *)(iVar18 + 2) = *(undefined1 *)(iVar18 + 1);
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(iVar3 + 0x1c));
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_4 + param_5);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar13);
    }
    local_1c = local_1c + 1;
    if (0xf < local_1c) {
      for (; iVar13 = param_2, param_1 < param_3; param_1 = param_1 + 1) {
        for (; iVar13 < param_4; iVar13 = iVar13 + 1) {
          iVar17 = FUN_004347a0(param_1,iVar13,param_6);
          if ((iVar17 != 0) && (iVar15 = 0, 0 < *(int *)(iVar17 + 0x1c))) {
            do {
              puVar12 = (undefined1 *)FUN_0059aaf0(iVar15);
              if (((puVar12[3] & 0x1f) == 0) || ((puVar12[3] & 0x1f) == 2)) {
                *puVar12 = puVar12[2];
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < *(int *)(iVar17 + 0x1c));
          }
        }
      }
      return;
    }
  } while( true );
}


/* FUN_0059a9b0 @ 0059a9b0  kind=gamemisc  attributed-by=none  size=166 */

undefined4 FUN_0059a9b0(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0068d946();
  uVar1 = __alldiv(uVar4,0x10000,0);
  iVar2 = __alldiv(param_1,param_2,0x10000,0);
  iVar2 = FUN_00487da0((int)(iVar2 + (iVar2 >> 0x1f & 0x7ffU)) >> 0xb,uVar1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
    fVar3 = (float10)FUN_005f8e10(&param_1,&param_3);
    if ((float)fVar3 <= 1.0) {
      return *(undefined4 *)(iVar2 + 0x24);
    }
  }
  return 1;
}


/* FUN_0059c480 @ 0059c480  kind=gamemisc  attributed-by=none  size=14 */

void FUN_0059c480(void)

{
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
  return;
}


/* FUN_0059c490 @ 0059c490  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * FUN_0059c490(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  undefined1 local_8 [4];
  
  piVar2 = (int *)*in_ECX;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_005947e0(piVar2[1]);
    *(int *)(*in_ECX + 4) = *in_ECX;
    *(int *)*in_ECX = *in_ECX;
    *(int *)(*in_ECX + 8) = *in_ECX;
    in_ECX[1] = 0;
    *param_1 = *(undefined4 *)*in_ECX;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_0059c550(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_0059c550 @ 0059c550  kind=gamemisc  attributed-by=none  size=647 */

/* WARNING: Removing unreachable block (ram,0x0059c61d) */
/* WARNING: Removing unreachable block (ram,0x0059c62d) */
/* WARNING: Removing unreachable block (ram,0x0059c636) */
/* WARNING: Removing unreachable block (ram,0x0059c639) */
/* WARNING: Removing unreachable block (ram,0x0059c629) */
/* WARNING: Removing unreachable block (ram,0x0059c647) */
/* WARNING: Removing unreachable block (ram,0x0059c656) */
/* WARNING: Removing unreachable block (ram,0x0059c661) */
/* WARNING: Removing unreachable block (ram,0x0059c65d) */
/* WARNING: Removing unreachable block (ram,0x0059c651) */
/* WARNING: Removing unreachable block (ram,0x0059c664) */

void FUN_0059c550(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_005c3ea0();
  piVar6 = (int *)*param_2;
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    if (*(char *)(param_2[2] + 0xd) == '\0') {
      piVar6 = (int *)param_2[2];
    }
  }
  else {
    piVar6 = (int *)param_2[2];
  }
  piVar5 = (int *)param_2[1];
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    piVar6[1] = (int)piVar5;
  }
  if (*(int **)(*in_ECX + 4) == param_2) {
    *(int **)(*in_ECX + 4) = piVar6;
  }
  else if ((int *)*piVar5 == param_2) {
    *piVar5 = (int)piVar6;
  }
  else {
    piVar5[2] = (int)piVar6;
  }
  puVar1 = (undefined4 *)*in_ECX;
  if ((int *)*puVar1 == param_2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      piVar3 = (int *)FUN_004e6ce0(piVar6);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *in_ECX;
  if (*(int **)(iVar2 + 8) == param_2) {
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      uVar4 = FUN_00428aa0(piVar6);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar5;
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (piVar6 != *(int **)(*in_ECX + 4)) {
      do {
        piVar3 = piVar5;
        if ((char)piVar6[3] != '\x01') break;
        piVar5 = (int *)*piVar3;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar3[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_004e37e0(piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042cac0(piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar3[3];
              *(undefined1 *)(piVar3 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004e37e0(piVar3);
              *(undefined1 *)(piVar6 + 3) = 1;
              goto LAB_0059c7ae;
            }
LAB_0059c750:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_0042cac0(piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_0059c750;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004e37e0(piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 3) = (char)piVar3[3];
            *(undefined1 *)(piVar3 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042cac0(piVar3);
            *(undefined1 *)(piVar6 + 3) = 1;
            goto LAB_0059c7ae;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_0059c7ae:
  if (7 < (uint)param_2[0xb]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[6]);
  }
  param_2[0xb] = 7;
  param_2[10] = 0;
  *(undefined2 *)(param_2 + 6) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_0059ee90 @ 0059ee90  kind=gamemisc  attributed-by=none  size=472 */

void FUN_0059ee90(uint *param_1,uint *param_2,undefined4 param_3,float param_4)

{
  float10 fVar1;
  double dVar2;
  float fVar3;
  float local_44;
  float local_40;
  uint *local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_44;
  local_3c = param_1;
  local_28 = *param_2 - *param_1;
  iStack_24 = (param_2[1] - param_1[1]) - (uint)(*param_2 < *param_1);
  local_20 = param_2[2] - param_1[2];
  iStack_1c = (param_2[3] - param_1[3]) - (uint)(param_2[2] < param_1[2]);
  local_18 = param_2[4] - param_1[4];
  iStack_14 = (param_2[5] - param_1[5]) - (uint)(param_2[4] < param_1[4]);
  local_34 = (float)CONCAT44(iStack_24,local_28) * 1.5258789e-05;
  local_30 = (float)CONCAT44(iStack_1c,local_20) * 1.5258789e-05;
  local_44 = (float)CONCAT44(iStack_14,local_18) * 1.5258789e-05;
  fVar3 = local_30 * local_30 + local_34 * local_34 + local_44 * local_44;
  if (fVar3 < 0.0001) {
    __security_check_cookie(local_c ^ (uint)&local_44);
    return;
  }
  if (param_4 * param_4 < fVar3) {
    __security_check_cookie(local_c ^ (uint)&local_44);
    return;
  }
  dVar2 = (double)fVar3;
  libm_sse2_sqrt_precise();
  local_38 = (float)dVar2;
  local_34 = local_34 / local_38;
  local_30 = local_30 / local_38;
  local_2c = local_44 / local_38;
  fVar1 = (float10)FUN_005a35d0(local_3c,&local_34,local_38,0,param_3);
  local_40 = (float)fVar1;
  __security_check_cookie(local_c ^ (uint)&local_44);
  return;
}


/* FUN_0059fbf0 @ 0059fbf0  kind=gamemisc  attributed-by=none  size=156 */

undefined2 * FUN_0059fbf0(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_10 = param_2;
  local_c = param_3;
  iVar3 = FUN_00594890(&local_10);
  iVar1 = *(int *)(in_ECX + 0x800134);
  iVar2 = iVar1;
  if (((iVar3 != iVar1) && (*(int *)(iVar3 + 0x10) <= param_2)) &&
     ((*(int *)(iVar3 + 0x10) < param_2 || (*(int *)(iVar3 + 0x14) <= param_3)))) {
    iVar2 = iVar3;
  }
  param_2 = iVar2;
  if (param_2 != iVar1) {
    *(undefined4 *)(param_1 + 10) = 7;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = 0;
    FUN_0040f680(param_2 + 0x18,0,0xffffffff);
    return param_1;
  }
  FUN_0040eb60(&PTR_006fccac);
  return param_1;
}


/* FUN_0059ff60 @ 0059ff60  kind=gamemisc  attributed-by=none  size=639 */

undefined4 FUN_0059ff60(undefined4 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    FUN_0040eb60(L"MaterialIron");
    return param_1;
  case 2:
    FUN_0040eb60(L"MaterialWood");
    return param_1;
  default:
    FUN_0040eb60(L"Material");
    return param_1;
  case 5:
    FUN_0040eb60(L"MaterialObsidian");
    return param_1;
  case 7:
    FUN_0040eb60(L"MaterialBone");
    return param_1;
  case 10:
    FUN_0040eb60(L"MaterialCopper");
    return param_1;
  case 0xb:
    FUN_0040eb60(L"MaterialGold");
    return param_1;
  case 0xc:
    FUN_0040eb60(L"MaterialSilver");
    return param_1;
  case 0xd:
    FUN_0040eb60(L"MaterialEmerald");
    return param_1;
  case 0xe:
    FUN_0040eb60(L"MaterialSapphire");
    return param_1;
  case 0xf:
    FUN_0040eb60(L"MaterialRuby");
    return param_1;
  case 0x10:
    FUN_0040eb60(L"MaterialDiamond");
    return param_1;
  case 0x11:
    FUN_0040eb60(L"MaterialSandstone");
    return param_1;
  case 0x12:
    FUN_0040eb60(L"MaterialSaurian");
    return param_1;
  case 0x13:
    FUN_0040eb60(L"MaterialParrot");
    return param_1;
  case 0x14:
    FUN_0040eb60(L"MaterialMammoth");
    return param_1;
  case 0x15:
    FUN_0040eb60(L"MaterialPlant");
    return param_1;
  case 0x16:
  case 0x82:
    FUN_0040eb60(L"MaterialIce");
    return param_1;
  case 0x17:
    FUN_0040eb60(L"MaterialLight");
    return param_1;
  case 0x18:
    FUN_0040eb60(L"MaterialGlass");
    return param_1;
  case 0x19:
    FUN_0040eb60(L"MaterialSilk");
    return param_1;
  case 0x1a:
    FUN_0040eb60(L"MaterialLinen");
    return param_1;
  case 0x1b:
    FUN_0040eb60(L"MaterialCotton");
    return param_1;
  case 0x80:
    FUN_0040eb60(L"MaterialFire");
    return param_1;
  case 0x81:
    FUN_0040eb60(L"MaterialUnholy");
    return param_1;
  case 0x83:
    FUN_0040eb60(L"MaterialWind");
    return param_1;
  }
}


/* FUN_005a02d0 @ 005a02d0  kind=gamemisc  attributed-by=none  size=251 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005a02d0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f20c8;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 4);
  iVar3 = FUN_004e3790(param_1);
  if (iVar3 != *piVar1) {
    piVar4 = (int *)(iVar3 + 0x10);
    if (7 < *(uint *)(iVar3 + 0x24)) {
      piVar4 = (int *)*piVar4;
    }
    iVar5 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar4,*(undefined4 *)(iVar3 + 0x20));
    param_1 = iVar3;
    if (-1 < iVar5) goto LAB_005a0333;
  }
  param_1 = *piVar1;
LAB_005a0333:
  if ((DAT_0076b804 & 1) == 0) {
    DAT_0076b804 = DAT_0076b804 | 1;
    local_8 = 0;
    _DAT_0076b7f4 = 0;
    _DAT_0076b7f8 = 0;
    _DAT_0076b7f4 = FUN_00630a10(uVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    DAT_0076b7fc = 0;
    _DAT_0076b800 = 0;
    DAT_0076b7fc = FUN_00439600(0,0);
    _atexit(FUN_006fb5f0);
  }
  puVar6 = &DAT_0076b7f4;
  if (param_1 != *piVar1) {
    puVar6 = (undefined *)(param_1 + 0x28);
  }
  ExceptionList = local_10;
  return puVar6;
}


/* FUN_005a0970 @ 005a0970  kind=gamemisc  attributed-by=none  size=617 */

void FUN_005a0970(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_3c;
  int *local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_3c = param_1;
  local_4c = *(undefined4 *)(param_1 + 8);
  puVar9 = (undefined4 *)(param_1 + 8);
  local_48 = *(undefined4 *)(param_1 + 0xc);
  local_54 = *(undefined4 *)(param_2 + 8);
  local_50 = *(undefined4 *)(param_2 + 0xc);
  puVar4 = (undefined4 *)FUN_00468ad0(puVar9);
  local_44 = *puVar4;
  local_38 = (int *)(param_3 + 0x50);
  iVar7 = *local_38;
  iVar5 = FUN_00451d00(iVar7,*(undefined4 *)(iVar7 + 4),&local_54);
  if (local_38[1] != 0x7fffffe) {
    local_38[1] = local_38[1] + 1;
    *(int *)(iVar7 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    piVar8 = (int *)**(int **)(local_34 + 4);
    iVar7 = local_34;
    if (piVar8 != *(int **)(local_34 + 4)) {
      do {
        iVar5 = piVar8[6];
        if ((((iVar5 != 0) && (iVar5 != local_3c)) && (iVar5 != param_2)) &&
           (cVar3 = FUN_00596ca0(iVar5,local_3c), iVar7 = local_34, cVar3 != '\0')) {
          iVar5 = piVar8[6];
          local_20._0_4_ = (uint)*(undefined8 *)(iVar5 + 0x10);
          local_20._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar5 + 0x10) >> 0x20);
          local_20 = CONCAT44((local_20._4_4_ - *(int *)(param_2 + 0x14)) -
                              (uint)((uint)local_20 < *(uint *)(param_2 + 0x10)),
                              (uint)local_20 - *(uint *)(param_2 + 0x10));
          local_18._0_4_ = (uint)*(undefined8 *)(iVar5 + 0x18);
          local_18._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar5 + 0x18) >> 0x20);
          local_18 = CONCAT44((local_18._4_4_ - *(int *)(param_2 + 0x1c)) -
                              (uint)((uint)local_18 < *(uint *)(param_2 + 0x18)),
                              (uint)local_18 - *(uint *)(param_2 + 0x18));
          local_10._0_4_ = (uint)*(undefined8 *)(iVar5 + 0x20);
          local_10._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar5 + 0x20) >> 0x20);
          local_10 = CONCAT44((local_10._4_4_ - *(int *)(param_2 + 0x24)) -
                              (uint)((uint)local_10 < *(uint *)(param_2 + 0x20)),
                              (uint)local_10 - *(uint *)(param_2 + 0x20));
          local_2c = (float)local_20 * 1.5258789e-05;
          local_30 = (float)local_10;
          local_28 = (float)local_18 * 1.5258789e-05;
          local_24 = local_30 * 1.5258789e-05;
          if ((local_28 * local_28 + local_2c * local_2c + local_24 * local_24 < 64.0) &&
             (pfVar6 = (float *)FUN_00468ad0(puVar9), iVar7 = local_34, *pfVar6 == 0.0)) {
            puVar4 = (undefined4 *)FUN_00468ad0(puVar9);
            *puVar4 = 0x3f000000;
            local_64 = *puVar9;
            local_60 = *(undefined4 *)(param_1 + 0xc);
            local_6c = *(undefined4 *)(piVar8[6] + 8);
            local_68 = *(undefined4 *)(piVar8[6] + 0xc);
            puVar4 = (undefined4 *)FUN_00468ad0(puVar9);
            local_5c = *puVar4;
            FUN_00486150(&local_6c);
            iVar7 = local_34;
          }
        }
        if (*(char *)((int)piVar8 + 0xd) == '\0') {
          piVar1 = (int *)piVar8[2];
          if (*(char *)((int)piVar1 + 0xd) == '\0') {
            cVar3 = *(char *)(*piVar1 + 0xd);
            piVar8 = piVar1;
            piVar1 = (int *)*piVar1;
            while (cVar3 == '\0') {
              cVar3 = *(char *)(*piVar1 + 0xd);
              piVar8 = piVar1;
              piVar1 = (int *)*piVar1;
            }
          }
          else {
            cVar3 = *(char *)(piVar8[1] + 0xd);
            piVar2 = (int *)piVar8[1];
            piVar1 = piVar8;
            while ((piVar8 = piVar2, cVar3 == '\0' && (piVar1 == (int *)piVar8[2]))) {
              cVar3 = *(char *)(piVar8[1] + 0xd);
              piVar2 = (int *)piVar8[1];
              piVar1 = piVar8;
            }
          }
        }
      } while (piVar8 != *(int **)(iVar7 + 4));
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_005a0ed0 @ 005a0ed0  kind=gamemisc  attributed-by=none  size=9823 */

void FUN_005a0ed0(undefined4 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f3002;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar5 = 0;
  if ((DAT_0076b9e8 & 1) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 1;
    local_8 = 0;
    FUN_0040eb60(&DAT_0071c77c);
    local_8._0_1_ = 1;
    FUN_0040eb60(&DAT_0071c784);
    local_8._0_1_ = 2;
    FUN_0040eb60(&DAT_0071c78c);
    local_8._0_1_ = 3;
    FUN_0040eb60(&DAT_0071c794);
    local_8._0_1_ = 4;
    FUN_0040eb60(&DAT_0071c79c);
    local_8._0_1_ = 5;
    FUN_0040eb60(L"Lugo");
    local_8._0_1_ = 6;
    FUN_0040eb60(&DAT_0071c7b0);
    local_8._0_1_ = 7;
    FUN_0040eb60(L"Liku");
    local_8._0_1_ = 8;
    FUN_0040eb60(L"Tero");
    local_8._0_1_ = 9;
    FUN_0040eb60(&DAT_0071c7d0);
    local_8._0_1_ = 10;
    FUN_0040eb60(&DAT_0071c828);
    local_8._0_1_ = 0xb;
    FUN_0040eb60(&DAT_0071c830);
    local_8._0_1_ = 0xc;
    FUN_0040eb60(&DAT_0071c838);
    local_8._0_1_ = 0xd;
    FUN_0040eb60(&DAT_0071c840);
    local_8._0_1_ = 0xe;
    FUN_0040eb60(L"Dura");
    local_8._0_1_ = 0xf;
    FUN_0040eb60(L"Dama");
    local_8._0_1_ = 0x10;
    FUN_0040eb60(&DAT_0071c860);
    local_8._0_1_ = 0x11;
    FUN_0040eb60(L"Thal");
    local_8._0_1_ = 0x12;
    FUN_0040eb60(&DAT_0071c874);
    local_8 = CONCAT31(local_8._1_3_,0x13);
    FUN_0040eb60(&DAT_0071c87c);
    _atexit((_func_4879 *)&LAB_006fb4b0);
  }
  if ((DAT_0076b9e8 & 2) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 2;
    local_8 = 0x14;
    FUN_0040eb60(&DAT_0071c7d8);
    local_8._0_1_ = 0x15;
    FUN_0040eb60(&DAT_0071c7e0);
    local_8._0_1_ = 0x16;
    FUN_0040eb60(&DAT_0071c7e8);
    local_8._0_1_ = 0x17;
    FUN_0040eb60(&DAT_0071c7f0);
    local_8._0_1_ = 0x18;
    FUN_0040eb60(&DAT_0071c7f8);
    local_8._0_1_ = 0x19;
    FUN_0040eb60(&DAT_0071c800);
    local_8._0_1_ = 0x1a;
    FUN_0040eb60(&DAT_0071c808);
    local_8._0_1_ = 0x1b;
    FUN_0040eb60(&DAT_0071c810);
    local_8._0_1_ = 0x1c;
    FUN_0040eb60(&DAT_0071c818);
    local_8._0_1_ = 0x1d;
    FUN_0040eb60(&DAT_0071c820);
    local_8._0_1_ = 0x1e;
    FUN_0040eb60(&DAT_0071c884);
    local_8._0_1_ = 0x1f;
    FUN_0040eb60(&DAT_0071c88c);
    local_8._0_1_ = 0x20;
    FUN_0040eb60(&DAT_0071c894);
    local_8._0_1_ = 0x21;
    FUN_0040eb60(L"dara");
    local_8._0_1_ = 0x22;
    FUN_0040eb60(&DAT_0071c8a8);
    local_8._0_1_ = 0x23;
    FUN_0040eb60(&DAT_0071c8b0);
    local_8._0_1_ = 0x24;
    FUN_0040eb60(&DAT_0071c8b8);
    local_8._0_1_ = 0x25;
    FUN_0040eb60(L"rior");
    local_8._0_1_ = 0x26;
    FUN_0040eb60(&DAT_0071c8cc);
    local_8 = CONCAT31(local_8._1_3_,0x27);
    FUN_0040eb60(&DAT_0071c8d4);
    _atexit((_func_4879 *)&LAB_006fb4d0);
  }
  if ((DAT_0076b9e8 & 4) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 4;
    local_8 = 0x28;
    FUN_0040eb60(&DAT_0071c8dc);
    local_8._0_1_ = 0x29;
    FUN_0040eb60(&DAT_0071c8e4);
    local_8._0_1_ = 0x2a;
    FUN_0040eb60(&DAT_0071c78c);
    local_8._0_1_ = 0x2b;
    FUN_0040eb60(&DAT_0071c794);
    local_8._0_1_ = 0x2c;
    FUN_0040eb60(&DAT_0071c828);
    local_8._0_1_ = 0x2d;
    FUN_0040eb60(&DAT_0071c8ec);
    local_8._0_1_ = 0x2e;
    FUN_0040eb60(L"Wolf");
    local_8._0_1_ = 0x2f;
    FUN_0040eb60(&DAT_0071c8f4);
    local_8._0_1_ = 0x30;
    FUN_0040eb60(&DAT_0071c8fc);
    local_8 = CONCAT31(local_8._1_3_,0x31);
    FUN_0040eb60(&DAT_0071c904);
    _atexit((_func_4879 *)&LAB_006fb810);
  }
  if ((DAT_0076b9e8 & 8) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 8;
    local_8 = 0x32;
    FUN_0040eb60(&DAT_0071c90c);
    local_8._0_1_ = 0x33;
    FUN_0040eb60(&DAT_0071c914);
    local_8._0_1_ = 0x34;
    FUN_0040eb60(L"gram");
    local_8._0_1_ = 0x35;
    FUN_0040eb60(L"rald");
    local_8._0_1_ = 0x36;
    FUN_0040eb60(L"rick");
    local_8._0_1_ = 0x37;
    FUN_0040eb60(&DAT_0071c940);
    local_8._0_1_ = 0x38;
    FUN_0040eb60(L"sander");
    local_8._0_1_ = 0x39;
    FUN_0040eb60(&DAT_0071c958);
    local_8._0_1_ = 0x3a;
    FUN_0040eb60(&DAT_0071c960);
    local_8 = CONCAT31(local_8._1_3_,0x3b);
    FUN_0040eb60(&DAT_0071c968);
    _atexit((_func_4879 *)&LAB_006fb830);
  }
  if ((DAT_0076b9e8 & 0x10) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x10;
    local_8 = 0x3c;
    FUN_0040eb60(&DAT_0071c970);
    local_8._0_1_ = 0x3d;
    FUN_0040eb60(&DAT_0071c978);
    local_8._0_1_ = 0x3e;
    FUN_0040eb60(&DAT_0071c980);
    local_8._0_1_ = 0x3f;
    FUN_0040eb60(&DAT_0071c8fc);
    local_8._0_1_ = 0x40;
    FUN_0040eb60(&DAT_0071c988);
    local_8._0_1_ = 0x41;
    FUN_0040eb60(L"Auri");
    local_8._0_1_ = 0x42;
    FUN_0040eb60(L"Mela");
    local_8._0_1_ = 0x43;
    FUN_0040eb60(&DAT_0071c9a8);
    local_8._0_1_ = 0x44;
    FUN_0040eb60(&DAT_0071c9b0);
    local_8 = CONCAT31(local_8._1_3_,0x45);
    FUN_0040eb60(&DAT_0071c9b8);
    _atexit((_func_4879 *)&LAB_006fb7d0);
  }
  if ((DAT_0076b9e8 & 0x20) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x20;
    local_8 = 0x46;
    FUN_0040eb60(&DAT_0071c9c0);
    local_8._0_1_ = 0x47;
    FUN_0040eb60(&DAT_0071c968);
    local_8._0_1_ = 0x48;
    FUN_0040eb60(&DAT_0071c8cc);
    local_8._0_1_ = 0x49;
    FUN_0040eb60(L"elle");
    local_8._0_1_ = 0x4a;
    FUN_0040eb60(&DAT_0071c9d4);
    local_8._0_1_ = 0x4b;
    FUN_0040eb60(&DAT_0071c9dc);
    local_8._0_1_ = 0x4c;
    FUN_0040eb60(&DAT_0071c9e4);
    local_8._0_1_ = 0x4d;
    FUN_0040eb60(L"riana");
    local_8._0_1_ = 0x4e;
    FUN_0040eb60(L"rona");
    local_8 = CONCAT31(local_8._1_3_,0x4f);
    FUN_0040eb60(&DAT_0071ca04);
    _atexit((_func_4879 *)&LAB_006fb7f0);
  }
  if ((DAT_0076b9e8 & 0x40) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x40;
    local_8 = 0x50;
    FUN_0040eb60(&DAT_0071ca0c);
    local_8._0_1_ = 0x51;
    FUN_0040eb60(&DAT_0071ca14);
    local_8._0_1_ = 0x52;
    FUN_0040eb60(&DAT_0071ca1c);
    local_8._0_1_ = 0x53;
    FUN_0040eb60(L"Elan");
    local_8._0_1_ = 0x54;
    FUN_0040eb60(&DAT_0071ca30);
    local_8._0_1_ = 0x55;
    FUN_0040eb60(&DAT_0071ca38);
    local_8._0_1_ = 0x56;
    FUN_0040eb60(&DAT_0071ca40);
    local_8._0_1_ = 0x57;
    FUN_0040eb60(&DAT_0071ca44);
    local_8._0_1_ = 0x58;
    FUN_0040eb60(&DAT_0071ca4c);
    local_8 = CONCAT31(local_8._1_3_,0x59);
    FUN_0040eb60(&DAT_0071ca54);
    _atexit((_func_4879 *)&LAB_006fb5b0);
  }
  if (-1 < (char)DAT_0076b9e8) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x80;
    local_8 = 0x5a;
    FUN_0040eb60(&DAT_0071ca5c);
    local_8._0_1_ = 0x5b;
    FUN_0040eb60(&DAT_0071ca64);
    local_8._0_1_ = 0x5c;
    FUN_0040eb60(&DAT_0071ca6c);
    local_8._0_1_ = 0x5d;
    FUN_0040eb60(&DAT_0071ca74);
    local_8._0_1_ = 0x5e;
    FUN_0040eb60(&DAT_0071ca7c);
    local_8._0_1_ = 0x5f;
    FUN_0040eb60(L"sander");
    local_8._0_1_ = 0x60;
    FUN_0040eb60(L"reon");
    local_8._0_1_ = 0x61;
    FUN_0040eb60(L"reas");
    local_8._0_1_ = 0x62;
    FUN_0040eb60(L"lundra");
    local_8 = CONCAT31(local_8._1_3_,99);
    FUN_0040eb60(L"andor");
    _atexit((_func_4879 *)&LAB_006fb5d0);
  }
  if ((DAT_0076b9e8 & 0x100) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x100;
    local_8 = 100;
    FUN_0040eb60(&DAT_0071cab8);
    local_8._0_1_ = 0x65;
    FUN_0040eb60(&DAT_0071ca40);
    local_8._0_1_ = 0x66;
    FUN_0040eb60(&DAT_0071cac0);
    local_8._0_1_ = 0x67;
    FUN_0040eb60(&DAT_0071cac8);
    local_8._0_1_ = 0x68;
    FUN_0040eb60(&DAT_0071cad0);
    local_8._0_1_ = 0x69;
    FUN_0040eb60(&DAT_0071cad8);
    local_8._0_1_ = 0x6a;
    FUN_0040eb60(&DAT_0071cae0);
    local_8._0_1_ = 0x6b;
    FUN_0040eb60(L"Sira");
    local_8._0_1_ = 0x6c;
    FUN_0040eb60(&DAT_0071caf4);
    local_8 = CONCAT31(local_8._1_3_,0x6d);
    FUN_0040eb60(&DAT_0071ca14);
    _atexit((_func_4879 *)&LAB_006fb570);
  }
  if ((DAT_0076b9e8 & 0x200) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x200;
    local_8 = 0x6e;
    FUN_0040eb60(L"weya");
    local_8._0_1_ = 0x6f;
    FUN_0040eb60(L"luna");
    local_8._0_1_ = 0x70;
    FUN_0040eb60(L"laya");
    local_8._0_1_ = 0x71;
    FUN_0040eb60(L"leya");
    local_8._0_1_ = 0x72;
    FUN_0040eb60(&DAT_0071c9e4);
    local_8._0_1_ = 0x73;
    FUN_0040eb60(&DAT_0071cb2c);
    local_8._0_1_ = 0x74;
    FUN_0040eb60(L"matra");
    local_8._0_1_ = 0x75;
    FUN_0040eb60(&DAT_0071cb40);
    local_8._0_1_ = 0x76;
    FUN_0040eb60(L"zyna");
    local_8 = CONCAT31(local_8._1_3_,0x77);
    FUN_0040eb60(&DAT_0071cb54);
    _atexit((_func_4879 *)&LAB_006fb590);
  }
  if ((DAT_0076b9e8 & 0x400) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x400;
    local_8 = 0x78;
    FUN_0040eb60(&DAT_0071cb5c);
    local_8._0_1_ = 0x79;
    FUN_0040eb60(&DAT_0071cb64);
    local_8._0_1_ = 0x7a;
    FUN_0040eb60(&DAT_0071cb6c);
    local_8._0_1_ = 0x7b;
    FUN_0040eb60(&DAT_0071cb74);
    local_8._0_1_ = 0x7c;
    FUN_0040eb60(&DAT_0071cb7c);
    local_8._0_1_ = 0x7d;
    FUN_0040eb60(&DAT_0071cb84);
    local_8._0_1_ = 0x7e;
    FUN_0040eb60(&DAT_0071cb8c);
    local_8._0_1_ = 0x7f;
    FUN_0040eb60(&DAT_0071cb94);
    local_8._0_1_ = 0x80;
    FUN_0040eb60(L"Kubo");
    local_8 = CONCAT31(local_8._1_3_,0x81);
    FUN_0040eb60(&DAT_0071cba8);
    _atexit((_func_4879 *)&LAB_006fb790);
  }
  if ((DAT_0076b9e8 & 0x800) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x800;
    local_8 = 0x82;
    FUN_0040eb60(&DAT_0071ca6c);
    local_8._0_1_ = 0x83;
    FUN_0040eb60(&DAT_0071cbb0);
    local_8._0_1_ = 0x84;
    FUN_0040eb60(&DAT_0071cbb8);
    local_8._0_1_ = 0x85;
    FUN_0040eb60(&DAT_0071cbc0);
    local_8._0_1_ = 0x86;
    FUN_0040eb60(&DAT_0071cbc8);
    local_8._0_1_ = 0x87;
    FUN_0040eb60(&DAT_0071cbd0);
    local_8._0_1_ = 0x88;
    FUN_0040eb60(&DAT_0071cbd8);
    local_8._0_1_ = 0x89;
    FUN_0040eb60(&DAT_0071c7e0);
    local_8._0_1_ = 0x8a;
    FUN_0040eb60(&DAT_0071cbe0);
    local_8 = CONCAT31(local_8._1_3_,0x8b);
    FUN_0040eb60(&DAT_0071cbe8);
    _atexit((_func_4879 *)&LAB_006fb7b0);
  }
  if ((DAT_0076b9e8 & 0x1000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x1000;
    local_8 = 0x8c;
    FUN_0040eb60(&DAT_0071c79c);
    local_8._0_1_ = 0x8d;
    FUN_0040eb60(&DAT_0071cb64);
    local_8._0_1_ = 0x8e;
    FUN_0040eb60(&DAT_0071cb84);
    local_8._0_1_ = 0x8f;
    FUN_0040eb60(&DAT_0071cbf0);
    local_8._0_1_ = 0x90;
    FUN_0040eb60(L"Zifa");
    local_8._0_1_ = 0x91;
    FUN_0040eb60(&DAT_0071cc04);
    local_8._0_1_ = 0x92;
    FUN_0040eb60(&DAT_0071cc0c);
    local_8._0_1_ = 0x93;
    FUN_0040eb60(&DAT_0071cc14);
    local_8._0_1_ = 0x94;
    FUN_0040eb60(&DAT_0071cc1c);
    local_8 = CONCAT31(local_8._1_3_,0x95);
    FUN_0040eb60(&DAT_0071cc24);
    _atexit((_func_4879 *)&LAB_006fb750);
  }
  if ((DAT_0076b9e8 & 0x2000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x2000;
    local_8 = 0x96;
    FUN_0040eb60(&DAT_0071cc2c);
    local_8._0_1_ = 0x97;
    FUN_0040eb60(&DAT_0071cb2c);
    local_8._0_1_ = 0x98;
    FUN_0040eb60(&DAT_0071cc34);
    local_8._0_1_ = 0x99;
    FUN_0040eb60(&DAT_0071cc3c);
    local_8._0_1_ = 0x9a;
    FUN_0040eb60(&DAT_0071cb54);
    local_8._0_1_ = 0x9b;
    FUN_0040eb60(&DAT_0071cc44);
    local_8._0_1_ = 0x9c;
    FUN_0040eb60(L"bara");
    local_8._0_1_ = 0x9d;
    FUN_0040eb60(&DAT_0071c7e0);
    local_8._0_1_ = 0x9e;
    FUN_0040eb60(&DAT_0071cc58);
    local_8 = CONCAT31(local_8._1_3_,0x9f);
    FUN_0040eb60(&DAT_0071cc60);
    _atexit((_func_4879 *)&LAB_006fb770);
  }
  if ((DAT_0076b9e8 & 0x4000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x4000;
    local_8 = 0xa0;
    FUN_0040eb60(&DAT_0071cc68);
    local_8._0_1_ = 0xa1;
    FUN_0040eb60(&DAT_0071cc70);
    local_8._0_1_ = 0xa2;
    FUN_0040eb60(&DAT_0071cc78);
    local_8._0_1_ = 0xa3;
    FUN_0040eb60(L"Kraz");
    local_8._0_1_ = 0xa4;
    FUN_0040eb60(&DAT_0071cc8c);
    local_8._0_1_ = 0xa5;
    FUN_0040eb60(L"Drak");
    local_8._0_1_ = 0xa6;
    FUN_0040eb60(&DAT_0071cca0);
    local_8._0_1_ = 0xa7;
    FUN_0040eb60(&DAT_0071cba8);
    local_8._0_1_ = 0xa8;
    FUN_0040eb60(&DAT_0071cca8);
    local_8 = CONCAT31(local_8._1_3_,0xa9);
    FUN_0040eb60(&DAT_0071ccb0);
    _atexit((_func_4879 *)&LAB_006fb890);
  }
  if ((DAT_0076b9e8 & 0x8000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x8000;
    local_8 = 0xaa;
    FUN_0040eb60(&DAT_0071ccb8);
    local_8._0_1_ = 0xab;
    FUN_0040eb60(&DAT_0071c90c);
    local_8._0_1_ = 0xac;
    FUN_0040eb60(&DAT_0071ca6c);
    local_8._0_1_ = 0xad;
    FUN_0040eb60(&DAT_0071ccc0);
    local_8._0_1_ = 0xae;
    FUN_0040eb60(&DAT_0071ccc8);
    local_8._0_1_ = 0xaf;
    FUN_0040eb60(&DAT_0071c808);
    local_8._0_1_ = 0xb0;
    FUN_0040eb60(&DAT_0071ccd0);
    local_8._0_1_ = 0xb1;
    FUN_0040eb60(&DAT_0071ccd8);
    local_8._0_1_ = 0xb2;
    FUN_0040eb60(&DAT_0071cce0);
    local_8 = CONCAT31(local_8._1_3_,0xb3);
    FUN_0040eb60(&DAT_0071cce8);
    _atexit((_func_4879 *)&LAB_006fb8b0);
  }
  if ((DAT_0076b9e8 & 0x10000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x10000;
    local_8 = 0xb4;
    FUN_0040eb60(&DAT_0071cc1c);
    local_8._0_1_ = 0xb5;
    FUN_0040eb60(&DAT_0071cc70);
    local_8._0_1_ = 0xb6;
    FUN_0040eb60(&DAT_0071ccf0);
    local_8._0_1_ = 0xb7;
    FUN_0040eb60(&DAT_0071cb84);
    local_8._0_1_ = 0xb8;
    FUN_0040eb60(&DAT_0071ccf8);
    local_8._0_1_ = 0xb9;
    FUN_0040eb60(L"Drak");
    local_8._0_1_ = 0xba;
    FUN_0040eb60(&DAT_0071ca14);
    local_8._0_1_ = 0xbb;
    FUN_0040eb60(&DAT_0071cd00);
    local_8._0_1_ = 0xbc;
    FUN_0040eb60(&DAT_0071cca8);
    local_8 = CONCAT31(local_8._1_3_,0xbd);
    FUN_0040eb60(&DAT_0071cd08);
    _atexit((_func_4879 *)&LAB_006fb850);
  }
  if ((DAT_0076b9e8 & 0x20000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x20000;
    local_8 = 0xbe;
    FUN_0040eb60(&DAT_0071cd10);
    local_8._0_1_ = 0xbf;
    FUN_0040eb60(&DAT_0071cd18);
    local_8._0_1_ = 0xc0;
    FUN_0040eb60(&DAT_0071cd20);
    local_8._0_1_ = 0xc1;
    FUN_0040eb60(&DAT_0071cc44);
    local_8._0_1_ = 0xc2;
    FUN_0040eb60(&DAT_0071cd28);
    local_8._0_1_ = 0xc3;
    FUN_0040eb60(&DAT_0071cd30);
    local_8._0_1_ = 0xc4;
    FUN_0040eb60(L"maya");
    local_8._0_1_ = 0xc5;
    FUN_0040eb60(&DAT_0071cd44);
    local_8._0_1_ = 0xc6;
    FUN_0040eb60(&DAT_0071cc2c);
    local_8 = CONCAT31(local_8._1_3_,199);
    FUN_0040eb60(&DAT_0071cd4c);
    _atexit((_func_4879 *)&LAB_006fb870);
  }
  if ((DAT_0076b9e8 & 0x40000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x40000;
    local_8 = 200;
    FUN_0040eb60(&DAT_0071cd54);
    local_8._0_1_ = 0xc9;
    FUN_0040eb60(&DAT_0071cd5c);
    local_8._0_1_ = 0xca;
    FUN_0040eb60(&DAT_0071cd64);
    local_8._0_1_ = 0xcb;
    FUN_0040eb60(&DAT_0071cd6c);
    local_8._0_1_ = 0xcc;
    FUN_0040eb60(&DAT_0071c78c);
    local_8._0_1_ = 0xcd;
    FUN_0040eb60(&DAT_0071cd74);
    local_8._0_1_ = 0xce;
    FUN_0040eb60(L"Arak");
    local_8._0_1_ = 0xcf;
    FUN_0040eb60(&DAT_0071cb6c);
    local_8._0_1_ = 0xd0;
    FUN_0040eb60(L"Grim");
    local_8 = CONCAT31(local_8._1_3_,0xd1);
    FUN_0040eb60(&DAT_0071cd94);
    _atexit((_func_4879 *)&LAB_006fb530);
  }
  if ((DAT_0076b9e8 & 0x80000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x80000;
    local_8 = 0xd2;
    FUN_0040eb60(&DAT_0071cd9c);
    local_8._0_1_ = 0xd3;
    FUN_0040eb60(L"bart");
    local_8._0_1_ = 0xd4;
    FUN_0040eb60(&DAT_0071c808);
    local_8._0_1_ = 0xd5;
    FUN_0040eb60(L"thos");
    local_8._0_1_ = 0xd6;
    FUN_0040eb60(&DAT_0071ca64);
    local_8._0_1_ = 0xd7;
    FUN_0040eb60(&DAT_0071cdbc);
    local_8._0_1_ = 0xd8;
    FUN_0040eb60(L"thor");
    local_8._0_1_ = 0xd9;
    FUN_0040eb60(&DAT_0071cdd0);
    local_8._0_1_ = 0xda;
    FUN_0040eb60(&DAT_0071cdd8);
    local_8 = CONCAT31(local_8._1_3_,0xdb);
    FUN_0040eb60(&DAT_0071cde0);
    _atexit((_func_4879 *)&LAB_006fb550);
  }
  if ((DAT_0076b9e8 & 0x100000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x100000;
    local_8 = 0xdc;
    FUN_0040eb60(&DAT_0071cde8);
    local_8._0_1_ = 0xdd;
    FUN_0040eb60(L"Grun");
    local_8._0_1_ = 0xde;
    FUN_0040eb60(L"Brun");
    local_8._0_1_ = 0xdf;
    FUN_0040eb60(&DAT_0071ce08);
    local_8._0_1_ = 0xe0;
    FUN_0040eb60(&DAT_0071ce10);
    local_8._0_1_ = 0xe1;
    FUN_0040eb60(&DAT_0071ce18);
    local_8._0_1_ = 0xe2;
    FUN_0040eb60(&DAT_0071cb6c);
    local_8._0_1_ = 0xe3;
    FUN_0040eb60(&DAT_0071ce20);
    local_8._0_1_ = 0xe4;
    FUN_0040eb60(L"Grim");
    local_8 = CONCAT31(local_8._1_3_,0xe5);
    FUN_0040eb60(&DAT_0071cd94);
    _atexit((_func_4879 *)&LAB_006fb4f0);
  }
  if ((DAT_0076b9e8 & 0x200000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x200000;
    local_8 = 0xe6;
    FUN_0040eb60(&DAT_0071ce28);
    local_8._0_1_ = 0xe7;
    FUN_0040eb60(L"hild");
    local_8._0_1_ = 0xe8;
    FUN_0040eb60(&DAT_0071ce3c);
    local_8._0_1_ = 0xe9;
    FUN_0040eb60(L"muna");
    local_8._0_1_ = 0xea;
    FUN_0040eb60(&DAT_0071cc44);
    local_8._0_1_ = 0xeb;
    FUN_0040eb60(L"trud");
    local_8._0_1_ = 0xec;
    FUN_0040eb60(&DAT_0071ce5c);
    local_8._0_1_ = 0xed;
    FUN_0040eb60(&DAT_0071ce64);
    local_8._0_1_ = 0xee;
    FUN_0040eb60(&DAT_0071cd30);
    local_8 = CONCAT31(local_8._1_3_,0xef);
    FUN_0040eb60(&DAT_0071ce6c);
    _atexit((_func_4879 *)&LAB_006fb510);
  }
  if ((DAT_0076b9e8 & 0x400000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x400000;
    local_8 = 0xf0;
    FUN_0040eb60(&DAT_0071ce74);
    local_8._0_1_ = 0xf1;
    FUN_0040eb60(&DAT_0071cb6c);
    local_8._0_1_ = 0xf2;
    FUN_0040eb60(&DAT_0071cb7c);
    local_8._0_1_ = 0xf3;
    FUN_0040eb60(&DAT_0071ce7c);
    local_8._0_1_ = 0xf4;
    FUN_0040eb60(&DAT_0071ce84);
    local_8._0_1_ = 0xf5;
    FUN_0040eb60(&DAT_0071ce8c);
    local_8._0_1_ = 0xf6;
    FUN_0040eb60(&DAT_0071ce94);
    local_8._0_1_ = 0xf7;
    FUN_0040eb60(&DAT_0071cb6c);
    local_8._0_1_ = 0xf8;
    FUN_0040eb60(&DAT_0071ce9c);
    local_8 = CONCAT31(local_8._1_3_,0xf9);
    FUN_0040eb60(&DAT_0071cea4);
    _atexit((_func_4879 *)&LAB_006fb910);
  }
  if ((DAT_0076b9e8 & 0x800000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x800000;
    local_8 = 0xfa;
    FUN_0040eb60(&DAT_0071ceac);
    local_8._0_1_ = 0xfb;
    FUN_0040eb60(&DAT_0071cbc8);
    local_8._0_1_ = 0xfc;
    FUN_0040eb60(&DAT_0071ceb4);
    local_8._0_1_ = 0xfd;
    FUN_0040eb60(L"thak");
    local_8._0_1_ = 0xfe;
    FUN_0040eb60(&DAT_0071cec8);
    local_8 = CONCAT31(local_8._1_3_,0xff);
    FUN_0040eb60(&DAT_0071ced0);
    local_8 = 0x100;
    FUN_0040eb60(L"rorok");
    local_8._0_1_ = 1;
    FUN_0040eb60(L"chak");
    local_8._0_1_ = 2;
    FUN_0040eb60(&DAT_0071cef0);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_0040eb60(L"rack");
    _atexit((_func_4879 *)&LAB_006fb930);
  }
  if ((DAT_0076b9e8 & 0x1000000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x1000000;
    local_8 = 0x104;
    FUN_0040eb60(&DAT_0071ce74);
    local_8._0_1_ = 5;
    FUN_0040eb60(&DAT_0071cb6c);
    local_8._0_1_ = 6;
    FUN_0040eb60(&DAT_0071cb7c);
    local_8._0_1_ = 7;
    FUN_0040eb60(&DAT_0071ce7c);
    local_8._0_1_ = 8;
    FUN_0040eb60(&DAT_0071ce84);
    local_8._0_1_ = 9;
    FUN_0040eb60(&DAT_0071ce8c);
    local_8._0_1_ = 10;
    FUN_0040eb60(&DAT_0071ce94);
    local_8._0_1_ = 0xb;
    FUN_0040eb60(&DAT_0071cb6c);
    local_8._0_1_ = 0xc;
    FUN_0040eb60(&DAT_0071ce9c);
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_0040eb60(&DAT_0071cea4);
    _atexit((_func_4879 *)&LAB_006fb8d0);
  }
  if ((DAT_0076b9e8 & 0x2000000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x2000000;
    local_8 = 0x10e;
    FUN_0040eb60(&DAT_0071c8b0);
    local_8._0_1_ = 0xf;
    FUN_0040eb60(&DAT_0071cf04);
    local_8._0_1_ = 0x10;
    FUN_0040eb60(&DAT_0071cf0c);
    local_8._0_1_ = 0x11;
    FUN_0040eb60(L"thara");
    local_8._0_1_ = 0x12;
    FUN_0040eb60(L"daka");
    local_8._0_1_ = 0x13;
    FUN_0040eb60(&DAT_0071cf2c);
    local_8._0_1_ = 0x14;
    FUN_0040eb60(L"rorah");
    local_8._0_1_ = 0x15;
    FUN_0040eb60(L"chaka");
    local_8._0_1_ = 0x16;
    FUN_0040eb60(L"kaya");
    local_8 = CONCAT31(local_8._1_3_,0x17);
    FUN_0040eb60(L"rana");
    _atexit((_func_4879 *)&LAB_006fb8f0);
  }
  if ((DAT_0076b9e8 & 0x4000000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x4000000;
    local_8 = 0x118;
    FUN_0040eb60(&DAT_0071cb7c);
    local_8._0_1_ = 0x19;
    FUN_0040eb60(&DAT_0071cf64);
    local_8._0_1_ = 0x1a;
    FUN_0040eb60(&DAT_0071cf6c);
    local_8._0_1_ = 0x1b;
    FUN_0040eb60(&DAT_0071cf74);
    local_8._0_1_ = 0x1c;
    FUN_0040eb60(&DAT_0071ce84);
    local_8._0_1_ = 0x1d;
    FUN_0040eb60(&DAT_0071cf7c);
    local_8._0_1_ = 0x1e;
    FUN_0040eb60(&DAT_0071cf84);
    local_8._0_1_ = 0x1f;
    FUN_0040eb60(&DAT_0071cf8c);
    local_8._0_1_ = 0x20;
    FUN_0040eb60(&DAT_0071cf94);
    local_8 = CONCAT31(local_8._1_3_,0x21);
    FUN_0040eb60(&DAT_0071c830);
    _atexit((_func_4879 *)&LAB_006fb9b0);
  }
  if ((DAT_0076b9e8 & 0x8000000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x8000000;
    local_8 = 0x122;
    FUN_0040eb60(&DAT_0071cf9c);
    local_8._0_1_ = 0x23;
    FUN_0040eb60(&DAT_0071c808);
    local_8._0_1_ = 0x24;
    FUN_0040eb60(L"card");
    local_8._0_1_ = 0x25;
    FUN_0040eb60(L"morius");
    local_8._0_1_ = 0x26;
    FUN_0040eb60(L"enius");
    local_8._0_1_ = 0x27;
    FUN_0040eb60(&DAT_0071cfcc);
    local_8._0_1_ = 0x28;
    FUN_0040eb60(L"demar");
    local_8._0_1_ = 0x29;
    FUN_0040eb60(&DAT_0071cfe0);
    local_8._0_1_ = 0x2a;
    FUN_0040eb60(L"ruul");
    local_8 = CONCAT31(local_8._1_3_,0x2b);
    FUN_0040eb60(&DAT_0071cff4);
    _atexit((_func_4879 *)&LAB_006fb9d0);
  }
  if ((DAT_0076b9e8 & 0x10000000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x10000000;
    local_8 = 300;
    FUN_0040eb60(&DAT_0071cffc);
    local_8._0_1_ = 0x2d;
    FUN_0040eb60(&DAT_0071cf94);
    local_8._0_1_ = 0x2e;
    FUN_0040eb60(&DAT_0071cf6c);
    local_8._0_1_ = 0x2f;
    FUN_0040eb60(&DAT_0071cf74);
    local_8._0_1_ = 0x30;
    FUN_0040eb60(&DAT_0071ce84);
    local_8._0_1_ = 0x31;
    FUN_0040eb60(&DAT_0071d004);
    local_8._0_1_ = 0x32;
    FUN_0040eb60(&DAT_0071d00c);
    local_8._0_1_ = 0x33;
    FUN_0040eb60(&DAT_0071cf8c);
    local_8._0_1_ = 0x34;
    FUN_0040eb60(&DAT_0071ca1c);
    local_8 = CONCAT31(local_8._1_3_,0x35);
    FUN_0040eb60(&DAT_0071d014);
    _atexit((_func_4879 *)&LAB_006fb970);
  }
  if ((DAT_0076b9e8 & 0x20000000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x20000000;
    local_8 = 0x136;
    FUN_0040eb60(&DAT_0071c7e8);
    local_8._0_1_ = 0x37;
    FUN_0040eb60(L"kira");
    local_8._0_1_ = 0x38;
    FUN_0040eb60(L"cara");
    local_8._0_1_ = 0x39;
    FUN_0040eb60(L"moria");
    local_8._0_1_ = 0x3a;
    FUN_0040eb60(&DAT_0071d040);
    local_8._0_1_ = 0x3b;
    FUN_0040eb60(L"tana");
    local_8._0_1_ = 0x3c;
    FUN_0040eb60(L"diria");
    local_8._0_1_ = 0x3d;
    FUN_0040eb60(L"laza");
    local_8._0_1_ = 0x3e;
    FUN_0040eb60(&DAT_0071c9c0);
    local_8 = CONCAT31(local_8._1_3_,0x3f);
    FUN_0040eb60(L"zazah");
    _atexit((_func_4879 *)&LAB_006fb990);
  }
  if ((DAT_0076b9e8 & 0x40000000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x40000000;
    local_8 = 0x140;
    FUN_0040eb60(&DAT_0071d078);
    local_8._0_1_ = 0x41;
    FUN_0040eb60(&DAT_0071d080);
    local_8._0_1_ = 0x42;
    FUN_0040eb60(L"Quib");
    local_8._0_1_ = 0x43;
    FUN_0040eb60(&DAT_0071d094);
    local_8._0_1_ = 0x44;
    FUN_0040eb60(&DAT_0071d09c);
    local_8._0_1_ = 0x45;
    FUN_0040eb60(&DAT_0071d0a4);
    local_8._0_1_ = 0x46;
    FUN_0040eb60(&DAT_0071d0ac);
    local_8._0_1_ = 0x47;
    FUN_0040eb60(L"Moko");
    local_8._0_1_ = 0x48;
    FUN_0040eb60(&DAT_0071d0c0);
    local_8 = CONCAT31(local_8._1_3_,0x49);
    FUN_0040eb60(&DAT_0071d0c8);
    _atexit((_func_4879 *)&LAB_006fb710);
  }
  if (-1 < (int)DAT_0076b9e8) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x80000000;
    local_8 = 0x14a;
    FUN_0040eb60(&DAT_0071d0d0);
    local_8._0_1_ = 0x4b;
    FUN_0040eb60(&DAT_0071d0d8);
    local_8._0_1_ = 0x4c;
    FUN_0040eb60(&DAT_0071d0e0);
    local_8._0_1_ = 0x4d;
    FUN_0040eb60(&DAT_0071d0e8);
    local_8._0_1_ = 0x4e;
    FUN_0040eb60(&DAT_0071d0f0);
    local_8._0_1_ = 0x4f;
    FUN_0040eb60(&DAT_0071d0f8);
    local_8._0_1_ = 0x50;
    FUN_0040eb60(&DAT_0071d100);
    local_8._0_1_ = 0x51;
    FUN_0040eb60(&DAT_0071d108);
    local_8._0_1_ = 0x52;
    FUN_0040eb60(&DAT_0071d110);
    local_8 = CONCAT31(local_8._1_3_,0x53);
    FUN_0040eb60(&DAT_0071d118);
    _atexit((_func_4879 *)&LAB_006fb730);
  }
  if ((DAT_0076d8e0 & 1) == 0) {
    DAT_0076d8e0 = DAT_0076d8e0 | 1;
    local_8 = 0x154;
    FUN_0040eb60(&DAT_0071d078);
    local_8._0_1_ = 0x55;
    FUN_0040eb60(&DAT_0071d080);
    local_8._0_1_ = 0x56;
    FUN_0040eb60(L"Quib");
    local_8._0_1_ = 0x57;
    FUN_0040eb60(&DAT_0071d094);
    local_8._0_1_ = 0x58;
    FUN_0040eb60(&DAT_0071d09c);
    local_8._0_1_ = 0x59;
    FUN_0040eb60(&DAT_0071d0a4);
    local_8._0_1_ = 0x5a;
    FUN_0040eb60(&DAT_0071d0ac);
    local_8._0_1_ = 0x5b;
    FUN_0040eb60(L"Moko");
    local_8._0_1_ = 0x5c;
    FUN_0040eb60(&DAT_0071d0c0);
    local_8 = CONCAT31(local_8._1_3_,0x5d);
    FUN_0040eb60(&DAT_0071d0c8);
    _atexit((_func_4879 *)&LAB_006fb6d0);
  }
  if ((DAT_0076d8e0 & 2) == 0) {
    DAT_0076d8e0 = DAT_0076d8e0 | 2;
    local_8 = 0x15e;
    FUN_0040eb60(&DAT_0071c8cc);
    local_8._0_1_ = 0x5f;
    FUN_0040eb60(&DAT_0071d120);
    local_8._0_1_ = 0x60;
    FUN_0040eb60(&DAT_0071d128);
    local_8._0_1_ = 0x61;
    FUN_0040eb60(&DAT_0071d120);
    local_8._0_1_ = 0x62;
    FUN_0040eb60(L"waka");
    local_8._0_1_ = 99;
    FUN_0040eb60(L"woka");
    local_8._0_1_ = 100;
    FUN_0040eb60(L"wibba");
    local_8._0_1_ = 0x65;
    FUN_0040eb60(&DAT_0071d154);
    local_8._0_1_ = 0x66;
    FUN_0040eb60(L"maya");
    local_8 = CONCAT31(local_8._1_3_,0x67);
    FUN_0040eb60(&DAT_0071cc3c);
    _atexit((_func_4879 *)&LAB_006fb6f0);
  }
  uVar6 = 0;
  local_8 = 0x168;
  switch(param_3) {
  case 0:
    puVar4 = &DAT_0076c080 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076bf90 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 1:
    puVar4 = &DAT_0076c260 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076c170 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 2:
  case 0x12:
  case 0x2b:
  case 0x53:
    puVar4 = &DAT_0076bcc0 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076bbd0 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    goto LAB_005a3505;
  case 3:
  case 0x2d:
  case 0x54:
    puVar4 = &DAT_0076bea0 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076bdb0 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 4:
    puVar4 = &DAT_0076c440 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076c350 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 5:
    puVar4 = &DAT_0076c620 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076c530 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  default:
    puVar4 = &DAT_0076b9f0 + ((param_2 * 7 + param_2 / 10) % 0x14) * 0x18;
    puVar2 = &DAT_0076b808 + ((param_2 / 7 + param_2 * 0xd) % 0x14) * 0x18;
LAB_005a3505:
    FUN_0058d7a0(param_1,puVar2,puVar4);
    uVar3 = extraout_EDX_00;
    goto LAB_005a350f;
  case 7:
    puVar4 = &DAT_0076c800 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076c710 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 8:
    puVar4 = &DAT_0076c9e0 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076c8f0 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 9:
    puVar4 = &DAT_0076cbc0 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076cad0 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 10:
    puVar4 = &DAT_0076cda0 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076ccb0 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 0xb:
    puVar4 = &DAT_0076cf80 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076ce90 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 0xc:
    puVar4 = &DAT_0076d160 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076d070 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 0xd:
    puVar4 = &DAT_0076d700 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076d610 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 0xe:
    puVar4 = &DAT_0076d8e8 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076d7f0 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 0xf:
    puVar4 = &DAT_0076d340 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076d250 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 0x10:
    puVar4 = &DAT_0076d520 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076d430 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
  }
  FUN_0058d7a0(param_1,puVar2,puVar4);
  FUN_00593e50();
  uVar3 = extraout_EDX;
LAB_005a350f:
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc,uVar3,uVar5,uVar6);
  return;
}


/* FUN_005a4980 @ 005a4980  kind=gamemisc  attributed-by=none  size=334 */

void FUN_005a4980(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3038;
  local_10 = ExceptionList;
  uVar6 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar7 = (undefined4 *)FUN_0046d550(0,0);
  local_8 = 0;
  piVar9 = (int *)**(int **)(local_14 + 4);
  local_18 = piVar9;
  if (piVar9 != *(int **)(local_14 + 4)) {
    do {
      iVar2 = piVar9[6];
      if (((((iVar2 != 0) && (*(char *)(iVar2 + 0x60) != '\0')) &&
           (*(char *)(iVar2 + 0x60) != '\x05')) &&
          ((iVar8 = FUN_00434d10(*(undefined4 *)(iVar2 + 0x1b0),*(undefined4 *)(iVar2 + 0x1b4)),
           iVar8 != 0 && (iVar2 = *(int *)(iVar2 + 0x1b8), -1 < iVar2)))) &&
         (iVar2 < *(int *)(iVar8 + 0x1c) - *(int *)(iVar8 + 0x18) >> 2)) {
        *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x18) + iVar2 * 4) + 0x38) = 0;
        FUN_004860b0(&local_18);
        if ((undefined4 *)piVar9[6] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piVar9[6])(1,uVar6);
        }
      }
      if (*(char *)((int)piVar9 + 0xd) == '\0') {
        piVar3 = (int *)piVar9[2];
        if (*(char *)((int)piVar3 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          piVar9 = piVar3;
          piVar3 = (int *)*piVar3;
          while (local_18 = piVar9, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0xd);
            piVar9 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0xd);
          piVar5 = (int *)piVar9[1];
          piVar3 = piVar9;
          while ((piVar9 = piVar5, local_18 = piVar9, cVar1 == '\0' && (piVar3 == (int *)piVar9[2]))
                ) {
            cVar1 = *(char *)(piVar9[1] + 0xd);
            piVar5 = (int *)piVar9[1];
            piVar3 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int **)(local_14 + 4));
  }
  for (puVar4 = (undefined4 *)*puVar7; puVar4 != puVar7; puVar4 = (undefined4 *)*puVar4) {
    FUN_0043ede0(&local_18,puVar4[2]);
  }
  puVar4 = (undefined4 *)*puVar7;
  *puVar7 = puVar7;
  puVar7[1] = puVar7;
  if (puVar4 == puVar7) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar7);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar4);
}


/* FUN_005a5240 @ 005a5240  kind=gamemisc  attributed-by=none  size=156 */

undefined2 * FUN_005a5240(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_10 = param_2;
  local_c = param_3;
  iVar3 = FUN_00594890(&local_10);
  iVar1 = *(int *)(in_ECX + 0x800124);
  iVar2 = iVar1;
  if (((iVar3 != iVar1) && (*(int *)(iVar3 + 0x10) <= param_2)) &&
     ((*(int *)(iVar3 + 0x10) < param_2 || (*(int *)(iVar3 + 0x14) <= param_3)))) {
    iVar2 = iVar3;
  }
  param_2 = iVar2;
  if (param_2 != iVar1) {
    *(undefined4 *)(param_1 + 10) = 7;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = 0;
    FUN_0040f680(param_2 + 0x18,0,0xffffffff);
    return param_1;
  }
  FUN_0040eb60(&PTR_006fccac);
  return param_1;
}


/* FUN_005a52e0 @ 005a52e0  kind=gamemisc  attributed-by=none  size=1481 */

void __thiscall FUN_005a52e0(void *this,uint param_2,int param_3)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iStack_100;
  basic_iostream<char,std::char_traits<char>_> local_fc;
  basic_streambuf<char,std::char_traits<char>_> local_e4 [2];
  undefined1 local_dc [8];
  undefined4 *local_d4;
  undefined4 *local_c4;
  undefined4 *local_b4;
  undefined4 local_ac;
  uint local_a8;
  code *local_94 [18];
  int local_4c;
  int local_48;
  void *local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  void *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3208;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = param_3;
  local_34 = 0;
  *(uint *)((int)this + 0x800164) = param_2;
  local_30 = this;
  srand(param_2);
  iVar3 = rand();
  *(int *)((int)this + 0x800188) = iVar3 % 100000;
  iVar3 = 4;
  piVar6 = (int *)((int)this + 0x800168);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 0x14;
  piVar6 = (int *)((int)local_30 + 0x80018c);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x8001dc);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x8001e4);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x8001ec);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x8001f4);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 8;
  piVar6 = (int *)((int)local_30 + 0x8001fc);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 6;
  piVar6 = (int *)((int)local_30 + 0x80021c);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 6;
  piVar6 = (int *)((int)local_30 + 0x800234);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 10;
  piVar6 = (int *)((int)local_30 + 0x80024c);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 4;
  piVar6 = (int *)((int)local_30 + 0x800274);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x800284);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 4;
  piVar6 = (int *)((int)local_30 + 0x800178);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x80028c);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x800294);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  local_34 = 0x400;
  piVar6 = (int *)((int)local_30 + 0xbc);
  do {
    local_48 = 0x400;
    do {
      iVar3 = local_48;
      if (*piVar6 != 0) {
        if (*(char *)((int)local_30 + 0xb4) == '\0') {
          iVar3 = 0x10018;
          do {
            iVar4 = 0x40;
            do {
              FUN_005a5050(local_30,*(undefined4 *)(*piVar6 + iVar3));
              iVar3 = iVar3 + 4;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          } while (iVar3 < 0x14018);
        }
        iVar3 = local_48;
        if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar6)(1);
        }
        *piVar6 = 0;
      }
      pvVar1 = local_30;
      if ((void *)piVar6[0x100000] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)piVar6[0x100000]);
      }
      piVar6 = piVar6 + 1;
      local_48 = iVar3 + -1;
    } while (local_48 != 0);
    local_34 = local_34 + -1;
  } while (local_34 != 0);
  FUN_00449400();
  iVar3 = local_4c;
  *(undefined4 *)((int)pvVar1 + 0x8000f0) = 0x4b002080;
  *(undefined4 *)((int)pvVar1 + 0x8000f4) = 0x4b002080;
  *(undefined4 *)((int)pvVar1 + 0x8000f8) = 0;
  if ((int)pvVar1 + 0x94 != local_4c) {
    FUN_0040c0a0(local_4c,0,0xffffffff);
  }
  if ((*(char *)((int)pvVar1 + 0xb4) == '\0') && (*(int *)((int)pvVar1 + 0xa4) != 0)) {
    local_fc.vbtablePtr =
         (basic_iostream<char,std::char_traits<char>_>_vbtable *)
         &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          vbtable;
    local_fc.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
         (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
    local_94[0] = _vftable__exref;
    local_8 = 0;
    local_34 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              (&local_fc,(basic_streambuf<char,std::char_traits<char>_> *)local_e4);
    local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_fc.vbtablePtr +
     (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_100 +
            (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>(local_e4);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_e4[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_ac = 0;
    local_a8 = 0;
    local_8 = 3;
    uVar5 = FUN_00449150(&local_fc.basic_ostream<char,std::char_traits<char>_>,"Save/world_",iVar3,
                         &DAT_00701e5c);
    uVar5 = FUN_00401ff0(uVar5);
    FUN_00449150(uVar5);
    uVar5 = FUN_0040e140(local_2c);
    local_8._0_1_ = 4;
    FUN_004497b0(uVar5);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_44 = (void *)0x0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_8._0_1_ = 5;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_0040c280(&DAT_00715b40,4);
    local_8 = CONCAT31(local_8._1_3_,6);
    cVar2 = FUN_004498d0(local_2c,&local_44);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    if (cVar2 != '\0') {
      iVar4 = local_40 - (int)local_44;
      iVar3 = iVar4;
      if (local_38 + 4 <= iVar4) {
        *(undefined4 *)((int)pvVar1 + 0x800160) = *(undefined4 *)((int)local_44 + local_38);
        iVar3 = local_38 + 4;
      }
      local_38 = iVar4;
      if (iVar3 + 4 <= iVar4) {
        *(undefined4 *)((int)pvVar1 + 0x80015c) = *(undefined4 *)((int)local_44 + iVar3);
        local_38 = iVar3 + 4;
      }
    }
    if (local_44 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44);
    }
    local_8 = 0xffffffff;
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_fc.vbtablePtr +
     (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_100 +
            (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    local_e4[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    if ((local_a8 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)local_dc._4_4_);
    }
    std::basic_streambuf<char,std::char_traits<char>_>::setg
              (local_e4,(char *)0x0,(char *)0x0,(char *)0x0);
    *local_d4 = 0;
    *local_c4 = 0;
    *local_b4 = 0;
    local_a8 = local_a8 & 0xfffffffe;
    local_ac = 0;
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(local_e4);
    std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_dc);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)local_94);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005a5af0 @ 005a5af0  kind=gamemisc  attributed-by=none  size=29 */

void FUN_005a5af0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}


/* FUN_005a5f60 @ 005a5f60  kind=gamemisc  attributed-by=none  size=770 */

void FUN_005a5f60(int *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float local_30;
  int local_2c;
  int iStack_28;
  int local_24;
  uint local_20;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  uint local_10;
  int iStack_c;
  
  uVar8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar3 = param_2[1];
  uVar4 = *param_2;
  iVar9 = __alldiv(uVar4,uVar3,0x10000,0);
  uVar5 = param_2[3];
  uVar6 = param_2[2];
  iVar9 = (int)((iVar9 >> 0x1f & 7U) + iVar9) >> 3;
  iVar10 = __alldiv(uVar6,uVar5,0x10000,0);
  fVar19 = -1.0;
  uVar16 = iVar9 - 1;
  iVar9 = iVar9 + 1;
  iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 7U)) >> 3;
  local_30 = -1.0;
  local_2c = 0;
  iStack_28 = 0;
  local_24 = -1;
  if ((int)uVar16 <= iVar9) {
    uVar1 = iVar10 - 1;
    iVar17 = -1;
    uVar7 = uVar1;
    do {
      for (; (int)uVar7 <= iVar10 + 1; uVar7 = uVar7 + 1) {
        if ((((-1 < (int)uVar16) && (-1 < (int)uVar7)) && ((int)uVar16 < 0x200000)) &&
           (((int)uVar7 < 0x200000 &&
            (iVar11 = FUN_00434d10((int)(uVar16 + ((int)uVar16 >> 0x1f & 0x1fU)) >> 5,
                                   (int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5),
            fVar19 = local_30, iVar11 != 0)))) {
          uVar14 = uVar7 & 0x8000001f;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xffffffe0) + 1;
          }
          uVar13 = uVar16 & 0x8000001f;
          if ((int)uVar13 < 0) {
            uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
          }
          piVar2 = (int *)(*(int *)(iVar11 + 0xac) + (uVar14 * 0x20 + uVar13) * 8);
          if (piVar2 != (int *)0x0) {
            piVar2 = (int *)*piVar2;
            piVar15 = (int *)*piVar2;
            if (piVar15 != piVar2) {
              uVar14 = param_2[4];
              uVar13 = param_2[5];
              do {
                iVar11 = piVar15[2];
                local_20 = (uint)*(undefined8 *)(iVar11 + 8);
                iStack_1c = (int)((ulonglong)*(undefined8 *)(iVar11 + 8) >> 0x20);
                iVar12 = (iStack_1c - uVar3) - (uint)(local_20 < uVar4);
                local_18 = (uint)*(undefined8 *)(iVar11 + 0x10);
                iStack_14 = (int)((ulonglong)*(undefined8 *)(iVar11 + 0x10) >> 0x20);
                iVar17 = (iStack_14 - uVar5) - (uint)(local_18 < uVar6);
                local_10 = (uint)*(undefined8 *)(iVar11 + 0x18);
                iStack_c = (int)((ulonglong)*(undefined8 *)(iVar11 + 0x18) >> 0x20);
                iVar11 = local_10 - uVar14;
                iVar18 = (iStack_c - uVar13) - (uint)(local_10 < uVar14);
                uVar20 = __allmul(local_20 - uVar4,iVar12,local_20 - uVar4,iVar12);
                lVar21 = __alldiv(uVar20,0x10000,0);
                uVar20 = __allmul(iVar11,iVar18,iVar11,iVar18);
                lVar22 = __alldiv(uVar20,0x10000,0);
                uVar20 = __allmul(local_18 - uVar6,iVar17,local_18 - uVar6,iVar17);
                lVar23 = __alldiv(uVar20,0x10000,0);
                fVar19 = (float)(lVar21 + lVar22 + lVar23) * 1.5258789e-05;
                if ((local_24 < 0) || (fVar19 < local_30)) {
                  local_2c = piVar15[3];
                  iStack_28 = piVar15[4];
                  local_24 = piVar15[5];
                  local_30 = fVar19;
                }
                piVar15 = (int *)*piVar15;
                iVar17 = local_24;
                fVar19 = local_30;
              } while (piVar15 != piVar2);
            }
          }
        }
      }
      uVar16 = uVar16 + 1;
      uVar7 = uVar1;
    } while ((int)uVar16 <= iVar9);
    if ((0.0 <= fVar19) && (fVar19 <= 16.0)) {
      *param_1 = local_2c;
      param_1[2] = iVar17;
      param_1[1] = iStack_28;
      __security_check_cookie(uVar8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -1;
  __security_check_cookie(uVar8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005a6a00 @ 005a6a00  kind=gamemisc  attributed-by=none  size=104 */

void FUN_005a6a00(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  return;
}


/* FUN_005a6a70 @ 005a6a70  kind=gamemisc  attributed-by=none  size=63 */

void FUN_005a6a70(uint *param_1)

{
  uint uVar1;
  int *in_ECX;
  
  uVar1 = *param_1;
  *in_ECX = uVar1 << 0x10;
  in_ECX[1] = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  uVar1 = param_1[1];
  in_ECX[2] = uVar1 << 0x10;
  in_ECX[3] = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  uVar1 = param_1[2];
  in_ECX[4] = uVar1 << 0x10;
  in_ECX[5] = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  return;
}


/* FUN_005a6e60 @ 005a6e60  kind=gamemisc  attributed-by=none  size=521 */

void FUN_005a6e60(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x4ec4ec2 < (uint)in_ECX[1]) {
    if ((void *)param_5[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_5[4]);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(param_5);
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_005a706a;
      }
LAB_005a6fc1:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_005a6fc1;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_005a706a:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_005a7a40 @ 005a7a40  kind=gamemisc  attributed-by=none  size=46 */

void FUN_005a7a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = *param_4;
  in_ECX[4] = param_4[1];
  in_ECX[5] = param_4[2];
  return;
}


/* FUN_005a7bd0 @ 005a7bd0  kind=gamemisc  attributed-by=none  size=26 */

void FUN_005a7bd0(void *param_1)

{
  if (*(void **)((int)param_1 + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_005a7c90 @ 005a7c90  kind=gamemisc  attributed-by=none  size=445 */

void FUN_005a7c90(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_34;
  int local_2c [10];
  
  local_2c[9] = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0042f040(local_2c,param_1 + 0x1428);
  FUN_0042f040(local_2c + 3,param_1 + 0x1440);
  puVar2 = *(undefined4 **)(param_1 + 0x1460);
  piVar1 = (int *)(param_1 + 0x1460);
  pvVar3 = (void *)*puVar2;
  *puVar2 = puVar2;
  *(int *)(*piVar1 + 4) = *piVar1;
  *(undefined4 *)(param_1 + 0x1464) = 0;
  if (pvVar3 != (void *)*piVar1) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  local_2c[7] = local_2c[4];
  iVar5 = local_2c[3];
  iVar7 = local_2c[5];
  if (*(int *)(param_1 + 0x1408) != *(int *)(param_1 + 0x140c)) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x1408) + 0x10);
    local_2c[7] = puVar2[1];
    iVar5 = *puVar2;
    iVar7 = puVar2[2];
  }
  local_34 = local_2c[7];
  iVar6 = *(int *)*piVar1;
  local_2c[8] = iVar7;
  local_2c[6] = iVar5;
  iVar4 = FUN_005a6b60(iVar6,*(undefined4 *)(iVar6 + 4),local_2c + 6);
  if (*(int *)(param_1 + 0x1464) == 0xccccccb) {
LAB_005a7d65:
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(param_1 + 0x1464) = *(int *)(param_1 + 0x1464) + 1;
  *(int *)(iVar6 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  iVar6 = 0;
  do {
    iVar4 = 0;
    while (*(int *)((int)local_2c + iVar4 + 0x18) == *(int *)((int)local_2c + iVar4)) {
      iVar4 = iVar4 + 4;
      if (0xb < iVar4) goto LAB_005a7d95;
    }
    if (*(int *)(param_1 + 0x1410) < iVar6) {
LAB_005a7d95:
      __security_check_cookie(local_2c[9] ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar6 = iVar6 + 1;
    iVar5 = FUN_005a9da0(iVar5,local_34,iVar7);
    if (iVar5 == 0) goto LAB_005a7d95;
    iVar7 = *(undefined4 *)(iVar5 + 0x14);
    local_2c[3] = *(undefined4 *)(iVar5 + 0xc);
    local_2c[4] = *(undefined4 *)(iVar5 + 0x10);
    local_2c[5] = iVar7;
    iVar4 = 0;
    while (*(int *)((int)local_2c + iVar4 + 0x18) == *(int *)((int)local_2c + iVar4 + 0xc)) {
      iVar4 = iVar4 + 4;
      if (0xb < iVar4) {
        __security_check_cookie(local_2c[9] ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    iVar4 = *(int *)*piVar1;
    local_2c[8] = iVar7;
    local_2c[6] = *(undefined4 *)(iVar5 + 0xc);
    local_2c[7] = *(undefined4 *)(iVar5 + 0x10);
    iVar5 = FUN_005a6b60(iVar4,*(undefined4 *)(iVar4 + 4),local_2c + 3);
    if (*(int *)(param_1 + 0x1464) == 0xccccccb) goto LAB_005a7d65;
    *(int *)(param_1 + 0x1464) = *(int *)(param_1 + 0x1464) + 1;
    *(int *)(iVar4 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    local_34 = local_2c[7];
    iVar5 = local_2c[6];
  } while( true );
}


/* FUN_005a9ca0 @ 005a9ca0  kind=gamemisc  attributed-by=none  size=133 */

void FUN_005a9ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = (undefined4 *)0x0;
  local_c = 0;
  local_8 = 0;
  FUN_0040d9d0(3);
  puVar2 = local_10;
  *local_10 = param_1;
  local_10[1] = param_2;
  local_10[2] = param_3;
  iVar1 = *(int *)(in_ECX + 0x1414);
  iVar3 = FUN_005a7c10(&local_10);
  if (iVar3 != iVar1) {
    FUN_005a78a0(puVar2,local_c,*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14));
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_10);
}


/* FUN_005a9d40 @ 005a9d40  kind=gamemisc  attributed-by=none  size=89 */

int FUN_005a9d40(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (int)*param_1 >> 0x1f;
  iVar3 = (*param_1 ^ uVar1) - uVar1;
  uVar1 = (int)param_1[1] >> 0x1f;
  iVar4 = (param_1[1] ^ uVar1) - uVar1;
  uVar1 = (int)param_1[2] >> 0x1f;
  iVar2 = (param_1[2] ^ uVar1) - uVar1;
  if (iVar4 < iVar3) {
    return (iVar3 * 10 + iVar4 * 4 + iVar2 * 10) * 2;
  }
  return (iVar3 * 4 + iVar4 * 10 + iVar2 * 10) * 2;
}


/* FUN_005a9e50 @ 005a9e50  kind=gamemisc  attributed-by=none  size=304 */

void FUN_005a9e50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [8];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f35c8;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_14 = in_ECX;
  FUN_0040d9d0(3);
  *local_28 = param_1;
  local_28[1] = param_2;
  local_28[2] = param_3;
  local_8 = 0;
  puVar4 = (undefined4 *)FUN_005a7a70(&local_28);
  *puVar4 = *param_4;
  puVar4[1] = param_4[1];
  puVar4[2] = param_4[2];
  puVar4[3] = param_4[3];
  puVar4[4] = param_4[4];
  puVar4[5] = param_4[5];
  FUN_005a7700(local_1c,0,&local_28,DAT_0076dda2);
  puVar4 = local_28;
  iVar1 = *(int *)(in_ECX + 0x140c);
  if ((*(int *)(in_ECX + 0x1408) != iVar1) &&
     (*(int *)(*(int *)(in_ECX + 0x1408) + 0x20) <= (int)param_4[1])) goto LAB_005a9f62;
  param_1 = FUN_005a7c10(&local_28);
  if (param_1 == iVar1) {
LAB_005a9f51:
    param_1 = iVar1;
  }
  else {
    cVar2 = FUN_005a78a0(puVar4,local_24,*(undefined4 *)(param_1 + 0x10),
                         *(undefined4 *)(param_1 + 0x14),uVar3);
    if (cVar2 != '\0') goto LAB_005a9f51;
  }
  *(int *)(local_14 + 0x1408) = param_1;
LAB_005a9f62:
  if (puVar4 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar4);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_005a9f90 @ 005a9f90  kind=gamemisc  attributed-by=none  size=2834 */

/* WARNING: Removing unreachable block (ram,0x005aa8d9) */
/* WARNING: Removing unreachable block (ram,0x005aa43e) */
/* WARNING: Removing unreachable block (ram,0x005aa381) */
/* WARNING: Removing unreachable block (ram,0x005aa3ad) */
/* WARNING: Removing unreachable block (ram,0x005aa46d) */
/* WARNING: Removing unreachable block (ram,0x005aa98f) */

void FUN_005a9f90(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong lVar23;
  uint local_38 [8];
  int local_18;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0042ef10();
  puVar4 = (undefined4 *)FUN_0042f040(&local_14,param_1 + 0x1428);
  *(undefined4 *)(param_1 + 0x141c) = *puVar4;
  *(undefined4 *)(param_1 + 0x1420) = puVar4[1];
  *(undefined4 *)(param_1 + 0x1424) = puVar4[2];
  FUN_0042f040(local_38 + 3,param_1 + 0x1428);
  *(undefined4 *)(param_1 + 0x145c) = 0;
  piVar5 = (int *)FUN_0042f040(&local_14,param_1 + 0x1440);
  uVar14 = (int)(local_38[3] - *piVar5) >> 0x1f;
  iVar17 = (local_38[3] - *piVar5 ^ uVar14) - uVar14;
  uVar14 = (int)(local_38[4] - piVar5[1]) >> 0x1f;
  iVar19 = (local_38[4] - piVar5[1] ^ uVar14) - uVar14;
  uVar14 = (int)(local_38[5] - piVar5[2]) >> 0x1f;
  if (iVar19 < iVar17) {
    iVar17 = iVar17 * 10 + iVar19 * 4;
  }
  else {
    iVar17 = iVar17 * 4 + iVar19 * 10;
  }
  local_38[7] = (uint)(float)(int)((iVar17 + ((local_38[5] - piVar5[2] ^ uVar14) - uVar14) * 10) * 2
                                  );
  local_38[6] = 1;
  local_c = (float)local_38[5];
  local_18 = local_38[7];
  FUN_005a9e50(local_38[3],local_38[4],local_38[5],local_38 + 6);
  FUN_0067e480();
  local_14 = 0x3f0000003f000000;
  local_c = *(float *)(param_1 + 0x88) * 0.5;
  iVar17 = 0;
  do {
    uVar21 = FUN_0068d946();
    local_38[iVar17 * 2] = (uint)uVar21;
    local_38[iVar17 * 2 + 1] = (uint)((ulonglong)uVar21 >> 0x20);
    iVar17 = iVar17 + 1;
  } while (iVar17 < 3);
  puVar6 = (uint *)FUN_0042f040(&local_14,param_1 + 0x1428);
  uVar14 = *puVar6;
  uVar12 = puVar6[1];
  uVar1 = puVar6[2];
  uVar9 = local_38[0] + uVar14 * 0x10000;
  iVar10 = local_38[1] + (((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10) +
           (uint)CARRY4(local_38[0],uVar14 * 0x10000);
  uVar18 = local_38[2] + uVar12 * 0x10000;
  iVar11 = local_38[3] + (((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10) +
           (uint)CARRY4(local_38[2],uVar12 * 0x10000);
  uVar12 = local_38[4] + uVar1 * 0x10000;
  iVar19 = local_38[5] + (((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10) +
           (uint)CARRY4(local_38[4],uVar1 * 0x10000);
  iVar17 = __alldiv(uVar9,iVar10,0x10000,0);
  iVar17 = (int)((iVar17 >> 0x1f & 7U) + iVar17) >> 3;
  iVar7 = __alldiv(uVar18,iVar11,0x10000,0);
  uVar14 = iVar17 - 1;
  iVar17 = iVar17 + 1;
  iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  if ((int)uVar14 <= iVar17) {
    uVar1 = iVar7 - 1;
    uVar3 = uVar1;
    do {
      for (; (int)uVar3 <= iVar7 + 1; uVar3 = uVar3 + 1) {
        if ((((-1 < (int)uVar14) && (-1 < (int)uVar3)) && ((int)uVar14 < 0x200000)) &&
           (((int)uVar3 < 0x200000 &&
            (iVar8 = FUN_00434d10((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5,
                                  (int)(uVar3 + ((int)uVar3 >> 0x1f & 0x1fU)) >> 5), iVar8 != 0))))
        {
          uVar15 = uVar3 & 0x8000001f;
          if ((int)uVar15 < 0) {
            uVar15 = (uVar15 - 1 | 0xffffffe0) + 1;
          }
          uVar13 = uVar14 & 0x8000001f;
          if ((int)uVar13 < 0) {
            uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
          }
          piVar5 = (int *)(*(int *)(iVar8 + 0xac) + (uVar15 * 0x20 + uVar13) * 8);
          if ((piVar5 != (int *)0x0) && (piVar20 = *(int **)*piVar5, piVar20 != (int *)*piVar5)) {
            do {
              piVar2 = (int *)piVar20[2];
              iVar8 = *piVar2;
              if (((iVar8 != 7) && ((iVar8 != 6 && (iVar8 != 9)))) &&
                 (((iVar8 != 1 && ((((iVar8 != 8 && (iVar8 != 2)) && (iVar8 != 3)) && (iVar8 != 5)))
                   ) || ((char)piVar2[0xc] != '\0')))) {
                local_c = (float)piVar2[0xb];
                local_14 = *(undefined8 *)(piVar2 + 9);
                lVar22 = FUN_0068d946();
                lVar23 = FUN_0068d946();
                uVar15 = piVar2[2];
                if ((CONCAT44((piVar2[3] - (int)((ulonglong)lVar22 >> 0x20)) -
                              (uint)(uVar15 < (uint)lVar22),uVar15 - (uint)lVar22) <=
                     lVar23 + CONCAT44(iVar10,uVar9)) &&
                   (CONCAT44((iVar10 - (int)((ulonglong)lVar23 >> 0x20)) -
                             (uint)(uVar9 < (uint)lVar23),uVar9 - (uint)lVar23) <
                    lVar22 + *(longlong *)(piVar2 + 2))) {
                  lVar22 = FUN_0068d946();
                  lVar23 = FUN_0068d946();
                  uVar15 = piVar2[4];
                  if ((CONCAT44((piVar2[5] - (int)((ulonglong)lVar22 >> 0x20)) -
                                (uint)(uVar15 < (uint)lVar22),uVar15 - (uint)lVar22) <=
                       lVar23 + CONCAT44(iVar11,uVar18)) &&
                     (CONCAT44((iVar11 - (int)((ulonglong)lVar23 >> 0x20)) -
                               (uint)(uVar18 < (uint)lVar23),uVar18 - (uint)lVar23) <
                      lVar22 + *(longlong *)(piVar2 + 4))) {
                    lVar23 = FUN_0068d946();
                    lVar22 = lVar23 + CONCAT44(iVar19,uVar12);
                    iVar8 = (int)((ulonglong)lVar22 >> 0x20);
                    if ((piVar2[7] <= iVar8) &&
                       ((piVar2[7] < iVar8 || ((uint)piVar2[6] <= (uint)lVar22)))) {
                      uVar21 = FUN_0068d946();
                      iVar16 = (int)((ulonglong)uVar21 >> 0x20) + piVar2[7] +
                               (uint)CARRY4((uint)uVar21,piVar2[6]);
                      iVar8 = (iVar19 - (int)((ulonglong)lVar23 >> 0x20)) -
                              (uint)(uVar12 < (uint)lVar23);
                      if ((iVar8 <= iVar16) &&
                         ((iVar8 < iVar16 || (uVar12 - (uint)lVar23 < (uint)uVar21 + piVar2[6])))) {
                        FUN_0058e7d0(local_38 + 4,0,piVar20 + 2,DAT_0076dda2);
                      }
                    }
                  }
                }
              }
              piVar20 = (int *)*piVar20;
            } while (piVar20 != (int *)*piVar5);
          }
        }
      }
      uVar14 = uVar14 + 1;
      uVar3 = uVar1;
    } while ((int)uVar14 <= iVar17);
  }
  local_14 = 0x3f0000003f000000;
  iVar17 = 0;
  local_c = *(float *)(param_1 + 0x88) * 0.5;
  do {
    uVar21 = FUN_0068d946();
    local_38[iVar17 * 2] = (uint)uVar21;
    local_38[iVar17 * 2 + 1] = (uint)((ulonglong)uVar21 >> 0x20);
    iVar17 = iVar17 + 1;
  } while (iVar17 < 3);
  puVar6 = (uint *)FUN_0042f040(&local_14,param_1 + 0x1440);
  uVar14 = *puVar6;
  uVar12 = puVar6[1];
  uVar1 = puVar6[2];
  uVar9 = local_38[0] + uVar14 * 0x10000;
  iVar10 = local_38[1] + (((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10) +
           (uint)CARRY4(local_38[0],uVar14 * 0x10000);
  uVar18 = local_38[2] + uVar12 * 0x10000;
  iVar11 = local_38[3] + (((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10) +
           (uint)CARRY4(local_38[2],uVar12 * 0x10000);
  uVar12 = local_38[4] + uVar1 * 0x10000;
  iVar19 = local_38[5] + (((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10) +
           (uint)CARRY4(local_38[4],uVar1 * 0x10000);
  iVar17 = __alldiv(uVar9,iVar10,0x10000,0);
  iVar17 = (int)((iVar17 >> 0x1f & 7U) + iVar17) >> 3;
  iVar7 = __alldiv(uVar18,iVar11,0x10000,0);
  uVar14 = iVar17 - 1;
  iVar17 = iVar17 + 1;
  iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  if ((int)uVar14 <= iVar17) {
    uVar1 = iVar7 - 1;
    uVar3 = uVar1;
    do {
      for (; (int)uVar3 <= iVar7 + 1; uVar3 = uVar3 + 1) {
        if ((((-1 < (int)uVar14) && (-1 < (int)uVar3)) && ((int)uVar14 < 0x200000)) &&
           ((int)uVar3 < 0x200000)) {
          iVar8 = ((int)uVar3 >> 0x1f & 0x1fU) + uVar3;
          uVar13 = iVar8 >> 5;
          iVar16 = ((int)uVar14 >> 0x1f & 0x1fU) + uVar14;
          uVar15 = iVar16 >> 5;
          if (((-1 < (int)uVar15) && (-1 < (int)uVar13)) &&
             (((int)uVar15 < 0x10000 && ((int)uVar13 < 0x10000)))) {
            iVar16 = (int)(uVar15 + (iVar16 >> 0x1f & 0x3fU)) >> 6;
            iVar8 = (int)((iVar8 >> 0x1f & 0x3fU) + uVar13) >> 6;
            if (((-1 < iVar16) && (-1 < iVar8)) &&
               ((iVar16 < 0x400 &&
                ((iVar8 < 0x400 &&
                 (iVar8 = *(int *)(in_ECX + 0xbc + (iVar16 * 0x400 + iVar8) * 4), iVar8 != 0)))))) {
              uVar15 = uVar15 & 0x8000003f;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
              }
              uVar13 = uVar13 & 0x8000003f;
              if ((int)uVar13 < 0) {
                uVar13 = (uVar13 - 1 | 0xffffffc0) + 1;
              }
              iVar8 = *(int *)(iVar8 + 0x10018 + (uVar15 * 0x40 + uVar13) * 4);
              if (iVar8 != 0) {
                uVar15 = uVar3 & 0x8000001f;
                if ((int)uVar15 < 0) {
                  uVar15 = (uVar15 - 1 | 0xffffffe0) + 1;
                }
                uVar13 = uVar14 & 0x8000001f;
                if ((int)uVar13 < 0) {
                  uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
                }
                piVar5 = (int *)(*(int *)(iVar8 + 0xac) + (uVar15 * 0x20 + uVar13) * 8);
                if ((piVar5 != (int *)0x0) &&
                   (piVar20 = *(int **)*piVar5, piVar20 != (int *)*piVar5)) {
                  do {
                    piVar2 = (int *)piVar20[2];
                    iVar8 = *piVar2;
                    if (((iVar8 != 7) && ((iVar8 != 6 && (iVar8 != 9)))) &&
                       (((iVar8 != 1 &&
                         ((((iVar8 != 8 && (iVar8 != 2)) && (iVar8 != 3)) && (iVar8 != 5)))) ||
                        ((char)piVar2[0xc] != '\0')))) {
                      local_c = (float)piVar2[0xb];
                      local_14 = *(undefined8 *)(piVar2 + 9);
                      uVar21 = FUN_0068d946();
                      iVar8 = (int)((ulonglong)uVar21 >> 0x20);
                      uVar15 = (uint)uVar21;
                      lVar22 = FUN_0068d946();
                      if (CONCAT44((piVar2[3] - iVar8) - (uint)((uint)piVar2[2] < uVar15),
                                   piVar2[2] - uVar15) <= lVar22 + CONCAT44(iVar10,uVar9)) {
                        iVar16 = (iVar10 - (int)((ulonglong)lVar22 >> 0x20)) -
                                 (uint)(uVar9 < (uint)lVar22);
                        iVar8 = iVar8 + piVar2[3] + (uint)CARRY4(uVar15,piVar2[2]);
                        if ((iVar16 <= iVar8) &&
                           ((iVar16 < iVar8 || (uVar9 - (uint)lVar22 < uVar15 + piVar2[2])))) {
                          uVar21 = FUN_0068d946();
                          iVar8 = (int)((ulonglong)uVar21 >> 0x20);
                          uVar15 = (uint)uVar21;
                          lVar22 = FUN_0068d946();
                          if (CONCAT44((piVar2[5] - iVar8) - (uint)((uint)piVar2[4] < uVar15),
                                       piVar2[4] - uVar15) <= lVar22 + CONCAT44(iVar11,uVar18)) {
                            iVar16 = (iVar11 - (int)((ulonglong)lVar22 >> 0x20)) -
                                     (uint)(uVar18 < (uint)lVar22);
                            iVar8 = iVar8 + piVar2[5] + (uint)CARRY4(uVar15,piVar2[4]);
                            if ((iVar16 <= iVar8) &&
                               ((iVar16 < iVar8 || (uVar18 - (uint)lVar22 < uVar15 + piVar2[4])))) {
                              lVar23 = FUN_0068d946();
                              lVar22 = lVar23 + CONCAT44(iVar19,uVar12);
                              iVar8 = (int)((ulonglong)lVar22 >> 0x20);
                              if ((piVar2[7] <= iVar8) &&
                                 ((piVar2[7] < iVar8 || ((uint)piVar2[6] <= (uint)lVar22)))) {
                                uVar21 = FUN_0068d946();
                                iVar16 = (int)((ulonglong)uVar21 >> 0x20) + piVar2[7] +
                                         (uint)CARRY4((uint)uVar21,piVar2[6]);
                                iVar8 = (iVar19 - (int)((ulonglong)lVar23 >> 0x20)) -
                                        (uint)(uVar12 < (uint)lVar23);
                                if ((iVar8 <= iVar16) &&
                                   ((iVar8 < iVar16 ||
                                    (uVar12 - (uint)lVar23 < (uint)uVar21 + piVar2[6])))) {
                                  FUN_0058e7d0(local_38 + 4,0,piVar20 + 2,DAT_0076dda2);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    piVar20 = (int *)*piVar20;
                  } while (piVar20 != (int *)*piVar5);
                }
              }
            }
          }
        }
      }
      uVar14 = uVar14 + 1;
      uVar3 = uVar1;
    } while ((int)uVar14 <= iVar17);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005aaab0 @ 005aaab0  kind=gamemisc  attributed-by=none  size=10330 */

/* WARNING: Removing unreachable block (ram,0x005abcd8) */
/* WARNING: Removing unreachable block (ram,0x005ab7ba) */
/* WARNING: Removing unreachable block (ram,0x005ab8ae) */
/* WARNING: Removing unreachable block (ram,0x005abb81) */
/* WARNING: Removing unreachable block (ram,0x005abddb) */
/* WARNING: Removing unreachable block (ram,0x005abf27) */
/* WARNING: Removing unreachable block (ram,0x005ac170) */
/* WARNING: Removing unreachable block (ram,0x005ac26b) */

void FUN_005aaab0(int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  undefined *puVar7;
  float fVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 **ppuVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  int *piVar19;
  char cVar20;
  int *piVar21;
  int iVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  undefined8 uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  undefined8 local_220;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  undefined8 local_208;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  undefined8 local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined4 *local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  undefined4 *local_188;
  float local_184;
  int local_180;
  int local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_144;
  uint local_140;
  uint local_13c;
  int *local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  float local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  int local_f8;
  uint local_f4;
  int local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  int local_dc;
  float local_d8;
  uint local_d4;
  char local_cd;
  uint local_cc;
  int *local_c8;
  char local_c1;
  uint local_c0;
  uint local_bc;
  float local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  char local_a1;
  uint local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  char local_8e;
  byte local_8d;
  uint local_8c;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  int local_78;
  uint local_74 [3];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  undefined8 local_2c;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_94 = param_1;
  if (*(uint *)(param_1 + 0x1410) != 0) {
    uVar27 = *(uint *)(param_1 + 0x1418);
    if ((uVar27 < 0x1f5) && (*(uint *)(param_1 + 0x1410) < 0x4e21)) {
      local_f8 = param_1 + 0x1440;
      FUN_0042f040(&local_2c,local_f8);
      if (uVar27 != 0) {
        iVar22 = -1;
        piVar12 = (int *)**(int **)(param_1 + 0x1414);
        local_c8 = (int *)0x0;
        local_104 = (uint)piVar12;
        if (piVar12 != *(int **)(param_1 + 0x1414)) {
          do {
            uVar27 = local_104;
            puVar1 = *(undefined4 **)(local_104 + 0x10);
            piVar6 = (int *)FUN_005a9da0(*puVar1,puVar1[1],puVar1[2]);
            if ((piVar6 != (int *)0x0) && ((local_c8 == (int *)0x0 || (piVar6[2] < iVar22)))) {
              iVar22 = piVar6[2];
              piVar12 = (int *)uVar27;
              local_c8 = piVar6;
            }
            FUN_005c3ea0();
          } while (local_104 != *(uint *)(local_94 + 0x1414));
        }
        iVar22 = local_94;
        puVar24 = *(uint **)((int)piVar12 + 0x10);
        local_a0 = puVar24[1];
        uVar27 = puVar24[2];
        local_a8 = *puVar24;
        local_9c = uVar27;
        local_74[0] = local_a8;
        local_74[1] = local_a0;
        local_74[2] = uVar27;
        FUN_0043f470(&local_138,piVar12);
        iVar16 = 0;
        do {
          if (*(int *)((int)local_74 + iVar16) != *(int *)((int)&local_2c + iVar16)) {
            local_34 = ((int)local_a8 >> 0x1f) << 0x10 | local_a8 >> 0x10;
            local_38 = local_a8 << 0x10;
            local_30 = local_a0 << 0x10;
            local_58 = (double)*(float *)(iVar22 + 0x88) * 0.5 * 65536.0;
            local_24 = (float)(((int)uVar27 >> 0x1f) << 0x10 | uVar27 >> 0x10);
            local_2c = CONCAT44(uVar27 << 0x10,((int)local_a0 >> 0x1f) << 0x10 | local_a0 >> 0x10);
            piVar12 = &local_38;
            puVar24 = &local_50;
            uVar31 = FUN_0068d946(puVar24,piVar12);
            local_68 = FUN_0068d946();
            local_58 = (double)uVar31;
            local_60 = local_68;
            FUN_0042c800(puVar24,piVar12);
            local_2c = 0;
            local_24 = 0.01;
            FUN_0042c460(&local_2c);
            local_24 = *(float *)(iVar22 + 0x88) * 0.5;
            local_2c = CONCAT44(*(float *)(iVar22 + 0x84) * 0.5,*(float *)(iVar22 + 0x80) * 0.5);
            FUN_0042c460(&local_2c);
            local_12c = local_50 - (uint)local_68;
            local_130 = (local_4c - local_68._4_4_) - (uint)(local_50 < (uint)local_68);
            local_38 = local_8c + local_12c;
            local_34 = local_88 + local_130 + (uint)CARRY4(local_8c,local_12c);
            local_30 = local_84 + (local_48 - (uint)local_60);
            local_24 = (float)(local_78 +
                               ((local_3c - local_58._4_4_) - (uint)(local_40 < (uint)local_58)) +
                              (uint)CARRY4(local_7c,local_40 - (uint)local_58));
            local_2c = CONCAT44(local_7c + (local_40 - (uint)local_58),
                                local_80 +
                                ((local_44 - local_60._4_4_) - (uint)(local_48 < (uint)local_60)) +
                                (uint)CARRY4(local_84,local_48 - (uint)local_60));
            FUN_0042f040((int)&local_60 + 4,&local_38);
            local_24 = *(float *)(local_94 + 0x88) * 0.5;
            local_2c = CONCAT44(*(float *)(local_94 + 0x84) * 0.5,*(float *)(local_94 + 0x80) * 0.5)
            ;
            FUN_0042c460(&local_2c);
            local_20 = local_50 + local_8c;
            local_1c = local_4c + local_88 + (uint)CARRY4(local_50,local_8c);
            local_18 = local_48 + local_84;
            local_14 = local_44 + local_80 + (uint)CARRY4(local_48,local_84);
            local_10 = local_40 + local_7c;
            local_c = local_3c + local_78 + (uint)CARRY4(local_40,local_7c);
            FUN_0042f040(&local_2c,&local_20);
            local_d8 = (float)(local_58._4_4_ + -1);
            local_b8 = (float)((int)local_24 + 1);
            uVar23 = local_60._4_4_ - 1;
            uVar25 = (uint)local_58 - 1;
            uVar27 = (int)(float)local_2c + 1;
            local_d4 = (int)local_2c._4_4_ + 1;
            local_13c = (int)(uVar23 + ((int)uVar23 >> 0x1f & 7U)) >> 3;
            local_12c = (int)(uVar25 + ((int)uVar25 >> 0x1f & 7U)) >> 3;
            local_17c = (int)(uVar27 + ((int)uVar27 >> 0x1f & 7U)) >> 3;
            local_180 = (int)(local_d4 + ((int)local_d4 >> 0x1f & 7U)) >> 3;
            local_150 = local_150 & 0xffffff00;
            local_158 = local_158 & 0xffffff00;
            local_160 = local_160 & 0xffffff00;
            local_15c = local_15c & 0xffffff00;
            local_8e = '\0';
            local_e8 = local_e8 & 0xffffff00;
            local_f4 = local_f4 & 0xffffff00;
            local_108 = local_108 & 0xffffff00;
            local_e4 = local_e4 & 0xffffff00;
            local_98 = local_98 & 0xffffff00;
            local_168 = local_168 & 0xffffff00;
            local_178 = local_178 & 0xffffff00;
            local_154 = local_154 & 0xffffff00;
            local_164 = local_164 & 0xffffff00;
            local_140 = local_140 & 0xffffff00;
            local_144 = local_144 & 0xffffff00;
            local_14c = local_14c & 0xffffff00;
            local_170 = local_170 & 0xffffff00;
            local_10c = local_10c & 0xffffff00;
            local_16c = local_16c & 0xffffff00;
            local_174 = local_174 & 0xffffff00;
            local_104 = local_104 & 0xffffff00;
            local_118 = local_118 & 0xffffff00;
            local_120 = local_120 & 0xffffff00;
            local_110 = local_110 & 0xffffff00;
            local_114 = local_114 & 0xffffff00;
            local_134 = local_134 & 0xffffff00;
            local_bc = uVar23;
            local_b0 = uVar25;
            local_ac = uVar27;
            uVar31 = FUN_0068d946();
            iVar22 = FUN_0042f860(local_50,local_4c,local_48,local_44,local_40 - (uint)uVar31,
                                  (local_3c - (int)((ulonglong)uVar31 >> 0x20)) -
                                  (uint)(local_40 < (uint)uVar31),0);
            local_8d = *(byte *)(iVar22 + 3) >> 1 & 1;
            local_c0 = 1;
            uVar17 = local_d4;
            if ((int)uVar23 <= (int)uVar27) {
              do {
                fVar8 = local_d8;
                uVar28 = uVar25;
                if ((int)uVar25 <= (int)uVar17) {
                  do {
                    fVar26 = fVar8;
                    if ((int)fVar8 <= (int)local_b8) {
                      do {
                        if ((((((int)uVar23 <= (int)local_bc) || ((int)local_ac <= (int)uVar23)) ||
                             ((int)uVar28 <= (int)uVar25)) ||
                            (((int)uVar17 <= (int)uVar28 || ((int)fVar26 <= (int)fVar8)))) ||
                           ((int)local_b8 <= (int)fVar26)) {
                          if ((((int)uVar23 < 0) || ((int)uVar28 < 0)) ||
                             ((0xffffff < (int)uVar23 || (0xffffff < (int)uVar28)))) {
LAB_005ab0ca:
                            puVar7 = &DAT_0076ddac;
                          }
                          else {
                            iVar22 = FUN_00434d10((int)(uVar23 + ((int)uVar23 >> 0x1f & 0xffU)) >> 8
                                                  ,(int)(uVar28 + ((int)uVar28 >> 0x1f & 0xffU)) >>
                                                   8);
                            if (iVar22 == 0) goto LAB_005ab0ca;
                            uVar27 = uVar28 & 0x800000ff;
                            if ((int)uVar27 < 0) {
                              uVar27 = (uVar27 - 1 | 0xffffff00) + 1;
                            }
                            uVar17 = uVar23 & 0x800000ff;
                            if ((int)uVar17 < 0) {
                              uVar17 = (uVar17 - 1 | 0xffffff00) + 1;
                            }
                            iVar22 = (uVar27 * 0x100 + uVar17) * 0x20 + *(int *)(iVar22 + 0xa8);
                            if ((iVar22 == 0) ||
                               (iVar16 = *(int *)(iVar22 + 0x10), (int)fVar26 < iVar16))
                            goto LAB_005ab0ca;
                            if ((int)fVar26 < *(int *)(iVar22 + 0x1c) + iVar16) {
                              puVar7 = (undefined *)FUN_0042f730((int)fVar26 - iVar16);
                              if ((((puVar7[3] & 0x1f) == 0) && ((int)fVar26 < 1)) &&
                                 ((puVar7[3] & 0x40) == 0)) {
                                puVar7 = &DAT_0076dda4;
                              }
                            }
                            else {
                              puVar7 = &DAT_0076dda4;
                              if (0 < (int)fVar26) {
                                puVar7 = &DAT_0076dda8;
                              }
                            }
                          }
                          fVar8 = local_d8;
                          uVar17 = local_d4;
                          uVar25 = local_b0;
                          if (((puVar7[3] & 0x1f) != 0) && ((puVar7[3] & 0x1f) != 2)) {
                            if ((uVar23 == local_bc) &&
                               ((uVar28 == local_b0 &&
                                (local_10c = local_10c & 0xff, fVar26 == local_d8)))) {
                              local_10c = local_c0;
                            }
                            if (((uVar23 == local_ac) && (uVar28 == local_b0)) &&
                               (local_16c = local_16c & 0xff, fVar26 == local_d8)) {
                              local_16c = local_c0;
                            }
                            if (((uVar23 == local_bc) && (uVar28 == local_d4)) &&
                               (local_174 = local_174 & 0xff, fVar26 == local_d8)) {
                              local_174 = local_c0;
                            }
                            if (((uVar23 == local_ac) && (uVar28 == local_d4)) &&
                               (local_104 = local_104 & 0xff, fVar26 == local_d8)) {
                              local_104 = local_c0;
                            }
                            if ((((uVar23 == local_bc) && (uVar28 == local_b0)) &&
                                ((int)local_d8 < (int)fVar26)) &&
                               (local_118 = local_118 & 0xff, (int)fVar26 < (int)local_b8)) {
                              local_118 = local_c0;
                            }
                            if (((uVar23 == local_ac) && (uVar28 == local_b0)) &&
                               (((int)local_d8 < (int)fVar26 &&
                                (local_120 = local_120 & 0xff, (int)fVar26 < (int)local_b8)))) {
                              local_120 = local_c0;
                            }
                            if (((uVar23 == local_bc) && (uVar28 == local_d4)) &&
                               (((int)local_d8 < (int)fVar26 &&
                                (local_110 = local_110 & 0xff, (int)fVar26 < (int)local_b8)))) {
                              local_110 = local_c0;
                            }
                            if ((((uVar23 == local_ac) && (uVar28 == local_d4)) &&
                                ((int)local_d8 < (int)fVar26)) &&
                               (local_114 = local_114 & 0xff, (int)fVar26 < (int)local_b8)) {
                              local_114 = local_c0;
                            }
                            if ((((int)local_bc < (int)uVar23) && ((int)uVar23 < (int)local_ac)) &&
                               ((int)local_b0 < (int)uVar28)) {
                              if (((int)uVar28 < (int)local_d4) &&
                                 (local_98 = local_98 & 0xff, fVar26 == local_d8)) {
                                local_98 = local_c0;
                              }
                              if ((((int)local_b0 < (int)uVar28) && ((int)uVar28 < (int)local_d4))
                                 && (local_134 = local_134 & 0xff, fVar26 == local_b8)) {
                                local_134 = local_c0;
                              }
                            }
                            if (((uVar23 == local_bc) && ((int)local_b0 < (int)uVar28)) &&
                               (((int)uVar28 < (int)local_d4 &&
                                (local_168 = local_168 & 0xff, fVar26 == local_d8)))) {
                              local_168 = local_c0;
                            }
                            if (((uVar23 == local_ac) && ((int)local_b0 < (int)uVar28)) &&
                               (((int)uVar28 < (int)local_d4 &&
                                (local_178 = local_178 & 0xff, fVar26 == local_d8)))) {
                              local_178 = local_c0;
                            }
                            if ((((uVar28 == local_b0) && ((int)local_bc < (int)uVar23)) &&
                                ((int)uVar23 < (int)local_ac)) &&
                               (local_154 = local_154 & 0xff, fVar26 == local_d8)) {
                              local_154 = local_c0;
                            }
                            if (((uVar28 == local_d4) && ((int)local_bc < (int)uVar23)) &&
                               (((int)uVar23 < (int)local_ac &&
                                (local_164 = local_164 & 0xff, fVar26 == local_d8)))) {
                              local_164 = local_c0;
                            }
                            if (((uVar23 == local_bc) && ((int)local_b0 < (int)uVar28)) &&
                               (((int)uVar28 < (int)local_d4 &&
                                (local_140 = local_140 & 0xff, fVar26 == local_b8)))) {
                              local_140 = local_c0;
                            }
                            if ((((uVar23 == local_ac) && ((int)local_b0 < (int)uVar28)) &&
                                ((int)uVar28 < (int)local_d4)) &&
                               (local_144 = local_144 & 0xff, fVar26 == local_b8)) {
                              local_144 = local_c0;
                            }
                            if (((uVar28 == local_b0) && ((int)local_bc < (int)uVar23)) &&
                               (((int)uVar23 < (int)local_ac &&
                                (local_14c = local_14c & 0xff, fVar26 == local_b8)))) {
                              local_14c = local_c0;
                            }
                            if (((uVar28 == local_d4) && ((int)local_bc < (int)uVar23)) &&
                               (((int)uVar23 < (int)local_ac &&
                                (local_170 = local_170 & 0xff, fVar26 == local_d8)))) {
                              local_170 = local_c0;
                            }
                            if ((((uVar23 == local_bc) && ((int)local_b0 < (int)uVar28)) &&
                                ((int)uVar28 < (int)local_d4)) &&
                               (((int)local_d8 < (int)fVar26 &&
                                (local_e8 = local_e8 & 0xff, (int)fVar26 < (int)local_b8)))) {
                              local_e8 = local_c0;
                            }
                            if (((uVar23 == local_ac) && ((int)local_b0 < (int)uVar28)) &&
                               (((int)uVar28 < (int)local_d4 &&
                                (((int)local_d8 < (int)fVar26 &&
                                 (local_f4 = local_f4 & 0xff, (int)fVar26 < (int)local_b8)))))) {
                              local_f4 = local_c0;
                            }
                            if ((((uVar28 == local_b0) && ((int)local_bc < (int)uVar23)) &&
                                ((int)uVar23 < (int)local_ac)) &&
                               (((int)local_d8 < (int)fVar26 &&
                                (local_108 = local_108 & 0xff, (int)fVar26 < (int)local_b8)))) {
                              local_108 = local_c0;
                            }
                            if (((uVar28 == local_d4) && ((int)local_bc < (int)uVar23)) &&
                               (((int)uVar23 < (int)local_ac &&
                                (((int)local_d8 < (int)fVar26 &&
                                 (local_e4 = local_e4 & 0xff, (int)fVar26 < (int)local_b8)))))) {
                              local_e4 = local_c0;
                            }
                          }
                        }
                        fVar26 = (float)((int)fVar26 + 1);
                      } while ((int)fVar26 <= (int)local_b8);
                    }
                    uVar28 = uVar28 + 1;
                    uVar27 = local_ac;
                  } while ((int)uVar28 <= (int)uVar17);
                }
                uVar23 = uVar23 + 1;
              } while ((int)uVar23 <= (int)uVar27);
            }
            lVar33 = CONCAT44(local_cc,local_b4);
            lVar32 = CONCAT44(local_f0,local_c0);
            lVar2 = CONCAT44(local_dc,local_ec);
            lVar34 = CONCAT44(local_fc,local_bc);
            uVar27 = local_12c;
            iVar22 = local_17c;
            iVar16 = local_180;
            if ((int)local_13c <= local_17c) {
              do {
                uVar17 = uVar27;
                uVar25 = local_13c;
                local_130 = uVar27;
                if ((int)uVar27 <= iVar16) {
                  do {
                    local_cc = (uint)((ulonglong)lVar33 >> 0x20);
                    local_b4 = (uint)lVar33;
                    local_f0 = (int)((ulonglong)lVar32 >> 0x20);
                    local_c0 = (uint)lVar32;
                    local_dc = (int)((ulonglong)lVar2 >> 0x20);
                    local_ec = (uint)lVar2;
                    local_fc = (uint)((ulonglong)lVar34 >> 0x20);
                    local_bc = (uint)lVar34;
                    if ((((-1 < (int)uVar25) && (-1 < (int)uVar27)) && ((int)uVar25 < 0x200000)) &&
                       ((int)uVar27 < 0x200000)) {
                      local_130 = uVar27;
                      iVar22 = FUN_00434d10((int)(uVar25 + ((int)uVar25 >> 0x1f & 0x1fU)) >> 5,
                                            (int)(uVar27 + ((int)uVar27 >> 0x1f & 0x1fU)) >> 5);
                      lVar33 = CONCAT44(local_cc,local_b4);
                      lVar32 = CONCAT44(local_f0,local_c0);
                      lVar2 = CONCAT44(local_dc,local_ec);
                      lVar34 = CONCAT44(local_fc,local_bc);
                      if (iVar22 != 0) {
                        uVar17 = uVar27 & 0x8000001f;
                        if ((int)uVar17 < 0) {
                          uVar17 = (uVar17 - 1 | 0xffffffe0) + 1;
                        }
                        uVar23 = uVar25 & 0x8000001f;
                        if ((int)uVar23 < 0) {
                          uVar23 = (uVar23 - 1 | 0xffffffe0) + 1;
                        }
                        puVar1 = (undefined4 *)
                                 (*(int *)(iVar22 + 0xac) + (uVar17 * 0x20 + uVar23) * 8);
                        if (puVar1 != (undefined4 *)0x0) {
                          local_138 = (int *)*puVar1;
                          piVar12 = (int *)*local_138;
                          uVar25 = local_13c;
                          if (piVar12 != local_138) {
                            puVar1 = *(undefined4 **)(local_94 + 0x1468);
                            do {
                              local_cc = (uint)((ulonglong)lVar33 >> 0x20);
                              local_b4 = (uint)lVar33;
                              local_f0 = (int)((ulonglong)lVar32 >> 0x20);
                              local_c0 = (uint)lVar32;
                              local_dc = (int)((ulonglong)lVar2 >> 0x20);
                              local_ec = (uint)lVar2;
                              local_fc = (uint)((ulonglong)lVar34 >> 0x20);
                              local_bc = (uint)lVar34;
                              if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
                                puVar9 = (undefined4 *)puVar1[1];
                                puVar18 = puVar1;
                                do {
                                  if ((uint)puVar9[4] < (uint)piVar12[2]) {
                                    puVar10 = (undefined4 *)puVar9[2];
                                  }
                                  else {
                                    puVar10 = (undefined4 *)*puVar9;
                                    puVar18 = puVar9;
                                  }
                                  puVar9 = puVar10;
                                } while (*(char *)((int)puVar10 + 0xd) == '\0');
                                if ((puVar18 == puVar1) || ((uint)piVar12[2] < (uint)puVar18[4]))
                                goto LAB_005ab6a0;
                                local_188 = puVar18;
                                ppuVar11 = &local_188;
                              }
                              else {
LAB_005ab6a0:
                                local_1c0 = puVar1;
                                ppuVar11 = &local_1c0;
                              }
                              if (*ppuVar11 == puVar1) {
                                piVar6 = (int *)piVar12[2];
                                local_24 = (float)piVar6[0xb];
                                uVar31 = *(undefined8 *)(piVar6 + 9);
                                uVar27 = piVar6[8] & 0x80000001;
                                bVar30 = uVar27 == 0;
                                if ((int)uVar27 < 0) {
                                  bVar30 = (uVar27 - 1 | 0xfffffffe) == 0xffffffff;
                                }
                                local_2c._0_4_ = (float)uVar31;
                                local_2c._4_4_ = (float)((ulonglong)uVar31 >> 0x20);
                                if (bVar30) {
                                  local_d8 = local_2c._4_4_;
                                  local_2c._4_4_ = (float)local_2c;
                                }
                                else {
                                  local_d8 = (float)local_2c;
                                }
                                local_11c = piVar6[3];
                                local_1c8 = local_2c._4_4_ * 0.5 * 65536.0;
                                local_2c = uVar31;
                                uVar31 = FUN_0068d946();
                                local_d4 = (uint)((ulonglong)uVar31 >> 0x20);
                                local_128 = (uint)uVar31;
                                local_b8 = (float)(piVar6[2] - local_128);
                                local_b0 = (piVar6[3] - local_d4) -
                                           (uint)((uint)piVar6[2] < local_128);
                                local_1b0 = *(float *)(local_94 + 0x80) * 0.5 * 65536.0;
                                lVar32 = FUN_0068d946();
                                local_f0 = (int)((ulonglong)lVar32 >> 0x20);
                                local_c0 = (uint)lVar32;
                                lVar34 = lVar32 + CONCAT44(local_4c,local_50);
                                local_bc = (uint)lVar34;
                                local_fc = (uint)((ulonglong)lVar34 >> 0x20);
                                local_124 = local_24;
                                uVar27 = local_ec;
                                lVar33 = CONCAT44(local_cc,local_b4);
                                if (CONCAT44(local_b0,local_b8) <= lVar34) {
                                  local_cc = local_50 - local_c0;
                                  iVar16 = (local_4c - local_f0) - (uint)(local_50 < local_c0);
                                  iVar22 = local_d4 + piVar6[3] + (uint)CARRY4(local_128,piVar6[2]);
                                  lVar33 = CONCAT44(local_cc,local_b4);
                                  if ((iVar16 <= iVar22) &&
                                     ((iVar16 < iVar22 ||
                                      (lVar33 = CONCAT44(local_cc,local_b4),
                                      local_cc < local_128 + piVar6[2])))) {
                                    local_1ac = local_d8 * 0.5 * 65536.0;
                                    uVar31 = FUN_0068d946();
                                    local_dc = (int)((ulonglong)uVar31 >> 0x20);
                                    local_ec = (uint)uVar31;
                                    local_18c = *(float *)(local_94 + 0x84) * 0.5 * 65536.0;
                                    lVar33 = FUN_0068d946();
                                    local_cc = (uint)((ulonglong)lVar33 >> 0x20);
                                    local_e0 = piVar6[4] - local_ec;
                                    lVar2 = lVar33 + CONCAT44(local_44,local_48);
                                    uVar27 = (uint)lVar2;
                                    lVar34 = CONCAT44(local_fc,local_bc);
                                    lVar32 = CONCAT44(local_f0,local_c0);
                                    if (CONCAT44((piVar6[5] - local_dc) -
                                                 (uint)((uint)piVar6[4] < local_ec),local_e0) <=
                                        lVar2) {
                                      iVar16 = local_dc + piVar6[5] +
                                               (uint)CARRY4(local_ec,piVar6[4]);
                                      local_b4 = local_48 - (uint)lVar33;
                                      iVar22 = (local_44 - local_cc) -
                                               (uint)(local_48 < (uint)lVar33);
                                      lVar34 = CONCAT44(local_fc,local_bc);
                                      lVar32 = CONCAT44(local_f0,local_c0);
                                      lVar33 = CONCAT44(local_cc,local_b4);
                                      if ((iVar22 <= iVar16) &&
                                         ((iVar22 < iVar16 ||
                                          (lVar34 = CONCAT44(local_fc,local_bc),
                                          lVar32 = CONCAT44(local_f0,local_c0),
                                          lVar33 = CONCAT44(local_cc,local_b4),
                                          local_b4 < local_ec + piVar6[4])))) {
                                        local_1d0 = *(float *)(local_94 + 0x88) * 0.5 * 65536.0;
                                        local_ec = uVar27;
                                        lVar34 = FUN_0068d946();
                                        local_e0 = (uint)((ulonglong)lVar34 >> 0x20);
                                        local_b4 = (uint)lVar34;
                                        lVar34 = lVar34 + CONCAT44(local_3c,local_40);
                                        uVar17 = (uint)lVar34;
                                        iVar22 = (int)((ulonglong)lVar34 >> 0x20) -
                                                 (uint)(uVar17 < 0x10000);
                                        uVar27 = local_ec;
                                        lVar34 = CONCAT44(local_fc,local_bc);
                                        lVar32 = CONCAT44(local_f0,local_c0);
                                        lVar33 = CONCAT44(local_cc,local_b4);
                                        if ((piVar6[7] <= iVar22) &&
                                           ((piVar6[7] < iVar22 ||
                                            (lVar34 = CONCAT44(local_fc,local_bc),
                                            lVar32 = CONCAT44(local_f0,local_c0),
                                            lVar33 = CONCAT44(local_cc,local_b4),
                                            (uint)piVar6[6] <= uVar17 - 0x10000)))) {
                                          local_1d8 = local_124 * 65536.0;
                                          uVar31 = FUN_0068d946();
                                          uVar27 = (uint)uVar31 + piVar6[6];
                                          iVar16 = (int)((ulonglong)uVar31 >> 0x20) + piVar6[7] +
                                                   (uint)CARRY4((uint)uVar31,piVar6[6]);
                                          iVar22 = ((local_3c - local_e0) -
                                                   (uint)(local_40 < local_b4)) -
                                                   (uint)(local_40 - local_b4 < 0x10000);
                                          lVar34 = CONCAT44(local_fc,local_bc);
                                          lVar32 = CONCAT44(local_f0,local_c0);
                                          lVar33 = CONCAT44(local_cc,local_b4);
                                          if ((iVar22 <= iVar16) &&
                                             ((iVar22 < iVar16 ||
                                              (lVar34 = CONCAT44(local_fc,local_bc),
                                              lVar32 = CONCAT44(local_f0,local_c0),
                                              lVar33 = CONCAT44(local_cc,local_b4),
                                              (local_40 - local_b4) - 0x10000 < uVar27)))) {
                                            local_8e = '\x01';
                                            lVar34 = CONCAT44(local_fc,local_bc);
                                            lVar32 = CONCAT44(local_f0,local_c0);
                                            lVar33 = CONCAT44(local_cc,local_b4);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                local_ec = uVar27;
                                lVar2 = CONCAT44(local_dc,local_ec);
                                local_b4 = (uint)lVar33;
                                local_f0 = (int)((ulonglong)lVar32 >> 0x20);
                                local_c0 = (uint)lVar32;
                                local_fc = (uint)((ulonglong)lVar34 >> 0x20);
                                local_bc = (uint)lVar34;
                                if (((((3.0 < (float)piVar6[0xb] || (float)piVar6[0xb] == 3.0) ||
                                      ((char)local_134 != '\0')) || ((char)local_140 != '\0')) ||
                                    ((((char)local_144 != '\0' || ((char)local_14c != '\0')) ||
                                     ((char)local_170 != '\0')))) &&
                                   (((iVar22 = *piVar6, iVar22 != 1 && (iVar22 != 2)) &&
                                    ((iVar22 != 8 && ((iVar22 != 7 && (iVar22 != 6)))))))) {
                                  local_cc = 0;
                                  piVar19 = (int *)(local_94 + 0x1478);
                                  piVar21 = piVar12 + 3;
                                  do {
                                    if (*piVar21 != *piVar19) {
                                      iVar22 = local_fc - (local_bc < 0x10000);
                                      uVar27 = local_b4;
                                      lVar35 = CONCAT44(local_dc,local_ec);
                                      if (((int)local_b0 <= iVar22) &&
                                         (((int)local_b0 < iVar22 ||
                                          (lVar35 = CONCAT44(local_dc,local_ec),
                                          (uint)local_b8 <= local_bc - 0x10000)))) {
                                        iVar16 = ((local_4c - local_f0) -
                                                 (uint)(local_50 < local_c0)) -
                                                 (uint)(local_50 - local_c0 < 0x10000);
                                        local_b4 = local_128 + piVar6[2];
                                        iVar22 = local_d4 + piVar6[3] +
                                                 (uint)CARRY4(local_128,piVar6[2]);
                                        uVar27 = local_b4;
                                        lVar35 = CONCAT44(local_dc,local_ec);
                                        if ((iVar16 <= iVar22) &&
                                           ((iVar16 < iVar22 ||
                                            (lVar35 = lVar2,
                                            (local_50 - local_c0) - 0x10000 < local_b4)))) {
                                          local_1e0 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0068d946();
                                          local_cc = (uint)((ulonglong)uVar31 >> 0x20);
                                          local_b4 = (uint)uVar31;
                                          local_1cc = *(float *)(local_94 + 0x84) * 0.5 * 65536.0;
                                          lVar35 = FUN_0068d946();
                                          local_dc = (int)((ulonglong)lVar35 >> 0x20);
                                          local_ec = (uint)lVar35;
                                          local_e0 = piVar6[4] - local_b4;
                                          lVar33 = lVar35 + CONCAT44(local_44,local_48);
                                          uVar27 = (uint)lVar33;
                                          lVar34 = CONCAT44(local_fc,local_bc);
                                          lVar32 = CONCAT44(local_f0,local_c0);
                                          if (CONCAT44((piVar6[5] - local_cc) -
                                                       (uint)((uint)piVar6[4] < local_b4),local_e0)
                                              <= lVar33) {
                                            uVar17 = local_b4 + piVar6[4];
                                            iVar16 = local_cc + piVar6[5] +
                                                     (uint)CARRY4(local_b4,piVar6[4]);
                                            local_b4 = local_48 - local_ec;
                                            iVar22 = (local_44 - local_dc) -
                                                     (uint)(local_48 < local_ec);
                                            uVar27 = local_b4;
                                            lVar34 = CONCAT44(local_fc,local_bc);
                                            lVar32 = CONCAT44(local_f0,local_c0);
                                            if ((iVar22 <= iVar16) &&
                                               ((iVar22 < iVar16 ||
                                                (lVar34 = CONCAT44(local_fc,local_bc),
                                                lVar32 = CONCAT44(local_f0,local_c0),
                                                local_b4 < uVar17)))) {
                                              local_184 = *(float *)(local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              lVar34 = FUN_0068d946();
                                              local_e0 = (uint)((ulonglong)lVar34 >> 0x20);
                                              local_b4 = (uint)lVar34;
                                              local_1e8 = lVar34 + CONCAT44(local_3c,local_40);
                                              cVar5 = FUN_00594690(piVar6 + 6);
                                              uVar27 = local_b4;
                                              lVar34 = CONCAT44(local_fc,local_bc);
                                              lVar32 = CONCAT44(local_f0,local_c0);
                                              lVar35 = CONCAT44(local_dc,local_ec);
                                              if (cVar5 != '\0') {
                                                local_1b8 = local_124 * 65536.0;
                                                uVar31 = FUN_0068d946();
                                                local_1f0 = (uint)uVar31 + piVar6[6];
                                                local_1ec = (int)((ulonglong)uVar31 >> 0x20) +
                                                            piVar6[7] +
                                                            (uint)CARRY4((uint)uVar31,piVar6[6]);
                                                local_1f8 = local_40 - local_b4;
                                                local_1f4 = (local_3c - local_e0) -
                                                            (uint)(local_40 < local_b4);
                                                cVar5 = FUN_00594660(&local_1f0);
                                                local_150 = local_150 & 0xff;
                                                uVar27 = local_b4;
                                                lVar34 = CONCAT44(local_fc,local_bc);
                                                lVar32 = CONCAT44(local_f0,local_c0);
                                                lVar35 = CONCAT44(local_dc,local_ec);
                                                if (cVar5 != '\0') {
                                                  local_150 = 1;
                                                  lVar34 = CONCAT44(local_fc,local_bc);
                                                  lVar32 = CONCAT44(local_f0,local_c0);
                                                  lVar35 = CONCAT44(local_dc,local_ec);
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      local_b4 = uVar27;
                                      local_dc = (int)((ulonglong)lVar35 >> 0x20);
                                      local_ec = (uint)lVar35;
                                      local_f0 = (int)((ulonglong)lVar32 >> 0x20);
                                      local_c0 = (uint)lVar32;
                                      local_fc = (uint)((ulonglong)lVar34 >> 0x20);
                                      local_bc = (uint)lVar34;
                                      uVar27 = local_b4;
                                      if (CONCAT44(local_b0,local_b8) <= lVar34 + 0x10000) {
                                        iVar16 = ((local_4c - local_f0) -
                                                 (uint)(local_50 < local_c0)) +
                                                 (uint)(0xfffeffff < local_50 - local_c0);
                                        local_b4 = local_128 + piVar6[2];
                                        iVar22 = local_d4 + piVar6[3] +
                                                 (uint)CARRY4(local_128,piVar6[2]);
                                        uVar27 = local_b4;
                                        if ((iVar16 <= iVar22) &&
                                           ((iVar16 < iVar22 ||
                                            ((local_50 - local_c0) + 0x10000 < local_b4)))) {
                                          local_194 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0068d946();
                                          local_cc = (uint)((ulonglong)uVar31 >> 0x20);
                                          local_b4 = (uint)uVar31;
                                          local_1bc = *(float *)(local_94 + 0x84) * 0.5 * 65536.0;
                                          lVar35 = FUN_0068d946();
                                          local_dc = (int)((ulonglong)lVar35 >> 0x20);
                                          local_ec = (uint)lVar35;
                                          local_e0 = piVar6[4] - local_b4;
                                          lVar33 = lVar35 + CONCAT44(local_44,local_48);
                                          uVar27 = (uint)lVar33;
                                          lVar34 = CONCAT44(local_fc,local_bc);
                                          lVar32 = CONCAT44(local_f0,local_c0);
                                          if (CONCAT44((piVar6[5] - local_cc) -
                                                       (uint)((uint)piVar6[4] < local_b4),local_e0)
                                              <= lVar33) {
                                            uVar17 = local_b4 + piVar6[4];
                                            iVar16 = local_cc + piVar6[5] +
                                                     (uint)CARRY4(local_b4,piVar6[4]);
                                            local_b4 = local_48 - local_ec;
                                            iVar22 = (local_44 - local_dc) -
                                                     (uint)(local_48 < local_ec);
                                            uVar27 = local_b4;
                                            lVar34 = CONCAT44(local_fc,local_bc);
                                            lVar32 = CONCAT44(local_f0,local_c0);
                                            if ((iVar22 <= iVar16) &&
                                               ((iVar22 < iVar16 ||
                                                (lVar34 = CONCAT44(local_fc,local_bc),
                                                lVar32 = CONCAT44(local_f0,local_c0),
                                                local_b4 < uVar17)))) {
                                              local_19c = *(float *)(local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              lVar34 = FUN_0068d946();
                                              local_e0 = (uint)((ulonglong)lVar34 >> 0x20);
                                              local_b4 = (uint)lVar34;
                                              local_208 = lVar34 + CONCAT44(local_3c,local_40);
                                              cVar5 = FUN_00594690(piVar6 + 6);
                                              uVar27 = local_b4;
                                              lVar34 = CONCAT44(local_fc,local_bc);
                                              lVar35 = CONCAT44(local_dc,local_ec);
                                              lVar32 = CONCAT44(local_f0,local_c0);
                                              if (cVar5 != '\0') {
                                                local_1dc = local_124 * 65536.0;
                                                uVar31 = FUN_0068d946();
                                                local_218 = (uint)uVar31 + piVar6[6];
                                                local_214 = (int)((ulonglong)uVar31 >> 0x20) +
                                                            piVar6[7] +
                                                            (uint)CARRY4((uint)uVar31,piVar6[6]);
                                                local_228 = local_40 - local_b4;
                                                local_224 = (local_3c - local_e0) -
                                                            (uint)(local_40 < local_b4);
                                                cVar5 = FUN_00594660(&local_218);
                                                local_158 = local_158 & 0xff;
                                                uVar27 = local_b4;
                                                lVar34 = CONCAT44(local_fc,local_bc);
                                                lVar35 = CONCAT44(local_dc,local_ec);
                                                lVar32 = CONCAT44(local_f0,local_c0);
                                                if (cVar5 != '\0') {
                                                  local_158 = 1;
                                                  lVar34 = CONCAT44(local_fc,local_bc);
                                                  lVar35 = CONCAT44(local_dc,local_ec);
                                                  lVar32 = CONCAT44(local_f0,local_c0);
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      local_b4 = uVar27;
                                      local_f0 = (int)((ulonglong)lVar32 >> 0x20);
                                      local_c0 = (uint)lVar32;
                                      local_dc = (int)((ulonglong)lVar35 >> 0x20);
                                      local_ec = (uint)lVar35;
                                      local_fc = (uint)((ulonglong)lVar34 >> 0x20);
                                      local_bc = (uint)lVar34;
                                      if (CONCAT44(local_b0,local_b8) <= lVar34) {
                                        local_b4 = local_50 - local_c0;
                                        iVar16 = (local_4c - local_f0) - (uint)(local_50 < local_c0)
                                        ;
                                        iVar22 = local_d4 + piVar6[3] +
                                                 (uint)CARRY4(local_128,piVar6[2]);
                                        if ((iVar16 <= iVar22) &&
                                           ((iVar16 < iVar22 || (local_b4 < local_128 + piVar6[2])))
                                           ) {
                                          local_1a4 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0068d946();
                                          local_dc = (int)((ulonglong)uVar31 >> 0x20);
                                          local_cc = (uint)uVar31;
                                          local_1c4 = *(float *)(local_94 + 0x84) * 0.5 * 65536.0;
                                          lVar34 = FUN_0068d946();
                                          local_ec = (uint)((ulonglong)lVar34 >> 0x20);
                                          local_e0 = (uint)lVar34;
                                          lVar34 = lVar34 + CONCAT44(local_44,local_48);
                                          uVar27 = (uint)lVar34;
                                          iVar16 = (int)((ulonglong)lVar34 >> 0x20) -
                                                   (uint)(uVar27 < 0x10000);
                                          local_b4 = piVar6[4] - local_cc;
                                          iVar22 = (piVar6[5] - local_dc) -
                                                   (uint)((uint)piVar6[4] < local_cc);
                                          lVar34 = CONCAT44(local_fc,local_bc);
                                          lVar35 = CONCAT44(local_dc,local_ec);
                                          lVar32 = CONCAT44(local_f0,local_c0);
                                          if ((iVar22 <= iVar16) &&
                                             ((iVar22 < iVar16 ||
                                              (lVar34 = CONCAT44(local_fc,local_bc),
                                              lVar35 = CONCAT44(local_dc,local_ec),
                                              lVar32 = CONCAT44(local_f0,local_c0),
                                              local_b4 <= uVar27 - 0x10000)))) {
                                            iVar22 = ((local_44 - local_ec) -
                                                     (uint)(local_48 < local_e0)) -
                                                     (uint)(local_48 - local_e0 < 0x10000);
                                            puVar24 = (uint *)(piVar6 + 4);
                                            local_dc = local_dc + piVar6[5] +
                                                       (uint)CARRY4(local_cc,*puVar24);
                                            piVar6 = (int *)piVar12[2];
                                            lVar34 = CONCAT44(local_fc,local_bc);
                                            lVar35 = CONCAT44(local_dc,local_ec);
                                            lVar32 = CONCAT44(local_f0,local_c0);
                                            if ((iVar22 <= local_dc) &&
                                               ((iVar22 < local_dc ||
                                                (lVar34 = CONCAT44(local_fc,local_bc),
                                                lVar35 = CONCAT44(local_dc,local_ec),
                                                lVar32 = CONCAT44(local_f0,local_c0),
                                                (local_48 - local_e0) - 0x10000 <
                                                local_cc + *puVar24)))) {
                                              local_1d4 = *(float *)(local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              uVar31 = FUN_0068d946();
                                              local_b4 = (uint)((ulonglong)uVar31 >> 0x20);
                                              local_100 = (uint)uVar31;
                                              cVar5 = FUN_00594690(piVar6 + 6);
                                              lVar34 = CONCAT44(local_fc,local_bc);
                                              lVar35 = CONCAT44(local_dc,local_ec);
                                              lVar32 = CONCAT44(local_f0,local_c0);
                                              if (cVar5 != '\0') {
                                                local_1b4 = local_124 * 65536.0;
                                                uVar31 = FUN_0068d946();
                                                local_230 = (uint)uVar31 + piVar6[6];
                                                local_22c = (int)((ulonglong)uVar31 >> 0x20) +
                                                            piVar6[7] +
                                                            (uint)CARRY4((uint)uVar31,piVar6[6]);
                                                local_200 = local_40 - local_100;
                                                local_1fc = (local_3c - local_b4) -
                                                            (uint)(local_40 < local_100);
                                                cVar5 = FUN_00594660(&local_230);
                                                local_160 = local_160 & 0xff;
                                                lVar34 = CONCAT44(local_fc,local_bc);
                                                lVar35 = CONCAT44(local_dc,local_ec);
                                                lVar32 = CONCAT44(local_f0,local_c0);
                                                if (cVar5 != '\0') {
                                                  local_160 = 1;
                                                  lVar34 = CONCAT44(local_fc,local_bc);
                                                  lVar35 = CONCAT44(local_dc,local_ec);
                                                  lVar32 = CONCAT44(local_f0,local_c0);
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      local_f0 = (int)((ulonglong)lVar32 >> 0x20);
                                      local_c0 = (uint)lVar32;
                                      local_dc = (int)((ulonglong)lVar35 >> 0x20);
                                      local_ec = (uint)lVar35;
                                      local_fc = (uint)((ulonglong)lVar34 >> 0x20);
                                      local_bc = (uint)lVar34;
                                      lVar33 = CONCAT44(local_cc,local_b4);
                                      lVar2 = lVar35;
                                      if (CONCAT44(local_b0,local_b8) <= lVar34) {
                                        iVar16 = (local_4c - local_f0) - (uint)(local_50 < local_c0)
                                        ;
                                        local_d4 = local_d4 + local_11c +
                                                   (uint)CARRY4(local_128,piVar6[2]);
                                        iVar22 = piVar12[2];
                                        lVar33 = CONCAT44(local_cc,local_b4);
                                        if ((iVar16 <= (int)local_d4) &&
                                           ((iVar16 < (int)local_d4 ||
                                            (lVar33 = CONCAT44(local_cc,local_b4),
                                            local_50 - local_c0 < local_128 + piVar6[2])))) {
                                          local_190 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0068d946();
                                          local_f0 = (int)((ulonglong)uVar31 >> 0x20);
                                          local_fc = (uint)uVar31;
                                          local_198 = *(float *)(local_94 + 0x84) * 0.5 * 65536.0;
                                          lVar35 = FUN_0068d946();
                                          local_cc = (uint)((ulonglong)lVar35 >> 0x20);
                                          local_100 = (uint)lVar35;
                                          local_11c = *(uint *)(iVar22 + 0x10) - local_fc;
                                          lVar34 = CONCAT44(local_fc,local_bc);
                                          lVar33 = CONCAT44(local_cc,local_b4);
                                          lVar2 = CONCAT44(local_dc,local_ec);
                                          lVar32 = CONCAT44(local_f0,local_c0);
                                          if (CONCAT44((*(int *)(iVar22 + 0x14) - local_f0) -
                                                       (uint)(*(uint *)(iVar22 + 0x10) < local_fc),
                                                       local_11c) <=
                                              lVar35 + CONCAT44(local_44,local_48) + 0x10000) {
                                            iVar29 = ((local_44 - local_cc) -
                                                     (uint)(local_48 < local_100)) +
                                                     (uint)(0xfffeffff < local_48 - local_100);
                                            local_f0 = local_f0 + *(int *)(iVar22 + 0x14) +
                                                       (uint)CARRY4(local_fc,*(uint *)(iVar22 + 0x10
                                                                                      ));
                                            iVar16 = piVar12[2];
                                            lVar34 = CONCAT44(local_fc,local_bc);
                                            lVar33 = CONCAT44(local_cc,local_b4);
                                            lVar2 = CONCAT44(local_dc,local_ec);
                                            lVar32 = CONCAT44(local_f0,local_c0);
                                            if ((iVar29 <= local_f0) &&
                                               ((iVar29 < local_f0 ||
                                                (lVar34 = CONCAT44(local_fc,local_bc),
                                                lVar33 = CONCAT44(local_cc,local_b4),
                                                lVar2 = CONCAT44(local_dc,local_ec),
                                                lVar32 = CONCAT44(local_f0,local_c0),
                                                (local_48 - local_100) + 0x10000 <
                                                local_fc + *(uint *)(iVar22 + 0x10))))) {
                                              local_1a0 = *(float *)(local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              lVar34 = FUN_0068d946();
                                              local_100 = (uint)((ulonglong)lVar34 >> 0x20);
                                              local_11c = (uint)lVar34;
                                              local_220 = lVar34 + CONCAT44(local_3c,local_40);
                                              puVar24 = (uint *)(iVar16 + 0x18);
                                              cVar5 = FUN_00594690(puVar24);
                                              lVar34 = CONCAT44(local_fc,local_bc);
                                              lVar33 = CONCAT44(local_cc,local_b4);
                                              lVar2 = CONCAT44(local_dc,local_ec);
                                              lVar32 = CONCAT44(local_f0,local_c0);
                                              if (cVar5 != '\0') {
                                                local_1a8 = local_124 * 65536.0;
                                                uVar31 = FUN_0068d946();
                                                local_210 = (uint)uVar31 + *puVar24;
                                                local_20c = (int)((ulonglong)uVar31 >> 0x20) +
                                                            *(int *)(iVar16 + 0x1c) +
                                                            (uint)CARRY4((uint)uVar31,*puVar24);
                                                local_58._0_4_ = local_40 - local_11c;
                                                local_58._4_4_ =
                                                     (local_3c - local_100) -
                                                     (uint)(local_40 < local_11c);
                                                cVar5 = FUN_00594660(&local_210);
                                                local_15c = local_15c & 0xff;
                                                lVar34 = CONCAT44(local_fc,local_bc);
                                                lVar33 = CONCAT44(local_cc,local_b4);
                                                lVar2 = CONCAT44(local_dc,local_ec);
                                                lVar32 = CONCAT44(local_f0,local_c0);
                                                local_58 = (double)CONCAT44(local_58._4_4_,
                                                                            (uint)local_58);
                                                if (cVar5 != '\0') {
                                                  local_15c = 1;
                                                  lVar34 = CONCAT44(local_fc,local_bc);
                                                  lVar33 = CONCAT44(local_cc,local_b4);
                                                  lVar2 = CONCAT44(local_dc,local_ec);
                                                  lVar32 = CONCAT44(local_f0,local_c0);
                                                  local_58 = (double)CONCAT44(local_58._4_4_,
                                                                              (uint)local_58);
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      break;
                                    }
                                    local_cc = local_cc + 1;
                                    lVar33 = CONCAT44(local_cc,local_b4);
                                    piVar21 = piVar21 + 1;
                                    piVar19 = piVar19 + 1;
                                  } while ((int)local_cc < 3);
                                }
                              }
                              piVar12 = (int *)*piVar12;
                              uVar27 = local_130;
                              uVar25 = local_13c;
                              iVar16 = local_180;
                            } while (piVar12 != local_138);
                          }
                        }
                      }
                    }
                    uVar27 = uVar27 + 1;
                    uVar17 = local_12c;
                    iVar22 = local_17c;
                    local_130 = uVar27;
                  } while ((int)uVar27 <= iVar16);
                }
                local_13c = uVar25 + 1;
                uVar27 = uVar17;
              } while ((int)local_13c <= iVar22);
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            cVar5 = (char)local_98;
            local_cd = '\0';
            uVar27 = local_9c;
            if (((char)local_e8 == '\0') && ((char)local_150 == '\0')) {
              if ((cVar5 != '\0') ||
                 ((((((char)local_168 != '\0' || ((char)local_108 != '\0')) ||
                    ((char)local_e4 != '\0')) ||
                   (((char)local_118 != '\0' || ((char)local_110 != '\0')))) || (local_8d != 0)))) {
                iVar22 = local_a8 - 1;
                piVar12 = (int *)FUN_005a9da0(iVar22,local_a0,local_9c);
                if (piVar12 == (int *)0x0) {
                  piVar12 = (int *)FUN_0042f040(&local_2c,local_f8);
                  uVar27 = local_9c;
                  uVar17 = iVar22 - *piVar12 >> 0x1f;
                  iVar22 = (iVar22 - *piVar12 ^ uVar17) - uVar17;
                  uVar17 = (int)(local_a0 - piVar12[1]) >> 0x1f;
                  iVar16 = (local_a0 - piVar12[1] ^ uVar17) - uVar17;
                  uVar17 = (int)(local_9c - piVar12[2]) >> 0x1f;
                  if (iVar16 < iVar22) {
                    iVar22 = iVar22 * 10 + iVar16 * 4;
                  }
                  else {
                    iVar22 = iVar22 * 4 + iVar16 * 10;
                  }
                  local_1c = (iVar22 + ((local_9c - piVar12[2] ^ uVar17) - uVar17) * 10) * 2;
                  local_20 = *local_c8 + 10;
                  if ((char)local_98 == '\0') {
                    local_20 = *local_c8 + 0x14;
                  }
                  local_18 = local_20 + local_1c;
                  local_10 = local_a0;
                  local_14 = local_a8;
                  local_c = local_9c;
                  FUN_005a9e50(local_a8 - 1,local_a0,local_9c,&local_20);
                  local_cd = '\x01';
                }
                else {
                  cVar5 = FUN_005a9ca0(iVar22,local_a0,local_9c);
                  uVar27 = local_9c;
                  if (cVar5 != '\0') {
                    iVar16 = *local_c8 + 10;
                    if ((char)local_98 == '\0') {
                      iVar16 = *local_c8 + 0x14;
                    }
                    if (iVar16 < *piVar12) {
                      local_18 = iVar16 + piVar12[1];
                      local_14 = local_a8;
                      local_10 = local_a0;
                      local_c = local_9c;
                      local_20 = iVar16;
                      local_1c = piVar12[1];
                      FUN_005a9e50(iVar22,local_a0,local_9c,&local_20);
                      local_cd = '\x01';
                    }
                  }
                }
                lVar33 = CONCAT44(local_cc,local_b4);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar34 = CONCAT44(local_fc,local_bc);
                cVar5 = (char)local_98;
                goto LAB_005ac5d8;
              }
              cVar20 = '\0';
            }
            else {
LAB_005ac5d8:
              cVar20 = (char)local_e4;
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            local_c1 = '\0';
            cVar15 = (char)local_f4;
            uVar17 = local_a0;
            if (((cVar15 == '\0') && ((char)local_158 == '\0')) &&
               ((((cVar5 != '\0' ||
                  (((local_8e != '\0' || ((char)local_178 != '\0')) || ((char)local_108 != '\0'))))
                 || (((cVar20 != '\0' || ((char)local_120 != '\0')) || ((char)local_114 != '\0'))))
                || (local_8d != 0)))) {
              iVar22 = local_a8 + 1;
              piVar12 = (int *)FUN_005a9da0(iVar22,local_a0,uVar27);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_0042f040(&local_2c,local_f8);
                uVar17 = local_a0;
                uVar27 = iVar22 - *piVar12 >> 0x1f;
                iVar22 = (iVar22 - *piVar12 ^ uVar27) - uVar27;
                uVar27 = (int)(local_a0 - piVar12[1]) >> 0x1f;
                iVar16 = (local_a0 - piVar12[1] ^ uVar27) - uVar27;
                uVar27 = (int)(local_9c - piVar12[2]) >> 0x1f;
                if (iVar16 < iVar22) {
                  iVar22 = iVar22 * 10 + iVar16 * 4;
                }
                else {
                  iVar22 = iVar22 * 4 + iVar16 * 10;
                }
                local_1c = (iVar22 + ((local_9c - piVar12[2] ^ uVar27) - uVar27) * 10) * 2;
                local_20 = *local_c8 + 10;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x14;
                }
                local_18 = local_20 + local_1c;
                local_10 = local_a0;
                local_c = local_9c;
                local_14 = local_a8;
                FUN_005a9e50(local_a8 + 1,local_a0,local_9c,&local_20);
                cVar15 = (char)local_f4;
                local_c1 = '\x01';
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
              }
              else {
                cVar5 = FUN_005a9ca0(iVar22,local_a0,local_9c);
                uVar17 = local_a0;
                cVar15 = (char)local_f4;
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
                if (cVar5 != '\0') {
                  iVar16 = *local_c8 + 10;
                  if ((char)local_98 == '\0') {
                    iVar16 = *local_c8 + 0x14;
                  }
                  lVar34 = CONCAT44(local_fc,local_bc);
                  lVar2 = CONCAT44(local_dc,local_ec);
                  lVar32 = CONCAT44(local_f0,local_c0);
                  lVar33 = CONCAT44(local_cc,local_b4);
                  if (iVar16 < *piVar12) {
                    local_18 = iVar16 + piVar12[1];
                    local_14 = local_a8;
                    local_10 = local_a0;
                    local_c = local_9c;
                    local_20 = iVar16;
                    local_1c = piVar12[1];
                    FUN_005a9e50(iVar22,local_a0,local_9c,&local_20);
                    cVar15 = (char)local_f4;
                    local_c1 = '\x01';
                    lVar34 = CONCAT44(local_fc,local_bc);
                    lVar2 = CONCAT44(local_dc,local_ec);
                    lVar32 = CONCAT44(local_f0,local_c0);
                    lVar33 = CONCAT44(local_cc,local_b4);
                  }
                }
              }
            }
            cVar20 = local_c1;
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            cVar5 = (char)local_98;
            bVar30 = false;
            if ((((char)local_108 == '\0') && ((char)local_160 == '\0')) &&
               (((cVar5 != '\0' ||
                 (((local_8e != '\0' || ((char)local_154 != '\0')) || ((char)local_e8 != '\0')))) ||
                (((cVar15 != '\0' || ((char)local_118 != '\0')) ||
                 (((char)local_120 != '\0' || (local_8d != 0)))))))) {
              iVar22 = uVar17 - 1;
              piVar12 = (int *)FUN_005a9da0(local_a8,iVar22,local_9c);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_0042f040((int)&local_60 + 4,local_f8);
                uVar27 = local_9c;
                local_2c = CONCAT44(iVar22 - piVar12[1],local_a8 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_005a9d40(&local_2c);
                local_20 = *local_c8 + 10;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x1e;
                }
                local_18 = local_1c + local_20;
                local_c = uVar27;
                local_14 = local_a8;
                local_10 = local_a0;
                FUN_005a9e50(local_a8,iVar22,uVar27,&local_20);
                bVar30 = true;
              }
              else {
                cVar5 = FUN_005a9ca0(local_a8,iVar22,local_9c);
                if (cVar5 != '\0') {
                  iVar16 = *local_c8 + 10;
                  if ((char)local_98 == '\0') {
                    iVar16 = *local_c8 + 0x14;
                  }
                  if (iVar16 < *piVar12) {
                    local_18 = iVar16 + piVar12[1];
                    local_10 = local_a0;
                    local_14 = local_a8;
                    local_c = local_9c;
                    local_20 = iVar16;
                    local_1c = piVar12[1];
                    FUN_005a9e50(local_a8,iVar22,local_9c,&local_20);
                    bVar30 = true;
                  }
                }
              }
              lVar33 = CONCAT44(local_cc,local_b4);
              lVar32 = CONCAT44(local_f0,local_c0);
              lVar2 = CONCAT44(local_dc,local_ec);
              lVar34 = CONCAT44(local_fc,local_bc);
              cVar5 = (char)local_98;
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            local_a1 = '\0';
            uVar27 = local_a8;
            if ((((char)local_e4 == '\0') && ((char)local_15c == '\0')) &&
               ((((cVar5 != '\0' ||
                  ((((local_8e != '\0' || ((char)local_164 != '\0')) || ((char)local_e8 != '\0')) ||
                   (((char)local_f4 != '\0' || ((char)local_110 != '\0')))))) ||
                 ((char)local_114 != '\0')) || (local_8d != 0)))) {
              iVar22 = local_a0 + 1;
              piVar12 = (int *)FUN_005a9da0(local_a8,iVar22,local_9c);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_0042f040((int)&local_60 + 4,local_f8);
                uVar27 = local_9c;
                local_2c = CONCAT44(iVar22 - piVar12[1],local_a8 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_005a9d40(&local_2c);
                local_20 = *local_c8 + 10;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x14;
                }
                local_18 = local_1c + local_20;
                local_c = uVar27;
LAB_005aca6d:
                uVar27 = local_a8;
                local_14 = local_a8;
                local_10 = local_a0;
                FUN_005a9e50(local_a8,iVar22,local_c,&local_20);
                local_a1 = '\x01';
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
              }
              else {
                cVar5 = FUN_005a9ca0(local_a8,iVar22,local_9c);
                uVar27 = local_a8;
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
                if (cVar5 != '\0') {
                  iVar16 = *local_c8 + 10;
                  if ((char)local_98 == '\0') {
                    iVar16 = *local_c8 + 0x14;
                  }
                  lVar34 = CONCAT44(local_fc,local_bc);
                  lVar2 = CONCAT44(local_dc,local_ec);
                  lVar32 = CONCAT44(local_f0,local_c0);
                  lVar33 = CONCAT44(local_cc,local_b4);
                  if (iVar16 < *piVar12) {
                    local_18 = iVar16 + piVar12[1];
                    local_c = local_9c;
                    local_20 = iVar16;
                    local_1c = piVar12[1];
                    goto LAB_005aca6d;
                  }
                }
              }
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            cVar5 = (char)local_98;
            if (((((char)local_118 == '\0') && (local_cd != '\0')) && (bVar30)) &&
               ((((cVar5 != '\0' || (local_8e != '\0')) || ((char)local_10c != '\0')) ||
                (local_8d != 0)))) {
              iVar22 = uVar27 - 1;
              iVar16 = local_a0 - 1;
              local_138 = (int *)FUN_005a9da0(iVar22,iVar16,local_9c);
              if (local_138 == (int *)0x0) {
                piVar12 = (int *)FUN_0042f040((int)&local_60 + 4,local_f8);
                local_2c = CONCAT44(iVar16 - piVar12[1],iVar22 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_005a9d40(&local_2c);
                local_20 = *local_c8 + 0xe;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x18;
                }
                local_18 = local_1c + local_20;
                local_14 = local_a8;
                piVar12 = &local_20;
                local_10 = local_a0;
                local_c = local_9c;
LAB_005acc41:
                FUN_005a9e50(iVar22,iVar16,local_9c,piVar12);
              }
              else {
                cVar5 = FUN_005a9ca0(iVar22,iVar16,local_9c);
                if (cVar5 != '\0') {
                  iVar29 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    iVar29 = *local_c8 + 0x18;
                  }
                  if (iVar29 < *local_138) {
                    piVar12 = (int *)FUN_005a7a40(iVar29,local_138[1],iVar29 + local_138[1],local_74
                                                 );
                    goto LAB_005acc41;
                  }
                }
              }
              lVar33 = CONCAT44(local_cc,local_b4);
              lVar32 = CONCAT44(local_f0,local_c0);
              lVar2 = CONCAT44(local_dc,local_ec);
              lVar34 = CONCAT44(local_fc,local_bc);
              cVar5 = (char)local_98;
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            if (((((char)local_120 == '\0') && (cVar20 != '\0')) && (bVar30)) &&
               (((cVar5 != '\0' || (local_8e != '\0')) ||
                (((char)local_16c != '\0' || (local_8d != 0)))))) {
              iVar16 = local_a0 - 1;
              iVar22 = local_a8 + 1;
              piVar12 = (int *)FUN_005a9da0(iVar22,iVar16,local_9c);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_0042f040((int)&local_60 + 4,local_f8);
                uVar27 = local_9c;
                local_2c = CONCAT44(iVar16 - piVar12[1],iVar22 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_005a9d40(&local_2c);
                local_20 = *local_c8 + 0xe;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x18;
                }
                local_18 = local_1c + local_20;
                local_14 = local_a8;
                local_10 = local_a0;
                local_c = uVar27;
                FUN_005a9e50(iVar22,iVar16,uVar27,&local_20);
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
              }
              else {
                cVar5 = FUN_005a9ca0(iVar22,iVar16,local_9c);
                lVar33 = CONCAT44(local_cc,local_b4);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar34 = CONCAT44(local_fc,local_bc);
                if (cVar5 != '\0') {
                  iVar29 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    iVar29 = *local_c8 + 0x18;
                  }
                  lVar34 = CONCAT44(local_fc,local_bc);
                  lVar2 = CONCAT44(local_dc,local_ec);
                  lVar32 = CONCAT44(local_f0,local_c0);
                  lVar33 = CONCAT44(local_cc,local_b4);
                  if (iVar29 < *piVar12) {
                    uVar13 = FUN_005a7a40(iVar29,piVar12[1],iVar29 + piVar12[1],local_74);
                    FUN_005a9e50(iVar22,iVar16,local_9c,uVar13);
                    lVar34 = CONCAT44(local_fc,local_bc);
                    lVar2 = CONCAT44(local_dc,local_ec);
                    lVar32 = CONCAT44(local_f0,local_c0);
                    lVar33 = CONCAT44(local_cc,local_b4);
                  }
                }
              }
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            if (((((char)local_110 == '\0') && (local_cd != '\0')) && (local_a1 != '\0')) &&
               ((((char)local_98 != '\0' || (local_8e != '\0')) ||
                (((char)local_174 != '\0' || (local_8d != 0)))))) {
              iVar16 = local_a0 + 1;
              iVar22 = local_a8 - 1;
              piVar12 = (int *)FUN_005a9da0(iVar22,iVar16,local_9c);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_0042f040((int)&local_60 + 4,local_f8);
                uVar27 = local_9c;
                local_2c = CONCAT44(iVar16 - piVar12[1],iVar22 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_005a9d40(&local_2c);
                local_20 = *local_c8 + 0xe;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x18;
                }
                local_18 = local_1c + local_20;
                local_14 = local_a8;
                local_10 = local_a0;
                piVar12 = &local_20;
                local_c = uVar27;
LAB_005acea8:
                FUN_005a9e50(iVar22,iVar16,uVar27,piVar12);
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
              }
              else {
                cVar5 = FUN_005a9ca0(iVar22,iVar16,local_9c);
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
                if (cVar5 != '\0') {
                  iVar29 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    iVar29 = *local_c8 + 0x18;
                  }
                  lVar34 = CONCAT44(local_fc,local_bc);
                  lVar2 = CONCAT44(local_dc,local_ec);
                  lVar32 = CONCAT44(local_f0,local_c0);
                  lVar33 = CONCAT44(local_cc,local_b4);
                  if (iVar29 < *piVar12) {
                    piVar12 = (int *)FUN_005a7a40(iVar29,piVar12[1],iVar29 + piVar12[1],local_74);
                    uVar27 = local_9c;
                    goto LAB_005acea8;
                  }
                }
              }
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            iVar22 = local_94;
            if ((((char)local_114 == '\0') && (local_c1 != '\0')) && (local_a1 != '\0')) {
              if (((((char)local_98 != '\0') || (local_8e != '\0')) || ((char)local_104 != '\0')) ||
                 (local_8d != 0)) {
                iVar29 = local_a0 + 1;
                iVar16 = local_a8 + 1;
                piVar12 = (int *)FUN_005a9da0(iVar16,iVar29,local_9c);
                if (piVar12 == (int *)0x0) {
                  piVar12 = (int *)FUN_0042f040(local_74,local_f8);
                  uVar27 = local_9c;
                  local_2c = CONCAT44(iVar29 - piVar12[1],iVar16 - *piVar12);
                  local_24 = (float)(local_9c - piVar12[2]);
                  local_1c = FUN_005a9d40(&local_2c);
                  iVar22 = local_94;
                  local_20 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    local_20 = *local_c8 + 0x18;
                  }
                  local_18 = local_1c + local_20;
                  local_14 = local_a8;
                  local_10 = local_a0;
                  local_c = uVar27;
                  FUN_005a9e50(iVar16,iVar29,uVar27,&local_20);
                  lVar34 = CONCAT44(local_fc,local_bc);
                  lVar2 = CONCAT44(local_dc,local_ec);
                  lVar32 = CONCAT44(local_f0,local_c0);
                  lVar33 = CONCAT44(local_cc,local_b4);
                }
                else {
                  cVar5 = FUN_005a9ca0(iVar16,iVar29,local_9c);
                  iVar22 = local_94;
                  lVar34 = CONCAT44(local_fc,local_bc);
                  lVar2 = CONCAT44(local_dc,local_ec);
                  lVar32 = CONCAT44(local_f0,local_c0);
                  lVar33 = CONCAT44(local_cc,local_b4);
                  if (cVar5 != '\0') {
                    iVar14 = *local_c8 + 0xe;
                    if ((char)local_98 == '\0') {
                      iVar14 = *local_c8 + 0x18;
                    }
                    lVar34 = CONCAT44(local_fc,local_bc);
                    lVar2 = CONCAT44(local_dc,local_ec);
                    lVar32 = CONCAT44(local_f0,local_c0);
                    lVar33 = CONCAT44(local_cc,local_b4);
                    if (iVar14 < *piVar12) {
                      uVar13 = FUN_005a7a40(iVar14,piVar12[1],iVar14 + piVar12[1],local_74);
                      iVar22 = local_94;
                      FUN_005a9e50(iVar16,iVar29,local_9c,uVar13);
                      lVar34 = CONCAT44(local_fc,local_bc);
                      lVar2 = CONCAT44(local_dc,local_ec);
                      lVar32 = CONCAT44(local_f0,local_c0);
                      lVar33 = CONCAT44(local_cc,local_b4);
                    }
                  }
                }
                goto LAB_005ad08a;
              }
            }
            else {
LAB_005ad08a:
              uVar27 = local_9c;
              if (((char)local_98 != '\0') || (local_8e != '\0')) goto LAB_005ad0a6;
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            iVar16 = local_9c - 1;
            piVar12 = (int *)FUN_005a9da0(local_a8,local_a0,iVar16);
            if (piVar12 == (int *)0x0) {
              piVar12 = (int *)FUN_0042f040(local_74,iVar22 + 0x1440);
              local_2c = CONCAT44(local_a0 - piVar12[1],local_a8 - *piVar12);
              local_24 = (float)(iVar16 - piVar12[2]);
              iVar14 = FUN_005a9d40(&local_2c);
              iVar29 = *local_c8;
              iVar3 = iVar29;
              iVar4 = iVar14;
            }
            else {
              cVar5 = FUN_005a9ca0(local_a8,local_a0,iVar16);
              lVar33 = CONCAT44(local_cc,local_b4);
              lVar32 = CONCAT44(local_f0,local_c0);
              lVar2 = CONCAT44(local_dc,local_ec);
              lVar34 = CONCAT44(local_fc,local_bc);
              uVar27 = local_9c;
              if (cVar5 == '\0') goto LAB_005ad0a6;
              iVar29 = piVar12[1];
              iVar14 = *local_c8;
              iVar3 = iVar14;
              iVar4 = iVar29;
              lVar34 = CONCAT44(local_fc,local_bc);
              lVar2 = CONCAT44(local_dc,local_ec);
              lVar32 = CONCAT44(local_f0,local_c0);
              lVar33 = CONCAT44(local_cc,local_b4);
              if (*piVar12 <= iVar14) goto LAB_005ad0a6;
            }
            local_1c = iVar4;
            local_20 = iVar3;
            uVar27 = local_9c;
            local_18 = iVar14 + iVar29;
            local_10 = local_a0;
            local_14 = local_a8;
            local_c = local_9c;
            FUN_005a9e50(local_a8,local_a0,iVar16,&local_20);
            lVar34 = CONCAT44(local_fc,local_bc);
            lVar2 = CONCAT44(local_dc,local_ec);
            lVar32 = CONCAT44(local_f0,local_c0);
            lVar33 = CONCAT44(local_cc,local_b4);
LAB_005ad0a6:
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            if (((char)local_134 == '\0') &&
               ((((char)local_e8 != '\0' || ((char)local_f4 != '\0')) ||
                (((char)local_108 != '\0' || (((char)local_e4 != '\0' || (local_8d != 0)))))))) {
              iVar16 = uVar27 + 1;
              piVar12 = (int *)FUN_005a9da0(local_a8,local_a0,iVar16);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_0042f040(local_74,iVar22 + 0x1440);
                uVar27 = local_a8;
                local_2c = CONCAT44(local_a0 - piVar12[1],local_a8 - *piVar12);
                local_24 = (float)(iVar16 - piVar12[2]);
                local_1c = FUN_005a9d40(&local_2c);
                local_20 = *local_c8;
                if ((char)local_98 == '\0') {
                  local_20 = local_20 + 0x28;
                }
                local_18 = local_1c + local_20;
                local_c = local_9c;
                local_10 = local_a0;
                local_14 = uVar27;
                FUN_005a9e50(uVar27,local_a0,iVar16,&local_20);
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
              cVar5 = FUN_005a9ca0(local_a8,local_a0,iVar16);
              lVar34 = CONCAT44(local_fc,local_bc);
              lVar2 = CONCAT44(local_dc,local_ec);
              lVar32 = CONCAT44(local_f0,local_c0);
              lVar33 = CONCAT44(local_cc,local_b4);
              if (cVar5 != '\0') {
                iVar22 = *local_c8;
                if ((char)local_98 == '\0') {
                  iVar22 = iVar22 + 0x28;
                }
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
                if (iVar22 < *piVar12) {
                  local_18 = iVar22 + piVar12[1];
                  local_c = local_9c;
                  local_14 = local_a8;
                  local_10 = local_a0;
                  local_20 = iVar22;
                  local_1c = piVar12[1];
                  FUN_005a9e50(local_a8,local_a0,iVar16,&local_20);
                  lVar33 = CONCAT44(local_cc,local_b4);
                  lVar32 = CONCAT44(local_f0,local_c0);
                  lVar2 = CONCAT44(local_dc,local_ec);
                  lVar34 = CONCAT44(local_fc,local_bc);
                }
              }
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          iVar16 = iVar16 + 4;
        } while (iVar16 < 0xc);
      }
    }
    else {
      FUN_0042ef10();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005ade10 @ 005ade10  kind=gamemisc  attributed-by=none  size=78 */

undefined4 * FUN_005ade10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
    }
    param_1 = param_1 + 6;
    param_3 = param_3 + 6;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_005ae950 @ 005ae950  kind=gamemisc  attributed-by=none  size=68 */

void FUN_005ae950(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined8 *)((int)param_1 + 0x1c)) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 3);
    }
    param_3 = (undefined8 *)((int)param_3 + 0x1c);
  }
  return;
}


/* FUN_005ae9f0 @ 005ae9f0  kind=gamemisc  attributed-by=none  size=37 */

void FUN_005ae9f0(undefined4 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[3]);
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*param_1);
  }
  return;
}


/* FUN_005aea70 @ 005aea70  kind=gamemisc  attributed-by=none  size=23 */

void FUN_005aea70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


/* FUN_005c0100 @ 005c0100  kind=gamemisc  attributed-by=none  size=23 */

int FUN_005c0100(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0x18;
}


/* FUN_005c0350 @ 005c0350  kind=gamemisc  attributed-by=none  size=148 */

void FUN_005c0350(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar2 = *(float *)(param_1 + 8 + iVar4 * 0xc);
    pfVar1 = (float *)(param_1 + -4 + iVar4 * 0xc);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      iVar4 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar3 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -0xc + param_3 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -8 + param_3 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
    iVar3 = param_3 + -1;
  }
  FUN_005c21f0(param_1,iVar3,param_2,param_4,param_5);
  return;
}


/* FUN_005c1060 @ 005c1060  kind=gamemisc  attributed-by=none  size=154 */

void FUN_005c1060(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = (undefined8 *)((int)puVar5 + 0xc), puVar4 != param_2) {
      fVar2 = *(float *)(puVar4 + 1);
      uVar3 = *puVar4;
      if (fVar2 < *(float *)(param_1 + 1) || fVar2 == *(float *)(param_1 + 1)) {
        puVar7 = puVar4;
        puVar6 = puVar4;
        if (*(float *)(puVar5 + 1) <= fVar2 && fVar2 != *(float *)(puVar5 + 1)) {
          do {
            puVar6 = (undefined8 *)((int)puVar7 + -0xc);
            *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
            *(undefined4 *)((int)puVar7 + 4) = *(undefined4 *)(puVar7 + -1);
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((int)puVar7 + -4);
            pfVar1 = (float *)(puVar7 + -2);
            puVar7 = puVar6;
          } while (*pfVar1 <= fVar2 && fVar2 != *pfVar1);
        }
        *puVar6 = uVar3;
        *(float *)(puVar6 + 1) = fVar2;
        puVar5 = puVar4;
      }
      else {
        if (param_1 != puVar4) {
          puVar5 = puVar5 + 4;
          do {
            *(undefined4 *)((int)puVar5 + -0x14) = *(undefined4 *)(puVar5 + -4);
            *(undefined4 *)(puVar5 + -2) = *(undefined4 *)((int)puVar5 + -0x1c);
            *(undefined4 *)((int)puVar5 + -0xc) = *(undefined4 *)(puVar5 + -3);
            puVar7 = puVar5 + -4;
            puVar5 = (undefined8 *)((int)puVar5 + -0xc);
          } while (puVar7 != param_1);
        }
        *param_1 = uVar3;
        *(float *)(param_1 + 1) = fVar2;
        puVar5 = puVar4;
      }
    }
  }
  return;
}


/* FUN_005c14e0 @ 005c14e0  kind=gamemisc  attributed-by=none  size=279 */

void FUN_005c14e0(int param_1,int param_2,undefined4 param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar3 = (param_2 - param_1) / 0xc;
  iVar8 = iVar3 / 2;
  if (0 < iVar8) {
    iVar7 = iVar8 * 2 + 2;
    iVar5 = param_1 + iVar8 * 0xc;
    do {
      local_14 = *(undefined8 *)(iVar5 + -0xc);
      iVar7 = iVar7 + -2;
      local_c = *(undefined4 *)(iVar5 + -4);
      iVar8 = iVar8 + -1;
      iVar4 = iVar7;
      iVar6 = iVar8;
      while (iVar9 = iVar4, iVar9 < iVar3) {
        fVar2 = *(float *)(param_1 + 8 + iVar9 * 0xc);
        pfVar1 = (float *)(param_1 + -4 + iVar9 * 0xc);
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
          iVar9 = iVar9 + -1;
        }
        *(undefined4 *)(param_1 + iVar6 * 0xc) = *(undefined4 *)(param_1 + iVar9 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar6 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar9 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar6 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar9 * 0xc);
        iVar6 = iVar9;
        iVar4 = iVar9 * 2 + 2;
      }
      if (iVar9 == iVar3) {
        *(undefined4 *)(param_1 + iVar6 * 0xc) = *(undefined4 *)(param_1 + -0xc + iVar3 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar6 * 0xc) = *(undefined4 *)(param_1 + -8 + iVar3 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar6 * 0xc) = *(undefined4 *)(param_1 + -4 + iVar3 * 0xc);
        iVar6 = iVar3 + -1;
      }
      FUN_005c21f0(param_1,iVar6,iVar8,&local_14,param_3);
      iVar5 = iVar5 + -0xc;
    } while (0 < iVar8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c1690 @ 005c1690  kind=gamemisc  attributed-by=none  size=141 */

void FUN_005c1690(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fVar1 = (float)param_2[2];
  if ((float)param_1[2] <= fVar1 && fVar1 != (float)param_1[2]) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = fVar1;
  }
  fVar1 = (float)param_3[2];
  if ((float)param_2[2] <= fVar1 && fVar1 != (float)param_2[2]) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = fVar1;
    if ((float)param_1[2] <= fVar1 && fVar1 != (float)param_1[2]) {
      uVar3 = param_2[1];
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = uVar2;
      param_1[1] = uVar3;
      param_1[2] = fVar1;
    }
  }
  return;
}


/* FUN_005c1ef0 @ 005c1ef0  kind=gamemisc  attributed-by=none  size=167 */

void FUN_005c1ef0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_3 - param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar2 = iVar1 * 0xc;
    FUN_005c1690(param_1,iVar2 + param_1,iVar1 * 0x18 + param_1,param_4);
    FUN_005c1690(param_2 + iVar1 * -0xc,param_2,iVar2 + param_2,param_4);
    iVar3 = param_3 + iVar1 * -0xc;
    FUN_005c1690(param_3 + iVar1 * -0x18,iVar3,param_3,param_4);
    FUN_005c1690(param_1 + iVar2,param_2,iVar3,param_4);
    return;
  }
  FUN_005c1690(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_005c21f0 @ 005c21f0  kind=gamemisc  attributed-by=none  size=116 */

void FUN_005c21f0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  float fVar1;
  int iVar2;
  
  while ((param_3 < param_2 &&
         (iVar2 = (param_2 + -1) / 2, fVar1 = *(float *)(param_1 + 8 + iVar2 * 0xc),
         (float)param_4[2] <= fVar1 && fVar1 != (float)param_4[2]))) {
    *(undefined4 *)(param_1 + param_2 * 0xc) = *(undefined4 *)(param_1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar2 * 0xc);
    param_2 = iVar2;
  }
  *(undefined4 *)(param_1 + param_2 * 0xc) = *param_4;
  *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = param_4[1];
  *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = param_4[2];
  return;
}


/* FUN_005c36a0 @ 005c36a0  kind=gamemisc  attributed-by=none  size=61 */

int FUN_005c36a0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != 0) {
      FUN_005c3950(param_1);
    }
    param_1 = param_1 + 0x140;
    param_3 = param_3 + 0x140;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_005c36e0 @ 005c36e0  kind=gamemisc  attributed-by=none  size=138 */

int FUN_005c36e0(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006f3d19;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_005a7990(param_1);
      local_8 = 2;
      FUN_005a7990(param_1 + 0xc);
    }
    param_3 = param_3 + 0x18;
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_005c3790 @ 005c3790  kind=gamemisc  attributed-by=none  size=60 */

undefined4 * FUN_005c3790(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_005c3d60 @ 005c3d60  kind=gamemisc  attributed-by=none  size=120 */

int * FUN_005c3d60(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  iVar2 = FUN_00594890(param_1);
  if (iVar2 != *in_ECX) {
    if ((*(int *)(iVar2 + 0x10) <= *piVar1) &&
       ((*(int *)(iVar2 + 0x10) < *piVar1 || (*(int *)(iVar2 + 0x14) <= piVar1[1])))) {
      return (int *)(iVar2 + 0x18);
    }
  }
  local_10 = *piVar1;
  local_c = piVar1[1];
  local_8 = 0;
  iVar3 = FUN_00639be0(&local_10);
  FUN_005c0630(&param_1,iVar2,iVar3 + 0x10,iVar3);
  return param_1 + 6;
}


/* FUN_005c3ea0 @ 005c3ea0  kind=gamemisc  attributed-by=none  size=76 */

void FUN_005c3ea0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  if (*(char *)(iVar2 + 0xd) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xd);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0xd);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *in_ECX = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0xd);
    while ((cVar1 == '\0' && (*in_ECX == *(int *)(iVar2 + 8)))) {
      *in_ECX = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0xd);
    }
    *in_ECX = iVar2;
  }
  return;
}


/* FUN_005c3ef0 @ 005c3ef0  kind=gamemisc  attributed-by=none  size=61 */

uint * FUN_005c3ef0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *in_ECX;
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = in_ECX[3];
  uVar3 = *param_2;
  uVar2 = *param_1;
  *param_1 = *param_1 - uVar3;
  param_1[1] = (param_1[1] - param_2[1]) - (uint)(uVar2 < uVar3);
  uVar3 = param_2[2];
  puVar1 = param_1 + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - uVar3;
  param_1[3] = (param_1[3] - param_2[3]) - (uint)(uVar2 < uVar3);
  return param_1;
}


/* FUN_005c4800 @ 005c4800  kind=gamemisc  attributed-by=none  size=1482 */

void FUN_005c4800(float param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  float fVar5;
  uint *puVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_b4;
  uint local_b0;
  int local_ac;
  uint local_a8;
  uint *local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  float local_94;
  int local_90;
  int local_8c;
  float local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  float local_74;
  float local_70;
  uint *local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_84 = (int)((int)param_1 + -0x4000 + ((int)param_1 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  local_80 = (int)((param_2 - 0x4000) + ((int)(param_2 - 0x4000) >> 0x1f & 0x3fffU)) >> 0xe;
  local_68 = (float)((int)((int)param_1 + 0x4000 + ((int)param_1 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe
                    );
  fVar5 = (float)((int)(((int)(param_2 + 0x4000) >> 0x1f & 0x3fffU) + param_2 + 0x4000) >> 0xe);
  local_94 = param_1;
  local_98 = param_2;
  local_7c = in_ECX;
  local_74 = fVar5;
  fVar7 = (float10)FUN_004c0ef0((double)(int)param_2 * 0.0005,0x40aabe0000000000);
  local_70 = (float)fVar7;
  local_88 = local_70 * 3.0 * 256.0;
  local_60 = local_88;
  fVar7 = (float10)FUN_004c0ef0((double)(int)param_1 * 0.0005,0x40d6df4000000000);
  fVar8 = local_94;
  uVar1 = local_98;
  local_5c = (float)fVar7 * 3.0 * 256.0;
  puVar6 = (uint *)0x0;
  local_a4 = (uint *)0x0;
  local_70 = (float)(int)((float)(int)param_1 + local_88);
  local_8c = 0;
  local_88 = (float)(int)((float)(int)local_98 + local_5c);
  local_a0 = local_84;
  if (local_84 <= (int)local_68) {
    local_90 = local_84 * 0x400 + 0x10002f;
    local_78 = local_90;
    do {
      local_9c = local_80;
      if (local_80 <= (int)fVar5) {
        do {
          if ((((local_a0 < 0) || (local_9c < 0)) || (0x20002e < local_78)) ||
             ((0x3ff < local_9c ||
              (local_6c = *(uint **)(in_ECX + (local_9c + local_78) * 4), local_6c == (uint *)0x0)))
             ) goto LAB_005c4db1;
          local_48 = *local_6c;
          uStack_44 = ((int)local_48 >> 0x1f) << 0x10 | local_48 >> 0x10;
          local_48 = local_48 * 0x10000;
          local_40 = local_6c[1];
          uStack_3c = ((int)local_40 >> 0x1f) << 0x10 | local_40 >> 0x10;
          local_40 = local_40 * 0x10000;
          local_18 = CONCAT44((uStack_44 -
                              (((int)local_70 >> 0x1f) << 0x10 | (uint)local_70 >> 0x10)) -
                              (uint)(local_48 < (uint)((int)local_70 * 0x10000)),
                              local_48 + (int)local_70 * -0x10000);
          local_10 = CONCAT44((uStack_3c -
                              (((int)local_88 >> 0x1f) << 0x10 | (uint)local_88 >> 0x10)) -
                              (uint)(local_40 < (uint)((int)local_88 * 0x10000)),
                              local_40 + (int)local_88 * -0x10000);
          local_64 = (float)local_10;
          local_30 = (float)local_18 * 1.5258789e-05;
          local_2c = local_64 * 1.5258789e-05;
          iVar2 = (int)(local_2c * local_2c + local_30 * local_30);
          if ((local_a4 == (uint *)0x0) || (iVar2 < local_8c)) {
            local_a4 = local_6c;
            local_8c = iVar2;
          }
          local_9c = local_9c + 1;
          fVar5 = local_74;
          in_ECX = local_7c;
          puVar6 = local_a4;
        } while (local_9c <= (int)local_74);
      }
      local_a0 = local_a0 + 1;
      local_78 = local_78 + 0x400;
    } while (local_a0 <= (int)local_68);
    if (puVar6 != (uint *)0x0) {
      fVar10 = 0.0;
      fVar9 = 0.0;
      do {
        local_78 = local_80;
        if (local_80 <= (int)fVar5) {
          do {
            if (((local_84 < 0) || (local_78 < 0)) ||
               ((0x20002e < local_90 ||
                ((0x3ff < local_78 ||
                 (local_6c = *(uint **)(in_ECX + (local_78 + local_90) * 4), local_6c == (uint *)0x0
                 )))))) goto LAB_005c4db1;
            local_58 = *local_6c;
            uStack_54 = ((int)local_58 >> 0x1f) << 0x10 | local_58 >> 0x10;
            local_58 = local_58 * 0x10000;
            local_50 = local_6c[1];
            uStack_4c = ((int)local_50 >> 0x1f) << 0x10 | local_50 >> 0x10;
            local_50 = local_50 * 0x10000;
            local_28 = CONCAT44((uStack_54 -
                                (((int)local_70 >> 0x1f) << 0x10 | (uint)local_70 >> 0x10)) -
                                (uint)(local_58 < (uint)((int)local_70 * 0x10000)),
                                local_58 + (int)local_70 * -0x10000);
            local_20 = CONCAT44((uStack_4c -
                                (((int)local_88 >> 0x1f) << 0x10 | (uint)local_88 >> 0x10)) -
                                (uint)(local_50 < (uint)((int)local_88 * 0x10000)),
                                local_50 + (int)local_88 * -0x10000);
            local_64 = (float)local_20;
            local_38 = (float)local_28 * 1.5258789e-05;
            local_34 = local_64 * 1.5258789e-05;
            fVar5 = (float)((int)(local_34 * local_34 + local_38 * local_38) - local_8c) * 5e-07;
            if (1.0 < fVar5) {
              fVar5 = 1.0;
            }
            fVar10 = fVar10 + (1.0 - fVar5);
            local_78 = local_78 + 1;
            fVar9 = fVar9 + (float)local_6c[3] * (1.0 - fVar5);
            fVar5 = local_74;
            in_ECX = local_7c;
          } while (local_78 <= (int)local_74);
        }
        local_84 = local_84 + 1;
        local_90 = local_90 + 0x400;
        in_ECX = local_7c;
      } while (local_84 <= (int)local_68);
      if (0.0 < fVar10) {
        local_74 = fVar9 / fVar10;
        uVar3 = (int)local_98 >> 0x1f;
        uVar4 = (int)local_94 >> 0x1f;
        local_68 = local_74;
        iVar2 = FUN_00487da0((int)((int)local_94 + (uVar4 & 0x7ff)) >> 0xb,
                             (int)(local_98 + (uVar3 & 0x7ff)) >> 0xb);
        if (((local_74 < 0.2) && (iVar2 != 0)) && (*(int *)(iVar2 + 0x18) == 3)) {
          local_b0 = uVar3 << 0x10 | uVar1 >> 0x10;
          local_b4 = uVar1 << 0x10;
          local_a8 = uVar4 << 0x10 | (uint)fVar8 >> 0x10;
          local_ac = (int)fVar8 << 0x10;
          fVar7 = (float10)FUN_005f8e10(&local_ac,&local_b4);
          local_94 = (float)fVar7;
          fVar5 = 1.0 - local_94;
          fVar8 = 0.0;
          if (0.0 < fVar5) {
            fVar8 = fVar5 * fVar5;
          }
          local_68 = fVar8 * 0.3 + local_74;
          if (1.0 < local_68) {
            local_68 = 1.0;
          }
        }
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
LAB_005c4db1:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c7730 @ 005c7730  kind=gamemisc  attributed-by=none  size=2867 */

void ** FUN_005c7730(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void **ppvVar7;
  bool bVar8;
  float fVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((*(ushort *)(param_1 + 0x7a) & 0x40) != 0) {
    return &local_10;
  }
  cVar3 = *(char *)(param_1 + 0x30);
  ppvVar7 = (void **)CONCAT31((int3)((uint)&local_10 >> 8),cVar3);
  ExceptionList = &local_10;
  if (cVar3 == -0x78) {
LAB_005c81ee:
    *(undefined2 *)(param_1 + 0x350) = 4;
    *(undefined1 *)(param_1 + 0x35d) = 6;
    iVar6 = rand();
    ppvVar7 = (void **)(iVar6 / 5);
    *(char *)(iVar2 + 0x351) = (char)(iVar6 % 5) + '\x02';
LAB_005c8227:
    *(undefined4 *)(iVar2 + 0xf60) = 0x3dcccccd;
    *(undefined4 *)(iVar2 + 0xf5c) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 0xf64) = 0x41200000;
    *(undefined4 *)(iVar2 + 0xf68) = 0x41200000;
    ExceptionList = local_10;
    return ppvVar7;
  }
  if ((((cVar3 == -0x7c) || (cVar3 == -0x80)) || (cVar3 == -0x7f)) ||
     ((((cVar3 == -0x7e || (cVar3 == -0x7d)) ||
       ((cVar3 == -0x7b || ((cVar3 == -0x7a || (cVar3 == -0x79)))))) || (cVar3 == -0x77)))) {
    if (cVar3 != -0x78) {
      *(undefined2 *)(param_1 + 0x350) = 4;
      *(undefined1 *)(param_1 + 0x35d) = 6;
      goto LAB_005c8227;
    }
    goto LAB_005c81ee;
  }
  puVar1 = (undefined1 *)(param_1 + 0x8c8);
  *(undefined2 *)(param_1 + 0x7b0) = 0;
  *puVar1 = 0;
  *(undefined1 *)(param_1 + 0x8c9) = 0;
  *(undefined2 *)(param_1 + 0x698) = 0;
  *(undefined2 *)(param_1 + 0x350) = 0;
  *(undefined2 *)(param_1 + 0x468) = 0;
  *(undefined2 *)(param_1 + 0x580) = 0;
  *(undefined2 *)(param_1 + 0x238) = 0;
  if ((*(ushort *)(param_1 + 0x7a) & 0x18) != 0) {
LAB_005c7e0c:
    *(undefined2 *)(param_1 + 0x7b0) = 0;
    *puVar1 = 0;
LAB_005c7e18:
    *(undefined1 *)(param_1 + 0x8c9) = 0;
    goto LAB_005c7e1f;
  }
  if (*(int *)(param_1 + 0x28) == 6) goto LAB_005c7e1f;
  iVar6 = *(int *)(param_1 + 0x2c);
  if (iVar6 == 0x76) goto LAB_005c7e0c;
  if (iVar6 == 0x75) {
    param_1 = 0x5c;
    FUN_0066add0(&param_1);
    *(undefined4 *)(iVar2 + 0x10b8) = 0;
    param_1 = 0x11;
    FUN_0066add0(&param_1);
    param_1 = 0x60;
    FUN_0066add0(&param_1);
    goto LAB_005c7e1f;
  }
  if (iVar6 == 0x6c) {
LAB_005c7dce:
    param_1 = 0x5b;
    FUN_0066add0(&param_1);
    param_1 = 0x5d;
    FUN_0066add0(&param_1);
LAB_005c7e00:
    *(undefined1 *)(iVar2 + 0x8c8) = 3;
    *(undefined1 *)(iVar2 + 0x8c9) = 0x11;
LAB_005c7db2:
    *(undefined1 *)(iVar2 + 0x8d5) = 2;
    *(undefined2 *)(iVar2 + 0x7b0) = 0;
  }
  else {
    if ((iVar6 == 0x72) || (iVar6 == 0x2e)) {
      if ((iVar6 == 0x6c) || (iVar6 == 0x72)) goto LAB_005c7dce;
      goto LAB_005c7e00;
    }
    if (iVar6 != 0x73) {
      if (iVar6 == 0x6d) {
        param_1 = 0x56;
        FUN_0066add0(&param_1);
        param_1 = 0x5d;
        FUN_0066add0(&param_1);
        param_1 = 0x5b;
        FUN_0066add0(&param_1);
        *(undefined1 *)(iVar2 + 0x8c9) = 2;
        *(undefined1 *)(iVar2 + 0x8c8) = 3;
        *(undefined1 *)(iVar2 + 0x8d5) = 7;
        *(undefined2 *)(iVar2 + 0x7b0) = 0x203;
        *(undefined1 *)(iVar2 + 0x7bd) = 7;
        goto LAB_005c7e1f;
      }
      if (iVar6 == 0x51) {
        param_1 = 0x57;
        FUN_0066add0(&param_1);
        *puVar1 = 3;
        *(undefined1 *)(iVar2 + 0x8c9) = 0xc;
        *(undefined1 *)(iVar2 + 0x8d5) = 0xb;
        *(undefined2 *)(iVar2 + 0x7b0) = 0xc03;
        *(undefined1 *)(iVar2 + 0x7bd) = 0xb;
        goto LAB_005c7e1f;
      }
      if (iVar6 == 0x52) {
        *puVar1 = 3;
        *(undefined1 *)(param_1 + 0x8d5) = 1;
        *(undefined2 *)(param_1 + 0x7b0) = 3;
        *(undefined1 *)(param_1 + 0x7bd) = 1;
        goto LAB_005c7e18;
      }
      if ((((iVar6 == 0x2f) || (iVar6 == 0x6f)) || (iVar6 == 0x71)) || (iVar6 == 0x70))
      goto LAB_005c7e1f;
      if ((iVar6 != 0x2d) && (iVar6 != 0x2b)) {
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000003;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
        }
        *(char *)(iVar2 + 0x30) = (char)uVar5 + '\x01';
        if (*(int *)(iVar2 + 0x2c) == 0x61) {
          *(undefined1 *)(iVar2 + 0x30) = 4;
        }
        switch(*(undefined1 *)(iVar2 + 0x30)) {
        case 1:
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          *(char *)(iVar2 + 0x31) = (char)uVar5;
          iVar6 = rand();
          iVar6 = iVar6 % 3;
          if (iVar6 == 0) {
            *puVar1 = 3;
            iVar6 = rand();
            *(undefined1 *)(iVar2 + 0x8d5) = 1;
            *(undefined2 *)(iVar2 + 0x7b0) = 0;
            *(char *)(iVar2 + 0x8c9) = (char)(iVar6 % 3) + '\x0f';
          }
          else {
            if (iVar6 == 1) {
              *puVar1 = 3;
              iVar6 = rand();
              *(undefined1 *)(iVar2 + 0x8d5) = 1;
              *(undefined1 *)(iVar2 + 0x7b0) = 3;
              *(char *)(iVar2 + 0x8c9) = (char)(iVar6 % 3);
              iVar6 = rand();
              cVar3 = (char)(iVar6 % 3);
              goto LAB_005c7bd0;
            }
            if (iVar6 == 2) {
              *puVar1 = 3;
              iVar6 = rand();
              *(undefined1 *)(iVar2 + 0x8d5) = 1;
              *(undefined2 *)(iVar2 + 0x7b0) = 0xd03;
              *(char *)(iVar2 + 0x8c9) = (char)(iVar6 % 3);
              goto LAB_005c7bd6;
            }
          }
          break;
        case 2:
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          *(char *)(iVar2 + 0x31) = (char)uVar5;
          *puVar1 = 3;
          iVar6 = rand();
          *(undefined1 *)(iVar2 + 0x8d5) = 2;
          *(char *)(iVar2 + 0x8c9) = (char)(iVar6 % 3) + '\x06';
          break;
        case 3:
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          *(char *)(iVar2 + 0x31) = (char)uVar5;
          iVar6 = rand();
          iVar6 = iVar6 % 3;
          if (iVar6 == 0) {
            *(undefined1 *)(iVar2 + 0x8c9) = 10;
          }
          else {
            if (iVar6 != 1) {
              if (iVar6 == 2) {
                *puVar1 = 3;
                *(undefined1 *)(iVar2 + 0x8c9) = 0xc;
                *(undefined1 *)(iVar2 + 0x8d5) = 0xb;
                *(undefined2 *)(iVar2 + 0x7b0) = 0xc03;
                *(undefined1 *)(iVar2 + 0x7bd) = 0xb;
              }
              break;
            }
            *(undefined1 *)(iVar2 + 0x8c9) = 0xb;
          }
          *puVar1 = 3;
          *(undefined1 *)(iVar2 + 0x8d5) = 2;
          *(undefined2 *)(iVar2 + 0x7b0) = 0;
          break;
        case 4:
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          *(char *)(iVar2 + 0x31) = (char)uVar5;
          *puVar1 = 3;
          iVar6 = rand();
          *(undefined1 *)(iVar2 + 0x8d5) = 1;
          cVar3 = (char)(iVar6 % 3) + '\x03';
          *(char *)(iVar2 + 0x8c9) = cVar3;
          if (cVar3 == '\x05') {
            *(undefined2 *)(iVar2 + 0x7b0) = 0;
            *(undefined1 *)(iVar2 + 0x7bd) = 0;
          }
          else {
            *(undefined1 *)(iVar2 + 0x7b0) = 3;
LAB_005c7bd0:
            *(char *)(iVar2 + 0x7b1) = cVar3;
LAB_005c7bd6:
            *(undefined1 *)(iVar2 + 0x7bd) = 1;
          }
        }
        if ((*(byte *)(iVar2 + 0x7a) & 0x20) == 0) {
          cVar3 = *(char *)(iVar2 + 0x8c9);
          param_1 = 1;
          if (((cVar3 == '\n') || (cVar3 == '\v')) || (cVar3 == '\f')) {
            param_1 = 0x19;
          }
          else if (((cVar3 == '\x06') || (cVar3 == '\a')) || (cVar3 == '\b')) {
            param_1 = 0x1a;
          }
          else if (((cVar3 == '\x03') || (cVar3 == '\x04')) || (cVar3 == '\x05')) {
            param_1 = 0x1b;
          }
          *(undefined1 *)(iVar2 + 0x350) = 4;
          *(undefined2 *)(iVar2 + 0x360) = *(undefined2 *)(iVar2 + 0x34);
          *(char *)(iVar2 + 0x35d) = (char)param_1;
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          bVar8 = uVar5 == 0;
          if ((int)uVar5 < 0) {
            bVar8 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar8) {
            *(undefined2 *)(iVar2 + 0x6a8) = *(undefined2 *)(iVar2 + 0x34);
            *(undefined1 *)(iVar2 + 0x698) = 7;
            *(char *)(iVar2 + 0x6a5) = (char)param_1;
          }
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          bVar8 = uVar5 == 0;
          if ((int)uVar5 < 0) {
            bVar8 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar8) {
            *(undefined2 *)(iVar2 + 0x590) = *(undefined2 *)(iVar2 + 0x34);
            *(undefined1 *)(iVar2 + 0x580) = 5;
            *(char *)(iVar2 + 0x58d) = (char)param_1;
          }
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          bVar8 = uVar5 == 0;
          if ((int)uVar5 < 0) {
            bVar8 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar8) {
            *(undefined2 *)(iVar2 + 0x478) = *(undefined2 *)(iVar2 + 0x34);
            *(undefined1 *)(iVar2 + 0x468) = 6;
            *(char *)(iVar2 + 0x475) = (char)param_1;
          }
          iVar6 = rand();
          if (iVar6 % 10 == 0) {
            *(undefined1 *)(iVar2 + 0x238) = 8;
            *(undefined2 *)(iVar2 + 0x248) = *(undefined2 *)(iVar2 + 0x34);
            uVar5 = rand();
            uVar5 = uVar5 & 0x80000001;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
            }
            *(char *)(iVar2 + 0x245) = '\f' - (uVar5 != 0);
          }
          iVar6 = rand();
          if (iVar6 % 10 == 0) {
            *(undefined1 *)(iVar2 + 0xaf8) = 9;
            *(undefined2 *)(iVar2 + 0xb08) = *(undefined2 *)(iVar2 + 0x34);
            uVar5 = rand();
            uVar5 = uVar5 & 0x80000001;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
            }
            *(char *)(iVar2 + 0xb05) = '\f' - (uVar5 != 0);
          }
          iVar6 = rand();
          if (iVar6 % 10 == 0) {
            *(undefined1 *)(iVar2 + 0x9e0) = 9;
            *(undefined2 *)(iVar2 + 0x9f0) = *(undefined2 *)(iVar2 + 0x34);
            uVar5 = rand();
            uVar5 = uVar5 & 0x80000001;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
            }
            *(char *)(iVar2 + 0x9ed) = '\f' - (uVar5 != 0);
          }
        }
        goto LAB_005c7e1f;
      }
      param_1 = 0x5f;
      FUN_0066add0(&param_1);
      *(undefined1 *)(iVar2 + 0x31) = 2;
      *puVar1 = 3;
      uVar5 = rand();
      uVar5 = uVar5 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      *(char *)(iVar2 + 0x8c9) = (char)uVar5 + '\n';
      goto LAB_005c7db2;
    }
    param_1 = 0x56;
    FUN_0066add0(&param_1);
    param_1 = 0x5d;
    FUN_0066add0(&param_1);
    *(undefined1 *)(iVar2 + 0x8c9) = 4;
    *(undefined1 *)(iVar2 + 0x8c8) = 3;
    *(undefined1 *)(iVar2 + 0x8d5) = 1;
    *(undefined2 *)(iVar2 + 0x7b0) = 0x403;
    *(undefined1 *)(iVar2 + 0x7bd) = 1;
  }
LAB_005c7e1f:
  *(undefined2 *)(iVar2 + 0x8d8) = *(undefined2 *)(iVar2 + 0x34);
  *(undefined2 *)(iVar2 + 0x7c0) = *(undefined2 *)(iVar2 + 0x34);
  if ((char)param_2 != '\0') goto LAB_005c81a6;
  switch(*(undefined4 *)(iVar2 + 0x2c)) {
  case 0x11:
  case 0x5e:
  case 0x61:
    *(undefined4 *)(iVar2 + 0xf58) = 0x43c80000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x3fc00000;
    param_2 = 0x5d;
    goto LAB_005c7f52;
  case 0x15:
    *(undefined4 *)(iVar2 + 0xf58) = 0x437a0000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x40000000;
    param_2 = 0x45;
    FUN_0066add0(&param_2);
    goto LAB_005c8021;
  case 0x19:
    *(undefined4 *)(iVar2 + 0xf58) = 0x43480000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x3f000000;
    goto LAB_005c8021;
  case 0x2e:
  case 0x52:
    param_2 = 0x56;
    goto LAB_005c7f48;
  case 0x2f:
  case 0x58:
    *(undefined4 *)(iVar2 + 0xf58) = 0x437a0000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x40400000;
    *(float *)(iVar2 + 0xf5c) = *(float *)(iVar2 + 0xf5c) * 0.5;
    goto LAB_005c8021;
  case 0x51:
    param_2 = 0x5c;
LAB_005c7f48:
    *(undefined4 *)(iVar2 + 0xf58) = 0x437a0000;
LAB_005c7f52:
    *(undefined4 *)(iVar2 + 0xf64) = 0x40400000;
    *(undefined4 *)(iVar2 + 0xf68) = 0x40400000;
    FUN_0066add0(&param_2);
    break;
  case 0x55:
    *(undefined4 *)(iVar2 + 0xf58) = 0x447a0000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x40000000;
LAB_005c8021:
    *(undefined4 *)(iVar2 + 0xf68) = 0x40400000;
    *(undefined4 *)(iVar2 + 0xf64) = 0x40400000;
    break;
  case 0x56:
    *(undefined2 *)(iVar2 + 0x30) = 0x103;
    break;
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x76:
    *(undefined4 *)(iVar2 + 0xf58) = 0x451c4000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x40c00000;
    *(undefined4 *)(iVar2 + 0xf64) = 0x40a00000;
    *(undefined4 *)(iVar2 + 0xf68) = 0x40a00000;
    cVar3 = FUN_00444820(uVar4);
    if (cVar3 == '\0') {
      *(undefined4 *)(iVar2 + 0xf5c) = 0x3f000000;
    }
    else {
      *(undefined4 *)(iVar2 + 0xf5c) = 0x3f400000;
    }
    break;
  case 0x75:
    *(undefined4 *)(iVar2 + 0xf58) = 0x451c4000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x40a00000;
    *(undefined4 *)(iVar2 + 0xf64) = 0x40800000;
    *(undefined4 *)(iVar2 + 0xf68) = 0x40a00000;
    break;
  case 0x77:
    *(undefined4 *)(iVar2 + 0xf5c) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xf58) = 0x451c4000;
    *(undefined4 *)(iVar2 + 0xf60) = 0x40c00000;
    *(undefined4 *)(iVar2 + 0xf64) = 0x41200000;
    *(undefined4 *)(iVar2 + 0xf68) = 0x41200000;
  }
  if ((*(ushort *)(iVar2 + 0x7a) & 0x200) != 0) {
    fVar9 = *(float *)(iVar2 + 0xf58) * 15.0;
    *(float *)(iVar2 + 0xf58) = fVar9;
    if (10000.0 < fVar9) {
      *(undefined4 *)(iVar2 + 0xf58) = 0x461c4000;
    }
    *(float *)(iVar2 + 0xf60) = *(float *)(iVar2 + 0xf60) * 3.0;
    *(float *)(iVar2 + 0xf5c) = *(float *)(iVar2 + 0xf5c) * 0.75;
    *(float *)(iVar2 + 0xf64) = *(float *)(iVar2 + 0xf64) + 2.0;
    *(float *)(iVar2 + 0xf68) = *(float *)(iVar2 + 0xf68) + 2.0;
    local_8 = 0;
    param_2 = 0x5c;
    FUN_0066add0(&param_2);
    param_2 = 0x5d;
    FUN_0066add0(&param_2);
    param_2 = 0x56;
    FUN_0066add0(&param_2);
    param_2 = 0x59;
    FUN_0066add0(&param_2);
    param_2 = 0x57;
    FUN_0066add0(&param_2);
    uVar4 = rand();
    FUN_0066add0((uVar4 % 0) * 4);
    iVar6 = rand();
    param_2 = 0x11;
    *(int *)(iVar2 + 0x10b8) = iVar6 % 3;
    FUN_0066add0(&param_2);
    param_2 = 0x60;
    FUN_0066add0(&param_2);
    FUN_005fb860();
  }
LAB_005c81a6:
  iVar6 = rand();
  *(int *)(iVar2 + 0x7b4) = iVar6;
  iVar6 = rand();
  *(int *)(iVar2 + 0x8cc) = iVar6;
  iVar6 = rand();
  *(int *)(iVar2 + 0x69c) = iVar6;
  iVar6 = rand();
  *(int *)(iVar2 + 0x354) = iVar6;
  iVar6 = rand();
  *(int *)(iVar2 + 0x584) = iVar6;
  ppvVar7 = (void **)rand();
  *(void ***)(iVar2 + 0x46c) = ppvVar7;
  ExceptionList = local_10;
  return ppvVar7;
}


/* FUN_005cade0 @ 005cade0  kind=gamemisc  attributed-by=none  size=749 */

void FUN_005cade0(undefined8 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int in_ECX;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  uint *local_4c;
  int local_48;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar6 = (int)(param_3 + -0x4000 + (param_3 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (int)(param_2 + 0x4000 + (param_2 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar12 = (int)((param_2 + -0x4000 >> 0x1f & 0x3fffU) + param_2 + -0x4000) >> 0xe;
  fVar13 = (float10)FUN_004c0ef0((double)param_3 * 0.0005,0x40aabe0000000000);
  fVar14 = (float10)FUN_004c0ef0((double)param_2 * 0.0005,0x40d6df4000000000);
  local_4c = (uint *)0x0;
  uVar8 = (uint)((float)param_2 + (float)fVar13 * 3.0 * 256.0);
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
  uVar9 = (uint)((float)param_3 + (float)fVar14 * 3.0 * 256.0);
  local_48 = 0;
  if (iVar12 <= iVar7) {
    iVar10 = iVar12 * 0x400 + 0x10002f;
    iVar4 = iVar6;
    do {
      for (; iVar4 <= (int)(param_3 + 0x4000 + (param_3 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar4 = iVar4 + 1) {
        if ((((-1 < iVar12) && (-1 < iVar4)) && (iVar10 < 0x20002f)) &&
           ((iVar4 < 0x400 &&
            (puVar1 = *(uint **)(in_ECX + (iVar10 + iVar4) * 4), puVar1 != (uint *)0x0)))) {
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          local_18 = CONCAT44(((((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10) -
                              (((int)uVar8 >> 0x1f) << 0x10 | uVar8 >> 0x10)) -
                              (uint)(uVar2 * 0x10000 < uVar8 * 0x10000),
                              uVar2 * 0x10000 + uVar8 * -0x10000);
          local_10 = CONCAT44(((((int)uVar3 >> 0x1f) << 0x10 | uVar3 >> 0x10) -
                              (((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10)) -
                              (uint)(uVar3 * 0x10000 < uVar9 * 0x10000),
                              uVar3 * 0x10000 + uVar9 * -0x10000);
          iVar11 = (int)((float)local_10 * 1.5258789e-05 * (float)local_10 * 1.5258789e-05 +
                        (float)local_18 * 1.5258789e-05 * (float)local_18 * 1.5258789e-05);
          if ((local_4c == (uint *)0x0) || (iVar11 < local_48)) {
            *param_1 = CONCAT44(iVar4,iVar12);
            local_4c = puVar1;
            local_48 = iVar11;
          }
        }
      }
      iVar12 = iVar12 + 1;
      iVar10 = iVar10 + 0x400;
      iVar4 = iVar6;
    } while (iVar12 <= iVar7);
  }
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005dc644 @ 005dc644  kind=gamemisc  attributed-by=none  size=112 */

void FUN_005dc644(void)

{
  undefined4 uStack00000010;
  void *in_stack_00000074;
  undefined4 uStack00000080;
  undefined4 uStack00000084;
  undefined4 uStack00000088;
  uint in_stack_0000031c;
  void *in_stack_00000324;
  
  uStack00000080 = 0;
  uStack00000084 = 0;
  uStack00000088 = 0;
  if (in_stack_00000074 != (void *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&stack0x00000074);
                    /* WARNING: Subroutine does not return */
    operator_delete(in_stack_00000074);
  }
  uStack00000010 = 0x5dc6b3;
  ExceptionList = in_stack_00000324;
  __security_check_cookie(in_stack_0000031c ^ (uint)&stack0x00000014);
  return;
}


/* FUN_005effa0 @ 005effa0  kind=gamemisc  attributed-by=none  size=1920 */

void FUN_005effa0(uint param_1,uint param_2,float param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  float10 fVar4;
  double dVar5;
  float fVar6;
  undefined1 auStack_90 [4];
  float local_8c;
  float local_88;
  uint local_84;
  float local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  uint local_6c;
  float local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  float local_28;
  undefined1 local_20 [20];
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_90;
  local_60 = (double)(int)param_2 * 0.01;
  local_58 = (double)(int)param_1 * 0.01;
  local_6c = param_1;
  local_84 = param_2;
  local_68 = param_3;
  fVar4 = (float10)FUN_004c0ef0(local_58,local_60);
  local_80 = (float)fVar4;
  local_8c = 1.0 - local_80 * local_80;
  fVar4 = (float10)FUN_004c0ef0((double)*(int *)(local_78 + 0x8001dc) + local_58 + 843.0,
                                (double)*(int *)(local_78 + 0x8001e0) + local_60 + 984.0);
  local_80 = (float)fVar4 * 0.1;
  fVar4 = (float10)FUN_004c0ef0((double)(int)param_1 * 0.0025 +
                                (double)*(int *)(local_78 + 0x8001dc),
                                (double)(int)param_2 * 0.0025 +
                                (double)*(int *)(local_78 + 0x8001e0));
  local_88 = 1.0 - ABS(local_80 + (float)fVar4) * ((1.0 - local_8c * local_8c) * 1.3 + 2.0);
  fVar4 = (float10)FUN_004c0ef0((double)(int)param_1 * 0.005 + 94.0,
                                (double)(int)param_2 * 0.005 + 874.0);
  local_8c = (float)fVar4;
  local_88 = local_88 * (local_8c * 0.4 + 0.6);
  uVar3 = (int)param_1 >> 0x1f;
  iVar1 = FUN_00487da0((int)(param_1 + (uVar3 & 0x7ff)) >> 0xb,
                       (int)(param_2 + ((int)param_2 >> 0x1f & 0x7ffU)) >> 0xb);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x18) == 6 || (*(int *)(iVar1 + 0x18) == 7)))) {
    local_4c = ((int)local_84 >> 0x1f) << 0x10 | local_84 >> 0x10;
    local_50 = local_84 << 0x10;
    local_58 = (double)CONCAT44(uVar3 << 0x10 | param_1 >> 0x10,param_1 << 0x10);
    fVar4 = (float10)FUN_005f8e10(&local_58,&local_50);
    local_8c = (float)fVar4;
    local_80 = 0.5;
    if (local_88 < 1.0) {
      if (1.0 < local_88 + 0.5) {
        local_80 = 1.0 - local_88;
      }
    }
    else {
      local_80 = 0.0;
    }
    if (0.36 < local_8c) {
      if (local_8c < 1.0) {
        dVar5 = (double)local_8c;
        libm_sse2_sqrt_precise();
        fVar6 = ((float)dVar5 - 0.6) / 0.39999998;
        fVar6 = 1.0 - fVar6 * fVar6;
        local_88 = fVar6 * fVar6 * local_80 + local_88;
      }
    }
    else {
      fVar6 = (1.0 - local_8c / 0.36) * 1.5;
      if (1.0 < fVar6) {
        fVar6 = 1.0;
      }
      local_88 = (local_80 + local_88) * (1.0 - fVar6 * fVar6) + fVar6 * fVar6 * 0.0;
    }
  }
  if (0.0 <= local_88) {
    fVar4 = (float10)FUN_005f9340();
    local_8c = (float)fVar4;
    fVar6 = local_8c * 2.0;
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    local_80 = (fVar6 * 3.0 * fVar6 - fVar6 * 2.0 * fVar6 * fVar6) * local_88;
    fVar4 = (float10)FUN_005f9f70();
    local_8c = (float)fVar4;
    fVar6 = local_8c;
    if (1.0 < local_8c) {
      fVar6 = 1.0;
    }
    local_68 = (fVar6 * 3.0 * fVar6 - fVar6 * 2.0 * fVar6 * fVar6) * local_80;
    fVar4 = (float10)FUN_005989d0(param_1,local_84);
    local_8c = (float)fVar4;
    fVar6 = local_8c * 2.0;
    if (1.0 < local_8c * 2.0) {
      fVar6 = 1.0;
    }
    fVar6 = 1.0 - (fVar6 * 3.0 * fVar6 - fVar6 * 2.0 * fVar6 * fVar6);
    local_88 = fVar6 * fVar6 * fVar6 * local_68;
  }
  else {
    local_88 = 0.0;
  }
  fVar6 = local_88;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x18) == 2) {
      local_64 = ((int)local_84 >> 0x1f) << 0x10 | local_84 >> 0x10;
      local_68 = (float)(local_84 << 0x10);
      local_7c = uVar3 << 0x10 | param_1 >> 0x10;
      local_80 = (float)(param_1 << 0x10);
      fVar4 = (float10)FUN_005f8e10(&local_80,&local_68);
      fVar6 = 1.0 - (float)fVar4;
      local_8c = 0.0;
      if (0.0 < fVar6) {
        local_8c = fVar6 * fVar6;
      }
      local_8c = (local_88 * 3.0 * local_88 - local_88 * 2.0 * local_88 * local_88) + local_8c;
      __security_check_cookie(local_c ^ (uint)auStack_90);
      return;
    }
    if ((*(int *)(iVar1 + 0x18) == 10) && (0.0 < *(float *)(iVar1 + 0x10))) {
      local_44 = ((int)local_6c >> 0x1f) << 0x10 | local_6c >> 0x10;
      local_3c = ((int)local_84 >> 0x1f) << 0x10 | local_84 >> 0x10;
      local_48 = local_6c << 0x10;
      local_40 = local_84 << 0x10;
      local_38 = local_48;
      local_34 = local_44;
      local_30 = local_40;
      local_2c = local_3c;
      plVar2 = (longlong *)FUN_005c3ef0(local_20,&local_38);
      local_8c = (float)plVar2[1];
      local_28 = (float)*plVar2 * 1.5258789e-05;
      fVar6 = (local_8c * 1.5258789e-05 * local_8c * 1.5258789e-05 + local_28 * local_28) /
              (*(float *)(iVar1 + 0x10) * *(float *)(iVar1 + 0x10));
      param_1 = local_6c;
      if (fVar6 < 1.0) {
        fVar6 = 1.0 - fVar6;
        local_88 = (1.0 - fVar6 * fVar6) * local_88;
      }
    }
    if ((*(int *)(iVar1 + 0x18) == 4) || (fVar6 = local_88, *(int *)(iVar1 + 0x18) == 5)) {
      local_74 = ((int)local_84 >> 0x1f) << 0x10 | local_84 >> 0x10;
      local_78 = local_84 << 0x10;
      local_60 = (double)CONCAT44(((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10,param_1 << 0x10);
      fVar4 = (float10)FUN_005f8e10(&local_60,&local_78);
      local_8c = (float)fVar4;
      if (0.25 < local_8c) {
        fVar6 = local_88;
        if (local_8c < 1.0) {
          dVar5 = (double)local_8c;
          libm_sse2_sqrt_precise();
          fVar6 = ((float)dVar5 - 0.5) * 2.0;
          fVar6 = 1.0 - fVar6 * fVar6;
          fVar6 = (1.0 - fVar6 * fVar6) * local_88;
        }
      }
      else {
        fVar6 = 0.0;
      }
    }
  }
  local_8c = fVar6 * 3.0 * fVar6 - fVar6 * 2.0 * fVar6 * fVar6;
  __security_check_cookie(local_c ^ (uint)auStack_90);
  return;
}


/* FUN_005fa4c0 @ 005fa4c0  kind=gamemisc  attributed-by=none  size=60 */

float10 FUN_005fa4c0(undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  float fVar2;
  
  fVar1 = (float10)FUN_005f8e10(param_1,param_2);
  fVar2 = 1.0 - (float)fVar1;
  if (fVar2 <= 0.0) {
    return (float10)0;
  }
  return (float10)(fVar2 * fVar2);
}


/* FUN_005fae00 @ 005fae00  kind=gamemisc  attributed-by=none  size=58 */

void FUN_005fae00(void)

{
  void *in_ECX;
  int iVar1;
  
  _eh_vector_constructor_iterator_
            (in_ECX,0x34,0x1000,cube::ZoneTile::ZoneTile,cube::ZoneTile::~ZoneTile);
  iVar1 = 0x3f;
  do {
    FUN_005c3bb0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}


/* FUN_005fb860 @ 005fb860  kind=gamemisc  attributed-by=none  size=17 */

void FUN_005fb860(void)

{
  undefined4 *in_ECX;
  
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  return;
}


/* FUN_005fb9f0 @ 005fb9f0  kind=gamemisc  attributed-by=none  size=175 */

void FUN_005fb9f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  *(undefined1 *)(in_ECX + 0x10) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((int)in_ECX + 0x41) = *(undefined1 *)((int)param_1 + 0x41);
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x15] = param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  *(undefined1 *)(in_ECX + 0x17) = *(undefined1 *)(param_1 + 0x17);
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  return;
}


/* FUN_005fbc10 @ 005fbc10  kind=gamemisc  attributed-by=none  size=115 */

void FUN_005fbc10(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 3)) {
    return;
  }
  if (0x1fffffffU - (in_ECX[1] - *in_ECX >> 3) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 3;
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    FUN_005fbb30();
    return;
  }
  FUN_005fbb30();
  return;
}


/* FUN_005fbed0 @ 005fbed0  kind=gamemisc  attributed-by=none  size=494 */

void FUN_005fbed0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_1c;
  int local_14;
  int local_8;
  
  local_8 = -param_1;
  local_14 = 0;
  piVar5 = (int *)(in_ECX + 0xb0);
  do {
    local_1c = 0;
    iVar2 = -param_2;
    do {
      if (*piVar5 != 0) {
        iVar6 = 0;
        piVar8 = (int *)(*piVar5 + 8);
        do {
          iVar7 = 0;
          do {
            if (((*piVar8 != 0) &&
                (uVar3 = local_8 + iVar6 >> 0x1f, 10 < (int)((local_8 + iVar6 ^ uVar3) - uVar3))) ||
               (uVar3 = iVar2 + iVar7 >> 0x1f, 10 < (int)((iVar2 + iVar7 ^ uVar3) - uVar3))) {
              FUN_006022d0(local_14 + iVar6,local_1c + iVar7);
            }
            iVar7 = iVar7 + 1;
            piVar8 = piVar8 + 0xd;
          } while (iVar7 < 0x40);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x40);
      }
      local_1c = local_1c + 0x40;
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + 0x40;
    } while (local_1c < 0x10000);
    local_8 = local_8 + 0x40;
    local_14 = local_14 + 0x40;
  } while (local_14 < 0x10000);
  local_1c = 0;
  piVar5 = (int *)(&UNK_00400080.field_0x30 + in_ECX);
  do {
    iVar2 = 0;
    do {
      if (*piVar5 != 0) {
        uVar3 = local_1c - ((int)((param_1 >> 0x1f & 0x3fU) + param_1) >> 6);
        uVar4 = (int)uVar3 >> 0x1f;
        iVar6 = (uVar3 ^ uVar4) - uVar4;
        if ((8 < iVar6) ||
           (uVar3 = iVar2 - ((int)((param_2 >> 0x1f & 0x3fU) + param_2) >> 6),
           uVar4 = (int)uVar3 >> 0x1f, 8 < (int)((uVar3 ^ uVar4) - uVar4))) {
          FUN_00602160(local_1c,iVar2);
        }
        if ((((8 < iVar6) ||
             (uVar3 = iVar2 - ((int)((param_2 >> 0x1f & 0x3fU) + param_2) >> 6),
             uVar4 = (int)uVar3 >> 0x1f, 8 < (int)((uVar3 ^ uVar4) - uVar4))) &&
            ((-1 < local_1c && (((-1 < iVar2 && (local_1c < 0x400)) && (iVar2 < 0x400)))))) &&
           (puVar1 = (undefined4 *)*piVar5, puVar1 != (undefined4 *)0x0)) {
          FUN_006050b0(in_ECX,local_1c,iVar2);
          EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
          EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
          *piVar5 = 0;
          LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
          LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
          (**(code **)*puVar1)(1);
        }
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < 0x400);
    local_1c = local_1c + 1;
  } while (local_1c < 0x400);
  return;
}


/* FUN_005fc0d0 @ 005fc0d0  kind=gamemisc  attributed-by=none  size=133 */

void FUN_005fc0d0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_c;
  
  puVar2 = param_2;
  piVar1 = param_1;
  iVar3 = param_1[1] - *param_1;
  local_c = (int)(longlong)
                 ROUND(((double)iVar3 + *(double *)(&DAT_00745f30 + (iVar3 >> 0x1f) * -8)) * 1.1);
  param_1 = (int *)(local_c + 0xc);
  FUN_005870c0(param_1);
  compress(*puVar2,&param_1,*piVar1,iVar3);
  FUN_005870c0(param_1);
  return;
}


/* FUN_00601cb0 @ 00601cb0  kind=gamemisc  attributed-by=none  size=14 */

void FUN_00601cb0(void)

{
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
  return;
}


/* FUN_00601e90 @ 00601e90  kind=gamemisc  attributed-by=none  size=14 */

void FUN_00601e90(void)

{
  int in_ECX;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
  return;
}


/* FUN_00601ea0 @ 00601ea0  kind=gamemisc  attributed-by=none  size=14 */

void FUN_00601ea0(void)

{
  int in_ECX;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
  return;
}


/* FUN_00602160 @ 00602160  kind=gamemisc  attributed-by=none  size=357 */

void FUN_00602160(int param_1,int param_2)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  void *local_30;
  undefined1 local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4b60;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = uVar3;
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    local_34 = (int *)(in_ECX + (param_1 * 0x400 + 0x2c + param_2) * 4);
    local_30 = (void *)*local_34;
    if (local_30 != (void *)0x0) {
      ExceptionList = &local_10;
      FUN_00605420();
      cVar2 = FUN_004497a0(uVar3);
      if (cVar2 != '\0') {
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_8 = 0;
        FUN_0044e8d0(in_ECX + 0x8000bc,4);
        FUN_00403350("discovered");
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_004499c0(local_2c,&local_44);
        FUN_00403eb0();
        local_8 = 0xffffffff;
        FUN_005fb860();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      *local_34 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      pvVar1 = local_30;
      _eh_vector_destructor_iterator_(local_30,0x34,0x1000,cube::ZoneTile::~ZoneTile);
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006022d0 @ 006022d0  kind=gamemisc  attributed-by=none  size=212 */

void FUN_006022d0(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x10000)) &&
     (((int)param_2 < 0x10000 &&
      (iVar2 = *(int *)(in_ECX + 0xb0 +
                       (((int)(((int)param_1 >> 0x1f & 0x3fU) + param_1) >> 6) * 0x400 +
                       ((int)(param_2 + ((int)param_2 >> 0x1f & 0x3fU)) >> 6)) * 4), iVar2 != 0))))
  {
    param_1 = param_1 & 0x8000003f;
    if ((int)param_1 < 0) {
      param_1 = (param_1 - 1 | 0xffffffc0) + 1;
    }
    param_2 = param_2 & 0x8000003f;
    if ((int)param_2 < 0) {
      param_2 = (param_2 - 1 | 0xffffffc0) + 1;
    }
    iVar2 = (param_1 * 0x40 + param_2) * 0x34 + iVar2;
    puVar1 = *(undefined4 **)(iVar2 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      *(undefined4 *)(iVar2 + 8) = 0;
      FUN_0046f870();
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


/* FUN_00602440 @ 00602440  kind=gamemisc  attributed-by=none  size=129 */

int FUN_00602440(uint param_1,uint param_2)

{
  int iVar1;
  int in_ECX;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x10000)) &&
     (((int)param_2 < 0x10000 &&
      (iVar1 = *(int *)(in_ECX + 0xb0 +
                       (((int)(((int)param_1 >> 0x1f & 0x3fU) + param_1) >> 6) * 0x400 +
                       ((int)(param_2 + ((int)param_2 >> 0x1f & 0x3fU)) >> 6)) * 4), iVar1 != 0))))
  {
    param_1 = param_1 & 0x8000003f;
    if ((int)param_1 < 0) {
      param_1 = (param_1 - 1 | 0xffffffc0) + 1;
    }
    param_2 = param_2 & 0x8000003f;
    if ((int)param_2 < 0) {
      param_2 = (param_2 - 1 | 0xffffffc0) + 1;
    }
    return iVar1 + (param_1 * 0x40 + param_2) * 0x34;
  }
  return 0;
}


/* FUN_006024d0 @ 006024d0  kind=gamemisc  attributed-by=none  size=3413 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006024d0(void *this,int param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  float fVar3;
  char cVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  Sprite *pSVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float10 fVar19;
  int iStack_180;
  basic_iostream<char,std::char_traits<char>_> local_17c;
  basic_streambuf<char,std::char_traits<char>_> local_164 [14];
  undefined4 local_12c;
  undefined4 local_128;
  basic_ios<char,std::char_traits<char>_> local_114 [6];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  Sprite *local_bc;
  uint local_b8;
  float local_b4;
  float local_b0;
  undefined4 *local_ac;
  uint local_a8;
  int local_a4;
  int local_a0;
  float local_9c;
  Sprite *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  Sprite *local_84;
  int local_80;
  float local_7c;
  Sprite *local_78;
  undefined4 *local_74;
  Sprite *local_70;
  float local_6c;
  float local_68;
  Sprite *local_64;
  int local_60;
  void *local_5c;
  char local_55;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined1 local_48 [12];
  void *local_3c;
  float local_38;
  Sprite *pSStack_34;
  int local_30;
  float local_2c;
  Sprite *pSStack_28;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4c09;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_80 = 0;
  local_8c = param_2;
  local_90 = param_3;
  local_5c = this;
  if ((((*(int *)(*(int *)((int)this + 0xac) + 0xa4) != 0) && (-1 < param_2)) && (-1 < param_3)) &&
     ((param_2 < 0x400 && (param_3 < 0x400)))) {
    pSVar15 = (Sprite *)(param_2 * 0x400 + param_3);
    local_74 = *(undefined4 **)((int)this + (int)pSVar15 * 4 + 0x4000b0);
    local_64 = pSVar15;
    if (local_74 == (undefined4 *)0x0) {
      local_17c.vbtablePtr =
           (basic_iostream<char,std::char_traits<char>_>_vbtable *)
           &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            vbtable;
      local_17c.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
           (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
      std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                (local_114);
      local_8 = 0;
      local_80 = 1;
      std::basic_iostream<char,std::char_traits<char>_>::
      basic_iostream<char,std::char_traits<char>_>
                (&local_17c,(basic_streambuf<char,std::char_traits<char>_> *)local_164);
      local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_17c.vbtablePtr +
       (local_17c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_180 +
              (local_17c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_17c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      std::basic_streambuf<char,std::char_traits<char>_>::
      basic_streambuf<char,std::char_traits<char>_>(local_164);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
      local_164[0] = (basic_streambuf<char,std::char_traits<char>_>)
                     &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
      local_12c = 0;
      local_128 = 0;
      local_8 = 3;
      iVar17 = local_90;
      pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_00449150(&local_17c.basic_ostream<char,std::char_traits<char>_>,&DAT_0071e03c,
                            param_2,&DAT_0071c760);
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_2);
      pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar6);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,iVar17);
      local_cc = 0;
      local_c8 = 0;
      local_c4 = 0;
      local_c0 = 0;
      local_8._0_1_ = 4;
      uVar7 = FUN_0040e140(local_48);
      local_8._0_1_ = 5;
      cVar4 = FUN_004498d0(uVar7,&local_cc);
      local_8._0_1_ = 4;
      FUN_00403eb0();
      if (cVar4 != '\0') {
        FUN_0044d620(&local_70,4);
        local_74 = operator_new(0x34);
        if (local_74 == (undefined4 *)0x0) {
          local_74 = (undefined4 *)0x0;
        }
        else {
                    /* inlined constructor or destructor (approx location) for cube::LandscapeTile
                        */
          *local_74 = &cube::LandscapeTile::vftable;
          *(undefined1 *)(local_74 + 10) = 0;
          local_74[0xb] = 0;
          *(undefined1 *)(local_74 + 0xc) = 0;
        }
        *(undefined4 **)((int)this + (int)pSVar15 * 4 + 0x4000b0) = local_74;
        FUN_0044d620(local_74 + 8,8);
        FUN_0044d620(local_74 + 10,1);
        FUN_0044d620(&local_30,0xc);
        fVar3 = local_2c;
        if (((0 < local_30) && (0 < (int)local_2c)) &&
           ((0 < (int)pSStack_28 &&
            (FUN_0044d620(&local_80,4), iVar17 = local_80, pSVar15 = local_64, local_80 != 0)))) {
          FUN_005842d0(local_80);
          FUN_0044d620(local_54,iVar17);
          local_3c = (void *)0x0;
          local_38 = 0.0;
          pSStack_34 = (Sprite *)0x0;
          local_8._0_1_ = 7;
          FUN_00449540(&local_54,&local_3c);
          local_70 = operator_new(0x60);
          local_8._0_1_ = 8;
          if (local_70 == (Sprite *)0x0) {
            pSVar15 = (Sprite *)0x0;
          }
          else {
            pSVar15 = cube::Sprite::Sprite(local_70,*(undefined4 *)((int)this + 0xa4));
          }
          puVar2 = local_74;
          local_8._0_1_ = 7;
          local_74[0xb] = pSVar15;
          FUN_004e75c0(local_30,fVar3,pSStack_28);
          memcpy(*(void **)(puVar2[0xb] + 0x30),local_3c,(int)local_38 - (int)local_3c);
          FUN_004e7870();
          FUN_005fb860();
          FUN_005fb860();
          pSVar15 = local_64;
        }
        FUN_0044d620(local_74 + 1,0x1c);
      }
      FUN_005fb860();
      local_8 = 0xffffffff;
      FUN_00404420(&local_17c);
    }
    else if (*(char *)(local_74 + 0xc) == '\0') goto LAB_00603027;
    local_ac = (undefined4 *)FUN_0047faa0(local_8c,local_90);
    if (local_ac != (undefined4 *)0x0) {
      iVar17 = *(int *)((int)local_5c + (int)pSVar15 * 4 + 0xb0);
      pvVar12 = local_5c;
      if (iVar17 != 0) {
        local_84 = (Sprite *)((int)local_5c + 0x8000d8);
        EnterCriticalSection((LPCRITICAL_SECTION)local_84);
        pvVar12 = local_5c;
        local_88 = local_90 << 6;
        local_60 = local_8c << 6;
        local_68 = 0.0;
        local_80 = local_60;
        do {
          iVar16 = 0;
          do {
            puVar8 = (undefined8 *)FUN_004a6ad0(local_60,local_88 + iVar16);
            if (puVar8 != (undefined8 *)0x0) {
              iVar10 = ((int)local_68 + iVar16) * 0x34;
              *(undefined8 *)(iVar10 + 0x10 + iVar17) = *puVar8;
              *(undefined8 *)(iVar10 + 0x18 + iVar17) = puVar8[1];
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < 0x40);
          local_68 = (float)((int)local_68 + 0x40);
          local_60 = local_60 + 1;
        } while ((int)local_68 < 0x1000);
        local_94 = (int)(local_88 + (local_88 >> 0x1f & 7U)) >> 3;
        local_68 = 2.86986e-42;
        local_60 = (int)((local_80 >> 0x1f & 7U) + local_80) >> 3;
        do {
          iVar17 = 0;
          do {
            iVar16 = FUN_00487da0(local_60,local_94 + iVar17);
            if (iVar16 != 0) {
              FUN_005fb9f0(iVar16);
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < 8);
          local_68 = (float)((int)local_68 + 8);
          local_60 = local_60 + 1;
        } while ((int)local_68 < 0x840);
        LeaveCriticalSection((LPCRITICAL_SECTION)local_84);
      }
      iVar10 = local_8c;
      iVar16 = local_90;
      local_80 = local_8c + 1;
      local_88 = local_90 + -1;
      iVar17 = local_8c + -1;
      if (iVar17 <= local_80) {
        iVar18 = iVar17 * 0x400 + 0x10002f;
        do {
          iVar13 = local_88;
          if (local_88 <= local_90 + 1) {
            do {
              if ((((iVar17 < 0) || (iVar13 < 0)) || (0x20002e < iVar18)) ||
                 ((0x3ff < iVar13 ||
                  (*(int *)(*(int *)((int)pvVar12 + 0xac) + (iVar18 + iVar13) * 4) == 0))))
              goto LAB_00603027;
              iVar13 = iVar13 + 1;
            } while (iVar13 <= local_90 + 1);
          }
          iVar17 = iVar17 + 1;
          iVar18 = iVar18 + 0x400;
        } while (iVar17 <= local_80);
      }
      if (local_74 == (undefined4 *)0x0) {
        local_74 = operator_new(0x34);
        if (local_74 == (undefined4 *)0x0) {
          local_74 = (undefined4 *)0x0;
        }
        else {
          *local_74 = &cube::LandscapeTile::vftable;
          *(undefined1 *)(local_74 + 10) = 0;
          local_74[0xb] = 0;
          *(undefined1 *)(local_74 + 0xc) = 0;
        }
        *(undefined4 **)((int)local_5c + (int)local_64 * 4 + 0x4000b0) = local_74;
      }
      local_55 = '\x01';
      local_74[1] = *local_ac;
      local_74[2] = local_ac[1];
      *(undefined1 *)(local_74 + 3) = *(undefined1 *)(local_ac + 2);
      local_74[4] = local_ac[3];
      local_74[5] = local_ac[4];
      local_74[6] = local_ac[5];
      local_74[7] = local_ac[6];
      local_6c = (float)(iVar10 * 0x40 - 0x40);
      local_80 = (iVar10 + 2) * 0x40;
      local_68 = local_6c;
      if ((int)local_6c <= local_80) {
        pSVar15 = (Sprite *)(iVar16 * 0x40 + -0x40);
        local_98 = local_24._4_4_;
        local_9c = (float)local_24;
        local_78 = local_1c._4_4_;
        iVar17 = (iVar16 + 2) * 0x40;
        local_60 = (int)local_6c * 0x100;
        local_7c = (float)local_1c;
        local_bc = pSVar15;
        local_a0 = iVar17;
        do {
          local_64 = pSVar15;
          if ((int)pSVar15 <= iVar17) {
            iVar16 = (int)pSVar15 << 8;
            do {
              iVar17 = local_60;
              local_84 = (Sprite *)iVar16;
              FUN_005eefa0(&local_50,local_60,iVar16);
              uVar14 = (uint)((float)iVar17 + local_50);
              uVar9 = (uint)((float)iVar16 + local_4c);
              local_a8 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
              local_94 = uVar9 << 0x10;
              local_b8 = ((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10;
              local_a4 = uVar14 << 0x10;
              fVar19 = (float10)FUN_005eeee0(local_ac,local_a4,local_b8,local_94,local_a8);
              iVar17 = -1;
              local_b0 = (float)fVar19;
              do {
                iVar10 = -1;
                iVar16 = local_88;
                do {
                  if ((iVar17 != 0) || (iVar10 != 0)) {
                    iVar18 = local_8c + iVar17;
                    if (((iVar18 < 0) || (((iVar16 < 0 || (0x3ff < iVar18)) || (0x3ff < iVar16))))
                       || (iVar18 = *(int *)(*(int *)((int)local_5c + 0xac) + 0x4000bc +
                                            (iVar18 * 0x400 + iVar16) * 4), iVar18 == 0))
                    goto LAB_00602d2f;
                    fVar19 = (float10)FUN_005eeee0(iVar18,local_a4,local_b8,local_94,local_a8);
                    local_b4 = (float)fVar19;
                    if (local_b4 < (float)(int)local_b0) goto LAB_00602d2f;
                  }
                  iVar10 = iVar10 + 1;
                  iVar16 = iVar16 + 1;
                } while (iVar10 < 2);
                iVar17 = iVar17 + 1;
              } while (iVar17 < 2);
              if (local_55 == '\0') {
                if ((int)local_6c < (int)local_9c) {
                  local_9c = local_6c;
                }
                if ((int)local_64 < (int)local_98) {
                  local_98 = local_64;
                }
                if ((int)local_7c < (int)local_6c) {
                  local_7c = local_6c;
                }
                if ((int)local_78 < (int)local_64) {
                  local_78 = local_64;
                }
              }
              else {
                pSStack_28 = local_64;
                local_2c = local_6c;
                local_24 = CONCAT44(local_64,local_6c);
                local_98 = local_64;
                pSStack_34 = local_64;
                local_38 = local_6c;
                local_1c = CONCAT44(local_64,local_6c);
                local_9c = local_6c;
                local_78 = local_64;
                local_55 = '\0';
                local_7c = local_6c;
              }
LAB_00602d2f:
              local_64 = (Sprite *)((int)&local_64->vftablePtr + 1);
              iVar16 = (int)local_84 + 0x100;
              pSVar15 = local_bc;
              iVar17 = local_a0;
              local_84 = (Sprite *)iVar16;
            } while ((int)local_64 <= local_a0);
          }
          iVar16 = local_80;
          local_6c = (float)((int)local_6c + 1);
          local_60 = local_60 + 0x100;
        } while ((int)local_6c <= local_80);
        if (local_55 == '\0') {
          *(undefined1 *)(local_74 + 0xc) = 0;
          local_70 = operator_new(0x60);
          pvVar12 = local_5c;
          local_8 = 9;
          if (local_70 == (Sprite *)0x0) {
            pSVar15 = (Sprite *)0x0;
          }
          else {
            pSVar15 = cube::Sprite::Sprite(local_70,*(undefined4 *)((int)local_5c + 0xa4));
          }
          local_8 = 0xffffffff;
          local_64 = pSVar15;
          FUN_004e75c0(((int)local_7c - (int)local_9c) + 1,(int)local_78 + (1 - (int)local_98),1);
          if ((int)local_68 < iVar16) {
            local_78 = (Sprite *)((int)local_68 - (int)local_9c);
            local_60 = (int)local_68 << 8;
            iVar17 = local_a0;
            do {
              local_84 = local_bc;
              if ((int)local_bc < iVar17) {
                local_7c = (float)((int)local_bc - (int)local_98);
                iVar16 = (int)local_bc << 8;
                do {
                  iVar17 = local_60;
                  local_94 = iVar16;
                  FUN_005eefa0(&local_38,local_60,iVar16);
                  local_b8 = (uint)((float)iVar17 + local_38);
                  uVar9 = (uint)((float)iVar16 + (float)pSStack_34);
                  local_b0 = (float)(((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10);
                  local_b4 = (float)(uVar9 << 0x10);
                  uVar9 = ((int)local_b8 >> 0x1f) << 0x10 | local_b8 >> 0x10;
                  local_b8 = local_b8 << 0x10;
                  local_1c = CONCAT44(uVar9,(float)local_1c);
                  fVar19 = (float10)FUN_005eeee0(local_ac,local_b8,uVar9,local_b4,local_b0);
                  iVar17 = -1;
                  local_24 = CONCAT44((float)fVar19,(float)local_24);
                  do {
                    iVar10 = -1;
                    iVar16 = local_88;
                    do {
                      if (((((iVar17 != 0) || (iVar10 != 0)) &&
                           ((iVar18 = local_8c + iVar17, -1 < iVar18 &&
                            ((-1 < iVar16 && (iVar18 < 0x400)))))) && (iVar16 < 0x400)) &&
                         (iVar18 = *(int *)(*(int *)((int)local_5c + 0xac) + 0x4000bc +
                                           (iVar18 * 0x400 + iVar16) * 4), iVar18 != 0)) {
                        fVar19 = (float10)FUN_005eeee0(iVar18,local_b8,local_1c._4_4_,local_b4,
                                                       local_b0);
                        local_70 = (Sprite *)(float)fVar19;
                        if ((float)local_70 < (float)(int)(float)local_24._4_4_) goto LAB_00602f7e;
                      }
                      iVar10 = iVar10 + 1;
                      iVar16 = iVar16 + 1;
                    } while (iVar10 < 2);
                    iVar17 = iVar17 + 1;
                  } while (iVar17 < 2);
                  if (((((int)local_68 < 0) || ((int)local_84 < 0)) || (0xffffff < local_60)) ||
                     ((0xffff < (int)local_84 ||
                      (iVar17 = *(int *)((int)local_5c +
                                        (((int)(((int)local_68 >> 0x1f & 0x3fU) + (int)local_68) >>
                                         6) * 0x400 +
                                        ((int)((int)&local_84->vftablePtr +
                                              ((int)local_84 >> 0x1f & 0x3fU)) >> 6)) * 4 + 0xb0),
                      iVar17 == 0)))) {
LAB_006031c7:
                    local_6c = (float)CONCAT22(local_6c._2_2_,0xc8c8);
                    local_55 = -0x38;
                    if (((int)local_78 < 0) ||
                       (((((int)local_7c < 0 ||
                          (iVar17 = (local_64->Sprite_data).offset_0x40, iVar17 <= (int)local_78))
                         || ((int)(local_64->Sprite_data).offset_0x44 <= (int)local_7c)) ||
                        ((int)(local_64->Sprite_data).offset_0x48 < 1)))) {
                      _DAT_0076b340 = 0xc8c8;
                      DAT_0076b342 = 200;
                    }
                    else {
                      puVar11 = (undefined2 *)
                                ((int)((int)&local_78->vftablePtr + (int)local_7c * iVar17) * 3 +
                                (int)(local_64->Sprite_data).offset_0x2c);
                      *puVar11 = 0xc8c8;
                      *(undefined1 *)(puVar11 + 1) = 200;
                    }
                  }
                  else {
                    uVar9 = (uint)local_68 & 0x8000003f;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
                    }
                    uVar14 = (uint)local_84 & 0x8000003f;
                    if ((int)uVar14 < 0) {
                      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
                    }
                    iVar17 = (uVar9 * 0x40 + uVar14) * 0x34 + iVar17;
                    if ((iVar17 == 0) || (bVar1 = *(byte *)(iVar17 + 0x30), bVar1 == 0))
                    goto LAB_006031c7;
                    if ((bVar1 & 1) == 0) {
                      local_a8 = CONCAT22(local_a8._2_2_,0xdcdc);
                      local_55 = -0x24;
                      if ((((int)local_78 < 0) || ((int)local_7c < 0)) ||
                         ((iVar17 = (local_64->Sprite_data).offset_0x40, iVar17 <= (int)local_78 ||
                          (((int)(local_64->Sprite_data).offset_0x44 <= (int)local_7c ||
                           ((int)(local_64->Sprite_data).offset_0x48 < 1)))))) {
                        _DAT_0076b340 = 0xdcdc;
                        DAT_0076b342 = 0xdc;
                      }
                      else {
                        puVar11 = (undefined2 *)
                                  ((int)((int)&local_78->vftablePtr + (int)local_7c * iVar17) * 3 +
                                  (int)(local_64->Sprite_data).offset_0x2c);
                        *puVar11 = 0xdcdc;
                        *(undefined1 *)(puVar11 + 1) = 0xdc;
                      }
                    }
                    else {
                      local_a4 = CONCAT22(local_a4._2_2_,0xffff);
                      local_55 = -1;
                      if (((((int)local_78 < 0) || ((int)local_7c < 0)) ||
                          (iVar17 = (local_64->Sprite_data).offset_0x40, iVar17 <= (int)local_78))
                         || (((int)(local_64->Sprite_data).offset_0x44 <= (int)local_7c ||
                             ((int)(local_64->Sprite_data).offset_0x48 < 1)))) {
                        _DAT_0076b340 = 0xffff;
                        DAT_0076b342 = 0xff;
                      }
                      else {
                        puVar11 = (undefined2 *)
                                  ((int)((int)&local_78->vftablePtr + (int)local_7c * iVar17) * 3 +
                                  (int)(local_64->Sprite_data).offset_0x2c);
                        *puVar11 = 0xffff;
                        *(undefined1 *)(puVar11 + 1) = 0xff;
                      }
                    }
                  }
LAB_00602f7e:
                  local_7c = (float)((int)local_7c + 1);
                  local_84 = (Sprite *)((int)&local_84->vftablePtr + 1);
                  iVar16 = local_94 + 0x100;
                  iVar17 = local_a0;
                  pvVar12 = local_5c;
                  local_94 = iVar16;
                } while ((int)local_84 < local_a0);
              }
              local_68 = (float)((int)local_68 + 1);
              local_60 = local_60 + 0x100;
              local_78 = (Sprite *)((int)&local_78->vftablePtr + 1);
              pSVar15 = local_64;
            } while ((int)local_68 < local_80);
          }
          FUN_004e7870();
          EnterCriticalSection((LPCRITICAL_SECTION)((int)pvVar12 + 0x8000d8));
          local_74[8] = local_9c;
          local_74[9] = local_98;
          if ((undefined4 *)local_74[0xb] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)local_74[0xb])(1);
          }
          local_74[0xb] = pSVar15;
          LeaveCriticalSection((LPCRITICAL_SECTION)((int)pvVar12 + 0x8000d8));
          FUN_006050b0(pvVar12,local_8c,local_90);
        }
      }
    }
  }
LAB_00603027:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00603230 @ 00603230  kind=gamemisc  attributed-by=none  size=1958 */

void __thiscall FUN_00603230(void *this,int param_2,int param_3)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  void *pvVar17;
  undefined1 *puVar18;
  int iStack_114;
  basic_iostream<char,std::char_traits<char>_> local_110;
  basic_streambuf<char,std::char_traits<char>_> local_f8 [2];
  undefined1 local_f0 [8];
  undefined4 *local_e8;
  undefined4 *local_d8;
  undefined4 *local_c8;
  undefined4 local_c0;
  uint local_bc;
  basic_ios<char,std::char_traits<char>_> local_a8 [6];
  int local_60;
  void *local_5c;
  int local_58;
  void *local_54;
  int local_50;
  int *local_4c;
  uint local_48;
  int local_44;
  int local_40;
  void *local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined1 local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4c9b;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = 0;
  local_60 = param_2;
  local_58 = param_3;
  local_54 = this;
  local_14 = uVar3;
  if ((((*(int *)(*(int *)((int)this + 0xac) + 0xa4) != 0) && (-1 < param_2)) && (-1 < param_3)) &&
     (((param_2 < 0x400 && (param_3 < 0x400)) &&
      (param_3 = param_2 * 0x400 + 0x2c + param_3, local_4c = (int *)((int)this + param_3 * 4),
      *(int *)((int)this + param_3 * 4) == 0)))) {
    local_5c = operator_new(0x35a00);
    local_8 = 0;
    if (local_5c == (void *)0x0) {
      local_50 = 0;
    }
    else {
      local_50 = FUN_005fae00(uVar3);
    }
    iVar14 = local_50;
    local_8 = 0xffffffff;
    local_110.vbtablePtr =
         (basic_iostream<char,std::char_traits<char>_>_vbtable *)
         &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          vbtable;
    local_110.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
         (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_a8);
    local_8 = 1;
    local_44 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              (&local_110,(basic_streambuf<char,std::char_traits<char>_> *)local_f8);
    local_8 = 2;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_110.vbtablePtr +
     (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_114 +
            (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>(local_f8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_f8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_c0 = 0;
    local_bc = 0;
    local_8 = 4;
    iVar10 = param_2;
    iVar15 = local_58;
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_00449150(&local_110.basic_ostream<char,std::char_traits<char>_>,&DAT_0071e044,
                          param_2,&DAT_0071c760);
    pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,iVar10);
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar5);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,iVar15);
    local_3c = (void *)0x0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_8._0_1_ = 5;
    uVar6 = FUN_0040e140(local_2c);
    local_8._0_1_ = 6;
    cVar2 = FUN_004498d0(uVar6,&local_3c);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_00403eb0();
    if (cVar2 != '\0') {
      FUN_0044d620(&local_5c,4);
      puVar18 = (undefined1 *)(iVar14 + 0x10);
      local_44 = 0x40;
      do {
        iVar14 = 0x40;
        do {
          iVar10 = local_38 - (int)local_3c;
          if (local_30 + 1 <= iVar10) {
            puVar18[0x20] = *(undefined1 *)((int)local_3c + local_30);
            iVar10 = local_30 + 1;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 1 <= iVar15) {
            *puVar18 = *(undefined1 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 1;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 1 <= iVar10) {
            puVar18[1] = *(undefined1 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 1;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 1 <= iVar15) {
            puVar18[2] = *(undefined1 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 1;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 1 <= iVar10) {
            puVar18[3] = *(undefined1 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 1;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= iVar15) {
            *(undefined4 *)(puVar18 + 4) = *(undefined4 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 4;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 4 <= iVar10) {
            *(undefined4 *)(puVar18 + 8) = *(undefined4 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 4;
          }
          local_30 = local_38 - (int)local_3c;
          if (iVar10 + 1 <= local_30) {
            puVar18[0xc] = *(undefined1 *)((int)local_3c + iVar10);
            local_30 = iVar10 + 1;
          }
          puVar18 = puVar18 + 0x34;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      puVar7 = (undefined4 *)(local_50 + 0x3401c);
      local_44 = 8;
      do {
        iVar14 = 8;
        do {
          iVar10 = local_38 - (int)local_3c;
          if (local_30 + 4 <= iVar10) {
            puVar7[-1] = *(undefined4 *)((int)local_3c + local_30);
            iVar10 = local_30 + 4;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= iVar15) {
            *puVar7 = *(undefined4 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 4;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 4 <= iVar10) {
            puVar7[1] = *(undefined4 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 4;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= iVar15) {
            puVar7[2] = *(undefined4 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 4;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 4 <= iVar10) {
            puVar7[3] = *(undefined4 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 4;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= iVar15) {
            puVar7[-2] = *(undefined4 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 4;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 0x10 <= iVar10) {
            *(undefined8 *)(puVar7 + -7) = *(undefined8 *)((int)local_3c + iVar15);
            *(undefined8 *)(puVar7 + -5) = *(undefined8 *)((int)local_3c + iVar15 + 8);
            iVar10 = iVar15 + 0x10;
          }
          local_30 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= local_30) {
            puVar7[-3] = *(undefined4 *)((int)local_3c + iVar10);
            local_30 = iVar10 + 4;
          }
          puVar7 = puVar7 + 0x1a;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      local_44 = 0;
      param_2 = local_60;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((int)local_54 + 0x8000d8));
    *local_4c = local_50;
    uVar8 = local_58 * 0x40;
    uVar11 = param_2 * 0x40;
    local_48 = 0;
    uVar3 = uVar11;
    do {
      local_40 = 0;
      uVar16 = uVar8;
      do {
        if (((-1 < (int)uVar3) && (-1 < (int)uVar16)) &&
           (((int)uVar3 < 0x10000 && ((int)uVar16 < 0x10000)))) {
          iVar10 = (int)(((int)uVar16 >> 0x1f & 0x3fU) + uVar16) >> 6;
          iVar14 = (int)(((int)uVar3 >> 0x1f & 0x3fU) + uVar3) >> 6;
          if ((((-1 < iVar14) && (-1 < iVar10)) && (iVar14 < 0x400)) &&
             ((iVar10 < 0x400 &&
              (iVar14 = *(int *)(*(int *)((int)local_54 + 0xac) + 0xbc +
                                (iVar14 * 0x400 + iVar10) * 4), iVar14 != 0)))) {
            uVar12 = uVar3 & 0x8000003f;
            if ((int)uVar12 < 0) {
              uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
            }
            uVar9 = uVar16 & 0x8000003f;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
            }
            puVar13 = (undefined8 *)((uVar12 * 0x40 + uVar9) * 0x10 + 0x18 + iVar14);
            if (puVar13 != (undefined8 *)0x0) {
              iVar14 = (local_40 + local_48) * 0x34;
              *(undefined8 *)(iVar14 + 0x10 + local_50) = *puVar13;
              *(undefined8 *)(iVar14 + 0x18 + local_50) = puVar13[1];
            }
          }
        }
        local_40 = local_40 + 1;
        uVar16 = uVar16 + 1;
      } while (local_40 < 0x40);
      local_48 = local_48 + 0x40;
      uVar3 = uVar3 + 1;
    } while ((int)local_48 < 0x1000);
    local_44 = 0x800;
    local_5c = (void *)((int)(((int)uVar8 >> 0x1f & 7U) + uVar8) >> 3);
    uVar3 = (int)(uVar11 + ((int)uVar11 >> 0x1f & 7U)) >> 3;
    local_4c = (int *)(uVar3 * 8);
    do {
      local_40 = (int)local_5c * 8;
      iVar14 = 0;
      pvVar17 = local_5c;
      local_48 = uVar3;
      do {
        if (((-1 < (int)uVar3) && (-1 < (int)pvVar17)) &&
           (((int)uVar3 < 0x2000 && ((int)pvVar17 < 0x2000)))) {
          iVar15 = (int)((local_40 >> 0x1f & 0x3fU) + local_40) >> 6;
          iVar10 = (int)(((int)local_4c >> 0x1f & 0x3fU) + (int)local_4c) >> 6;
          uVar3 = local_48;
          if ((((-1 < iVar10) && (-1 < iVar15)) && (iVar10 < 0x400)) &&
             ((iVar15 < 0x400 &&
              (iVar10 = *(int *)(*(int *)((int)local_54 + 0xac) + 0xbc +
                                (iVar10 * 0x400 + iVar15) * 4), iVar10 != 0)))) {
            uVar8 = local_48 & 0x80000007;
            if ((int)uVar8 < 0) {
              uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
            }
            uVar11 = (uint)pvVar17 & 0x80000007;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
            }
            iVar10 = (uVar11 + uVar8 * 8) * 0x68 + 0x14018 + iVar10;
            if (iVar10 != 0) {
              FUN_005fb9f0(iVar10);
              uVar3 = local_48;
            }
          }
        }
        pvVar1 = local_54;
        iVar14 = iVar14 + 1;
        local_40 = local_40 + 8;
        pvVar17 = (void *)((int)pvVar17 + 1);
      } while (iVar14 < 8);
      local_4c = local_4c + 2;
      local_44 = local_44 + 8;
      uVar3 = uVar3 + 1;
    } while (local_44 < 0x840);
    local_48 = uVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)local_54 + 0x8000d8));
    FUN_00605420(pvVar1,local_60,local_58);
    if (local_3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c);
    }
    local_8 = 0xffffffff;
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_110.vbtablePtr +
     (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_114 +
            (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    local_f8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    if ((local_bc & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)local_f0._4_4_);
    }
    std::basic_streambuf<char,std::char_traits<char>_>::setg
              (local_f8,(char *)0x0,(char *)0x0,(char *)0x0);
    *local_e8 = 0;
    *local_d8 = 0;
    *local_c8 = 0;
    local_bc = local_bc & 0xfffffffe;
    local_c0 = 0;
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(local_f8);
    std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_f0);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_a8)
    ;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00603a00 @ 00603a00  kind=gamemisc  attributed-by=none  size=5672 */

void __thiscall FUN_00603a00(void *this,uint param_2,uint param_3)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  undefined4 uVar8;
  Sprite *pSVar9;
  byte *pbVar10;
  float *pfVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  undefined1 *puVar15;
  code *pcVar16;
  LPCRITICAL_SECTION p_Var17;
  size_t _Size;
  void *pvVar18;
  LPCRITICAL_SECTION p_Var19;
  int iVar20;
  int iVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iStack_1e4;
  basic_iostream<char,std::char_traits<char>_> local_1e0;
  basic_streambuf<char,std::char_traits<char>_> local_1c8 [2];
  undefined1 local_1c0 [8];
  undefined4 *local_1b8;
  undefined4 *local_1a8;
  undefined4 *local_198;
  undefined4 local_190;
  uint local_18c;
  basic_ios<char,std::char_traits<char>_> local_178 [6];
  int local_130;
  uint local_12c;
  Sprite *local_128;
  void *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  int local_114;
  Sprite *local_110;
  int local_10c;
  int local_108;
  void *local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  uint local_f4;
  uint local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  uint local_e0;
  Sprite *local_dc;
  int local_d8;
  uint local_d4;
  float local_d0;
  LPCRITICAL_SECTION local_cc;
  int local_c8;
  void *local_c4;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  uint local_b4;
  float local_b0;
  int local_ac;
  void *local_a8;
  float local_a4;
  float local_a0;
  void *local_9c;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  void *local_80 [3];
  undefined1 local_74 [4];
  undefined4 local_70;
  uint local_6c;
  int local_68;
  int iStack_64;
  int local_60;
  void *local_5c;
  float local_58;
  float local_54;
  void *local_50;
  float fStack_4c;
  float local_48;
  float local_44 [12];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4da2;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_cc = (LPCRITICAL_SECTION)0x0;
  local_f0 = param_2;
  local_e0 = param_3;
  local_a8 = this;
  if ((((*(int *)(*(int *)((int)this + 0xac) + 0xa4) == 0) || ((int)param_2 < 0)) ||
      ((int)param_3 < 0)) ||
     (((0xffff < (int)param_2 || (0xffff < (int)param_3)) ||
      (iVar4 = *(int *)((int)this +
                       (((int)(((int)param_2 >> 0x1f & 0x3fU) + param_2) >> 6) * 0x400 +
                       ((int)(param_3 + ((int)param_3 >> 0x1f & 0x3fU)) >> 6)) * 4 + 0xb0),
      iVar4 == 0)))) goto LAB_0060508a;
  uVar12 = param_2 & 0x8000003f;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
  }
  uVar2 = param_3 & 0x8000003f;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
  }
  local_ac = (uVar12 * 0x40 + uVar2) * 0x34 + iVar4;
  puVar3 = (undefined8 *)FUN_004a6ad0(param_2,param_3);
  if (puVar3 != (undefined8 *)0x0) {
    p_Var17 = (LPCRITICAL_SECTION)((int)local_a8 + 0x8000d8);
    EnterCriticalSection(p_Var17);
    *(undefined8 *)(local_ac + 0x10) = *puVar3;
    *(undefined8 *)(local_ac + 0x18) = puVar3[1];
    LeaveCriticalSection(p_Var17);
  }
  iVar4 = FUN_00487da0((int)(((int)local_f0 >> 0x1f & 7U) + local_f0) >> 3,
                       (int)(((int)local_e0 >> 0x1f & 7U) + local_e0) >> 3);
  if (iVar4 != 0) {
    FUN_005fb9f0(iVar4);
  }
  pvVar18 = local_a8;
  iVar5 = FUN_00434d10(local_f0,local_e0);
  iVar4 = local_ac;
  local_e8 = iVar5;
  if ((*(int *)(local_ac + 8) != 0) && ((*(char *)(local_ac + 0x28) == '\0' || (iVar5 == 0))))
  goto LAB_0060508a;
  local_1e0.vbtablePtr =
       (basic_iostream<char,std::char_traits<char>_>_vbtable *)
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_1e0.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
       (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_178);
  local_8 = 0;
  local_cc = (LPCRITICAL_SECTION)0x2;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (&local_1e0,(basic_streambuf<char,std::char_traits<char>_> *)local_1c8);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_1e0.vbtablePtr +
   (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_1e4 + (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (local_1c8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_1c8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_190 = 0;
  local_18c = 0;
  local_8 = 3;
  uVar12 = local_f0;
  uVar2 = local_e0;
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_00449150(&local_1e0.basic_ostream<char,std::char_traits<char>_>,&DAT_0071e048,
                        local_f0,&DAT_0071c760);
  pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,uVar12);
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar7);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,uVar2);
  local_104 = (void *)0x0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_8._0_1_ = 4;
  uVar8 = FUN_0040e140(local_80);
  local_130 = (int)pvVar18 + 0x8000f0;
  local_8 = CONCAT31(local_8._1_3_,5);
  local_cc = (LPCRITICAL_SECTION)0x3;
  cVar1 = FUN_004498d0(uVar8,&local_104);
  if ((cVar1 == '\0') || (*(int *)(iVar4 + 8) != 0)) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
  }
  local_8 = 4;
  FUN_00403eb0();
  if (bVar22) {
    FUN_0044d620(&local_110,4);
    FUN_0044d620(local_ac + 4,4);
    FUN_0044d620(&local_50,0xc);
    fVar29 = fStack_4c;
    pcVar16 = EnterCriticalSection_exref;
    if ((((0 < (int)local_50) && (0 < (int)fStack_4c)) && (0 < (int)local_48)) &&
       (FUN_0044d620(&local_e4,4), iVar4 = local_e4, pcVar16 = EnterCriticalSection_exref,
       local_e4 != 0)) {
      FUN_005842d0(local_e4);
      FUN_0044d620(local_68,iVar4);
      local_5c = (void *)0x0;
      local_58 = 0.0;
      local_54 = 0.0;
      local_8._0_1_ = 7;
      FUN_00449540(&local_68,&local_5c);
      local_110 = operator_new(0x60);
      local_8._0_1_ = 8;
      if (local_110 == (Sprite *)0x0) {
        pSVar9 = (Sprite *)0x0;
      }
      else {
        pSVar9 = cube::Sprite::Sprite(local_110,*(undefined4 *)((int)pvVar18 + 0xa4));
      }
      local_8._0_1_ = 7;
      FUN_004e75c0(local_50,fVar29,local_48);
      memcpy((pSVar9->Sprite_data).offset_0x2c,local_5c,(int)local_58 - (int)local_5c);
      FUN_004e7870();
      pcVar16 = EnterCriticalSection_exref;
      p_Var17 = (LPCRITICAL_SECTION)((int)local_a8 + 0x8000d8);
      EnterCriticalSection(p_Var17);
      *(byte *)(local_ac + 0x30) = *(byte *)(local_ac + 0x30) | 2;
      *(Sprite **)(local_ac + 8) = pSVar9;
      *(undefined4 *)(local_ac + 0x2c) = 0xfa;
      LeaveCriticalSection(p_Var17);
      FUN_005fb860();
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_005fb860();
      pvVar18 = local_a8;
    }
    local_cc = (LPCRITICAL_SECTION)0x0;
    FUN_0044d620(&local_cc,4);
    p_Var17 = (LPCRITICAL_SECTION)((int)pvVar18 + 0x8000d8);
    (*pcVar16)(p_Var17);
    FUN_0046f870();
    LeaveCriticalSection(p_Var17);
    p_Var19 = local_cc;
    if (0 < (int)local_cc) {
      do {
        FUN_0044d620(&local_68,0xc);
        EnterCriticalSection(p_Var17);
        FUN_00601eb0(&local_68);
        LeaveCriticalSection(p_Var17);
        p_Var19 = (LPCRITICAL_SECTION)((int)&p_Var19[-1].SpinCount + 3);
      } while (p_Var19 != (LPCRITICAL_SECTION)0x0);
    }
    iVar5 = local_e8;
    if (*(char *)(local_ac + 0x28) != '\0') goto LAB_00603f32;
  }
  else {
LAB_00603f32:
    iVar4 = local_ac;
    if (iVar5 != 0) {
      local_cc = (LPCRITICAL_SECTION)(*(int *)(iVar5 + 0xa8) + 0x10);
      iVar5 = *(int *)(*(int *)(iVar5 + 0xa8) + 0x14);
      local_d8 = 0x100;
      local_c8 = iVar5;
      do {
        iVar20 = 0x100;
        piVar13 = (int *)local_cc;
        do {
          if (piVar13[1] + -1 < iVar5) {
            iVar5 = piVar13[1] + -1;
          }
          if (local_c8 < piVar13[3] + *piVar13) {
            local_c8 = *piVar13 + piVar13[3];
          }
          piVar13 = piVar13 + 0x800;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
        local_cc = (LPCRITICAL_SECTION)((int)local_cc + 0x20);
        local_d8 = local_d8 + -1;
      } while (local_d8 != 0);
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      iVar20 = local_c8;
      if (local_c8 < 0) {
        iVar20 = 0;
      }
      pSVar9 = (Sprite *)(((int)((iVar20 - iVar5 >> 0x1f & 7U) + (iVar20 - iVar5)) >> 3) + 1);
      *(int *)(local_ac + 4) = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
      *(undefined1 *)(local_ac + 0x28) = 0;
      local_110 = pSVar9;
      local_128 = operator_new(0x60);
      local_8._0_1_ = 9;
      if (local_128 == (Sprite *)0x0) {
        local_dc = (Sprite *)0x0;
      }
      else {
        local_dc = cube::Sprite::Sprite(local_128,*(undefined4 *)((int)local_a8 + 0xa4));
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004e75c0(0x20,0x20,pSVar9);
      p_Var17 = (LPCRITICAL_SECTION)((int)local_a8 + 0x8000d8);
      local_cc = p_Var17;
      EnterCriticalSection(p_Var17);
      local_128 = (Sprite *)(iVar4 + 0x20);
      FUN_0046f870();
      LeaveCriticalSection(p_Var17);
      local_50 = (void *)0x0;
      fStack_4c = 0.0;
      local_48 = 0.0;
      pfVar11 = local_44;
      iVar4 = 2;
      do {
        iVar5 = 2;
        do {
          pfVar11[0] = 0.0;
          pfVar11[1] = 0.0;
          pfVar11[2] = 0.0;
          pfVar11 = pfVar11 + 3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      local_d4 = 0;
      do {
        local_b4 = 0;
        local_12c = local_d4 & 0x80000003;
        if ((int)local_12c < 0) {
          local_12c = (local_12c - 1 | 0xfffffffc) + 1;
        }
        do {
          local_f4 = local_b4 * 0x100 + local_d4;
          local_ec = local_f4 * 0x100;
          local_9c = (void *)0x0;
          local_a4 = 0.0;
          local_a0 = 0.0;
          local_b0 = 0.0;
          local_c8 = 10000000;
          local_d0 = 0.0;
          do {
            iVar4 = 0;
            local_d8 = local_ec;
            fVar29 = local_d0;
            do {
              iVar5 = *(int *)(*(int *)(local_e8 + 0xa8) + 0x1c + local_d8);
              iVar20 = *(int *)(local_e8 + 0xa8) + local_d8;
              if (*(int *)(iVar20 + 0x14) < local_c8) {
                local_c8 = *(int *)(iVar20 + 0x14);
              }
              if (*(int *)(iVar20 + 0x10) + iVar5 < 1) {
                if ((DAT_0076de0c >> 0x18 & 0x1f) - 2 < 2) {
                  fVar23 = 80.0;
                  fVar24 = 100.0;
                  fVar27 = 255.0;
                }
                else {
                  fVar23 = (float)(DAT_0076de0c & 0xff);
                  fVar24 = (float)(DAT_0076de0c >> 8 & 0xff);
                  fVar27 = (float)(DAT_0076de0c >> 0x10 & 0xff);
                }
                local_9c = (void *)((float)local_9c + fVar23);
                local_a4 = local_a4 + fVar24;
                local_a0 = local_a0 + fVar27;
              }
              else {
                do {
                  iVar5 = iVar5 + -1;
                  if (iVar5 < 0) {
                    pfVar11 = (float *)FUN_005f9620(local_98,(int)fVar29 +
                                                             (*(int *)(local_e8 + 0x60) * 0x20 +
                                                             local_d4) * 8,
                                                    iVar4 + (*(int *)(local_e8 + 100) * 0x20 +
                                                            local_b4) * 8,
                                                    *(undefined4 *)(iVar20 + 0x14),local_e8);
                    local_9c = (void *)(*pfVar11 + (float)local_9c);
                    local_a4 = pfVar11[1] + local_a4;
                    fVar29 = pfVar11[2];
                    iVar5 = *(int *)(iVar20 + 0x10) + -1;
                    goto LAB_0060427b;
                  }
                  iVar21 = FUN_0042f730(iVar5);
                  if ((*(byte *)(iVar21 + 3) & 0x1f) != 0) {
                    pbVar10 = (byte *)FUN_0042f730(iVar5);
                    if ((pbVar10[3] & 0xffffff1f) - 2 < 2) {
                      fVar29 = 80.0;
                      fVar23 = 100.0;
                      fVar24 = 255.0;
                    }
                    else {
                      fVar29 = (float)*pbVar10;
                      fVar23 = (float)pbVar10[1];
                      fVar24 = (float)pbVar10[2];
                    }
                    local_9c = (void *)(fVar29 + (float)local_9c);
                    local_a4 = fVar23 + local_a4;
                    local_a0 = fVar24 + local_a0;
                    iVar5 = *(int *)(iVar20 + 0x10) + iVar5;
                    goto LAB_00604286;
                  }
                  fVar29 = local_d0;
                } while (*(int *)(iVar20 + 0x10) + iVar5 != *(int *)(iVar20 + 0x14) + -1);
                pfVar11 = (float *)FUN_005f9620(local_8c,(int)local_d0 +
                                                         (*(int *)(local_e8 + 0x60) * 0x20 +
                                                         local_d4) * 8,
                                                iVar4 + (*(int *)(local_e8 + 100) * 0x20 + local_b4)
                                                        * 8,*(undefined4 *)(iVar20 + 0x14),local_e8)
                ;
                local_a4 = pfVar11[1] + local_a4;
                local_9c = (void *)((float)local_9c + *pfVar11);
                fVar29 = pfVar11[2];
                iVar5 = *(int *)(iVar20 + 0x10) + iVar5;
LAB_0060427b:
                local_a0 = fVar29 + local_a0;
LAB_00604286:
                local_b0 = (float)iVar5 + local_b0;
                fVar29 = local_d0;
              }
              iVar4 = iVar4 + 1;
              local_d8 = local_d8 + 0x2000;
            } while (iVar4 < 8);
            local_d0 = (float)((int)fVar29 + 1);
            local_ec = local_ec + 0x20;
          } while ((int)local_d0 < 8);
          local_9c = (void *)((float)local_9c * 0.015625);
          local_a4 = local_a4 * 0.015625;
          local_a0 = local_a0 * 0.015625;
          local_ec = -((int)((int)(local_b0 * -0.015625) +
                            ((int)(local_b0 * -0.015625) >> 0x1f & 7U)) >> 3) -
                     *(int *)(local_ac + 4);
          local_50 = local_9c;
          fStack_4c = local_a4;
          local_48 = local_a0;
          if (local_12c == 0) {
            uVar12 = local_b4 & 0x80000003;
            bVar22 = uVar12 == 0;
            if ((int)uVar12 < 0) {
              bVar22 = (uVar12 - 1 | 0xfffffffc) == 0xffffffff;
            }
            if (bVar22) {
              iVar21 = local_e0 * 0x100;
              iVar5 = local_f0 * 0x100;
              iVar4 = iVar5 + local_d4 * 8;
              local_e4 = FUN_00477e10(iVar4,iVar21 + local_b4 * 8);
              iVar20 = FUN_00477e10(iVar5 + (local_d4 + 4) * 8,iVar21 + local_b4 * 8);
              iVar5 = local_e4;
              if ((local_e4 != iVar20) ||
                 (iVar20 = FUN_00477e10(iVar4,iVar21 + (local_b4 + 4) * 8), iVar5 != iVar20)) {
                EnterCriticalSection(local_cc);
                pSVar9 = local_128;
                local_60 = *(int *)(local_f4 * 0x100 + 0x14 + *(int *)(local_e8 + 0xa8));
                iVar5 = *(int *)local_128;
                if (local_60 < 0) {
                  local_60 = 0;
                }
                iStack_64 = iVar21 + local_b4 * 8;
                local_68 = iVar4;
                iVar20 = FUN_005a6b60(iVar5,*(undefined4 *)(iVar5 + 4),&local_68);
                iVar4 = *(int *)((int)pSVar9 + 4);
                if (iVar4 == 0xccccccb) {
                    /* WARNING: Subroutine does not return */
                  std::_Xlength_error("list<T> too long");
                }
                *(int *)((int)pSVar9 + 4) = iVar4 + 1;
                *(int *)(iVar5 + 4) = iVar20;
                **(int **)(iVar20 + 4) = iVar20;
                LeaveCriticalSection(local_cc);
              }
            }
          }
          if ((-1 < local_ec) && (local_ec < (int)local_110)) {
            if (((int)local_d4 < 0) ||
               (((((int)local_b4 < 0 ||
                  (iVar4 = (local_dc->Sprite_data).offset_0x40, iVar4 <= (int)local_d4)) ||
                 (iVar5 = (local_dc->Sprite_data).offset_0x44, iVar5 <= (int)local_b4)) ||
                ((int)(local_dc->Sprite_data).offset_0x48 <= local_ec)))) {
              puVar15 = &DAT_0076b340;
            }
            else {
              puVar15 = (undefined1 *)
                        (((iVar5 * local_ec + local_b4) * iVar4 + local_d4) * 3 +
                        (int)(local_dc->Sprite_data).offset_0x2c);
            }
            iVar4 = 0;
            do {
              iVar5 = iVar4 + 1;
              puVar15[iVar4] = (char)(int)(float)(&local_50)[iVar4];
              iVar4 = iVar5;
            } while (iVar5 < 3);
          }
          iVar4 = ((int)(local_b4 + ((int)local_b4 >> 0x1f & 0xfU)) >> 4) +
                  ((int)(((int)local_d4 >> 0x1f & 0xfU) + local_d4) >> 4) * 2;
          fVar29 = local_44[iVar4 * 3];
          local_44[iVar4 * 3 + 1] = local_a4 + local_44[iVar4 * 3 + 1];
          local_44[iVar4 * 3 + 2] = local_a0 + local_44[iVar4 * 3 + 2];
          local_44[iVar4 * 3] = fVar29 + (float)local_9c;
          local_9c = (void *)((((int)((local_c8 >> 0x1f & 7U) + local_c8) >> 3) -
                              *(int *)(local_ac + 4)) + -1);
          if ((int)local_9c < 0) {
            local_9c = (void *)0x0;
          }
          if ((int)local_9c < local_ec) {
            local_d8 = local_e0 * 0x100 + local_b4 * 8;
            local_e4 = local_f0 * 0x100 + local_d4 * 8;
            do {
              fVar29 = 0.0;
              local_108 = 0;
              local_d0 = 0.0;
              local_a0 = 0.0;
              local_a4 = 0.0;
              local_114 = 0;
              fVar23 = fVar29;
              fVar24 = fVar29;
              do {
                fVar27 = (float)(local_e4 + local_114);
                local_c8 = 0;
                local_b0 = fVar27;
                do {
                  local_f4 = local_d8 + local_c8;
                  local_10c = 0;
                  fVar25 = fVar27;
                  do {
                    fVar27 = local_b0;
                    iVar4 = local_10c + (*(int *)(local_ac + 4) + (int)local_9c) * 8;
                    if ((((int)fVar25 < 0) || ((int)local_f4 < 0)) ||
                       ((0xffffff < (int)fVar25 || (0xffffff < (int)local_f4)))) {
LAB_0060490a:
                      puVar14 = (uint *)&DAT_0076de14;
                      fVar27 = fVar25;
                    }
                    else {
                      iVar5 = ((int)local_f4 >> 0x1f & 0xffU) + local_f4;
                      uVar2 = iVar5 >> 8;
                      iVar20 = ((int)fVar25 >> 0x1f & 0xffU) + (int)fVar25;
                      uVar12 = iVar20 >> 8;
                      if ((((int)uVar12 < 0) || ((int)uVar2 < 0)) ||
                         ((0xffff < (int)uVar12 || (0xffff < (int)uVar2)))) goto LAB_0060490a;
                      iVar20 = (int)(uVar12 + (iVar20 >> 0x1f & 0x3fU)) >> 6;
                      iVar5 = (int)((iVar5 >> 0x1f & 0x3fU) + uVar2) >> 6;
                      fVar25 = local_b0;
                      if ((((iVar20 < 0) || (iVar5 < 0)) || (0x3ff < iVar20)) ||
                         ((0x3ff < iVar5 ||
                          (iVar5 = *(int *)(*(int *)((int)local_a8 + 0xac) + 0xbc +
                                           (iVar20 * 0x400 + iVar5) * 4), iVar5 == 0))))
                      goto LAB_0060490a;
                      uVar12 = uVar12 & 0x8000003f;
                      if ((int)uVar12 < 0) {
                        uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
                      }
                      uVar2 = uVar2 & 0x8000003f;
                      if ((int)uVar2 < 0) {
                        uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
                      }
                      iVar5 = *(int *)(iVar5 + 0x10018 + (uVar12 * 0x40 + uVar2) * 4);
                      if (iVar5 == 0) goto LAB_0060490a;
                      uVar12 = local_f4 & 0x800000ff;
                      if ((int)uVar12 < 0) {
                        uVar12 = (uVar12 - 1 | 0xffffff00) + 1;
                      }
                      uVar2 = (uint)local_b0 & 0x800000ff;
                      if ((int)uVar2 < 0) {
                        uVar2 = (uVar2 - 1 | 0xffffff00) + 1;
                      }
                      iVar5 = (uVar12 * 0x100 + uVar2) * 0x20 + *(int *)(iVar5 + 0xa8);
                      if ((iVar5 == 0) || (iVar20 = *(int *)(iVar5 + 0x10), iVar4 < iVar20))
                      goto LAB_0060490a;
                      if (iVar4 < *(int *)(iVar5 + 0x1c) + iVar20) {
                        puVar14 = (uint *)FUN_0042f730(iVar4 - iVar20);
                        fVar29 = local_d0;
                        fVar23 = local_a0;
                        fVar24 = local_a4;
                        if ((((*puVar14 & 0x1f000000) == 0) && (iVar4 < 1)) &&
                           ((*puVar14 & 0x40000000) == 0)) {
                          puVar14 = &DAT_0076de0c;
                        }
                      }
                      else {
                        puVar14 = &DAT_0076de0c;
                        if (0 < iVar4) {
                          puVar14 = (uint *)&DAT_0076de10;
                        }
                      }
                    }
                    iVar4 = local_c8;
                    uVar12 = *(byte *)((int)puVar14 + 3) & 0xffffff1f;
                    iVar5 = local_108;
                    if ((*(byte *)((int)puVar14 + 3) & 0x1f) != 0) {
                      iVar5 = local_108 + 1;
                      local_108 = iVar5;
                      if (uVar12 == 1) {
                        pfVar11 = (float *)FUN_005f9620(local_74,*(int *)(local_e8 + 0x60) * 0x100 +
                                                                 local_d4 * 8 + local_114,
                                                        *(int *)(local_e8 + 100) * 0x100 +
                                                        local_b4 * 8 + local_c8,
                                                        local_10c +
                                                        (*(int *)(local_ac + 4) + (int)local_9c) * 8
                                                        ,local_e8);
                        fVar23 = pfVar11[1] + local_a0;
                        fVar29 = local_d0 + *pfVar11;
                        fVar24 = pfVar11[2] + local_a4;
                        local_d0 = fVar29;
                        local_a4 = fVar24;
                        local_a0 = fVar23;
                      }
                      else {
                        if (uVar12 - 2 < 2) {
                          fVar25 = 80.0;
                          fVar26 = 100.0;
                          fVar28 = 255.0;
                        }
                        else {
                          fVar25 = (float)(byte)*puVar14;
                          fVar26 = (float)*(byte *)((int)puVar14 + 1);
                          fVar28 = (float)*(byte *)((int)puVar14 + 2);
                        }
                        fVar29 = fVar29 + fVar25;
                        fVar23 = fVar23 + fVar26;
                        fVar24 = fVar24 + fVar28;
                        local_d0 = fVar29;
                        local_a4 = fVar24;
                        local_a0 = fVar23;
                      }
                    }
                    local_10c = local_10c + 1;
                    fVar25 = fVar27;
                  } while (local_10c < 8);
                  local_c8 = iVar4 + 1;
                } while (local_c8 < 8);
                local_114 = local_114 + 1;
              } while (local_114 < 8);
              if (iVar5 != 0) {
                fVar27 = 1.0 / (float)iVar5;
                local_5c = (void *)(fVar27 * fVar29);
                local_58 = fVar27 * fVar23;
                local_54 = fVar27 * fVar24;
                if (((((int)local_d4 < 0) || ((int)local_b4 < 0)) ||
                    (((int)local_9c < 0 ||
                     ((iVar4 = (local_dc->Sprite_data).offset_0x40, iVar4 <= (int)local_d4 ||
                      (iVar5 = (local_dc->Sprite_data).offset_0x44, iVar5 <= (int)local_b4)))))) ||
                   ((int)(local_dc->Sprite_data).offset_0x48 <= (int)local_9c)) {
                  puVar15 = &DAT_0076b340;
                }
                else {
                  puVar15 = (undefined1 *)
                            (((iVar5 * (int)local_9c + local_b4) * iVar4 + local_d4) * 3 +
                            (int)(local_dc->Sprite_data).offset_0x2c);
                }
                iVar4 = 0;
                do {
                  iVar5 = iVar4 + 1;
                  puVar15[iVar4] = (char)(int)(float)(&local_5c)[iVar4];
                  iVar4 = iVar5;
                } while (iVar5 < 3);
              }
              local_9c = (void *)((int)local_9c + 1);
            } while ((int)local_9c < local_ec);
          }
          iVar4 = local_ac;
          local_b4 = local_b4 + 1;
        } while ((int)local_b4 < 0x20);
        local_d4 = local_d4 + 1;
      } while ((int)local_d4 < 0x20);
      FUN_004e7870();
      local_c4 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0;
      local_b8 = 0;
      local_8._0_1_ = 10;
      FUN_005870c0(4);
      *(undefined4 *)((int)local_c4 + local_b8) = *(undefined4 *)((int)local_a8 + 0x8000f8);
      local_b8 = local_b8 + 4;
      FUN_005870c0((local_c0 - (int)local_c4) + 4);
      *(undefined4 *)((int)local_c4 + local_b8) = *(undefined4 *)(iVar4 + 4);
      local_b8 = local_b8 + 4;
      iVar4 = (local_dc->Sprite_data).offset_0x44;
      iVar5 = (local_dc->Sprite_data).offset_0x40;
      iVar20 = (local_dc->Sprite_data).offset_0x48;
      local_68 = iVar5;
      iStack_64 = iVar4;
      FUN_005870c0((local_c0 - (int)local_c4) + 0xc);
      *(ulonglong *)((int)local_c4 + local_b8) = CONCAT44(iStack_64,local_68);
      *(int *)((int)local_c4 + local_b8 + 8) = iVar20;
      local_b8 = local_b8 + 0xc;
      if (((0 < iVar5) && (0 < iVar4)) && (0 < iVar20)) {
        local_5c = (void *)0x0;
        local_58 = 0.0;
        local_54 = 0.0;
        FUN_005870c0(iVar20 * iVar4 * iVar5 * 3);
        pvVar18 = local_5c;
        memcpy(local_5c,(local_dc->Sprite_data).offset_0x2c,(int)local_58 - (int)local_5c);
        local_50 = (void *)0x0;
        fStack_4c = 0.0;
        local_48 = 0.0;
        local_8._0_1_ = 0xc;
        FUN_005fc0d0(&local_5c,&local_50);
        _Src = local_50;
        _Size = (int)fStack_4c - (int)local_50;
        FUN_005870c0((local_c0 - (int)local_c4) + 4);
        *(size_t *)((int)local_c4 + local_b8) = _Size;
        local_b8 = local_b8 + 4;
        FUN_005870c0((_Size - (int)local_c4) + local_c0);
        memcpy((void *)((int)local_c4 + local_b8),_Src,_Size);
        local_b8 = local_b8 + _Size;
        if (_Src != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(_Src);
        }
        local_8._0_1_ = 10;
        if (pvVar18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(pvVar18);
        }
      }
      iVar4 = local_ac;
      uVar8 = *(undefined4 *)(local_ac + 0x24);
      FUN_005870c0((local_c0 - (int)local_c4) + 4);
      *(undefined4 *)((int)local_c4 + local_b8) = uVar8;
      local_b8 = local_b8 + 4;
      piVar13 = (int *)**(int **)(iVar4 + 0x20);
      if (piVar13 != *(int **)(iVar4 + 0x20)) {
        do {
          FUN_005870c0((local_c0 - (int)local_c4) + 0xc);
          *(undefined8 *)((int)local_c4 + local_b8) = *(undefined8 *)(piVar13 + 2);
          *(int *)((int)local_c4 + local_b8 + 8) = piVar13[4];
          local_b8 = local_b8 + 0xc;
          piVar13 = (int *)*piVar13;
        } while (piVar13 != (int *)*(int *)(iVar4 + 0x20));
      }
      uVar8 = FUN_0040e140(local_80);
      local_8._0_1_ = 0xd;
      FUN_004499c0(uVar8,&local_c4);
      p_Var17 = local_cc;
      local_8 = CONCAT31(local_8._1_3_,10);
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_80[0]);
      }
      EnterCriticalSection(local_cc);
      if (*(undefined4 **)(iVar4 + 8) == (undefined4 *)0x0) {
        *(undefined4 *)(iVar4 + 0x2c) = 0xfa;
      }
      else {
        (**(code **)**(undefined4 **)(iVar4 + 8))(1);
      }
      *(byte *)(iVar4 + 0x30) = *(byte *)(iVar4 + 0x30) | 2;
      *(Sprite **)(iVar4 + 8) = local_dc;
      LeaveCriticalSection(p_Var17);
      local_124 = (void *)0x0;
      local_120 = 0;
      local_11c = 0;
      local_118 = 0;
      local_8._0_1_ = 0xe;
      FUN_005870c0(4);
      *(undefined4 *)((int)local_124 + local_118) = *(undefined4 *)((int)local_a8 + 0x8000bc);
      local_118 = local_118 + 4;
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = (void *)((uint)local_80[0] & 0xffffff00);
      FUN_0040c280("discovered",10);
      local_8 = CONCAT31(local_8._1_3_,0xf);
      FUN_004499c0(local_80,&local_124);
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_80[0]);
      }
      if (local_124 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_124);
      }
      if (local_c4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_c4);
      }
      if (local_104 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_104);
      }
      local_8 = 0xffffffff;
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_1e0.vbtablePtr +
       (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_1e4 +
              (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      local_1c8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                     &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
      if ((local_18c & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)local_1c0._4_4_);
      }
      std::basic_streambuf<char,std::char_traits<char>_>::setg
                (local_1c8,(char *)0x0,(char *)0x0,(char *)0x0);
      *local_1b8 = 0;
      *local_1a8 = 0;
      *local_198 = 0;
      local_18c = local_18c & 0xfffffffe;
      local_190 = 0;
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>(local_1c8);
      std::basic_iostream<char,std::char_traits<char>_>::
      ~basic_iostream<char,std::char_traits<char>_>
                ((basic_iostream<char,std::char_traits<char>_> *)local_1c0);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_178);
      goto LAB_0060508a;
    }
  }
  FUN_005fb860();
  FUN_00404420(&local_1e0);
LAB_0060508a:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00605950 @ 00605950  kind=gamemisc  attributed-by=none  size=197 */

void FUN_00605950(float *param_1,undefined8 *param_2,int param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  float local_14;
  float fStack_10;
  
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (0 < param_3) {
    do {
      fVar1 = *(float *)(param_2 + 1);
      local_14 = (float)*param_2;
      fStack_10 = (float)((ulonglong)*param_2 >> 0x20);
      *param_1 = *param_1 + (local_14 - *param_1) * param_4;
      param_1[1] = (fStack_10 - param_1[1]) * param_4 + param_1[1];
      param_1[2] = (fVar1 - param_1[2]) * param_4 + param_1[2];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00605a20 @ 00605a20  kind=gamemisc  attributed-by=none  size=174 */

void FUN_00605a20(int param_1,int param_2,int *param_3)

{
  Widget *in_ECX;
  void *local_28 [4];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f0eb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 7;
  local_18 = 0;
  local_28[0] = (void *)((uint)local_28[0] & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
                    /* inlined constructor: cube::WorldPreviewWidget::WorldPreviewWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_28);
  if (7 < local_14) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_28[0]);
  }
  in_ECX[1].Object_data.offset_0x4 = param_3;
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::WorldPreviewWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr =
       (Widget_vftable_for_Deformer *)&cube::WorldPreviewWidget::vftable_for_Deformer;
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0x0;
  in_ECX[1].Object_data.offset_0x0 = 0;
  ExceptionList = local_10;
  return;
}


/* FUN_006089c0 @ 006089c0  kind=gamemisc  attributed-by=none  size=82 */

undefined2 * FUN_006089c0(undefined2 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar3 = (undefined4 *)*param_2;
  }
  iVar1 = param_2[4];
  puVar2 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar2 = (undefined4 *)*param_2;
  }
  *(undefined4 *)(param_1 + 10) = 7;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  FUN_00424da0(puVar2,iVar1 + (int)puVar3,param_2);
  return param_1;
}


/* FUN_00608a20 @ 00608a20  kind=gamemisc  attributed-by=none  size=58 */

int FUN_00608a20(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d590(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
    *(undefined4 *)(iVar1 + 0x14) = param_3[3];
  }
  return iVar1;
}


/* FUN_00609320 @ 00609320  kind=gamemisc  attributed-by=none  size=185 */

void FUN_00609320(uint param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5150;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x10000000) {
      pvVar3 = operator_new(param_1 << 4);
      if (pvVar3 != (void *)0x0) goto LAB_00609381;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00609381:
  local_8 = 0;
  FUN_00456d60(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  pvVar1 = (void *)*in_ECX;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  in_ECX[2] = (void *)(uVar2 * 0x10 + (int)pvVar3);
  in_ECX[1] = (in_ECX[1] - (int)pvVar1 & 0xfffffff0U) + (int)pvVar3;
  *in_ECX = pvVar3;
  ExceptionList = local_10;
  return;
}


/* FUN_00609400 @ 00609400  kind=gamemisc  attributed-by=none  size=115 */

void FUN_00609400(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 4)) {
    return;
  }
  if (0xfffffffU - (in_ECX[1] - *in_ECX >> 4) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 4;
  if (0xfffffff - (uVar1 >> 1) < uVar1) {
    FUN_00609320();
    return;
  }
  FUN_00609320();
  return;
}


/* FUN_0060a9f0 @ 0060a9f0  kind=gamemisc  attributed-by=none  size=14 */

void FUN_0060a9f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *param_1 = *in_ECX;
  return;
}


/* FUN_0060aac0 @ 0060aac0  kind=gamemisc  attributed-by=none  size=99 */

void FUN_0060aac0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined4 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_00609400(1);
    }
    param_1 = (undefined4 *)(((int)param_1 - (int)puVar2 & 0xfffffff0U) + *in_ECX);
  }
  else if (puVar1 == (undefined4 *)in_ECX[2]) {
    FUN_00609400(1);
  }
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  in_ECX[1] = in_ECX[1] + 0x10;
  return;
}


/* FUN_00623530 @ 00623530  kind=gamemisc  attributed-by=none  size=208 */

undefined4 FUN_00623530(void)

{
  HRESULT HVar1;
  int iVar2;
  Music *pMVar3;
  int *in_ECX;
  int *local_8;
  
  local_8 = in_ECX;
  CoInitializeEx((LPVOID)0x0,0);
  HVar1 = CoCreateInstance((IID *)&DAT_00702d68,(LPUNKNOWN)0x0,1,(IID *)&DAT_00702d78,&local_8);
  if (-1 < HVar1) {
    iVar2 = (**(code **)(*local_8 + 0x14))(local_8,0,0xffffffff);
    if (iVar2 < 0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
    else {
      in_ECX[1] = (int)local_8;
      iVar2 = (**(code **)(*(int *)in_ECX[1] + 0x28))((int *)in_ECX[1],in_ECX + 2,0,0,0,0,0);
      if (-1 < iVar2) {
        pMVar3 = operator_new(0x1e02f0);
        if (pMVar3 == (Music *)0x0) {
          pMVar3 = (Music *)0x0;
        }
        else {
          pMVar3 = cube::Music::Music(pMVar3,(Music_vftable *)in_ECX[1]);
        }
        in_ECX[9] = (int)pMVar3;
        pMVar3 = operator_new(0x1e02f0);
        if (pMVar3 == (Music *)0x0) {
          in_ECX[10] = 0;
          return 1;
        }
        pMVar3 = cube::Music::Music(pMVar3,(Music_vftable *)in_ECX[1]);
        in_ECX[10] = (int)pMVar3;
        return 1;
      }
    }
  }
  return 0;
}


/* FUN_006240d0 @ 006240d0  kind=gamemisc  attributed-by=none  size=31 */

void FUN_006240d0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_0046d590(0,0);
  *in_ECX = uVar1;
  return;
}


/* FUN_00624340 @ 00624340  kind=gamemisc  attributed-by=none  size=43 */

void FUN_00624340(void)

{
  int *in_ECX;
  undefined1 local_5;
  
  if (*in_ECX != 0) {
    FUN_0058d970(*in_ECX,in_ECX[1],&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  return;
}


/* FUN_00624a70 @ 00624a70  kind=gamemisc  attributed-by=none  size=506 */

longlong FUN_00624a70(int *param_1,int *param_2,int param_3,int *param_4,undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_44 [16];
  int local_34;
  undefined4 local_30;
  undefined8 local_2c;
  longlong local_24;
  uint local_1c;
  int local_18;
  longlong local_14;
  uint local_c;
  int local_8;
  
  iVar3 = param_1[3];
  uVar4 = param_1[2];
  local_14 = -1;
  local_24 = -1;
  local_34 = -1;
  local_30 = 0xffffffff;
  uVar6 = 0xffffffffffffffff;
  local_1c = uVar4;
  local_18 = iVar3;
  do {
    local_c = uVar4 - 0x10000;
    local_8 = iVar3 + -1 + (uint)(0xffff < uVar4);
    if ((local_8 < 1) && (local_8 < 0)) {
      local_c = 0;
      local_8 = 0;
    }
    iVar3 = local_8;
    uVar4 = local_c;
    if (*param_1 == 0) {
      iVar2 = -0x81;
      lVar5 = local_24;
    }
    else {
      if ((code *)param_1[0xb1] != (code *)0x0) {
        local_2c = uVar6;
        iVar2 = (*(code *)param_1[0xb1])(*param_1,local_c,local_8,0);
        uVar6 = local_2c;
        if (iVar2 != -1) {
          param_1[2] = uVar4;
          param_1[3] = iVar3;
          FUN_004018f0(param_1 + 6);
          iVar2 = 0;
          uVar6 = local_2c;
          lVar5 = local_24;
          goto LAB_00624b0c;
        }
      }
      iVar2 = -0x80;
      lVar5 = local_24;
    }
LAB_00624b0c:
    if (iVar2 != 0) {
      return (longlong)iVar2;
    }
    local_24 = lVar5;
    if ((param_1[3] <= local_18) && ((param_1[3] < local_18 || ((uint)param_1[2] < local_1c)))) {
      while( true ) {
        local_2c = uVar6;
        local_24 = lVar5;
        lVar5 = FUN_006247f0(local_44,local_1c - param_1[2],
                             (local_18 - param_1[3]) - (uint)(local_1c < (uint)param_1[2]));
        if (lVar5 == -0x80) {
          return -0x80;
        }
        iVar3 = local_8;
        uVar4 = local_c;
        uVar6 = local_2c;
        if (lVar5 < 0) break;
        local_34 = FUN_004010f0(local_44);
        iVar3 = local_34 >> 0x1f;
        uVar6 = FUN_00401060(local_44);
        if ((local_34 == *param_4) && (iVar3 == *param_4 >> 0x1f)) {
          *param_5 = uVar6;
          local_14 = lVar5;
        }
        iVar3 = param_3;
        piVar1 = param_2;
        if (param_2 != (int *)0x0) {
          while (iVar3 != 0) {
            if (*piVar1 == local_34) goto LAB_00624be8;
            iVar3 = iVar3 + -1;
            piVar1 = piVar1 + 1;
          }
        }
        local_14 = -1;
LAB_00624be8:
        if ((local_18 <= param_1[3]) &&
           ((iVar3 = local_8, uVar4 = local_c, local_24 = lVar5, local_18 < param_1[3] ||
            (local_1c <= (uint)param_1[2])))) break;
      }
    }
    if (local_24 != -1) {
      if (local_14 < 0) {
        *param_4 = local_34;
        *param_5 = uVar6;
        return local_24;
      }
      return local_14;
    }
  } while( true );
}


/* FUN_00624f80 @ 00624f80  kind=gamemisc  attributed-by=none  size=423 */

longlong FUN_00624f80(undefined4 param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *unaff_ESI;
  bool bVar10;
  longlong lVar11;
  undefined1 local_4c [32];
  undefined1 local_2c [16];
  uint local_1c;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = unaff_ESI[0x72];
  local_8 = -1;
  while( true ) {
    while( true ) {
      while( true ) {
        piVar1 = unaff_ESI + 6;
        uVar5 = FUN_00401480(piVar1,local_2c);
        lVar11 = CONCAT44(local_10,local_14);
        if (-1 < (int)uVar5) break;
        puVar2 = (uint *)(unaff_ESI + 2);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - uVar5;
        unaff_ESI[3] = (unaff_ESI[3] - ((int)uVar5 >> 0x1f)) - (uint)(uVar3 < uVar5);
      }
      if (uVar5 == 0) break;
      local_1c = unaff_ESI[2];
      iVar8 = unaff_ESI[3];
      unaff_ESI[2] = uVar5 + local_1c;
      unaff_ESI[3] = ((int)uVar5 >> 0x1f) + iVar8 + (uint)CARRY4(uVar5,local_1c);
      if (iVar8 < 0) goto LAB_006250fe;
      iVar8 = FUN_00401020(local_2c);
      lVar11 = CONCAT44(local_10,local_14);
      if (iVar8 != 0) goto LAB_006250fe;
      iVar8 = FUN_004010f0(local_2c);
      if (iVar8 == local_c) {
        piVar1 = unaff_ESI + 0x1e;
        FUN_004015c0(piVar1,local_2c);
        iVar8 = FUN_00401b10(piVar1,local_4c);
        iVar4 = local_8;
        while (iVar8 != 0) {
          iVar9 = iVar4;
          if ((0 < iVar8) && (iVar9 = FUN_006d0470(param_1,local_4c), iVar4 != -1)) {
            uVar5 = iVar9 + iVar4 >> 2;
            bVar10 = CARRY4(local_14,uVar5);
            local_14 = local_14 + uVar5;
            local_10 = local_10 + (iVar9 + iVar4 >> 0x1f) + (uint)bVar10;
          }
          iVar8 = FUN_00401b10(piVar1,local_4c);
          iVar4 = iVar9;
        }
        local_8 = iVar4;
        lVar11 = FUN_00401060(local_2c);
        if (lVar11 != -1) {
          lVar11 = FUN_00401060(local_2c);
          lVar11 = lVar11 - CONCAT44(local_10,local_14);
          goto LAB_006250fe;
        }
      }
    }
    piVar6 = _errno();
    *piVar6 = 0;
    lVar11 = CONCAT44(local_10,local_14);
    if ((unaff_ESI[0xb0] == 0) || (lVar11 = CONCAT44(local_10,local_14), *unaff_ESI == 0))
    goto LAB_006250fe;
    uVar7 = FUN_004013a0(piVar1,0x800);
    iVar8 = (*(code *)unaff_ESI[0xb0])(uVar7,1,0x800,*unaff_ESI);
    if (0 < iVar8) {
      FUN_00401450(piVar1,iVar8);
    }
    lVar11 = CONCAT44(local_10,local_14);
    if (iVar8 == 0) break;
    if (iVar8 < 0) {
LAB_006250fe:
      local_10 = (int)((ulonglong)lVar11 >> 0x20);
      if ((local_10 < 1) && (lVar11 < 0)) {
        return 0;
      }
      return lVar11;
    }
  }
  _errno();
  lVar11 = CONCAT44(local_10,local_14);
  goto LAB_006250fe;
}


/* FUN_00625130 @ 00625130  kind=gamemisc  attributed-by=none  size=1183 */

int FUN_00625130(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                uint param_6,int param_7,undefined4 param_8,int param_9,int param_10,int *param_11,
                int param_12,int param_13)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined4 local_74 [8];
  undefined1 local_54 [16];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  uint local_1c;
  int local_18;
  undefined8 local_14;
  undefined4 local_c;
  int local_8;
  
  iVar5 = param_12;
  piVar4 = param_1;
  lVar14 = CONCAT44(local_24._4_4_,(undefined4)local_24);
  local_2c = 0xffffffff;
  local_28 = 0xffffffff;
  iVar6 = param_1[0x72];
  local_1c = param_6;
  local_18 = param_7;
  iVar8 = param_12;
  piVar1 = param_11;
  local_8 = iVar6;
  if (param_11 != (int *)0x0) {
    while (iVar8 != 0) {
      local_14._0_4_ = param_6;
      local_14._4_4_ = param_7;
      iVar3 = param_13;
      if (*piVar1 == param_10) {
        while (param_13 = iVar3, param_10 != iVar6) {
          param_10 = iVar6;
          uVar13 = FUN_00624a70(piVar4,param_11,iVar5,&param_10,&param_8);
          *(undefined8 *)(piVar4 + 2) = uVar13;
          iVar3 = param_13;
        }
        piVar4[0xd] = iVar3 + 1;
        if ((void *)piVar4[0xe] != (void *)0x0) {
          free((void *)piVar4[0xe]);
        }
        if ((void *)piVar4[0x10] != (void *)0x0) {
          free((void *)piVar4[0x10]);
        }
        if ((void *)piVar4[0xf] != (void *)0x0) {
          free((void *)piVar4[0xf]);
        }
        iVar6 = piVar4[0xd];
        pvVar7 = malloc(iVar6 * 8 + 8);
        piVar4[0xe] = (int)pvVar7;
        pvVar7 = realloc((void *)piVar4[0x12],iVar6 << 5);
        piVar4[0x12] = (int)pvVar7;
        pvVar7 = realloc((void *)piVar4[0x13],piVar4[0xd] << 4);
        iVar6 = piVar4[0xd];
        piVar4[0x13] = (int)pvVar7;
        pvVar7 = malloc(iVar6 * 4);
        piVar4[0x10] = (int)pvVar7;
        pvVar7 = malloc(iVar6 * 8);
        piVar4[0xf] = (int)pvVar7;
        pvVar7 = malloc(iVar6 << 4);
        piVar4[0x11] = (int)pvVar7;
        iVar6 = piVar4[0xe];
        *(uint *)(iVar6 + 8 + iVar3 * 8) = param_6;
        *(int *)(iVar6 + 0xc + iVar3 * 8) = param_7;
        iVar6 = piVar4[0xe];
        *(undefined4 *)(iVar6 + iVar3 * 8) = param_2;
        *(undefined4 *)(iVar6 + 4 + iVar3 * 8) = param_3;
        if ((param_9 < 1) && (param_9 < 0)) {
          param_8 = 0;
          param_9 = 0;
        }
        iVar6 = piVar4[0x11];
        *(undefined4 *)(iVar6 + 8 + iVar3 * 0x10) = param_8;
        *(int *)(iVar6 + 0xc + iVar3 * 0x10) = param_9;
        return 0;
      }
      iVar8 = iVar8 + -1;
      piVar1 = piVar1 + 1;
    }
  }
  param_1 = (void *)0x0;
  local_c = 0;
  local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24);
  local_14 = CONCAT44(param_7,param_6);
  if ((param_5 <= param_7) &&
     ((local_24 = lVar14, lVar14 = CONCAT44(param_7,param_6), param_5 < param_7 ||
      (local_14 = CONCAT44(param_7,param_6), lVar14 = CONCAT44(param_7,param_6), param_4 < param_6))
     )) {
    do {
      bVar12 = -1 < (int)((local_18 - param_5) - (uint)(local_1c < param_4));
      if ((local_18 - param_5 != (uint)(local_1c < param_4) && bVar12) ||
         ((uVar13 = CONCAT44(param_5,param_4), bVar12 &&
          (uVar13 = CONCAT44(param_5,param_4), 0xffff < local_1c - param_4)))) {
        local_14 = lVar14;
        uVar13 = __alldiv(local_1c + param_4,local_18 + param_5 + (uint)CARRY4(local_1c,param_4),2,0
                         );
        lVar14 = local_14;
      }
      local_34._4_4_ = (int)((ulonglong)uVar13 >> 0x20);
      uVar11 = (uint)uVar13;
      if ((uVar11 != piVar4[2]) || (local_34._4_4_ != piVar4[3])) {
        if (*piVar4 == 0) {
          iVar6 = -0x81;
        }
        else {
          if ((code *)piVar4[0xb1] != (code *)0x0) {
            local_14 = lVar14;
            iVar6 = (*(code *)piVar4[0xb1])(*piVar4,uVar13,0);
            lVar14 = local_14;
            if (iVar6 != -1) {
              *(undefined8 *)(piVar4 + 2) = uVar13;
              FUN_004018f0(piVar4 + 6);
              iVar6 = 0;
              lVar14 = local_14;
              goto LAB_00625512;
            }
          }
          iVar6 = -0x80;
        }
LAB_00625512:
        if (iVar6 != 0) {
          return iVar6;
        }
      }
      local_14 = lVar14;
      lVar14 = FUN_006247f0(local_54,0xffffffff,0xffffffff);
      if (lVar14 == -0x80) {
        return -0x80;
      }
      local_24 = lVar14;
      if (-1 < lVar14) {
        iVar8 = FUN_004010f0(local_54);
        piVar1 = param_11;
        iVar6 = param_12;
        if (param_11 != (int *)0x0) {
          while (iVar6 != 0) {
            if (*piVar1 == iVar8) {
              param_4 = piVar4[2];
              param_5 = piVar4[3];
              goto LAB_00625592;
            }
            piVar1 = piVar1 + 1;
            iVar6 = iVar6 + -1;
          }
        }
      }
      local_18 = local_34._4_4_;
      local_1c = uVar11;
      if (-1 < local_24) {
        local_14 = local_24;
      }
LAB_00625592:
      lVar14 = local_14;
    } while ((param_5 < local_18) || ((param_5 <= local_18 && (param_4 < local_1c))));
  }
  iVar5 = local_8;
  iVar8 = (uint)local_14;
  *(longlong *)(piVar4 + 2) = local_14;
  lVar14 = local_14;
  iVar6 = local_8 + 1;
  while (iVar6 != iVar5) {
    param_5 = iVar5;
    local_14 = lVar14;
    uVar13 = FUN_00624a70(piVar4,param_11,param_12,&param_5,&local_2c);
    *(undefined8 *)(piVar4 + 2) = uVar13;
    lVar14 = local_14;
    iVar6 = param_5;
  }
  local_14._4_4_ = (int)((ulonglong)lVar14 >> 0x20);
  if ((piVar4[2] != iVar8) || (piVar4[3] != local_14._4_4_)) {
    iVar6 = FUN_00624790(iVar8,local_14._4_4_);
    local_14 = lVar14;
    lVar14 = local_14;
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  local_14 = lVar14;
  iVar6 = FUN_00624c70(piVar4,local_74,&local_44,&param_1,&local_c);
  if (iVar6 == 0) {
    param_4 = piVar4[2];
    param_5 = piVar4[3];
    iVar8 = piVar4[0x72];
    local_34 = FUN_00624f80(local_74);
    iVar5 = param_13;
    iVar6 = FUN_00625130(piVar4,local_14,piVar4[2],piVar4[3],param_6,param_7,param_8,param_9,
                         param_10,param_1,local_c,param_13 + 1);
    if (iVar6 == 0) {
      uVar13 = local_34;
      lVar14 = local_14;
      if (param_1 != (void *)0x0) {
        free(param_1);
        uVar13 = local_34;
        lVar14 = local_14;
      }
      local_14._4_4_ = (int)((ulonglong)lVar14 >> 0x20);
      local_14._0_4_ = (uint)lVar14;
      local_34._4_4_ = (int)((ulonglong)uVar13 >> 0x20);
      local_34._0_4_ = (uint)uVar13;
      iVar6 = piVar4[0xe];
      *(uint *)(iVar6 + 8 + iVar5 * 8) = (uint)local_14;
      *(int *)(iVar6 + 0xc + iVar5 * 8) = local_14._4_4_;
      *(int *)(piVar4[0x10] + 4 + iVar5 * 4) = iVar8;
      iVar6 = piVar4[0xf];
      *(uint *)(iVar6 + 8 + iVar5 * 8) = param_4;
      *(int *)(iVar6 + 0xc + iVar5 * 8) = param_5;
      puVar9 = local_74;
      puVar10 = (undefined4 *)((iVar5 + 1) * 0x20 + piVar4[0x12]);
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      iVar6 = piVar4[0x13];
      *(undefined4 *)(iVar6 + 0x10 + param_13 * 0x10) = local_44;
      *(undefined4 *)(iVar6 + 0x14 + param_13 * 0x10) = local_40;
      iVar6 = iVar6 + 0x10 + param_13 * 0x10;
      *(undefined4 *)(iVar6 + 8) = local_3c;
      *(undefined4 *)(iVar6 + 0xc) = local_38;
      iVar6 = piVar4[0x11];
      *(undefined4 *)(iVar6 + 8 + param_13 * 0x10) = local_2c;
      *(undefined4 *)(iVar6 + 0xc + param_13 * 0x10) = local_28;
      iVar6 = piVar4[0x11];
      *(uint *)(iVar6 + 0x10 + param_13 * 0x10) = (uint)local_34;
      *(int *)(iVar6 + 0x14 + param_13 * 0x10) = local_34._4_4_;
      iVar6 = piVar4[0x11];
      puVar2 = (uint *)(iVar6 + 0x18 + param_13 * 0x10);
      uVar11 = *puVar2;
      *puVar2 = *puVar2 - (uint)local_34;
      piVar1 = (int *)(iVar6 + param_13 * 0x10 + 0x1c);
      *piVar1 = (*piVar1 - local_34._4_4_) - (uint)(uVar11 < (uint)local_34);
      iVar6 = *(int *)(piVar4[0x11] + 0x1c + param_13 * 0x10);
      puVar9 = (undefined4 *)(piVar4[0x11] + 0x18 + param_13 * 0x10);
      if ((iVar6 < 1) && (iVar6 < 0)) {
        *puVar9 = 0;
        puVar9[1] = 0;
      }
      iVar6 = 0;
    }
  }
  return iVar6;
}


/* FUN_00625a30 @ 00625a30  kind=gamemisc  attributed-by=none  size=35 */

int FUN_00625a30(FILE *param_1,long param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_1 == (FILE *)0x0) {
    return -1;
  }
  iVar1 = fseek(param_1,param_2,param_4);
  return iVar1;
}


/* FUN_00627670 @ 00627670  kind=gamemisc  attributed-by=none  size=45 */

void FUN_00627670(void)

{
  Object *in_ECX;
  
  if ((int *)0x7 < in_ECX[2].Object_data.offset_0x4) {
                    /* WARNING: Subroutine does not return */
    operator_delete(in_ECX[1].vftablePtr);
  }
  in_ECX[2].Object_data.offset_0x4 = (int *)0x7;
  in_ECX[2].Object_data.offset_0x0 = 0;
  *(undefined2 *)&in_ECX[1].vftablePtr = 0;
  plasma::Object::~Object(in_ECX);
  return;
}


/* FUN_00627ce0 @ 00627ce0  kind=gamemisc  attributed-by=none  size=99 */

void FUN_00627ce0(void)

{
  __security_check_cookie(DAT_0076aa78 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00627d50 @ 00627d50  kind=gamemisc  attributed-by=none  size=99 */

void FUN_00627d50(void)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  undefined4 in_EDX;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(in_ECX + 0x50);
  fVar2 = *(float *)(in_ECX + 0x60);
  fVar3 = (fVar1 + *(float *)(in_ECX + 0x78)) - fVar2;
  fVar4 = (fVar1 + *(float *)(in_ECX + 0x70)) - fVar2;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  if (fVar4 < fVar3) {
    fVar4 = fVar3;
  }
  __security_check_cookie
            (DAT_0076aa78 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc,in_EDX,
             (fVar2 + fVar4) - fVar1);
  return;
}


/* FUN_006290d0 @ 006290d0  kind=gamemisc  attributed-by=none  size=98 */

void FUN_006290d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = param_1;
  if ((~(byte)(*(uint *)(param_1 + 200) >> 2) & 1) != 0) {
    if ((param_1 != *(int *)(in_ECX + 0x148)) && (*(int *)(param_1 + 0x40) != 0)) {
      param_1 = *(int *)(param_1 + 0x40);
      FUN_004860b0(&param_1);
      return;
    }
    piVar2 = (int *)**(int **)(param_1 + 0x2c);
    if (piVar2 != *(int **)(param_1 + 0x2c)) {
      do {
        FUN_006290d0(piVar2[2],param_2);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(iVar1 + 0x2c));
    }
  }
  return;
}


/* FUN_00629140 @ 00629140  kind=gamemisc  attributed-by=none  size=131 */

undefined4 * FUN_00629140(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f56a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_0046d550(0,0);
  *param_1 = uVar1;
  local_8 = 0;
  FUN_006290d0(*(undefined4 *)(in_ECX + 0x148),param_1);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_006291d0 @ 006291d0  kind=gamemisc  attributed-by=none  size=42 */

void FUN_006291d0(void)

{
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0062de60(local_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006294c0 @ 006294c0  kind=gamemisc  attributed-by=none  size=12 */

void FUN_006294c0(void)

{
  int in_ECX;
  
  FUN_00629300(*(undefined4 *)(in_ECX + 0x148));
  return;
}


/* FUN_006294d0 @ 006294d0  kind=gamemisc  attributed-by=none  size=194 */

void FUN_006294d0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int in_ECX;
  float fVar6;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pfVar5 = (float *)FUN_0062d7f0(local_48);
  fVar1 = pfVar5[5];
  fVar6 = 1.0 / (pfVar5[7] * 0.0 + pfVar5[3] * 0.0 + pfVar5[0xf]);
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[0xd];
  fVar4 = *(float *)(*(int *)(in_ECX + 4) + 0xd8);
  *param_1 = *(float *)(*(int *)(in_ECX + 4) + 0xd4) -
             fVar6 * (pfVar5[4] * 0.0 + *pfVar5 * 0.0 + pfVar5[0xc]);
  param_1[1] = fVar4 - fVar6 * (fVar1 * 0.0 + fVar2 * 0.0 + fVar3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006295a0 @ 006295a0  kind=gamemisc  attributed-by=none  size=4261 */

void FUN_006295a0(float *param_1,char param_2)

{
  undefined1 uVar1;
  float *pfVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_104;
  float local_100;
  float local_e4;
  float local_d8;
  undefined1 local_d0 [64];
  undefined1 local_90 [4];
  int local_8c;
  float local_88 [4];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pfVar2 = (float *)FUN_0062b510(local_90);
  iVar3 = 0;
  iVar4 = (int)param_1 - (int)pfVar2;
  while (*(float *)(iVar4 + (int)pfVar2) == *pfVar2) {
    iVar3 = iVar3 + 1;
    pfVar2 = pfVar2 + 1;
    if (1 < iVar3) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  uVar1 = *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0x148) + 0x38) + 0x2d);
  FUN_0062d7f0(local_88);
  FUN_0062d7f0(local_88);
  iVar3 = *(int *)(in_ECX + 0x148);
  local_8c = *(int *)(iVar3 + 0x38);
  FUN_00423e70();
  fVar14 = local_2c;
  fVar13 = local_30;
  fVar22 = local_34;
  fVar19 = local_38;
  fVar12 = local_48[3];
  fVar11 = local_48[2];
  fVar9 = local_48[1];
  fVar8 = local_48[0];
  iVar3 = *(int *)(iVar3 + 0x28);
  do {
    if (iVar3 == 0) {
LAB_006296c1:
      local_100 = local_c;
      local_d8 = local_10;
      local_104 = local_18;
      local_e4 = local_14;
LAB_006296f5:
      pfVar2 = (float *)FUN_0062c5b0(local_d0);
      fVar10 = pfVar2[8];
      fVar21 = pfVar2[0xf];
      fVar17 = *pfVar2 * local_48[0] + pfVar2[1] * local_38 + pfVar2[2] * local_28 +
               pfVar2[3] * local_104;
      fVar6 = local_48[0] * pfVar2[4];
      local_48[0] = fVar17;
      fVar18 = pfVar2[5] * local_38 + fVar6 + pfVar2[6] * local_28 + pfVar2[7] * local_104;
      fVar7 = local_38 * pfVar2[9];
      fVar6 = pfVar2[0xd];
      local_38 = fVar18;
      fVar20 = pfVar2[0xe];
      fVar16 = local_28 * fVar20;
      fVar15 = pfVar2[0xc];
      local_28 = fVar8 * fVar10 + fVar7 + pfVar2[10] * local_28 + pfVar2[0xb] * local_104;
      local_18 = fVar8 * fVar15 + fVar19 * fVar6 + fVar16 + fVar21 * local_104;
      local_48[1] = *pfVar2 * local_48[1] + pfVar2[1] * local_34 + pfVar2[2] * local_24 +
                    pfVar2[3] * local_e4;
      fVar8 = local_34 * pfVar2[9];
      local_34 = pfVar2[5] * local_34 + fVar9 * pfVar2[4] + pfVar2[6] * local_24 +
                 pfVar2[7] * local_e4;
      fVar19 = local_24 * fVar20;
      local_24 = fVar9 * fVar10 + fVar8 + pfVar2[10] * local_24 + pfVar2[0xb] * local_e4;
      local_14 = fVar9 * fVar15 + fVar22 * fVar6 + fVar19 + fVar21 * local_e4;
      fVar8 = local_48[2] * pfVar2[4];
      local_48[2] = *pfVar2 * local_48[2] + pfVar2[1] * local_30 + pfVar2[2] * local_20 +
                    pfVar2[3] * local_d8;
      fVar9 = local_30 * pfVar2[9];
      local_30 = pfVar2[5] * local_30 + fVar8 + pfVar2[6] * local_20 + pfVar2[7] * local_d8;
      fVar8 = local_20 * fVar20;
      local_20 = fVar11 * fVar10 + fVar9 + pfVar2[10] * local_20 + pfVar2[0xb] * local_d8;
      local_10 = fVar11 * fVar15 + fVar13 * fVar6 + fVar8 + fVar21 * local_d8;
      fVar8 = local_48[3] * pfVar2[4];
      local_48[3] = *pfVar2 * local_48[3] + pfVar2[1] * local_2c + pfVar2[2] * local_1c +
                    pfVar2[3] * local_100;
      fVar9 = local_2c * pfVar2[9];
      local_2c = pfVar2[5] * local_2c + fVar8 + pfVar2[6] * local_1c + pfVar2[7] * local_100;
      fVar20 = local_1c * fVar20;
      local_1c = fVar12 * fVar10 + fVar9 + pfVar2[10] * local_1c + pfVar2[0xb] * local_100;
      fVar8 = *(float *)(in_ECX + 0xa8);
      local_c = fVar12 * fVar15 + fVar14 * fVar6 + fVar20 + fVar21 * local_100;
      fVar9 = *(float *)(in_ECX + 0xac);
      pfVar2 = local_48;
      pfVar5 = local_88;
      for (iVar3 = 0x10; fVar13 = local_5c, fVar22 = local_6c, fVar19 = local_88[3],
          fVar12 = local_88[2], fVar11 = local_88[1], iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar2;
        pfVar2 = pfVar2 + 1;
        pfVar5 = pfVar5 + 1;
      }
      local_88[0] = fVar17 * fVar8 + fVar18 * fVar9 + local_28 * *(float *)(in_ECX + 0xb0) +
                    local_18 * *(float *)(in_ECX + 0xb4);
      local_78 = fVar17 * *(float *)(in_ECX + 0xb8) + fVar18 * *(float *)(in_ECX + 0xbc) +
                 local_28 * *(float *)(in_ECX + 0xc0) + local_18 * *(float *)(in_ECX + 0xc4);
      fVar9 = *(float *)(in_ECX + 0xe0);
      fVar14 = *(float *)(in_ECX + 0xd8);
      local_68 = *(float *)(in_ECX + 200) * fVar17 + *(float *)(in_ECX + 0xcc) * fVar18 +
                 local_28 * *(float *)(in_ECX + 0xd0) + *(float *)(in_ECX + 0xd4) * local_18;
      local_58 = fVar14 * fVar17 + *(float *)(in_ECX + 0xdc) * fVar18 + local_28 * fVar9 +
                 *(float *)(in_ECX + 0xe4) * local_18;
      fVar10 = local_88[1] * *(float *)(in_ECX + 0xb8);
      local_88[1] = local_88[1] * fVar8 + local_74 * *(float *)(in_ECX + 0xac) +
                    local_64 * *(float *)(in_ECX + 0xb0) + local_54 * *(float *)(in_ECX + 0xb4);
      fVar8 = local_74 * *(float *)(in_ECX + 0xcc);
      fVar21 = local_74 * *(float *)(in_ECX + 0xdc);
      local_74 = local_74 * *(float *)(in_ECX + 0xbc) + fVar10 +
                 local_64 * *(float *)(in_ECX + 0xc0) + local_54 * *(float *)(in_ECX + 0xc4);
      fVar10 = local_64 * fVar9;
      local_64 = fVar11 * *(float *)(in_ECX + 200) + fVar8 + local_64 * *(float *)(in_ECX + 0xd0) +
                 local_54 * *(float *)(in_ECX + 0xd4);
      local_54 = fVar11 * fVar14 + fVar21 + fVar10 + local_54 * *(float *)(in_ECX + 0xe4);
      fVar8 = local_88[2] * *(float *)(in_ECX + 0xb8);
      local_88[2] = local_88[2] * *(float *)(in_ECX + 0xa8) + local_70 * *(float *)(in_ECX + 0xac) +
                    local_60 * *(float *)(in_ECX + 0xb0) + local_50 * *(float *)(in_ECX + 0xb4);
      fVar11 = local_70 * *(float *)(in_ECX + 0xcc);
      fVar10 = local_70 * *(float *)(in_ECX + 0xdc);
      local_70 = local_70 * *(float *)(in_ECX + 0xbc) + fVar8 + local_60 * *(float *)(in_ECX + 0xc0)
                 + local_50 * *(float *)(in_ECX + 0xc4);
      fVar8 = local_60 * fVar9;
      local_60 = fVar12 * *(float *)(in_ECX + 200) + fVar11 + local_60 * *(float *)(in_ECX + 0xd0) +
                 local_50 * *(float *)(in_ECX + 0xd4);
      local_50 = fVar12 * fVar14 + fVar10 + fVar8 + local_50 * *(float *)(in_ECX + 0xe4);
      fVar8 = local_88[3] * *(float *)(in_ECX + 0xb8);
      local_88[3] = local_88[3] * *(float *)(in_ECX + 0xa8) + local_6c * *(float *)(in_ECX + 0xac) +
                    local_5c * *(float *)(in_ECX + 0xb0) + local_4c * *(float *)(in_ECX + 0xb4);
      fVar11 = local_6c * *(float *)(in_ECX + 0xcc);
      local_6c = local_6c * *(float *)(in_ECX + 0xbc) + fVar8 + local_5c * *(float *)(in_ECX + 0xc0)
                 + local_4c * *(float *)(in_ECX + 0xc4);
      fVar8 = *(float *)(local_8c + 500);
      local_5c = fVar19 * *(float *)(in_ECX + 200) + fVar11 + local_5c * *(float *)(in_ECX + 0xd0) +
                 local_4c * *(float *)(in_ECX + 0xd4);
      fVar11 = *(float *)(local_8c + 0x1f0);
      fVar12 = *(float *)(local_8c + 0x1f8);
      fVar10 = *(float *)(local_8c + 0x228);
      local_4c = fVar19 * fVar14 + fVar22 * *(float *)(in_ECX + 0xdc) + fVar13 * fVar9 +
                 local_4c * *(float *)(in_ECX + 0xe4);
      pfVar2 = local_88;
      pfVar5 = local_48;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar2;
        pfVar2 = pfVar2 + 1;
        pfVar5 = pfVar5 + 1;
      }
      local_48[0] = fVar11 * local_88[0] + fVar8 * local_78 + fVar12 * local_68 +
                    *(float *)(local_8c + 0x1fc) * local_58;
      local_38 = *(float *)(local_8c + 0x200) * local_88[0] +
                 *(float *)(local_8c + 0x204) * local_78 + *(float *)(local_8c + 0x208) * local_68 +
                 *(float *)(local_8c + 0x20c) * local_58;
      fVar8 = *(float *)(local_8c + 0x220);
      local_28 = *(float *)(local_8c + 0x210) * local_88[0] +
                 *(float *)(local_8c + 0x214) * local_78 + *(float *)(local_8c + 0x218) * local_68 +
                 *(float *)(local_8c + 0x21c) * local_58;
      local_18 = fVar8 * local_88[0] + *(float *)(local_8c + 0x224) * local_78 + fVar10 * local_68 +
                 *(float *)(local_8c + 0x22c) * local_58;
      fVar12 = local_24 * fVar12;
      fVar9 = *(float *)(local_8c + 0x1fc) * local_14;
      fVar17 = local_48[1] * *(float *)(local_8c + 0x200);
      fVar11 = local_24 * *(float *)(local_8c + 0x208);
      fVar19 = *(float *)(local_8c + 0x20c) * local_14;
      fVar22 = local_24 * fVar10;
      local_24 = local_48[1] * *(float *)(local_8c + 0x210) +
                 local_34 * *(float *)(local_8c + 0x214) + local_24 * *(float *)(local_8c + 0x218) +
                 *(float *)(local_8c + 0x21c) * local_14;
      local_14 = local_48[1] * fVar8 + local_34 * *(float *)(local_8c + 0x224) + fVar22 +
                 *(float *)(local_8c + 0x22c) * local_14;
      fVar22 = local_20 * *(float *)(local_8c + 0x1f8);
      fVar13 = local_10 * *(float *)(local_8c + 0x1fc);
      fVar14 = local_48[2] * *(float *)(local_8c + 0x200);
      fVar21 = local_20 * *(float *)(local_8c + 0x208);
      fVar6 = local_10 * *(float *)(local_8c + 0x20c);
      fVar20 = local_20 * fVar10;
      local_20 = local_48[2] * *(float *)(local_8c + 0x210) +
                 local_30 * *(float *)(local_8c + 0x214) + local_20 * *(float *)(local_8c + 0x218) +
                 local_10 * *(float *)(local_8c + 0x21c);
      local_10 = local_48[2] * fVar8 + local_30 * *(float *)(local_8c + 0x224) + fVar20 +
                 local_10 * *(float *)(local_8c + 0x22c);
      fVar20 = local_1c * *(float *)(local_8c + 0x1f8);
      fVar15 = *(float *)(local_8c + 0x1fc) * local_c;
      fVar18 = local_48[3] * *(float *)(local_8c + 0x200);
      fVar7 = local_1c * *(float *)(local_8c + 0x208);
      fVar16 = *(float *)(local_8c + 0x20c) * local_c;
      fVar10 = local_1c * fVar10;
      local_1c = local_48[3] * *(float *)(local_8c + 0x210) +
                 local_2c * *(float *)(local_8c + 0x214) + local_1c * *(float *)(local_8c + 0x218) +
                 *(float *)(local_8c + 0x21c) * local_c;
      local_c = local_48[3] * fVar8 + local_2c * *(float *)(local_8c + 0x224) + fVar10 +
                *(float *)(local_8c + 0x22c) * local_c;
      local_48[1] = *(float *)(local_8c + 0x1f0) * local_48[1] +
                    *(float *)(local_8c + 500) * local_34 + fVar12 + fVar9;
      local_48[2] = local_48[2] * *(float *)(local_8c + 0x1f0) +
                    local_30 * *(float *)(local_8c + 500) + fVar22 + fVar13;
      local_48[3] = *(float *)(local_8c + 0x1f0) * local_48[3] +
                    *(float *)(local_8c + 500) * local_2c + fVar20 + fVar15;
      local_34 = fVar17 + *(float *)(local_8c + 0x204) * local_34 + fVar11 + fVar19;
      local_30 = local_30 * *(float *)(local_8c + 0x204) + fVar14 + fVar21 + fVar6;
      local_2c = fVar18 + *(float *)(local_8c + 0x204) * local_2c + fVar7 + fVar16;
      FUN_0058c440();
      iVar3 = *(int *)(*(int *)(in_ECX + 0x148) + 0x38);
      FUN_00424f30(local_88,in_ECX + 0xe8);
      fVar11 = 1.0 / (local_6c * 0.0 + local_88[3] * 0.0 + local_4c);
      fVar8 = param_1[1];
      fVar9 = *param_1;
      iVar4 = *(int *)(iVar3 + 0x68);
      iVar3 = *(int *)(iVar3 + 0x94);
      fVar12 = 1.0 / (fVar9 * local_48[3] + fVar8 * local_2c + local_c);
      *(float *)(iVar3 + iVar4 * 8) =
           (fVar12 * (fVar9 * local_48[0] + fVar8 * local_38 + local_18) -
           fVar11 * (local_78 * 0.0 + local_88[0] * 0.0 + local_58)) + *(float *)(iVar3 + iVar4 * 8)
      ;
      *(float *)(iVar3 + 4 + iVar4 * 8) =
           (fVar12 * (fVar9 * local_48[1] + fVar8 * local_34 + local_14) -
           fVar11 * (local_74 * 0.0 + local_88[1] * 0.0 + local_54)) +
           *(float *)(iVar3 + 4 + iVar4 * 8);
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x148) + 0x38) + 4))(1);
      FUN_0062d7f0(local_d0);
      FUN_0062d7f0(local_d0);
      if (param_2 == '\0') {
        *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0x148) + 0x38) + 0x2d) = uVar1;
        FUN_00637260();
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*(int *)(iVar3 + 0x40) != 0) {
      if (*(int *)(iVar3 + 0x40) != 0) {
        pfVar2 = (float *)FUN_0062c5b0(local_88);
        fVar21 = 1.0 / (pfVar2[7] * 0.0 + pfVar2[3] * 0.0 + pfVar2[0xf]);
        fVar10 = fVar21 * (pfVar2[4] * 0.0 + *pfVar2 * 0.0 + pfVar2[0xc]) * -1.0;
        fVar21 = fVar21 * (pfVar2[5] * 0.0 + pfVar2[1] * 0.0 + pfVar2[0xd]) * -1.0;
        local_104 = local_38 * fVar21 + local_48[0] * fVar10 + local_18;
        local_e4 = local_34 * fVar21 + local_48[1] * fVar10 + local_14;
        local_d8 = local_30 * fVar21 + local_48[2] * fVar10 + local_10;
        local_100 = local_2c * fVar21 + local_48[3] * fVar10 + local_c;
        goto LAB_006296f5;
      }
      goto LAB_006296c1;
    }
    iVar3 = *(int *)(iVar3 + 0x28);
  } while( true );
}


/* FUN_0062a650 @ 0062a650  kind=gamemisc  attributed-by=none  size=64 */

void FUN_0062a650(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_10 = param_1;
  local_c = param_2;
  FUN_006295a0(&local_10,param_3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062b400 @ 0062b400  kind=gamemisc  attributed-by=none  size=36 */

undefined4 FUN_0062b400(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x148) + 0x28);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x40) != 0) break;
    iVar1 = *(int *)(iVar1 + 0x28);
  }
  return *(undefined4 *)(iVar1 + 0x40);
}


/* FUN_0062b510 @ 0062b510  kind=gamemisc  attributed-by=none  size=1036 */

void FUN_0062b510(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float *pfVar12;
  int in_ECX;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_d8;
  float local_d0;
  float local_cc;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_00423e70();
  iVar11 = *(int *)(*(int *)(in_ECX + 0x148) + 0x28);
  do {
    if (iVar11 == 0) {
LAB_0062b551:
      local_d0 = local_c;
      local_d8 = local_14;
      local_cc = local_18;
LAB_0062b578:
      pfVar12 = (float *)FUN_0062c5b0(local_c8);
      fVar13 = pfVar12[0xd];
      fVar15 = pfVar12[0xe];
      fVar1 = *pfVar12;
      fVar2 = pfVar12[1];
      fVar3 = pfVar12[5];
      fVar4 = pfVar12[2];
      fVar5 = pfVar12[3];
      fVar6 = pfVar12[4];
      fVar7 = pfVar12[0xc];
      fVar8 = pfVar12[6];
      fVar9 = pfVar12[7];
      fVar10 = pfVar12[0xf];
      fVar14 = 1.0 / ((local_3c * *pfVar12 + local_2c * pfVar12[1] + local_1c * pfVar12[2] +
                      local_d0 * pfVar12[3]) * 0.0 +
                      (local_2c * pfVar12[5] + pfVar12[4] * local_3c + local_1c * pfVar12[6] +
                      local_d0 * pfVar12[7]) * 0.0 +
                     pfVar12[0xd] * local_2c + fVar7 * local_3c + local_1c * fVar15 +
                     local_d0 * pfVar12[0xf]);
      *param_1 = ((local_48 * *pfVar12 + local_38 * pfVar12[1] + local_28 * pfVar12[2] +
                  local_cc * pfVar12[3]) * 0.0 +
                  (local_38 * pfVar12[5] + pfVar12[4] * local_48 + local_28 * pfVar12[6] +
                  local_cc * pfVar12[7]) * 0.0 +
                 pfVar12[0xd] * local_38 + pfVar12[0xc] * local_48 + local_28 * fVar15 +
                 local_cc * pfVar12[0xf]) * fVar14;
      param_1[1] = ((local_44 * fVar1 + local_34 * fVar2 + local_24 * fVar4 + local_d8 * fVar5) *
                    0.0 + (local_34 * fVar3 + fVar6 * local_44 + local_24 * fVar8 + local_d8 * fVar9
                          ) * 0.0 +
                   fVar13 * local_34 + fVar7 * local_44 + local_24 * fVar15 + local_d8 * fVar10) *
                   fVar14;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*(int *)(iVar11 + 0x40) != 0) {
      if (*(int *)(iVar11 + 0x40) != 0) {
        pfVar12 = (float *)FUN_0062c5b0(local_88);
        fVar13 = 1.0 / (pfVar12[7] * 0.0 + pfVar12[3] * 0.0 + pfVar12[0xf]);
        fVar15 = (pfVar12[4] * 0.0 + *pfVar12 * 0.0 + pfVar12[0xc]) * fVar13 * -1.0;
        fVar13 = (pfVar12[5] * 0.0 + pfVar12[1] * 0.0 + pfVar12[0xd]) * fVar13 * -1.0;
        local_cc = local_38 * fVar13 + local_48 * fVar15 + local_18;
        local_d8 = local_34 * fVar13 + local_44 * fVar15 + local_14;
        local_d0 = local_2c * fVar13 + local_3c * fVar15 + local_c;
        goto LAB_0062b578;
      }
      goto LAB_0062b551;
    }
    iVar11 = *(int *)(iVar11 + 0x28);
  } while( true );
}


/* FUN_0062ba50 @ 0062ba50  kind=gamemisc  attributed-by=none  size=150 */

void FUN_0062ba50(int param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  int *in_ECX;
  int *piVar1;
  
  if ((~(byte)(*(uint *)(param_1 + 200) >> 2) & 1) != 0) {
    piVar1 = *(int **)(param_1 + 0x40);
    if ((piVar1 == in_ECX) || (piVar1 == (int *)0x0)) {
      FUN_006371b0();
      if ((*param_3 != 0.0) || (param_3[1] != 0.0)) {
        *(undefined1 *)(in_ECX + 0x4d) = 1;
        piVar1 = (int *)**(int **)(param_1 + 0x2c);
        if (piVar1 != *(int **)(param_1 + 0x2c)) {
          do {
            FUN_0062ba50(piVar1[2],param_2,param_3,param_4);
            piVar1 = (int *)*piVar1;
          } while (piVar1 != (int *)*(int *)(param_1 + 0x2c));
        }
      }
    }
    else if ((char)param_4 != '\0') {
      (**(code **)(*piVar1 + 0x24))(param_2,param_3);
      return;
    }
  }
  return;
}


/* FUN_0062bb90 @ 0062bb90  kind=gamemisc  attributed-by=none  size=2518 */

void FUN_0062bb90(float *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int *in_ECX;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_10c;
  float local_104;
  float local_f0;
  float local_ec;
  float local_e0;
  float local_dc;
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  fVar18 = ((float)in_ECX[0x1e] + (float)in_ECX[0x14]) - (float)in_ECX[0x18];
  local_10c = ((float)in_ECX[0x1c] + (float)in_ECX[0x14]) - (float)in_ECX[0x18];
  local_4c = ((float)in_ECX[0x1d] + (float)in_ECX[0x15]) - (float)in_ECX[0x19];
  fVar16 = ((float)in_ECX[0x1f] + (float)in_ECX[0x15]) - (float)in_ECX[0x19];
  if (fVar18 < 0.0) {
    fVar18 = 0.0;
  }
  if (local_10c < fVar18) {
    local_10c = fVar18;
  }
  if (fVar16 < 0.0) {
    fVar16 = 0.0;
  }
  if (local_4c < fVar16) {
    local_4c = fVar16;
  }
  FUN_00423e70();
  for (iVar2 = *(int *)(in_ECX[0x52] + 0x28); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x28)) {
    if (*(int *)(iVar2 + 0x40) != 0) {
      if (*(int *)(iVar2 + 0x40) != 0) {
        pfVar3 = (float *)FUN_0062c5b0(local_98);
        fVar16 = 1.0 / (pfVar3[7] * 0.0 + pfVar3[3] * 0.0 + pfVar3[0xf]);
        fVar18 = (pfVar3[4] * 0.0 + *pfVar3 * 0.0 + pfVar3[0xc]) * fVar16 * -1.0;
        fVar16 = (pfVar3[5] * 0.0 + pfVar3[1] * 0.0 + pfVar3[0xd]) * fVar16 * -1.0;
        local_e0 = local_38 * fVar16 + local_48 * fVar18 + local_18;
        local_ec = local_34 * fVar16 + local_44 * fVar18 + local_14;
        local_f0 = local_40 * fVar18 + local_30 * fVar16 + local_10;
        local_104 = local_2c * fVar16 + local_3c * fVar18 + local_c;
        goto LAB_0062bcdb;
      }
      break;
    }
  }
  local_104 = local_c;
  local_f0 = local_10;
  local_ec = local_14;
  local_e0 = local_18;
LAB_0062bcdb:
  pfVar3 = (float *)FUN_0062c5b0(local_98);
  fVar16 = pfVar3[8];
  fVar18 = pfVar3[10];
  fVar9 = pfVar3[4] * local_48;
  fVar4 = fVar16 * local_48;
  fVar17 = pfVar3[0xf];
  fVar10 = pfVar3[9] * local_38;
  fVar19 = pfVar3[0xe];
  fVar1 = pfVar3[0xc];
  local_18 = pfVar3[0xd] * local_38 + fVar1 * local_48 + fVar19 * local_28 + local_e0 * fVar17;
  fVar11 = pfVar3[4] * local_44;
  fVar5 = fVar16 * local_44;
  fVar12 = pfVar3[9] * local_34;
  local_14 = pfVar3[0xd] * local_34 + fVar1 * local_44 + fVar19 * local_24 + local_ec * fVar17;
  fVar13 = pfVar3[4] * local_40;
  fVar6 = fVar16 * local_40;
  fVar14 = pfVar3[9] * local_30;
  local_10 = pfVar3[0xd] * local_30 + fVar1 * local_40 + fVar19 * local_20 + local_f0 * fVar17;
  fVar7 = local_1c * pfVar3[2];
  fVar19 = fVar19 * local_1c;
  fVar15 = pfVar3[4] * local_3c;
  fVar8 = local_1c * pfVar3[6];
  local_1c = pfVar3[9] * local_2c + fVar16 * local_3c + local_1c * fVar18 + local_104 * pfVar3[0xb];
  local_c = pfVar3[0xd] * local_2c + fVar1 * local_3c + fVar19 + local_104 * fVar17;
  local_48 = local_48 * *pfVar3 + local_38 * pfVar3[1] + local_28 * pfVar3[2] + local_e0 * pfVar3[3]
  ;
  local_44 = local_44 * *pfVar3 + local_34 * pfVar3[1] + local_24 * pfVar3[2] + local_ec * pfVar3[3]
  ;
  local_40 = local_40 * *pfVar3 + local_30 * pfVar3[1] + local_20 * pfVar3[2] + local_f0 * pfVar3[3]
  ;
  local_3c = local_3c * *pfVar3 + local_2c * pfVar3[1] + fVar7 + local_104 * pfVar3[3];
  local_38 = fVar9 + local_38 * pfVar3[5] + local_28 * pfVar3[6] + local_e0 * pfVar3[7];
  local_34 = fVar11 + local_34 * pfVar3[5] + local_24 * pfVar3[6] + local_ec * pfVar3[7];
  local_30 = fVar13 + local_30 * pfVar3[5] + local_20 * pfVar3[6] + local_f0 * pfVar3[7];
  local_2c = fVar15 + local_2c * pfVar3[5] + fVar8 + local_104 * pfVar3[7];
  local_28 = fVar10 + fVar4 + local_28 * fVar18 + local_e0 * pfVar3[0xb];
  local_24 = fVar12 + fVar5 + local_24 * fVar18 + local_ec * pfVar3[0xb];
  local_20 = fVar14 + fVar6 + local_20 * fVar18 + local_f0 * pfVar3[0xb];
  FUN_0058c440();
  fVar16 = *param_1;
  fVar17 = local_48 * *param_1 + local_38 * param_1[1];
  fVar18 = param_1[1];
  in_ECX[0x1c] = (int)fVar17;
  fVar18 = local_44 * fVar16 + local_34 * fVar18;
  in_ECX[0x1d] = (int)fVar18;
  fVar19 = ((float)in_ECX[0x1e] + (float)in_ECX[0x14]) - (float)in_ECX[0x18];
  fVar16 = (fVar17 + (float)in_ECX[0x14]) - (float)in_ECX[0x18];
  fVar17 = ((float)in_ECX[0x1f] + (float)in_ECX[0x15]) - (float)in_ECX[0x19];
  fVar18 = (fVar18 + (float)in_ECX[0x15]) - (float)in_ECX[0x19];
  if (fVar19 < 0.0) {
    fVar19 = 0.0;
  }
  if (fVar16 < fVar19) {
    fVar16 = fVar19;
  }
  if (fVar17 < 0.0) {
    fVar17 = 0.0;
  }
  if (fVar18 < fVar17) {
    fVar18 = fVar17;
  }
  fVar18 = fVar18 - local_4c;
  FUN_00423e70();
  iVar2 = *(int *)(in_ECX[0x52] + 0x28);
  do {
    if (iVar2 == 0) {
LAB_0062c1b5:
      local_dc = local_14;
      local_e0 = local_18;
LAB_0062c1cf:
      pfVar3 = (float *)FUN_0062c5b0(local_d8);
      local_58 = (fVar16 - local_10c) *
                 (*pfVar3 * local_48 + pfVar3[1] * local_38 + pfVar3[2] * local_28 +
                 pfVar3[3] * local_e0) +
                 fVar18 * (pfVar3[5] * local_38 + pfVar3[4] * local_48 + pfVar3[6] * local_28 +
                          pfVar3[7] * local_e0);
      local_54 = (fVar16 - local_10c) *
                 (*pfVar3 * local_44 + pfVar3[1] * local_34 + pfVar3[2] * local_24 +
                 pfVar3[3] * local_dc) +
                 fVar18 * (pfVar3[5] * local_34 + pfVar3[4] * local_44 + pfVar3[6] * local_24 +
                          pfVar3[7] * local_dc);
      local_50 = 0;
      local_4c = 0.0;
      FUN_0062ba50(in_ECX[0x52],&local_50,&local_58,param_2);
      (**(code **)(*in_ECX + 0x28))();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*(int *)(iVar2 + 0x40) != 0) {
      if (*(int *)(iVar2 + 0x40) != 0) {
        pfVar3 = (float *)FUN_0062c5b0(local_98);
        fVar19 = 1.0 / (pfVar3[7] * 0.0 + pfVar3[3] * 0.0 + pfVar3[0xf]);
        fVar17 = fVar19 * (pfVar3[4] * 0.0 + *pfVar3 * 0.0 + pfVar3[0xc]) * -1.0;
        fVar19 = fVar19 * (pfVar3[5] * 0.0 + pfVar3[1] * 0.0 + pfVar3[0xd]) * -1.0;
        local_e0 = local_38 * fVar19 + local_48 * fVar17 + local_18;
        local_dc = local_34 * fVar19 + local_44 * fVar17 + local_14;
        goto LAB_0062c1cf;
      }
      goto LAB_0062c1b5;
    }
    iVar2 = *(int *)(iVar2 + 0x28);
  } while( true );
}


/* FUN_0062ddc0 @ 0062ddc0  kind=gamemisc  attributed-by=none  size=47 */

void FUN_0062ddc0(int param_1,char param_2)

{
  int in_ECX;
  
  if (in_ECX + 0x80 != param_1) {
    FUN_0040f680(param_1,0,0xffffffff);
  }
  if (param_2 != '\0') {
    FUN_0062b920();
  }
  return;
}


/* FUN_0062de60 @ 0062de60  kind=gamemisc  attributed-by=none  size=783 */

void FUN_0062de60(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int in_ECX;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_d0;
  float local_cc;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  float local_48;
  float local_44;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  fVar7 = *(float *)(in_ECX + 0x50);
  fVar8 = *(float *)(in_ECX + 0x60);
  fVar10 = *(float *)(in_ECX + 0x54);
  fVar12 = (*(float *)(in_ECX + 0x78) + fVar7) - fVar8;
  fVar9 = (*(float *)(in_ECX + 0x74) + fVar10) - *(float *)(in_ECX + 100);
  fVar11 = (*(float *)(in_ECX + 0x7c) + fVar10) - *(float *)(in_ECX + 100);
  fVar6 = (*(float *)(in_ECX + 0x70) + fVar7) - fVar8;
  if (fVar12 < 0.0) {
    fVar12 = 0.0;
  }
  if (fVar6 < fVar12) {
    fVar6 = fVar12;
  }
  if (fVar11 < 0.0) {
    fVar11 = 0.0;
  }
  if (fVar9 < fVar11) {
    fVar9 = fVar11;
  }
  fVar10 = (fVar9 + *(float *)(in_ECX + 100)) - fVar10;
  fVar7 = (fVar6 + fVar8) - fVar7;
  FUN_00423e70();
  iVar4 = *(int *)(*(int *)(in_ECX + 0x148) + 0x28);
  do {
    if (iVar4 == 0) {
LAB_0062df31:
      local_d0 = local_14;
      local_cc = local_18;
LAB_0062df4b:
      pfVar5 = (float *)FUN_0062c5b0(local_88);
      fVar8 = pfVar5[4];
      fVar6 = pfVar5[1];
      fVar9 = *pfVar5;
      fVar11 = pfVar5[2];
      fVar12 = pfVar5[6];
      fVar1 = pfVar5[3];
      fVar2 = pfVar5[7];
      fVar3 = pfVar5[5];
      *param_1 = fVar7 * (local_48 * *pfVar5 + local_38 * pfVar5[1] + local_28 * pfVar5[2] +
                         local_cc * pfVar5[3]) +
                 fVar10 * (local_38 * pfVar5[5] + local_48 * pfVar5[4] + local_28 * pfVar5[6] +
                          local_cc * pfVar5[7]);
      param_1[1] = fVar7 * (local_44 * fVar9 + local_34 * fVar6 + local_24 * fVar11 +
                           local_d0 * fVar1) +
                   fVar10 * (local_34 * fVar3 + local_44 * fVar8 + local_24 * fVar12 +
                            local_d0 * fVar2);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*(int *)(iVar4 + 0x40) != 0) {
      if (*(int *)(iVar4 + 0x40) != 0) {
        pfVar5 = (float *)FUN_0062c5b0(local_c8);
        fVar8 = 1.0 / (pfVar5[7] * 0.0 + pfVar5[3] * 0.0 + pfVar5[0xf]);
        fVar6 = (pfVar5[4] * 0.0 + *pfVar5 * 0.0 + pfVar5[0xc]) * fVar8 * -1.0;
        fVar8 = (pfVar5[5] * 0.0 + pfVar5[1] * 0.0 + pfVar5[0xd]) * fVar8 * -1.0;
        local_cc = local_38 * fVar8 + local_48 * fVar6 + local_18;
        local_d0 = local_34 * fVar8 + local_44 * fVar6 + local_14;
        goto LAB_0062df4b;
      }
      goto LAB_0062df31;
    }
    iVar4 = *(int *)(iVar4 + 0x28);
  } while( true );
}


/* FUN_0062f600 @ 0062f600  kind=gamemisc  attributed-by=none  size=41 */

void FUN_0062f600(void)

{
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0062de60(local_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062f630 @ 0062f630  kind=gamemisc  attributed-by=none  size=41 */

void FUN_0062f630(void)

{
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0062b510(local_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062f660 @ 0062f660  kind=gamemisc  attributed-by=none  size=42 */

void FUN_0062f660(void)

{
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0062b510(local_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062f690 @ 0062f690  kind=gamemisc  attributed-by=none  size=134 */

void FUN_0062f690(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *_Dst;
  undefined1 *in_ECX;
  
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *in_ECX = 0;
  FUN_0040c0a0(param_1,0,0xffffffff);
  _Dst = (undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(in_ECX + 0x2c) = 0xf;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined1 *)_Dst = 0;
  if ((uint)param_2[5] < 0x10) {
    if (param_2[4] + 1 != 0) {
      memmove(_Dst,param_2,param_2[4] + 1);
    }
  }
  else {
    *_Dst = *param_2;
    *param_2 = 0;
  }
  *(undefined4 *)(in_ECX + 0x28) = param_2[4];
  *(undefined4 *)(in_ECX + 0x2c) = param_2[5];
  param_2[5] = 0xf;
  param_2[4] = 0;
  *(undefined1 *)param_2 = 0;
  return;
}


/* FUN_0062f8c0 @ 0062f8c0  kind=gamemisc  attributed-by=none  size=41 */

int FUN_0062f8c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00630a40();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if (iVar1 != -0x10) {
    FUN_0064af30(param_1,0);
  }
  return iVar1;
}


/* FUN_0062f9b0 @ 0062f9b0  kind=gamemisc  attributed-by=none  size=515 */

void FUN_0062f9b0(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x3fffffd < (uint)in_ECX[1]) {
    FUN_00630a80(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_0062fb8e;
      }
LAB_0062fae5:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_0062fae5;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_0062fb8e:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_0062fbc0 @ 0062fbc0  kind=gamemisc  attributed-by=none  size=511 */

void FUN_0062fbc0(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (0xcccccca < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_004c9580(param_4);
  in_ECX[1] = in_ECX[1] + 1;
  piVar3[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = piVar3;
    *(int **)*in_ECX = piVar3;
    iVar4 = *in_ECX;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar3;
      if (param_3 == *(undefined4 **)*in_ECX) {
        *(int **)*in_ECX = piVar3;
      }
      goto LAB_0062fc1e;
    }
    param_3[2] = piVar3;
    iVar4 = *in_ECX;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_0062fc1e;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_0062fc1e:
  cVar1 = *(char *)(piVar3[1] + 0xc);
  piVar5 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = piVar3;
      return;
    }
    piVar7 = (int *)piVar5[1];
    piVar6 = *(int **)piVar7[1];
    if (piVar7 == piVar6) {
      piVar6 = (int *)((undefined4 *)piVar7[1])[2];
      if ((char)piVar6[3] != '\0') {
        if (piVar5 == (int *)piVar7[2]) {
          piVar5 = (int *)piVar7[2];
          piVar7[2] = *piVar5;
          if (*(char *)(*piVar5 + 0xd) == '\0') {
            *(int **)(*piVar5 + 4) = piVar7;
          }
          piVar5[1] = piVar7[1];
          if (piVar7 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar5;
          }
          else {
            piVar6 = (int *)piVar7[1];
            if (piVar7 == (int *)*piVar6) {
              *piVar6 = (int)piVar5;
            }
            else {
              piVar6[2] = (int)piVar5;
            }
          }
          *piVar5 = (int)piVar7;
          piVar7[1] = (int)piVar5;
          piVar5 = piVar7;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar7 = *(int **)(piVar5[1] + 4);
        piVar6 = (int *)*piVar7;
        *piVar7 = piVar6[2];
        if (*(char *)(piVar6[2] + 0xd) == '\0') {
          *(int **)(piVar6[2] + 4) = piVar7;
        }
        piVar6[1] = piVar7[1];
        if (piVar7 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar6;
          piVar6[2] = (int)piVar7;
        }
        else {
          piVar2 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
        }
        goto LAB_0062fd9a;
      }
LAB_0062fcf1:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_0062fcf1;
      if (piVar5 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar4;
        }
        else {
          piVar5 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar5[2]) {
            piVar5[2] = iVar4;
          }
          else {
            *piVar5 = iVar4;
          }
        }
        *(int **)(iVar4 + 8) = piVar7;
        piVar7[1] = iVar4;
        piVar5 = piVar7;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar7 = *(int **)(piVar5[1] + 4);
      piVar6 = (int *)piVar7[2];
      piVar7[2] = *piVar6;
      if (*(char *)(*piVar6 + 0xd) == '\0') {
        *(int **)(*piVar6 + 4) = piVar7;
      }
      piVar6[1] = piVar7[1];
      if (piVar7 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar6;
      }
      else {
        piVar2 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar2) {
          *piVar2 = (int)piVar6;
        }
        else {
          piVar2[2] = (int)piVar6;
        }
      }
      *piVar6 = (int)piVar7;
LAB_0062fd9a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_0062fdc0 @ 0062fdc0  kind=gamemisc  attributed-by=none  size=468 */

undefined4 * FUN_0062fdc0(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 uVar5;
  uint uStack_2c;
  undefined1 local_1c [4];
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f57e0;
  local_10 = ExceptionList;
  uStack_2c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    param_2 = (int *)*in_ECX;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    piVar3 = (int *)*in_ECX;
    if (param_2 != (int *)*piVar3) {
      if (param_2 == piVar3) {
        puVar4 = param_3;
        if (0xf < (uint)param_3[5]) {
          puVar4 = (undefined4 *)*param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        iVar2 = FUN_0040c520(0,*(undefined4 *)(piVar3[2] + 0x20),puVar4,param_3[4]);
        if (-1 < iVar2) goto LAB_0062ff61;
        param_2 = *(int **)(*in_ECX + 8);
        uVar5 = 0;
        goto LAB_0062fe09;
      }
      piVar3 = param_2 + 4;
      if (0xf < (uint)param_2[9]) {
        piVar3 = (int *)*piVar3;
      }
      local_18 = in_ECX;
      iVar2 = FUN_0040c520(0,param_3[4],piVar3,param_2[8]);
      if (iVar2 < 0) {
        FUN_0042c740();
        cVar1 = FUN_004043c0(param_2 + 4,param_3);
        if (cVar1 == '\0') goto LAB_0062ff06;
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_0062fe09;
        }
      }
      else {
LAB_0062ff06:
        cVar1 = FUN_004043c0(param_2 + 4,param_3);
        if ((cVar1 == '\0') ||
           ((FUN_005c3ea0(), param_2 != (int *)*local_18 &&
            (cVar1 = FUN_004043c0(param_3,param_2 + 4), cVar1 == '\0')))) {
LAB_0062ff61:
          local_8 = 0xffffffff;
          puVar4 = (undefined4 *)FUN_0062ffb0(local_1c,0,param_3,param_4);
          *param_1 = *puVar4;
          ExceptionList = local_10;
          return param_1;
        }
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_0062fe09;
        }
      }
      uVar5 = 0;
      goto LAB_0062fe09;
    }
    piVar3 = param_2 + 4;
    if (0xf < (uint)param_2[9]) {
      piVar3 = (int *)*piVar3;
    }
    local_14 = (undefined1 *)&uStack_2c;
    iVar2 = FUN_0040c520(0,param_3[4],piVar3,param_2[8]);
    if (-1 < iVar2) goto LAB_0062ff61;
  }
  uVar5 = 1;
LAB_0062fe09:
  FUN_0062f9b0(param_1,uVar5,param_2,param_3,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0062ffb0 @ 0062ffb0  kind=gamemisc  attributed-by=none  size=599 */

void FUN_0062ffb0(undefined4 *param_1,char param_2,byte *param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *in_ECX;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  int *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f5800;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  bVar11 = true;
  local_8 = 0;
  piVar8 = (int *)piVar1[1];
  local_24 = piVar1;
  while (*(char *)((int)piVar8 + 0xd) == '\0') {
    pbVar9 = (byte *)(piVar8 + 4);
    if (param_2 == '\0') {
      uVar2 = piVar8[8];
      if (0xf < (uint)piVar8[9]) {
        pbVar9 = *(byte **)pbVar9;
      }
      uVar3 = *(uint *)(param_3 + 0x10);
      pbVar10 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar10 = *(byte **)param_3;
      }
      uVar5 = uVar2;
      if (uVar3 < uVar2) {
        uVar5 = uVar3;
      }
      if (uVar5 == 0) {
LAB_00630130:
        if (uVar3 < uVar2) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar3 != uVar2);
        }
      }
      else {
        while (uVar4 = uVar5 - 4, 3 < uVar5) {
          if (*(int *)pbVar10 != *(int *)pbVar9) goto LAB_006300f6;
          pbVar10 = pbVar10 + 4;
          pbVar9 = pbVar9 + 4;
          uVar5 = uVar4;
        }
        if (uVar4 == 0xfffffffc) {
LAB_0063012a:
          uVar5 = 0;
        }
        else {
LAB_006300f6:
          bVar11 = *pbVar10 < *pbVar9;
          if ((*pbVar10 == *pbVar9) &&
             ((uVar4 == 0xfffffffd ||
              ((bVar11 = pbVar10[1] < pbVar9[1], pbVar10[1] == pbVar9[1] &&
               ((uVar4 == 0xfffffffe ||
                ((bVar11 = pbVar10[2] < pbVar9[2], pbVar10[2] == pbVar9[2] &&
                 ((uVar4 == 0xffffffff || (bVar11 = pbVar10[3] < pbVar9[3], pbVar10[3] == pbVar9[3])
                  ))))))))))) goto LAB_0063012a;
          uVar5 = -(uint)bVar11 | 1;
        }
        if (uVar5 == 0) goto LAB_00630130;
      }
      bVar11 = (int)uVar5 < 0;
    }
    else {
      uVar2 = *(uint *)(param_3 + 0x10);
      pbVar10 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar10 = *(byte **)param_3;
      }
      uVar3 = piVar8[8];
      if (0xf < (uint)piVar8[9]) {
        pbVar9 = *(byte **)pbVar9;
      }
      uVar5 = uVar2;
      if (uVar3 < uVar2) {
        uVar5 = uVar3;
      }
      if (uVar5 == 0) {
LAB_00630091:
        if (uVar3 < uVar2) {
          bVar11 = false;
          goto LAB_00630145;
        }
        uVar5 = (uint)(uVar3 != uVar2);
      }
      else {
        while (uVar4 = uVar5 - 4, 3 < uVar5) {
          if (*(int *)pbVar9 != *(int *)pbVar10) goto LAB_00630057;
          pbVar9 = pbVar9 + 4;
          pbVar10 = pbVar10 + 4;
          uVar5 = uVar4;
        }
        if (uVar4 == 0xfffffffc) {
LAB_0063008b:
          uVar5 = 0;
        }
        else {
LAB_00630057:
          bVar11 = *pbVar9 < *pbVar10;
          if ((*pbVar9 == *pbVar10) &&
             ((uVar4 == 0xfffffffd ||
              ((bVar11 = pbVar9[1] < pbVar10[1], pbVar9[1] == pbVar10[1] &&
               ((uVar4 == 0xfffffffe ||
                ((bVar11 = pbVar9[2] < pbVar10[2], pbVar9[2] == pbVar10[2] &&
                 ((uVar4 == 0xffffffff || (bVar11 = pbVar9[3] < pbVar10[3], pbVar9[3] == pbVar10[3])
                  ))))))))))) goto LAB_0063008b;
          uVar5 = -(uint)bVar11 | 1;
        }
        if (uVar5 == 0) goto LAB_00630091;
      }
      bVar11 = -1 < (int)uVar5;
    }
LAB_00630145:
    local_24 = piVar8;
    if (bVar11 == false) {
      piVar8 = (int *)piVar8[2];
    }
    else {
      piVar8 = (int *)*piVar8;
    }
  }
  _param_2 = local_24;
  if (bVar11 != false) {
    if (local_24 == (int *)*piVar1) {
      bVar11 = true;
      puVar6 = (undefined4 *)&param_2;
      pbVar9 = param_3;
      goto LAB_00630181;
    }
    FUN_0042c740();
  }
  pbVar9 = param_3;
  piVar1 = _param_2;
  pbVar10 = param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    pbVar10 = *(byte **)param_3;
  }
  iVar7 = FUN_0040c520(0,_param_2[8],pbVar10,*(int *)(param_3 + 0x10));
  if (-1 < iVar7) {
    FUN_00630a80(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar6 = &param_3;
LAB_00630181:
  puVar6 = (undefined4 *)FUN_0062f9b0(puVar6,bVar11,local_24,pbVar9,param_4);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_00630690 @ 00630690  kind=gamemisc  attributed-by=none  size=15 */

void FUN_00630690(void)

{
  undefined4 *in_ECX;
  
  FUN_00632640();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_006306b0 @ 006306b0  kind=gamemisc  attributed-by=none  size=28 */

void FUN_006306b0(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_00633900(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_00630a10 @ 00630a10  kind=gamemisc  attributed-by=none  size=47 */

void FUN_00630a10(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x40);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00630a1e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_00630a80 @ 00630a80  kind=gamemisc  attributed-by=none  size=77 */

void FUN_00630a80(void *param_1)

{
  if (0xf < *(uint *)((int)param_1 + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x28));
  }
  *(undefined4 *)((int)param_1 + 0x3c) = 0xf;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined1 *)((int)param_1 + 0x28) = 0;
  if (0xf < *(uint *)((int)param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 0xf;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined1 *)((int)param_1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_00630b60 @ 00630b60  kind=gamemisc  attributed-by=none  size=108 */

void FUN_00630b60(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_00630b60(*(undefined4 *)((int)param_1 + 8));
  if (0xf < *(uint *)((int)param_1 + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x28));
  }
  *(undefined4 *)((int)param_1 + 0x3c) = 0xf;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined1 *)((int)param_1 + 0x28) = 0;
  if (0xf < *(uint *)((int)param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 0xf;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined1 *)((int)param_1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_00633d70 @ 00633d70  kind=gamemisc  attributed-by=none  size=93 */

int FUN_00633d70(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  puVar1 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  iVar2 = FUN_00428db0(0,*(undefined4 *)(in_ECX + 0x1c),puVar1,param_1[4]);
  if (iVar2 != 0) {
    piVar3 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar3 != *(int **)(in_ECX + 0x2c)) {
      do {
        iVar2 = FUN_00633d70(param_1);
        if (iVar2 != 0) {
          return iVar2;
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
    }
    return 0;
  }
  return in_ECX;
}


/* FUN_00633e70 @ 00633e70  kind=gamemisc  attributed-by=none  size=2766 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00633e70(float *param_1,float *param_2,float *param_3,char *param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float in_ECX;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_ac [3];
  char local_a9;
  float local_a8;
  float local_a4;
  int *local_a0;
  float local_9c;
  float local_98;
  float *local_94;
  float local_90;
  float *local_8c;
  float *local_88;
  float fStack_84;
  char *local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float afStack_60 [4];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [4];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_ac;
  local_88 = param_2;
  local_94 = param_1;
  local_8c = param_3;
  local_80 = param_4;
  local_a9 = '\x01';
  local_90 = in_ECX;
  if (*(int **)((int)in_ECX + 0x34) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)((int)in_ECX + 0x34) + 0x20))
                      (&local_70,&local_68,param_3,&local_a9);
    if (cVar2 == '\0') {
      (**(code **)(**(int **)((int)in_ECX + 0x34) + 0x38))(param_3);
      (**(code **)(**(int **)((int)in_ECX + 0x34) + 0x18))(auStack_20);
      (**(code **)(**(int **)((int)in_ECX + 0x34) + 0x1c))(&fStack_1c);
      fStack_74 = fStack_1c * param_3[3];
      fStack_78 = fStack_1c * *param_3;
      fStack_84 = fStack_1c * param_3[1];
      fVar10 = param_3[0xd];
      fStack_7c = 1.0 / (fStack_74 + fStack_18 * param_3[7] + param_3[0xf]);
      afStack_60[0] = (fStack_78 + fStack_18 * param_3[4] + param_3[0xc]) * fStack_7c;
      fStack_7c = (fStack_84 + fStack_18 * param_3[5] + param_3[0xd]) * fStack_7c;
      afStack_60[1] = fStack_7c;
      fVar9 = 1.0 / (fStack_14 * param_3[3] + fStack_18 * param_3[7] + param_3[0xf]);
      fStack_1c = (fStack_14 * param_3[1] + fStack_18 * param_3[5] + fVar10) * fVar9;
      afStack_60[2] = (fStack_14 * *param_3 + fStack_18 * param_3[4] + param_3[0xc]) * fVar9;
      afStack_60[3] = fStack_1c;
      fVar9 = 1.0 / (fStack_10 * param_3[7] + fStack_14 * param_3[3] + param_3[0xf]);
      fVar33 = 1.0 / (fStack_10 * param_3[7] + fStack_74 + param_3[0xf]);
      fStack_50 = (fStack_10 * param_3[4] + fStack_14 * *param_3 + param_3[0xc]) * fVar9;
      local_a0 = (int *)((fStack_10 * param_3[5] + fStack_84 + fVar10) * fVar33);
      fStack_4c = (fStack_10 * param_3[5] + fStack_14 * param_3[1] + fVar10) * fVar9;
      fStack_44 = (float)local_a0;
      local_64 = fStack_7c;
      fStack_48 = (fStack_10 * param_3[4] + fStack_78 + param_3[0xc]) * fVar33;
      local_70 = afStack_60[0];
      local_68 = afStack_60[0];
      pfVar6 = afStack_60 + 2;
      if (afStack_60[0] <= afStack_60[2]) {
        pfVar6 = &local_70;
      }
      local_6c = fStack_7c;
      pfVar7 = afStack_60 + 3;
      if (fStack_7c <= fStack_1c) {
        pfVar7 = &local_6c;
      }
      local_70 = *pfVar6;
      local_6c = *pfVar7;
      pfVar3 = afStack_60 + 2;
      if (afStack_60[2] <= afStack_60[0]) {
        pfVar3 = &local_68;
      }
      pfVar4 = afStack_60 + 3;
      if (fStack_1c <= fStack_7c) {
        pfVar4 = &local_64;
      }
      local_68 = *pfVar3;
      pfVar5 = &fStack_50;
      if (*pfVar6 <= fStack_50) {
        pfVar5 = &local_70;
      }
      pfVar6 = &fStack_4c;
      if (*pfVar7 <= fStack_4c) {
        pfVar6 = &local_6c;
      }
      local_70 = *pfVar5;
      pfVar7 = &fStack_50;
      if (fStack_50 <= *pfVar3) {
        pfVar7 = &local_68;
      }
      local_64 = *pfVar4;
      pfVar3 = &fStack_4c;
      if (fStack_4c <= *pfVar4) {
        pfVar3 = &local_64;
      }
      local_68 = *pfVar7;
      pfVar4 = &fStack_48;
      if (*pfVar5 <= fStack_48) {
        pfVar4 = &local_70;
      }
      local_6c = *pfVar6;
      pfVar5 = &fStack_44;
      if (*pfVar6 <= (float)local_a0) {
        pfVar5 = &local_6c;
      }
      local_70 = *pfVar4;
      pfVar6 = &fStack_48;
      if (fStack_48 <= *pfVar7) {
        pfVar6 = &local_68;
      }
      local_64 = *pfVar3;
      pfVar7 = &fStack_44;
      if ((float)local_a0 <= *pfVar3) {
        pfVar7 = &local_64;
      }
      local_68 = *pfVar6;
      local_6c = *pfVar5;
      local_64 = *pfVar7;
      local_a9 = '\0';
    }
    else {
      local_a9 = '\0';
    }
  }
  if ((*(int *)(*(int *)(*(int *)((int)in_ECX + 0x3c) + 0xec) +
               *(int *)(*(int *)((int)in_ECX + 0x3c) + 0xc0) * 4) == 0) &&
     (local_a0 = (int *)**(int **)((int)in_ECX + 0x2c), local_a8 = local_6c, local_a4 = local_64,
     local_9c = local_68, local_98 = local_70, local_a0 != *(int **)((int)in_ECX + 0x2c))) {
    do {
      iVar1 = local_a0[2];
      if (((~(byte)(*(uint *)(iVar1 + 200) >> 2) & 1) != 0) &&
         (*(int *)(*(int *)(*(int *)(iVar1 + 0x3c) + 0x94) +
                  *(int *)(*(int *)(iVar1 + 0x3c) + 0x68) * 4) != 0)) {
        iVar1 = *(int *)(iVar1 + 0x38);
        pfVar7 = (float *)(iVar1 + 0x1b0);
        pfVar6 = afStack_60;
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          *pfVar6 = *param_3;
          param_3 = param_3 + 1;
          pfVar6 = pfVar6 + 1;
        }
        fVar10 = fStack_30 * *(float *)(iVar1 + 0x1bc);
        fVar9 = afStack_60[0] * *(float *)(iVar1 + 0x1c0);
        fVar33 = fStack_30 * *(float *)(iVar1 + 0x1cc);
        fVar11 = *(float *)(iVar1 + 0x1d0) * afStack_60[0];
        fVar29 = *(float *)(iVar1 + 0x1d4) * fStack_50;
        fVar12 = fStack_30 * *(float *)(iVar1 + 0x1dc);
        fStack_30 = fStack_50 * *(float *)(iVar1 + 0x1e4) +
                    afStack_60[0] * *(float *)(iVar1 + 0x1e0) +
                    *(float *)(iVar1 + 0x1e8) * fStack_40 + fStack_30 * *(float *)(iVar1 + 0x1ec);
        fVar13 = *(float *)(iVar1 + 0x1bc) * fStack_2c;
        fVar14 = afStack_60[1] * *(float *)(iVar1 + 0x1c0);
        fVar15 = fStack_2c * *(float *)(iVar1 + 0x1cc);
        fVar16 = *(float *)(iVar1 + 0x1d0) * afStack_60[1];
        fVar30 = *(float *)(iVar1 + 0x1d4) * fStack_4c;
        fVar17 = fStack_2c * *(float *)(iVar1 + 0x1dc);
        fStack_2c = fStack_4c * *(float *)(iVar1 + 0x1e4) +
                    afStack_60[1] * *(float *)(iVar1 + 0x1e0) +
                    *(float *)(iVar1 + 0x1e8) * fStack_3c + fStack_2c * *(float *)(iVar1 + 0x1ec);
        fVar18 = *(float *)(iVar1 + 0x1bc) * fStack_28;
        fVar19 = afStack_60[2] * *(float *)(iVar1 + 0x1c0);
        fVar20 = fStack_28 * *(float *)(iVar1 + 0x1cc);
        fVar21 = *(float *)(iVar1 + 0x1d0) * afStack_60[2];
        fVar31 = *(float *)(iVar1 + 0x1d4) * fStack_48;
        fVar22 = fStack_28 * *(float *)(iVar1 + 0x1dc);
        fStack_28 = fStack_48 * *(float *)(iVar1 + 0x1e4) +
                    afStack_60[2] * *(float *)(iVar1 + 0x1e0) +
                    *(float *)(iVar1 + 0x1e8) * fStack_38 + fStack_28 * *(float *)(iVar1 + 0x1ec);
        fVar23 = *(float *)(iVar1 + 0x1bc) * fStack_24;
        fVar24 = afStack_60[3] * *(float *)(iVar1 + 0x1c0);
        fVar25 = fStack_24 * *(float *)(iVar1 + 0x1cc);
        fVar26 = *(float *)(iVar1 + 0x1d0) * afStack_60[3];
        fVar32 = *(float *)(iVar1 + 0x1d4) * fStack_44;
        fVar27 = fStack_24 * *(float *)(iVar1 + 0x1dc);
        fStack_24 = fStack_44 * *(float *)(iVar1 + 0x1e4) +
                    afStack_60[3] * *(float *)(iVar1 + 0x1e0) +
                    *(float *)(iVar1 + 0x1e8) * fStack_34 + fStack_24 * *(float *)(iVar1 + 0x1ec);
        afStack_60[0] =
             fStack_50 * *(float *)(iVar1 + 0x1b4) + afStack_60[0] * *pfVar7 +
             fStack_40 * *(float *)(iVar1 + 0x1b8) + fVar10;
        afStack_60[1] =
             fStack_4c * *(float *)(iVar1 + 0x1b4) + afStack_60[1] * *pfVar7 +
             fStack_3c * *(float *)(iVar1 + 0x1b8) + fVar13;
        afStack_60[2] =
             fStack_48 * *(float *)(iVar1 + 0x1b4) + afStack_60[2] * *pfVar7 +
             fStack_38 * *(float *)(iVar1 + 0x1b8) + fVar18;
        afStack_60[3] =
             fStack_44 * *(float *)(iVar1 + 0x1b4) + afStack_60[3] * *pfVar7 +
             fStack_34 * *(float *)(iVar1 + 0x1b8) + fVar23;
        fStack_50 = fStack_50 * *(float *)(iVar1 + 0x1c4) + fVar9 +
                    fStack_40 * *(float *)(iVar1 + 0x1c8) + fVar33;
        fStack_4c = fStack_4c * *(float *)(iVar1 + 0x1c4) + fVar14 +
                    fStack_3c * *(float *)(iVar1 + 0x1c8) + fVar15;
        fStack_48 = fStack_48 * *(float *)(iVar1 + 0x1c4) + fVar19 +
                    fStack_38 * *(float *)(iVar1 + 0x1c8) + fVar20;
        fStack_44 = fStack_44 * *(float *)(iVar1 + 0x1c4) + fVar24 +
                    fStack_34 * *(float *)(iVar1 + 0x1c8) + fVar25;
        fStack_40 = fVar29 + fVar11 + fStack_40 * *(float *)(iVar1 + 0x1d8) + fVar12;
        fStack_3c = fVar30 + fVar16 + fStack_3c * *(float *)(iVar1 + 0x1d8) + fVar17;
        fStack_38 = fVar31 + fVar21 + fStack_38 * *(float *)(iVar1 + 0x1d8) + fVar22;
        fStack_34 = fVar32 + fVar26 + fStack_34 * *(float *)(iVar1 + 0x1d8) + fVar27;
        FUN_00633e70(&local_70,&local_68,afStack_60,&local_a9,param_5);
        param_3 = local_8c;
      }
      local_a0 = (int *)*local_a0;
      in_ECX = local_90;
      param_1 = local_94;
    } while (local_a0 != (int *)*(int *)((int)local_90 + 0x2c));
  }
  local_a8 = local_6c;
  local_a4 = local_64;
  local_9c = local_68;
  local_98 = local_70;
  if ((((char)param_5 != '\0') &&
      (iVar1 = *(int *)((int)in_ECX + 0x3c), (*(byte *)(iVar1 + 0x200) & 1) != 0)) &&
     (0.0 < *(float *)(*(int *)(iVar1 + 500) + *(int *)(iVar1 + 0x1c8) * 4))) {
    local_90 = param_3[4] * 0.0 + *param_3;
    local_94 = (float *)(param_3[5] * 0.0 + param_3[1]);
    fVar9 = *param_3 * 0.0 + param_3[4];
    fVar10 = param_3[1] * 0.0 + param_3[5];
    dVar28 = (double)(fVar10 * fVar10 + fVar9 * fVar9);
    libm_sse2_sqrt_precise();
    local_8c = (float *)(float)dVar28;
    dVar28 = (double)((float)local_94 * (float)local_94 + local_90 * local_90);
    libm_sse2_sqrt_precise();
    fVar10 = ((float)local_8c + (float)dVar28) *
             *(float *)(*(int *)(iVar1 + 500) + *(int *)(iVar1 + 0x1c8) * 4) * 0.5;
    local_70 = local_98 - fVar10;
    local_6c = local_a8 - fVar10;
    local_68 = local_9c + fVar10;
    local_64 = local_a4 + fVar10;
  }
  if (local_a9 == '\0') {
    if (*local_80 == '\0') {
      pfVar6 = &local_70;
      if (*param_1 <= local_70 && local_70 != *param_1) {
        pfVar6 = param_1;
      }
      pfVar7 = param_1 + 1;
      *param_1 = *pfVar6;
      pfVar6 = &local_6c;
      if (*pfVar7 <= local_6c && local_6c != *pfVar7) {
        pfVar6 = pfVar7;
      }
      *pfVar7 = *pfVar6;
      pfVar6 = &local_68;
      if (local_68 < *local_88) {
        pfVar6 = local_88;
      }
      pfVar7 = local_88 + 1;
      *local_88 = *pfVar6;
      pfVar6 = &local_64;
      if (local_64 < *pfVar7) {
        pfVar6 = pfVar7;
      }
      *pfVar7 = *pfVar6;
    }
    else {
      *param_1 = local_70;
      param_1[1] = local_6c;
      *local_88 = local_68;
      local_88[1] = local_64;
      *local_80 = '\0';
    }
  }
  __security_check_cookie(local_c ^ (uint)auStack_ac);
  return;
}


/* FUN_00636040 @ 00636040  kind=gamemisc  attributed-by=none  size=321 */

int FUN_00636040(uint param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  int *piVar9;
  
  iVar7 = FUN_0064f4e0(*(undefined4 *)(in_ECX + 0x38),*(undefined4 *)(in_ECX + 0x34),
                       *(undefined4 *)(in_ECX + 0x3c),param_1,in_ECX + 0xc);
  piVar9 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar9 != *(int **)(in_ECX + 0x2c)) {
    do {
      if ((~(byte)(*(uint *)(piVar9[2] + 200) >> 2) & 1) != 0) {
        FUN_00636040(iVar7);
      }
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)*(int *)(in_ECX + 0x2c));
  }
  *(undefined4 *)(iVar7 + 200) = *(undefined4 *)(in_ECX + 200);
  if ((undefined4 *)(iVar7 + 0xe0) != (undefined4 *)(in_ECX + 0xe0)) {
    puVar2 = *(undefined4 **)(in_ECX + 0xe0);
    FUN_006302f0(*puVar2,puVar2);
  }
  piVar9 = (int *)(iVar7 + 0xe8);
  if (piVar9 != (int *)(in_ECX + 0xe8)) {
    FUN_00630b60(*(undefined4 *)(*piVar9 + 4));
    param_1 = param_1 & 0xffffff00;
    *(int *)(*piVar9 + 4) = *piVar9;
    *(int *)*piVar9 = *piVar9;
    *(int *)(*piVar9 + 8) = *piVar9;
    *(undefined4 *)(iVar7 + 0xec) = 0;
    iVar3 = *piVar9;
    uVar8 = FUN_0062f8f0(*(undefined4 *)(*(int *)(in_ECX + 0xe8) + 4),iVar3,param_1);
    *(undefined4 *)(iVar3 + 4) = uVar8;
    piVar9 = *(int **)(iVar7 + 0xe8);
    *(undefined4 *)(iVar7 + 0xec) = *(undefined4 *)(in_ECX + 0xec);
    piVar4 = (int *)piVar9[1];
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar4 + 0xd);
      piVar6 = (int *)*piVar4;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar6 + 0xd);
        piVar4 = piVar6;
        piVar6 = (int *)*piVar6;
      }
      *piVar9 = (int)piVar4;
      iVar3 = *(int *)(*(int *)(iVar7 + 0xe8) + 4);
      iVar5 = *(int *)(iVar3 + 8);
      cVar1 = *(char *)(iVar5 + 0xd);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
        iVar3 = iVar5;
        iVar5 = *(int *)(iVar5 + 8);
      }
      *(int *)(*(int *)(iVar7 + 0xe8) + 8) = iVar3;
    }
    else {
      *piVar9 = (int)piVar9;
      *(int *)(*(int *)(iVar7 + 0xe8) + 8) = *(int *)(iVar7 + 0xe8);
    }
  }
  if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x40) + 0xa0))(iVar7);
  }
  return iVar7;
}


/* FUN_00636810 @ 00636810  kind=gamemisc  attributed-by=none  size=91 */

void FUN_00636810(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  int *piVar1;
  
  if (*(int *)(in_ECX + 0x34) != 0) {
    FUN_00664c10(param_1,param_2);
  }
  if (*(int *)(in_ECX + 0x38) != 0) {
    FUN_00664c10(param_1,param_2);
  }
  if (*(int *)(in_ECX + 0x3c) != 0) {
    FUN_00664c10(param_1,param_2);
  }
  piVar1 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar1 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_00636810(param_1,param_2);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(in_ECX + 0x2c));
  }
  return;
}


/* FUN_00636870 @ 00636870  kind=gamemisc  attributed-by=none  size=91 */

void FUN_00636870(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x2c);
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    while (piVar3[2] != param_1) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar1) {
        return;
      }
    }
    for (piVar3 = (int *)*piVar1; piVar3 != piVar1; piVar3 = (int *)*piVar3) {
      if (piVar3[2] == param_1) {
        piVar1 = (int *)piVar3[1];
        iVar2 = *piVar3;
        *piVar1 = iVar2;
        *(int **)(iVar2 + 4) = piVar1;
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar3);
      }
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


/* FUN_00636ad0 @ 00636ad0  kind=gamemisc  attributed-by=none  size=158 */

void FUN_00636ad0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  if ((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) != 0) {
    piVar3 = *(int **)(in_ECX + 0x34);
    if ((piVar3 != (int *)0x0) && (piVar3[0x12] == 3)) {
      puVar1 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar1 = (undefined4 *)*param_1;
      }
      iVar2 = FUN_00428db0(0,*(undefined4 *)(piVar3[0x2a] + piVar3[0x1f] * 0x18 + 0x10),puVar1,
                           param_1[4]);
      if (iVar2 != 0) {
        if ((undefined4 *)(piVar3[0x2a] + piVar3[0x1f] * 0x18) != param_1) {
          FUN_0040f680(param_1,0,0xffffffff);
        }
        (**(code **)(*piVar3 + 4))(1);
      }
    }
    piVar3 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar3 != *(int **)(in_ECX + 0x2c)) {
      do {
        FUN_00636ad0(param_1);
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
    }
  }
  return;
}


/* FUN_00636b70 @ 00636b70  kind=gamemisc  attributed-by=none  size=109 */

void FUN_00636b70(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  iVar2 = param_1;
  iVar1 = *(int *)(in_ECX + 0x38);
  if (iVar1 != param_1) {
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x1ac) == 1) {
        FUN_00650890(iVar1);
      }
      else {
        FUN_00633c90(&param_1);
      }
    }
    if (iVar2 != 0) {
      FUN_0058e7d0(local_c,0,&param_1,DAT_0076de66);
    }
    *(int *)(in_ECX + 0x38) = iVar2;
  }
  return;
}


/* FUN_00636c40 @ 00636c40  kind=gamemisc  attributed-by=none  size=102 */

void FUN_00636c40(void)

{
  int in_ECX;
  int *piVar1;
  
  if (((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) != 0) && (*(char *)(in_ECX + 0xcc) != '\0')) {
    if (*(int *)(in_ECX + 0x34) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0x34) + 0x2d) = 0;
    }
    if (*(int *)(in_ECX + 0x38) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0x38) + 0x2d) = 0;
    }
    if (*(int *)(in_ECX + 0x3c) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0x3c) + 0x2d) = 0;
    }
    if (*(int *)(in_ECX + 0x40) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0x40) + 0x134) = 0;
    }
    piVar1 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar1 != *(int **)(in_ECX + 0x2c)) {
      do {
        FUN_00636c40();
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)*(int *)(in_ECX + 0x2c));
    }
  }
  return;
}


/* FUN_00637260 @ 00637260  kind=gamemisc  attributed-by=none  size=51 */

void FUN_00637260(void)

{
  int in_ECX;
  int *piVar1;
  
  if ((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) != 0) {
    FUN_006371b0();
    piVar1 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar1 != *(int **)(in_ECX + 0x2c)) {
      do {
        FUN_00637260();
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)*(int *)(in_ECX + 0x2c));
    }
  }
  return;
}


/* FUN_006372a0 @ 006372a0  kind=gamemisc  attributed-by=none  size=551 */

void FUN_006372a0(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  char local_19;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined1 local_10 [4];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_00636be0();
  local_c = local_c & 0xffffff00;
  if (((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) != 0) &&
     (*(undefined1 *)(in_ECX + 0xcc) = 0,
     *(int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x94) +
             *(int *)(*(int *)(in_ECX + 0x3c) + 0x68) * 4) != 0)) {
    local_14 = CONCAT31(local_14._1_3_,(*(uint *)(in_ECX + 200) & 0x2000) != 0);
    if (*(int *)(in_ECX + 0x40) == 0) {
      if (*(int *)(in_ECX + 0x28) == 0) {
        *(undefined4 *)(in_ECX + 0x44) = 0;
      }
      else {
        *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x44);
      }
    }
    else {
      *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x40);
    }
    if ((*(int *)(in_ECX + 0x34) != 0) && (*(char *)(*(int *)(in_ECX + 0x34) + 0x2e) == '\0')) {
      FUN_00664cf0(param_1);
    }
    if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2e) == '\0')) {
      FUN_00664cf0(param_1);
    }
    if ((*(int *)(in_ECX + 0x3c) != 0) && (*(char *)(*(int *)(in_ECX + 0x3c) + 0x2e) == '\0')) {
      FUN_00664cf0(param_1);
    }
    if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2d) != '\0')) {
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_006371b0();
    }
    if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x40) + 0x6c))();
    }
    if ((*(int *)(in_ECX + 0x34) != 0) && (*(char *)(*(int *)(in_ECX + 0x34) + 0x2d) != '\0')) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2d) != '\0')) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    if ((*(int *)(in_ECX + 0x3c) != 0) && (*(char *)(*(int *)(in_ECX + 0x3c) + 0x2d) != '\0')) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    if ((*(int *)(in_ECX + 0x40) != 0) && (*(char *)(*(int *)(in_ECX + 0x40) + 0x134) != '\0')) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    iVar3 = FUN_006531e0();
    if ((iVar3 != 0) && (iVar3 = FUN_006531e0(), iVar3 == *(int *)(in_ECX + 0x40))) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    uVar1 = local_c;
    piVar4 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar4 != *(int **)(in_ECX + 0x2c)) {
      do {
        cVar2 = FUN_006374d0(param_1,uVar1,local_14);
        if (cVar2 != '\0') {
          *(undefined1 *)(in_ECX + 0xcc) = 1;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)*(int *)(in_ECX + 0x2c));
    }
    if ((((*(uint *)(in_ECX + 200) >> 7 & 1) != 0) && (*(char *)(in_ECX + 0xcc) != '\0')) &&
       (*(int *)(in_ECX + 0x34) != 0)) {
      local_19 = '\x01';
      piVar4 = (int *)**(int **)(in_ECX + 0x2c);
      if (piVar4 != *(int **)(in_ECX + 0x2c)) {
        do {
          if ((~(byte)(*(uint *)(piVar4[2] + 200) >> 2) & 1) != 0) {
            FUN_00633e70(local_10,local_18,*(int *)(piVar4[2] + 0x38) + 0x1b0,&local_19,0);
          }
          piVar4 = (int *)*piVar4;
        } while (piVar4 != (int *)*(int *)(in_ECX + 0x2c));
        if (local_19 == '\0') {
          (**(code **)(**(int **)(in_ECX + 0x34) + 0x48))(local_10,local_18);
          (**(code **)(**(int **)(in_ECX + 0x34) + 4))(1);
        }
      }
    }
  }
  FUN_00636c40();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006374d0 @ 006374d0  kind=gamemisc  attributed-by=none  size=558 */

void FUN_006374d0(undefined4 param_1,char param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  char local_19;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) == 0) ||
     ((*(undefined1 *)(in_ECX + 0xcc) = 0,
      *(int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x94) +
              *(int *)(*(int *)(in_ECX + 0x3c) + 0x68) * 4) == 0 && (param_3 == '\0')))) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((*(uint *)(in_ECX + 200) & 0x2000) != 0) {
    param_3 = '\x01';
  }
  if (*(int *)(in_ECX + 0x40) == 0) {
    if (*(int *)(in_ECX + 0x28) == 0) {
      *(undefined4 *)(in_ECX + 0x44) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x44);
    }
  }
  else {
    *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x40);
  }
  if ((*(int *)(in_ECX + 0x34) != 0) && (*(char *)(*(int *)(in_ECX + 0x34) + 0x2e) == '\0')) {
    FUN_00664cf0(param_1);
  }
  if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2e) == '\0')) {
    FUN_00664cf0(param_1);
  }
  if ((*(int *)(in_ECX + 0x3c) != 0) && (*(char *)(*(int *)(in_ECX + 0x3c) + 0x2e) == '\0')) {
    FUN_00664cf0(param_1);
  }
  if ((*(int *)(in_ECX + 0x38) == 0) || (*(char *)(*(int *)(in_ECX + 0x38) + 0x2d) == '\0')) {
    if (param_2 == '\0') goto LAB_006375bb;
  }
  else {
    param_2 = '\x01';
  }
  FUN_006371b0();
LAB_006375bb:
  if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x40) + 0x6c))();
  }
  if ((*(int *)(in_ECX + 0x34) != 0) && (*(char *)(*(int *)(in_ECX + 0x34) + 0x2d) != '\0')) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2d) != '\0')) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  if ((*(int *)(in_ECX + 0x3c) != 0) && (*(char *)(*(int *)(in_ECX + 0x3c) + 0x2d) != '\0')) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  if ((*(int *)(in_ECX + 0x40) != 0) && (*(char *)(*(int *)(in_ECX + 0x40) + 0x134) != '\0')) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  iVar2 = FUN_006531e0();
  if ((iVar2 != 0) && (iVar2 = FUN_006531e0(), iVar2 == *(int *)(in_ECX + 0x40))) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  piVar3 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar3 != *(int **)(in_ECX + 0x2c)) {
    do {
      cVar1 = FUN_006374d0(param_1,param_2,param_3);
      if (cVar1 != '\0') {
        *(undefined1 *)(in_ECX + 0xcc) = 1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
  }
  if ((((*(uint *)(in_ECX + 200) >> 7 & 1) != 0) && (*(char *)(in_ECX + 0xcc) != '\0')) &&
     (*(int *)(in_ECX + 0x34) != 0)) {
    local_19 = '\x01';
    piVar3 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar3 != *(int **)(in_ECX + 0x2c)) {
      do {
        if ((~(byte)(*(uint *)(piVar3[2] + 200) >> 2) & 1) != 0) {
          FUN_00633e70(local_18,local_10,*(int *)(piVar3[2] + 0x38) + 0x1b0,&local_19,0);
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
      if (local_19 == '\0') {
        (**(code **)(**(int **)(in_ECX + 0x34) + 0x48))(local_18,local_10);
        (**(code **)(**(int **)(in_ECX + 0x34) + 4))(1);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00638db0 @ 00638db0  kind=gamemisc  attributed-by=none  size=468 */

undefined4 * FUN_00638db0(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 uVar5;
  uint uStack_2c;
  undefined1 local_1c [4];
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f5a70;
  local_10 = ExceptionList;
  uStack_2c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    param_2 = (int *)*in_ECX;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    piVar3 = (int *)*in_ECX;
    if (param_2 != (int *)*piVar3) {
      if (param_2 == piVar3) {
        puVar4 = param_3;
        if (7 < (uint)param_3[5]) {
          puVar4 = (undefined4 *)*param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        iVar2 = FUN_00428db0(0,*(undefined4 *)(piVar3[2] + 0x20),puVar4,param_3[4]);
        if (-1 < iVar2) goto LAB_00638f51;
        param_2 = *(int **)(*in_ECX + 8);
        uVar5 = 0;
        goto LAB_00638df9;
      }
      piVar3 = param_2 + 4;
      if (7 < (uint)param_2[9]) {
        piVar3 = (int *)*piVar3;
      }
      local_18 = in_ECX;
      iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
      if (iVar2 < 0) {
        FUN_0042c740();
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if (cVar1 == '\0') goto LAB_00638ef6;
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_00638df9;
        }
      }
      else {
LAB_00638ef6:
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if ((cVar1 == '\0') ||
           ((FUN_005c3ea0(), param_2 != (int *)*local_18 &&
            (cVar1 = FUN_0046d1f0(param_3,param_2 + 4), cVar1 == '\0')))) {
LAB_00638f51:
          local_8 = 0xffffffff;
          puVar4 = (undefined4 *)FUN_006612f0(local_1c,0,param_3,param_4);
          *param_1 = *puVar4;
          ExceptionList = local_10;
          return param_1;
        }
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_00638df9;
        }
      }
      uVar5 = 0;
      goto LAB_00638df9;
    }
    piVar3 = param_2 + 4;
    if (7 < (uint)param_2[9]) {
      piVar3 = (int *)*piVar3;
    }
    local_14 = (undefined1 *)&uStack_2c;
    iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
    if (-1 < iVar2) goto LAB_00638f51;
  }
  uVar5 = 1;
LAB_00638df9:
  FUN_0058dc20(param_1,uVar5,param_2,param_3,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00639060 @ 00639060  kind=gamemisc  attributed-by=none  size=28 */

void FUN_00639060(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_00639470(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_006391e0 @ 006391e0  kind=gamemisc  attributed-by=none  size=47 */

void FUN_006391e0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x34);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006391ee. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_00639300 @ 00639300  kind=gamemisc  attributed-by=none  size=91 */

void FUN_00639300(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_00639300(*(undefined4 *)((int)param_1 + 8));
  if (*(void **)((int)param_1 + 0x28) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x28));
  }
  if (7 < *(uint *)((int)param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 7;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined2 *)((int)param_1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_00639390 @ 00639390  kind=gamemisc  attributed-by=none  size=71 */

void FUN_00639390(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar2 = FUN_004521c0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (*(int *)(in_ECX + 0x20) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00639470 @ 00639470  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * FUN_00639470(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  undefined1 local_8 [4];
  
  piVar2 = (int *)*in_ECX;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_00639300(piVar2[1]);
    *(int *)(*in_ECX + 4) = *in_ECX;
    *(int *)*in_ECX = *in_ECX;
    *(int *)(*in_ECX + 8) = *in_ECX;
    in_ECX[1] = 0;
    *param_1 = *(undefined4 *)*in_ECX;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_00639530(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_00639530 @ 00639530  kind=gamemisc  attributed-by=none  size=660 */

/* WARNING: Removing unreachable block (ram,0x006395fd) */
/* WARNING: Removing unreachable block (ram,0x0063960d) */
/* WARNING: Removing unreachable block (ram,0x00639616) */
/* WARNING: Removing unreachable block (ram,0x00639619) */
/* WARNING: Removing unreachable block (ram,0x00639609) */
/* WARNING: Removing unreachable block (ram,0x00639627) */
/* WARNING: Removing unreachable block (ram,0x00639636) */
/* WARNING: Removing unreachable block (ram,0x00639641) */
/* WARNING: Removing unreachable block (ram,0x0063963d) */
/* WARNING: Removing unreachable block (ram,0x00639631) */
/* WARNING: Removing unreachable block (ram,0x00639644) */

void FUN_00639530(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_005c3ea0();
  piVar6 = (int *)*param_2;
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    if (*(char *)(param_2[2] + 0xd) == '\0') {
      piVar6 = (int *)param_2[2];
    }
  }
  else {
    piVar6 = (int *)param_2[2];
  }
  piVar5 = (int *)param_2[1];
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    piVar6[1] = (int)piVar5;
  }
  if (*(int **)(*in_ECX + 4) == param_2) {
    *(int **)(*in_ECX + 4) = piVar6;
  }
  else if ((int *)*piVar5 == param_2) {
    *piVar5 = (int)piVar6;
  }
  else {
    piVar5[2] = (int)piVar6;
  }
  puVar1 = (undefined4 *)*in_ECX;
  if ((int *)*puVar1 == param_2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      piVar3 = (int *)FUN_004e6ce0(piVar6);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *in_ECX;
  if (*(int **)(iVar2 + 8) == param_2) {
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      uVar4 = FUN_00428aa0(piVar6);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar5;
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (piVar6 != *(int **)(*in_ECX + 4)) {
      do {
        piVar3 = piVar5;
        if ((char)piVar6[3] != '\x01') break;
        piVar5 = (int *)*piVar3;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar3[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_004e37e0(piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042cac0(piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar3[3];
              *(undefined1 *)(piVar3 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004e37e0(piVar3);
              *(undefined1 *)(piVar6 + 3) = 1;
              goto LAB_0063978e;
            }
LAB_00639730:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_0042cac0(piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_00639730;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004e37e0(piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 3) = (char)piVar3[3];
            *(undefined1 *)(piVar3 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042cac0(piVar3);
            *(undefined1 *)(piVar6 + 3) = 1;
            goto LAB_0063978e;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_0063978e:
  if ((void *)param_2[10] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[10]);
  }
  if (7 < (uint)param_2[9]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[4]);
  }
  param_2[9] = 7;
  param_2[8] = 0;
  *(undefined2 *)(param_2 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_00639800 @ 00639800  kind=gamemisc  attributed-by=none  size=592 */

void FUN_00639800(int param_1)

{
  char cVar1;
  ScalableFont *pSVar2;
  ScalableFont *pSVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int in_ECX;
  ScalableFont **ppSVar8;
  int *piVar9;
  undefined1 local_74 [4];
  int local_70;
  LPCRITICAL_SECTION local_6c;
  ScalableFont *local_68;
  ScalableFont *local_64;
  char local_5d;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5b33;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_6c = (LPCRITICAL_SECTION)(in_ECX + 0x24);
  local_70 = param_1;
  EnterCriticalSection(local_6c);
  local_64 = (ScalableFont *)0x2f;
  pSVar2 = (ScalableFont *)FUN_00639a70(&local_64,0xffffffff,1);
  local_64 = (ScalableFont *)0x5c;
  local_68 = pSVar2;
  local_64 = (ScalableFont *)FUN_00639a70(&local_64,0xffffffff,1);
  ppSVar8 = &local_64;
  if ((int)local_64 <= (int)pSVar2) {
    ppSVar8 = &local_68;
  }
  FUN_0043a450(local_2c,(undefined1 *)((int)&(*ppSVar8)->vftablePtr + 1),
               (*(int *)(param_1 + 0x10) - (int)*ppSVar8) + -1);
  pSVar2 = (ScalableFont *)(in_ECX + 0x10);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_64 = pSVar2;
  pSVar3 = (ScalableFont *)FUN_004e3790(local_2c);
  if (pSVar3 != (ScalableFont *)pSVar2->vftablePtr) {
    puVar4 = &(pSVar3->ScalableFont_data).field_0xc;
    if (7 < *(uint *)&(pSVar3->ScalableFont_data).field_0x20) {
      puVar4 = *(undefined1 **)puVar4;
    }
    iVar5 = FUN_00428db0(0,local_1c,puVar4,*(undefined4 *)&(pSVar3->ScalableFont_data).offset_0x1c);
    local_68 = pSVar3;
    if (-1 < iVar5) goto LAB_006398e0;
  }
  local_68 = (ScalableFont *)pSVar2->vftablePtr;
LAB_006398e0:
  if (local_68 == (ScalableFont *)pSVar2->vftablePtr) {
    local_68 = operator_new(0x124);
    local_8._0_1_ = 1;
    if (local_68 == (ScalableFont *)0x0) {
      pSVar2 = (ScalableFont *)0x0;
    }
    else {
      pSVar2 = plasma::ScalableFont::ScalableFont(local_68,*(undefined4 *)(in_ECX + 4));
    }
    local_8._0_1_ = 0;
    puVar6 = (undefined4 *)FUN_00661830(local_2c);
    *puVar6 = pSVar2;
    cVar1 = FUN_0065f260(*(undefined4 *)(in_ECX + 0x18),local_70,in_ECX + 8);
    if (cVar1 == '\0') {
      piVar9 = (int *)**(int **)(in_ECX + 0x1c);
      cVar1 = local_5d;
      if (piVar9 != *(int **)(in_ECX + 0x1c)) {
        do {
          local_5d = cVar1;
          uVar7 = FUN_00451850(local_5c,piVar9 + 2,&DAT_006fd42c);
          local_8._0_1_ = 2;
          uVar7 = FUN_004517d0(local_44,uVar7,local_2c);
          local_8._0_1_ = 3;
          local_5d = FUN_0065f260(*(undefined4 *)(in_ECX + 0x18),uVar7,0);
          if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_44[0]);
          }
          local_30 = 7;
          local_34 = 0;
          local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
          local_8._0_1_ = 0;
          if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_5c[0]);
          }
          if (local_5d != '\0') goto LAB_00639a1f;
          piVar9 = (int *)*piVar9;
          cVar1 = '\0';
        } while (piVar9 != (int *)*(int *)(in_ECX + 0x1c));
      }
      if (pSVar2 != (ScalableFont *)0x0) {
        (*pSVar2->vftablePtr->deleting_destructor)(pSVar2,1);
      }
      puVar6 = (undefined4 *)FUN_00639210(local_74,local_2c);
      FUN_00661a20(&local_70,*puVar6,puVar6[1]);
      LeaveCriticalSection(local_6c);
    }
    else {
LAB_00639a1f:
      LeaveCriticalSection(local_6c);
    }
  }
  else {
    LeaveCriticalSection(local_6c);
  }
  if (local_18 < 8) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_2c[0]);
}


/* FUN_00639b30 @ 00639b30  kind=gamemisc  attributed-by=none  size=174 */

void FUN_00639b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00639800(param_1);
  if (iVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x24));
    (**(code **)(**(int **)(in_ECX + 4) + 0x40))(0);
    FUN_0065bc70(param_2,param_5,param_6,param_7,param_8,param_3,param_4,param_13,param_9,param_10,
                 param_11,param_12,param_14);
    (**(code **)(**(int **)(in_ECX + 4) + 0x44))(0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x24));
  }
  return;
}


/* FUN_00639cf0 @ 00639cf0  kind=gamemisc  attributed-by=none  size=39 */

void FUN_00639cf0(undefined4 *param_1,undefined4 *param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if ((void *)*param_1 != (void *)0x0) break;
    param_1 = param_1 + 3;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*param_1);
}


/* FUN_0063a690 @ 0063a690  kind=gamemisc  attributed-by=none  size=95 */

undefined4 * FUN_0063a690(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != param_1) {
      if ((void *)*param_3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*param_3);
      }
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0063a710 @ 0063a710  kind=gamemisc  attributed-by=none  size=43 */

void * FUN_0063a710(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


/* FUN_0063a8e0 @ 0063a8e0  kind=gamemisc  attributed-by=none  size=143 */

undefined4 * FUN_0063a8e0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = (undefined4 *)(param_1 + 8);
    puVar1 = param_3 + 6;
    param_1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_1 + -0x18 + (int)puVar1);
        puVar1[-5] = puVar2[-1];
        puVar1[-4] = *puVar2;
        puVar1[-3] = puVar2[1];
        puVar1[-2] = puVar2[2];
        puVar1[-1] = puVar2[3];
        *puVar1 = puVar2[4];
        puVar1[1] = puVar2[5];
        puVar1[2] = puVar2[6];
        puVar1[3] = puVar2[7];
        puVar1[4] = puVar2[8];
        puVar1[5] = puVar2[9];
        *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(puVar2 + 10);
      }
      puVar1 = puVar1 + 0xd;
      param_3 = param_3 + 0xd;
      puVar2 = puVar2 + 0xd;
    } while (param_1 + -0x18 + (int)puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_0063c680 @ 0063c680  kind=gamemisc  attributed-by=none  size=114 */

void FUN_0063c680(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_ECX;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f5cac;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = *(undefined4 *)(in_ECX + 0x1c);
  uVar3 = *(undefined4 *)(in_ECX + 0x14);
  local_8 = 0;
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 4),cube::Controller::vfunction12);
  FUN_0063d9c0(uVar1,uVar2,uVar3);
  local_8 = 0xffffffff;
  Concurrency::details::_Concurrent_vector_base_v4::~_Concurrent_vector_base_v4
            ((_Concurrent_vector_base_v4 *)(in_ECX + 4));
  ExceptionList = local_10;
  return;
}


/* FUN_0063c700 @ 0063c700  kind=gamemisc  attributed-by=none  size=238 */

void FUN_0063c700(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_ECX;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006f5d07;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = *(undefined4 *)(in_ECX + 0x5c);
  uVar3 = *(undefined4 *)(in_ECX + 0x54);
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 0x44),cube::Controller::vfunction12);
  FUN_0063d9c0(uVar1,uVar2,uVar3);
  local_8._0_1_ = 1;
  Concurrency::details::_Concurrent_vector_base_v4::~_Concurrent_vector_base_v4
            ((_Concurrent_vector_base_v4 *)(in_ECX + 0x44));
  uVar1 = *(undefined4 *)(in_ECX + 0x3c);
  uVar3 = *(undefined4 *)(in_ECX + 0x34);
  local_8._0_1_ = 3;
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 0x24),cube::Controller::vfunction12);
  FUN_0063d9c0(uVar1,uVar2,uVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  Concurrency::details::_Concurrent_vector_base_v4::~_Concurrent_vector_base_v4
            ((_Concurrent_vector_base_v4 *)(in_ECX + 0x24));
  uVar1 = *(undefined4 *)(in_ECX + 0x1c);
  uVar3 = *(undefined4 *)(in_ECX + 0x14);
  local_8 = 4;
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 4),cube::Controller::vfunction12);
  FUN_0063d9c0(uVar1,uVar2,uVar3);
  local_8 = 0xffffffff;
  Concurrency::details::_Concurrent_vector_base_v4::~_Concurrent_vector_base_v4
            ((_Concurrent_vector_base_v4 *)(in_ECX + 4));
  ExceptionList = local_10;
  return;
}


/* FUN_0063d930 @ 0063d930  kind=gamemisc  attributed-by=none  size=47 */

void * FUN_0063d930(undefined4 param_1,uint param_2)

{
  void *pvVar1;
  void *extraout_EAX;
  
  if (param_2 == 0) {
    return (void *)0x0;
  }
  if ((param_2 < 0x40000000) && (pvVar1 = operator_new(param_2 << 2), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0063d955. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  std::_Xbad_alloc();
  return extraout_EAX;
}


/* FUN_0063d960 @ 0063d960  kind=gamemisc  attributed-by=none  size=47 */

void * FUN_0063d960(undefined4 param_1,uint param_2)

{
  void *pvVar1;
  void *extraout_EAX;
  
  if (param_2 == 0) {
    return (void *)0x0;
  }
  if ((param_2 < 0x35e50d8) && (pvVar1 = operator_new(param_2 * 0x4c), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0063d985. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  std::_Xbad_alloc();
  return extraout_EAX;
}


/* FUN_0063d990 @ 0063d990  kind=gamemisc  attributed-by=none  size=47 */

void * FUN_0063d990(undefined4 param_1,uint param_2)

{
  void *pvVar1;
  void *extraout_EAX;
  
  if (param_2 == 0) {
    return (void *)0x0;
  }
  if ((param_2 < 0x2108422) && (pvVar1 = operator_new(param_2 * 0x7c), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0063d9b5. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  std::_Xbad_alloc();
  return extraout_EAX;
}


/* FUN_0063d9c0 @ 0063d9c0  kind=gamemisc  attributed-by=none  size=84 */

void FUN_0063d9c0(undefined4 *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  
  while (param_3 < param_2) {
    pvVar1 = (void *)param_1[param_2 - 1];
    param_2 = param_2 - 1;
    param_1[param_2] = 0;
    if ((void *)0x3f < pvVar1) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
  }
  pvVar1 = (void *)*param_1;
  if ((void *)0x3f < pvVar1) {
    while (param_2 != 0) {
      param_2 = param_2 - 1;
      param_1[param_2] = 0;
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  return;
}


/* FUN_0063da20 @ 0063da20  kind=gamemisc  attributed-by=none  size=122 */

void FUN_0063da20(uint param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  void *_Dst;
  
  _Dst = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x40000000) {
      _Dst = operator_new(param_1 * 4);
      if (_Dst != (void *)0x0) goto LAB_0063da55;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0063da55:
  memmove(_Dst,(void *)*in_ECX,in_ECX[1] - (int)*in_ECX & 0xfffffffc);
  pvVar1 = (void *)*in_ECX;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  in_ECX[2] = (void *)((int)_Dst + param_1 * 4);
  *in_ECX = _Dst;
  in_ECX[1] = (void *)((int)_Dst + (in_ECX[1] - (int)pvVar1 >> 2) * 4);
  return;
}


