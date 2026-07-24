// Helpers_02 (control) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers_02.h"

/* FUN_004ab190 @ 004ab190  kind=gamemisc  attributed-by=caller-vote  size=1736 */

void FUN_004ab190(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_3c = param_2 + (((int)param_3 - (int)param_2) / 0x60) * 6;
  FUN_004a9f00(param_2,local_3c,param_3 + -6,param_4);
  puVar12 = local_3c + 6;
  for (; param_2 < local_3c; local_3c = local_3c + -6) {
    if ((*(float *)(local_3c + -1) < *(float *)(local_3c + 5)) ||
       (*(float *)(local_3c + 5) < *(float *)(local_3c + -1))) break;
  }
  puVar9 = puVar12;
  puVar14 = local_3c;
  if (puVar12 < param_3) {
    if (3 < ((int)param_3 + (0x2f - (int)puVar12)) / 0x30) {
      fVar1 = *(float *)(local_3c + 5);
      do {
        puVar9 = puVar12;
        if ((*(float *)(puVar12 + 5) < fVar1) || (fVar1 < *(float *)(puVar12 + 5)))
        goto joined_r0x004ab2d2;
        if ((*(float *)(puVar12 + 0xb) < fVar1) || (fVar1 < *(float *)(puVar12 + 0xb))) {
          puVar12 = puVar12 + 6;
          puVar9 = puVar12;
          goto joined_r0x004ab2d2;
        }
        if ((*(float *)(puVar12 + 0x11) < fVar1) || (fVar1 < *(float *)(puVar12 + 0x11))) {
          puVar12 = puVar12 + 0xc;
          puVar9 = puVar12;
          goto joined_r0x004ab2d2;
        }
        if ((*(float *)(puVar12 + 0x17) < fVar1) || (fVar1 < *(float *)(puVar12 + 0x17))) {
          puVar12 = puVar12 + 0x12;
          puVar9 = puVar12;
          goto joined_r0x004ab2d2;
        }
        puVar12 = puVar12 + 0x18;
      } while ((int)puVar12 < (int)(param_3 + -0x12));
    }
    puVar9 = puVar12;
    if (puVar12 < param_3) {
      do {
        puVar9 = puVar12;
        if ((*(float *)(puVar12 + 5) < *(float *)(local_3c + 5)) ||
           (*(float *)(local_3c + 5) < *(float *)(puVar12 + 5))) break;
        puVar12 = puVar12 + 6;
        puVar9 = puVar12;
      } while (puVar12 < param_3);
    }
  }
joined_r0x004ab2d2:
  do {
    if (param_3 <= puVar9) {
LAB_004ab3ad:
      if (param_2 < local_3c) {
        puVar11 = local_3c + -4;
        puVar13 = puVar14;
        do {
          puVar14 = puVar13;
          if (*(float *)(puVar13 + 5) <= *(float *)(puVar11 + 3)) {
            if (*(float *)(puVar13 + 5) < *(float *)(puVar11 + 3)) break;
            local_20 = *(undefined4 *)(puVar13 + -3);
            local_10 = *(undefined4 *)(puVar13 + -1);
            puVar14 = puVar13 + -6;
            local_38 = puVar13[-6];
            local_30 = puVar13[-5];
            local_28 = puVar13[-4];
            local_1c = *(undefined4 *)((int)puVar13 + -0x14);
            uStack_18 = *(undefined4 *)(puVar13 + -2);
            uVar5 = *(undefined8 *)((int)puVar13 + -0x14);
            local_14 = *(undefined4 *)((int)puVar13 + -0xc);
            *(undefined4 *)puVar14 = *(undefined4 *)(puVar11 + -2);
            *(undefined4 *)((int)puVar13 + -0x2c) = *(undefined4 *)((int)puVar11 + -0xc);
            *(undefined4 *)(puVar13 + -5) = *(undefined4 *)(puVar11 + -1);
            *(undefined4 *)((int)puVar13 + -0x24) = *(undefined4 *)((int)puVar11 + -4);
            *(undefined4 *)(puVar13 + -4) = *(undefined4 *)puVar11;
            *(undefined4 *)((int)puVar13 + -0x1c) = *(undefined4 *)((int)puVar11 + 4);
            *(undefined4 *)(puVar13 + -3) = *(undefined4 *)(puVar11 + 1);
            *(undefined4 *)((int)puVar13 + -0x14) = *(undefined4 *)((int)puVar11 + 0xc);
            *(undefined4 *)(puVar13 + -2) = *(undefined4 *)(puVar11 + 2);
            *(undefined4 *)((int)puVar13 + -0xc) = *(undefined4 *)((int)puVar11 + 0x14);
            *(undefined4 *)(puVar13 + -1) = *(undefined4 *)(puVar11 + 3);
            iVar10 = 0;
            do {
              *(undefined4 *)((int)puVar11 + iVar10 + -0x10) =
                   *(undefined4 *)((int)&local_38 + iVar10);
              *(undefined4 *)((int)puVar11 + iVar10 + -0xc) =
                   *(undefined4 *)((int)&local_38 + iVar10 + 4);
              iVar10 = iVar10 + 8;
            } while (iVar10 < 0x18);
            *(undefined4 *)(puVar11 + 1) = local_20;
            *(undefined8 *)((int)puVar11 + 0xc) = uVar5;
            *(undefined4 *)((int)puVar11 + 0x14) = local_14;
            *(undefined4 *)(puVar11 + 3) = local_10;
          }
          local_3c = local_3c + -6;
          puVar11 = puVar11 + -6;
          puVar13 = puVar14;
        } while (param_2 < local_3c);
      }
      if (local_3c == param_2) {
        if (puVar9 == param_3) {
          *param_1 = puVar14;
          param_1[1] = puVar12;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (puVar12 != puVar9) {
          uVar5 = *puVar14;
          uVar6 = puVar14[1];
          uVar7 = puVar14[2];
          uVar2 = *(undefined4 *)(puVar14 + 3);
          uVar3 = *(undefined4 *)(puVar14 + 5);
          uVar8 = *(undefined8 *)((int)puVar14 + 0x1c);
          uVar4 = *(undefined4 *)((int)puVar14 + 0x24);
          *(undefined4 *)puVar14 = *(undefined4 *)puVar12;
          *(undefined4 *)((int)puVar14 + 4) = *(undefined4 *)((int)puVar12 + 4);
          *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar12 + 1);
          *(undefined4 *)((int)puVar14 + 0xc) = *(undefined4 *)((int)puVar12 + 0xc);
          *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(puVar12 + 2);
          *(undefined4 *)((int)puVar14 + 0x14) = *(undefined4 *)((int)puVar12 + 0x14);
          *(undefined4 *)(puVar14 + 3) = *(undefined4 *)(puVar12 + 3);
          *(undefined4 *)((int)puVar14 + 0x1c) = *(undefined4 *)((int)puVar12 + 0x1c);
          *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar12 + 4);
          *(undefined4 *)((int)puVar14 + 0x24) = *(undefined4 *)((int)puVar12 + 0x24);
          *(undefined4 *)(puVar14 + 5) = *(undefined4 *)(puVar12 + 5);
          *puVar12 = uVar5;
          puVar12[1] = uVar6;
          puVar12[2] = uVar7;
          *(undefined4 *)(puVar12 + 3) = uVar2;
          *(undefined8 *)((int)puVar12 + 0x1c) = uVar8;
          *(undefined4 *)((int)puVar12 + 0x24) = uVar4;
          *(undefined4 *)(puVar12 + 5) = uVar3;
        }
        local_1c = *(undefined4 *)((int)puVar14 + 0x1c);
        uVar5 = *puVar14;
        uVar6 = puVar14[1];
        uVar7 = puVar14[2];
        uVar2 = *(undefined4 *)(puVar14 + 3);
        uVar3 = *(undefined4 *)(puVar14 + 5);
        uStack_18 = *(undefined4 *)(puVar14 + 4);
        uVar8 = *(undefined8 *)((int)puVar14 + 0x1c);
        local_14 = *(undefined4 *)((int)puVar14 + 0x24);
        *(undefined4 *)puVar14 = *(undefined4 *)puVar9;
        *(undefined4 *)((int)puVar14 + 4) = *(undefined4 *)((int)puVar9 + 4);
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar9 + 1);
        *(undefined4 *)((int)puVar14 + 0xc) = *(undefined4 *)((int)puVar9 + 0xc);
        *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(puVar9 + 2);
        *(undefined4 *)((int)puVar14 + 0x14) = *(undefined4 *)((int)puVar9 + 0x14);
        *(undefined4 *)(puVar14 + 3) = *(undefined4 *)(puVar9 + 3);
        *(undefined4 *)((int)puVar14 + 0x1c) = *(undefined4 *)((int)puVar9 + 0x1c);
        *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar9 + 4);
        *(undefined4 *)((int)puVar14 + 0x24) = *(undefined4 *)((int)puVar9 + 0x24);
        *(undefined4 *)(puVar14 + 5) = *(undefined4 *)(puVar9 + 5);
        *puVar9 = uVar5;
        puVar9[1] = uVar6;
        puVar9[2] = uVar7;
        *(undefined4 *)(puVar9 + 3) = uVar2;
        *(undefined8 *)((int)puVar9 + 0x1c) = uVar8;
        *(undefined4 *)((int)puVar9 + 0x24) = local_14;
        *(undefined4 *)(puVar9 + 5) = uVar3;
        puVar12 = puVar12 + 6;
        puVar9 = puVar9 + 6;
        puVar14 = puVar14 + 6;
      }
      else {
        puVar11 = local_3c + -6;
        if (puVar9 == param_3) {
          puVar13 = puVar14 + -6;
          if (puVar11 != puVar13) {
            uVar5 = *puVar11;
            uVar6 = local_3c[-5];
            uVar7 = local_3c[-4];
            uVar2 = *(undefined4 *)(local_3c + -3);
            uVar3 = *(undefined4 *)(local_3c + -1);
            uVar8 = *(undefined8 *)((int)local_3c + -0x14);
            uVar4 = *(undefined4 *)((int)local_3c + -0xc);
            *(undefined4 *)puVar11 = *(undefined4 *)puVar13;
            *(undefined4 *)((int)local_3c + -0x2c) = *(undefined4 *)((int)puVar14 + -0x2c);
            *(undefined4 *)(local_3c + -5) = *(undefined4 *)(puVar14 + -5);
            *(undefined4 *)((int)local_3c + -0x24) = *(undefined4 *)((int)puVar14 + -0x24);
            *(undefined4 *)(local_3c + -4) = *(undefined4 *)(puVar14 + -4);
            *(undefined4 *)((int)local_3c + -0x1c) = *(undefined4 *)((int)puVar14 + -0x1c);
            *(undefined4 *)(local_3c + -3) = *(undefined4 *)(puVar14 + -3);
            *(undefined4 *)((int)local_3c + -0x14) = *(undefined4 *)((int)puVar14 + -0x14);
            *(undefined4 *)(local_3c + -2) = *(undefined4 *)(puVar14 + -2);
            *(undefined4 *)((int)local_3c + -0xc) = *(undefined4 *)((int)puVar14 + -0xc);
            *(undefined4 *)(local_3c + -1) = *(undefined4 *)(puVar14 + -1);
            *puVar13 = uVar5;
            puVar14[-5] = uVar6;
            puVar14[-4] = uVar7;
            *(undefined4 *)(puVar14 + -3) = uVar2;
            *(undefined8 *)((int)puVar14 + -0x14) = uVar8;
            *(undefined4 *)((int)puVar14 + -0xc) = uVar4;
            *(undefined4 *)(puVar14 + -1) = uVar3;
          }
          local_1c = *(undefined4 *)((int)puVar14 + -0x14);
          uVar5 = *puVar13;
          uVar6 = puVar14[-5];
          uVar7 = puVar14[-4];
          uVar2 = *(undefined4 *)(puVar14 + -3);
          uVar3 = *(undefined4 *)(puVar14 + -1);
          uStack_18 = *(undefined4 *)(puVar14 + -2);
          uVar8 = *(undefined8 *)((int)puVar14 + -0x14);
          local_14 = *(undefined4 *)((int)puVar14 + -0xc);
          *(undefined4 *)puVar13 = *(undefined4 *)(puVar12 + -6);
          *(undefined4 *)((int)puVar14 + -0x2c) = *(undefined4 *)((int)puVar12 - 0x2c);
          *(undefined4 *)(puVar14 + -5) = *(undefined4 *)(puVar12 + -5);
          *(undefined4 *)((int)puVar14 + -0x24) = *(undefined4 *)((int)puVar12 - 0x24);
          *(undefined4 *)(puVar14 + -4) = *(undefined4 *)(puVar12 + -4);
          *(undefined4 *)((int)puVar14 + -0x1c) = *(undefined4 *)((int)puVar12 - 0x1c);
          *(undefined4 *)(puVar14 + -3) = *(undefined4 *)(puVar12 + -3);
          *(undefined4 *)((int)puVar14 + -0x14) = *(undefined4 *)((int)puVar12 - 0x14);
          *(undefined4 *)(puVar14 + -2) = *(undefined4 *)(puVar12 + -2);
          *(undefined4 *)((int)puVar14 + -0xc) = *(undefined4 *)((int)puVar12 - 0xc);
          *(undefined4 *)(puVar14 + -1) = *(undefined4 *)(puVar12 + -1);
          puVar12[-6] = uVar5;
          puVar12[-5] = uVar6;
          puVar12[-4] = uVar7;
          *(undefined4 *)(puVar12 + -3) = uVar2;
          *(undefined8 *)((int)puVar12 - 0x14) = uVar8;
          *(undefined4 *)((int)puVar12 - 0xc) = local_14;
          *(undefined4 *)(puVar12 + -1) = uVar3;
          puVar12 = puVar12 + -6;
          local_3c = puVar11;
          puVar14 = puVar13;
        }
        else {
          local_1c = *(undefined4 *)((int)puVar9 + 0x1c);
          uVar5 = *puVar9;
          uVar6 = puVar9[1];
          uVar7 = puVar9[2];
          uVar2 = *(undefined4 *)(puVar9 + 3);
          uVar3 = *(undefined4 *)(puVar9 + 5);
          uStack_18 = *(undefined4 *)(puVar9 + 4);
          uVar8 = *(undefined8 *)((int)puVar9 + 0x1c);
          local_14 = *(undefined4 *)((int)puVar9 + 0x24);
          *(undefined4 *)puVar9 = *(undefined4 *)puVar11;
          *(undefined4 *)((int)puVar9 + 4) = *(undefined4 *)((int)local_3c + -0x2c);
          *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(local_3c + -5);
          *(undefined4 *)((int)puVar9 + 0xc) = *(undefined4 *)((int)local_3c + -0x24);
          *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(local_3c + -4);
          *(undefined4 *)((int)puVar9 + 0x14) = *(undefined4 *)((int)local_3c + -0x1c);
          *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(local_3c + -3);
          *(undefined4 *)((int)puVar9 + 0x1c) = *(undefined4 *)((int)local_3c + -0x14);
          *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(local_3c + -2);
          *(undefined4 *)((int)puVar9 + 0x24) = *(undefined4 *)((int)local_3c + -0xc);
          *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(local_3c + -1);
          *puVar11 = uVar5;
          local_3c[-5] = uVar6;
          local_3c[-4] = uVar7;
          *(undefined4 *)(local_3c + -3) = uVar2;
          *(undefined8 *)((int)local_3c + -0x14) = uVar8;
          *(undefined4 *)((int)local_3c + -0xc) = local_14;
          *(undefined4 *)(local_3c + -1) = uVar3;
          puVar9 = puVar9 + 6;
          local_3c = puVar11;
        }
      }
      goto joined_r0x004ab2d2;
    }
    puVar11 = puVar12;
    if (*(float *)(puVar9 + 5) <= *(float *)(puVar14 + 5)) {
      if (*(float *)(puVar9 + 5) < *(float *)(puVar14 + 5)) goto LAB_004ab3ad;
      puVar11 = puVar12 + 6;
      local_1c = *(undefined4 *)((int)puVar12 + 0x1cU);
      uVar5 = *puVar12;
      uVar6 = puVar12[1];
      uVar7 = puVar12[2];
      uVar2 = *(undefined4 *)(puVar12 + 3);
      uVar3 = *(undefined4 *)(puVar12 + 5);
      uStack_18 = *(undefined4 *)(puVar12 + 4);
      uVar8 = *(undefined8 *)((int)puVar12 + 0x1cU);
      local_14 = *(undefined4 *)((int)puVar12 + 0x24);
      *(undefined4 *)puVar12 = *(undefined4 *)puVar9;
      *(undefined4 *)((int)puVar12 + 4) = *(undefined4 *)((int)puVar9 + 4);
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar9 + 1);
      *(undefined4 *)((int)puVar12 + 0xc) = *(undefined4 *)((int)puVar9 + 0xc);
      *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar9 + 2);
      *(undefined4 *)((int)puVar12 + 0x14) = *(undefined4 *)((int)puVar9 + 0x14);
      *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(puVar9 + 3);
      *(undefined4 *)((int)puVar12 + 0x1c) = *(undefined4 *)((int)puVar9 + 0x1c);
      *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar9 + 4);
      *(undefined4 *)((int)puVar12 + 0x24) = *(undefined4 *)((int)puVar9 + 0x24);
      *(undefined4 *)(puVar12 + 5) = *(undefined4 *)(puVar9 + 5);
      *puVar9 = uVar5;
      puVar9[1] = uVar6;
      puVar9[2] = uVar7;
      *(undefined4 *)(puVar9 + 3) = uVar2;
      *(undefined8 *)((int)puVar9 + 0x1c) = uVar8;
      *(undefined4 *)((int)puVar9 + 0x24) = local_14;
      *(undefined4 *)(puVar9 + 5) = uVar3;
    }
    puVar12 = puVar11;
    puVar9 = puVar9 + 6;
  } while( true );
}


/* FUN_004ab940 @ 004ab940  kind=gamemisc  attributed-by=caller-vote  size=204 */

void FUN_004ab940(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *in_ECX;
  uint uStack_28;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e7e70;
  local_10 = ExceptionList;
  uStack_28 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_28;
  ExceptionList = &local_10;
  puVar1 = *(undefined4 **)*in_ECX;
  local_8 = 0;
  for (; puVar3 = &uStack_28, param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    if (puVar1 == (undefined4 *)*in_ECX) goto LAB_004ab9c2;
    puVar1[2] = param_1[2];
    puVar1 = (undefined4 *)*puVar1;
  }
LAB_004ab9a0:
  local_14 = (undefined1 *)puVar3;
  FUN_00477bf0(local_18,puVar1,*in_ECX);
  ExceptionList = local_10;
  return;
LAB_004ab9c2:
  for (; puVar3 = (uint *)local_14, param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    iVar2 = *in_ECX;
    iVar4 = FUN_00583cb0(iVar2,*(undefined4 *)(iVar2 + 4),param_1 + 2);
    if (in_ECX[1] == 0x15555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    in_ECX[1] = in_ECX[1] + 1;
    *(int *)(iVar2 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
  }
  goto LAB_004ab9a0;
}


/* FUN_004aba20 @ 004aba20  kind=gamemisc  attributed-by=caller-vote  size=73 */

void FUN_004aba20(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_004ac150(param_3,param_4);
  *param_1 = (1.0 - (float)fVar1) * *param_1 + *param_2 * (float)fVar1;
  return;
}


/* FUN_004aba70 @ 004aba70  kind=gamemisc  attributed-by=caller-vote  size=32 */

void FUN_004aba70(int param_1,int param_2,undefined4 param_3)

{
  FUN_004aa260(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return;
}


/* FUN_004abae0 @ 004abae0  kind=gamemisc  attributed-by=caller-vote  size=46 */

void FUN_004abae0(int param_1,int param_2,undefined4 param_3)

{
  FUN_004aa580(param_1,param_2,(param_2 - param_1) / 0x30,param_3);
  return;
}


/* FUN_004abb10 @ 004abb10  kind=gamemisc  attributed-by=caller-vote  size=233 */

void FUN_004abb10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar8 = param_1[4];
  uVar9 = param_1[5];
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  uVar3 = param_1[9];
  uVar4 = param_1[6];
  uVar5 = param_1[10];
  uVar10 = param_1[2];
  uVar11 = param_1[3];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *param_2 = uVar6;
  param_2[3] = uVar11;
  param_2[2] = uVar10;
  param_2[1] = uVar7;
  param_2[4] = uVar8;
  param_2[5] = uVar9;
  param_2[6] = uVar4;
  param_2[7] = uVar1;
  param_2[8] = uVar2;
  param_2[9] = uVar3;
  param_2[10] = uVar5;
  return;
}


/* FUN_004abc10 @ 004abc10  kind=gamemisc  attributed-by=caller-vote  size=18 */

int FUN_004abc10(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x30 + *in_ECX;
}


/* FUN_004abc40 @ 004abc40  kind=gamemisc  attributed-by=caller-vote  size=22 */

void FUN_004abc40(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  *in_ECX = iVar1 + 0x188;
  return;
}


/* FUN_004abc80 @ 004abc80  kind=gamemisc  attributed-by=caller-vote  size=19 */

void FUN_004abc80(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  *in_ECX = iVar1 + 0x30;
  return;
}


/* FUN_004abe90 @ 004abe90  kind=gamemisc  attributed-by=caller-vote  size=206 */

void FUN_004abe90(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e7ed0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x5555556) {
      pvVar2 = operator_new(param_1 * 0x30);
      if (pvVar2 != (void *)0x0) goto LAB_004abeef;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004abeef:
  local_8 = 0;
  FUN_004ab8b0(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (in_ECX[1] - *in_ECX) / 0x30;
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  in_ECX[2] = (int)(uVar1 * 0x30 + (int)pvVar2);
  in_ECX[1] = (int)(param_1 * 0x30 + (int)pvVar2);
  *in_ECX = (int)pvVar2;
  ExceptionList = local_10;
  return;
}


/* FUN_004ac0a0 @ 004ac0a0  kind=gamemisc  attributed-by=caller-vote  size=162 */

void FUN_004ac0a0(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  
  if (param_1 <= (uint)((in_ECX[2] - in_ECX[1]) / 0x30)) {
    return;
  }
  if (0x5555555U - (in_ECX[1] - *in_ECX) / 0x30 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x30;
  if (0x5555555 - (uVar1 >> 1) < uVar1) {
    FUN_004abe90();
    return;
  }
  FUN_004abe90();
  return;
}


/* FUN_004ac150 @ 004ac150  kind=gamemisc  attributed-by=caller-vote  size=247 */

float10 FUN_004ac150(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined8 local_c;
  
  dVar3 = 0.0;
  iVar2 = 0;
  local_c = 0.0;
  dVar4 = (double)param_2;
  if (7 < param_1) {
    iVar1 = (param_1 - 8U >> 3) + 1;
    iVar2 = iVar1 * 8;
    do {
      dVar3 = (1.0 - dVar3) * dVar4 + dVar3;
      dVar3 = (1.0 - dVar3) * dVar4 + dVar3;
      dVar3 = (1.0 - dVar3) * dVar4 + dVar3;
      dVar3 = (1.0 - dVar3) * dVar4 + dVar3;
      dVar3 = (1.0 - dVar3) * dVar4 + dVar3;
      dVar3 = (1.0 - dVar3) * dVar4 + dVar3;
      dVar3 = (1.0 - dVar3) * dVar4 + dVar3;
      dVar3 = (1.0 - dVar3) * dVar4 + dVar3;
      iVar1 = iVar1 + -1;
      local_c = dVar3;
    } while (iVar1 != 0);
  }
  if (iVar2 < param_1) {
    param_1 = param_1 - iVar2;
    do {
      local_c = local_c + (1.0 - local_c) * dVar4;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return (float10)(float)local_c;
}


/* FUN_004c1100 @ 004c1100  kind=gamemisc  attributed-by=caller-vote  size=139 */

void FUN_004c1100(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *in_ECX;
  
  puVar1 = (undefined8 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined8 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined8 *)in_ECX[2]) {
      FUN_004abf80(1);
    }
    puVar1 = (undefined8 *)(*in_ECX + (((int)param_1 - (int)puVar2) / 0xc) * 0xc);
    puVar2 = (undefined8 *)in_ECX[1];
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      in_ECX[1] = in_ECX[1] + 0xc;
      return;
    }
  }
  else {
    if (puVar1 == (undefined8 *)in_ECX[2]) {
      FUN_004abf80(1);
    }
    puVar1 = (undefined8 *)in_ECX[1];
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_1;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
    }
  }
  in_ECX[1] = in_ECX[1] + 0xc;
  return;
}


/* FUN_004c11f0 @ 004c11f0  kind=gamemisc  attributed-by=caller-vote  size=248 */

void FUN_004c11f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint *in_ECX;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined4 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_004ac0a0(1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    puVar2 = (undefined4 *)((((int)param_1 - (int)puVar2) / 0x30) * 0x30 + *in_ECX);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[6] = puVar2[6];
      puVar1[7] = puVar2[7];
      puVar1[8] = puVar2[8];
      puVar1[9] = puVar2[9];
      puVar1[10] = puVar2[10];
      in_ECX[1] = in_ECX[1] + 0x30;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_004ac0a0(1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
      puVar1[5] = param_1[5];
      puVar1[6] = param_1[6];
      puVar1[7] = param_1[7];
      puVar1[8] = param_1[8];
      puVar1[9] = param_1[9];
      puVar1[10] = param_1[10];
    }
  }
  in_ECX[1] = in_ECX[1] + 0x30;
  return;
}


/* FUN_004c14d0 @ 004c14d0  kind=gamemisc  attributed-by=caller-vote  size=23 */

int FUN_004c14d0(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0x30;
}


/* FUN_004c14f0 @ 004c14f0  kind=gamemisc  attributed-by=caller-vote  size=30 */

float10 FUN_004c14f0(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_acos_precise();
  return (float10)(float)dVar1;
}


/* FUN_004c1a10 @ 004c1a10  kind=gamemisc  attributed-by=caller-vote  size=123 */

void FUN_004c1a10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  if (*(int *)(in_ECX + 0x40) != 0) {
    puVar1 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar1 = (undefined4 *)*param_1;
    }
    iVar2 = FUN_00428db0(0,*(undefined4 *)(*(int *)(in_ECX + 0x40) + 0x1c),puVar1,param_1[4]);
    if (iVar2 == 0) {
      FUN_004c1a90(*(undefined4 *)(in_ECX + 0x40),param_2,param_3,param_4,param_5,param_6,1);
    }
  }
  piVar3 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar3 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_004c1a10(param_1,param_2,param_3,param_4,param_5,param_6);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
  }
  return;
}


/* FUN_004c1a90 @ 004c1a90  kind=gamemisc  attributed-by=caller-vote  size=252 */

void __thiscall
FUN_004c1a90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1e48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)FUN_00468910(&param_2);
  if ((void *)*puVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar3);
  }
  puVar4 = operator_new(0x18);
  uVar2 = param_6;
  uVar1 = param_3;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(char *)(puVar4 + 1) = (char)param_7;
                    /* inlined constructor:
                       plasma::Widget::MemberFunctionConnection<cube::InventoryWidget>::MemberFunctionConnection<cube::InventoryWidget>
                        */
    *puVar4 = &plasma::Widget::MemberFunctionConnection<cube::InventoryWidget>::vftable;
    puVar4[2] = param_3;
    puVar4[4] = param_4;
    puVar4[5] = param_5;
  }
  *puVar3 = puVar4;
  if ((char)param_6 != '\0') {
    FUN_00629140(&local_1c);
    local_8 = 0;
    piVar5 = (int *)*local_1c;
    if (piVar5 != local_1c) {
      do {
        FUN_004c1a90(piVar5[2],param_2,uVar1,param_4,param_5,uVar2,param_7);
        piVar5 = (int *)*piVar5;
      } while (piVar5 != local_1c);
    }
    piVar5 = (int *)*local_1c;
    *local_1c = (int)local_1c;
    local_1c[1] = (int)local_1c;
    local_18 = 0;
    if (piVar5 != local_1c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(piVar5);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_004c1bb0 @ 004c1bb0  kind=gamemisc  attributed-by=caller-vote  size=964 */

void FUN_004c1bb0(int param_1,void *param_2,int param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  Widget *in_ECX;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e7fb4;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_14 = uVar1;
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
                    /* inlined constructor: cube::InventoryWidget::InventoryWidget */
  plasma::Widget::Widget(in_ECX,*(int *)(param_1 + 0x800710),param_3,local_2c);
  local_8._0_1_ = 2;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0x0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  in_ECX[1].Object_data.offset_0x4 = param_4;
  *(undefined4 *)&in_ECX[1].offset_0x0 = param_8;
  *(undefined4 *)&in_ECX[1].field_0x10 = param_5;
  *(undefined4 *)&in_ECX[1].field_0x14 = param_6;
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::InventoryWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::InventoryWidget::vftable_for_Deformer;
  in_ECX[1].Object_data.offset_0x0 = param_1;
  *(undefined4 *)&in_ECX[1].field_0x18 = param_7;
  local_18 = 7;
  local_1c = 0;
  in_ECX[1].offset_0x10 = 0;
  in_ECX[1].offset_0x14 = 0;
  uVar2 = FUN_0046d550(0,0);
  in_ECX[1].offset_0x10 = uVar2;
  in_ECX[1].vftablePtr = (Widget_vftable_for_Deformer *)0xffffffff;
  in_ECX[1].offset_0x1c = 0xffffffff;
  in_ECX[1].offset_0x20 = 0;
  in_ECX[1].offset_0x24 = 0;
  in_ECX[1].offset_0x28 = param_2;
  in_ECX[1].offset_0x2c = 0;
  in_ECX[1].offset_0x30 = 0;
  in_ECX[1].offset_0x34 = 0;
  local_8._0_1_ = 4;
  in_ECX[1].offset_0x38 = 1;
  in_ECX[1].offset_0x3c = 0x28;
  in_ECX[1].offset_0x40 = 0x28;
  *(undefined4 *)&in_ECX[1].offset_0x44 = 0xffffffff;
  *(undefined4 *)&in_ECX[1].offset_0x48 = 0;
  if (*(int *)&in_ECX[1].offset_0x0 != 0) {
    iVar3 = FUN_00636040(param_3);
    *(int *)&in_ECX[1].offset_0x0 = iVar3;
    uVar2 = (**(code **)(**(int **)(iVar3 + 0x38) + 8))(uVar1);
    FUN_00636b70(uVar2);
    uVar2 = (**(code **)(**(int **)(*(int *)&in_ECX[1].offset_0x0 + 0x3c) + 8))();
    FUN_006368e0(uVar2);
    iVar3 = *(int *)(*(int *)&in_ECX[1].offset_0x0 + 0x3c);
    *(undefined4 *)(*(int *)(iVar3 + 0x94) + *(int *)(iVar3 + 0x68) * 4) = 0;
  }
  if (*(int *)&in_ECX[1].field_0x10 != 0) {
    iVar3 = FUN_00636040(param_3);
    *(int *)&in_ECX[1].field_0x10 = iVar3;
    uVar2 = (**(code **)(**(int **)(iVar3 + 0x38) + 8))();
    FUN_00636b70(uVar2);
    uVar2 = (**(code **)(**(int **)(*(int *)&in_ECX[1].field_0x10 + 0x3c) + 8))();
    FUN_006368e0(uVar2);
    FUN_0040eb60(L"upbutton");
    local_8._0_1_ = 5;
    FUN_004c1a10(local_2c,2,in_ECX,FUN_004c60f0,0,1);
    local_8._0_1_ = 4;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
  }
  if (*(int *)&in_ECX[1].field_0x14 != 0) {
    iVar3 = FUN_00636040(param_3);
    *(int *)&in_ECX[1].field_0x14 = iVar3;
    uVar2 = (**(code **)(**(int **)(iVar3 + 0x38) + 8))();
    FUN_00636b70(uVar2);
    uVar2 = (**(code **)(**(int **)(*(int *)&in_ECX[1].field_0x14 + 0x3c) + 8))();
    FUN_006368e0(uVar2);
    FUN_0040eb60(L"downbutton");
    local_8._0_1_ = 6;
    FUN_004c1a10(local_2c,2,in_ECX,FUN_004c5a00,0,1);
    local_8._0_1_ = 4;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
  }
  if (*(int *)&in_ECX[1].field_0x18 != 0) {
    iVar3 = FUN_00636040(param_3);
    *(int *)&in_ECX[1].field_0x18 = iVar3;
    uVar2 = (**(code **)(**(int **)(iVar3 + 0x38) + 8))();
    FUN_00636b70(uVar2);
    uVar2 = (**(code **)(**(int **)(*(int *)&in_ECX[1].field_0x18 + 0x3c) + 8))();
    FUN_006368e0(uVar2);
    FUN_0040eb60(L"scrollbutton");
    local_8._0_1_ = 7;
    FUN_004c1a10(local_44,0xc,in_ECX,FUN_004c5bb0,0,1);
    local_8._0_1_ = 4;
    if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
  }
  if (in_ECX[1].Object_data.offset_0x4 != (int *)0x0) {
    FUN_0062f600();
    uVar2 = FUN_0068d910();
    in_ECX[1].offset_0x3c = uVar2;
    FUN_006291d0();
    iVar3 = FUN_0068d910();
    in_ECX[1].offset_0x40 = iVar3;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c6140 @ 004c6140  kind=gamemisc  attributed-by=caller-vote  size=489 */

void FUN_004c6140(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  int local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e83c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((int *)(in_ECX + 0x17c) != param_1) {
    FUN_004ab940(*(undefined4 *)*param_1,(undefined4 *)*param_1);
  }
  local_20 = 0;
  puVar2 = (undefined4 *)FUN_0046d550(0,0);
  local_8 = 0;
  piVar5 = *(int **)(*(int *)(in_ECX + 0x148) + 0x2c);
  piVar4 = (int *)*piVar5;
  if (piVar4 != piVar5) {
    do {
      iVar3 = piVar4[2];
      if ((((iVar3 != *(int *)(in_ECX + 0x170)) && (iVar3 != *(int *)(in_ECX + 0x174))) &&
          (iVar3 != *(int *)(in_ECX + 0x16c))) && (iVar3 != *(int *)(in_ECX + 0x178))) {
        iVar3 = FUN_00583cb0(puVar2,puVar2[1],piVar4 + 2);
        if (local_20 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        puVar2[1] = iVar3;
        local_20 = local_20 + 1;
        **(int **)(iVar3 + 4) = iVar3;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(*(int *)(in_ECX + 0x148) + 0x2c));
  }
  for (puVar1 = (undefined4 *)*puVar2; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
    FUN_006504e0(puVar1[2]);
  }
  local_18 = 4;
  piVar5 = *(int **)*param_1;
  if (piVar5 != (int *)*param_1) {
    do {
      FUN_00630be0(piVar5[2]);
      uVar7 = 1;
      fVar6 = (float10)FUN_006291d0(1);
      FUN_0062a650((float)local_18,-(float)fVar6 - 3.0,uVar7);
      fVar6 = (float10)FUN_0062f600();
      local_18 = (int)((float)fVar6 + 2.0 + (float)local_18);
      FUN_004c1a90(*(undefined4 *)(piVar5[2] + 0x40),2,in_ECX,FUN_004c5a60,0,1,1);
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*param_1);
  }
  puVar1 = (undefined4 *)*puVar2;
  *puVar2 = puVar2;
  puVar2[1] = puVar2;
  if (puVar1 != puVar2) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar1);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar2);
}


/* FUN_004c6610 @ 004c6610  kind=gamemisc  attributed-by=caller-vote  size=401 */

void FUN_004c6610(char param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  float10 fVar4;
  
  if (*(int *)(in_ECX + 0x160) != 0) {
    if (param_1 != '\0') {
      if (*(int *)(in_ECX + 0x188) < 0) {
        return;
      }
      *(undefined4 *)(in_ECX + 0x18c) = *(undefined4 *)(in_ECX + 0x184);
      *(undefined4 *)(in_ECX + 400) = *(undefined4 *)(in_ECX + 0x188);
      FUN_00484320(0x55);
    }
    if (*(int *)(in_ECX + 0x16c) != 0) {
      fVar4 = (float10)FUN_0062f600();
      iVar3 = (int)(((float)fVar4 - 10.0) / (float)(*(int *)(in_ECX + 0x1a8) + 5));
      fVar4 = (float10)FUN_006291d0();
      iVar2 = *(int *)(in_ECX + 400);
      iVar1 = *(int *)(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 0x1b4) * 4) * iVar3;
      if (((-1 < iVar2) && (iVar1 <= iVar2)) &&
         (iVar2 < (int)(((float)fVar4 - 40.0) / (float)(*(int *)(in_ECX + 0x1ac) + 5)) * iVar3 +
                  iVar1)) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x16c) + 0x3c);
        *(undefined4 *)(*(int *)(iVar2 + 0x94) + *(int *)(iVar2 + 0x68) * 4) = 1;
        iVar2 = *(int *)(in_ECX + 400) -
                *(int *)(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 0x1b4) * 4) * iVar3;
        FUN_0062a650((float)((*(int *)(in_ECX + 0x1a8) + 5) * (iVar2 % iVar3) + 10),
                     (float)((*(int *)(in_ECX + 0x1ac) + 5) * (iVar2 / iVar3) + 0x28),1);
        return;
      }
      iVar2 = *(int *)(*(int *)(in_ECX + 0x16c) + 0x3c);
      *(undefined4 *)(*(int *)(iVar2 + 0x94) + *(int *)(iVar2 + 0x68) * 4) = 0;
    }
  }
  return;
}


/* FUN_004c69b0 @ 004c69b0  kind=gamemisc  attributed-by=caller-vote  size=222 */

void FUN_004c69b0(char param_1,char param_2,char param_3,char param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *in_ECX;
  char *pcVar4;
  int iVar5;
  char local_8 [4];
  
  iVar5 = 0;
  iVar2 = *(int *)(in_ECX + 0x114);
  if (0 < iVar2) {
    local_8[1] = param_2;
    local_8[0] = param_1;
    local_8[3] = (char)((uint)in_ECX >> 0x18);
    local_8[2] = param_3;
    pcVar4 = in_ECX + 0x14;
    do {
      iVar3 = 0;
      while (pcVar4[iVar3] == local_8[iVar3]) {
        iVar3 = iVar3 + 1;
        if (2 < iVar3) {
          in_ECX[iVar5 * 8 + 0x17] = param_4;
          *(undefined4 *)(in_ECX + iVar5 * 8 + 0x18) = param_5;
          return;
        }
      }
      iVar5 = iVar5 + 1;
      pcVar4 = pcVar4 + 8;
    } while (iVar5 < iVar2);
  }
  if ((*in_ECX == '\x03') &&
     ((((((cVar1 = in_ECX[1], cVar1 == '\x0f' || (cVar1 == '\x10')) || (cVar1 == '\x11')) ||
        ((cVar1 == '\x05' || (cVar1 == '\n')))) ||
       ((cVar1 == '\v' || ((cVar1 == '\x12' || (cVar1 == '\b')))))) ||
      ((cVar1 == '\x06' || (cVar1 == '\a')))))) {
    iVar5 = 0x20;
  }
  else {
    iVar5 = 0x10;
  }
  if (iVar2 < iVar5) {
    in_ECX[iVar2 * 8 + 0x14] = param_1;
    in_ECX[iVar2 * 8 + 0x15] = param_2;
    in_ECX[iVar2 * 8 + 0x16] = param_3;
    in_ECX[*(int *)(in_ECX + 0x114) * 8 + 0x17] = param_4;
    *(undefined4 *)(in_ECX + *(int *)(in_ECX + 0x114) * 8 + 0x18) = param_5;
    *(int *)(in_ECX + 0x114) = *(int *)(in_ECX + 0x114) + 1;
  }
  return;
}


/* FUN_004c6cc0 @ 004c6cc0  kind=gamemisc  attributed-by=caller-vote  size=322 */

void FUN_004c6cc0(float *param_1)

{
  float *pfVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  float fVar5;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar2 = 0;
  iVar3 = 0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  if (0 < *(int *)(in_ECX + 0x114)) {
    pbVar4 = (byte *)(in_ECX + 0x17);
    do {
      if (0x7f < *pbVar4) {
        iVar2 = iVar2 + 1;
        local_18 = 0x3f800000;
        local_14 = 0x3f800000;
        local_10 = 0x3f800000;
        local_c = 0x3f800000;
        pfVar1 = (float *)FUN_004c7250(local_28,*pbVar4,&local_18,0x3f800000);
        *param_1 = *param_1 + *pfVar1;
        param_1[1] = pfVar1[1] + param_1[1];
        param_1[2] = pfVar1[2] + param_1[2];
        param_1[3] = pfVar1[3] + param_1[3];
      }
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 8;
    } while (iVar3 < *(int *)(in_ECX + 0x114));
    if (0 < iVar2) {
      fVar5 = 1.0 / (float)iVar2;
      *param_1 = *param_1 * fVar5;
      param_1[1] = fVar5 * param_1[1];
      param_1[2] = param_1[2] * fVar5;
      param_1[3] = fVar5 * param_1[3];
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c6f20 @ 004c6f20  kind=gamemisc  attributed-by=caller-vote  size=288 */

void FUN_004c6f20(undefined4 param_1)

{
  uint uVar1;
  undefined1 *in_ECX;
  undefined4 extraout_EDX;
  char cVar2;
  
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  switch(*in_ECX) {
  case 2:
    FUN_0040ee70(in_ECX);
    cVar2 = in_ECX[8];
    if (cVar2 != '\x02') {
      FUN_004c6f20(param_1);
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc,extraout_EDX,cVar2);
      return;
    }
    break;
  case 3:
    switch(in_ECX[1]) {
    case 0:
    case 1:
    case 2:
    case 0xd:
    case 0xf:
    case 0x10:
    case 0x11:
switchD_004c700c_caseD_1:
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    case 3:
    case 4:
    case 5:
switchD_004c700c_caseD_1b:
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    case 6:
    case 7:
    case 8:
    case 0xe:
switchD_004c700c_caseD_13:
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    case 10:
    case 0xb:
    case 0xc:
switchD_004c700c_caseD_17:
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    }
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    switch(in_ECX[0xd]) {
    case 1:
    case 5:
    case 0x12:
    case 0x16:
      goto switchD_004c700c_caseD_1;
    case 0x13:
    case 0x1a:
      goto switchD_004c700c_caseD_13;
    case 0x17:
    case 0x19:
      goto switchD_004c700c_caseD_17;
    case 0x1b:
      goto switchD_004c700c_caseD_1b;
    }
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c71c0 @ 004c71c0  kind=gamemisc  attributed-by=caller-vote  size=139 */

void FUN_004c71c0(undefined4 *param_1)

{
  char *in_ECX;
  
  if (*in_ECX == '\v') {
    if (in_ECX[1] == '\x13') {
      *param_1 = 0x3dcccccd;
      param_1[1] = 0x3e99999a;
      param_1[2] = 0x3e99999a;
      return;
    }
  }
  else if (*in_ECX == '\x12') {
    if (in_ECX[1] == '\0') {
      *param_1 = 0x3f19999a;
      param_1[1] = 0x3f19999a;
      param_1[2] = 0x3e4ccccd;
      return;
    }
    if (in_ECX[1] == '\x01') {
      *param_1 = 0;
      param_1[1] = 0x3f19999a;
      param_1[2] = 0x3e4ccccd;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* FUN_004c79b0 @ 004c79b0  kind=gamemisc  attributed-by=caller-vote  size=221 */

void FUN_004c79b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  int local_20 [7];
  
  local_20[6] = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  iVar1 = *(int *)(in_ECX + 0x114);
  if (iVar1 < 1) {
LAB_004c7a5c:
    __security_check_cookie(local_20[6] ^ (uint)&stack0xfffffffc);
    return;
  }
  local_20[3] = param_1;
  local_20[4] = param_2;
  local_20[5] = param_3;
  pcVar5 = (char *)(in_ECX + 0x15);
  do {
    local_20[0] = (int)pcVar5[-1];
    local_20[1] = (int)*pcVar5;
    local_20[2] = (int)pcVar5[1];
    iVar2 = 0;
    while (*(int *)((int)local_20 + iVar2 + 0xc) == *(int *)((int)local_20 + iVar2)) {
      iVar2 = iVar2 + 4;
      if (0xb < iVar2) {
        if (iVar4 < iVar1 + -1) {
          puVar3 = (undefined1 *)(in_ECX + 0x15 + iVar4 * 8);
          do {
            puVar3[-1] = puVar3[7];
            *puVar3 = puVar3[8];
            puVar3[1] = puVar3[9];
            puVar3[2] = puVar3[10];
            *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar3 + 0xb);
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 8;
          } while (iVar4 < *(int *)(in_ECX + 0x114) + -1);
        }
        *(int *)(in_ECX + 0x114) = *(int *)(in_ECX + 0x114) + -1;
        goto LAB_004c7a5c;
      }
    }
    iVar4 = iVar4 + 1;
    pcVar5 = pcVar5 + 8;
    if (iVar1 <= iVar4) {
      __security_check_cookie(local_20[6] ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


/* FUN_004c7a90 @ 004c7a90  kind=gamemisc  attributed-by=caller-vote  size=87 */

float10 FUN_004c7a90(void)

{
  char *in_ECX;
  float10 fVar1;
  
  if ((*in_ECX == '\x01') && ((in_ECX[1] == '\x04' || (in_ECX[1] == '\x06')))) {
    fVar1 = (float10)FUN_00445ff0((float)(int)*(short *)(in_ECX + 0x10),in_ECX[0xc]);
    return (float10)((float)fVar1 * 1.5);
  }
  return (float10)0;
}


/* FUN_004c95a0 @ 004c95a0  kind=gamemisc  attributed-by=caller-vote  size=154 */

void FUN_004c95a0(int param_1,int param_2,Widget_vftable_for_NamedObject *param_3)

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
                    /* inlined constructor: cube::MapOverlayWidget::MapOverlayWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_28);
  if (7 < local_14) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_28[0]);
  }
  in_ECX[1].vftablePtr = param_3;
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::MapOverlayWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::MapOverlayWidget::vftable_for_Deformer;
  ExceptionList = local_10;
  return;
}


/* FUN_004cc7d0 @ 004cc7d0  kind=gamemisc  attributed-by=caller-vote  size=43 */

int FUN_004cc7d0(int param_1)

{
  uint3 uVar1;
  int *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  param_1 = param_1 - (int)in_ECX;
  do {
    uVar1 = (uint3)((uint)*in_ECX >> 8);
    if (*in_ECX != *(int *)(param_1 + (int)in_ECX)) {
      return CONCAT31(uVar1,1);
    }
    iVar2 = iVar2 + 1;
    in_ECX = in_ECX + 1;
  } while (iVar2 < 3);
  return (uint)uVar1 << 8;
}


/* FUN_004ce180 @ 004ce180  kind=gamemisc  attributed-by=caller-vote  size=184 */

void FUN_004ce180(int param_1,int param_2,undefined4 param_3)

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
                    /* inlined constructor: cube::ObjectiveWidget::ObjectiveWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_28);
  if (7 < local_14) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_28[0]);
  }
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::ObjectiveWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::ObjectiveWidget::vftable_for_Deformer;
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0x0;
  in_ECX[1].Object_data.offset_0x0 = 0;
  in_ECX[1].Object_data.offset_0x4 = (int *)0x0;
  *(undefined4 *)&in_ECX[1].offset_0x0 = param_3;
  ExceptionList = local_10;
  return;
}


/* FUN_004ce660 @ 004ce660  kind=gamemisc  attributed-by=caller-vote  size=86 */

void FUN_004ce660(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0x32;
  in_ECX[5] = 100;
  in_ECX[6] = 100;
  in_ECX[7] = 0x32;
  in_ECX[8] = 0x50;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 9;
  return;
}


/* FUN_004cf220 @ 004cf220  kind=gamemisc  attributed-by=caller-vote  size=123 */

void FUN_004cf220(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  if (*(int *)(in_ECX + 0x40) != 0) {
    puVar1 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar1 = (undefined4 *)*param_1;
    }
    iVar2 = FUN_00428db0(0,*(undefined4 *)(*(int *)(in_ECX + 0x40) + 0x1c),puVar1,param_1[4]);
    if (iVar2 == 0) {
      FUN_004cf2a0(*(undefined4 *)(in_ECX + 0x40),param_2,param_3,param_4,param_5,param_6,1);
    }
  }
  piVar3 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar3 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_004cf220(param_1,param_2,param_3,param_4,param_5,param_6);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
  }
  return;
}


/* FUN_004cf2a0 @ 004cf2a0  kind=gamemisc  attributed-by=caller-vote  size=252 */

void __thiscall
FUN_004cf2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1e48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)FUN_00468910(&param_2);
  if ((void *)*puVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar3);
  }
  puVar4 = operator_new(0x18);
  uVar2 = param_6;
  uVar1 = param_3;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(char *)(puVar4 + 1) = (char)param_7;
                    /* inlined constructor:
                       plasma::Widget::MemberFunctionConnection<cube::OptionsWidget>::MemberFunctionConnection<cube::OptionsWidget>
                        */
    *puVar4 = &plasma::Widget::MemberFunctionConnection<cube::OptionsWidget>::vftable;
    puVar4[2] = param_3;
    puVar4[4] = param_4;
    puVar4[5] = param_5;
  }
  *puVar3 = puVar4;
  if ((char)param_6 != '\0') {
    FUN_00629140(&local_1c);
    local_8 = 0;
    piVar5 = (int *)*local_1c;
    if (piVar5 != local_1c) {
      do {
        FUN_004cf2a0(piVar5[2],param_2,uVar1,param_4,param_5,uVar2,param_7);
        piVar5 = (int *)*piVar5;
      } while (piVar5 != local_1c);
    }
    piVar5 = (int *)*local_1c;
    *local_1c = (int)local_1c;
    local_1c[1] = (int)local_1c;
    local_18 = 0;
    if (piVar5 != local_1c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(piVar5);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_004cf3c0 @ 004cf3c0  kind=gamemisc  attributed-by=caller-vote  size=3610 */

void FUN_004cf3c0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  Widget_vftable_for_Deformer *pWVar3;
  int iVar4;
  void *pvVar5;
  Widget *in_ECX;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8786;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_14 = uVar1;
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
                    /* inlined constructor: cube::OptionsWidget::OptionsWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_2c);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::OptionsWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::OptionsWidget::vftable_for_Deformer;
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0x0;
  in_ECX[1].Object_data.offset_0x0 = 0;
  in_ECX[1].Object_data.offset_0x4 = (int *)0x0;
  local_8._0_1_ = 3;
  *(undefined4 *)&in_ECX[1].offset_0x0 = param_3;
  FUN_004ce660(uVar1);
  *(undefined4 *)&in_ECX[1].field_0xa4 = 0;
  uVar2 = FUN_00636040(param_2);
  *(undefined4 *)&in_ECX[1].field_0x10 = uVar2;
  uVar2 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"leftbutton",10);
  local_8._0_1_ = 4;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d4570,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  *(undefined4 *)&in_ECX[1].field_0x14 = uVar2;
  uVar2 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"rightbutton",0xb);
  local_8._0_1_ = 5;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d45b0,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  *(undefined4 *)&in_ECX[1].field_0x18 = uVar2;
  uVar2 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"leftbutton",10);
  local_8._0_1_ = 6;
  FUN_004cf220(local_2c,2,in_ECX,FUN_004d4cb0,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  in_ECX[1].offset_0x10 = uVar2;
  uVar2 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"rightbutton",0xb);
  local_8._0_1_ = 7;
  FUN_004cf220(local_2c,2,in_ECX,FUN_004d4d20,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  in_ECX[1].offset_0x14 = uVar2;
  uVar2 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"leftbutton",10);
  local_8._0_1_ = 8;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d4430,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  pWVar3 = (Widget_vftable_for_Deformer *)FUN_00636040(param_2);
  in_ECX[1].vftablePtr = pWVar3;
  uVar2 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"rightbutton",0xb);
  local_8._0_1_ = 9;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d4450,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  in_ECX[1].offset_0x1c = uVar2;
  uVar2 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"leftbutton",10);
  local_8._0_1_ = 10;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d4690,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  in_ECX[1].offset_0x20 = uVar2;
  uVar2 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"rightbutton",0xb);
  local_8._0_1_ = 0xb;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d46b0,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  iVar4 = FUN_00636040(param_2);
  in_ECX[1].offset_0x24 = iVar4;
  uVar2 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"leftbutton",10);
  local_8._0_1_ = 0xc;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d4da0,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  pvVar5 = (void *)FUN_00636040(param_2);
  in_ECX[1].offset_0x28 = pvVar5;
  uVar2 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"rightbutton",0xb);
  local_8._0_1_ = 0xd;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d4dc0,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  iVar4 = FUN_00636040(param_2);
  in_ECX[1].offset_0x2c = iVar4;
  uVar2 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"leftbutton",10);
  local_8._0_1_ = 0xe;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d4610,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  iVar4 = FUN_00636040(param_2);
  in_ECX[1].offset_0x30 = iVar4;
  uVar2 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"rightbutton",0xb);
  local_8._0_1_ = 0xf;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d4630,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  in_ECX[1].offset_0x34 = uVar2;
  uVar2 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"leftbutton",10);
  local_8._0_1_ = 0x10;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d44d0,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  in_ECX[1].offset_0x38 = uVar2;
  uVar2 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"rightbutton",0xb);
  local_8._0_1_ = 0x11;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d44f0,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  in_ECX[1].offset_0x3c = uVar2;
  uVar2 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"leftbutton",10);
  local_8._0_1_ = 0x12;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d4490,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  iVar4 = FUN_00636040(param_2);
  in_ECX[1].offset_0x40 = iVar4;
  uVar2 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"rightbutton",0xb);
  local_8._0_1_ = 0x13;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d44b0,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  *(undefined4 *)&in_ECX[1].offset_0x44 = uVar2;
  uVar2 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  FUN_0040eb60(L"leftbutton");
  local_8._0_1_ = 0x14;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d45d0,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  *(undefined4 *)&in_ECX[1].offset_0x48 = uVar2;
  uVar2 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  FUN_0040eb60(L"rightbutton");
  local_8._0_1_ = 0x15;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d45d0,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  in_ECX[1].offset_0x4c = uVar2;
  uVar2 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  FUN_0040eb60(L"leftbutton");
  local_8._0_1_ = 0x16;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d4530,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  in_ECX[1].offset_0x50 = uVar2;
  uVar2 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  FUN_0040eb60(L"rightbutton");
  local_8._0_1_ = 0x17;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d4550,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  in_ECX[1].offset_0x54 = uVar2;
  uVar2 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  FUN_0040eb60(L"leftbutton");
  local_8._0_1_ = 0x18;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d45f0,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_00636040(param_2);
  in_ECX[1].offset_0x58 = uVar2;
  uVar2 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
  FUN_00636b70(uVar2);
  uVar2 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
  FUN_006368e0(uVar2);
  FUN_0040eb60(L"rightbutton");
  local_8._0_1_ = 0x19;
  FUN_004cf220(local_2c,2,in_ECX,&LAB_004d4600,0,1);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar2 = FUN_006326d0(param_2);
  in_ECX[1].offset_0x5c = uVar2;
  uVar2 = FUN_006326d0(param_2);
  in_ECX[1].offset_0x60 = uVar2;
  uVar2 = FUN_006326d0(param_2);
  in_ECX[1].offset_0x64 = uVar2;
  FUN_0062c570(0x42dc0000,0x41700000,1);
  FUN_0040eb60(L"Apply");
  local_8._0_1_ = 0x1a;
  FUN_00636ad0(local_2c);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_0062c570(0x42dc0000,0x41700000,1);
  FUN_0040eb60(&DAT_007033d0);
  local_8._0_1_ = 0x1b;
  FUN_00636ad0(local_2c);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_0062c570(0x42dc0000,0x41700000,1);
  FUN_0040eb60(L"Cancel");
  local_8._0_1_ = 0x1c;
  FUN_00636ad0(local_44);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  FUN_004cf2a0(*(undefined4 *)(in_ECX[1].offset_0x5c + 0x40),2,in_ECX,&LAB_004d4470,0,1,1);
  FUN_004cf2a0(*(undefined4 *)(in_ECX[1].offset_0x60 + 0x40),2,in_ECX,FUN_004d4650,0,1,1);
  FUN_004cf2a0(*(undefined4 *)(in_ECX[1].offset_0x64 + 0x40),2,in_ECX,&LAB_004d4510,0,1,1);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d4de0 @ 004d4de0  kind=gamemisc  attributed-by=caller-vote  size=294 */

void FUN_004d4de0(undefined8 *param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_10 [3];
  
  local_10[2] = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  *(undefined8 *)(in_ECX + 0x1d4) = *param_1;
  *(undefined8 *)(in_ECX + 0x1dc) = param_1[1];
  *(undefined8 *)(in_ECX + 0x1e4) = param_1[2];
  *(undefined8 *)(in_ECX + 0x1ec) = param_1[3];
  *(undefined8 *)(in_ECX + 500) = param_1[4];
  *(undefined8 *)(in_ECX + 0x1fc) = param_1[5];
  *(undefined4 *)(in_ECX + 0x204) = 0;
  iVar3 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x164) - *(int *)(in_ECX + 0x160) & 0xfffffff8U)) {
    piVar4 = *(int **)(in_ECX + 0x160);
    do {
      local_10[0] = *(int *)((int)param_1 + 4);
      local_10[1] = *(undefined4 *)(param_1 + 1);
      iVar1 = 0;
      piVar2 = piVar4;
      do {
        if (*piVar2 != local_10[iVar1]) goto LAB_004d4e97;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < 2);
      *(int *)(in_ECX + 0x204) = iVar3;
LAB_004d4e97:
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar3 < *(int *)(in_ECX + 0x164) - (int)*(int **)(in_ECX + 0x160) >> 3);
  }
  iVar3 = *(int *)(in_ECX + 0x160);
  if (iVar3 != *(int *)(in_ECX + 0x164)) {
    *(undefined4 *)(in_ECX + 0x1d8) =
         *(undefined4 *)
          (iVar3 + (*(uint *)(in_ECX + 0x204) % (uint)(*(int *)(in_ECX + 0x164) - iVar3 >> 3)) * 8);
    *(undefined4 *)(in_ECX + 0x1dc) =
         *(undefined4 *)
          (iVar3 + 4 +
          (*(uint *)(in_ECX + 0x204) % (uint)(*(int *)(in_ECX + 0x164) - iVar3 >> 3)) * 8);
  }
  __security_check_cookie(local_10[2] ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d4f10 @ 004d4f10  kind=gamemisc  attributed-by=caller-vote  size=252 */

void FUN_004d4f10(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  Widget *in_ECX;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1a90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
                    /* inlined constructor: cube::PreviewWidget::PreviewWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::PreviewWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::PreviewWidget::vftable_for_Deformer;
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0x0;
  *(undefined1 *)&in_ECX[1].Object_data.offset_0x0 = 0;
  in_ECX[1].Object_data.offset_0x4 = (int *)0xffffffff;
  *(undefined4 *)&in_ECX[1].offset_0x0 = 0;
  *(undefined4 *)&in_ECX[1].field_0x10 = 0xffffffff;
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  *(undefined4 *)&in_ECX[1].field_0x14 = 0;
  *(undefined4 *)&in_ECX[1].field_0x18 = 0;
  uVar1 = FUN_0046d550(0,0);
  *(undefined4 *)&in_ECX[1].field_0x14 = uVar1;
  in_ECX[1].offset_0x10 = param_3;
  ExceptionList = local_10;
  return;
}


/* FUN_004dc470 @ 004dc470  kind=gamemisc  attributed-by=caller-vote  size=92 */

void FUN_004dc470(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e90a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004dc750(*(undefined4 *)*in_ECX,param_1,param_2,param_2);
  ExceptionList = local_10;
  return;
}


/* FUN_004dc4e0 @ 004dc4e0  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_004dc4e0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e90c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00608a90(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0xaaaaaa9) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004dc5b0 @ 004dc5b0  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_004dc5b0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e90e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00451d00(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0x7fffffe) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004dc750 @ 004dc750  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_004dc750(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9120;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00452190(param_1,*(undefined4 *)(param_1 + 4),param_2);
    if (*(int *)(in_ECX + 4) == 0xc30c2f) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = param_2 + 0x148;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004dc820 @ 004dc820  kind=gamemisc  attributed-by=caller-vote  size=132 */

undefined4 * FUN_004dc820(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9148;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = *(undefined4 *)(param_1 + 0x60);
  in_ECX[1] = *(undefined4 *)(param_1 + 100);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  uVar3 = FUN_0046d8d0(0,0);
  in_ECX[2] = uVar3;
  local_8 = 0;
  FUN_004dc470(uVar2,uVar1);
  ExceptionList = local_10;
  return in_ECX;
}


/* FUN_004dc8b0 @ 004dc8b0  kind=gamemisc  attributed-by=caller-vote  size=43 */

void FUN_004dc8b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  FUN_00468670(param_2);
  return;
}


/* FUN_004dd5e0 @ 004dd5e0  kind=gamemisc  attributed-by=caller-vote  size=86 */

void FUN_004dd5e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int in_ECX;
  
  FUN_00601cb0();
  FUN_004544d0(*param_1,**(undefined4 **)(in_ECX + 0x3c),*(undefined4 **)(in_ECX + 0x3c),param_1);
  puVar1 = *(undefined4 **)(in_ECX + 0x3c);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(in_ECX + 0x3c) + 4) = *(int *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = 0;
  if (pvVar2 != *(void **)(in_ECX + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  FUN_00601e90();
  return;
}


/* FUN_004dd640 @ 004dd640  kind=gamemisc  attributed-by=caller-vote  size=86 */

void FUN_004dd640(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int in_ECX;
  
  FUN_00601cb0();
  FUN_00453ff0(*param_1,**(undefined4 **)(in_ECX + 0x44),*(undefined4 **)(in_ECX + 0x44),param_1);
  puVar1 = *(undefined4 **)(in_ECX + 0x44);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(in_ECX + 0x44) + 4) = *(int *)(in_ECX + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = 0;
  if (pvVar2 != *(void **)(in_ECX + 0x44)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  FUN_00601e90();
  return;
}


/* FUN_004dd6a0 @ 004dd6a0  kind=gamemisc  attributed-by=caller-vote  size=86 */

void FUN_004dd6a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int in_ECX;
  
  FUN_00601cb0();
  FUN_004540c0(*param_1,**(undefined4 **)(in_ECX + 0x34),*(undefined4 **)(in_ECX + 0x34),param_1);
  puVar1 = *(undefined4 **)(in_ECX + 0x34);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(in_ECX + 0x34) + 4) = *(int *)(in_ECX + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = 0;
  if (pvVar2 != *(void **)(in_ECX + 0x34)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  FUN_00601e90();
  return;
}


/* FUN_004dd700 @ 004dd700  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_004dd700(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00452060(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x2aaaaa9) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004dd750 @ 004dd750  kind=gamemisc  attributed-by=caller-vote  size=183 */

void FUN_004dd750(int param_1,int param_2,int param_3)

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
                    /* inlined constructor: cube::SkillWidget::SkillWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_28);
  if (7 < local_14) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_28[0]);
  }
  in_ECX[1].offset_0x24 = param_3;
  in_ECX->vftablePtr = (Widget_vftable_for_NamedObject *)&cube::SkillWidget::vftable_for_NamedObject
  ;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::SkillWidget::vftable_for_Deformer;
  in_ECX[1].offset_0x20 = 0;
  memset(in_ECX + 1,0,0x2c);
  ExceptionList = local_10;
  return;
}


/* FUN_004dfac0 @ 004dfac0  kind=gamemisc  attributed-by=caller-vote  size=15 */

int FUN_004dfac0(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x20 + *in_ECX;
}


/* FUN_004e0070 @ 004e0070  kind=gamemisc  attributed-by=caller-vote  size=9 */

int FUN_004e0070(void)

{
  int *in_ECX;
  
  return in_ECX[1] - *in_ECX >> 5;
}


/* FUN_004e0080 @ 004e0080  kind=gamemisc  attributed-by=caller-vote  size=176 */

int FUN_004e0080(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9409;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00630a40();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if ((undefined2 *)(iVar1 + 0x10) != (undefined2 *)0x0) {
    *(undefined4 *)(iVar1 + 0x24) = 7;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined2 *)(iVar1 + 0x10) = 0;
    FUN_0040f680(param_1,0,0xffffffff);
    *(undefined4 *)(iVar1 + 0x3c) = 7;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined2 *)(iVar1 + 0x28) = 0;
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_0040f680(param_1 + 0x18,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_004e0300 @ 004e0300  kind=gamemisc  attributed-by=caller-vote  size=162 */

int FUN_004e0300(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e94c1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0046d850(param_1,param_2);
  local_8 = 1;
  if ((undefined2 *)(iVar1 + 8) != (undefined2 *)0x0) {
    *(undefined4 *)(iVar1 + 0x1c) = 7;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined2 *)(iVar1 + 8) = 0;
    FUN_0040f680(param_3,0,0xffffffff);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_3 + 0x24);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_004e03c0 @ 004e03c0  kind=gamemisc  attributed-by=caller-vote  size=116 */

void FUN_004e03c0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  uVar7 = FUN_004e0440(*(undefined4 *)(*param_1 + 4),iVar2,param_2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  piVar3 = (int *)*in_ECX;
  in_ECX[1] = param_1[1];
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*in_ECX + 8) = *in_ECX;
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0xd);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*in_ECX + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*in_ECX + 8) = iVar2;
  return;
}


/* FUN_004e0440 @ 004e0440  kind=gamemisc  attributed-by=caller-vote  size=159 */

undefined4 * FUN_004e0440(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e94e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)*in_ECX;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_004e0080(param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_004e0440(*param_1,puVar1,param_3);
    *puVar1 = uVar2;
    uVar2 = FUN_004e0440(param_1[2],puVar1,param_3);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_004e42c0 @ 004e42c0  kind=gamemisc  attributed-by=caller-vote  size=130 */

undefined4 * FUN_004e42c0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  if ((param_2 == *(int **)*in_ECX) && (param_3 == (int *)*in_ECX)) {
    FUN_0046f990();
    *param_1 = *in_ECX;
    return param_1;
  }
  do {
    piVar1 = param_2;
    if (piVar1 == param_3) {
      *param_1 = param_3;
      return param_1;
    }
    param_2 = (int *)*piVar1;
  } while (piVar1 == (int *)*in_ECX);
  *(int **)piVar1[1] = (int *)*piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
  if ((uint)piVar1[7] < 8) {
    piVar1[7] = 7;
    piVar1[6] = 0;
    *(undefined2 *)(piVar1 + 2) = 0;
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)piVar1[2]);
}


/* FUN_004e4350 @ 004e4350  kind=gamemisc  attributed-by=caller-vote  size=1718 */

void FUN_004e4350(int param_1,undefined4 param_2,int param_3,int *param_4,int *param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  short **ppsVar5;
  short *psVar6;
  int iVar7;
  int *piVar8;
  short *psVar9;
  int *piVar10;
  uint in_stack_ffffff0c;
  short *local_c0;
  short *local_bc;
  uint local_b8;
  short *local_b4;
  int *local_b0;
  int local_ac;
  int *local_a8;
  int local_a4;
  void *local_a0;
  short *local_9c;
  undefined1 local_95;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9aeb;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_ac = param_1;
  local_a4 = param_3;
  local_a8 = param_4;
  local_b0 = param_5;
  if (param_3 == 0) goto LAB_004e49f7;
  if ((*(int *)(param_3 + 0x10) != 0) &&
     (piVar10 = (int *)**(int **)(param_3 + 0xc), piVar10 != *(int **)(param_3 + 0xc))) {
    do {
      iVar3 = FUN_004e3790(piVar10 + 4);
      if (iVar3 != *local_a8) {
        puVar4 = (undefined4 *)(iVar3 + 0x10);
        if (7 < *(uint *)(iVar3 + 0x24)) {
          puVar4 = (undefined4 *)*puVar4;
        }
        FUN_00428db0(0,piVar10[8],puVar4,*(undefined4 *)(iVar3 + 0x20));
      }
      if (*(char *)((int)piVar10 + 0xd) == '\0') {
        piVar8 = (int *)piVar10[2];
        if (*(char *)((int)piVar8 + 0xd) == '\0') {
          cVar2 = *(char *)(*piVar8 + 0xd);
          piVar10 = piVar8;
          piVar8 = (int *)*piVar8;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*piVar8 + 0xd);
            piVar10 = piVar8;
            piVar8 = (int *)*piVar8;
          }
        }
        else {
          cVar2 = *(char *)(piVar10[1] + 0xd);
          piVar1 = (int *)piVar10[1];
          piVar8 = piVar10;
          while ((piVar10 = piVar1, cVar2 == '\0' && (piVar8 == (int *)piVar10[2]))) {
            cVar2 = *(char *)(piVar10[1] + 0xd);
            piVar1 = (int *)piVar10[1];
            piVar8 = piVar10;
          }
        }
      }
    } while (piVar10 != *(int **)(param_3 + 0xc));
  }
  local_95 = 0;
  if (*(int *)(param_3 + 8) != 0) {
    local_b8 = local_b8 & 0xffffff00;
    piVar10 = (int *)**(int **)(param_3 + 4);
    if (piVar10 == *(int **)(param_3 + 4)) goto LAB_004e49f7;
    do {
      local_bc = (short *)*local_a8;
      cVar2 = *(char *)((int)*(short **)(local_bc + 2) + 0xd);
      local_b4 = local_bc;
      psVar9 = *(short **)(local_bc + 2);
      psVar6 = local_bc;
      while (local_bc = psVar6, cVar2 == '\0') {
        if ((uint)piVar10[9] < 8) {
          piVar8 = piVar10 + 4;
        }
        else {
          piVar8 = (int *)piVar10[4];
        }
        iVar3 = FUN_00428db0(0,*(undefined4 *)(psVar9 + 0x10),piVar8,piVar10[8]);
        if (iVar3 < 0) {
          psVar6 = *(short **)(psVar9 + 4);
        }
        else {
          psVar6 = *(short **)psVar9;
          local_b4 = psVar9;
        }
        cVar2 = *(char *)((int)psVar6 + 0xd);
        psVar9 = psVar6;
        psVar6 = local_bc;
      }
      if (local_b4 == (short *)*local_a8) {
LAB_004e4519:
        local_9c = (short *)*local_a8;
        ppsVar5 = &local_9c;
      }
      else {
        psVar9 = local_b4 + 8;
        if (7 < *(uint *)(local_b4 + 0x12)) {
          psVar9 = *(short **)psVar9;
        }
        iVar3 = FUN_00428db0(0,piVar10[8],psVar9,*(undefined4 *)(local_b4 + 0x10));
        if (iVar3 < 0) goto LAB_004e4519;
        local_c0 = local_b4;
        ppsVar5 = &local_c0;
      }
      local_b8 = local_b8 & 0xff;
      if (*ppsVar5 != psVar6) {
        local_b8 = 1;
      }
      if (*(char *)((int)piVar10 + 0xd) == '\0') {
        piVar8 = (int *)piVar10[2];
        if (*(char *)((int)piVar8 + 0xd) == '\0') {
          cVar2 = *(char *)(*piVar8 + 0xd);
          piVar10 = piVar8;
          piVar8 = (int *)*piVar8;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*piVar8 + 0xd);
            piVar10 = piVar8;
            piVar8 = (int *)*piVar8;
          }
        }
        else {
          cVar2 = *(char *)(piVar10[1] + 0xd);
          piVar1 = (int *)piVar10[1];
          piVar8 = piVar10;
          while ((piVar10 = piVar1, cVar2 == '\0' && (piVar8 == (int *)piVar10[2]))) {
            cVar2 = *(char *)(piVar10[1] + 0xd);
            piVar1 = (int *)piVar10[1];
            piVar8 = piVar10;
          }
        }
      }
    } while (piVar10 != *(int **)(local_a4 + 4));
    if ((char)local_b8 == '\0') goto LAB_004e49f7;
    local_95 = 1;
    param_3 = local_a4;
  }
  piVar10 = local_b0;
  if (*(int *)(param_3 + 0x2c) != 0) {
    psVar9 = (short *)(param_3 + 0x1c);
    local_9c = psVar9;
    psVar6 = (short *)FUN_00428db0(0,*(undefined4 *)(param_3 + 0x2c),&DAT_006fd728,1);
    iVar3 = local_a4;
    if (psVar6 == (short *)0x0) {
      local_9c = psVar6;
      local_a0 = (void *)FUN_0046d850(0,0);
      local_8 = 0;
      FUN_00486780(&local_a0);
      local_8 = 0xffffffff;
      FUN_0046f990();
                    /* WARNING: Subroutine does not return */
      operator_delete(local_a0);
    }
    iVar7 = *(int *)(local_a4 + 0x34);
    local_24 = 0x3f8000003f800000;
    local_1c = 0x3f8000003f800000;
    if ((iVar7 != 0) &&
       (piVar10 = (int *)**(int **)(iVar7 + 0x14), piVar10 != *(int **)(iVar7 + 0x14))) {
      do {
        iVar7 = FUN_00428db0(0,piVar10[8],L"$creature",9);
        if (iVar7 == 0) {
          local_54 = 0x3f800000;
          uStack_50 = 0x3e99999a;
          local_24 = 0x3e99999a3f800000;
          local_4c = 0x3e99999a;
          uStack_48 = 0x3f800000;
          local_1c = 0x3f8000003e99999a;
        }
        iVar7 = FUN_00428db0(0,piVar10[8],L"$name",5);
        if (iVar7 == 0) {
          local_34 = 0x3f19999a;
          uStack_30 = 0x3e99999a;
          local_24 = 0x3e99999a3f19999a;
          local_2c = 0x3f800000;
          uStack_28 = 0x3f800000;
          local_1c = 0x3f8000003f800000;
        }
        iVar7 = FUN_00428db0(0,piVar10[8],L"$item",5);
        if (iVar7 == 0) {
          local_44 = 0x3e99999a;
          uStack_40 = 0x3e99999a;
          local_24 = 0x3e99999a3e99999a;
          local_3c = 0x3f800000;
          uStack_38 = 0x3f800000;
          local_1c = 0x3f8000003f800000;
        }
        iVar7 = FUN_00428db0(0,piVar10[8],L"$object",7);
        if (iVar7 == 0) {
          local_74 = 0x3f800000;
          uStack_70 = 0x3f000000;
          local_24 = 0x3f0000003f800000;
          local_6c = 0x3e99999a;
          uStack_68 = 0x3f800000;
          local_1c = 0x3f8000003e99999a;
        }
        iVar7 = FUN_00428db0(0,piVar10[8],L"$zone",5);
        if (iVar7 == 0) {
          local_94 = 0x3e99999a;
          uStack_90 = 0x3f800000;
          local_24 = 0x3f8000003e99999a;
          local_8c = 0x3e99999a;
          uStack_88 = 0x3f800000;
          local_1c = 0x3f8000003e99999a;
        }
        iVar7 = FUN_00428db0(0,piVar10[8],L"$stress",7);
        if (iVar7 == 0) {
          local_64 = 0x3f19999a;
          uStack_60 = 0x3e99999a;
          local_24 = 0x3e99999a3f19999a;
          local_5c = 0x3f800000;
          uStack_58 = 0x3f800000;
          local_1c = 0x3f8000003f800000;
        }
        iVar7 = FUN_00428db0(0,piVar10[8],L"$number",7);
        if (iVar7 == 0) {
          local_84 = 0x3e99999a;
          uStack_80 = 0x3f800000;
          local_24 = 0x3f8000003e99999a;
          local_7c = 0x3e99999a;
          uStack_78 = 0x3f800000;
          local_1c = 0x3f8000003e99999a;
        }
        if (*(char *)((int)piVar10 + 0xd) == '\0') {
          piVar8 = (int *)piVar10[2];
          if (*(char *)((int)piVar8 + 0xd) == '\0') {
            cVar2 = *(char *)(*piVar8 + 0xd);
            piVar10 = piVar8;
            piVar8 = (int *)*piVar8;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*piVar8 + 0xd);
              piVar10 = piVar8;
              piVar8 = (int *)*piVar8;
            }
          }
          else {
            cVar2 = *(char *)(piVar10[1] + 0xd);
            piVar1 = (int *)piVar10[1];
            piVar8 = piVar10;
            while ((piVar10 = piVar1, cVar2 == '\0' && (piVar8 == (int *)piVar10[2]))) {
              cVar2 = *(char *)(piVar10[1] + 0xd);
              piVar1 = (int *)piVar10[1];
              piVar8 = piVar10;
            }
          }
        }
        psVar9 = local_9c;
      } while (piVar10 != *(int **)(*(int *)(iVar3 + 0x34) + 0x14));
    }
    piVar10 = local_b0;
    psVar6 = psVar9;
    if (7 < *(uint *)(psVar9 + 10)) {
      psVar6 = *(short **)psVar9;
    }
    if (*psVar6 == 0x40) {
      psVar6 = (short *)FUN_004e3790(psVar9);
      if (psVar6 == (short *)*piVar10) {
LAB_004e491e:
        local_9c = (short *)*piVar10;
      }
      else {
        piVar8 = (int *)(psVar6 + 8);
        if (7 < *(uint *)(psVar6 + 0x12)) {
          piVar8 = (int *)*piVar8;
        }
        iVar3 = FUN_00428db0(0,*(undefined4 *)(psVar9 + 8),piVar8,*(undefined4 *)(psVar6 + 0x10));
        local_9c = psVar6;
        if (iVar3 < 0) goto LAB_004e491e;
      }
      param_3 = local_a4;
      if (local_9c != (short *)*piVar10) {
        puVar4 = (undefined4 *)(in_stack_ffffff0c & 0xffff0000);
        FUN_0040f680(local_9c + 0x14,0,0xffffffff);
        std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                  ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *
                   )(*(int *)(local_ac + 4) + -8),puVar4);
        param_3 = local_a4;
      }
    }
    else {
      puVar4 = (undefined4 *)(in_stack_ffffff0c & 0xffff0000);
      FUN_0040f680(psVar9,0,0xffffffff);
      std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 (*(int *)(local_ac + 4) + -8),puVar4);
      param_3 = local_a4;
      piVar10 = local_b0;
    }
  }
  piVar8 = (int *)**(int **)(param_3 + 0x38);
  if (piVar8 != *(int **)(param_3 + 0x38)) {
    do {
      cVar2 = FUN_004e4350(local_ac,param_2,piVar8[2],local_a8,piVar10);
      if (cVar2 == '\0') break;
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)*(int *)(param_3 + 0x38));
  }
LAB_004e49f7:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004e4a20 @ 004e4a20  kind=gamemisc  attributed-by=caller-vote  size=363 */

void FUN_004e4a20(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 **ppuVar3;
  void *local_28;
  undefined4 local_24;
  int local_20 [2];
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9b38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[0] = FUN_0046d520(DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = (undefined4 *)FUN_00630a10();
  piVar2 = param_2;
  local_8._0_1_ = 1;
  if (param_2 != (int *)0x0) {
    if (local_20 != param_2) {
      FUN_00661940(*(undefined4 *)(local_20[0] + 4));
      param_2 = (int *)((uint)param_2 & 0xffffff00);
      *(int *)(local_20[0] + 4) = local_20[0];
      *(int *)local_20[0] = local_20[0];
      *(int *)(local_20[0] + 8) = local_20[0];
      local_20[1] = 0;
      FUN_004d9b10(piVar2,param_2);
    }
    ppuVar3 = (undefined4 **)(piVar2 + 2);
    if (&local_18 != ppuVar3) {
      FUN_0046dbc0(local_18[1]);
      param_2 = (int *)((uint)param_2 & 0xffffff00);
      local_18[1] = local_18;
      *local_18 = local_18;
      local_18[2] = local_18;
      local_14 = 0;
      FUN_004e03c0(ppuVar3,param_2);
    }
  }
  piVar2 = (int *)FUN_00661830(param_1);
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    if (*param_3 == param_3[1]) {
      local_24 = 0;
      local_28 = (void *)FUN_0046d850(0,0);
      local_8._0_1_ = 2;
      FUN_00486780(&local_28);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0046f990();
                    /* WARNING: Subroutine does not return */
      operator_delete(local_28);
    }
    FUN_004e4350(param_3,iVar1,*(undefined4 *)(iVar1 + 4),local_20,&local_18);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004777f0(&param_2,*local_18,local_18);
                    /* WARNING: Subroutine does not return */
  operator_delete(local_18);
}


/* FUN_004e5320 @ 004e5320  kind=gamemisc  attributed-by=caller-vote  size=609 */

void FUN_004e5320(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  float10 fVar5;
  undefined4 uVar6;
  int local_7c;
  uint local_78;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  int local_64;
  float local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  undefined4 local_2c;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_006e9c90;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_6c = param_4;
  iVar1 = param_4 + ((int)param_4 >> 0x1f & 0xffU);
  iVar2 = param_3 + ((int)param_3 >> 0x1f & 0xffU);
  local_70 = param_3;
  local_74 = param_2;
  uVar6 = 0;
  iVar1 = FUN_00487da0((int)((iVar2 >> 8) + (iVar2 >> 0x1f & 7U)) >> 3,
                       (int)((iVar1 >> 8) + (iVar1 >> 0x1f & 7U)) >> 3);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int *)(iVar1 + 0x18) != 10)) {
    local_60 = (float)(((int)local_6c >> 0x1f) << 0x10 | local_6c >> 0x10);
    local_64 = local_6c << 0x10;
    local_78 = ((int)local_70 >> 0x1f) << 0x10 | local_70 >> 0x10;
    local_7c = local_70 << 0x10;
    fVar5 = (float10)FUN_005fa4c0(&local_7c,&local_64);
    local_60 = (float)fVar5;
    if (0.2 <= local_60) {
      FUN_004e5590(param_1,param_2,iVar1);
      uVar3 = extraout_EDX;
      goto LAB_004e556d;
    }
  }
  iVar1 = FUN_00477e10(local_70,local_6c);
  if (iVar1 == 0) {
    FUN_0040eb60(&PTR_006fccac);
    uVar3 = extraout_EDX_00;
  }
  else {
    FUN_0040eb60(L"Lands of");
    local_8 = 0;
    uVar3 = FUN_004689a0(local_5c);
    local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
    local_18 = 7;
    local_1c = 0;
    FUN_0040f680(uVar3,0,0xffffffff);
    local_8._0_1_ = 2;
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    if (*(int *)(iVar1 + 0x18) < 0) {
      FUN_0040eb60(L"Ocean");
      local_8 = CONCAT31(local_8._1_3_,3);
      puVar4 = (undefined4 *)FUN_004689a0(local_44);
      if (&local_2c != puVar4) {
        FUN_0040f680(puVar4,0,0xffffffff);
      }
      local_8._0_1_ = 2;
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
    }
    local_8._0_1_ = 2;
    if (local_1c == 0) {
      FUN_0040eb60(&PTR_006fccac);
      uVar3 = extraout_EDX_01;
    }
    else {
      local_60 = 8.96831e-44;
      iVar2 = FUN_004d9950(&local_60,0,1);
      if (iVar2 == -1) {
        FUN_0040eb60(&PTR_006fccac);
        uVar3 = extraout_EDX_02;
      }
      else {
        uVar3 = FUN_005a0ed0(local_44,*(undefined4 *)(iVar1 + 0x14),0xffffffff);
        local_8._0_1_ = 4;
        FUN_00486d00(iVar2,1,uVar3,0,0xffffffff);
        if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_44[0]);
        }
        FUN_0040eaf0(&local_2c);
        uVar3 = extraout_EDX_03;
      }
    }
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
  }
LAB_004e556d:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,uVar3,uVar6);
  return;
}


/* FUN_004e5c10 @ 004e5c10  kind=gamemisc  attributed-by=caller-vote  size=115 */

undefined4 FUN_004e5c10(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_004a6ad0((int)(param_3 + (param_3 >> 0x1f & 0xffU)) >> 8,
                       (int)(param_4 + (param_4 >> 0x1f & 0xffU)) >> 8);
  if (iVar1 == 0) {
    FUN_0040eb60(&PTR_006fccac);
    return param_1;
  }
  FUN_004e5a20(param_1,param_2,iVar1,param_3,param_4);
  return param_1;
}


/* FUN_004e5c90 @ 004e5c90  kind=gamemisc  attributed-by=caller-vote  size=466 */

void FUN_004e5c90(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  Widget *in_ECX;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  undefined1 local_74 [64];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9e39;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_78 = 7;
  local_7c = 0;
  local_8c[0] = (void *)((uint)local_8c[0] & 0xffff0000);
  local_14 = uVar1;
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
                    /* inlined constructor: cube::SpeechWidget::SpeechWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_8c);
  if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_8c[0]);
  }
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::SpeechWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::SpeechWidget::vftable_for_Deformer;
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0x0;
  in_ECX[1].Object_data.offset_0x0 = 0;
  in_ECX[1].Object_data.offset_0x4 = (int *)0x0;
  *(undefined4 *)&in_ECX[1].offset_0x0 = 0;
  *(undefined4 *)&in_ECX[1].field_0x10 = 0;
  *(undefined4 *)&in_ECX[1].field_0x18 = 0;
  in_ECX[1].offset_0x10 = 0;
  in_ECX[1].offset_0x14 = 0;
  in_ECX[1].vftablePtr = (Widget_vftable_for_Deformer *)0x0;
  in_ECX[1].offset_0x1c = 0;
  in_ECX[1].offset_0x50 = 7;
  in_ECX[1].offset_0x4c = 0;
  *(undefined2 *)&in_ECX[1].offset_0x3c = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  in_ECX[1].offset_0x68 = 0x28;
  in_ECX[1].offset_0x6c = param_3;
  FUN_00423e70(uVar1);
  local_24 = 0x43660000;
  local_20 = 0x43340000;
  local_34 = 0x41200000;
  local_30 = 0x41200000;
  local_1c = 0x437a0000;
  local_18 = 0x43480000;
  local_2c = 0;
  local_28 = 0;
  FUN_00627c00(&local_2c,&local_1c,&local_34,&local_24,local_74);
  FUN_0040f7a0(L"resource1.dat",0xd);
  in_ECX[1].offset_0x54 = 0xe;
  in_ECX[1].offset_0x58 = 3;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004e6530 @ 004e6530  kind=gamemisc  attributed-by=caller-vote  size=21 */

bool FUN_004e6530(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_004e6550();
  return iVar1 <= *(int *)(in_ECX + 0x16c);
}


/* FUN_004e6550 @ 004e6550  kind=gamemisc  attributed-by=caller-vote  size=75 */

int FUN_004e6550(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = *(int *)(in_ECX + 0x170);
  if ((-1 < iVar3) && (iVar3 < *(int *)(in_ECX + 0x164) - *(int *)(in_ECX + 0x160) >> 3)) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x160) + iVar3 * 8);
    iVar3 = 0;
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      iVar3 = iVar3 + 1 + puVar2[6];
    }
    return *(int *)(in_ECX + 0x1d4) * iVar3;
  }
  return 0;
}


/* FUN_004eba80 @ 004eba80  kind=gamemisc  attributed-by=caller-vote  size=161 */

int FUN_004eba80(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9ff1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_006819e0();
  *(undefined2 *)(iVar2 + 0xc) = 0;
  local_8 = 1;
  if ((undefined4 *)(iVar2 + 0x10) != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)(iVar2 + 0x10) = *param_1;
    *puVar1 = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    uVar3 = FUN_0043c8e0(0,0);
    *puVar1 = uVar3;
    *puVar1 = param_1[1];
    param_1[1] = uVar3;
    uVar3 = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(iVar2 + 0x18) = param_1[2];
    param_1[2] = uVar3;
  }
  ExceptionList = local_10;
  return iVar2;
}


/* FUN_004ebb40 @ 004ebb40  kind=gamemisc  attributed-by=caller-vote  size=515 */

void FUN_004ebb40(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x9249247 < (uint)in_ECX[1]) {
    FUN_00681a20(param_5);
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
        goto LAB_004ebd1e;
      }
LAB_004ebc75:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_004ebc75;
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
LAB_004ebd1e:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004ebd50 @ 004ebd50  kind=gamemisc  attributed-by=caller-vote  size=525 */

undefined4 * FUN_004ebd50(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  bool bVar6;
  uint uStack_34;
  undefined1 local_24 [8];
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ea010;
  local_10 = ExceptionList;
  uStack_34 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_004ebb40(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    if (*param_3 < param_2[4]) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004ebb40(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    if (*(int *)(piVar1[2] + 0x10) < *param_3) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004ebb40(param_1,0,piVar1[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    iVar2 = param_2[4];
    local_1c = *param_3;
    bVar6 = SBORROW4(iVar2,local_1c);
    iVar3 = iVar2 - local_1c;
    puVar4 = &uStack_34;
    if (local_1c < iVar2) {
      local_18 = param_2;
      FUN_0042c740();
      if (local_18[4] < local_1c) {
        if (*(char *)(local_18[2] + 0xd) != '\0') {
          FUN_004ebb40(param_1,0,local_18,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004ebb40(param_1,1,param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      bVar6 = SBORROW4(param_2[4],local_1c);
      iVar3 = param_2[4] - local_1c;
      puVar4 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar4;
    if (bVar6 != iVar3 < 0) {
      local_18 = param_2;
      FUN_005c3ea0();
      if ((local_18 == piVar1) || (local_1c < local_18[4])) {
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          FUN_004ebb40(param_1,0,param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004ebb40(param_1,1,local_18,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_004ebf80(local_24,0,param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004ebf80 @ 004ebf80  kind=gamemisc  attributed-by=caller-vote  size=257 */

void FUN_004ebf80(undefined4 *param_1,char param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  bool bVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ea030;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  bVar3 = true;
  local_8 = 0;
  piVar4 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar1 = (int *)piVar1[1];
    do {
      piVar4 = piVar1;
      if (param_2 == '\0') {
        bVar3 = *param_3 < piVar4[4];
      }
      else {
        bVar3 = *param_3 <= piVar4[4];
      }
      if (bVar3 == false) {
        piVar1 = (int *)piVar4[2];
      }
      else {
        piVar1 = (int *)*piVar4;
      }
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    piVar1 = (int *)*in_ECX;
  }
  _param_2 = piVar4;
  if (bVar3 != false) {
    if (piVar4 == (int *)*piVar1) {
      puVar2 = (undefined4 *)&param_2;
      bVar3 = true;
      goto LAB_004ec014;
    }
    FUN_0042c740();
  }
  piVar1 = _param_2;
  if (*param_3 <= _param_2[4]) {
    FUN_00681a20(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar2 = &param_3;
LAB_004ec014:
  puVar2 = (undefined4 *)FUN_004ebb40(puVar2,bVar3,piVar4,param_3,param_4);
  *param_1 = *puVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004ec1b0 @ 004ec1b0  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_004ec1b0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (*param_1 == '\0') {
    FUN_0040c280(param_1,0);
    return;
  }
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0040c280(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}


/* FUN_004ec1f0 @ 004ec1f0  kind=gamemisc  attributed-by=caller-vote  size=261 */

undefined4 * FUN_004ec1f0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7ce0;
  local_10 = ExceptionList;
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar3 = (undefined4 *)puVar1[1];
    do {
      if ((int)puVar3[4] < *param_1) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  if ((puVar5 != puVar1) && ((int)puVar5[4] <= *param_1)) {
    return puVar5 + 5;
  }
  iVar2 = *param_1;
  local_18 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_0043c8e0(0,0);
  local_8 = 0;
  local_28 = iVar2;
  local_1c = puVar1;
  local_1c = (undefined4 *)FUN_0043c8e0(0,0);
  local_20 = 0;
  local_18 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_24 = puVar1;
  iVar2 = FUN_004eba80(&local_28);
  FUN_004ebd50(&param_1,puVar5,iVar2 + 0x10,iVar2);
  puVar1 = (undefined4 *)*local_24;
  *local_24 = local_24;
  local_24[1] = local_24;
  if (puVar1 != local_24) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar1);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_24);
}


/* FUN_0051c310 @ 0051c310  kind=gamemisc  attributed-by=caller-vote  size=174 */

void FUN_0051c310(int param_1,int param_2,int *param_3)

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
                    /* inlined constructor: cube::SpriteWidget::SpriteWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_28);
  if (7 < local_14) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_28[0]);
  }
  in_ECX[1].Object_data.offset_0x4 = param_3;
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::SpriteWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::SpriteWidget::vftable_for_Deformer;
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0x0;
  in_ECX[1].Object_data.offset_0x0 = 0;
  ExceptionList = local_10;
  return;
}


/* FUN_00583270 @ 00583270  kind=gamemisc  attributed-by=caller-vote  size=164 */

void FUN_00583270(int param_1,int param_2,int param_3)

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
                    /* inlined constructor: cube::StartMenuWidget::StartMenuWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_28);
  if (7 < local_14) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_28[0]);
  }
  in_ECX[1].Object_data.offset_0x0 = param_3;
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::StartMenuWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::StartMenuWidget::vftable_for_Deformer;
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0xffffffff;
  ExceptionList = local_10;
  return;
}


/* FUN_00583b40 @ 00583b40  kind=gamemisc  attributed-by=caller-vote  size=154 */

void FUN_00583b40(int param_1,int param_2,Widget_vftable_for_NamedObject *param_3)

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
                    /* inlined constructor: cube::StatisticsWidget::StatisticsWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_28);
  if (7 < local_14) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_28[0]);
  }
  in_ECX[1].vftablePtr = param_3;
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::StatisticsWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::StatisticsWidget::vftable_for_Deformer;
  ExceptionList = local_10;
  return;
}


/* FUN_00583cd0 @ 00583cd0  kind=gamemisc  attributed-by=caller-vote  size=159 */

void FUN_00583cd0(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 *in_ECX;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f0f50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = in_ECX[4];
  uVar3 = (int)param_2 - (int)param_1;
  if (((uVar1 <= uVar3) && (in_ECX[5] != uVar3)) && (cVar2 = FUN_00407d50(uVar3,1), cVar2 != '\0'))
  {
    in_ECX[4] = uVar1;
    if (0xf < (uint)in_ECX[5]) {
      in_ECX = (undefined4 *)*in_ECX;
    }
    *(undefined1 *)((int)in_ECX + uVar1) = 0;
  }
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    FUN_0040bff0(1,*param_1);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00583f70 @ 00583f70  kind=gamemisc  attributed-by=caller-vote  size=79 */

void FUN_00583f70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[1] = 0;
                    /* inlined constructor:
                       abstr::Method1<cube::System,int,int>::Method1<cube::System,int,int> */
    *puVar1 = &abstr::Method1<cube::System,int,int>::vftable;
    FUN_0040c600(param_1,puVar1);
    return;
  }
  FUN_0040c600(param_1,0);
  return;
}


/* FUN_00583fc0 @ 00583fc0  kind=gamemisc  attributed-by=caller-vote  size=79 */

void FUN_00583fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[1] = 0;
                    /* inlined constructor:
                       abstr::Method1<cube::System,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::Method1<cube::System,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                        */
    *puVar1 = &abstr::
               Method1<cube::System,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
               ::vftable;
    FUN_0040c600(param_1,puVar1);
    return;
  }
  FUN_0040c600(param_1,0);
  return;
}


/* FUN_00584010 @ 00584010  kind=gamemisc  attributed-by=caller-vote  size=79 */

void FUN_00584010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[1] = 0;
                    /* inlined constructor:
                       abstr::Method2<cube::System,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>::Method2<cube::System,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
                        */
    *puVar1 = &abstr::
               Method2<cube::System,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
               ::vftable;
    FUN_0040c600(param_1,puVar1);
    return;
  }
  FUN_0040c600(param_1,0);
  return;
}


/* FUN_00584060 @ 00584060  kind=gamemisc  attributed-by=caller-vote  size=79 */

void FUN_00584060(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[1] = 0;
                    /* inlined constructor:
                       abstr::Method0<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::Method0<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                        */
    *puVar1 = &abstr::
               Method0<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
               ::vftable;
    FUN_0040c600(param_1,puVar1);
    return;
  }
  FUN_0040c600(param_1,0);
  return;
}


/* FUN_005840b0 @ 005840b0  kind=gamemisc  attributed-by=caller-vote  size=79 */

void FUN_005840b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[1] = 0;
                    /* inlined constructor:
                       abstr::Method1<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int>::Method1<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int>
                        */
    *puVar1 = &abstr::
               Method1<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int>
               ::vftable;
    FUN_0040c600(param_1,puVar1);
    return;
  }
  FUN_0040c600(param_1,0);
  return;
}


/* FUN_00584100 @ 00584100  kind=gamemisc  attributed-by=caller-vote  size=79 */

void FUN_00584100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[1] = 0;
                    /* inlined constructor:
                       abstr::Method2<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>::Method2<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
                        */
    *puVar1 = &abstr::
               Method2<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
               ::vftable;
    FUN_0040c600(param_1,puVar1);
    return;
  }
  FUN_0040c600(param_1,0);
  return;
}


/* FUN_00584150 @ 00584150  kind=gamemisc  attributed-by=caller-vote  size=79 */

void FUN_00584150(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[1] = 0;
                    /* inlined constructor:
                       abstr::Method1<cube::System,void,int>::Method1<cube::System,void,int> */
    *puVar1 = &abstr::Method1<cube::System,void,int>::vftable;
    FUN_0040c600(param_1,puVar1);
    return;
  }
  FUN_0040c600(param_1,0);
  return;
}


/* FUN_005841a0 @ 005841a0  kind=gamemisc  attributed-by=caller-vote  size=79 */

void FUN_005841a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[1] = 0;
                    /* inlined constructor:
                       abstr::Method1<cube::System,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::Method1<cube::System,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                        */
    *puVar1 = &abstr::
               Method1<cube::System,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
               ::vftable;
    FUN_0040c600(param_1,puVar1);
    return;
  }
  FUN_0040c600(param_1,0);
  return;
}


/* FUN_005841f0 @ 005841f0  kind=gamemisc  attributed-by=caller-vote  size=79 */

void FUN_005841f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[1] = 0;
                    /* inlined constructor:
                       abstr::Method2<cube::System,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>::Method2<cube::System,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
                        */
    *puVar1 = &abstr::
               Method2<cube::System,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
               ::vftable;
    FUN_0040c600(param_1,puVar1);
    return;
  }
  FUN_0040c600(param_1,0);
  return;
}


/* FUN_005842d0 @ 005842d0  kind=gamemisc  attributed-by=caller-vote  size=41 */

void FUN_005842d0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  FUN_005870c0(param_1);
  return;
}


/* FUN_00584300 @ 00584300  kind=gamemisc  attributed-by=caller-vote  size=2888 */

void __thiscall FUN_00584300(void *this,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f10ea;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  abstr::Machine::Machine(this);
  *(undefined4 *)((int)this + 0x68) = 0xf;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x80) = 0xf;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x98) = 0xf;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined1 *)((int)this + 0x84) = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  *(undefined4 *)((int)this + 0x51a0) = 0;
  *(undefined4 *)((int)this + 0x51a4) = 0;
  uVar1 = FUN_0046d550(0,0);
  *(undefined4 *)((int)this + 0x51a0) = uVar1;
  local_8._0_1_ = 4;
  *(undefined1 *)((int)this + 0x51a8) = param_2;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("interface.plx",0xd);
  local_8._0_1_ = 5;
  FUN_0040d010(local_2c);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("button:click",0xc);
  local_8._0_1_ = 6;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
                    /* inlined constructor:
                       abstr::Method0<cube::System,int>::Method0<cube::System,int> */
    *puVar2 = &abstr::Method0<cube::System,int>::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00586d70;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("button:hover",0xc);
  local_8._0_1_ = 7;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
                    /* inlined constructor:
                       abstr::Method1<cube::System,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::Method1<cube::System,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                        */
    *puVar2 = &abstr::
               Method1<cube::System,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
               ::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00586e00;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("edit:enter",10);
  local_8._0_1_ = 8;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = &abstr::
               Method1<cube::System,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
               ::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00587350;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("edit:leave",10);
  local_8._0_1_ = 9;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
                    /* inlined constructor:
                       abstr::Method1<cube::System,void,int>::Method1<cube::System,void,int> */
    *puVar2 = &abstr::Method1<cube::System,void,int>::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00586730;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("scroll:up",9);
  local_8._0_1_ = 10;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
                    /* inlined constructor:
                       abstr::Method3<cube::System,void,int,int,int>::Method3<cube::System,void,int,int,int>
                        */
    *puVar2 = &abstr::Method3<cube::System,void,int,int,int>::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00587160;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("scroll:down",0xb);
  local_8._0_1_ = 0xb;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
                    /* inlined constructor:
                       abstr::Method2<cube::System,int,int,int>::Method2<cube::System,int,int,int>
                        */
    *puVar2 = &abstr::Method2<cube::System,int,int,int>::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00586be0;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("scroll:click",0xc);
  local_8._0_1_ = 0xc;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
                    /* inlined constructor:
                       abstr::Method1<cube::System,int,int>::Method1<cube::System,int,int> */
    *puVar2 = &abstr::Method1<cube::System,int,int>::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00585870;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("window:resize",0xd);
  local_8._0_1_ = 0xd;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
                    /* inlined constructor:
                       abstr::Method2<cube::System,void,int,int>::Method2<cube::System,void,int,int>
                        */
    *puVar2 = &abstr::Method2<cube::System,void,int,int>::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00587140;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("window:maximize",0xf);
  local_8._0_1_ = 0xe;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = &abstr::Method2<cube::System,void,int,int>::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00585840;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("window:close",0xc);
  local_8._0_1_ = 0xf;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = &abstr::Method0<cube::System,int>::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00586bc0;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("window:minimize",0xf);
  local_8._0_1_ = 0x10;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = &abstr::Method0<cube::System,int>::vftable;
    puVar2[2] = this;
    puVar2[3] = &LAB_00586cc0;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("screen:start",0xc);
  local_8._0_1_ = 0x11;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = &abstr::Method1<cube::System,int,int>::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00586cd0;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("screen:options",0xe);
  local_8._0_1_ = 0x12;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = &abstr::Method1<cube::System,int,int>::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00586bb0;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("screen:system",0xd);
  local_8._0_1_ = 0x13;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = &abstr::Method2<cube::System,int,int,int>::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00586b90;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("screen:save",0xb);
  local_8._0_1_ = 0x14;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
                    /* inlined constructor:
                       abstr::Method1<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>::Method1<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
                        */
    *puVar2 = &abstr::
               Method1<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
               ::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00586980;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("checkbox:mark",0xd);
  local_8._0_1_ = 0x15;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = &abstr::
               Method1<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
               ::vftable;
    puVar2[2] = this;
    puVar2[3] = FUN_00586a80;
  }
  FUN_0040c600(local_2c,puVar2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("checkbox:unmark");
  local_8._0_1_ = 0x16;
  FUN_005840b0(local_2c,this,FUN_00586780);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("static:enable");
  local_8._0_1_ = 0x17;
  FUN_00583fc0(local_2c,this,FUN_00587020);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("static:disable");
  local_8._0_1_ = 0x18;
  FUN_00584150(local_2c,this,&DAT_00586690);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("static:1");
  local_8._0_1_ = 0x19;
  FUN_00583f70(local_2c,this,FUN_00586c00);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("static:2");
  local_8._0_1_ = 0x1a;
  FUN_00583f70(local_2c,this,FUN_00586c20);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("static:3");
  local_8._0_1_ = 0x1b;
  FUN_00583f70(local_2c,this,FUN_00586c40);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("static:4");
  local_8._0_1_ = 0x1c;
  FUN_00583f70(local_2c,this,FUN_00586c60);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("static:5");
  local_8._0_1_ = 0x1d;
  FUN_00583f70(local_2c,this,FUN_00586c80);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("static:7");
  local_8._0_1_ = 0x1e;
  FUN_00583f70(local_2c,this,FUN_00586ca0);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("widget:enter");
  local_8._0_1_ = 0x1f;
  FUN_00584060(local_2c,this,FUN_00586ce0);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("widget:leave");
  local_8._0_1_ = 0x20;
  FUN_00584060(local_2c,this,FUN_00587460);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("widget:show");
  local_8._0_1_ = 0x21;
  FUN_00584100(local_2c,this,FUN_005866a0);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("widget:hide");
  local_8._0_1_ = 0x22;
  FUN_005841f0(local_2c,this,FUN_005871f0);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("widget:enable");
  local_8._0_1_ = 0x23;
  FUN_005841a0(local_2c,this,FUN_00587180);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("widget:close");
  local_8._0_1_ = 0x24;
  FUN_005840b0(local_2c,this,FUN_00585880);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350("widget:open");
  local_8._0_1_ = 0x25;
  FUN_00584010(local_2c,this,FUN_00587290);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00403350(&DAT_0071a4d0);
  local_8 = CONCAT31(local_8._1_3_,0x26);
  FUN_00402e80(local_2c,param_2);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00587660 @ 00587660  kind=gamemisc  attributed-by=caller-vote  size=164 */

void FUN_00587660(int param_1,int param_2,int param_3)

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
                    /* inlined constructor: cube::SystemWidget::SystemWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_28);
  if (7 < local_14) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_28[0]);
  }
  in_ECX[1].Object_data.offset_0x0 = param_3;
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::SystemWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::SystemWidget::vftable_for_Deformer;
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0xffffffff;
  ExceptionList = local_10;
  return;
}


/* FUN_00587f30 @ 00587f30  kind=gamemisc  attributed-by=caller-vote  size=49 */

void FUN_00587f30(int *param_1)

{
  float *in_ECX;
  
  *in_ECX = (float)*param_1;
  in_ECX[1] = (float)param_1[1];
  in_ECX[2] = (float)param_1[2];
  return;
}


/* FUN_00587f70 @ 00587f70  kind=gamemisc  attributed-by=caller-vote  size=571 */

void FUN_00587f70(int param_1,int param_2,int param_3)

{
  Widget *in_ECX;
  undefined2 *puVar1;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f143c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
                    /* inlined constructor: cube::VoxelWidget::VoxelWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_2c);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  in_ECX->vftablePtr = (Widget_vftable_for_NamedObject *)&cube::VoxelWidget::vftable_for_NamedObject
  ;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::VoxelWidget::vftable_for_Deformer;
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0x0;
  in_ECX[1].Object_data.offset_0x0 = -0x3d4c0000;
  in_ECX[1].Object_data.offset_0x4 = (int *)0x0;
  *(undefined4 *)&in_ECX[1].offset_0x0 = 0x42b40000;
  *(undefined4 *)&in_ECX[1].field_0x10 = 0;
  *(undefined4 *)&in_ECX[1].field_0x14 = 0;
  *(undefined4 *)&in_ECX[1].field_0x18 = 0;
  in_ECX[1].offset_0x10 = 0xffffffff;
  local_8._0_1_ = 3;
  *(undefined2 *)&in_ECX[1].offset_0x14 = 0;
  in_ECX[1].vftablePtr = (Widget_vftable_for_Deformer *)0x0;
  in_ECX[1].offset_0x1c = 0;
  *(undefined2 *)&in_ECX[1].offset_0x20 = 0;
  *(undefined1 *)((int)&in_ECX[1].offset_0x20 + 2) = 0;
  *(undefined2 *)&in_ECX[1].offset_0x24 = 1;
  *(undefined4 *)&in_ECX[1].offset_0x128 = 0;
  memset(&in_ECX[1].offset_0x28,0,0x100);
  in_ECX[1].offset_0x12c = param_3;
  in_ECX[1].offset_0x130 = 0;
  in_ECX[1].offset_0x134 = 0;
  in_ECX[1].offset_0x138 = 0;
  *(undefined1 *)&in_ECX[1].offset_0x13c = 0;
  *(undefined4 *)&in_ECX[1].field_0x14c = 0xffffffff;
  *(undefined2 *)&in_ECX[1].offset_0x144 = 0;
  in_ECX[1].offset_0x148 = 0;
  in_ECX[1].offset_0x14c = 0;
  *(undefined2 *)&in_ECX[1].offset_0x150 = 0;
  in_ECX[1].field_0x15e = 0;
  *(undefined2 *)&in_ECX[2].vftablePtr = 1;
  *(undefined4 *)&in_ECX[2].field_0x104 = 0;
  memset(&in_ECX[2].Object_data,0,0x100);
  in_ECX[2].field_0x108 = 0;
  *(undefined4 *)&in_ECX[2].field_0x11c = 0;
  cube::Sprite::Sprite((Sprite *)&in_ECX[2].field_0x120,*(undefined4 *)(param_3 + 0x134));
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_004e75c0(1,1,1);
  if (((in_ECX[3].Object_data.offset_0x0 < 1) || ((int)in_ECX[3].Object_data.offset_0x4 < 1)) ||
     (*(int *)&in_ECX[3].offset_0x0 < 1)) {
    puVar1 = (undefined2 *)&DAT_0076b340;
  }
  else {
    puVar1 = (undefined2 *)in_ECX[2].offset_0x144;
  }
  *puVar1 = 0xffff;
  *(undefined1 *)(puVar1 + 1) = 0xff;
  FUN_004e7870();
  ExceptionList = local_10;
  return;
}


/* FUN_00588250 @ 00588250  kind=gamemisc  attributed-by=caller-vote  size=678 */

void FUN_00588250(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 local_8;
  
  if ((*(char *)(in_ECX + 0x2a8) == '\0') || (iVar1 = *(int *)(in_ECX + 0x160), iVar1 == 0)) {
    iVar1 = FUN_00650ae0();
    if ((iVar1 == 0) && (*(char *)(in_ECX + 0x3c8) != '\0')) {
      FUN_004c79b0(*(undefined4 *)(in_ECX + 0x3cc),*(undefined4 *)(in_ECX + 0x3d0),
                   *(undefined4 *)(in_ECX + 0x3d4));
      *(undefined1 *)(in_ECX + 0x3c8) = 0;
    }
    *(undefined4 *)(in_ECX + 0x17c) = 0xffffffff;
    *(undefined1 *)(in_ECX + 0x3c8) = 0;
    return;
  }
  iVar4 = *(int *)(in_ECX + 0x17c);
  if ((iVar4 < 0) || ((*(int *)(in_ECX + 0x174) - *(int *)(in_ECX + 0x170)) / 0x11c <= iVar4)) {
    if (*(char *)(in_ECX + 0x3c8) != '\0') {
      FUN_004c79b0(*(undefined4 *)(in_ECX + 0x3cc),*(undefined4 *)(in_ECX + 0x3d0),
                   *(undefined4 *)(in_ECX + 0x3d4));
      FUN_004c69b0(*(undefined4 *)(in_ECX + 0x29c),*(undefined4 *)(in_ECX + 0x2a0),
                   *(undefined4 *)(in_ECX + 0x2a4),*(undefined4 *)(in_ECX + 0x3d8),
                   *(undefined4 *)(in_ECX + 0x3dc));
      *(undefined1 *)(in_ECX + 0x3c8) = 0;
      return;
    }
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 0x114)) {
      local_8._3_1_ = (undefined1)((uint)in_ECX >> 0x18);
      local_8._0_3_ =
           CONCAT12(*(undefined1 *)(in_ECX + 0x2a4),
                    CONCAT11(*(undefined1 *)(in_ECX + 0x2a0),*(undefined1 *)(in_ECX + 0x29c)));
      pcVar7 = (char *)(iVar1 + 0x14);
      do {
        iVar2 = 0;
        pcVar3 = pcVar7;
        while (*pcVar3 == *(char *)((int)&local_8 + iVar2)) {
          iVar2 = iVar2 + 1;
          pcVar3 = pcVar3 + 1;
          if (2 < iVar2) {
            *(undefined1 *)(in_ECX + 0x3c8) = 1;
            *(uint *)(in_ECX + 0x3d8) = (uint)*(byte *)(*(int *)(in_ECX + 0x160) + 0x17 + iVar4 * 8)
            ;
            *(undefined4 *)(in_ECX + 0x3dc) =
                 *(undefined4 *)(*(int *)(in_ECX + 0x160) + 0x18 + iVar4 * 8);
            *(undefined4 *)(in_ECX + 0x3cc) = *(undefined4 *)(in_ECX + 0x29c);
            *(undefined4 *)(in_ECX + 0x3d0) = *(undefined4 *)(in_ECX + 0x2a0);
            *(undefined4 *)(in_ECX + 0x3d4) = *(undefined4 *)(in_ECX + 0x2a4);
            return;
          }
        }
        iVar4 = iVar4 + 1;
        pcVar7 = pcVar7 + 8;
      } while (iVar4 < *(int *)(iVar1 + 0x114));
      return;
    }
  }
  else if (*(int *)(iVar1 + 0x114) < 0x20) {
    local_8 = in_ECX;
    FUN_004c69b0(*(undefined4 *)(in_ECX + 0x29c),*(undefined4 *)(in_ECX + 0x2a0),
                 *(undefined4 *)(in_ECX + 0x2a4),
                 *(undefined1 *)(*(int *)(in_ECX + 0x170) + 0x11 + iVar4 * 0x11c),
                 (int)*(short *)(*(int *)(in_ECX + 0x170) + 0x14 + iVar4 * 0x11c));
    iVar1 = *(int *)(*(int *)(in_ECX + 0x298) + 0x8006d0);
    piVar6 = *(int **)(iVar1 + 0x11dc);
    if (piVar6 != *(int **)(iVar1 + 0x11e0)) {
      do {
        piVar5 = (int *)*piVar6;
        if (piVar5 != (int *)piVar6[1]) {
          do {
            if (*piVar5 != 0) {
              iVar4 = *(int *)(in_ECX + 0x17c) * 0x11c;
              iVar1 = *(int *)(local_8 + 0x170);
              in_ECX = local_8;
              if ((((char)piVar5[1] == *(char *)(iVar4 + 4 + iVar1)) &&
                  (*(char *)((int)piVar5 + 5) == *(char *)(iVar4 + 5 + iVar1))) &&
                 (*(char *)((int)piVar5 + 0x11) == *(char *)(iVar4 + 0x11 + iVar1))) {
                iVar1 = FUN_004c76a0();
                iVar4 = FUN_004c76a0();
                in_ECX = local_8;
                if (iVar4 == iVar1) {
                  FUN_0042f140();
                  return;
                }
              }
            }
            piVar5 = piVar5 + 0x47;
          } while (piVar5 != (int *)piVar6[1]);
        }
        piVar6 = piVar6 + 3;
      } while (piVar6 != *(int **)(*(int *)(*(int *)(in_ECX + 0x298) + 0x8006d0) + 0x11e0));
    }
  }
  return;
}


/* FUN_0058ce20 @ 0058ce20  kind=gamemisc  attributed-by=caller-vote  size=18 */

void FUN_0058ce20(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x17c) = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x3c8) = 0;
  return;
}


/* FUN_0058ce40 @ 0058ce40  kind=gamemisc  attributed-by=caller-vote  size=25 */

void FUN_0058ce40(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x2ac);
  if (*(int *)(in_ECX + 0x17c) == iVar1) {
    iVar1 = -1;
  }
  *(int *)(in_ECX + 0x17c) = iVar1;
  return;
}


/* FUN_00593e20 @ 00593e20  kind=gamemisc  attributed-by=caller-vote  size=39 */

void FUN_00593e20(void)

{
  int in_ECX;
  
  if (7 < *(uint *)(in_ECX + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 8));
  }
  *(undefined4 *)(in_ECX + 0x1c) = 7;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  return;
}


/* FUN_00594620 @ 00594620  kind=gamemisc  attributed-by=caller-vote  size=54 */

undefined8 * FUN_00594620(undefined8 *param_1)

{
  longlong *in_ECX;
  undefined8 uVar1;
  
  uVar1 = FUN_0068d946((float)*in_ECX);
  *param_1 = uVar1;
  return param_1;
}


/* FUN_00594840 @ 00594840  kind=gamemisc  attributed-by=caller-vote  size=75 */

uint FUN_00594840(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  uVar1 = (in_ECX[2] - *in_ECX) / 0x11c;
  if (0xe6c2b4 - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = param_1;
    }
    return uVar1;
  }
  uVar1 = uVar1 + (uVar1 >> 1);
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}


/* FUN_005948d0 @ 005948d0  kind=gamemisc  attributed-by=caller-vote  size=219 */

void FUN_005948d0(void *param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = (uint)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1af0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != (void *)0x0) {
    if (param_1 < 0xe6c2b5) {
      pvVar2 = operator_new((int)param_1 * 0x11c);
      if (pvVar2 != (void *)0x0) goto LAB_00594934;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00594934:
  local_8 = 0;
  FUN_004569f0(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (void *)*in_ECX;
  if (param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  in_ECX[2] = (void *)(uVar1 * 0x11c + (int)pvVar2);
  in_ECX[1] = (void *)(((in_ECX[1] - (int)param_1) / 0x11c) * 0x11c + (int)pvVar2);
  *in_ECX = pvVar2;
  ExceptionList = local_10;
  return;
}


/* FUN_00594ad0 @ 00594ad0  kind=gamemisc  attributed-by=caller-vote  size=111 */

int FUN_00594ad0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = in_ECX[2] - in_ECX[1];
  iVar2 = iVar3 * -0x193d4bb7;
  if ((uint)(iVar3 / 0x11c) < param_1) {
    iVar2 = (in_ECX[1] - *in_ECX) / 0x11c;
    if (0xe6c2b4U - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar1 = FUN_00594840(iVar2 + param_1);
    iVar2 = FUN_005948d0(uVar1);
  }
  return iVar2;
}


/* FUN_00594bf0 @ 00594bf0  kind=gamemisc  attributed-by=caller-vote  size=144 */

undefined2 * FUN_00594bf0(undefined2 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x80011c);
  cVar1 = *(char *)((int)puVar2[1] + 0xd);
  puVar4 = puVar2;
  puVar6 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((int)puVar6[4] < (int)param_2) {
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
  if ((puVar4 == puVar2) || (bVar3 = (int)param_2 < (int)puVar4[4], param_2 = puVar4, bVar3)) {
    param_2 = puVar2;
  }
  if (param_2 != puVar2) {
    *(undefined4 *)(param_1 + 10) = 7;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = 0;
    FUN_0040f680(param_2 + 5,0,0xffffffff);
    return param_1;
  }
  FUN_0040eb60(&PTR_006fccac);
  return param_1;
}


/* FUN_00595a60 @ 00595a60  kind=gamemisc  attributed-by=caller-vote  size=4586 */

void FUN_00595a60(undefined4 *param_1,int param_2,float param_3)

{
  ushort uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float *pfVar4;
  char cVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  int in_ECX;
  uint uVar14;
  float fVar15;
  int iVar16;
  bool bVar17;
  float10 fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_31c [4];
  undefined1 local_318 [4];
  undefined4 *local_314;
  int local_310;
  float *local_30c;
  float *local_308;
  float *local_304;
  int local_300;
  float local_2fc;
  float local_2f8;
  int local_2f4;
  char local_2ed;
  float local_2ec;
  float *local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined8 local_2d4;
  undefined8 local_2cc;
  int local_2c4;
  int iStack_2c0;
  undefined1 local_2bc [280];
  float local_1a4;
  float local_1a0;
  undefined1 local_19c;
  undefined1 local_19b;
  undefined4 local_198;
  undefined4 local_194;
  undefined2 local_190;
  undefined1 local_18e;
  undefined2 local_18c;
  undefined1 local_188 [256];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_64;
  int local_60;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1c4b;
  local_10 = ExceptionList;
  uVar6 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_300 = param_2;
  local_2ec = param_3;
  local_30c = (float *)(param_1 + 2);
  local_304 = (float *)(in_ECX + 4);
  local_2f4 = in_ECX;
  local_14 = uVar6;
  FUN_00477d90(&local_2e8,local_30c);
  pfVar7 = *(float **)(in_ECX + 4);
  if (((local_2e8 != pfVar7) && (local_2f8 = local_2e8[6], local_2f8 != 0.0)) &&
     (0.0 < *(float *)((int)local_2f8 + 0x16c))) {
    if ((*(int *)(in_ECX + 0xb8) == 0) && (*(char *)((int)local_2f8 + 0x60) == '\0')) {
      FUN_00486290(param_1);
    }
    else {
      FUN_00477d90(&local_2e8,param_1);
      fVar20 = local_2f8;
      if (local_2e8 == pfVar7) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = local_2e8[6];
      }
      local_2fc = fVar15;
      if (0.0 < (float)param_1[4]) {
        dVar21 = 2.0;
        libm_sse2_pow_precise(uVar6);
        fVar19 = *(float *)((int)fVar20 + 0x1190) - ((float)param_1[4] * 0.25) / (float)dVar21;
        *(float *)((int)fVar20 + 0x1190) = fVar19;
        if (fVar19 < 0.0) {
          *(undefined4 *)((int)fVar20 + 0x1190) = 0;
        }
        if (*(char *)((int)fVar20 + 0x68) == 'T') {
          *(undefined1 *)((int)fVar20 + 0x68) = 0;
          *(undefined4 *)((int)fVar20 + 300) = 3000;
        }
      }
      if ((0.0 <= (float)param_1[4]) && (fVar15 != 0.0)) {
        *(undefined4 *)((int)fVar15 + 0x11d0) = param_1[2];
        *(undefined4 *)((int)fVar15 + 0x11d4) = param_1[3];
        *(undefined4 *)((int)fVar20 + 0x11d0) = *param_1;
        *(undefined4 *)((int)fVar20 + 0x11d4) = param_1[1];
        pfVar7 = (float *)FUN_00468ad0(param_1 + 2);
        *pfVar7 = *pfVar7 + 1.0;
        cVar5 = FUN_00444520();
        if (cVar5 == '\0') {
          if (*(int *)((int)fVar15 + 100) == 0x19) {
            pfVar7 = (float *)FUN_00468ad0(param_1);
            fVar19 = (float)param_1[4] * 10.0;
          }
          else if (((*(char *)((int)fVar15 + 0xaa8) == '\x03') &&
                   (cVar5 = FUN_00444820(), cVar5 != '\0')) &&
                  (*(char *)((int)fVar15 + 0x141) == '\x01')) {
            pfVar7 = (float *)FUN_00468ad0(param_1);
            fVar19 = (float)param_1[4] * 20.0;
          }
          else {
            pfVar7 = (float *)FUN_00468ad0(param_1);
            fVar19 = (float)param_1[4] * 2.0;
          }
        }
        else {
          pfVar7 = (float *)FUN_00468ad0(param_1);
          fVar19 = (float)param_1[4];
        }
        *pfVar7 = fVar19 + 0.01 + *pfVar7;
        FUN_005a0970(fVar15,fVar20,local_300);
      }
      if ((*(ushort *)((int)fVar20 + 0x7e) & 0x2000) == 0) {
LAB_00595d70:
        fVar19 = local_2f8;
        if (*(char *)((int)param_1 + 0x45) != '\x03') {
          if (0.0 <= (float)param_1[4]) {
            fVar22 = (float)param_1[0xe];
            fVar23 = (float)param_1[0xf];
            fVar24 = (float)param_1[0x10];
            if ((0 < *(int *)((int)fVar20 + 300)) && ((int)param_1[6] < 1)) {
              fVar22 = fVar22 * 0.1;
              fVar23 = fVar23 * 0.1;
              fVar24 = fVar24 * 0.1;
            }
            if ((*(char *)((int)fVar20 + 0x60) != '\x06') &&
               ((((*(char *)(local_2f4 + 0xb4) == '\0' && (*(char *)((int)fVar20 + 0x60) != '\0'))
                 || (fVar20 == *(float *)(local_2f4 + 0xb8))) &&
                (*(float *)((int)fVar20 + 0x4c) * *(float *)((int)fVar20 + 0x4c) +
                 *(float *)((int)fVar20 + 0x50) * *(float *)((int)fVar20 + 0x50) +
                 *(float *)((int)fVar20 + 0x54) * *(float *)((int)fVar20 + 0x54) <=
                 fVar23 * fVar23 + fVar22 * fVar22 + fVar24 * fVar24)))) {
              *(float *)((int)fVar20 + 0x4c) = fVar22;
              *(float *)((int)fVar20 + 0x50) = fVar23;
              *(float *)((int)fVar20 + 0x54) = fVar24;
            }
            if (0 < (int)param_1[6]) {
              *(undefined4 *)((int)fVar20 + 0x34) = 0;
              *(undefined4 *)((int)fVar20 + 0x38) = 0;
              *(undefined4 *)((int)fVar20 + 0x3c) = 0;
            }
          }
          iVar9 = param_1[7];
          if (0 < iVar9) {
            if (iVar9 < *(int *)((int)fVar20 + 0x130)) {
              iVar9 = *(int *)((int)fVar20 + 0x130);
            }
            *(int *)((int)fVar20 + 0x130) = iVar9;
          }
          if (*(char *)((int)param_1 + 0x45) == '\x01') {
            fVar15 = *(float *)((int)fVar20 + 0x170) + 0.25;
            *(float *)((int)fVar20 + 0x170) = fVar15;
            if (1.0 < fVar15) {
              *(undefined4 *)((int)fVar20 + 0x170) = 0x3f800000;
            }
          }
          else if (*(char *)((int)param_1 + 0x45) == '\x04') {
            FUN_0043cf20(local_300);
          }
          else {
            iVar9 = param_1[6];
            if (0 < iVar9) {
              if (iVar9 < *(int *)((int)fVar20 + 300)) {
                iVar9 = *(int *)((int)fVar20 + 300);
              }
              *(int *)((int)fVar20 + 300) = iVar9;
            }
            if ((*(char *)(local_2f4 + 0xb4) == '\0') || (fVar20 == *(float *)(local_2f4 + 0xb8))) {
              fVar22 = (float)param_1[4];
              if (fVar22 <= 0.0) {
                if (fVar22 < 0.0) {
                  local_2e8 = (float *)(*(float *)((int)fVar20 + 0x16c) - fVar22);
                  *(float **)((int)fVar20 + 0x16c) = local_2e8;
                  fVar18 = (float10)FUN_00444db0();
                  local_308 = (float *)(float)fVar18;
                  if ((float)local_308 < (float)local_2e8) {
                    fVar18 = (float10)FUN_00444db0();
                    *(float *)((int)fVar20 + 0x16c) = (float)fVar18;
                  }
                  if ((*(char *)(local_2f4 + 0xb4) == '\0') &&
                     (local_2e8 = (float *)**(float **)(local_2f4 + 4),
                     local_2e8 != *(float **)(local_2f4 + 4))) {
                    do {
                      pfVar7 = local_2e8;
                      if ((local_2e8[6] != 0.0) &&
                         ((cVar5 = FUN_00596ca0(local_2fc,local_2e8[6]), cVar5 != '\0' &&
                          (iVar9 = *(int *)((int)pfVar7[6] + 0x13a4),
                          piVar11 = (int *)FUN_00477d90(&local_308,(int)local_2f8 + 8),
                          fVar20 = local_2fc, *piVar11 != iVar9)))) {
                        pfVar8 = (float *)FUN_00468ad0((int)local_2fc + 8);
                        *pfVar8 = *pfVar8 - (float)param_1[4] * 0.1;
                        FUN_005a0970(fVar20,pfVar7[6],local_300);
                      }
                      FUN_005c3ea0();
                    } while (local_2e8 != (float *)*local_304);
                  }
                }
              }
              else if (*(char *)((int)param_1 + 0x45) == '\x05') {
                piVar11 = (int *)**(int **)((int)fVar20 + 0x1178);
                if (piVar11 != *(int **)((int)fVar20 + 0x1178)) {
                  do {
                    if ((char)piVar11[2] == '\x06') {
                      fVar20 = (float)piVar11[3];
                      fVar15 = (float)param_1[4];
                      piVar11[3] = (int)(fVar20 - fVar15);
                      if (fVar20 - fVar15 <= 0.0) {
                        piVar11[3] = 0;
                        piVar11[4] = 0;
                      }
                      FUN_0043b660();
                      local_2e4 = *param_1;
                      local_2d4 = *(ulonglong *)(piVar11 + 2);
                      local_2e0 = param_1[1];
                      local_2dc = param_1[2];
                      local_2d8 = param_1[3];
                      local_2cc = *(undefined8 *)(piVar11 + 4);
                      local_2c4 = piVar11[6];
                      iStack_2c0 = piVar11[7];
                      FUN_004460a0(&local_2e4);
                    }
                    piVar11 = (int *)*piVar11;
                  } while (piVar11 != (int *)*(int *)((int)fVar19 + 0x1178));
                }
              }
              else {
                cVar5 = FUN_0043e310();
                if ((cVar5 != '\0') && ((fVar15 == 0.0 || (cVar5 = FUN_0043e310(), cVar5 != '\0'))))
                {
                  *(float *)((int)fVar20 + 0x16c) =
                       *(float *)((int)fVar20 + 0x16c) - (float)param_1[4];
                }
              }
              fVar20 = local_2f8;
              if (*(float *)((int)local_2f8 + 0x16c) <= 0.0) {
                *(undefined4 *)((int)local_2f8 + 0x16c) = 0;
                local_18 = 0x3f800000;
                FUN_0042c4a0((int)local_2f8 + 0x10);
                local_1c = 0x3f800000;
                local_20 = 3.78351e-44;
                FUN_004864c0(&local_2c);
                *(undefined4 *)((int)fVar20 + 0x6c) = 0;
                iVar9 = FUN_00434d10(*(undefined4 *)((int)fVar20 + 0x1b0),
                                     *(undefined4 *)((int)fVar20 + 0x1b4));
                if (iVar9 != 0) {
                  iVar16 = 0;
                  for (piVar11 = *(int **)(iVar9 + 0xc); piVar11 != *(int **)(iVar9 + 0x10);
                      piVar11 = piVar11 + 0x62) {
                    if (((*piVar11 == 5) && (piVar11[0x5e] == *(int *)((int)fVar20 + 0x1b8))) &&
                       ((char)piVar11[0xc] != '\0')) {
                      FUN_005a58e0(piVar11,local_300,0);
                      local_80 = *(undefined4 *)((int)fVar20 + 0x1b4);
                      local_84 = *(undefined4 *)((int)fVar20 + 0x1b0);
                      local_7c = iVar16;
                      FUN_00468670(piVar11);
                      FUN_004dd700(&local_84);
                      break;
                    }
                    iVar16 = iVar16 + 1;
                  }
                }
                FUN_0059b180(fVar20,local_2ec);
                pfVar7 = local_304;
                local_2e8 = *(float **)*local_304;
                if (local_2e8 != (float *)*local_304) {
                  do {
                    if ((local_2e8[6] != 0.0) && (*(char *)((int)local_2e8[6] + 0x60) == '\0')) {
                      FUN_0042c7a0(&local_2c,(int)fVar20 + 0x10);
                    }
                    FUN_005c3ea0();
                  } while (local_2e8 != (float *)*pfVar7);
                }
                pfVar7 = (float *)((int)fVar20 + 0x11c8);
                local_308 = pfVar7;
                if (*(int *)((int)fVar20 + 0x11c8) != 0 || *(int *)((int)fVar20 + 0x11cc) != 0) {
                  FUN_00477d90(&local_2ec,pfVar7);
                  fVar15 = *local_304;
                  if ((local_2ec != fVar15) && (*(int *)((int)local_2ec + 0x18) != 0)) {
                    FUN_00477d90(&local_2ec,pfVar7);
                    if (local_2ec == fVar15) {
                      iVar9 = 0;
                    }
                    else {
                      iVar9 = *(int *)((int)local_2ec + 0x18);
                    }
                    *(undefined4 *)(iVar9 + 0x16c) = 0;
                  }
                }
                fVar18 = (float10)FUN_0043ca60((float)(int)((uint)*(byte *)((int)fVar20 + 0x1a8) +
                                                           *(int *)((int)fVar20 + 400)));
                local_2ec = (float)fVar18;
                local_2fc = local_2ec * 20.0;
                if (local_2fc < 1.0) {
                  local_2fc = 1.0;
                }
                cVar5 = FUN_004445d0();
                if (cVar5 != '\0') {
                  local_2fc = local_2fc * 20.0;
                }
                uVar1 = *(ushort *)((int)fVar20 + 0x7e);
                if ((uVar1 & 0x200) != 0) {
                  local_2fc = local_2fc * 10.0;
                }
                if ((uVar1 & 0x800) != 0) {
                  local_2fc = 0.0;
                }
                local_2ed = '\0';
                local_2e4 = 0;
                local_2e0 = 0;
                local_2dc = 0;
                local_2d8 = 0;
                local_2d4 = local_2d4 & 0xffff000000000000;
                local_2cc = 0;
                local_2c4 = 0;
                iStack_2c0 = 0;
                if ((((*(char *)(local_2f4 + 0xb4) == '\0') &&
                     (iVar9 = FUN_00487da0((int)(*(int *)((int)fVar20 + 0x1b0) +
                                                (*(int *)((int)fVar20 + 0x1b0) >> 0x1f & 7U)) >> 3,
                                           (int)(*(int *)((int)fVar20 + 0x1b4) +
                                                (*(int *)((int)fVar20 + 0x1b4) >> 0x1f & 7U)) >> 3),
                     iVar9 != 0)) && (*(char *)(iVar9 + 0x41) != '\x02')) &&
                   (((uVar1 & 0x2000) != 0 ||
                    ((*(int *)(iVar9 + 0x34) == 5 && (*(char *)((int)fVar20 + 0x1d38) != '\0'))))))
                {
                  pfVar7 = *(float **)((int)fVar20 + 0x13a4);
                  local_2e8 = (float *)*pfVar7;
                  while (local_2e8 != pfVar7) {
                    if (0.0 < local_2e8[6]) {
                      pfVar8 = local_2e8 + 4;
                      FUN_00477d90(&local_2ec,pfVar8);
                      if (((local_2ec != *local_304) && (*(int *)((int)local_2ec + 0x18) != 0)) &&
                         (iVar16 = FUN_0042f000(pfVar8), *(char *)(iVar16 + 0x60) == '\0')) {
                        switch(*(undefined4 *)(iVar9 + 0x34)) {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 0xd:
switchD_005964fa_caseD_1:
                          local_2ed = '\x01';
                          *(undefined1 *)(iVar9 + 0x41) = 2;
                          break;
                        default:
                          goto switchD_005964fa_caseD_6;
                        case 7:
                        case 8:
                        case 9:
                        case 10:
                        case 0xb:
                        case 0xc:
                          *(int *)(iVar9 + 0x44) = *(int *)(iVar9 + 0x44) + 1;
                          *(undefined1 *)(iVar9 + 0x41) = 1;
                          if (*(int *)(iVar9 + 0x48) <= *(int *)(iVar9 + 0x44))
                          goto switchD_005964fa_caseD_1;
                        }
                        FUN_00468620(iVar9 + 0x2c);
                        FUN_00465c70();
                        fVar20 = local_2f8;
                        local_64 = (int)(*(int *)((int)local_2f8 + 0x1b0) +
                                        (*(int *)((int)local_2f8 + 0x1b0) >> 0x1f & 7U)) >> 3;
                        local_60 = (int)((*(int *)((int)local_2f8 + 0x1b4) >> 0x1f & 7U) +
                                        *(int *)((int)local_2f8 + 0x1b4)) >> 3;
                        FUN_00468620(&local_2e4);
                        FUN_00486420(&local_64);
                        if ((local_2ed != '\0') &&
                           (pfVar7 = (float *)((*(int *)((int)fVar20 + 0x1b0) >> 0x1f & 7U) +
                                               *(int *)((int)fVar20 + 0x1b0) & 0xfffffff8),
                           local_2e8 = pfVar7, (int)pfVar7 < (int)(pfVar7 + 2))) {
                          do {
                            uVar6 = (*(int *)((int)fVar20 + 0x1b4) >> 0x1f & 7U) +
                                    *(int *)((int)fVar20 + 0x1b4) & 0xfffffff8;
                            local_2e8 = pfVar7;
                            if ((int)uVar6 < (int)(uVar6 + 8)) {
                              do {
                                fVar20 = (float)FUN_00434d10(pfVar7,uVar6);
                                local_2ec = fVar20;
                                if (fVar20 != 0.0) {
                                  iVar9 = *(int *)((int)fVar20 + 0x18);
                                  iVar16 = *(int *)((int)fVar20 + 0xa0);
                                  if (iVar16 < *(int *)((int)fVar20 + 0x1c) - iVar9 >> 2) {
                                    do {
                                      puVar10 = *(undefined4 **)(iVar9 + iVar16 * 4);
                                      if (puVar10 != (undefined4 *)0x0) {
                                        (**(code **)*puVar10)(1);
                                      }
                                      iVar9 = *(int *)((int)fVar20 + 0x18);
                                      iVar16 = iVar16 + 1;
                                    } while (iVar16 < *(int *)((int)fVar20 + 0x1c) - iVar9 >> 2);
                                  }
                                  FUN_0040d9d0(*(undefined4 *)((int)local_2ec + 0xa0));
                                  pfVar7 = local_2e8;
                                }
                                uVar6 = uVar6 + 1;
                              } while ((int)uVar6 <
                                       ((int)(*(int *)((int)local_2f8 + 0x1b4) +
                                             (*(int *)((int)local_2f8 + 0x1b4) >> 0x1f & 7U)) >> 3)
                                       * 8 + 8);
                            }
                            pfVar7 = (float *)((int)pfVar7 + 1);
                            fVar20 = local_2f8;
                            local_2e8 = pfVar7;
                          } while ((int)pfVar7 <
                                   ((int)(*(int *)((int)local_2f8 + 0x1b0) +
                                         (*(int *)((int)local_2f8 + 0x1b0) >> 0x1f & 7U)) >> 3) * 8
                                   + 8);
                        }
                        break;
                      }
                    }
                    FUN_005c3ea0();
                  }
                }
switchD_005964fa_caseD_6:
                pfVar7 = *(float **)*local_304;
                if (pfVar7 != (float *)*local_304) {
                  do {
                    fVar20 = pfVar7[6];
                    if (fVar20 != 0.0) {
                      if (((*(float *)((int)fVar20 + 0x11d0) == *local_30c) &&
                          (*(float *)((int)fVar20 + 0x11d4) == local_30c[1])) ||
                         ((*(float *)((int)fVar20 + 0x11d0) == *local_308 &&
                          (*(float *)((int)fVar20 + 0x11d4) == local_308[1])))) {
                        *(undefined4 *)((int)fVar20 + 0x11d0) = 0;
                        *(undefined4 *)((int)fVar20 + 0x11d4) = 0;
                      }
                      local_310 = 0;
                      puVar10 = (undefined4 *)FUN_0046d550(0,0);
                      pfVar8 = (float *)**(int **)((int)pfVar7[6] + 0x13a4);
                      local_8 = 0;
                      local_314 = puVar10;
                      local_2e8 = pfVar8;
                      if (pfVar8 == *(float **)((int)pfVar7[6] + 0x13a4)) goto LAB_005967fd;
                      goto LAB_00596734;
                    }
                    if (*(char *)((int)pfVar7 + 0xd) == '\0') {
                      pfVar8 = (float *)pfVar7[2];
                      if (*(char *)((int)pfVar8 + 0xd) == '\0') {
                        cVar5 = *(char *)((int)*pfVar8 + 0xd);
                        pfVar7 = pfVar8;
                        pfVar8 = (float *)*pfVar8;
                        while (cVar5 == '\0') {
                          cVar5 = *(char *)((int)*pfVar8 + 0xd);
                          pfVar7 = pfVar8;
                          pfVar8 = (float *)*pfVar8;
                        }
                      }
                      else {
                        cVar5 = *(char *)((int)pfVar7[1] + 0xd);
                        pfVar2 = (float *)pfVar7[1];
                        pfVar8 = pfVar7;
                        while ((pfVar7 = pfVar2, cVar5 == '\0' && (pfVar8 == (float *)pfVar7[2]))) {
                          cVar5 = *(char *)((int)pfVar7[1] + 0xd);
                          pfVar2 = (float *)pfVar7[1];
                          pfVar8 = pfVar7;
                        }
                      }
                    }
                  } while (pfVar7 != (float *)*local_304);
                }
                uVar6 = *(uint *)((int)local_2f8 + 0x1b0);
                uVar14 = *(uint *)((int)local_2f8 + 0x1b4);
                if ((((-1 < (int)uVar6) && (-1 < (int)uVar14)) && ((int)uVar6 < 0x10000)) &&
                   ((int)uVar14 < 0x10000)) {
                  iVar9 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 0x3fU)) >> 6;
                  iVar16 = (int)(((int)uVar14 >> 0x1f & 0x3fU) + uVar14) >> 6;
                  if (((-1 < iVar9) && (-1 < iVar16)) &&
                     ((iVar9 < 0x400 &&
                      ((iVar16 < 0x400 &&
                       (iVar9 = *(int *)(local_2f4 + 0xbc + (iVar9 * 0x400 + iVar16) * 4),
                       iVar9 != 0)))))) {
                    uVar6 = uVar6 & 0x8000003f;
                    if ((int)uVar6 < 0) {
                      uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
                    }
                    uVar14 = uVar14 & 0x8000003f;
                    if ((int)uVar14 < 0) {
                      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
                    }
                    iVar9 = *(int *)(iVar9 + 0x10018 + (uVar6 * 0x40 + uVar14) * 4);
                    if (((iVar9 != 0) && (iVar16 = *(int *)((int)local_2f8 + 0x1b8), -1 < iVar16))
                       && (iVar16 < *(int *)(iVar9 + 0x1c) - *(int *)(iVar9 + 0x18) >> 2)) {
                      *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x18) + iVar16 * 4) + 0x38) =
                           1200000;
                      *(undefined4 *)
                       (*(int *)(*(int *)(iVar9 + 0x18) + *(int *)((int)local_2f8 + 0x1b8) * 4) +
                       0x3c) = *(undefined4 *)(local_2f4 + 0x800160);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        pfVar7 = *(float **)((int)fVar20 + 0x13a4);
        local_2e8 = (float *)*pfVar7;
        while (local_2e8 != pfVar7) {
          if (((0.0 < local_2e8[6]) &&
              (FUN_00477d90(&local_308,local_2e8 + 4), local_308 != (float *)*local_304)) &&
             ((local_308[6] != 0.0 &&
              (fVar20 = local_2f8, *(char *)((int)local_308[6] + 0x60) == '\0'))))
          goto LAB_00595d70;
          FUN_005c3ea0();
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
  while( true ) {
    if (*(char *)((int)pfVar8 + 0xd) == '\0') {
      pfVar2 = (float *)pfVar8[2];
      if (*(char *)((int)pfVar2 + 0xd) == '\0') {
        cVar5 = *(char *)((int)*pfVar2 + 0xd);
        pfVar8 = pfVar2;
        pfVar2 = (float *)*pfVar2;
        while (local_2e8 = pfVar8, cVar5 == '\0') {
          cVar5 = *(char *)((int)*pfVar2 + 0xd);
          pfVar8 = pfVar2;
          pfVar2 = (float *)*pfVar2;
        }
      }
      else {
        cVar5 = *(char *)((int)pfVar8[1] + 0xd);
        pfVar4 = (float *)pfVar8[1];
        pfVar2 = pfVar8;
        while ((pfVar8 = pfVar4, local_2e8 = pfVar8, cVar5 == '\0' && (pfVar2 == (float *)pfVar8[2])
               )) {
          cVar5 = *(char *)((int)pfVar8[1] + 0xd);
          pfVar4 = (float *)pfVar8[1];
          pfVar2 = pfVar8;
        }
      }
    }
    if (pfVar8 == *(float **)((int)pfVar7[6] + 0x13a4)) break;
LAB_00596734:
    fVar20 = pfVar8[4];
    if (((fVar20 == *local_30c) && (fVar20 = pfVar8[4], pfVar8[5] == local_30c[1])) ||
       ((fVar20 == *local_308 && (pfVar8[5] == local_308[1])))) {
      iVar9 = FUN_00583cb0(puVar10,puVar10[1],&local_2e8);
      if (local_310 == 0x15555554) goto LAB_00596c6a;
      puVar10[1] = iVar9;
      local_310 = local_310 + 1;
      **(int **)(iVar9 + 4) = iVar9;
    }
  }
LAB_005967fd:
  for (puVar3 = (undefined4 *)*puVar10; puVar3 != puVar10; puVar3 = (undefined4 *)*puVar3) {
    FUN_0043ede0(local_31c,puVar3[2]);
  }
  if ((*(char *)((int)local_2f8 + 0x60) == '\x01') && (*(char *)((int)pfVar7[6] + 0x60) == '\0')) {
    iVar9 = *(int *)((int)local_2f8 + 0x13a4);
    piVar11 = (int *)FUN_00477d90(local_318,pfVar7 + 4);
    iVar16 = local_300;
    if (*piVar11 != iVar9) {
      local_24 = *local_30c;
      local_20 = local_30c[1];
      local_1c = *(undefined4 *)((int)local_2f8 + 100);
      local_2c = pfVar7[4];
      local_28 = pfVar7[5];
      local_18 = (int)local_2fc;
      local_2ec = *(float *)(local_300 + 0x48);
      iVar12 = FUN_00451d00(local_2ec,*(undefined4 *)((int)local_2ec + 4),&local_2c);
      iVar9 = *(int *)(iVar16 + 0x4c);
      if (iVar9 == 0x7fffffe) goto LAB_00596c6a;
      *(int *)(iVar16 + 0x4c) = iVar9 + 1;
      *(int *)((int)local_2ec + 4) = iVar12;
      **(int **)(iVar12 + 4) = iVar12;
      FUN_005a0bf0(&local_2c);
    }
    if (local_2ed != '\0') {
      local_2e8 = (float *)(uint)local_2d4._4_1_;
      fVar18 = (float10)FUN_0043ca60((float)((int)local_2e8 + (int)local_2d4));
      local_2ec = (float)fVar18;
      fVar20 = local_2ec * 50.0;
      local_19b = 0;
      local_198 = 0;
      local_194 = 0;
      local_190 = 0;
      local_18e = 0;
      local_88 = 0;
      memset(local_188,0,0x100);
      iVar9 = local_300;
      local_1a4 = pfVar7[4];
      local_1a0 = pfVar7[5];
      local_18c = (undefined2)(int)(fVar20 + 1.0);
      local_2ec = *(float *)(local_300 + 0x40);
      local_19c = 0xd;
      iVar16 = FUN_00451cc0(local_2ec,*(undefined4 *)((int)local_2ec + 4),&local_1a4);
      if (*(int *)(iVar9 + 0x44) != 0xdd67c7) {
        *(int *)(iVar9 + 0x44) = *(int *)(iVar9 + 0x44) + 1;
        *(int *)((int)local_2ec + 4) = iVar16;
        **(int **)(iVar16 + 4) = iVar16;
        if (pfVar7[6] == *(float *)(local_2f4 + 0xb8)) {
          FUN_0046ebe0(&local_19c,0xffffffff);
        }
        uVar6 = rand();
        uVar6 = uVar6 & 0x80000001;
        bVar17 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar17 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar17) {
          uVar13 = FUN_005f51e0(local_2bc,(int)local_2d4,local_2e8,
                                *(undefined1 *)((int)pfVar7[6] + 0x140));
        }
        else {
          uVar13 = FUN_005f8ad0(local_2bc,(int)local_2d4,local_2e8,
                                *(undefined1 *)((int)pfVar7[6] + 0x140));
        }
        FUN_0042c5e0(uVar13);
        local_2ec = *(float *)(iVar9 + 0x40);
        iVar16 = FUN_00451cc0(local_2ec,*(undefined4 *)((int)local_2ec + 4),&local_1a4);
        if (*(int *)(iVar9 + 0x44) != 0xdd67c7) {
          *(int *)(iVar9 + 0x44) = *(int *)(iVar9 + 0x44) + 1;
          *(int *)((int)local_2ec + 4) = iVar16;
          **(int **)(iVar16 + 4) = iVar16;
          if (pfVar7[6] == *(float *)(local_2f4 + 0xb8)) {
            FUN_0046ebe0(&local_19c,0xffffffff);
          }
          goto LAB_00596ad8;
        }
      }
LAB_00596c6a:
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
  }
LAB_00596ad8:
  puVar3 = (undefined4 *)*puVar10;
  *puVar10 = puVar10;
  local_8 = 0xffffffff;
  puVar10[1] = puVar10;
  local_310 = 0;
  if (puVar3 == puVar10) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar10);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar3);
}


/* FUN_00596d30 @ 00596d30  kind=gamemisc  attributed-by=caller-vote  size=6562 */

void FUN_00596d30(float param_1,int param_2,float param_3,char param_4,undefined4 param_5,
                 float param_6,undefined4 param_7,float *param_8,float *param_9,undefined4 param_10,
                 char param_11,int param_12,undefined4 param_13,char param_14)

{
  undefined4 *puVar1;
  float *pfVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  int *piVar9;
  float10 fVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auStack_348 [4];
  float local_344;
  float local_340;
  float local_33c;
  int local_338;
  float local_334;
  float local_330;
  float local_32c;
  float *local_328;
  float local_324;
  int local_320;
  undefined4 local_31c;
  int *local_318;
  int local_314;
  int *local_310;
  undefined4 local_30c;
  int *local_308;
  int local_304;
  undefined4 local_300;
  float fStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined4 local_2b4;
  float local_2b0;
  undefined4 local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  float local_280;
  char local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  float local_258;
  float local_254;
  float local_250;
  char local_24c;
  undefined2 local_24b;
  float local_244;
  float local_240;
  undefined4 local_23c;
  float local_238;
  float local_234;
  float local_230;
  undefined4 local_22c;
  float local_228;
  undefined4 local_224;
  float local_220;
  float local_21c;
  float local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  float local_208;
  float local_204;
  float local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  undefined1 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined1 local_193;
  float local_18c;
  float local_188;
  float local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  float local_134;
  float local_130;
  float local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  undefined1 local_114;
  undefined4 local_110;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e3;
  undefined1 local_e0 [12];
  undefined4 local_d4;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  float local_90;
  float local_8c;
  float local_88;
  undefined1 local_83;
  undefined1 local_80 [12];
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006f1ca1;
  local_14 = ExceptionList;
  local_1c = DAT_0076aa78 ^ (uint)auStack_348;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffcb0;
  ExceptionList = &local_14;
  local_33c = param_1;
  local_338 = param_2;
  local_328 = param_9;
  local_31c = param_10;
  if ((*(float *)((int)param_1 + 0x16c) <= 0.0) ||
     ((*(char *)(in_ECX + 0xb4) != '\0' && (param_1 == *(float *)(in_ECX + 0xb8)))))
  goto LAB_005986d7;
  local_320 = in_ECX;
  if (param_2 == 0) {
    rand();
    *(undefined4 *)((int)param_1 + 0x1184) = 0x3f000000;
    local_334 = param_3;
  }
  else {
    cVar3 = *(char *)(param_2 + 0x68);
    if (((cVar3 == '[') || (cVar3 == 'J')) && ((*(byte *)((int)param_1 + 0x5c) & 1) == 0))
    goto LAB_005986d7;
    if (cVar3 == '\x1c') {
      local_180 = *(undefined4 *)((int)param_1 + 0x10);
      local_17c = *(undefined4 *)((int)param_1 + 0x14);
      local_178 = *(undefined4 *)((int)param_1 + 0x18);
      local_174 = *(undefined4 *)((int)param_1 + 0x1c);
      local_170 = *(undefined4 *)((int)param_1 + 0x20);
      local_16c = *(undefined4 *)((int)param_1 + 0x24);
      local_140 = 0x40400000;
      iVar6 = rand();
      local_144 = 1;
      local_14c = ((float)iVar6 * 0.1) / 32767.0 + 0.1;
      local_168 = 0;
      local_164 = 0;
      local_160 = 0x41200000;
      local_148 = 8;
      local_15c = 0x3f19999a;
      local_158 = 0x3f19999a;
      local_154 = 0x3f800000;
      local_150 = 0x3f800000;
      FUN_00486470(&local_180);
    }
    if ((*(char *)((int)param_1 + 0x60) == '\x01') &&
       (((*(byte *)((int)param_1 + 0x124) & 0x80) != 0 ||
        ((*(byte *)((int)param_1 + 0x5c) & 0x20) != 0)))) {
      local_6c = 0x3f800000;
      FUN_0042c4a0((int)param_1 + 0x10);
      iVar6 = rand();
      local_70 = ((float)iVar6 * 0.3) / 32767.0 + 1.0;
      local_74 = 0x18;
      FUN_004864c0(local_80);
      FUN_00459a30();
      FUN_0042c5b0((int)param_1 + 0x10);
      pfVar2 = local_328;
      local_128 = *(undefined4 *)(local_338 + 8);
      local_124 = *(undefined4 *)(local_338 + 0xc);
      local_120 = *(undefined4 *)((int)param_1 + 8);
      local_11c = *(undefined4 *)((int)param_1 + 0xc);
      local_118 = param_3;
      local_f0 = *param_8;
      local_ec = param_8[1];
      local_e8 = param_8[2];
      local_e3 = 3;
      local_114 = 0;
      local_110 = 0;
      FUN_00486290(&local_128);
      if (*(char *)(local_320 + 0xb4) == '\0') {
        FUN_00595a60(&local_128,pfVar2,local_31c);
      }
      goto LAB_005986d7;
    }
    if (((param_14 != '\0') && (cVar3 = FUN_00444590(uVar5), cVar3 != '\0')) &&
       (0.0 < *(float *)((int)param_1 + 0x174))) {
      fVar10 = (float10)FUN_0043e190();
      local_340 = param_3 / (float)fVar10;
      fVar11 = *(float *)((int)param_1 + 0x174) + *(float *)((int)param_1 + 0x170);
      fVar14 = *(float *)((int)param_1 + 0x174) + *(float *)((int)param_1 + 0x144);
      *(float *)((int)param_1 + 0x170) = fVar11;
      *(float *)((int)param_1 + 0x144) = fVar14;
      if (1.0 < fVar11) {
        *(undefined4 *)((int)param_1 + 0x170) = 0x3f800000;
      }
      if (*(float *)((int)param_1 + 0x170) < fVar14) {
        *(float *)((int)param_1 + 0x144) = *(float *)((int)param_1 + 0x170);
      }
      FUN_00459a30();
      FUN_0042c5b0((int)param_1 + 0x10);
      local_c8 = *(undefined4 *)(local_338 + 8);
      local_c4 = *(undefined4 *)(local_338 + 0xc);
      local_c0 = *(undefined4 *)((int)param_1 + 8);
      local_bc = *(undefined4 *)((int)param_1 + 0xc);
      local_b8 = param_3;
      local_90 = *param_8 * 0.5;
      local_8c = param_8[1] * 0.5;
      fVar11 = *(float *)((int)param_1 + 0x174) - local_340;
      local_88 = param_8[2] * 0.5;
      local_83 = 1;
      local_b4 = 0;
      local_b0 = 0;
      *(float *)((int)param_1 + 0x174) = fVar11;
      if (fVar11 < -1.0) {
        *(undefined4 *)((int)param_1 + 0x174) = 0xbf800000;
      }
      FUN_00486290(&local_c8);
      local_cc = 0x3f800000;
      FUN_0042c4a0((int)param_1 + 0x10);
      iVar6 = rand();
      local_d4 = 0x18;
      local_d0 = ((float)iVar6 * 0.3) / 32767.0 + 1.0;
      FUN_004864c0(local_e0);
      if (*(char *)(local_320 + 0xb4) == '\0') {
        FUN_00595a60(&local_c8,param_9,local_31c);
      }
      goto LAB_005986d7;
    }
    local_340 = 0.0;
    for (puVar1 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x1178);
        puVar1 != *(undefined4 **)((int)param_1 + 0x1178); puVar1 = (undefined4 *)*puVar1) {
      if (*(char *)(puVar1 + 2) == '\x06') {
        local_340 = local_340 + (float)puVar1[3];
      }
    }
    local_330 = (float)*(int *)(local_338 + 0x70);
    iVar6 = FUN_00444cb0();
    if (local_330 / (float)iVar6 <= 1.0) {
      local_330 = (float)*(int *)(local_338 + 0x70);
      iVar6 = FUN_00444cb0();
      local_32c = local_330 / (float)iVar6;
    }
    else {
      local_32c = 1.0;
    }
    local_32c = 1.0 - local_32c;
    local_330 = local_32c * local_340;
    if (local_330 <= 0.0) {
      local_334 = param_3;
    }
    else {
      FUN_00459a30();
      local_1b8 = *(undefined4 *)((int)param_1 + 0x10);
      local_1b4 = *(undefined4 *)((int)param_1 + 0x14);
      local_1b0 = *(undefined4 *)((int)param_1 + 0x18);
      local_1ac = *(undefined4 *)((int)param_1 + 0x1c);
      local_1a8 = *(undefined4 *)((int)param_1 + 0x20);
      local_1a4 = *(undefined4 *)((int)param_1 + 0x24);
      local_1d8 = *(undefined4 *)(local_338 + 8);
      local_1d4 = *(undefined4 *)(local_338 + 0xc);
      local_1d0 = *(undefined4 *)((int)param_1 + 8);
      local_1cc = *(undefined4 *)((int)param_1 + 0xc);
      local_1c8 = param_3;
      local_1a0 = *param_8 * 0.5;
      local_19c = param_8[1] * 0.5;
      local_198 = param_8[2] * 0.5;
      local_193 = 5;
      local_1c4 = 0;
      local_1c0 = 0;
      local_134 = local_1a0;
      local_130 = local_19c;
      local_12c = local_198;
      FUN_00486290(&local_1d8);
      local_224 = 0x3f800000;
      local_238 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
      local_340 = (float)*(longlong *)((int)param_1 + 0x20);
      local_234 = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
      local_230 = local_340 * 1.5258789e-05;
      iVar6 = rand();
      local_22c = 0x5b;
      local_228 = ((float)iVar6 * 0.3) / 32767.0 + 1.0;
      FUN_004864c0(&local_238);
      if (*(char *)(local_320 + 0xb4) == '\0') {
        FUN_00595a60(&local_1d8,param_9,local_31c);
      }
      local_334 = param_3 - local_330;
      if (local_334 <= 0.0) goto LAB_005986d7;
    }
    if (param_11 == '\0') {
      fVar10 = (float10)FUN_0043cff0();
    }
    else {
      fVar10 = (float10)FUN_004467a0();
    }
    local_340 = (float)fVar10;
    local_334 = local_334 - local_32c * local_340;
    if (local_334 < 0.0) {
      local_334 = 0.0;
    }
    local_324 = (float)*(int *)(local_338 + 0x70);
    iVar7 = FUN_00444cb0();
    param_9 = local_328;
    iVar6 = local_338;
    local_324 = local_324 / (float)iVar7;
    if (0.25 < local_324) {
      local_244 = *param_8;
      local_240 = param_8[1];
      fVar11 = local_240 * local_240 + local_244 * local_244 + param_8[2] * param_8[2];
      if (0.0 < fVar11) {
        dVar12 = (double)fVar11;
        libm_sse2_sqrt_precise();
        local_240 = (1.0 / (float)dVar12) * param_8[1];
        local_244 = *param_8 * (1.0 / (float)dVar12);
      }
      local_244 = local_244 * 4.0;
      local_240 = local_240 * 4.0;
      local_23c = 0x40a00000;
      FUN_0043df60(&local_310);
      pfVar2 = local_328;
      local_c = 0;
      piVar8 = (int *)*local_310;
      if (piVar8 != local_310) {
        local_340 = (float)((int)param_1 + 0x10);
        do {
          FUN_0059a800(local_340,&local_244,local_324,param_5,piVar8[2],pfVar2);
          piVar8 = (int *)*piVar8;
        } while (piVar8 != local_310);
      }
      piVar8 = (int *)*local_310;
      *local_310 = (int)local_310;
      local_c = 0xffffffff;
      local_310[1] = (int)local_310;
      local_30c = 0;
      if (piVar8 == local_310) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_310);
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(piVar8);
    }
    if (((char)param_5 != '\0') && (0.0 < local_324)) {
      FUN_0043df60(&local_318);
      local_c = 1;
      piVar8 = local_318;
      if (local_314 != 0) {
        piVar9 = (int *)*local_318;
        local_33c = 0.0;
        local_330 = 0.1 / (float)((double)local_314 +
                                 *(double *)(&DAT_00745f30 + (local_314 >> 0x1f) * -8));
        if (piVar9 != local_318) {
          do {
            iVar6 = piVar9[2];
            local_340 = 0.0;
            if (0 < *(int *)(iVar6 + 0x114)) {
              local_32c = 3.36312e-44;
              do {
                switch(*(undefined1 *)(iVar6 + -1 + (int)local_32c)) {
                case 0x80:
                  fVar10 = (float10)FUN_0043ca60((float)*(int *)((int)local_32c + piVar9[2]));
                  local_344 = (float)fVar10;
                  local_334 = local_344 * local_330 * local_324 + local_334;
                  break;
                case 0x81:
                  fVar10 = (float10)FUN_0043ca60((float)*(int *)((int)local_32c + piVar9[2]));
                  local_344 = (float)fVar10;
                  fVar11 = local_344 * local_330 * local_324;
                  local_334 = fVar11 * 0.5 + local_334;
                  local_33c = fVar11 * 2.0 + local_33c;
                  break;
                case 0x82:
                  fVar10 = (float10)FUN_0043ca60((float)*(int *)((int)local_32c + piVar9[2]));
                  local_344 = (float)fVar10;
                  local_334 = local_344 * local_330 * 0.25 * local_324 + local_334;
                  *(int *)((int)param_1 + 0x134) =
                       (int)(local_324 * 500.0 + (float)*(int *)((int)param_1 + 0x134));
                  break;
                case 0x83:
                  fVar10 = (float10)FUN_0043ca60((float)*(int *)((int)local_32c + piVar9[2]));
                  local_344 = (float)fVar10;
                  local_334 = local_344 * local_330 * 0.25 * local_324 + local_334;
                  *(int *)(local_338 + 0x138) =
                       (int)(local_324 * 500.0 + (float)*(int *)(local_338 + 0x138));
                }
                local_340 = (float)((int)local_340 + 1);
                iVar6 = piVar9[2];
                local_32c = (float)((int)local_32c + 8);
                piVar8 = local_318;
              } while ((int)local_340 < *(int *)(iVar6 + 0x114));
            }
            piVar9 = (int *)*piVar9;
          } while (piVar9 != piVar8);
        }
        iVar6 = local_338;
        if (5000 < *(int *)((int)param_1 + 0x134)) {
          *(undefined4 *)((int)param_1 + 0x134) = 5000;
        }
        if (5000 < *(int *)(local_338 + 0x138)) {
          *(undefined4 *)(local_338 + 0x138) = 5000;
        }
        if (0.0 < local_33c) {
          FUN_00459a30();
          pfVar2 = local_328;
          local_48 = *(undefined4 *)(iVar6 + 0x10);
          local_64 = *(undefined4 *)(iVar6 + 0xc);
          local_58 = -local_33c;
          local_44 = *(undefined4 *)(iVar6 + 0x14);
          local_40 = *(undefined4 *)(iVar6 + 0x18);
          local_3c = *(undefined4 *)(iVar6 + 0x1c);
          local_38 = *(undefined4 *)(iVar6 + 0x20);
          local_34 = *(undefined4 *)(iVar6 + 0x24);
          local_68 = *(undefined4 *)(iVar6 + 8);
          local_344 = *local_328;
          local_60 = local_68;
          local_5c = local_64;
          iVar6 = FUN_00451ee0(local_344,*(undefined4 *)((int)local_344 + 4),&local_68);
          fVar11 = pfVar2[1];
          if (fVar11 == 5.266214e-37) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          pfVar2[1] = (float)((int)fVar11 + 1);
          *(int *)((int)local_344 + 4) = iVar6;
          **(int **)(iVar6 + 4) = iVar6;
          *(float *)(local_338 + 0x16c) = *(float *)(local_338 + 0x16c) + local_33c;
          piVar8 = local_318;
        }
      }
      piVar9 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      local_c = 0xffffffff;
      local_318[1] = (int)local_318;
      local_314 = 0;
      if (piVar9 == local_318) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_318);
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(piVar9);
    }
    if (*(char *)(local_338 + 0x68) == '\x1c') {
      if (*(float *)((int)param_1 + 0x1184) <= 0.3 && *(float *)((int)param_1 + 0x1184) != 0.3) {
        *(undefined4 *)((int)param_1 + 0x1184) = 0x3e99999a;
      }
    }
    else {
      if (param_14 == '\0') goto LAB_00597e5e;
      *(undefined4 *)((int)param_1 + 0x1184) = 0x3f800000;
    }
    if (param_14 != '\0') {
      if (param_11 == '\0') {
        if (param_12 != 0x1c) {
          local_294 = 0x3f800000;
          local_2a8 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
          local_344 = (float)*(longlong *)((int)param_1 + 0x20);
          local_2a4 = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
          local_2a0 = local_344 * 1.5258789e-05;
          FUN_0043df60(&local_308);
          local_340 = -NAN;
          local_c = 2;
          if (local_304 != 0) {
            local_340 = (float)(uint)*(byte *)(*(int *)(*local_308 + 8) + 1);
          }
          if (*(char *)(iVar6 + 0x68) == 'D') {
            local_340 = 2.38221e-44;
          }
          iVar7 = rand();
          local_298 = ((float)iVar7 * 0.2) / 32767.0 + 0.9;
          if (param_4 == '\0') {
            switch(local_340) {
            case 0.0:
            case 1.4013e-45:
              local_298 = local_298 + 0.1;
            case 2.10195e-44:
            case 2.24208e-44:
              local_33c = 1.4013e-45;
              break;
            default:
              local_33c = 7.00649e-45;
              break;
            case 4.2039e-45:
            case 5.60519e-45:
              local_33c = 9.80909e-45;
              break;
            case 7.00649e-45:
              local_33c = 4.2039e-45;
              break;
            case 8.40779e-45:
            case 9.80909e-45:
            case 1.12104e-44:
              local_33c = 1.26117e-44;
            }
          }
          else {
            switch(local_340) {
            case 0.0:
            case 1.4013e-45:
              local_298 = local_298 + 0.1;
            case 2.10195e-44:
            case 2.24208e-44:
              local_33c = 2.8026e-45;
              break;
            default:
              local_33c = 8.40779e-45;
              break;
            case 4.2039e-45:
            case 5.60519e-45:
              local_33c = 1.12104e-44;
              break;
            case 7.00649e-45:
              local_33c = 5.60519e-45;
              break;
            case 8.40779e-45:
            case 9.80909e-45:
            case 1.12104e-44:
              local_33c = 1.4013e-44;
            }
          }
          FUN_00444230();
          param_9 = local_328;
          cVar3 = *(char *)(iVar6 + 0x68);
          if (cVar3 == '6') {
            local_29c = 1.54143e-44;
          }
          else {
            local_29c = local_33c;
            if (cVar3 == '\n') {
              local_29c = 7.00649e-45;
            }
          }
          FUN_004864c0(&local_2a8);
          local_c = 0xffffffff;
          FUN_004da480();
        }
      }
      else if (*(char *)(local_338 + 0x141) == '\x01') {
        local_1f4 = 0x3f800000;
        local_208 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
        local_344 = (float)*(longlong *)((int)param_1 + 0x20);
        local_204 = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
        local_1f8 = 0x3f800000;
        local_200 = local_344 * 1.5258789e-05;
        local_1fc = 0x2a;
        FUN_004864c0(&local_208);
      }
      else {
        local_1dc = 0x3f800000;
        local_1f0 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
        local_344 = (float)*(longlong *)((int)param_1 + 0x20);
        local_1ec = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
        local_1e0 = 0x3fc00000;
        local_1e8 = local_344 * 1.5258789e-05;
        local_1e4 = 0x27;
        FUN_004864c0(&local_1f0);
      }
    }
  }
LAB_00597e5e:
  local_340 = *(float *)((int)param_1 + 0x34) * *(float *)((int)param_1 + 0x34) +
              *(float *)((int)param_1 + 0x38) * *(float *)((int)param_1 + 0x38) +
              *(float *)((int)param_1 + 0x3c) * *(float *)((int)param_1 + 0x3c);
  fVar11 = *param_8 * *param_8 + param_8[1] * param_8[1] + param_8[2] * param_8[2];
  if (local_340 < fVar11) {
    local_340 = fVar11;
  }
  if (local_340 <
      *(float *)((int)param_1 + 0x34) * *(float *)((int)param_1 + 0x34) +
      *(float *)((int)param_1 + 0x38) * *(float *)((int)param_1 + 0x38) +
      *(float *)((int)param_1 + 0x3c) * *(float *)((int)param_1 + 0x3c)) {
    dVar12 = (double)(*(float *)((int)param_1 + 0x38) * *(float *)((int)param_1 + 0x38) +
                      *(float *)((int)param_1 + 0x34) * *(float *)((int)param_1 + 0x34) +
                     *(float *)((int)param_1 + 0x3c) * *(float *)((int)param_1 + 0x3c));
    libm_sse2_sqrt_precise();
    local_32c = 1.0 / (float)dVar12;
    local_344 = local_32c * *(float *)((int)param_1 + 0x34);
    local_330 = local_32c * *(float *)((int)param_1 + 0x38);
    local_32c = local_32c * *(float *)((int)param_1 + 0x3c);
    dVar12 = (double)local_340;
    libm_sse2_sqrt_precise();
    local_184 = (float)dVar12;
    local_18c = local_184 * local_344;
    local_188 = local_184 * local_330;
    local_184 = local_184 * local_32c;
    *(float *)((int)param_1 + 0x34) = local_18c;
    *(float *)((int)param_1 + 0x38) = local_188;
    *(float *)((int)param_1 + 0x3c) = local_184;
  }
  local_270 = *(undefined4 *)((int)param_1 + 0x10);
  local_26c = *(undefined4 *)((int)param_1 + 0x14);
  local_268 = *(undefined4 *)((int)param_1 + 0x18);
  local_264 = *(undefined4 *)((int)param_1 + 0x1c);
  local_260 = *(undefined4 *)((int)param_1 + 0x20);
  local_25c = *(undefined4 *)((int)param_1 + 0x24);
  local_274 = 0;
  local_24b = 0;
  if (local_338 == 0) {
    local_290 = 0;
  }
  else {
    local_290 = *(undefined8 *)(local_338 + 8);
  }
  for (puVar1 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x1178);
      puVar1 != *(undefined4 **)((int)param_1 + 0x1178); puVar1 = (undefined4 *)*puVar1) {
    if (*(char *)(puVar1 + 2) == '\x01') {
      local_334 = (float)puVar1[3] * local_334;
    }
  }
  local_288 = *(undefined4 *)((int)param_1 + 8);
  local_284 = *(undefined4 *)((int)param_1 + 0xc);
  local_27c = param_4;
  local_258 = *param_8;
  local_254 = param_8[1];
  local_250 = param_8[2];
  local_278 = 0;
  local_280 = local_334;
  local_24c = (char)param_5;
  if (param_12 == 0x11) {
    local_2f0 = *(undefined4 *)(local_338 + 8);
    fStack_2fc = local_334 * 0.1;
    uStack_2ec = *(undefined4 *)(local_338 + 0xc);
    local_344 = *(float *)((int)param_1 + 0x1178);
    local_2f8 = 3000;
    local_300 = CONCAT31(local_300._1_3_,4);
    iVar6 = FUN_00451d00(local_344,*(undefined4 *)((int)local_344 + 4),&local_300);
    if (*(int *)((int)param_1 + 0x117c) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    local_2d8 = CONCAT44(fStack_2fc,local_300);
    *(int *)((int)param_1 + 0x117c) = *(int *)((int)param_1 + 0x117c) + 1;
    local_2d0 = CONCAT44(uStack_2f4,local_2f8);
    *(int *)((int)local_344 + 4) = iVar6;
    local_2c8 = CONCAT44(uStack_2ec,local_2f0);
    **(int **)(iVar6 + 4) = iVar6;
    local_2e8 = *(undefined4 *)(local_338 + 8);
    local_2e4 = *(undefined4 *)(local_338 + 0xc);
    local_344 = param_9[0x16];
    local_2e0 = *(undefined4 *)((int)param_1 + 8);
    local_2dc = *(undefined4 *)((int)param_1 + 0xc);
    iVar6 = FUN_00451c70(local_344,*(undefined4 *)((int)local_344 + 4),&local_2e8);
    if (param_9[0x17] == 1.0030884e-35) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_9[0x17] = (float)((int)param_9[0x17] + 1);
    *(int *)((int)local_344 + 4) = iVar6;
    **(int **)(iVar6 + 4) = iVar6;
  }
  if ((param_4 != '\0') && (*(char *)((int)param_1 + 0x60) != '\x06')) {
    local_2ac = 0x3f800000;
    local_2c0 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
    local_344 = (float)*(longlong *)((int)param_1 + 0x20);
    local_2bc = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
    local_2b8 = local_344 * 1.5258789e-05;
    iVar6 = rand();
    local_2b0 = ((float)iVar6 * 0.1) / 32767.0 + 1.0;
    switch(*(undefined4 *)((int)param_1 + 100)) {
    case 0:
      local_2b4 = 0x3c;
      break;
    case 1:
      local_2b4 = 0x3d;
      break;
    case 2:
    case 0x2b:
      local_2b4 = 0x3e;
      break;
    case 3:
    case 0x2d:
      local_2b4 = 0x3f;
      break;
    case 4:
      local_2b4 = 0x40;
      break;
    case 5:
      local_2b4 = 0x41;
      break;
    default:
      goto switchD_0059829d_caseD_6;
    case 7:
      local_2b4 = 0x42;
      break;
    case 8:
      local_2b4 = 0x43;
      break;
    case 9:
      local_2b4 = 0x44;
      break;
    case 10:
      local_2b4 = 0x45;
      break;
    case 0xb:
      local_2b4 = 0x46;
      break;
    case 0xc:
      local_2b4 = 0x47;
      break;
    case 0xd:
      local_2b4 = 0x4a;
      break;
    case 0xe:
      local_2b4 = 0x4b;
      break;
    case 0xf:
      local_2b4 = 0x48;
      break;
    case 0x10:
      local_2b4 = 0x49;
      break;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
      local_2b4 = 0x4f;
      break;
    case 0x2e:
    case 0x6c:
    case 0x6d:
    case 0x72:
    case 0x73:
      local_2b4 = 0x4d;
      break;
    case 0x30:
    case 0x33:
    case 0x57:
      local_2b4 = 0x4e;
      break;
    case 0x60:
      local_2b4 = 0x50;
      break;
    case 0x77:
      local_2b4 = 0x4c;
    }
    FUN_004864c0(&local_2c0);
  }
switchD_0059829d_caseD_6:
  if (local_338 != 0) {
    if ((*(int *)((int)param_1 + 300) < -3000) && (*(char *)((int)param_1 + 0x60) != '\x06')) {
      cVar3 = *(char *)(local_338 + 0x68);
      if ((cVar3 == ':') ||
         ((((cVar3 == '\f' || (cVar3 == 'D')) || (cVar3 == ']')) || (cVar3 == 'E')))) {
        param_6 = 1.0;
      }
      cVar3 = FUN_004445d0();
      if (cVar3 != '\0') {
        param_6 = param_6 * 0.15;
      }
      cVar3 = FUN_004445d0();
      if ((cVar3 == '\0') && (*(char *)(local_338 + 0x60) != '\0')) {
        param_6 = param_6 * 0.1;
      }
      if ((*(char *)(local_338 + 0x68) == '[') || (*(char *)(local_338 + 0x68) == 'J')) {
        param_6 = 1.0;
      }
      if (*(char *)((int)param_1 + 0x68) == 'T') {
        param_6 = 1.0;
      }
      fVar10 = (float10)FUN_0043ca60((float)*(int *)(local_338 + 400));
      local_344 = (float)fVar10;
      fVar10 = (float10)FUN_0043ca60((float)*(int *)((int)param_1 + 400));
      local_340 = (float)fVar10;
      auVar13 = ZEXT816(0x4000000000000000);
      libm_sse2_pow_precise();
      param_6 = (float)auVar13._0_8_ * param_6;
      if (1.0 < param_6) {
        param_6 = 1.0;
      }
      local_340 = param_6 * 0.9;
      for (puVar1 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x1178);
          puVar1 != *(undefined4 **)((int)param_1 + 0x1178); puVar1 = (undefined4 *)*puVar1) {
        if (*(char *)(puVar1 + 2) == '\x01') {
          local_340 = 0.0;
        }
      }
      iVar6 = rand();
      if ((float)iVar6 / 32767.0 < local_340) {
        local_278 = FUN_00444ff0();
        local_20c = 0x3f800000;
        local_250 = 10.0;
        local_220 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
        local_21c = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
        local_344 = param_9[2];
        local_218 = (float)*(longlong *)((int)param_1 + 0x20) * 1.5258789e-05;
        local_210 = 0x3f800000;
        local_214 = 0x17;
        iVar6 = FUN_0058d860(local_344,*(undefined4 *)((int)local_344 + 4),&local_220);
        if (param_9[3] == 3.8518594e-34) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        param_9[3] = (float)((int)param_9[3] + 1);
        *(int *)((int)local_344 + 4) = iVar6;
        **(int **)(iVar6 + 4) = iVar6;
      }
    }
    uVar4 = local_24b._1_1_;
    if (*(char *)(local_338 + 0x68) == '\x1c') {
      uVar4 = 1;
    }
    local_24b = CONCAT11(uVar4,(undefined1)local_24b);
  }
  fVar11 = *param_9;
  iVar6 = FUN_00451ee0(fVar11,*(undefined4 *)((int)fVar11 + 4),&local_290);
  if (param_9[1] == 5.266214e-37) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_9[1] = (float)((int)param_9[1] + 1);
  *(int *)((int)fVar11 + 4) = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  if (*(char *)(local_320 + 0xb4) == '\0') {
    FUN_00595a60(&local_290,param_9,local_31c);
  }
LAB_005986d7:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_348);
  return;
}


/* FUN_005988a0 @ 005988a0  kind=gamemisc  attributed-by=caller-vote  size=143 */

undefined1 FUN_005988a0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  
  if (param_1 == param_2) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x60) == '\x06') || (*(char *)(param_2 + 0x60) == '\x06')) {
    return 1;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
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


/* FUN_0059a800 @ 0059a800  kind=gamemisc  attributed-by=caller-vote  size=431 */

void FUN_0059a800(undefined8 *param_1,undefined8 *param_2,float param_3,char param_4,int param_5,
                 int param_6)

{
  undefined8 *puVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  float local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar5 = 0;
  if (0 < *(int *)(param_5 + 0x114)) {
    pbVar3 = (byte *)(param_5 + 0x17);
    do {
      if (0x7f < *pbVar3) {
        local_60 = *param_1;
        local_58 = param_1[1];
        local_50 = param_1[2];
        local_48 = *param_2;
        local_40 = *(float *)(param_2 + 1);
        local_20 = 0x40400000;
        local_2c = 0x3dcccccd;
        local_24 = 2;
        local_18 = 0x3f800000;
        iVar4 = (int)(param_3 * 3.0 + 1.0);
        local_14 = 0x3f800000;
        local_10 = 0x3f800000;
        local_c = 0x3f800000;
        local_28 = iVar4;
        puVar1 = (undefined8 *)FUN_004c7250(local_70,*pbVar3,&local_18,param_3 * 0.5);
        local_3c = *puVar1;
        local_34 = puVar1[1];
        if (param_4 != '\0') {
          local_28 = iVar4 + 10;
          local_48 = CONCAT44(local_48._4_4_ * 2.0,(float)local_48 * 2.0);
          local_40 = local_40 * 2.0;
        }
        iVar4 = *(int *)(param_6 + 0x10);
        iVar2 = FUN_004520d0(iVar4,*(undefined4 *)(iVar4 + 4),&local_60);
        if (*(int *)(param_6 + 0x14) == 0x3333332) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        *(int *)(param_6 + 0x14) = *(int *)(param_6 + 0x14) + 1;
        *(int *)(iVar4 + 4) = iVar2;
        **(int **)(iVar2 + 4) = iVar2;
      }
      iVar5 = iVar5 + 1;
      pbVar3 = pbVar3 + 8;
    } while (iVar5 < *(int *)(param_5 + 0x114));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0059aa60 @ 0059aa60  kind=gamemisc  attributed-by=caller-vote  size=144 */

undefined2 * FUN_0059aa60(undefined2 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x800104);
  cVar1 = *(char *)((int)puVar2[1] + 0xd);
  puVar4 = puVar2;
  puVar6 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((int)puVar6[4] < (int)param_2) {
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
  if ((puVar4 == puVar2) || (bVar3 = (int)param_2 < (int)puVar4[4], param_2 = puVar4, bVar3)) {
    param_2 = puVar2;
  }
  if (param_2 != puVar2) {
    *(undefined4 *)(param_1 + 10) = 7;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = 0;
    FUN_0040f680(param_2 + 5,0,0xffffffff);
    return param_1;
  }
  FUN_0040eb60(&PTR_006fccac);
  return param_1;
}


/* FUN_0059c800 @ 0059c800  kind=gamemisc  attributed-by=caller-vote  size=50 */

void FUN_0059c800(int *param_1,int param_2)

{
  int in_ECX;
  
  FUN_00449c00(param_2 + 0x148,*(undefined4 *)(in_ECX + 4),param_2,param_2);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + -0x148;
  *param_1 = param_2;
  return;
}


/* FUN_0059cff0 @ 0059cff0  kind=gamemisc  attributed-by=caller-vote  size=1395 */

void FUN_0059cff0(undefined1 *param_1,int param_2)

{
  char cVar1;
  undefined1 local_124;
  undefined1 local_123;
  undefined4 local_120;
  undefined4 local_11c;
  undefined2 local_118;
  undefined1 local_116;
  undefined2 local_114;
  undefined1 local_110 [256];
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0042c5e0(param_1);
  local_123 = 0;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_116 = 0;
  local_10 = 0;
  memset(local_110,0,0x100);
  local_114 = 1;
  local_124 = 0xb;
  switch(*param_1) {
  case 1:
    switch(param_1[1]) {
    case 1:
      local_c = 1;
      local_123 = 0x16;
      FUN_005a0d80(&local_124);
      local_123 = 0x1a;
      FUN_005a0d80(&local_124);
      break;
    case 2:
      local_c = 1;
      local_123 = 0x17;
      FUN_005a0d80(&local_124);
      local_123 = 0xc;
      local_118 = CONCAT11(0x18,(undefined1)local_118);
      FUN_005a0d80(&local_124);
      break;
    case 4:
      local_123 = 0x14;
      goto LAB_0059d4d0;
    case 5:
      local_c = 1;
      local_123 = 0x1b;
      FUN_005a0d80(&local_124);
      break;
    case 6:
      local_c = 1;
      local_123 = 0xf;
      FUN_005a0d80(&local_124);
      local_123 = 0x15;
      goto LAB_0059d4d0;
    case 8:
      local_c = 1;
      local_123 = 0x11;
      FUN_005a0d80(&local_124);
      break;
    case 9:
      local_123 = 0x10;
LAB_0059d4d0:
      local_c = 1;
      FUN_005a0d80(&local_124);
      *(undefined4 *)(param_2 + 0x118) = 9;
    }
    break;
  case 3:
    switch(param_1[1]) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 0xd:
      local_c = 8;
      goto LAB_0059d1c7;
    case 4:
      local_c = 6;
      local_123 = 10;
      local_118 = CONCAT11(1,(undefined1)local_118);
      FUN_005a0d80(&local_124);
      local_c = 2;
      local_123 = 9;
      local_118 = CONCAT11(0x1b,(undefined1)local_118);
      goto LAB_0059d1dc;
    case 5:
    case 0xf:
    case 0x10:
    case 0x11:
      local_c = 0x10;
LAB_0059d1c7:
      local_123 = 10;
      local_118 = CONCAT11(1,(undefined1)local_118);
      goto LAB_0059d1dc;
    case 6:
      local_c = 0xf;
      goto LAB_0059d0aa;
    case 7:
      local_c = 6;
      local_123 = 10;
      local_118 = CONCAT11(1,(undefined1)local_118);
      FUN_005a0d80(&local_124);
      local_c = 9;
LAB_0059d0aa:
      local_123 = 10;
      local_118 = CONCAT11(2,(undefined1)local_118);
      FUN_005a0d80(&local_124);
      local_c = 1;
      local_123 = 9;
      local_118 = CONCAT11(0x1a,(undefined1)local_118);
LAB_0059d0df:
      FUN_005a0d80(&local_124);
      *(undefined4 *)(param_2 + 0x118) = 8;
      break;
    case 8:
    case 10:
    case 0xb:
      local_c = 0x10;
      local_123 = 10;
      local_118 = CONCAT11(2,(undefined1)local_118);
      goto LAB_0059d0df;
    case 0xc:
      local_118 = CONCAT11(param_1[0xd],(undefined1)local_118);
      local_c = 8;
      local_123 = 10;
      *(undefined4 *)(param_2 + 0x118) = 4;
      FUN_005a0d80(&local_124);
    }
    break;
  case 4:
    local_c = 0x14;
    goto LAB_0059d1fd;
  case 5:
    local_c = 6;
    goto LAB_0059d1fd;
  case 6:
  case 7:
    local_c = 8;
LAB_0059d1fd:
    if (param_1[0xd] == '\x01') {
      local_123 = 10;
      local_118 = CONCAT11(1,(undefined1)local_118);
LAB_0059d1dc:
      FUN_005a0d80(&local_124);
      *(undefined4 *)(param_2 + 0x118) = 4;
    }
    else {
      local_118 = CONCAT11(param_1[0xd],(undefined1)local_118);
      local_123 = 9;
      FUN_005a0d80(&local_124);
      *(undefined4 *)(param_2 + 0x118) = 6;
    }
    break;
  case 8:
    local_c = 6;
    local_123 = 10;
LAB_0059d264:
    local_118 = CONCAT11(param_1[0xd],(undefined1)local_118);
    FUN_005a0d80(&local_124);
    break;
  case 9:
    local_118 = CONCAT11(param_1[0xd],(undefined1)local_118);
    local_c = 3;
    local_123 = 10;
    FUN_005a0d80(&local_124);
    break;
  case 0xb:
    switch(param_1[1]) {
    case 9:
      cVar1 = param_1[0xd];
      if (cVar1 == '\x19') {
        local_123 = 6;
        local_118 = local_118 & 0xff;
      }
      else if (cVar1 == '\x1a') {
        local_123 = 5;
        local_118 = CONCAT11(0x15,(undefined1)local_118);
      }
      else {
        if (cVar1 != '\x1b') break;
        local_123 = 0xb;
        local_118 = CONCAT11(0x1b,(undefined1)local_118);
      }
      local_c = 1;
      FUN_005a0d80(&local_124);
      *(undefined4 *)(param_2 + 0x118) = 5;
      break;
    case 10:
      local_c = 1;
      if (param_1[0xd] == '\x02') {
        local_123 = 1;
        *(undefined4 *)(param_2 + 0x118) = 7;
      }
      else {
        local_123 = 0;
        *(undefined4 *)(param_2 + 0x118) = 3;
      }
      goto LAB_0059d264;
    case 0x16:
      local_123 = 0x18;
      local_118 = local_118 & 0xff;
      goto LAB_0059d4d0;
    case 0x1a:
      local_c = 1;
      local_123 = 0xc;
      local_118 = CONCAT11(0x18,(undefined1)local_118);
      FUN_005a0d80(&local_124);
      *(undefined4 *)(param_2 + 0x118) = 1;
    }
  }
  switch(param_1[0xc]) {
  case 1:
    local_118 = 0xd01;
    break;
  case 2:
    local_118 = 0xe02;
    break;
  case 3:
    local_118 = 0xf03;
    break;
  case 4:
    local_118 = 0x1004;
    break;
  default:
    goto switchD_0059d4fd_default;
  }
  local_c = 2;
  local_123 = 0;
  FUN_005a0d80(&local_124);
switchD_0059d4fd_default:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0059d640 @ 0059d640  kind=gamemisc  attributed-by=caller-vote  size=5865 */

void FUN_0059d640(undefined4 *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  float10 fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
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
  float local_c;
  
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  dVar7 = (double)ABS(((float)*(int *)(in_ECX + 0x80015c) * 2.0) / 8.64e+07 - 1.0);
  libm_sse2_pow_precise();
  dVar7 = (double)(1.0 - (float)dVar7);
  libm_sse2_pow_precise();
  fVar8 = (float)dVar7;
  iVar3 = FUN_0042f860(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],0);
  bVar1 = *(byte *)(iVar3 + 3);
  local_a8 = 0.9;
  local_74 = 0.9;
  local_e0 = 0.3;
  local_d0 = 0.3;
  *param_7 = 0.4;
  param_7[1] = 0.4;
  param_7[2] = 0.4;
  param_7[3] = 1.0;
  local_80 = 0.1;
  local_98 = 0.6;
  local_78 = 1.0;
  local_64 = 1.0;
  local_c0 = 1.0;
  local_5c = 0.5;
  local_60 = 1.0;
  local_50 = 1.0;
  local_a4 = 1.0;
  local_cc = 0.01;
  local_9c = 0.01;
  local_90 = 0.05;
  local_88 = 1.0;
  local_70 = 1.0;
  local_8c = 0.01;
  local_30 = 0.2;
  local_4c = 0.1;
  local_94 = 0.8;
  local_44 = 0.8;
  local_38 = 1.0;
  local_dc = 0.5;
  local_ec = 0.0;
  local_d4 = 0.0;
  local_d8 = 0.5;
  local_e8 = 1.0;
  local_58 = 0.1;
  local_6c = 1.0;
  local_54 = 1.0;
  local_a0 = 1.0;
  local_34 = 0.9;
  local_40 = 0.8;
  local_48 = 1.0;
  local_e4 = 0.5;
  local_bc = 0.2;
  local_20 = 0.6;
  local_84 = 1.0;
  local_b4 = 0.0;
  local_b8 = 0.0;
  local_28 = 0.1;
  local_2c = 1.0;
  uVar4 = __alldiv(param_1[2],param_1[3],0x10000,0);
  uVar5 = __alldiv(*param_1,param_1[1],0x10000,0);
  fVar6 = (float10)FUN_005c4dd0(uVar5,uVar4);
  fVar12 = (float)fVar6;
  uVar4 = __alldiv(param_1[2],param_1[3],0x10000,0);
  uVar5 = __alldiv(*param_1,param_1[1],0x10000,0);
  fVar6 = (float10)FUN_005c4800(uVar5,uVar4);
  fVar10 = (float)fVar6;
  if ((0.6 < fVar12) && (fVar10 < 0.4)) {
    fVar9 = (1.0 - fVar10 / 0.4) * ((fVar12 - 0.6) / 0.4);
    local_8c = fVar9 * 0.79 + 0.01;
    local_58 = fVar9 * 0.59999996 + 0.1;
    local_6c = fVar9 * -0.19999999 + 1.0;
    local_54 = fVar9 * 0.0 + 1.0;
  }
  if ((0.3 < fVar12) && (0.6 < fVar10)) {
    local_88 = ((fVar12 - 0.3) / 0.7) * 4.0;
    if (1.0 < local_88) {
      local_88 = 1.0;
    }
    uVar4 = __alldiv(param_1[2],param_1[3],0x10000,0);
    uVar5 = __alldiv(*param_1,param_1[1],0x10000,0);
    fVar6 = (float10)FUN_005f0720(uVar5,uVar4);
    fVar9 = (1.0 - (float)fVar6) * (((fVar10 - 0.6) * local_88) / 0.4);
    local_8c = local_8c + fVar9 * (0.0 - local_8c);
    local_54 = fVar9 * (1.0 - local_54) + local_54;
    local_58 = local_58 + fVar9 * (0.7 - local_58);
    local_6c = local_6c + fVar9 * (0.5 - local_6c);
    local_98 = fVar9 * 0.29999995 + 0.6;
    local_70 = fVar9 * 0.0;
    local_78 = local_70 + 1.0;
    local_80 = fVar9 * 0.4 + 0.1;
    local_64 = local_70 + 1.0;
    local_9c = fVar9 * -0.01 + 0.01;
    local_90 = fVar9 * 0.55 + 0.05;
    local_88 = fVar9 * -0.100000024 + 1.0;
    local_70 = local_70 + 1.0;
  }
  if (fVar10 < 0.4) {
    fVar10 = 1.0 - fVar10 / 0.4;
    local_98 = (0.8 - local_98) * fVar10 + local_98;
    local_78 = (1.0 - local_78) * fVar10 + local_78;
    local_80 = (0.6 - local_80) * fVar10 + local_80;
    local_64 = (1.0 - local_64) * fVar10 + local_64;
    local_9c = (0.1 - local_9c) * fVar10 + local_9c;
    local_90 = (0.4 - local_90) * fVar10 + local_90;
    local_88 = local_88 + (1.0 - local_88) * fVar10;
    local_70 = local_70 + (1.0 - local_70) * fVar10;
  }
  *param_7 = 0.6;
  param_7[1] = 0.6;
  param_7[2] = 0.4;
  param_7[3] = 1.0;
  if (fVar12 < 0.2) {
    fVar12 = fVar12 / 0.2;
    fVar10 = 1.0 - fVar12;
    *param_7 = fVar10 * 0.3 + fVar12 * 0.6;
    param_7[1] = fVar10 * 0.4 + fVar12 * 0.6;
    param_7[2] = fVar10 * 0.6 + fVar12 * 0.4;
    param_7[3] = fVar10 + fVar12;
  }
  uVar4 = __alldiv(param_1[2],param_1[3],0x10000,0);
  uVar5 = __alldiv(*param_1,param_1[1],0x10000,0);
  fVar6 = (float10)FUN_005ef040(uVar5,uVar4);
  fVar12 = (float)fVar6;
  if (0.0 < fVar12) {
    fVar10 = 1.0 - fVar12;
    local_20 = fVar12 * 0.0;
    local_64 = fVar12 + local_64 * fVar10;
    local_98 = local_20 + local_98 * fVar10;
    local_80 = fVar12 + local_80 * fVar10;
    local_78 = local_20 + local_78 * fVar10;
    local_e4 = fVar10 * 0.5;
    local_5c = local_20 + local_e4;
    local_60 = fVar12 + fVar10;
    local_28 = fVar12 * 0.1;
    local_c0 = fVar12 * 0.8 + fVar10;
    local_74 = local_28 + fVar10 * 0.9;
    local_a4 = fVar12 + fVar10;
    local_50 = fVar12 * 0.8 + fVar10;
    local_e0 = local_28 + fVar10 * 0.3;
    local_d0 = local_20 + fVar10 * 0.3;
    local_b8 = fVar12 * 0.2;
    local_90 = local_b8 + local_90 * fVar10;
    local_9c = fVar12 * 0.4 + local_9c * fVar10;
    local_88 = local_b8 + local_88 * fVar10;
    local_70 = fVar12 + local_70 * fVar10;
    local_4c = local_b8 + fVar10 * 0.1;
    local_30 = local_b8 + fVar10 * 0.2;
    local_38 = fVar12 + fVar10;
    local_e8 = fVar12 + fVar10;
    local_44 = local_b8 + fVar10 * 0.8;
    fVar9 = fVar10 * 0.0;
    local_dc = local_b8 + local_e4;
    local_d8 = local_b8 + local_e4;
    local_b4 = fVar12 * 0.3;
    local_d4 = local_b8 + fVar9;
    local_8c = local_b4 + local_8c * fVar10;
    local_58 = local_20 + local_58 * fVar10;
    local_6c = local_20 + local_6c * fVar10;
    local_34 = local_20 + fVar10 * 0.9;
    local_54 = fVar12 + local_54 * fVar10;
    local_40 = local_20 + fVar10 * 0.8;
    local_a0 = local_b4 + fVar10;
    local_e4 = local_b4 + local_e4;
    local_48 = fVar12 + fVar10;
    local_b4 = local_b4 + fVar9;
    local_20 = local_20 + fVar10 * 0.6;
    local_bc = local_28 + fVar10 * 0.2;
    local_b8 = local_b8 + fVar9;
    local_84 = fVar12 + fVar10;
    local_2c = fVar10 + fVar12;
    local_28 = local_28 + fVar10 * 0.1;
  }
  fVar9 = 1.0 - fVar8;
  fVar10 = fVar9 * 0.0;
  param_2[1] = fVar8 * 0.8 + fVar10;
  *param_2 = fVar8 * 0.5 + fVar10;
  param_2[2] = fVar8 + fVar9 * 0.2;
  param_2[3] = fVar8 + fVar9;
  *param_3 = fVar8 * 0.0 + fVar10;
  param_3[1] = fVar8 * 0.0 + fVar10;
  param_3[2] = fVar8 + fVar10;
  param_3[3] = fVar8 + fVar9;
  if (fVar8 <= 0.75) {
    if (fVar8 <= 0.6) {
      if (fVar8 <= 0.4) {
        fVar10 = fVar8 / 0.4;
        fVar9 = 1.0 - fVar10;
        fVar11 = fVar9 * 0.0;
        param_2[3] = fVar9 + fVar10 * local_a4;
        *param_2 = fVar9 * 0.05 + fVar10 * local_50;
        param_2[1] = fVar11 + fVar10 * local_e0;
        param_2[2] = fVar9 * 0.1 + fVar10 * local_d0;
        param_3[2] = fVar9 * 0.1 + fVar10 * local_d8;
        *param_3 = fVar11 + fVar10 * local_dc;
        param_3[3] = fVar9 + fVar10 * local_e8;
        local_a0 = fVar9 * local_b4;
        local_34 = fVar9 * local_b8;
        local_40 = fVar9 * local_28;
        param_3[1] = fVar11 + fVar10 * local_d4;
        param_4[3] = fVar9 * local_2c + fVar10 * local_84;
      }
      else {
        fVar9 = (fVar8 - 0.4) / 0.2;
        fVar10 = 1.0 - fVar9;
        param_2[3] = fVar9 * local_60 + fVar10 * local_a4;
        *param_2 = fVar9 * local_c0 + fVar10 * local_50;
        param_2[2] = fVar9 * local_5c + fVar10 * local_d0;
        param_2[1] = fVar9 * local_74 + fVar10 * local_e0;
        *param_3 = fVar9 * local_30 + fVar10 * local_dc;
        param_3[2] = fVar9 * local_44 + fVar10 * local_d8;
        param_3[3] = fVar9 * local_38 + fVar10 * local_e8;
        param_3[1] = fVar9 * local_4c + fVar10 * local_d4;
        local_a0 = fVar9 * local_a0;
        local_34 = fVar9 * local_34;
        local_40 = fVar9 * local_40;
        param_4[3] = fVar9 * local_48 + fVar10 * local_84;
      }
      local_40 = local_40 + fVar10 * local_20;
      local_34 = local_34 + fVar10 * local_bc;
      *param_4 = local_a0 + fVar10 * local_e4;
    }
    else {
      fVar9 = (fVar8 - 0.6) / 0.15;
      fVar10 = 1.0 - fVar9;
      param_2[1] = fVar9 * local_98 + local_74 * fVar10;
      param_2[2] = fVar9 * local_78 + local_5c * fVar10;
      *param_2 = fVar9 * local_80 + local_c0 * fVar10;
      param_2[3] = fVar9 * local_64 + local_60 * fVar10;
      param_3[1] = fVar9 * local_90 + local_4c * fVar10;
      param_3[2] = fVar9 * local_88 + local_44 * fVar10;
      *param_3 = fVar9 * local_9c + local_30 * fVar10;
      param_3[3] = fVar9 * local_70 + local_38 * fVar10;
      local_34 = fVar9 * local_58 + local_34 * fVar10;
      local_40 = fVar9 * local_6c + local_40 * fVar10;
      *param_4 = fVar9 * local_8c + local_a0 * fVar10;
      param_4[3] = fVar9 * local_54 + local_48 * fVar10;
    }
    param_4[2] = local_40;
    param_4[1] = local_34;
  }
  else {
    *param_2 = local_80;
    param_2[2] = local_78;
    param_2[3] = local_64;
    param_2[1] = local_98;
    *param_3 = local_9c;
    param_3[1] = local_90;
    param_3[2] = local_88;
    param_3[3] = local_70;
    *param_4 = local_8c;
    param_4[1] = local_58;
    param_4[2] = local_6c;
    param_4[3] = local_54;
  }
  if ((bVar1 & 0x1f) == 2) {
    param_2[2] = fVar8;
    param_2[3] = 1.0;
    *param_2 = fVar8 * 0.1;
    param_2[1] = fVar8 * 0.15;
    *param_3 = fVar8 * 0.1;
    param_3[1] = fVar8 * 0.15;
    param_3[2] = fVar8;
    param_3[3] = 1.0;
  }
  local_38 = 0.02;
  local_bc = 0.02;
  local_7c = 1.1;
  local_24 = 1.1;
  local_30 = 0.03;
  local_74 = 0.01;
  fVar10 = 0.6;
  local_48 = 1.0;
  local_40 = 0.9;
  local_34 = 1.0;
  local_50 = 0.5;
  local_60 = 0.6;
  local_5c = 1.0;
  local_20 = 0.6;
  local_44 = 0.5;
  local_4c = 1.0;
  local_b0 = 0.0;
  if (fVar12 <= 0.0) {
    local_3c = local_c;
    local_84 = local_c;
  }
  else {
    fVar11 = 1.0 - fVar12;
    local_20 = fVar12 * 0.8;
    fVar13 = fVar12 * 0.0;
    local_7c = fVar12 + fVar11 * 1.1;
    local_24 = local_20 + fVar11 * 1.1;
    local_a8 = fVar12 * 0.1 + fVar11 * 0.9;
    local_ec = fVar13 + fVar11 * 0.0;
    local_48 = local_20 + fVar11;
    local_34 = fVar13 + fVar11;
    fVar9 = fVar11 * 0.6;
    local_40 = local_20 + fVar11 * 0.9;
    local_cc = fVar12 + fVar11 * 0.01;
    fVar10 = fVar13 + fVar9;
    local_38 = local_20 + fVar11 * 0.02;
    local_74 = fVar12 * 0.1 + fVar11 * 0.01;
    local_3c = fVar13 + fVar11 * local_c;
    local_50 = fVar12 + fVar11 * 0.5;
    local_60 = fVar12 * 0.5 + fVar9;
    local_94 = fVar12 * 0.5 + fVar11 * 0.8;
    local_5c = fVar13 + fVar11;
    local_20 = local_20 + fVar9;
    local_44 = fVar12 * 0.4 + fVar11 * 0.5;
    local_4c = fVar12 * 0.4 + fVar11;
    local_84 = fVar13 + fVar11 * local_c;
    local_bc = fVar12 * 0.3 + fVar11 * 0.02;
    local_b0 = fVar12 * 0.7 + fVar11 * 0.0;
    local_30 = fVar12 * 0.3 + fVar11 * 0.03;
    local_c = fVar13 + local_c * fVar11;
  }
  if (fVar8 <= 0.5) {
    fVar8 = fVar8 * 2.0;
    fVar12 = 1.0 - fVar8;
    param_5[1] = fVar12 * local_38 + fVar8 * local_40;
    param_5[2] = fVar12 * local_74 + fVar8 * fVar10;
    param_5[3] = fVar12 * local_3c + fVar8 * local_34;
    *param_5 = fVar12 * local_cc + fVar8 * local_48;
    fVar9 = fVar12 * local_bc + fVar8 * local_44;
    fVar10 = fVar12 * local_30 + fVar8 * local_4c;
    *param_6 = fVar12 * local_b0 + fVar8 * local_20;
    param_6[3] = fVar12 * local_c + fVar8 * local_84;
  }
  else {
    fVar12 = (fVar8 - 0.5) * 2.0;
    fVar8 = 1.0 - fVar12;
    *param_5 = fVar12 * local_7c + fVar8 * local_48;
    param_5[1] = fVar12 * local_24 + fVar8 * local_40;
    param_5[2] = fVar12 * local_a8 + fVar8 * fVar10;
    param_5[3] = fVar12 * local_ec + local_34 * fVar8;
    fVar9 = fVar12 * local_60 + local_44 * fVar8;
    fVar10 = fVar12 * local_94 + local_4c * fVar8;
    *param_6 = fVar12 * local_50 + local_20 * fVar8;
    param_6[3] = fVar12 * local_5c + fVar8 * local_84;
  }
  param_6[2] = fVar10;
  param_6[1] = fVar9;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0059f070 @ 0059f070  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_0059f070(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 local_c [8];
  
  puVar2 = (undefined4 *)FUN_0058e7d0(local_c,0,param_2,DAT_0076b7ca);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *param_1 = *puVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


/* FUN_0059f850 @ 0059f850  kind=gamemisc  attributed-by=caller-vote  size=806 */

void FUN_0059f850(uint *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50 [13];
  int local_1c;
  int local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = 0.0;
  local_10 = 0.0;
  local_c = 0.2;
  iVar9 = 0;
  do {
    uVar11 = FUN_0068d946();
    local_50[iVar9 * 2 + 6] = (uint)uVar11;
    local_50[iVar9 * 2 + 7] = (uint)((ulonglong)uVar11 >> 0x20);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  iVar9 = 0;
  local_14 = *param_2 * 0.5;
  local_10 = param_2[1] * 0.5;
  local_c = param_2[2] * 0.5;
  do {
    uVar11 = FUN_0068d946();
    local_50[iVar9 * 2] = (uint)uVar11;
    local_50[iVar9 * 2 + 1] = (uint)((ulonglong)uVar11 >> 0x20);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  uVar10 = *param_1;
  uVar8 = param_1[1];
  uVar7 = param_1[2];
  uVar6 = param_1[3];
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_50[0xc] = (uVar10 - local_50[0]) - local_50[6];
  local_1c = (((uVar8 - local_50[1]) - (uint)(uVar10 < local_50[0])) - local_50[7]) -
             (uint)(uVar10 - local_50[0] < local_50[6]);
  local_18 = (uVar7 - local_50[2]) - local_50[8];
  local_14 = (float)((((uVar6 - local_50[3]) - (uint)(uVar7 < local_50[2])) - local_50[9]) -
                    (uint)(uVar7 - local_50[2] < local_50[8]));
  local_10 = (float)((uVar1 - local_50[4]) - local_50[10]);
  local_c = (float)((((uVar2 - local_50[5]) - (uint)(uVar1 < local_50[4])) - local_50[0xb]) -
                   (uint)(uVar1 - local_50[4] < local_50[10]));
  FUN_0042f040(local_50 + 3,local_50 + 0xc);
  local_14 = *param_2 * 0.5;
  local_10 = param_2[1] * 0.5;
  iVar9 = 0;
  local_c = param_2[2] * 0.5;
  do {
    uVar11 = FUN_0068d946();
    local_50[iVar9 * 2 + 6] = (uint)uVar11;
    local_50[iVar9 * 2 + 7] = (uint)((ulonglong)uVar11 >> 0x20);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  local_68 = uVar10 + local_50[6];
  local_64 = uVar8 + local_50[7] + (uint)CARRY4(uVar10,local_50[6]);
  local_60 = uVar7 + local_50[8];
  local_5c = uVar6 + local_50[9] + (uint)CARRY4(uVar7,local_50[8]);
  local_58 = uVar1 + local_50[10];
  local_54 = uVar2 + local_50[0xb] + (uint)CARRY4(uVar1,local_50[10]);
  FUN_0042f040(&local_14,&local_68);
  fVar5 = local_10;
  uVar10 = local_50[4];
  uVar8 = local_50[3];
  if ((int)local_50[3] <= (int)local_14) {
    do {
      uVar7 = uVar10;
      if ((int)uVar10 <= (int)fVar5) {
        do {
          if (((((int)uVar8 < 0) || ((int)uVar10 < 0)) || (0xffffff < (int)uVar8)) ||
             ((0xffffff < (int)uVar10 ||
              (iVar9 = FUN_00434d10((int)(uVar8 + ((int)uVar8 >> 0x1f & 0xffU)) >> 8,
                                    (int)(uVar10 + ((int)uVar10 >> 0x1f & 0xffU)) >> 8), iVar9 == 0)
              ))) {
LAB_0059fb2f:
            puVar4 = &DAT_0076b7d4;
          }
          else {
            uVar7 = uVar10 & 0x800000ff;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
            }
            uVar6 = uVar8 & 0x800000ff;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
            }
            iVar9 = (uVar7 * 0x100 + uVar6) * 0x20 + *(int *)(iVar9 + 0xa8);
            if ((iVar9 == 0) || (iVar3 = *(int *)(iVar9 + 0x10), (int)local_50[5] < iVar3))
            goto LAB_0059fb2f;
            if ((int)local_50[5] < *(int *)(iVar9 + 0x1c) + iVar3) {
              puVar4 = (undefined *)FUN_0042f730(local_50[5] - iVar3);
              if ((((puVar4[3] & 0x1f) == 0) && ((int)local_50[5] < 1)) && ((puVar4[3] & 0x40) == 0)
                 ) {
                puVar4 = &DAT_0076b7cc;
              }
            }
            else {
              puVar4 = &DAT_0076b7cc;
              if (0 < (int)local_50[5]) {
                puVar4 = &DAT_0076b7d0;
              }
            }
          }
          if (((puVar4[3] & 0x1f) != 0) && ((puVar4[3] & 0x1f) != 2)) {
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          uVar10 = uVar10 + 1;
          fVar5 = local_10;
          uVar7 = local_50[4];
        } while ((int)uVar10 <= (int)local_10);
      }
      uVar8 = uVar8 + 1;
      uVar10 = uVar7;
    } while ((int)uVar8 <= (int)local_14);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0059fb90 @ 0059fb90  kind=gamemisc  attributed-by=caller-vote  size=81 */

int FUN_0059fb90(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00434d10(*param_1,param_1[1]);
  if ((iVar2 != 0) && (iVar1 = param_1[2], -1 < iVar1)) {
    if (iVar1 < (*(int *)(iVar2 + 0x34) - *(int *)(iVar2 + 0x30)) / 0x148) {
      return *(int *)(iVar2 + 0x30) + iVar1 * 0x148;
    }
  }
  return 0;
}


/* FUN_0059fea0 @ 0059fea0  kind=gamemisc  attributed-by=caller-vote  size=166 */

float10 FUN_0059fea0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte bVar5;
  
  uVar1 = __alldiv(param_1[4],param_1[5],0x10000,0);
  uVar2 = __alldiv(param_1[2],param_1[3],0x10000,0);
  uVar3 = __alldiv(*param_1,param_1[1],0x10000,0);
  pbVar4 = (byte *)FUN_0042f7e0(uVar3,uVar2,uVar1,0);
  bVar5 = pbVar4[3] & 0x1f;
  if (bVar5 == 0xd) {
    bVar5 = 0xff;
  }
  else if (((pbVar4[3] & 0x1f) == 0) || (bVar5 == 2)) {
    bVar5 = *pbVar4;
    if (bVar5 < 5) {
      bVar5 = 5;
    }
  }
  else {
    bVar5 = 0;
  }
  return (float10)((float)bVar5 / 255.0);
}


/* FUN_005a03d0 @ 005a03d0  kind=gamemisc  attributed-by=caller-vote  size=1244 */

void FUN_005a03d0(uint *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int local_80;
  int local_7c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_3c;
  undefined8 local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f20fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = __alldiv(*param_2,param_2[1],0x10000,0);
  iVar2 = __alldiv(param_2[2],param_2[3],0x10000,0);
  iVar8 = 0;
  piVar3 = (int *)FUN_00439600(0,0);
  uVar9 = ((int)((iVar1 >> 0x1f & 0xffU) + iVar1) >> 8) - 1;
  local_8 = 0;
  local_80 = -1;
  do {
    local_7c = -1;
    uVar11 = ((int)((iVar2 >> 0x1f & 0xffU) + iVar2) >> 8) - 1;
    do {
      if ((((-1 < (int)uVar9) && (-1 < (int)uVar11)) && ((int)uVar9 < 0x10000)) &&
         ((int)uVar11 < 0x10000)) {
        iVar1 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 0x3fU)) >> 6;
        iVar6 = (int)(((int)uVar11 >> 0x1f & 0x3fU) + uVar11) >> 6;
        if (((-1 < iVar1) && (-1 < iVar6)) &&
           ((iVar1 < 0x400 &&
            ((iVar6 < 0x400 &&
             (iVar1 = *(int *)(in_ECX + 0xbc + (iVar1 * 0x400 + iVar6) * 4), iVar1 != 0)))))) {
          uVar7 = uVar9 & 0x8000003f;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
          }
          uVar4 = uVar11 & 0x8000003f;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
          }
          iVar1 = *(int *)(iVar1 + 0x10018 + (uVar7 * 0x40 + uVar4) * 4);
          if ((iVar1 != 0) && (piVar5 = *(int **)(iVar1 + 0xc), piVar5 != *(int **)(iVar1 + 0x10)))
          {
            do {
              if (*piVar5 == 0) {
                iVar6 = FUN_0058d860(piVar3,piVar3[1],piVar5 + 2);
                if (iVar8 == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
                  std::_Xlength_error("list<T> too long");
                }
                piVar3[1] = iVar6;
                iVar8 = iVar8 + 1;
                **(int **)(iVar6 + 4) = iVar6;
              }
              piVar5 = piVar5 + 0x62;
            } while (piVar5 != *(int **)(iVar1 + 0x10));
          }
        }
      }
      local_7c = local_7c + 1;
      uVar11 = uVar11 + 1;
    } while (local_7c < 2);
    local_80 = local_80 + 1;
    uVar9 = uVar9 + 1;
  } while (local_80 < 2);
  if (iVar8 == 0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    piVar5 = (int *)*piVar3;
    *piVar3 = (int)piVar3;
    piVar3[1] = (int)piVar3;
    if (piVar5 != piVar3) {
                    /* WARNING: Subroutine does not return */
      operator_delete(piVar5);
    }
  }
  else if (iVar8 == 1) {
    iVar1 = *piVar3;
    *param_1 = *(uint *)(iVar1 + 8);
    param_1[1] = *(uint *)(iVar1 + 0xc);
    param_1[2] = *(uint *)(iVar1 + 0x10);
    param_1[3] = *(uint *)(iVar1 + 0x14);
    param_1[4] = *(uint *)(iVar1 + 0x18);
    param_1[5] = *(uint *)(iVar1 + 0x1c);
    piVar5 = (int *)*piVar3;
    *piVar3 = (int)piVar3;
    piVar3[1] = (int)piVar3;
    if (piVar5 != piVar3) {
                    /* WARNING: Subroutine does not return */
      operator_delete(piVar5);
    }
  }
  else {
    piVar5 = (int *)*piVar3;
    fVar13 = -1.0;
    piVar10 = (int *)0x0;
    fVar14 = -1.0;
    if (piVar5 != piVar3) {
      do {
        local_54._0_4_ = (uint)*(undefined8 *)(piVar5 + 2);
        local_54._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar5 + 2) >> 0x20);
        local_54 = CONCAT44((local_54._4_4_ - param_2[1]) - (uint)((uint)local_54 < *param_2),
                            (uint)local_54 - *param_2);
        local_4c._0_4_ = (uint)*(undefined8 *)(piVar5 + 4);
        local_4c._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar5 + 4) >> 0x20);
        local_4c = CONCAT44((local_4c._4_4_ - param_2[3]) - (uint)((uint)local_4c < param_2[2]),
                            (uint)local_4c - param_2[2]);
        fVar12 = (float)local_4c * 1.5258789e-05 * (float)local_4c * 1.5258789e-05 +
                 (float)local_54 * 1.5258789e-05 * (float)local_54 * 1.5258789e-05;
        if ((fVar14 < 0.0) || (fVar12 < fVar14)) {
          piVar10 = piVar5;
          fVar14 = fVar12;
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != piVar3);
    }
    if (piVar10 != piVar3) {
      *(int *)piVar10[1] = *piVar10;
      *(int *)(*piVar10 + 4) = piVar10[1];
                    /* WARNING: Subroutine does not return */
      operator_delete(piVar10);
    }
    piVar5 = (int *)*piVar3;
    if (piVar5 != piVar3) {
      do {
        local_3c._0_4_ = (uint)*(undefined8 *)(piVar5 + 2);
        local_3c._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar5 + 2) >> 0x20);
        local_3c = CONCAT44((local_3c._4_4_ - param_2[1]) - (uint)((uint)local_3c < *param_2),
                            (uint)local_3c - *param_2);
        local_34._0_4_ = (uint)*(undefined8 *)(piVar5 + 4);
        local_34._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar5 + 4) >> 0x20);
        local_34 = CONCAT44((local_34._4_4_ - param_2[3]) - (uint)((uint)local_34 < param_2[2]),
                            (uint)local_34 - param_2[2]);
        fVar14 = (float)local_3c * 1.5258789e-05 * (float)local_3c * 1.5258789e-05 +
                 (float)local_34 * 1.5258789e-05 * (float)local_34 * 1.5258789e-05;
        if ((fVar13 < 0.0) || (fVar14 < fVar13)) {
          piVar10 = piVar5;
          fVar13 = fVar14;
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != piVar3);
    }
    *param_1 = piVar10[2];
    param_1[1] = piVar10[3];
    param_1[2] = piVar10[4];
    param_1[3] = piVar10[5];
    param_1[4] = piVar10[6];
    param_1[5] = piVar10[7];
    piVar5 = (int *)*piVar3;
    *piVar3 = (int)piVar3;
    piVar3[1] = (int)piVar3;
    if (piVar5 != piVar3) {
                    /* WARNING: Subroutine does not return */
      operator_delete(piVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar3);
}


/* FUN_005a0910 @ 005a0910  kind=gamemisc  attributed-by=caller-vote  size=81 */

int FUN_005a0910(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00434d10(*param_1,param_1[1]);
  if ((iVar2 != 0) && (iVar1 = param_1[2], -1 < iVar1)) {
    if (iVar1 < (*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc)) / 0x188) {
      return *(int *)(iVar2 + 0xc) + iVar1 * 0x188;
    }
  }
  return 0;
}


/* FUN_005a0bf0 @ 005a0bf0  kind=gamemisc  attributed-by=caller-vote  size=395 */

void FUN_005a0bf0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_00477d90(&local_8,param_1);
  if (local_8 == *(int *)(in_ECX + 4)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(local_8 + 0x18);
  }
  FUN_00477d90(&local_8,param_1 + 8);
  if (local_8 == *(int *)(in_ECX + 4)) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(local_8 + 0x18);
  }
  if ((iVar2 != 0) && (local_8 != 0)) {
    if (local_8 == *(int *)(in_ECX + 0xb8)) {
      local_10 = *(int *)(in_ECX + 0xb8) + 0x11c8;
      FUN_00477d90(&local_c,local_10);
      if ((local_c != *(int *)(in_ECX + 4)) && (*(int *)(local_c + 0x18) != 0)) {
        iVar1 = FUN_0042f000(local_10);
        *(undefined4 *)(iVar1 + 0x16c) = 0;
        FUN_0042f000(*(int *)(in_ECX + 0xb8) + 0x11c8);
        FUN_0067e480();
      }
      iVar1 = *(int *)(in_ECX + 0xb8);
      *(undefined4 *)(iVar1 + 0x11d0) = 0;
      *(undefined4 *)(iVar1 + 0x11d4) = 0;
    }
    iVar1 = *(int *)(in_ECX + 0xb8);
    if (((iVar1 != 0) && (iVar1 == iVar2)) && (*(char *)(local_8 + 0x60) == '\x01')) {
      *(int *)(iVar1 + 0x194) = *(int *)(iVar1 + 0x194) + *(int *)(param_1 + 0x14);
      FUN_00447b00(in_ECX);
    }
    if (*(char *)(in_ECX + 0xb4) == '\0') {
      FUN_00477d90(&local_10,iVar2 + 0x11c8);
      if (((local_10 != *(int *)(in_ECX + 4)) && (iVar1 = *(int *)(local_10 + 0x18), iVar1 != 0)) &&
         (0.0 < *(float *)(iVar1 + 0x16c))) {
        *(int *)(iVar1 + 0x194) = *(int *)(iVar1 + 0x194) + *(int *)(param_1 + 0x14);
        FUN_00447b00(in_ECX);
        *(undefined4 *)(iVar2 + 0x1024) = *(undefined4 *)(iVar1 + 0x194);
        *(undefined2 *)(iVar2 + 0x1030) = *(undefined2 *)(iVar1 + 400);
        FUN_0042c5e0(iVar2 + 0x1020);
      }
    }
  }
  return;
}


/* FUN_005a0d80 @ 005a0d80  kind=gamemisc  attributed-by=caller-vote  size=124 */

void FUN_005a0d80(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  
  uVar1 = in_ECX[1];
  if ((param_1 < uVar1) && (uVar2 = *in_ECX, uVar2 <= param_1)) {
    if (uVar1 == in_ECX[2]) {
      FUN_00594ad0(1);
    }
    param_1 = ((int)(param_1 - uVar2) / 0x11c) * 0x11c + *in_ECX;
  }
  else if (uVar1 == in_ECX[2]) {
    FUN_00594ad0(1);
  }
  uVar1 = in_ECX[1];
  if (uVar1 != 0) {
    FUN_0040ee70(param_1);
    *(undefined4 *)(uVar1 + 0x118) = *(undefined4 *)(param_1 + 0x118);
  }
  in_ECX[1] = in_ECX[1] + 0x11c;
  return;
}


/* FUN_005a35d0 @ 005a35d0  kind=gamemisc  attributed-by=caller-vote  size=4391 */

/* WARNING: Removing unreachable block (ram,0x005a4654) */
/* WARNING: Removing unreachable block (ram,0x005a3f38) */
/* WARNING: Removing unreachable block (ram,0x005a4184) */
/* WARNING: Removing unreachable block (ram,0x005a4410) */

void FUN_005a35d0(uint *param_1,float *param_2,float param_3,char param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  int in_ECX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  float *pfVar14;
  uint uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  uint local_19c;
  int local_194;
  float local_184;
  float local_17c;
  float local_178;
  uint local_168 [31];
  int iStack_ec;
  int local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  uint local_b4;
  uint local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  uint local_7c;
  uint local_78;
  undefined8 local_74;
  float local_6c;
  undefined8 local_68;
  float local_60;
  undefined8 local_5c;
  float local_54;
  undefined8 local_50;
  float local_48;
  undefined8 local_44;
  float local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  uint local_14 [4];
  
  local_14[3] = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar8 = param_1[1];
  local_178 = 0.0;
  local_14[0] = __alldiv(*param_1,uVar8,0x10000,0);
  local_14[1] = __alldiv(param_1[2],param_1[3],0x10000,0);
  local_14[2] = __alldiv(param_1[4],param_1[5],0x10000,0);
  if (((int)uVar8 < 1) && ((int)uVar8 < 0)) {
    local_14[0] = local_14[0] - 1;
  }
  if (((int)param_1[3] < 1) && ((int)param_1[3] < 0)) {
    local_14[1] = local_14[1] - 1;
  }
  if (((int)param_1[5] < 1) && ((int)param_1[5] < 0)) {
    local_14[2] = local_14[2] + -1;
  }
  local_19c = 0;
  if (0.0 < param_3) {
    do {
      uVar1 = local_14[2];
      uVar8 = local_14[1];
      if (((((int)local_14[0] < 0) || ((int)local_14[1] < 0)) || (0xffffff < (int)local_14[0])) ||
         ((0xffffff < (int)local_14[1] ||
          (iVar5 = FUN_00434d10((int)(local_14[0] + ((int)local_14[0] >> 0x1f & 0xffU)) >> 8,
                                (int)(local_14[1] + ((int)local_14[1] >> 0x1f & 0xffU)) >> 8),
          iVar5 == 0)))) {
LAB_005a376f:
        puVar6 = &DAT_0076b7d4;
      }
      else {
        uVar8 = uVar8 & 0x800000ff;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xffffff00) + 1;
        }
        uVar7 = local_14[0] & 0x800000ff;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
        }
        iVar5 = (uVar8 * 0x100 + uVar7) * 0x20 + *(int *)(iVar5 + 0xa8);
        if ((iVar5 == 0) || (iVar10 = *(int *)(iVar5 + 0x10), (int)uVar1 < iVar10))
        goto LAB_005a376f;
        if ((int)uVar1 < *(int *)(iVar5 + 0x1c) + iVar10) {
          puVar6 = (undefined *)FUN_0042f730(uVar1 - iVar10);
          if ((((puVar6[3] & 0x1f) == 0) && ((int)uVar1 < 1)) && ((puVar6[3] & 0x40) == 0)) {
            puVar6 = &DAT_0076b7cc;
          }
        }
        else {
          puVar6 = &DAT_0076b7cc;
          if (0 < (int)uVar1) {
            puVar6 = &DAT_0076b7d0;
          }
        }
      }
      if (((puVar6[3] & 0x1f) == 0) || ((puVar6[3] & 0x1f) == 2)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
      if ((cVar4 != param_4) || (500 < (int)local_19c)) break;
      local_5c._0_4_ = (float)*(undefined8 *)param_2;
      local_19c = local_19c + 1;
      local_5c._4_4_ = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
      iVar5 = 0;
      local_5c = CONCAT44(local_5c._4_4_ * local_178,(float)local_5c * local_178);
      local_54 = param_2[2] * local_178;
      do {
        uVar20 = FUN_0068d946();
        local_168[iVar5 * 2 + 0x18] = (uint)uVar20;
        local_168[iVar5 * 2 + 0x19] = (uint)((ulonglong)uVar20 >> 0x20);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      fVar19 = 10.0;
      local_38._0_4_ = (uint)*(undefined8 *)param_1;
      local_38._4_4_ = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
      local_38 = CONCAT44(local_38._4_4_ + local_168[0x19] +
                          (uint)CARRY4((uint)local_38,local_168[0x18]),
                          (uint)local_38 + local_168[0x18]);
      local_30._0_4_ = (uint)*(undefined8 *)(param_1 + 2);
      local_30._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
      local_30 = CONCAT44(local_30._4_4_ + local_168[0x1b] +
                          (uint)CARRY4((uint)local_30,local_168[0x1a]),
                          (uint)local_30 + local_168[0x1a]);
      local_28._0_4_ = (uint)*(undefined8 *)(param_1 + 4);
      local_28._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
      local_28 = CONCAT44(local_28._4_4_ + local_168[0x1d] +
                          (uint)CARRY4((uint)local_28,local_168[0x1c]),
                          (uint)local_28 + local_168[0x1c]);
      iVar5 = 0;
      iVar10 = 0;
      local_184 = 10.0;
      local_194 = 0;
      pfVar14 = param_2;
      do {
        fVar18 = *pfVar14;
        if (1e-06 <= fVar18 * fVar18) {
          if (fVar18 <= 0.0) {
            lVar21 = FUN_0068d946();
          }
          else {
            lVar21 = FUN_0068d946();
          }
          local_17c = (float)lVar21;
          local_17c = local_17c * 1.5258789e-05;
          iVar5 = local_194;
          fVar19 = local_184;
          if (local_17c < local_184) {
            iVar5 = iVar10;
            fVar19 = local_17c;
            local_194 = iVar10;
            local_184 = local_17c;
          }
        }
        iVar10 = iVar10 + 1;
        pfVar14 = pfVar14 + 1;
      } while (iVar10 < 3);
      if (param_2[iVar5] <= 0.0) {
        local_14[iVar5] = local_14[iVar5] - 1;
      }
      else {
        local_14[iVar5] = local_14[iVar5] + 1;
      }
      local_178 = local_178 + fVar19;
    } while (local_178 < param_3);
  }
  if (param_3 < local_178) {
    local_178 = param_3;
  }
  if (param_5 != '\0') {
    uVar8 = param_1[1];
    uVar1 = *param_1;
    iVar5 = __alldiv(uVar1,uVar8,0x10000,0);
    uVar7 = param_1[2];
    uVar2 = param_1[3];
    iVar10 = __alldiv(uVar7,uVar2,0x10000,0);
    uVar11 = (int)((iVar5 >> 0x1f & 0xffU) + iVar5) >> 8;
    uVar9 = (int)((iVar10 >> 0x1f & 0xffU) + iVar10) >> 8;
    uVar12 = (int)(((int)local_14[0] >> 0x1f & 0xffU) + local_14[0]) >> 8;
    uVar15 = (int)(((int)local_14[1] >> 0x1f & 0xffU) + local_14[1]) >> 8;
    local_184 = (float)uVar11;
    if ((int)uVar12 < (int)uVar11) {
      local_184 = (float)uVar12;
      uVar12 = uVar11;
    }
    uVar11 = uVar9;
    if ((int)uVar15 < (int)uVar9) {
      uVar11 = uVar15;
      uVar15 = uVar9;
    }
    local_19c = uVar11;
    local_b4 = (uint)local_184;
    local_b0 = uVar11;
    local_7c = uVar12;
    local_78 = uVar15;
    if ((int)local_184 <= (int)uVar12) {
      do {
        if ((int)uVar11 <= (int)uVar15) {
          do {
            if ((((-1 < (int)local_184) && (-1 < (int)uVar11)) && ((int)local_184 < 0x10000)) &&
               ((int)uVar11 < 0x10000)) {
              iVar5 = (int)((int)local_184 + ((int)local_184 >> 0x1f & 0x3fU)) >> 6;
              iVar10 = (int)(((int)uVar11 >> 0x1f & 0x3fU) + uVar11) >> 6;
              if (((-1 < iVar5) && (-1 < iVar10)) &&
                 ((iVar5 < 0x400 &&
                  ((iVar10 < 0x400 &&
                   (iVar5 = *(int *)(in_ECX + 0xbc + (iVar5 * 0x400 + iVar10) * 4), iVar5 != 0))))))
              {
                uVar12 = (uint)local_184 & 0x8000003f;
                if ((int)uVar12 < 0) {
                  uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
                }
                uVar9 = uVar11 & 0x8000003f;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
                }
                iVar5 = *(int *)(iVar5 + 0x10018 + (uVar12 * 0x40 + uVar9) * 4);
                if (iVar5 != 0) {
                  piVar3 = *(int **)(iVar5 + 0x10);
                  fVar19 = local_178;
                  for (piVar13 = *(int **)(iVar5 + 0xc); local_178 = fVar19, piVar13 != piVar3;
                      piVar13 = piVar13 + 0x62) {
                    iVar5 = *piVar13;
                    if (((((iVar5 == 4) || (iVar5 == 3)) || (iVar5 == 5)) || (iVar5 == 8)) &&
                       ((char)piVar13[0xc] != '\0')) {
                      iVar5 = piVar13[9];
                      local_20 = *(undefined8 *)(piVar13 + 9);
                      local_18 = piVar13[0xb];
                      uVar15 = piVar13[8] & 0x80000001;
                      bVar16 = uVar15 == 0;
                      if ((int)uVar15 < 0) {
                        bVar16 = (uVar15 - 1 | 0xfffffffe) == 0xffffffff;
                      }
                      if (!bVar16) {
                        local_20 = CONCAT44(iVar5,piVar13[10]);
                        local_168[0x1e] = piVar13[10];
                        iStack_ec = iVar5;
                        local_e8 = local_18;
                      }
                      fVar18 = *param_2;
                      if (fVar18 != 0.0) {
                        lVar21 = FUN_0068d946();
                        uVar15 = piVar13[2];
                        iVar5 = piVar13[3];
                        uVar12 = uVar15 - (uint)lVar21;
                        fVar17 = ((float)CONCAT44((((iVar5 - (int)((ulonglong)lVar21 >> 0x20)) -
                                                   (uint)(uVar15 < (uint)lVar21)) - uVar8) -
                                                  (uint)(uVar12 < uVar1),uVar12 - uVar1) *
                                 1.5258789e-05) / fVar18;
                        if ((0.0 <= fVar17) && (fVar17 < fVar19)) {
                          iVar10 = 0;
                          local_44._0_4_ = (float)*(undefined8 *)param_2;
                          local_44._4_4_ = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
                          local_44 = CONCAT44(local_44._4_4_ * fVar17,(float)local_44 * fVar17);
                          local_3c = param_2[2] * fVar17;
                          do {
                            uVar20 = FUN_0068d946();
                            local_168[iVar10 * 2 + 6] = (uint)uVar20;
                            local_168[iVar10 * 2 + 7] = (uint)((ulonglong)uVar20 >> 0x20);
                            iVar10 = iVar10 + 1;
                          } while (iVar10 < 3);
                          local_ac = *(undefined8 *)param_1;
                          local_a4._0_4_ = (uint)*(undefined8 *)(param_1 + 2);
                          uVar9 = (uint)local_a4 + local_168[8];
                          local_a4._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
                          local_9c._0_4_ = (uint)*(undefined8 *)(param_1 + 4);
                          local_9c._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
                          local_a4 = CONCAT44(local_a4._4_4_ + local_168[9] +
                                              (uint)CARRY4((uint)local_a4,local_168[8]),uVar9);
                          local_9c = CONCAT44(local_9c._4_4_ + local_168[0xb] +
                                              (uint)CARRY4((uint)local_9c,local_168[10]),
                                              (uint)local_9c + local_168[10]);
                          lVar22 = FUN_0068d946();
                          uVar12 = piVar13[4];
                          iVar10 = (piVar13[5] - (int)((ulonglong)lVar22 >> 0x20)) -
                                   (uint)(uVar12 < (uint)lVar22);
                          if ((iVar10 <= local_a4._4_4_) &&
                             ((iVar10 < local_a4._4_4_ || (uVar12 - (uint)lVar22 <= uVar9)))) {
                            if ((piVar13[7] <= local_9c._4_4_) &&
                               (((piVar13[7] < local_9c._4_4_ ||
                                 ((uint)piVar13[6] <= (uint)local_9c)) &&
                                (local_a4 < lVar22 + *(longlong *)(piVar13 + 4))))) {
                              uVar20 = FUN_0068d946();
                              iVar10 = (int)((ulonglong)uVar20 >> 0x20) + piVar13[7] +
                                       (uint)CARRY4((uint)uVar20,piVar13[6]);
                              if ((local_9c._4_4_ <= iVar10) &&
                                 ((local_178 = fVar17, local_9c._4_4_ < iVar10 ||
                                  ((uint)local_9c < (uint)uVar20 + piVar13[6])))) goto LAB_005a3f8e;
                            }
                          }
                          local_178 = fVar19;
                        }
LAB_005a3f8e:
                        fVar18 = ((float)(lVar21 + CONCAT44((iVar5 - uVar8) - (uint)(uVar15 < uVar1)
                                                            ,uVar15 - uVar1)) * 1.5258789e-05) /
                                 fVar18;
                        if ((0.0 <= fVar18) && (fVar18 < local_178)) {
                          iVar5 = 0;
                          local_74._0_4_ = (float)*(undefined8 *)param_2;
                          local_74._4_4_ = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
                          local_74 = CONCAT44(local_74._4_4_ * fVar18,(float)local_74 * fVar18);
                          local_6c = param_2[2] * fVar18;
                          do {
                            uVar20 = FUN_0068d946();
                            local_168[iVar5 * 2 + 0xc] = (uint)uVar20;
                            local_168[iVar5 * 2 + 0xd] = (uint)((ulonglong)uVar20 >> 0x20);
                            iVar5 = iVar5 + 1;
                          } while (iVar5 < 3);
                          local_e4 = *(undefined8 *)param_1;
                          local_dc._0_4_ = (uint)*(undefined8 *)(param_1 + 2);
                          uVar9 = (uint)local_dc + local_168[0xe];
                          local_dc._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
                          local_d4._0_4_ = (uint)*(undefined8 *)(param_1 + 4);
                          uVar12 = (uint)local_d4 + local_168[0x10];
                          local_d4._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
                          local_dc = CONCAT44(local_dc._4_4_ + local_168[0xf] +
                                              (uint)CARRY4((uint)local_dc,local_168[0xe]),uVar9);
                          local_d4 = CONCAT44(local_d4._4_4_ + local_168[0x11] +
                                              (uint)CARRY4((uint)local_d4,local_168[0x10]),uVar12);
                          lVar21 = FUN_0068d946();
                          uVar15 = piVar13[4];
                          iVar5 = (piVar13[5] - (int)((ulonglong)lVar21 >> 0x20)) -
                                  (uint)(uVar15 < (uint)lVar21);
                          if ((iVar5 <= local_dc._4_4_) &&
                             ((iVar5 < local_dc._4_4_ || (uVar15 - (uint)lVar21 <= uVar9)))) {
                            if ((piVar13[7] <= local_d4._4_4_) &&
                               (((piVar13[7] < local_d4._4_4_ || ((uint)piVar13[6] <= uVar12)) &&
                                (CONCAT44(local_dc._4_4_,uVar9) <
                                 lVar21 + *(longlong *)(piVar13 + 4))))) {
                              uVar20 = FUN_0068d946();
                              iVar5 = (int)((ulonglong)uVar20 >> 0x20) + piVar13[7] +
                                      (uint)CARRY4((uint)uVar20,piVar13[6]);
                              if ((local_d4._4_4_ <= iVar5) &&
                                 ((local_d4._4_4_ < iVar5 || (uVar12 < (uint)uVar20 + piVar13[6]))))
                              {
                                local_178 = fVar18;
                              }
                            }
                          }
                        }
                      }
                      fVar19 = param_2[1];
                      if (fVar19 != 0.0) {
                        lVar21 = FUN_0068d946();
                        uVar15 = piVar13[4];
                        iVar5 = piVar13[5];
                        uVar12 = uVar15 - (uint)lVar21;
                        fVar17 = ((float)CONCAT44((((iVar5 - (int)((ulonglong)lVar21 >> 0x20)) -
                                                   (uint)(uVar15 < (uint)lVar21)) - uVar2) -
                                                  (uint)(uVar12 < uVar7),uVar12 - uVar7) *
                                 1.5258789e-05) / fVar19;
                        fVar18 = local_178;
                        if ((0.0 <= fVar17) && (fVar17 < local_178)) {
                          iVar10 = 0;
                          local_50._0_4_ = (float)*(undefined8 *)param_2;
                          local_50._4_4_ = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
                          local_50 = CONCAT44(local_50._4_4_ * fVar17,(float)local_50 * fVar17);
                          local_48 = param_2[2] * fVar17;
                          do {
                            uVar20 = FUN_0068d946();
                            local_168[iVar10 * 2 + 0x12] = (uint)uVar20;
                            local_168[iVar10 * 2 + 0x13] = (uint)((ulonglong)uVar20 >> 0x20);
                            iVar10 = iVar10 + 1;
                          } while (iVar10 < 3);
                          local_8c = *(undefined8 *)(param_1 + 2);
                          local_94._0_4_ = (uint)*(undefined8 *)param_1;
                          uVar9 = (uint)local_94 + local_168[0x12];
                          local_94._4_4_ = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
                          local_84._0_4_ = (uint)*(undefined8 *)(param_1 + 4);
                          local_84._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
                          local_94 = CONCAT44(local_94._4_4_ + local_168[0x13] +
                                              (uint)CARRY4((uint)local_94,local_168[0x12]),uVar9);
                          local_84 = CONCAT44(local_84._4_4_ + local_168[0x17] +
                                              (uint)CARRY4((uint)local_84,local_168[0x16]),
                                              (uint)local_84 + local_168[0x16]);
                          lVar22 = FUN_0068d946();
                          uVar12 = piVar13[2];
                          iVar10 = (piVar13[3] - (int)((ulonglong)lVar22 >> 0x20)) -
                                   (uint)(uVar12 < (uint)lVar22);
                          if ((iVar10 <= local_94._4_4_) &&
                             ((iVar10 < local_94._4_4_ || (uVar12 - (uint)lVar22 <= uVar9)))) {
                            if ((piVar13[7] <= local_84._4_4_) &&
                               (((piVar13[7] < local_84._4_4_ ||
                                 ((uint)piVar13[6] <= (uint)local_84)) &&
                                (local_94 < lVar22 + *(longlong *)(piVar13 + 2))))) {
                              uVar20 = FUN_0068d946();
                              iVar10 = (int)((ulonglong)uVar20 >> 0x20) + piVar13[7] +
                                       (uint)CARRY4((uint)uVar20,piVar13[6]);
                              if ((local_84._4_4_ <= iVar10) &&
                                 ((fVar18 = fVar17, local_84._4_4_ < iVar10 ||
                                  ((uint)local_84 < (uint)uVar20 + piVar13[6])))) goto LAB_005a4460;
                            }
                          }
                          fVar18 = local_178;
                        }
LAB_005a4460:
                        local_178 = fVar18;
                        fVar19 = ((float)(lVar21 + CONCAT44((iVar5 - uVar2) - (uint)(uVar15 < uVar7)
                                                            ,uVar15 - uVar7)) * 1.5258789e-05) /
                                 fVar19;
                        if ((0.0 <= fVar19) && (fVar19 < local_178)) {
                          iVar5 = 0;
                          local_68._0_4_ = (float)*(undefined8 *)param_2;
                          local_68._4_4_ = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
                          local_68 = CONCAT44(local_68._4_4_ * fVar19,(float)local_68 * fVar19);
                          local_60 = param_2[2] * fVar19;
                          do {
                            uVar20 = FUN_0068d946();
                            local_168[iVar5 * 2] = (uint)uVar20;
                            local_168[iVar5 * 2 + 1] = (uint)((ulonglong)uVar20 >> 0x20);
                            iVar5 = iVar5 + 1;
                          } while (iVar5 < 3);
                          local_c4 = *(undefined8 *)(param_1 + 2);
                          local_cc._0_4_ = (uint)*(undefined8 *)param_1;
                          uVar9 = (uint)local_cc + local_168[0];
                          local_cc._4_4_ = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
                          local_bc._0_4_ = (uint)*(undefined8 *)(param_1 + 4);
                          uVar12 = (uint)local_bc + local_168[4];
                          local_bc._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
                          local_cc = CONCAT44(local_cc._4_4_ + local_168[1] +
                                              (uint)CARRY4((uint)local_cc,local_168[0]),uVar9);
                          local_bc = CONCAT44(local_bc._4_4_ + local_168[5] +
                                              (uint)CARRY4((uint)local_bc,local_168[4]),uVar12);
                          lVar21 = FUN_0068d946();
                          uVar15 = piVar13[2];
                          iVar5 = (piVar13[3] - (int)((ulonglong)lVar21 >> 0x20)) -
                                  (uint)(uVar15 < (uint)lVar21);
                          if ((iVar5 <= local_cc._4_4_) &&
                             ((iVar5 < local_cc._4_4_ || (uVar15 - (uint)lVar21 <= uVar9)))) {
                            if ((piVar13[7] <= local_bc._4_4_) &&
                               (((piVar13[7] < local_bc._4_4_ || ((uint)piVar13[6] <= uVar12)) &&
                                (CONCAT44(local_cc._4_4_,uVar9) <
                                 lVar21 + *(longlong *)(piVar13 + 2))))) {
                              uVar20 = FUN_0068d946();
                              iVar5 = (int)((ulonglong)uVar20 >> 0x20) + piVar13[7] +
                                      (uint)CARRY4((uint)uVar20,piVar13[6]);
                              if ((local_bc._4_4_ <= iVar5) &&
                                 ((local_bc._4_4_ < iVar5 || (uVar12 < (uint)uVar20 + piVar13[6]))))
                              {
                                local_178 = fVar19;
                              }
                            }
                          }
                        }
                      }
                    }
                    uVar11 = local_19c;
                    uVar15 = local_78;
                    fVar19 = local_178;
                  }
                }
              }
            }
            uVar11 = uVar11 + 1;
            local_19c = uVar11;
          } while ((int)uVar11 <= (int)uVar15);
          local_19c = local_b0;
          uVar11 = local_b0;
          uVar12 = local_7c;
        }
        local_184 = (float)((int)local_184 + 1);
      } while ((int)local_184 <= (int)uVar12);
    }
  }
  __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005a58e0 @ 005a58e0  kind=gamemisc  attributed-by=caller-vote  size=294 */

void FUN_005a58e0(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((char)param_1[0xc] != param_3) {
    iVar1 = 1000 - param_1[0xd];
    param_1[0xd] = iVar1;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    param_1[0xd] = iVar1;
    iVar1 = *param_1;
    *(char *)(param_1 + 0xc) = param_3;
    if (iVar1 == 5) {
      local_14 = 0x33;
    }
    else if (iVar1 == 6) {
      if (param_3 == '\0') goto LAB_005a59f5;
      local_14 = 0x35;
    }
    else if (iVar1 == 7) {
      if (param_3 == '\0') goto LAB_005a59f5;
      local_14 = 0x34;
    }
    else {
      local_14 = 0x36;
    }
    local_10 = 0x3f800000;
    local_c = 0x3f800000;
    local_20 = (float)*(longlong *)(param_1 + 2) * 1.5258789e-05;
    local_1c = (float)*(longlong *)(param_1 + 4) * 1.5258789e-05;
    iVar1 = *(int *)(param_2 + 8);
    local_18 = (float)*(longlong *)(param_1 + 6) * 1.5258789e-05;
    iVar2 = FUN_0058d860(iVar1,*(undefined4 *)(iVar1 + 4),&local_20);
    if (*(int *)(param_2 + 0xc) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
LAB_005a59f5:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005a5a60 @ 005a5a60  kind=gamemisc  attributed-by=caller-vote  size=144 */

undefined2 * FUN_005a5a60(undefined2 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x800114);
  cVar1 = *(char *)((int)puVar2[1] + 0xd);
  puVar4 = puVar2;
  puVar6 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((int)puVar6[4] < (int)param_2) {
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
  if ((puVar4 == puVar2) || (bVar3 = (int)param_2 < (int)puVar4[4], param_2 = puVar4, bVar3)) {
    param_2 = puVar2;
  }
  if (param_2 != puVar2) {
    *(undefined4 *)(param_1 + 10) = 7;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = 0;
    FUN_0040f680(param_2 + 5,0,0xffffffff);
    return param_1;
  }
  FUN_0040eb60(&PTR_006fccac);
  return param_1;
}


/* FUN_005a5cb0 @ 005a5cb0  kind=gamemisc  attributed-by=caller-vote  size=652 */

void FUN_005a5cb0(int param_1,int *param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2bd8;
  local_10 = ExceptionList;
  if (param_1 < 0) {
    param_1 = 0;
  }
  iVar9 = (int)param_2;
  if ((int)param_2 < 0) {
    iVar9 = 0;
  }
  if ((int)param_3 < 0) {
    param_3 = 0;
  }
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  iVar2 = param_3 + ((int)param_3 >> 0x1f & 0xffU);
  uVar3 = (int)(iVar9 + (iVar9 >> 0x1f & 0xffU)) >> 8;
  uVar6 = (int)((param_1 >> 0x1f & 0xffU) + param_1) >> 8;
  do {
    param_3 = uVar3;
    if (iVar2 >> 8 < (int)uVar6) {
      return;
    }
    for (; (int)param_3 <= (int)(((int)param_4 >> 0x1f & 0xffU) + param_4) >> 8;
        param_3 = param_3 + 1) {
      if ((((-1 < (int)uVar6) && (-1 < (int)param_3)) && ((int)uVar6 < 0x10000)) &&
         ((int)param_3 < 0x10000)) {
        iVar9 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 0x3fU)) >> 6;
        iVar7 = (int)(((int)param_3 >> 0x1f & 0x3fU) + param_3) >> 6;
        if (((-1 < iVar9) && (-1 < iVar7)) &&
           ((iVar9 < 0x400 &&
            ((iVar7 < 0x400 &&
             (iVar9 = *(int *)(in_ECX + 0xbc + (iVar9 * 0x400 + iVar7) * 4), iVar9 != 0)))))) {
          uVar10 = uVar6 & 0x8000003f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffc0) + 1;
          }
          uVar4 = param_3 & 0x8000003f;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
          }
          iVar9 = *(int *)(iVar9 + 0x10018 + (uVar10 * 0x40 + uVar4) * 4);
          if (iVar9 != 0) {
            local_20 = 0;
            ExceptionList = &local_10;
            param_4 = uVar3;
            puVar5 = (undefined4 *)FUN_0046d550(0,0);
            local_8 = 0;
            piVar8 = (int *)**(int **)(iVar9 + 4);
            param_2 = piVar8;
            if (piVar8 != *(int **)(iVar9 + 4)) {
              do {
                if (((*(byte *)(piVar8 + 0x10) & 2) != 0) &&
                   (param_2 = piVar8,
                   iVar2 = FUN_0042f860(piVar8[4],piVar8[5],piVar8[6],piVar8[7],piVar8[8] - 0x10000,
                                        piVar8[9] - (uint)((uint)piVar8[8] < 0x10000),0),
                   (*(byte *)(iVar2 + 3) & 0x1f) == 0)) {
                  iVar2 = FUN_00583cb0(puVar5,puVar5[1],&param_2);
                  if (local_20 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("list<T> too long");
                  }
                  puVar5[1] = iVar2;
                  local_20 = local_20 + 1;
                  **(int **)(iVar2 + 4) = iVar2;
                }
                piVar8 = (int *)*piVar8;
                param_2 = piVar8;
              } while (piVar8 != (int *)*(int *)(iVar9 + 4));
            }
            for (puVar1 = (undefined4 *)*puVar5; puVar1 != puVar5; puVar1 = (undefined4 *)*puVar1) {
              piVar8 = (int *)puVar1[2];
              if (piVar8 != *(int **)(iVar9 + 4)) {
                *(int *)piVar8[1] = *piVar8;
                *(int *)(*piVar8 + 4) = piVar8[1];
                    /* WARNING: Subroutine does not return */
                operator_delete(piVar8);
              }
            }
            puVar1 = (undefined4 *)*puVar5;
            *puVar5 = puVar5;
            local_8 = 0xffffffff;
            puVar5[1] = puVar5;
            if (puVar1 != puVar5) {
                    /* WARNING: Subroutine does not return */
              operator_delete(puVar1);
            }
                    /* WARNING: Subroutine does not return */
            operator_delete(puVar5);
          }
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while( true );
}


/* FUN_005a6270 @ 005a6270  kind=gamemisc  attributed-by=caller-vote  size=571 */

float * FUN_005a6270(float *param_1)

{
  float10 fVar1;
  undefined8 uVar2;
  undefined8 local_1c;
  
  local_1c = FUN_0068d946();
  local_1c = FUN_0068d946((double)local_1c * 1.52587890625e-05);
  fVar1 = (float10)FUN_004c0ef0((double)local_1c * 1.52587890625e-05);
  *param_1 = (float)fVar1 * 2.0;
  uVar2 = FUN_0068d946();
  local_1c = CONCAT44(-(uint)(0x20f60000 < (uint)uVar2) - (int)((ulonglong)uVar2 >> 0x20),
                      0x20f60000 - (uint)uVar2);
  uVar2 = FUN_0068d946((double)local_1c * 1.52587890625e-05);
  local_1c = CONCAT44(-(uint)(0xd7f0000 < (uint)uVar2) - (int)((ulonglong)uVar2 >> 0x20),
                      0xd7f0000 - (uint)uVar2);
  fVar1 = (float10)FUN_004c0ef0((double)local_1c * 1.52587890625e-05);
  param_1[1] = (float)fVar1 * 2.0;
  uVar2 = FUN_0068d946();
  local_1c = CONCAT44(-(uint)(0x14e10000 < (uint)uVar2) - (int)((ulonglong)uVar2 >> 0x20),
                      0x14e10000 - (uint)uVar2);
  uVar2 = FUN_0068d946((double)local_1c * 1.52587890625e-05);
  local_1c = CONCAT44(-(uint)(0x108a0000 < (uint)uVar2) - (int)((ulonglong)uVar2 >> 0x20),
                      0x108a0000 - (uint)uVar2);
  fVar1 = (float10)FUN_004c0ef0((double)local_1c * 1.52587890625e-05);
  param_1[2] = (float)fVar1 + 0.5;
  return param_1;
}


/* FUN_005a6ab0 @ 005a6ab0  kind=gamemisc  attributed-by=caller-vote  size=152 */

int FUN_005a6ab0(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3411;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_005a7b90();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  local_8 = 1;
  if (iVar1 != -0x10) {
    FUN_005a7990(param_1);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_005a6c60 @ 005a6c60  kind=gamemisc  attributed-by=caller-vote  size=116 */

void FUN_005a6c60(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  uVar7 = FUN_005a6da0(*(undefined4 *)(*param_1 + 4),iVar2,param_2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  piVar3 = (int *)*in_ECX;
  in_ECX[1] = param_1[1];
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*in_ECX + 8) = *in_ECX;
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0xd);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*in_ECX + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*in_ECX + 8) = iVar2;
  return;
}


/* FUN_005a6ce0 @ 005a6ce0  kind=gamemisc  attributed-by=caller-vote  size=159 */

undefined4 * FUN_005a6ce0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3460;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)*in_ECX;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_005a6ab0(param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_005a6ce0(*param_1,puVar1,param_3);
    *puVar1 = uVar2;
    uVar2 = FUN_005a6ce0(param_1[2],puVar1,param_3);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_005a6da0 @ 005a6da0  kind=gamemisc  attributed-by=caller-vote  size=159 */

undefined4 * FUN_005a6da0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3480;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)*in_ECX;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_005a6ba0(param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_005a6da0(*param_1,puVar1,param_3);
    *puVar1 = uVar2;
    uVar2 = FUN_005a6da0(param_1[2],puVar1,param_3);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_005a7290 @ 005a7290  kind=gamemisc  attributed-by=caller-vote  size=627 */

undefined4 * FUN_005a7290(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  uint uStack_30;
  undefined1 local_20 [4];
  int *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f34a0;
  local_10 = ExceptionList;
  uStack_30 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_005a6e60(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_30;
    cVar4 = FUN_005a78a0(*param_3,param_3[1],param_2[4],param_2[5]);
    if (cVar4 != '\0') {
      FUN_005a6e60(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    iVar2 = piVar1[2];
    local_14 = (undefined1 *)&uStack_30;
    cVar4 = FUN_005a78a0(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14),*param_3,
                         param_3[1]);
    if (cVar4 != '\0') {
      FUN_005a6e60(param_1,0,iVar2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    cVar4 = FUN_005a78a0(*param_3,param_3[1],param_2[4],param_2[5]);
    if (cVar4 != '\0') {
      local_1c = param_2;
      FUN_0042c740();
      piVar3 = local_1c;
      cVar4 = FUN_005a78a0(local_1c[4],local_1c[5],*param_3,param_3[1]);
      if (cVar4 != '\0') {
        if (*(char *)(piVar3[2] + 0xd) == '\0') {
          FUN_005a6e60(param_1,1,param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_005a6e60(param_1,0,piVar3,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
    cVar4 = FUN_005a78a0(param_2[4],param_2[5],*param_3,param_3[1]);
    if (cVar4 != '\0') {
      local_1c = param_2;
      FUN_005c3ea0();
      piVar3 = local_1c;
      if ((local_1c == piVar1) ||
         (cVar4 = FUN_005a78a0(*param_3,param_3[1],local_1c[4],local_1c[5]), cVar4 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_005a6e60(param_1,1,piVar3,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_005a6e60(param_1,0,param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_005a7520(local_20,0,param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_005a7520 @ 005a7520  kind=gamemisc  attributed-by=caller-vote  size=391 */

void FUN_005a7520(undefined4 *param_1,char param_2,undefined4 *param_3,void *param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  char cVar9;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f34c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  piVar1 = (int *)*in_ECX;
  cVar9 = '\x01';
  local_8 = 0;
  piVar8 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar2 = (int *)param_3[1];
    piVar5 = (int *)piVar1[1];
    do {
      piVar8 = piVar5;
      piVar5 = (int *)piVar8[5];
      if (param_2 == '\0') {
        piVar7 = (int *)piVar8[4];
        for (piVar6 = (int *)*param_3; piVar6 != piVar2; piVar6 = piVar6 + 1) {
          if (piVar7 == piVar5) {
            if (piVar6 != piVar2) goto LAB_005a75f8;
            break;
          }
          if (*piVar6 < *piVar7) goto LAB_005a75f4;
          if (*piVar7 < *piVar6) goto LAB_005a75f8;
          piVar7 = piVar7 + 1;
        }
        if (piVar7 == piVar5) {
LAB_005a75f8:
          cVar9 = '\0';
        }
        else {
LAB_005a75f4:
          cVar9 = '\x01';
        }
      }
      else {
        piVar6 = (int *)*param_3;
        for (piVar7 = (int *)piVar8[4]; piVar7 != piVar5; piVar7 = piVar7 + 1) {
          if (piVar6 == piVar2) {
            if (piVar7 != piVar5) goto LAB_005a75c0;
            break;
          }
          if (*piVar7 < *piVar6) goto LAB_005a75b7;
          if (*piVar6 < *piVar7) goto LAB_005a75c0;
          piVar6 = piVar6 + 1;
        }
        if (piVar6 == piVar2) {
LAB_005a75c0:
          cVar9 = '\x01';
        }
        else {
LAB_005a75b7:
          cVar9 = '\0';
        }
      }
      if (cVar9 == '\0') {
        piVar5 = (int *)piVar8[2];
      }
      else {
        piVar5 = (int *)*piVar8;
      }
    } while (*(char *)((int)piVar5 + 0xd) == '\0');
  }
  _param_2 = piVar8;
  if (cVar9 != '\0') {
    if (piVar8 == (int *)*piVar1) {
      cVar9 = '\x01';
      puVar4 = param_3;
      goto LAB_005a7637;
    }
    FUN_0042c740();
  }
  puVar4 = param_3;
  cVar3 = FUN_005a78a0(_param_2[4],_param_2[5],*param_3,param_3[1]);
  if (cVar3 == '\0') {
    if (*(void **)((int)param_4 + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)((int)param_4 + 0x10));
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(param_4);
  }
LAB_005a7637:
  puVar4 = (undefined4 *)FUN_005a6e60(&param_2,cVar9,piVar8,puVar4,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  *unaff_FS_OFFSET = local_10;
  return;
}


/* FUN_005a7900 @ 005a7900  kind=gamemisc  attributed-by=caller-vote  size=138 */

void FUN_005a7900(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  while (param_1 != param_2) {
    uVar2 = *in_ECX;
    iVar5 = FUN_005a6ab0(param_1 + 4);
    FUN_005a7290(local_8,uVar2,iVar5 + 0x10,iVar5);
    if (*(char *)((int)param_1 + 0xd) == '\0') {
      piVar3 = (int *)param_1[2];
      if (*(char *)((int)piVar3 + 0xd) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0xd);
        param_1 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          param_1 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(param_1[1] + 0xd);
        piVar4 = (int *)param_1[1];
        piVar3 = param_1;
        while ((param_1 = piVar4, cVar1 == '\0' && (piVar3 == (int *)param_1[2]))) {
          cVar1 = *(char *)(param_1[1] + 0xd);
          piVar4 = (int *)param_1[1];
          piVar3 = param_1;
        }
      }
    }
  }
  return;
}


/* FUN_005a7b50 @ 005a7b50  kind=gamemisc  attributed-by=caller-vote  size=57 */

undefined4 FUN_005a7b50(void)

{
  uint *in_ECX;
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0068d946();
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if (((int)in_ECX[1] <= iVar1) && (((int)in_ECX[1] < iVar1 || (*in_ECX < (uint)uVar2)))) {
    return 1;
  }
  return 0;
}


/* FUN_005a7b90 @ 005a7b90  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * FUN_005a7b90(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x34);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *in_ECX;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *in_ECX;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *in_ECX;
  }
  return puVar1;
}


/* FUN_005a7e60 @ 005a7e60  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_005a7e60(int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar3 = (undefined4 *)puVar1[1];
    do {
      if ((uint)puVar3[4] < *param_2) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  if ((puVar5 == puVar1) || (uVar2 = *param_2, param_2 = puVar5, uVar2 < (uint)puVar5[4])) {
    param_2 = puVar1;
  }
  *param_1 = (int)param_2;
  return;
}


/* FUN_005a7eb0 @ 005a7eb0  kind=gamemisc  attributed-by=caller-vote  size=7409 */

void FUN_005a7eb0(int param_1,int param_2)

{
  float **ppfVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  char cVar13;
  char cVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  float *pfVar20;
  int iVar21;
  float *pfVar22;
  int unaff_ESI;
  int iVar23;
  undefined4 *puVar24;
  int iVar25;
  undefined4 *unaff_EDI;
  float *pfVar26;
  bool bVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined4 uStack_3ec;
  int local_3e8;
  float *local_3e4;
  float *local_3e0;
  float *local_3dc;
  float *local_3d8;
  undefined4 uStack_3d4;
  float *local_3d0;
  float local_3cc;
  float *local_3c8;
  uint local_3c4;
  undefined8 local_3c0;
  float *local_3b8;
  int local_3b4;
  float *local_3b0;
  undefined4 *local_3ac;
  undefined8 local_3a8;
  uint *local_3a0;
  float local_39c;
  undefined4 uStack_398;
  float *local_394;
  undefined4 uStack_390;
  int local_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  float *local_380;
  undefined4 *local_37c;
  float local_378;
  undefined4 local_374;
  undefined8 local_370;
  undefined8 local_358;
  undefined8 local_350;
  float local_344;
  float *local_340;
  float local_33c;
  float local_338;
  undefined8 local_328;
  float *local_320;
  int local_31c;
  float *local_318;
  int local_314;
  float *local_310;
  int local_30c;
  float *local_308;
  int local_304;
  float *local_300;
  int local_2fc;
  float *local_2f8;
  float local_2f4;
  float *local_2f0;
  int local_2ec;
  undefined8 local_2e8;
  undefined1 auStack_2dc [8];
  undefined8 local_2d4;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  undefined8 local_2bc;
  int local_2b4;
  int local_2b0;
  int iStack_2ac;
  int local_2a8;
  int iStack_2a4;
  int local_2a0;
  int iStack_29c;
  float local_298 [7];
  float local_27c;
  float local_278;
  float local_274 [2];
  float *local_26c;
  uint local_268 [8];
  float *local_248;
  float local_244 [3];
  uint local_238 [7];
  float local_21c [3];
  uint local_210 [7];
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  float *local_1c8;
  float *local_1c4;
  float *local_1c0;
  int local_1bc;
  undefined8 local_1b8;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  float *local_198;
  int local_194;
  float *local_190;
  int local_18c;
  undefined8 local_188;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_14c [4];
  int local_13c;
  int local_134;
  int local_130;
  int local_12c;
  float *local_128;
  int local_124;
  float *local_120;
  int local_11c;
  undefined8 local_118;
  int local_110;
  int local_10c;
  int local_108;
  int local_104 [4];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  uint local_e4;
  int local_dc;
  int local_d8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  int local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [28];
  undefined1 local_44 [12];
  undefined1 local_38 [20];
  undefined1 uStack_24;
  uint local_1c;
  undefined1 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006f3592;
  local_14 = ExceptionList;
  local_1c = DAT_0076aa78 ^ (uint)&uStack_3ec;
  uVar15 = DAT_0076aa78 ^ (uint)&stack0xfffffc08;
  ExceptionList = &local_14;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_3e8 = param_1;
  local_274[0] = 0.0;
  local_3c8 = (float *)(0.5 - *(float *)(param_1 + 0x88) * 0.5);
  local_274[1] = 0.0;
  iVar23 = 0;
  local_26c = local_3c8;
  do {
    local_3d0 = (float *)(local_274[iVar23] * 65536.0);
    uVar32 = FUN_0068d946(uVar15);
    local_238[iVar23 * 2] = (uint)uVar32;
    local_238[iVar23 * 2 + 1] = (uint)((ulonglong)uVar32 >> 0x20);
    iVar23 = iVar23 + 1;
  } while (iVar23 < 3);
  local_180 = *(uint *)(param_1 + 0x10) + local_238[0];
  local_3a0 = (uint *)(param_1 + 0x10);
  local_17c = *(int *)(param_1 + 0x14) + local_238[1] +
              (uint)CARRY4(*(uint *)(param_1 + 0x10),local_238[0]);
  local_178 = *(uint *)(param_1 + 0x18) + local_238[2];
  local_174 = *(int *)(param_1 + 0x1c) + local_238[3] +
              (uint)CARRY4(*(uint *)(param_1 + 0x18),local_238[2]);
  local_170 = *(uint *)(param_1 + 0x20) + local_238[4];
  local_16c = *(int *)(param_1 + 0x24) + local_238[5] +
              (uint)CARRY4(*(uint *)(param_1 + 0x20),local_238[4]);
  piVar16 = (int *)FUN_0042f040(local_6c,&local_180);
  iVar23 = local_3e8;
  local_3d8 = (float *)(local_3e8 + 0x1440);
  piVar17 = (int *)FUN_0042f040(local_78,local_3d8);
  uVar32 = CONCAT44(local_3cc,local_3e0);
  local_134 = *piVar17 - *piVar16;
  local_12c = piVar17[2] - piVar16[2];
  local_130 = piVar17[1] - piVar16[1];
  if ((float)(local_134 * local_134 + local_12c * local_12c + local_130 * local_130) <=
      *(float *)(iVar23 + 0x1458) * *(float *)(iVar23 + 0x1458)) {
    FUN_0042ef10();
    uVar32 = CONCAT44(local_3cc,local_3e0);
    goto LAB_005a9c76;
  }
  if (*(int *)(iVar23 + 0x1464) == 0) goto LAB_005a9c76;
  if (3000 < *(int *)(iVar23 + 0x145c)) {
    local_268[6] = 0;
    local_268[7] = 0;
    local_248 = local_3c8;
    FUN_0042c460(local_268 + 6);
    puVar18 = (undefined4 *)FUN_0042c800(local_38,local_60);
    *(undefined4 *)(iVar23 + 0x1428) = *puVar18;
    *(undefined4 *)(iVar23 + 0x142c) = puVar18[1];
    *(undefined4 *)(iVar23 + 0x1430) = puVar18[2];
    *(undefined4 *)(iVar23 + 0x1434) = puVar18[3];
    *(undefined4 *)(iVar23 + 0x1438) = puVar18[4];
    *(undefined4 *)(iVar23 + 0x143c) = puVar18[5];
    FUN_005a9f90(iVar23);
  }
  uVar32 = CONCAT44(local_3cc,local_3e0);
  local_3c4 = *(uint *)(iVar23 + 0x1464);
  if (local_3c4 == 0) goto LAB_005a9c76;
  pfVar20 = *(float **)(iVar23 + 0x1460);
  pfVar22 = (float *)*pfVar20;
  local_38c = -1;
  uVar15 = local_3c4;
  local_3b0 = pfVar22;
  if (pfVar22 != pfVar20) {
    local_3d0 = (float *)(*(float *)(local_3e8 + 0x88) * 0.5 * 65536.0);
    local_370 = FUN_0068d946();
    local_328 = 0;
    uVar33 = FUN_0068d946();
    local_3d0 = *(float **)(local_3e8 + 0x18);
    local_3c8 = *(float **)(local_3e8 + 0x1c);
    local_3dc = *(float **)(local_3e8 + 0x20);
    local_3c0._0_4_ = *(float **)(local_3e8 + 0x24);
    uVar32 = local_370;
    local_2e8 = uVar33;
    do {
      local_3e4 = (float *)((ulonglong)uVar33 >> 0x20);
      local_3e0 = (float *)uVar33;
      local_370._4_4_ = (int)((ulonglong)uVar32 >> 0x20);
      local_370._0_4_ = (float *)uVar32;
      local_1b0 = (int)*local_3a0 - (int)local_3e0;
      local_1ac = (local_3a0[1] - (int)local_3e4) - (uint)((float *)*local_3a0 < local_3e0);
      local_1a8 = (int)local_3d0 - (int)local_3e0;
      local_3a8._0_4_ = local_3c8;
      local_1a4 = (int)local_3c8 + (-(uint)(local_3d0 < local_3e0) - (int)local_3e4);
      local_380 = local_3dc;
      local_1a0 = (int)local_3dc - (int)(float *)local_370;
      local_19c = (int)(float *)local_3c0 +
                  (-(uint)(local_3dc < (float *)local_370) - local_370._4_4_);
      local_3b8 = (float *)local_3c0;
      local_2f8 = local_3e0;
      local_2f4 = (float)local_3e4;
      local_370 = uVar32;
      puVar19 = (undefined8 *)FUN_0042f040(local_84,&local_1b0);
      uVar33 = CONCAT44(local_3e4,local_3e0);
      local_2b4 = *(int *)(puVar19 + 1) - (int)pfVar22[4];
      local_2bc._4_4_ = (int)((ulonglong)*puVar19 >> 0x20);
      local_2bc._4_4_ = local_2bc._4_4_ - (int)pfVar22[3];
      local_2bc._0_4_ = (int)*puVar19;
      local_2bc._0_4_ = (int)local_2bc - (int)pfVar22[2];
      iVar23 = local_2b4 * local_2b4 + local_2bc._4_4_ * local_2bc._4_4_ +
               (int)local_2bc * (int)local_2bc;
      if ((local_38c < 0) || (iVar23 <= local_38c)) {
        local_3b0 = pfVar22;
        local_38c = iVar23;
      }
      pfVar22 = (float *)*pfVar22;
      uVar32 = local_370;
    } while (pfVar22 != pfVar20);
    uVar15 = local_3c4;
    if (local_38c == 0) {
      *(undefined4 *)(local_3e8 + 0x145c) = 0;
      uVar15 = *(uint *)(local_3e8 + 0x1464);
    }
  }
  pfVar22 = local_3b0;
  if (((*(byte *)(local_3e8 + 0x5c) & 0x40) == 0) && (uVar15 < 0x1e)) {
    fVar29 = pfVar20[1];
    piVar16 = (int *)FUN_0042f040(local_44,local_3d8);
    local_10c = *(int *)((int)fVar29 + 0xc) - piVar16[1];
    local_108 = *(int *)((int)fVar29 + 0x10) - piVar16[2];
    local_110 = *(int *)((int)fVar29 + 8) - *piVar16;
    if ((float)(local_108 * local_108 + local_10c * local_10c + local_110 * local_110) <=
        *(float *)(local_3e8 + 0x1458) * *(float *)(local_3e8 + 0x1458)) goto LAB_005a839f;
    uStack_3d4._0_3_ = CONCAT12(1,(ushort)uStack_3d4);
    iVar23 = local_3e8;
  }
  else {
LAB_005a839f:
    iVar23 = local_3e8;
    uStack_3d4._0_3_ = (uint3)(ushort)uStack_3d4;
    if (local_38c == 0) {
      pfVar20 = (float *)(local_3e8 + 0x141c);
      cVar13 = FUN_004cc7d0(pfVar20);
      if (cVar13 != '\0') {
        *pfVar20 = pfVar22[2];
        *(float *)(iVar23 + 0x1420) = pfVar22[3];
        *(float *)(iVar23 + 0x1424) = pfVar22[4];
        local_298[6] = pfVar22[2];
        local_27c = pfVar22[3];
        local_278 = pfVar22[4];
        FUN_005a6a70(local_298 + 6);
        local_378 = 0.0;
        local_374 = 0;
        local_378 = (float)FUN_0046d4b0();
        iVar25 = local_3e8;
        puVar18 = *(undefined4 **)(iVar23 + 0x1418);
        local_c = 0;
        local_3e0 = (float *)0x46;
        if ((0x45 < (int)puVar18) || (local_3e0 = (float *)puVar18, 0 < (int)puVar18)) {
          do {
            piVar17 = (int *)0x0;
            piVar16 = (int *)**(int **)(iVar23 + 0x1414);
            local_3e4 = (float *)0xffffffff;
            if (piVar16 != *(int **)(iVar23 + 0x1414)) {
              do {
                puVar18 = (undefined4 *)piVar16[4];
                iVar23 = FUN_005a9da0(*puVar18,puVar18[1],puVar18[2]);
                if ((iVar23 != 0) &&
                   (((int)local_3e4 < 0 || (*(int *)(iVar23 + 4) < (int)local_3e4)))) {
                  local_3e4 = *(float **)(iVar23 + 4);
                  piVar17 = piVar16;
                }
                if (*(char *)((int)piVar16 + 0xd) == '\0') {
                  piVar2 = (int *)piVar16[2];
                  if (*(char *)((int)piVar2 + 0xd) == '\0') {
                    cVar13 = *(char *)(*piVar2 + 0xd);
                    piVar16 = piVar2;
                    piVar2 = (int *)*piVar2;
                    while (cVar13 == '\0') {
                      cVar13 = *(char *)(*piVar2 + 0xd);
                      piVar16 = piVar2;
                      piVar2 = (int *)*piVar2;
                    }
                  }
                  else {
                    cVar13 = *(char *)(piVar16[1] + 0xd);
                    piVar11 = (int *)piVar16[1];
                    piVar2 = piVar16;
                    while ((piVar16 = piVar11, cVar13 == '\0' && (piVar2 == (int *)piVar16[2]))) {
                      cVar13 = *(char *)(piVar16[1] + 0xd);
                      piVar11 = (int *)piVar16[1];
                      piVar2 = piVar16;
                    }
                  }
                }
              } while (piVar16 != *(int **)(iVar25 + 0x1414));
              if (-1 < (int)local_3e4) {
                FUN_005a7700(auStack_2dc,0,piVar17 + 4,DAT_0076dda2);
                FUN_0043f470(&local_328,piVar17);
              }
            }
            local_3e0 = (float *)((int)local_3e0 + -1);
            iVar23 = iVar25;
          } while (local_3e0 != (float *)0x0);
          local_3e0 = (float *)0x0;
          pfVar22 = local_3b0;
          iVar23 = local_3e8;
        }
        pfVar20 = (float *)(iVar23 + 0x1414);
        local_3dc = pfVar20;
        if (pfVar20 != &local_378) {
          FUN_0042ca20(*(undefined4 *)((int)*pfVar20 + 4));
          local_3d0 = (float *)((uint)local_3d0 & 0xffffff00);
          *(float *)((int)*pfVar20 + 4) = *pfVar20;
          *(float *)*pfVar20 = *pfVar20;
          *(float *)((int)*pfVar20 + 8) = *pfVar20;
          *(undefined4 *)(iVar23 + 0x1418) = 0;
          FUN_005a6c60(&local_378,local_3d0);
        }
        uStack_398 = 0;
        local_39c = (float)FUN_0046d550(0,0);
        local_c._0_1_ = 1;
        uStack_388 = 0;
        uStack_384 = 0;
        uStack_388 = FUN_006391e0();
        local_c = CONCAT31(local_c._1_3_,2);
        uStack_3ec = (undefined4 *)FUN_005a9da0(pfVar22[2],pfVar22[3],pfVar22[4]);
        local_3d0 = *(float **)*pfVar20;
        if (local_3d0 == (float *)*pfVar20) {
          local_340 = (float *)0x0;
          local_33c = 0.0;
          local_338 = 0.0;
          FUN_0040d9d0(3);
          *local_340 = pfVar22[2];
          local_340[1] = pfVar22[3];
          local_340[2] = pfVar22[4];
          uStack_18 = 5;
          puVar18 = (undefined4 *)FUN_005a7a70(&local_340);
          *puVar18 = *uStack_3ec;
          puVar18[1] = uStack_3ec[1];
          puVar18[2] = uStack_3ec[2];
          puVar18[3] = uStack_3ec[3];
          puVar18[4] = uStack_3ec[4];
          puVar18[5] = uStack_3ec[5];
          iVar25 = FUN_005a7a70(&local_340);
          pfVar26 = (float *)local_3a8;
          *(float *)(iVar25 + 0xc) = pfVar22[2];
          *(float *)(iVar25 + 0x10) = pfVar22[3];
          *(float *)(iVar25 + 0x14) = pfVar22[4];
          for (pfVar20 = (float *)*(float *)local_3a8; pfVar20 != pfVar26;
              pfVar20 = (float *)*pfVar20) {
            FUN_0043f470(&local_344,pfVar20[2]);
            iVar23 = unaff_ESI;
          }
          ppfVar1 = (float **)(iVar23 + 0x140c);
          if (ppfVar1 != &local_394) {
            FUN_0042ca20((*ppfVar1)[1]);
            uStack_3d4 = uStack_3d4 & 0xffffff00;
            (*ppfVar1)[1] = (float)*ppfVar1;
            **ppfVar1 = (float)*ppfVar1;
            (*ppfVar1)[2] = (float)*ppfVar1;
            *(undefined4 *)(iVar23 + 0x1410) = 0;
            pfVar20 = *ppfVar1;
            fVar29 = (float)FUN_005a6ce0(local_394[1],pfVar20,uStack_3d4);
            pfVar20[1] = fVar29;
            piVar16 = *(int **)(iVar23 + 0x140c);
            *(undefined4 *)(iVar23 + 0x1410) = uStack_390;
            piVar17 = (int *)piVar16[1];
            if (*(char *)((int)piVar17 + 0xd) == '\0') {
              cVar13 = *(char *)(*piVar17 + 0xd);
              piVar2 = (int *)*piVar17;
              while (cVar13 == '\0') {
                cVar13 = *(char *)(*piVar2 + 0xd);
                piVar17 = piVar2;
                piVar2 = (int *)*piVar2;
              }
              *piVar16 = (int)piVar17;
              iVar25 = *(int *)(iVar23 + 0x140c);
              iVar21 = *(int *)(iVar25 + 4);
              iVar3 = *(int *)(iVar21 + 8);
              cVar13 = *(char *)(iVar3 + 0xd);
              while (cVar13 == '\0') {
                cVar13 = *(char *)(*(int *)(iVar3 + 8) + 0xd);
                iVar21 = iVar3;
                iVar3 = *(int *)(iVar3 + 8);
              }
              *(int *)(iVar25 + 8) = iVar21;
            }
            else {
              *piVar16 = (int)piVar16;
              iVar25 = *(int *)(iVar23 + 0x140c);
              *(int *)(iVar25 + 8) = iVar25;
            }
          }
          puVar18 = *(undefined4 **)(iVar23 + 0x140c);
          *(undefined4 **)(iVar23 + 0x1408) = puVar18;
          puVar4 = (undefined4 *)*puVar18;
          puVar24 = puVar18;
          while (puVar4 != puVar18) {
            if ((puVar24 == puVar18) || ((int)puVar4[8] < (int)puVar24[8])) {
              *(undefined4 **)(iVar23 + 0x1408) = puVar4;
              puVar24 = puVar4;
            }
            if (*(char *)((int)puVar4 + 0xd) == '\0') {
              puVar5 = (undefined4 *)puVar4[2];
              if (*(char *)((int)puVar5 + 0xd) == '\0') {
                cVar13 = *(char *)((int)*puVar5 + 0xd);
                puVar4 = puVar5;
                puVar5 = (undefined4 *)*puVar5;
                while (cVar13 == '\0') {
                  cVar13 = *(char *)((int)*puVar5 + 0xd);
                  puVar4 = puVar5;
                  puVar5 = (undefined4 *)*puVar5;
                }
              }
              else {
                cVar13 = *(char *)((int)puVar4[1] + 0xd);
                puVar12 = (undefined4 *)puVar4[1];
                puVar5 = puVar4;
                while ((puVar4 = puVar12, cVar13 == '\0' && (puVar5 == (undefined4 *)puVar4[2]))) {
                  cVar13 = *(char *)((int)puVar4[1] + 0xd);
                  puVar12 = (undefined4 *)puVar4[1];
                  puVar5 = puVar4;
                }
              }
            }
          }
          if (local_340 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_340);
          }
          uStack_18 = 1;
          FUN_0043f3b0(&local_350,*local_394,local_394);
                    /* WARNING: Subroutine does not return */
          operator_delete(local_394);
        }
        puVar18 = (undefined4 *)local_3d0[4];
        iVar23 = (int)(local_3d0 + 4);
        pfVar20 = (float *)FUN_005a9da0(*puVar18,puVar18[1],puVar18[2]);
        local_3ac = (undefined4 *)0x0;
        local_3a8._0_4_ = (float *)0x0;
        local_3ac = (undefined4 *)FUN_006391e0();
        uStack_24 = 3;
        local_37c = (undefined4 *)0x0;
        local_378 = 0.0;
        local_374 = 0;
        FUN_0040d9d0(3);
        uStack_24 = 4;
        FUN_0067a7b0(iVar23);
        if (pfVar20 == (float *)0x0) {
LAB_005a8749:
          if (pfVar20 != (float *)unaff_EDI) {
            iVar23 = FUN_00583cb0(local_3b4,*(undefined4 *)(local_3b4 + 4),&local_3dc);
            if (local_3b0 == (float *)0x15555554) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("list<T> too long");
            }
            local_3b0 = (float *)((int)local_3b0 + 1);
            *(int *)(local_3b4 + 4) = iVar23;
            **(int **)(iVar23 + 4) = iVar23;
            goto LAB_005a879e;
          }
        }
        else {
          while (pfVar20 != (float *)unaff_EDI) {
            local_3e0 = (float *)FUN_005a9da0(pfVar20[3],pfVar20[4],pfVar20[5]);
            if ((local_3e0 == pfVar20) || (local_3e0 == (float *)0x0)) goto LAB_005a8749;
            puVar18 = (undefined4 *)FUN_005a7a70(&local_37c);
            *puVar18 = *pfVar20;
            puVar18[1] = pfVar20[1];
            puVar18[2] = pfVar20[2];
            puVar18[3] = pfVar20[3];
            puVar18[4] = pfVar20[4];
            puVar18[5] = pfVar20[5];
            *local_37c = pfVar20[3];
            local_37c[1] = pfVar20[4];
            local_37c[2] = pfVar20[5];
            pfVar20 = local_3e0;
          }
        }
        FUN_005a7900(*local_3ac,local_3ac);
LAB_005a879e:
        if (local_37c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_37c);
        }
        uStack_24 = 2;
        FUN_0043f3b0(&local_358,*local_3ac,local_3ac);
                    /* WARNING: Subroutine does not return */
        operator_delete(local_3ac);
      }
    }
  }
  local_3c0._0_4_ = (float *)pfVar22[4];
  local_3dc = (float *)(*(float *)(iVar23 + 0x88) * 0.5 * 65536.0);
  pfVar20 = (float *)(iVar23 + 0x80);
  uStack_3ec = (undefined4 *)((uint)uStack_3ec & 0xffffff);
  local_380 = pfVar20;
  local_350 = FUN_0068d946(pfVar20);
  local_1d8 = FUN_0068d946();
  local_3cc = (float)((ulonglong)local_1d8 >> 0x20);
  pfVar26 = (float *)local_1d8;
  fVar29 = pfVar22[2];
  local_3e4 = pfVar22 + 2;
  local_9c = ((int)fVar29 >> 0x1f) << 0x10 | (uint)fVar29 >> 0x10;
  fVar30 = pfVar22[3];
  fVar31 = pfVar22[4];
  local_94 = ((int)fVar30 >> 0x1f) << 0x10 | (uint)fVar30 >> 0x10;
  local_a0 = (int)fVar29 * 0x10000;
  local_98 = (int)fVar30 * 0x10000;
  local_1e0 = local_1d8 + CONCAT44(local_9c,local_a0);
  local_3e0 = (float *)((ulonglong)local_1e0 >> 0x20);
  local_1d8 = local_1d8 + CONCAT44(local_94,local_98);
  local_1d0 = local_350 +
              CONCAT44(((int)fVar31 >> 0x1f) << 0x10 | (uint)fVar31 >> 0x10,(int)fVar31 * 0x10000);
  local_3d8 = pfVar26;
  local_320 = pfVar26;
  local_31c = (int)local_3cc;
  local_310 = pfVar26;
  local_30c = (int)local_3cc;
  cVar13 = FUN_0059f850(&local_1e0,pfVar20);
  uVar15 = (uint)uStack_3ec;
  local_3e0 = (float *)((uint)uStack_3ec >> 0x18);
  if (cVar13 != '\0') {
    local_3e0 = (float *)0x1;
  }
  bVar27 = uStack_3d4._2_1_ == '\0';
  uStack_3ec = (undefined4 *)CONCAT13(1,(undefined3)uStack_3ec);
  uStack_3d4 = uStack_3d4 & 0xffffff;
  pfVar22 = (float *)local_3c0;
  pfVar20 = pfVar26;
  local_1b8 = CONCAT44(local_1b8._4_4_,(undefined4)local_1b8);
  local_358 = CONCAT44(local_358._4_4_,(float)local_358);
  if ((bVar27) &&
     (local_1b8 = CONCAT44(local_1b8._4_4_,(undefined4)local_1b8),
     local_358 = CONCAT44(local_358._4_4_,(float)local_358),
     local_3b0 != *(float **)(*(int *)(local_3e8 + 0x1460) + 4))) {
    pfVar22 = (float *)*local_3b0;
    local_3dc = (float *)(*(float *)(local_3e8 + 0x88) * 0.5 * 65536.0);
    uStack_3ec = (undefined4 *)(uVar15 & 0xffffff);
    local_3a8._0_4_ = (float *)pfVar22[4];
    iVar23 = local_3e8 + 0x80;
    local_3b0 = pfVar22;
    local_358 = FUN_0068d946(iVar23);
    pfVar20 = local_3d8;
    local_2ec = (int)local_3cc;
    local_2fc = (int)local_3cc;
    fVar29 = pfVar22[2];
    local_3e4 = pfVar22 + 2;
    local_b4 = ((int)fVar29 >> 0x1f) << 0x10 | (uint)fVar29 >> 0x10;
    fVar30 = pfVar22[3];
    fVar31 = pfVar22[4];
    local_ac = ((int)fVar30 >> 0x1f) << 0x10 | (uint)fVar30 >> 0x10;
    local_b8 = (int)fVar29 * 0x10000;
    local_b0 = (int)fVar30 * 0x10000;
    local_1c8 = local_3d8 + (int)fVar29 * 0x4000;
    local_3b8 = (float *)(local_b4 + (int)local_3cc + (uint)CARRY4(local_b8,(uint)local_3d8));
    local_1c0 = local_3d8 + (int)fVar30 * 0x4000;
    local_1bc = local_ac + (int)local_3cc + (uint)CARRY4(local_b0,(uint)local_3d8);
    local_1b8 = local_358 +
                CONCAT44(((int)fVar31 >> 0x1f) << 0x10 | (uint)fVar31 >> 0x10,(int)fVar31 * 0x10000)
    ;
    local_300 = pfVar26;
    local_2f0 = pfVar26;
    local_1c4 = local_3b8;
    cVar14 = FUN_0059f850(&local_1c8,iVar23);
    cVar13 = (char)local_3e0;
    pfVar22 = (float *)local_3a8;
    if (cVar14 == '\0') goto LAB_005a8db1;
    cVar14 = '\x01';
  }
  else {
LAB_005a8db1:
    cVar13 = (char)local_3e0;
    uStack_3d4 = CONCAT13(1,(uint3)uStack_3d4);
    cVar14 = uStack_3ec._3_1_;
  }
  uVar15 = (uint)uStack_3ec;
  uStack_3ec = (undefined4 *)CONCAT13(1,(undefined3)uStack_3ec);
  pfVar26 = pfVar20;
  local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188);
  local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0);
  if ((uStack_3d4._2_1_ == '\0') &&
     ((((cVar13 != '\0' ||
        (local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188),
        local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0), cVar14 != '\0')) &&
       (local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188),
       local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0), pfVar22 != (float *)local_3c0)) &&
      (local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188),
      local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0),
      local_3b0 != *(float **)(*(int *)(local_3e8 + 0x1460) + 4))))) {
    fVar29 = *local_3b0;
    iVar23 = local_3e8 + 0x80;
    local_3dc = (float *)(*(float *)(local_3e8 + 0x88) * 0.5 * 65536.0);
    uStack_3ec = (undefined4 *)(uVar15 & 0xffffff);
    local_3c0 = FUN_0068d946(iVar23);
    pfVar26 = local_3d8;
    local_3b4 = (int)local_3cc;
    local_3ac = (undefined4 *)local_3cc;
    uVar15 = *(uint *)((int)fVar29 + 8);
    local_3e4 = (float *)((int)fVar29 + 8);
    uVar6 = *(uint *)((int)fVar29 + 0xc);
    local_f4 = ((int)uVar15 >> 0x1f) << 0x10 | uVar15 >> 0x10;
    uVar7 = *(uint *)((int)fVar29 + 0x10);
    local_ec = ((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10;
    local_e4 = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
    local_104[3] = uVar15 * 0x10000;
    local_f0 = uVar6 * 0x10000;
    local_e8 = uVar7 * 0x10000;
    local_198 = local_3d8 + uVar15 * 0x4000;
    local_194 = local_f4 + (int)local_3cc + (uint)CARRY4(local_104[3],(uint)local_3d8);
    local_190 = local_3d8 + uVar6 * 0x4000;
    local_18c = local_ec + (int)local_3cc + (uint)CARRY4(local_f0,(uint)local_3d8);
    local_188 = local_3c0 + CONCAT44(local_e4,local_e8);
    local_3b8 = pfVar20;
    local_3b0 = pfVar20;
    cVar13 = FUN_0059f850(&local_198,iVar23);
    if (cVar13 != '\0') {
      uStack_3ec = (undefined4 *)CONCAT13(1,(undefined3)uStack_3ec);
      uStack_3d4 = uStack_3d4 & 0xffffff;
    }
  }
  local_3dc = (float *)(*(float *)(local_3e8 + 0x88) * 0.5 * 65536.0);
  local_3a8 = FUN_0068d946();
  iVar25 = local_38c;
  puVar10 = local_3a0;
  iVar23 = local_3e8;
  uVar32 = CONCAT44(local_3cc,local_3e0);
  local_314 = (int)local_3cc;
  local_304 = (int)local_3cc;
  fVar29 = *local_3e4;
  fVar30 = local_3e4[1];
  local_cc = ((int)fVar29 >> 0x1f) << 0x10 | (uint)fVar29 >> 0x10;
  fVar31 = local_3e4[2];
  local_c4 = ((int)fVar30 >> 0x1f) << 0x10 | (uint)fVar30 >> 0x10;
  local_bc = ((int)fVar31 >> 0x1f) << 0x10 | (uint)fVar31 >> 0x10;
  local_d0 = (int)fVar29 * 0x10000;
  local_c8 = (int)fVar30 * 0x10000;
  local_c0 = (int)fVar31 * 0x10000;
  local_128 = local_3d8 + (int)fVar29 * 0x4000;
  local_124 = local_cc + (int)local_3cc + (uint)CARRY4(local_d0,(uint)local_3d8);
  local_120 = local_3d8 + (int)fVar30 * 0x4000;
  local_11c = local_c4 + (int)local_3cc + (uint)CARRY4(local_c8,(uint)local_3d8);
  local_118 = local_3a8 + CONCAT44(local_bc,local_c0);
  local_2b0 = (int)local_128 - *local_3a0;
  iStack_2ac = (local_124 - local_3a0[1]) - (uint)(local_128 < (float *)*local_3a0);
  local_2a8 = (int)local_120 - local_3a0[2];
  iStack_2a4 = (local_11c - local_3a0[3]) - (uint)(local_120 < (float *)local_3a0[2]);
  local_2a0 = (uint)local_118 - local_3a0[4];
  iStack_29c = ((int)((ulonglong)local_118 >> 0x20) - local_3a0[5]) -
               (uint)((uint)local_118 < local_3a0[4]);
  local_3e4 = (float *)((float)CONCAT44(iStack_2ac,local_2b0) * 1.5258789e-05);
  local_3b0 = (float *)((float)CONCAT44(iStack_2a4,local_2a8) * 1.5258789e-05);
  local_3dc = (float *)(float)CONCAT44(iStack_29c,local_2a0);
  local_3d8 = (float *)((float)local_3dc * 1.5258789e-05);
  if (((local_38c < 4) && ((*(byte *)(local_3e8 + 0x5c) & 4) != 0)) && ((char)local_3e0 == '\0')) {
    bVar27 = true;
  }
  else {
    bVar27 = false;
  }
  if (bVar27) {
    *(ushort *)(local_3a0 + 0x45) = (ushort)local_3a0[0x45] | 1;
  }
  else {
    *(ushort *)(local_3a0 + 0x45) = (ushort)local_3a0[0x45] & 0xfffe;
  }
  if (((1.0 < (float)local_3d8) || ((*(byte *)(local_3e8 + 0x5c) & 0x40) != 0)) ||
     ((char)local_3e0 == '\0')) {
LAB_005a9117:
    uStack_3ec = (undefined4 *)((uint)uStack_3ec & 0xffffff);
  }
  else {
    bVar27 = uStack_3ec._3_1_ == '\0';
    uStack_3ec = (undefined4 *)CONCAT13(1,(undefined3)uStack_3ec);
    if (bVar27) goto LAB_005a9117;
  }
  fVar29 = (float)local_3b0 * (float)local_3b0 + (float)local_3e4 * (float)local_3e4 +
           (float)local_3d8 * (float)local_3d8;
  local_3d0 = local_3dc;
  local_318 = pfVar26;
  local_308 = pfVar26;
  local_2c8 = (float)local_3e4;
  local_2c4 = (float)local_3b0;
  if (fVar29 <= 0.001) goto LAB_005a9c76;
  if (1.0 < fVar29) {
    dVar28 = (double)fVar29;
    libm_sse2_sqrt_precise();
    fVar29 = 1.0 / (float)dVar28;
    local_3e4 = (float *)(fVar29 * local_2c8);
    local_3d8 = (float *)(fVar29 * (float)local_3d8);
    local_3b0 = (float *)(fVar29 * local_2c4);
  }
  uVar32 = CONCAT44(local_3cc,local_3e0);
  if ((float)local_3d8 <= 0.0) {
    if (((float)local_3d8 < 0.0) && ((*(byte *)(iVar23 + 0x5c) & 2) != 0)) {
      local_3d8 = (float *)0xc0000000;
    }
  }
  else {
    local_3d8 = (float *)0x3f800000;
  }
  if ((*(byte *)(iVar23 + 0x5c) & 0x40) != 0) {
    local_3d8 = (float *)0x40400000;
    iVar25 = 0;
    local_244[0] = *local_380 * 0.5;
    local_244[1] = *(float *)(iVar23 + 0x84) * 0.5;
    local_244[2] = *(float *)(iVar23 + 0x88) * 0.5;
    do {
      local_3d0 = (float *)(local_244[iVar25] * 65536.0);
      uVar32 = FUN_0068d946();
      local_210[iVar25 * 2] = (uint)uVar32;
      local_210[iVar25 * 2 + 1] = (uint)((ulonglong)uVar32 >> 0x20);
      iVar25 = iVar25 + 1;
    } while (iVar25 < 3);
    uVar15 = *puVar10;
    local_168 = uVar15 - local_210[0];
    local_164 = (puVar10[1] - local_210[1]) - (uint)(uVar15 < local_210[0]);
    local_160 = *(uint *)(local_3e8 + 0x18) - local_210[2];
    local_15c = (*(int *)(local_3e8 + 0x1c) - local_210[3]) -
                (uint)(*(uint *)(local_3e8 + 0x18) < local_210[2]);
    local_158 = *(uint *)(local_3e8 + 0x20) - local_210[4];
    local_154 = (*(int *)(local_3e8 + 0x24) - local_210[5]) -
                (uint)(*(uint *)(local_3e8 + 0x20) < local_210[4]);
    FUN_0042f040(&local_dc,&local_168);
    iVar23 = local_3e8;
    iVar25 = 0;
    local_298[0] = *local_380 * 0.5;
    local_298[1] = *(float *)(local_3e8 + 0x84) * 0.5;
    local_298[2] = *(float *)(local_3e8 + 0x88) * 0.5;
    do {
      local_3d0 = (float *)(local_298[iVar25] * 65536.0);
      uVar32 = FUN_0068d946();
      local_268[iVar25 * 2] = (uint)uVar32;
      local_268[iVar25 * 2 + 1] = (uint)((ulonglong)uVar32 >> 0x20);
      iVar25 = iVar25 + 1;
    } while (iVar25 < 3);
    local_210[6] = *local_3a0 + local_268[0];
    local_1f4 = local_3a0[1] + local_268[1] + (uint)CARRY4(*local_3a0,local_268[0]);
    local_1f0 = *(uint *)(iVar23 + 0x18) + local_268[2];
    local_1ec = *(int *)(iVar23 + 0x1c) + local_268[3] +
                (uint)CARRY4(*(uint *)(iVar23 + 0x18),local_268[2]);
    local_1e8 = *(uint *)(iVar23 + 0x20) + local_268[4];
    local_1e4 = *(int *)(iVar23 + 0x24) + local_268[5] +
                (uint)CARRY4(*(uint *)(iVar23 + 0x20),local_268[4]);
    FUN_0042f040(local_14c + 3,local_210 + 6);
    uVar32 = CONCAT44(local_3cc,local_3e0);
    local_21c[0] = 1.0;
    local_21c[1] = 1.0;
    local_21c[2] = 0.0;
    iVar25 = 0;
    do {
      iVar21 = iVar25 + 4;
      *(int *)((int)local_104 + iVar25) = (int)*(float *)((int)local_21c + iVar25);
      iVar25 = iVar21;
    } while (iVar21 < 0xc);
    local_298[3] = 1.0;
    local_298[4] = 1.0;
    local_298[5] = 0.0;
    iVar25 = 0;
    do {
      iVar21 = iVar25 + 4;
      *(int *)((int)local_14c + iVar25) = (int)*(float *)((int)local_298 + iVar25 + 0xc);
      iVar25 = iVar21;
    } while (iVar21 < 0xc);
    uVar15 = (int)((local_dc - local_104[0]) + (local_dc - local_104[0] >> 0x1f & 7U)) >> 3;
    pfVar20 = (float *)((int)((local_d8 - local_104[1]) + (local_d8 - local_104[1] >> 0x1f & 7U)) >>
                       3);
    local_3d0 = (float *)((int)(local_14c[3] + local_14c[0] +
                               (local_14c[3] + local_14c[0] >> 0x1f & 7U)) >> 3);
    iVar21 = (int)(local_13c + local_14c[1] + (local_13c + local_14c[1] >> 0x1f & 7U)) >> 3;
    local_328 = CONCAT44(local_328._4_4_,iVar21);
    iVar25 = local_38c;
    local_3c8 = pfVar20;
    local_3c4 = uVar15;
    uVar33 = local_370;
    lVar8 = local_3c0;
    lVar9 = local_3a8;
    if ((int)uVar15 <= (int)local_3d0) {
      do {
        local_3a8._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
        local_3a8._0_4_ = (float *)lVar9;
        local_3c0._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
        local_3c0._0_4_ = (float *)lVar8;
        uVar35 = CONCAT44((float *)local_3a8,(float *)local_3c0);
        local_370._4_4_ = (int)((ulonglong)uVar33 >> 0x20);
        local_370._0_4_ = (float *)uVar33;
        uVar34 = CONCAT44(local_394,(float *)local_370);
        pfVar22 = pfVar20;
        local_3dc = pfVar20;
        local_3c4 = uVar15;
        if ((int)pfVar20 <= iVar21) {
          do {
            local_394 = (float *)((ulonglong)uVar34 >> 0x20);
            local_370._0_4_ = (float *)uVar34;
            local_3a8._0_4_ = (float *)((ulonglong)uVar35 >> 0x20);
            local_3c0._0_4_ = (float *)uVar35;
            local_3cc = (float)((ulonglong)uVar32 >> 0x20);
            local_3e0 = (float *)uVar32;
            local_3dc = pfVar20;
            local_340 = (float *)FUN_0042f640(uVar15,pfVar20,0);
            uVar34 = CONCAT44(local_394,(float *)local_370);
            uVar35 = CONCAT44((float *)local_3a8,(float *)local_3c0);
            uVar32 = CONCAT44(local_3cc,local_3e0);
            if ((local_340 != (float *)0x0) &&
               (piVar16 = *(int **)*local_340, lVar8 = local_358, piVar16 != (int *)*local_340)) {
              do {
                local_358._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
                local_394 = (float *)((ulonglong)uVar34 >> 0x20);
                local_370._0_4_ = (float *)uVar34;
                local_3a8._0_4_ = (float *)((ulonglong)uVar35 >> 0x20);
                local_3e0 = (float *)uVar32;
                piVar17 = (int *)piVar16[2];
                if (((*piVar17 == 1) || (*piVar17 == 2)) && ((char)piVar17[0xc] != '\0')) {
                  local_2cc = (float)piVar17[0xb];
                  uVar32 = *(undefined8 *)(piVar17 + 9);
                  uVar15 = piVar17[8] & 0x80000001;
                  bVar27 = uVar15 == 0;
                  if ((int)uVar15 < 0) {
                    bVar27 = (uVar15 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  local_2d4._0_4_ = (float)uVar32;
                  local_2d4._4_4_ = (float)((ulonglong)uVar32 >> 0x20);
                  if (bVar27) {
                    local_3cc = local_2d4._4_4_;
                    local_2d4._4_4_ = (float)local_2d4;
                  }
                  else {
                    local_3cc = (float)local_2d4;
                  }
                  local_358._0_4_ = *local_380 * 0.5 * 65536.0;
                  local_3c0._0_4_ = (float *)local_2d4._4_4_;
                  local_2d4 = uVar32;
                  uVar32 = FUN_0068d946();
                  local_3e0 = (float *)((ulonglong)uVar32 >> 0x20);
                  local_3a8._0_4_ = (float *)uVar32;
                  local_350._0_4_ = (float)(float *)local_3c0 * 0.5 * 65536.0;
                  uVar34 = FUN_0068d946();
                  local_394 = (float *)((ulonglong)uVar34 >> 0x20);
                  local_370._0_4_ = (float *)uVar34;
                  local_3c0._0_4_ = (float *)(piVar17[2] - (int)(float *)local_370);
                  iVar21 = (piVar17[3] - (int)local_394) -
                           (uint)((uint)piVar17[2] < (float *)local_370);
                  uVar15 = *local_3a0;
                  local_3b8 = (float *)(uVar15 + (int)(float *)local_3a8 + 0x10000);
                  iVar25 = (int)local_3e0 +
                           (uint)(0xfffeffff < uVar15 + (int)(float *)local_3a8) +
                           (uint)CARRY4(uVar15,(uint)(float *)local_3a8) + local_3a0[1];
                  iVar23 = local_3e8;
                  uVar32 = CONCAT44(local_3cc,local_3e0);
                  uVar35 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                  local_350 = CONCAT44(local_350._4_4_,(float)local_350);
                  lVar8 = CONCAT44(local_358._4_4_,(float)local_358);
                  if ((iVar21 <= iVar25) &&
                     ((iVar21 < iVar25 ||
                      (uVar32 = CONCAT44(local_3cc,local_3e0),
                      uVar35 = CONCAT44((float *)local_3a8,(float *)local_3c0),
                      local_350 = CONCAT44(local_350._4_4_,(float)local_350),
                      lVar8 = CONCAT44(local_358._4_4_,(float)local_358),
                      (float *)local_3c0 <= local_3b8)))) {
                    iVar25 = ((local_3a0[1] - (int)local_3e0) - (uint)(uVar15 < (float *)local_3a8))
                             - (uint)(uVar15 - (int)(float *)local_3a8 < 0x10000);
                    iVar21 = (int)local_394 +
                             (uint)CARRY4((uint)(float *)local_370,piVar17[2]) + piVar17[3];
                    uVar32 = CONCAT44(local_3cc,local_3e0);
                    uVar35 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                    local_350 = CONCAT44(local_350._4_4_,(float)local_350);
                    lVar8 = CONCAT44(local_358._4_4_,(float)local_358);
                    if ((iVar25 <= iVar21) &&
                       ((iVar25 < iVar21 ||
                        (uVar32 = CONCAT44(local_3cc,local_3e0),
                        uVar35 = CONCAT44((float *)local_3a8,(float *)local_3c0),
                        local_350 = CONCAT44(local_350._4_4_,(float)local_350),
                        lVar8 = CONCAT44(local_358._4_4_,(float)local_358),
                        (uVar15 - (int)(float *)local_3a8) - 0x10000 <
                        (uint)((int)(float *)local_370 + piVar17[2]))))) {
                      local_39c = *(float *)(local_3e8 + 0x84) * 0.5 * 65536.0;
                      uVar32 = FUN_0068d946();
                      local_3a8._0_4_ = (float *)((ulonglong)uVar32 >> 0x20);
                      local_3c0._0_4_ = (float *)uVar32;
                      local_33c = local_3cc * 0.5 * 65536.0;
                      uVar15 = *(uint *)(local_3e8 + 0x18);
                      uVar32 = FUN_0068d946();
                      iVar23 = local_3e8;
                      local_3cc = (float)((ulonglong)uVar32 >> 0x20);
                      local_3e0 = (float *)uVar32;
                      local_3b8 = (float *)(uVar15 + (int)(float *)local_3c0 + 0x10000);
                      iVar21 = (int)(float *)local_3a8 +
                               (uint)(0xfffeffff < uVar15 + (int)(float *)local_3c0) +
                               (uint)CARRY4(uVar15,(uint)(float *)local_3c0) +
                               *(int *)(local_3e8 + 0x1c);
                      local_394 = (float *)(piVar17[4] - (int)local_3e0);
                      iVar25 = (piVar17[5] - (int)local_3cc) - (uint)((uint)piVar17[4] < local_3e0);
                      uVar34 = CONCAT44(local_394,(float *)local_370);
                      uVar35 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                      local_350 = CONCAT44(local_350._4_4_,(float)local_350);
                      lVar8 = CONCAT44(local_358._4_4_,(float)local_358);
                      if ((iVar25 <= iVar21) &&
                         ((iVar25 < iVar21 ||
                          (uVar34 = CONCAT44(local_394,(float *)local_370),
                          uVar35 = CONCAT44((float *)local_3a8,(float *)local_3c0),
                          local_350 = CONCAT44(local_350._4_4_,(float)local_350),
                          lVar8 = CONCAT44(local_358._4_4_,(float)local_358), local_394 <= local_3b8
                          )))) {
                        iVar21 = ((*(int *)(local_3e8 + 0x1c) - (int)(float *)local_3a8) -
                                 (uint)(uVar15 < (float *)local_3c0)) -
                                 (uint)(uVar15 - (int)(float *)local_3c0 < 0x10000);
                        iVar25 = (int)local_3cc + piVar17[5] +
                                 (uint)CARRY4((uint)local_3e0,piVar17[4]);
                        uVar34 = CONCAT44(local_394,(float *)local_370);
                        uVar35 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                        local_350 = CONCAT44(local_350._4_4_,(float)local_350);
                        lVar8 = CONCAT44(local_358._4_4_,(float)local_358);
                        if ((iVar21 <= iVar25) &&
                           ((iVar21 < iVar25 ||
                            (uVar34 = CONCAT44(local_394,(float *)local_370),
                            uVar35 = CONCAT44((float *)local_3a8,(float *)local_3c0),
                            local_350 = CONCAT44(local_350._4_4_,(float)local_350),
                            lVar8 = CONCAT44(local_358._4_4_,(float)local_358),
                            (uVar15 - (int)(float *)local_3c0) - 0x10000 <
                            (uint)((int)local_3e0 + piVar17[4]))))) {
                          local_344 = *(float *)(local_3e8 + 0x88) * 0.5 * 65536.0;
                          uVar35 = FUN_0068d946();
                          local_3a8._0_4_ = (float *)((ulonglong)uVar35 >> 0x20);
                          local_3c0._0_4_ = (float *)uVar35;
                          iVar25 = (int)(float *)local_3a8 +
                                   (uint)CARRY4(*(uint *)(iVar23 + 0x20),(uint)(float *)local_3c0) +
                                   *(int *)(iVar23 + 0x24);
                          uVar34 = CONCAT44(local_394,(float *)local_370);
                          uVar32 = CONCAT44(local_3cc,local_3e0);
                          local_350 = CONCAT44(local_350._4_4_,(float)local_350);
                          lVar8 = CONCAT44(local_358._4_4_,(float)local_358);
                          if ((piVar17[7] <= iVar25) &&
                             ((piVar17[7] < iVar25 ||
                              (uVar34 = CONCAT44(local_394,(float *)local_370),
                              uVar32 = CONCAT44(local_3cc,local_3e0),
                              local_350 = CONCAT44(local_350._4_4_,(float)local_350),
                              lVar8 = CONCAT44(local_358._4_4_,(float)local_358),
                              (uint)piVar17[6] <= *(uint *)(iVar23 + 0x20) + (int)(float *)local_3c0
                              )))) {
                            local_338 = local_2cc * 65536.0;
                            uVar32 = FUN_0068d946();
                            local_3b8 = (float *)((uint)uVar32 + piVar17[6]);
                            iVar21 = (int)((ulonglong)uVar32 >> 0x20) + piVar17[7] +
                                     (uint)CARRY4((uint)uVar32,piVar17[6]);
                            iVar25 = (*(int *)(iVar23 + 0x24) - (int)(float *)local_3a8) -
                                     (uint)(*(uint *)(iVar23 + 0x20) < (float *)local_3c0);
                            uVar34 = CONCAT44(local_394,(float *)local_370);
                            uVar32 = CONCAT44(local_3cc,local_3e0);
                            uVar35 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                            local_350 = CONCAT44(local_350._4_4_,(float)local_350);
                            lVar8 = CONCAT44(local_358._4_4_,(float)local_358);
                            if ((iVar25 <= iVar21) &&
                               ((iVar25 < iVar21 ||
                                (uVar34 = CONCAT44(local_394,(float *)local_370),
                                uVar32 = CONCAT44(local_3cc,local_3e0),
                                uVar35 = CONCAT44((float *)local_3a8,(float *)local_3c0),
                                local_350 = CONCAT44(local_350._4_4_,(float)local_350),
                                lVar8 = CONCAT44(local_358._4_4_,(float)local_358),
                                (float *)(*(uint *)(iVar23 + 0x20) - (int)(float *)local_3c0) <
                                local_3b8)))) {
                              *(undefined1 *)(piVar17 + 0xc) = 0;
                              *(undefined4 *)(piVar16[2] + 0x34) = 0;
                              uVar34 = CONCAT44(local_394,(float *)local_370);
                              uVar32 = CONCAT44(local_3cc,local_3e0);
                              uVar35 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                              local_350 = CONCAT44(local_350._4_4_,(float)local_350);
                              lVar8 = CONCAT44(local_358._4_4_,(float)local_358);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                local_358 = lVar8;
                piVar16 = (int *)*piVar16;
                uVar15 = local_3c4;
                lVar8 = local_358;
              } while (piVar16 != (int *)*local_340);
            }
            local_394 = (float *)((ulonglong)uVar34 >> 0x20);
            local_370._0_4_ = (float *)uVar34;
            local_3a8._0_4_ = (float *)((ulonglong)uVar35 >> 0x20);
            local_3c0._0_4_ = (float *)uVar35;
            pfVar20 = (float *)((int)local_3dc + 1);
            iVar21 = (int)local_328;
            pfVar22 = local_3c8;
            local_3dc = pfVar20;
            uVar33 = CONCAT44(local_370._4_4_,(float *)local_370);
            lVar8 = CONCAT44(local_3c0._4_4_,(float *)local_3c0);
          } while ((int)pfVar20 <= (int)local_328);
        }
        local_3c0 = lVar8;
        local_370 = uVar33;
        uVar15 = uVar15 + 1;
        pfVar20 = pfVar22;
        iVar25 = local_38c;
        local_3c4 = uVar15;
        uVar33 = local_370;
        lVar8 = local_3c0;
        lVar9 = local_3a8;
      } while ((int)uVar15 <= (int)local_3d0);
    }
  }
  if ((uStack_3d4._2_1_ != '\0') && ((*(byte *)(iVar23 + 0x124) & 1) == 0)) goto LAB_005a9c76;
  if (iVar25 < 4) {
    if (uStack_3d4._2_1_ == '\0') {
      if ((0.0 <= (float)local_3d8) && (uStack_3ec._3_1_ == '\0')) {
        fVar29 = (float)local_3d8 * 4.0;
        iVar25 = 0;
        if (3 < param_2) {
          iVar21 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar21 * 4;
          do {
            fVar30 = (fVar29 - *(float *)(iVar23 + 0x3c)) * 0.05 + *(float *)(iVar23 + 0x3c);
            fVar30 = (fVar29 - fVar30) * 0.05 + fVar30;
            fVar30 = (fVar29 - fVar30) * 0.05 + fVar30;
            *(float *)(iVar23 + 0x3c) = (fVar29 - fVar30) * 0.05 + fVar30;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)(iVar23 + 0x3c) =
                 (fVar29 - *(float *)(iVar23 + 0x3c)) * 0.05 + *(float *)(iVar23 + 0x3c);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
      }
LAB_005a999a:
      fVar29 = 6.0;
      if ((*(byte *)(iVar23 + 0x124) & 0x40) != 0) {
        fVar29 = 12.0;
      }
      iVar25 = 0;
      if (uStack_3d4._3_1_ == '\0') {
        fVar30 = fVar29 * (float)local_3e4;
        if (3 < param_2) {
          iVar21 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar21 * 4;
          do {
            fVar31 = (fVar30 - *(float *)(iVar23 + 0x34)) * 0.001 + *(float *)(iVar23 + 0x34);
            fVar31 = (fVar30 - fVar31) * 0.001 + fVar31;
            fVar31 = (fVar30 - fVar31) * 0.001 + fVar31;
            *(float *)(iVar23 + 0x34) = (fVar30 - fVar31) * 0.001 + fVar31;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)(iVar23 + 0x34) =
                 (fVar30 - *(float *)(iVar23 + 0x34)) * 0.001 + *(float *)(iVar23 + 0x34);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
        fVar29 = fVar29 * (float)local_3b0;
        iVar25 = 0;
        if (3 < param_2) {
          iVar21 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar21 * 4;
          do {
            fVar30 = (fVar29 - *(float *)(iVar23 + 0x38)) * 0.001 + *(float *)(iVar23 + 0x38);
            fVar30 = (fVar29 - fVar30) * 0.001 + fVar30;
            fVar30 = (fVar29 - fVar30) * 0.001 + fVar30;
            *(float *)(iVar23 + 0x38) = (fVar29 - fVar30) * 0.001 + fVar30;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
        }
        if (iVar25 < param_2) {
          param_2 = param_2 - iVar25;
          do {
            *(float *)(iVar23 + 0x38) =
                 (fVar29 - *(float *)(iVar23 + 0x38)) * 0.001 + *(float *)(iVar23 + 0x38);
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
      }
      else {
        fVar29 = (float)local_3e4 * 8.0;
        if (3 < param_2) {
          iVar21 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar21 * 4;
          do {
            fVar30 = (fVar29 - *(float *)(iVar23 + 0x34)) * 0.01 + *(float *)(iVar23 + 0x34);
            fVar30 = (fVar29 - fVar30) * 0.01 + fVar30;
            fVar30 = (fVar29 - fVar30) * 0.01 + fVar30;
            *(float *)(iVar23 + 0x34) = (fVar29 - fVar30) * 0.01 + fVar30;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)(iVar23 + 0x34) =
                 (fVar29 - *(float *)(iVar23 + 0x34)) * 0.01 + *(float *)(iVar23 + 0x34);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
        iVar25 = 0;
        fVar29 = (float)local_3b0 * 8.0;
        if (3 < param_2) {
          iVar21 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar21 * 4;
          do {
            fVar30 = (fVar29 - *(float *)(iVar23 + 0x38)) * 0.01 + *(float *)(iVar23 + 0x38);
            fVar30 = (fVar29 - fVar30) * 0.01 + fVar30;
            fVar30 = (fVar29 - fVar30) * 0.01 + fVar30;
            *(float *)(iVar23 + 0x38) = (fVar29 - fVar30) * 0.01 + fVar30;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
        }
        if (iVar25 < param_2) {
          param_2 = param_2 - iVar25;
          do {
            *(float *)(iVar23 + 0x38) =
                 (fVar29 - *(float *)(iVar23 + 0x38)) * 0.01 + *(float *)(iVar23 + 0x38);
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
      }
    }
    else {
      if ((float)local_3d8 < 0.0) goto LAB_005a999a;
      *(float *)(iVar23 + 0x34) = (float)local_3e4 * 8.0;
      *(float *)(iVar23 + 0x38) = (float)local_3b0 * 8.0;
      *(float *)(iVar23 + 0x3c) = (float)local_3d8 * 8.0;
    }
    *(float *)(iVar23 + 0x40) = (float)local_3e4 * 20.0;
    *(float *)(iVar23 + 0x44) = (float)local_3b0 * 20.0;
    *(float *)(iVar23 + 0x48) = (float)local_3d8 * 20.0;
  }
  else {
    *(float *)(iVar23 + 0x40) = (float)local_3e4 * 40.0;
    *(float *)(iVar23 + 0x44) = (float)local_3b0 * 40.0;
    *(float *)(iVar23 + 0x48) = (float)local_3d8 * 40.0;
  }
  *(undefined4 *)(iVar23 + 0x4c) = 0;
  *(undefined4 *)(iVar23 + 0x50) = 0;
  *(undefined4 *)(iVar23 + 0x54) = 0;
LAB_005a9c76:
  local_3cc = (float)((ulonglong)uVar32 >> 0x20);
  local_3e0 = (float *)uVar32;
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&uStack_3ec);
  return;
}


/* FUN_005ae9a0 @ 005ae9a0  kind=gamemisc  attributed-by=caller-vote  size=80 */

void FUN_005ae9a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 4;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = puVar2[-4];
        param_3[1] = puVar2[-3];
        param_3[2] = puVar2[-2];
        param_3[3] = puVar2[-1];
        param_3[4] = *puVar2;
        param_3[5] = puVar2[1];
        param_3[6] = puVar2[2];
      }
      param_3 = param_3 + 8;
      puVar1 = puVar2 + 4;
      puVar2 = puVar2 + 8;
    } while (puVar1 != param_2);
  }
  return;
}


/* FUN_005c0420 @ 005c0420  kind=gamemisc  attributed-by=caller-vote  size=504 */

void FUN_005c0420(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x7fffffd < (uint)in_ECX[1]) {
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
        goto LAB_005c0601;
      }
LAB_005c0558:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_005c0558;
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
LAB_005c0601:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_005c0630 @ 005c0630  kind=gamemisc  attributed-by=caller-vote  size=565 */

undefined4 * FUN_005c0630(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  uint uStack_34;
  undefined1 local_24 [4];
  int *local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f3c80;
  local_10 = ExceptionList;
  uStack_34 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_00639d30(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    puVar4 = &uStack_34;
    if ((*param_3 < param_2[4]) ||
       ((local_14 = (undefined1 *)&uStack_34, *param_3 <= param_2[4] &&
        (local_14 = (undefined1 *)&uStack_34, puVar4 = &uStack_34, param_3[1] < param_2[5])))) {
LAB_005c06c1:
      local_14 = (undefined1 *)puVar4;
      FUN_00639d30(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    iVar2 = piVar1[2];
    if ((*(int *)(iVar2 + 0x10) < *param_3) ||
       ((local_14 = (undefined1 *)&uStack_34, *(int *)(iVar2 + 0x10) <= *param_3 &&
        (local_14 = (undefined1 *)&uStack_34, *(int *)(iVar2 + 0x14) < param_3[1])))) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_00639d30(param_1,0,iVar2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    if ((*param_3 < param_2[4]) ||
       ((puVar4 = &uStack_34, *param_3 <= param_2[4] &&
        (puVar4 = &uStack_34, param_3[1] < param_2[5])))) {
      local_20 = param_2;
      FUN_0042c740();
      piVar3 = local_20;
      cVar5 = FUN_0046d1c0(local_20 + 4,param_3);
      puVar4 = (uint *)local_14;
      if (cVar5 != '\0') {
        if (*(char *)(piVar3[2] + 0xd) != '\0') {
          FUN_00639d30(param_1,0,piVar3,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_005c06c1;
      }
    }
    local_14 = (undefined1 *)puVar4;
    cVar5 = FUN_0046d1c0(param_2 + 4,param_3);
    if (cVar5 != '\0') {
      local_20 = param_2;
      FUN_005c3ea0();
      piVar3 = local_20;
      if ((local_20 == piVar1) || (cVar5 = FUN_0046d1c0(param_3,local_20 + 4), cVar5 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_00639d30(param_1,1,piVar3,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_00639d30(param_1,0,param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar6 = (undefined4 *)FUN_005c0b10(local_24,0,param_3,param_4);
  *param_1 = *puVar6;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_005c0b10 @ 005c0b10  kind=gamemisc  attributed-by=caller-vote  size=286 */

void FUN_005c0b10(undefined4 *param_1,char param_2,int *param_3,void *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_3;
  puStack_c = &LAB_006f3cc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  local_8 = 0;
  bVar8 = true;
  piVar7 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    iVar2 = *param_3;
    piVar6 = (int *)piVar1[1];
    do {
      piVar7 = piVar6;
      iVar3 = piVar7[4];
      if (param_2 == '\0') {
        if ((iVar2 < iVar3) || ((iVar2 <= iVar3 && (param_3[1] < piVar7[5])))) {
          bVar8 = true;
          goto LAB_005c0bb2;
        }
        bVar8 = false;
LAB_005c0ba8:
        piVar6 = (int *)piVar7[2];
      }
      else {
        if ((iVar3 < iVar2) || ((iVar3 <= iVar2 && (piVar7[5] < param_3[1])))) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        bVar8 = !bVar8;
        if (!bVar8) goto LAB_005c0ba8;
LAB_005c0bb2:
        piVar6 = (int *)*piVar7;
      }
    } while (*(char *)((int)piVar6 + 0xd) == '\0');
  }
  _param_2 = piVar7;
  if (bVar8) {
    if (piVar7 == (int *)*piVar1) {
      bVar8 = true;
      goto LAB_005c0bd1;
    }
    FUN_0042c740();
  }
  if ((*piVar4 <= _param_2[4]) && ((*piVar4 < _param_2[4] || (piVar4[1] <= _param_2[5])))) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_4);
  }
LAB_005c0bd1:
  puVar5 = (undefined4 *)FUN_00639d30(&param_2,bVar8,piVar7,piVar4,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_005c2630 @ 005c2630  kind=gamemisc  attributed-by=caller-vote  size=310 */

void FUN_005c2630(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [8];
  
  iVar2 = param_2 - param_1;
  do {
    iVar2 = iVar2 / 0xc;
    if (iVar2 < 0x21) {
LAB_005c2708:
      if (1 < iVar2) {
        FUN_005c1060(param_1,param_2,param_4,0);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < (param_2 - param_1) / 0xc) {
          FUN_005c14e0(param_1,param_2,param_4,0,0);
        }
        FUN_005c29a0(param_1,param_2,param_4);
        return;
      }
      goto LAB_005c2708;
    }
    piVar1 = (int *)FUN_005c3360(local_c,param_1,param_2,param_4);
    iVar3 = *piVar1;
    iVar2 = piVar1[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((iVar3 - param_1) / 0xc < (param_2 - iVar2) / 0xc) {
      FUN_005c2630(param_1,iVar3,param_3,param_4);
      param_1 = iVar2;
      iVar3 = param_2;
    }
    else {
      FUN_005c2630(iVar2,param_2,param_3,param_4);
    }
    iVar2 = iVar3 - param_1;
    param_2 = iVar3;
  } while( true );
}


/* FUN_005c29a0 @ 005c29a0  kind=gamemisc  attributed-by=caller-vote  size=167 */

void FUN_005c29a0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = (int)param_2 - (int)param_1;
  while (1 < iVar1 / 0xc) {
    local_14 = *(undefined8 *)(param_2 + -3);
    puVar2 = param_2 + -3;
    local_c = param_2[-1];
    *puVar2 = *param_1;
    param_2[-2] = param_1[1];
    param_2[-1] = param_1[2];
    FUN_005c0350(param_1,0,(iVar1 + -0xc) / 0xc,&local_14,param_3);
    param_2 = puVar2;
    iVar1 = (int)puVar2 - (int)param_1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c3360 @ 005c3360  kind=gamemisc  attributed-by=caller-vote  size=802 */

void FUN_005c3360(undefined4 *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *local_18;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_18 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_005c1ef0(param_2,local_18,param_3 + -3,param_4);
  pfVar6 = local_18 + 3;
  for (; param_2 < local_18; local_18 = local_18 + -3) {
    if ((local_18[2] < local_18[-1]) || (local_18[-1] < local_18[2])) break;
  }
  pfVar3 = pfVar6;
  pfVar8 = local_18;
  if (pfVar6 < param_3) {
    if (3 < ((int)param_3 + (0xb - (int)pfVar6)) / 0xc) {
      fVar1 = local_18[2];
      do {
        pfVar3 = pfVar6;
        if ((fVar1 < pfVar6[2]) || (pfVar6[2] < fVar1)) goto joined_r0x005c34a2;
        if ((fVar1 < pfVar6[5]) || (pfVar6[5] < fVar1)) {
          pfVar6 = pfVar6 + 3;
          pfVar3 = pfVar6;
          goto joined_r0x005c34a2;
        }
        if ((fVar1 < pfVar6[8]) || (pfVar6[8] < fVar1)) {
          pfVar6 = pfVar6 + 6;
          pfVar3 = pfVar6;
          goto joined_r0x005c34a2;
        }
        if ((fVar1 < pfVar6[0xb]) || (pfVar6[0xb] < fVar1)) {
          pfVar6 = pfVar6 + 9;
          pfVar3 = pfVar6;
          goto joined_r0x005c34a2;
        }
        pfVar6 = pfVar6 + 0xc;
      } while ((int)pfVar6 < (int)(param_3 + -9));
    }
    pfVar3 = pfVar6;
    if (pfVar6 < param_3) {
      do {
        pfVar3 = pfVar6;
        if ((local_18[2] < pfVar6[2]) || (pfVar6[2] < local_18[2])) break;
        pfVar6 = pfVar6 + 3;
        pfVar3 = pfVar6;
      } while (pfVar6 < param_3);
    }
  }
joined_r0x005c34a2:
  do {
    if (param_3 <= pfVar3) {
LAB_005c34f5:
      if (param_2 < local_18) {
        pfVar5 = local_18 + -1;
        pfVar7 = pfVar8;
        do {
          pfVar8 = pfVar7;
          if (*pfVar5 <= pfVar7[2]) {
            if (*pfVar5 < pfVar7[2]) break;
            pfVar8 = pfVar7 + -3;
            local_14 = *(undefined8 *)(pfVar7 + -3);
            local_c = pfVar7[-1];
            *pfVar8 = pfVar5[-2];
            pfVar7[-2] = pfVar5[-1];
            pfVar7[-1] = *pfVar5;
            iVar4 = 0;
            do {
              *(undefined4 *)((int)pfVar5 + iVar4 + -8) = *(undefined4 *)((int)&local_14 + iVar4);
              iVar4 = iVar4 + 4;
            } while (iVar4 < 8);
            *pfVar5 = local_c;
          }
          local_18 = local_18 + -3;
          pfVar5 = pfVar5 + -3;
          pfVar7 = pfVar8;
        } while (param_2 < local_18);
      }
      if (local_18 == param_2) {
        if (pfVar3 == param_3) {
          *param_1 = pfVar8;
          param_1[1] = pfVar6;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (pfVar6 != pfVar3) {
          uVar2 = *(undefined8 *)pfVar8;
          fVar1 = pfVar8[2];
          *pfVar8 = *pfVar6;
          pfVar8[1] = pfVar6[1];
          pfVar8[2] = pfVar6[2];
          *(undefined8 *)pfVar6 = uVar2;
          pfVar6[2] = fVar1;
        }
        uVar2 = *(undefined8 *)pfVar8;
        fVar1 = pfVar8[2];
        *pfVar8 = *pfVar3;
        pfVar8[1] = pfVar3[1];
        pfVar8[2] = pfVar3[2];
        *(undefined8 *)pfVar3 = uVar2;
        pfVar3[2] = fVar1;
        pfVar6 = pfVar6 + 3;
        pfVar3 = pfVar3 + 3;
        pfVar8 = pfVar8 + 3;
      }
      else {
        pfVar5 = local_18 + -3;
        if (pfVar3 == param_3) {
          pfVar7 = pfVar8 + -3;
          if (pfVar5 != pfVar7) {
            uVar2 = *(undefined8 *)pfVar5;
            fVar1 = local_18[-1];
            *pfVar5 = *pfVar7;
            local_18[-2] = pfVar8[-2];
            local_18[-1] = pfVar8[-1];
            *(undefined8 *)pfVar7 = uVar2;
            pfVar8[-1] = fVar1;
          }
          uVar2 = *(undefined8 *)pfVar7;
          fVar1 = pfVar8[-1];
          *pfVar7 = pfVar6[-3];
          pfVar8[-2] = pfVar6[-2];
          pfVar8[-1] = pfVar6[-1];
          *(undefined8 *)(pfVar6 + -3) = uVar2;
          pfVar6[-1] = fVar1;
          pfVar6 = pfVar6 + -3;
          local_18 = pfVar5;
          pfVar8 = pfVar7;
        }
        else {
          uVar2 = *(undefined8 *)pfVar3;
          fVar1 = pfVar3[2];
          *pfVar3 = *pfVar5;
          pfVar3[1] = local_18[-2];
          pfVar3[2] = local_18[-1];
          *(undefined8 *)pfVar5 = uVar2;
          local_18[-1] = fVar1;
          pfVar3 = pfVar3 + 3;
          local_18 = pfVar5;
        }
      }
      goto joined_r0x005c34a2;
    }
    pfVar5 = pfVar6;
    if (pfVar8[2] <= pfVar3[2]) {
      if (pfVar8[2] < pfVar3[2]) goto LAB_005c34f5;
      pfVar5 = pfVar6 + 3;
      uVar2 = *(undefined8 *)pfVar6;
      fVar1 = pfVar6[2];
      *pfVar6 = *pfVar3;
      pfVar6[1] = pfVar3[1];
      pfVar6[2] = pfVar3[2];
      *(undefined8 *)pfVar3 = uVar2;
      pfVar3[2] = fVar1;
    }
    pfVar6 = pfVar5;
    pfVar3 = pfVar3 + 3;
  } while( true );
}


/* FUN_005cb0d0 @ 005cb0d0  kind=gamemisc  attributed-by=caller-vote  size=721 */

void FUN_005cb0d0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int in_ECX;
  float10 fVar14;
  float10 fVar15;
  uint *local_60;
  int local_4c;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar8 = (int)(param_1 + -0x4000 + (param_1 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar9 = (int)(param_2 + -0x4000 + (param_2 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar10 = (int)(param_1 + 0x4000 + (param_1 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  fVar14 = (float10)FUN_004c0ef0((double)param_2 * 0.0005,0x40aabe0000000000);
  fVar15 = (float10)FUN_004c0ef0((double)param_1 * 0.0005,0x40d6df4000000000);
  uVar11 = (uint)((float)param_1 + (float)fVar14 * 3.0 * 256.0);
  uVar12 = (uint)((float)param_2 + (float)fVar15 * 3.0 * 256.0);
  local_60 = (uint *)0x0;
  local_4c = 0;
  if (iVar8 <= iVar10) {
    iVar13 = iVar8 * 0x400 + 0x2f;
    iVar4 = iVar9;
    puVar5 = local_60;
    iVar6 = local_4c;
    do {
      for (; iVar4 <= (int)(param_2 + 0x4000 + (param_2 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar4 = iVar4 + 1) {
        local_60 = puVar5;
        local_4c = iVar6;
        if ((((-1 < iVar8) && (-1 < iVar4)) && (iVar13 < 0x10002f)) &&
           ((iVar4 < 0x400 &&
            (puVar1 = *(uint **)(in_ECX + 0x400000 + (iVar13 + iVar4) * 4), puVar1 != (uint *)0x0)))
           ) {
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          local_18 = CONCAT44(((((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10) -
                              (((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10)) -
                              (uint)(uVar2 * 0x10000 < uVar11 * 0x10000),
                              uVar2 * 0x10000 + uVar11 * -0x10000);
          local_10 = CONCAT44(((((int)uVar3 >> 0x1f) << 0x10 | uVar3 >> 0x10) -
                              (((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10)) -
                              (uint)(uVar3 * 0x10000 < uVar12 * 0x10000),
                              uVar3 * 0x10000 + uVar12 * -0x10000);
          local_4c = (int)((float)local_10 * 1.5258789e-05 * (float)local_10 * 1.5258789e-05 +
                          (float)local_18 * 1.5258789e-05 * (float)local_18 * 1.5258789e-05);
          local_60 = puVar1;
          if ((puVar5 != (uint *)0x0) && (iVar6 <= local_4c)) {
            local_60 = puVar5;
            local_4c = iVar6;
          }
        }
        puVar5 = local_60;
        iVar6 = local_4c;
      }
      iVar8 = iVar8 + 1;
      iVar13 = iVar13 + 0x400;
      iVar4 = iVar9;
    } while (iVar8 <= iVar10);
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005d8750 @ 005d8750  kind=gamemisc  attributed-by=caller-vote  size=3274 */

void FUN_005d8750(uint param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int **ppiVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int in_ECX;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  bool bVar17;
  float10 fVar18;
  float fVar19;
  undefined8 uVar20;
  int local_e0;
  uint local_dc;
  int local_d8;
  uint local_d4;
  int local_d0;
  undefined4 *local_cc;
  int local_c8;
  undefined4 *local_c4;
  int local_c0;
  int *local_bc;
  int *local_b8 [4];
  uint local_a8;
  float local_a4;
  uint local_a0;
  int local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int local_8c;
  int local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  uint local_78;
  uint local_74;
  int **local_70;
  int **local_6c;
  int **local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  float local_20;
  int *local_1c;
  int iStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f40f9;
  local_10 = ExceptionList;
  uVar6 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_78 = param_1;
  local_74 = param_2;
  local_d0 = param_3;
  local_14 = uVar6;
  if (*(int *)(in_ECX + 0xa4) == 0) {
    __security_check_cookie(uVar6 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar16 = 0;
  local_c8 = 0;
  ExceptionList = &local_10;
  local_88 = in_ECX;
  puVar7 = (undefined4 *)FUN_0046d550(0,0);
  piVar15 = (int *)(in_ECX + 4);
  piVar14 = (int *)**(int **)(in_ECX + 4);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  bVar17 = piVar14 == *(int **)(in_ECX + 4);
  local_cc = puVar7;
  local_80 = piVar14;
  local_7c = piVar15;
  while (!bVar17) {
    puVar2 = (undefined4 *)piVar14[6];
    if ((((*(ushort *)((int)puVar2 + 0x7e) & 0x2000) != 0) &&
        (piVar15 = local_7c, (int)(puVar2[0x6c] + ((int)puVar2[0x6c] >> 0x1f & 7U)) >> 3 == local_78
        )) && ((int)(puVar2[0x6d] + ((int)puVar2[0x6d] >> 0x1f & 7U)) >> 3 == local_74)) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      iVar8 = FUN_00583cb0(puVar7,puVar7[1],&local_80);
      if (iVar16 == 0x15555554) goto LAB_005d93b6;
      puVar7[1] = iVar8;
      iVar16 = iVar16 + 1;
      **(int **)(iVar8 + 4) = iVar8;
      piVar15 = local_7c;
      local_c8 = iVar16;
    }
    if (*(char *)((int)piVar14 + 0xd) == '\0') {
      local_80 = (int *)piVar14[2];
      if (*(char *)((int)local_80 + 0xd) != '\0') {
        cVar1 = *(char *)(piVar14[1] + 0xd);
        piVar5 = (int *)piVar14[1];
        piVar4 = piVar14;
        while ((piVar14 = piVar5, local_80 = piVar14, cVar1 == '\0' && (piVar4 == (int *)piVar14[2])
               )) {
          cVar1 = *(char *)(piVar14[1] + 0xd);
          piVar5 = (int *)piVar14[1];
          piVar4 = piVar14;
        }
        goto LAB_005d88a5;
      }
      piVar4 = (int *)*local_80;
      piVar14 = local_80;
      if (*(char *)(*local_80 + 0xd) != '\0') goto LAB_005d88a5;
      do {
        piVar14 = piVar4;
        piVar4 = (int *)*piVar14;
      } while (*(char *)(*piVar14 + 0xd) == '\0');
      bVar17 = piVar14 == (int *)*piVar15;
      local_80 = piVar14;
    }
    else {
LAB_005d88a5:
      bVar17 = piVar14 == (int *)*piVar15;
    }
  }
  for (puVar2 = (undefined4 *)*puVar7; puVar2 != puVar7; puVar2 = (undefined4 *)*puVar2) {
    FUN_0043ede0(&local_98,puVar2[2],uVar6);
  }
  piVar14 = (int *)(local_78 * 8);
  piVar15 = piVar14 + 2;
  local_94 = piVar15;
  local_84 = piVar14;
  local_80 = piVar14;
  if ((int)piVar14 < (int)piVar15) {
    uVar6 = local_74 * 8;
    iVar16 = uVar6 + 8;
    local_a8 = uVar6;
    local_9c = iVar16;
    do {
      uVar13 = uVar6;
      local_84 = piVar14;
      if ((int)uVar6 < iVar16) {
        do {
          if (((-1 < (int)piVar14) && (-1 < (int)uVar13)) &&
             (((int)piVar14 < 0x10000 && ((int)uVar13 < 0x10000)))) {
            iVar8 = (int)((int)piVar14 + ((int)piVar14 >> 0x1f & 0x3fU)) >> 6;
            iVar12 = (int)(((int)uVar13 >> 0x1f & 0x3fU) + uVar13) >> 6;
            if ((((-1 < iVar8) && (-1 < iVar12)) && (iVar8 < 0x400)) &&
               ((iVar12 < 0x400 &&
                (iVar8 = *(int *)(local_88 + 0xbc + (iVar8 * 0x400 + iVar12) * 4), iVar8 != 0)))) {
              uVar6 = (uint)piVar14 & 0x8000003f;
              if ((int)uVar6 < 0) {
                uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
              }
              uVar9 = uVar13 & 0x8000003f;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
              }
              uVar6 = *(uint *)(iVar8 + 0x10018 + (uVar6 * 0x40 + uVar9) * 4);
              local_a0 = uVar6;
              if (uVar6 != 0) {
                iVar16 = *(int *)(uVar6 + 0xa0);
                iVar8 = *(int *)(uVar6 + 0x18);
                if (iVar16 < *(int *)(uVar6 + 0x1c) - iVar8 >> 2) {
                  do {
                    puVar7 = *(undefined4 **)(iVar8 + iVar16 * 4);
                    if (puVar7 != (undefined4 *)0x0) {
                      (**(code **)*puVar7)(1);
                    }
                    iVar8 = *(int *)(uVar6 + 0x18);
                    iVar16 = iVar16 + 1;
                  } while (iVar16 < *(int *)(uVar6 + 0x1c) - iVar8 >> 2);
                }
                FUN_0040d9d0(*(undefined4 *)(local_a0 + 0xa0));
                piVar14 = local_84;
                iVar16 = local_9c;
              }
            }
          }
          uVar13 = uVar13 + 1;
          piVar15 = local_94;
          uVar6 = local_a8;
        } while ((int)uVar13 < iVar16);
      }
      piVar14 = (int *)((int)piVar14 + 1);
      local_84 = piVar14;
    } while ((int)piVar14 < (int)piVar15);
  }
  if ((((int)local_78 < 0) || ((int)local_74 < 0)) ||
     ((0x1fff < (int)local_78 || (0x1fff < (int)local_74)))) {
LAB_005d940a:
    puVar7 = (undefined4 *)*local_cc;
    *local_cc = local_cc;
    local_cc[1] = local_cc;
    if (puVar7 == local_cc) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_cc);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar7);
  }
  iVar16 = (int)((int)local_80 + ((int)local_80 >> 0x1f & 0x3fU)) >> 6;
  iVar8 = (int)(((int)(local_74 * 8) >> 0x1f & 0x3fU) + local_74 * 8) >> 6;
  if ((((iVar16 < 0) || (iVar8 < 0)) || (0x3ff < iVar16)) ||
     ((0x3ff < iVar8 ||
      (iVar16 = *(int *)(local_88 + 0xbc + (iVar16 * 0x400 + iVar8) * 4), iVar16 == 0))))
  goto LAB_005d940a;
  uVar6 = local_78 & 0x80000007;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
  }
  uVar13 = local_74 & 0x80000007;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
  }
  local_64 = (uVar13 + uVar6 * 8) * 0x68 + 0x14018 + iVar16;
  if (local_64 == 0) goto LAB_005d940a;
  *(undefined4 *)(local_64 + 0x34) = 0;
  *(undefined1 *)(local_64 + 0x41) = 0;
  *(undefined4 *)(local_64 + 0x44) = 0;
  *(undefined4 *)(local_64 + 0x48) = 0;
  iVar16 = *(int *)(local_64 + 0x18);
  if (iVar16 == 10) goto LAB_005d940a;
  local_70 = (int **)0x0;
  local_6c = (int **)0x0;
  local_68 = (int **)0x0;
  local_8 = CONCAT31(local_8._1_3_,1);
  if (iVar16 == 0xe) {
    FUN_0063da20(1);
LAB_005d8c5a:
    if (local_6c != (int **)0x0) {
      *local_6c = (int *)0x5;
    }
  }
  else if (iVar16 == 1) {
    FUN_0063dc90(1);
    if (local_6c != (int **)0x0) {
      *local_6c = (int *)0x9;
    }
    local_6c = local_6c + 1;
    local_b8[0] = (int *)0x3;
    if ((local_b8 < local_6c) && (local_70 <= local_b8)) {
      iVar16 = (int)local_b8 - (int)local_70;
      if (local_6c == local_68) {
        FUN_0063dc90(1);
      }
      if (local_6c != (int **)0x0) {
        *local_6c = local_70[iVar16 >> 2];
      }
    }
    else {
      if (local_6c == local_68) {
        FUN_0063dc90(1);
      }
      if (local_6c != (int **)0x0) {
        *local_6c = (int *)0x3;
      }
    }
    local_6c = local_6c + 1;
    local_bc = (int *)0x4;
    if ((&local_bc < local_6c) && (local_70 <= &local_bc)) {
      iVar16 = (int)&local_bc - (int)local_70;
      if (local_6c == local_68) {
        FUN_0063dc90(1);
      }
      if (local_6c != (int **)0x0) {
        *local_6c = local_70[iVar16 >> 2];
      }
    }
    else {
      if (local_6c == local_68) {
        FUN_0063dc90(1);
      }
      if (local_6c != (int **)0x0) {
        *local_6c = (int *)0x4;
      }
    }
  }
  else {
    if (iVar16 != 0) {
      FUN_0063dc90(1);
      goto LAB_005d8c5a;
    }
    FUN_0063dc90(1);
    if (local_6c != (int **)0x0) {
      *local_6c = (int *)0x1;
    }
  }
  ppiVar3 = local_70;
  local_6c = local_6c + 1;
  iVar8 = (int)local_6c - (int)local_70;
  uVar6 = rand();
  iVar16 = 0;
  local_84 = (int *)0x0;
  local_8c = 0;
  local_c0 = 0;
  piVar15 = ppiVar3[uVar6 % (uint)(iVar8 >> 2)];
  local_7c = piVar15;
  puVar7 = (undefined4 *)FUN_0046d550(0,0);
  local_8._0_1_ = 2;
  piVar14 = (int *)**(int **)(local_88 + 4);
  local_c4 = puVar7;
  if (piVar14 != *(int **)(local_88 + 4)) {
    do {
      piVar15 = piVar14 + 6;
      if ((piVar14[6] != 0) && (*(char *)(piVar14[6] + 0x60) == '\0')) {
        iVar8 = FUN_00583cb0(puVar7,puVar7[1],piVar15);
        if (iVar16 == 0x15555554) goto LAB_005d93b6;
        iVar16 = iVar16 + 1;
        local_c4[1] = iVar8;
        **(int **)(iVar8 + 4) = iVar8;
        if ((local_84 == (int *)0x0) || (iVar8 = *(int *)(*piVar15 + 400), iVar8 < (int)local_84)) {
          iVar8 = *(int *)(*piVar15 + 400);
          local_84 = (int *)iVar8;
        }
        puVar7 = local_c4;
        local_c0 = iVar16;
        if ((local_8c == 0) || (local_8c < iVar8)) {
          local_8c = iVar8;
        }
      }
      if (*(char *)((int)piVar14 + 0xd) == '\0') {
        piVar15 = (int *)piVar14[2];
        if (*(char *)((int)piVar15 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar15 + 0xd);
          piVar14 = piVar15;
          piVar15 = (int *)*piVar15;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar15 + 0xd);
            piVar14 = piVar15;
            piVar15 = (int *)*piVar15;
          }
        }
        else {
          cVar1 = *(char *)(piVar14[1] + 0xd);
          piVar4 = (int *)piVar14[1];
          piVar15 = piVar14;
          while ((piVar14 = piVar4, cVar1 == '\0' && (piVar15 == (int *)piVar14[2]))) {
            cVar1 = *(char *)(piVar14[1] + 0xd);
            piVar4 = (int *)piVar14[1];
            piVar15 = piVar14;
          }
        }
      }
      piVar15 = local_7c;
    } while (piVar14 != *(int **)(local_88 + 4));
  }
  if (piVar15 == (int *)0x7) {
    uVar10 = FUN_005f7400(local_78,local_74,local_8c);
    iVar16 = local_64;
    *(undefined4 *)(local_64 + 0x38) = uVar10;
    uVar6 = rand();
    uVar6 = uVar6 & 0x80000007;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
    }
    *(uint *)(iVar16 + 0x48) = uVar6 + 0x19;
    *(undefined4 *)(iVar16 + 0x4c) = 0xffffffff;
    *(undefined4 *)(iVar16 + 0x50) = 0xffffffff;
  }
  else {
    if (piVar15 == (int *)0xa) {
      uVar10 = FUN_005f7400(local_78,local_74,local_8c);
      iVar16 = local_64;
      *(undefined4 *)(local_64 + 0x38) = uVar10;
      iVar8 = rand();
      iVar8 = iVar8 % 5 + 10;
    }
    else {
      if (piVar15 != (int *)0xb) {
        if (piVar15 != (int *)0x1) {
          piVar14 = (int *)0x0;
          piVar15 = (int *)0x0;
          local_b8[1] = (int *)0x0;
          local_b8[2] = (int *)0x0;
          local_90 = (int *)0x0;
          local_b8[3] = (int *)0x0;
          local_98 = (int *)(local_74 * 0x800 + 0x80);
          local_a0 = local_78 * 0x800 + 0x80;
          local_8._0_1_ = 3;
          local_9c = 0;
          do {
            local_1c = local_80;
            local_dc = ((int)local_a0 >> 0x1f) << 0x10 | local_a0 >> 0x10;
            local_e0 = local_a0 << 0x10;
            local_84 = (int *)(local_74 * 8);
            local_a8 = 0;
            local_94 = local_98;
            do {
              piVar4 = local_90;
              local_d4 = ((int)local_94 >> 0x1f) << 0x10 | (uint)local_94 >> 0x10;
              local_d8 = (int)local_94 << 0x10;
              iStack_18 = (int)local_84;
              fVar18 = (float10)FUN_005f8e10(&local_e0,&local_d8);
              local_a4 = (float)fVar18;
              fVar19 = 1.0 - local_a4;
              if ((0.0 < fVar19) && (local_a4 = fVar19 * fVar19, 0.0 < local_a4)) {
                if ((local_7c == (int *)0xc) || (local_7c == (int *)0xd)) {
                  uVar6 = (int)local_84 + (int)local_80 & 0x80000001;
                  bVar17 = uVar6 == 0;
                  if ((int)uVar6 < 0) {
                    bVar17 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if (!bVar17) {
                    local_a4 = local_a4 * 2.0;
                  }
                }
                uVar20 = CONCAT44(iStack_18,local_1c);
                local_28 = uVar20;
                local_20 = local_a4;
                if ((&local_28 < piVar15) && (piVar14 <= &local_28)) {
                  iVar16 = ((int)&local_28 - (int)piVar14) / 0xc;
                  if ((piVar15 == local_90) &&
                     (iVar8 = (int)local_90 - (int)piVar15 >> 0x1f,
                     ((int)local_90 - (int)piVar15) / 0xc + iVar8 == iVar8)) {
                    iVar8 = ((int)piVar15 - (int)piVar14) / 0xc;
                    if (iVar8 == 0x15555555) {
LAB_005d91b3:
                    /* WARNING: Subroutine does not return */
                      std::_Xlength_error("vector<T> too long");
                    }
                    uVar6 = iVar8 + 1;
                    uVar13 = ((int)local_90 - (int)piVar14) / 0xc;
                    if (0x15555555 - (uVar13 >> 1) < uVar13) {
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = uVar13 + (uVar13 >> 1);
                    }
                    if (uVar13 < uVar6) {
                      uVar13 = uVar6;
                    }
                    FUN_00668950(uVar13);
                    local_90 = local_b8[3];
                    piVar15 = local_b8[2];
                    piVar14 = local_b8[1];
                  }
                  if (piVar15 != (int *)0x0) {
                    *piVar15 = piVar14[iVar16 * 3];
                    piVar15[1] = piVar14[iVar16 * 3 + 1];
                    piVar15[2] = piVar14[iVar16 * 3 + 2];
                  }
                }
                else {
                  if ((piVar15 == piVar4) &&
                     (iVar16 = (int)piVar4 - (int)piVar15 >> 0x1f,
                     ((int)piVar4 - (int)piVar15) / 0xc + iVar16 == iVar16)) {
                    iVar16 = ((int)piVar15 - (int)piVar14) / 0xc;
                    if (iVar16 == 0x15555555) goto LAB_005d91b3;
                    uVar13 = ((int)piVar4 - (int)piVar14) / 0xc;
                    uVar6 = iVar16 + 1;
                    if (0x15555555 - (uVar13 >> 1) < uVar13) {
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = uVar13 + (uVar13 >> 1);
                    }
                    if (uVar13 < uVar6) {
                      uVar13 = uVar6;
                    }
                    FUN_00668950(uVar13);
                    uVar20 = CONCAT44(iStack_18,local_1c);
                    local_90 = local_b8[3];
                    piVar15 = local_b8[2];
                    piVar14 = local_b8[1];
                  }
                  if (piVar15 != (int *)0x0) {
                    *(undefined8 *)piVar15 = uVar20;
                    piVar15[2] = (int)local_a4;
                  }
                }
                piVar15 = piVar15 + 3;
                local_b8[2] = piVar15;
              }
              local_a8 = local_a8 + 1;
              local_84 = (int *)((int)local_84 + 1);
              local_94 = local_94 + 0x40;
            } while ((int)local_a8 < 8);
            local_80 = (int *)((int)local_80 + 1);
            local_9c = local_9c + 1;
            local_a0 = local_a0 + 0x100;
          } while (local_9c < 8);
          if (piVar14 != piVar15) {
            local_98 = (int *)((uint)local_98 & 0xffffff00);
            FUN_005c2630(piVar14,piVar15,((int)piVar15 - (int)piVar14) / 0xc,local_98);
            iVar16 = *piVar14;
            iVar8 = piVar14[1];
            if (local_7c == (int *)0x3) {
              uVar10 = FUN_005f7820(local_78,local_74,local_8c);
            }
            else {
              if ((local_7c != (int *)0x2) && (local_7c != (int *)0x4)) {
                if ((local_7c == (int *)0xc) || (local_7c == (int *)0xd)) {
                  uVar10 = FUN_005f56c0(iVar16 * 0x100 + 0x80,iVar8 * 0x100 + 0x80,
                                        (int)*(float *)(local_64 + 0x14),1);
                  *(undefined4 *)(local_64 + 0x38) = uVar10;
                  if (local_7c == (int *)0xc) {
                    iVar12 = rand();
                    *(int *)(local_64 + 0x48) = iVar12 % 5 + 6;
                  }
                }
                else {
                  uVar10 = FUN_005f7400(local_78,local_74,local_8c);
                  *(undefined4 *)(local_64 + 0x38) = uVar10;
                  iVar12 = rand();
                  *(int *)(local_64 + 0x48) = iVar12 % 10 + 10;
                }
                goto LAB_005d92fe;
              }
              uVar10 = FUN_005f56c0(iVar16 * 0x100 + 0x80,iVar8 * 0x100 + 0x80,
                                    (int)*(float *)(local_64 + 0x14),0);
            }
            *(undefined4 *)(local_64 + 0x38) = uVar10;
LAB_005d92fe:
            *(int *)(local_64 + 0x4c) = iVar16;
            *(int *)(local_64 + 0x50) = iVar8;
            local_8 = CONCAT31(local_8._1_3_,2);
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar14);
          }
          if (piVar14 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar14);
          }
          goto LAB_005d93cd;
        }
        *(undefined4 *)(local_64 + 0x38) = *(undefined4 *)(local_64 + 0x54);
        *(undefined4 *)(local_64 + 0x4c) = *(undefined4 *)(local_64 + 0x60);
        *(undefined4 *)(local_64 + 0x50) = *(undefined4 *)(local_64 + 100);
        iVar16 = local_64;
        goto LAB_005d9319;
      }
      uVar10 = FUN_005f7400(local_78,local_74,local_8c);
      iVar16 = local_64;
      *(undefined4 *)(local_64 + 0x38) = uVar10;
      iVar8 = rand();
      iVar8 = iVar8 % 5 + 0xf;
    }
    *(int *)(iVar16 + 0x48) = iVar8;
    *(undefined4 *)(iVar16 + 0x4c) = 0xffffffff;
    *(undefined4 *)(iVar16 + 0x50) = 0xffffffff;
  }
LAB_005d9319:
  iVar8 = rand();
  iVar12 = local_d0;
  *(int *)(iVar16 + 0x30) = iVar8;
  *(undefined1 *)(iVar16 + 0x40) = *(undefined1 *)(iVar16 + 0x28);
  *(int *)(iVar16 + 0x3c) = local_8c;
  local_60 = local_78;
  *(int **)(iVar16 + 0x34) = piVar15;
  local_5c = local_74;
  local_50 = *(undefined4 *)(iVar16 + 0x2c);
  local_4c = *(undefined4 *)(iVar16 + 0x30);
  local_44 = *(undefined4 *)(iVar16 + 0x38);
  local_40 = *(undefined4 *)(iVar16 + 0x3c);
  iVar8 = *(int *)(local_d0 + 0x60);
  local_3c = *(undefined1 *)(iVar16 + 0x40);
  local_3b = *(undefined1 *)(iVar16 + 0x41);
  local_38 = *(undefined4 *)(iVar16 + 0x44);
  local_34 = *(undefined4 *)(iVar16 + 0x48);
  local_30 = *(undefined4 *)(iVar16 + 0x4c);
  local_2c = *(undefined4 *)(iVar16 + 0x50);
  local_58 = 0;
  local_48 = piVar15;
  iVar11 = FUN_00451d40(iVar8,*(undefined4 *)(iVar8 + 4),&local_60);
  iVar16 = *(int *)(iVar12 + 100);
  if (iVar16 == 0x3fffffe) {
LAB_005d93b6:
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(iVar12 + 100) = iVar16 + 1;
  *(int *)(iVar8 + 4) = iVar11;
  **(int **)(iVar11 + 4) = iVar11;
LAB_005d93cd:
  puVar7 = (undefined4 *)*local_c4;
  *local_c4 = local_c4;
  local_c4[1] = local_c4;
  if (puVar7 == local_c4) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_c4);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar7);
}


/* FUN_005d9ad0 @ 005d9ad0  kind=gamemisc  attributed-by=caller-vote  size=1926 */

/* WARNING: Removing unreachable block (ram,0x005da210) */
/* WARNING: Removing unreachable block (ram,0x005da223) */
/* WARNING: Removing unreachable block (ram,0x005da1fd) */

void FUN_005d9ad0(int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int in_ECX;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined4 *local_b8;
  int local_ac;
  undefined4 *local_a4;
  int local_9c;
  uint *local_80;
  int local_70;
  int local_6c;
  uint local_64;
  uint uStack_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_24;
  uint local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f41b9;
  local_10 = ExceptionList;
  uVar6 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = uVar6;
  if (((*(char *)(in_ECX + 0xb4) != '\0') || (*(int *)(in_ECX + 0xa4) == 0)) ||
     (iVar3 = *(int *)(in_ECX + 0xbc + (param_1 * 0x400 + param_2) * 4), iVar3 == 0)) {
    __security_check_cookie(uVar6 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar18 = 0;
  local_9c = 0;
  ExceptionList = &local_10;
  puVar7 = (undefined4 *)FUN_0046d550(0,0);
  piVar17 = *(int **)(in_ECX + 4);
  local_8 = 0;
  piVar4 = (int *)*piVar17;
  while (piVar4 != piVar17) {
    piVar17 = piVar4 + 6;
    if ((piVar4[6] != 0) && (*(char *)(piVar4[6] + 0x60) == '\0')) {
      FUN_004860b0(piVar17);
      if ((iVar18 == 0) || (iVar12 = *(int *)(*piVar17 + 400), iVar12 < iVar18)) {
        iVar12 = *(int *)(*piVar17 + 400);
        iVar18 = iVar12;
      }
      if ((local_9c == 0) || (local_9c < iVar12)) {
        local_9c = iVar12;
      }
    }
    FUN_005c3ea0(uVar6);
    piVar17 = *(int **)(in_ECX + 4);
  }
  local_b8 = (undefined4 *)0x0;
  local_a4 = (undefined4 *)0x0;
  puVar15 = (uint *)0x0;
  local_80 = (uint *)0x0;
  uVar6 = (uint)local_8 >> 8;
  local_8 = CONCAT31((int3)uVar6,3);
  uVar16 = (int)((param_2 * 0x40 >> 0x1f & 7U) + param_2 * 0x40) >> 3;
  local_6c = 0;
  local_2c = CONCAT44(uVar16,(undefined4)local_2c);
  uVar19 = (int)((param_1 * 0x40 >> 0x1f & 7U) + param_1 * 0x40) >> 3;
  iVar18 = uVar19 * 8;
  uVar6 = uVar16;
  do {
    local_ac = 0;
    iVar12 = uVar16 * 8;
    do {
      if (((((int)uVar19 < 0) || ((int)uVar6 < 0)) || (0xffff < iVar18)) || (0x1fff < (int)uVar6)) {
LAB_005d9d2f:
        puVar20 = (undefined4 *)0x0;
      }
      else {
        iVar8 = (int)(iVar18 + (iVar18 >> 0x1f & 0x3fU)) >> 6;
        iVar13 = (int)((iVar12 >> 0x1f & 0x3fU) + iVar12) >> 6;
        if (((iVar8 < 0) || (iVar13 < 0)) ||
           ((0x3ff < iVar8 ||
            ((0x3ff < iVar13 ||
             (iVar8 = *(int *)(in_ECX + 0xbc + (iVar8 * 0x400 + iVar13) * 4), iVar8 == 0))))))
        goto LAB_005d9d2f;
        uVar14 = uVar19 & 0x80000007;
        if ((int)uVar14 < 0) {
          uVar14 = (uVar14 - 1 | 0xfffffff8) + 1;
        }
        uVar9 = uVar6 & 0x80000007;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
        }
        puVar20 = (undefined4 *)(iVar8 + 0x14018 + (uVar9 + uVar14 * 8) * 0x68);
      }
      local_1c = uVar19;
      uStack_18 = uVar6;
      uVar10 = __alldiv(puVar20[2],puVar20[3],0x10000,0);
      uVar11 = __alldiv(*puVar20,puVar20[1],0x10000,0);
      iVar8 = FUN_005cb0d0(uVar11,uVar10);
      if (iVar8 == iVar3) {
        if (puVar20[0xd] != 0) {
          puVar20[0xd] = 0;
          puVar20[0x11] = 0;
          local_54 = puVar20[0xb];
          local_50 = puVar20[0xc];
          local_4c = puVar20[0xd];
          local_48 = puVar20[0xe];
          local_44 = puVar20[0xf];
          local_40 = *(undefined1 *)(puVar20 + 0x10);
          local_3f = *(undefined1 *)((int)puVar20 + 0x41);
          local_3c = puVar20[0x11];
          local_38 = puVar20[0x12];
          local_34 = puVar20[0x13];
          local_30 = puVar20[0x14];
          iVar8 = *(int *)(param_3 + 0x60);
          local_5c = 0;
          local_64 = local_1c;
          uStack_60 = uStack_18;
          iVar13 = FUN_00451d40(iVar8,*(undefined4 *)(iVar8 + 4),&local_64);
          if (*(int *)(param_3 + 100) == 0x3fffffe) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 1;
          *(int *)(iVar8 + 4) = iVar13;
          **(int **)(iVar13 + 4) = iVar13;
        }
        if (puVar20[0x15] != 0) {
          puVar20[0x15] = 0;
          puVar20[0x16] = 0;
          *(undefined1 *)(puVar20 + 0x17) = 0;
        }
        if (puVar20[6] == 0) {
          iVar8 = FUN_0047faa0(param_1,param_2);
          fVar1 = *(float *)(iVar8 + 0x10);
          local_70 = 1;
          iVar13 = 10;
          if (fVar1 < 0.2) {
            local_70 = 10;
            iVar13 = 0x14;
          }
          if ((*(float *)(iVar8 + 0xc) < 0.2) && (0.8 < fVar1)) {
            local_70 = 0xf;
            iVar13 = 0x19;
          }
          if ((0.8 < *(float *)(iVar8 + 0xc)) && (0.8 < fVar1)) {
            local_70 = 10;
            iVar13 = 0x14;
          }
          if (*(char *)(iVar8 + 8) == '\x01') {
            local_70 = 0x14;
            iVar13 = 0x1e;
          }
          iVar8 = rand();
          *(undefined1 *)(puVar20 + 0x17) = 0;
          local_70 = iVar8 % ((iVar13 - local_70) + 1) + local_70;
          puVar20[0x16] = local_70;
          uVar10 = FUN_005f7820(param_1,param_2,local_70);
          puVar20[0x15] = uVar10;
          uVar14 = rand();
          uVar14 = uVar14 & 0x80000003;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
          }
          iVar8 = iVar12 + 2 + uVar14;
          uVar14 = rand();
          uVar14 = uVar14 & 0x80000003;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
          }
          iVar13 = uVar14 + iVar18 + 2;
          local_24 = CONCAT44(iVar8,iVar13);
          puVar20[0x18] = iVar13;
          puVar20[0x19] = iVar8;
          if (&local_1c < puVar15) {
            iVar8 = (int)&local_1c >> 3;
            if (puVar15 == (uint *)0x0) {
              FUN_005fbc10(1);
              puVar15 = local_80;
            }
            if (puVar15 != (uint *)0x0) {
              *puVar15 = *(uint *)(iVar8 * 8);
              puVar15[1] = *(uint *)(iVar8 * 8 + 4);
            }
          }
          else {
            if (puVar15 == (uint *)0x0) {
              FUN_005fbc10(1);
              puVar15 = local_80;
            }
            if (puVar15 != (uint *)0x0) {
              *puVar15 = local_1c;
              puVar15[1] = uStack_18;
            }
          }
          puVar15 = puVar15 + 2;
          local_80 = puVar15;
        }
        iVar8 = puVar20[6];
        if ((((iVar8 != 0) && (iVar8 != 10)) && ((int)puVar20[9] <= local_9c + 2)) &&
           ((iVar8 != 1 || (iVar8 = rand(), iVar8 % 0x32 == 0)))) {
          FUN_004868d0(&local_1c);
        }
      }
      local_ac = local_ac + 1;
      uVar6 = uVar6 + 1;
      iVar12 = iVar12 + 8;
    } while (local_ac < 8);
    local_6c = local_6c + 1;
    uVar19 = uVar19 + 1;
    iVar18 = iVar18 + 8;
    if (7 < local_6c) break;
    uVar6 = local_2c._4_4_;
  } while( true );
  local_6c = 2;
  do {
    iVar18 = rand();
    if ((iVar18 % 6 == 0) && (local_b8 != (undefined4 *)0x0)) {
LAB_005da0f0:
      uVar6 = rand();
      uVar6 = uVar6 % (uint)((int)local_b8 >> 3);
      uVar2 = *(undefined8 *)(uVar6 * 8);
      puVar20 = (undefined4 *)(uVar6 * 8);
      while (puVar5 = puVar20 + 2, puVar5 != local_b8) {
        *puVar20 = *puVar5;
        puVar20[1] = puVar20[3];
        puVar20 = puVar5;
      }
      local_b8 = local_b8 + -2;
      local_2c._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
      local_2c._0_4_ = (undefined4)uVar2;
      uVar10 = (undefined4)local_2c;
      uVar11 = local_2c._4_4_;
      local_2c = uVar2;
LAB_005da13c:
      FUN_005d8750(uVar10,uVar11,param_3);
    }
    else {
      if (local_a4 != (undefined4 *)0x0) {
        uVar6 = rand();
        uVar6 = uVar6 % (uint)((int)local_a4 >> 3);
        uVar2 = *(undefined8 *)(uVar6 * 8);
        puVar20 = (undefined4 *)(uVar6 * 8);
        while (puVar5 = puVar20 + 2, puVar5 != local_a4) {
          *puVar20 = *puVar5;
          puVar20[1] = puVar20[3];
          puVar20 = puVar5;
        }
        local_a4 = local_a4 + -2;
        local_24._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        local_24._0_4_ = (undefined4)uVar2;
        uVar10 = (undefined4)local_24;
        uVar11 = local_24._4_4_;
        local_24 = uVar2;
        goto LAB_005da13c;
      }
      if (local_b8 != (undefined4 *)0x0) goto LAB_005da0f0;
    }
    local_6c = local_6c + -1;
  } while (local_6c != 0);
  iVar18 = 0;
  do {
    if (local_80 == (uint *)0x0) break;
    uVar6 = rand();
    uVar6 = uVar6 % (uint)((int)local_80 >> 3);
    uVar2 = *(undefined8 *)(uVar6 * 8);
    for (puVar15 = (uint *)(uVar6 * 8 + 8); puVar15 != local_80; puVar15 = puVar15 + 2) {
      puVar15[-2] = *puVar15;
      puVar15[-1] = puVar15[1];
    }
    local_24._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uVar10 = local_24._4_4_;
    local_80 = local_80 + -2;
    local_24._0_4_ = (undefined4)uVar2;
    uVar11 = (undefined4)local_24;
    local_24 = uVar2;
    FUN_005d8750(uVar11,uVar10,param_3);
    iVar18 = iVar18 + 1;
  } while (iVar18 < 2);
  piVar17 = (int *)(iVar3 + 0x10018);
  local_6c = 0x40;
  do {
    iVar18 = 0x40;
    do {
      if (*piVar17 != 0) {
        FUN_005d9460(*piVar17);
      }
      piVar17 = piVar17 + 1;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    local_6c = local_6c + -1;
  } while (local_6c != 0);
  *(undefined1 *)(iVar3 + 0x15a18) = 1;
  puVar20 = (undefined4 *)*puVar7;
  *puVar7 = puVar7;
  puVar7[1] = puVar7;
  if (puVar20 == puVar7) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar7);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar20);
}


/* FUN_005ee7a0 @ 005ee7a0  kind=gamemisc  attributed-by=caller-vote  size=656 */

void FUN_005ee7a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  SequentialBehavior *pSVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  float10 fVar6;
  CombatBehavior *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f45f1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = operator_new(0xc);
  local_8 = 0;
  if (local_14 == (CombatBehavior *)0x0) {
    pSVar3 = (SequentialBehavior *)0x0;
  }
  else {
    pSVar3 = cube::SequentialBehavior::SequentialBehavior((SequentialBehavior *)local_14);
  }
  local_8 = 0xffffffff;
  local_14 = operator_new(0x14);
  local_8 = 1;
  if (local_14 == (CombatBehavior *)0x0) {
    local_14 = (CombatBehavior *)0x0;
  }
  else {
    local_14 = cube::CombatBehavior::CombatBehavior(local_14,0x41a00000);
  }
  iVar1 = (pSVar3->SequentialBehavior_data).offset_0x0;
  local_8 = 0xffffffff;
  iVar4 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  iVar2 = (pSVar3->SequentialBehavior_data).offset_0x4;
  if (iVar2 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  (pSVar3->SequentialBehavior_data).offset_0x4 = iVar2 + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  local_14 = operator_new(0x10);
  local_8 = 2;
  if (local_14 == (CombatBehavior *)0x0) {
    local_14 = (CombatBehavior *)0x0;
  }
  else {
    local_14 = (CombatBehavior *)
               cube::CompanionBehavior::CompanionBehavior((CompanionBehavior *)local_14);
  }
  (local_14->CombatBehavior_data).offset_0x4 = param_1;
  (local_14->CombatBehavior_data).offset_0x8 = param_2;
  iVar1 = (pSVar3->SequentialBehavior_data).offset_0x0;
  local_8 = 0xffffffff;
  iVar5 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  iVar4 = param_3;
  iVar2 = (pSVar3->SequentialBehavior_data).offset_0x4;
  if (iVar2 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  (pSVar3->SequentialBehavior_data).offset_0x4 = iVar2 + 1;
  *(int *)(iVar1 + 4) = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  if (*(void **)(param_3 + 0x13e4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_3 + 0x13e4));
  }
  *(undefined8 *)(param_3 + 0x178) = 0x3f80000042c80000;
  *(undefined8 *)(param_3 + 0x180) = 0x3f8000003f800000;
  *(undefined4 *)(param_3 + 0x188) = 0x3f800000;
  iVar1 = *(int *)(param_3 + 100);
  *(SequentialBehavior **)(param_3 + 0x13e4) = pSVar3;
  if (iVar1 == 0x19) {
    *(undefined4 *)(param_3 + 0x178) = 0x43960000;
    *(undefined4 *)(param_3 + 0x184) = 0x40a00000;
    *(undefined4 *)(param_3 + 0x188) = 0x40a00000;
    *(undefined4 *)(param_3 + 0x180) = 0x3dcccccd;
  }
  else if (iVar1 == 0x56) {
    *(undefined2 *)(param_3 + 0x140) = 0x103;
  }
  else if (iVar1 == 0x68) {
    *(undefined2 *)(param_3 + 0x140) = 0x102;
  }
  FUN_00477d90(&param_3,&param_1);
  if ((param_3 != *(int *)(in_ECX + 4)) && (iVar1 = *(int *)(param_3 + 0x18), iVar1 != 0)) {
    if (*(int *)(iVar1 + 400) < *(int *)(iVar4 + 400)) {
      *(int *)(iVar4 + 400) = *(int *)(iVar1 + 400);
    }
    *(undefined4 *)(iVar4 + 0x198) = param_1;
    *(undefined4 *)(iVar4 + 0x19c) = param_2;
    fVar6 = (float10)FUN_0043c980(*(undefined4 *)(iVar1 + 0x1138));
    *(float *)(iVar4 + 0x178) = ((float)fVar6 * 0.5 + 1.0) * *(float *)(iVar4 + 0x178);
    *(undefined4 *)(iVar1 + 0x11c8) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(iVar1 + 0x11cc) = *(undefined4 *)(iVar4 + 0xc);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_005f0720 @ 005f0720  kind=gamemisc  attributed-by=caller-vote  size=1376 */

void FUN_005f0720(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  uint *local_94;
  int local_8c;
  int local_80;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar5 = (int)(param_2 + -0x4000 + (param_2 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (int)(param_1 + 0x4000 + (param_1 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  local_80 = (int)((param_1 + -0x4000 >> 0x1f & 0x3fffU) + param_1 + -0x4000) >> 0xe;
  iVar13 = (int)((param_2 + 0x4000 >> 0x1f & 0x3fffU) + param_2 + 0x4000) >> 0xe;
  bVar3 = false;
  if (local_80 <= iVar6) {
    iVar11 = local_80 * 0x400 + 0x10002f;
    iVar10 = iVar5;
    iVar14 = local_80;
    iVar12 = iVar11;
joined_r0x005f07c4:
    do {
      if (iVar10 <= iVar13) {
        if ((((iVar14 < 0) || (iVar10 < 0)) || (0x20002e < iVar12)) ||
           ((0x3ff < iVar10 || (iVar9 = *(int *)(in_ECX + (iVar12 + iVar10) * 4), iVar9 == 0))))
        goto LAB_005f0c6b;
        if (-1 < *(int *)(iVar9 + 0x18)) {
          iVar10 = iVar10 + 1;
          goto joined_r0x005f07c4;
        }
        bVar3 = true;
      }
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 0x400;
      iVar10 = iVar5;
    } while (iVar14 <= iVar6);
    if (bVar3) {
      fVar16 = (float10)FUN_004c0ef0((double)param_2 * 0.0005,0x40aabe0000000000);
      fVar17 = (float10)FUN_004c0ef0((double)param_1 * 0.0005,0x40d6df4000000000);
      uVar7 = (uint)((float)param_1 + (float)fVar16 * 3.0 * 256.0);
      puVar15 = (uint *)0x0;
      local_94 = (uint *)0x0;
      local_8c = 0;
      uVar8 = (uint)((float)param_2 + (float)fVar17 * 3.0 * 256.0);
      iVar10 = iVar11;
      iVar14 = local_80;
      do {
        for (iVar12 = iVar5; iVar12 <= iVar13; iVar12 = iVar12 + 1) {
          if (((iVar14 < 0) || (iVar12 < 0)) ||
             ((0x20002e < iVar10 ||
              ((0x3ff < iVar12 ||
               (puVar15 = *(uint **)(in_ECX + (iVar12 + iVar10) * 4), puVar15 == (uint *)0x0))))))
          goto LAB_005f0c6b;
          uVar1 = *puVar15;
          uVar2 = puVar15[1];
          local_28 = CONCAT44(((((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10) -
                              (((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10)) -
                              (uint)(uVar1 * 0x10000 < uVar7 * 0x10000),
                              uVar1 * 0x10000 + uVar7 * -0x10000);
          local_20 = CONCAT44(((((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10) -
                              (((int)uVar8 >> 0x1f) << 0x10 | uVar8 >> 0x10)) -
                              (uint)(uVar2 * 0x10000 < uVar8 * 0x10000),
                              uVar2 * 0x10000 + uVar8 * -0x10000);
          iVar9 = (int)((float)local_20 * 1.5258789e-05 * (float)local_20 * 1.5258789e-05 +
                       (float)local_28 * 1.5258789e-05 * (float)local_28 * 1.5258789e-05);
          if ((local_94 == (uint *)0x0) || (iVar9 < local_8c)) {
            local_94 = puVar15;
            local_8c = iVar9;
          }
          puVar15 = local_94;
        }
        iVar14 = iVar14 + 1;
        iVar10 = iVar10 + 0x400;
      } while (iVar14 <= iVar6);
      if (puVar15 != (uint *)0x0) {
        fVar19 = 0.0;
        iVar10 = iVar5;
        do {
          for (; iVar10 <= iVar13; iVar10 = iVar10 + 1) {
            if ((((local_80 < 0) || (iVar10 < 0)) || (0x20002e < iVar11)) ||
               ((0x3ff < iVar10 ||
                (puVar15 = *(uint **)(in_ECX + (iVar10 + iVar11) * 4), puVar15 == (uint *)0x0))))
            goto LAB_005f0c6b;
            uVar1 = *puVar15;
            uVar2 = puVar15[1];
            local_18 = CONCAT44(((((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10) -
                                (((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10)) -
                                (uint)(uVar1 * 0x10000 < uVar7 * 0x10000),
                                uVar1 * 0x10000 + uVar7 * -0x10000);
            local_10 = CONCAT44(((((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10) -
                                (((int)uVar8 >> 0x1f) << 0x10 | uVar8 >> 0x10)) -
                                (uint)(uVar2 * 0x10000 < uVar8 * 0x10000),
                                uVar2 * 0x10000 + uVar8 * -0x10000);
            fVar18 = (float)((int)((float)local_10 * 1.5258789e-05 * (float)local_10 * 1.5258789e-05
                                  + (float)local_18 * 1.5258789e-05 *
                                    (float)local_18 * 1.5258789e-05) - local_8c) * 5e-07;
            if (1.0 < fVar18) {
              fVar18 = 1.0;
            }
            fVar19 = fVar19 + (1.0 - fVar18);
          }
          local_80 = local_80 + 1;
          iVar11 = iVar11 + 0x400;
          iVar10 = iVar5;
        } while (local_80 <= iVar6);
        if (0.0 < fVar19) {
          __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
  }
LAB_005f0c6b:
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005f0c80 @ 005f0c80  kind=gamemisc  attributed-by=caller-vote  size=58 */

void FUN_005f0c80(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  if (*(char *)(in_ECX + 0xb4) == '\0') {
    piVar1 = (int *)(in_ECX + 0xbc);
    iVar3 = 0x400;
    do {
      iVar2 = 0x400;
      do {
        if (*piVar1 != 0) {
          *(undefined1 *)(*piVar1 + 0x15a18) = 0;
        }
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


/* FUN_005f7400 @ 005f7400  kind=gamemisc  attributed-by=caller-vote  size=931 */

/* WARNING: Removing unreachable block (ram,0x005f7735) */
/* WARNING: Removing unreachable block (ram,0x005f76d3) */
/* WARNING: Removing unreachable block (ram,0x005f7671) */
/* WARNING: Removing unreachable block (ram,0x005f760f) */
/* WARNING: Removing unreachable block (ram,0x005f75ad) */
/* WARNING: Removing unreachable block (ram,0x005f754b) */
/* WARNING: Removing unreachable block (ram,0x005f74e9) */
/* WARNING: Removing unreachable block (ram,0x005f7484) */
/* WARNING: Removing unreachable block (ram,0x005f7455) */
/* WARNING: Removing unreachable block (ram,0x005f7787) */
/* WARNING: Removing unreachable block (ram,0x005f76f5) */
/* WARNING: Removing unreachable block (ram,0x005f7631) */
/* WARNING: Removing unreachable block (ram,0x005f756d) */
/* WARNING: Removing unreachable block (ram,0x005f74a9) */
/* WARNING: Removing unreachable block (ram,0x005f750b) */
/* WARNING: Removing unreachable block (ram,0x005f75cf) */
/* WARNING: Removing unreachable block (ram,0x005f7693) */
/* WARNING: Removing unreachable block (ram,0x005f7754) */

undefined4 FUN_005f7400(void)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f4858;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0063dc90(1);
  if (&local_14 < (undefined4 *)0x4) {
    uRam00000004 = *(undefined4 *)(((int)&local_14 >> 2) * 4);
  }
  else {
    uRam00000004 = 0x33;
  }
  if ((undefined4 *)((int)&uRam00000004 + 3U) < &local_18) {
    uRam00000008 = 0x60;
  }
  else {
    uRam00000008 = *(undefined4 *)(((int)&local_18 >> 2) * 4);
  }
  if ((undefined4 *)((int)&uRam00000008 + 3U) < &local_1c) {
    uRam0000000c = 0x50;
  }
  else {
    uRam0000000c = *(undefined4 *)(((int)&local_1c >> 2) * 4);
  }
  if ((undefined4 *)((int)&uRam0000000c + 3U) < &local_20) {
    uRam00000010 = 0x4c;
  }
  else {
    uRam00000010 = *(undefined4 *)(((int)&local_20 >> 2) * 4);
  }
  if ((undefined4 *)((int)&uRam00000010 + 3U) < &local_24) {
    uRam00000014 = 0x28;
  }
  else {
    uRam00000014 = *(undefined4 *)(((int)&local_24 >> 2) * 4);
  }
  if ((undefined4 *)((int)&uRam00000014 + 3U) < &local_28) {
    uRam00000018 = 0x2b;
  }
  else {
    uRam00000018 = *(undefined4 *)(((int)&local_28 >> 2) * 4);
  }
  if ((undefined4 *)((int)&uRam00000018 + 3U) < &local_2c) {
    uRam0000001c = 0x2d;
  }
  else {
    uRam0000001c = *(undefined4 *)(((int)&local_2c >> 2) * 4);
  }
  if ((undefined4 *)((int)&uRam0000001c + 3U) < &local_30) {
    uRam00000020 = 0x34;
  }
  else {
    uRam00000020 = *(undefined4 *)(((int)&local_30 >> 2) * 4);
  }
  local_14 = 0x33;
  local_18 = 0x60;
  local_1c = 0x50;
  local_20 = 0x4c;
  local_24 = 0x28;
  local_28 = 0x2b;
  local_2c = 0x2d;
  local_30 = 0x34;
  uVar1 = rand();
  ExceptionList = local_10;
  return *(undefined4 *)((uVar1 % 9) * 4);
}


/* FUN_005f7820 @ 005f7820  kind=gamemisc  attributed-by=caller-vote  size=445 */

/* WARNING: Removing unreachable block (ram,0x005f79aa) */

undefined4 FUN_005f7820(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e1688;
  local_10 = ExceptionList;
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) &&
     ((param_2 < 0x400 &&
      (iVar1 = *(int *)(in_ECX + 0x4000bc + (param_1 * 0x400 + param_2) * 4), iVar1 != 0)))) {
    local_8 = 0;
    param_1 = 0x6c;
    if (*(float *)(iVar1 + 0x10) <= 0.2) {
      param_1 = 0x72;
    }
    ExceptionList = &local_10;
    FUN_0066add0(&param_1);
    param_1 = 0x77;
    if (*(float *)(iVar1 + 0x10) <= 0.2) {
      param_1 = 0x74;
    }
    FUN_0066add0(&param_1);
    iVar2 = param_3;
    if (10 < param_3) {
      param_1 = 0x73;
      FUN_0066add0(&param_1);
    }
    if (0x14 < iVar2) {
      param_1 = 0x75;
      FUN_0066add0(&param_1);
    }
    if (0x32 < iVar2) {
      if (0.2 < *(float *)(iVar1 + 0x10) || *(float *)(iVar1 + 0x10) == 0.2) {
        param_1 = 0x70;
        if (*(char *)(iVar1 + 8) != '\x01') {
          param_1 = 0x6f;
        }
      }
      else {
        param_1 = 0x71;
      }
      FUN_0066add0(&param_1);
      param_1 = 0x6d;
      FUN_0066add0(&param_1);
    }
    if (0x46 < iVar2) {
      param_1 = 0x6e;
      FUN_0066add0(&param_1);
    }
    uVar3 = rand();
    ExceptionList = local_10;
    return *(undefined4 *)((uVar3 % 0) * 4);
  }
  return 0x6c;
}


/* FUN_005fa500 @ 005fa500  kind=gamemisc  attributed-by=caller-vote  size=172 */

void FUN_005fa500(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  
  iVar1 = param_2;
  while( true ) {
    iVar4 = iVar1 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar3 = *(float *)(param_1 + -4 + iVar4 * 8);
    pfVar2 = (float *)(param_1 + 4 + iVar4 * 8);
    if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
      iVar4 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar4 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    iVar1 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + -8 + param_3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + -4 + param_3 * 8);
    iVar1 = param_3 + -1;
  }
  while ((param_2 < iVar1 &&
         (iVar4 = (iVar1 + -1) / 2, pfVar2 = (float *)(param_1 + 4 + iVar4 * 8),
         *pfVar2 <= (float)param_4[1] && (float)param_4[1] != *pfVar2))) {
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar4 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    iVar1 = iVar4;
  }
  *(undefined4 *)(param_1 + iVar1 * 8) = *param_4;
  *(undefined4 *)(param_1 + 4 + iVar1 * 8) = param_4[1];
  return;
}


/* FUN_005fa5b0 @ 005fa5b0  kind=gamemisc  attributed-by=caller-vote  size=160 */

void FUN_005fa5b0(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    while (puVar5 = puVar5 + 2, puVar5 != param_2) {
      fVar2 = (float)puVar5[1];
      uVar3 = *puVar5;
      puVar4 = puVar5;
      if ((float)param_1[1] <= fVar2) {
        fVar1 = (float)puVar5[-1];
        while (fVar2 < fVar1) {
          *puVar4 = puVar4[-2];
          puVar4[1] = puVar4[-1];
          fVar1 = (float)puVar4[-3];
          puVar4 = puVar4 + -2;
        }
        *puVar4 = uVar3;
        puVar4[1] = fVar2;
      }
      else {
        for (; param_1 != puVar4; puVar4 = puVar4 + -2) {
          *puVar4 = puVar4[-2];
          puVar4[1] = puVar4[-1];
        }
        *param_1 = uVar3;
        param_1[1] = fVar2;
      }
    }
  }
  return;
}


/* FUN_005fa650 @ 005fa650  kind=gamemisc  attributed-by=caller-vote  size=248 */

void FUN_005fa650(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = param_2 - param_1 >> 3;
  iVar6 = iVar11 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar6) {
    iVar10 = iVar6 * 2 + 2;
    iVar7 = param_1 + iVar6 * 8;
    do {
      uVar4 = *(undefined4 *)(iVar7 + -8);
      fVar5 = *(float *)(iVar7 + -4);
      iVar10 = iVar10 + -2;
      iVar6 = iVar6 + -1;
      iVar9 = iVar10;
      iVar1 = iVar6;
      while (iVar8 = iVar9, iVar8 < iVar11) {
        fVar3 = *(float *)(param_1 + -4 + iVar8 * 8);
        pfVar2 = (float *)(param_1 + 4 + iVar8 * 8);
        if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
          iVar8 = iVar8 + -1;
        }
        *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar8 * 8);
        *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar8 * 8);
        iVar1 = iVar8;
        iVar9 = iVar8 * 2 + 2;
      }
      if (iVar8 == iVar11) {
        *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + -8 + iVar11 * 8);
        *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + -4 + iVar11 * 8);
        iVar1 = iVar11 + -1;
      }
      while ((iVar6 < iVar1 &&
             (iVar9 = (iVar1 + -1) / 2, pfVar2 = (float *)(param_1 + 4 + iVar9 * 8),
             *pfVar2 <= fVar5 && fVar5 != *pfVar2))) {
        *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar9 * 8);
        *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar9 * 8);
        iVar1 = iVar9;
      }
      *(undefined4 *)(param_1 + iVar1 * 8) = uVar4;
      *(float *)(param_1 + 4 + iVar1 * 8) = fVar5;
      iVar7 = iVar7 + -8;
    } while (0 < iVar6);
  }
  return;
}


/* FUN_005fa750 @ 005fa750  kind=gamemisc  attributed-by=caller-vote  size=641 */

void FUN_005fa750(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  fVar1 = (float)param_1[1];
  iVar4 = (int)param_3 - (int)param_1 >> 3;
  if (iVar4 < 0x29) {
    if ((float)param_2[1] <= fVar1 && fVar1 != (float)param_2[1]) {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      *param_1 = uVar2;
      param_1[1] = uVar3;
    }
    if ((float)param_3[1] <= (float)param_2[1] && (float)param_2[1] != (float)param_3[1]) {
      uVar2 = *param_3;
      uVar3 = param_3[1];
      *param_3 = *param_2;
      param_3[1] = param_2[1];
      param_2[1] = uVar3;
      *param_2 = uVar2;
      if ((float)param_2[1] <= (float)param_1[1] && (float)param_1[1] != (float)param_2[1]) {
        *param_2 = *param_1;
        param_2[1] = param_1[1];
        *param_1 = uVar2;
        param_1[1] = uVar3;
      }
    }
  }
  else {
    iVar4 = iVar4 + 1;
    iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
    if ((float)param_1[iVar4 * 2 + 1] <= fVar1 && fVar1 != (float)param_1[iVar4 * 2 + 1]) {
      uVar2 = param_1[iVar4 * 2];
      uVar3 = param_1[iVar4 * 2 + 1];
      param_1[iVar4 * 2] = *param_1;
      param_1[iVar4 * 2 + 1] = param_1[1];
      *param_1 = uVar2;
      param_1[1] = uVar3;
    }
    if ((float)param_1[iVar4 * 4 + 1] <= (float)param_1[iVar4 * 2 + 1] &&
        (float)param_1[iVar4 * 2 + 1] != (float)param_1[iVar4 * 4 + 1]) {
      uVar2 = param_1[iVar4 * 4];
      uVar3 = param_1[iVar4 * 4 + 1];
      param_1[iVar4 * 4] = param_1[iVar4 * 2];
      param_1[iVar4 * 4 + 1] = param_1[iVar4 * 2 + 1];
      param_1[iVar4 * 2 + 1] = uVar3;
      param_1[iVar4 * 2] = uVar2;
      if ((float)param_1[iVar4 * 2 + 1] <= (float)param_1[1] &&
          (float)param_1[1] != (float)param_1[iVar4 * 2 + 1]) {
        param_1[iVar4 * 2] = *param_1;
        param_1[iVar4 * 2 + 1] = param_1[1];
        *param_1 = uVar2;
        param_1[1] = uVar3;
      }
    }
    puVar5 = param_2 + iVar4 * -2;
    if ((float)param_2[1] <= (float)puVar5[1] && (float)puVar5[1] != (float)param_2[1]) {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      *param_2 = *puVar5;
      param_2[1] = puVar5[1];
      *puVar5 = uVar2;
      puVar5[1] = uVar3;
    }
    if ((float)param_2[iVar4 * 2 + 1] <= (float)param_2[1] &&
        (float)param_2[1] != (float)param_2[iVar4 * 2 + 1]) {
      uVar2 = param_2[iVar4 * 2 + 1];
      uVar3 = param_2[iVar4 * 2];
      param_2[iVar4 * 2] = *param_2;
      param_2[iVar4 * 2 + 1] = param_2[1];
      param_2[1] = uVar2;
      *param_2 = uVar3;
      if ((float)param_2[1] <= (float)puVar5[1] && (float)puVar5[1] != (float)param_2[1]) {
        *param_2 = *puVar5;
        param_2[1] = puVar5[1];
        *puVar5 = uVar3;
        puVar5[1] = uVar2;
      }
    }
    puVar5 = param_3 + iVar4 * -4;
    puVar6 = param_3 + iVar4 * -2;
    if ((float)puVar6[1] <= (float)puVar5[1] && (float)puVar5[1] != (float)puVar6[1]) {
      uVar2 = *puVar6;
      uVar3 = puVar6[1];
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      *puVar5 = uVar2;
      puVar5[1] = uVar3;
    }
    if ((float)param_3[1] <= (float)puVar6[1] && (float)puVar6[1] != (float)param_3[1]) {
      uVar2 = *param_3;
      uVar3 = param_3[1];
      *param_3 = *puVar6;
      param_3[1] = puVar6[1];
      *puVar6 = uVar2;
      puVar6[1] = uVar3;
      if ((float)puVar6[1] <= (float)puVar5[1] && (float)puVar5[1] != (float)puVar6[1]) {
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        *puVar5 = uVar2;
        puVar5[1] = uVar3;
      }
    }
    if ((float)param_2[1] <= (float)param_1[iVar4 * 2 + 1] &&
        (float)param_1[iVar4 * 2 + 1] != (float)param_2[1]) {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      *param_2 = param_1[iVar4 * 2];
      param_2[1] = param_1[iVar4 * 2 + 1];
      param_1[iVar4 * 2 + 1] = uVar3;
      param_1[iVar4 * 2] = uVar2;
    }
    if ((float)puVar6[1] <= (float)param_2[1] && (float)param_2[1] != (float)puVar6[1]) {
      uVar2 = puVar6[1];
      uVar3 = *puVar6;
      *puVar6 = *param_2;
      puVar6[1] = param_2[1];
      param_2[1] = uVar2;
      *param_2 = uVar3;
      if ((float)param_2[1] <= (float)param_1[iVar4 * 2 + 1] &&
          (float)param_1[iVar4 * 2 + 1] != (float)param_2[1]) {
        *param_2 = param_1[iVar4 * 2];
        param_2[1] = param_1[iVar4 * 2 + 1];
        param_1[iVar4 * 2] = uVar3;
        param_1[iVar4 * 2 + 1] = uVar2;
        return;
      }
    }
  }
  return;
}


/* FUN_005fa9e0 @ 005fa9e0  kind=gamemisc  attributed-by=caller-vote  size=232 */

void FUN_005fa9e0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_c [8];
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_005faa77:
      if (1 < iVar1) {
        FUN_005fa5b0(param_1,param_2,param_4,0);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_005fa650(param_1,param_2,param_4,0,0);
        }
        FUN_005faad0(param_1,param_2,param_4);
        return;
      }
      goto LAB_005faa77;
    }
    piVar2 = (int *)FUN_005fab40(local_c,param_1,param_2,param_4);
    iVar3 = *piVar2;
    iVar1 = piVar2[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(iVar3 - param_1 & 0xfffffff8U) < (int)(param_2 - iVar1 & 0xfffffff8U)) {
      FUN_005fa9e0(param_1,iVar3,param_3,param_4);
      iVar3 = param_2;
      param_1 = iVar1;
    }
    else {
      FUN_005fa9e0(iVar1,param_2,param_3,param_4);
    }
    iVar1 = iVar3 - param_1;
    param_2 = iVar3;
  } while( true );
}


/* FUN_005faad0 @ 005faad0  kind=gamemisc  attributed-by=caller-vote  size=106 */

void FUN_005faad0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = param_2 - (int)param_1;
  if (8 < (int)(uVar1 & 0xfffffff8)) {
    puVar2 = (undefined4 *)(param_2 + -8);
    do {
      local_c = *puVar2;
      local_8 = puVar2[1];
      *puVar2 = *param_1;
      puVar2[1] = param_1[1];
      FUN_005fa500(param_1,0,(int)(uVar1 - 8) >> 3,&local_c,param_3);
      puVar2 = puVar2 + -2;
      uVar1 = (int)puVar2 + (8 - (int)param_1);
    } while (8 < (int)(uVar1 & 0xfffffff8));
  }
  return;
}


/* FUN_005fab40 @ 005fab40  kind=gamemisc  attributed-by=caller-vote  size=665 */

void FUN_005fab40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1) * 2;
  FUN_005fa750(param_2,local_8,param_3 + -2,param_4);
  puVar9 = local_8 + 2;
  for (; param_2 < local_8; local_8 = local_8 + -2) {
    if (((float)local_8[-1] < (float)local_8[1]) || ((float)local_8[1] < (float)local_8[-1])) break;
  }
  puVar10 = puVar9;
  local_c = puVar9;
  puVar7 = local_8;
  if (puVar9 < param_3) {
    iVar4 = (int)param_3 + (7 - (int)puVar9);
    if (3 < (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) {
      fVar1 = (float)local_8[1];
      do {
        puVar10 = puVar9;
        local_c = puVar9;
        if (((float)puVar9[1] < fVar1) || (fVar1 < (float)puVar9[1])) goto joined_r0x005fac52;
        if (((float)puVar9[3] < fVar1) || (fVar1 < (float)puVar9[3])) {
          puVar9 = puVar9 + 2;
          puVar10 = puVar9;
          local_c = puVar9;
          goto joined_r0x005fac52;
        }
        if (((float)puVar9[5] < fVar1) || (fVar1 < (float)puVar9[5])) {
          puVar9 = puVar9 + 4;
          puVar10 = puVar9;
          local_c = puVar9;
          goto joined_r0x005fac52;
        }
        if (((float)puVar9[7] < fVar1) || (fVar1 < (float)puVar9[7])) {
          puVar9 = puVar9 + 6;
          puVar10 = puVar9;
          local_c = puVar9;
          goto joined_r0x005fac52;
        }
        puVar9 = puVar9 + 8;
      } while ((int)puVar9 < (int)(param_3 + -6));
    }
    puVar10 = puVar9;
    local_c = puVar9;
    if (puVar9 < param_3) {
      do {
        puVar10 = puVar9;
        local_c = puVar9;
        if (((float)puVar9[1] < (float)local_8[1]) || ((float)local_8[1] < (float)puVar9[1])) break;
        puVar9 = puVar9 + 2;
        puVar10 = puVar9;
        local_c = puVar9;
      } while (puVar9 < param_3);
    }
  }
joined_r0x005fac52:
  do {
    puVar5 = local_8;
    if (param_3 <= puVar10) {
joined_r0x005faca8:
      for (; param_2 < local_8; local_8 = local_8 + -2) {
        puVar6 = puVar5 + -2;
        puVar8 = puVar7;
        if ((float)puVar7[1] <= (float)puVar5[-1]) {
          if ((float)puVar7[1] < (float)puVar5[-1]) break;
          uVar2 = puVar7[-2];
          uVar3 = puVar7[-1];
          puVar8 = puVar7 + -2;
          *puVar8 = *puVar6;
          puVar7[-1] = puVar5[-1];
          *puVar6 = uVar2;
          puVar5[-1] = uVar3;
        }
        puVar7 = puVar8;
        puVar5 = puVar6;
      }
      if (local_8 == param_2) {
        if (puVar10 == param_3) {
          param_1[1] = puVar9;
          *param_1 = puVar7;
          return;
        }
        if (puVar9 != puVar10) {
          uVar2 = *puVar7;
          uVar3 = puVar7[1];
          *puVar7 = *puVar9;
          puVar7[1] = puVar9[1];
          *puVar9 = uVar2;
          puVar9[1] = uVar3;
        }
        uVar2 = *puVar7;
        uVar3 = puVar7[1];
        *puVar7 = *puVar10;
        puVar7[1] = puVar10[1];
        *puVar10 = uVar2;
        puVar10[1] = uVar3;
        puVar9 = puVar9 + 2;
        puVar10 = local_c + 2;
        local_c = local_c + 2;
        puVar7 = puVar7 + 2;
      }
      else {
        puVar5 = local_8 + -2;
        if (puVar10 == param_3) {
          puVar8 = puVar7 + -2;
          if (puVar5 != puVar8) {
            uVar2 = *puVar5;
            uVar3 = local_8[-1];
            *puVar5 = *puVar8;
            local_8[-1] = puVar7[-1];
            *puVar8 = uVar2;
            puVar7[-1] = uVar3;
            puVar10 = local_c;
          }
          uVar2 = *puVar8;
          uVar3 = puVar7[-1];
          *puVar8 = puVar9[-2];
          puVar7[-1] = puVar9[-1];
          puVar9[-2] = uVar2;
          puVar9[-1] = uVar3;
          puVar9 = puVar9 + -2;
          local_8 = puVar5;
          puVar7 = puVar8;
        }
        else {
          uVar2 = *puVar10;
          uVar3 = puVar10[1];
          *puVar10 = *puVar5;
          local_c = puVar10 + 2;
          puVar10[1] = local_8[-1];
          *puVar5 = uVar2;
          local_8[-1] = uVar3;
          puVar10 = local_c;
          local_8 = puVar5;
        }
      }
      goto joined_r0x005fac52;
    }
    puVar8 = puVar9;
    if ((float)puVar10[1] <= (float)puVar7[1]) {
      local_c = puVar10;
      if ((float)puVar10[1] < (float)puVar7[1]) goto joined_r0x005faca8;
      puVar8 = puVar9 + 2;
      uVar2 = *puVar9;
      *puVar9 = *puVar10;
      uVar3 = puVar9[1];
      puVar9[1] = puVar10[1];
      puVar10[1] = uVar3;
      *puVar10 = uVar2;
    }
    puVar10 = puVar10 + 2;
    puVar9 = puVar8;
    local_c = puVar10;
  } while( true );
}


/* FUN_005fc160 @ 005fc160  kind=gamemisc  attributed-by=caller-vote  size=70 */

void FUN_005fc160(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
  iVar1 = FUN_00602440(param_1,param_2);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x30) & 1) == 0)) {
    *(byte *)(iVar1 + 0x30) = *(byte *)(iVar1 + 0x30) | 1;
    *(int *)(in_ECX + 0x8000bc) = *(int *)(in_ECX + 0x8000bc) + 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
  return;
}


/* FUN_00601cc0 @ 00601cc0  kind=gamemisc  attributed-by=caller-vote  size=459 */

void FUN_00601cc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  float10 fVar9;
  int local_28;
  int local_24;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar3 = (int)(param_1 + -0x4000 + (param_1 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (int)(param_2 + -0x4000 + (param_2 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (int)((param_1 + 0x4000 >> 0x1f & 0x3fffU) + param_1 + 0x4000) >> 0xe;
  FUN_005eefa0(&local_10,param_1,param_2);
  local_24 = 0;
  local_28 = 0;
  uVar5 = (uint)((float)param_1 + local_10);
  uVar6 = (uint)((float)param_2 + local_c);
  if (iVar3 <= iVar7) {
    iVar8 = iVar3 * 0x400 + 0x10002c;
    iVar2 = iVar4;
    do {
      for (; iVar2 <= (int)(param_2 + 0x4000 + (param_2 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar2 = iVar2 + 1) {
        if (((((iVar3 < 0) || (iVar2 < 0)) || (0x20002b < iVar8)) ||
            ((0x3ff < iVar2 || (iVar1 = *(int *)(in_ECX + (iVar8 + iVar2) * 4), iVar1 == 0)))) ||
           (*(int *)(iVar1 + 0x2c) == 0)) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        fVar9 = (float10)FUN_005eeee0(iVar1 + 4,uVar5 << 0x10,
                                      ((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,uVar6 << 0x10,
                                      ((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10);
        if ((local_24 == 0) || ((int)fVar9 < local_28)) {
          local_28 = (int)fVar9;
          local_24 = iVar1;
        }
      }
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + 0x400;
      iVar2 = iVar4;
    } while (iVar3 <= iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00601eb0 @ 00601eb0  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_00601eb0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_005a6b60(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0xccccccb) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00601f00 @ 00601f00  kind=gamemisc  attributed-by=caller-vote  size=114 */

void FUN_00601f00(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *in_ECX;
  int iVar3;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && ((undefined4 *)*in_ECX <= param_1)) {
    iVar3 = (int)param_1 - (int)*in_ECX >> 3;
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_005fbc10(1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = *in_ECX;
      *puVar1 = *(undefined4 *)(uVar2 + iVar3 * 8);
      puVar1[1] = *(undefined4 *)(uVar2 + 4 + iVar3 * 8);
      in_ECX[1] = in_ECX[1] + 8;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_005fbc10(1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
    }
  }
  in_ECX[1] = in_ECX[1] + 8;
  return;
}


/* FUN_00608a60 @ 00608a60  kind=gamemisc  attributed-by=caller-vote  size=44 */

int FUN_00608a60(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0046d990();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if ((undefined4 *)(iVar1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 0x10) = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_1[1];
  }
  return iVar1;
}


/* FUN_00608a90 @ 00608a90  kind=gamemisc  attributed-by=caller-vote  size=130 */

int FUN_00608a90(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5081;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0046d590(param_1,param_2);
  local_8 = 1;
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    FUN_00458e90(param_3 + 2);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_00608b30 @ 00608b30  kind=gamemisc  attributed-by=caller-vote  size=92 */

void FUN_00608b30(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f50a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00608db0(*(undefined4 *)*in_ECX,param_1,param_2,param_2);
  ExceptionList = local_10;
  return;
}


/* FUN_00608ba0 @ 00608ba0  kind=gamemisc  attributed-by=caller-vote  size=116 */

void FUN_00608ba0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  uVar7 = FUN_00608c80(*(undefined4 *)(*param_1 + 4),iVar2,param_2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  piVar3 = (int *)*in_ECX;
  in_ECX[1] = param_1[1];
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*in_ECX + 8) = *in_ECX;
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0xd);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*in_ECX + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*in_ECX + 8) = iVar2;
  return;
}


/* FUN_00608c20 @ 00608c20  kind=gamemisc  attributed-by=caller-vote  size=86 */

undefined4 * FUN_00608c20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 4;
    do {
      *param_3 = puVar2[-4];
      param_3[1] = puVar2[-3];
      param_3[2] = puVar2[-2];
      param_3[3] = puVar2[-1];
      param_3[4] = *puVar2;
      param_3[5] = puVar2[1];
      param_3[6] = puVar2[2];
      puVar1 = puVar2 + 4;
      param_3 = param_3 + 8;
      puVar2 = puVar2 + 8;
    } while (puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_00608c80 @ 00608c80  kind=gamemisc  attributed-by=caller-vote  size=159 */

undefined4 * FUN_00608c80(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f50c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)*in_ECX;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_00608a60(param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_00608c80(*param_1,puVar1,param_3);
    *puVar1 = uVar2;
    uVar2 = FUN_00608c80(param_1[2],puVar1,param_3);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_00608d40 @ 00608d40  kind=gamemisc  attributed-by=caller-vote  size=101 */

void FUN_00608d40(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    iVar4 = *param_3;
    do {
      iVar4 = iVar4 + 1;
      *param_3 = iVar4;
      if (*(char *)((int)param_1 + 0xd) == '\0') {
        piVar2 = (int *)param_1[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_1 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            param_1 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(param_1[1] + 0xd);
          piVar3 = (int *)param_1[1];
          piVar2 = param_1;
          while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
            cVar1 = *(char *)(param_1[1] + 0xd);
            piVar3 = (int *)param_1[1];
            piVar2 = param_1;
          }
        }
      }
    } while (param_1 != param_2);
  }
  return;
}


/* FUN_00608db0 @ 00608db0  kind=gamemisc  attributed-by=caller-vote  size=155 */

void FUN_00608db0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f50e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00608a20(param_1,*(undefined4 *)(param_1 + 4),param_2);
    if (*(int *)(in_ECX + 4) == 0xaaaaaa9) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = param_2 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00608e80 @ 00608e80  kind=gamemisc  attributed-by=caller-vote  size=118 */

void FUN_00608e80(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5108;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_0043c870();
  *in_ECX = uVar1;
  local_18 = local_18 & 0xffffff00;
  local_8 = 1;
  FUN_00608ba0(param_1,local_18);
  ExceptionList = local_10;
  return;
}


/* FUN_00608f20 @ 00608f20  kind=gamemisc  attributed-by=caller-vote  size=31 */

void FUN_00608f20(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_0046d550(0,0);
  *in_ECX = uVar1;
  return;
}


/* FUN_00608f40 @ 00608f40  kind=gamemisc  attributed-by=caller-vote  size=27 */

void FUN_00608f40(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_00678520();
  *in_ECX = uVar1;
  return;
}


/* FUN_00608f60 @ 00608f60  kind=gamemisc  attributed-by=caller-vote  size=132 */

undefined4 * FUN_00608f60(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9148;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = *(undefined4 *)(param_1 + 0x60);
  in_ECX[1] = *(undefined4 *)(param_1 + 100);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  uVar3 = FUN_0046d590(0,0);
  in_ECX[2] = uVar3;
  local_8 = 0;
  FUN_00608b30(uVar2,uVar1);
  ExceptionList = local_10;
  return in_ECX;
}


/* FUN_00608ff0 @ 00608ff0  kind=gamemisc  attributed-by=caller-vote  size=136 */

void FUN_00608ff0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00468790(param_1);
  FUN_00608e80(iVar1 + 0x78,(int)&param_1 + 3);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(iVar1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(iVar1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(iVar1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(iVar1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(iVar1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(iVar1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(iVar1 + 0x9c);
  return;
}


/* FUN_00609080 @ 00609080  kind=gamemisc  attributed-by=caller-vote  size=262 */

void FUN_00609080(int *param_1)

{
  void *pvVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5130;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != param_1) {
    iVar4 = *param_1;
    if (iVar4 == param_1[1]) {
      iVar4 = *in_ECX;
    }
    else {
      pvVar1 = (void *)*in_ECX;
      uVar5 = param_1[1] - iVar4 >> 5;
      uVar6 = in_ECX[1] - (int)pvVar1 >> 5;
      if (uVar6 < uVar5) {
        if ((uint)(in_ECX[2] - (int)pvVar1 >> 5) < uVar5) {
          if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            operator_delete(pvVar1);
          }
          cVar3 = FUN_00609210(param_1[1] - *param_1 >> 5);
          if (cVar3 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 0;
          iVar4 = FUN_005ae9a0(*piVar2,piVar2[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar4 = uVar6 * 0x20 + *param_1;
          FUN_00608c20(*param_1,iVar4,pvVar1,param_1);
          iVar4 = FUN_005ae9a0(iVar4,piVar2[1],in_ECX[1],(int)&param_1 + 3,param_1);
        }
      }
      else {
        FUN_00608c20(iVar4,param_1[1],pvVar1,param_1);
        iVar4 = (piVar2[1] - *piVar2 & 0xffffffe0U) + *in_ECX;
      }
    }
    in_ECX[1] = iVar4;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_006091a0 @ 006091a0  kind=gamemisc  attributed-by=caller-vote  size=9 */

int FUN_006091a0(void)

{
  int *in_ECX;
  
  return *(int *)(*in_ECX + 4) + 8;
}


/* FUN_006091b0 @ 006091b0  kind=gamemisc  attributed-by=caller-vote  size=19 */

void FUN_006091b0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  *in_ECX = *(int *)(iVar1 + 4);
  return;
}


/* FUN_006091d0 @ 006091d0  kind=gamemisc  attributed-by=caller-vote  size=57 */

undefined4 FUN_006091d0(void)

{
  uint *in_ECX;
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0068d946();
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if ((iVar1 <= (int)in_ECX[1]) && ((iVar1 < (int)in_ECX[1] || ((uint)uVar2 <= *in_ECX)))) {
    return 1;
  }
  return 0;
}


/* FUN_00609210 @ 00609210  kind=gamemisc  attributed-by=caller-vote  size=101 */

uint FUN_00609210(uint param_1)

{
  uint in_EAX;
  void *pvVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (0x7ffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0x20);
  if (pvVar1 != (void *)0x0) {
    *in_ECX = pvVar1;
    in_ECX[1] = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0x20);
    in_ECX[2] = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0060aa00 @ 0060aa00  kind=gamemisc  attributed-by=caller-vote  size=77 */

undefined4 FUN_0060aa00(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  puVar3 = (undefined4 *)FUN_00609280(local_c,param_1);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  param_1 = 0;
  FUN_00608d40(uVar1,uVar2,&param_1,0);
  FUN_0067eb10(local_8,uVar1,uVar2);
  return param_1;
}


/* FUN_0060aa50 @ 0060aa50  kind=gamemisc  attributed-by=caller-vote  size=8 */

int FUN_0060aa50(void)

{
  undefined4 *in_ECX;
  
  return *(int *)*in_ECX + 8;
}


/* FUN_0060aa60 @ 0060aa60  kind=gamemisc  attributed-by=caller-vote  size=11 */

byte FUN_0060aa60(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 3) >> 5 & 1;
}


/* FUN_0060aa70 @ 0060aa70  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_0060aa70(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00608a90(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_0060ab30 @ 0060ab30  kind=gamemisc  attributed-by=caller-vote  size=6596 */

void FUN_0060ab30(int param_1)

{
  uint *puVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  int in_ECX;
  uint extraout_ECX;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  bool bVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  longlong lVar24;
  char local_2e8 [4];
  char local_2e4 [4];
  undefined2 local_2e0;
  undefined1 local_2de;
  float local_2dc;
  uint local_2d8;
  uint local_2d4;
  float local_2d0;
  uint local_2cc;
  uint local_2c8;
  int local_2c4;
  float local_2c0;
  float local_2bc;
  int local_2b8;
  uint local_2b4;
  uint local_2b0;
  float local_2ac;
  int *local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  char local_28d;
  float local_28c;
  float local_288;
  float local_284;
  float local_27c;
  float local_278;
  float local_274;
  float local_24c [13];
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  uint local_1d4 [12];
  float local_1a4 [4];
  float local_194;
  float local_190;
  uint local_18c [6];
  float local_174 [3];
  int local_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float local_12c;
  float fStack_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float fStack_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  uint local_a4;
  float local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float local_3c;
  undefined8 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_2b8 = param_1;
  if (0.0 < *(float *)(param_1 + 0x16c) || *(float *)(param_1 + 0x16c) == 0.0) {
    local_2d8 = 0;
    local_2c4 = in_ECX;
LAB_0060ab70:
    local_2bc = *(float *)(local_2b8 + 0x80);
    local_2a4 = *(float *)(local_2b8 + 0x84);
    local_29c = *(float *)(local_2b8 + 0x88);
    local_1a4[0] = *(float *)(local_2b8 + 0x80) * 0.5;
    iVar13 = 0;
    local_1a4[1] = *(float *)(local_2b8 + 0x84) * 0.5;
    local_1a4[2] = *(float *)(local_2b8 + 0x88) * 0.5;
    do {
      local_294 = local_1a4[iVar13] * 65536.0;
      uVar23 = FUN_0068d946();
      local_18c[iVar13 * 2] = (uint)uVar23;
      local_18c[iVar13 * 2 + 1] = (uint)((ulonglong)uVar23 >> 0x20);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    local_2d4 = *(uint *)(local_2b8 + 0x10);
    local_2c8 = *(uint *)(local_2b8 + 0x14);
    local_2cc = *(uint *)(local_2b8 + 0x18);
    local_2c0 = *(float *)(local_2b8 + 0x1c);
    local_204 = local_2d4 - local_18c[0];
    local_2b0 = *(uint *)(local_2b8 + 0x20);
    local_2ac = *(float *)(local_2b8 + 0x24);
    local_200 = (local_2c8 - local_18c[1]) - (uint)(local_2d4 < local_18c[0]);
    local_1fc = local_2cc - local_18c[2];
    local_1f8 = ((int)local_2c0 - local_18c[3]) - (uint)(local_2cc < local_18c[2]);
    local_1f4 = local_2b0 - local_18c[4];
    local_1f0 = ((int)local_2ac - local_18c[5]) - (uint)(local_2b0 < local_18c[4]);
    local_298 = local_2c0;
    FUN_0042f040(&local_a4,&local_204);
    iVar13 = 0;
    local_174[0] = local_2bc * 0.5;
    local_174[1] = local_2a4 * 0.5;
    local_174[2] = local_29c * 0.5;
    do {
      local_2d0 = local_174[iVar13] * 65536.0;
      uVar23 = FUN_0068d946();
      local_1d4[iVar13 * 2] = (uint)uVar23;
      local_1d4[iVar13 * 2 + 1] = (uint)((ulonglong)uVar23 >> 0x20);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    local_1ec = local_2d4 + local_1d4[0];
    local_1e8 = local_2c8 + local_1d4[1] + (uint)CARRY4(local_2d4,local_1d4[0]);
    local_1e4 = local_2cc + local_1d4[2];
    local_1e0 = (int)local_298 + local_1d4[3] + (uint)CARRY4(local_2cc,local_1d4[2]);
    local_1dc = local_2b0 + local_1d4[4];
    local_1d8 = (int)local_2ac + local_1d4[5] + (uint)CARRY4(local_2b0,local_1d4[4]);
    FUN_0042f040(&local_98,&local_1ec);
    piVar12 = (int *)(extraout_ECX & 0xffffff00);
    local_2b0 = local_a4;
    iVar13 = local_94;
    fVar20 = local_a0;
    local_2a8 = piVar12;
    if ((int)local_a4 <= local_98) {
      do {
        local_29c = fVar20;
        iVar14 = local_9c;
        fVar20 = local_29c;
        if ((int)local_29c <= iVar13) {
          do {
            if (iVar14 <= local_90) {
              iVar13 = ((int)local_29c >> 0x1f & 0xffU) + (int)local_29c;
              uVar15 = iVar13 >> 8;
              uVar6 = (int)(local_2b0 + ((int)local_2b0 >> 0x1f & 0xffU)) >> 8;
              local_2b4 = uVar6;
              do {
                if ((((-1 < (int)uVar6) && (-1 < (int)uVar15)) && ((int)uVar6 < 0x10000)) &&
                   ((int)uVar15 < 0x10000)) {
                  iVar7 = (int)(local_2b4 + ((int)local_2b4 >> 0x1f & 0x3fU)) >> 6;
                  iVar10 = (int)((iVar13 >> 0x1f & 0x3fU) + uVar15) >> 6;
                  uVar6 = local_2b4;
                  piVar12 = local_2a8;
                  if (((-1 < iVar7) && (-1 < iVar10)) &&
                     ((iVar7 < 0x400 &&
                      ((iVar10 < 0x400 &&
                       (iVar7 = *(int *)(local_2c4 + 0xbc + (iVar7 * 0x400 + iVar10) * 4),
                       iVar7 != 0)))))) {
                    uVar11 = local_2b4 & 0x8000003f;
                    if ((int)uVar11 < 0) {
                      uVar11 = (uVar11 - 1 | 0xffffffc0) + 1;
                    }
                    uVar8 = uVar15 & 0x8000003f;
                    if ((int)uVar8 < 0) {
                      uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
                    }
                    iVar10 = uVar11 * 0x40 + uVar8;
                    if (*(int *)(iVar7 + 0x10018 + iVar10 * 4) != 0) {
                      if ((((((int)local_2b0 < 0) || ((int)local_29c < 0)) ||
                           (0xffffff < (int)local_2b0)) ||
                          ((0xffffff < (int)local_29c || (iVar7 == 0)))) ||
                         (iVar7 = *(int *)(iVar7 + 0x10018 + iVar10 * 4), iVar7 == 0)) {
LAB_0060afac:
                        puVar9 = &DAT_0076de34;
                      }
                      else {
                        uVar6 = (uint)local_29c & 0x800000ff;
                        if ((int)uVar6 < 0) {
                          uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
                        }
                        uVar11 = local_2b0 & 0x800000ff;
                        if ((int)uVar11 < 0) {
                          uVar11 = (uVar11 - 1 | 0xffffff00) + 1;
                        }
                        iVar7 = (uVar6 * 0x100 + uVar11) * 0x20 + *(int *)(iVar7 + 0xa8);
                        if ((iVar7 == 0) || (iVar10 = *(int *)(iVar7 + 0x10), iVar14 < iVar10))
                        goto LAB_0060afac;
                        if (iVar14 < *(int *)(iVar7 + 0x1c) + iVar10) {
                          puVar9 = (undefined *)FUN_0042f730(iVar14 - iVar10);
                          if ((((puVar9[3] & 0x1f) == 0) && (iVar14 < 1)) &&
                             ((puVar9[3] & 0x40) == 0)) {
                            puVar9 = &DAT_0076de2c;
                          }
                        }
                        else {
                          puVar9 = &DAT_0076de2c;
                          if (0 < iVar14) {
                            puVar9 = &DAT_0076de30;
                          }
                        }
                      }
                      uVar6 = local_2b4;
                      piVar12 = local_2a8;
                      if (((puVar9[3] & 0x1f) != 0) &&
                         (piVar12 = (int *)((uint)local_2a8 & 0xff), local_2a8 = piVar12,
                         (puVar9[3] & 0x1f) != 2)) {
                        piVar12 = (int *)0x1;
                        local_2a8 = piVar12;
                      }
                    }
                  }
                }
                iVar7 = local_2b8;
                iVar14 = iVar14 + 1;
              } while (iVar14 <= local_90);
              iVar14 = local_9c;
              if ((char)piVar12 != '\0') {
                local_2dc = *(float *)(local_2b8 + 0x88) * 0.5 * 65536.0;
                uVar23 = FUN_0068d946();
                local_2c0 = (float)((ulonglong)uVar23 >> 0x20);
                local_2c8 = (uint)uVar23;
                uVar6 = *(uint *)(iVar7 + 0x20);
                iVar13 = uVar6 - local_2c8;
                iVar14 = (*(int *)(iVar7 + 0x24) - (int)local_2c0) - (uint)(uVar6 < local_2c8);
                if ((iVar14 < 1) && (iVar14 < 0)) {
                  iVar13 = __alldiv(iVar13,iVar14,0x10000,0);
                  uVar6 = iVar13 - 1;
                }
                else {
                  uVar6 = __alldiv(iVar13,iVar14,0x10000,0);
                }
                bVar17 = CARRY4(uVar6 * 0x10000,local_2c8);
                iVar14 = uVar6 * 0x10000 + local_2c8;
                iVar13 = (((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10) + (int)local_2c0;
                lVar24 = FUN_0068d946();
                local_2d8 = local_2d8 + 1;
                *(longlong *)(local_2b8 + 0x20) = lVar24 + CONCAT44(iVar13 + (uint)bVar17,iVar14);
                *(undefined4 *)(local_2b8 + 0x1180) = 0;
                if ((int)local_2d8 < 1) goto LAB_0060ab70;
                goto LAB_0060b03f;
              }
            }
            local_29c = (float)((int)local_29c + 1);
            iVar13 = local_94;
            fVar20 = local_a0;
          } while ((int)local_29c <= local_94);
        }
        local_2b0 = local_2b0 + 1;
      } while ((int)local_2b0 <= local_98);
    }
LAB_0060b03f:
    piVar12 = (int *)**(int **)(local_2c4 + 0xc);
    iVar13 = local_2c4;
    iVar14 = local_2b8;
    local_2a8 = piVar12;
    if (piVar12 != *(int **)(local_2c4 + 0xc)) {
LAB_0060b060:
      fVar20 = (float)piVar12[6];
      local_298 = fVar20;
      if (fVar20 != 0.0) {
        local_2d8 = *(uint *)(iVar14 + 0x10);
        local_2c8 = *(uint *)(iVar14 + 0x14);
        local_2a4 = *(float *)(iVar14 + 0x18);
        local_29c = *(float *)(local_2b8 + 0x1c);
        local_2a0 = *(float *)(local_2b8 + 0x24);
        local_2ac = *(float *)(local_2b8 + 0x20);
        local_168 = local_2d8 - *(uint *)((int)fVar20 + 0x80U);
        iStack_164 = (local_2c8 - *(int *)((int)fVar20 + 0x84)) -
                     (uint)(local_2d8 < *(uint *)((int)fVar20 + 0x80U));
        local_160 = (int)local_2a4 - (int)*(float *)((int)fVar20 + 0x88U);
        iStack_15c = ((int)local_29c - *(int *)((int)fVar20 + 0x8c)) -
                     (uint)((uint)local_2a4 < (uint)*(float *)((int)fVar20 + 0x88U));
        local_158 = (int)local_2ac - (int)*(float *)((int)fVar20 + 0x90U);
        iStack_154 = ((int)local_2a0 - *(int *)((int)fVar20 + 0x94)) -
                     (uint)((uint)local_2ac < (uint)*(float *)((int)fVar20 + 0x90U));
        local_120 = (float)CONCAT44(iStack_164,local_168) * 1.5258789e-05;
        local_294 = (float)CONCAT44(iStack_154,local_158);
        local_11c = (float)CONCAT44(iStack_15c,local_160) * 1.5258789e-05;
        local_118 = local_294 * 1.5258789e-05;
        iVar13 = local_2c4;
        iVar14 = local_2b8;
        piVar12 = local_2a8;
        local_2c0 = local_29c;
        if (((local_11c * local_11c + local_120 * local_120 + local_118 * local_118 <= 4096.0) &&
            (0x280c < (int)(*(int *)(local_2c4 + 0x24) - *(int *)(local_2c4 + 0x20) & 0xfffffffcU)))
           && (local_2d0 = *(float *)(*(int *)(local_2c4 + 0x20) + 0x280c), local_2d0 != 0.0)) {
          local_2b0 = *(uint *)((int)local_2d0 + 0x48);
          local_2cc = *(uint *)((int)local_2d0 + 0x44);
          local_2d4 = *(uint *)((int)local_2d0 + 0x4c);
          fVar19 = (float)(int)local_2b0 * 0.5 * 0.0;
          fVar21 = (float)(int)local_2d4 * 0.5 * 0.0;
          fVar22 = (float)(int)local_2cc * 0.5 * 0.0;
          local_c0 = fVar19 + (float)(int)local_2cc * 0.5 + fVar21 + 0.0;
          fVar19 = fVar22 + fVar19;
          local_bc = fVar22 + (float)(int)local_2b0 * 0.5 + fVar21 + 0.0;
          local_b8 = fVar19 + (float)(int)local_2d4 * 0.5 + 0.0;
          local_b4 = fVar19 + fVar21 + 1.0;
          local_2c0 = *(float *)((int)fVar20 + 0x98);
          local_294 = -local_2c0 * 0.017453292;
          dVar18 = (double)local_294;
          libm_sse2_cos_precise();
          local_2bc = (float)dVar18;
          dVar18 = (double)local_294;
          libm_sse2_sin_precise();
          local_ec = (float)dVar18;
          fVar19 = local_ec * 0.0;
          local_150 = local_2d8 - *(uint *)((int)fVar20 + 0x80U);
          local_f0 = local_2bc + fVar19;
          local_d8 = local_2bc * 0.0;
          local_dc = local_2bc - fVar19;
          local_e0 = local_d8 - local_ec;
          local_ec = local_ec + local_d8;
          local_e8 = local_d8 + fVar19;
          local_d8 = local_d8 - fVar19;
          local_e4 = local_e8;
          local_d4 = local_d8;
          iStack_14c = (local_2c8 - *(int *)((int)fVar20 + 0x84)) -
                       (uint)(local_2d8 < *(uint *)((int)fVar20 + 0x80U));
          local_148 = (int)local_2a4 - (int)*(float *)((int)fVar20 + 0x88U);
          iStack_144 = ((int)local_29c - *(int *)((int)fVar20 + 0x8c)) -
                       (uint)((uint)local_2a4 < (uint)*(float *)((int)fVar20 + 0x88U));
          local_140 = (int)local_2ac - (int)*(float *)((int)fVar20 + 0x90U);
          iStack_13c = ((int)local_2a0 - *(int *)((int)fVar20 + 0x94)) -
                       (uint)((uint)local_2ac < (uint)*(float *)((int)fVar20 + 0x90U));
          local_b0 = (float)CONCAT44(iStack_14c,local_150) * 1.5258789e-05;
          local_ac = (float)CONCAT44(iStack_144,local_148) * 1.5258789e-05;
          local_a8 = (float)CONCAT44(iStack_13c,local_140) * 1.5258789e-05;
          local_294 = local_a8 * 0.0;
          local_c0 = local_ac * local_e0 + local_b0 * local_f0 + local_294 + local_c0;
          local_bc = local_ac * local_dc + local_b0 * local_ec + local_294 + local_bc;
          local_2ac = local_ac * local_d8 + local_b0 * local_e8 + local_a8 + local_b8;
          local_b8 = local_2ac;
          local_298 = local_ac * local_d8 + local_b0 * local_e8 + local_294 + local_b4;
          local_b4 = local_298;
          local_114 = local_e0 * 0.0 + local_f0 * 0.0 + 0.0 + local_c0;
          local_10c = local_d8 * 0.0 + local_e8 * 0.0 + 0.0 + local_2ac;
          fStack_110 = local_dc * 0.0 + local_ec * 0.0 + 0.0 + local_bc;
          local_c = 1.0 / (local_d8 * 0.0 + local_e8 * 0.0 + 0.0 + local_298);
          fVar20 = local_114 * local_c;
          local_2bc = *(float *)(local_2b8 + 0x84);
          fVar19 = fStack_110 * local_c;
          _local_14 = CONCAT44(fVar19,fVar20);
          local_c = local_10c * local_c;
          local_2a4 = *(float *)(local_2b8 + 0x80);
          local_24c[0xc] = *(float *)(local_2b8 + 0x80) * 0.5;
          local_218 = *(float *)(local_2b8 + 0x84) * 0.5;
          local_2a0 = *(float *)(local_2b8 + 0x88);
          local_214 = *(float *)(local_2b8 + 0x88) * 0.5;
          _local_44 = CONCAT44(fVar19 - local_218,fVar20 - local_24c[0xc]);
          local_3c = local_c - local_214;
          iVar13 = 0;
          do {
            uVar23 = FUN_0068d946();
            local_24c[iVar13 * 2 + 6] = (float)uVar23;
            local_24c[iVar13 * 2 + 7] = (float)((ulonglong)uVar23 >> 0x20);
            iVar13 = iVar13 + 1;
          } while (iVar13 < 3);
          FUN_0042f040(&local_2c,local_24c + 6);
          piVar12 = local_2a8;
          local_50 = (float)_local_14;
          local_210 = local_2a4 * 0.5;
          local_20c = local_2bc * 0.5;
          fStack_4c = (float)((ulonglong)_local_14 >> 0x20);
          local_208 = local_2a0 * 0.5;
          _local_50 = CONCAT44(fStack_4c + local_2bc * 0.5,local_50 + local_2a4 * 0.5);
          local_48 = local_c + local_2a0 * 0.5;
          iVar13 = 0;
          do {
            uVar23 = FUN_0068d946();
            local_24c[iVar13 * 2] = (float)uVar23;
            local_24c[iVar13 * 2 + 1] = (float)((ulonglong)uVar23 >> 0x20);
            iVar13 = iVar13 + 1;
          } while (iVar13 < 3);
          FUN_0042f040(&local_20,local_24c);
          fVar20 = local_2a4;
          piVar2 = local_2a8;
          local_28d = '\0';
          local_2ac = local_2c;
          local_298 = local_2c;
          while (iVar13 = local_2c4, iVar14 = local_2b8, (int)local_298 <= local_20) {
            local_29c = local_28;
            while ((int)local_29c <= local_1c) {
              local_294 = local_24;
              if ((int)local_24 <= local_18) {
                local_2e0 = 0;
                local_2de = 0;
                do {
                  if (((((int)local_298 < 0) || ((int)local_29c < 0)) ||
                      (((int)local_294 < 0 ||
                       (((int)local_2cc <= (int)local_298 || ((int)local_2b0 <= (int)local_29c))))))
                     || ((int)local_2d4 <= (int)local_294)) {
                    puVar16 = &DAT_0076b340;
                  }
                  else {
                    puVar16 = (undefined1 *)
                              (((local_2b0 * (int)local_294 + (int)local_29c) * local_2cc +
                               (int)local_298) * 3 + *(int *)((int)local_2d0 + 0x30));
                  }
                  iVar7 = 0;
                  do {
                    if (((char *)((int)&local_2e0 + iVar7))[(int)puVar16 - (int)&local_2e0] !=
                        *(char *)((int)&local_2e0 + iVar7)) {
                      local_28d = '\x01';
                      break;
                    }
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < 3);
                  local_294 = (float)((int)local_294 + 1);
                } while ((int)local_294 <= local_18);
                piVar12 = local_2a8;
                if (local_28d != '\0') {
                  fVar19 = -1.0;
                  local_298 = (float)((int)local_2c + 1);
                  local_28d = 1;
                  bVar17 = true;
                  if (local_20 + 1 < (int)local_298) goto LAB_0060bc08;
                  local_2e4[0] = '\0';
                  local_2e4[1] = '\0';
                  local_2e4[2] = 0;
                  goto LAB_0060bb20;
                }
              }
              local_29c = (float)((int)local_29c + 1);
            }
            local_298 = (float)((int)local_298 + 1);
          }
        }
      }
      goto LAB_0060baa3;
    }
  }
LAB_0060c4f3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_0060bb20:
  do {
    local_29c = local_28;
    do {
      local_294 = local_24;
      do {
        if ((((((int)local_298 < 0) || ((int)local_29c < 0)) || ((int)local_294 < 0)) ||
            (((int)local_2cc <= (int)local_298 || ((int)local_2b0 <= (int)local_29c)))) ||
           ((int)local_2d4 <= (int)local_294)) {
          puVar16 = &DAT_0076b340;
        }
        else {
          puVar16 = (undefined1 *)
                    (((local_2b0 * (int)local_294 + (int)local_29c) * local_2cc + (int)local_298) *
                     3 + *(int *)((int)local_2d0 + 0x30));
        }
        iVar7 = 0;
        do {
          if ((local_2e4 + iVar7)[(int)puVar16 - (int)local_2e4] != local_2e4[iVar7]) {
            local_28d = 0;
            bVar17 = false;
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 3);
        local_294 = (float)((int)local_294 + 1);
      } while ((int)local_294 <= local_18);
      if (!bVar17) {
        local_298 = local_30;
        goto LAB_0060bcc5;
      }
      local_29c = (float)((int)local_29c + 1);
    } while ((int)local_29c <= local_1c);
    local_298 = (float)((int)local_298 + 1);
  } while ((int)local_298 <= local_20 + 1);
LAB_0060bc08:
  fStack_104 = fStack_10;
  local_100 = local_c;
  local_108 = (float)(int)local_2c + 1.05 + local_2a4 * 0.5;
  local_54 = local_c - local_c;
  local_298 = local_c;
  fVar21 = fStack_10 - fStack_10;
  fVar19 = local_108 - local_14;
  _local_5c = CONCAT44(fVar21,fVar19);
  local_38 = CONCAT44(fStack_10,local_108);
  local_30 = local_c;
  fVar19 = fVar21 * fVar21 + fVar19 * fVar19 + local_54 * local_54;
LAB_0060bcc5:
  local_29c = (float)((int)local_2c - 1);
  local_28d = 1;
  bVar17 = true;
  if ((int)local_29c <= local_20 + -1) {
    local_2e8[0] = '\0';
    local_2e8[1] = '\0';
    local_2e8[2] = 0;
    do {
      local_2a4 = local_28;
      do {
        local_294 = local_24;
        do {
          if ((((int)local_29c < 0) || ((int)local_2a4 < 0)) ||
             (((int)local_294 < 0 ||
              ((((int)local_2cc <= (int)local_29c || ((int)local_2b0 <= (int)local_2a4)) ||
               ((int)local_2d4 <= (int)local_294)))))) {
            puVar16 = &DAT_0076b340;
          }
          else {
            puVar16 = (undefined1 *)
                      (((local_2b0 * (int)local_294 + (int)local_2a4) * local_2cc + (int)local_29c)
                       * 3 + *(int *)((int)local_2d0 + 0x30));
          }
          iVar7 = 0;
          do {
            if ((local_2e8 + iVar7)[(int)puVar16 - (int)local_2e8] != local_2e8[iVar7]) {
              local_28d = 0;
              bVar17 = false;
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 3);
          local_294 = (float)((int)local_294 + 1);
        } while ((int)local_294 <= local_18);
        if (!bVar17) goto LAB_0060bec6;
        local_2a4 = (float)((int)local_2a4 + 1);
      } while ((int)local_2a4 <= local_1c);
      local_29c = (float)((int)local_29c + 1);
    } while ((int)local_29c <= local_20 + -1);
  }
  fStack_f8 = fStack_10;
  local_f4 = local_c;
  local_fc = ((float)local_20 - 0.05) - fVar20 * 0.5;
  fStack_64 = fStack_10 - fStack_10;
  local_68 = local_fc - local_14;
  local_60 = local_c - local_c;
  fVar20 = fStack_64 * fStack_64 + local_68 * local_68 + local_60 * local_60;
  if ((fVar19 < 0.0) || (fVar20 < fVar19)) {
    local_38 = CONCAT44(fStack_10,local_fc);
    local_298 = local_c;
    local_30 = local_c;
    fVar19 = fVar20;
  }
LAB_0060bec6:
  bVar17 = true;
  local_28d = 1;
  bVar3 = true;
  local_29c = local_2c;
  local_2a0 = (float)((int)local_28 + 1U);
  local_2a4 = (float)((int)local_28 + 1U);
  do {
    if ((int)local_2a4 <= local_1c + 1) {
      local_2dc = (float)((uint)local_2dc & 0xff000000);
      bVar17 = bVar3;
      do {
        local_294 = local_24;
        do {
          if ((((int)local_29c < 0) || ((int)local_2a4 < 0)) ||
             (((int)local_294 < 0 ||
              ((((int)local_2cc <= (int)local_29c || ((int)local_2b0 <= (int)local_2a4)) ||
               ((int)local_2d4 <= (int)local_294)))))) {
            puVar16 = &DAT_0076b340;
          }
          else {
            puVar16 = (undefined1 *)
                      (((local_2b0 * (int)local_294 + (int)local_2a4) * local_2cc + (int)local_29c)
                       * 3 + *(int *)((int)local_2d0 + 0x30));
          }
          iVar7 = 0;
          do {
            if (((char *)((int)&local_2dc + iVar7))[(int)puVar16 - (int)&local_2dc] !=
                *(char *)((int)&local_2dc + iVar7)) {
              local_28d = 0;
              bVar17 = false;
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 3);
          local_294 = (float)((int)local_294 + 1);
        } while ((int)local_294 <= local_18);
        if (!bVar17) goto LAB_0060c0b3;
        local_2a4 = (float)((int)local_2a4 + 1);
        bVar3 = bVar17;
      } while ((int)local_2a4 <= local_1c + 1);
    }
    if (!bVar17) goto LAB_0060c0b3;
    local_29c = (float)((int)local_29c + 1);
    local_2a4 = local_2a0;
  } while ((int)local_29c <= local_20);
  local_138 = local_14;
  local_130 = local_c;
  fStack_134 = (float)(int)local_28 + 1.05 + local_2bc * 0.5;
  local_6c = local_c - local_c;
  fStack_70 = fStack_134 - fStack_10;
  local_74 = local_14 - local_14;
  fVar20 = fStack_70 * fStack_70 + local_74 * local_74 + local_6c * local_6c;
  if ((fVar19 < 0.0) || (fVar20 < fVar19)) {
    local_38 = CONCAT44(fStack_134,local_14);
    local_298 = local_c;
    local_30 = local_c;
    fVar19 = fVar20;
  }
LAB_0060c0b3:
  local_298 = local_30;
  cVar5 = '\x01';
  local_28d = '\x01';
  local_2a0 = (float)((int)local_28 - 1U);
  fVar20 = (float)((int)local_28 - 1U);
  do {
    local_2a4 = fVar20;
    if ((int)fVar20 <= local_1c + -1) {
      local_2b4 = local_2b4 & 0xff000000;
      do {
        local_294 = local_24;
        do {
          if ((((int)local_2ac < 0) || ((int)fVar20 < 0)) ||
             (((int)local_294 < 0 ||
              ((((int)local_2cc <= (int)local_2ac || ((int)local_2b0 <= (int)fVar20)) ||
               ((int)local_2d4 <= (int)local_294)))))) {
            puVar16 = &DAT_0076b340;
          }
          else {
            puVar16 = (undefined1 *)
                      (((local_2b0 * (int)local_294 + (int)fVar20) * local_2cc + (int)local_2ac) * 3
                      + *(int *)((int)local_2d0 + 0x30));
          }
          iVar7 = 0;
          do {
            if (((char *)((int)&local_2b4 + iVar7))[(int)puVar16 - (int)&local_2b4] !=
                *(char *)((int)&local_2b4 + iVar7)) {
              local_28d = '\0';
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 3);
          local_294 = (float)((int)local_294 + 1);
        } while ((int)local_294 <= local_18);
        local_2a4 = fVar20;
        if (local_28d == '\0') goto LAB_0060c2a7;
        fVar20 = (float)((int)fVar20 + 1);
        local_2a4 = fVar20;
        cVar5 = local_28d;
      } while ((int)fVar20 <= local_1c + -1);
    }
    if (cVar5 == '\0') goto LAB_0060c2a7;
    local_2ac = (float)((int)local_2ac + 1);
    fVar20 = local_2a0;
  } while ((int)local_2ac <= local_20);
  local_12c = local_14;
  local_124 = local_c;
  fStack_128 = ((float)local_1c - 0.05) - local_2bc * 0.5;
  fStack_88 = fStack_128 - fStack_10;
  local_8c = local_14 - local_14;
  local_84 = local_c - local_c;
  fVar20 = fStack_88 * fStack_88 + local_8c * local_8c + local_84 * local_84;
  if ((fVar19 < 0.0) || (fVar20 < fVar19)) {
    local_38 = CONCAT44(fStack_128,local_14);
    local_30 = local_c;
    fVar19 = fVar20;
  }
LAB_0060c2a7:
  fVar20 = local_30;
  uVar23 = local_38;
  piVar12 = piVar2;
  if (0.0 <= fVar19) {
    local_2c0 = local_2c0 * 0.017453292;
    dVar18 = (double)local_2c0;
    libm_sse2_cos_precise();
    local_2bc = (float)dVar18;
    dVar18 = (double)local_2c0;
    libm_sse2_sin_precise();
    fVar22 = (float)dVar18;
    fVar19 = fVar22 * 0.0;
    iVar13 = 0;
    local_2a0 = fVar19 + local_2bc;
    local_28c = local_2a0;
    fVar21 = local_2bc * 0.0;
    local_2bc = local_2bc - fVar19;
    local_294 = fVar22 + fVar21;
    local_2c0 = fVar21 - fVar19;
    local_80 = (float)uVar23;
    fStack_7c = (float)((ulonglong)uVar23 >> 0x20);
    fStack_7c = fStack_7c - fStack_10;
    local_80 = local_80 - local_14;
    local_278 = local_2bc;
    local_78 = fVar20 - local_c;
    local_274 = local_2c0;
    local_288 = local_294;
    local_27c = fVar21 - fVar22;
    local_284 = fVar21 + fVar19;
    local_1a4[3] = fStack_7c * (fVar21 - fVar22) + local_80 * local_2a0 + local_78 * 0.0;
    local_194 = fStack_7c * local_2bc + local_80 * local_294 + local_78 * 0.0;
    local_190 = fStack_7c * local_2c0 + local_80 * (fVar21 + fVar19) + local_78;
    do {
      uVar23 = FUN_0068d946();
      local_1d4[iVar13 * 2 + 6] = (uint)uVar23;
      local_1d4[iVar13 * 2 + 7] = (uint)((ulonglong)uVar23 >> 0x20);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    *(uint *)(local_2b8 + 0x10) = local_2d8 + local_1d4[6];
    *(uint *)(local_2b8 + 0x14) = local_2c8 + local_1d4[7] + (uint)CARRY4(local_2d8,local_1d4[6]);
    puVar1 = (uint *)(local_2b8 + 0x18);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 + local_1d4[8];
    *(int *)(local_2b8 + 0x1c) =
         *(int *)(local_2b8 + 0x1c) + local_1d4[9] + (uint)CARRY4(uVar6,local_1d4[8]);
    puVar1 = (uint *)(local_2b8 + 0x20);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 + local_1d4[10];
    *(int *)(local_2b8 + 0x24) =
         *(int *)(local_2b8 + 0x24) + local_1d4[0xb] + (uint)CARRY4(uVar6,local_1d4[10]);
    iVar13 = local_2c4;
    iVar14 = local_2b8;
  }
LAB_0060baa3:
  if (*(char *)((int)piVar12 + 0xd) == '\0') {
    piVar2 = (int *)piVar12[2];
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar5 = *(char *)(*piVar2 + 0xd);
      piVar12 = piVar2;
      piVar2 = (int *)*piVar2;
      while (local_2a8 = piVar12, cVar5 == '\0') {
        cVar5 = *(char *)(*piVar2 + 0xd);
        piVar12 = piVar2;
        piVar2 = (int *)*piVar2;
      }
    }
    else {
      cVar5 = *(char *)(piVar12[1] + 0xd);
      piVar4 = (int *)piVar12[1];
      piVar2 = piVar12;
      while ((piVar12 = piVar4, local_2a8 = piVar12, cVar5 == '\0' && (piVar2 == (int *)piVar12[2]))
            ) {
        cVar5 = *(char *)(piVar12[1] + 0xd);
        piVar4 = (int *)piVar12[1];
        piVar2 = piVar12;
      }
    }
  }
  if (piVar12 == *(int **)(iVar13 + 0xc)) goto LAB_0060c4f3;
  goto LAB_0060b060;
}


/* FUN_00622d40 @ 00622d40  kind=gamemisc  attributed-by=caller-vote  size=30 */

float10 FUN_00622d40(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_exp_precise();
  return (float10)(float)dVar1;
}


/* FUN_00627c00 @ 00627c00  kind=gamemisc  attributed-by=caller-vote  size=166 */

void FUN_00627c00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(in_ECX + 0x48) = *param_3;
  *(undefined4 *)(in_ECX + 0x4c) = param_3[1];
  *(undefined4 *)(in_ECX + 0x50) = *param_4;
  *(undefined4 *)(in_ECX + 0x54) = param_4[1];
  *(undefined4 *)(in_ECX + 0x58) = *param_1;
  *(undefined4 *)(in_ECX + 0x5c) = param_1[1];
  *(undefined4 *)(in_ECX + 0x60) = *param_2;
  *(undefined4 *)(in_ECX + 100) = param_2[1];
  *(undefined4 *)(in_ECX + 0x68) = *param_1;
  *(undefined4 *)(in_ECX + 0x6c) = param_1[1];
  *(undefined4 *)(in_ECX + 0x70) = *param_2;
  *(undefined4 *)(in_ECX + 0x74) = param_2[1];
  *(float *)(in_ECX + 0x78) = *(float *)(in_ECX + 0x60) - *(float *)(in_ECX + 0x50);
  *(float *)(in_ECX + 0x7c) = *(float *)(in_ECX + 100) - *(float *)(in_ECX + 0x54);
  puVar2 = param_5;
  puVar3 = (undefined4 *)(in_ECX + 0xa8);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(in_ECX + 0xe8);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_5;
    param_5 = param_5 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_0058c440();
  return;
}


/* FUN_0062baf0 @ 0062baf0  kind=gamemisc  attributed-by=caller-vote  size=34 */

void FUN_0062baf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006295a0(param_1,0);
  FUN_0062bb90(param_2,param_3);
  return;
}


/* FUN_0062c570 @ 0062c570  kind=gamemisc  attributed-by=caller-vote  size=64 */

void FUN_0062c570(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_10 = param_1;
  local_c = param_2;
  FUN_0062bb90(&local_10,param_3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062de20 @ 0062de20  kind=gamemisc  attributed-by=caller-vote  size=23 */

void FUN_0062de20(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x40) = in_ECX;
  }
  *(int *)(in_ECX + 0x148) = param_1;
  return;
}


/* FUN_0062f750 @ 0062f750  kind=gamemisc  attributed-by=caller-vote  size=174 */

int FUN_0062f750(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5769;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00630a40();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if ((undefined1 *)(iVar1 + 0x10) != (undefined1 *)0x0) {
    *(undefined4 *)(iVar1 + 0x24) = 0xf;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined1 *)(iVar1 + 0x10) = 0;
    FUN_0040c0a0(param_1,0,0xffffffff);
    *(undefined4 *)(iVar1 + 0x3c) = 0xf;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    local_8 = CONCAT31(local_8._1_3_,2);
    *(undefined1 *)(iVar1 + 0x28) = 0;
    FUN_0040c0a0(param_1 + 0x18,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_0062f820 @ 0062f820  kind=gamemisc  attributed-by=caller-vote  size=134 */

int FUN_0062f820(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f57a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00439600(param_1,param_2);
  local_8 = 1;
  if ((undefined1 *)(iVar1 + 8) != (undefined1 *)0x0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0xf;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined1 *)(iVar1 + 8) = 0;
    FUN_0040c0a0(param_3,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_0062f8f0 @ 0062f8f0  kind=gamemisc  attributed-by=caller-vote  size=159 */

undefined4 * FUN_0062f8f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f57c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)*in_ECX;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_0062f750(param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_0062f8f0(*param_1,puVar1,param_3);
    *puVar1 = uVar2;
    uVar2 = FUN_0062f8f0(param_1[2],puVar1,param_3);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_00630220 @ 00630220  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_00630220(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f5820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00583cb0(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0x15555554) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_006302f0 @ 006302f0  kind=gamemisc  attributed-by=caller-vote  size=207 */

void FUN_006302f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  uint uStack_28;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f5840;
  local_10 = ExceptionList;
  uStack_28 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_28;
  ExceptionList = &local_10;
  piVar3 = (int *)*in_ECX;
  local_8 = 0;
  for (; piVar3 = (int *)*piVar3, param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    if (piVar3 == (int *)*in_ECX) goto LAB_00630355;
    if (piVar3 + 2 != param_1 + 2) {
      FUN_0040c0a0(param_1 + 2,0,0xffffffff);
    }
  }
LAB_006303ae:
  FUN_00633ce0(local_18,piVar3,*in_ECX);
  ExceptionList = local_10;
  return;
LAB_00630355:
  for (; param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    iVar1 = *in_ECX;
    iVar2 = FUN_0062f820(iVar1,*(undefined4 *)(iVar1 + 4),param_1 + 2);
    if (in_ECX[1] == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    in_ECX[1] = in_ECX[1] + 1;
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  goto LAB_006303ae;
}


/* FUN_006303d0 @ 006303d0  kind=gamemisc  attributed-by=caller-vote  size=127 */

void FUN_006303d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5868;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  puVar1 = (undefined4 *)FUN_0046d550(0,0);
  *in_ECX = puVar1;
  local_8 = 1;
  FUN_00630220(*puVar1,*(undefined4 *)*param_1,(undefined4 *)*param_1,param_1);
  ExceptionList = local_10;
  return;
}


/* FUN_00630850 @ 00630850  kind=gamemisc  attributed-by=caller-vote  size=279 */

void FUN_00630850(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined1 local_60 [4];
  void *local_5c;
  undefined4 local_4c;
  uint local_48;
  void *local_44;
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
  puStack_c = &LAB_006f5960;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_00408fc0(param_1);
  if (iVar1 != *in_ECX) {
    piVar2 = (int *)(iVar1 + 0x10);
    if (0xf < *(uint *)(iVar1 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    iVar3 = FUN_0040c520(0,*(undefined4 *)(param_1 + 0x10),piVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar3) goto LAB_0063094f;
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_8 = 0;
  uVar4 = FUN_0062f690(param_1,local_2c,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar3 = FUN_0062f8c0(uVar4);
  FUN_0062fdc0(local_60,iVar1,iVar3 + 0x10,iVar3);
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
LAB_0063094f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00630a40 @ 00630a40  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * FUN_00630a40(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x40);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *in_ECX;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *in_ECX;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *in_ECX;
  }
  return puVar1;
}


/* FUN_00630ae0 @ 00630ae0  kind=gamemisc  attributed-by=caller-vote  size=119 */

void FUN_00630ae0(int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)*in_ECX;
  puVar1 = (undefined4 *)puVar4[1];
  puVar5 = puVar4;
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    puVar2 = puVar1;
    do {
      if ((uint)puVar2[4] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        if ((*(char *)((int)puVar4 + 0xd) != '\0') && (*param_2 < (uint)puVar2[4])) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    puVar1 = (undefined4 *)*puVar4;
  }
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[4]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  *param_1 = (int)puVar5;
  param_1[1] = (int)puVar4;
  return;
}


/* FUN_00630be0 @ 00630be0  kind=gamemisc  attributed-by=caller-vote  size=2168 */

void FUN_00630be0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  int in_ECX;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
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
  local_4c = param_1;
  if (*(int *)((int)param_1 + 0x28) != 0) {
    FUN_00636870(param_1);
  }
  iVar10 = *(int *)(in_ECX + 0x2c);
  iVar8 = FUN_00583cb0(iVar10,*(undefined4 *)(iVar10 + 4),&local_4c);
  if (*(int *)(in_ECX + 0x30) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + 1;
  *(int *)(iVar10 + 4) = iVar8;
  **(int **)(iVar8 + 4) = iVar8;
  *(int *)((int)param_1 + 0x28) = in_ECX;
  iVar10 = *(int *)((int)param_1 + 0x38);
  pfVar9 = (float *)(iVar10 + 0x1b0);
  pfVar11 = (float *)(in_ECX + 0x48);
  pfVar12 = local_48;
  for (iVar8 = 0x10; fVar6 = local_20, fVar5 = local_24, fVar17 = local_28, fVar4 = local_30,
      fVar3 = local_34, fVar18 = local_38, fVar16 = local_48[2], fVar19 = local_48[1],
      fVar14 = local_48[0], iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  fVar1 = *(float *)(iVar10 + 0x1e8);
  fVar2 = *(float *)(iVar10 + 0x1ec);
  local_48[0] = local_48[0] * *pfVar9 + local_38 * *(float *)(iVar10 + 0x1b4) +
                local_28 * *(float *)(iVar10 + 0x1b8) + local_18 * *(float *)(iVar10 + 0x1bc);
  fVar13 = *(float *)(iVar10 + 0x1d4) * local_38;
  local_38 = *(float *)(iVar10 + 0x1c0) * fVar14 + local_38 * *(float *)(iVar10 + 0x1c4) +
             local_28 * *(float *)(iVar10 + 0x1c8) + local_18 * *(float *)(iVar10 + 0x1cc);
  local_28 = *(float *)(iVar10 + 0x1d0) * fVar14 + fVar13 + local_28 * *(float *)(iVar10 + 0x1d8) +
             local_18 * *(float *)(iVar10 + 0x1dc);
  local_18 = *(float *)(iVar10 + 0x1e0) * fVar14 + *(float *)(iVar10 + 0x1e4) * fVar18 +
             fVar1 * fVar17 + local_18 * fVar2;
  local_48[1] = local_48[1] * *pfVar9 + local_34 * *(float *)(iVar10 + 0x1b4) +
                local_24 * *(float *)(iVar10 + 0x1b8) + local_14 * *(float *)(iVar10 + 0x1bc);
  fVar14 = *(float *)(iVar10 + 0x1d4) * local_34;
  local_34 = *(float *)(iVar10 + 0x1c0) * fVar19 + local_34 * *(float *)(iVar10 + 0x1c4) +
             local_24 * *(float *)(iVar10 + 0x1c8) + local_14 * *(float *)(iVar10 + 0x1cc);
  local_24 = *(float *)(iVar10 + 0x1d0) * fVar19 + fVar14 + local_24 * *(float *)(iVar10 + 0x1d8) +
             local_14 * *(float *)(iVar10 + 0x1dc);
  local_14 = *(float *)(iVar10 + 0x1e0) * fVar19 + *(float *)(iVar10 + 0x1e4) * fVar3 +
             fVar1 * fVar5 + local_14 * fVar2;
  local_48[2] = local_48[2] * *pfVar9 + local_30 * *(float *)(iVar10 + 0x1b4) +
                local_20 * *(float *)(iVar10 + 0x1b8) + local_10 * *(float *)(iVar10 + 0x1bc);
  fVar14 = *(float *)(iVar10 + 0x1d4) * local_30;
  local_30 = *(float *)(iVar10 + 0x1c0) * fVar16 + local_30 * *(float *)(iVar10 + 0x1c4) +
             local_20 * *(float *)(iVar10 + 0x1c8) + local_10 * *(float *)(iVar10 + 0x1cc);
  local_20 = *(float *)(iVar10 + 0x1d0) * fVar16 + fVar14 + local_20 * *(float *)(iVar10 + 0x1d8) +
             local_10 * *(float *)(iVar10 + 0x1dc);
  local_10 = *(float *)(iVar10 + 0x1e0) * fVar16 + *(float *)(iVar10 + 0x1e4) * fVar4 +
             fVar1 * fVar6 + local_10 * fVar2;
  local_48[3] = local_48[3] * *pfVar9 + local_2c * *(float *)(iVar10 + 0x1b4) +
                local_1c * *(float *)(iVar10 + 0x1b8) + local_c * *(float *)(iVar10 + 0x1bc);
  local_2c = *(float *)(iVar10 + 0x1c0) * local_48[3] + local_2c * *(float *)(iVar10 + 0x1c4) +
             local_1c * *(float *)(iVar10 + 0x1c8) + local_c * *(float *)(iVar10 + 0x1cc);
  local_1c = *(float *)(iVar10 + 0x1d0) * local_48[3] + *(float *)(iVar10 + 0x1d4) * local_2c +
             local_1c * *(float *)(iVar10 + 0x1d8) + local_c * *(float *)(iVar10 + 0x1dc);
  local_c = *(float *)(iVar10 + 0x1e0) * local_48[3] + *(float *)(iVar10 + 0x1e4) * local_2c +
            fVar1 * local_1c + local_c * fVar2;
  pfVar11 = local_48;
  pfVar12 = (float *)((int)param_1 + 0x48);
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  fVar14 = *(float *)(in_ECX + 0x8c);
  fVar19 = *(float *)(in_ECX + 0x88);
  pfVar11 = (float *)(*(int *)((int)param_1 + 0x38) + 0x1f0);
  pfVar12 = local_48;
  for (iVar10 = 0x10; fVar7 = local_20, fVar13 = local_24, fVar2 = local_28, fVar1 = local_2c,
      fVar6 = local_30, fVar5 = local_34, fVar17 = local_38, fVar4 = local_48[3],
      fVar3 = local_48[2], fVar18 = local_48[1], fVar16 = local_48[0], iVar10 != 0;
      iVar10 = iVar10 + -1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  local_48[0] = fVar19 * local_48[0] + fVar14 * local_38 + *(float *)(in_ECX + 0x90) * local_28 +
                *(float *)(in_ECX + 0x94) * local_18;
  fVar14 = *(float *)(in_ECX + 0xbc);
  fVar19 = *(float *)(in_ECX + 0xc0);
  fVar15 = *(float *)(in_ECX + 0xac) * local_38;
  local_38 = *(float *)(in_ECX + 0x9c) * local_38 + *(float *)(in_ECX + 0x98) * fVar16 +
             *(float *)(in_ECX + 0xa0) * local_28 + *(float *)(in_ECX + 0xa4) * local_18;
  local_28 = *(float *)(in_ECX + 0xa8) * fVar16 + fVar15 + *(float *)(in_ECX + 0xb0) * local_28 +
             *(float *)(in_ECX + 0xb4) * local_18;
  local_18 = *(float *)(in_ECX + 0xb8) * fVar16 + fVar14 * fVar17 + fVar19 * fVar2 +
             *(float *)(in_ECX + 0xc4) * local_18;
  fVar16 = *(float *)(in_ECX + 0x98) * local_48[1];
  local_48[1] = *(float *)(in_ECX + 0x88) * local_48[1] + *(float *)(in_ECX + 0x8c) * local_34 +
                *(float *)(in_ECX + 0x90) * local_24 + *(float *)(in_ECX + 0x94) * local_14;
  fVar17 = *(float *)(in_ECX + 0xac) * local_34;
  local_34 = *(float *)(in_ECX + 0x9c) * local_34 + fVar16 + *(float *)(in_ECX + 0xa0) * local_24 +
             *(float *)(in_ECX + 0xa4) * local_14;
  local_24 = *(float *)(in_ECX + 0xa8) * fVar18 + fVar17 + *(float *)(in_ECX + 0xb0) * local_24 +
             *(float *)(in_ECX + 0xb4) * local_14;
  local_14 = *(float *)(in_ECX + 0xb8) * fVar18 + fVar14 * fVar5 + fVar19 * fVar13 +
             *(float *)(in_ECX + 0xc4) * local_14;
  fVar16 = *(float *)(in_ECX + 0x98) * local_48[2];
  local_48[2] = *(float *)(in_ECX + 0x88) * local_48[2] + *(float *)(in_ECX + 0x8c) * local_30 +
                *(float *)(in_ECX + 0x90) * local_20 + *(float *)(in_ECX + 0x94) * local_10;
  fVar18 = *(float *)(in_ECX + 0xac) * local_30;
  local_30 = *(float *)(in_ECX + 0x9c) * local_30 + fVar16 + *(float *)(in_ECX + 0xa0) * local_20 +
             *(float *)(in_ECX + 0xa4) * local_10;
  local_20 = *(float *)(in_ECX + 0xa8) * fVar3 + fVar18 + *(float *)(in_ECX + 0xb0) * local_20 +
             *(float *)(in_ECX + 0xb4) * local_10;
  local_10 = *(float *)(in_ECX + 0xb8) * fVar3 + fVar14 * fVar6 + fVar19 * fVar7 +
             *(float *)(in_ECX + 0xc4) * local_10;
  local_48[3] = *(float *)(in_ECX + 0x88) * local_48[3] + *(float *)(in_ECX + 0x8c) * local_2c +
                *(float *)(in_ECX + 0x90) * local_1c + *(float *)(in_ECX + 0x94) * local_c;
  fVar19 = fVar19 * local_1c;
  local_4c = *(float *)(in_ECX + 0xa8) * fVar4;
  local_2c = *(float *)(in_ECX + 0x9c) * local_2c + *(float *)(in_ECX + 0x98) * fVar4 +
             *(float *)(in_ECX + 0xa0) * local_1c + *(float *)(in_ECX + 0xa4) * local_c;
  local_1c = local_4c + *(float *)(in_ECX + 0xac) * fVar1 + *(float *)(in_ECX + 0xb0) * local_1c +
             *(float *)(in_ECX + 0xb4) * local_c;
  local_c = *(float *)(in_ECX + 0xb8) * fVar4 + *(float *)(in_ECX + 0xbc) * fVar1 + fVar19 +
            *(float *)(in_ECX + 0xc4) * local_c;
  pfVar11 = local_48;
  pfVar12 = (float *)((int)param_1 + 0x88);
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00631460 @ 00631460  kind=gamemisc  attributed-by=caller-vote  size=192 */

void FUN_00631460(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar1 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  iVar2 = FUN_00428db0(0,*(undefined4 *)(in_ECX + 0x1c),puVar1,param_1[4]);
  if (((iVar2 == 0) && (FUN_00630be0(*(undefined4 *)(param_2 + 0x148)), (char)param_3 != '\0')) &&
     (*(int *)(in_ECX + 0x40) != 0)) {
    uVar5 = 1;
    local_10 = 0;
    local_c = 0;
    uVar3 = FUN_0062de60(local_18);
    FUN_0062baf0(&local_10,uVar3,uVar5);
  }
  piVar4 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar4 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_00631460(param_1,param_2,param_3);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(in_ECX + 0x2c));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00632640 @ 00632640  kind=gamemisc  attributed-by=caller-vote  size=72 */

void FUN_00632640(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  if (pvVar2 == (void *)*in_ECX) {
    return;
  }
  if (0xf < *(uint *)((int)pvVar2 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)pvVar2 + 8));
  }
  *(undefined4 *)((int)pvVar2 + 0x1c) = 0xf;
  *(undefined4 *)((int)pvVar2 + 0x18) = 0;
  *(undefined1 *)((int)pvVar2 + 8) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar2);
}


/* FUN_006326d0 @ 006326d0  kind=gamemisc  attributed-by=caller-vote  size=411 */

int FUN_006326d0(uint param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int in_ECX;
  int *piVar11;
  undefined4 local_8;
  
  if (*(int **)(in_ECX + 0x34) == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x34))();
  }
  if (*(int **)(in_ECX + 0x38) == (int *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = (**(code **)(**(int **)(in_ECX + 0x38) + 8))();
  }
  if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(**(int **)(in_ECX + 0x3c) + 8))();
  }
  iVar9 = FUN_0064f4e0(local_8,uVar7,uVar8,param_1,in_ECX + 0xc);
  if (*(int **)(in_ECX + 0x40) == (int *)0x0) {
    if ((param_1 == 0) || (iVar10 = *(int *)(param_1 + 0x44), iVar10 == 0)) goto LAB_0063274f;
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x40) + 0xa0))(iVar9);
    iVar10 = *(int *)(iVar9 + 0x40);
  }
  *(int *)(iVar9 + 0x44) = iVar10;
LAB_0063274f:
  if ((*(int *)(iVar9 + 0x44) != 0) && (*(int **)(iVar9 + 0x34) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar9 + 0x34) + 4))(1);
  }
  piVar11 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar11 != *(int **)(in_ECX + 0x2c)) {
    do {
      if ((~(byte)(*(uint *)(piVar11[2] + 200) >> 2) & 1) != 0) {
        FUN_006326d0(iVar9);
      }
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)*(int *)(in_ECX + 0x2c));
  }
  *(undefined4 *)(iVar9 + 200) = *(undefined4 *)(in_ECX + 200);
  if ((undefined4 *)(iVar9 + 0xe0) != (undefined4 *)(in_ECX + 0xe0)) {
    puVar2 = *(undefined4 **)(in_ECX + 0xe0);
    FUN_006302f0(*puVar2,puVar2);
  }
  piVar11 = (int *)(iVar9 + 0xe8);
  if (piVar11 != (int *)(in_ECX + 0xe8)) {
    FUN_00630b60(*(undefined4 *)(*piVar11 + 4));
    param_1 = param_1 & 0xffffff00;
    *(int *)(*piVar11 + 4) = *piVar11;
    *(int *)*piVar11 = *piVar11;
    *(int *)(*piVar11 + 8) = *piVar11;
    *(undefined4 *)(iVar9 + 0xec) = 0;
    iVar10 = *piVar11;
    uVar7 = FUN_0062f8f0(*(undefined4 *)(*(int *)(in_ECX + 0xe8) + 4),iVar10,param_1);
    *(undefined4 *)(iVar10 + 4) = uVar7;
    piVar3 = (int *)*piVar11;
    *(undefined4 *)(iVar9 + 0xec) = *(undefined4 *)(in_ECX + 0xec);
    piVar4 = (int *)piVar3[1];
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar4 + 0xd);
      piVar6 = (int *)*piVar4;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar6 + 0xd);
        piVar4 = piVar6;
        piVar6 = (int *)*piVar6;
      }
      *piVar3 = (int)piVar4;
      iVar10 = *(int *)(*piVar11 + 4);
      iVar5 = *(int *)(iVar10 + 8);
      cVar1 = *(char *)(iVar5 + 0xd);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
        iVar10 = iVar5;
        iVar5 = *(int *)(iVar5 + 8);
      }
      *(int *)(*piVar11 + 8) = iVar10;
      return iVar9;
    }
    *piVar3 = (int)piVar3;
    *(int *)(*piVar11 + 8) = *piVar11;
  }
  return iVar9;
}


/* FUN_00632870 @ 00632870  kind=gamemisc  attributed-by=caller-vote  size=127 */

void FUN_00632870(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5998;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006303d0(in_ECX + 0x2c);
  local_8 = 0;
  for (puVar1 = (undefined4 *)*local_18; puVar1 != local_18; puVar1 = (undefined4 *)*puVar1) {
    FUN_006504e0(puVar1[2]);
  }
  puVar1 = (undefined4 *)*local_18;
  *local_18 = local_18;
  local_18[1] = local_18;
  if (puVar1 == local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_18);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar1);
}


/* FUN_00633c90 @ 00633c90  kind=gamemisc  attributed-by=caller-vote  size=77 */

undefined4 FUN_00633c90(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  puVar3 = (undefined4 *)FUN_00630ae0(local_c,param_1);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  param_1 = 0;
  FUN_00608d40(uVar1,uVar2,&param_1,0);
  FUN_0067eb10(local_8,uVar1,uVar2);
  return param_1;
}


/* FUN_00633ce0 @ 00633ce0  kind=gamemisc  attributed-by=caller-vote  size=128 */

undefined4 * FUN_00633ce0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  if ((param_2 == *(int **)*in_ECX) && (param_3 == (int *)*in_ECX)) {
    FUN_00632640();
    *param_1 = *in_ECX;
    return param_1;
  }
  do {
    piVar1 = param_2;
    if (piVar1 == param_3) {
      *param_1 = param_3;
      return param_1;
    }
    param_2 = (int *)*piVar1;
  } while (piVar1 == (int *)*in_ECX);
  *(int **)piVar1[1] = (int *)*piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
  if ((uint)piVar1[7] < 0x10) {
    piVar1[7] = 0xf;
    piVar1[6] = 0;
    *(undefined1 *)(piVar1 + 2) = 0;
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)piVar1[2]);
}


/* FUN_00633dd0 @ 00633dd0  kind=gamemisc  attributed-by=caller-vote  size=158 */

void FUN_00633dd0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  int *piVar5;
  
  puVar1 = param_2;
  puVar2 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar2 = (undefined4 *)*param_2;
  }
  iVar3 = FUN_00428db0(0,in_ECX[7],puVar2,param_2[4]);
  if (iVar3 == 0) {
    iVar3 = *param_1;
    param_2 = in_ECX;
    iVar4 = FUN_00583cb0(iVar3,*(undefined4 *)(iVar3 + 4),&param_2);
    if (param_1[1] == 0x15555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    *(int *)(iVar3 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
  }
  piVar5 = *(int **)in_ECX[0xb];
  if (piVar5 != (int *)in_ECX[0xb]) {
    do {
      FUN_00633dd0(param_1,puVar1);
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)in_ECX[0xb]);
  }
  return;
}


/* FUN_00634940 @ 00634940  kind=gamemisc  attributed-by=caller-vote  size=290 */

void FUN_00634940(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 extraout_EDX;
  int *piVar3;
  undefined4 uVar4;
  void *local_20 [4];
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(in_ECX + 0x34);
  uVar4 = 0;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x48) == 3)) {
    iVar2 = *(int *)(iVar1 + 0x7c);
    iVar1 = *(int *)(iVar1 + 0xa8);
    param_1[5] = 7;
    param_1[4] = 0;
    *(undefined2 *)param_1 = 0;
    FUN_0040f680(iVar1 + iVar2 * 0x18,0,0xffffffff);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar4);
    return;
  }
  piVar3 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar3 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_00634940(local_20);
      if (local_10 != 0) {
        param_1[5] = 7;
        param_1[4] = 0;
        *(undefined2 *)param_1 = 0;
        if (local_c < 8) {
          if (local_10 + 1 != 0) {
            memmove(param_1,local_20,(local_10 + 1) * 2);
            param_1[4] = local_10;
            param_1[5] = local_c;
            goto LAB_00634a00;
          }
        }
        else {
          *param_1 = local_20[0];
        }
        param_1[4] = local_10;
        param_1[5] = local_c;
        goto LAB_00634a00;
      }
      if (7 < local_c) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_20[0]);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
  }
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  FUN_0040f7a0(&PTR_006fccac,0);
LAB_00634a00:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00635550 @ 00635550  kind=gamemisc  attributed-by=caller-vote  size=412 */

void FUN_00635550(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int *piVar4;
  undefined4 uVar5;
  void *local_20 [4];
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar5 = 0;
  puVar2 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar2 = (undefined4 *)*param_2;
  }
  iVar3 = FUN_00428db0(0,*(undefined4 *)(in_ECX + 0x1c),puVar2,param_2[4]);
  if (iVar3 == 0) {
    if (param_3 != '\0') {
      FUN_00634940(param_1);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar5);
      return;
    }
    iVar3 = *(int *)(in_ECX + 0x34);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x48) == 3)) {
      iVar1 = *(int *)(iVar3 + 0x7c);
      iVar3 = *(int *)(iVar3 + 0xa8);
      param_1[5] = 7;
      param_1[4] = 0;
      *(undefined2 *)param_1 = 0;
      FUN_0040f680(iVar3 + iVar1 * 0x18,0,0xffffffff);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX_00,uVar5);
      return;
    }
    FUN_0040eb60(&PTR_006fccac);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX_01,uVar5);
    return;
  }
  piVar4 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar4 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_00635550(local_20,param_2,param_3);
      if (local_10 != 0) {
        param_1[5] = 7;
        param_1[4] = 0;
        *(undefined2 *)param_1 = 0;
        if (local_c < 8) {
          if (local_10 + 1 != 0) {
            memmove(param_1,local_20,(local_10 + 1) * 2);
            param_1[4] = local_10;
            param_1[5] = local_c;
            goto LAB_00635690;
          }
        }
        else {
          *param_1 = local_20[0];
        }
        param_1[4] = local_10;
        param_1[5] = local_c;
        goto LAB_00635690;
      }
      if (7 < local_c) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_20[0]);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(in_ECX + 0x2c));
  }
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  FUN_0040f7a0(&PTR_006fccac,0);
LAB_00635690:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00635700 @ 00635700  kind=gamemisc  attributed-by=caller-vote  size=82 */

void FUN_00635700(void)

{
  undefined4 uVar1;
  int in_ECX;
  int *piVar2;
  
  if ((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) == 0) {
    return;
  }
  if (*(int **)(in_ECX + 0x40) == (int *)0x0) {
    if (*(int *)(in_ECX + 0x28) == 0) goto LAB_00635730;
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x44);
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x40) + 0x1c))();
    uVar1 = *(undefined4 *)(in_ECX + 0x40);
  }
  *(undefined4 *)(in_ECX + 0x44) = uVar1;
LAB_00635730:
  piVar2 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar2 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_00635700();
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(in_ECX + 0x2c));
  }
  return;
}


