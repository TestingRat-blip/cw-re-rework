// Unsorted (ai) -- server. 8 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted.h"

/* FUN_00405450 @ 00405450  kind=gamemisc  attributed-by=logic:caller-vote  size=191 */

void __cdecl FUN_00405450(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[5];
  if (((int)uVar1 < 1) && ((int)uVar1 < 0)) {
    uVar4 = __alldiv(param_2[4],uVar1,0x10000,0);
    iVar2 = (int)uVar4 + -1;
  }
  else {
    uVar4 = __alldiv(param_2[4],uVar1,0x10000,0);
    iVar2 = (int)uVar4;
  }
  uVar1 = param_2[3];
  if (((int)uVar1 < 1) && ((int)uVar1 < 0)) {
    uVar4 = __alldiv(param_2[2],uVar1,0x10000,0);
    iVar3 = (int)uVar4 + -1;
  }
  else {
    uVar4 = __alldiv(param_2[2],uVar1,0x10000,0);
    iVar3 = (int)uVar4;
  }
  uVar1 = param_2[1];
  if (((int)uVar1 < 1) && ((int)uVar1 < 0)) {
    uVar4 = __alldiv(*param_2,uVar1,0x10000,0);
    param_1[1] = iVar3;
    param_1[2] = iVar2;
    *param_1 = (int)uVar4 + -1;
    return;
  }
  uVar4 = __alldiv(*param_2,uVar1,0x10000,0);
  param_1[1] = iVar3;
  param_1[2] = iVar2;
  *param_1 = (int)uVar4;
  return;
}


/* FUN_004ce660 @ 004ce660  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

void FUN_004ce660(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (undefined4 *)0x0) {
      param_1 = puVar1;
      param_2 = puVar1;
    }
    *puVar1 = param_1;
    if (puVar1 + 1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_004da010 @ 004da010  kind=gamemisc  attributed-by=logic:caller-vote  size=511 */

void __thiscall
FUN_004da010(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if (0x9249247 < *(uint *)((int)this + 4)) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = FUN_004d9ac0(this,param_4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  piVar3[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = piVar3;
    **(undefined4 **)this = piVar3;
    iVar4 = *(int *)this;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar3;
      if (param_3 == (undefined4 *)**(int **)this) {
        **(int **)this = (int)piVar3;
      }
      goto LAB_004da06e;
    }
    param_3[2] = piVar3;
    iVar4 = *(int *)this;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_004da06e;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_004da06e:
  cVar1 = *(char *)(piVar3[1] + 0xc);
  piVar5 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
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
          if (piVar7 == *(int **)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar5;
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
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar6;
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
        goto LAB_004da1ea;
      }
LAB_004da141:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_004da141;
      if (piVar5 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int *)(*(int *)this + 4) = iVar4;
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
      if (piVar7 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar6;
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
LAB_004da1ea:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_004da210 @ 004da210  kind=gamemisc  attributed-by=logic:caller-vote  size=627 */

undefined4 * __thiscall
FUN_004da210(void *this,undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_30;
  undefined4 local_20;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00554d00;
  local_10 = ExceptionList;
  uStack_30 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_004d9de0(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_30;
    uVar3 = FUN_004da930((int *)*param_3,(int *)param_3[1],(int *)param_2[4],(int *)param_2[5]);
    if ((char)uVar3 != '\0') {
      FUN_004d9de0(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    local_14 = (undefined1 *)&uStack_30;
    uVar3 = FUN_004da930((int *)puVar4[4],(int *)puVar4[5],(int *)*param_3,(int *)param_3[1]);
    if ((char)uVar3 != '\0') {
      FUN_004d9de0(this,param_1,'\0',puVar4,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    uVar3 = FUN_004da930((int *)*param_3,(int *)param_3[1],(int *)param_2[4],(int *)param_2[5]);
    if ((char)uVar3 != '\0') {
      local_1c = param_2;
      FUN_004dad80((int *)&local_1c);
      piVar2 = local_1c;
      uVar3 = FUN_004da930((int *)local_1c[4],(int *)local_1c[5],(int *)*param_3,(int *)param_3[1]);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar2[2] + 0xd) == '\0') {
          FUN_004d9de0(local_18,param_1,'\x01',param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004d9de0(local_18,param_1,'\0',piVar2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
    uVar3 = FUN_004da930((int *)param_2[4],(int *)param_2[5],(int *)*param_3,(int *)param_3[1]);
    if ((char)uVar3 != '\0') {
      local_1c = param_2;
      FUN_00407a50((int *)&local_1c);
      piVar2 = local_1c;
      if ((local_1c == piVar1) ||
         (uVar3 = FUN_004da930((int *)*param_3,(int *)param_3[1],(int *)local_1c[4],
                               (int *)local_1c[5]), (char)uVar3 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_004d9de0(local_18,param_1,'\x01',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004d9de0(local_18,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_004da4a0(local_18,&local_20,'\0',param_3,param_4);
  *param_1 = *puVar4;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004dafe0 @ 004dafe0  kind=gamemisc  attributed-by=logic:caller-vote  size=454 */

void FUN_004dafe0(void *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_34;
  int local_2c [3];
  undefined4 *local_20;
  int iStack_1c;
  int local_18;
  undefined4 *local_14;
  int iStack_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  FUN_00405450(local_2c,(uint *)((int)param_1 + 0x1428));
  FUN_00405450((int *)&local_20,(uint *)((int)param_1 + 0x1440));
  piVar2 = *(int **)((int)param_1 + 0x1460);
  piVar1 = (int *)((int)param_1 + 0x1460);
  piVar6 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *(int *)(*piVar1 + 4) = *piVar1;
  *(undefined4 *)((int)param_1 + 0x1464) = 0;
  if (piVar6 != (int *)*piVar1) {
    do {
      piVar2 = (int *)*piVar6;
      operator_delete(piVar6);
      piVar6 = piVar2;
    } while (piVar2 != (int *)*piVar1);
  }
  iStack_10 = iStack_1c;
  puVar5 = local_20;
  iVar8 = local_18;
  if (*(int *)((int)param_1 + 0x1408) != *(int *)((int)param_1 + 0x140c)) {
    puVar3 = *(undefined4 **)(*(int *)((int)param_1 + 0x1408) + 0x10);
    iStack_10 = puVar3[1];
    puVar5 = (undefined4 *)*puVar3;
    iVar8 = puVar3[2];
  }
  local_34 = iStack_10;
  puVar3 = *(undefined4 **)*piVar1;
  local_c = iVar8;
  local_14 = puVar5;
  iVar4 = FUN_004d9b70(puVar3,(undefined4 *)puVar3[1],&local_14);
  if (*(int *)((int)param_1 + 0x1464) != 0xccccccb) {
    *(int *)((int)param_1 + 0x1464) = *(int *)((int)param_1 + 0x1464) + 1;
    puVar3[1] = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
    iVar4 = 0;
    do {
      iVar7 = 0;
      while (*(int *)((int)&local_14 + iVar7) == *(int *)((int)local_2c + iVar7)) {
        iVar7 = iVar7 + 4;
        if (0xb < iVar7) goto LAB_004db0e5;
      }
      if (*(int *)((int)param_1 + 0x1410) < iVar4) {
LAB_004db0e5:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      iVar4 = iVar4 + 1;
      puVar5 = FUN_004dd0f0(param_1,puVar5,local_34,iVar8);
      if (puVar5 == (undefined4 *)0x0) goto LAB_004db0e5;
      iVar8 = puVar5[5];
      local_20 = (undefined4 *)puVar5[3];
      iStack_1c = puVar5[4];
      local_18 = iVar8;
      iVar7 = 0;
      while (*(int *)((int)&local_14 + iVar7) == *(int *)((int)&local_20 + iVar7)) {
        iVar7 = iVar7 + 4;
        if (0xb < iVar7) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      puVar3 = *(undefined4 **)*piVar1;
      local_c = iVar8;
      local_14 = (undefined4 *)puVar5[3];
      iStack_10 = puVar5[4];
      iVar7 = FUN_004d9b70(puVar3,(undefined4 *)puVar3[1],&local_20);
      if (*(int *)((int)param_1 + 0x1464) == 0xccccccb) break;
      *(int *)((int)param_1 + 0x1464) = *(int *)((int)param_1 + 0x1464) + 1;
      puVar3[1] = iVar7;
      **(int **)(iVar7 + 4) = iVar7;
      local_34 = iStack_10;
      puVar5 = local_14;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004dde90 @ 004dde90  kind=gamemisc  attributed-by=logic:caller-vote  size=10330 */

/* WARNING: Removing unreachable block (ram,0x004df1bb) */
/* WARNING: Removing unreachable block (ram,0x004deb9a) */
/* WARNING: Removing unreachable block (ram,0x004dec8e) */
/* WARNING: Removing unreachable block (ram,0x004def61) */
/* WARNING: Removing unreachable block (ram,0x004df550) */
/* WARNING: Removing unreachable block (ram,0x004df64b) */
/* WARNING: Removing unreachable block (ram,0x004df0b8) */
/* WARNING: Removing unreachable block (ram,0x004df307) */

void __thiscall FUN_004dde90(void *this,void *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  undefined *puVar7;
  float fVar8;
  undefined4 *puVar9;
  undefined4 **ppuVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  int *piVar19;
  char cVar20;
  void *pvVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  undefined4 *puVar26;
  void *this_00;
  uint uVar27;
  float fVar28;
  uint uVar29;
  bool bVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint *puVar35;
  undefined8 local_238;
  uint local_230;
  int local_22c;
  int local_228;
  int local_224;
  undefined8 local_220;
  uint local_218;
  int local_214;
  uint local_210;
  int local_20c;
  undefined8 local_208;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  uint local_1f0;
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
  int *local_178;
  int *local_174;
  int *local_170;
  int *local_16c;
  int *local_168;
  int *local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  int *local_154;
  uint local_150;
  int *local_14c;
  void *local_148;
  int *local_144;
  int *local_140;
  uint local_13c;
  int *local_138;
  int *local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  float local_124;
  int *local_120;
  uint local_11c;
  int *local_118;
  int *local_114;
  int *local_110;
  int *local_10c;
  int *local_108;
  int *local_104;
  uint local_100;
  uint local_fc;
  uint *local_f8;
  int *local_f4;
  int local_f0;
  uint local_ec;
  int *local_e8;
  int *local_e4;
  uint local_e0;
  int local_dc;
  float local_d8;
  uint local_d4;
  char local_cd;
  uint local_cc;
  uint *local_c8;
  char local_c1;
  int *local_c0;
  uint local_bc;
  float local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined4 *local_a8;
  char local_a1;
  uint local_a0;
  uint local_9c;
  int *local_98;
  void *local_94;
  char local_8e;
  byte local_8d;
  uint local_8c;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  int local_78;
  undefined4 *local_74;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined8 local_2c;
  float local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  undefined4 *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_94 = param_1;
  local_148 = this;
  if (*(uint *)((int)param_1 + 0x1410) != 0) {
    uVar23 = *(uint *)((int)param_1 + 0x1418);
    if ((uVar23 < 0x1f5) && (*(uint *)((int)param_1 + 0x1410) < 0x4e21)) {
      local_f8 = (uint *)((int)param_1 + 0x1440);
      FUN_00405450((int *)&local_2c,local_f8);
      if (uVar23 != 0) {
        uVar23 = 0xffffffff;
        piVar12 = (int *)**(int **)((int)param_1 + 0x1414);
        local_c8 = (uint *)0x0;
        local_104 = piVar12;
        if (piVar12 != *(int **)((int)param_1 + 0x1414)) {
          do {
            piVar25 = local_104;
            puVar26 = (undefined4 *)local_104[4];
            puVar6 = FUN_004dd0f0(local_94,(undefined4 *)*puVar26,puVar26[1],puVar26[2]);
            if ((puVar6 != (uint *)0x0) &&
               ((local_c8 == (uint *)0x0 || ((int)puVar6[2] < (int)uVar23)))) {
              uVar23 = puVar6[2];
              piVar12 = piVar25;
              local_c8 = puVar6;
            }
            FUN_00407a50((int *)&local_104);
          } while (local_104 != *(int **)((int)local_94 + 0x1414));
        }
        pvVar21 = local_94;
        puVar6 = (uint *)piVar12[4];
        local_a0 = puVar6[1];
        uVar23 = puVar6[2];
        local_a8 = (undefined4 *)*puVar6;
        local_9c = uVar23;
        local_74 = local_a8;
        local_70 = local_a0;
        local_6c = uVar23;
        FUN_0040a4f0((void *)((int)local_94 + 0x1414),&local_138,piVar12);
        iVar15 = 0;
        do {
          if (*(int *)((int)&local_74 + iVar15) != *(int *)((int)&local_2c + iVar15)) {
            local_34 = ((int)local_a8 >> 0x1f) << 0x10 | (uint)local_a8 >> 0x10;
            local_38 = (int)local_a8 << 0x10;
            local_30 = local_a0 << 0x10;
            local_58 = (double)*(float *)((int)pvVar21 + 0x88) * 0.5 * 65536.0;
            local_24 = (float)(((int)uVar23 >> 0x1f) << 0x10 | uVar23 >> 0x10);
            local_2c = CONCAT44(uVar23 << 0x10,((int)local_a0 >> 0x1f) << 0x10 | local_a0 >> 0x10);
            puVar6 = &local_38;
            puVar35 = &local_50;
            uVar31 = FUN_0054a946();
            local_68 = FUN_0054a946();
            local_60 = local_68;
            local_58 = (double)uVar31;
            FUN_00402cb0(&local_68,puVar35,puVar6);
            local_2c = 0;
            local_24 = 0.01;
            FUN_00402510((int)&local_8c);
            local_24 = *(float *)((int)pvVar21 + 0x88) * 0.5;
            local_2c = CONCAT44(*(float *)((int)pvVar21 + 0x84) * 0.5,
                                *(float *)((int)pvVar21 + 0x80) * 0.5);
            FUN_00402510((int)&local_68);
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
            FUN_00405450((int *)((int)&local_60 + 4),&local_38);
            local_24 = *(float *)((int)local_94 + 0x88) * 0.5;
            local_2c = CONCAT44(*(float *)((int)local_94 + 0x84) * 0.5,
                                *(float *)((int)local_94 + 0x80) * 0.5);
            FUN_00402510((int)&local_8c);
            local_20 = local_50 + local_8c;
            local_1c = local_4c + local_88 + (uint)CARRY4(local_50,local_8c);
            local_18 = local_48 + local_84;
            local_14 = (undefined4 *)(local_44 + local_80 + (uint)CARRY4(local_48,local_84));
            local_10 = local_40 + local_7c;
            local_c = local_3c + local_78 + (uint)CARRY4(local_40,local_7c);
            FUN_00405450((int *)&local_2c,&local_20);
            local_d8 = (float)(local_58._4_4_ + -1);
            local_b8 = (float)((int)local_24 + 1);
            uVar24 = local_60._4_4_ - 1;
            uVar27 = (uint)local_58 - 1;
            uVar23 = (int)(float)local_2c + 1;
            local_d4 = (int)local_2c._4_4_ + 1;
            local_13c = (int)(uVar24 + ((int)uVar24 >> 0x1f & 7U)) >> 3;
            local_12c = (int)(uVar27 + ((int)uVar27 >> 0x1f & 7U)) >> 3;
            local_17c = (int)(uVar23 + ((int)uVar23 >> 0x1f & 7U)) >> 3;
            local_180 = (int)(local_d4 + ((int)local_d4 >> 0x1f & 7U)) >> 3;
            local_150 = local_150 & 0xffffff00;
            local_158 = local_158 & 0xffffff00;
            local_160 = local_160 & 0xffffff00;
            local_15c = local_15c & 0xffffff00;
            local_8e = '\0';
            local_e8 = (int *)((uint)local_e8 & 0xffffff00);
            local_f4 = (int *)((uint)local_f4 & 0xffffff00);
            local_108 = (int *)((uint)local_108 & 0xffffff00);
            local_e4 = (int *)((uint)local_e4 & 0xffffff00);
            local_98 = (int *)((uint)local_98 & 0xffffff00);
            local_168 = (int *)((uint)local_168 & 0xffffff00);
            local_178 = (int *)((uint)local_178 & 0xffffff00);
            local_154 = (int *)((uint)local_154 & 0xffffff00);
            local_164 = (int *)((uint)local_164 & 0xffffff00);
            local_140 = (int *)((uint)local_140 & 0xffffff00);
            local_144 = (int *)((uint)local_144 & 0xffffff00);
            local_14c = (int *)((uint)local_14c & 0xffffff00);
            local_170 = (int *)((uint)local_170 & 0xffffff00);
            local_10c = (int *)((uint)local_10c & 0xffffff00);
            local_16c = (int *)((uint)local_16c & 0xffffff00);
            local_174 = (int *)((uint)local_174 & 0xffffff00);
            local_104 = (int *)((uint)local_104 & 0xffffff00);
            local_118 = (int *)((uint)local_118 & 0xffffff00);
            local_120 = (int *)((uint)local_120 & 0xffffff00);
            local_110 = (int *)((uint)local_110 & 0xffffff00);
            local_114 = (int *)((uint)local_114 & 0xffffff00);
            local_134 = (int *)((uint)local_134 & 0xffffff00);
            local_bc = uVar24;
            local_b0 = uVar27;
            local_ac = uVar23;
            uVar31 = FUN_0054a946();
            iVar15 = FUN_00406050(local_148,local_50,local_4c,local_48,local_44,
                                  local_40 - (uint)uVar31,
                                  (local_3c - (int)(uVar31 >> 0x20)) -
                                  (uint)(local_40 < (uint)uVar31),0);
            local_8d = *(byte *)(iVar15 + 3) >> 1 & 1;
            local_c0 = (int *)0x1;
            uVar16 = local_d4;
            if ((int)uVar24 <= (int)uVar23) {
              do {
                fVar8 = local_d8;
                uVar29 = uVar27;
                if ((int)uVar27 <= (int)uVar16) {
                  do {
                    fVar28 = fVar8;
                    if ((int)fVar8 <= (int)local_b8) {
                      do {
                        if ((((((int)uVar24 <= (int)local_bc) || ((int)local_ac <= (int)uVar24)) ||
                             ((int)uVar29 <= (int)uVar27)) ||
                            (((int)uVar16 <= (int)uVar29 || ((int)fVar28 <= (int)fVar8)))) ||
                           ((int)local_b8 <= (int)fVar28)) {
                          if ((((int)uVar24 < 0) || ((int)uVar29 < 0)) ||
                             ((0xffffff < (int)uVar24 ||
                              ((0xffffff < (int)uVar29 ||
                               (iVar15 = FUN_00406290(local_148,
                                                      (int)(uVar24 + ((int)uVar24 >> 0x1f & 0xffU))
                                                      >> 8,(int)(uVar29 + ((int)uVar29 >> 0x1f &
                                                                          0xffU)) >> 8), iVar15 == 0
                               )))))) {
LAB_004de4aa:
                            puVar7 = &DAT_00584274;
                          }
                          else {
                            uVar23 = uVar29 & 0x800000ff;
                            if ((int)uVar23 < 0) {
                              uVar23 = (uVar23 - 1 | 0xffffff00) + 1;
                            }
                            uVar16 = uVar24 & 0x800000ff;
                            if ((int)uVar16 < 0) {
                              uVar16 = (uVar16 - 1 | 0xffffff00) + 1;
                            }
                            pvVar21 = (void *)((uVar23 * 0x100 + uVar16) * 0x20 +
                                              *(int *)(iVar15 + 0xa8));
                            if ((pvVar21 == (void *)0x0) ||
                               (iVar15 = *(int *)((int)pvVar21 + 0x10), (int)fVar28 < iVar15))
                            goto LAB_004de4aa;
                            if ((int)fVar28 < *(int *)((int)pvVar21 + 0x1c) + iVar15) {
                              puVar7 = FUN_00405f20(pvVar21,(int)fVar28 - iVar15);
                              if ((((puVar7[3] & 0x1f) == 0) && ((int)fVar28 < 1)) &&
                                 ((puVar7[3] & 0x40) == 0)) {
                                puVar7 = &DAT_0058426c;
                              }
                            }
                            else {
                              puVar7 = &DAT_0058426c;
                              if (0 < (int)fVar28) {
                                puVar7 = &DAT_00584270;
                              }
                            }
                          }
                          fVar8 = local_d8;
                          uVar16 = local_d4;
                          uVar27 = local_b0;
                          if (((puVar7[3] & 0x1f) != 0) && ((puVar7[3] & 0x1f) != 2)) {
                            if ((uVar24 == local_bc) &&
                               ((uVar29 == local_b0 &&
                                (local_10c = (int *)((uint)local_10c & 0xff), fVar28 == local_d8))))
                            {
                              local_10c = local_c0;
                            }
                            if (((uVar24 == local_ac) && (uVar29 == local_b0)) &&
                               (local_16c = (int *)((uint)local_16c & 0xff), fVar28 == local_d8)) {
                              local_16c = local_c0;
                            }
                            if (((uVar24 == local_bc) && (uVar29 == local_d4)) &&
                               (local_174 = (int *)((uint)local_174 & 0xff), fVar28 == local_d8)) {
                              local_174 = local_c0;
                            }
                            if (((uVar24 == local_ac) && (uVar29 == local_d4)) &&
                               (local_104 = (int *)((uint)local_104 & 0xff), fVar28 == local_d8)) {
                              local_104 = local_c0;
                            }
                            if ((((uVar24 == local_bc) && (uVar29 == local_b0)) &&
                                ((int)local_d8 < (int)fVar28)) &&
                               (local_118 = (int *)((uint)local_118 & 0xff),
                               (int)fVar28 < (int)local_b8)) {
                              local_118 = local_c0;
                            }
                            if (((uVar24 == local_ac) && (uVar29 == local_b0)) &&
                               (((int)local_d8 < (int)fVar28 &&
                                (local_120 = (int *)((uint)local_120 & 0xff),
                                (int)fVar28 < (int)local_b8)))) {
                              local_120 = local_c0;
                            }
                            if (((uVar24 == local_bc) && (uVar29 == local_d4)) &&
                               (((int)local_d8 < (int)fVar28 &&
                                (local_110 = (int *)((uint)local_110 & 0xff),
                                (int)fVar28 < (int)local_b8)))) {
                              local_110 = local_c0;
                            }
                            if ((((uVar24 == local_ac) && (uVar29 == local_d4)) &&
                                ((int)local_d8 < (int)fVar28)) &&
                               (local_114 = (int *)((uint)local_114 & 0xff),
                               (int)fVar28 < (int)local_b8)) {
                              local_114 = local_c0;
                            }
                            if ((((int)local_bc < (int)uVar24) && ((int)uVar24 < (int)local_ac)) &&
                               ((int)local_b0 < (int)uVar29)) {
                              if (((int)uVar29 < (int)local_d4) &&
                                 (local_98 = (int *)((uint)local_98 & 0xff), fVar28 == local_d8)) {
                                local_98 = local_c0;
                              }
                              if ((((int)local_b0 < (int)uVar29) && ((int)uVar29 < (int)local_d4))
                                 && (local_134 = (int *)((uint)local_134 & 0xff), fVar28 == local_b8
                                    )) {
                                local_134 = local_c0;
                              }
                            }
                            if (((uVar24 == local_bc) && ((int)local_b0 < (int)uVar29)) &&
                               (((int)uVar29 < (int)local_d4 &&
                                (local_168 = (int *)((uint)local_168 & 0xff), fVar28 == local_d8))))
                            {
                              local_168 = local_c0;
                            }
                            if (((uVar24 == local_ac) && ((int)local_b0 < (int)uVar29)) &&
                               (((int)uVar29 < (int)local_d4 &&
                                (local_178 = (int *)((uint)local_178 & 0xff), fVar28 == local_d8))))
                            {
                              local_178 = local_c0;
                            }
                            if ((((uVar29 == local_b0) && ((int)local_bc < (int)uVar24)) &&
                                ((int)uVar24 < (int)local_ac)) &&
                               (local_154 = (int *)((uint)local_154 & 0xff), fVar28 == local_d8)) {
                              local_154 = local_c0;
                            }
                            if (((uVar29 == local_d4) && ((int)local_bc < (int)uVar24)) &&
                               (((int)uVar24 < (int)local_ac &&
                                (local_164 = (int *)((uint)local_164 & 0xff), fVar28 == local_d8))))
                            {
                              local_164 = local_c0;
                            }
                            if (((uVar24 == local_bc) && ((int)local_b0 < (int)uVar29)) &&
                               (((int)uVar29 < (int)local_d4 &&
                                (local_140 = (int *)((uint)local_140 & 0xff), fVar28 == local_b8))))
                            {
                              local_140 = local_c0;
                            }
                            if ((((uVar24 == local_ac) && ((int)local_b0 < (int)uVar29)) &&
                                ((int)uVar29 < (int)local_d4)) &&
                               (local_144 = (int *)((uint)local_144 & 0xff), fVar28 == local_b8)) {
                              local_144 = local_c0;
                            }
                            if (((uVar29 == local_b0) && ((int)local_bc < (int)uVar24)) &&
                               (((int)uVar24 < (int)local_ac &&
                                (local_14c = (int *)((uint)local_14c & 0xff), fVar28 == local_b8))))
                            {
                              local_14c = local_c0;
                            }
                            if (((uVar29 == local_d4) && ((int)local_bc < (int)uVar24)) &&
                               (((int)uVar24 < (int)local_ac &&
                                (local_170 = (int *)((uint)local_170 & 0xff), fVar28 == local_d8))))
                            {
                              local_170 = local_c0;
                            }
                            if ((((uVar24 == local_bc) && ((int)local_b0 < (int)uVar29)) &&
                                ((int)uVar29 < (int)local_d4)) &&
                               (((int)local_d8 < (int)fVar28 &&
                                (local_e8 = (int *)((uint)local_e8 & 0xff),
                                (int)fVar28 < (int)local_b8)))) {
                              local_e8 = local_c0;
                            }
                            if (((uVar24 == local_ac) && ((int)local_b0 < (int)uVar29)) &&
                               (((int)uVar29 < (int)local_d4 &&
                                (((int)local_d8 < (int)fVar28 &&
                                 (local_f4 = (int *)((uint)local_f4 & 0xff),
                                 (int)fVar28 < (int)local_b8)))))) {
                              local_f4 = local_c0;
                            }
                            if ((((uVar29 == local_b0) && ((int)local_bc < (int)uVar24)) &&
                                ((int)uVar24 < (int)local_ac)) &&
                               (((int)local_d8 < (int)fVar28 &&
                                (local_108 = (int *)((uint)local_108 & 0xff),
                                (int)fVar28 < (int)local_b8)))) {
                              local_108 = local_c0;
                            }
                            if (((uVar29 == local_d4) && ((int)local_bc < (int)uVar24)) &&
                               (((int)uVar24 < (int)local_ac &&
                                (((int)local_d8 < (int)fVar28 &&
                                 (local_e4 = (int *)((uint)local_e4 & 0xff),
                                 (int)fVar28 < (int)local_b8)))))) {
                              local_e4 = local_c0;
                            }
                          }
                        }
                        fVar28 = (float)((int)fVar28 + 1);
                      } while ((int)fVar28 <= (int)local_b8);
                    }
                    uVar29 = uVar29 + 1;
                    uVar23 = local_ac;
                  } while ((int)uVar29 <= (int)uVar16);
                }
                uVar24 = uVar24 + 1;
              } while ((int)uVar24 <= (int)uVar23);
            }
            uVar33 = CONCAT44(local_cc,local_b4);
            uVar32 = CONCAT44(local_f0,local_c0);
            lVar2 = CONCAT44(local_fc,local_bc);
            uVar31 = CONCAT44(local_dc,local_ec);
            uVar23 = local_12c;
            iVar15 = local_17c;
            iVar18 = local_180;
            if ((int)local_13c <= local_17c) {
              do {
                uVar16 = uVar23;
                uVar27 = local_13c;
                local_130 = uVar23;
                if ((int)uVar23 <= iVar18) {
                  do {
                    local_cc = (uint)(uVar33 >> 0x20);
                    local_b4 = (uint)uVar33;
                    local_f0 = (int)(uVar32 >> 0x20);
                    local_c0 = (int *)uVar32;
                    local_fc = (uint)((ulonglong)lVar2 >> 0x20);
                    local_bc = (uint)lVar2;
                    local_dc = (int)(uVar31 >> 0x20);
                    local_ec = (uint)uVar31;
                    if ((((-1 < (int)uVar27) && (-1 < (int)uVar23)) && ((int)uVar27 < 0x200000)) &&
                       ((int)uVar23 < 0x200000)) {
                      local_130 = uVar23;
                      iVar15 = FUN_00406290(local_148,
                                            (int)(uVar27 + ((int)uVar27 >> 0x1f & 0x1fU)) >> 5,
                                            (int)(uVar23 + ((int)uVar23 >> 0x1f & 0x1fU)) >> 5);
                      uVar33 = CONCAT44(local_cc,local_b4);
                      uVar32 = CONCAT44(local_f0,local_c0);
                      lVar2 = CONCAT44(local_fc,local_bc);
                      uVar31 = CONCAT44(local_dc,local_ec);
                      if (iVar15 != 0) {
                        uVar16 = uVar23 & 0x8000001f;
                        if ((int)uVar16 < 0) {
                          uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
                        }
                        uVar24 = uVar27 & 0x8000001f;
                        if ((int)uVar24 < 0) {
                          uVar24 = (uVar24 - 1 | 0xffffffe0) + 1;
                        }
                        puVar26 = (undefined4 *)
                                  (*(int *)(iVar15 + 0xac) + (uVar16 * 0x20 + uVar24) * 8);
                        if (puVar26 != (undefined4 *)0x0) {
                          local_138 = (int *)*puVar26;
                          piVar12 = (int *)*local_138;
                          uVar27 = local_13c;
                          if (piVar12 != local_138) {
                            puVar26 = *(undefined4 **)((int)local_94 + 0x1468);
                            do {
                              local_cc = (uint)(uVar33 >> 0x20);
                              local_b4 = (uint)uVar33;
                              local_f0 = (int)(uVar32 >> 0x20);
                              local_c0 = (int *)uVar32;
                              local_fc = (uint)((ulonglong)lVar2 >> 0x20);
                              local_bc = (uint)lVar2;
                              local_dc = (int)(uVar31 >> 0x20);
                              local_ec = (uint)uVar31;
                              if (*(char *)((int)puVar26[1] + 0xd) == '\0') {
                                puVar13 = (undefined4 *)puVar26[1];
                                puVar17 = puVar26;
                                do {
                                  if ((uint)puVar13[4] < (uint)piVar12[2]) {
                                    puVar9 = (undefined4 *)puVar13[2];
                                  }
                                  else {
                                    puVar9 = (undefined4 *)*puVar13;
                                    puVar17 = puVar13;
                                  }
                                  puVar13 = puVar9;
                                } while (*(char *)((int)puVar9 + 0xd) == '\0');
                                if ((puVar17 == puVar26) || ((uint)piVar12[2] < (uint)puVar17[4]))
                                goto LAB_004dea80;
                                local_188 = puVar17;
                                ppuVar10 = &local_188;
                              }
                              else {
LAB_004dea80:
                                local_1c0 = puVar26;
                                ppuVar10 = &local_1c0;
                              }
                              if (*ppuVar10 == puVar26) {
                                piVar25 = (int *)piVar12[2];
                                local_24 = (float)piVar25[0xb];
                                uVar1 = *(undefined8 *)(piVar25 + 9);
                                uVar23 = piVar25[8] & 0x80000001;
                                bVar30 = uVar23 == 0;
                                if ((int)uVar23 < 0) {
                                  bVar30 = (uVar23 - 1 | 0xfffffffe) == 0xffffffff;
                                }
                                local_2c._0_4_ = (float)uVar1;
                                local_2c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                                if (bVar30) {
                                  local_d8 = local_2c._4_4_;
                                  local_2c._4_4_ = (float)local_2c;
                                }
                                else {
                                  local_d8 = (float)local_2c;
                                }
                                local_11c = piVar25[3];
                                local_1c8 = local_2c._4_4_ * 0.5 * 65536.0;
                                local_2c = uVar1;
                                uVar31 = FUN_0054a946();
                                local_d4 = (uint)(uVar31 >> 0x20);
                                local_128 = (uint)uVar31;
                                local_b8 = (float)(piVar25[2] - local_128);
                                local_b0 = (piVar25[3] - local_d4) -
                                           (uint)((uint)piVar25[2] < local_128);
                                local_1b0 = *(float *)((int)local_94 + 0x80) * 0.5 * 65536.0;
                                uVar32 = FUN_0054a946();
                                local_f0 = (int)(uVar32 >> 0x20);
                                local_c0 = (int *)uVar32;
                                lVar2 = uVar32 + CONCAT44(local_4c,local_50);
                                local_bc = (uint)lVar2;
                                local_fc = (uint)((ulonglong)lVar2 >> 0x20);
                                local_124 = local_24;
                                uVar23 = local_ec;
                                uVar33 = CONCAT44(local_cc,local_b4);
                                if (CONCAT44(local_b0,local_b8) <= lVar2) {
                                  local_cc = local_50 - (int)local_c0;
                                  iVar18 = (local_4c - local_f0) - (uint)(local_50 < local_c0);
                                  iVar15 = local_d4 + piVar25[3] +
                                           (uint)CARRY4(local_128,piVar25[2]);
                                  uVar33 = CONCAT44(local_cc,local_b4);
                                  if ((iVar18 <= iVar15) &&
                                     ((iVar18 < iVar15 ||
                                      (uVar33 = CONCAT44(local_cc,local_b4),
                                      local_cc < local_128 + piVar25[2])))) {
                                    local_1ac = local_d8 * 0.5 * 65536.0;
                                    uVar31 = FUN_0054a946();
                                    local_dc = (int)(uVar31 >> 0x20);
                                    local_ec = (uint)uVar31;
                                    local_18c = *(float *)((int)local_94 + 0x84) * 0.5 * 65536.0;
                                    uVar33 = FUN_0054a946();
                                    local_cc = (uint)(uVar33 >> 0x20);
                                    local_e0 = piVar25[4] - local_ec;
                                    lVar3 = uVar33 + CONCAT44(local_44,local_48);
                                    uVar23 = (uint)lVar3;
                                    lVar2 = CONCAT44(local_fc,local_bc);
                                    uVar32 = CONCAT44(local_f0,local_c0);
                                    if (CONCAT44((piVar25[5] - local_dc) -
                                                 (uint)((uint)piVar25[4] < local_ec),local_e0) <=
                                        lVar3) {
                                      iVar18 = local_dc + piVar25[5] +
                                               (uint)CARRY4(local_ec,piVar25[4]);
                                      local_b4 = local_48 - (uint)uVar33;
                                      iVar15 = (local_44 - local_cc) -
                                               (uint)(local_48 < (uint)uVar33);
                                      lVar2 = CONCAT44(local_fc,local_bc);
                                      uVar32 = CONCAT44(local_f0,local_c0);
                                      uVar33 = CONCAT44(local_cc,local_b4);
                                      if ((iVar15 <= iVar18) &&
                                         ((iVar15 < iVar18 ||
                                          (lVar2 = CONCAT44(local_fc,local_bc),
                                          uVar32 = CONCAT44(local_f0,local_c0),
                                          uVar33 = CONCAT44(local_cc,local_b4),
                                          local_b4 < local_ec + piVar25[4])))) {
                                        local_1d0 = *(float *)((int)local_94 + 0x88) * 0.5 * 65536.0
                                        ;
                                        local_ec = uVar23;
                                        uVar31 = FUN_0054a946();
                                        local_e0 = (uint)(uVar31 >> 0x20);
                                        local_b4 = (uint)uVar31;
                                        lVar2 = uVar31 + CONCAT44(local_3c,local_40);
                                        uVar16 = (uint)lVar2;
                                        iVar15 = (int)((ulonglong)lVar2 >> 0x20) -
                                                 (uint)(uVar16 < 0x10000);
                                        uVar23 = local_ec;
                                        lVar2 = CONCAT44(local_fc,local_bc);
                                        uVar32 = CONCAT44(local_f0,local_c0);
                                        uVar33 = CONCAT44(local_cc,local_b4);
                                        if ((piVar25[7] <= iVar15) &&
                                           ((piVar25[7] < iVar15 ||
                                            (lVar2 = CONCAT44(local_fc,local_bc),
                                            uVar32 = CONCAT44(local_f0,local_c0),
                                            uVar33 = CONCAT44(local_cc,local_b4),
                                            (uint)piVar25[6] <= uVar16 - 0x10000)))) {
                                          local_1d8 = local_124 * 65536.0;
                                          uVar31 = FUN_0054a946();
                                          uVar23 = (uint)uVar31 + piVar25[6];
                                          iVar18 = (int)(uVar31 >> 0x20) + piVar25[7] +
                                                   (uint)CARRY4((uint)uVar31,piVar25[6]);
                                          iVar15 = ((local_3c - local_e0) -
                                                   (uint)(local_40 < local_b4)) -
                                                   (uint)(local_40 - local_b4 < 0x10000);
                                          lVar2 = CONCAT44(local_fc,local_bc);
                                          uVar32 = CONCAT44(local_f0,local_c0);
                                          uVar33 = CONCAT44(local_cc,local_b4);
                                          if ((iVar15 <= iVar18) &&
                                             ((iVar15 < iVar18 ||
                                              (lVar2 = CONCAT44(local_fc,local_bc),
                                              uVar32 = CONCAT44(local_f0,local_c0),
                                              uVar33 = CONCAT44(local_cc,local_b4),
                                              (local_40 - local_b4) - 0x10000 < uVar23)))) {
                                            local_8e = '\x01';
                                            lVar2 = CONCAT44(local_fc,local_bc);
                                            uVar32 = CONCAT44(local_f0,local_c0);
                                            uVar33 = CONCAT44(local_cc,local_b4);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                local_ec = uVar23;
                                local_b4 = (uint)uVar33;
                                local_f0 = (int)(uVar32 >> 0x20);
                                local_c0 = (int *)uVar32;
                                uVar31 = CONCAT44(local_dc,local_ec);
                                local_fc = (uint)((ulonglong)lVar2 >> 0x20);
                                local_bc = (uint)lVar2;
                                if (((((3.0 < (float)piVar25[0xb] || (float)piVar25[0xb] == 3.0) ||
                                      ((char)local_134 != '\0')) || ((char)local_140 != '\0')) ||
                                    ((((char)local_144 != '\0' || ((char)local_14c != '\0')) ||
                                     ((char)local_170 != '\0')))) &&
                                   (((iVar15 = *piVar25, iVar15 != 1 && (iVar15 != 2)) &&
                                    ((iVar15 != 8 && ((iVar15 != 7 && (iVar15 != 6)))))))) {
                                  local_cc = 0;
                                  piVar19 = (int *)((int)local_94 + 0x1478);
                                  piVar22 = piVar12 + 3;
                                  do {
                                    if (*piVar22 != *piVar19) {
                                      iVar15 = local_fc - (local_bc < 0x10000);
                                      uVar23 = local_b4;
                                      uVar33 = uVar31;
                                      if (((int)local_b0 <= iVar15) &&
                                         (((int)local_b0 < iVar15 ||
                                          ((uint)local_b8 <= local_bc - 0x10000)))) {
                                        iVar18 = ((local_4c - local_f0) -
                                                 (uint)(local_50 < local_c0)) -
                                                 (uint)(local_50 - (int)local_c0 < 0x10000);
                                        local_b4 = local_128 + piVar25[2];
                                        iVar15 = local_d4 + piVar25[3] +
                                                 (uint)CARRY4(local_128,piVar25[2]);
                                        uVar23 = local_b4;
                                        uVar33 = CONCAT44(local_dc,local_ec);
                                        if ((iVar18 <= iVar15) &&
                                           ((iVar18 < iVar15 ||
                                            (uVar33 = uVar31,
                                            (local_50 - (int)local_c0) - 0x10000 < local_b4)))) {
                                          local_1e0 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0054a946();
                                          local_cc = (uint)(uVar31 >> 0x20);
                                          local_b4 = (uint)uVar31;
                                          local_1cc = *(float *)((int)local_94 + 0x84) * 0.5 *
                                                      65536.0;
                                          uVar33 = FUN_0054a946();
                                          local_dc = (int)(uVar33 >> 0x20);
                                          local_ec = (uint)uVar33;
                                          local_e0 = piVar25[4] - local_b4;
                                          lVar3 = uVar33 + CONCAT44(local_44,local_48);
                                          uVar23 = (uint)lVar3;
                                          lVar2 = CONCAT44(local_fc,local_bc);
                                          uVar32 = CONCAT44(local_f0,local_c0);
                                          if (CONCAT44((piVar25[5] - local_cc) -
                                                       (uint)((uint)piVar25[4] < local_b4),local_e0)
                                              <= lVar3) {
                                            uVar16 = local_b4 + piVar25[4];
                                            iVar18 = local_cc + piVar25[5] +
                                                     (uint)CARRY4(local_b4,piVar25[4]);
                                            local_b4 = local_48 - local_ec;
                                            iVar15 = (local_44 - local_dc) -
                                                     (uint)(local_48 < local_ec);
                                            uVar23 = local_b4;
                                            lVar2 = CONCAT44(local_fc,local_bc);
                                            uVar32 = CONCAT44(local_f0,local_c0);
                                            if ((iVar15 <= iVar18) &&
                                               ((iVar15 < iVar18 ||
                                                (lVar2 = CONCAT44(local_fc,local_bc),
                                                uVar32 = CONCAT44(local_f0,local_c0),
                                                local_b4 < uVar16)))) {
                                              local_184 = *(float *)((int)local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              uVar31 = FUN_0054a946();
                                              local_e0 = (uint)(uVar31 >> 0x20);
                                              local_b4 = (uint)uVar31;
                                              local_1e8 = uVar31 + CONCAT44(local_3c,local_40);
                                              uVar16 = FUN_004ce380(&local_1e8,(uint *)(piVar25 + 6)
                                                                   );
                                              uVar32 = CONCAT44(local_f0,local_c0);
                                              lVar2 = CONCAT44(local_fc,local_bc);
                                              uVar33 = CONCAT44(local_dc,local_ec);
                                              uVar23 = local_b4;
                                              if ((char)uVar16 != '\0') {
                                                local_1b8 = local_124 * 65536.0;
                                                uVar31 = FUN_0054a946();
                                                local_1f0 = (uint)uVar31 + piVar25[6];
                                                local_1ec = (int)(uVar31 >> 0x20) + piVar25[7] +
                                                            (uint)CARRY4((uint)uVar31,piVar25[6]);
                                                local_1f8 = local_40 - local_b4;
                                                local_1f4 = (local_3c - local_e0) -
                                                            (uint)(local_40 < local_b4);
                                                uVar16 = FUN_004ce350(&local_1f8,&local_1f0);
                                                uVar32 = CONCAT44(local_f0,local_c0);
                                                lVar2 = CONCAT44(local_fc,local_bc);
                                                uVar33 = CONCAT44(local_dc,local_ec);
                                                local_150 = local_150 & 0xff;
                                                uVar23 = local_b4;
                                                if ((char)uVar16 != '\0') {
                                                  local_150 = 1;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      local_b4 = uVar23;
                                      local_f0 = (int)(uVar32 >> 0x20);
                                      local_c0 = (int *)uVar32;
                                      local_fc = (uint)((ulonglong)lVar2 >> 0x20);
                                      local_bc = (uint)lVar2;
                                      local_dc = (int)(uVar33 >> 0x20);
                                      local_ec = (uint)uVar33;
                                      uVar23 = local_b4;
                                      if (CONCAT44(local_b0,local_b8) <= lVar2 + 0x10000) {
                                        iVar18 = ((local_4c - local_f0) -
                                                 (uint)(local_50 < local_c0)) +
                                                 (uint)(0xfffeffff < local_50 - (int)local_c0);
                                        local_b4 = local_128 + piVar25[2];
                                        iVar15 = local_d4 + piVar25[3] +
                                                 (uint)CARRY4(local_128,piVar25[2]);
                                        uVar23 = local_b4;
                                        if ((iVar18 <= iVar15) &&
                                           ((iVar18 < iVar15 ||
                                            ((local_50 - (int)local_c0) + 0x10000 < local_b4)))) {
                                          local_194 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0054a946();
                                          local_cc = (uint)(uVar31 >> 0x20);
                                          local_b4 = (uint)uVar31;
                                          local_1bc = *(float *)((int)local_94 + 0x84) * 0.5 *
                                                      65536.0;
                                          uVar33 = FUN_0054a946();
                                          local_dc = (int)(uVar33 >> 0x20);
                                          local_ec = (uint)uVar33;
                                          local_e0 = piVar25[4] - local_b4;
                                          lVar3 = uVar33 + CONCAT44(local_44,local_48);
                                          uVar23 = (uint)lVar3;
                                          lVar2 = CONCAT44(local_fc,local_bc);
                                          uVar32 = CONCAT44(local_f0,local_c0);
                                          if (CONCAT44((piVar25[5] - local_cc) -
                                                       (uint)((uint)piVar25[4] < local_b4),local_e0)
                                              <= lVar3) {
                                            uVar16 = local_b4 + piVar25[4];
                                            iVar18 = local_cc + piVar25[5] +
                                                     (uint)CARRY4(local_b4,piVar25[4]);
                                            local_b4 = local_48 - local_ec;
                                            iVar15 = (local_44 - local_dc) -
                                                     (uint)(local_48 < local_ec);
                                            uVar23 = local_b4;
                                            lVar2 = CONCAT44(local_fc,local_bc);
                                            uVar32 = CONCAT44(local_f0,local_c0);
                                            if ((iVar15 <= iVar18) &&
                                               ((iVar15 < iVar18 ||
                                                (lVar2 = CONCAT44(local_fc,local_bc),
                                                uVar32 = CONCAT44(local_f0,local_c0),
                                                local_b4 < uVar16)))) {
                                              local_19c = *(float *)((int)local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              uVar31 = FUN_0054a946();
                                              local_e0 = (uint)(uVar31 >> 0x20);
                                              local_b4 = (uint)uVar31;
                                              local_208 = uVar31 + CONCAT44(local_3c,local_40);
                                              uVar16 = FUN_004ce380(&local_208,(uint *)(piVar25 + 6)
                                                                   );
                                              uVar32 = CONCAT44(local_f0,local_c0);
                                              lVar2 = CONCAT44(local_fc,local_bc);
                                              uVar33 = CONCAT44(local_dc,local_ec);
                                              uVar23 = local_b4;
                                              if ((char)uVar16 != '\0') {
                                                local_1dc = local_124 * 65536.0;
                                                uVar31 = FUN_0054a946();
                                                local_218 = (uint)uVar31 + piVar25[6];
                                                local_214 = (int)(uVar31 >> 0x20) + piVar25[7] +
                                                            (uint)CARRY4((uint)uVar31,piVar25[6]);
                                                local_228 = local_40 - local_b4;
                                                local_224 = (local_3c - local_e0) -
                                                            (uint)(local_40 < local_b4);
                                                uVar16 = FUN_004ce350(&local_228,&local_218);
                                                uVar32 = CONCAT44(local_f0,local_c0);
                                                lVar2 = CONCAT44(local_fc,local_bc);
                                                uVar33 = CONCAT44(local_dc,local_ec);
                                                local_158 = local_158 & 0xff;
                                                uVar23 = local_b4;
                                                if ((char)uVar16 != '\0') {
                                                  local_158 = 1;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      local_b4 = uVar23;
                                      local_f0 = (int)(uVar32 >> 0x20);
                                      local_c0 = (int *)uVar32;
                                      local_fc = (uint)((ulonglong)lVar2 >> 0x20);
                                      local_bc = (uint)lVar2;
                                      local_dc = (int)(uVar33 >> 0x20);
                                      local_ec = (uint)uVar33;
                                      if (CONCAT44(local_b0,local_b8) <= lVar2) {
                                        local_b4 = local_50 - (int)local_c0;
                                        iVar18 = (local_4c - local_f0) - (uint)(local_50 < local_c0)
                                        ;
                                        iVar15 = local_d4 + piVar25[3] +
                                                 (uint)CARRY4(local_128,piVar25[2]);
                                        if ((iVar18 <= iVar15) &&
                                           ((iVar18 < iVar15 || (local_b4 < local_128 + piVar25[2]))
                                           )) {
                                          local_1a4 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0054a946();
                                          local_dc = (int)(uVar31 >> 0x20);
                                          local_cc = (uint)uVar31;
                                          local_1c4 = *(float *)((int)local_94 + 0x84) * 0.5 *
                                                      65536.0;
                                          uVar31 = FUN_0054a946();
                                          local_ec = (uint)(uVar31 >> 0x20);
                                          local_e0 = (uint)uVar31;
                                          lVar2 = uVar31 + CONCAT44(local_44,local_48);
                                          uVar23 = (uint)lVar2;
                                          iVar18 = (int)((ulonglong)lVar2 >> 0x20) -
                                                   (uint)(uVar23 < 0x10000);
                                          local_b4 = piVar25[4] - local_cc;
                                          iVar15 = (piVar25[5] - local_dc) -
                                                   (uint)((uint)piVar25[4] < local_cc);
                                          uVar33 = CONCAT44(local_dc,local_ec);
                                          lVar2 = CONCAT44(local_fc,local_bc);
                                          uVar32 = CONCAT44(local_f0,local_c0);
                                          if ((iVar15 <= iVar18) &&
                                             ((iVar15 < iVar18 ||
                                              (uVar33 = CONCAT44(local_dc,local_ec),
                                              lVar2 = CONCAT44(local_fc,local_bc),
                                              uVar32 = CONCAT44(local_f0,local_c0),
                                              local_b4 <= uVar23 - 0x10000)))) {
                                            iVar15 = ((local_44 - local_ec) -
                                                     (uint)(local_48 < local_e0)) -
                                                     (uint)(local_48 - local_e0 < 0x10000);
                                            puVar6 = (uint *)(piVar25 + 4);
                                            local_dc = local_dc + piVar25[5] +
                                                       (uint)CARRY4(local_cc,*puVar6);
                                            piVar25 = (int *)piVar12[2];
                                            uVar33 = CONCAT44(local_dc,local_ec);
                                            lVar2 = CONCAT44(local_fc,local_bc);
                                            uVar32 = CONCAT44(local_f0,local_c0);
                                            if ((iVar15 <= local_dc) &&
                                               ((iVar15 < local_dc ||
                                                (uVar33 = CONCAT44(local_dc,local_ec),
                                                lVar2 = CONCAT44(local_fc,local_bc),
                                                uVar32 = CONCAT44(local_f0,local_c0),
                                                (local_48 - local_e0) - 0x10000 < local_cc + *puVar6
                                                )))) {
                                              local_1d4 = *(float *)((int)local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              uVar31 = FUN_0054a946();
                                              local_b4 = (uint)(uVar31 >> 0x20);
                                              local_100 = (uint)uVar31;
                                              local_238 = uVar31 + CONCAT44(local_3c,local_40);
                                              uVar23 = FUN_004ce380(&local_238,(uint *)(piVar25 + 6)
                                                                   );
                                              uVar32 = CONCAT44(local_f0,local_c0);
                                              lVar2 = CONCAT44(local_fc,local_bc);
                                              uVar33 = CONCAT44(local_dc,local_ec);
                                              if ((char)uVar23 != '\0') {
                                                local_1b4 = local_124 * 65536.0;
                                                uVar31 = FUN_0054a946();
                                                local_230 = (uint)uVar31 + piVar25[6];
                                                local_22c = (int)(uVar31 >> 0x20) + piVar25[7] +
                                                            (uint)CARRY4((uint)uVar31,piVar25[6]);
                                                local_200 = local_40 - local_100;
                                                local_1fc = (local_3c - local_b4) -
                                                            (uint)(local_40 < local_100);
                                                uVar23 = FUN_004ce350(&local_200,&local_230);
                                                uVar32 = CONCAT44(local_f0,local_c0);
                                                lVar2 = CONCAT44(local_fc,local_bc);
                                                uVar33 = CONCAT44(local_dc,local_ec);
                                                local_160 = local_160 & 0xff;
                                                if ((char)uVar23 != '\0') {
                                                  local_160 = 1;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      local_f0 = (int)(uVar32 >> 0x20);
                                      local_c0 = (int *)uVar32;
                                      local_fc = (uint)((ulonglong)lVar2 >> 0x20);
                                      local_bc = (uint)lVar2;
                                      local_dc = (int)(uVar33 >> 0x20);
                                      local_ec = (uint)uVar33;
                                      uVar31 = uVar33;
                                      uVar33 = CONCAT44(local_cc,local_b4);
                                      if (CONCAT44(local_b0,local_b8) <= lVar2) {
                                        iVar18 = (local_4c - local_f0) - (uint)(local_50 < local_c0)
                                        ;
                                        local_d4 = local_d4 + local_11c +
                                                   (uint)CARRY4(local_128,piVar25[2]);
                                        iVar15 = piVar12[2];
                                        uVar33 = CONCAT44(local_cc,local_b4);
                                        if ((iVar18 <= (int)local_d4) &&
                                           ((iVar18 < (int)local_d4 ||
                                            (uVar33 = CONCAT44(local_cc,local_b4),
                                            local_50 - (int)local_c0 < local_128 + piVar25[2])))) {
                                          local_190 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0054a946();
                                          local_f0 = (int)(uVar31 >> 0x20);
                                          local_fc = (uint)uVar31;
                                          local_198 = *(float *)((int)local_94 + 0x84) * 0.5 *
                                                      65536.0;
                                          uVar34 = FUN_0054a946();
                                          local_cc = (uint)(uVar34 >> 0x20);
                                          local_100 = (uint)uVar34;
                                          local_11c = *(uint *)(iVar15 + 0x10) - local_fc;
                                          uVar31 = CONCAT44(local_dc,local_ec);
                                          lVar2 = CONCAT44(local_fc,local_bc);
                                          uVar32 = CONCAT44(local_f0,local_c0);
                                          uVar33 = CONCAT44(local_cc,local_b4);
                                          if (CONCAT44((*(int *)(iVar15 + 0x14) - local_f0) -
                                                       (uint)(*(uint *)(iVar15 + 0x10) < local_fc),
                                                       local_11c) <=
                                              (longlong)
                                              (uVar34 + CONCAT44(local_44,local_48) + 0x10000)) {
                                            iVar11 = ((local_44 - local_cc) -
                                                     (uint)(local_48 < local_100)) +
                                                     (uint)(0xfffeffff < local_48 - local_100);
                                            local_f0 = local_f0 + *(int *)(iVar15 + 0x14) +
                                                       (uint)CARRY4(local_fc,*(uint *)(iVar15 + 0x10
                                                                                      ));
                                            iVar18 = piVar12[2];
                                            uVar31 = CONCAT44(local_dc,local_ec);
                                            lVar2 = CONCAT44(local_fc,local_bc);
                                            uVar32 = CONCAT44(local_f0,local_c0);
                                            uVar33 = CONCAT44(local_cc,local_b4);
                                            if ((iVar11 <= local_f0) &&
                                               ((iVar11 < local_f0 ||
                                                (uVar31 = CONCAT44(local_dc,local_ec),
                                                lVar2 = CONCAT44(local_fc,local_bc),
                                                uVar32 = CONCAT44(local_f0,local_c0),
                                                uVar33 = CONCAT44(local_cc,local_b4),
                                                (local_48 - local_100) + 0x10000 <
                                                local_fc + *(uint *)(iVar15 + 0x10))))) {
                                              local_1a0 = *(float *)((int)local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              uVar31 = FUN_0054a946();
                                              local_100 = (uint)(uVar31 >> 0x20);
                                              local_11c = (uint)uVar31;
                                              local_220 = uVar31 + CONCAT44(local_3c,local_40);
                                              puVar6 = (uint *)(iVar18 + 0x18);
                                              uVar23 = FUN_004ce380(&local_220,puVar6);
                                              uVar33 = CONCAT44(local_cc,local_b4);
                                              uVar32 = CONCAT44(local_f0,local_c0);
                                              uVar31 = CONCAT44(local_dc,local_ec);
                                              lVar2 = CONCAT44(local_fc,local_bc);
                                              if ((char)uVar23 != '\0') {
                                                local_1a8 = local_124 * 65536.0;
                                                uVar31 = FUN_0054a946();
                                                local_210 = (uint)uVar31 + *puVar6;
                                                local_20c = (int)(uVar31 >> 0x20) +
                                                            *(int *)(iVar18 + 0x1c) +
                                                            (uint)CARRY4((uint)uVar31,*puVar6);
                                                local_58 = (double)CONCAT44((local_3c - local_100) -
                                                                            (uint)(local_40 <
                                                                                  local_11c),
                                                                            local_40 - local_11c);
                                                uVar23 = FUN_004ce350(&local_58,&local_210);
                                                uVar33 = CONCAT44(local_cc,local_b4);
                                                uVar32 = CONCAT44(local_f0,local_c0);
                                                uVar31 = CONCAT44(local_dc,local_ec);
                                                lVar2 = CONCAT44(local_fc,local_bc);
                                                local_15c = local_15c & 0xff;
                                                if ((char)uVar23 != '\0') {
                                                  local_15c = 1;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      break;
                                    }
                                    local_cc = local_cc + 1;
                                    uVar33 = CONCAT44(local_cc,local_b4);
                                    piVar22 = piVar22 + 1;
                                    piVar19 = piVar19 + 1;
                                  } while ((int)local_cc < 3);
                                }
                              }
                              piVar12 = (int *)*piVar12;
                              uVar23 = local_130;
                              uVar27 = local_13c;
                              iVar18 = local_180;
                            } while (piVar12 != local_138);
                          }
                        }
                      }
                    }
                    uVar23 = uVar23 + 1;
                    uVar16 = local_12c;
                    iVar15 = local_17c;
                    local_130 = uVar23;
                  } while ((int)uVar23 <= iVar18);
                }
                local_13c = uVar27 + 1;
                uVar23 = uVar16;
              } while ((int)local_13c <= iVar15);
            }
            pvVar21 = local_94;
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            cVar4 = (char)local_98;
            local_cd = '\0';
            uVar23 = local_9c;
            if (((char)local_e8 == '\0') && ((char)local_150 == '\0')) {
              if ((cVar4 != '\0') ||
                 ((((((char)local_168 != '\0' || ((char)local_108 != '\0')) ||
                    ((char)local_e4 != '\0')) ||
                   (((char)local_118 != '\0' || ((char)local_110 != '\0')))) || (local_8d != 0)))) {
                puVar26 = (undefined4 *)((int)local_a8 - 1);
                piVar12 = FUN_004dd0f0(local_94,puVar26,local_a0,local_9c);
                if (piVar12 == (int *)0x0) {
                  piVar12 = (int *)FUN_00405450((int *)&local_2c,local_f8);
                  pvVar21 = local_94;
                  uVar23 = local_9c;
                  uVar16 = (int)puVar26 - *piVar12 >> 0x1f;
                  iVar15 = ((int)puVar26 - *piVar12 ^ uVar16) - uVar16;
                  uVar16 = (int)(local_a0 - piVar12[1]) >> 0x1f;
                  iVar18 = (local_a0 - piVar12[1] ^ uVar16) - uVar16;
                  uVar16 = (int)(local_9c - piVar12[2]) >> 0x1f;
                  if (iVar18 < iVar15) {
                    iVar15 = iVar15 * 10 + iVar18 * 4;
                  }
                  else {
                    iVar15 = iVar15 * 4 + iVar18 * 10;
                  }
                  local_1c = (iVar15 + ((local_9c - piVar12[2] ^ uVar16) - uVar16) * 10) * 2;
                  local_20 = *local_c8 + 10;
                  if ((char)local_98 == '\0') {
                    local_20 = *local_c8 + 0x14;
                  }
                  local_18 = local_20 + local_1c;
                  local_10 = local_a0;
                  local_14 = local_a8;
                  local_c = local_9c;
                  FUN_004dd1a0(local_94,(undefined4 *)((int)local_a8 - 1),local_a0,local_9c,
                               &local_20);
                  local_cd = '\x01';
                }
                else {
                  bVar30 = FUN_004dcff0(pvVar21,puVar26,local_a0,local_9c);
                  uVar23 = local_9c;
                  if (bVar30) {
                    uVar16 = *local_c8 + 10;
                    if ((char)local_98 == '\0') {
                      uVar16 = *local_c8 + 0x14;
                    }
                    if ((int)uVar16 < *piVar12) {
                      local_18 = uVar16 + piVar12[1];
                      local_14 = local_a8;
                      local_10 = local_a0;
                      local_c = local_9c;
                      local_20 = uVar16;
                      local_1c = piVar12[1];
                      FUN_004dd1a0(pvVar21,puVar26,local_a0,local_9c,&local_20);
                      local_cd = '\x01';
                    }
                  }
                }
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
                cVar4 = (char)local_98;
                goto LAB_004df9b8;
              }
              cVar20 = '\0';
            }
            else {
LAB_004df9b8:
              cVar20 = (char)local_e4;
            }
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            local_c1 = '\0';
            cVar14 = (char)local_f4;
            uVar16 = local_a0;
            if (((cVar14 == '\0') && ((char)local_158 == '\0')) &&
               ((((cVar4 != '\0' ||
                  (((local_8e != '\0' || ((char)local_178 != '\0')) || ((char)local_108 != '\0'))))
                 || (((cVar20 != '\0' || ((char)local_120 != '\0')) || ((char)local_114 != '\0'))))
                || (local_8d != 0)))) {
              puVar26 = (undefined4 *)((int)local_a8 + 1);
              piVar12 = FUN_004dd0f0(pvVar21,puVar26,local_a0,uVar23);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_00405450((int *)&local_2c,local_f8);
                pvVar21 = local_94;
                uVar16 = local_a0;
                uVar23 = (int)puVar26 - *piVar12 >> 0x1f;
                iVar15 = ((int)puVar26 - *piVar12 ^ uVar23) - uVar23;
                uVar23 = (int)(local_a0 - piVar12[1]) >> 0x1f;
                iVar18 = (local_a0 - piVar12[1] ^ uVar23) - uVar23;
                uVar23 = (int)(local_9c - piVar12[2]) >> 0x1f;
                if (iVar18 < iVar15) {
                  iVar15 = iVar15 * 10 + iVar18 * 4;
                }
                else {
                  iVar15 = iVar15 * 4 + iVar18 * 10;
                }
                local_1c = (iVar15 + ((local_9c - piVar12[2] ^ uVar23) - uVar23) * 10) * 2;
                local_20 = *local_c8 + 10;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x14;
                }
                local_18 = local_20 + local_1c;
                local_10 = local_a0;
                local_c = local_9c;
                local_14 = local_a8;
                FUN_004dd1a0(local_94,(undefined4 *)((int)local_a8 + 1),local_a0,local_9c,&local_20)
                ;
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
                cVar14 = (char)local_f4;
                local_c1 = '\x01';
              }
              else {
                bVar30 = FUN_004dcff0(pvVar21,puVar26,local_a0,local_9c);
                uVar16 = local_a0;
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
                cVar14 = (char)local_f4;
                if (bVar30) {
                  uVar23 = *local_c8 + 10;
                  if ((char)local_98 == '\0') {
                    uVar23 = *local_c8 + 0x14;
                  }
                  if ((int)uVar23 < *piVar12) {
                    local_18 = uVar23 + piVar12[1];
                    local_14 = local_a8;
                    local_10 = local_a0;
                    local_c = local_9c;
                    local_20 = uVar23;
                    local_1c = piVar12[1];
                    FUN_004dd1a0(pvVar21,puVar26,local_a0,local_9c,&local_20);
                    uVar33 = CONCAT44(local_cc,local_b4);
                    uVar32 = CONCAT44(local_f0,local_c0);
                    lVar2 = CONCAT44(local_fc,local_bc);
                    uVar31 = CONCAT44(local_dc,local_ec);
                    cVar14 = (char)local_f4;
                    local_c1 = '\x01';
                  }
                }
              }
            }
            cVar20 = local_c1;
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            cVar4 = (char)local_98;
            bVar30 = false;
            if (((char)local_108 == '\0') && ((char)local_160 == '\0')) {
              if (((cVar4 != '\0') ||
                  (((local_8e != '\0' || ((char)local_154 != '\0')) || ((char)local_e8 != '\0'))))
                 || (((cVar14 != '\0' || ((char)local_118 != '\0')) ||
                     (((char)local_120 != '\0' || (cVar14 = '\0', local_8d != 0)))))) {
                iVar15 = uVar16 - 1;
                piVar12 = FUN_004dd0f0(pvVar21,local_a8,iVar15,local_9c);
                if (piVar12 == (int *)0x0) {
                  piVar12 = (int *)FUN_00405450((int *)((int)&local_60 + 4),local_f8);
                  uVar23 = local_9c;
                  local_2c = CONCAT44(iVar15 - piVar12[1],(int)local_a8 - *piVar12);
                  local_24 = (float)(local_9c - piVar12[2]);
                  local_1c = FUN_004dd090((uint *)&local_2c);
                  pvVar21 = local_94;
                  local_20 = *local_c8 + 10;
                  if ((char)local_98 == '\0') {
                    local_20 = *local_c8 + 0x1e;
                  }
                  local_18 = local_1c + local_20;
                  local_c = uVar23;
                  local_14 = local_a8;
                  local_10 = local_a0;
                  FUN_004dd1a0(local_94,local_a8,iVar15,uVar23,&local_20);
                  bVar30 = true;
                }
                else {
                  bVar5 = FUN_004dcff0(local_94,local_a8,iVar15,local_9c);
                  pvVar21 = local_94;
                  if (bVar5) {
                    uVar23 = *local_c8 + 10;
                    if ((char)local_98 == '\0') {
                      uVar23 = *local_c8 + 0x14;
                    }
                    if ((int)uVar23 < *piVar12) {
                      local_18 = uVar23 + piVar12[1];
                      local_10 = local_a0;
                      local_14 = local_a8;
                      local_c = local_9c;
                      local_20 = uVar23;
                      local_1c = piVar12[1];
                      FUN_004dd1a0(local_94,local_a8,iVar15,local_9c,&local_20);
                      bVar30 = true;
                    }
                  }
                }
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
                cVar4 = (char)local_98;
                goto LAB_004dfd43;
              }
            }
            else {
LAB_004dfd43:
              cVar14 = (char)local_e8;
            }
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            local_a1 = '\0';
            puVar26 = local_a8;
            if ((((char)local_e4 == '\0') && ((char)local_15c == '\0')) &&
               ((((cVar4 != '\0' ||
                  ((((local_8e != '\0' || ((char)local_164 != '\0')) || (cVar14 != '\0')) ||
                   (((char)local_f4 != '\0' || ((char)local_110 != '\0')))))) ||
                 ((char)local_114 != '\0')) || (local_8d != 0)))) {
              iVar15 = local_a0 + 1;
              piVar12 = FUN_004dd0f0(pvVar21,local_a8,iVar15,local_9c);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_00405450((int *)((int)&local_60 + 4),local_f8);
                uVar23 = local_9c;
                local_2c = CONCAT44(iVar15 - piVar12[1],(int)local_a8 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_004dd090((uint *)&local_2c);
                local_20 = *local_c8 + 10;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x14;
                }
                local_18 = local_1c + local_20;
                local_c = uVar23;
LAB_004dfe4d:
                puVar26 = local_a8;
                local_14 = local_a8;
                local_10 = local_a0;
                FUN_004dd1a0(local_94,local_a8,iVar15,local_c,&local_20);
                local_a1 = '\x01';
              }
              else {
                bVar5 = FUN_004dcff0(local_94,local_a8,iVar15,local_9c);
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
                puVar26 = local_a8;
                if (!bVar5) goto LAB_004dfee2;
                uVar23 = *local_c8 + 10;
                if ((char)local_98 == '\0') {
                  uVar23 = *local_c8 + 0x14;
                }
                if ((int)uVar23 < *piVar12) {
                  local_18 = uVar23 + piVar12[1];
                  local_c = local_9c;
                  local_20 = uVar23;
                  local_1c = piVar12[1];
                  goto LAB_004dfe4d;
                }
              }
              uVar33 = CONCAT44(local_cc,local_b4);
              uVar32 = CONCAT44(local_f0,local_c0);
              lVar2 = CONCAT44(local_fc,local_bc);
              uVar31 = CONCAT44(local_dc,local_ec);
            }
LAB_004dfee2:
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            cVar4 = (char)local_98;
            if (((((char)local_118 == '\0') && (local_cd != '\0')) && (bVar30)) &&
               ((((cVar4 != '\0' || (local_8e != '\0')) || ((char)local_10c != '\0')) ||
                (local_8d != 0)))) {
              puVar26 = (undefined4 *)((int)puVar26 - 1);
              iVar15 = local_a0 - 1;
              local_138 = FUN_004dd0f0(local_94,puVar26,iVar15,local_9c);
              if (local_138 == (int *)0x0) {
                piVar12 = (int *)FUN_00405450((int *)((int)&local_60 + 4),local_f8);
                local_2c = CONCAT44(iVar15 - piVar12[1],(int)puVar26 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_004dd090((uint *)&local_2c);
                local_20 = *local_c8 + 0xe;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x18;
                }
                local_18 = local_1c + local_20;
                local_14 = local_a8;
                puVar6 = &local_20;
                local_10 = local_a0;
                local_c = local_9c;
LAB_004e0021:
                FUN_004dd1a0(local_94,puVar26,iVar15,local_9c,puVar6);
              }
              else {
                bVar5 = FUN_004dcff0(local_94,puVar26,iVar15,local_9c);
                if (bVar5) {
                  iVar18 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    iVar18 = *local_c8 + 0x18;
                  }
                  if (iVar18 < *local_138) {
                    puVar6 = FUN_004dab60(&local_20,iVar18,local_138[1],iVar18 + local_138[1],
                                          &local_74);
                    goto LAB_004e0021;
                  }
                }
              }
              uVar33 = CONCAT44(local_cc,local_b4);
              uVar32 = CONCAT44(local_f0,local_c0);
              lVar2 = CONCAT44(local_fc,local_bc);
              uVar31 = CONCAT44(local_dc,local_ec);
              cVar4 = (char)local_98;
            }
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            pvVar21 = local_94;
            if (((((char)local_120 == '\0') && (cVar20 != '\0')) && (bVar30)) &&
               (((cVar4 != '\0' || (local_8e != '\0')) ||
                (((char)local_16c != '\0' || (local_8d != 0)))))) {
              iVar15 = local_a0 - 1;
              puVar26 = (undefined4 *)((int)local_a8 + 1);
              piVar12 = FUN_004dd0f0(local_94,puVar26,iVar15,local_9c);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_00405450((int *)((int)&local_60 + 4),local_f8);
                uVar23 = local_9c;
                local_2c = CONCAT44(iVar15 - piVar12[1],(int)puVar26 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_004dd090((uint *)&local_2c);
                pvVar21 = local_94;
                local_20 = *local_c8 + 0xe;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x18;
                }
                local_18 = local_1c + local_20;
                local_14 = local_a8;
                local_10 = local_a0;
                local_c = uVar23;
                FUN_004dd1a0(local_94,puVar26,iVar15,uVar23,&local_20);
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
              }
              else {
                bVar30 = FUN_004dcff0(local_94,puVar26,iVar15,local_9c);
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
                pvVar21 = local_94;
                if (bVar30) {
                  iVar18 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    iVar18 = *local_c8 + 0x18;
                  }
                  if (iVar18 < *piVar12) {
                    puVar13 = FUN_004dab60(&local_20,iVar18,piVar12[1],iVar18 + piVar12[1],&local_74
                                          );
                    pvVar21 = local_94;
                    FUN_004dd1a0(local_94,puVar26,iVar15,local_9c,puVar13);
                    uVar33 = CONCAT44(local_cc,local_b4);
                    uVar32 = CONCAT44(local_f0,local_c0);
                    lVar2 = CONCAT44(local_fc,local_bc);
                    uVar31 = CONCAT44(local_dc,local_ec);
                  }
                }
              }
            }
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            this_00 = local_94;
            if (((((char)local_110 == '\0') && (local_cd != '\0')) && (local_a1 != '\0')) &&
               ((((char)local_98 != '\0' || (local_8e != '\0')) ||
                (((char)local_174 != '\0' || (local_8d != 0)))))) {
              iVar15 = local_a0 + 1;
              puVar26 = (undefined4 *)((int)local_a8 - 1);
              piVar12 = FUN_004dd0f0(pvVar21,puVar26,iVar15,local_9c);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_00405450((int *)((int)&local_60 + 4),local_f8);
                uVar23 = local_9c;
                local_2c = CONCAT44(iVar15 - piVar12[1],(int)puVar26 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_004dd090((uint *)&local_2c);
                local_20 = *local_c8 + 0xe;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x18;
                }
                local_18 = local_1c + local_20;
                local_14 = local_a8;
                local_10 = local_a0;
                puVar6 = &local_20;
                local_c = uVar23;
LAB_004e0288:
                this_00 = local_94;
                FUN_004dd1a0(local_94,puVar26,iVar15,uVar23,puVar6);
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
              }
              else {
                bVar30 = FUN_004dcff0(local_94,puVar26,iVar15,local_9c);
                uVar33 = CONCAT44(local_cc,local_b4);
                uVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar31 = CONCAT44(local_dc,local_ec);
                this_00 = local_94;
                if (bVar30) {
                  iVar18 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    iVar18 = *local_c8 + 0x18;
                  }
                  if (iVar18 < *piVar12) {
                    puVar6 = FUN_004dab60(&local_20,iVar18,piVar12[1],iVar18 + piVar12[1],&local_74)
                    ;
                    uVar23 = local_9c;
                    goto LAB_004e0288;
                  }
                }
              }
            }
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            pvVar21 = local_94;
            if ((((char)local_114 == '\0') && (local_c1 != '\0')) && (local_a1 != '\0')) {
              if (((((char)local_98 != '\0') || (local_8e != '\0')) || ((char)local_104 != '\0')) ||
                 (local_8d != 0)) {
                iVar15 = local_a0 + 1;
                puVar26 = (undefined4 *)((int)local_a8 + 1);
                piVar12 = FUN_004dd0f0(this_00,puVar26,iVar15,local_9c);
                if (piVar12 == (int *)0x0) {
                  piVar12 = (int *)FUN_00405450((int *)&local_74,local_f8);
                  uVar23 = local_9c;
                  local_2c = CONCAT44(iVar15 - piVar12[1],(int)puVar26 - *piVar12);
                  local_24 = (float)(local_9c - piVar12[2]);
                  local_1c = FUN_004dd090((uint *)&local_2c);
                  pvVar21 = local_94;
                  local_20 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    local_20 = *local_c8 + 0x18;
                  }
                  local_18 = local_1c + local_20;
                  local_14 = local_a8;
                  local_10 = local_a0;
                  local_c = uVar23;
                  FUN_004dd1a0(local_94,puVar26,iVar15,uVar23,&local_20);
                  uVar31 = CONCAT44(local_dc,local_ec);
                  lVar2 = CONCAT44(local_fc,local_bc);
                  uVar32 = CONCAT44(local_f0,local_c0);
                  uVar33 = CONCAT44(local_cc,local_b4);
                }
                else {
                  bVar30 = FUN_004dcff0(local_94,puVar26,iVar15,local_9c);
                  pvVar21 = local_94;
                  uVar31 = CONCAT44(local_dc,local_ec);
                  lVar2 = CONCAT44(local_fc,local_bc);
                  uVar32 = CONCAT44(local_f0,local_c0);
                  uVar33 = CONCAT44(local_cc,local_b4);
                  if (bVar30) {
                    iVar18 = *local_c8 + 0xe;
                    if ((char)local_98 == '\0') {
                      iVar18 = *local_c8 + 0x18;
                    }
                    uVar31 = CONCAT44(local_dc,local_ec);
                    lVar2 = CONCAT44(local_fc,local_bc);
                    uVar32 = CONCAT44(local_f0,local_c0);
                    uVar33 = CONCAT44(local_cc,local_b4);
                    if (iVar18 < *piVar12) {
                      puVar13 = FUN_004dab60(&local_20,iVar18,piVar12[1],iVar18 + piVar12[1],
                                             &local_74);
                      pvVar21 = local_94;
                      FUN_004dd1a0(local_94,puVar26,iVar15,local_9c,puVar13);
                      uVar31 = CONCAT44(local_dc,local_ec);
                      lVar2 = CONCAT44(local_fc,local_bc);
                      uVar32 = CONCAT44(local_f0,local_c0);
                      uVar33 = CONCAT44(local_cc,local_b4);
                    }
                  }
                }
                goto LAB_004e046a;
              }
            }
            else {
LAB_004e046a:
              uVar23 = local_9c;
              if (((char)local_98 != '\0') || (local_8e != '\0')) goto LAB_004e0486;
            }
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            iVar15 = local_9c - 1;
            piVar12 = FUN_004dd0f0(pvVar21,local_a8,local_a0,iVar15);
            if (piVar12 == (int *)0x0) {
              piVar12 = (int *)FUN_00405450((int *)&local_74,(uint *)((int)pvVar21 + 0x1440));
              local_2c = CONCAT44(local_a0 - piVar12[1],(int)local_a8 - *piVar12);
              local_24 = (float)(iVar15 - piVar12[2]);
              uVar27 = FUN_004dd090((uint *)&local_2c);
              uVar16 = *local_c8;
              uVar24 = uVar16;
              uVar29 = uVar27;
            }
            else {
              bVar30 = FUN_004dcff0(pvVar21,local_a8,local_a0,iVar15);
              uVar33 = CONCAT44(local_cc,local_b4);
              uVar32 = CONCAT44(local_f0,local_c0);
              lVar2 = CONCAT44(local_fc,local_bc);
              uVar31 = CONCAT44(local_dc,local_ec);
              uVar23 = local_9c;
              if (!bVar30) goto LAB_004e0486;
              uVar16 = piVar12[1];
              uVar27 = *local_c8;
              uVar24 = uVar27;
              uVar29 = uVar16;
              if (*piVar12 <= (int)uVar27) goto LAB_004e0486;
            }
            local_1c = uVar29;
            local_20 = uVar24;
            uVar23 = local_9c;
            local_18 = uVar27 + uVar16;
            local_10 = local_a0;
            local_14 = local_a8;
            local_c = local_9c;
            FUN_004dd1a0(pvVar21,local_a8,local_a0,iVar15,&local_20);
            uVar33 = CONCAT44(local_cc,local_b4);
            uVar32 = CONCAT44(local_f0,local_c0);
            lVar2 = CONCAT44(local_fc,local_bc);
            uVar31 = CONCAT44(local_dc,local_ec);
LAB_004e0486:
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            if (((char)local_134 == '\0') &&
               ((((char)local_e8 != '\0' || ((char)local_f4 != '\0')) ||
                (((char)local_108 != '\0' || (((char)local_e4 != '\0' || (local_8d != 0)))))))) {
              iVar15 = uVar23 + 1;
              piVar12 = FUN_004dd0f0(pvVar21,local_a8,local_a0,iVar15);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_00405450((int *)&local_74,(uint *)((int)pvVar21 + 0x1440));
                puVar26 = local_a8;
                local_2c = CONCAT44(local_a0 - piVar12[1],(int)local_a8 - *piVar12);
                local_24 = (float)(iVar15 - piVar12[2]);
                local_1c = FUN_004dd090((uint *)&local_2c);
                local_20 = *local_c8;
                if ((char)local_98 == '\0') {
                  local_20 = local_20 + 0x28;
                }
                local_18 = local_1c + local_20;
                local_c = local_9c;
                local_10 = local_a0;
                local_14 = puVar26;
                FUN_004dd1a0(pvVar21,puVar26,local_a0,iVar15,&local_20);
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
              bVar30 = FUN_004dcff0(pvVar21,local_a8,local_a0,iVar15);
              uVar31 = CONCAT44(local_dc,local_ec);
              lVar2 = CONCAT44(local_fc,local_bc);
              uVar32 = CONCAT44(local_f0,local_c0);
              uVar33 = CONCAT44(local_cc,local_b4);
              if (bVar30) {
                uVar23 = *local_c8;
                if ((char)local_98 == '\0') {
                  uVar23 = uVar23 + 0x28;
                }
                uVar31 = CONCAT44(local_dc,local_ec);
                lVar2 = CONCAT44(local_fc,local_bc);
                uVar32 = CONCAT44(local_f0,local_c0);
                uVar33 = CONCAT44(local_cc,local_b4);
                if ((int)uVar23 < *piVar12) {
                  local_18 = uVar23 + piVar12[1];
                  local_c = local_9c;
                  local_14 = local_a8;
                  local_10 = local_a0;
                  local_20 = uVar23;
                  local_1c = piVar12[1];
                  FUN_004dd1a0(pvVar21,local_a8,local_a0,iVar15,&local_20);
                  uVar33 = CONCAT44(local_cc,local_b4);
                  uVar32 = CONCAT44(local_f0,local_c0);
                  lVar2 = CONCAT44(local_fc,local_bc);
                  uVar31 = CONCAT44(local_dc,local_ec);
                }
              }
            }
            local_cc = (uint)(uVar33 >> 0x20);
            local_b4 = (uint)uVar33;
            local_f0 = (int)(uVar32 >> 0x20);
            local_c0 = (int *)uVar32;
            local_fc = (uint)((ulonglong)lVar2 >> 0x20);
            local_bc = (uint)lVar2;
            local_dc = (int)(uVar31 >> 0x20);
            local_ec = (uint)uVar31;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          iVar15 = iVar15 + 4;
        } while (iVar15 < 0xc);
      }
    }
    else {
      FUN_00405330((int)param_1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00530600 @ 00530600  kind=gamemisc  attributed-by=logic:caller-vote  size=115 */

void __thiscall FUN_00530600(void *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)this;
  puVar4 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if (((int)param_2[1] < (int)puVar2[5]) ||
         (((int)param_2[1] <= (int)puVar2[5] && (*param_2 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (puVar4 != puVar1) {
    if (((int)puVar4[5] <= (int)param_2[1]) &&
       (((int)puVar4[5] < (int)param_2[1] || ((uint)puVar4[4] <= *param_2)))) {
      *param_1 = (int)puVar4;
      return;
    }
  }
  *param_1 = (int)puVar1;
  return;
}


/* __alldiv @ 0054aa30  kind=gamemisc  attributed-by=logic:caller-vote  size=170 */

/* Library Function - Single Match
    __alldiv
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


