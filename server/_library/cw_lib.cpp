// cw_lib (_library) -- server. 54 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "cw_lib.h"

/* std_vector_int_at @ 004013f0  kind=lib  attributed-by=ledger  size=38 */

undefined4 __thiscall FUN_004013f0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2)) {
    return *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4);
  }
  return 0;
}


/* get_field_0x10 @ 004061d0  kind=lib  attributed-by=ledger  size=4 */

undefined4 __fastcall FUN_004061d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* game_inventoryAccumulateCount @ 00427000  kind=lib  attributed-by=ledger  size=717 */

void __thiscall FUN_00427000(void *this,char *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_248;
  int local_244;
  int *local_240;
  int local_23c;
  undefined1 local_238 [280];
  char local_120;
  char local_11f;
  short local_110;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (param_2 == -1) {
    param_2 = FUN_004282f0(param_1);
  }
  if (*param_1 == '\0') goto LAB_004272ba;
  if ((*(int *)((int)this + 4) - *(int *)this) / 0xc <= param_2) {
    FUN_0041f770(this,param_2 + 1);
  }
  FUN_00413710(&local_120,param_1);
  iVar6 = 1;
  if (((local_120 == '\f') || (local_120 == '\r')) || (local_120 == '\x15')) {
LAB_004270b0:
    iVar6 = (int)local_110;
    local_110 = 1;
  }
  else if (local_120 == '\v') {
    if (local_11f != '\x0e') goto LAB_004270b0;
  }
  else if (((local_120 == '\0') || (local_120 == '\x19')) ||
          ((local_120 == '\x14' || ((local_120 == '\x18' || (local_120 == '\x17'))))))
  goto LAB_004270b0;
  if (*param_1 == '\f') {
    cVar2 = param_1[0xd];
    if (cVar2 == '\n') {
LAB_004270dc:
      *(int *)((int)this + 0x128) = *(int *)((int)this + 0x128) + iVar6;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (cVar2 == '\v') {
      *(int *)((int)this + 0x128) = *(int *)((int)this + 0x128) + iVar6 * 10000;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (cVar2 == '\f') {
      iVar6 = iVar6 * 100;
      goto LAB_004270dc;
    }
  }
  if (*param_1 == '\r') {
    *(int *)((int)this + 300) = *(int *)((int)this + 300) + iVar6;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar7 = -1;
  iVar5 = param_2 * 0xc;
  piVar3 = (int *)(*(int *)this + iVar5);
  local_244 = 0;
  if (0 < (piVar3[1] - *piVar3) / 0x11c) {
    piVar1 = (int *)*piVar3;
    local_248 = piVar1 + 1;
    local_240 = piVar1;
    do {
      if ((*local_240 == 0) && (iVar7 < 0)) {
        iVar7 = local_244;
      }
      cVar2 = FUN_004282d0(param_1);
      if ((cVar2 != '\0') && (uVar4 = FUN_004078f0(local_248,&local_120), (char)uVar4 != '\0')) {
        piVar1[local_244 * 0x47] = piVar1[local_244 * 0x47] + iVar6;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      local_244 = local_244 + 1;
      local_240 = local_240 + 0x47;
      local_248 = local_248 + 0x47;
    } while (local_244 < (piVar3[1] - *piVar3) / 0x11c);
    if (-1 < iVar7) {
      FUN_00402a70(piVar1 + iVar7 * 0x47 + 1,&local_120);
      *(int *)(iVar7 * 0x11c + *(int *)(iVar5 + *(int *)this)) = iVar6;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  FUN_00406f70(&local_23c);
  FUN_00402a70(local_238,&local_120);
  local_23c = iVar6;
  FUN_00428630((void *)(*(int *)this + iVar5),&local_23c);
LAB_004272ba:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* std_list_push_back (role: conn edge) @ 00428590  kind=lib  attributed-by=ledger  size=67 */

void __thiscall FUN_00428590(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_004f3ba0(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* std_vector_free @ 0042f440  kind=lib  attributed-by=ledger  size=40 */

void __fastcall FUN_0042f440(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


/* lib_fn_4c6770 @ 004c6770  kind=lib  attributed-by=ledger  size=39 */

int FUN_004c6770(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004ce620(param_1,param_2);
  if ((void *)(iVar1 + 8) != (void *)0x0) {
    FUN_004c8350((void *)(iVar1 + 8),param_3);
  }
  return iVar1;
}


/* lib_fn_4cde40 @ 004cde40  kind=lib  attributed-by=ledger  size=25 */

int * __thiscall FUN_004cde40(void *this,uint param_1)

{
  *(uint *)this = param_1 << 0x10;
  *(uint *)((int)this + 4) = ((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10;
  return this;
}


/* lib_fn_4d2500 @ 004d2500  kind=lib  attributed-by=ledger  size=762 */

void __thiscall
FUN_004d2500(void *this,int param_1,int param_2,int param_3,int *param_4,int param_5,char param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float10 fVar5;
  double dVar6;
  int local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  int local_28;
  int local_24;
  void *local_20;
  undefined2 local_1c;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 local_10;
  undefined2 local_c;
  undefined1 local_5;
  
  local_28 = 0;
  local_20 = this;
  if (0 < *param_4) {
    do {
      local_24 = 0;
      iVar3 = local_28;
      if (0 < param_4[1]) {
        do {
          local_40 = param_4[2] + -1;
          if (-1 < local_40) {
            fVar4 = (float)(param_1 + iVar3);
            uVar1 = param_2 + local_24;
            local_c = 0;
            local_5 = 0;
            iVar2 = param_3 + local_40;
            do {
              local_2c = local_c;
              local_2a = local_5;
              local_29 = 0xc0;
              FUN_0041ff00(this,fVar4,uVar1,iVar2,(undefined1 *)&local_2c,param_5);
              if (param_6 != '\0') {
                if ((local_28 == 0) &&
                   (dVar6 = (double)(int)uVar1 * 0.1 + (double)((int)fVar4 * 0xd),
                   fVar5 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),
                                        (double)iVar2 * 0.2), 0.5 < (float)fVar5)) {
                  local_10 = 0;
                  local_30 = 0;
                  local_2e = 0xc000;
                  FUN_0041ff00(local_20,(float)((int)fVar4 + -1),uVar1,iVar2,(undefined1 *)&local_30
                               ,param_5);
                }
                if ((local_24 == 0) &&
                   (dVar6 = (double)(int)fVar4 * 0.1 + (double)(int)(uVar1 * 0xd),
                   fVar5 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),
                                        (double)iVar2 * 0.2), 0.5 < (float)fVar5)) {
                  local_14 = 0;
                  local_34 = 0;
                  local_32 = 0xc000;
                  FUN_0041ff00(local_20,fVar4,uVar1 - 1,iVar2,(undefined1 *)&local_34,param_5);
                }
                if ((local_28 == *param_4 + -1) &&
                   (dVar6 = (double)(int)uVar1 * 0.1 + (double)((int)fVar4 * 0xd),
                   fVar5 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),
                                        (double)iVar2 * 0.2), 0.5 < (float)fVar5)) {
                  local_18 = 0;
                  local_38 = 0;
                  local_36 = 0xc000;
                  FUN_0041ff00(local_20,(float)((int)fVar4 + 1),uVar1,iVar2,(undefined1 *)&local_38,
                               param_5);
                }
                if ((local_24 == param_4[1] + -1) &&
                   (dVar6 = (double)(int)fVar4 * 0.1 + (double)(int)(uVar1 * 0xd),
                   fVar5 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),
                                        (double)iVar2 * 0.2), 0.5 < (float)fVar5)) {
                  local_1c = 0;
                  local_3c = 0;
                  local_3a = 0xc000;
                  FUN_0041ff00(local_20,fVar4,uVar1 + 1,iVar2,(undefined1 *)&local_3c,param_5);
                }
              }
              local_40 = local_40 + -1;
              iVar2 = iVar2 + -1;
              this = local_20;
              iVar3 = local_28;
            } while (-1 < local_40);
          }
          local_24 = local_24 + 1;
        } while (local_24 < param_4[1]);
      }
      local_28 = iVar3 + 1;
    } while (local_28 < *param_4);
  }
  return;
}


/* lib_fn_4d44c0 @ 004d44c0  kind=lib  attributed-by=ledger  size=842 */

void __thiscall
FUN_004d44c0(void *this,int param_1,int param_2,int param_3,float param_4,byte *param_5,int param_6,
            char param_7,char param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  void *this_00;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  byte *pbVar18;
  undefined2 local_54;
  undefined1 local_52;
  undefined2 local_50;
  undefined1 local_4e;
  byte local_4d;
  float local_4c;
  byte *local_48;
  float local_44;
  void *local_40;
  int local_3c;
  float local_38 [6];
  undefined8 local_20;
  float local_18;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  fVar4 = (float)param_1;
  fVar6 = (float)param_2;
  local_48 = param_5;
  local_3c = param_6;
  if (param_7 != '\0') {
    fVar4 = fVar4 + 0.5;
    fVar6 = fVar6 + 0.5;
  }
  fVar15 = (float)param_1 + param_4 + 1.0;
  fVar13 = (float)(int)(((float)param_1 - param_4) - 1.0);
  local_4c = fVar13;
  local_40 = this;
  if ((float)(int)fVar13 <= fVar15) {
    fVar16 = (float)param_2 + param_4 + 1.0;
    uVar11 = (uint)(((float)param_2 - param_4) - 1.0);
    do {
      if ((float)(int)uVar11 <= fVar16) {
        fVar5 = (float)(int)fVar13;
        fVar17 = param_4 * param_4;
        uVar12 = uVar11;
        local_4c = fVar13;
        local_44 = fVar17;
        do {
          if (((float)(int)uVar12 - fVar6) * ((float)(int)uVar12 - fVar6) +
              (fVar5 - fVar4) * (fVar5 - fVar4) <= fVar17) {
            this_00 = (void *)FUN_00406100(this,(uint)fVar13,uVar12,param_6);
            if (this_00 == (void *)0x0) {
              puVar8 = &DAT_00584248;
            }
            else {
              iVar9 = *(int *)((int)this_00 + 0x10);
              if (param_3 < iVar9) {
                puVar8 = &DAT_00584248;
              }
              else if (param_3 < *(int *)((int)this_00 + 0x1c) + iVar9) {
                puVar8 = FUN_00405f20(this_00,param_3 - iVar9);
                if ((((puVar8[3] & 0x1f) == 0) && (param_3 < 1)) && ((puVar8[3] & 0x40) == 0)) {
                  puVar8 = &DAT_00584240;
                }
              }
              else {
                puVar8 = &DAT_00584240;
                if (0 < param_3) {
                  puVar8 = &DAT_00584244;
                }
              }
            }
            this = local_40;
            param_6 = local_3c;
            fVar17 = local_44;
            if ((puVar8[3] & 0x40) == 0) {
              pbVar18 = local_48;
              if (param_8 != '\0') {
                bVar1 = *local_48;
                bVar2 = local_48[1];
                bVar3 = local_48[2];
                local_38[3] = 50.0;
                local_38[4] = 120.0;
                local_38[5] = 60.0;
                local_14 = CONCAT44(120.0 - (float)bVar2,50.0 - (float)bVar1);
                local_c = 60.0 - (float)bVar3;
                fVar14 = FUN_00523b90(local_40,local_4c,uVar12,param_3,local_3c);
                fVar13 = (float)fVar14;
                local_20 = local_14;
                uVar7 = local_20;
                local_20._0_4_ = (float)local_14;
                local_20._4_4_ = (float)((ulonglong)local_14 >> 0x20);
                local_18 = local_c;
                local_38[0] = (float)local_20 * fVar13 + (float)bVar1;
                local_38[1] = local_20._4_4_ * fVar13 + (float)bVar2;
                local_38[2] = local_c * fVar13 + (float)bVar3;
                iVar9 = 0;
                do {
                  iVar10 = iVar9 + 1;
                  *(char *)((int)&local_54 + iVar9) = (char)(int)local_38[iVar9];
                  iVar9 = iVar10;
                } while (iVar10 < 3);
                local_4d = local_48[3];
                local_50 = local_54;
                local_4e = local_52;
                fVar13 = local_4c;
                pbVar18 = (byte *)&local_50;
                local_20 = uVar7;
              }
              FUN_0041ff00(local_40,fVar13,uVar12,param_3,pbVar18,local_3c);
              this = local_40;
              param_6 = local_3c;
              fVar17 = local_44;
            }
          }
          uVar12 = uVar12 + 1;
        } while ((float)(int)uVar12 <= fVar16);
      }
      fVar13 = (float)((int)fVar13 + 1);
      local_4c = fVar13;
    } while ((float)(int)fVar13 <= fVar15);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* lib_fn_4d4820 @ 004d4820  kind=lib  attributed-by=ledger  size=1013 */

void __thiscall
FUN_004d4820(void *this,int param_1,int param_2,int param_3,float param_4,byte *param_5,int param_6,
            char param_7,char param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  void *this_00;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  byte *pbVar21;
  undefined2 local_4c;
  undefined1 local_4a;
  byte local_49;
  undefined2 local_48;
  undefined1 local_46;
  float local_44;
  void *local_40;
  int local_3c;
  float local_38 [6];
  undefined8 local_20;
  float local_18;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  fVar4 = (float)param_1;
  fVar5 = (float)param_2;
  fVar6 = (float)param_3;
  local_3c = param_6;
  if (param_7 != '\0') {
    fVar4 = fVar4 + 0.5;
    fVar5 = fVar5 + 0.5;
    fVar6 = fVar6 + 0.5;
  }
  fVar17 = (float)param_1 + param_4 + 1.0;
  fVar15 = (float)(int)(((float)param_1 - param_4) - 1.0);
  local_40 = this;
  if ((float)(int)fVar15 <= fVar17) {
    fVar18 = (float)param_2 + param_4 + 1.0;
    uVar11 = (uint)(((float)param_2 - param_4) - 1.0);
    local_44 = fVar18;
    do {
      if ((float)(int)uVar11 <= fVar18) {
        fVar19 = (float)param_3 + param_4 + 1.0;
        iVar12 = (int)(((float)param_3 - param_4) - 1.0);
        uVar14 = uVar11;
        fVar20 = local_44;
        do {
          if ((float)iVar12 <= fVar19) {
            iVar13 = iVar12;
            do {
              if (((float)iVar13 - fVar6) * ((float)iVar13 - fVar6) +
                  ((float)(int)uVar14 - fVar5) * ((float)(int)uVar14 - fVar5) +
                  ((float)(int)fVar15 - fVar4) * ((float)(int)fVar15 - fVar4) <= param_4 * param_4)
              {
                this_00 = (void *)FUN_00406100(this,(uint)fVar15,uVar14,param_6);
                if (this_00 == (void *)0x0) {
                  puVar8 = &DAT_00584248;
                }
                else {
                  iVar9 = *(int *)((int)this_00 + 0x10);
                  if (iVar13 < iVar9) {
                    puVar8 = &DAT_00584248;
                  }
                  else if (iVar13 < *(int *)((int)this_00 + 0x1c) + iVar9) {
                    puVar8 = FUN_00405f20(this_00,iVar13 - iVar9);
                    if ((((puVar8[3] & 0x1f) == 0) && (iVar13 < 1)) && ((puVar8[3] & 0x40) == 0)) {
                      puVar8 = &DAT_00584240;
                    }
                  }
                  else {
                    puVar8 = &DAT_00584240;
                    if (0 < iVar13) {
                      puVar8 = &DAT_00584244;
                    }
                  }
                }
                this = local_40;
                param_6 = local_3c;
                if ((puVar8[3] & 0x40) == 0) {
                  pbVar21 = param_5;
                  if (param_8 != '\0') {
                    bVar1 = *param_5;
                    bVar2 = param_5[1];
                    bVar3 = param_5[2];
                    local_38[3] = 50.0;
                    local_38[4] = 120.0;
                    local_38[5] = 60.0;
                    local_14 = CONCAT44(120.0 - (float)bVar2,50.0 - (float)bVar1);
                    local_c = 60.0 - (float)bVar3;
                    fVar16 = FUN_00523b90(local_40,fVar15,uVar14,iVar13,local_3c);
                    fVar18 = (float)fVar16;
                    local_20 = local_14;
                    uVar7 = local_20;
                    local_20._0_4_ = (float)local_14;
                    local_20._4_4_ = (float)((ulonglong)local_14 >> 0x20);
                    local_18 = local_c;
                    local_38[0] = (float)local_20 * fVar18 + (float)bVar1;
                    local_38[1] = local_20._4_4_ * fVar18 + (float)bVar2;
                    local_38[2] = local_c * fVar18 + (float)bVar3;
                    iVar9 = 0;
                    do {
                      iVar10 = iVar9 + 1;
                      *(char *)((int)&local_48 + iVar9) = (char)(int)local_38[iVar9];
                      iVar9 = iVar10;
                    } while (iVar10 < 3);
                    local_49 = param_5[3];
                    local_4c = local_48;
                    local_4a = local_46;
                    pbVar21 = (byte *)&local_4c;
                    local_20 = uVar7;
                  }
                  FUN_0041ff00(local_40,fVar15,uVar14,iVar13,pbVar21,local_3c);
                  this = local_40;
                  param_6 = local_3c;
                }
              }
              iVar13 = iVar13 + 1;
              fVar20 = local_44;
            } while ((float)iVar13 <= fVar19);
          }
          uVar14 = uVar14 + 1;
          fVar18 = local_44;
        } while ((float)(int)uVar14 <= fVar20);
      }
      fVar15 = (float)((int)fVar15 + 1);
    } while ((float)(int)fVar15 <= fVar17);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* std_vector_push_back (with EH) @ 004d6670  kind=lib  attributed-by=ledger  size=180 */

void ** __thiscall FUN_004d6670(void *this,void **param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void *this_00;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554a42;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ppvVar1 = *(void ***)((int)this + 4);
  ppvVar2 = ExceptionList;
  if ((param_1 < ppvVar1) && (ppvVar2 = *(void ***)this, ppvVar2 <= param_1)) {
    iVar3 = (int)param_1 - (int)ppvVar2;
    ppvVar2 = (void **)(iVar3 * 0x5397829d);
    if (ppvVar1 == *(void ***)((int)this + 8)) {
      ppvVar2 = (void **)FUN_004ce8e0(this,1);
    }
    this_00 = *(void **)((int)this + 4);
    param_1 = (void **)((iVar3 / 0x188) * 0x188 + *(int *)this);
    local_8 = 0;
  }
  else {
    if (ppvVar1 == *(void ***)((int)this + 8)) {
      ppvVar2 = (void **)FUN_004ce8e0(this,1);
    }
    this_00 = *(void **)((int)this + 4);
    local_8 = 1;
  }
  if (this_00 != (void *)0x0) {
    ppvVar2 = FUN_004c8420(this_00,param_1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x188;
  ExceptionList = local_10;
  return ppvVar2;
}


/* lib_fn_4d78e0 @ 004d78e0  kind=lib  attributed-by=ledger  size=125 */

void __thiscall FUN_004d78e0(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    puVar1 = (undefined4 *)((int)this + (param_1 * 0x400 + 0x10002f + param_2) * 4);
    pvVar2 = (void *)*puVar1;
    if (pvVar2 != (void *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000c0));
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000d8));
      *puVar1 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000d8));
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000c0));
      operator_delete(pvVar2);
    }
  }
  return;
}


/* lib_fn_4d9010 @ 004d9010  kind=lib  attributed-by=ledger  size=235 */

float10 __thiscall FUN_004d9010(void *param_1,float param_2,float param_3,int param_4)

{
  float10 fVar1;
  float fVar2;
  double dVar3;
  undefined4 local_8;
  
  dVar3 = (double)(int)param_2 * 0.008 + (double)*(int *)((int)param_1 + 0x8001f4);
  fVar1 = FUN_004d5d30(SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),
                       (double)(int)param_3 * 0.008 + (double)*(int *)((int)param_1 + 0x8001f8));
  fVar2 = (float)fVar1 * 1.2;
  local_8 = 0.0;
  if (0.0 <= fVar2) {
    if (fVar2 <= 1.0) {
      if (0.0 <= fVar2) {
        local_8 = fVar2;
      }
    }
    else {
      local_8 = 1.0;
    }
  }
  fVar1 = FUN_004fc100(param_1,param_2,(uint)param_3,param_4);
  param_3 = (float)fVar1 * 0.2 * (float)fVar1 + 0.02 + local_8;
  if (1.0 < param_3) {
    param_3 = 1.0;
  }
  return (float10)param_3;
}


/* lib_fn_4e19f0 @ 004e19f0  kind=lib  attributed-by=ledger  size=232 */

void __cdecl FUN_004e19f0(int *param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint local_c [2];
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_004e1a87:
      if (1 < iVar2) {
        FUN_004e15f0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_004e16f0((int)param_1,(int)param_2,param_4);
        }
        FUN_004e1ae0(param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_004e1a87;
    }
    puVar3 = (undefined4 *)FUN_004e1b40(local_c,param_1,param_2,param_4);
    piVar4 = (int *)*puVar3;
    piVar1 = (int *)puVar3[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)piVar4 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)piVar1 & 0xfffffffcU)) {
      FUN_004e19f0(param_1,piVar4,param_3,param_4);
      piVar4 = param_2;
      param_1 = piVar1;
    }
    else {
      FUN_004e19f0(piVar1,param_2,param_3,param_4);
    }
    iVar2 = (int)piVar4 - (int)param_1;
    param_2 = piVar4;
  } while( true );
}


/* lib_fn_4e20d0 @ 004e20d0  kind=lib  attributed-by=ledger  size=52 */

undefined4 * __thiscall FUN_004e20d0(void *this,undefined4 *param_1,undefined4 param_2)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_2;
  return this;
}


/* lib_fn_4e25e0 @ 004e25e0  kind=lib  attributed-by=ledger  size=189 */

void __thiscall FUN_004e25e0(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554fc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x20000000) {
      puVar3 = operator_new(param_1 * 8);
      if (puVar3 != (undefined4 *)0x0) goto LAB_004e2640;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004e2640:
  local_8 = 0;
  FUN_004e1e50(*(undefined4 **)this,*(undefined4 **)((int)this + 4),puVar3);
  pvVar1 = *(void **)this;
  iVar2 = *(int *)((int)this + 4);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  *(undefined4 **)((int)this + 8) = puVar3 + param_1 * 2;
  *(undefined4 **)this = puVar3;
  *(undefined4 **)((int)this + 4) = puVar3 + (iVar2 - (int)pvVar1 >> 3) * 2;
  ExceptionList = local_10;
  return;
}


/* lib_fn_4e2840 @ 004e2840  kind=lib  attributed-by=ledger  size=134 */

float * __cdecl FUN_004e2840(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  if (0.0 <= fVar1) {
    if (255.0 < fVar1) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar2 < 0.0) {
    param_1[1] = 0.0;
  }
  if (255.0 < param_1[1]) {
    param_1[1] = 255.0;
  }
  if (fVar3 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  return param_1;
}


/* std_vector_push_back_int @ 004f2be0  kind=lib  attributed-by=ledger  size=101 */

void __thiscall FUN_004f2be0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_00426eb0(this,1);
    }
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 **)((int)this + 4) =
           *(undefined4 *)(*(int *)this + ((int)param_1 - (int)puVar2 >> 2) * 4);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_00426eb0(this,1);
    }
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 **)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return;
}


/* std_vector_push_back (32B elem) @ 004f2c50  kind=lib  attributed-by=ledger  size=117 */

void __thiscall FUN_004f2c50(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004e2730(this,1);
    }
    param_1 = (undefined4 *)(((int)param_1 - (int)puVar2 & 0xffffffe0U) + *(int *)this);
  }
  else if (puVar1 == *(undefined4 **)((int)this + 8)) {
    FUN_004e2730(this,1);
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    puVar1[4] = param_1[4];
    puVar1[5] = param_1[5];
    puVar1[6] = param_1[6];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x20;
  return;
}


/* lib_fn_4f2cd0 @ 004f2cd0  kind=lib  attributed-by=ledger  size=498 */

undefined4 * __cdecl FUN_004f2cd0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_00406ef0(param_1 + 0x12);
  param_1[0x5e] = 0xffffffff;
  param_1[0x5f] = 0xffffffff;
  param_1[0x60] = 0xffffffff;
  param_1[0x61] = 0;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  param_1[6] = param_2[4];
  param_1[7] = param_2[5];
  param_1[8] = param_3;
  iVar1 = rand();
  switch(iVar1 % 7) {
  case 0:
    *param_1 = 0x18;
    param_1[9] = 0x40000000;
    param_1[10] = 0x40000000;
    param_1[0xb] = 0x40000000;
    return param_1;
  case 1:
    *param_1 = 0x19;
    iVar1 = rand();
    fVar2 = (((float)iVar1 * 0.5) / 32767.0 + 1.0) * 1.5;
    param_1[9] = fVar2;
    param_1[10] = fVar2;
    param_1[0xb] = fVar2;
    return param_1;
  case 2:
    *param_1 = 0x1a;
    iVar1 = rand();
    fVar3 = ((float)iVar1 * 0.5) / 32767.0 + 1.0;
    fVar2 = fVar3 * 1.5;
    param_1[9] = fVar2;
    param_1[10] = fVar2;
    param_1[0xb] = fVar3 * 0.75;
    return param_1;
  case 3:
    *param_1 = 0x1b;
    param_1[9] = 0x3fc00000;
    param_1[10] = 0x3fc00000;
    param_1[0xb] = 0x3fb33333;
    return param_1;
  case 4:
    *param_1 = 0x12;
    param_1[10] = 0x3f800000;
    param_1[0xb] = 0x3ecccccd;
    param_1[9] = 0x40400000;
    return param_1;
  case 5:
    *param_1 = 0x10;
    param_1[9] = 0x3f800000;
    param_1[10] = 0x3f800000;
    param_1[0xb] = 0x3f000000;
    return param_1;
  case 6:
    *param_1 = 0x1c;
    param_1[10] = 0x40400000;
    param_1[0xb] = 0x40200000;
    param_1[9] = 0x40400000;
  }
  return param_1;
}


/* lib_fn_4f3490 @ 004f3490  kind=lib  attributed-by=ledger  size=397 */

undefined4 * __cdecl FUN_004f3490(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_00406ef0(param_1 + 0x12);
  param_1[0x5e] = 0xffffffff;
  param_1[0x5f] = 0xffffffff;
  param_1[0x60] = 0xffffffff;
  param_1[0x61] = 0;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  param_1[6] = param_2[4];
  param_1[7] = param_2[5];
  param_1[8] = param_3;
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  switch(uVar1) {
  case 0:
    *param_1 = 0x18;
    param_1[9] = 0x40000000;
    param_1[10] = 0x40000000;
    param_1[0xb] = 0x40000000;
    return param_1;
  case 1:
    *param_1 = 0x19;
    iVar2 = rand();
    fVar3 = (((float)iVar2 * 0.5) / 32767.0 + 1.0) * 1.5;
    param_1[9] = fVar3;
    param_1[10] = fVar3;
    param_1[0xb] = fVar3;
    return param_1;
  case 2:
    *param_1 = 0x1a;
    iVar2 = rand();
    fVar4 = ((float)iVar2 * 0.5) / 32767.0 + 1.0;
    fVar3 = fVar4 * 1.5;
    param_1[9] = fVar3;
    param_1[10] = fVar3;
    param_1[0xb] = fVar4 * 0.75;
    return param_1;
  case 3:
    *param_1 = 0x1b;
    param_1[9] = 0x3fc00000;
    param_1[10] = 0x3fc00000;
    param_1[0xb] = 0x3fb33333;
  }
  return param_1;
}


/* lib_fn_4f36f0 @ 004f36f0  kind=lib  attributed-by=ledger  size=275 */

undefined8 * __thiscall FUN_004f36f0(void *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00555540;
  local_10 = ExceptionList;
  puVar4 = *(undefined8 **)((int)this + 4);
  uVar3 = ((int)puVar4 - *(int *)this) / 0x1c;
  if (param_1 < uVar3) {
    puVar2 = *(undefined8 **)this;
    puVar1 = (undefined8 *)((int)puVar2 + param_1 * 0x1c);
    if (puVar1 == puVar2) {
      *(undefined8 **)((int)this + 4) = puVar2;
      return puVar1;
    }
    if (puVar1 == puVar4) {
      return puVar1;
    }
    ExceptionList = &local_10;
    puVar4 = (undefined8 *)FUN_004e1910(puVar4,puVar4,puVar1);
  }
  else {
    if (param_1 <= uVar3) {
      return (undefined8 *)(((int)puVar4 - *(int *)this) * -0x6db6db6d);
    }
    ExceptionList = &local_10;
    FUN_004e26c0(this,param_1 - uVar3);
    local_8 = 0;
    FUN_004e1db0(*(int *)((int)this + 4),param_1 - (*(int *)((int)this + 4) - *(int *)this) / 0x1c);
    puVar4 = (undefined8 *)
             (*(int *)((int)this + 4) +
             (param_1 - (*(int *)((int)this + 4) - *(int *)this) / 0x1c) * 0x1c);
  }
  *(undefined8 **)((int)this + 4) = puVar4;
  ExceptionList = local_10;
  return puVar4;
}


/* int128_sub @ 004f79f0  kind=lib  attributed-by=ledger  size=61 */

uint * __thiscall FUN_004f79f0(void *this,uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = *(uint *)this;
  param_1[1] = *(uint *)((int)this + 4);
  param_1[2] = *(uint *)((int)this + 8);
  param_1[3] = *(uint *)((int)this + 0xc);
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


/* lib_fn_4f7ef0 @ 004f7ef0  kind=lib  attributed-by=ledger  size=207 */

void __thiscall FUN_004f7ef0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00555690;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x15555556) {
      puVar3 = operator_new(param_1 * 0xc);
      if (puVar3 != (undefined4 *)0x0) goto LAB_004f7f4f;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004f7f4f:
  local_8 = 0;
  FUN_004f71e0(*(int *)this,*(int *)((int)this + 4),puVar3);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined4 **)this = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3 + param_1 * 3;
  *(undefined4 **)((int)this + 4) = puVar3 + ((iVar1 - iVar2) / 0xc) * 3;
  ExceptionList = local_10;
  return;
}


/* lib_fn_4f82d0 @ 004f82d0  kind=lib  attributed-by=ledger  size=456 */

float * __thiscall FUN_004f82d0(void *this,float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  dVar5 = (double)*(int *)((int)this + 0x800274) + (double)param_2 * 0.03;
  fVar1 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)*(int *)((int)this + 0x800278) + (double)param_3 * 0.03);
  dVar5 = (double)*(int *)((int)this + 0x80027c) + (double)param_2 * 0.01;
  fVar2 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)*(int *)((int)this + 0x800280) + (double)param_3 * 0.01);
  fVar6 = ((float)fVar1 + 1.0) * 0.5 * 80.0;
  fVar4 = ((float)fVar2 + 1.0) * 0.5;
  fVar7 = (1.0 - fVar4) * 240.0;
  fVar3 = fVar7 + fVar4 * 240.0 + fVar6;
  fVar7 = fVar7 + fVar4 * 180.0 + fVar6;
  fVar6 = (1.0 - fVar4) * 100.0 + fVar4 * 50.0 + fVar6;
  *param_1 = fVar3;
  param_1[1] = fVar7;
  param_1[2] = fVar6;
  if (0.0 <= fVar3) {
    if (255.0 < fVar3) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar7 < 0.0) {
    param_1[1] = 0.0;
  }
  if (255.0 < param_1[1]) {
    param_1[1] = 255.0;
  }
  if (fVar6 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  return param_1;
}


/* lib_fn_4f8570 @ 004f8570  kind=lib  attributed-by=ledger  size=1482 */

void __thiscall FUN_004f8570(void *this,float param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  uint *puVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint local_b4;
  uint local_b0;
  uint local_ac;
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
  void *local_7c;
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
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_84 = (int)((int)param_1 + -0x4000 + ((int)param_1 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  local_80 = (int)((param_2 - 0x4000) + ((int)(param_2 - 0x4000) >> 0x1f & 0x3fffU)) >> 0xe;
  local_68 = (float)((int)((int)param_1 + 0x4000 + ((int)param_1 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe
                    );
  fVar5 = (float)((int)(((int)(param_2 + 0x4000) >> 0x1f & 0x3fffU) + param_2 + 0x4000) >> 0xe);
  local_94 = param_1;
  local_98 = param_2;
  local_7c = this;
  local_74 = fVar5;
  fVar7 = FUN_004d5d30(SUB84((double)(int)param_2 * 0.0005,0),
                       (int)((ulonglong)((double)(int)param_2 * 0.0005) >> 0x20),3423.0);
  local_70 = (float)fVar7;
  local_88 = local_70 * 3.0 * 256.0;
  local_60 = local_88;
  fVar7 = FUN_004d5d30(SUB84((double)(int)param_1 * 0.0005,0),
                       (int)((ulonglong)((double)(int)param_1 * 0.0005) >> 0x20),23421.0);
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
              (local_6c = *(uint **)((int)this + (local_9c + local_78) * 4), local_6c == (uint *)0x0
              )))) goto LAB_004f8b21;
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
          this = local_7c;
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
                 (local_6c = *(uint **)((int)this + (local_78 + local_90) * 4),
                 local_6c == (uint *)0x0)))))) goto LAB_004f8b21;
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
            this = local_7c;
          } while (local_78 <= (int)local_74);
        }
        local_84 = local_84 + 1;
        local_90 = local_90 + 0x400;
        this = local_7c;
      } while (local_84 <= (int)local_68);
      if (0.0 < fVar10) {
        local_74 = fVar9 / fVar10;
        uVar3 = (int)local_98 >> 0x1f;
        uVar4 = (int)local_94 >> 0x1f;
        local_68 = local_74;
        puVar6 = (uint *)FUN_004286f0(local_7c,(int)((int)local_94 + (uVar4 & 0x7ff)) >> 0xb,
                                      (int)(local_98 + (uVar3 & 0x7ff)) >> 0xb);
        if (((local_74 < 0.2) && (puVar6 != (uint *)0x0)) && (puVar6[6] == 3)) {
          local_b0 = uVar3 << 0x10 | uVar1 >> 0x10;
          local_b4 = uVar1 << 0x10;
          local_a8 = uVar4 << 0x10 | (uint)fVar8 >> 0x10;
          local_ac = (int)fVar8 << 0x10;
          fVar7 = FUN_0052c820(puVar6,&local_ac,&local_b4);
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
LAB_004f8b21:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* lib_fn_4f8b40 @ 004f8b40  kind=lib  attributed-by=ledger  size=1228 */

void __thiscall FUN_004f8b40(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  uint *local_90;
  int local_84;
  undefined4 local_7c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar3 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_7c = (int)(param_1 + -0x4000 + (param_1 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (int)(param_2 + -0x4000 + (param_2 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (int)(param_1 + 0x4000 + (param_1 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar13 = (int)((param_2 + 0x4000 >> 0x1f & 0x3fffU) + param_2 + 0x4000) >> 0xe;
  fVar15 = FUN_004d5d30(SUB84((double)param_2 * 0.0005,0),
                        (int)((ulonglong)((double)param_2 * 0.0005) >> 0x20),3423.0);
  fVar16 = FUN_004d5d30(SUB84((double)param_1 * 0.0005,0),
                        (int)((ulonglong)((double)param_1 * 0.0005) >> 0x20),23421.0);
  uVar6 = (uint)((float)param_1 + (float)fVar15 * 3.0 * 256.0);
  puVar14 = (uint *)0x0;
  local_90 = (uint *)0x0;
  local_84 = 0;
  uVar7 = (uint)((float)param_2 + (float)fVar16 * 3.0 * 256.0);
  if (local_7c <= iVar5) {
    iVar11 = local_7c * 0x400 + 0x10002f;
    iVar10 = iVar11;
    iVar12 = local_7c;
    do {
      for (iVar9 = iVar4; iVar9 <= iVar13; iVar9 = iVar9 + 1) {
        if ((((iVar12 < 0) || (iVar9 < 0)) || (0x20002e < iVar10)) ||
           ((0x3ff < iVar9 ||
            (puVar14 = *(uint **)((int)this + (iVar9 + iVar10) * 4), puVar14 == (uint *)0x0))))
        goto LAB_004f8ff6;
        uVar1 = *puVar14;
        uVar2 = puVar14[1];
        local_28 = CONCAT44(((((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10) -
                            (((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10)) -
                            (uint)(uVar1 * 0x10000 < uVar6 * 0x10000),
                            uVar1 * 0x10000 + uVar6 * -0x10000);
        local_20 = CONCAT44(((((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10) -
                            (((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10)) -
                            (uint)(uVar2 * 0x10000 < uVar7 * 0x10000),
                            uVar2 * 0x10000 + uVar7 * -0x10000);
        iVar8 = (int)((float)local_20 * 1.5258789e-05 * (float)local_20 * 1.5258789e-05 +
                     (float)local_28 * 1.5258789e-05 * (float)local_28 * 1.5258789e-05);
        if ((local_90 == (uint *)0x0) || (iVar8 < local_84)) {
          local_90 = puVar14;
          local_84 = iVar8;
        }
        puVar14 = local_90;
      }
      iVar12 = iVar12 + 1;
      iVar10 = iVar10 + 0x400;
    } while (iVar12 <= iVar5);
    if (puVar14 != (uint *)0x0) {
      fVar18 = 0.0;
      iVar10 = iVar4;
      do {
        for (; iVar10 <= iVar13; iVar10 = iVar10 + 1) {
          if (((local_7c < 0) || (iVar10 < 0)) ||
             ((0x20002e < iVar11 ||
              ((0x3ff < iVar10 ||
               (puVar14 = *(uint **)((int)this + (iVar10 + iVar11) * 4), puVar14 == (uint *)0x0)))))
             ) goto LAB_004f8ff6;
          uVar1 = *puVar14;
          uVar2 = puVar14[1];
          local_18 = CONCAT44(((((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10) -
                              (((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10)) -
                              (uint)(uVar1 * 0x10000 < uVar6 * 0x10000),
                              uVar1 * 0x10000 + uVar6 * -0x10000);
          local_10 = CONCAT44(((((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10) -
                              (((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10)) -
                              (uint)(uVar2 * 0x10000 < uVar7 * 0x10000),
                              uVar2 * 0x10000 + uVar7 * -0x10000);
          fVar17 = (float)((int)((float)local_10 * 1.5258789e-05 * (float)local_10 * 1.5258789e-05 +
                                (float)local_18 * 1.5258789e-05 * (float)local_18 * 1.5258789e-05) -
                          local_84) * 5e-07;
          if (1.0 < fVar17) {
            fVar17 = 1.0;
          }
          fVar18 = fVar18 + (1.0 - fVar17);
        }
        local_7c = local_7c + 1;
        iVar11 = iVar11 + 0x400;
        iVar10 = iVar4;
      } while (local_7c <= iVar5);
      if (0.0 < fVar18) {
        __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
LAB_004f8ff6:
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


/* lib_fn_4f9450 @ 004f9450  kind=lib  attributed-by=ledger  size=1822 */

void __thiscall
FUN_004f9450(void *this,undefined4 *param_1,float param_2,float param_3,int param_4,float param_5,
            float param_6,int param_7)

{
  float *pfVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float local_40;
  uint local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  uint local_1c;
  uint local_18;
  float local_14 [3];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  *param_1 = 0x4000000;
  pfVar1 = FUN_00522320(&local_20,(int)param_2,(int)param_3);
  local_40 = *pfVar1;
  local_30 = pfVar1[1];
  local_28 = pfVar1[2];
  local_14[0] = local_40;
  local_14[1] = local_30;
  local_14[2] = local_28;
  fVar5 = FUN_0052cd50(this,(uint)param_2,param_3,param_7);
  local_2c = ((float)fVar5 * 10.0 - 0.3) * 1.5;
  if (0.0 <= local_2c) {
    if (1.0 < local_2c) {
      local_2c = 1.0;
    }
  }
  else {
    local_2c = 0.0;
  }
  if (0.8 < param_6) {
    local_24 = (param_6 - 0.8) / 0.1;
    if (1.0 < local_24) {
      local_24 = 1.0;
    }
    fVar5 = FUN_004d5d30(SUB84((double)(int)param_2 * 0.03,0),
                         (int)((ulonglong)((double)(int)param_2 * 0.03) >> 0x20),
                         (double)(int)param_3 * 0.03);
    fVar6 = (float)fVar5;
    if (fVar6 <= 1.0) {
      if (fVar6 < 0.0) {
        fVar6 = 0.0;
      }
    }
    else {
      fVar6 = 1.0;
    }
    fVar6 = 1.0 - fVar6 * fVar6;
    local_34 = (1.0 - fVar6 * fVar6) * 0.8 * local_24;
    fVar6 = 1.0 - local_34;
    local_24 = local_40 * fVar6;
    local_30 = local_30 * fVar6;
    local_28 = local_28 * fVar6;
    pfVar1 = FUN_0052d030(this,&local_20,param_2,(uint)param_3,param_4,param_7);
    local_40 = *pfVar1 * local_34 + local_24;
    local_28 = pfVar1[2] * local_34 + local_28;
    local_30 = pfVar1[1] * local_34 + local_30;
    local_14[0] = local_40;
    local_14[1] = local_30;
    local_14[2] = local_28;
  }
  if ((param_5 < 0.2) && (0.75 < param_6)) {
    *(undefined1 *)((int)param_1 + 3) = 9;
    local_24 = (1.0 - param_5 / 0.2) * (param_6 - 0.75) * 4.0 * 10.0;
    if (local_24 <= 1.0) {
      if (local_24 < 0.0) {
        local_24 = 0.0;
      }
    }
    else {
      local_24 = 1.0;
    }
    puVar2 = (uint *)FUN_004286f0(this,(int)((int)param_2 + ((int)param_2 >> 0x1f & 0x7ffU)) >> 0xb,
                                  (int)((int)param_3 + ((int)param_3 >> 0x1f & 0x7ffU)) >> 0xb);
    if ((puVar2 != (uint *)0x0) && (puVar2[6] == 4)) {
      local_34 = (float)(((int)param_3 >> 0x1f) << 0x10 | (uint)param_3 >> 0x10);
      local_38 = (int)param_3 << 0x10;
      local_18 = ((int)param_2 >> 0x1f) << 0x10 | (uint)param_2 >> 0x10;
      local_1c = (int)param_2 << 0x10;
      fVar5 = FUN_0052c820(puVar2,&local_1c,&local_38);
      fVar8 = (float)fVar5 - 0.5;
      fVar6 = 0.0;
      if ((0.0 <= fVar8) && (fVar6 = fVar8, 1.0 < fVar8)) {
        fVar6 = 1.0;
      }
      fVar6 = 1.0 - fVar6 * fVar6;
      local_24 = (1.0 - fVar6 * fVar6) * local_24;
    }
    local_24 = local_24 * local_2c;
    if (local_24 <= 1.0) {
      if (local_24 < 0.5) {
        *(undefined1 *)((int)param_1 + 3) = 4;
      }
    }
    else {
      local_24 = 1.0;
    }
    fVar6 = 1.0 - local_24;
    local_34 = local_40 * fVar6;
    local_2c = local_30 * fVar6;
    local_28 = local_28 * fVar6;
    pfVar1 = FUN_0052d5d0(this,&local_20,(int)param_2,(int)param_3);
    local_40 = *pfVar1 * local_24 + local_34;
    local_30 = pfVar1[1] * local_24 + local_2c;
    local_28 = pfVar1[2] * local_24 + local_28;
    local_14[0] = local_40;
    local_14[1] = local_30;
    local_14[2] = local_28;
  }
  dVar7 = (double)(int)param_2 * 0.01 + 854.0;
  fVar5 = FUN_004d5d30(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),
                       (double)(int)param_3 * 0.01 + 985.0);
  local_34 = (float)fVar5;
  fVar6 = (local_34 + (float)(0xf - param_4) / 10.0) - 0.5;
  if (fVar6 <= 1.0) {
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
  }
  else {
    fVar6 = 1.0;
  }
  fVar6 = 1.0 - fVar6 * fVar6;
  local_2c = 1.0 - fVar6 * fVar6;
  if (param_6 < 0.2) {
    local_2c = local_2c * (param_6 / 0.2);
  }
  if (0.0 < local_2c) {
    fVar6 = 1.0 - local_2c;
    local_34 = fVar6 * local_40;
    local_24 = fVar6 * local_30;
    local_28 = fVar6 * local_28;
    pfVar1 = FUN_004f82d0(this,&local_20,(int)param_2,(int)param_3);
    fVar6 = pfVar1[2];
    local_40 = *pfVar1 * local_2c + local_34;
    local_30 = pfVar1[1] * local_2c + local_24;
    *(undefined1 *)((int)param_1 + 3) = 9;
    local_28 = fVar6 * local_2c + local_28;
    local_14[0] = local_40;
    local_14[1] = local_30;
    local_14[2] = local_28;
  }
  if (param_6 < 0.3) {
    *(undefined1 *)((int)param_1 + 3) = 10;
    local_2c = 1.0 - (param_6 - 0.29) / 0.01;
    if (1.0 < local_2c) {
      local_2c = 1.0;
    }
    fVar6 = 1.0 - local_2c;
    local_34 = fVar6 * local_40;
    local_24 = fVar6 * local_30;
    local_28 = fVar6 * local_28;
    pfVar1 = FUN_0052d870(&local_20,(int)param_2,(int)param_3);
    local_40 = *pfVar1 * local_2c + local_34;
    local_30 = pfVar1[1] * local_2c + local_24;
    local_28 = pfVar1[2] * local_2c + local_28;
    local_14[0] = local_40;
    local_14[1] = local_30;
    local_14[2] = local_28;
  }
  iVar3 = FUN_00406100(this,(uint)param_2,(uint)param_3,param_7);
  if (iVar3 == 0) {
    fVar5 = (float10)FUN_00522e20(this,(int)param_2,(int)param_3);
    local_2c = (float)fVar5;
    local_34 = local_2c;
  }
  else {
    local_2c = *(float *)(iVar3 + 0xc);
  }
  if (0.0 < local_2c) {
    fVar6 = 1.0 - local_2c;
    local_34 = fVar6 * local_40;
    local_24 = fVar6 * local_30;
    local_28 = fVar6 * local_28;
    pfVar1 = FUN_0052d030(this,&local_20,param_2,(uint)param_3,param_4,param_7);
    local_14[0] = *pfVar1 * local_2c + local_34;
    local_14[1] = pfVar1[1] * local_2c + local_24;
    local_14[2] = pfVar1[2] * local_2c + local_28;
    if (0.5 < local_2c) {
      *(undefined1 *)((int)param_1 + 3) = 0xc;
    }
  }
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 1;
    *(char *)(iVar3 + (int)param_1) = (char)(int)local_14[iVar3];
    iVar3 = iVar4;
  } while (iVar4 < 3);
  *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) | 0x20;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* lib_fn_4fae90 @ 004fae90  kind=lib  attributed-by=ledger  size=1509 */

void __thiscall
FUN_004fae90(void *this,float *param_1,float param_2,uint param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_28;
  float local_20;
  double local_1c;
  float local_14;
  double local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_10 = (double)(int)param_3;
  local_1c = (double)(int)param_2;
  dVar15 = local_10 * 0.1 + 98984.0;
  fVar7 = FUN_004d5d30(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),
                       (double)param_4 * 0.4 + 8437.0);
  fVar8 = FUN_004d5d30(SUB84(local_1c * 0.1,0),(int)((ulonglong)(local_1c * 0.1) >> 0x20),
                       (double)param_4 * 0.4);
  local_10 = local_10 * 0.01;
  local_1c = local_1c * 0.01;
  fVar12 = (((float)fVar7 + (float)fVar8) * 0.5 + 1.0) * 0.5;
  dVar15 = (double)*(int *)((int)this + 0x80025c) + local_1c;
  fVar7 = FUN_004d5d30(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),
                       (double)*(int *)((int)this + 0x800260) + local_10);
  dVar15 = (double)*(int *)((int)this + 0x800264) + local_1c;
  fVar8 = FUN_004d5d30(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),
                       (double)*(int *)((int)this + 0x800268) + local_10);
  dVar15 = (double)*(int *)((int)this + 0x80026c) + local_1c;
  fVar9 = FUN_004d5d30(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),
                       (double)*(int *)((int)this + 0x800270) + local_10);
  fVar16 = fVar12 * 60.0;
  dVar15 = (double)*(int *)((int)this + 0x80024c) + local_1c;
  fVar10 = FUN_004d5d30(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),
                        (double)*(int *)((int)this + 0x800250) + local_10);
  dVar15 = (double)*(int *)((int)this + 0x800254) + local_1c;
  fVar11 = FUN_004d5d30(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),
                        (double)*(int *)((int)this + 0x800258) + local_10);
  fVar12 = fVar12 * 0.0 + 60.0 + (float)fVar9 * 20.0;
  fVar18 = fVar16 + (float)fVar10 * 20.0 + 180.0 + (float)fVar7 * 20.0;
  fVar16 = fVar16 + (float)fVar11 * 20.0 + 100.0 + (float)fVar8 * 20.0;
  param_1[2] = fVar12;
  *param_1 = fVar18;
  param_1[1] = fVar16;
  if (0.0 <= fVar18) {
    if (255.0 < fVar18) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar16 < 0.0) {
    param_1[1] = 0.0;
  }
  if (255.0 < param_1[1]) {
    param_1[1] = 255.0;
  }
  if (fVar12 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  iVar4 = FUN_00406100(this,(uint)param_2,param_3,param_5);
  if (iVar4 == 0) {
    fVar7 = (float10)FUN_004f8b40(this,(int)param_2,param_3);
    local_28 = (float)fVar7;
  }
  else {
    local_28 = *(float *)(iVar4 + 8);
  }
  if (0.75 < local_28) {
    fVar12 = (local_28 - 0.75) * 4.0;
    if (fVar12 < 0.0) {
      local_28 = 0.0;
    }
    fVar16 = *param_1;
    fVar18 = param_1[1];
    fVar1 = param_1[2];
    fVar13 = 1.0 - fVar12;
    pfVar5 = FUN_0052d030(this,&local_14,param_2,param_3,param_4,param_5);
    fVar2 = pfVar5[1];
    fVar3 = pfVar5[2];
    *param_1 = *pfVar5 * fVar12 * 0.9 + fVar16 * fVar13;
    param_1[1] = fVar2 * fVar12 * 0.9 + fVar18 * fVar13;
    param_1[2] = fVar3 * fVar12 * 0.9 + fVar1 * fVar13;
  }
  if (local_28 < 0.2) {
    fVar12 = param_1[1];
    fVar16 = param_1[2];
    fVar17 = 1.0 - local_28 * 4.0;
    fVar18 = *param_1;
    fVar14 = 1.0 - fVar17;
    pfVar5 = FUN_0052d030(this,&local_14,param_2,param_3,param_4,param_5);
    pfVar6 = FUN_0052d870(&local_20,(int)param_2,param_3);
    fVar1 = pfVar5[1];
    fVar2 = pfVar5[2];
    fVar3 = pfVar6[1];
    fVar13 = pfVar6[2];
    fVar17 = fVar17 * 0.5;
    *param_1 = (*pfVar6 + *pfVar5) * fVar17 + fVar18 * fVar14;
    param_1[1] = (fVar1 + fVar3) * fVar17 + fVar12 * fVar14;
    param_1[2] = (fVar2 + fVar13) * fVar17 + fVar16 * fVar14;
  }
  iVar4 = FUN_00406100(this,(uint)param_2,param_3,param_5);
  if (iVar4 == 0) {
    fVar7 = (float10)FUN_00522e20(this,(int)param_2,param_3);
    fVar12 = (float)fVar7;
  }
  else {
    fVar12 = *(float *)(iVar4 + 0xc);
  }
  if (0.0 < fVar12) {
    fVar16 = *param_1;
    fVar18 = param_1[1];
    fVar13 = 1.0 - fVar12;
    fVar1 = param_1[2];
    pfVar5 = FUN_0052d030(this,&local_14,param_2,param_3,param_4,param_5);
    fVar2 = pfVar5[1];
    fVar3 = pfVar5[2];
    *param_1 = fVar16 * fVar13 + *pfVar5 * fVar12;
    param_1[2] = fVar3 * fVar12 + fVar13 * fVar1;
    param_1[1] = fVar18 * fVar13 + fVar2 * fVar12;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* lib_fn_4fb480 @ 004fb480  kind=lib  attributed-by=ledger  size=2867 */

void ** FUN_004fb480(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  void **ppvVar7;
  bool bVar8;
  float fVar9;
  int local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005556d8;
  local_10 = ExceptionList;
  if ((*(ushort *)(param_1 + 0x7a) & 0x40) != 0) {
    return &local_10;
  }
  cVar4 = *(char *)(param_1 + 0x30);
  ppvVar7 = (void **)CONCAT31((int3)((uint)&local_10 >> 8),cVar4);
  ExceptionList = &local_10;
  if (cVar4 == -0x78) {
LAB_004fbf3e:
    *(undefined2 *)(param_1 + 0x350) = 4;
    *(undefined1 *)(param_1 + 0x35d) = 6;
    iVar6 = rand();
    ppvVar7 = (void **)(iVar6 / 5);
    *(char *)(iVar3 + 0x351) = (char)(iVar6 % 5) + '\x02';
LAB_004fbf77:
    *(undefined4 *)(iVar3 + 0xf60) = 0x3dcccccd;
    *(undefined4 *)(iVar3 + 0xf5c) = 0x3e99999a;
    *(undefined4 *)(iVar3 + 0xf64) = 0x41200000;
    *(undefined4 *)(iVar3 + 0xf68) = 0x41200000;
    ExceptionList = local_10;
    return ppvVar7;
  }
  if ((((cVar4 == -0x7c) || (cVar4 == -0x80)) || (cVar4 == -0x7f)) ||
     ((((cVar4 == -0x7e || (cVar4 == -0x7d)) ||
       ((cVar4 == -0x7b || ((cVar4 == -0x7a || (cVar4 == -0x79)))))) || (cVar4 == -0x77)))) {
    if (cVar4 != -0x78) {
      *(undefined2 *)(param_1 + 0x350) = 4;
      *(undefined1 *)(param_1 + 0x35d) = 6;
      goto LAB_004fbf77;
    }
    goto LAB_004fbf3e;
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
LAB_004fbb5c:
    *(undefined2 *)(param_1 + 0x7b0) = 0;
    *puVar1 = 0;
LAB_004fbb68:
    *(undefined1 *)(param_1 + 0x8c9) = 0;
    goto LAB_004fbb6f;
  }
  if (*(int *)(param_1 + 0x28) == 6) goto LAB_004fbb6f;
  iVar6 = *(int *)(param_1 + 0x2c);
  if (iVar6 == 0x76) goto LAB_004fbb5c;
  if (iVar6 == 0x75) {
    pvVar2 = (void *)(param_1 + 0x10ac);
    param_1 = 0x5c;
    FUN_004f2be0(pvVar2,&param_1);
    *(undefined4 *)(iVar3 + 0x10b8) = 0;
    param_1 = 0x11;
    FUN_004f2be0((void *)(iVar3 + 0x10bc),&param_1);
    param_1 = 0x60;
    FUN_004f2be0((void *)(iVar3 + 0x10bc),&param_1);
    goto LAB_004fbb6f;
  }
  if (iVar6 == 0x6c) {
LAB_004fbb1e:
    pvVar2 = (void *)(param_1 + 0x10ac);
    param_1 = 0x5b;
    FUN_004f2be0(pvVar2,&param_1);
    param_1 = 0x5d;
    FUN_004f2be0((void *)(iVar3 + 0x10ac),&param_1);
LAB_004fbb50:
    *(undefined1 *)(iVar3 + 0x8c8) = 3;
    *(undefined1 *)(iVar3 + 0x8c9) = 0x11;
LAB_004fbb02:
    *(undefined1 *)(iVar3 + 0x8d5) = 2;
    *(undefined2 *)(iVar3 + 0x7b0) = 0;
  }
  else {
    if ((iVar6 == 0x72) || (iVar6 == 0x2e)) {
      if ((iVar6 == 0x6c) || (iVar6 == 0x72)) goto LAB_004fbb1e;
      goto LAB_004fbb50;
    }
    if (iVar6 != 0x73) {
      if (iVar6 == 0x6d) {
        pvVar2 = (void *)(param_1 + 0x10ac);
        param_1 = 0x56;
        FUN_004f2be0(pvVar2,&param_1);
        param_1 = 0x5d;
        FUN_004f2be0((void *)(iVar3 + 0x10ac),&param_1);
        param_1 = 0x5b;
        FUN_004f2be0((void *)(iVar3 + 0x10ac),&param_1);
        *(undefined1 *)(iVar3 + 0x8c9) = 2;
        *(undefined1 *)(iVar3 + 0x8c8) = 3;
        *(undefined1 *)(iVar3 + 0x8d5) = 7;
        *(undefined2 *)(iVar3 + 0x7b0) = 0x203;
        *(undefined1 *)(iVar3 + 0x7bd) = 7;
        goto LAB_004fbb6f;
      }
      if (iVar6 == 0x51) {
        pvVar2 = (void *)(param_1 + 0x10ac);
        param_1 = 0x57;
        FUN_004f2be0(pvVar2,&param_1);
        *puVar1 = 3;
        *(undefined1 *)(iVar3 + 0x8c9) = 0xc;
        *(undefined1 *)(iVar3 + 0x8d5) = 0xb;
        *(undefined2 *)(iVar3 + 0x7b0) = 0xc03;
        *(undefined1 *)(iVar3 + 0x7bd) = 0xb;
        goto LAB_004fbb6f;
      }
      if (iVar6 == 0x52) {
        *puVar1 = 3;
        *(undefined1 *)(param_1 + 0x8d5) = 1;
        *(undefined2 *)(param_1 + 0x7b0) = 3;
        *(undefined1 *)(param_1 + 0x7bd) = 1;
        goto LAB_004fbb68;
      }
      if ((((iVar6 == 0x2f) || (iVar6 == 0x6f)) || (iVar6 == 0x71)) || (iVar6 == 0x70))
      goto LAB_004fbb6f;
      if ((iVar6 != 0x2d) && (iVar6 != 0x2b)) {
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000003;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
        }
        *(char *)(iVar3 + 0x30) = (char)uVar5 + '\x01';
        if (*(int *)(iVar3 + 0x2c) == 0x61) {
          *(undefined1 *)(iVar3 + 0x30) = 4;
        }
        switch(*(undefined1 *)(iVar3 + 0x30)) {
        case 1:
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          *(char *)(iVar3 + 0x31) = (char)uVar5;
          iVar6 = rand();
          iVar6 = iVar6 % 3;
          if (iVar6 == 0) {
            *puVar1 = 3;
            iVar6 = rand();
            *(undefined1 *)(iVar3 + 0x8d5) = 1;
            *(undefined2 *)(iVar3 + 0x7b0) = 0;
            *(char *)(iVar3 + 0x8c9) = (char)(iVar6 % 3) + '\x0f';
          }
          else {
            if (iVar6 == 1) {
              *puVar1 = 3;
              iVar6 = rand();
              *(undefined1 *)(iVar3 + 0x8d5) = 1;
              *(undefined1 *)(iVar3 + 0x7b0) = 3;
              *(char *)(iVar3 + 0x8c9) = (char)(iVar6 % 3);
              iVar6 = rand();
              cVar4 = (char)(iVar6 % 3);
              goto LAB_004fb920;
            }
            if (iVar6 == 2) {
              *puVar1 = 3;
              iVar6 = rand();
              *(undefined1 *)(iVar3 + 0x8d5) = 1;
              *(undefined2 *)(iVar3 + 0x7b0) = 0xd03;
              *(char *)(iVar3 + 0x8c9) = (char)(iVar6 % 3);
              goto LAB_004fb926;
            }
          }
          break;
        case 2:
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          *(char *)(iVar3 + 0x31) = (char)uVar5;
          *puVar1 = 3;
          iVar6 = rand();
          *(undefined1 *)(iVar3 + 0x8d5) = 2;
          *(char *)(iVar3 + 0x8c9) = (char)(iVar6 % 3) + '\x06';
          break;
        case 3:
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          *(char *)(iVar3 + 0x31) = (char)uVar5;
          iVar6 = rand();
          iVar6 = iVar6 % 3;
          if (iVar6 == 0) {
            *(undefined1 *)(iVar3 + 0x8c9) = 10;
          }
          else {
            if (iVar6 != 1) {
              if (iVar6 == 2) {
                *puVar1 = 3;
                *(undefined1 *)(iVar3 + 0x8c9) = 0xc;
                *(undefined1 *)(iVar3 + 0x8d5) = 0xb;
                *(undefined2 *)(iVar3 + 0x7b0) = 0xc03;
                *(undefined1 *)(iVar3 + 0x7bd) = 0xb;
              }
              break;
            }
            *(undefined1 *)(iVar3 + 0x8c9) = 0xb;
          }
          *puVar1 = 3;
          *(undefined1 *)(iVar3 + 0x8d5) = 2;
          *(undefined2 *)(iVar3 + 0x7b0) = 0;
          break;
        case 4:
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          *(char *)(iVar3 + 0x31) = (char)uVar5;
          *puVar1 = 3;
          iVar6 = rand();
          *(undefined1 *)(iVar3 + 0x8d5) = 1;
          cVar4 = (char)(iVar6 % 3) + '\x03';
          *(char *)(iVar3 + 0x8c9) = cVar4;
          if (cVar4 == '\x05') {
            *(undefined2 *)(iVar3 + 0x7b0) = 0;
            *(undefined1 *)(iVar3 + 0x7bd) = 0;
          }
          else {
            *(undefined1 *)(iVar3 + 0x7b0) = 3;
LAB_004fb920:
            *(char *)(iVar3 + 0x7b1) = cVar4;
LAB_004fb926:
            *(undefined1 *)(iVar3 + 0x7bd) = 1;
          }
        }
        if ((*(byte *)(iVar3 + 0x7a) & 0x20) == 0) {
          cVar4 = *(char *)(iVar3 + 0x8c9);
          param_1 = 1;
          if (((cVar4 == '\n') || (cVar4 == '\v')) || (cVar4 == '\f')) {
            param_1 = 0x19;
          }
          else if (((cVar4 == '\x06') || (cVar4 == '\a')) || (cVar4 == '\b')) {
            param_1 = 0x1a;
          }
          else if (((cVar4 == '\x03') || (cVar4 == '\x04')) || (cVar4 == '\x05')) {
            param_1 = 0x1b;
          }
          *(undefined1 *)(iVar3 + 0x350) = 4;
          *(undefined2 *)(iVar3 + 0x360) = *(undefined2 *)(iVar3 + 0x34);
          *(char *)(iVar3 + 0x35d) = (char)param_1;
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          bVar8 = uVar5 == 0;
          if ((int)uVar5 < 0) {
            bVar8 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar8) {
            *(undefined2 *)(iVar3 + 0x6a8) = *(undefined2 *)(iVar3 + 0x34);
            *(undefined1 *)(iVar3 + 0x698) = 7;
            *(char *)(iVar3 + 0x6a5) = (char)param_1;
          }
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          bVar8 = uVar5 == 0;
          if ((int)uVar5 < 0) {
            bVar8 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar8) {
            *(undefined2 *)(iVar3 + 0x590) = *(undefined2 *)(iVar3 + 0x34);
            *(undefined1 *)(iVar3 + 0x580) = 5;
            *(char *)(iVar3 + 0x58d) = (char)param_1;
          }
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          bVar8 = uVar5 == 0;
          if ((int)uVar5 < 0) {
            bVar8 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar8) {
            *(undefined2 *)(iVar3 + 0x478) = *(undefined2 *)(iVar3 + 0x34);
            *(undefined1 *)(iVar3 + 0x468) = 6;
            *(char *)(iVar3 + 0x475) = (char)param_1;
          }
          iVar6 = rand();
          if (iVar6 % 10 == 0) {
            *(undefined1 *)(iVar3 + 0x238) = 8;
            *(undefined2 *)(iVar3 + 0x248) = *(undefined2 *)(iVar3 + 0x34);
            uVar5 = rand();
            uVar5 = uVar5 & 0x80000001;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
            }
            *(char *)(iVar3 + 0x245) = '\f' - (uVar5 != 0);
          }
          iVar6 = rand();
          if (iVar6 % 10 == 0) {
            *(undefined1 *)(iVar3 + 0xaf8) = 9;
            *(undefined2 *)(iVar3 + 0xb08) = *(undefined2 *)(iVar3 + 0x34);
            uVar5 = rand();
            uVar5 = uVar5 & 0x80000001;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
            }
            *(char *)(iVar3 + 0xb05) = '\f' - (uVar5 != 0);
          }
          iVar6 = rand();
          if (iVar6 % 10 == 0) {
            *(undefined1 *)(iVar3 + 0x9e0) = 9;
            *(undefined2 *)(iVar3 + 0x9f0) = *(undefined2 *)(iVar3 + 0x34);
            uVar5 = rand();
            uVar5 = uVar5 & 0x80000001;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
            }
            *(char *)(iVar3 + 0x9ed) = '\f' - (uVar5 != 0);
          }
        }
        goto LAB_004fbb6f;
      }
      pvVar2 = (void *)(param_1 + 0x10ac);
      param_1 = 0x5f;
      FUN_004f2be0(pvVar2,&param_1);
      *(undefined1 *)(iVar3 + 0x31) = 2;
      *puVar1 = 3;
      uVar5 = rand();
      uVar5 = uVar5 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      *(char *)(iVar3 + 0x8c9) = (char)uVar5 + '\n';
      goto LAB_004fbb02;
    }
    pvVar2 = (void *)(param_1 + 0x10ac);
    param_1 = 0x56;
    FUN_004f2be0(pvVar2,&param_1);
    param_1 = 0x5d;
    FUN_004f2be0((void *)(iVar3 + 0x10ac),&param_1);
    *(undefined1 *)(iVar3 + 0x8c9) = 4;
    *(undefined1 *)(iVar3 + 0x8c8) = 3;
    *(undefined1 *)(iVar3 + 0x8d5) = 1;
    *(undefined2 *)(iVar3 + 0x7b0) = 0x403;
    *(undefined1 *)(iVar3 + 0x7bd) = 1;
  }
LAB_004fbb6f:
  *(undefined2 *)(iVar3 + 0x8d8) = *(undefined2 *)(iVar3 + 0x34);
  *(undefined2 *)(iVar3 + 0x7c0) = *(undefined2 *)(iVar3 + 0x34);
  if ((char)param_2 != '\0') goto LAB_004fbef6;
  switch(*(undefined4 *)(iVar3 + 0x2c)) {
  case 0x11:
  case 0x5e:
  case 0x61:
    *(undefined4 *)(iVar3 + 0xf58) = 0x43c80000;
    *(undefined4 *)(iVar3 + 0xf60) = 0x3fc00000;
    param_2 = 0x5d;
    goto LAB_004fbca2;
  case 0x15:
    *(undefined4 *)(iVar3 + 0xf58) = 0x437a0000;
    *(undefined4 *)(iVar3 + 0xf60) = 0x40000000;
    param_2 = 0x45;
    FUN_004f2be0((void *)(iVar3 + 0x10ac),&param_2);
    goto LAB_004fbd71;
  case 0x19:
    *(undefined4 *)(iVar3 + 0xf58) = 0x43480000;
    *(undefined4 *)(iVar3 + 0xf60) = 0x3f000000;
    goto LAB_004fbd71;
  case 0x2e:
  case 0x52:
    param_2 = 0x56;
    goto LAB_004fbc98;
  case 0x2f:
  case 0x58:
    *(undefined4 *)(iVar3 + 0xf58) = 0x437a0000;
    *(undefined4 *)(iVar3 + 0xf60) = 0x40400000;
    *(float *)(iVar3 + 0xf5c) = *(float *)(iVar3 + 0xf5c) * 0.5;
    goto LAB_004fbd71;
  case 0x51:
    param_2 = 0x5c;
LAB_004fbc98:
    *(undefined4 *)(iVar3 + 0xf58) = 0x437a0000;
LAB_004fbca2:
    *(undefined4 *)(iVar3 + 0xf64) = 0x40400000;
    *(undefined4 *)(iVar3 + 0xf68) = 0x40400000;
    FUN_004f2be0((void *)(iVar3 + 0x10ac),&param_2);
    break;
  case 0x55:
    *(undefined4 *)(iVar3 + 0xf58) = 0x447a0000;
    *(undefined4 *)(iVar3 + 0xf60) = 0x40000000;
LAB_004fbd71:
    *(undefined4 *)(iVar3 + 0xf68) = 0x40400000;
    *(undefined4 *)(iVar3 + 0xf64) = 0x40400000;
    break;
  case 0x56:
    *(undefined2 *)(iVar3 + 0x30) = 0x103;
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
    *(undefined4 *)(iVar3 + 0xf58) = 0x451c4000;
    *(undefined4 *)(iVar3 + 0xf60) = 0x40c00000;
    *(undefined4 *)(iVar3 + 0xf64) = 0x40a00000;
    *(undefined4 *)(iVar3 + 0xf68) = 0x40a00000;
    cVar4 = FUN_0040f8b0((char *)(iVar3 + 0x8c8));
    if (cVar4 == '\0') {
      *(undefined4 *)(iVar3 + 0xf5c) = 0x3f000000;
    }
    else {
      *(undefined4 *)(iVar3 + 0xf5c) = 0x3f400000;
    }
    break;
  case 0x75:
    *(undefined4 *)(iVar3 + 0xf58) = 0x451c4000;
    *(undefined4 *)(iVar3 + 0xf60) = 0x40a00000;
    *(undefined4 *)(iVar3 + 0xf64) = 0x40800000;
    *(undefined4 *)(iVar3 + 0xf68) = 0x40a00000;
    break;
  case 0x77:
    *(undefined4 *)(iVar3 + 0xf5c) = 0x3f000000;
    *(undefined4 *)(iVar3 + 0xf58) = 0x451c4000;
    *(undefined4 *)(iVar3 + 0xf60) = 0x40c00000;
    *(undefined4 *)(iVar3 + 0xf64) = 0x41200000;
    *(undefined4 *)(iVar3 + 0xf68) = 0x41200000;
  }
  if ((*(ushort *)(iVar3 + 0x7a) & 0x200) != 0) {
    fVar9 = *(float *)(iVar3 + 0xf58) * 15.0;
    *(float *)(iVar3 + 0xf58) = fVar9;
    if (10000.0 < fVar9) {
      *(undefined4 *)(iVar3 + 0xf58) = 0x461c4000;
    }
    local_1c = 0;
    local_18 = 0;
    *(float *)(iVar3 + 0xf60) = *(float *)(iVar3 + 0xf60) * 3.0;
    local_14 = 0;
    *(float *)(iVar3 + 0xf5c) = *(float *)(iVar3 + 0xf5c) * 0.75;
    *(float *)(iVar3 + 0xf64) = *(float *)(iVar3 + 0xf64) + 2.0;
    *(float *)(iVar3 + 0xf68) = *(float *)(iVar3 + 0xf68) + 2.0;
    local_8 = 0;
    param_2 = 0x5c;
    FUN_004f2be0(&local_1c,&param_2);
    param_2 = 0x5d;
    FUN_004f2be0(&local_1c,&param_2);
    param_2 = 0x56;
    FUN_004f2be0(&local_1c,&param_2);
    param_2 = 0x59;
    FUN_004f2be0(&local_1c,&param_2);
    param_2 = 0x57;
    FUN_004f2be0(&local_1c,&param_2);
    uVar5 = rand();
    FUN_004f2be0((void *)(iVar3 + 0x10ac),
                 (undefined4 *)(local_1c + (uVar5 % (uint)(local_18 - local_1c >> 2)) * 4));
    iVar6 = rand();
    param_2 = 0x11;
    *(int *)(iVar3 + 0x10b8) = iVar6 % 3;
    FUN_004f2be0((void *)(iVar3 + 0x10bc),&param_2);
    param_2 = 0x60;
    FUN_004f2be0((void *)(iVar3 + 0x10bc),&param_2);
    FUN_0042f440(&local_1c);
  }
LAB_004fbef6:
  iVar6 = rand();
  *(int *)(iVar3 + 0x7b4) = iVar6;
  iVar6 = rand();
  *(int *)(iVar3 + 0x8cc) = iVar6;
  iVar6 = rand();
  *(int *)(iVar3 + 0x69c) = iVar6;
  iVar6 = rand();
  *(int *)(iVar3 + 0x354) = iVar6;
  iVar6 = rand();
  *(int *)(iVar3 + 0x584) = iVar6;
  ppvVar7 = (void **)rand();
  *(void ***)(iVar3 + 0x46c) = ppvVar7;
  ExceptionList = local_10;
  return ppvVar7;
}


/* lib_fn_4fc140 @ 004fc140  kind=lib  attributed-by=ledger  size=50 */

float10 __thiscall FUN_004fc140(void *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00406100(param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 8);
  }
  fVar2 = (float10)FUN_004f8b40(param_1,param_2,param_3);
  return fVar2;
}


/* lib_fn_4fc180 @ 004fc180  kind=lib  attributed-by=ledger  size=6033 */

void FUN_004fc180(int param_1)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  int local_144;
  undefined4 *local_13c;
  undefined4 *local_138;
  undefined4 *local_134;
  float local_130;
  undefined4 local_12c;
  int local_128;
  undefined4 local_124;
  byte local_120;
  undefined2 local_11f;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0055570b;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_144 = 0;
  do {
    fVar10 = FUN_00411090((float)local_144 / 30.0);
    local_130 = (float)fVar10;
    fVar11 = FUN_00411090(((float)local_144 + 0.99999) / 30.0);
    local_130 = (float)fVar11;
    iVar2 = rand();
    local_13c = (undefined4 *)0x0;
    local_138 = (void *)0x0;
    local_134 = (undefined4 *)0x0;
    iVar2 = (int)fVar10 + iVar2 % (((int)fVar11 - (int)fVar10) + 1);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    uVar7 = (undefined2)iVar2;
    if (local_144 == 0) {
      uVar7 = 1;
    }
    local_8 = 0;
    local_12c._1_1_ = 0;
    local_124 = 0;
    local_18 = 0;
    memset(local_118,0,0x100);
    local_11f = 0x101;
    local_12c._0_1_ = 7;
    local_11c = uVar7;
    rand();
    iVar2 = rand();
    bVar9 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar9 = bVar9 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar9 = bVar9 + 1;
    }
    local_120 = bVar9;
    if (4 < bVar9) {
      local_120 = 4;
    }
    local_128 = rand();
    FUN_00413940(&local_13c,1);
    puVar8 = local_138;
    if (local_138 != (void *)0x0) {
      FUN_00413710(local_138,(undefined1 *)&local_12c);
    }
    puVar8 = (undefined4 *)((int)puVar8 + 0x118);
    local_12c._0_1_ = 4;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    bVar9 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar9 = bVar9 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar9 = bVar9 + 1;
    }
    local_120 = bVar9;
    if (4 < bVar9) {
      local_120 = 4;
    }
    local_128 = rand();
    if ((&local_12c < puVar8) && (local_13c <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)local_13c) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar8 = local_138;
      }
      puVar5 = local_13c + (int)local_130 * 0x46;
      puVar6 = local_13c;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fc408:
        puVar6 = local_13c;
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar8 = local_138;
      }
      puVar6 = local_13c;
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fc408;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 5;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fc511:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fc511;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 6;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fc61a:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fc61a;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_11f = CONCAT11(local_11f._1_1_,0x19);
    local_12c._0_1_ = 7;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fc72a:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fc72a;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 7;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fc833:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fc833;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 4;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fc93c:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fc93c;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 5;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fca45:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fca45;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 6;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fcb4e:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fcb4e;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_11f = CONCAT11(local_11f._1_1_,0x1a);
    local_12c._0_1_ = 7;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fcc5e:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fcc5e;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 7;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fcd67:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fcd67;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 4;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fce70:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fce70;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 5;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fcf79:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fcf79;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 6;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fd082:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fd082;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_11f = CONCAT11(local_11f._1_1_,0x1b);
    local_12c._0_1_ = 7;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fd192:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fd192;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 7;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fd29b:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fd29b;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 4;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fd3a4:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fd3a4;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 5;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fd4ad:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fd4ad;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 6;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fd5b6:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fd5b6;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 8;
    local_138 = puVar8;
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    local_11f = CONCAT11(local_11f._1_1_,'\f' - (uVar4 != 0));
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fd6d9:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fd6d9;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._0_1_ = 9;
    local_138 = puVar8;
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    local_11f = CONCAT11(local_11f._1_1_,'\f' - (uVar4 != 0));
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fd7fc:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fd7fc;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_138 = puVar8;
    iVar2 = rand();
    local_130 = 0.0;
    iVar2 = iVar2 % 3 + 1;
    if (0 < iVar2) {
      do {
        if (puVar6 == puVar8) break;
        uVar4 = rand();
        pcVar1 = (char *)(puVar6 + (uVar4 % (uint)(((int)puVar8 - (int)puVar6) / 0x118)) * 0x46);
        FUN_00427000((void *)(param_1 + 0xf6c),pcVar1,-1);
        FUN_004f59f0((undefined4 *)(pcVar1 + 0x118),puVar8,pcVar1);
        local_130 = (float)((int)local_130 + 1);
        puVar8 = puVar8 + -0x46;
        local_138 = puVar8;
      } while ((int)local_130 < iVar2);
    }
    local_8 = 0xffffffff;
    if (puVar6 != (undefined4 *)0x0) {
      operator_delete(puVar6);
      local_13c = (undefined4 *)0x0;
      local_138 = (undefined4 *)0x0;
      local_134 = (undefined4 *)0x0;
    }
    local_144 = local_144 + 1;
    if (0x1d < local_144) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


/* lib_fn_4fd920 @ 004fd920  kind=lib  attributed-by=ledger  size=1083 */

void FUN_004fd920(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  void *this;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  int local_35c;
  undefined2 local_358;
  undefined1 local_350 [280];
  undefined1 local_238 [280];
  byte local_120 [4];
  undefined4 local_11c;
  uint local_118;
  undefined2 local_114;
  undefined1 local_112;
  undefined2 local_110;
  undefined1 local_10c [256];
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_35c = 0;
  do {
    fVar8 = FUN_00411090((float)local_35c / 30.0);
    fVar9 = FUN_00411090(((float)local_35c + 0.99999) / 30.0);
    iVar2 = rand();
    iVar2 = (int)fVar8 + iVar2 % (((int)fVar9 - (int)fVar8) + 1);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    local_358 = (undefined2)iVar2;
    if (local_35c == 0) {
      local_358 = 1;
      local_11c = 0;
      local_118 = 0;
      local_114 = local_114 & 0xff00;
      local_112 = 0;
      local_c = 0;
      memset(local_10c,0,0x100);
      this = (void *)(param_1 + 0xf6c);
      local_120[0] = 0xb;
      local_120[1] = 0xc;
      local_114 = CONCAT11(0x18,(undefined1)local_114);
      local_110 = 1;
      FUN_00427000(this,(char *)local_120,0);
      local_120[0] = 0x18;
      local_120[1] = 0;
      local_114 = CONCAT11(1,(undefined1)local_114);
      local_110 = 1;
      FUN_00427000(this,(char *)local_120,0);
      cVar1 = '\x01';
      iVar2 = 10;
      do {
        iVar3 = rand();
        if (iVar3 % iVar2 == 0) {
          local_110 = 1;
          local_120[0] = 0x18;
          local_120[1] = 0;
          local_114 = CONCAT11(1,cVar1);
          FUN_00427000(this,(char *)local_120,0);
        }
        cVar1 = cVar1 + '\x01';
        iVar2 = iVar2 + 10;
      } while (iVar2 < 0x32);
      local_114 = 0x200;
      local_120[0] = 0x17;
      local_120[1] = 0;
      FUN_00427000(this,(char *)local_120,0);
      local_120[1] = 1;
      local_114 = CONCAT11(2,(undefined1)local_114);
      FUN_00427000(this,(char *)local_120,0);
      local_120[0] = 0x14;
      local_114 = local_114 & 0xff;
      local_110 = 1;
      iVar2 = rand();
      switch(iVar2 % 6) {
      case 0:
        local_120[1] = 0x22;
        break;
      case 1:
        local_120[1] = 0x23;
        break;
      case 2:
        local_120[1] = 0x13;
        break;
      case 3:
        local_120[1] = 0x1a;
        break;
      case 4:
        local_120[1] = 0x1e;
        break;
      case 5:
        local_120[1] = 0x57;
      }
      FUN_00427000(this,(char *)local_120,0);
    }
    iVar2 = rand();
    iVar2 = iVar2 % 3;
    if (0 < iVar2) {
      do {
        uVar4 = rand();
        uVar4 = uVar4 & 0x80000001;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
        }
        iVar3 = rand();
        if (iVar3 % 100 == 0) {
          uVar4 = uVar4 + 1;
        }
        iVar3 = rand();
        if (iVar3 % 1000 == 0) {
          uVar4 = uVar4 + 1;
        }
        iVar3 = rand();
        if (iVar3 % 10000 == 0) {
          uVar4 = uVar4 + 1;
        }
        if (4 < (int)uVar4) {
          uVar4 = 4;
        }
        local_110 = 1;
        local_120[0] = 0;
        local_120[1] = 0;
        local_11c = 0;
        local_118 = 0;
        local_114 = 0;
        local_112 = 0;
        local_c = 0;
        memset(local_10c,0,0x100);
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000001;
        bVar7 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar7 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar7) {
          puVar6 = (undefined1 *)FUN_00528bf0(local_350,local_358,(char)uVar4,-1);
        }
        else {
          puVar6 = (undefined1 *)FUN_0052c4e0(local_238,local_358,(char)uVar4,-1);
        }
        FUN_00402a70(local_120,puVar6);
        local_118 = (uint)local_120[0];
        local_120[0] = 2;
        FUN_00427000((void *)(param_1 + 0xf6c),(char *)local_120,0);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000001;
    bVar7 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar7 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar7) {
      local_11c = 0;
      local_118 = 0;
      local_114 = 0;
      local_112 = 0;
      local_c = 0;
      memset(local_10c,0,0x100);
      local_120[0] = 1;
      local_120[1] = 7;
      local_110 = local_358;
      FUN_00427000((void *)(param_1 + 0xf6c),(char *)local_120,0);
    }
    local_35c = local_35c + 1;
  } while (local_35c < 0x1e);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* lib_fn_4fdd80 @ 004fdd80  kind=lib  attributed-by=ledger  size=249 */

void __cdecl FUN_004fdd80(int *param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  int iVar4;
  int local_124;
  undefined2 local_120 [140];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  FUN_00406310((undefined4 *)*param_1,(undefined4 *)param_1[1]);
  param_1[1] = *param_1;
  FUN_0041f770(param_1,1);
  FUN_0041f640((void *)*param_1,10);
  piVar3 = (int *)*param_1;
  local_124 = 0;
  if (0 < (piVar3[1] - *piVar3) / 0x11c) {
    iVar4 = 0;
    do {
      *(undefined4 *)(iVar4 + *piVar3) = 1;
      iVar1 = *(int *)*param_1;
      puVar2 = FUN_0052c160(local_120,param_2);
      FUN_00402a70((void *)(iVar1 + 4 + iVar4),(undefined1 *)puVar2);
      piVar3 = (int *)*param_1;
      local_124 = local_124 + 1;
      iVar4 = iVar4 + 0x11c;
    } while (local_124 < (piVar3[1] - *piVar3) / 0x11c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* lib_fn_4fde90 @ 004fde90  kind=lib  attributed-by=ledger  size=3381 */

void FUN_004fde90(int param_1)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  int local_144;
  undefined4 *local_13c;
  undefined4 *local_138;
  undefined4 *local_134;
  float local_130;
  undefined4 local_12c;
  int local_128;
  undefined4 local_124;
  byte local_120;
  undefined2 local_11f;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0055570b;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_144 = 0;
  do {
    fVar10 = FUN_00411090((float)local_144 / 30.0);
    local_130 = (float)fVar10;
    fVar11 = FUN_00411090(((float)local_144 + 0.99999) / 30.0);
    local_130 = (float)fVar11;
    iVar2 = rand();
    local_13c = (undefined4 *)0x0;
    local_138 = (void *)0x0;
    local_134 = (undefined4 *)0x0;
    iVar2 = (int)fVar10 + iVar2 % (((int)fVar11 - (int)fVar10) + 1);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    uVar7 = (undefined2)iVar2;
    if (local_144 == 0) {
      uVar7 = 1;
    }
    local_8 = 0;
    local_124 = 0;
    local_18 = 0;
    memset(local_118,0,0x100);
    local_11f = 0x101;
    local_12c._0_1_ = 3;
    local_11c = uVar7;
    iVar2 = rand();
    local_12c._1_1_ = (char)(iVar2 % 3);
    rand();
    iVar2 = rand();
    bVar9 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar9 = bVar9 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar9 = bVar9 + 1;
    }
    local_120 = bVar9;
    if (4 < bVar9) {
      local_120 = 4;
    }
    local_128 = rand();
    FUN_00413940(&local_13c,1);
    puVar8 = local_138;
    if (local_138 != (void *)0x0) {
      FUN_00413710(local_138,(undefined1 *)&local_12c);
    }
    puVar8 = (undefined4 *)((int)puVar8 + 0x118);
    local_11f = CONCAT11(local_11f._1_1_,1);
    local_138 = puVar8;
    iVar2 = rand();
    local_12c._1_1_ = (char)(iVar2 % 3) + '\x0f';
    rand();
    iVar2 = rand();
    bVar9 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar9 = bVar9 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar9 = bVar9 + 1;
    }
    local_120 = bVar9;
    if (4 < bVar9) {
      local_120 = 4;
    }
    local_128 = rand();
    if ((&local_12c < puVar8) && (local_13c <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)local_13c) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar8 = local_138;
      }
      puVar5 = local_13c + (int)local_130 * 0x46;
      puVar6 = local_13c;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fe134:
        puVar6 = local_13c;
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar8 = local_138;
      }
      puVar6 = local_13c;
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fe134;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._1_1_ = 0xd;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fe23d:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fe23d;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._1_1_ = 3;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fe346:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fe346;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._1_1_ = 5;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fe44f:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fe44f;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._1_1_ = 4;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fe558:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fe558;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_11f = CONCAT11(local_11f._1_1_,2);
    local_12c._1_1_ = 6;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fe668:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fe668;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_138 = puVar8;
    rand();
    rand();
    rand();
    rand();
    rand();
    local_12c._1_1_ = 8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fe77b:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fe77b;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._1_1_ = 10;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fe884:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fe884;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._1_1_ = 0xb;
    local_138 = puVar8;
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004fe98d:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004fe98d;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_12c._1_1_ = 0xc;
    local_138 = puVar8;
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    local_11f = CONCAT11(local_11f._1_1_,'\f' - (uVar4 != 0));
    rand();
    iVar2 = rand();
    local_130 = (float)(uint)(iVar2 % 100 == 0);
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      local_130 = (float)((int)local_130 + 1);
    }
    iVar2 = rand();
    fVar3 = local_130;
    if (iVar2 % 10000 == 0) {
      fVar3 = (float)((int)local_130 + 1);
    }
    if (4 < (int)fVar3) {
      fVar3 = 5.60519e-45;
    }
    local_120 = SUB41(fVar3,0);
    local_128 = rand();
    if ((&local_12c < puVar8) && (puVar6 <= &local_12c)) {
      local_130 = (float)(((int)&local_12c - (int)puVar6) / 0x118);
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      puVar5 = puVar6 + (int)local_130 * 0x46;
      if (puVar8 != (undefined4 *)0x0) {
LAB_004feab0:
        FUN_00413710(puVar8,(undefined1 *)puVar5);
      }
    }
    else {
      if (puVar8 == local_134) {
        FUN_00413940(&local_13c,1);
        puVar6 = local_13c;
        puVar8 = local_138;
      }
      if (puVar8 != (undefined4 *)0x0) {
        puVar5 = &local_12c;
        goto LAB_004feab0;
      }
    }
    puVar8 = puVar8 + 0x46;
    local_138 = puVar8;
    iVar2 = rand();
    local_130 = 0.0;
    iVar2 = iVar2 % 3 + 1;
    if (0 < iVar2) {
      do {
        if (puVar6 == puVar8) break;
        uVar4 = rand();
        pcVar1 = (char *)(puVar6 + (uVar4 % (uint)(((int)puVar8 - (int)puVar6) / 0x118)) * 0x46);
        FUN_00427000((void *)(param_1 + 0xf6c),pcVar1,-1);
        FUN_004f59f0((undefined4 *)(pcVar1 + 0x118),puVar8,pcVar1);
        local_130 = (float)((int)local_130 + 1);
        puVar8 = puVar8 + -0x46;
        local_138 = puVar8;
      } while ((int)local_130 < iVar2);
    }
    local_8 = 0xffffffff;
    if (puVar6 != (undefined4 *)0x0) {
      operator_delete(puVar6);
      local_13c = (undefined4 *)0x0;
      local_138 = (undefined4 *)0x0;
      local_134 = (undefined4 *)0x0;
    }
    local_144 = local_144 + 1;
    if (0x1d < local_144) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


/* lib_fn_4ff3f0 @ 004ff3f0  kind=lib  attributed-by=ledger  size=426 */

void __thiscall
FUN_004ff3f0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  void *this_00;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float10 fVar15;
  double dVar16;
  double dVar17;
  undefined8 local_a4;
  undefined4 *local_9c;
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  void *local_84;
  int local_80;
  float local_7c;
  float local_78;
  int local_74;
  int local_70;
  int local_6c;
  float local_68;
  int local_64;
  int local_60;
  float local_5c;
  int local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44 [3];
  float local_38 [3];
  undefined8 local_2c;
  float local_24;
  float local_20 [4];
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_70 = param_2;
  local_74 = param_5;
  local_90 = param_4;
  fVar11 = (float)(param_1 + param_4 * -2);
  local_80 = param_4 * 2 + param_1;
  local_6c = param_1;
  local_58 = param_7;
  local_9c = &DAT_005842c0;
  local_84 = this;
  local_50 = fVar11;
  local_48 = fVar11;
  if ((int)fVar11 <= local_80) {
    local_4c = (float)(param_2 + param_5 * -2);
    fVar12 = (float)(param_2 + param_5 * 2);
    local_60 = (int)fVar11 - param_1;
    local_68 = fVar12;
    do {
      if ((int)local_4c <= (int)fVar12) {
        local_54 = (float)((int)local_4c - local_70);
        fVar14 = local_4c;
        local_50 = fVar11;
        do {
          iVar4 = FUN_00406100(this,(uint)fVar11,(uint)fVar14,param_7);
          if (iVar4 != 0) {
            local_8c = (double)(int)fVar14;
            local_64 = *(int *)(iVar4 + 0x10);
            local_a4 = (double)(int)fVar11;
            dVar16 = local_a4 * 0.01 + 4394.0;
            fVar15 = FUN_004d5d30(SUB84(dVar16,0),(int)((ulonglong)dVar16 >> 0x20),
                                  local_8c * 0.01 + 8974.0);
            local_5c = (float)fVar15;
            iVar4 = (int)(local_5c * (float)param_6 + (float)(param_6 + param_3));
            fVar11 = local_50;
            if (local_64 <= iVar4) {
              local_7c = (float)local_60 / (float)local_90;
              local_a4 = local_a4 * 0.05 + 4374.0;
              local_8c = local_8c * 0.05;
              local_98 = (double)CONCAT44((float)(int)local_54 / (float)local_74,
                                          (undefined4)local_98);
              do {
                fVar15 = FUN_004d5d30(SUB84(local_8c,0),(int)((ulonglong)local_8c >> 0x20),
                                      (double)iVar4 * 0.05);
                local_5c = (float)fVar15;
                local_78 = local_5c * 0.4 + local_7c;
                fVar15 = FUN_004d5d30(SUB84(local_a4,0),(int)((ulonglong)local_a4 >> 0x20),
                                      (double)iVar4 * 0.05 + 9898.0);
                local_5c = (float)fVar15;
                fVar11 = local_5c * 0.4 + local_98._4_4_;
                if (fVar11 * fVar11 + local_78 * local_78 <= 1.0) {
                  pvVar5 = (void *)FUN_00406100(this,(uint)local_50,(uint)fVar14,local_58);
                  if (pvVar5 == (void *)0x0) {
                    puVar7 = (undefined4 *)&DAT_005842c4;
                  }
                  else {
                    iVar6 = *(int *)((int)pvVar5 + 0x10);
                    if (iVar4 < iVar6) {
                      puVar7 = (undefined4 *)&DAT_005842c4;
                    }
                    else if (iVar4 < *(int *)((int)pvVar5 + 0x1c) + iVar6) {
                      puVar7 = (undefined4 *)FUN_00405f20(pvVar5,iVar4 - iVar6);
                      if ((((*(byte *)((int)puVar7 + 3) & 0x1f) == 0) && (iVar4 < 1)) &&
                         ((*(byte *)((int)puVar7 + 3) & 0x40) == 0)) {
                        puVar7 = (undefined4 *)&DAT_005842bc;
                      }
                    }
                    else {
                      puVar7 = (undefined4 *)&DAT_005842bc;
                      if (0 < iVar4) {
                        puVar7 = local_9c;
                      }
                    }
                  }
                  if ((*(byte *)((int)puVar7 + 3) & 0x80) != 0) goto LAB_004ffbce;
                }
                iVar4 = iVar4 + -1;
                fVar11 = local_50;
              } while (local_64 <= iVar4);
            }
          }
          local_54 = (float)((int)local_54 + 1);
          fVar14 = (float)((int)fVar14 + 1);
          fVar12 = local_68;
          param_7 = local_58;
        } while ((int)fVar14 <= (int)local_68);
      }
      fVar11 = (float)((int)fVar11 + 1);
      local_60 = local_60 + 1;
      local_50 = fVar11;
    } while ((int)fVar11 <= local_80);
  }
  if ((int)local_48 <= local_80) {
    fVar11 = (float)(local_70 + local_74 * -2);
    iVar4 = local_70 + local_74 * 2;
    local_64 = (int)local_48 - local_6c;
    local_8c = (double)CONCAT44(fVar11,(undefined4)local_8c);
    do {
      if ((int)fVar11 <= iVar4) {
        fVar12 = (float)(param_3 + param_6);
        local_60 = (int)fVar11 - local_70;
        dVar16 = (double)(int)local_48 * 0.01 + 4394.0;
        local_5c = fVar12;
        do {
          fVar15 = FUN_004d5d30(SUB84(dVar16,0),(int)((ulonglong)dVar16 >> 0x20),
                                (double)(int)fVar11 * 0.01 + 8974.0);
          local_4c = (float)fVar15;
          local_6c = (int)(local_4c * (float)param_6 + (float)(int)fVar12);
          iVar6 = FUN_00406100(this,(uint)local_48,(uint)fVar11,local_58);
          pvVar5 = local_84;
          if ((iVar6 != 0) &&
             (local_7c = *(float *)(iVar6 + 0x10), this = local_84, (int)local_7c <= local_6c)) {
            local_78 = (float)(-8 - (int)local_7c);
            iVar6 = local_6c;
            do {
              this_00 = (void *)FUN_00406100(pvVar5,(uint)local_48,(uint)fVar11,local_58);
              if (this_00 == (void *)0x0) {
                puVar7 = (undefined4 *)&DAT_005842c4;
              }
              else {
                iVar8 = *(int *)((int)this_00 + 0x10);
                if (iVar6 < iVar8) {
                  puVar7 = (undefined4 *)&DAT_005842c4;
                }
                else if (iVar6 < *(int *)((int)this_00 + 0x1c) + iVar8) {
                  puVar7 = (undefined4 *)FUN_00405f20(this_00,iVar6 - iVar8);
                  if ((((*(byte *)((int)puVar7 + 3) & 0x1f) == 0) && (iVar6 < 1)) &&
                     ((*(byte *)((int)puVar7 + 3) & 0x40) == 0)) {
                    puVar7 = (undefined4 *)&DAT_005842bc;
                  }
                }
                else {
                  puVar7 = (undefined4 *)&DAT_005842bc;
                  if (0 < iVar6) {
                    puVar7 = local_9c;
                  }
                }
              }
              bVar2 = *(byte *)((int)puVar7 + 3);
              bVar3 = bVar2 & 0x1f;
              if ((((((bVar2 & 0x1f) == 0) || (bVar3 == 2)) || (bVar3 == 4)) ||
                  ((bVar3 == 9 || (bVar3 == 5)))) && ((bVar2 & 0x40) == 0)) {
                local_98 = (double)iVar6 * 0.02;
                fVar15 = FUN_004d5d30(SUB84((double)(int)fVar11 * 0.05,0),
                                      (int)((ulonglong)((double)(int)fVar11 * 0.05) >> 0x20),
                                      local_98);
                local_4c = (float)fVar15;
                local_68 = local_4c * 0.5 + (float)local_64 / (float)local_90;
                dVar17 = (double)(int)local_48 * 0.05 + 4374.0;
                fVar15 = FUN_004d5d30(SUB84(dVar17,0),(int)((ulonglong)dVar17 >> 0x20),
                                      local_98 + 9898.0);
                local_4c = (float)fVar15;
                fVar12 = local_4c * 0.5 + (float)local_60 / (float)local_74;
                if (fVar12 * fVar12 + local_68 * local_68 <= 1.0) {
                  local_50 = (float)((uint)local_50 & 0xff000000);
                  if (iVar6 == local_6c) {
                    iVar8 = FUN_00406100(pvVar5,(uint)local_48,(uint)fVar11,local_58);
                    if (iVar8 == 0) {
                      fVar15 = (float10)FUN_004f8b40(pvVar5,(int)local_48,(int)fVar11);
                      local_54 = (float)fVar15;
                      local_4c = local_54;
                    }
                    else {
                      local_54 = *(float *)(iVar8 + 8);
                    }
                    iVar8 = FUN_00406100(pvVar5,(uint)local_48,(uint)fVar11,local_58);
                    if (iVar8 == 0) {
                      fVar15 = (float10)FUN_004f8570(pvVar5,local_48,(uint)fVar11);
                      fVar12 = (float)fVar15;
                      local_4c = fVar12;
                    }
                    else {
                      fVar12 = *(float *)(iVar8 + 4);
                    }
                    pfVar9 = (float *)FUN_004f9450(pvVar5,(undefined4 *)((int)&local_a4 + 4),
                                                   local_48,fVar11,iVar6,fVar12,local_54,local_58);
                    local_50 = *pfVar9;
                  }
                  else {
                    local_54 = (float)((int)local_78 + iVar6) * 0.05;
                    if (0.0 <= local_54) {
                      if (1.0 < local_54) {
                        local_54 = 1.0;
                      }
                    }
                    else {
                      local_54 = 0.0;
                    }
                    pfVar9 = FUN_0052d030(pvVar5,local_38,local_48,(uint)fVar11,iVar6,local_58);
                    uVar1 = *(undefined8 *)pfVar9;
                    local_24 = pfVar9[2];
                    local_2c._0_4_ = (float)uVar1;
                    local_4c = (float)local_2c * local_54;
                    local_2c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                    local_68 = local_2c._4_4_ * local_54;
                    local_98 = (double)CONCAT44(local_24 * local_54,(undefined4)local_98);
                    local_2c = uVar1;
                    puVar10 = (undefined8 *)
                              FUN_004fae90(pvVar5,local_44,local_48,(uint)fVar11,iVar6,local_58);
                    local_c = 1.0 - local_54;
                    local_20[3] = (float)*puVar10;
                    local_20[3] = local_20[3] * local_c;
                    fStack_10 = (float)((ulonglong)*puVar10 >> 0x20);
                    fStack_10 = fStack_10 * local_c;
                    local_c = *(float *)(puVar10 + 1) * local_c;
                    local_20[1] = fStack_10 + local_68;
                    local_20[0] = local_20[3] + local_4c;
                    local_20[2] = local_c + local_98._4_4_;
                    iVar8 = 0;
                    do {
                      iVar13 = iVar8 + 1;
                      *(char *)((int)&local_50 + iVar8) = (char)(int)local_20[iVar8];
                      iVar8 = iVar13;
                    } while (iVar13 < 3);
                    local_50 = (float)CONCAT13(5,(undefined3)local_50);
                  }
                  FUN_0041ff00(pvVar5,local_48,(uint)fVar11,iVar6,(undefined1 *)&local_50,local_58);
                }
              }
              iVar6 = iVar6 + -1;
              fVar12 = local_5c;
              this = local_84;
            } while ((int)local_7c <= iVar6);
          }
          local_60 = local_60 + 1;
          fVar11 = (float)((int)fVar11 + 1);
        } while ((int)fVar11 <= iVar4);
        fVar11 = local_8c._4_4_;
      }
      local_48 = (float)((int)local_48 + 1);
      local_64 = local_64 + 1;
    } while ((int)local_48 <= local_80);
  }
LAB_004ffbce:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* lib_fn_4ffbf0 @ 004ffbf0  kind=lib  attributed-by=ledger  size=1802 */

void __thiscall
FUN_004ffbf0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  void *this_00;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float10 fVar14;
  double dVar15;
  double dVar16;
  float local_64;
  int local_60;
  undefined4 *local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  void *local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  double local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_40 = param_2;
  local_44 = param_5;
  fVar9 = (float)(param_1 + param_4 * -2);
  local_60 = param_4 * 2 + param_1;
  local_34 = param_1;
  local_28 = param_7;
  local_5c = &DAT_005842c0;
  local_48 = this;
  local_24 = fVar9;
  local_1c = fVar9;
  if ((int)fVar9 <= local_60) {
    uVar10 = param_2 + param_5 * -2;
    fVar12 = (float)(param_5 * 2 + param_2);
    local_2c = (int)fVar9 - param_1;
    local_20 = fVar12;
    do {
      local_18 = uVar10;
      if ((int)uVar10 <= (int)fVar12) {
        local_30 = uVar10 - local_40;
        local_24 = fVar9;
        do {
          iVar3 = FUN_00406100(this,(uint)fVar9,local_18,param_7);
          if (iVar3 != 0) {
            dVar15 = (double)(int)local_18;
            local_38 = *(float *)(iVar3 + 0x10);
            local_10 = (double)(int)fVar9;
            dVar16 = local_10 * 0.01 + 4394.0;
            fVar14 = FUN_004d5d30(SUB84(dVar16,0),(int)((ulonglong)dVar16 >> 0x20),
                                  dVar15 * 0.01 + 8974.0);
            local_3c = (float)fVar14;
            iVar3 = (int)(local_3c * 20.0 + (float)(param_6 + param_3));
            fVar9 = local_24;
            if ((int)local_38 <= iVar3) {
              local_64 = 10.0 / (float)param_4;
              local_54 = (float)local_2c / (float)param_4;
              dVar15 = dVar15 * 0.05;
              local_10 = local_10 * 0.05 + 4374.0;
              local_4c = 10.0 / (float)local_44;
              local_50 = (float)local_30 / (float)local_44;
              do {
                fVar14 = FUN_004d5d30(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),
                                      (double)iVar3 * 0.05);
                local_3c = (float)fVar14;
                local_58 = local_3c * local_64 + local_54;
                fVar14 = FUN_004d5d30(SUB84(local_10,0),(int)((ulonglong)local_10 >> 0x20),
                                      (double)iVar3 * 0.05 + 9898.0);
                local_3c = (float)fVar14;
                fVar9 = local_3c * local_4c + local_50;
                if (fVar9 * fVar9 + local_58 * local_58 <= 1.0) {
                  pvVar4 = (void *)FUN_00406100(this,(uint)local_24,local_18,param_7);
                  if (pvVar4 == (void *)0x0) {
                    puVar5 = (undefined4 *)&DAT_005842c4;
                  }
                  else {
                    iVar6 = *(int *)((int)pvVar4 + 0x10);
                    if (iVar3 < iVar6) {
                      puVar5 = (undefined4 *)&DAT_005842c4;
                    }
                    else if (iVar3 < *(int *)((int)pvVar4 + 0x1c) + iVar6) {
                      puVar5 = (undefined4 *)FUN_00405f20(pvVar4,iVar3 - iVar6);
                      if ((((*(byte *)((int)puVar5 + 3) & 0x1f) == 0) && (iVar3 < 1)) &&
                         ((*(byte *)((int)puVar5 + 3) & 0x40) == 0)) {
                        puVar5 = (undefined4 *)&DAT_005842bc;
                      }
                    }
                    else {
                      puVar5 = (undefined4 *)&DAT_005842bc;
                      if (0 < iVar3) {
                        puVar5 = local_5c;
                      }
                    }
                  }
                  if ((*(byte *)((int)puVar5 + 3) & 0x1f) != 2) {
                    pvVar4 = (void *)FUN_00406100(this,(uint)local_24,local_18,param_7);
                    if (pvVar4 == (void *)0x0) {
                      puVar5 = (undefined4 *)&DAT_005842c4;
                    }
                    else {
                      iVar6 = *(int *)((int)pvVar4 + 0x10);
                      if (iVar3 < iVar6) {
                        puVar5 = (undefined4 *)&DAT_005842c4;
                      }
                      else if (iVar3 < *(int *)((int)pvVar4 + 0x1c) + iVar6) {
                        puVar5 = (undefined4 *)FUN_00405f20(pvVar4,iVar3 - iVar6);
                        if ((((*(byte *)((int)puVar5 + 3) & 0x1f) == 0) && (iVar3 < 1)) &&
                           ((*(byte *)((int)puVar5 + 3) & 0x40) == 0)) {
                          puVar5 = (undefined4 *)&DAT_005842bc;
                        }
                      }
                      else {
                        puVar5 = (undefined4 *)&DAT_005842bc;
                        if (0 < iVar3) {
                          puVar5 = local_5c;
                        }
                      }
                    }
                    if ((*(byte *)((int)puVar5 + 3) & 0x80) != 0) goto LAB_005002e7;
                  }
                }
                iVar3 = iVar3 + -1;
                fVar9 = local_24;
              } while ((int)local_38 <= iVar3);
            }
          }
          local_30 = local_30 + 1;
          local_18 = local_18 + 1;
          fVar12 = local_20;
        } while ((int)local_18 <= (int)local_20);
      }
      fVar9 = (float)((int)fVar9 + 1);
      local_2c = local_2c + 1;
      local_24 = fVar9;
    } while ((int)fVar9 <= local_60);
  }
  if ((int)local_1c <= local_60) {
    local_54 = (float)(local_40 + local_44 * -2);
    fVar9 = (float)(local_40 + local_44 * 2);
    local_30 = (int)local_1c - local_34;
    iVar3 = local_60;
    local_24 = fVar9;
    do {
      if ((int)local_54 <= (int)fVar9) {
        fVar13 = (float)(param_3 + param_6);
        local_2c = (int)local_54 - local_40;
        dVar15 = (double)(int)local_1c * 0.01 + 4394.0;
        fVar12 = local_54;
        local_4c = fVar13;
        do {
          fVar14 = FUN_004d5d30(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),
                                (double)(int)fVar12 * 0.01 + 8974.0);
          local_20 = (float)fVar14;
          local_34 = (int)(local_20 * 20.0 + (float)(int)fVar13);
          iVar3 = FUN_00406100(this,(uint)local_1c,(uint)fVar12,local_28);
          pvVar4 = local_48;
          if ((iVar3 != 0) &&
             (local_50 = *(float *)(iVar3 + 0x10), iVar3 = local_34, this = local_48,
             (int)local_50 <= local_34)) {
            do {
              this_00 = (void *)FUN_00406100(pvVar4,(uint)local_1c,(uint)fVar12,local_28);
              if (this_00 == (void *)0x0) {
                puVar5 = (undefined4 *)&DAT_005842c4;
              }
              else {
                iVar6 = *(int *)((int)this_00 + 0x10);
                if (iVar3 < iVar6) {
                  puVar5 = (undefined4 *)&DAT_005842c4;
                }
                else if (iVar3 < *(int *)((int)this_00 + 0x1c) + iVar6) {
                  puVar5 = (undefined4 *)FUN_00405f20(this_00,iVar3 - iVar6);
                  if ((((*(byte *)((int)puVar5 + 3) & 0x1f) == 0) && (iVar3 < 1)) &&
                     ((*(byte *)((int)puVar5 + 3) & 0x40) == 0)) {
                    puVar5 = (undefined4 *)&DAT_005842bc;
                  }
                }
                else {
                  puVar5 = (undefined4 *)&DAT_005842bc;
                  if (0 < iVar3) {
                    puVar5 = local_5c;
                  }
                }
              }
              bVar1 = *(byte *)((int)puVar5 + 3);
              bVar2 = bVar1 & 0x1f;
              if (((((bVar1 & 0x1f) == 0) || (bVar2 == 2)) ||
                  ((bVar2 == 4 || ((bVar2 == 9 || (bVar2 == 5)))))) && ((bVar1 & 0x40) == 0)) {
                fVar14 = FUN_004d5d30(SUB84((double)(int)fVar12 * 0.05,0),
                                      (int)((ulonglong)((double)(int)fVar12 * 0.05) >> 0x20),
                                      (double)iVar3 * 0.05);
                local_20 = (float)fVar14;
                local_58 = local_20 * (10.0 / (float)param_4) + (float)local_30 / (float)param_4;
                dVar16 = (double)(int)local_1c * 0.05 + 4374.0;
                fVar14 = FUN_004d5d30(SUB84(dVar16,0),(int)((ulonglong)dVar16 >> 0x20),
                                      (double)iVar3 * 0.05 + 9898.0);
                local_20 = (float)fVar14;
                fVar9 = local_20 * (10.0 / (float)local_44) + (float)local_2c / (float)local_44;
                if (fVar9 * fVar9 + local_58 * local_58 <= 1.0) {
                  local_18 = local_18 & 0xff000000;
                  if (iVar3 == local_34) {
                    iVar6 = FUN_00406100(pvVar4,(uint)local_1c,(uint)fVar12,local_28);
                    if (iVar6 == 0) {
                      fVar14 = (float10)FUN_004f8b40(pvVar4,(int)local_1c,(int)fVar12);
                      local_38 = (float)fVar14;
                      local_20 = local_38;
                    }
                    else {
                      local_38 = *(float *)(iVar6 + 8);
                    }
                    iVar6 = FUN_00406100(pvVar4,(uint)local_1c,(uint)fVar12,local_28);
                    if (iVar6 == 0) {
                      fVar14 = (float10)FUN_004f8570(pvVar4,local_1c,(uint)fVar12);
                      fVar9 = (float)fVar14;
                      local_20 = fVar9;
                    }
                    else {
                      fVar9 = *(float *)(iVar6 + 4);
                    }
                    puVar7 = (uint *)FUN_004f9450(pvVar4,&local_64,local_1c,fVar12,iVar3,fVar9,
                                                  local_38,local_28);
                    local_18 = *puVar7;
                  }
                  else {
                    pfVar8 = FUN_0052d030(pvVar4,&local_14,local_1c,(uint)fVar12,iVar3,local_28);
                    iVar6 = 0;
                    do {
                      iVar11 = iVar6 + 1;
                      *(char *)((int)&local_18 + iVar6) = (char)(int)pfVar8[iVar6];
                      iVar6 = iVar11;
                    } while (iVar11 < 3);
                    local_18 = CONCAT13(6,(undefined3)local_18);
                  }
                  FUN_0041ff00(pvVar4,local_1c,(uint)fVar12,iVar3,(undefined1 *)&local_18,local_28);
                }
              }
              iVar3 = iVar3 + -1;
              fVar13 = local_4c;
              this = local_48;
            } while ((int)local_50 <= iVar3);
          }
          local_2c = local_2c + 1;
          fVar12 = (float)((int)fVar12 + 1);
          iVar3 = local_60;
          fVar9 = local_24;
        } while ((int)fVar12 <= (int)local_24);
      }
      local_1c = (float)((int)local_1c + 1);
      local_30 = local_30 + 1;
    } while ((int)local_1c <= iVar3);
  }
LAB_005002e7:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* stl_fn_509e40 @ 00509e40  kind=lib  attributed-by=ledger  size=6696 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00509e40(void *this,int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  WalkPathBehavior *pWVar3;
  undefined4 *puVar4;
  int *piVar5;
  vfunction1 *pvVar6;
  undefined4 *puVar7;
  SequentialBehavior *this_00;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  Spawn *pSVar14;
  uint uVar15;
  LookAtPlayerBehavior_vftable *pLVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  SequentialBehavior *pSVar22;
  LookAtPlayerBehavior *pLVar23;
  SequentialBehavior_data *pSVar24;
  void *pvVar25;
  bool bVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined4 local_250;
  uint local_24c;
  uint local_248;
  undefined4 local_244;
  uint local_240;
  SequentialBehavior *local_23c;
  WalkPathBehavior *local_238 [2];
  WalkPathBehavior *local_230 [2];
  WalkPathBehavior *local_228 [2];
  WalkPathBehavior *local_220;
  WalkPathBehavior *local_21c;
  WalkPathBehavior *local_218 [3];
  CombatBehavior *local_20c;
  LookAtPlayerBehavior *local_208;
  WalkPathBehavior *local_204 [2];
  WalkPathBehavior *local_1fc;
  uint local_1f8;
  WalkPathBehavior *local_1f4;
  uint local_1f0;
  CombatBehavior *local_1ec;
  uint *local_1e8;
  undefined4 *local_1e4;
  int local_1e0;
  uint local_1dc;
  WalkPathBehavior *local_1d8;
  uint local_1d4;
  SequentialBehavior *local_1d0;
  SequentialBehavior *local_1cc;
  Spawn *local_1c8;
  WalkPathBehavior *local_1c4;
  void *local_1c0;
  WalkPathBehavior *local_1bc;
  Spawn *local_1b8;
  int local_1b4;
  Spawn *local_1b0;
  void *local_1ac;
  Spawn *local_1a8;
  float local_1a4;
  undefined4 *local_1a0;
  WalkPathBehavior **local_19c;
  WalkPathBehavior **local_198;
  WalkPathBehavior **local_194;
  undefined2 local_190 [2];
  undefined4 local_18c;
  undefined4 local_188;
  undefined2 local_184;
  undefined1 local_182;
  undefined2 local_180;
  undefined1 local_17c [256];
  undefined4 local_7c;
  int local_78;
  WalkPathBehavior *local_60;
  Spawn *local_5c;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40 [2];
  WalkPathBehavior *local_38;
  WalkPathBehavior *local_34;
  CombatBehavior *local_30;
  LookAtPlayerBehavior *local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005559d0;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1b4 = param_1;
  uVar10 = *(uint *)(param_1 + 100);
  local_1e8 = (uint *)(param_1 + 0x60);
  local_1d4 = uVar10;
  local_1ac = this;
  pcVar9 = (char *)FUN_0042e880(this,*local_1e8,uVar10);
  iVar11 = local_1b4;
  if ((pcVar9 != (char *)0x0) && (*pcVar9 == '\0')) {
    local_78 = (int)*(float *)((int)this + 0x8000f0);
    local_40[0] = (int)(local_78 + (local_78 >> 0x1f & 0xffU)) >> 8;
    local_40[1] = (int)((int)*(float *)((int)this + 0x8000f4) +
                       ((int)*(float *)((int)this + 0x8000f4) >> 0x1f & 0xffU)) >> 8;
    iVar17 = 0;
    piVar20 = (int *)(param_1 + 0x60);
    do {
      if (*piVar20 != local_40[iVar17]) {
        iVar17 = *(int *)(param_1 + 0xa0);
        pSVar22 = (SequentialBehavior *)(local_1b4 + 0x18);
        local_1d0 = pSVar22;
        if (*(int *)(local_1b4 + 0x1c) - *(int *)(local_1b4 + 0x18) >> 2 <= iVar17)
        goto LAB_00509f85;
        pWVar3 = *(WalkPathBehavior **)((int)local_1ac + 4);
        local_1c0 = (void *)((int)local_1ac + 4);
        local_1a8 = (Spawn *)(&pSVar22->vftablePtr->vfunction1 + iVar17);
        goto LAB_00509f37;
      }
      iVar17 = iVar17 + 1;
      piVar20 = piVar20 + 1;
    } while (iVar17 < 2);
  }
  goto LAB_0050b851;
  while( true ) {
    iVar17 = iVar17 + 1;
    local_1a8 = (Spawn *)&local_1a8->Spawn_data;
    uVar10 = local_1d4;
    if (*(int *)(iVar11 + 0x1c) - (int)pSVar22->vftablePtr >> 2 <= iVar17) break;
LAB_00509f37:
    FUN_00530600(local_1c0,(int *)&local_1d8,
                 (uint *)((CombatBehavior_vftable *)local_1a8->vftablePtr + 9));
    if ((local_1d8 != pWVar3) && ((local_1d8->WalkPathBehavior_data).offset_0x14 != 0))
    goto LAB_0050b851;
  }
LAB_00509f85:
  local_240 = uVar10 * 0x100 + 0x80;
  local_23c = (SequentialBehavior *)(((int)local_240 >> 0x1f) << 0x10 | local_240 >> 0x10);
  uVar10 = *local_1e8 * 0x100 + 0x80;
  local_248 = ((int)uVar10 >> 0x1f) << 0x10 | uVar10 >> 0x10;
  local_240 = local_240 * 0x10000;
  uVar10 = uVar10 * 0x10000;
  local_24c = uVar10;
  local_1f8 = local_240;
  local_1f0 = uVar10;
  local_1dc = local_248;
  local_1cc = local_23c;
  uVar28 = __alldiv(local_240,(uint)local_23c,0x10000,0);
  local_1e0 = (int)((ulonglong)uVar28 >> 0x20);
  local_1d4 = (uint)uVar28;
  uVar29 = __alldiv(uVar10,local_1dc,0x10000,0);
  pvVar25 = local_1ac;
  local_1e0 = (int)((ulonglong)uVar29 >> 0x20);
  local_1c0 = (void *)uVar29;
  iVar11 = FUN_00406100(local_1ac,(uint)local_1c0,(uint)uVar28,local_1b4);
  uVar10 = *(int *)(iVar11 + 0x1c) + *(int *)(iVar11 + 0x10);
  local_1a0 = *(undefined4 **)((int)pvVar25 + 4);
  local_1a8 = (Spawn *)(((int)uVar10 >> 0x1f) << 0x10 | uVar10 >> 0x10);
  local_1bc = (WalkPathBehavior *)(uVar10 * 0x10000);
  puVar12 = (undefined4 *)*local_1a0;
  while (local_60 = local_1bc, local_5c = local_1a8, puVar12 != local_1a0) {
    iVar11 = puVar12[6];
    if ((iVar11 != 0) && (*(char *)(iVar11 + 0x60) == '\0')) {
      local_1b8 = *(Spawn **)(iVar11 + 0x1c);
      local_58 = *(uint *)(iVar11 + 0x10) - local_1f0;
      iStack_54 = (*(int *)(iVar11 + 0x14) - local_1dc) -
                  (uint)(*(uint *)(iVar11 + 0x10) < local_1f0);
      local_50 = *(uint *)(iVar11 + 0x18) - local_1f8;
      iStack_4c = (int)local_1b8 + (-(uint)(*(uint *)(iVar11 + 0x18) < local_1f8) - (int)local_1cc);
      local_48 = (int)*(WalkPathBehavior **)(iVar11 + 0x20) + uVar10 * -0x10000;
      iStack_44 = (*(int *)(iVar11 + 0x24) - (int)local_1a8) -
                  (uint)(*(WalkPathBehavior **)(iVar11 + 0x20) < local_1bc);
      local_20 = (float)CONCAT44(iStack_54,local_58) * 1.5258789e-05;
      local_1a4 = (float)CONCAT44(iStack_44,local_48);
      local_1c = (float)CONCAT44(iStack_4c,local_50) * 1.5258789e-05;
      local_18 = local_1a4 * 1.5258789e-05;
      if (local_1c * local_1c + local_20 * local_20 + local_18 * local_18 < 10000.0)
      goto LAB_0050b851;
      local_1cc = local_23c;
      local_1f8 = local_240;
      local_1dc = local_248;
      local_1f0 = local_24c;
    }
    pSVar22 = local_1d0;
    pvVar25 = local_1ac;
    if (*(char *)((int)puVar12 + 0xd) == '\0') {
      puVar4 = (undefined4 *)puVar12[2];
      if (*(char *)((int)puVar4 + 0xd) == '\0') {
        cVar2 = *(char *)((int)*puVar4 + 0xd);
        puVar12 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar2 == '\0') {
          cVar2 = *(char *)((int)*puVar4 + 0xd);
          puVar12 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar2 = *(char *)((int)puVar12[1] + 0xd);
        puVar7 = (undefined4 *)puVar12[1];
        puVar4 = puVar12;
        while ((puVar12 = puVar7, cVar2 == '\0' && (puVar4 == (undefined4 *)puVar12[2]))) {
          cVar2 = *(char *)((int)puVar12[1] + 0xd);
          puVar7 = (undefined4 *)puVar12[1];
          puVar4 = puVar12;
        }
      }
    }
  }
  iVar11 = FUN_0042e090(pvVar25,(int)local_1c0,local_1d4);
  if (iVar11 != 0) {
    local_1b8 = (Spawn *)0x0;
    local_1b0 = (Spawn *)0x0;
    local_1e0 = 0;
    puVar12 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
    local_8._0_1_ = 0;
    local_8._1_3_ = 0;
    piVar20 = (int *)**(int **)((int)pvVar25 + 4);
    pSVar14 = (Spawn *)0x0;
    local_1e4 = puVar12;
    if (piVar20 != *(int **)((int)pvVar25 + 4)) {
      do {
        piVar5 = piVar20 + 6;
        if ((piVar20[6] != 0) && (*(char *)(piVar20[6] + 0x60) == '\0')) {
          iVar11 = FUN_0052dfb0(puVar12,(undefined4 *)puVar12[1],piVar5);
          if (local_1e0 == 0x15555554) goto LAB_0050af9c;
          local_1e0 = local_1e0 + 1;
          local_1e4[1] = iVar11;
          **(int **)(iVar11 + 4) = iVar11;
          if ((local_1b8 == (Spawn *)0x0) ||
             (pSVar14 = *(Spawn **)(*piVar5 + 400), (int)pSVar14 < (int)local_1b8)) {
            pSVar14 = *(Spawn **)(*piVar5 + 400);
            local_1b8 = pSVar14;
          }
          puVar12 = local_1e4;
          if ((local_1b0 == (Spawn *)0x0) || ((int)local_1b0 < (int)pSVar14)) {
            local_1b0 = pSVar14;
          }
        }
        if (*(char *)((int)piVar20 + 0xd) == '\0') {
          piVar5 = (int *)piVar20[2];
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            cVar2 = *(char *)(*piVar5 + 0xd);
            piVar20 = piVar5;
            piVar5 = (int *)*piVar5;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*piVar5 + 0xd);
              piVar20 = piVar5;
              piVar5 = (int *)*piVar5;
            }
          }
          else {
            cVar2 = *(char *)(piVar20[1] + 0xd);
            piVar8 = (int *)piVar20[1];
            piVar5 = piVar20;
            while ((piVar20 = piVar8, cVar2 == '\0' && (piVar5 == (int *)piVar20[2]))) {
              cVar2 = *(char *)(piVar20[1] + 0xd);
              piVar8 = (int *)piVar20[1];
              piVar5 = piVar20;
            }
          }
        }
        pSVar14 = local_1b0;
      } while (piVar20 != *(int **)((int)local_1ac + 4));
    }
    iVar13 = rand();
    iVar17 = local_1b4;
    iVar11 = *(int *)(local_1b4 + 0xa0);
    local_1a4 = (float)((int)&local_1b8->vftablePtr + iVar13 % ((int)pSVar14 + (1 - (int)local_1b8))
                       );
    *(int *)(local_1b4 + 0xa4) = *(int *)(local_1b4 + 0xa4) + param_2;
    if (iVar11 < (int)(pSVar22->SequentialBehavior_data).offset_0x0 - (int)pSVar22->vftablePtr >> 2)
    {
      do {
        pvVar6 = (&pSVar22->vftablePtr->vfunction1)[iVar11];
        if (pvVar6 != (vfunction1 *)0x0) {
          (*(code *)**(undefined4 **)pvVar6)(1);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)(pSVar22->SequentialBehavior_data).offset_0x0 -
                        (int)pSVar22->vftablePtr >> 2);
    }
    FUN_0045f080(pSVar22,*(uint *)(iVar17 + 0xa0));
    local_19c = (WalkPathBehavior **)0x0;
    local_198 = (WalkPathBehavior **)0x0;
    local_194 = (WalkPathBehavior **)0x0;
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00426d30(&local_19c,1);
    if (local_198 != (WalkPathBehavior **)0x0) {
      *local_198 = (WalkPathBehavior *)0x0;
    }
    local_198 = local_198 + 1;
    local_230[0] = (WalkPathBehavior *)0x9;
    if ((local_230 < local_198) && (local_19c <= local_230)) {
      iVar11 = (int)local_230 - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar17 = (int)local_198 - (int)local_19c >> 2;
        if (iVar17 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_1a0 = (undefined4 *)(iVar17 + 1);
        uVar10 = (int)local_194 - (int)local_19c >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          puVar12 = (undefined4 *)(uVar10 + (uVar10 >> 1));
        }
        if (puVar12 < local_1a0) {
          puVar12 = local_1a0;
        }
        FUN_00426d30(&local_19c,(uint)puVar12);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar11 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar11 = (int)local_198 - (int)local_19c >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar21 = (int)local_194 - (int)local_19c >> 2;
        uVar10 = iVar11 + 1;
        if (0x3fffffff - (uVar21 >> 1) < uVar21) {
          uVar21 = 0;
        }
        else {
          uVar21 = uVar21 + (uVar21 >> 1);
        }
        if (uVar21 < uVar10) {
          uVar21 = uVar10;
        }
        FUN_00426d30(&local_19c,uVar21);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0x9;
      }
    }
    local_198 = local_198 + 1;
    local_238[0] = (WalkPathBehavior *)0xb;
    if ((local_238 < local_198) && (local_19c <= local_238)) {
      iVar11 = (int)local_238 - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar17 = (int)local_198 - (int)local_19c >> 2;
        if (iVar17 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_1a0 = (undefined4 *)(iVar17 + 1);
        uVar10 = (int)local_194 - (int)local_19c >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          puVar12 = (undefined4 *)(uVar10 + (uVar10 >> 1));
        }
        if (puVar12 < local_1a0) {
          puVar12 = local_1a0;
        }
        FUN_00426d30(&local_19c,(uint)puVar12);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar11 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar11 = (int)local_198 - (int)local_19c >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar21 = (int)local_194 - (int)local_19c >> 2;
        uVar10 = iVar11 + 1;
        if (0x3fffffff - (uVar21 >> 1) < uVar21) {
          uVar21 = 0;
        }
        else {
          uVar21 = uVar21 + (uVar21 >> 1);
        }
        if (uVar21 < uVar10) {
          uVar21 = uVar10;
        }
        FUN_00426d30(&local_19c,uVar21);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0xb;
      }
    }
    local_198 = local_198 + 1;
    local_204[0] = (WalkPathBehavior *)0x4;
    if ((local_204 < local_198) && (local_19c <= local_204)) {
      iVar11 = (int)local_204 - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar17 = (int)local_198 - (int)local_19c >> 2;
        if (iVar17 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_1a0 = (undefined4 *)(iVar17 + 1);
        uVar10 = (int)local_194 - (int)local_19c >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          puVar12 = (undefined4 *)(uVar10 + (uVar10 >> 1));
        }
        if (puVar12 < local_1a0) {
          puVar12 = local_1a0;
        }
        FUN_00426d30(&local_19c,(uint)puVar12);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar11 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar11 = (int)local_198 - (int)local_19c >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar21 = (int)local_194 - (int)local_19c >> 2;
        uVar10 = iVar11 + 1;
        if (0x3fffffff - (uVar21 >> 1) < uVar21) {
          uVar21 = 0;
        }
        else {
          uVar21 = uVar21 + (uVar21 >> 1);
        }
        if (uVar21 < uVar10) {
          uVar21 = uVar10;
        }
        FUN_00426d30(&local_19c,uVar21);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0x4;
      }
    }
    local_198 = local_198 + 1;
    local_1fc = (WalkPathBehavior *)0x7;
    if ((&local_1fc < local_198) && (local_19c <= &local_1fc)) {
      iVar11 = (int)&local_1fc - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar17 = (int)local_198 - (int)local_19c >> 2;
        if (iVar17 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_1a0 = (undefined4 *)(iVar17 + 1);
        uVar10 = (int)local_194 - (int)local_19c >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          puVar12 = (undefined4 *)(uVar10 + (uVar10 >> 1));
        }
        if (puVar12 < local_1a0) {
          puVar12 = local_1a0;
        }
        FUN_00426d30(&local_19c,(uint)puVar12);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar11 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar11 = (int)local_198 - (int)local_19c >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar21 = (int)local_194 - (int)local_19c >> 2;
        uVar10 = iVar11 + 1;
        if (0x3fffffff - (uVar21 >> 1) < uVar21) {
          uVar21 = 0;
        }
        else {
          uVar21 = uVar21 + (uVar21 >> 1);
        }
        if (uVar21 < uVar10) {
          uVar21 = uVar10;
        }
        FUN_00426d30(&local_19c,uVar21);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0x7;
      }
    }
    local_198 = local_198 + 1;
    local_218[0] = (WalkPathBehavior *)0xf;
    if ((local_218 < local_198) && (local_19c <= local_218)) {
      iVar11 = (int)local_218 - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar17 = (int)local_198 - (int)local_19c >> 2;
        if (iVar17 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_1a0 = (undefined4 *)(iVar17 + 1);
        uVar10 = (int)local_194 - (int)local_19c >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          puVar12 = (undefined4 *)(uVar10 + (uVar10 >> 1));
        }
        if (puVar12 < local_1a0) {
          puVar12 = local_1a0;
        }
        FUN_00426d30(&local_19c,(uint)puVar12);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar11 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar11 = (int)local_198 - (int)local_19c >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar21 = (int)local_194 - (int)local_19c >> 2;
        uVar10 = iVar11 + 1;
        if (0x3fffffff - (uVar21 >> 1) < uVar21) {
          uVar21 = 0;
        }
        else {
          uVar21 = uVar21 + (uVar21 >> 1);
        }
        if (uVar21 < uVar10) {
          uVar21 = uVar10;
        }
        FUN_00426d30(&local_19c,uVar21);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0xf;
      }
    }
    local_198 = local_198 + 1;
    local_220 = (WalkPathBehavior *)0x2;
    if ((&local_220 < local_198) && (local_19c <= &local_220)) {
      iVar11 = (int)&local_220 - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar17 = (int)local_198 - (int)local_19c >> 2;
        if (iVar17 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_1a0 = (undefined4 *)(iVar17 + 1);
        uVar10 = (int)local_194 - (int)local_19c >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          puVar12 = (undefined4 *)(uVar10 + (uVar10 >> 1));
        }
        if (puVar12 < local_1a0) {
          puVar12 = local_1a0;
        }
        FUN_00426d30(&local_19c,(uint)puVar12);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar11 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar11 = (int)local_198 - (int)local_19c >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar21 = (int)local_194 - (int)local_19c >> 2;
        uVar10 = iVar11 + 1;
        if (0x3fffffff - (uVar21 >> 1) < uVar21) {
          uVar21 = 0;
        }
        else {
          uVar21 = uVar21 + (uVar21 >> 1);
        }
        if (uVar21 < uVar10) {
          uVar21 = uVar10;
        }
        FUN_00426d30(&local_19c,uVar21);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0x2;
      }
    }
    local_198 = local_198 + 1;
    local_228[0] = (WalkPathBehavior *)0xd;
    if ((local_228 < local_198) && (local_19c <= local_228)) {
      iVar11 = (int)local_228 - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar17 = (int)local_198 - (int)local_19c >> 2;
        if (iVar17 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_1a0 = (undefined4 *)(iVar17 + 1);
        uVar10 = (int)local_194 - (int)local_19c >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          puVar12 = (undefined4 *)(uVar10 + (uVar10 >> 1));
        }
        if (puVar12 < local_1a0) {
          puVar12 = local_1a0;
        }
        FUN_00426d30(&local_19c,(uint)puVar12);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar11 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar11 = (int)local_198 - (int)local_19c >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar21 = (int)local_194 - (int)local_19c >> 2;
        uVar10 = iVar11 + 1;
        if (0x3fffffff - (uVar21 >> 1) < uVar21) {
          uVar21 = 0;
        }
        else {
          uVar21 = uVar21 + (uVar21 >> 1);
        }
        if (uVar21 < uVar10) {
          uVar21 = uVar10;
        }
        FUN_00426d30(&local_19c,uVar21);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0xd;
      }
    }
    local_198 = local_198 + 1;
    local_21c = (WalkPathBehavior *)0x33;
    if ((&local_21c < local_198) && (local_19c <= &local_21c)) {
      iVar11 = (int)&local_21c - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar17 = (int)local_198 - (int)local_19c >> 2;
        if (iVar17 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar10 = (int)local_194 - (int)local_19c >> 2;
        uVar21 = iVar17 + 1;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar21) {
          uVar10 = uVar21;
        }
        FUN_00426d30(&local_19c,uVar10);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar11 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar11 = (int)local_198 - (int)local_19c >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar10 = (int)local_194 - (int)local_19c >> 2;
        uVar21 = iVar11 + 1;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar21) {
          uVar10 = uVar21;
        }
        FUN_00426d30(&local_19c,uVar10);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0x33;
      }
    }
    local_198 = local_198 + 1;
    local_244 = 0x30;
    FUN_004f2be0(&local_19c,&local_244);
    local_250 = 0x4c;
    FUN_004f2be0(&local_19c,&local_250);
    local_1f4 = (WalkPathBehavior *)0x2d;
    FUN_004f2be0(&local_19c,&local_1f4);
    local_204[1] = (WalkPathBehavior *)0x2b;
    FUN_004f2be0(&local_19c,local_204 + 1);
    iVar11 = (int)local_198 - (int)local_19c;
    uVar10 = rand();
    local_1d8 = local_19c[uVar10 % (uint)(iVar11 >> 2)];
    pSVar14 = operator_new(0x10f0);
    if (pSVar14 == (Spawn *)0x0) {
      local_1b8 = (Spawn *)0x0;
    }
    else {
      local_1b8 = cube::Spawn::Spawn(pSVar14);
    }
    pSVar14 = local_1b8;
    local_1b0 = local_1b8;
    uVar10 = rand();
    uVar10 = uVar10 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    (pSVar14->Spawn_data).offset_0x24 = (-(uint)(uVar10 != 0) & 0xfffffffe) + 3;
    *(uint *)&(pSVar14->Spawn_data).field_0xc = local_1f0;
    *(uint *)&(pSVar14->Spawn_data).field_0x14 = local_1f8;
    *(WalkPathBehavior **)&(pSVar14->Spawn_data).field_0x1c = local_1bc;
    *(uint *)&(pSVar14->Spawn_data).field_0x10 = local_1dc;
    *(SequentialBehavior **)&(pSVar14->Spawn_data).field_0x18 = local_1cc;
    *(Spawn **)&(pSVar14->Spawn_data).field_0x20 = local_1a8;
    __alldiv(*(uint *)&(pSVar14->Spawn_data).field_0x1c,(uint)local_1a8,0x10000,0);
    __alldiv(*(uint *)&(pSVar14->Spawn_data).field_0x14,*(uint *)&(pSVar14->Spawn_data).field_0x18,
             0x10000,0);
    __alldiv(*(uint *)&(pSVar14->Spawn_data).field_0xc,*(uint *)&(pSVar14->Spawn_data).field_0x10,
             0x10000,0);
    pvVar25 = local_1ac;
    uVar10 = FUN_0052bfa0();
    (pSVar14->Spawn_data).offset_0x28 = uVar10;
    (pSVar14->Spawn_data).offset_0x30 = local_1a4;
    (pSVar14->Spawn_data).offset_0x54 = 0;
    local_1c8 = operator_new(0xc);
    local_8._0_1_ = 2;
    if (local_1c8 == (Spawn *)0x0) {
      local_1cc = (SequentialBehavior *)0x0;
    }
    else {
      local_1cc = cube::SequentialBehavior::SequentialBehavior((SequentialBehavior *)local_1c8);
    }
    pSVar22 = local_1cc;
    local_8._0_1_ = 1;
    local_1c8 = operator_new(0x14);
    local_8._0_1_ = 3;
    if (local_1c8 == (Spawn *)0x0) {
      local_1ec = (CombatBehavior *)0x0;
    }
    else {
      local_1ec = cube::CombatBehavior::CombatBehavior((CombatBehavior *)local_1c8,0x41a00000);
    }
    puVar12 = (pSVar22->SequentialBehavior_data).offset_0x0;
    local_8._0_1_ = 1;
    iVar17 = FUN_0052dfb0(puVar12,(undefined4 *)puVar12[1],&local_1ec);
    iVar11 = (pSVar22->SequentialBehavior_data).offset_0x4;
    if (iVar11 == 0x15555554) {
LAB_0050af9c:
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    (pSVar22->SequentialBehavior_data).offset_0x4 = iVar11 + 1;
    puVar12[1] = iVar17;
    **(int **)(iVar17 + 4) = iVar17;
    local_1c8 = operator_new(4);
    local_8._0_1_ = 4;
    if (local_1c8 == (Spawn *)0x0) {
      local_208 = (LookAtPlayerBehavior *)0x0;
    }
    else {
      local_208 = cube::LookAtPlayerBehavior::LookAtPlayerBehavior
                            ((LookAtPlayerBehavior *)local_1c8);
    }
    puVar12 = (pSVar22->SequentialBehavior_data).offset_0x0;
    local_8._0_1_ = 1;
    iVar17 = FUN_0052dfb0(puVar12,(undefined4 *)puVar12[1],&local_208);
    iVar11 = (pSVar22->SequentialBehavior_data).offset_0x4;
    if (iVar11 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    (pSVar22->SequentialBehavior_data).offset_0x4 = iVar11 + 1;
    puVar12[1] = iVar17;
    **(int **)(iVar17 + 4) = iVar17;
    local_1c8 = operator_new(0x1c);
    local_8._0_1_ = 5;
    if (local_1c8 == (Spawn *)0x0) {
      local_1bc = (WalkPathBehavior *)0x0;
    }
    else {
      local_1bc = cube::WalkPathBehavior::WalkPathBehavior((WalkPathBehavior *)local_1c8,0x41200000)
      ;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1a8 = (Spawn *)0x14;
    do {
      iVar11 = rand();
      uVar10 = *(int *)(local_1b4 + 100) * 0x100 + 0x10 + iVar11 % 0xe0;
      pLVar23 = (LookAtPlayerBehavior *)(((int)uVar10 >> 0x1f) << 0x10 | uVar10 >> 0x10);
      local_208 = pLVar23;
      local_1ec = (CombatBehavior *)(uVar10 * 0x10000);
      iVar11 = rand();
      uVar21 = *local_1e8 * 0x100 + 0x10 + iVar11 % 0xe0;
      local_204[1] = (WalkPathBehavior *)(((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10);
      local_1f4 = (WalkPathBehavior *)(uVar21 * 0x10000);
      local_38 = local_1f4;
      local_34 = local_204[1];
      local_30 = (CombatBehavior *)(uVar10 * 0x10000);
      local_2c = pLVar23;
      iVar11 = FUN_00406100(pvVar25,(uint)local_1c0,local_1d4,local_1b4);
      uVar10 = *(uint *)(iVar11 + 0x14);
      uVar21 = ((int)uVar10 >> 0x1f) << 0x10 | uVar10 >> 0x10;
      uVar10 = uVar10 << 0x10;
      iVar11 = 0;
      do {
        local_28 = uVar10;
        local_24 = uVar21;
        iVar17 = FUN_00406050(local_1ac,(uint)local_1f4,(uint)local_204[1],(uint)local_1ec,
                              (uint)local_208,uVar10,uVar21,local_1b4);
        local_218[2] = local_1bc;
        if (((*(byte *)(iVar17 + 3) & 0x1f) == 0) || ((*(byte *)(iVar17 + 3) & 0x1f) == 2)) break;
        bVar26 = 0xfffeffff < uVar10;
        uVar10 = uVar10 + 0x10000;
        uVar21 = uVar21 + bVar26;
        iVar11 = iVar11 + 1;
        local_28 = uVar10;
        local_24 = uVar21;
      } while (iVar11 < 100);
      FUN_004e1420(&local_1bc->WalkPathBehavior_data,local_40 + 2);
      pSVar22 = local_1cc;
      local_1a8 = (Spawn *)((int)&local_1a8[-1].Spawn_data.offset_0xf70 + 3);
      pvVar25 = local_1ac;
    } while (local_1a8 != (Spawn *)0x0);
    puVar12 = (local_1cc->SequentialBehavior_data).offset_0x0;
    iVar17 = FUN_0052dfb0(puVar12,(undefined4 *)puVar12[1],local_218 + 2);
    iVar11 = (pSVar22->SequentialBehavior_data).offset_0x4;
    if (iVar11 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    (pSVar22->SequentialBehavior_data).offset_0x4 = iVar11 + 1;
    puVar12[1] = iVar17;
    **(int **)(iVar17 + 4) = iVar17;
    local_1c8 = operator_new(8);
    local_8._0_1_ = 6;
    if (local_1c8 == (Spawn *)0x0) {
      local_230[1] = (WalkPathBehavior *)0x0;
    }
    else {
      local_230[1] = (WalkPathBehavior *)
                     cube::RandomWalkBehavior::RandomWalkBehavior((RandomWalkBehavior *)local_1c8);
    }
    puVar12 = (pSVar22->SequentialBehavior_data).offset_0x0;
    local_8._0_1_ = 1;
    iVar17 = FUN_0052dfb0(puVar12,(undefined4 *)puVar12[1],local_230 + 1);
    pSVar14 = local_1b8;
    this_00 = local_1d0;
    iVar11 = (pSVar22->SequentialBehavior_data).offset_0x4;
    if (iVar11 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    (pSVar22->SequentialBehavior_data).offset_0x4 = iVar11 + 1;
    puVar12[1] = iVar17;
    **(int **)(iVar17 + 4) = iVar17;
    *(SequentialBehavior **)&local_1b8[1].Spawn_data.field_0x120 = pSVar22;
    uVar10 = *(uint *)(local_1b4 + 100);
    uVar21 = *local_1e8;
    uVar18 = uVar10 * 0x10000 + uVar21;
    iVar11 = (int)(local_1d0->SequentialBehavior_data).offset_0x0 - (int)local_1d0->vftablePtr;
    uVar15 = iVar11 >> 2;
    uVar19 = uVar18 * 0x100;
    (local_1b8->Spawn_data).offset_0x44 = uVar19 + uVar15;
    (local_1b8->Spawn_data).offset_0x48 =
         (((((int)uVar10 >> 0x1f) << 0x10 | uVar10 >> 0x10) + ((int)uVar21 >> 0x1f) +
          (uint)CARRY4(uVar10 * 0x10000,uVar21)) * 0x100 | uVar18 >> 0x18) + (iVar11 >> 0x1f) +
         (uint)CARRY4(uVar19,uVar15);
    uVar10 = rand();
    uVar10 = uVar10 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    local_18c = 0;
    local_188 = 0;
    local_184 = 0;
    local_182 = 0;
    local_7c = 0;
    memset(local_17c,0,0x100);
    local_180 = *(undefined2 *)&(pSVar14->Spawn_data).offset_0x30;
    local_190[0] = 0x101;
    if (0 < (int)uVar10) {
      do {
        FUN_00427000(&(pSVar14->Spawn_data).offset_0xf68,(char *)local_190,-1);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    FUN_004f2be0(this_00,&local_1b0);
    iVar11 = rand();
    dVar27 = (double)((float)iVar11 / 32767.0);
    libm_sse2_pow_precise();
    local_218[2] = (WalkPathBehavior *)(int)((float)dVar27 * 4.0);
    if (0 < (int)local_218[2]) {
      local_1c0 = (void *)0x1;
      do {
        pvVar25 = local_1c0;
        pSVar14 = operator_new(0x10f0);
        if (pSVar14 == (Spawn *)0x0) {
          local_1a8 = (Spawn *)0x0;
        }
        else {
          local_1a8 = cube::Spawn::Spawn(pSVar14);
        }
        pSVar14 = local_1a8;
        (local_1a8->Spawn_data).offset_0x24 = (local_1b0->Spawn_data).offset_0x24;
        *(undefined4 *)&(local_1a8->Spawn_data).field_0xc =
             *(undefined4 *)&(local_1b0->Spawn_data).field_0xc;
        *(undefined4 *)&(local_1a8->Spawn_data).field_0x10 =
             *(undefined4 *)&(local_1b0->Spawn_data).field_0x10;
        *(undefined4 *)&(local_1a8->Spawn_data).field_0x14 =
             *(undefined4 *)&(local_1b0->Spawn_data).field_0x14;
        *(undefined4 *)&(local_1a8->Spawn_data).field_0x18 =
             *(undefined4 *)&(local_1b0->Spawn_data).field_0x18;
        *(undefined4 *)&(local_1a8->Spawn_data).field_0x1c =
             *(undefined4 *)&(local_1b0->Spawn_data).field_0x1c;
        *(undefined4 *)&(local_1a8->Spawn_data).field_0x20 =
             *(undefined4 *)&(local_1b0->Spawn_data).field_0x20;
        uVar10 = (uint)pvVar25 & 0x80000001;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
        }
        puVar1 = &(local_1b0->Spawn_data).field_0xc;
        uVar21 = *(uint *)puVar1;
        *(uint *)puVar1 = *(int *)puVar1 + uVar10 * 0x10000;
        puVar1 = &(local_1b0->Spawn_data).field_0x10;
        *(uint *)puVar1 =
             *(int *)puVar1 + (((int)uVar10 >> 0x1f) << 0x10 | uVar10 >> 0x10) +
             (uint)CARRY4(uVar21,uVar10 * 0x10000);
        uVar21 = (int)pvVar25 / 2;
        puVar1 = &(local_1b0->Spawn_data).field_0x14;
        uVar10 = *(uint *)puVar1;
        *(uint *)puVar1 = *(int *)puVar1 + uVar21 * 0x10000;
        puVar1 = &(local_1b0->Spawn_data).field_0x18;
        *(uint *)puVar1 =
             *(int *)puVar1 + (((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10) +
             (uint)CARRY4(uVar10,uVar21 * 0x10000);
        local_1c8 = local_1a8;
        __alldiv(*(uint *)&(local_1a8->Spawn_data).field_0x1c,
                 *(uint *)&(local_1a8->Spawn_data).field_0x20,0x10000,0);
        __alldiv(*(uint *)&(pSVar14->Spawn_data).field_0x14,
                 *(uint *)&(pSVar14->Spawn_data).field_0x18,0x10000,0);
        __alldiv(*(uint *)&(local_1a8->Spawn_data).field_0xc,
                 *(uint *)&(local_1a8->Spawn_data).field_0x10,0x10000,0);
        uVar10 = FUN_0052bfa0();
        pSVar14 = local_1a8;
        (local_1a8->Spawn_data).offset_0x28 = uVar10;
        (local_1a8->Spawn_data).offset_0x30 = (local_1b0->Spawn_data).offset_0x30;
        (local_1a8->Spawn_data).offset_0x54 = (local_1b0->Spawn_data).offset_0x54;
        local_1c4 = operator_new(0xc);
        local_8._0_1_ = 7;
        if (local_1c4 == (WalkPathBehavior *)0x0) {
          local_1d0 = (SequentialBehavior *)0x0;
        }
        else {
          local_1d0 = cube::SequentialBehavior::SequentialBehavior((SequentialBehavior *)local_1c4);
        }
        pSVar22 = local_1d0;
        local_8._0_1_ = 1;
        local_1c4 = operator_new(0x14);
        local_8._0_1_ = 8;
        if (local_1c4 == (WalkPathBehavior *)0x0) {
          local_20c = (CombatBehavior *)0x0;
        }
        else {
          local_20c = cube::CombatBehavior::CombatBehavior((CombatBehavior *)local_1c4,0x41a00000);
        }
        pSVar24 = &pSVar22->SequentialBehavior_data;
        local_230[1] = (WalkPathBehavior *)pSVar24->offset_0x0;
        local_8._0_1_ = 1;
        iVar17 = FUN_0052dfb0((undefined4 *)local_230[1],
                              (undefined4 *)
                              (((RandomWalkBehavior *)local_230[1])->RandomWalkBehavior_data).
                              offset_0x0,&local_20c);
        iVar11 = (pSVar22->SequentialBehavior_data).offset_0x4;
        if (iVar11 == 0x15555554) goto LAB_0050af9c;
        (pSVar22->SequentialBehavior_data).offset_0x4 = iVar11 + 1;
        ((RandomWalkBehavior_data *)&local_230[1]->WalkPathBehavior_data)->offset_0x0 = iVar17;
        **(int **)(iVar17 + 4) = iVar17;
        local_1c4 = operator_new(4);
        local_8._0_1_ = 9;
        if (local_1c4 == (WalkPathBehavior *)0x0) {
          local_228[1] = (WalkPathBehavior *)0x0;
        }
        else {
          local_228[1] = (WalkPathBehavior *)
                         cube::LookAtPlayerBehavior::LookAtPlayerBehavior
                                   ((LookAtPlayerBehavior *)local_1c4);
        }
        local_20c = (CombatBehavior *)pSVar24->offset_0x0;
        local_8._0_1_ = 1;
        iVar17 = FUN_0052dfb0((undefined4 *)local_20c,
                              (undefined4 *)(local_20c->CombatBehavior_data).offset_0x0,
                              local_228 + 1);
        iVar11 = (pSVar22->SequentialBehavior_data).offset_0x4;
        if (iVar11 == 0x15555554) goto LAB_0050af9c;
        (pSVar22->SequentialBehavior_data).offset_0x4 = iVar11 + 1;
        (local_20c->CombatBehavior_data).offset_0x0 = iVar17;
        **(int **)(iVar17 + 4) = iVar17;
        local_1c4 = operator_new(0x10);
        local_8._0_1_ = 10;
        if (local_1c4 == (WalkPathBehavior *)0x0) {
          local_218[1] = (WalkPathBehavior *)0x0;
        }
        else {
          local_218[1] = (WalkPathBehavior *)
                         cube::CompanionBehavior::CompanionBehavior
                                   ((CompanionBehavior *)local_1c4,
                                    (local_1b0->Spawn_data).offset_0x44,
                                    (local_1b0->Spawn_data).offset_0x48);
        }
        local_228[1] = (WalkPathBehavior *)pSVar24->offset_0x0;
        local_8._0_1_ = 1;
        pLVar16 = (LookAtPlayerBehavior_vftable *)
                  FUN_0052dfb0((undefined4 *)local_228[1],
                               &((LookAtPlayerBehavior *)((int)local_228[1] + 4))->vftablePtr->
                                vfunction1,local_218 + 1);
        iVar11 = (pSVar22->SequentialBehavior_data).offset_0x4;
        if (iVar11 == 0x15555554) goto LAB_0050af9c;
        (pSVar22->SequentialBehavior_data).offset_0x4 = iVar11 + 1;
        ((LookAtPlayerBehavior *)((int)local_228[1] + 4))->vftablePtr = pLVar16;
        *(LookAtPlayerBehavior_vftable **)pLVar16->vfunction2 = pLVar16;
        local_1c4 = operator_new(0x1c);
        local_8._0_1_ = 0xb;
        if (local_1c4 == (WalkPathBehavior *)0x0) {
          local_238[1] = (WalkPathBehavior *)0x0;
        }
        else {
          local_238[1] = cube::WalkPathBehavior::WalkPathBehavior(local_1c4,(int)local_1bc);
        }
        local_218[1] = (WalkPathBehavior *)pSVar24->offset_0x0;
        local_8._0_1_ = 1;
        iVar17 = FUN_0052dfb0((undefined4 *)local_218[1],
                              *(undefined4 **)
                               &((CompanionBehavior *)local_218[1])->CompanionBehavior_data,
                              local_238 + 1);
        iVar11 = (pSVar22->SequentialBehavior_data).offset_0x4;
        if (iVar11 == 0x15555554) goto LAB_0050af9c;
        (pSVar22->SequentialBehavior_data).offset_0x4 = iVar11 + 1;
        *(int *)&local_218[1]->WalkPathBehavior_data = iVar17;
        **(int **)(iVar17 + 4) = iVar17;
        local_1c4 = operator_new(8);
        local_8._0_1_ = 0xc;
        if (local_1c4 == (WalkPathBehavior *)0x0) {
          local_1c4 = (WalkPathBehavior *)0x0;
        }
        else {
          local_1c4 = (WalkPathBehavior *)
                      cube::RandomWalkBehavior::RandomWalkBehavior((RandomWalkBehavior *)local_1c4);
        }
        local_238[1] = (WalkPathBehavior *)pSVar24->offset_0x0;
        local_8._0_1_ = 1;
        iVar17 = FUN_0052dfb0((undefined4 *)local_238[1],
                              (undefined4 *)(local_238[1]->WalkPathBehavior_data).offset_0x0,
                              &local_1c4);
        iVar11 = (pSVar22->SequentialBehavior_data).offset_0x4;
        if (iVar11 == 0x15555554) goto LAB_0050af9c;
        (pSVar22->SequentialBehavior_data).offset_0x4 = iVar11 + 1;
        (local_238[1]->WalkPathBehavior_data).offset_0x0 = iVar17;
        **(int **)(iVar17 + 4) = iVar17;
        *(SequentialBehavior **)&pSVar14[1].Spawn_data.field_0x120 = local_1d0;
        uVar10 = rand();
        uVar10 = uVar10 & 0x80000001;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
        }
        if (0 < (int)uVar10) {
          do {
            FUN_00427000(&(pSVar14->Spawn_data).offset_0xf68,(char *)local_190,-1);
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        FUN_004f2be0(this_00,&local_1c8);
        pvVar25 = (void *)((int)local_1c0 + 1);
        bVar26 = (int)local_1c0 < (int)local_218[2];
        local_1c0 = pvVar25;
      } while (bVar26);
    }
    uVar10 = *(uint *)(local_1b4 + 0xa0);
    if ((int)uVar10 <
        (int)(this_00->SequentialBehavior_data).offset_0x0 - (int)this_00->vftablePtr >> 2) {
      do {
        uVar21 = *(uint *)(local_1b4 + 100);
        uVar15 = *local_1e8;
        uVar18 = uVar21 * 0x10000 + uVar15;
        uVar19 = uVar18 * 0x100;
        pvVar6 = (&this_00->vftablePtr->vfunction1)[uVar10];
        *(uint *)(pvVar6 + 0x48) = uVar19 + uVar10;
        *(uint *)(pvVar6 + 0x4c) =
             (((((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10) + ((int)uVar15 >> 0x1f) +
              (uint)CARRY4(uVar21 * 0x10000,uVar15)) * 0x100 | uVar18 >> 0x18) +
             ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar19,uVar10);
        pvVar6 = (&this_00->vftablePtr->vfunction1)[uVar10];
        FUN_0040a840((uint *)(pvVar6 + 0x2c),(int)(pvVar6 + 0x74),(undefined4 *)0x0);
        FUN_004fb480((int)(&this_00->vftablePtr->vfunction1)[uVar10],0);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 <
               (int)(this_00->SequentialBehavior_data).offset_0x0 - (int)this_00->vftablePtr >> 2);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_19c != (WalkPathBehavior **)0x0) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)&local_19c);
      operator_delete(local_19c);
      local_19c = (WalkPathBehavior **)0x0;
      local_198 = (WalkPathBehavior **)0x0;
      local_194 = (WalkPathBehavior **)0x0;
    }
    puVar4 = local_1e4;
    puVar12 = (undefined4 *)*local_1e4;
    *local_1e4 = local_1e4;
    local_1e4[1] = local_1e4;
    while (puVar12 != puVar4) {
      puVar7 = (undefined4 *)*puVar12;
      operator_delete(puVar12);
      puVar12 = puVar7;
    }
    operator_delete(puVar4);
  }
LAB_0050b851:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* lib_fn_50b870 @ 0050b870  kind=lib  attributed-by=ledger  size=1252 */

int * __thiscall FUN_0050b870(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (0x3ff < param_1)) || (0x3ff < param_2)) {
    return (int *)0x0;
  }
  iVar1 = param_1 * 0x400 + param_2;
  piVar2 = *(int **)((int)this + iVar1 * 4 + 0x4000bc);
  if (piVar2 != (int *)0x0) {
    return piVar2;
  }
  srand(param_1 + 0x108a + param_2 * 0x400 + *(int *)((int)this + 0x800188) * 3);
  piVar2 = operator_new(0x1c);
  piVar2[5] = param_2 * 0x400 + param_1 + *(int *)((int)this + 0x800188);
  *(undefined1 *)(piVar2 + 2) = 0;
  iVar3 = (int)*(float *)((int)this + 0x8000f0) +
          ((int)*(float *)((int)this + 0x8000f0) >> 0x1f & 0xffU);
  if ((param_1 != (int)((iVar3 >> 8) + (iVar3 >> 0x1f & 0x3fU)) >> 6) ||
     (bVar7 = true,
     iVar3 = (int)*(float *)((int)this + 0x8000f4) +
             ((int)*(float *)((int)this + 0x8000f4) >> 0x1f & 0xffU),
     param_2 != (int)((iVar3 >> 8) + (iVar3 >> 0x1f & 0x3fU)) >> 6)) {
    bVar7 = false;
  }
  uVar4 = rand();
  uVar4 = uVar4 & 0x80000001;
  bVar6 = uVar4 == 0;
  if ((int)uVar4 < 0) {
    bVar6 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if ((bVar6) || (bVar7)) {
    iVar3 = rand();
    piVar2[3] = (int)(((float)iVar3 * 0.4) / 32767.0 + 0.3);
    iVar3 = rand();
    piVar2[4] = (int)(((float)iVar3 * 0.4) / 32767.0 + 0.4);
    if (bVar7) {
      iVar3 = (int)*(float *)((int)this + 0x8000f0);
      piVar2[1] = (int)*(float *)((int)this + 0x8000f4);
      goto LAB_0050bb29;
    }
    iVar3 = rand();
    if (iVar3 % 10 == 0) {
      *(undefined1 *)(piVar2 + 2) = 1;
      iVar3 = rand();
      piVar2[4] = (int)(((float)iVar3 * 0.2) / 32767.0 + 0.8);
      iVar3 = rand();
      piVar2[3] = (int)(((float)iVar3 * 0.5) / 32767.0);
    }
  }
  else {
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000001;
    bVar6 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar6 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar6) {
      iVar3 = rand();
      fVar10 = ((float)iVar3 * 0.1) / 32767.0;
    }
    else {
      iVar3 = rand();
      fVar10 = ((float)iVar3 * 0.1) / 32767.0 + 0.9;
    }
    piVar2[3] = (int)fVar10;
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000001;
    bVar6 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar6 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar6) {
      iVar3 = rand();
      piVar2[4] = (int)(((float)iVar3 * 0.1) / 32767.0);
    }
    else {
      iVar3 = rand();
      piVar2[4] = (int)(((float)iVar3 * 0.1) / 32767.0 + 0.9);
    }
  }
  iVar3 = rand();
  iVar5 = rand();
  piVar2[1] = param_2 * 0x4000 + iVar3 % 0x3c00 + 0x200;
  iVar3 = param_1 * 0x4000 + 0x200 + iVar5 % 0x3c00;
LAB_0050bb29:
  *piVar2 = iVar3;
  *piVar2 = (iVar3 + (iVar3 >> 0x1f & 0x7ffU) & 0xfffff800) + 0x400;
  piVar2[1] = (piVar2[1] + (piVar2[1] >> 0x1f & 0x7ffU) & 0xfffff800) + 0x400;
  dVar12 = (double)*(int *)((int)this + 0x800188);
  dVar11 = (double)param_1 * 1.4 + dVar12;
  fVar8 = FUN_004d5d30(SUB84(dVar11,0),(int)((ulonglong)dVar11 >> 0x20),
                       (double)param_2 * 1.4 + dVar12 + 843.0);
  dVar11 = (double)param_1 * 4.0 + dVar12;
  fVar9 = FUN_004d5d30(SUB84(dVar11,0),(int)((ulonglong)dVar11 >> 0x20),
                       (double)param_2 * 4.0 + dVar12 + 843.0);
  iVar3 = (int)((((float)fVar8 + 1.0) * 100.0 - 70.0) + (float)fVar9 * 30.0);
  piVar2[6] = iVar3;
  if (iVar3 < 1) {
    *(undefined1 *)(piVar2 + 2) = 0;
    if (bVar7) {
      iVar3 = rand();
      piVar2[6] = iVar3 % 0x32 + 0x14;
      *(int **)((int)this + iVar1 * 4 + 0x4000bc) = piVar2;
      return piVar2;
    }
    piVar2[6] = piVar2[6] + -100;
    iVar3 = piVar2[6];
    if (iVar3 < -100) {
      iVar3 = -100;
    }
    piVar2[6] = iVar3;
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000001;
    bVar7 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar7 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar7) {
      iVar3 = rand();
      piVar2[3] = (int)(((float)iVar3 * 0.1) / 32767.0 + 0.9);
      iVar3 = rand();
      fVar10 = ((float)iVar3 * 0.1) / 32767.0 + 0.9;
    }
    else {
      iVar3 = rand();
      piVar2[3] = (int)(((float)iVar3 * 0.4) / 32767.0 + 0.3);
      iVar3 = rand();
      fVar10 = ((float)iVar3 * 0.4) / 32767.0 + 0.4;
    }
    piVar2[4] = (int)fVar10;
  }
  *(int **)((int)this + iVar1 * 4 + 0x4000bc) = piVar2;
  return piVar2;
}


/* lib_fn_50bd60 @ 0050bd60  kind=lib  attributed-by=ledger  size=2010 */

void FUN_0050bd60(int param_1,int param_2,int param_3,float param_4,float param_5,undefined8 param_6
                 ,float param_7,undefined8 param_8,float param_9,int param_10,int param_11)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  float10 fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined2 local_98;
  undefined1 local_96;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_91;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined8 local_88;
  double local_80;
  void *local_78;
  int local_74;
  float local_70;
  float local_6c;
  undefined8 local_68;
  float local_60;
  undefined8 local_5c;
  float local_54;
  undefined8 local_50;
  float local_48;
  undefined8 local_44;
  float local_3c;
  float local_38;
  float fStack_34;
  float local_30;
  undefined8 local_2c;
  float local_24;
  undefined8 local_20;
  float local_18;
  float local_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  dVar24 = (double)param_1 + 0.5;
  dVar25 = (double)param_2 + 0.5;
  local_74 = param_11;
  dVar26 = (double)param_3 + 0.5;
  iVar7 = rand();
  iVar8 = rand();
  fVar20 = (float)(int)((dVar24 - (double)param_4) - 1.0);
  dVar23 = (double)param_4 + dVar24 + 1.0;
  dVar33 = (double)(int)fVar20;
  local_70 = fVar20;
  if (dVar33 <= dVar23) {
    uVar14 = (uint)((dVar25 - (double)param_4) - 1.0);
    dVar27 = (double)param_4 + dVar25 + 1.0;
    do {
      local_80 = (double)(int)uVar14;
      if (local_80 <= dVar27) {
        dVar28 = dVar33 * 0.1 + (double)iVar7;
        dVar34 = dVar33 * 0.04 + (double)iVar7;
        iVar18 = (int)((double)param_5 + dVar26 + 1.0);
        dVar33 = (dVar26 - (double)param_5) - 1.0;
        uVar17 = uVar14;
        local_70 = fVar20;
        do {
          fVar22 = FUN_004d5d30(SUB84(dVar34,0),(int)((ulonglong)dVar34 >> 0x20),
                                local_80 * 0.04 + (double)iVar8);
          local_6c = (float)fVar22;
          local_88 = (double)local_6c * 0.5;
          fVar22 = FUN_004d5d30(SUB84(dVar28,0),(int)((ulonglong)dVar28 >> 0x20),
                                local_80 * 0.1 + (double)iVar8);
          dVar30 = (double)iVar18;
          fVar31 = (float)(local_88 + (double)((float)fVar22 * 0.3));
          local_88 = (double)CONCAT44(fVar31,(undefined4)local_88);
          local_6c = (float)iVar18;
          if (dVar33 <= dVar30) {
            dVar29 = ((double)(int)fVar20 - dVar24) / (double)param_4;
            dVar32 = (local_80 - dVar25) / (double)param_4;
            dVar29 = dVar32 * dVar32 + dVar29 * dVar29;
            fVar19 = (float)iVar18;
            local_80 = dVar29;
            do {
              dVar30 = ((dVar30 - dVar26) / (double)param_5) * 1.7999999523162842 + (double)fVar31;
              if (dVar30 * dVar30 + dVar29 <= 1.0) {
                local_6c = fVar19;
                pvVar9 = (void *)FUN_00406100(local_78,(uint)fVar20,uVar17,local_74);
                if (pvVar9 == (void *)0x0) {
                  puVar10 = (undefined4 *)&DAT_005842c4;
                }
                else {
                  iVar11 = *(int *)((int)pvVar9 + 0x10);
                  if ((int)fVar19 < iVar11) {
                    puVar10 = (undefined4 *)&DAT_005842c4;
                  }
                  else if ((int)fVar19 < *(int *)((int)pvVar9 + 0x1c) + iVar11) {
                    puVar10 = (undefined4 *)FUN_00405f20(pvVar9,(int)fVar19 - iVar11);
                    if ((((*(byte *)((int)puVar10 + 3) & 0x1f) == 0) && ((int)fVar19 < 1)) &&
                       ((*(byte *)((int)puVar10 + 3) & 0x40) == 0)) {
                      puVar10 = (undefined4 *)&DAT_005842bc;
                    }
                  }
                  else {
                    puVar10 = (undefined4 *)&DAT_005842bc;
                    if (0 < (int)fVar19) {
                      puVar10 = &DAT_005842c0;
                    }
                  }
                }
                if ((*(byte *)((int)puVar10 + 3) & 0x40) == 0) {
                  fVar31 = (float)((dVar30 + 1.0) * 0.5);
                  if (0.0 <= fVar31) {
                    if (1.0 < fVar31) {
                      fVar31 = 1.0;
                    }
                  }
                  else {
                    fVar31 = 0.0;
                  }
                  local_5c = param_8;
                  uVar3 = local_5c;
                  local_5c._0_4_ = (float)param_8;
                  fVar2 = (float)local_5c;
                  local_5c._4_4_ = (float)((ulonglong)param_8 >> 0x20);
                  fVar4 = local_5c._4_4_;
                  local_c = 1.0 - fVar31;
                  local_54 = param_9;
                  local_14 = (float)param_6;
                  fVar5 = local_14;
                  local_14 = local_c * local_14;
                  fStack_10 = (float)((ulonglong)param_6 >> 0x20);
                  fVar6 = fStack_10;
                  fStack_10 = local_c * fStack_10;
                  local_c = local_c * param_7;
                  local_20 = CONCAT44(fStack_10 + local_5c._4_4_ * fVar31,
                                      local_14 + (float)local_5c * fVar31);
                  local_18 = local_c + param_9 * fVar31;
                  local_48 = local_18;
                  local_50 = local_20;
                  iVar11 = 0;
                  do {
                    pfVar1 = (float *)((int)&local_50 + iVar11 * 4);
                    if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
                      *(undefined4 *)((int)&local_50 + iVar11 * 4) = 0;
                    }
                    if (255.0 < *(float *)((int)&local_50 + iVar11 * 4)) {
                      *(undefined4 *)((int)&local_50 + iVar11 * 4) = 0x437f0000;
                    }
                    iVar11 = iVar11 + 1;
                  } while (iVar11 < 3);
                  iVar11 = 0;
                  do {
                    iVar15 = iVar11 + 1;
                    *(char *)((int)&local_8c + iVar11) =
                         (char)(int)*(float *)((int)&local_50 + iVar11 * 4);
                    iVar11 = iVar15;
                  } while (iVar15 < 3);
                  local_94 = local_8c;
                  local_92 = local_8a;
                  local_91 = 0x28;
                  local_5c = uVar3;
                  FUN_0041ff00(local_78,fVar20,uVar17,(int)fVar19,(undefined1 *)&local_94,local_74);
                  if ((param_10 == 4) && (iVar11 = rand(), iVar11 % 0x14 == 0)) {
                    iVar11 = rand();
                    iVar11 = iVar11 % 10;
                    uVar12 = rand();
                    uVar12 = uVar12 & 0x80000003;
                    bVar21 = uVar12 == 0;
                    if ((int)uVar12 < 0) {
                      bVar21 = (uVar12 - 1 | 0xfffffffc) == 0xffffffff;
                    }
                    if (bVar21) {
                      iVar11 = iVar11 * 2;
                    }
                    fVar20 = local_70;
                    iVar15 = (int)fVar19;
                    if (0 < iVar11) {
                      do {
                        iVar15 = iVar15 + -1;
                        pvVar9 = (void *)FUN_00406100(local_78,(uint)local_70,uVar17,local_74);
                        if (pvVar9 == (void *)0x0) {
                          puVar10 = (undefined4 *)&DAT_005842c4;
                        }
                        else {
                          iVar13 = *(int *)((int)pvVar9 + 0x10);
                          if (iVar15 < iVar13) {
                            puVar10 = (undefined4 *)&DAT_005842c4;
                          }
                          else if (iVar15 < *(int *)((int)pvVar9 + 0x1c) + iVar13) {
                            puVar10 = (undefined4 *)FUN_00405f20(pvVar9,iVar15 - iVar13);
                            if ((((*(byte *)((int)puVar10 + 3) & 0x1f) == 0) && (iVar15 < 1)) &&
                               ((*(byte *)((int)puVar10 + 3) & 0x40) == 0)) {
                              puVar10 = (undefined4 *)&DAT_005842bc;
                            }
                          }
                          else {
                            puVar10 = (undefined4 *)&DAT_005842bc;
                            if (0 < iVar15) {
                              puVar10 = &DAT_005842c0;
                            }
                          }
                        }
                        if ((*(byte *)((int)puVar10 + 3) & 0x40) == 0) {
                          fVar20 = (float)(((((double)iVar15 - dVar26) / (double)param_5) *
                                            1.7999999523162842 + (double)local_88._4_4_ + 1.0) * 0.5
                                          );
                          if (0.0 <= fVar20) {
                            if (1.0 < fVar20) {
                              fVar20 = 1.0;
                            }
                          }
                          else {
                            fVar20 = 0.0;
                          }
                          local_68 = param_8;
                          fVar31 = 1.0 - fVar20;
                          local_60 = param_9;
                          local_30 = fVar31 * param_7;
                          _local_38 = CONCAT44(fVar31 * fVar6,fVar31 * fVar5);
                          local_24 = param_9 * fVar20 + local_30;
                          local_2c = CONCAT44(fVar4 * fVar20 + fVar31 * fVar6,
                                              fVar31 * fVar5 + fVar2 * fVar20);
                          local_3c = local_24;
                          local_44 = local_2c;
                          iVar13 = 0;
                          do {
                            pfVar1 = (float *)((int)&local_44 + iVar13 * 4);
                            if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
                              *(undefined4 *)((int)&local_44 + iVar13 * 4) = 0;
                            }
                            if (255.0 < *(float *)((int)&local_44 + iVar13 * 4)) {
                              *(undefined4 *)((int)&local_44 + iVar13 * 4) = 0x437f0000;
                            }
                            iVar13 = iVar13 + 1;
                          } while (iVar13 < 3);
                          iVar13 = 0;
                          do {
                            iVar16 = iVar13 + 1;
                            *(char *)((int)&local_98 + iVar13) =
                                 (char)(int)*(float *)((int)&local_44 + iVar13 * 4);
                            iVar13 = iVar16;
                          } while (iVar16 < 3);
                          local_90 = local_98;
                          local_8e = local_96;
                          local_8d = 0x28;
                          FUN_0041ff00(local_78,local_70,uVar17,iVar15,(undefined1 *)&local_90,
                                       local_74);
                        }
                        iVar11 = iVar11 + -1;
                        fVar19 = local_6c;
                        fVar20 = local_70;
                      } while (iVar11 != 0);
                    }
                  }
                }
                fVar31 = local_88._4_4_;
                dVar29 = local_80;
              }
              fVar19 = (float)((int)fVar19 + -1);
              dVar30 = (double)(int)fVar19;
              local_6c = fVar19;
            } while (dVar33 <= dVar30);
          }
          uVar17 = uVar17 + 1;
          local_80 = (double)(int)uVar17;
        } while (local_80 <= dVar27);
      }
      fVar20 = (float)((int)fVar20 + 1);
      dVar33 = (double)(int)fVar20;
      local_70 = fVar20;
    } while (dVar33 <= dVar23);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* lib_fn_513400 @ 00513400  kind=lib  attributed-by=ledger  size=864 */

void __thiscall
FUN_00513400(void *this,int param_1,int param_2,int param_3,int *param_4,byte *param_5,float param_6
            ,int param_7,byte param_8)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  void *this_00;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  int local_b4;
  undefined2 local_ac;
  undefined1 local_aa;
  byte local_a9;
  undefined2 local_a8;
  undefined1 local_a6;
  byte local_a5;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined2 local_a0;
  undefined1 local_9e;
  int local_9c;
  int local_98;
  void *local_94;
  uint local_90;
  int local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  undefined8 local_7c;
  float local_74;
  undefined8 local_70;
  float local_68;
  int aiStack_64 [23];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar7 = 0;
  local_98 = param_7;
  local_94 = this;
  do {
    if ((uVar7 & 7) == 0) {
      iVar3 = rand();
      aiStack_64[uVar7] = iVar3 % 0x14;
    }
    else {
      aiStack_64[uVar7] = 0;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x17);
  local_8c = 0;
  if (0 < *param_4) {
    local_b4 = 0;
    do {
      iVar3 = local_b4;
      iVar4 = local_8c;
      if (0 < param_4[1]) {
        do {
          local_9c = iVar3;
          iVar3 = param_4[2] + -1;
          if (-1 < iVar3) {
            local_90 = iVar4 + param_2 + local_9c;
            iVar9 = param_3 + iVar3;
            iVar8 = iVar3 * 7 + iVar4;
            do {
              iVar4 = aiStack_64[(iVar8 / 2 + ((local_9c + iVar8) / 2) * 7) % 0x17];
              bVar2 = param_5[1];
              local_88 = (float)(int)((uint)*param_5 + iVar4);
              local_80 = (float)(int)((uint)param_5[2] + iVar4);
              fVar10 = FUN_00523b90(local_94,(float)(local_8c + param_1),local_90,iVar9,local_98);
              fStack_84 = (float)fVar10 * (120.0 - (float)(int)((uint)bVar2 + iVar4)) +
                          (float)(int)((uint)bVar2 + iVar4);
              this_00 = (void *)FUN_00406100(local_94,local_8c + param_1,local_90,local_98);
              if (((this_00 != (void *)0x0) &&
                  (iVar4 = *(int *)((int)this_00 + 0x10), iVar4 <= iVar9)) &&
                 (iVar9 < *(int *)((int)this_00 + 0x1c) + iVar4)) {
                FUN_00405f20(this_00,iVar9 - iVar4);
              }
              iVar4 = rand();
              if (param_6 < (float)iVar4 / 32767.0) {
                local_68 = local_80;
                local_70 = CONCAT44(fStack_84,local_88);
                iVar4 = 0;
                do {
                  pfVar1 = (float *)((int)&local_70 + iVar4 * 4);
                  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
                    *(undefined4 *)((int)&local_70 + iVar4 * 4) = 0;
                  }
                  if (255.0 < *(float *)((int)&local_70 + iVar4 * 4)) {
                    *(undefined4 *)((int)&local_70 + iVar4 * 4) = 0x437f0000;
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < 3);
                iVar4 = 0;
                do {
                  iVar6 = iVar4 + 1;
                  *(char *)((int)&local_a4 + iVar4) =
                       (char)(int)*(float *)((int)&local_70 + iVar4 * 4);
                  iVar4 = iVar6;
                } while (iVar6 < 3);
                local_a8 = local_a4;
                local_a6 = local_a2;
                local_a5 = param_8 | 0x46;
                puVar5 = &local_a8;
              }
              else {
                local_74 = local_80;
                local_7c = CONCAT44(fStack_84,local_88);
                iVar4 = 0;
                do {
                  pfVar1 = (float *)((int)&local_7c + iVar4 * 4);
                  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
                    *(undefined4 *)((int)&local_7c + iVar4 * 4) = 0;
                  }
                  if (255.0 < *(float *)((int)&local_7c + iVar4 * 4)) {
                    *(undefined4 *)((int)&local_7c + iVar4 * 4) = 0x437f0000;
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < 3);
                iVar4 = 0;
                do {
                  iVar6 = iVar4 + 1;
                  *(char *)((int)&local_a0 + iVar4) =
                       (char)(int)*(float *)((int)&local_7c + iVar4 * 4);
                  iVar4 = iVar6;
                } while (iVar6 < 3);
                local_ac = local_a0;
                local_aa = local_9e;
                local_a9 = param_8 | 0x4d;
                puVar5 = &local_ac;
              }
              FUN_0041ff00(local_94,(float)(local_8c + param_1),local_90,iVar9,(undefined1 *)puVar5,
                           local_98);
              iVar8 = iVar8 + -7;
              iVar9 = iVar9 + -1;
              iVar3 = iVar3 + -1;
              iVar4 = local_8c;
            } while (-1 < iVar3);
          }
          local_9c = local_9c + 1;
          iVar3 = local_9c;
        } while (local_9c + iVar4 < param_4[1]);
      }
      local_8c = iVar4 + 1;
      local_b4 = local_b4 + -1;
    } while (local_8c < *param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* lib_fn_513760 @ 00513760  kind=lib  attributed-by=ledger  size=7494 */

/* WARNING: Removing unreachable block (ram,0x00516958) */
/* WARNING: Removing unreachable block (ram,0x005169f1) */

void FUN_00513760(float param_1,uint param_2,float param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float fVar8;
  uint uVar9;
  void *pvVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  code *pcVar18;
  uint uVar19;
  bool bVar20;
  float10 fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined4 *puVar34;
  float fVar35;
  int local_814 [4];
  int local_804 [4];
  int local_7f4 [4];
  int local_7e4 [4];
  int local_7d4 [4];
  int local_7c4 [4];
  int local_7b4 [4];
  int local_7a4 [4];
  int local_794;
  uint local_790;
  float local_78c [32];
  double local_70c;
  undefined2 local_704;
  undefined1 local_702;
  undefined1 local_701;
  double local_700;
  undefined2 local_6f8;
  undefined1 local_6f6;
  undefined2 local_6f4;
  undefined1 local_6f2;
  undefined2 local_6f0;
  undefined1 local_6ee;
  undefined1 local_6ed;
  double local_6ec;
  double local_6e4;
  double local_6dc;
  undefined2 local_6d4;
  undefined1 local_6d2;
  undefined1 local_6d1;
  undefined2 local_6d0;
  undefined1 local_6ce;
  undefined2 local_6cc;
  undefined1 local_6ca;
  undefined1 local_6c9;
  undefined2 local_6c8;
  undefined1 local_6c6;
  undefined2 local_6c4;
  undefined1 local_6c2;
  undefined2 local_6c0;
  undefined1 local_6be;
  undefined2 local_6bc;
  undefined1 local_6ba;
  undefined1 local_6b9;
  undefined2 local_6b8;
  undefined1 local_6b6;
  undefined1 local_6b5;
  undefined2 local_6b4;
  undefined1 local_6b2;
  undefined1 local_6b1;
  undefined2 local_6b0;
  undefined1 local_6ae;
  undefined1 local_6ad;
  undefined2 local_6ac;
  undefined1 local_6aa;
  undefined1 local_6a9;
  undefined2 local_6a8;
  undefined1 local_6a6;
  undefined2 local_6a4;
  undefined1 local_6a2;
  undefined2 local_6a0;
  undefined1 local_69e;
  undefined2 local_69c;
  undefined1 local_69a;
  undefined2 local_698;
  undefined1 local_696;
  undefined1 local_695;
  undefined2 local_694;
  undefined1 local_692;
  undefined2 local_690;
  undefined1 local_68e;
  undefined1 local_68d;
  undefined2 local_68c;
  undefined1 local_68a;
  undefined2 local_688;
  undefined1 local_686;
  undefined2 local_684;
  undefined1 local_682;
  undefined1 local_681;
  undefined2 local_680;
  undefined1 local_67e;
  int local_67c;
  float fStack_678;
  float local_674;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  float local_658;
  undefined4 local_654;
  undefined8 local_650;
  float local_648;
  float local_644;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  float local_628;
  undefined4 local_624;
  float local_620;
  uint local_61c;
  float local_618;
  double local_614;
  undefined8 local_60c;
  undefined8 local_604;
  float local_5fc;
  uint local_5f8;
  undefined4 local_5f4;
  float local_5f0;
  uint local_5ec;
  double local_5e8;
  float local_5e0;
  uint local_5dc;
  float local_5d8;
  undefined4 *local_5d4;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  float local_5b8;
  undefined4 *local_5b4;
  undefined4 *local_5b0;
  int local_5ac;
  void *local_5a8;
  void *local_5a4;
  int local_5a0;
  float local_59c;
  float local_598;
  float local_594;
  byte local_58d;
  float local_58c [3];
  float local_580 [3];
  float local_574 [3];
  float local_568 [3];
  float local_55c [3];
  float local_550 [3];
  float local_544 [3];
  float local_538 [3];
  double local_52c;
  double local_524;
  double local_51c;
  double local_514;
  double local_50c;
  double local_504;
  double local_4fc;
  double local_4f4;
  double local_4ec;
  double local_4e4;
  double local_4dc;
  double local_4d4;
  double local_4cc;
  double local_4c4;
  double local_4bc;
  double local_4b4;
  double local_4ac;
  double local_4a4;
  undefined4 local_49c [2];
  undefined4 auStack_494 [9];
  undefined8 local_470;
  float local_468;
  undefined4 local_464;
  undefined4 local_45c [2];
  undefined4 auStack_454 [9];
  undefined8 local_430;
  float local_428;
  undefined4 local_424;
  float local_41c;
  float local_418;
  double local_410 [3];
  float local_3f8;
  float local_3f4;
  float local_3ec;
  float local_3e8;
  undefined4 local_3e0 [2];
  float local_3d8;
  uint local_3d4;
  uint local_3d0;
  uint local_3cc;
  int local_3c8;
  uint local_3c4;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a0 [2];
  void *local_398;
  float local_394;
  float local_390;
  float local_38c;
  uint local_388;
  float local_384;
  undefined8 local_374;
  float local_36c;
  undefined4 local_368;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  double local_2dc [3];
  uint local_2c4;
  int local_2c0;
  int local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  uint local_2ac;
  float local_2a8;
  int local_2a4;
  float local_2a0 [3];
  uint local_294;
  int local_290;
  int local_28c;
  uint local_288;
  float local_284;
  int local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  uint local_264;
  int local_260;
  int local_25c;
  uint local_258;
  int local_254;
  int local_250;
  uint local_24c;
  int local_248;
  int local_244;
  uint local_240;
  int local_23c;
  int local_238;
  float local_234;
  float local_230;
  float local_22c;
  double local_228;
  double local_220;
  undefined8 local_218;
  float local_210;
  undefined8 local_20c;
  float local_204;
  float local_200;
  float fStack_1fc;
  float local_1f8;
  float local_1f4;
  float fStack_1f0;
  float local_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined8 local_1dc;
  float local_1d4;
  undefined8 local_1d0;
  float local_1c8;
  undefined8 local_1c4;
  float local_1bc;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float fStack_19c;
  float local_198;
  undefined8 local_194;
  undefined8 local_18c;
  float local_17c;
  float fStack_178;
  undefined4 local_174;
  float local_170 [3];
  undefined8 local_164;
  float local_15c;
  float local_158;
  float fStack_154;
  float local_150;
  float local_14c;
  float fStack_148;
  float local_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float local_134;
  float fStack_130;
  float local_12c;
  float local_128;
  float fStack_124;
  float local_120;
  float local_11c [4];
  float local_10c;
  float local_108;
  float local_104 [4];
  float local_f4;
  float local_f0;
  float local_ec [4];
  float fStack_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float fStack_b8;
  float local_b4;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float local_9c;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  float local_84;
  undefined8 local_80;
  float local_78;
  undefined8 local_74;
  float local_6c;
  undefined8 local_68;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  undefined8 local_44;
  float local_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float local_2c [9];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_5dc = param_2;
  local_5d0 = param_3;
  local_5ac = param_5;
  local_5c0 = (float)param_4;
  local_5cc = local_5c0 * 0.25;
  local_5f8 = ((int)param_1 >> 0x1f) << 0x10 | (uint)param_1 >> 0x10;
  local_5d8 = param_1;
  local_5a0 = param_7;
  local_5c4 = local_5cc;
  uVar29 = FUN_0054a946();
  pvVar10 = local_5a8;
  uVar9 = local_5dc;
  iVar5 = (int)(uVar29 >> 0x20);
  uVar17 = (uint)uVar29;
  local_5c8 = (float)((int)param_1 * 0x10000 - uVar17);
  local_5f8 = (local_5f8 - iVar5) - (uint)((uint)((int)param_1 * 0x10000) < uVar17);
  local_660 = (double)CONCAT44(local_5f8,local_5c8);
  local_5ec = local_5dc * 0x10000 - uVar17;
  local_61c = ((((int)local_5dc >> 0x1f) << 0x10 | local_5dc >> 0x10) - iVar5) -
              (uint)(local_5dc * 0x10000 < uVar17);
  local_668 = (double)CONCAT44(local_61c,local_5ec);
  iVar5 = FUN_00406100(local_5a8,(uint)local_5d8,local_5dc,param_7);
  if (iVar5 == 0) {
    fVar21 = (float10)FUN_004f8b40(pvVar10,(int)local_5d8,uVar9);
    local_5fc = (float)fVar21;
    local_594 = local_5fc;
  }
  else {
    local_5fc = *(float *)(iVar5 + 8);
  }
  pcVar18 = rand_exref;
  local_5f4 = local_5fc * 50.0 + 120.0;
  iVar5 = rand();
  local_5a4 = (void *)((float)(iVar5 % 0x50) + local_5f4);
  local_624 = local_5fc * 100.0 + 50.0;
  iVar5 = rand();
  local_598 = 240.0;
  local_2c[0] = 240.0;
  local_2c[1] = (float)local_5a4;
  local_658 = (float)(iVar5 % 0x32) + local_624;
  local_2c[2] = local_658;
  iVar5 = rand();
  local_594 = (float)(iVar5 % 0x50) + local_5f4;
  iVar5 = rand();
  fStack_34 = local_594;
  local_38 = 240.0;
  local_30 = (float)(iVar5 % 0x32) + local_624;
  if (param_6 == 5) {
    local_5ac = (int)((float)local_5ac * 0.7);
    param_4 = (int)(local_5c0 * 0.2);
    if (3 < (int)(local_5c0 * 0.2)) {
      param_4 = 3;
    }
    if ((float)local_5ac < (float)(param_4 << 3)) {
      local_5ac = (int)(float)(param_4 << 3);
    }
LAB_00513b3e:
    if (local_5cc < 0.3) {
      local_5cc = 0.3;
    }
    fVar27 = 0.3;
    if (local_5c4 < 0.3) {
LAB_00513b5c:
      local_5c4 = fVar27;
    }
  }
  else {
    if (param_6 == 1) {
      local_5cc = local_5cc * 0.5;
      local_5ac = local_5ac * 2;
      local_5c4 = 0.1;
      goto LAB_00513b3e;
    }
    if (param_6 == 6) {
      local_5c4 = local_5cc * 0.5;
      goto LAB_00513b3e;
    }
    if (param_6 == 3) {
      local_5a4 = (void *)0x43340000;
      local_2c[1] = 180.0;
      local_5cc = 2.0;
      local_598 = 240.0;
      local_2c[0] = 240.0;
      local_658 = 120.0;
      local_2c[2] = 120.0;
      local_38 = 220.0;
      fStack_34 = 100.0;
      local_30 = 50.0;
      fVar27 = 2.0;
      goto LAB_00513b5c;
    }
    if (param_6 != 2) goto LAB_00513b3e;
    local_5cc = 1.5;
    local_5c4 = 1.5;
    local_598 = 255.0;
    local_2c[0] = 255.0;
    local_5a4 = (void *)0x437f0000;
    local_2c[1] = 255.0;
    local_658 = 255.0;
    local_2c[2] = 255.0;
    local_38 = 255.0;
    fStack_34 = 255.0;
    local_30 = 255.0;
  }
  local_58d = '\0';
  local_594 = (local_5fc - 0.5) * 10.0;
  if (0.0 <= local_5fc) {
    if (1.0 < local_5fc) {
      local_5fc = 1.0;
    }
  }
  else {
    local_5fc = 0.0;
  }
  iVar5 = rand();
  if ((((float)iVar5 / 32767.0 < local_594) || (param_6 == 4)) || (param_6 == 3)) {
    iVar5 = rand();
    local_5b0 = (undefined4 *)(float)(iVar5 % 0x14);
    iVar5 = rand();
    local_59c = (float)(iVar5 % 0x9b + 0x32);
    iVar5 = rand();
    local_5b4 = (undefined4 *)(float)(iVar5 % 100);
    if (0.0 <= (float)local_5b0) {
      if (255.0 < (float)local_5b0) {
        local_5b0 = (undefined4 *)0x437f0000;
      }
    }
    else {
      local_5b0 = (undefined4 *)0x0;
    }
    if (0.0 <= local_59c) {
      if (255.0 < local_59c) {
        local_59c = 255.0;
      }
    }
    else {
      local_59c = 0.0;
    }
    if (0.0 <= (float)local_5b4) {
      if (255.0 < (float)local_5b4) {
        local_5b4 = (undefined4 *)0x437f0000;
      }
    }
    else {
      local_5b4 = (undefined4 *)0x0;
    }
    local_11c[3] = (float)local_5b0;
    local_10c = local_59c;
    local_108 = (float)local_5b4;
    local_2c[6] = (float)local_5b0;
    local_2c[7] = local_59c;
    local_2c[8] = (float)local_5b4;
    iVar5 = rand();
    fVar27 = 0.0;
    local_310 = (float)local_5b4 + 0.0;
    local_41c = (float)(iVar5 % 100 + 0x32);
    local_318 = local_41c + (float)local_5b0;
    local_314 = local_41c + local_59c;
    if (0.0 <= local_318) {
      local_104[3] = local_318;
      if (255.0 < local_318) {
        local_104[3] = 255.0;
      }
    }
    else {
      local_104[3] = 0.0;
    }
    if (0.0 <= local_314) {
      local_f4 = local_314;
      if (255.0 < local_314) {
        local_f4 = 255.0;
      }
    }
    else {
      local_f4 = 0.0;
    }
    puVar7 = local_5b0;
    local_418 = local_41c;
    local_2c[3] = local_104[3];
    local_2c[4] = local_f4;
    if (0.0 <= local_310) {
      local_f0 = local_310;
      local_2c[5] = local_310;
      if (255.0 < local_310) {
        local_f0 = 255.0;
        local_2c[5] = local_f0;
      }
    }
    else {
      local_f0 = 0.0;
      local_2c[5] = local_f0;
    }
  }
  else {
    iVar5 = FUN_00406100(pvVar10,(uint)local_5d8,local_5dc,param_7);
    if (iVar5 == 0) {
      fVar21 = (float10)FUN_004f8570(pvVar10,local_5d8,local_5dc);
      fVar27 = (float)fVar21;
      local_594 = fVar27;
    }
    else {
      fVar27 = *(float *)(iVar5 + 4);
    }
    if (fVar27 <= 0.5) {
      uVar9 = rand();
      uVar9 = uVar9 & 0x80000001;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
      }
      if (uVar9 == 0) {
        iVar5 = rand();
        iVar15 = rand();
        local_2a0[0] = (float)(iVar5 % 0x37 + 200);
        local_2a0[1] = 0.0;
        local_2a0[2] = (float)(iVar15 % 200);
        pfVar6 = FUN_004e2840(local_55c,local_2a0);
        local_5b0 = (undefined4 *)*pfVar6;
        local_59c = pfVar6[1];
        local_5b4 = (undefined4 *)pfVar6[2];
        local_2c[6] = (float)local_5b0;
        local_2c[7] = local_59c;
        local_2c[8] = (float)local_5b4;
        iVar5 = rand();
        local_2e8 = (float)(iVar5 % 100 + 100);
        local_270 = local_2e8 + (float)local_5b0;
        local_268 = local_2e8 + (float)local_5b4;
        local_26c = local_2e8 + local_59c;
        puVar7 = local_5b0;
        local_2e4 = local_2e8;
        local_2e0 = local_2e8;
        pfVar6 = FUN_004e2840(local_574,&local_270);
        local_2c[3] = *pfVar6;
        local_2c[4] = pfVar6[1];
        local_2c[5] = pfVar6[2];
        local_58d = '\x01';
        fVar27 = 0.0;
      }
      else if (uVar9 == 1) {
        iVar5 = rand();
        local_594 = (float)(iVar5 % 0x14);
        iVar5 = rand();
        iVar15 = rand();
        local_27c = local_594;
        local_278 = (float)(iVar5 % 100 + 0x78);
        local_274 = (float)(iVar15 % 100);
        pfVar6 = FUN_004e2840(local_568,&local_27c);
        local_5b0 = (undefined4 *)*pfVar6;
        local_59c = pfVar6[1];
        local_5b4 = (undefined4 *)pfVar6[2];
        local_2c[6] = (float)local_5b0;
        local_2c[7] = local_59c;
        local_2c[8] = (float)local_5b4;
        iVar5 = rand();
        fVar27 = 0.0;
        local_3f8 = (float)(iVar5 % 0x96 + 100);
        local_2b8 = local_3f8 + (float)local_5b0;
        local_2b4 = local_3f8 + local_59c;
        local_2b0 = (float)local_5b4 + 0.0;
        puVar7 = local_5b0;
        local_3f4 = local_3f8;
        pfVar6 = FUN_004e2840(local_544,&local_2b8);
        local_2c[3] = *pfVar6;
        local_2c[4] = pfVar6[1];
        local_2c[5] = pfVar6[2];
      }
      else {
        local_5b4 = (undefined4 *)local_2c[8];
        local_59c = local_2c[7];
        local_5b0 = (undefined4 *)local_2c[6];
        fVar27 = 0.0;
        puVar7 = (undefined4 *)local_2c[6];
      }
    }
    else {
      iVar5 = rand();
      local_5b0 = (undefined4 *)(float)(iVar5 % 0x37 + 200);
      iVar5 = rand();
      local_59c = (float)(iVar5 % 100);
      iVar5 = rand();
      local_2c[6] = (float)local_5b0;
      local_2c[7] = local_59c;
      local_5b4 = (undefined4 *)(float)(iVar5 % 0x32);
      local_2c[8] = (float)local_5b4;
      iVar5 = rand();
      fVar27 = 0.0;
      local_3ec = (float)(iVar5 % 100 + 0x32);
      local_234 = (float)local_5b0 + local_3ec;
      local_230 = local_59c + local_3ec;
      local_22c = (float)local_5b4 + 0.0;
      puVar7 = local_5b0;
      local_3e8 = local_3ec;
      pfVar6 = FUN_004e2840(local_58c,&local_234);
      local_2c[3] = *pfVar6;
      local_2c[4] = pfVar6[1];
      local_2c[5] = pfVar6[2];
      local_58d = '\x01';
    }
  }
  if (param_6 == 2) {
    puVar7 = (undefined4 *)0x43160000;
    local_5b0 = (undefined4 *)0x43160000;
    local_2c[6] = 150.0;
    local_59c = 255.0;
    local_2c[7] = 255.0;
    local_2c[3] = 244.0;
    local_2c[4] = 255.0;
    local_2c[5] = 0.0;
    local_58d = '\0';
    local_5b4 = (undefined4 *)fVar27;
    local_2c[8] = fVar27;
  }
  if (local_5fc < 0.2) {
    local_5b8 = 1.0 - (local_5fc - 0.1) / 0.1;
    if (1.0 < local_5b8) {
      local_5b8 = 1.0;
    }
    local_5f4 = 1.0 - local_5b8;
    local_594 = local_5f4 * (float)puVar7;
    local_5c0 = local_5f4 * local_59c;
    local_5f0 = local_5f4 * (float)local_5b4;
    local_354 = local_594;
    local_350 = local_5c0;
    local_34c = local_5f0;
    pfVar6 = FUN_0052d870(local_538,(int)local_5d8,local_5dc);
    local_334 = pfVar6[2] * local_5b8;
    local_33c = local_5b8 * *pfVar6;
    local_5b4 = (undefined4 *)(local_334 + local_5f0);
    local_338 = local_5b8 * pfVar6[1];
    local_5b0 = (undefined4 *)(local_33c + local_594);
    local_594 = local_5f4 * local_2c[3];
    local_59c = local_338 + local_5c0;
    local_5c0 = local_5f4 * local_2c[4];
    local_5f0 = local_5f4 * local_2c[5];
    local_30c = (float)local_5b0;
    local_308 = local_59c;
    local_304 = (float)local_5b4;
    local_2f4 = local_594;
    local_2f0 = local_5c0;
    local_2ec = local_5f0;
    local_2c[6] = (float)local_5b0;
    local_2c[7] = local_59c;
    local_2c[8] = (float)local_5b4;
    pfVar6 = FUN_0052d870(local_550,(int)local_5d8,local_5dc);
    local_300 = *pfVar6 * local_5b8;
    local_2fc = pfVar6[1] * local_5b8;
    local_2f8 = pfVar6[2] * local_5b8;
    local_330 = local_300 + local_594;
    local_32c = local_2fc + local_5c0;
    local_328 = local_2f8 + local_5f0;
    local_360 = local_5b8 * 120.0;
    local_358 = local_5b8 * 80.0;
    local_348 = local_5f4 * local_598;
    local_344 = local_5f4 * (float)local_5a4;
    local_340 = local_5f4 * local_658;
    local_324 = local_360 + local_348;
    local_320 = local_360 + local_344;
    local_31c = local_358 + local_340;
    local_2c[0] = local_324;
    local_2c[1] = local_320;
    local_2c[2] = local_31c;
    local_35c = local_360;
    local_2c[3] = local_330;
    local_2c[4] = local_32c;
    local_2c[5] = local_328;
  }
  local_5b8 = 0.0;
  local_5a4 = (void *)0x0;
  if (param_6 == 3) {
    iVar5 = rand();
    local_5b8 = (0.5 - (float)iVar5 / 32767.0) * (float)local_5ac;
    iVar5 = rand();
    fVar27 = (float)param_4;
    local_5a4 = (void *)((0.5 - (float)iVar5 / 32767.0) * (float)local_5ac);
    iVar5 = *(int *)(param_7 + 0x60) * 0x100;
    if ((((float)(int)local_5d8 + local_5b8) - fVar27 < (float)iVar5) ||
       ((float)(iVar5 + 0x100) <= fVar27 + (float)(int)local_5d8 + local_5b8)) {
      local_5b8 = 0.0;
    }
    iVar5 = *(int *)(param_7 + 100) * 0x100;
    if ((((float)(int)local_5dc + (float)local_5a4) - fVar27 < (float)iVar5) ||
       ((float)(iVar5 + 0x100) <= fVar27 + (float)(int)local_5dc + (float)local_5a4)) {
      local_5a4 = (void *)0x0;
    }
  }
  fVar27 = (float)(int)(((float)(int)local_5d8 - local_5cc) - 1.0);
  fVar28 = (float)(int)fVar27;
  fVar22 = (float)(int)local_5d8 + local_5cc + 1.0;
  local_5bc = fVar28;
  local_598 = fVar27;
  local_594 = fVar22;
  if (fVar28 <= fVar22) {
    fVar26 = (float)(int)local_5dc + local_5cc + 1.0;
    puVar7 = (undefined4 *)(int)(((float)(int)local_5dc - local_5cc) - 1.0);
    local_648 = fVar26;
    local_5d4 = puVar7;
    do {
      local_5c0 = (float)(int)puVar7;
      if (local_5c0 <= fVar26) {
        local_618 = (float)((int)local_5d0 + local_5ac);
        fVar8 = (float)((int)local_5d0 + -2);
        local_5b4 = puVar7;
        local_5f0 = fVar8;
        local_5bc = fVar28;
        local_598 = fVar27;
        do {
          if ((int)fVar8 <= (int)local_618) {
            local_674 = (float)local_5ac + 2.0;
            local_628 = (float)(((int)local_618 - (int)local_5d0) + 2);
            fVar22 = local_618;
            do {
              fVar27 = local_598;
              local_644 = (float)(int)local_628 / local_674;
              if (local_644 < 0.0) {
                local_644 = 0.0;
              }
              fVar26 = local_644 * local_644;
              local_620 = local_598;
              local_59c = (1.0 - fVar26) * local_5cc + fVar26 * local_5c4;
              local_5b0 = local_5b4;
              if (param_6 == 3) {
                local_620 = (float)(int)(local_5b8 * fVar26 + fVar28);
                local_5b0 = (undefined4 *)(int)((float)local_5a4 * fVar26 + local_5c0);
              }
              if (local_59c <= 0.8) {
                uVar30 = __alldiv(local_5ec,local_61c,0x10000,0);
                uVar32 = __alldiv((uint)local_5c8,local_5f8,0x10000,0);
                local_228 = (double)((int)local_598 - (int)uVar32) / (double)local_59c;
                local_220 = (double)((int)local_5b4 - (int)uVar30) / (double)local_59c;
                local_4fc = local_228;
                local_4f4 = local_220;
              }
              else {
                uVar17 = ((int)local_5b4 >> 0x1f) << 0x10 | (uint)local_5b4 >> 0x10;
                uVar9 = (int)local_5b4 * 0x10000;
                if (param_6 == 6) {
                  local_604 = (double)CONCAT44((uVar17 - local_61c) - (uint)(uVar9 < local_5ec),
                                               uVar9 - local_5ec);
                  local_5e8 = (double)(longlong)local_604 * 1.52587890625e-05;
                  local_5e0 = 5.0 / local_59c;
                  local_630 = (double)CONCAT44(((((int)local_598 >> 0x1f) << 0x10 |
                                                (uint)local_598 >> 0x10) - local_5f8) -
                                               (uint)((uint)((int)local_598 * 0x10000) <
                                                     (uint)local_5c8),
                                               (int)local_598 * 0x10000 - (int)local_5c8);
                  local_638 = (double)(longlong)local_630;
                  local_6dc = local_638 * 1.52587890625e-05;
                  local_6ec = (double)(int)fVar22 * 0.025;
                  fVar21 = FUN_004d5d30(SUB84((double)(int)local_5b4 * 0.025,0),
                                        (int)((ulonglong)((double)(int)local_5b4 * 0.025) >> 0x20),
                                        local_6ec);
                  local_638 = (double)CONCAT44((float)fVar21,(undefined4)local_638);
                  local_6dc = (double)((float)fVar21 * local_5e0) + local_6dc / (double)local_59c;
                  fVar21 = FUN_004d5d30(SUB84((double)(int)fVar27 * 0.025,0),
                                        (int)((ulonglong)((double)(int)fVar27 * 0.025) >> 0x20),
                                        local_6ec + 8473.0);
                  local_638 = (double)CONCAT44((float)fVar21,(undefined4)local_638);
                  local_220 = (double)((float)fVar21 * local_5e0) + local_5e8 / (double)local_59c;
                  local_4c4 = local_6dc;
                  local_228 = local_6dc;
                  local_4bc = local_220;
                }
                else {
                  local_670 = (double)CONCAT44((uVar17 - local_61c) - (uint)(uVar9 < local_5ec),
                                               uVar9 - local_5ec);
                  local_67c = (int)local_598 * 0x10000 - (int)local_5c8;
                  fStack_678 = (float)(((((int)local_598 >> 0x1f) << 0x10 | (uint)local_598 >> 0x10)
                                       - local_5f8) -
                                      (uint)((uint)((int)local_598 * 0x10000) < (uint)local_5c8));
                  local_5e8 = (double)CONCAT44(fStack_678,local_67c);
                  local_228 = (local_5e8 * 1.52587890625e-05) / (double)local_59c;
                  local_220 = ((double)(longlong)local_670 * 1.52587890625e-05) / (double)local_59c;
                  local_4d4 = local_228;
                  local_4cc = local_220;
                }
              }
              fVar27 = local_620;
              if (local_220 * local_220 + local_228 * local_228 <= 1.0) {
                pvVar10 = (void *)FUN_00406100(local_5a8,(uint)local_620,(uint)local_5b0,local_5a0);
                if (pvVar10 == (void *)0x0) {
                  puVar7 = (undefined4 *)&DAT_005842c4;
                }
                else {
                  iVar5 = *(int *)((int)pvVar10 + 0x10);
                  if ((int)fVar22 < iVar5) {
                    puVar7 = (undefined4 *)&DAT_005842c4;
                  }
                  else if ((int)fVar22 < *(int *)((int)pvVar10 + 0x1c) + iVar5) {
                    puVar7 = (undefined4 *)FUN_00405f20(pvVar10,(int)fVar22 - iVar5);
                    if ((((*(byte *)((int)puVar7 + 3) & 0x1f) == 0) && ((int)fVar22 < 1)) &&
                       ((*(byte *)((int)puVar7 + 3) & 0x40) == 0)) {
                      puVar7 = (undefined4 *)&DAT_005842bc;
                    }
                  }
                  else {
                    puVar7 = (undefined4 *)&DAT_005842bc;
                    if (0 < (int)fVar22) {
                      puVar7 = &DAT_005842c0;
                    }
                  }
                }
                if ((*(byte *)((int)puVar7 + 3) & 0x40) == 0) {
                  fVar28 = 1.0 - local_644;
                  local_b0 = CONCAT44(local_2c[1] * fVar28,local_2c[0] * fVar28);
                  local_a8 = local_2c[2] * fVar28;
                  local_144 = local_30 * local_644;
                  local_44 = local_b0;
                  local_59c = local_2c[0] * fVar28 + local_38 * local_644;
                  _local_14c = CONCAT44(fStack_34 * local_644,local_38 * local_644);
                  local_620 = local_2c[1] * fVar28 + fStack_34 * local_644;
                  local_5e0 = local_a8 + local_144;
                  local_3c = local_a8;
                  if (param_6 == 2) {
                    uVar9 = rand();
                    uVar9 = uVar9 & 0x80000007;
                    bVar20 = uVar9 == 0;
                    if ((int)uVar9 < 0) {
                      bVar20 = (uVar9 - 1 | 0xfffffff8) == 0xffffffff;
                    }
                    if (bVar20) {
                      local_1ac = 0x42480000;
                      uStack_1a8 = 0x42480000;
                      local_44 = 0x4248000042480000;
                      local_1a4 = 0x42480000;
                      local_3c = 50.0;
                      local_5e0 = 50.0;
                      local_620 = 50.0;
                      local_59c = 50.0;
                    }
                  }
                  local_1e8 = 0x42480000;
                  uStack_1e4 = 0x42f00000;
                  local_1e0 = 0x42700000;
                  _local_bc = CONCAT44(120.0 - local_620,50.0 - local_59c);
                  local_b4 = 60.0 - local_5e0;
                  fVar21 = FUN_00523b90(local_5a8,fVar27,(uint)local_5b0,(int)fVar22,local_5a0);
                  local_120 = (float)fVar21;
                  local_638 = (double)CONCAT44(local_120,(undefined4)local_638);
                  local_128 = (float)_local_bc;
                  local_128 = local_120 * local_128;
                  fStack_124 = (float)((ulonglong)_local_bc >> 0x20);
                  fStack_124 = local_120 * fStack_124;
                  local_120 = local_120 * local_b4;
                  local_44 = CONCAT44(fStack_124 + local_620,local_128 + local_59c);
                  local_3c = local_120 + local_5e0;
                  iVar5 = 0;
                  if (param_6 == 6) {
                    do {
                      iVar15 = iVar5 + 1;
                      *(char *)((int)&local_68c + iVar5) =
                           (char)(int)*(float *)((int)&local_44 + iVar5 * 4);
                      iVar5 = iVar15;
                    } while (iVar15 < 3);
                    local_698 = local_68c;
                    local_696 = local_68a;
                    local_695 = 7;
                    puVar11 = &local_698;
                  }
                  else {
                    do {
                      iVar15 = iVar5 + 1;
                      *(char *)((int)&local_6c4 + iVar5) =
                           (char)(int)*(float *)((int)&local_44 + iVar5 * 4);
                      iVar5 = iVar15;
                    } while (iVar15 < 3);
                    local_6cc = local_6c4;
                    local_6ca = local_6c2;
                    local_6c9 = 0x27;
                    puVar11 = &local_6cc;
                  }
                  FUN_0041ff00(local_5a8,fVar27,(uint)local_5b0,(int)fVar22,(undefined1 *)puVar11,
                               local_5a0);
                }
              }
              fVar22 = (float)((int)fVar22 + -1);
              local_628 = (float)((int)local_628 + -1);
              fVar8 = local_5f0;
              fVar27 = local_598;
              fVar26 = local_648;
              fVar28 = local_5bc;
            } while ((int)local_5f0 <= (int)fVar22);
          }
          local_5b4 = (undefined4 *)((int)local_5b4 + 1);
          local_5c0 = (float)(int)local_5b4;
          puVar7 = local_5d4;
          fVar22 = local_594;
        } while (local_5c0 <= fVar26);
      }
      fVar27 = (float)((int)fVar27 + 1);
      fVar28 = (float)(int)fVar27;
    } while (fVar28 <= fVar22);
    local_5b4 = (undefined4 *)local_2c[8];
    local_59c = local_2c[7];
    local_5b0 = (undefined4 *)local_2c[6];
    local_5bc = fVar28;
    local_598 = fVar27;
  }
  if (param_6 == 6) {
    uVar9 = rand();
    uVar9 = uVar9 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    fVar22 = (float)(uVar9 + 5);
    local_674 = fVar22;
    iVar15 = rand();
    iVar5 = local_5a0;
    pvVar10 = local_5a8;
    local_5c0 = 0.0;
    fVar27 = ((float)iVar15 * 6.2831855) / 32767.0;
    local_638 = (double)CONCAT44(fVar27,(undefined4)local_638);
    if (0 < (int)fVar22) {
      local_6dc = (double)(int)fVar22;
      local_6ec = (double)(longlong)local_660 * 1.52587890625e-05;
      local_1f8 = 0.0;
      local_5e8 = (double)(longlong)local_668 * 1.52587890625e-05;
      local_618 = local_5cc * 0.75;
      do {
        local_5d4 = (undefined4 *)
                    (float)(((double)(int)local_5c0 * 3.141592653589793 * 2.0) / local_6dc +
                           (double)fVar27);
        dVar25 = (double)(float)local_5d4;
        libm_sse2_sin_precise();
        local_5bc = (float)dVar25;
        dVar25 = (double)(float)local_5d4;
        libm_sse2_cos_precise();
        local_200 = (float)dVar25;
        fStack_1fc = local_5bc;
        fVar27 = local_5bc * local_5cc;
        _local_a4 = CONCAT44(fVar27,local_200 * local_5cc);
        local_9c = local_1f8 * local_5cc;
        local_5bc = local_5bc * local_618 * 0.1;
        fVar22 = local_200 * local_5cc * 0.5;
        fVar27 = fVar27 * 0.5;
        local_150 = local_9c * 0.5;
        local_52c = (double)fVar22;
        local_524 = (double)fVar27;
        _local_158 = CONCAT44(fVar27,fVar22);
        local_51c = (double)local_150;
        local_604 = local_6ec + local_52c;
        local_630 = local_5e8 + local_524;
        local_670 = local_51c + (double)(int)local_5d0;
        local_5d4 = (undefined4 *)(local_618 * local_200 * 0.1);
        local_648 = local_618 * 0.05;
        local_594 = 0.0;
        do {
          iVar15 = 0;
          do {
            iVar16 = iVar15 + 1;
            *(char *)((int)&local_694 + iVar15) = (char)(int)local_2c[iVar15];
            iVar15 = iVar16;
          } while (iVar16 < 3);
          local_6f0 = local_694;
          local_6ee = local_692;
          local_6ed = 0x27;
          FUN_004d4820(pvVar10,(int)local_604,(int)local_630,(int)local_670,
                       (float)(10 - (int)local_594 / 0x14),(byte *)&local_6f0,iVar5,'\x01','\x01');
          local_604 = (double)(float)local_5d4 + local_604;
          local_630 = (double)local_5bc + local_630;
          local_514 = local_604;
          local_50c = local_630;
          iVar15 = rand();
          local_594 = (float)((int)local_594 + 7);
          local_670 = local_670 - (double)(((float)iVar15 * local_648) / 32767.0);
          local_504 = local_670;
        } while ((int)local_594 < 0x8d);
        local_5c0 = (float)((int)local_5c0 + 1);
        fVar27 = local_638._4_4_;
      } while ((int)local_5c0 < (int)local_674);
      local_5b4 = (undefined4 *)local_2c[8];
      local_59c = local_2c[7];
      local_5b0 = (undefined4 *)local_2c[6];
    }
    goto LAB_00515e0e;
  }
  if (param_6 == 1) {
LAB_00515718:
    iVar5 = local_5a0;
    pvVar10 = local_5a8;
    if (param_6 != 3) goto LAB_00515e0e;
  }
  else if (param_6 != 3) {
    local_5c4 = -1.0;
    iVar5 = (int)local_5d8 + 1;
    iVar15 = local_5dc + 1;
    local_5d4 = (undefined4 *)(4 - (int)local_5d0);
    local_594 = 2.8026e-45;
    local_598 = local_5d0;
    do {
      local_5bc = ((float)((int)local_5d4 + (int)local_598) * local_5cc) / 5.0;
      local_5c4 = local_5c4 + local_5bc;
      iVar16 = 0;
      do {
        iVar12 = iVar16 + 1;
        *(char *)((int)&local_6f8 + iVar16) = (char)(int)local_2c[iVar16];
        iVar16 = iVar12;
      } while (iVar12 < 3);
      local_6ac = local_6f8;
      local_6aa = local_6f6;
      local_6a9 = 0x27;
      FUN_004d4820(local_5a8,(int)((float)(int)local_5d8 - local_5c4),local_5dc,(int)local_598,
                   local_5bc,(byte *)&local_6ac,local_5a0,'\x01','\x01');
      iVar16 = 0;
      do {
        iVar12 = iVar16 + 1;
        *(char *)((int)&local_69c + iVar16) = (char)(int)local_2c[iVar16];
        iVar16 = iVar12;
      } while (iVar12 < 3);
      local_6d4 = local_69c;
      local_6d2 = local_69a;
      local_6d1 = 0x27;
      FUN_004d4820(local_5a8,(int)((float)iVar5 + local_5c4),local_5dc,(int)local_598,local_5bc,
                   (byte *)&local_6d4,local_5a0,'\x01','\x01');
      iVar16 = 0;
      do {
        iVar12 = iVar16 + 1;
        *(char *)((int)&local_6a0 + iVar16) = (char)(int)local_2c[iVar16];
        iVar16 = iVar12;
      } while (iVar12 < 3);
      local_6b4 = local_6a0;
      local_6b2 = local_69e;
      local_6b1 = 0x27;
      FUN_004d4820(local_5a8,(int)local_5d8,(int)((float)(int)local_5dc - local_5c4),(int)local_598,
                   local_5bc,(byte *)&local_6b4,local_5a0,'\x01','\x01');
      iVar16 = 0;
      do {
        iVar12 = iVar16 + 1;
        *(char *)((int)&local_680 + iVar16) = (char)(int)local_2c[iVar16];
        iVar16 = iVar12;
      } while (iVar12 < 3);
      local_704 = local_680;
      local_702 = local_67e;
      local_701 = 0x27;
      FUN_004d4820(local_5a8,(int)local_5d8,(int)((float)iVar15 + local_5c4),(int)local_598,
                   local_5bc,(byte *)&local_704,local_5a0,'\x01','\x01');
      local_598 = (float)((int)local_598 + -1);
      local_594 = (float)((int)local_594 + -1);
    } while (local_594 != 0.0);
    local_594 = 0.0;
    goto LAB_00515718;
  }
  local_5d4 = (undefined4 *)(local_5b8 * 65536.0);
  uVar29 = FUN_0054a946();
  lVar1 = uVar29 + CONCAT44(local_5f8,local_5c8);
  uVar30 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),0x10000,0);
  local_598 = (float)uVar30;
  local_5d4 = (undefined4 *)((float)local_5a4 * 65536.0);
  uVar29 = FUN_0054a946();
  lVar1 = uVar29 + CONCAT44(local_61c,local_5ec);
  uVar30 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),0x10000,0);
  local_5b8 = (float)uVar30;
  iVar5 = local_5a0;
  pvVar10 = local_5a8;
  if ((0x23f0 < (int)(*(int *)((int)local_5a8 + 0x24) - *(int *)((int)local_5a8 + 0x20) &
                     0xfffffffcU)) &&
     (local_5a4 = *(void **)(*(int *)((int)local_5a8 + 0x20) + 0x23f0), local_5a4 != (void *)0x0)) {
    local_78c[0x18] = 0.0;
    local_78c[0x19] = 0.0;
    local_78c[0x1a] = 0.0;
    local_78c[0x1b] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_7d4 + iVar5) = (int)*(float *)((int)local_78c + iVar5 + 0x60);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    iVar5 = *(int *)((int)local_5a4 + 0x44);
    iVar15 = rand();
    pvVar10 = local_5a4;
    local_238 = (int)local_5d0 + local_5ac + -5 + iVar15 % 3;
    local_240 = (int)local_598 - iVar5 / 2;
    local_23c = (int)local_5b8 + 1;
    FUN_00524540(local_5a8,local_5a4,&local_240,0,0x28,0,local_5a0,'\0',local_7d4,0);
    local_78c[0xc] = 0.0;
    local_78c[0xd] = 0.0;
    local_78c[0xe] = 0.0;
    local_78c[0xf] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_7f4 + iVar5) = (int)*(float *)((int)local_78c + iVar5 + 0x30);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    iVar5 = *(int *)((int)pvVar10 + 0x44);
    iVar15 = rand();
    pvVar10 = local_5a4;
    local_294 = (int)local_598 + 1;
    local_28c = (int)local_5d0 + local_5ac + -5 + iVar15 % 3;
    local_290 = (int)local_5b8 - iVar5 / 2;
    FUN_00524540(local_5a8,local_5a4,&local_294,1,0x28,0,local_5a0,'\0',local_7f4,0);
    local_78c[4] = 0.0;
    local_78c[5] = 0.0;
    local_78c[6] = 0.0;
    local_78c[7] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_814 + iVar5) = (int)*(float *)((int)local_78c + iVar5 + 0x10);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    iVar5 = *(int *)((int)pvVar10 + 0x48);
    iVar15 = *(int *)((int)pvVar10 + 0x44);
    iVar16 = rand();
    pvVar10 = local_5a4;
    local_244 = (int)local_5d0 + local_5ac + -5 + iVar16 % 3;
    local_24c = (int)local_598 - iVar15 / 2;
    local_248 = (int)local_5b8 - iVar5;
    FUN_00524540(local_5a8,local_5a4,&local_24c,2,0x28,0,local_5a0,'\0',local_814,0);
    local_78c[0] = 0.0;
    local_78c[1] = 0.0;
    local_78c[2] = 0.0;
    local_78c[3] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_7e4 + iVar5) = (int)*(float *)((int)local_78c + iVar5);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    iVar15 = *(int *)((int)pvVar10 + 0x44);
    iVar16 = *(int *)((int)pvVar10 + 0x48);
    iVar12 = rand();
    iVar5 = local_5a0;
    pvVar10 = local_5a8;
    local_258 = (int)local_598 - iVar16;
    local_250 = (int)local_5d0 + local_5ac + -5 + iVar12 % 3;
    local_254 = (int)local_5b8 - iVar15 / 2;
    FUN_00524540(local_5a8,local_5a4,&local_258,3,0x28,0,local_5a0,'\0',local_7e4,0);
    pcVar18 = rand_exref;
  }
  if ((0x23f4 < (int)(*(int *)((int)pvVar10 + 0x24) - *(int *)((int)pvVar10 + 0x20) & 0xfffffffcU))
     && (local_5a4 = *(void **)(*(int *)((int)pvVar10 + 0x20) + 0x23f4), local_5a4 != (void *)0x0))
  {
    local_78c[8] = 0.0;
    local_78c[9] = 0.0;
    local_78c[10] = 0.0;
    local_78c[0xb] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_7a4 + iVar5) = (int)*(float *)((int)local_78c + iVar5 + 0x20);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    iVar5 = (*pcVar18)();
    pvVar10 = local_5a4;
    local_5d4 = (undefined4 *)((int)local_598 + 1);
    local_618 = (float)((int)local_5b8 + 1);
    local_2a4 = (int)local_5d0 + local_5ac + -5 + iVar5 % 3;
    local_2ac = (uint)local_5d4;
    local_2a8 = local_618;
    FUN_00524540(local_5a8,local_5a4,&local_2ac,0,0x28,0,local_5a0,'\0',local_7a4,0);
    local_78c[0x10] = 0.0;
    local_78c[0x11] = 0.0;
    local_78c[0x12] = 0.0;
    local_78c[0x13] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_7b4 + iVar5) = (int)*(float *)((int)local_78c + iVar5 + 0x40);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    iVar5 = *(int *)((int)pvVar10 + 0x48);
    iVar15 = (*pcVar18)();
    pvVar10 = local_5a4;
    local_264 = (uint)local_5d4;
    local_260 = (int)local_5b8 - iVar5;
    local_25c = local_5ac + (int)local_5d0 + -5 + iVar15 % 3;
    FUN_00524540(local_5a8,local_5a4,&local_264,1,0x28,0,local_5a0,'\0',local_7b4,0);
    local_78c[0x1c] = 0.0;
    local_78c[0x1d] = 0.0;
    local_78c[0x1e] = 0.0;
    local_78c[0x1f] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_7c4 + iVar5) = (int)*(float *)((int)local_78c + iVar5 + 0x70);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    iVar5 = *(int *)((int)pvVar10 + 0x48);
    iVar15 = (*pcVar18)();
    pvVar10 = local_5a4;
    local_2c4 = (int)local_598 - iVar5;
    local_2c0 = (int)local_5b8 - iVar5;
    local_2bc = local_5ac + (int)local_5d0 + -5 + iVar15 % 3;
    FUN_00524540(local_5a8,local_5a4,&local_2c4,2,0x28,0,local_5a0,'\0',local_7c4,0);
    local_78c[0x14] = 0.0;
    local_78c[0x15] = 0.0;
    local_78c[0x16] = 0.0;
    local_78c[0x17] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_804 + iVar5) = (int)*(float *)((int)local_78c + iVar5 + 0x50);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    puVar7 = *(undefined4 **)((int)pvVar10 + 0x48);
    local_5d4 = puVar7;
    iVar15 = (*pcVar18)();
    iVar5 = local_5a0;
    pvVar10 = local_5a8;
    local_288 = (int)local_598 - (int)puVar7;
    local_284 = local_618;
    local_280 = (int)local_5d0 + local_5ac + -5 + iVar15 % 3;
    FUN_00524540(local_5a8,local_5a4,&local_288,3,0x28,0,local_5a0,'\0',local_804,0);
  }
LAB_00515e0e:
  iVar15 = (*pcVar18)();
  if ((iVar15 % 10 == 0) && (0.2 < local_5fc)) {
    uVar9 = local_5ac + (int)local_5d0;
    local_3d8 = local_5c8;
    local_790 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
    local_3d4 = local_5f8;
    local_3d0 = local_5ec;
    local_3cc = local_61c;
    local_5d4 = *(undefined4 **)(iVar5 + 4);
    local_794 = uVar9 * 0x10000;
    local_3b4 = 0x3f800000;
    local_3b0 = 0x3f800000;
    local_3ac = 0x3f800000;
    local_3a8 = 2;
    local_3e0[0] = 0x3d;
    local_3c8 = local_794;
    local_3c4 = local_790;
    iVar15 = FUN_004c6770(local_5d4,(undefined4 *)local_5d4[1],local_3e0);
    if (*(int *)(iVar5 + 8) == 0x38e38e2) {
LAB_00515ef0:
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    local_5d4[1] = iVar15;
    **(int **)(iVar15 + 4) = iVar15;
  }
  if (param_6 == 5) {
    puVar7 = (undefined4 *)
             (int)((float)(((int)(local_5ac + (local_5ac >> 0x1f & 3U)) >> 2) + 6) +
                  (float)param_4 * 0.5);
    local_5b0 = puVar7;
    (*pcVar18)();
    (*pcVar18)();
    uVar9 = (*pcVar18)();
    uVar9 = uVar9 & 0x80000007;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
    }
    local_5d4 = (undefined4 *)((float)(int)uVar9 * 0.7853982);
    local_5b4 = (undefined4 *)0x0;
    if (0 < (int)puVar7) {
      local_59c = 0.0;
      do {
        uVar9 = (uint)local_5b4 & 0x80000001;
        bVar20 = uVar9 == 0;
        if ((int)uVar9 < 0) {
          bVar20 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar20) {
LAB_00515fcc:
          iVar5 = local_5ac;
          local_6ec = (double)(longlong)local_660 * 1.52587890625e-05;
          local_648 = ((float)(int)local_5b4 * 0.6) / (float)((int)puVar7 + -1) + 0.6;
          local_5e8 = (double)(longlong)local_668 * 1.52587890625e-05;
          local_6dc = (double)((float)local_5ac * local_648 + (float)(int)local_5d0);
          local_618 = (float)(int)local_5b4 * 3.1415927 * 0.25 + (float)local_5d4;
          dVar25 = (double)local_618;
          libm_sse2_sin_precise();
          local_5e0 = (float)dVar25;
          dVar25 = (double)local_618;
          libm_sse2_cos_precise();
          local_17c = (float)dVar25;
          local_174 = 0;
          fStack_178 = local_5e0;
          local_138 = local_5cc * 0.0;
          _local_140 = CONCAT44(local_5e0 * local_5cc,local_17c * local_5cc);
          local_4ec = (double)(local_17c * local_5cc);
          local_4e4 = (double)(local_5e0 * local_5cc);
          local_4dc = (double)local_138;
          local_6e4 = local_4ec + local_6ec;
          local_6ec = local_4e4 + local_5e8;
          local_5e8 = local_4dc + local_6dc;
          local_618 = 1.0 - local_648;
          _local_d4 = CONCAT44(local_2c[1] * local_618,local_2c[0] * local_618);
          local_cc = local_2c[2] * local_618;
          local_12c = local_648 * local_30;
          _local_134 = CONCAT44(local_648 * fStack_34,local_648 * local_38);
          local_80 = CONCAT44(local_2c[1] * local_618 + local_648 * fStack_34,
                              local_2c[0] * local_618 + local_648 * local_38);
          local_78 = local_cc + local_12c;
          local_15c = local_78;
          local_164 = local_80;
          iVar15 = 0;
          do {
            pfVar6 = (float *)((int)&local_164 + iVar15 * 4);
            if (*pfVar6 <= 0.0 && *pfVar6 != 0.0) {
              *(undefined4 *)((int)&local_164 + iVar15 * 4) = 0;
            }
            if (255.0 < *(float *)((int)&local_164 + iVar15 * 4)) {
              *(undefined4 *)((int)&local_164 + iVar15 * 4) = 0x437f0000;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < 3);
          local_4b4 = local_6e4;
          local_4ac = local_6ec;
          local_4a4 = local_5e8;
          iVar15 = (*pcVar18)();
          iVar16 = (int)local_59c + ((int)local_59c >> 0x1f & 3U);
          local_5d8 = (float)(iVar5 / 2 + iVar15 % (iVar5 / 2) +
                             (int)(CONCAT44(iVar16 >> 0x1f,iVar16 >> 2) / (longlong)(int)local_5b0))
          ;
          local_5dc = 0;
          fVar27 = (float)param_4 * 8.0 * local_618 + (float)param_4;
          puVar7 = local_5b0;
          if (-1 < (int)local_5d8 * 2) {
            fVar22 = (float)((int)local_5d8 * 2);
            local_618 = fVar27 * local_5e0;
            local_648 = fVar27 * local_17c;
            local_604 = (double)CONCAT44(fVar22,(undefined4)local_604);
            iVar5 = local_5a0;
            do {
              fVar27 = 1.0 - (float)(int)local_5dc / fVar22;
              local_5bc = 1.0 - fVar27 * fVar27;
              local_700 = ((double)((float)(int)local_5dc * 0.5) + local_5e8) * 65536.0;
              local_650 = (double)FUN_0054a946();
              local_70c = ((double)(local_5bc * local_618) + local_6ec) * 65536.0;
              local_640 = (double)FUN_0054a946();
              local_614 = ((double)(local_5bc * local_648) + local_6e4) * 65536.0;
              local_60c = (double)FUN_0054a946();
              iVar15 = FUN_00406050(pvVar10,SUB84(local_60c,0),(uint)((ulonglong)local_60c >> 0x20),
                                    (uint)local_640,local_640._4_4_,(uint)local_650,local_650._4_4_,
                                    iVar5);
              if ((*(byte *)(iVar15 + 3) & 0x40) == 0) {
                local_5f8 = (uint)local_650 + 0x10000;
                local_5fc = (float)(local_650._4_4_ + (0xfffeffff < (uint)local_650));
                iVar15 = FUN_00406050(pvVar10,(uint)local_60c,local_60c._4_4_,(uint)local_640,
                                      local_640._4_4_,local_5f8,(uint)local_5fc,iVar5);
                if ((*(byte *)(iVar15 + 3) & 0x40) == 0) {
                  iVar15 = 0;
                  do {
                    iVar16 = iVar15 + 1;
                    *(char *)((int)&local_6a8 + iVar15) =
                         (char)(int)*(float *)((int)&local_164 + iVar15 * 4);
                    iVar15 = iVar16;
                  } while (iVar16 < 3);
                  local_6bc = local_6a8;
                  local_6ba = local_6a6;
                  local_6b9 = 0x27;
                  uVar30 = __alldiv((uint)local_640,local_640._4_4_,0x10000,0);
                  local_594 = (float)uVar30;
                  uVar30 = __alldiv((uint)local_60c,local_60c._4_4_,0x10000,0);
                  local_5c0 = (float)uVar30;
                  puVar11 = &local_6bc;
                  iVar15 = iVar5;
                  uVar30 = __alldiv(local_5f8,(uint)local_5fc,0x10000,0);
                  FUN_0041ff00(pvVar10,local_5c0,(uint)local_594,(int)uVar30,(undefined1 *)puVar11,
                               iVar15);
                  iVar15 = 0;
                  do {
                    iVar16 = iVar15 + 1;
                    *(char *)((int)&local_6c0 + iVar15) =
                         (char)(int)*(float *)((int)&local_164 + iVar15 * 4);
                    iVar15 = iVar16;
                  } while (iVar16 < 3);
                  local_684 = local_6c0;
                  local_682 = local_6be;
                  puVar11 = &local_684;
                  local_681 = 0x27;
                  iVar15 = iVar5;
                  uVar30 = __alldiv((uint)local_650,local_650._4_4_,0x10000,0);
                  FUN_0041ff00(pvVar10,local_5c0,(uint)local_594,(int)uVar30,(undefined1 *)puVar11,
                               iVar15);
                  if (local_5dc == (int)local_5d8 * 2) {
LAB_00516682:
                    iVar15 = (*pcVar18)();
                    local_5c4 = (((float)iVar15 * local_5bc * 0.75) / 32767.0 + 0.25) *
                                (float)(int)local_5d8 * 0.5 + 2.0;
                    iVar15 = (*pcVar18)();
                    local_630 = (double)CONCAT44((((float)iVar15 * 0.5) / 32767.0 + 0.5) * local_5c4
                                                 ,(undefined4)local_630);
                    local_674 = local_5c4 * local_5e0 * 0.25 * 65536.0;
                    uVar29 = FUN_0054a946();
                    uVar19 = (uint)(uVar29 + (longlong)local_640);
                    local_5b8 = (float)(uVar29 + (longlong)local_640 >> 0x20);
                    local_638 = (double)CONCAT44(local_5c4 * local_17c * 0.25 * 65536.0,
                                                 (undefined4)local_638);
                    local_5c8 = (float)uVar19;
                    uVar29 = FUN_0054a946();
                    local_5a4 = (void *)(uVar29 + (longlong)local_60c);
                    local_5f0 = local_5c4 * 65536.0;
                    local_598 = (float)(uVar29 + (longlong)local_60c >> 0x20);
                    local_18c._4_4_ = (int)local_5b8;
                    local_194._0_4_ = (uint)local_5a4;
                    local_194._4_4_ = (int)local_598;
                    local_18c._0_4_ = uVar19;
                    uVar29 = FUN_0054a946();
                    local_61c = (uint)(uVar29 >> 0x20);
                    local_5ec = (uint)uVar29;
                    local_5bc = (float)(((int)local_5a4 - local_5ec) - 0x10000);
                    uVar9 = *(uint *)(iVar5 + 0x60);
                    iVar15 = (((int)local_598 - local_61c) - (uint)(local_5a4 < local_5ec)) -
                             (uint)((int)local_5a4 - local_5ec < 0x10000);
                    local_620 = (float)(uVar9 << 8);
                    uVar17 = ((int)local_620 >> 0x1f) << 0x10 | (uVar9 & 0xffffff) >> 8;
                    local_194 = CONCAT44(local_194._4_4_,(uint)local_194);
                    uVar2 = CONCAT44(local_598,local_5a4);
                    if ((iVar15 <= (int)uVar17) &&
                       ((iVar15 < (int)uVar17 ||
                        (local_194 = CONCAT44(local_194._4_4_,(uint)local_194),
                        uVar2 = CONCAT44(local_598,local_5a4), (uint)local_5bc < uVar9 << 0x18)))) {
                      local_628 = ((float)(int)local_620 + local_5c4 + 1.0) * 65536.0;
                      local_194 = FUN_0054a946();
                      uVar29 = CONCAT44(local_61c,local_5ec);
                      uVar2 = local_194;
                    }
                    local_598 = (float)(uVar2 >> 0x20);
                    local_5a4 = (void *)uVar2;
                    local_61c = (uint)(uVar29 >> 0x20);
                    local_5ec = (uint)uVar29;
                    local_5c0 = (float)((uVar19 - local_5ec) - 0x10000);
                    uVar9 = *(uint *)(iVar5 + 100);
                    iVar15 = (((int)local_5b8 - local_61c) - (uint)(uVar19 < local_5ec)) -
                             (uint)(uVar19 - local_5ec < 0x10000);
                    local_594 = (float)(uVar9 << 8);
                    uVar17 = ((int)local_594 >> 0x1f) << 0x10 | (uVar9 & 0xffffff) >> 8;
                    local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
                    uVar3 = CONCAT44(local_5b8,uVar19);
                    if ((iVar15 <= (int)uVar17) &&
                       ((iVar15 < (int)uVar17 ||
                        (local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c),
                        uVar3 = CONCAT44(local_5b8,uVar19), (uint)local_5c0 < uVar9 << 0x18)))) {
                      local_644 = ((float)(int)local_594 + local_5c4 + 1.0) * 65536.0;
                      local_18c = FUN_0054a946();
                      uVar2 = CONCAT44(local_598,local_5a4);
                      uVar29 = CONCAT44(local_61c,local_5ec);
                      local_5c8 = (float)local_18c;
                      uVar3 = local_18c;
                    }
                    local_5b8 = (float)(uVar3 >> 0x20);
                    local_598 = (float)(uVar2 >> 0x20);
                    local_5a4 = (void *)uVar2;
                    local_61c = (uint)(uVar29 >> 0x20);
                    local_5ec = (uint)uVar29;
                    lVar1 = uVar29 + uVar2 + 0x10000;
                    local_5c0 = (float)lVar1;
                    uVar9 = (int)local_620 + 0x100;
                    uVar31 = local_194;
                    if (CONCAT44(((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10,uVar9 * 0x10000) <=
                        lVar1) {
                      fStack_678 = (((float)((int)local_620 + 0x100) - local_5c4) - 2.0) * 65536.0;
                      uVar31 = FUN_0054a946();
                      uVar29 = CONCAT44(local_61c,local_5ec);
                      uVar2 = uVar31;
                    }
                    local_598 = (float)(uVar2 >> 0x20);
                    local_5a4 = (void *)uVar2;
                    local_61c = (uint)(uVar29 >> 0x20);
                    local_5ec = (uint)uVar29;
                    local_594 = (float)((int)local_594 + 0x100);
                    local_194 = uVar31;
                    uVar31 = local_18c;
                    uVar4 = CONCAT44(local_5b8,local_5c8);
                    if (CONCAT44(((int)local_594 >> 0x1f) << 0x10 | (uint)local_594 >> 0x10,
                                 (int)local_594 * 0x10000) <=
                        (longlong)(uVar29 + CONCAT44(local_5b8,(int)uVar3) + 0x10000)) {
                      local_670 = (double)CONCAT44((((float)(int)local_594 - local_5c4) - 2.0) *
                                                   65536.0,(undefined4)local_670);
                      uVar31 = FUN_0054a946();
                      uVar2 = CONCAT44(local_598,local_5a4);
                      uVar29 = CONCAT44(local_61c,local_5ec);
                      uVar4 = uVar31;
                    }
                    local_5b8 = (float)(uVar4 >> 0x20);
                    local_5c8 = (float)uVar4;
                    local_598 = (float)(uVar2 >> 0x20);
                    local_5a4 = (void *)uVar2;
                    local_61c = (uint)(uVar29 >> 0x20);
                    local_5ec = (uint)uVar29;
                    iVar15 = 5;
                    fVar27 = local_2c[6];
                    fVar22 = local_2c[7];
                    fVar28 = local_2c[8];
                    fVar26 = local_2c[3];
                    fVar8 = local_2c[4];
                    fVar35 = local_2c[5];
                    local_18c = uVar31;
                    uVar30 = __alldiv(local_5f8,(uint)local_5fc,0x10000,0);
                    uVar32 = __alldiv((uint)local_5c8,(uint)local_5b8,0x10000,0);
                    uVar33 = __alldiv((uint)local_5a4,(uint)local_598,0x10000,0);
                    pvVar10 = local_5a8;
                    FUN_0050bd60((int)uVar33,(int)uVar32,(int)uVar30,local_5c4,local_630._4_4_,
                                 CONCAT44(fVar22,fVar27),fVar28,CONCAT44(fVar8,fVar26),fVar35,iVar15
                                 ,iVar5);
                    iVar5 = local_5a0;
                    if (local_58d != '\0') {
                      local_398 = local_5a4;
                      local_394 = local_598;
                      local_390 = local_5c8;
                      local_38c = local_5b8;
                      local_388 = local_5f8;
                      local_384 = local_5fc;
                      local_98 = CONCAT44(local_2c[7] / 255.0,local_2c[6] / 255.0);
                      local_36c = local_2c[8] / 255.0;
                      puVar7 = *(undefined4 **)(local_5a0 + 4);
                      local_630 = (double)CONCAT44(puVar7,(undefined4)local_630);
                      local_368 = 2;
                      local_3a0[0] = 0x3c;
                      local_374 = local_98;
                      local_90 = local_36c;
                      iVar15 = FUN_004c6770(puVar7,(undefined4 *)puVar7[1],local_3a0);
                      if (*(int *)(iVar5 + 8) == 0x38e38e2) goto LAB_00515ef0;
                      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
                      *(int *)((int)local_630._4_4_ + 4) = iVar15;
                      **(int **)(iVar15 + 4) = iVar15;
                    }
                  }
                  else {
                    uVar9 = local_5dc & 0x80000003;
                    bVar20 = uVar9 == 0;
                    if ((int)uVar9 < 0) {
                      bVar20 = (uVar9 - 1 | 0xfffffffc) == 0xffffffff;
                    }
                    if (bVar20) {
                      iVar15 = (*pcVar18)();
                      if (iVar15 % 3 == 0) goto LAB_00516682;
                    }
                  }
                }
              }
              local_5dc = local_5dc + 1;
              puVar7 = local_5b0;
              fVar22 = local_604._4_4_;
            } while ((int)local_5dc <= (int)local_5d8 * 2);
          }
        }
        else {
          iVar5 = (*pcVar18)();
          if (iVar5 % 3 == 0) goto LAB_00515fcc;
        }
        local_59c = (float)((int)local_59c + local_5ac);
        local_5b4 = (undefined4 *)((int)local_5b4 + 1);
      } while ((int)local_5b4 < (int)puVar7);
    }
  }
  else if (((param_6 == 0) || (param_6 == 4)) || (param_6 == 2)) {
    iVar15 = (*pcVar18)();
    local_5e0 = (float)(iVar15 % 5 + 4);
    iVar15 = (*pcVar18)();
    local_630 = (double)CONCAT44(((float)iVar15 * 6.2831855) / 32767.0,(undefined4)local_630);
    iVar15 = (*pcVar18)();
    local_5bc = ((float)iVar15 * 0.8) / 32767.0 + 0.6;
    iVar15 = (*pcVar18)();
    local_604 = (double)CONCAT44((((float)iVar15 * 1.25) / 32767.0 + 2.0) * local_5cc,
                                 (undefined4)local_604);
    puVar7 = local_5b0;
    fVar27 = local_59c;
    puVar34 = local_5b4;
    fVar22 = local_2c[3];
    fVar28 = local_2c[4];
    fVar26 = local_2c[5];
    iVar15 = param_6;
    uVar30 = __alldiv(local_5ec,local_61c,0x10000,0);
    uVar32 = __alldiv((uint)local_5c8,local_5f8,0x10000,0);
    FUN_0050bd60((int)uVar32,(int)uVar30,local_5ac + (int)local_5d0,local_604._4_4_,
                 local_604._4_4_ * local_5bc,CONCAT44(fVar27,puVar7),(float)puVar34,
                 CONCAT44(fVar28,fVar22),fVar26,iVar15,iVar5);
    iVar5 = local_5a0;
    local_5ec = 0;
    if (0 < (int)local_5e0) {
      local_6e4 = (double)(longlong)local_668 * 1.52587890625e-05;
      local_1ec = 0.0;
      local_614 = (double)(longlong)local_660 * 1.52587890625e-05;
      fStack_678 = local_5cc * 0.75;
      do {
        iVar15 = (*pcVar18)();
        fVar27 = ((float)iVar15 * 0.5) / 32767.0 + 0.5;
        local_670 = (double)CONCAT44(fVar27,(undefined4)local_670);
        local_70c = (double)(fVar27 * (float)local_5ac + (float)(int)local_5d0);
        fVar27 = ((float)(int)local_5ec * 3.1415927 * 2.0) / (float)(int)local_5e0 + local_630._4_4_
        ;
        dVar25 = (double)fVar27;
        local_604._4_4_ = fVar27;
        libm_sse2_sin_precise();
        local_5c8 = (float)dVar25;
        dVar25 = (double)local_604._4_4_;
        libm_sse2_cos_precise();
        local_1f4 = (float)dVar25;
        fStack_1f0 = local_5c8;
        local_8c = CONCAT44(local_5c8 * local_5cc,local_1f4 * local_5cc);
        local_210 = local_1ec * local_5cc;
        local_218 = local_8c;
        local_20c = CONCAT44(fStack_34,local_38);
        local_60c = (double)(local_1f4 * local_5cc * 0.5) + local_614;
        local_640 = (double)(local_210 * 0.5) + local_70c;
        local_650 = (double)(local_5c8 * local_5cc * 0.5) + local_6e4;
        local_204 = local_30;
        fVar27 = 1.0 - local_670._4_4_;
        local_594 = 8.40779e-45;
        _local_5c = CONCAT44(local_2c[1] * fVar27,local_2c[0] * fVar27);
        local_54 = local_2c[2] * fVar27;
        local_ec[1] = local_2c[1] * fVar27 + fStack_34 * local_670._4_4_;
        local_ec[0] = local_2c[0] * fVar27 + local_38 * local_670._4_4_;
        local_ec[2] = local_54 + local_30 * local_670._4_4_;
        local_624 = local_1f4 * fStack_678 * 0.5;
        local_5c8 = local_5c8 * fStack_678 * 0.5;
        local_604 = (double)CONCAT44(fStack_678 * 0.5,(undefined4)local_604);
        local_84 = local_210;
        do {
          if (((param_6 != 2) && (param_6 != 4)) && (1.5 < local_5cc)) {
            iVar15 = 0;
            do {
              iVar16 = iVar15 + 1;
              *(char *)((int)&local_658 + iVar15) = (char)(int)local_ec[iVar15];
              iVar15 = iVar16;
            } while (iVar16 < 3);
            local_5f4 = (float)CONCAT13(0x27,SUB43(local_658,0));
            FUN_004d4820(pvVar10,(int)local_60c,(int)local_650,(int)local_640,2.0,(byte *)&local_5f4
                         ,iVar5,'\x01','\x01');
          }
          local_60c = (double)local_624 + local_60c;
          local_650 = (double)local_5c8 + local_650;
          iVar15 = (*pcVar18)();
          local_594 = (float)((int)local_594 - 1);
          local_640 = (double)(((float)iVar15 * local_604._4_4_) / 32767.0) + local_640;
        } while (local_594 != 0.0);
        iVar15 = (*pcVar18)();
        iVar16 = *(int *)(iVar5 + 0x60) * 0x100;
        fVar27 = (((float)iVar15 * 1.25) / 32767.0 + 2.0) * local_5cc;
        if ((local_60c - (double)fVar27) - 1.0 < (double)iVar16) {
          local_60c = (double)((float)iVar16 + fVar27 + 1.0);
        }
        iVar15 = *(int *)(iVar5 + 100) * 0x100;
        if ((local_650 - (double)fVar27) - 1.0 < (double)iVar15) {
          local_650 = (double)((float)iVar15 + fVar27 + 1.0);
        }
        if ((double)(iVar16 + 0x100) <= (double)fVar27 + local_60c + 1.0) {
          local_60c = (double)(((float)(iVar16 + 0x100) - fVar27) - 2.0);
        }
        if ((double)(iVar15 + 0x100) <= (double)fVar27 + local_650 + 1.0) {
          local_650 = (double)(((float)(iVar15 + 0x100) - fVar27) - 2.0);
        }
        if (4 < (int)local_5ec) {
          local_640 = (double)(local_5bc * fVar27 * 0.5) + local_640;
        }
        fVar22 = local_5bc * fVar27 * 0.25;
        local_604 = (double)CONCAT44(fVar22,(undefined4)local_604);
        FUN_0050bd60((int)local_60c,(int)local_650,(int)((double)fVar22 + local_640),fVar27,
                     local_5bc * fVar27,CONCAT44(local_2c[7],local_2c[6]),local_2c[8],
                     CONCAT44(local_2c[4],local_2c[3]),local_2c[5],param_6,iVar5);
        if (local_58d != '\0') {
          local_410[0] = local_60c + 0.0;
          local_430 = 0x3f8000003f800000;
          local_428 = 1.0;
          local_424 = 2;
          local_410[1] = local_650 + 0.0;
          iVar15 = 0;
          local_410[2] = local_640 + (double)local_604._4_4_;
          do {
            local_700 = *(double *)((int)local_410 + iVar15) * 65536.0;
            uVar29 = FUN_0054a946();
            *(int *)((int)auStack_454 + iVar15) = (int)uVar29;
            *(int *)((int)auStack_454 + iVar15 + 4) = (int)(uVar29 >> 0x20);
            iVar15 = iVar15 + 8;
          } while (iVar15 < 0x18);
          local_68 = CONCAT44(local_2c[7] / 255.0,local_2c[6] / 255.0);
          local_428 = local_2c[8] / 255.0;
          puVar7 = *(undefined4 **)(iVar5 + 4);
          local_45c[0] = 0x3c;
          local_430 = local_68;
          local_604 = (double)CONCAT44(puVar7,(undefined4)local_604);
          local_60 = local_428;
          iVar15 = FUN_004c6770(puVar7,(undefined4 *)puVar7[1],local_45c);
          if (*(int *)(iVar5 + 8) == 0x38e38e2) goto LAB_00515ef0;
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          *(int *)((int)local_604._4_4_ + 4) = iVar15;
          **(int **)(iVar15 + 4) = iVar15;
          pvVar10 = local_5a8;
        }
        local_5ec = local_5ec + 1;
      } while ((int)local_5ec < (int)local_5e0);
    }
  }
  else if (param_6 == 6) {
    iVar15 = (*pcVar18)();
    local_5e0 = (float)(iVar15 % 5 + 8);
    iVar15 = (*pcVar18)();
    local_604 = (double)CONCAT44(((float)iVar15 * 6.2831855) / 32767.0,(undefined4)local_604);
    (*pcVar18)();
    (*pcVar18)();
    local_5bc = 0.0;
    if (0 < (int)local_5e0) {
      local_6e4 = (double)(longlong)local_668 * 1.52587890625e-05;
      local_198 = 0.0;
      local_614 = (double)(longlong)local_660 * 1.52587890625e-05;
      fStack_678 = local_5cc * 0.75;
      do {
        iVar15 = (*pcVar18)();
        fVar27 = ((float)iVar15 * 0.5) / 32767.0 + 0.5;
        local_670 = (double)CONCAT44(fVar27,(undefined4)local_670);
        local_70c = (double)((float)local_5ac * fVar27 + (float)(int)local_5d0);
        local_594 = ((float)(int)local_5bc * 3.1415927 * 2.0) / (float)(int)local_5e0 +
                    local_604._4_4_;
        dVar25 = (double)local_594;
        libm_sse2_sin_precise();
        local_644 = (float)dVar25;
        dVar25 = (double)local_594;
        libm_sse2_cos_precise();
        local_1a0 = (float)dVar25;
        fStack_19c = local_644;
        local_630 = (double)CONCAT44(local_594 + 1.5707964,(undefined4)local_630);
        dVar25 = (double)(local_594 + 1.5707964);
        libm_sse2_sin_precise();
        local_5c0 = (float)dVar25;
        dVar25 = (double)local_630._4_4_;
        libm_sse2_cos_precise();
        local_5f0 = (float)dVar25;
        local_74 = CONCAT44(fStack_19c * local_5cc,local_1a0 * local_5cc);
        local_1c8 = local_198 * local_5cc;
        local_1d0 = local_74;
        local_1dc = CONCAT44(fStack_34,local_38);
        fVar27 = 1.0 - local_670._4_4_;
        local_1d4 = local_30;
        local_660 = (double)(local_1a0 * local_5cc * 0.5) + local_614;
        local_668 = (double)(fStack_19c * local_5cc * 0.5) + local_6e4;
        local_60c = (double)(local_1c8 * 0.5) + local_70c;
        _local_c8 = CONCAT44(local_2c[1] * fVar27,local_2c[0] * fVar27);
        local_c0 = local_2c[2] * fVar27;
        local_2dc[0] = local_660;
        local_2dc[1] = local_668;
        local_2dc[2] = local_60c;
        local_5c8 = 0.0;
        local_5f4 = 0.0;
        local_104[1] = local_2c[1] * fVar27 + fStack_34 * local_670._4_4_;
        local_104[0] = local_2c[0] * fVar27 + local_38 * local_670._4_4_;
        local_104[2] = local_c0 + local_30 * local_670._4_4_;
        local_6c = local_1c8;
        do {
          local_594 = 6.5 - (float)(int)local_5f4 / 40.0;
          iVar15 = 0;
          do {
            iVar16 = iVar15 + 1;
            *(char *)((int)&local_6c8 + iVar15) = (char)(int)local_104[iVar15];
            iVar15 = iVar16;
          } while (iVar16 < 3);
          local_654 = (float)CONCAT13(0x27,CONCAT12(local_6c6,local_6c8));
          local_2dc[0] = local_660;
          local_2dc[1] = local_668;
          local_2dc[2] = local_60c;
          FUN_004d4820(pvVar10,(int)local_660,(int)local_668,(int)local_60c,local_594,
                       (byte *)&local_654,iVar5,'\x01','\x01');
          if (10 < (int)local_5c8) {
            local_628 = 7.00649e-45;
            do {
              iVar15 = (int)local_5c8 + -10;
              iVar16 = (*pcVar18)();
              if (iVar16 % 0x78 < iVar15) {
                iVar16 = 6;
                fVar27 = local_2c[6];
                fVar22 = local_2c[7];
                fVar28 = local_2c[8];
                fVar26 = local_2c[3];
                fVar8 = local_2c[4];
                fVar35 = local_2c[5];
                uVar9 = (*pcVar18)();
                uVar9 = uVar9 & 0x80000003;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                }
                fVar23 = (float)(int)(uVar9 + 4);
                uVar9 = (*pcVar18)();
                uVar9 = uVar9 & 0x80000003;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                }
                fVar24 = (float)(int)(uVar9 + 4);
                iVar12 = (*pcVar18)();
                iVar12 = (int)((double)(iVar12 % (2 - (int)(local_594 * -2.0))) + (local_60c - 3.0))
                ;
                iVar13 = (*pcVar18)();
                iVar13 = (int)((((double)(iVar13 % 0x14) + local_668) - 10.0) +
                              (double)(local_5c0 * 4.0));
                iVar14 = (*pcVar18)();
                FUN_0050bd60((int)((((double)(iVar14 % 0x14) + local_660) - 10.0) +
                                  (double)(local_5f0 * 4.0)),iVar13,iVar12,fVar24,fVar23,
                             CONCAT44(fVar22,fVar27),fVar28,CONCAT44(fVar8,fVar26),fVar35,iVar16,
                             iVar5);
                iVar5 = local_5a0;
              }
              iVar16 = (*pcVar18)();
              pvVar10 = local_5a8;
              if (iVar16 % 0x78 < iVar15) {
                iVar15 = 6;
                fVar27 = local_2c[6];
                fVar22 = local_2c[7];
                fVar28 = local_2c[8];
                fVar26 = local_2c[3];
                fVar8 = local_2c[4];
                fVar35 = local_2c[5];
                uVar9 = (*pcVar18)();
                uVar9 = uVar9 & 0x80000003;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                }
                fVar23 = (float)(int)(uVar9 + 4);
                uVar9 = (*pcVar18)();
                uVar9 = uVar9 & 0x80000003;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                }
                fVar24 = (float)(int)(uVar9 + 4);
                iVar16 = (*pcVar18)();
                iVar16 = (int)((double)(iVar16 % ((1 - (int)(local_594 * -2.0)) * 2)) +
                              (local_60c - 3.0));
                iVar12 = (*pcVar18)();
                iVar12 = (int)((((double)(iVar12 % 0x14) + local_668) - 10.0) -
                              (double)(local_5c0 * 4.0));
                iVar13 = (*pcVar18)();
                pvVar10 = local_5a8;
                FUN_0050bd60((int)((((double)(iVar13 % 0x14) + local_660) - 10.0) -
                                  (double)(local_5f0 * 4.0)),iVar12,iVar16,fVar24,fVar23,
                             CONCAT44(fVar22,fVar27),fVar28,CONCAT44(fVar8,fVar26),fVar35,iVar15,
                             iVar5);
              }
              local_628 = (float)((int)local_628 + -1);
              iVar5 = local_5a0;
            } while (local_628 != 0.0);
            local_628 = 0.0;
            if (local_58d != '\0') {
              local_470 = 0x3f8000003f800000;
              local_468 = 1.0;
              local_464 = 2;
              iVar15 = 0;
              do {
                local_700 = *(double *)((int)local_2dc + iVar15) * 65536.0;
                uVar29 = FUN_0054a946();
                iVar5 = local_5a0;
                *(int *)((int)auStack_494 + iVar15) = (int)uVar29;
                *(int *)((int)auStack_494 + iVar15 + 4) = (int)(uVar29 >> 0x20);
                iVar15 = iVar15 + 8;
              } while (iVar15 < 0x18);
              local_50 = CONCAT44(local_2c[7] / 255.0,local_2c[6] / 255.0);
              local_468 = local_2c[8] / 255.0;
              puVar7 = *(undefined4 **)(local_5a0 + 4);
              local_630 = (double)CONCAT44(puVar7,(undefined4)local_630);
              local_49c[0] = 0x3c;
              local_470 = local_50;
              local_48 = local_468;
              iVar15 = FUN_004c6770(puVar7,(undefined4 *)puVar7[1],local_49c);
              if (*(int *)(iVar5 + 8) == 0x38e38e2) goto LAB_00515ef0;
              *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
              *(int *)((int)local_630._4_4_ + 4) = iVar15;
              **(int **)(iVar15 + 4) = iVar15;
            }
          }
          local_660 = (double)(local_1a0 * fStack_678 * 0.075) + local_660;
          local_2dc[0] = local_660;
          local_668 = (double)(local_644 * fStack_678 * 0.075) + local_668;
          fVar27 = (float)(int)local_5c8;
          local_5c8 = (float)((int)local_5c8 + 1);
          local_5f4 = (float)((int)local_5f4 + 5);
          local_60c = (double)((fStack_678 * 0.1 * fVar27) / 40.0) + local_60c;
          local_2dc[1] = local_668;
          local_2dc[2] = local_60c;
        } while ((int)local_5f4 < 0xc9);
        local_5bc = (float)((int)local_5bc + 1);
        if ((int)local_5e0 <= (int)local_5bc) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      } while( true );
    }
  }
  else if (param_6 == 1) {
    iVar5 = (*pcVar18)();
    local_654 = ((float)iVar5 * 6.2831855) / 32767.0;
    iVar5 = (*pcVar18)();
    local_58d = (byte)(iVar5 % 100);
    iVar5 = (*pcVar18)();
    iVar15 = rand();
    local_170[0] = (float)(iVar15 % 100 & 0xff);
    local_170[1] = (float)(iVar5 % 0x32 + 100U & 0xff);
    local_170[2] = (float)local_58d;
    iVar5 = rand();
    local_58d = (byte)(iVar5 % 100);
    iVar15 = rand();
    iVar16 = rand();
    iVar5 = local_5a0;
    local_628 = 0.0;
    local_1b8 = (float)(iVar16 % 100 & 0xff);
    fStack_1b4 = (float)(iVar15 % 0x32 + 100U & 0xff);
    local_1b0 = (float)local_58d;
    local_594 = (float)param_4;
    fVar27 = (float)(local_5ac / 3);
    local_5d4 = (undefined4 *)((int)local_5d0 + local_5ac + 1);
    local_5f0 = fVar27;
    local_670._4_4_ = (float)-param_4 * 0.3;
    do {
      local_654 = local_654 + 0.9424778;
      local_604 = (double)CONCAT44(((float)(int)local_628 * 0.7) / 30.0 + 0.3,(undefined4)local_604)
      ;
      dVar25 = (double)local_654;
      libm_sse2_cos_precise();
      local_630 = (double)CONCAT44((float)dVar25 * local_594,(undefined4)local_630);
      dVar25 = (double)local_654;
      libm_sse2_sin_precise();
      fVar22 = (1.0 - local_604._4_4_) * 2.0;
      local_614 = (double)(local_604._4_4_ * (float)local_5ac + (float)(int)local_5d0);
      local_6e4 = (double)(int)local_5d8 + (double)(fVar22 * local_630._4_4_);
      local_70c = (double)(int)local_5dc + (double)(fVar22 * (float)dVar25 * local_594);
      local_700 = local_614 + (double)(fVar22 * local_670._4_4_);
      if (0 < (int)fVar27) {
        fStack_678 = (float)(int)fVar27;
        local_5c0 = local_5f0;
        do {
          fVar28 = (float)(int)fVar27 / fStack_678;
          fVar22 = 1.0 - fVar28;
          local_660 = (double)fVar28 * local_6e4 + (double)fVar22 * (double)(int)local_5d8;
          local_668 = (double)fVar28 * local_70c + (double)fVar22 * (double)(int)local_5dc;
          local_630 = (double)CONCAT44(fVar28,(undefined4)local_630);
          local_604 = (double)CONCAT44(fVar22,(undefined4)local_604);
          local_60c = (double)fVar28 * local_700 + (double)fVar22 * local_614;
          if (local_5fc < 0.3) {
            pfVar6 = FUN_0052d870(local_580,(int)local_5d8,local_5dc);
            iVar15 = 0;
            do {
              iVar16 = iVar15 + 1;
              *(char *)((int)&local_6d0 + iVar15) = (char)(int)pfVar6[iVar15];
              iVar15 = iVar16;
            } while (iVar16 < 3);
            local_690 = local_6d0;
            local_68e = local_6ce;
            local_68d = 0x28;
            FUN_004d44c0(pvVar10,(int)local_660,(int)local_668,(int)(local_60c + 1.0),2.0,
                         (byte *)&local_690,iVar5,'\x01','\0');
            fVar22 = local_604._4_4_;
            fVar28 = local_630._4_4_;
          }
          local_1c4 = CONCAT44(fStack_1b4,local_1b8);
          local_1bc = local_1b0;
          stack0xffffff20 = CONCAT44(fVar22 * local_170[1],fVar22 * local_170[0]);
          local_d8 = fVar22 * local_170[2];
          local_11c[1] = fVar22 * local_170[1] + fStack_1b4 * fVar28;
          local_11c[0] = fVar22 * local_170[0] + local_1b8 * fVar28;
          local_11c[2] = local_d8 + local_1b0 * fVar28;
          iVar15 = 0;
          do {
            iVar16 = iVar15 + 1;
            *(char *)((int)&local_6f4 + iVar15) = (char)(int)local_11c[iVar15];
            iVar15 = iVar16;
          } while (iVar16 < 3);
          local_6b0 = local_6f4;
          local_6ae = local_6f2;
          local_6ad = 0x28;
          FUN_004d44c0(pvVar10,(int)local_660,(int)local_668,(int)local_60c,2.0,(byte *)&local_6b0,
                       iVar5,'\x01','\0');
          fVar27 = (float)((int)fVar27 + -1);
          local_5c0 = (float)((int)local_5c0 + -1);
        } while (local_5c0 != 0.0);
        local_5c0 = 0.0;
        fVar27 = local_5f0;
      }
      iVar15 = 0;
      do {
        iVar16 = iVar15 + 1;
        *(char *)((int)&local_6a4 + iVar15) = (char)(int)local_170[iVar15];
        iVar15 = iVar16;
      } while (iVar16 < 3);
      local_6b8 = local_6a4;
      local_6b6 = local_6a2;
      local_6b5 = 0x28;
      FUN_0041ff00(pvVar10,local_5d8,local_5dc,(int)local_5d4,(undefined1 *)&local_6b8,iVar5);
      iVar15 = 0;
      do {
        iVar16 = iVar15 + 1;
        *(char *)((int)&local_688 + iVar15) = (char)(int)local_170[iVar15];
        iVar15 = iVar16;
      } while (iVar16 < 3);
      local_624 = (float)CONCAT13(0x28,CONCAT12(local_686,local_688));
      FUN_0041ff00(pvVar10,local_5d8,local_5dc,local_5ac + (int)local_5d0,(undefined1 *)&local_624,
                   iVar5);
      local_628 = (float)((int)local_628 + 1);
    } while ((int)local_628 < 0x1e);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* lib_fn_522320 @ 00522320  kind=lib  attributed-by=ledger  size=593 */

float * FUN_00522320(float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float local_8;
  
  fVar1 = FUN_004d5d30(SUB84((double)param_2 * 0.04,0),
                       (int)((ulonglong)((double)param_2 * 0.04) >> 0x20),(double)param_3 * 0.04);
  fVar3 = ((float)fVar1 + 1.0) * 0.5;
  dVar5 = (double)param_2 * 0.005 + 45645.0;
  fVar1 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)param_3 * 0.005 + 456456.0);
  local_8 = -((float)fVar1 * 120.0);
  if (0.0 < local_8) {
    local_8 = 0.0;
  }
  dVar5 = (double)param_2 * 0.02 + 89648.0;
  fVar2 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)param_3 * 0.02 + 1649.0);
  fVar4 = (float)fVar2 * 80.0 + 1.0;
  dVar5 = (double)param_2 * 0.005 + 342.0;
  fVar2 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)param_3 * 0.005 + 23423.0);
  fVar7 = 1.0 - fVar3;
  fVar6 = fVar4 * fVar3;
  local_8 = fVar6 + fVar7 * 200.0 + local_8;
  fVar3 = fVar3 * 120.0 + fVar7 * 230.0 + (float)fVar2 * 30.0;
  fVar4 = fVar6 + fVar7 * fVar4 + (float)fVar1 * 120.0;
  *param_1 = local_8;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  if (0.0 <= local_8) {
    if (255.0 < local_8) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar3 < 0.0) {
    param_1[1] = 0.0;
  }
  if (255.0 < param_1[1]) {
    param_1[1] = 255.0;
  }
  if (fVar4 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  return param_1;
}


/* lib_fn_523b90 @ 00523b90  kind=lib  attributed-by=ledger  size=493 */

float10 __thiscall FUN_00523b90(void *param_1,float param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  
  iVar1 = FUN_00406100(param_1,(uint)param_2,param_3,param_5);
  if (iVar1 == 0) {
    fVar2 = (float10)FUN_004f8570(param_1,param_2,param_3);
    fVar6 = (float)fVar2;
  }
  else {
    fVar6 = *(float *)(iVar1 + 4);
  }
  dVar5 = (double)((float)(int)param_3 * 0.2 + 534.0);
  fVar2 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)((float)param_4 * 0.2 + 13.0));
  dVar5 = (double)(int)param_2 * 0.05 + 4343.0;
  fVar3 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)param_4 * 0.1 + 84734.0);
  fVar4 = ((float)fVar2 * 0.1 + (float)fVar3) * 0.7 + 0.2;
  if (fVar4 * fVar6 <= 1.0) {
    iVar1 = FUN_00406100(param_1,(uint)param_2,param_3,param_5);
    if (iVar1 == 0) {
      fVar2 = (float10)FUN_004f8570(param_1,param_2,param_3);
      fVar6 = (float)fVar2;
    }
    else {
      fVar6 = *(float *)(iVar1 + 4);
    }
    if (fVar4 * fVar6 < 0.0) {
      return (float10)0.0;
    }
  }
  iVar1 = FUN_00406100(param_1,(uint)param_2,param_3,param_5);
  if (iVar1 == 0) {
    fVar2 = (float10)FUN_004f8570(param_1,param_2,param_3);
    fVar6 = (float)fVar2;
  }
  else {
    fVar6 = *(float *)(iVar1 + 4);
  }
  if (1.0 < fVar4 * fVar6) {
    return (float10)1.0;
  }
  iVar1 = FUN_00406100(param_1,(uint)param_2,param_3,param_5);
  if (iVar1 == 0) {
    fVar2 = (float10)FUN_004f8570(param_1,param_2,param_3);
    fVar6 = (float)fVar2;
  }
  else {
    fVar6 = *(float *)(iVar1 + 4);
  }
  return (float10)(fVar4 * fVar6);
}


/* lib_fn_523d80 @ 00523d80  kind=lib  attributed-by=ledger  size=1920 */

void FUN_00523d80(uint param_1,float param_2,float param_3)

{
  uint *this;
  uint *puVar1;
  uint uVar2;
  float10 fVar3;
  double dVar4;
  float fVar5;
  undefined1 auStack_90 [4];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  uint local_7c;
  void *local_78;
  uint local_74;
  uint local_6c;
  float local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  float local_28;
  uint local_20 [5];
  uint local_c;
  
  local_c = DAT_00583cc8 ^ (uint)auStack_90;
  local_60 = (double)(int)param_2 * 0.01;
  local_58 = (double)(int)param_1 * 0.01;
  local_6c = param_1;
  local_84 = param_2;
  local_68 = param_3;
  fVar3 = FUN_004d5d30(SUB84(local_58,0),(int)((ulonglong)local_58 >> 0x20),local_60);
  local_80 = (float)fVar3;
  local_8c = 1.0 - local_80 * local_80;
  dVar4 = (double)*(int *)((int)local_78 + 0x8001dc) + local_58 + 843.0;
  fVar3 = FUN_004d5d30(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),
                       (double)*(int *)((int)local_78 + 0x8001e0) + local_60 + 984.0);
  local_80 = (float)fVar3 * 0.1;
  dVar4 = (double)(int)param_1 * 0.0025 + (double)*(int *)((int)local_78 + 0x8001dc);
  fVar3 = FUN_004d5d30(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),
                       (double)(int)param_2 * 0.0025 + (double)*(int *)((int)local_78 + 0x8001e0));
  local_88 = 1.0 - ABS(local_80 + (float)fVar3) * ((1.0 - local_8c * local_8c) * 1.3 + 2.0);
  dVar4 = (double)(int)param_1 * 0.005 + 94.0;
  fVar3 = FUN_004d5d30(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),
                       (double)(int)param_2 * 0.005 + 874.0);
  local_8c = (float)fVar3;
  local_88 = local_88 * (local_8c * 0.4 + 0.6);
  uVar2 = (int)param_1 >> 0x1f;
  this = (uint *)FUN_004286f0(local_78,(int)(param_1 + (uVar2 & 0x7ff)) >> 0xb,
                              (int)((int)param_2 + ((int)param_2 >> 0x1f & 0x7ffU)) >> 0xb);
  if ((this != (uint *)0x0) && ((this[6] == 6 || (this[6] == 7)))) {
    local_4c = ((int)local_84 >> 0x1f) << 0x10 | (uint)local_84 >> 0x10;
    local_50 = (int)local_84 << 0x10;
    local_58 = (double)CONCAT44(uVar2 << 0x10 | param_1 >> 0x10,param_1 << 0x10);
    fVar3 = FUN_0052c820(this,(uint *)&local_58,&local_50);
    local_8c = (float)fVar3;
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
        dVar4 = (double)local_8c;
        libm_sse2_sqrt_precise();
        fVar5 = ((float)dVar4 - 0.6) / 0.39999998;
        fVar5 = 1.0 - fVar5 * fVar5;
        local_88 = fVar5 * fVar5 * local_80 + local_88;
      }
    }
    else {
      fVar5 = (1.0 - local_8c / 0.36) * 1.5;
      if (1.0 < fVar5) {
        fVar5 = 1.0;
      }
      local_88 = (local_80 + local_88) * (1.0 - fVar5 * fVar5) + fVar5 * fVar5 * 0.0;
    }
  }
  if (0.0 <= local_88) {
    fVar3 = FUN_0052cd50(local_78,param_1,local_84,(int)local_68);
    local_8c = (float)fVar3;
    fVar5 = local_8c * 2.0;
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
    local_80 = (fVar5 * 3.0 * fVar5 - fVar5 * 2.0 * fVar5 * fVar5) * local_88;
    fVar3 = (float10)FUN_0052d990(local_78,param_1,(uint)local_84);
    local_8c = (float)fVar3;
    fVar5 = local_8c;
    if (1.0 < local_8c) {
      fVar5 = 1.0;
    }
    local_68 = (fVar5 * 3.0 * fVar5 - fVar5 * 2.0 * fVar5 * fVar5) * local_80;
    fVar3 = FUN_004d19f0(local_78,param_1,(uint)local_84);
    local_8c = (float)fVar3;
    fVar5 = local_8c * 2.0;
    if (1.0 < local_8c * 2.0) {
      fVar5 = 1.0;
    }
    fVar5 = 1.0 - (fVar5 * 3.0 * fVar5 - fVar5 * 2.0 * fVar5 * fVar5);
    local_88 = fVar5 * fVar5 * fVar5 * local_68;
  }
  else {
    local_88 = 0.0;
  }
  fVar5 = local_88;
  if (this != (uint *)0x0) {
    if (this[6] == 2) {
      local_64 = ((int)local_84 >> 0x1f) << 0x10 | (uint)local_84 >> 0x10;
      local_68 = (float)((int)local_84 << 0x10);
      local_7c = uVar2 << 0x10 | param_1 >> 0x10;
      local_80 = (float)(param_1 << 0x10);
      fVar3 = FUN_0052c820(this,(uint *)&local_80,(uint *)&local_68);
      fVar5 = 1.0 - (float)fVar3;
      local_8c = 0.0;
      if (0.0 < fVar5) {
        local_8c = fVar5 * fVar5;
      }
      local_8c = (local_88 * 3.0 * local_88 - local_88 * 2.0 * local_88 * local_88) + local_8c;
      __security_check_cookie(local_c ^ (uint)auStack_90);
      return;
    }
    if ((this[6] == 10) && (0.0 < (float)this[4])) {
      local_44 = ((int)local_6c >> 0x1f) << 0x10 | local_6c >> 0x10;
      local_3c = ((int)local_84 >> 0x1f) << 0x10 | (uint)local_84 >> 0x10;
      local_48 = local_6c << 0x10;
      local_40 = (int)local_84 << 0x10;
      local_38 = local_48;
      local_34 = local_44;
      local_30 = local_40;
      local_2c = local_3c;
      puVar1 = FUN_004f79f0(this,local_20,&local_38);
      local_8c = (float)*(longlong *)(puVar1 + 2);
      local_28 = (float)*(longlong *)puVar1 * 1.5258789e-05;
      fVar5 = (local_8c * 1.5258789e-05 * local_8c * 1.5258789e-05 + local_28 * local_28) /
              ((float)this[4] * (float)this[4]);
      param_1 = local_6c;
      if (fVar5 < 1.0) {
        fVar5 = 1.0 - fVar5;
        local_88 = (1.0 - fVar5 * fVar5) * local_88;
      }
    }
    if ((this[6] == 4) || (fVar5 = local_88, this[6] == 5)) {
      local_74 = ((int)local_84 >> 0x1f) << 0x10 | (uint)local_84 >> 0x10;
      local_78 = (void *)((int)local_84 << 0x10);
      local_60 = (double)CONCAT44(((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10,param_1 << 0x10);
      fVar3 = FUN_0052c820(this,(uint *)&local_60,(uint *)&local_78);
      local_8c = (float)fVar3;
      if (0.25 < local_8c) {
        fVar5 = local_88;
        if (local_8c < 1.0) {
          dVar4 = (double)local_8c;
          libm_sse2_sqrt_precise();
          fVar5 = ((float)dVar4 - 0.5) * 2.0;
          fVar5 = 1.0 - fVar5 * fVar5;
          fVar5 = (1.0 - fVar5 * fVar5) * local_88;
        }
      }
      else {
        fVar5 = 0.0;
      }
    }
  }
  local_8c = fVar5 * 3.0 * fVar5 - fVar5 * 2.0 * fVar5 * fVar5;
  __security_check_cookie(local_c ^ (uint)auStack_90);
  return;
}


/* std_list_push_back @ 00528450  kind=lib  attributed-by=ledger  size=67 */

void __thiscall FUN_00528450(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_004c6770(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x38e38e2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* lib_fn_52b1c0 @ 0052b1c0  kind=lib  attributed-by=ledger  size=100 */

undefined1 * FUN_0052b1c0(undefined1 *param_1)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0x10) = 1;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  memset(param_1 + 0x14,0,0x100);
  *param_1 = 0x19;
  iVar1 = rand();
  *(int *)(param_1 + 4) = iVar1 % 200;
  return param_1;
}


/* lib_fn_52c160 @ 0052c160  kind=lib  attributed-by=ledger  size=502 */

undefined2 * __cdecl FUN_0052c160(undefined2 *param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  
  param_1[8] = 1;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  memset(param_1 + 10,0,0x100);
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000001;
  bVar3 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar3 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar3) {
    rand();
    dVar4 = 2.0;
    libm_sse2_pow_precise();
    iVar2 = rand();
    *(undefined1 *)param_1 = 0xc;
    *(undefined1 *)((int)param_1 + 0xd) = 10;
    param_1[8] = (short)(iVar2 % ((int)dVar4 * 2 + 2));
    return param_1;
  }
  param_1[8] = param_2;
  iVar2 = rand();
  if (iVar2 % 6 == 0) {
    iVar2 = rand();
    switch(iVar2 % 5) {
    case 0:
      param_1[8] = param_2;
      *param_1 = 0x101;
      return param_1;
    case 1:
      *param_1 = 0x401;
      param_1[8] = param_2;
    case 2:
      rand();
      dVar4 = 2.0;
      libm_sse2_pow_precise();
      iVar2 = rand();
      *(undefined1 *)param_1 = 0xc;
      *(undefined1 *)((int)param_1 + 0xd) = 0xc;
      param_1[8] = (short)(iVar2 % ((int)dVar4 * 2 + 2));
      return param_1;
    case 3:
      param_1[8] = param_2;
      *param_1 = 0x701;
      return param_1;
    case 4:
      *param_1 = 0x501;
      param_1[8] = param_2;
    }
  }
  else {
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    if (uVar1 == 1) {
      *(undefined1 *)param_1 = 0x12;
      iVar2 = rand();
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      *(int *)(param_1 + 2) = iVar2 % 3;
      return param_1;
    }
    if (uVar1 == 2) {
      param_1[8] = 1;
      *param_1 = 0xc0b;
      *(undefined1 *)((int)param_1 + 0xd) = 0x18;
      return param_1;
    }
  }
  return param_1;
}


/* lib_fn_52d030 @ 0052d030  kind=lib  attributed-by=ledger  size=1426 */

float * __thiscall
FUN_0052d030(void *this,float *param_1,float param_2,uint param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float local_28;
  float local_18;
  float local_8;
  
  dVar7 = (double)(int)param_3 * 0.1 + 98984.0;
  fVar3 = FUN_004d5d30(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),(double)param_4 * 0.4);
  uVar12 = SUB84((double)(int)param_2 * 0.1,0);
  uVar13 = (undefined4)((ulonglong)((double)(int)param_2 * 0.1) >> 0x20);
  fVar4 = FUN_004d5d30(uVar12,uVar13,(double)param_4 * 0.4);
  iVar2 = FUN_00406100(this,(uint)param_2,param_3,param_5);
  if (iVar2 == 0) {
    fVar5 = (float10)FUN_004f8b40(this,(int)param_2,param_3);
    fVar9 = (float)fVar5;
  }
  else {
    fVar9 = *(float *)(iVar2 + 8);
  }
  iVar2 = FUN_00406100(this,(uint)param_2,param_3,param_5);
  if (iVar2 == 0) {
    FUN_004f8570(this,param_2,param_3);
  }
  local_28 = 120.0;
  local_18 = 120.0;
  local_8 = 130.0;
  if (0.5 <= fVar9) {
    if (0.75 < fVar9) {
      fVar9 = (fVar9 - 0.75) * 4.0;
      dVar7 = (double)fVar9 * 0.001 + 6544.0;
      fVar5 = FUN_004d5d30(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),
                           (double)(int)param_3 * 0.001 + 123.0);
      local_18 = (1.0 - fVar9) * 120.0;
      local_8 = (1.0 - fVar9) * 130.0 + fVar9 * 100.0;
      local_28 = local_18 + fVar9 * 200.0;
      local_18 = local_18 + ((float)fVar5 * 20.0 + 130.0) * fVar9;
    }
  }
  else {
    fVar9 = fVar9 * 2.0;
    fVar10 = 1.0 - fVar9;
    local_28 = fVar10 * 10.0 + fVar9 * 160.0;
    local_18 = fVar10 * 20.0 + fVar9 * 160.0;
    local_8 = fVar10 * 50.0 + fVar9 * 170.0;
  }
  dVar7 = (double)*(int *)((int)this + 0x80022c) + (double)(int)param_2 * 0.005;
  fVar5 = FUN_004d5d30(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),
                       (double)*(int *)((int)this + 0x800230) + (double)(int)param_3 * 0.005);
  fVar9 = (((float)fVar3 + (float)fVar4) * 0.5 + 1.0) * 0.5 * 160.0;
  fVar11 = fVar9 + local_28 + 0.0;
  fVar10 = fVar9 + local_18 + 0.0;
  fVar9 = fVar9 + local_8 + ((float)fVar5 + 1.0) * 10.0;
  *param_1 = fVar11;
  param_1[1] = fVar10;
  param_1[2] = fVar9;
  if (0.0 <= fVar11) {
    if (255.0 < fVar11) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar10 < 0.0) {
    param_1[1] = 0.0;
  }
  if (255.0 < param_1[1]) {
    param_1[1] = 255.0;
  }
  if (fVar9 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  iVar2 = FUN_00406100(this,(uint)param_2,param_3,param_5);
  if (iVar2 == 0) {
    fVar3 = (float10)FUN_00522e20(this,(int)param_2,param_3);
    fVar9 = (float)fVar3;
  }
  else {
    fVar9 = *(float *)(iVar2 + 0xc);
  }
  if (0.0 < fVar9) {
    fVar3 = FUN_004d5d30(SUB84((double)(int)param_2 * 0.05,0),
                         (int)((ulonglong)((double)(int)param_2 * 0.05) >> 0x20),
                         (double)(int)param_3 * 0.05);
    fVar4 = FUN_004d5d30(SUB84((double)(int)param_2 * 0.02,0),
                         (int)((ulonglong)((double)(int)param_2 * 0.02) >> 0x20),
                         (double)(int)param_3 * 0.02);
    fVar10 = (float)fVar3 * 0.1 + (float)fVar4;
    if (1.0 < fVar10) {
      fVar10 = 1.0;
    }
    fVar11 = param_1[1];
    fVar1 = param_1[2];
    fVar8 = 1.0 - ABS(fVar10);
    fVar6 = 1.0 - fVar9;
    fVar8 = fVar8 * fVar8 * fVar8 * fVar8 * fVar8;
    fVar10 = *param_1;
    fVar3 = FUN_004d5d30(uVar12,uVar13,(double)(int)param_3 * 0.1);
    *param_1 = fVar10 * fVar6 + (fVar8 * 200.0 + 10.0) * fVar9;
    param_1[1] = fVar11 * fVar6 + (((float)fVar3 + 1.0) * fVar8 * 50.0 + 10.0) * fVar9;
    param_1[2] = fVar1 * fVar6 + fVar9 * 10.0;
  }
  return param_1;
}


/* lib_fn_52d5d0 @ 0052d5d0  kind=lib  attributed-by=ledger  size=581 */

float * __thiscall FUN_0052d5d0(void *this,float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  dVar5 = (double)*(int *)((int)this + 0x800274) + (double)param_2 * 0.03;
  fVar1 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)*(int *)((int)this + 0x800278) + (double)param_3 * 0.03);
  dVar5 = (double)*(int *)((int)this + 0x80027c) + (double)param_2 * 0.003;
  fVar2 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)*(int *)((int)this + 0x800280) + (double)param_3 * 0.003);
  fVar4 = ((float)fVar1 + 1.0) * 0.5 * 80.0;
  fVar3 = ((float)fVar2 + 1.0) * 0.5;
  dVar5 = (double)param_2 * 0.01 + 493.0;
  fVar1 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),(double)param_3 * 0.01 + 789.0
                      );
  fVar6 = 1.0 - fVar3;
  fVar7 = fVar6 * 255.0 + fVar3 * 255.0 + fVar4;
  fVar8 = fVar6 * ((float)fVar1 * 40.0 + 200.0) + fVar3 * 150.0 + fVar4;
  fVar4 = fVar6 * 100.0 + fVar3 * 50.0 + fVar4;
  *param_1 = fVar7;
  param_1[1] = fVar8;
  param_1[2] = fVar4;
  if (0.0 <= fVar7) {
    if (255.0 < fVar7) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar8 < 0.0) {
    param_1[1] = 0.0;
  }
  if (255.0 < param_1[1]) {
    param_1[1] = 255.0;
  }
  if (fVar4 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  return param_1;
}


/* lib_fn_52d870 @ 0052d870  kind=lib  attributed-by=ledger  size=276 */

float * FUN_0052d870(float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = FUN_004d5d30(SUB84((double)param_2 * 0.04,0),
                       (int)((ulonglong)((double)param_2 * 0.04) >> 0x20),(double)param_3 * 0.04);
  fVar3 = ((float)fVar1 + 1.0) * 0.5;
  fVar2 = 1.0 - fVar3;
  fVar4 = fVar3 * 190.0 + fVar2 * 100.0;
  fVar5 = fVar3 * 220.0 + fVar2 * 180.0;
  fVar2 = fVar3 * 255.0 + fVar2 * 255.0;
  *param_1 = fVar4;
  param_1[1] = fVar5;
  param_1[2] = fVar2;
  if (0.0 <= fVar4) {
    if (255.0 < fVar4) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar5 < 0.0) {
    param_1[1] = 0.0;
  }
  if (255.0 < param_1[1]) {
    param_1[1] = 255.0;
  }
  if (fVar2 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  return param_1;
}


/* lib_fn_52db90 @ 0052db90  kind=lib  attributed-by=ledger  size=584 */

float * __thiscall FUN_0052db90(void *this,float *param_1,int param_2,int param_3,int param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  dVar6 = (double)param_3 * 0.01 + 98984.0;
  fVar1 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),(double)param_4 * 0.3 + 8437.0
                      );
  fVar2 = FUN_004d5d30(SUB84((double)param_2 * 0.01,0),
                       (int)((ulonglong)((double)param_2 * 0.01) >> 0x20),(double)param_4 * 0.3);
  dVar8 = (double)param_2 * 0.005;
  dVar7 = (double)param_3 * 0.005;
  dVar6 = (double)*(int *)((int)this + 0x800234) + dVar8;
  fVar3 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),
                       (double)*(int *)((int)this + 0x800238) + dVar7);
  dVar6 = (double)*(int *)((int)this + 0x80023c) + dVar8;
  fVar4 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),
                       (double)*(int *)((int)this + 0x800240) + dVar7);
  dVar8 = (double)*(int *)((int)this + 0x800244) + dVar8;
  fVar5 = FUN_004d5d30(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),
                       (double)*(int *)((int)this + 0x800248) + dVar7);
  fVar9 = (((float)fVar1 + (float)fVar2) * 0.5 + 1.0) * 0.5 * 200.0 + 50.0;
  fVar10 = fVar9 + (float)fVar3 * 20.0;
  fVar11 = fVar9 + (float)fVar4 * 20.0;
  fVar9 = fVar9 + (float)fVar5 * 20.0;
  *param_1 = fVar10;
  param_1[1] = fVar11;
  param_1[2] = fVar9;
  if (0.0 <= fVar10) {
    if (255.0 < fVar10) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar11 < 0.0) {
    param_1[1] = 0.0;
  }
  if (255.0 < param_1[1]) {
    param_1[1] = 255.0;
  }
  if (fVar9 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  return param_1;
}


/* lib_fn_5322d0 @ 005322d0  kind=lib  attributed-by=ledger  size=419 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_005322d0(void *this,int param_1,int *param_2,void *param_3)

{
  CRefTime CVar1;
  uint uVar2;
  Creature *pCVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  CRefTime *pCVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  void *pvVar18;
  int *piVar19;
  RandomWalkBehavior *pRVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  RandomWalkBehavior_vftable *pRVar23;
  Creature *pCVar24;
  float *pfVar25;
  int *piVar26;
  CRefTime *pCVar27;
  char *pcVar28;
  void *pvVar29;
  longlong *plVar30;
  SequentialBehavior_vftable *pSVar31;
  Creature **ppCVar32;
  uint *puVar33;
  undefined4 *puVar34;
  undefined8 *puVar35;
  float *pfVar36;
  byte *pbVar37;
  pair<unsigned___int64,unsigned___int64> *ppVar38;
  undefined1 uVar39;
  undefined1 *puVar40;
  uint extraout_ECX;
  CombatBehavior *pCVar41;
  CombatBehavior *pCVar42;
  CombatBehavior_vftable *this_00;
  float10 fVar43;
  float fVar44;
  ulonglong uVar45;
  uint *puVar46;
  RandomWalkBehavior_vftable *in_stack_ffffc890;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined2 uVar50;
  undefined2 uVar51;
  char cVar52;
  ulonglong *puVar53;
  float fVar54;
  undefined4 uVar55;
  int local_3728 [6];
  int local_3710 [6];
  int local_36f8 [2];
  int local_36f0 [18];
  int local_36a8 [40];
  int local_3608 [4];
  int local_35f8 [72];
  int local_34d8 [4];
  int local_34c8 [4];
  int local_34b8 [4];
  int local_34a8 [4];
  int local_3498 [4];
  int local_3488 [70];
  undefined1 local_3370 [16];
  undefined1 local_3360 [16];
  int local_3350 [4];
  int local_3340 [4];
  int local_3330 [4];
  int local_3320 [4];
  int local_3310 [4];
  int local_3300 [4];
  int local_32f0 [4];
  int local_32e0 [4];
  undefined1 local_32d0 [16];
  undefined1 local_32c0 [16];
  undefined1 local_32b0 [16];
  int local_32a0 [4];
  undefined1 local_3290 [16];
  int local_3280 [4];
  undefined1 local_3270 [8];
  int local_3268 [2];
  undefined1 local_3260 [8];
  int local_3258 [2];
  int local_3250 [2];
  int local_3248 [2];
  undefined1 local_3240 [8];
  int local_3238 [2];
  int local_3230 [2];
  int local_3228 [2];
  undefined1 local_3220 [8];
  int local_3218 [2];
  int local_3210 [2];
  int local_3208 [2];
  undefined1 local_3200 [8];
  int local_31f8 [2];
  undefined1 local_31f0 [16];
  int local_31e0 [2];
  int local_31d8 [4];
  int local_31c8 [8];
  int local_31a8 [76];
  undefined4 local_3078 [14];
  int local_3040 [4];
  undefined4 local_3030;
  undefined4 local_302c [19];
  int local_2fe0 [24];
  char local_2f80;
  undefined7 uStack_2f7f;
  undefined4 local_2f78;
  undefined4 uStack_2f74;
  undefined8 local_2f70;
  char local_2f68;
  undefined7 uStack_2f67;
  undefined4 local_2f60;
  undefined4 uStack_2f5c;
  undefined8 local_2f58;
  RandomWalkBehavior_vftable *local_2e70;
  undefined4 local_2e6c;
  RandomWalkBehavior_vftable *local_2e68;
  undefined4 local_2e64;
  undefined8 local_2e60;
  undefined8 local_2e58;
  undefined8 local_2e50;
  undefined4 local_2e44 [8];
  undefined4 local_2e24 [4];
  undefined4 local_2e14 [2];
  undefined4 local_2e0c [10];
  undefined4 local_2de4 [2];
  undefined4 local_2ddc;
  undefined4 local_2dd8;
  undefined4 local_2dd4;
  undefined4 local_2dd0;
  undefined4 local_2dcc [2];
  undefined4 local_2dc4;
  undefined4 local_2dc0;
  undefined4 local_2dbc;
  undefined4 local_2db8;
  undefined4 local_2db4 [3];
  undefined4 local_2da8 [4];
  undefined4 local_2d98 [2];
  undefined4 local_2d90 [2];
  undefined4 local_2d88 [2];
  undefined4 local_2d80 [2];
  undefined4 local_2d78 [2];
  undefined4 local_2d70;
  undefined4 local_2d6c;
  undefined4 local_2d68;
  undefined4 local_2d64;
  undefined4 local_2d60;
  undefined4 local_2d5c;
  undefined4 local_2d58;
  undefined4 local_2d54;
  undefined4 local_2d50;
  undefined4 local_2d4c;
  undefined4 local_2d48;
  undefined4 local_2d44;
  undefined4 local_2d40;
  undefined4 local_2d3c;
  undefined4 local_2d38;
  undefined4 local_2d34;
  undefined4 local_2d30;
  undefined4 local_2d2c;
  undefined4 local_2d28;
  undefined4 local_2d24;
  undefined4 local_2d20;
  undefined4 local_2d1c;
  undefined4 local_2d18 [2];
  undefined4 local_2d10 [2];
  undefined4 local_2d08 [2];
  undefined4 local_2d00 [7];
  int local_2ce4 [3];
  undefined4 local_2cd8 [5];
  float local_2cc4;
  undefined4 *local_2cc0;
  void *local_2cbc;
  int local_2cb8;
  int local_2cb4;
  undefined4 local_2cb0;
  int local_2cac;
  Creature *local_2ca4 [22];
  int local_2c4c;
  int local_2c48 [9];
  int local_2c24;
  int local_2c20;
  Creature *local_2c1c;
  undefined8 local_2c18;
  int local_2c0c;
  int local_2c08;
  uint local_2c04;
  undefined4 local_2c00;
  int local_2bfc [2];
  undefined4 local_2bf4;
  undefined4 local_2bf0;
  RandomWalkBehavior_vftable local_2bec;
  int local_2be0 [2];
  int local_2bd8;
  undefined4 local_2bd4;
  Creature *local_2bd0 [2];
  int local_2bc8;
  int local_2bc4;
  void *local_2bc0;
  CombatBehavior *local_2bbc;
  int local_2bb0;
  int *local_2bac;
  int local_2ba8;
  float local_2ba4;
  void *local_2b9c;
  CRefTime *local_2b98;
  uint *local_2b94;
  void *local_2b90;
  float local_2b8c;
  CombatBehavior *local_2b88;
  RandomWalkBehavior *local_2b84;
  int local_2b80;
  float local_2b7c [3];
  undefined4 *local_2b70;
  CombatBehavior *local_2b6c;
  uint local_2b68 [2];
  Creature *local_2b60;
  SequentialBehavior_vftable *local_2b5c;
  CombatBehavior *local_2b58;
  int local_2b54;
  CombatBehavior *local_2b50;
  CRefTime *local_2b4c;
  CombatBehavior *local_2b48;
  RandomWalkBehavior *local_2b44;
  int *local_2b40;
  CombatBehavior *local_2b3c;
  char local_2b35;
  char local_2b2d;
  int *local_2b2c;
  int local_2b28;
  uint *local_2b24;
  CRefTime *local_2b20;
  void *local_2b1c;
  undefined4 local_2b14 [43];
  undefined1 local_2a68 [88];
  undefined1 local_2a10 [88];
  undefined1 local_29b8 [176];
  undefined1 local_2908 [552];
  uint local_26e0 [12];
  uint local_26b0 [12];
  uint local_2680 [12];
  uint auStack_2650 [12];
  uint auStack_2620 [12];
  uint local_25f0 [6];
  uint local_25d8 [6];
  uint auStack_25c0 [12];
  uint local_2590 [12];
  uint local_2560 [12];
  uint local_2530 [12];
  uint local_2500 [12];
  uint local_24d0 [6];
  uint local_24b8 [6];
  uint local_24a0 [6];
  uint auStack_2488 [6];
  uint local_2470 [12];
  uint local_2440 [12];
  uint local_2410 [12];
  undefined4 local_23e0 [12];
  undefined4 local_23b0 [12];
  uint local_2380 [12];
  uint local_2350 [12];
  uint local_2320 [12];
  uint local_22f0 [6];
  undefined1 local_22d8 [24];
  uint local_22c0 [6];
  uint local_22a8 [6];
  uint local_2290 [12];
  undefined4 local_2260 [12];
  uint local_2230 [12];
  uint local_2200 [12];
  undefined1 local_21d0 [48];
  uint local_21a0 [12];
  undefined1 local_2170 [48];
  uint local_2140 [162];
  uint local_1eb8 [12];
  uint local_1e88 [12];
  uint local_1e58 [12];
  uint local_1e28 [138];
  pair<unsigned___int64,unsigned___int64> local_1c00 [32];
  undefined1 local_1be0 [32];
  undefined1 local_1bc0 [32];
  undefined1 local_1ba0 [328];
  undefined1 local_1a58 [216];
  undefined1 local_1980 [360];
  undefined1 local_1818 [36];
  undefined1 local_17f4 [36];
  undefined1 auStack_17d0 [48];
  undefined1 local_17a0 [24];
  undefined1 local_1788 [24];
  undefined1 local_1770 [24];
  undefined1 local_1758 [24];
  undefined1 local_1740 [24];
  float local_1728 [6];
  float local_1710 [6];
  undefined1 local_16f8 [24];
  undefined1 local_16e0 [24];
  undefined1 local_16c8 [24];
  undefined1 local_16b0 [24];
  undefined1 local_1698 [24];
  float local_1680 [6];
  undefined1 local_1668 [24];
  undefined1 local_1650 [24];
  undefined1 auStack_1638 [24];
  float local_1620 [6];
  undefined1 local_1608 [24];
  float local_15f0 [3];
  undefined1 local_15e4 [12];
  undefined1 local_15d8 [12];
  undefined1 local_15cc [12];
  undefined1 local_15c0 [12];
  undefined1 local_15b4 [12];
  undefined1 local_15a8 [12];
  undefined1 auStack_159c [12];
  undefined1 local_1590 [12];
  undefined1 local_1584 [12];
  undefined1 local_1578 [24];
  undefined1 local_1560 [876];
  undefined1 local_11f4 [24];
  undefined1 local_11dc [24];
  int local_11c4 [6];
  undefined1 local_11ac [24];
  undefined1 local_1194 [24];
  undefined1 local_117c [12];
  undefined1 auStack_1170 [12];
  undefined1 local_1164 [24];
  undefined1 local_114c [24];
  undefined1 auStack_1134 [24];
  undefined1 auStack_111c [24];
  undefined1 auStack_1104 [48];
  float local_10d4 [9];
  undefined1 auStack_10b0 [428];
  undefined4 local_f04 [20];
  undefined1 local_eb4 [40];
  undefined1 local_e8c [56];
  undefined1 local_e54 [1064];
  uint local_a2c;
  uint local_a28;
  undefined4 local_a24;
  undefined4 local_a20;
  float local_a1c;
  undefined1 local_a18;
  undefined1 local_a0c [88];
  uint local_9b4 [18];
  undefined4 local_96c [6];
  undefined1 local_954 [12];
  pair<unsigned___int64,unsigned___int64> local_948 [16];
  undefined4 local_938;
  undefined4 local_934;
  uint auStack_924 [90];
  undefined4 local_7bc [6];
  undefined1 local_7a4 [12];
  pair<unsigned___int64,unsigned___int64> local_798 [16];
  undefined4 local_788;
  undefined4 local_784;
  undefined4 local_50c [6];
  undefined1 local_4f4 [12];
  pair<unsigned___int64,unsigned___int64> local_4e8 [16];
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  uint local_4a4 [6];
  uint local_48c [12];
  uint local_45c [17];
  uint local_418 [6];
  void *local_400 [4];
  undefined4 local_3f0;
  uint local_3ec;
  uint local_36c [9];
  uint local_348 [33];
  undefined1 local_2c4 [36];
  float local_2a0 [3];
  float local_294 [14];
  undefined8 local_25c;
  undefined4 local_254 [4];
  RandomWalkBehavior_vftable *local_244;
  undefined4 local_240;
  RandomWalkBehavior_vftable *local_23c;
  undefined4 local_238;
  undefined8 local_234;
  undefined8 local_22c;
  undefined8 local_224;
  undefined4 local_21c [3];
  undefined1 local_210 [4];
  undefined4 local_20c;
  uint local_208 [3];
  undefined4 local_1fc;
  uint local_1f0 [3];
  undefined4 local_1e4;
  undefined4 local_1d8 [3];
  undefined4 local_1cc;
  float local_1c8;
  undefined4 local_1b4 [3];
  undefined4 local_1a8;
  float local_1a4;
  uint local_19c [24];
  undefined4 local_13c [2];
  float local_134 [5];
  float local_120 [9];
  undefined4 local_fc [3];
  int local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_d8;
  undefined4 local_d4 [5];
  float local_c0 [3];
  float local_b4 [11];
  ulonglong local_88;
  undefined4 local_80 [3];
  undefined4 local_74;
  float local_70;
  float local_5c [3];
  float local_50 [3];
  float local_44 [12];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005564a6;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2b28 = param_1;
  local_2b70 = (undefined4 *)((int)this + 4);
  local_2b44 = (RandomWalkBehavior *)((RandomWalkBehavior *)*local_2b70)->vftablePtr;
  local_2b2c = param_2;
  local_2b2d = '\0';
  local_2b1c = this;
  if (local_2b44 != (RandomWalkBehavior *)*local_2b70) {
    do {
      pRVar23 = local_2b44[3].vftablePtr;
      if ((((pRVar23 != (RandomWalkBehavior_vftable *)0x0) &&
           (*(char *)&pRVar23[0xc].vfunction1 == '\0')) &&
          (*(char *)&pRVar23[0xd].vfunction1 == 'T')) && (0.0 < (float)pRVar23[0x2d].vfunction2)) {
        if (pRVar23 == *(RandomWalkBehavior_vftable **)((int)this + 0xb8)) {
          iVar7 = *(int *)((int)this + 0xb8);
          fVar43 = FUN_0040fda0(iVar7);
          local_2b3c = (CombatBehavior *)(float)fVar43;
          *(float *)(iVar7 + 0x16c) =
               (float)local_2b3c * (float)local_2b28 * 0.001 * 0.05 + *(float *)(iVar7 + 0x16c);
          iVar7 = *(int *)((int)this + 0xb8);
          fVar43 = FUN_0040fda0(iVar7);
          local_2b3c = (CombatBehavior *)(float)fVar43;
          if ((float)local_2b3c < *(float *)(iVar7 + 0x16c)) {
            fVar43 = FUN_0040fda0(*(int *)((int)this + 0xb8));
            *(float *)(*(int *)((int)this + 0xb8) + 0x16c) = (float)fVar43;
          }
        }
        local_2b2d = '\x01';
      }
      FUN_00407a50((int *)&local_2b44);
    } while (local_2b44 != *(RandomWalkBehavior **)((int)this + 4));
  }
  *(int *)((int)this + 0x8000bc) = *(int *)((int)this + 0x8000bc) + local_2b28;
  if (local_2b2d == '\0') {
    iVar7 = local_2b28 * 10;
  }
  else {
    iVar7 = local_2b28 * 100;
  }
  *(int *)((int)this + 0x80015c) = *(int *)((int)this + 0x80015c) + iVar7;
  if (*(int *)((int)this + 0xa4) == 0) {
    *(undefined4 *)((int)this + 0x80015c) = 32400000;
  }
  iVar7 = *(int *)((int)this + 0x80015c);
  while (86400000 < iVar7) {
    *(int *)((int)this + 0x800160) = *(int *)((int)this + 0x800160) + 1;
    *(int *)((int)this + 0x80015c) = *(int *)((int)this + 0x80015c) + -86400000;
    FUN_00524500((int)this);
    iVar7 = *(int *)((int)this + 0x80015c);
  }
  if (((*(int *)((int)this + 0x8000bc) / 10000 !=
        (local_2b28 + *(int *)((int)this + 0x8000bc)) / 10000) &&
      (bVar4 = FUN_00413000((int)this + 0xac), bVar4)) && (*(int *)((int)this + 0xa4) != 0)) {
    local_2cb8 = 0;
    local_2cb4 = 0;
    local_2cb0 = 0;
    local_2cac = 0;
    local_8 = 0;
    FUN_00413180(&local_2cb8,4);
    *(undefined4 *)(local_2cac + local_2cb8) = *(undefined4 *)((int)this + 0x800160);
    local_2cac = local_2cac + 4;
    FUN_00413180(&local_2cb8,(local_2cb4 - local_2cb8) + 4);
    *(undefined4 *)(local_2cac + local_2cb8) = *(undefined4 *)((int)this + 0x80015c);
    local_2cac = local_2cac + 4;
    FUN_004010e0(local_400,(int *)&DAT_0056d08c);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00413210((void *)((int)this + 0xac),local_400,&local_2cb8);
    if (0xf < local_3ec) {
      operator_delete(local_400[0]);
    }
    local_3ec = 0xf;
    local_3f0 = 0;
    local_400[0] = (void *)((uint)local_400[0] & 0xffffff00);
    local_8 = 0xffffffff;
    FUN_0042f440(&local_2cb8);
  }
  local_2b8c = (float)local_2b28;
  local_2ba4 = local_2b8c * 0.001;
  local_2bd4 = 0;
  local_2bd8 = FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
  local_8 = 2;
  local_2bf4 = 0;
  local_2bf0 = 0;
  local_2bf4 = FUN_0052ed30();
  local_8._0_1_ = 3;
  if (((*(int *)((int)this + 0xb8) != 0) &&
      (iVar7 = *(int *)((int)this + 0xb8), *(char *)(iVar7 + 0x1020) == '\x13')) &&
     ((*(char *)(iVar7 + 0x1021) == '\x18' && (1 < *(short *)(iVar7 + 0x1030))))) {
    *(undefined1 *)(iVar7 + 0x1021) = 0x19;
  }
  local_2b5c = (*(SequentialBehavior **)((int)this + 4))->vftablePtr;
  if (local_2b5c != (SequentialBehavior_vftable *)*(SequentialBehavior **)((int)this + 4)) {
    do {
      if (local_2b5c[2].vfunction1 != (vfunction1 *)0x0) {
        if (local_2b5c[2].vfunction1[0x60] == (vfunction1)0x3) {
          iVar7 = FUN_00402bc0((int *)&local_2b5c);
          iVar7 = FUN_004c8120(iVar7);
          bVar4 = FUN_004e28d0((int *)(*(int *)(iVar7 + 8) + 0x11dc));
          if (bVar4) {
            iVar7 = FUN_00402bc0((int *)&local_2b5c);
            local_2b3c = *(CombatBehavior **)(iVar7 + 8);
            puVar22 = &local_2b3c[0x15].CombatBehavior_data.offset_0x8;
            puVar8 = (uint *)FUN_004013d0(puVar22,1);
            uVar17 = *puVar8;
            puVar8 = (uint *)FUN_004013d0(puVar22,0);
            iVar7 = FUN_00406290(this,*puVar8,uVar17);
            if (iVar7 != 0) {
              piVar9 = (int *)FUN_004013d0(puVar22,2);
              iVar15 = *piVar9;
              if ((-1 < iVar15) && (iVar10 = FUN_0041fff0((int *)(iVar7 + 0x18)), iVar15 < iVar10))
              {
                piVar9 = (int *)FUN_00402bb0((void *)(iVar7 + 0x18),iVar15);
                FUN_0041df20(&local_2b3c[0xe4].CombatBehavior_data.offset_0x8,
                             (int *)(*piVar9 + 0xf6c));
              }
            }
          }
        }
        iVar7 = FUN_00402bc0((int *)&local_2b5c);
        puVar8 = (uint *)(iVar7 + 8);
        uVar17 = *puVar8;
        local_2b94 = puVar8;
        if (((*(ushort *)(uVar17 + 0x7e) & 0x2000) != 0) &&
           (bVar4 = FUN_00530540(uVar17 + 0x13a4), bVar4)) {
          piVar9 = (int *)FUN_004013d0((void *)(uVar17 + 0x1b0),1);
          uVar11 = (int)(*piVar9 + (*piVar9 >> 0x1f & 7U)) >> 3;
          piVar9 = (int *)FUN_004013d0((void *)(uVar17 + 0x1b0),0);
          iVar7 = *piVar9 + (*piVar9 >> 0x1f & 7U);
          iVar7 = FUN_004286f0(local_2b1c,CONCAT22((short)(iVar7 >> 0x13),(short)(iVar7 >> 3)),
                               uVar11);
          if ((iVar7 != 0) && ((*(int *)(iVar7 + 0x34) != 0 && (*(char *)(iVar7 + 0x41) == '\x02')))
             ) {
            *(undefined4 *)(uVar17 + 0x16c) = 0;
            *(undefined4 *)(*puVar8 + 0x6c) = 0;
          }
        }
        this = local_2b1c;
        if (*(char *)(*puVar8 + 0x60) == '\0') {
          FUN_004d6620(&local_2bd8,puVar8);
          uVar17 = *puVar8;
          pCVar12 = (CRefTime *)FUN_004e2320((void *)(uVar17 + 0x10),0);
          lVar13 = CRefTime::Millisecs(pCVar12);
          iVar7 = (int)((lVar13 >> 0x1f & 0xffU) + lVar13) >> 8;
          pCVar12 = (CRefTime *)FUN_004e2320((void *)(uVar17 + 0x10),1);
          lVar13 = CRefTime::Millisecs(pCVar12);
          pCVar42 = (CombatBehavior *)(iVar7 + -1);
          pRVar20 = (RandomWalkBehavior *)(iVar7 + 1);
          local_2b20 = (CRefTime *)((int)((lVar13 >> 0x1f & 0xffU) + lVar13) >> 8);
          local_2b44 = pRVar20;
          local_2b3c = pCVar42;
          if ((int)pCVar42 <= (int)pRVar20) {
            local_2b4c = local_2b20 + -1;
            pCVar12 = local_2b20 + 1;
            do {
              pCVar27 = local_2b4c;
              if ((int)local_2b4c <= (int)pCVar12) {
                do {
                  local_2b3c = (CombatBehavior *)
                               FUN_00406290(local_2b1c,(uint)pCVar42,(uint)pCVar27);
                  if (local_2b3c != (CombatBehavior *)0x0) {
                    FUN_004d4f60(&local_2bf4,local_2dcc,(uint *)&local_2b3c);
                  }
                  pCVar27 = pCVar27 + 1;
                  pCVar12 = local_2b20 + 1;
                  pRVar20 = local_2b44;
                } while ((int)pCVar27 <= (int)pCVar12);
              }
              pCVar42 = (CombatBehavior *)((int)&pCVar42->vftablePtr + 1);
            } while ((int)pCVar42 <= (int)pRVar20);
          }
          puVar8 = local_2b94;
          this = local_2b1c;
          if (*(char *)((int)local_2b1c + 0xb4) == '\0') {
            uVar17 = *local_2b94;
            pCVar12 = (CRefTime *)FUN_004e2320((void *)(uVar17 + 0x10),1);
            lVar13 = CRefTime::Millisecs(pCVar12);
            pCVar12 = (CRefTime *)FUN_004e2320((void *)(uVar17 + 0x10),0);
            lVar14 = CRefTime::Millisecs(pCVar12);
            FUN_004febd0(local_2b1c,&local_25c,lVar14,lVar13);
            piVar9 = (int *)FUN_004013d0(&local_25c,1);
            iVar7 = *piVar9;
            piVar9 = (int *)FUN_004013d0(&local_25c,0);
            local_2b3c = (CombatBehavior *)*piVar9;
            iVar15 = FUN_00406210(local_2b1c,(int)local_2b3c,iVar7);
            if ((iVar15 != 0) && (*(char *)(iVar15 + 0x15a18) == '\0')) {
              FUN_0050d8d0(local_2b1c,(int)local_2b3c,iVar7,(int)local_2b2c);
            }
            uVar17 = *puVar8;
            pCVar12 = (CRefTime *)FUN_004e2320((void *)(uVar17 + 0x10),1);
            lVar13 = CRefTime::Millisecs(pCVar12);
            iVar7 = lVar13 + (lVar13 >> 0x1f & 0xffU);
            iVar7 = (int)((iVar7 >> 8) + (iVar7 >> 0x1f & 7U)) >> 3;
            pCVar12 = (CRefTime *)FUN_004e2320((void *)(uVar17 + 0x10),0);
            lVar13 = CRefTime::Millisecs(pCVar12);
            iVar15 = lVar13 + (lVar13 >> 0x1f & 0xffU);
            iVar15 = (iVar15 >> 8) + (iVar15 >> 0x1f & 7U);
            FUN_00421e30(local_13c,CONCAT22((short)(iVar15 >> 0x13),(short)(iVar15 >> 3)),iVar7);
            puVar16 = (uint *)FUN_004013d0(local_13c,1);
            uVar17 = *puVar16;
            puVar16 = (uint *)FUN_004013d0(local_13c,0);
            local_2b3c = (CombatBehavior *)FUN_004286f0(local_2b1c,*puVar16,uVar17);
            this = local_2b1c;
            if (((local_2b3c != (CombatBehavior *)0x0) &&
                (local_2b3c[2].CombatBehavior_data.offset_0x8 != 0)) &&
               (*(char *)((int)&local_2b3c[3].CombatBehavior_data.offset_0x0 + 1) == '\0')) {
              uVar17 = *puVar8;
              puVar8 = (uint *)FUN_004e2320((void *)(uVar17 + 0x10),1);
              puVar16 = (uint *)FUN_004e2320((void *)(uVar17 + 0x10),0);
              pCVar42 = local_2b3c;
              fVar43 = FUN_0052dee0((uint *)local_2b3c,puVar16,puVar8);
              local_2b3c = (CombatBehavior *)(float)fVar43;
              this = local_2b1c;
              if (0.0 < (float)local_2b3c) {
                *(undefined1 *)((int)&pCVar42[3].CombatBehavior_data.offset_0x0 + 1) = 1;
                FUN_00422d00(local_254);
                FUN_004cde20(local_254,local_13c);
                FUN_00423c90(&local_244,&pCVar42[2].CombatBehavior_data.offset_0x0);
                FUN_004284a0(local_2b2c + 0x18,local_254);
                this = local_2b1c;
              }
            }
          }
        }
      }
      FUN_00407a50((int *)&local_2b5c);
    } while (local_2b5c != *(SequentialBehavior_vftable **)((int)this + 4));
  }
  FUN_0052e930(&local_2bec.vfunction1);
  local_8._0_1_ = 4;
  FUN_0052e930(local_2cd8);
  local_8._0_1_ = 5;
  if (param_3 != (void *)0x0) {
    bVar4 = FUN_00530540((int)param_3);
    if (!bVar4) {
      if (*(char *)((int)this + 0xb4) != '\0') {
        FUN_00426f60(local_2b2c);
      }
      FUN_00428070(param_3,&local_2b24);
      piVar9 = (int *)FUN_00530550(param_3,&local_2d30);
      bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
      if (bVar4) {
        do {
          pRVar23 = &local_2bec;
          uVar39 = SUB41(local_2b2c,0);
          uVar48 = (undefined1)((uint)local_2b2c >> 8);
          uVar50 = (undefined2)((uint)local_2b2c >> 0x10);
          puVar8 = (uint *)FUN_0052eb90((int *)&local_2b24);
          FUN_004cea80(this,puVar8,(void *)CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),
                       &pRVar23->vfunction1);
          FUN_0052ebf0(&local_2b24,&local_2b48);
          piVar9 = (int *)FUN_00530550(param_3,&local_2d30);
          bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
        } while (bVar4);
      }
    }
    pCVar42 = (CombatBehavior *)((int)param_3 + 0x58);
    local_2b3c = pCVar42;
    bVar4 = FUN_00530540((int)pCVar42);
    if (!bVar4) {
      FUN_00428070(pCVar42,&local_2b24);
      piVar9 = (int *)FUN_00530550(pCVar42,local_2d78);
      bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
      if (bVar4) {
        do {
          iVar7 = FUN_0052eb90((int *)&local_2b24);
          uVar17 = FUN_00405420(local_2b1c,(uint *)(iVar7 + 8));
          if (uVar17 != 0) {
            pcVar28 = (char *)(iVar7 + 0x10);
            pvVar18 = (void *)FUN_00405420(local_2b1c,(uint *)(iVar7 + 8));
            FUN_00411740(pvVar18,pcVar28);
          }
          FUN_0052ebf0(&local_2b24,&local_2b48);
          piVar9 = (int *)FUN_00530550(local_2b3c,local_2d78);
          bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
          this = local_2b1c;
        } while (bVar4);
      }
      if (*(char *)((int)this + 0xb4) != '\0') {
        FUN_00426f60(local_2b2c + 0x16);
      }
    }
  }
  FUN_00428070(&local_2bf4,local_2b68);
  piVar9 = (int *)FUN_00530550(&local_2bf4,local_2d10);
  bVar4 = FUN_0042c6f0(local_2b68,piVar9);
  if (bVar4) {
    do {
      FUN_004c8280(local_2bfc);
      local_8 = CONCAT31(local_8._1_3_,6);
      piVar9 = (int *)FUN_00402bc0((int *)local_2b68);
      iVar7 = *piVar9;
      local_2b40 = piVar9;
      FUN_00530550((void *)(iVar7 + 0x30),&local_2b84);
      piVar19 = (int *)FUN_004d3de0((void *)(iVar7 + 0x30),local_2da8);
      bVar4 = FUN_0042c6f0(&local_2b84,piVar19);
      if (bVar4) {
        do {
          pRVar20 = (RandomWalkBehavior *)FUN_004ce1f0(&local_2b84);
          local_2b44 = pRVar20;
          if (*(char *)&pRVar20->vftablePtr == '\x10') {
            pRVar20 = pRVar20 + 0x23;
            local_2b24 = (uint *)FUN_004e2320(pRVar20,2);
            local_2b98 = (CRefTime *)FUN_004e2320(pRVar20,1);
            puVar8 = (uint *)FUN_00405660(local_2b98,local_31e0,1);
            local_2b60 = (Creature *)FUN_004e2320(pRVar20,0);
            iVar7 = FUN_00406050(local_2b1c,(uint)local_2b60->vftablePtr,
                                 *(uint *)&local_2b60->Creature_data,*puVar8,puVar8[1],*local_2b24,
                                 local_2b24[1],0);
            uVar21 = FUN_004061f0(iVar7);
            pCVar12 = local_2b98;
            if ((char)uVar21 != '\0') {
              uVar39 = SUB41(local_31f0,0);
              uVar48 = (undefined1)((uint)local_31f0 >> 8);
              uVar50 = (undefined2)((uint)local_31f0 >> 0x10);
              uVar17 = CRefTime::Millisecs(local_2b98);
              piVar9 = FUN_004cde40(local_3200,uVar17);
              puVar22 = (undefined4 *)
                        FUN_00401530(piVar9,(int *)CONCAT22(uVar50,CONCAT11(uVar48,uVar39)));
              FUN_004cde20(pCVar12,puVar22);
              local_2b44[0x26].vftablePtr = (RandomWalkBehavior_vftable *)0x43340000;
            }
            pRVar20 = local_2b44;
            puVar8 = (uint *)FUN_00405690(pCVar12,local_3210,1);
            iVar7 = FUN_00406050(local_2b1c,(uint)local_2b60->vftablePtr,
                                 *(uint *)&local_2b60->Creature_data,*puVar8,puVar8[1],*local_2b24,
                                 local_2b24[1],0);
            uVar21 = FUN_004061f0(iVar7);
            if ((char)uVar21 != '\0') {
              uVar39 = SUB41(local_3220,0);
              uVar48 = (undefined1)((uint)local_3220 >> 8);
              uVar50 = (undefined2)((uint)local_3220 >> 0x10);
              uVar11 = 1;
              piVar9 = local_3230;
              uVar17 = CRefTime::Millisecs(pCVar12);
              piVar19 = FUN_004cde40(local_3240,uVar17);
              pvVar18 = (void *)FUN_00405690(piVar19,piVar9,uVar11);
              puVar22 = (undefined4 *)
                        FUN_004014b0(pvVar18,(int *)CONCAT22(uVar50,CONCAT11(uVar48,uVar39)));
              FUN_004cde20(pCVar12,puVar22);
              pRVar20[0x26].vftablePtr = (RandomWalkBehavior_vftable *)0x0;
            }
            puVar8 = (uint *)FUN_00405660(local_2b60,local_3250,1);
            iVar7 = FUN_00406050(local_2b1c,*puVar8,puVar8[1],*(uint *)&pCVar12->field_0x0,
                                 *(uint *)(pCVar12 + 4),*local_2b24,local_2b24[1],0);
            uVar21 = FUN_004061f0(iVar7);
            if ((char)uVar21 != '\0') {
              uVar39 = SUB41(local_3260,0);
              uVar48 = (undefined1)((uint)local_3260 >> 8);
              uVar50 = (undefined2)((uint)local_3260 >> 0x10);
              uVar17 = CRefTime::Millisecs((CRefTime *)local_2b60);
              piVar9 = FUN_004cde40(local_3270,uVar17);
              puVar22 = (undefined4 *)
                        FUN_00401530(piVar9,(int *)CONCAT22(uVar50,CONCAT11(uVar48,uVar39)));
              FUN_004cde20(local_2b60,puVar22);
              pRVar20[0x26].vftablePtr = (RandomWalkBehavior_vftable *)0x42b40000;
            }
            puVar8 = (uint *)FUN_00405690(local_2b60,local_3280,1);
            in_stack_ffffc890 = *(RandomWalkBehavior_vftable **)&pCVar12->field_0x0;
            iVar7 = FUN_00406050(local_2b1c,*puVar8,puVar8[1],(uint)in_stack_ffffc890,
                                 *(uint *)(pCVar12 + 4),*local_2b24,local_2b24[1],0);
            uVar21 = FUN_004061f0(iVar7);
            piVar9 = local_2b40;
            if ((char)uVar21 != '\0') {
              uVar39 = SUB41(local_3290,0);
              uVar48 = (undefined1)((uint)local_3290 >> 8);
              uVar50 = (undefined2)((uint)local_3290 >> 0x10);
              uVar11 = 1;
              piVar9 = local_32a0;
              uVar17 = CRefTime::Millisecs((CRefTime *)local_2b60);
              piVar19 = FUN_004cde40(local_32b0,uVar17);
              in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x532f66;
              pvVar18 = (void *)FUN_00405690(piVar19,piVar9,uVar11);
              puVar22 = (undefined4 *)
                        FUN_004014b0(pvVar18,(int *)CONCAT22(uVar50,CONCAT11(uVar48,uVar39)));
              FUN_004cde20(local_2b60,puVar22);
              pRVar20[0x26].vftablePtr = (RandomWalkBehavior_vftable *)0x43870000;
              piVar9 = local_2b40;
            }
          }
          if ((0 < (int)pRVar20[0x28].vftablePtr) &&
             (pRVar23 = (RandomWalkBehavior_vftable *)((int)pRVar20[0x28].vftablePtr - local_2b28),
             pRVar20[0x28].vftablePtr = pRVar23, (int)pRVar23 < 0)) {
            pRVar20[0x28].vftablePtr = (RandomWalkBehavior_vftable *)0x0;
          }
          iVar7 = pRVar20[0x27].RandomWalkBehavior_data.offset_0x0;
          if (((0 < iVar7) &&
              (iVar7 = iVar7 - local_2b28, pRVar20[0x27].RandomWalkBehavior_data.offset_0x0 = iVar7,
              iVar7 < 1)) &&
             (pRVar20[0x27].RandomWalkBehavior_data.offset_0x0 = 0,
             *(char *)((int)local_2b1c + 0xb4) == '\0')) {
            FUN_004c8530((int)local_fc);
            FUN_00402550(local_fc,(longlong *)(pRVar20 + 0x23));
            local_e8 = 0x3f800000;
            iVar7 = rand();
            local_ec = ((float)iVar7 * 0.1) / 32767.0 + 1.0;
            local_f0 = (*(char *)&pRVar20->vftablePtr != '\f') + 0x3a;
            FUN_00428590(local_2b2c + 2,local_fc);
          }
          FUN_0041e300(&local_2b84,(int *)&local_2b48);
          piVar19 = (int *)FUN_004d3de0((void *)(*piVar9 + 0x30),local_2da8);
          bVar4 = FUN_0042c6f0(&local_2b84,piVar19);
        } while (bVar4);
      }
      FUN_00530550(local_2bfc,&local_2b80);
      piVar19 = (int *)FUN_00428070(local_2bfc,local_2d00);
      bVar4 = FUN_0052df20(&local_2b80,piVar19);
      if (bVar4) {
        do {
          puVar22 = (undefined4 *)FUN_0052eba0(&local_2b80);
          FUN_004d4430((void *)(*piVar9 + 0x30),&local_2b90,(void *)*puVar22);
          FUN_0052ec10(&local_2b80,(int *)&local_2b48);
          piVar19 = (int *)FUN_00428070(local_2bfc,local_2d00);
          bVar4 = FUN_0052df20(&local_2b80,piVar19);
        } while (bVar4);
      }
      iVar7 = *piVar9;
      local_2b7c[0] = 0.0;
      FUN_00530550((void *)(iVar7 + 0xc),&local_2b88);
      piVar9 = (int *)FUN_004d3de0((void *)(iVar7 + 0xc),local_2db4);
      bVar4 = FUN_0042c6f0(&local_2b88,piVar9);
      if (bVar4) {
        do {
          piVar9 = (int *)FUN_004ce1f0(&local_2b88);
          piVar9[0xd] = piVar9[0xd] + local_2b28;
          if (piVar9[0x10] == 0 && piVar9[0x11] == 0) {
LAB_005336af:
            pvVar18 = local_2b1c;
            if (*(char *)((int)local_2b1c + 0xb4) == '\0') {
              iVar7 = *piVar9;
              if (iVar7 == 6) {
LAB_005336ea:
                if (2000 < piVar9[0xd]) {
                  piVar19 = piVar9;
                  if ((char)piVar9[0xc] == '\0') {
                    FUN_00428070((void *)((int)local_2b1c + 4),&local_2ba8);
                    piVar26 = (int *)FUN_00530550((void *)((int)pvVar18 + 4),local_2e24);
                    bVar4 = FUN_0042c6f0(&local_2ba8,piVar26);
                    if (bVar4) {
                      do {
                        iVar7 = FUN_00402bc0(&local_2ba8);
                        iVar7 = *(int *)(iVar7 + 8);
                        if ((iVar7 != 0) && (*(char *)(iVar7 + 0x60) == '\0')) {
                          uVar17 = 900;
                          uVar39 = SUB41(local_32c0,0);
                          uVar48 = (undefined1)((uint)local_32c0 >> 8);
                          uVar50 = (undefined2)((uint)local_32c0 >> 0x10);
                          in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x5337c7;
                          puVar8 = FUN_00402c50(piVar9 + 2,local_2680,(uint *)(iVar7 + 0x10));
                          puVar8 = FUN_00406260(puVar8,(uint *)CONCAT22(uVar50,CONCAT11(uVar48,
                                                  uVar39)));
                          iVar7 = FUN_00402d10(puVar8,uVar17);
                          if ((char)iVar7 != '\0') {
                            cVar6 = (char)piVar9[0xc] == '\0';
                            uVar39 = SUB41(local_2b2c,0);
                            uVar48 = (undefined1)((uint)local_2b2c >> 8);
                            uVar50 = (undefined2)((uint)local_2b2c >> 0x10);
                            piVar26 = (int *)FUN_004ce1f0(&local_2b88);
                            FUN_004d8c90(piVar26,CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),cVar6);
                            iVar7 = *local_2b40;
                            uVar39 = SUB41(local_2b7c[0],0);
                            uVar48 = (undefined1)((uint)local_2b7c[0] >> 8);
                            uVar50 = (undefined2)((uint)local_2b7c[0] >> 0x10);
                            puVar22 = (undefined4 *)FUN_004013d0((void *)(iVar7 + 0x60),1);
                            uVar21 = *puVar22;
                            puVar22 = (undefined4 *)FUN_004013d0((void *)(iVar7 + 0x60),0);
                            in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x533866;
                            puVar22 = FUN_00402990(local_15b4,*puVar22,uVar21,
                                                   CONCAT22(uVar50,CONCAT11(uVar48,uVar39)));
                            puVar40 = local_29b8;
                            goto LAB_0053386c;
                          }
                        }
                        FUN_00407a30(&local_2ba8,(int *)local_2bd0);
                        piVar26 = (int *)FUN_00530550((void *)((int)pvVar18 + 4),local_2e24);
                        bVar4 = FUN_0042c6f0(&local_2ba8,piVar26);
                      } while (bVar4);
                    }
                  }
                  else {
                    cVar6 = '\0';
                    uVar39 = SUB41(local_2b2c,0);
                    uVar48 = (undefined1)((uint)local_2b2c >> 8);
                    uVar50 = (undefined2)((uint)local_2b2c >> 0x10);
                    piVar26 = (int *)FUN_004ce1f0(&local_2b88);
                    FUN_004d8c90(piVar26,CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),cVar6);
                    iVar7 = *local_2b40;
                    uVar39 = SUB41(local_2b7c[0],0);
                    uVar48 = (undefined1)((uint)local_2b7c[0] >> 8);
                    uVar50 = (undefined2)((uint)local_2b7c[0] >> 0x10);
                    puVar22 = (undefined4 *)FUN_004013d0((void *)(iVar7 + 0x60),1);
                    uVar21 = *puVar22;
                    puVar22 = (undefined4 *)FUN_004013d0((void *)(iVar7 + 0x60),0);
                    in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x53374c;
                    puVar22 = FUN_00402990(local_1164,*puVar22,uVar21,
                                           CONCAT22(uVar50,CONCAT11(uVar48,uVar39)));
                    puVar40 = local_2a68;
LAB_0053386c:
                    puVar22 = FUN_00422d70(puVar40,puVar22,piVar19);
                    FUN_004284f0(local_2b2c + 0xc,puVar22);
                    pvVar18 = local_2b1c;
                  }
                }
              }
              else {
                if ((iVar7 != 7) && (iVar7 != 8)) goto LAB_00533b17;
                if ((iVar7 == 6) || ((iVar7 == 8 || (iVar7 == 7)))) goto LAB_005336ea;
              }
              if ((char)piVar9[0xc] != '\0') {
                iVar7 = *piVar9;
                if ((iVar7 == 6) || (iVar7 == 7)) {
                  if (*(int *)((int)pvVar18 + 0x8000bc) / 200 ==
                      (local_2b28 + *(int *)((int)pvVar18 + 0x8000bc)) / 200) {
                    iVar7 = *piVar9;
                    goto LAB_005338d4;
                  }
                }
                else {
LAB_005338d4:
                  if ((iVar7 != 8) || (piVar9[0xd] != 0)) goto LAB_00533b17;
                }
                FUN_00428070(local_2b70,&local_2b5c);
                piVar19 = (int *)FUN_00530550(local_2b70,local_2d08);
                bVar4 = FUN_0042c6f0(&local_2b5c,piVar19);
                if (bVar4) {
                  do {
                    iVar7 = FUN_00402bc0((int *)&local_2b5c);
                    local_2b44 = (RandomWalkBehavior *)(iVar7 + 8);
                    if (local_2b44->vftablePtr != (RandomWalkBehavior_vftable *)0x0) {
                      uVar17 = 0x19;
                      uVar39 = SUB41(local_32d0,0);
                      uVar48 = (undefined1)((uint)local_32d0 >> 8);
                      uVar50 = (undefined2)((uint)local_32d0 >> 0x10);
                      puVar8 = (uint *)(piVar9 + 2);
                      in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x53395c;
                      puVar16 = FUN_00402c50(puVar8,local_26b0,(uint *)(local_2b44->vftablePtr + 2))
                      ;
                      puVar16 = FUN_00406260(puVar16,(uint *)CONCAT22(uVar50,CONCAT11(uVar48,uVar39)
                                                                     ));
                      iVar7 = FUN_00402d10(puVar16,uVar17);
                      if (((char)iVar7 != '\0') &&
                         (*(char *)&local_2b44->vftablePtr[0xc].vfunction1 != '\x01')) {
                        puVar16 = FUN_00402c50(local_2b44->vftablePtr + 2,local_26e0,puVar8);
                        FUN_00402550(local_c0,(longlong *)puVar16);
                        local_2b20 = (CRefTime *)FUN_004013d0(local_c0,2);
                        *(uint *)local_2b20 = 0;
                        fVar43 = FUN_004021b0(local_c0);
                        local_2b3c = (CombatBehavior *)(float)fVar43;
                        if (0.0 < (float)local_2b3c) {
                          FUN_00401fb0(local_c0);
                        }
                        FUN_00401610(local_c0,20.0);
                        *(uint *)local_2b20 = 0x40a00000;
                        if (*piVar9 == 8) {
                          FUN_00401610(local_c0,2.0);
                        }
                        puVar22 = (undefined4 *)FUN_004e2320(puVar8,1);
                        uVar21 = puVar22[1];
                        uVar55 = *puVar22;
                        uVar39 = (undefined1)uVar55;
                        uVar48 = (undefined1)((uint)uVar55 >> 8);
                        uVar50 = (undefined2)((uint)uVar55 >> 0x10);
                        puVar16 = (uint *)FUN_004e2320(puVar8,0);
                        FUN_004d2340(local_2b1c,*puVar16,puVar16[1],
                                     CONCAT44(uVar21,CONCAT22(uVar50,CONCAT11(uVar48,uVar39))));
                        fVar43 = FUN_004055a0(2.0);
                        local_2b3c = (CombatBehavior *)(float)fVar43;
                        fVar44 = (float)local_2b3c * 10.0;
                        if (*piVar9 == 8) {
                          fVar44 = fVar44 * 5.0;
                        }
                        in_stack_ffffc890 = &local_2bec;
                        FUN_004cfd50(local_2b1c,(float)local_2b44->vftablePtr,(void *)0x0,fVar44,
                                     '\0','\0',0.0,puVar8,local_c0,local_2b2c,
                                     &in_stack_ffffc890->vfunction1,*piVar9 == 6,0,0,'\x01');
                      }
                    }
                    FUN_00407a30(&local_2b5c,(int *)&local_2c1c);
                    piVar19 = (int *)FUN_00530550(local_2b70,local_2d08);
                    bVar4 = FUN_0042c6f0(&local_2b5c,piVar19);
                  } while (bVar4);
                }
              }
            }
          }
          else {
            pCVar24 = (Creature *)FUN_00405420(local_2b1c,(uint *)(piVar9 + 0x10));
            piVar19 = piVar9;
            local_2b60 = pCVar24;
            if ((pCVar24 == (Creature *)0x0) || (0 < (int)pCVar24[0xf].vftablePtr)) {
              if (*(char *)((int)local_2b1c + 0xb4) == '\0') {
                uVar39 = SUB41(local_2b7c[0],0);
                uVar48 = (undefined1)((uint)local_2b7c[0] >> 8);
                uVar50 = (undefined2)((uint)local_2b7c[0] >> 0x10);
                piVar9[0x10] = 0;
                piVar9[0x11] = 0;
                iVar7 = *local_2b40;
                puVar22 = (undefined4 *)FUN_004013d0((void *)(iVar7 + 0x60),1);
                uVar21 = *puVar22;
                puVar22 = (undefined4 *)FUN_004013d0((void *)(iVar7 + 0x60),0);
                in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x533694;
                puVar22 = FUN_00402990(local_1980,*puVar22,uVar21,
                                       CONCAT22(uVar50,CONCAT11(uVar48,uVar39)));
                puVar40 = local_2a10;
                goto LAB_0053369a;
              }
            }
            else {
              switch(*piVar9) {
              case 0x10:
              case 0x12:
                pfVar25 = (float *)FUN_004013d0(&pCVar24[6].Creature_data.offset_0x4,2);
                local_2b3c = (CombatBehavior *)(*pfVar25 * 0.5);
                pfVar25 = (float *)FUN_004013d0(piVar9 + 9,2);
                FUN_00401080(auStack_1638,0,0,(float)local_2b3c + *pfVar25);
                FUN_00402510((int)local_19c);
                puVar8 = FUN_00402cb0(piVar9 + 2,auStack_25c0,local_19c);
                FUN_00402a40(&(pCVar24->Creature_data).offset_0xc,puVar8);
                puVar22 = FUN_00401080(auStack_1170,0,0,0);
                FUN_00401060(&pCVar24[2].Creature_data.offset_0x8,puVar22);
                iVar7 = piVar9[8];
                pfVar25 = (float *)FUN_004013d0(local_2b60 + 2,2);
                *pfVar25 = (float)((iVar7 + 2) * 0x5a);
                *(undefined1 *)&local_2b60[5].Creature_data = 0x53;
                break;
              case 0x13:
              case 0x44:
              case 0x45:
                pfVar25 = (float *)FUN_004013d0(&pCVar24[6].Creature_data.offset_0x4,2);
                local_2b3c = (CombatBehavior *)(*pfVar25 * 0.5);
                pfVar25 = (float *)FUN_004013d0(piVar9 + 9,2);
                FUN_00401080(auStack_10b0,0,0,(float)local_2b3c + *pfVar25);
                FUN_00402510((int)auStack_924);
                puVar8 = FUN_00402cb0(piVar9 + 2,auStack_2488,auStack_924);
                FUN_00402a40(&(pCVar24->Creature_data).offset_0xc,puVar8);
                puVar22 = FUN_00401080(auStack_1104,0,0,0);
                FUN_00401060(&pCVar24[2].Creature_data.offset_0x8,puVar22);
                iVar7 = piVar9[8];
                pfVar25 = (float *)FUN_004013d0(local_2b60 + 2,2);
                *pfVar25 = (float)(iVar7 * 0x5a);
                *(undefined1 *)&local_2b60[5].Creature_data = 0x54;
              }
              pCVar24 = local_2b60;
              puVar8 = FUN_00402c50(&(local_2b60->Creature_data).offset_0xc,local_25f0,
                                    (uint *)(piVar9 + 2));
              pfVar25 = FUN_00402550(local_1584,(longlong *)puVar8);
              fVar43 = FUN_004021b0(pfVar25);
              local_2b3c = (CombatBehavior *)(float)fVar43;
              if ((float)local_2b3c <= 16.0) {
                fVar43 = FUN_004021b0((float *)&pCVar24[3].Creature_data);
                local_2b3c = (CombatBehavior *)(float)fVar43;
                if (((float)local_2b3c <= 0.0) &&
                   ((*(char *)&pCVar24[5].Creature_data == 'S' ||
                    (*(char *)&pCVar24[5].Creature_data == 'T')))) {
                  switch(*piVar9) {
                  case 0x10:
                  case 0x12:
                    pfVar25 = (float *)FUN_004013d0(&pCVar24[6].Creature_data.offset_0x4,2);
                    local_2b3c = (CombatBehavior *)(*pfVar25 * 0.5);
                    pfVar25 = (float *)FUN_004013d0(piVar9 + 9,2);
                    FUN_00401080(auStack_111c,0,0,(float)local_2b3c + *pfVar25);
                    FUN_00402510((int)local_1f0);
                    puVar8 = FUN_00402cb0(piVar9 + 2,auStack_2620,local_1f0);
                    FUN_00402a40(&(pCVar24->Creature_data).offset_0xc,puVar8);
                    puVar22 = FUN_00401080(auStack_17d0,0,0,0);
                    FUN_00401060(&pCVar24[2].Creature_data.offset_0x8,puVar22);
                    iVar7 = piVar9[8];
                    pfVar25 = (float *)FUN_004013d0(local_2b60 + 2,2);
                    *pfVar25 = (float)((iVar7 + 2) * 0x5a);
                    break;
                  case 0x13:
                  case 0x44:
                  case 0x45:
                    pfVar25 = (float *)FUN_004013d0(&pCVar24[6].Creature_data.offset_0x4,2);
                    local_2b3c = (CombatBehavior *)(*pfVar25 * 0.5);
                    pfVar25 = (float *)FUN_004013d0(piVar9 + 9,2);
                    FUN_00401080(auStack_1134,0,0,(float)local_2b3c + *pfVar25);
                    FUN_00402510((int)local_208);
                    puVar8 = FUN_00402cb0(piVar9 + 2,auStack_2650,local_208);
                    FUN_00402a40(&(pCVar24->Creature_data).offset_0xc,puVar8);
                    puVar22 = FUN_00401080(auStack_159c,0,0,0);
                    FUN_00401060(&pCVar24[2].Creature_data.offset_0x8,puVar22);
                    iVar7 = piVar9[8];
                    pfVar25 = (float *)FUN_004013d0(local_2b60 + 2,2);
                    *pfVar25 = (float)(iVar7 * 0x5a);
                  }
                  goto LAB_005336af;
                }
              }
              if (*(char *)((int)local_2b1c + 0xb4) == '\0') {
                uVar39 = SUB41(local_2b7c[0],0);
                uVar48 = (undefined1)((uint)local_2b7c[0] >> 8);
                uVar50 = (undefined2)((uint)local_2b7c[0] >> 0x10);
                piVar9[0x10] = 0;
                piVar9[0x11] = 0;
                iVar7 = *local_2b40;
                puVar22 = (undefined4 *)FUN_004013d0((void *)(iVar7 + 0x60),1);
                uVar21 = *puVar22;
                puVar22 = (undefined4 *)FUN_004013d0((void *)(iVar7 + 0x60),0);
                in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x533637;
                puVar22 = FUN_00402990(local_114c,*puVar22,uVar21,
                                       CONCAT22(uVar50,CONCAT11(uVar48,uVar39)));
                puVar40 = local_2908;
LAB_0053369a:
                puVar22 = FUN_00422d70(puVar40,puVar22,piVar19);
                FUN_004284f0(local_2b2c + 0xc,puVar22);
                goto LAB_005336af;
              }
            }
          }
LAB_00533b17:
          local_2b7c[0] = (float)((int)local_2b7c[0] + 1);
          FUN_004ce200(&local_2b88,(int *)&local_2b48);
          piVar9 = (int *)FUN_004d3de0((void *)(*local_2b40 + 0xc),local_2db4);
          bVar4 = FUN_0042c6f0(&local_2b88,piVar9);
        } while (bVar4);
      }
      local_8._0_1_ = 5;
      FUN_00423710(local_2bfc);
      FUN_00407a30(local_2b68,(int *)local_2ca4);
      piVar9 = (int *)FUN_00530550(&local_2bf4,local_2d10);
      bVar4 = FUN_0042c6f0(local_2b68,piVar9);
      this = local_2b1c;
    } while (bVar4);
  }
  if (*(char *)((int)this + 0xb4) == '\0') {
    FUN_00428070(&local_2bf4,&local_2b24);
    piVar9 = (int *)FUN_00530550(&local_2bf4,local_2d18);
    bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
    if (bVar4) {
      do {
        piVar9 = (int *)0x0;
        local_2bac = (int *)0x0;
        local_2b3c = (CombatBehavior *)FUN_00402bc0((int *)&local_2b24);
        this_00 = local_2b3c->vftablePtr + 3;
        iVar7 = FUN_0041fff0((int *)this_00);
        if (0 < iVar7) {
          do {
            piVar9 = (int *)FUN_00402bb0(this_00,(int)piVar9);
            local_2b98 = (CRefTime *)*piVar9;
            pRVar20 = (RandomWalkBehavior *)(local_2b98 + 0x10a0);
            iVar15 = 0;
            local_2b44 = pRVar20;
            iVar7 = FUN_00428ee0((int *)pRVar20);
            if (0 < iVar7) {
              do {
                iVar7 = FUN_00428930(pRVar20,iVar15);
                iVar10 = FUN_0041cae0((int)local_2b1c);
                pRVar20 = local_2b44;
                if (*(int *)(iVar7 + 0x18) <= iVar10) {
                  puVar22 = (undefined4 *)FUN_00428930(local_2b44,iVar15);
                  FUN_00402a40(local_2b98 + 0x10,puVar22);
                }
                iVar15 = iVar15 + 1;
                iVar7 = FUN_00428ee0((int *)pRVar20);
              } while (iVar15 < iVar7);
            }
            *(int *)&local_2b98[0x38].field_0x0 = *(int *)&local_2b98[0x38].field_0x0 - local_2b28;
            this_00 = local_2b3c->vftablePtr + 3;
            piVar9 = (int *)((int)local_2bac + 1);
            local_2bac = piVar9;
            iVar7 = FUN_0041fff0((int *)this_00);
          } while ((int)piVar9 < iVar7);
        }
        FUN_00407a30(&local_2b24,(int *)&local_2b48);
        piVar9 = (int *)FUN_00530550(&local_2bf4,local_2d18);
        bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
      } while (bVar4);
    }
    FUN_004c8280(&local_2bc8);
    puVar22 = local_2b70;
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_00428070(local_2b70,&local_2b5c);
    piVar9 = (int *)FUN_00530550(puVar22,&local_2dbc);
    bVar4 = FUN_0042c6f0(&local_2b5c,piVar9);
    if (bVar4) {
      do {
        iVar7 = FUN_00402bc0((int *)&local_2b5c);
        piVar9 = (int *)(iVar7 + 8);
        iVar7 = *piVar9;
        if ((((iVar7 != 0) && (*(char *)(iVar7 + 0x60) != '\0')) &&
            (*(char *)(iVar7 + 0x60) != '\x05')) && (0.0 < *(float *)(iVar7 + 0x16c))) {
          FUN_00428070((void *)(iVar7 + 0x13a4),&local_2b24);
          piVar19 = (int *)FUN_00530550((void *)(iVar7 + 0x13a4),&local_2d20);
          bVar4 = FUN_0042c6f0(&local_2b24,piVar19);
          if (bVar4) {
            do {
              puVar8 = (uint *)FUN_00402bc0((int *)&local_2b24);
              if (((*puVar8 != 0 || puVar8[1] != 0) &&
                  (uVar17 = FUN_00405420(local_2b1c,puVar8), uVar17 != 0)) &&
                 ((uVar17 = FUN_00405420(local_2b1c,puVar8), *(char *)(uVar17 + 0x60) == '\0' &&
                  (0.0 < (float)puVar8[2])))) {
                puVar8 = FUN_00402c50((void *)(*piVar9 + 0x10),local_1e28,(uint *)(*piVar9 + 0x1c0))
                ;
                pfVar25 = FUN_00402550(local_117c,(longlong *)puVar8);
                fVar43 = FUN_004021b0(pfVar25);
                local_2b3c = (CombatBehavior *)(float)fVar43;
                if ((float)local_2b3c < 262144.0) goto LAB_005340fa;
              }
              FUN_00407a30(&local_2b24,(int *)&local_2b48);
              piVar19 = (int *)FUN_00530550((void *)(*piVar9 + 0x13a4),&local_2d20);
              bVar4 = FUN_0042c6f0(&local_2b24,piVar19);
            } while (bVar4);
          }
          local_2b6c = (CombatBehavior *)0xbf800000;
          FUN_00428070(&local_2bd8,&local_2b84);
          piVar19 = (int *)FUN_00530550(&local_2bd8,&local_2d28);
          bVar4 = FUN_0042c6f0(&local_2b84,piVar19);
          if (bVar4) {
            do {
              piVar19 = (int *)FUN_0052eb90((int *)&local_2b84);
              puVar8 = FUN_00402c50((void *)(*piVar9 + 0x10),local_24b8,(uint *)(*piVar19 + 0x10));
              pfVar25 = FUN_00402550(local_17f4,(longlong *)puVar8);
              fVar43 = FUN_004021b0(pfVar25);
              local_2b3c = (CombatBehavior *)(float)fVar43;
              if (((float)local_2b6c < 0.0) || ((float)local_2b3c < (float)local_2b6c)) {
                local_2b6c = local_2b3c;
              }
              FUN_0052ebf0(&local_2b84,&local_2b90);
              piVar19 = (int *)FUN_00530550(&local_2bd8,&local_2d28);
              bVar4 = FUN_0042c6f0(&local_2b84,piVar19);
            } while (bVar4);
          }
          fVar44 = *(float *)(*piVar9 + 0x1d2c) + 20.0;
          if (fVar44 * fVar44 < (float)local_2b6c) {
            FUN_004d6620(&local_2bc8,&local_2b5c);
            puVar22 = local_2b70;
            FUN_00428070(local_2b70,&local_2b80);
            piVar19 = (int *)FUN_00530550(puVar22,&local_2d24);
            bVar4 = FUN_0042c6f0(&local_2b80,piVar19);
            if (bVar4) {
              do {
                iVar7 = FUN_00402bc0(&local_2b80);
                if (*(int *)(iVar7 + 8) != 0) {
                  FUN_00530560((void *)(*(int *)(iVar7 + 8) + 0x13a4),(uint *)(*piVar9 + 8));
                }
                FUN_00407a30(&local_2b80,(int *)local_2bd0);
                piVar19 = (int *)FUN_00530550(puVar22,&local_2d24);
                bVar4 = FUN_0042c6f0(&local_2b80,piVar19);
              } while (bVar4);
            }
          }
        }
LAB_005340fa:
        FUN_00407a30(&local_2b5c,(int *)&local_2c1c);
        puVar22 = local_2b70;
        piVar9 = (int *)FUN_00530550(local_2b70,&local_2dbc);
        bVar4 = FUN_0042c6f0(&local_2b5c,piVar9);
      } while (bVar4);
    }
    FUN_00428070(&local_2bc8,&local_2b24);
    piVar9 = (int *)FUN_00530550(&local_2bc8,&local_2d2c);
    bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
    if (bVar4) {
      do {
        piVar9 = (int *)FUN_0052eb90((int *)&local_2b24);
        iVar7 = FUN_00402bc0(piVar9);
        if (*(undefined4 **)(iVar7 + 8) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar7 + 8))();
        }
        FUN_0040a1d0(puVar22,&local_2b48,(int *)*piVar9);
        FUN_0052ebf0(&local_2b24,&local_2b90);
        piVar9 = (int *)FUN_00530550(&local_2bc8,&local_2d2c);
        bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
      } while (bVar4);
    }
    pvVar18 = local_2b1c;
    bVar4 = FUN_00419f80((int)local_2b1c + 0x94);
    if (!bVar4) {
      FUN_00428070(&local_2bd8,&local_2b80);
      piVar9 = (int *)FUN_00530550(&local_2bd8,&local_2d3c);
      bVar4 = FUN_0042c6f0(&local_2b80,piVar9);
      if (bVar4) {
        do {
          pCVar12 = (CRefTime *)FUN_0052eb90(&local_2b80);
          iVar7 = *(int *)&pCVar12->field_0x0;
          local_2b4c = pCVar12;
          if (*(char *)(iVar7 + 0x1020) == '\x13') {
            if ((*(int *)(iVar7 + 0x11c8) == 0 && *(int *)(iVar7 + 0x11cc) == 0) ||
               (uVar17 = FUN_00405420(local_2b1c,(uint *)(iVar7 + 0x11c8)), uVar17 == 0)) {
              puVar22 = local_2b70;
              *(uint *)(iVar7 + 0x11c8) = 0;
              *(undefined4 *)(iVar7 + 0x11cc) = 0;
              FUN_00428070(local_2b70,&local_2b5c);
              piVar9 = (int *)FUN_00530550(puVar22,local_2e44);
              bVar4 = FUN_0042c6f0(&local_2b5c,piVar9);
              if (bVar4) {
                do {
                  iVar7 = FUN_00402bc0((int *)&local_2b5c);
                  iVar7 = *(int *)(iVar7 + 8);
                  if ((((iVar7 != 0) && (*(char *)(iVar7 + 0x60) == '\x05')) &&
                      (*(int *)(iVar7 + 0x198) == *(int *)(*(int *)&pCVar12->field_0x0 + 8))) &&
                     (*(int *)(iVar7 + 0x19c) == *(int *)(*(int *)&pCVar12->field_0x0 + 0xc))) {
                    iVar7 = FUN_00402bc0((int *)&local_2b5c);
                    iVar7 = *(int *)(iVar7 + 8);
                    iVar15 = *(int *)&pCVar12->field_0x0;
                    *(undefined4 *)(iVar15 + 0x11c8) = *(undefined4 *)(iVar7 + 8);
                    *(undefined4 *)(iVar15 + 0x11cc) = *(undefined4 *)(iVar7 + 0xc);
                    break;
                  }
                  FUN_00407a30(&local_2b5c,(int *)&local_2b48);
                  piVar9 = (int *)FUN_00530550(puVar22,local_2e44);
                  bVar4 = FUN_0042c6f0(&local_2b5c,piVar9);
                } while (bVar4);
              }
            }
            puVar8 = (uint *)(*(int *)&pCVar12->field_0x0 + 0x11c8);
            local_2b2d = '\0';
            if (((*puVar8 != 0 || *(int *)(*(int *)&pCVar12->field_0x0 + 0x11cc) != 0) &&
                (pCVar27 = (CRefTime *)FUN_00405420(local_2b1c,puVar8), local_2b20 = pCVar27,
                pCVar27 != (CRefTime *)0x0)) &&
               ((iVar7 = *(int *)&pCVar12->field_0x0,
                *(int *)(iVar7 + 0x1d44) != *(int *)(iVar7 + 0x1138) ||
                (bVar4 = FUN_00415b00((void *)(iVar7 + 0x1020),(char *)(iVar7 + 0x1d48)), bVar4))))
            {
              local_2b2d = '\x01';
              FUN_004110d0((int)pCVar27);
              local_2b3c = (CombatBehavior *)(pCVar27 + 100);
              local_2b3c->vftablePtr =
                   (CombatBehavior_vftable *)(uint)*(byte *)(*(int *)&pCVar12->field_0x0 + 0x1021);
              *(int *)(pCVar27 + 400) = (int)*(short *)(*(int *)&pCVar12->field_0x0 + 0x1030);
              *(uint *)(pCVar27 + 0x194) = *(uint *)(*(int *)&pCVar12->field_0x0 + 0x1024);
              iVar7 = *(int *)&pCVar12->field_0x0;
              if (*(int *)(iVar7 + 0x1134) < 0x10) {
                iVar15 = 0;
                if (0 < *(int *)(iVar7 + 0x1134)) {
                  do {
                    pCVar27[iVar15 + 0x1168] = *(CRefTime *)(iVar7 + (iVar15 + 0x206) * 8 + 7);
                    iVar7 = *(int *)&pCVar12->field_0x0;
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < *(int *)(iVar7 + 0x1134));
                }
                pCVar27[*(int *)(*(int *)&pCVar12->field_0x0 + 0x1134) + 0x1168] = (CRefTime)0x0;
              }
              iVar7 = *(int *)&pCVar12->field_0x0;
              *(uint *)(pCVar27 + 0x198) = *(uint *)(iVar7 + 8);
              *(uint *)(pCVar27 + 0x19c) = *(uint *)(iVar7 + 0xc);
              puVar22 = FUN_00406970(local_2b14);
              FUN_00407730(pCVar27 + 0x78,(undefined1 *)puVar22);
              FUN_0040a840((uint *)local_2b3c,(int)(pCVar27 + 0x78),(undefined4 *)0x0);
              FUN_00522580(local_2b1c,*(uint *)(*(int *)&pCVar12->field_0x0 + 8),
                           *(undefined4 *)(*(int *)&pCVar12->field_0x0 + 0xc),(int)local_2b20);
            }
            *(undefined4 *)(*(int *)&pCVar12->field_0x0 + 0x1d44) =
                 *(undefined4 *)(*(int *)&pCVar12->field_0x0 + 0x1138);
            FUN_00402a70((void *)(*(int *)&pCVar12->field_0x0 + 0x1d48),
                         (undefined1 *)(*(int *)&pCVar12->field_0x0 + 0x1020));
            pvVar18 = local_2b1c;
            if (((local_2b2d == '\0') &&
                (iVar7 = *(int *)&pCVar12->field_0x0,
                *(int *)(iVar7 + 0x11c8) == 0 && *(int *)(iVar7 + 0x11cc) == 0)) &&
               ((*(byte *)(iVar7 + 0x124) & 0x10) == 0)) {
              local_2c18 = 0;
              FUN_00428070(local_2b70,&local_2b24);
              piVar9 = (int *)FUN_00530550(local_2b70,&local_2d34);
              bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
              uVar17 = (uint)local_2c18;
              if (bVar4) {
                uVar11 = local_2c18._4_4_;
                do {
                  puVar8 = (uint *)FUN_00402bc0((int *)&local_2b24);
                  if (puVar8[2] != 0) {
                    uVar2 = puVar8[1];
                    if (((int)uVar2 <= (int)uVar11) &&
                       (((int)uVar2 < (int)uVar11 || (*puVar8 < uVar17)))) {
                      uVar17 = *puVar8;
                      uVar11 = uVar2;
                      local_2c18 = *(undefined8 *)puVar8;
                    }
                  }
                  FUN_00407a30(&local_2b24,(int *)&local_2b90);
                  piVar9 = (int *)FUN_00530550(local_2b70,&local_2d34);
                  bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
                  pCVar12 = local_2b4c;
                } while (bVar4);
              }
              iVar7 = local_2c18._4_4_ + -1 + (uint)(uVar17 != 0);
              local_2c18 = CONCAT44(iVar7,uVar17 - 1);
              iVar15 = *(int *)&pCVar12->field_0x0;
              *(uint *)(iVar15 + 0x11c8) = uVar17 - 1;
              *(int *)(iVar15 + 0x11cc) = iVar7;
              local_2bd0[0] = operator_new(0x1e60);
              local_8._0_1_ = 8;
              if (local_2bd0[0] == (Creature *)0x0) {
                pCVar24 = (Creature *)0x0;
              }
              else {
                pCVar24 = cube::Creature::Creature(local_2bd0[0],(undefined4 *)&local_2c18);
              }
              local_8 = CONCAT31(local_8._1_3_,7);
              puVar8 = FUN_00402b10(local_2b70,(uint *)&local_2c18);
              *puVar8 = (uint)pCVar24;
              FUN_004110d0((int)pCVar24);
              iVar7 = *(int *)&pCVar12->field_0x0;
              pCVar24[0x14].Creature_data.offset_0x4 = *(undefined4 *)(iVar7 + 8);
              pCVar24[0x14].Creature_data.offset_0x8 = *(undefined4 *)(iVar7 + 0xc);
              *(undefined1 *)&pCVar24[4].Creature_data.offset_0xc = 5;
              pCVar24[5].vftablePtr =
                   (Creature_vftable *)(uint)*(byte *)(*(int *)&pCVar12->field_0x0 + 0x1021);
              pCVar24[0x14].vftablePtr =
                   (Creature_vftable *)(int)*(short *)(*(int *)&pCVar12->field_0x0 + 0x1030);
              *(undefined4 *)&pCVar24[0x14].Creature_data =
                   *(undefined4 *)(*(int *)&pCVar12->field_0x0 + 0x1024);
              FUN_00402a40(&(pCVar24->Creature_data).offset_0xc,
                           (undefined4 *)(*(int *)&pCVar12->field_0x0 + 0x10));
              fVar43 = FUN_0040fda0((int)pCVar24);
              *(float *)&pCVar24[0x12].Creature_data = (float)fVar43;
              iVar7 = *(int *)&pCVar12->field_0x0;
              if (*(int *)(iVar7 + 0x1134) < 0x10) {
                if (0 < *(int *)(iVar7 + 0x1134)) {
                  iVar15 = 0;
                  do {
                    *(undefined1 *)((int)&pCVar24[0xde].Creature_data.offset_0xc + iVar15) =
                         *(undefined1 *)(iVar7 + (iVar15 + 0x206) * 8 + 7);
                    iVar7 = *(int *)&pCVar12->field_0x0;
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < *(int *)(iVar7 + 0x1134));
                }
                *(undefined1 *)
                 ((int)&pCVar24[0xde].Creature_data.offset_0xc +
                 *(int *)(*(int *)&pCVar12->field_0x0 + 0x1134)) = 0;
              }
              FUN_0040a840((uint *)(pCVar24 + 5),(int)(pCVar24 + 6),(undefined4 *)0x0);
              pvVar18 = local_2b1c;
              FUN_00522580(local_2b1c,*(uint *)(*(int *)&pCVar12->field_0x0 + 8),
                           *(undefined4 *)(*(int *)&pCVar12->field_0x0 + 0xc),(int)pCVar24);
            }
          }
          else {
            local_2b3c = (CombatBehavior *)FUN_00405420(pvVar18,(uint *)(iVar7 + 0x11c8));
            if (local_2b3c != (CombatBehavior *)0x0) {
              puVar22 = &local_2b3c[0xdf].CombatBehavior_data.offset_0x8;
              FUN_00428070(puVar22,&local_2b84);
              piVar9 = (int *)FUN_00530550(puVar22,&local_2dc4);
              bVar4 = FUN_0042c6f0(&local_2b84,piVar9);
              pvVar18 = local_2b1c;
              if (bVar4) {
                do {
                  pcVar28 = (char *)FUN_0052eb90((int *)&local_2b84);
                  pvVar18 = local_2b1c;
                  if (*pcVar28 == '\a') goto LAB_0053478d;
                  FUN_0052ebf0(&local_2b84,local_2bd0);
                  piVar9 = (int *)FUN_00530550(puVar22,&local_2dc4);
                  bVar4 = FUN_0042c6f0(&local_2b84,piVar9);
                  pvVar18 = local_2b1c;
                } while (bVar4);
              }
            }
            iVar7 = *(int *)&pCVar12->field_0x0;
            *(undefined4 *)(iVar7 + 0x11c8) = 0;
            *(undefined4 *)(iVar7 + 0x11cc) = 0;
            if (local_2b3c != (CombatBehavior *)0x0) {
              local_2b3c[0x12].CombatBehavior_data.offset_0x0 = 0;
            }
          }
LAB_0053478d:
          FUN_0052ebf0(&local_2b80,local_2bd0);
          piVar9 = (int *)FUN_00530550(&local_2bd8,&local_2d3c);
          bVar4 = FUN_0042c6f0(&local_2b80,piVar9);
        } while (bVar4);
      }
    }
    puVar22 = local_2b70;
    FUN_00428070(local_2b70,&local_2b24);
    piVar9 = (int *)FUN_00530550(puVar22,local_2e0c);
    bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
    if (bVar4) {
      do {
        iVar7 = FUN_00402bc0((int *)&local_2b24);
        piVar9 = (int *)(iVar7 + 8);
        iVar7 = *piVar9;
        if (iVar7 != 0) {
          uVar17 = FUN_00405420(local_2b1c,(uint *)(iVar7 + 0x11c8));
          if (((iVar7 == *(int *)((int)local_2b1c + 0xb8)) && (uVar17 != 0)) &&
             (*(char *)(*(int *)((int)local_2b1c + 0xb8) + 0x1020) == '\x13')) {
            *(undefined2 *)(iVar7 + 0x1030) = *(undefined2 *)(uVar17 + 400);
            *(undefined4 *)(*piVar9 + 0x1024) = *(undefined4 *)(uVar17 + 0x194);
          }
          iVar7 = *piVar9;
          if (((*(char *)(iVar7 + 0x60) == '\x05') &&
              (uVar17 = FUN_00405420(local_2b1c,(uint *)(iVar7 + 0x198)), uVar17 != 0)) &&
             ((*(int *)(uVar17 + 0x11c8) != *(int *)(iVar7 + 8) ||
              (*(int *)(uVar17 + 0x11cc) != *(int *)(iVar7 + 0xc))))) {
            FUN_004110d0(iVar7);
            *(undefined4 *)(*piVar9 + 0x16c) = 0;
            *(undefined1 *)(*piVar9 + 0x60) = 3;
            *(undefined4 *)(*piVar9 + 0x6c) = 5000;
            iVar7 = *piVar9;
            *(undefined4 *)(iVar7 + 0x198) = 0;
            *(undefined4 *)(iVar7 + 0x19c) = 0;
          }
        }
        FUN_00407a30(&local_2b24,(int *)&local_2b48);
        puVar22 = local_2b70;
        piVar9 = (int *)FUN_00530550(local_2b70,local_2e0c);
        bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
      } while (bVar4);
    }
    FUN_00426f60(&local_2bc8);
    FUN_00428070(puVar22,&local_2b5c);
    piVar9 = (int *)FUN_00530550(puVar22,&local_2d4c);
    bVar4 = FUN_0042c6f0(&local_2b5c,piVar9);
    if (bVar4) {
      do {
        iVar7 = FUN_00402bc0((int *)&local_2b5c);
        local_2bac = (int *)(iVar7 + 8);
        pCVar42 = (CombatBehavior *)*local_2bac;
        local_2b50 = pCVar42;
        if (((pCVar42 != (CombatBehavior *)0x0) &&
            ((float)pCVar42[0x12].CombatBehavior_data.offset_0x0 <= 0.0)) &&
           (*(char *)&pCVar42[4].CombatBehavior_data.offset_0xc != '\0')) {
          if ((pCVar42[5].CombatBehavior_data.offset_0x4 == 0) &&
             ((pCVar42 + 4)[1].vftablePtr == (CombatBehavior_vftable *)0x90)) {
            FUN_004c8510((int)local_50c);
            pRVar20 = (RandomWalkBehavior *)&(pCVar42->CombatBehavior_data).offset_0xc;
            local_2b84 = pRVar20;
            FUN_00402a40(local_50c,(undefined4 *)pRVar20);
            local_4d4 = 0x14;
            local_4d8 = 0x3e800000;
            local_4d0 = 1;
            ppVar38 = (pair<unsigned___int64,unsigned___int64> *)
                      FUN_00401080(local_1bc0,0x3f800000,0x3e4ccccd,0x3f000000);
            std::pair<unsigned___int64,unsigned___int64>::
            operator=<std::pair<unsigned___int64,unsigned___int64>,0>(local_4e8,ppVar38);
            puVar22 = FUN_00401080(local_1194,0,0,0x41a00000);
            FUN_00401060(local_4f4,puVar22);
            FUN_00428540(local_2b2c + 4,local_50c);
            local_2b2d = '\0';
            local_2b24 = (uint *)0xfffffff8;
            do {
              local_2b6c = (CombatBehavior *)0xfffffff8;
              do {
                iVar7 = -8;
                do {
                  puVar8 = FUN_00402990(local_15cc,local_2b24,local_2b6c,iVar7);
                  FUN_004d99d0(local_19c,puVar8);
                  FUN_00402cb0(pRVar20,local_418,local_19c);
                  puVar8 = FUN_00402c50(local_418,local_1e58,(uint *)pRVar20);
                  pfVar25 = FUN_00402550(local_11ac,(longlong *)puVar8);
                  fVar43 = FUN_004021b0(pfVar25);
                  local_2b3c = (CombatBehavior *)(float)fVar43;
                  if ((float)local_2b3c < 64.0) {
                    pCVar42 = (CombatBehavior *)FUN_004e2320(local_418,2);
                    local_2b3c = pCVar42;
                    local_2b44 = (RandomWalkBehavior *)FUN_004e2320(local_418,1);
                    local_2b20 = (CRefTime *)FUN_004e2320(local_418,0);
                    in_stack_ffffc890 = local_2b44->vftablePtr;
                    pvVar18 = (void *)FUN_00406050(local_2b1c,*(uint *)local_2b20,
                                                   *(uint *)(local_2b20 + 4),(uint)in_stack_ffffc890
                                                   ,(local_2b44->RandomWalkBehavior_data).offset_0x0
                                                   ,(uint)pCVar42->vftablePtr,
                                                   (pCVar42->CombatBehavior_data).offset_0x0,0);
                    bVar5 = FUN_005306c0((int)pvVar18);
                    pRVar20 = local_2b84;
                    if (bVar5 != 0) {
                      FUN_004c8510((int)local_7bc);
                      FUN_00402a40(local_7bc,local_418);
                      uVar21 = 0x3f800000;
                      local_788 = 0x3f000000;
                      pbVar37 = (byte *)FUN_004013e0(pvVar18,2);
                      fVar44 = (float)*pbVar37 / 255.0;
                      uVar39 = SUB41(fVar44,0);
                      uVar48 = (undefined1)((uint)fVar44 >> 8);
                      uVar50 = (undefined2)((uint)fVar44 >> 0x10);
                      pbVar37 = (byte *)FUN_004013e0(pvVar18,1);
                      fVar44 = (float)*pbVar37 / 255.0;
                      pbVar37 = (byte *)FUN_004013e0(pvVar18,0);
                      in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x534c02;
                      ppVar38 = (pair<unsigned___int64,unsigned___int64> *)
                                FUN_004010b0(local_1be0,(float)*pbVar37 / 255.0,fVar44,
                                             CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),uVar21);
                      std::pair<unsigned___int64,unsigned___int64>::
                      operator=<std::pair<unsigned___int64,unsigned___int64>,0>(local_798,ppVar38);
                      puVar22 = FUN_00401080(local_1a58,0,0,0x41200000);
                      FUN_00401060(local_7a4,puVar22);
                      local_784 = 3;
                      FUN_00428540(local_2b2c + 4,local_7bc);
                      uVar45 = FUN_00405510((uint *)local_2b3c);
                      iVar15 = (int)uVar45;
                      lVar13 = CRefTime::Millisecs((CRefTime *)local_2b44);
                      uVar39 = (undefined1)lVar13;
                      uVar48 = (undefined1)((uint)lVar13 >> 8);
                      uVar50 = (undefined2)((uint)lVar13 >> 0x10);
                      uVar17 = CRefTime::Millisecs(local_2b20);
                      pvVar18 = local_2b1c;
                      FUN_00530470(local_2b1c,uVar17,CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),iVar15
                                  );
                      FUN_0041d7e0((int)local_21c);
                      puVar22 = (undefined4 *)FUN_00405450(local_11c4,local_418);
                      FUN_00401060(local_21c,puVar22);
                      local_20c = *(undefined4 *)((int)pvVar18 + 0x800160);
                      FUN_00405610(local_210,&DAT_005842d8);
                      FUN_00528400(local_2b2c + 6,local_21c);
                      local_2b2d = '\x01';
                      pRVar20 = local_2b84;
                    }
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < 9);
                local_2b6c = (CombatBehavior *)((int)&local_2b6c->vftablePtr + 1);
              } while ((int)local_2b6c < 9);
              local_2b24 = (uint *)((int)local_2b24 + 1);
            } while ((int)local_2b24 < 9);
            if (local_2b2d != '\0') {
              FUN_004c8530((int)local_80);
              FUN_00402550(local_80,(longlong *)pRVar20);
              iVar7 = rand();
              local_70 = ((float)iVar7 * 0.4) / 32767.0 + 0.5;
              local_74 = 1;
              FUN_00428590(local_2b2c + 2,local_80);
              if (*(int *)((int)local_2b1c + 0xb8) == 0) {
                pvVar18 = (void *)FUN_004e2320(pRVar20,1);
                pvVar29 = (void *)FUN_004e2320(pRVar20,0);
                iVar7 = 0;
                uVar39 = 8;
                uVar48 = 0;
                uVar50 = 0;
                pCVar12 = (CRefTime *)FUN_00405690(pvVar18,local_32e0,8);
                lVar13 = CRefTime::Millisecs(pCVar12);
                pCVar12 = (CRefTime *)FUN_00405690(pvVar29,local_32f0,8);
                lVar14 = CRefTime::Millisecs(pCVar12);
                pCVar12 = (CRefTime *)FUN_00405660(pvVar18,local_3300,8);
                uVar17 = CRefTime::Millisecs(pCVar12);
                pCVar12 = (CRefTime *)FUN_00405660(pvVar29,local_3310,8);
                uVar11 = CRefTime::Millisecs(pCVar12);
                FUN_004d1a70(local_2b1c,uVar11,uVar17,lVar14,lVar13,
                             CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),iVar7);
                pRVar20 = local_2b84;
              }
              FUN_004d3e00((int)local_2b1c);
              pvVar18 = (void *)FUN_004e2320(pRVar20,1);
              pvVar29 = (void *)FUN_004e2320(pRVar20,0);
              pCVar12 = (CRefTime *)FUN_00405690(pvVar18,local_3320,8);
              uVar17 = CRefTime::Millisecs(pCVar12);
              pCVar12 = (CRefTime *)FUN_00405690(pvVar29,local_3330,8);
              lVar13 = CRefTime::Millisecs(pCVar12);
              uVar39 = (undefined1)lVar13;
              uVar48 = (undefined1)((uint)lVar13 >> 8);
              uVar50 = (undefined2)((uint)lVar13 >> 0x10);
              pCVar12 = (CRefTime *)FUN_00405660(pvVar18,local_3340,8);
              piVar9 = (int *)CRefTime::Millisecs(pCVar12);
              pCVar12 = (CRefTime *)FUN_00405660(pvVar29,local_3350,8);
              lVar13 = CRefTime::Millisecs(pCVar12);
              in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x534eca;
              FUN_004d9160(local_2b1c,lVar13,piVar9,CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),uVar17)
              ;
              FUN_004d5c70((int)local_2b1c);
            }
            pRVar20 = local_2b84;
            FUN_00402a40(local_eb4,&local_2b84->vftablePtr);
            FUN_00428070(local_2b70,&local_2b80);
            piVar9 = (int *)FUN_00530550(local_2b70,&local_2d44);
            bVar4 = FUN_0042c6f0(&local_2b80,piVar9);
            pCVar42 = local_2b50;
            if (bVar4) {
              do {
                iVar7 = FUN_00402bc0(&local_2b80);
                pCVar41 = *(CombatBehavior **)(iVar7 + 8);
                pCVar42 = local_2b50;
                local_2bbc = pCVar41;
                if ((((pCVar41 != (CombatBehavior *)0x0) && (pCVar41 != local_2b50)) &&
                    (uVar21 = FUN_004d18c0((int)local_2b50,(int)pCVar41), pCVar42 = local_2b50,
                    (char)uVar21 != '\0')) &&
                   (((local_2b94 = &(pCVar41->CombatBehavior_data).offset_0x4,
                     (pCVar41->CombatBehavior_data).offset_0x4 !=
                     local_2b50[0xe3].CombatBehavior_data.offset_0x0 ||
                     ((pCVar41->CombatBehavior_data).offset_0x8 !=
                      local_2b50[0xe3].CombatBehavior_data.offset_0x4)) &&
                    ((0.0 < (float)pCVar41[0x12].CombatBehavior_data.offset_0x0 &&
                     (pCVar41[0xe].CombatBehavior_data.offset_0xc == 0)))))) {
                  local_2b3c = (CombatBehavior *)&local_2b50[0xe2].CombatBehavior_data;
                  piVar9 = (int *)FUN_00530550(local_2b3c,&local_3030);
                  pvVar18 = (void *)FUN_00530600(local_2b3c,local_2fe0,
                                                 &(pCVar41->CombatBehavior_data).offset_0x4);
                  bVar4 = FUN_0042c6f0(pvVar18,piVar9);
                  pCVar42 = local_2b50;
                  if (!bVar4) {
                    local_2b3c = (CombatBehavior *)&pCVar41[6].CombatBehavior_data.offset_0x4;
                    FUN_004013d0(local_2b3c,0);
                    puVar22 = &(pCVar41->CombatBehavior_data).offset_0xc;
                    uVar39 = SUB41(local_3360,0);
                    uVar48 = (undefined1)((uint)local_3360 >> 8);
                    uVar50 = (undefined2)((uint)local_3360 >> 0x10);
                    in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x53503b;
                    local_2b4c = (CRefTime *)puVar22;
                    puVar8 = FUN_00402c50(local_eb4,local_22a8,puVar22);
                    ppVar38 = (pair<unsigned___int64,unsigned___int64> *)FUN_0041cba0(puVar8);
                    ppVar38 = std::pair<unsigned___int64,unsigned___int64>::
                              operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                                        (local_1c00,ppVar38);
                    puVar8 = FUN_0041ce90(ppVar38,(uint *)CONCAT22(uVar50,CONCAT11(uVar48,uVar39)));
                    uVar21 = FUN_004dade0(puVar8);
                    pCVar42 = local_2b50;
                    if ((char)uVar21 != '\0') {
                      puVar8 = (uint *)FUN_004e2320(puVar22,2);
                      uVar39 = SUB41(local_3370,0);
                      uVar48 = (undefined1)((uint)local_3370 >> 8);
                      uVar50 = (undefined2)((uint)local_3370 >> 0x10);
                      pvVar18 = (void *)FUN_004e2320(local_eb4,2);
                      plVar30 = (longlong *)
                                FUN_00401490(pvVar18,(int *)CONCAT22(uVar50,CONCAT11(uVar48,uVar39))
                                             ,puVar8);
                      fVar43 = FUN_00401420(plVar30);
                      fVar43 = FUN_00401ca0((float)fVar43);
                      local_2b20 = (CRefTime *)(float)fVar43;
                      pfVar25 = (float *)FUN_004013d0(&local_2b50[6].CombatBehavior_data.offset_0x4,
                                                      2);
                      pfVar36 = (float *)FUN_004013d0(local_2b3c,2);
                      pCVar42 = local_2b50;
                      if ((float)local_2b20 < *pfVar36 * 0.5 + *pfVar25 + 8.0) {
                        puVar8 = FUN_00402c50(local_2b4c,local_1e88,(uint *)pRVar20);
                        FUN_00402550(local_134,(longlong *)puVar8);
                        puVar22 = (undefined4 *)FUN_004013d0(local_134,2);
                        *puVar22 = 0;
                        fVar43 = FUN_004021b0(local_134);
                        local_2b3c = (CombatBehavior *)(float)fVar43;
                        if (0.01 < (float)local_2b3c) {
                          FUN_00401fb0(local_134);
                        }
                        *puVar22 = 0x3e800000;
                        uVar17 = rand();
                        uVar17 = uVar17 & 0x80000003;
                        bVar4 = uVar17 == 0;
                        if ((int)uVar17 < 0) {
                          bVar4 = (uVar17 - 1 | 0xfffffffc) == 0xffffffff;
                        }
                        local_2b98 = (CRefTime *)CONCAT31(local_2b98._1_3_,bVar4);
                        FUN_00401610(local_134,10.0);
                        pCVar42 = local_2b50;
                        fVar43 = FUN_00408f70(local_2b50);
                        local_2b3c = (CombatBehavior *)(float)fVar43;
                        local_2b44 = (RandomWalkBehavior *)((float)local_2b3c * 25.0);
                        if ((char)local_2b98 != '\0') {
                          local_2b44 = (RandomWalkBehavior *)((float)local_2b44 * 2.0);
                        }
                        FUN_00530690(&pCVar42[0xe2].CombatBehavior_data,local_2dcc,local_2b94);
                        in_stack_ffffc890 = &local_2bec;
                        FUN_004cfd50(local_2b1c,(float)local_2bbc,pCVar42,(float)local_2b44,
                                     (char)local_2b98,'\x01',0.0,pRVar20,local_134,local_2b2c,
                                     &in_stack_ffffc890->vfunction1,'\x01',0,0,'\x01');
                      }
                    }
                  }
                }
                FUN_00407a30(&local_2b80,(int *)&local_2b48);
                piVar9 = (int *)FUN_00530550(local_2b70,&local_2d44);
                bVar4 = FUN_0042c6f0(&local_2b80,piVar9);
              } while (bVar4);
            }
          }
          piVar9 = local_2bac;
          puVar22 = &pCVar42[5].CombatBehavior_data.offset_0x4;
          *puVar22 = *puVar22 + local_2b28;
          if (*(char *)&pCVar42[4].CombatBehavior_data.offset_0xc == '\x05') {
            puVar22 = &pCVar42[0x14].CombatBehavior_data.offset_0x4;
            uVar17 = FUN_00405420(local_2b1c,puVar22);
            if (((uVar17 != 0) && (19999 < (int)pCVar42[5].CombatBehavior_data.offset_0x4)) &&
               (uVar17 = FUN_00405420(local_2b1c,puVar22), 0.0 <= *(float *)(uVar17 + 0x16c))) {
              fVar43 = FUN_0040fda0((int)pCVar42);
              pCVar42[0x12].CombatBehavior_data.offset_0x0 = (float)fVar43;
              uVar17 = FUN_00405420(local_2b1c,puVar22);
              FUN_00402a40(&(pCVar42->CombatBehavior_data).offset_0xc,(undefined4 *)(uVar17 + 0x10))
              ;
              pCVar42[0xe4].vftablePtr = (CombatBehavior_vftable *)0x0;
              pCVar42[0xe4].CombatBehavior_data.offset_0x0 = 0;
              FUN_004f8520(&pCVar42[0xfb].CombatBehavior_data.offset_0x4);
              uVar17 = FUN_00405420(local_2b1c,puVar22);
              FUN_004f8520((int *)(uVar17 + 0x13ac));
            }
          }
          else if (999 < (int)pCVar42[5].CombatBehavior_data.offset_0x4) {
            FUN_004d6620(&local_2bc8,&local_2b5c);
            FUN_00428070(local_2b70,&local_2ba8);
            piVar19 = (int *)FUN_00530550(local_2b70,&local_2dd0);
            bVar4 = FUN_0042c6f0(&local_2ba8,piVar19);
            if (bVar4) {
              do {
                iVar7 = FUN_00402bc0(&local_2ba8);
                if (*(int *)(iVar7 + 8) != 0) {
                  FUN_00530560((void *)(*(int *)(iVar7 + 8) + 0x13a4),(uint *)(*piVar9 + 8));
                  FUN_00530560((void *)(*(int *)(iVar7 + 8) + 0x13ac),(uint *)(*piVar9 + 8));
                }
                FUN_00407a30(&local_2ba8,(int *)&local_2b90);
                piVar19 = (int *)FUN_00530550(local_2b70,&local_2dd0);
                bVar4 = FUN_0042c6f0(&local_2ba8,piVar19);
              } while (bVar4);
            }
          }
        }
        FUN_00407a30(&local_2b5c,(int *)local_2bd0);
        puVar22 = local_2b70;
        piVar9 = (int *)FUN_00530550(local_2b70,&local_2d4c);
        bVar4 = FUN_0042c6f0(&local_2b5c,piVar9);
      } while (bVar4);
    }
    FUN_00428070(&local_2bc8,&local_2b24);
    piVar9 = (int *)FUN_00530550(&local_2bc8,&local_2dd4);
    bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
    if (bVar4) {
      do {
        piVar9 = (int *)FUN_0052eb90((int *)&local_2b24);
        iVar7 = FUN_00402bc0(piVar9);
        if (*(undefined4 **)(iVar7 + 8) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar7 + 8))();
        }
        FUN_0040a1d0(puVar22,&local_2b48,(int *)*piVar9);
        FUN_0052ebf0(&local_2b24,&local_2b90);
        piVar9 = (int *)FUN_00530550(&local_2bc8,&local_2dd4);
        bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
      } while (bVar4);
    }
    FUN_004c8280(&local_2c4c);
    pvVar18 = (void *)((int)local_2b1c + 0xc);
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_00428070(pvVar18,&local_2b5c);
    piVar9 = (int *)FUN_00530550(pvVar18,&local_2dd8);
    bVar4 = FUN_0042c6f0(&local_2b5c,piVar9);
    if (bVar4) {
      do {
        iVar7 = FUN_00402bc0((int *)&local_2b5c);
        if (*(int *)(iVar7 + 8) != 0) {
          FUN_00428070(&local_2bd8,&local_2b24);
          piVar9 = (int *)FUN_00530550(&local_2bd8,&local_2d54);
          bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
          if (bVar4) {
            do {
              piVar9 = (int *)FUN_0052eb90((int *)&local_2b24);
              puVar8 = FUN_00402c50((void *)(*(int *)(iVar7 + 8) + 0x10),local_25d8,
                                    (uint *)(*piVar9 + 0x10));
              pfVar25 = FUN_00402550(local_15e4,(longlong *)puVar8);
              fVar43 = FUN_004021b0(pfVar25);
              local_2b3c = (CombatBehavior *)(float)fVar43;
              if ((float)local_2b3c < 262144.0) goto LAB_00535609;
              FUN_0052ebf0(&local_2b24,&local_2b48);
              piVar9 = (int *)FUN_00530550(&local_2bd8,&local_2d54);
              bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
            } while (bVar4);
          }
          FUN_004d6620(&local_2c4c,&local_2b5c);
        }
LAB_00535609:
        FUN_00407a30(&local_2b5c,(int *)&local_2b90);
        piVar9 = (int *)FUN_00530550(pvVar18,&local_2dd8);
        bVar4 = FUN_0042c6f0(&local_2b5c,piVar9);
      } while (bVar4);
    }
    FUN_00428070(&local_2c4c,&local_2b24);
    piVar9 = (int *)FUN_00530550(&local_2c4c,&local_2d5c);
    bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
    if (bVar4) {
      do {
        piVar9 = (int *)FUN_0052eb90((int *)&local_2b24);
        iVar7 = FUN_00402bc0(piVar9);
        if (*(void **)(iVar7 + 8) != (void *)0x0) {
          FUN_004ce500(*(void **)(iVar7 + 8),1);
        }
        FUN_0040a1d0(pvVar18,&local_2b48,(int *)*piVar9);
        FUN_0052ebf0(&local_2b24,&local_2b90);
        piVar9 = (int *)FUN_00530550(&local_2c4c,&local_2d5c);
        bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
      } while (bVar4);
    }
    FUN_00423710(&local_2c4c);
    local_8._0_1_ = 5;
    FUN_00423710(&local_2bc8);
  }
  else {
    FUN_00428070((void *)((int)this + 4),&local_2b24);
    piVar9 = (int *)FUN_00530550((void *)((int)this + 4),&local_2d1c);
    bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
    if (bVar4) {
      do {
        iVar7 = FUN_00402bc0((int *)&local_2b24);
        iVar7 = *(int *)(iVar7 + 8);
        if ((iVar7 != 0) && (*(char *)(iVar7 + 0x60) == '\x05')) {
          uVar17 = FUN_00405420(local_2b1c,(uint *)(iVar7 + 0x198));
          if (uVar17 != 0) {
            uVar17 = FUN_00405420(local_2b1c,(uint *)(iVar7 + 0x198));
            *(undefined4 *)(uVar17 + 0x11c8) = *(undefined4 *)(iVar7 + 8);
            *(undefined4 *)(uVar17 + 0x11cc) = *(undefined4 *)(iVar7 + 0xc);
          }
        }
        FUN_00407a30(&local_2b24,(int *)&local_2b48);
        piVar9 = (int *)FUN_00530550(local_2b70,&local_2d1c);
        bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
      } while (bVar4);
    }
  }
  pvVar18 = local_2b1c;
  if ((*(char *)((int)local_2b1c + 0xb4) == '\0') &&
     (bVar4 = FUN_00419f80((int)local_2b1c + 0x94), !bVar4)) {
    FUN_00428070(&local_2bf4,local_2b7c);
    piVar9 = (int *)FUN_00530550(&local_2bf4,local_2de4);
    bVar4 = FUN_0042c6f0(local_2b7c,piVar9);
    if (bVar4) {
      do {
        iVar15 = 0;
        local_2b40 = (int *)FUN_00402bc0((int *)local_2b7c);
        piVar9 = (int *)(*local_2b40 + 0x24);
        iVar7 = FUN_0041fff0(piVar9);
        if (0 < iVar7) {
          do {
            puVar22 = (undefined4 *)FUN_00402bb0(piVar9,iVar15);
            pCVar12 = (CRefTime *)*puVar22;
            local_2b20 = pCVar12;
            piVar9 = (int *)FUN_00530550((void *)((int)local_2b1c + 0xc),local_302c);
            pvVar18 = (void *)FUN_00530600((void *)((int)local_2b1c + 0xc),local_3040,
                                           (uint *)pCVar12);
            bVar4 = FUN_0042c6f0(pvVar18,piVar9);
            if (!bVar4) {
              FUN_00428070(&local_2bd8,&local_2b24);
              piVar9 = (int *)FUN_00530550(&local_2bd8,&local_2ddc);
              bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
              if (bVar4) {
                do {
                  piVar9 = (int *)FUN_0052eb90((int *)&local_2b24);
                  puVar8 = FUN_00402c50(pCVar12 + 0x10,local_1eb8,(uint *)(*piVar9 + 0x10));
                  pfVar25 = FUN_00402550(local_11dc,(longlong *)puVar8);
                  fVar43 = FUN_004021b0(pfVar25);
                  local_2b3c = (CombatBehavior *)(float)fVar43;
                  if ((float)local_2b3c < 262144.0) {
                    local_2b48 = operator_new(0xa0);
                    local_8._0_1_ = 10;
                    if (local_2b48 == (CombatBehavior *)0x0) {
                      puVar8 = (uint *)0x0;
                    }
                    else {
                      puVar8 = FUN_0052e9e0(local_2b48,(undefined4 *)local_2b20);
                    }
                    local_8._0_1_ = 5;
                    puVar16 = FUN_00402b10((void *)((int)local_2b1c + 0xc),puVar8);
                    *puVar16 = (uint)puVar8;
                    FUN_00402a40(puVar8 + 0x20,puVar8 + 4);
                    puVar8[0x26] = puVar8[0xd];
                    break;
                  }
                  FUN_0052ebf0(&local_2b24,&local_2b48);
                  piVar9 = (int *)FUN_00530550(&local_2bd8,&local_2ddc);
                  bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
                } while (bVar4);
              }
            }
            iVar15 = iVar15 + 1;
            piVar9 = (int *)(*local_2b40 + 0x24);
            iVar7 = FUN_0041fff0(piVar9);
          } while (iVar15 < iVar7);
        }
        iVar7 = *local_2b40;
        piVar9 = (int *)FUN_004013d0((void *)(iVar7 + 0x60),1);
        uVar17 = (int)(*piVar9 + (*piVar9 >> 0x1f & 7U)) >> 3;
        piVar9 = (int *)FUN_004013d0((void *)(iVar7 + 0x60),0);
        iVar15 = *piVar9 + (*piVar9 >> 0x1f & 7U);
        piVar9 = (int *)FUN_004286f0(local_2b1c,
                                     CONCAT22((short)(iVar15 >> 0x13),(short)(iVar15 >> 3)),uVar17);
        piVar19 = (int *)(iVar7 + 0x18);
        local_2b68[0] = 0;
        local_2bac = piVar9;
        iVar7 = FUN_0041fff0(piVar19);
        if (0 < iVar7) {
          do {
            piVar19 = (int *)FUN_00402bb0(piVar19,local_2b68[0]);
            pCVar12 = (CRefTime *)*piVar19;
            local_2b98 = pCVar12;
            if (((*(int *)&pCVar12[0x40].field_0x0 == *(int *)(pCVar12 + 0x44)) ||
                ((iVar7 = FUN_0041cae0((int)local_2b1c), *(int *)&pCVar12[0x40].field_0x0 <= iVar7
                 && (iVar7 = FUN_0041cae0((int)local_2b1c), iVar7 <= *(int *)(pCVar12 + 0x44))))) &&
               (uVar17 = FUN_00405420(local_2b1c,(uint *)(pCVar12 + 0x48)), uVar17 == 0)) {
              iVar7 = *(int *)&pCVar12[0x38].field_0x0;
              if (iVar7 < 0) {
                *(undefined4 *)&pCVar12[0x38].field_0x0 = 0;
              }
              if ((iVar7 < 1) || (*(int *)(pCVar12 + 0x3c) != *(int *)((int)local_2b1c + 0x800160)))
              {
                FUN_00428070(&local_2bd8,&local_2b84);
                piVar19 = (int *)FUN_00530550(&local_2bd8,&local_2d64);
                bVar4 = FUN_0042c6f0(&local_2b84,piVar19);
                if (bVar4) {
LAB_00535a24:
                  pCVar27 = pCVar12 + 0x10;
                  local_2b3c = *(CombatBehavior **)&pCVar12[8].field_0x0;
                  uVar39 = SUB41(local_22d8,0);
                  uVar48 = (undefined1)((uint)local_22d8 >> 8);
                  uVar50 = (undefined2)((uint)local_22d8 >> 0x10);
                  piVar19 = (int *)FUN_0052eb90((int *)&local_2b84);
                  puVar8 = FUN_00402c50((void *)(*piVar19 + 0x10),
                                        (uint *)CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),
                                        (uint *)pCVar27);
                  pfVar25 = FUN_00402550(local_1818,(longlong *)puVar8);
                  fVar43 = FUN_004021b0(pfVar25);
                  local_2b20 = (CRefTime *)(float)fVar43;
                  if ((float)local_2b3c * (float)local_2b3c <= (float)local_2b20)
                  goto code_r0x00535a7c;
                  if (((piVar9 != (int *)0x0) && (piVar9[0xd] == 5)) &&
                     ((*(ushort *)(pCVar12 + 0x7a) & 0x1000) != 0)) {
                    if (*(int *)&pCVar12[0x28].field_0x0 != 6) {
                      *(int *)(pCVar12 + 0x34) = piVar9[0xf];
                      pCVar12[0x58].field_0x0 = (char)piVar9[0x10];
                    }
                    srand(*(int *)&pCVar12[0x48].field_0x0 + piVar9[0xc]);
                    FUN_004fb480((int)pCVar12,1);
                    if ((*(ushort *)(pCVar12 + 0x7a) & 0x200) == 0) {
                      FUN_00414470(pCVar12 + 0x8c8,0.05,'\0');
                      FUN_00414470(pCVar12 + 0x7b0,0.05,'\0');
                      FUN_00414470(pCVar12 + 0x698,0.05,'\0');
                      FUN_00414470(pCVar12 + 0x350,0.05,'\0');
                      FUN_00414470(pCVar12 + 0x580,0.05,'\0');
                      FUN_00414470(pCVar12 + 0x468,0.05,'\0');
                      FUN_00414470(pCVar12 + 0x238,0.05,'\0');
                      FUN_00414470(pCVar12 + 0x9e0,0.05,'\0');
                      FUN_00414470(pCVar12 + 0xaf8,0.05,'\0');
                    }
                    else if (pCVar12[0x10e8].field_0x0 != '\0') {
                      *(ushort *)(pCVar12 + 0x7a) = *(ushort *)(pCVar12 + 0x7a) | 0x2000;
                    }
                    pCVar27 = pCVar12 + 0xf6c;
                    local_2b20 = pCVar27;
                    FUN_00530550(pCVar27,&local_2ba8);
                    piVar9 = (int *)FUN_004d3de0(pCVar27,&local_2d6c);
                    bVar4 = FUN_0042c6f0(&local_2ba8,piVar9);
                    if (bVar4) {
                      do {
                        pCVar42 = (CombatBehavior *)FUN_004ce1f0(&local_2ba8);
                        local_2b3c = pCVar42;
                        FUN_00530550(pCVar42,&local_2b80);
                        piVar9 = (int *)FUN_004d3de0(pCVar42,local_2e14);
                        bVar4 = FUN_0042c6f0(&local_2b80,piVar9);
                        if (bVar4) {
                          do {
                            piVar9 = (int *)FUN_004ce1f0(&local_2b80);
                            if ((*piVar9 != 0) &&
                               (cVar6 = FUN_00428290((char *)(piVar9 + 1)), cVar6 != '\0')) {
                              *(short *)(piVar9 + 5) = (short)local_2bac[0xf];
                              cVar6 = (char)piVar9[1];
                              if (((cVar6 == '\x03') || ((cVar6 == '\a' || (cVar6 == '\x05')))) ||
                                 ((cVar6 == '\x04' ||
                                  (((cVar6 == '\x06' || (cVar6 == '\b')) || (cVar6 == '\t')))))) {
                                *(char *)(piVar9 + 4) = (char)local_2bac[0x10] + '\x01';
                                iVar7 = rand();
                                if (iVar7 % 0x14 == 0) {
                                  *(char *)(piVar9 + 4) = (char)piVar9[4] + '\x01';
                                }
                                iVar7 = rand();
                                if (iVar7 % 100 == 0) {
                                  *(char *)(piVar9 + 4) = (char)piVar9[4] + '\x01';
                                }
                                if (4 < *(byte *)(piVar9 + 4)) {
                                  *(undefined1 *)(piVar9 + 4) = 4;
                                }
                              }
                            }
                            FUN_00402c10(&local_2b80,(int *)&local_2b48);
                            piVar9 = (int *)FUN_004d3de0(local_2b3c,local_2e14);
                            bVar4 = FUN_0042c6f0(&local_2b80,piVar9);
                          } while (bVar4);
                        }
                        FUN_00402c30(&local_2ba8,(int *)&local_2b48);
                        piVar9 = (int *)FUN_004d3de0(local_2b20,&local_2d6c);
                        bVar4 = FUN_0042c6f0(&local_2ba8,piVar9);
                        pCVar12 = local_2b98;
                      } while (bVar4);
                    }
                  }
                  local_2b48 = operator_new(0x1e60);
                  local_8._0_1_ = 0xb;
                  if (local_2b48 == (CombatBehavior *)0x0) {
                    local_2b60 = (Creature *)0x0;
                  }
                  else {
                    local_2b60 = cube::Creature::Creature
                                           ((Creature *)local_2b48,(undefined4 *)(pCVar12 + 0x48));
                  }
                  pCVar24 = local_2b60;
                  local_8._0_1_ = 5;
                  puVar8 = FUN_00402b10(local_2b70,(uint *)(pCVar12 + 0x48));
                  *puVar8 = (uint)pCVar24;
                  FUN_00402a40(&(pCVar24->Creature_data).offset_0xc,(undefined4 *)(pCVar12 + 0x10));
                  puVar22 = (undefined4 *)FUN_004013d0(pCVar24 + 2,2);
                  *puVar22 = *(undefined4 *)(pCVar12 + 0x54);
                  pCVar24[0x14].vftablePtr = *(Creature_vftable **)(pCVar12 + 0x34);
                  *(undefined1 *)&pCVar24[4].Creature_data.offset_0xc = pCVar12[0x28].field_0x0;
                  pCVar24[5].vftablePtr = *(Creature_vftable **)(pCVar12 + 0x2c);
                  *(undefined1 *)&pCVar24[0x10].vftablePtr = pCVar12[0x30].field_0x0;
                  *(CRefTime *)((int)&pCVar24[0x10].vftablePtr + 1) = pCVar12[0x31];
                  *(undefined1 *)&pCVar24[0x15].Creature_data = pCVar12[0x58].field_0x0;
                  FUN_00407730(pCVar24 + 6,pCVar12 + 0x74);
                  FUN_0041de30(&pCVar24[0x26].Creature_data.offset_0x4,pCVar12 + 0x120);
                  *(undefined8 *)&pCVar24[0x12].Creature_data.offset_0xc =
                       *(undefined8 *)(pCVar12 + 0xf58);
                  uVar21 = *(undefined4 *)(pCVar12 + 0xf64);
                  *(undefined4 *)&pCVar24[0x13].Creature_data =
                       *(undefined4 *)&pCVar12[0xf60].field_0x0;
                  pCVar24[0x13].Creature_data.offset_0x4 = uVar21;
                  pCVar24[0x13].Creature_data.offset_0x8 = *(undefined4 *)&pCVar12[0xf68].field_0x0;
                  FUN_00402a40(&pCVar24[0x16].Creature_data.offset_0x4,
                               (undefined4 *)(pCVar12 + 0x10));
                  FUN_00405570(&(pCVar24->Creature_data).offset_0xc,8,pCVar12[0x50].field_0x0);
                  iVar7 = *local_2b40;
                  uVar17 = local_2b68[0];
                  puVar22 = (undefined4 *)FUN_004013d0((void *)(iVar7 + 0x60),1);
                  uVar21 = *puVar22;
                  uVar39 = (undefined1)uVar21;
                  uVar48 = (undefined1)((uint)uVar21 >> 8);
                  uVar50 = (undefined2)((uint)uVar21 >> 0x10);
                  puVar22 = (undefined4 *)FUN_004013d0((void *)(iVar7 + 0x60),0);
                  puVar22 = FUN_00402990(local_11f4,*puVar22,
                                         CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),uVar17);
                  pCVar24 = local_2b60;
                  FUN_00401060(&local_2b60[0x15].Creature_data.offset_0x8,puVar22);
                  *(CRefTime *)&pCVar24[0x17].Creature_data.offset_0x8 = pCVar12[0x5c];
                  FUN_00401060(&pCVar24[0x17].Creature_data.offset_0xc,
                               (undefined4 *)(pCVar12 + 0x60));
                  pCVar24[0x15].Creature_data.offset_0x4 = *(undefined4 *)&pCVar12[0x10c8].field_0x0
                  ;
                  pCVar27 = pCVar12 + 0x10cc;
                  do {
                    CVar1 = *pCVar27;
                    (pCVar27 + (0x1168 - (int)(pCVar12 + 0x10cc)))[(int)&pCVar24->vftablePtr] =
                         CVar1;
                    pCVar27 = pCVar27 + 1;
                  } while (CVar1 != (CRefTime)0x0);
                  local_2b44 = (RandomWalkBehavior *)(pCVar12 + 0x10a0);
                  FUN_0052ea70(pCVar24 + 0x107,(int *)local_2b44);
                  pCVar24[0x175].Creature_data.offset_0x4 = *(undefined4 *)&pCVar12[8].field_0x0;
                  pCVar24[0x175].Creature_data.offset_0x8 =
                       *(undefined4 *)&pCVar12[0x10e0].field_0x0;
                  pCVar24[0x175].Creature_data.offset_0xc = *(undefined4 *)(pCVar12 + 0x10e4);
                  *(undefined1 *)&pCVar24[0x176].vftablePtr = pCVar12[0x10e8].field_0x0;
                  local_2b5c = (SequentialBehavior_vftable *)0x0;
                  iVar7 = FUN_00428ee0((int *)(pCVar12 + 0x10a0));
                  pCVar3 = local_2b60;
                  pSVar31 = local_2b5c;
                  if (0 < iVar7) {
                    do {
                      iVar7 = FUN_00428930(local_2b44,(int)pSVar31);
                      iVar15 = FUN_0041cae0((int)local_2b1c);
                      if (*(int *)(iVar7 + 0x18) <= iVar15) {
                        pCVar3[0x106].Creature_data.offset_0x8 = local_2b5c;
                      }
                      pSVar31 = (SequentialBehavior_vftable *)((int)&local_2b5c->vfunction1 + 1);
                      local_2b5c = pSVar31;
                      iVar7 = FUN_00428ee0((int *)local_2b44);
                      pCVar24 = local_2b60;
                      pCVar12 = local_2b98;
                    } while ((int)pSVar31 < iVar7);
                  }
                  pCVar24[0x106].Creature_data.offset_0xc = pCVar24[0x106].Creature_data.offset_0x8;
                  if (*(int *)(pCVar12 + 0x109c) == 0) {
                    if (*(int *)&pCVar12[0x28].field_0x0 != 6) {
                      local_2b48 = operator_new(0xc);
                      local_8._0_1_ = 0xc;
                      if (local_2b48 == (CombatBehavior *)0x0) {
                        local_2b5c = (SequentialBehavior_vftable *)0x0;
                      }
                      else {
                        local_2b5c = (SequentialBehavior_vftable *)
                                     cube::SequentialBehavior::SequentialBehavior
                                               ((SequentialBehavior *)local_2b48);
                      }
                      local_8._0_1_ = 5;
                      local_2b48 = operator_new(0x14);
                      local_8._0_1_ = 0xd;
                      if (local_2b48 == (CombatBehavior *)0x0) {
                        local_2b3c = (CombatBehavior *)0x0;
                      }
                      else {
                        local_2b3c = cube::CombatBehavior::CombatBehavior(local_2b48,0x41a00000);
                      }
                      local_8._0_1_ = 5;
                      FUN_004d6620((SequentialBehavior_data *)&local_2b5c->clone,&local_2b3c);
                      local_2b48 = operator_new(4);
                      local_8._0_1_ = 0xe;
                      if (local_2b48 == (CombatBehavior *)0x0) {
                        local_2b3c = (CombatBehavior *)0x0;
                      }
                      else {
                        local_2b3c = (CombatBehavior *)
                                     cube::LookAtPlayerBehavior::LookAtPlayerBehavior
                                               ((LookAtPlayerBehavior *)local_2b48);
                      }
                      local_8._0_1_ = 5;
                      FUN_004d6620((SequentialBehavior_data *)&local_2b5c->clone,&local_2b3c);
                      pSVar31 = local_2b5c;
                      if (((((*(char *)&pCVar24[4].Creature_data.offset_0xc != '\x06') &&
                            (cVar6 = *(char *)&pCVar24[0x10].vftablePtr, cVar6 != -0x7c)) &&
                           ((cVar6 != -0x7d && ((cVar6 != -0x80 && (cVar6 != -0x7e)))))) &&
                          (cVar6 != -0x7f)) &&
                         ((((cVar6 != -0x7b && (cVar6 != -0x7a)) && (cVar6 != -0x79)) &&
                          ((pCVar24[6].Creature_data.field_0x2 & 0x40) == 0)))) {
                        local_2b48 = operator_new(8);
                        local_8._0_1_ = 0xf;
                        if (local_2b48 == (CombatBehavior *)0x0) {
                          local_2b3c = (CombatBehavior *)0x0;
                        }
                        else {
                          local_2b3c = (CombatBehavior *)
                                       cube::RandomWalkBehavior::RandomWalkBehavior
                                                 ((RandomWalkBehavior *)local_2b48);
                        }
                        local_8._0_1_ = 5;
                        FUN_004d6620((SequentialBehavior_data *)&local_2b5c->clone,&local_2b3c);
                        pSVar31 = local_2b5c;
                      }
                      goto LAB_00536130;
                    }
                  }
                  else {
                    pSVar31 = (SequentialBehavior_vftable *)
                              (**(code **)(**(int **)(pCVar12 + 0x109c) + 4))();
LAB_00536130:
                    pCVar24[0xfe].Creature_data.offset_0x8 = pSVar31;
                  }
                  FUN_004dab90(&pCVar24[0xfe].Creature_data.offset_0xc,(int *)(pCVar12 + 0x10ac));
                  pCVar24[0xff].Creature_data.offset_0x4 = *(undefined4 *)&pCVar12[0x10b8].field_0x0
                  ;
                  FUN_004dab90(&pCVar24[0xff].Creature_data.offset_0x8,(int *)(pCVar12 + 0x10bc));
                  FUN_0041df20(&pCVar24[0xe4].Creature_data.offset_0x8,(int *)(pCVar12 + 0xf6c));
                  fVar43 = FUN_0040fda0((int)pCVar24);
                  *(float *)&pCVar24[0x12].Creature_data = (float)fVar43;
                  if ((*(ushort *)(pCVar12 + 0x7a) & 0x200) != 0) {
                    FUN_00401610(&pCVar24[6].Creature_data.offset_0x4,2.0);
                  }
                  FUN_004013d0(&pCVar24[6].Creature_data.offset_0x4,2);
                  FUN_00402a10(&local_88);
                  puVar53 = &local_88;
                  pvVar18 = (void *)FUN_004e2320(&(pCVar24->Creature_data).offset_0xc,2);
                  FUN_00402e60(pvVar18,(uint *)puVar53);
                  piVar9 = local_2bac;
                }
              }
            }
LAB_005361f3:
            local_2b68[0] = local_2b68[0] + 1;
            piVar19 = (int *)(*local_2b40 + 0x18);
            iVar7 = FUN_0041fff0(piVar19);
          } while ((int)local_2b68[0] < iVar7);
        }
        FUN_00407a30(local_2b7c,(int *)&local_2b90);
        piVar9 = (int *)FUN_00530550(&local_2bf4,local_2de4);
        bVar4 = FUN_0042c6f0(local_2b7c,piVar9);
        pvVar18 = local_2b1c;
      } while (bVar4);
    }
  }
  FUN_00428070((void *)((int)pvVar18 + 4),&local_2b6c);
  piVar9 = (int *)FUN_00530550((void *)((int)pvVar18 + 4),&local_2d38);
  bVar4 = FUN_0042c6f0(&local_2b6c,piVar9);
  if (bVar4) {
    FUN_00536290();
    return;
  }
  pvVar18 = (void *)((int)local_2b1c + 0xc);
  local_2cbc = pvVar18;
  FUN_00428070(pvVar18,&local_2b44);
  piVar9 = (int *)FUN_00530550(pvVar18,&local_2d40);
  bVar4 = FUN_0042c6f0(&local_2b44,piVar9);
  if (bVar4) {
    do {
      FUN_00407a30(&local_2b44,&local_2bc4);
      piVar9 = (int *)FUN_00530550(pvVar18,&local_2d40);
      bVar4 = FUN_0042c6f0(&local_2b44,piVar9);
    } while (bVar4);
  }
  FUN_00428070(pvVar18,&local_2bb0);
  piVar9 = (int *)FUN_00530550(pvVar18,&local_2d58);
  bVar4 = FUN_0042c6f0(&local_2bb0,piVar9);
  if (bVar4) {
    do {
      iVar7 = FUN_00402bc0(&local_2bb0);
      piVar9 = (int *)(iVar7 + 8);
      if (*piVar9 != 0) {
        FUN_00402a40(local_19c,(undefined4 *)(*piVar9 + 0x80));
        iVar7 = *piVar9;
        local_2b44 = *(RandomWalkBehavior **)(iVar7 + 0x98);
        if (*(char *)((int)local_2b1c + 0xb4) != '\0') goto LAB_005463ff;
        cVar6 = *(char *)(iVar7 + 0x70);
        if (cVar6 == '\x01') {
          puVar8 = FUN_00402c50((void *)(iVar7 + 0x38),local_2140,(uint *)(iVar7 + 0x10));
          FUN_00402550(local_44,(longlong *)puVar8);
          fVar43 = FUN_004021b0(local_44);
          local_2b48 = (CombatBehavior *)(float)fVar43;
          if (0.001 <= (float)local_2b48) {
            if (100.0 < (float)local_2b48) {
              FUN_00401fb0(local_44);
              FUN_00401610(local_44,10.0);
            }
            pfVar25 = local_44;
LAB_00545db4:
            FUN_00401060((void *)(*piVar9 + 0x28),pfVar25);
          }
          else {
            puVar22 = FUN_00401080(local_1560,0,0,0);
            FUN_00401060((void *)(*piVar9 + 0x28),puVar22);
            *(undefined1 *)(*piVar9 + 0x70) = 2;
          }
LAB_00545dbf:
          pfVar25 = (float *)(*piVar9 + 0x34);
          fVar43 = FUN_005306d0(*pfVar25,*(float *)(*piVar9 + 0x50),1.0);
          fVar44 = 0.005;
LAB_005463e3:
          local_2b48 = (CombatBehavior *)(float)fVar43;
          FUN_0052e710(pfVar25,(float *)&local_2b48,local_2b28,fVar44);
        }
        else {
          if (cVar6 == '\0') {
            uVar21 = 0x41a00000;
            local_2b90 = (void *)((-*(float *)(iVar7 + 0x50) * 3.1415927) / 180.0);
            fVar43 = FUN_004024a0((float)local_2b90);
            local_2b48 = (CombatBehavior *)(float)fVar43;
            fVar44 = (float)local_2b48 * -50.0;
            uVar39 = SUB41(fVar44,0);
            uVar48 = (undefined1)((uint)fVar44 >> 8);
            uVar50 = (undefined2)((uint)fVar44 >> 0x10);
            fVar43 = FUN_004024c0((float)local_2b90);
            local_2b48 = (CombatBehavior *)(float)fVar43;
            FUN_00401080(local_1578,(float)local_2b48 * -50.0,
                         CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),uVar21);
            FUN_00402510((int)local_348);
            puVar8 = (uint *)(*piVar9 + 0x10);
            uVar39 = SUB41(local_2170,0);
            uVar48 = (undefined1)((uint)local_2170 >> 8);
            uVar50 = (undefined2)((uint)local_2170 >> 0x10);
            puVar16 = FUN_00402cb0((void *)(*piVar9 + 0x38),local_21a0,local_348);
            puVar8 = FUN_00402c50(puVar16,(uint *)CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),puVar8);
            FUN_00402550(local_5c,(longlong *)puVar8);
            fVar43 = FUN_004021b0(local_5c);
            local_2b48 = (CombatBehavior *)(float)fVar43;
            if (0.001 <= (float)local_2b48) {
              FUN_00401fb0(local_5c);
              FUN_00401610(local_5c,10.0);
              pfVar25 = local_5c;
              goto LAB_00545db4;
            }
            puVar22 = FUN_00401080(local_1590,0,0,0);
            FUN_00401060((void *)(*piVar9 + 0x28),puVar22);
            *(undefined1 *)(*piVar9 + 0x70) = 1;
            goto LAB_00545dbf;
          }
          if (cVar6 == '\x02') {
            uVar21 = 0x41a00000;
            local_2b90 = (void *)((-*(float *)(iVar7 + 0x50) * 3.1415927) / 180.0);
            fVar43 = FUN_004024a0((float)local_2b90);
            local_2b48 = (CombatBehavior *)(float)fVar43;
            fVar44 = (float)local_2b48 * 50.0;
            uVar39 = SUB41(fVar44,0);
            uVar48 = (undefined1)((uint)fVar44 >> 8);
            uVar50 = (undefined2)((uint)fVar44 >> 0x10);
            fVar43 = FUN_004024c0((float)local_2b90);
            local_2b48 = (CombatBehavior *)(float)fVar43;
            FUN_00401080(local_15a8,(float)local_2b48 * 50.0,
                         CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),uVar21);
            FUN_00402510((int)local_36c);
            puVar8 = (uint *)(*piVar9 + 0x10);
            uVar39 = SUB41(local_21d0,0);
            uVar48 = (undefined1)((uint)local_21d0 >> 8);
            uVar50 = (undefined2)((uint)local_21d0 >> 0x10);
            puVar16 = FUN_00402cb0((void *)(*piVar9 + 0x38),local_2200,local_36c);
            puVar8 = FUN_00402c50(puVar16,(uint *)CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),puVar8);
            FUN_00402550(&local_d8,(longlong *)puVar8);
            fVar43 = FUN_004021b0(&local_d8);
            local_2b48 = (CombatBehavior *)(float)fVar43;
            if (0.001 <= (float)local_2b48) {
              FUN_00401fb0(&local_d8);
              FUN_00401610(&local_d8,10.0);
              pfVar25 = &local_d8;
              goto LAB_00545db4;
            }
            puVar22 = FUN_00401080(local_15c0,0,0,0);
            FUN_00401060((void *)(*piVar9 + 0x28),puVar22);
            *(undefined1 *)(*piVar9 + 0x70) = 3;
            goto LAB_00545dbf;
          }
          if (cVar6 == '\x03') {
            puVar8 = FUN_00402c50((void *)(iVar7 + 0x58),local_2230,(uint *)(iVar7 + 0x10));
            FUN_00402550(local_50,(longlong *)puVar8);
            local_2cc0 = (undefined4 *)FUN_004013d0(local_50,2);
            *local_2cc0 = 0;
            fVar43 = FUN_004021b0(local_50);
            local_2b48 = (CombatBehavior *)(float)fVar43;
            if (0.001 <= (float)local_2b48) {
              if (900.0 < (float)local_2b48) {
                FUN_00401fb0(local_50);
                FUN_00401610(local_50,30.0);
              }
              fVar44 = 0.001;
              uVar47 = (undefined1)local_2b28;
              uVar49 = (undefined1)((uint)local_2b28 >> 8);
              uVar51 = (undefined2)((uint)local_2b28 >> 0x10);
              uVar39 = uVar47;
              uVar48 = uVar49;
              uVar50 = uVar51;
              pfVar25 = (float *)FUN_004013d0(local_50,0);
              pfVar36 = (float *)FUN_004013d0((void *)(*piVar9 + 0x28),0);
              FUN_0052e710(pfVar36,pfVar25,CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),fVar44);
              fVar44 = 0.001;
              pfVar25 = (float *)FUN_004013d0(local_50,1);
              pfVar36 = (float *)FUN_004013d0((void *)(*piVar9 + 0x28),1);
              FUN_0052e710(pfVar36,pfVar25,CONCAT22(uVar51,CONCAT11(uVar49,uVar47)),fVar44);
            }
            else {
              puVar22 = FUN_00401080(local_15d8,0,0,0);
              FUN_00401060((void *)(*piVar9 + 0x28),puVar22);
              *(undefined1 *)(*piVar9 + 0x70) = 0;
            }
            pvVar18 = (void *)(*piVar9 + 0x10);
            iVar7 = 0;
            local_2b90 = pvVar18;
            pCVar12 = (CRefTime *)FUN_004e2320(pvVar18,1);
            lVar13 = CRefTime::Millisecs(pCVar12);
            uVar39 = (undefined1)lVar13;
            uVar48 = (undefined1)((uint)lVar13 >> 8);
            uVar50 = (undefined2)((uint)lVar13 >> 0x10);
            pCVar12 = (CRefTime *)FUN_004e2320(pvVar18,0);
            uVar17 = CRefTime::Millisecs(pCVar12);
            local_2b48 = (CombatBehavior *)
                         FUN_00406100(local_2b1c,uVar17,CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),
                                      iVar7);
            iVar7 = 0;
            if (local_2b48 != (CombatBehavior *)0x0) {
              iVar7 = FUN_004061d0((int)local_2b48);
              iVar15 = FUN_00406250((int)local_2b48);
              iVar7 = iVar7 + iVar15;
              if (iVar7 < 0) {
                iVar7 = 0;
              }
            }
            local_2b48 = (CombatBehavior *)FUN_004e2320(local_2b90,2);
            iVar15 = FUN_00402d10(local_2b48,iVar7 + 100);
            if ((char)iVar15 == '\0') {
              iVar7 = FUN_00405750(local_2b48,iVar7 + 0x96);
              if ((char)iVar7 == '\0') {
                local_2ca4[0] = (Creature *)0x0;
                ppCVar32 = local_2ca4;
              }
              else {
                local_2c1c = (Creature *)0xc1200000;
                ppCVar32 = &local_2c1c;
              }
            }
            else {
              local_2bd0[0] = (Creature *)0x41200000;
              ppCVar32 = local_2bd0;
            }
            fVar44 = 0.001;
            uVar39 = (undefined1)local_2b28;
            uVar48 = (undefined1)((uint)local_2b28 >> 8);
            uVar50 = (undefined2)((uint)local_2b28 >> 0x10);
            pfVar25 = (float *)FUN_004013d0((void *)(*piVar9 + 0x28),2);
            FUN_0052e710(pfVar25,(float *)ppCVar32,CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),fVar44);
            FUN_00401060(local_50,(undefined4 *)(*piVar9 + 0x28));
            *local_2cc0 = 0;
            fVar43 = FUN_004021b0(local_50);
            local_2b48 = (CombatBehavior *)(float)fVar43;
            if ((float)local_2b48 <= 0.0) goto LAB_005463ff;
            FUN_00401fb0(local_50);
            local_2b3c = (CombatBehavior *)FUN_004013d0(local_50,1);
            if (1.0 < (float)local_2b3c->vftablePtr) {
              local_2b3c->vftablePtr = (CombatBehavior_vftable *)0x3f800000;
            }
            if ((float)local_2b3c->vftablePtr <= -1.0 && (float)local_2b3c->vftablePtr != -1.0) {
              local_2b3c->vftablePtr = (CombatBehavior_vftable *)0xbf800000;
            }
            pfVar36 = (float *)FUN_004013d0(local_50,0);
            pfVar25 = (float *)(*piVar9 + 0x34);
            fVar44 = 1.0;
            if (*pfVar36 <= 0.0) {
              fVar43 = FUN_00548b00((float)local_2b3c->vftablePtr);
              local_2b48 = (CombatBehavior *)(float)fVar43;
              pCVar42 = local_2b48;
            }
            else {
              fVar43 = FUN_00548b00((float)local_2b3c->vftablePtr);
              local_2b48 = (CombatBehavior *)(float)fVar43;
              pCVar42 = (CombatBehavior *)-(float)local_2b48;
            }
            fVar43 = FUN_005306d0(*pfVar25,((float)pCVar42 / 3.1415927) * 180.0,fVar44);
            fVar44 = 0.001;
            goto LAB_005463e3;
          }
        }
LAB_005463ff:
        FUN_004e1520(local_15f0,local_2ba4,(float *)(*piVar9 + 0x28));
        FUN_00402510((int)local_45c);
        FUN_00402e30((void *)(*piVar9 + 0x10),local_45c);
        iVar15 = 0x3c23d70a;
        uVar39 = (undefined1)local_2b28;
        uVar48 = (undefined1)((uint)local_2b28 >> 8);
        uVar50 = (undefined2)((uint)local_2b28 >> 0x10);
        local_2b20 = (CRefTime *)0x0;
        local_2cc4 = 1.0;
        FUN_0052e710((float *)&local_2b20,&local_2cc4,local_2b28,0.01);
        iVar7 = *piVar9;
        FUN_00402a10((ulonglong *)&stack0xffffc89c);
        puVar22 = local_2260;
        puVar8 = FUN_00402c50((void *)(iVar7 + 0x10),local_2290,(uint *)(iVar7 + 0x80));
        puVar8 = FUN_00402bd0(puVar8,puVar22,CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),iVar15);
        FUN_00402e30((void *)(*piVar9 + 0x80),puVar8);
        pfVar25 = (float *)(*piVar9 + 0x98);
        fVar43 = FUN_005306d0(*pfVar25,*(float *)(*piVar9 + 0x34),1.0);
        local_2b48 = (CombatBehavior *)(float)fVar43;
        in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x54650c;
        FUN_0052e710(pfVar25,(float *)&local_2b48,local_2b28,0.01);
        FUN_004c8280(local_2bfc);
        iVar7 = *piVar9;
        local_8 = CONCAT31(local_8._1_3_,0x19);
        FUN_00428070((void *)(iVar7 + 0x78),&local_2b24);
        piVar19 = (int *)FUN_00530550((void *)(iVar7 + 0x78),&local_2d48);
        bVar4 = FUN_0042c6f0(&local_2b24,piVar19);
        if (bVar4) {
          do {
            puVar8 = (uint *)FUN_00402bc0((int *)&local_2b24);
            pvVar18 = (void *)FUN_00405420(local_2b1c,puVar8);
            local_2b90 = pvVar18;
            if (pvVar18 == (void *)0x0) {
LAB_0054670d:
              FUN_004d6620(local_2bfc,&local_2b24);
            }
            else {
              puVar8 = FUN_00402c50((void *)((int)pvVar18 + 0x10),local_22c0,
                                    (uint *)(*piVar9 + 0x10));
              pfVar25 = FUN_00402550(local_1608,(longlong *)puVar8);
              fVar43 = FUN_004021b0(pfVar25);
              local_2b48 = (CombatBehavior *)(float)fVar43;
              if (4096.0 < (float)local_2b48) goto LAB_0054670d;
              FUN_00401cd0(local_f04);
              FUN_00402030(local_f04,*(float *)(*piVar9 + 0x98) - (float)local_2b44);
              puVar8 = FUN_00402c50((void *)((int)pvVar18 + 0x1350),local_22f0,local_19c);
              FUN_00402550(local_2a0,(longlong *)puVar8);
              FUN_004021f0(local_f04,local_1620,local_2a0);
              FUN_00402510((int)local_4a4);
              puVar8 = FUN_00402cb0((void *)(*piVar9 + 0x80),local_2320,local_4a4);
              FUN_00402a40((void *)((int)pvVar18 + 0x1350),puVar8);
              pfVar25 = (float *)FUN_004013d0((void *)((int)pvVar18 + 0x1374),2);
              *pfVar25 = (*(float *)(*piVar9 + 0x98) - (float)local_2b44) + *pfVar25;
              puVar8 = FUN_00402c50((void *)((int)pvVar18 + 0x10),local_2350,local_19c);
              FUN_00402550(local_294,(longlong *)puVar8);
              FUN_004021f0(local_f04,local_10d4,local_294);
              FUN_00402510((int)local_48c);
              puVar8 = FUN_00402cb0((void *)(*piVar9 + 0x80),local_2380,local_48c);
              FUN_00402a40((void *)((int)pvVar18 + 0x10),puVar8);
              pfVar25 = (float *)FUN_004013d0((void *)((int)pvVar18 + 0x28),2);
              *pfVar25 = (*(float *)(*piVar9 + 0x98) - (float)local_2b44) + *pfVar25;
            }
            FUN_00407a30(&local_2b24,local_2c48);
            piVar19 = (int *)FUN_00530550((void *)(*piVar9 + 0x78),&local_2d48);
            bVar4 = FUN_0042c6f0(&local_2b24,piVar19);
          } while (bVar4);
        }
        FUN_00428070(local_2bfc,&local_2b6c);
        piVar19 = (int *)FUN_00530550(local_2bfc,&local_2d50);
        bVar4 = FUN_0042c6f0(&local_2b6c,piVar19);
        if (bVar4) {
          do {
            puVar22 = (undefined4 *)FUN_0052eb90((int *)&local_2b6c);
            FUN_0040a1d0((void *)(*piVar9 + 0x78),local_2ce4,(int *)*puVar22);
            FUN_0052ebf0(&local_2b6c,&local_2bc4);
            piVar19 = (int *)FUN_00530550(local_2bfc,&local_2d50);
            bVar4 = FUN_0042c6f0(&local_2b6c,piVar19);
          } while (bVar4);
        }
        local_8._0_1_ = 5;
        FUN_00423710(local_2bfc);
        pvVar18 = local_2cbc;
      }
      FUN_00407a30(&local_2bb0,&local_2c20);
      piVar9 = (int *)FUN_00530550(pvVar18,&local_2d58);
      bVar4 = FUN_0042c6f0(&local_2bb0,piVar9);
    } while (bVar4);
  }
  FUN_004c8280(&local_2c24);
  pvVar18 = (void *)((int)local_2b1c + 0x14);
  local_8 = CONCAT31(local_8._1_3_,0x1a);
  FUN_00428070(pvVar18,&local_2b54);
  piVar9 = (int *)FUN_00530550(pvVar18,&local_2d70);
  bVar4 = FUN_0042c6f0(&local_2b54,piVar9);
joined_r0x00546872:
  if (!bVar4) {
    FUN_00428070(&local_2c24,&local_2b6c);
    piVar9 = (int *)FUN_00530550(&local_2c24,local_2d80);
    bVar4 = FUN_0042c6f0(&local_2b6c,piVar9);
    if (bVar4) {
      do {
        puVar22 = (undefined4 *)FUN_0052eb90((int *)&local_2b6c);
        FUN_005305b0(pvVar18,&local_2bc4,(int *)*puVar22);
        FUN_0052ebf0(&local_2b6c,local_2c48);
        piVar9 = (int *)FUN_00530550(&local_2c24,local_2d80);
        bVar4 = FUN_0042c6f0(&local_2b6c,piVar9);
      } while (bVar4);
    }
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_00423710(&local_2c24);
    FUN_00428070(local_2b70,&local_2b6c);
    piVar9 = (int *)FUN_00530550(local_2b70,local_2d88);
    bVar4 = FUN_0042c6f0(&local_2b6c,piVar9);
    if (bVar4) {
      do {
        iVar15 = FUN_00402bc0((int *)&local_2b6c);
        iVar7 = *(int *)(iVar15 + 8);
        if (iVar7 != 0) {
          puVar8 = (uint *)(iVar7 + 0x11d0);
          uVar17 = FUN_00405420(local_2b1c,puVar8);
          if ((uVar17 != 0) &&
             (uVar17 = FUN_00405420(local_2b1c,puVar8), *(float *)(uVar17 + 0x16c) <= 0.0)) {
            *puVar8 = 0;
            *(undefined4 *)(iVar7 + 0x11d4) = 0;
          }
          pCVar12 = *(CRefTime **)(iVar15 + 8);
          local_2b98 = pCVar12;
          if (pCVar12[0x60].field_0x0 == '\x05') {
            pCVar27 = pCVar12 + 0x198;
            uVar17 = FUN_00405420(local_2b1c,(uint *)pCVar27);
            if ((uVar17 != 0) &&
               (uVar17 = FUN_00405420(local_2b1c,(uint *)pCVar27), *(char *)(uVar17 + 0x68) == 'j'))
            {
              pRVar20 = (RandomWalkBehavior *)FUN_00405420(local_2b1c,(uint *)pCVar27);
              local_2b44 = pRVar20;
              pfVar25 = (float *)FUN_004013d0(pCVar12 + 0x80,2);
              pfVar36 = (float *)FUN_004013d0(pRVar20 + 0x10,2);
              FUN_00401080(local_1758,0,0,(*pfVar25 * 0.5 - *pfVar36 * 0.5) + 0.01);
              FUN_00402510((int)local_348);
              puVar8 = FUN_00402cb0(local_2b44 + 0x26a,local_2560,local_348);
              FUN_00402a40(local_2b98 + 0x1350,puVar8);
              FUN_00401060(local_2b98 + 0x1374,&local_2b44[0x26e].RandomWalkBehavior_data);
              FUN_00401080(local_1770,0,0,(*pfVar25 * 0.5 - *pfVar36 * 0.5) + 0.01);
              FUN_00402510((int)local_36c);
              pRVar20 = local_2b44;
              puVar8 = FUN_00402cb0(local_2b44 + 2,local_2590,local_36c);
              pCVar12 = local_2b98;
              FUN_00402a40(local_2b98 + 0x10,puVar8);
              FUN_00401060(pCVar12 + 0x28,&pRVar20[5].vftablePtr);
              *(RandomWalkBehavior_vftable **)&pCVar12[0x1180].field_0x0 = pRVar20[0x230].vftablePtr
              ;
              *(RandomWalkBehavior_vftable **)&pCVar12[0x1188].field_0x0 = pRVar20[0x231].vftablePtr
              ;
              *(undefined4 *)(pCVar12 + 0x118c) = pRVar20[0x231].RandomWalkBehavior_data.offset_0x0;
              puVar22 = FUN_00401080(local_1788,0,0,0);
              FUN_00401060(pCVar12 + 0x34,puVar22);
              puVar22 = FUN_00401080(local_17a0,0,0,0);
              FUN_00401060(pCVar12 + 0x40,puVar22);
            }
          }
        }
        FUN_00407a30(&local_2b6c,&local_2bc4);
        piVar9 = (int *)FUN_00530550(local_2b70,local_2d88);
        bVar4 = FUN_0042c6f0(&local_2b6c,piVar9);
      } while (bVar4);
    }
    FUN_00428070(&local_2bec,&local_2b6c);
    piVar9 = (int *)FUN_00530550(&local_2bec,local_2d90);
    bVar4 = FUN_0042c6f0(&local_2b6c,piVar9);
    piVar9 = local_2b2c;
    if (bVar4) {
      do {
        piVar19 = (int *)FUN_00402bc0((int *)&local_2b6c);
        *(undefined1 *)(*piVar19 + 0x75) = 1;
        puVar22 = FUN_00422c00(local_e8c,*piVar19);
        local_8._0_1_ = 0x1b;
        FUN_00428450(piVar9 + 10,puVar22);
        local_8 = CONCAT31(local_8._1_3_,5);
        FUN_00423770((int)local_e8c);
        FUN_00407a30(&local_2b6c,&local_2bc4);
        piVar19 = (int *)FUN_00530550(&local_2bec,local_2d90);
        bVar4 = FUN_0042c6f0(&local_2b6c,piVar19);
      } while (bVar4);
    }
    piVar19 = local_2b2c;
    piVar9 = local_2b2c + 0xc;
    FUN_00428070(piVar9,&local_2b6c);
    piVar26 = (int *)FUN_00530550(piVar9,local_2d98);
    bVar4 = FUN_0042c6f0(&local_2b6c,piVar26);
    if (bVar4) {
      do {
        pvVar18 = (void *)FUN_0052eb90((int *)&local_2b6c);
        puVar8 = (uint *)FUN_004013d0(pvVar18,1);
        uVar17 = *puVar8;
        puVar8 = (uint *)FUN_004013d0(pvVar18,0);
        iVar7 = FUN_00406290(local_2b1c,*puVar8,uVar17);
        if (iVar7 != 0) {
          *(undefined1 *)(iVar7 + 0x76) = 1;
        }
        FUN_0052ebf0(&local_2b6c,&local_2bc4);
        piVar19 = (int *)FUN_00530550(piVar9,local_2d98);
        bVar4 = FUN_0042c6f0(&local_2b6c,piVar19);
        piVar19 = local_2b2c;
      } while (bVar4);
    }
    FUN_00428070(local_2cd8,&local_2b6c);
    piVar9 = (int *)FUN_00530550(local_2cd8,&local_2db8);
    bVar4 = FUN_0042c6f0(&local_2b6c,piVar9);
    if (bVar4) {
      do {
        piVar9 = (int *)FUN_00402bc0((int *)&local_2b6c);
        puVar22 = FUN_0052e950(local_e54,*piVar9);
        local_8._0_1_ = 0x1c;
        FUN_005307f0(piVar19 + 0xe,puVar22);
        local_8 = CONCAT31(local_8._1_3_,5);
        FUN_00423770((int)local_e54);
        FUN_00407a30(&local_2b6c,&local_2bc4);
        piVar9 = (int *)FUN_00530550(local_2cd8,&local_2db8);
        bVar4 = FUN_0042c6f0(&local_2b6c,piVar9);
      } while (bVar4);
    }
    piVar19 = local_2b2c + 6;
    FUN_00428070(piVar19,&local_2b24);
    piVar9 = (int *)FUN_00530550(piVar19,&local_2dc0);
    bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
    if (bVar4) {
      do {
        pvVar18 = (void *)FUN_0052eb90((int *)&local_2b24);
        piVar9 = (int *)FUN_004013d0(pvVar18,1);
        uVar17 = (int)(*piVar9 + (*piVar9 >> 0x1f & 0xffU)) >> 8;
        piVar9 = (int *)FUN_004013d0(pvVar18,0);
        iVar7 = *piVar9 + (*piVar9 >> 0x1f & 0xffU);
        iVar7 = FUN_00406290(local_2b1c,
                             CONCAT22((short)(char)((uint)iVar7 >> 0x18),(short)((uint)iVar7 >> 8)),
                             uVar17);
        if (iVar7 != 0) {
          puVar22 = (undefined4 *)FUN_0052eb90((int *)&local_2b24);
          FUN_0041f4d0((void *)(iVar7 + 0x68),puVar22);
        }
        FUN_0052ebf0(&local_2b24,&local_2bc4);
        piVar9 = (int *)FUN_00530550(piVar19,&local_2dc0);
        bVar4 = FUN_0042c6f0(&local_2b24,piVar9);
      } while (bVar4);
    }
    FUN_004f7710(local_2cd8);
    FUN_004f7710(&local_2bec.vfunction1);
    FUN_004f7710(&local_2bf4);
    FUN_00423710(&local_2bd8);
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  puVar8 = (uint *)FUN_0052eb90(&local_2b54);
  if (puVar8[0x18] != 1) {
    if (puVar8[0x18] != 2) {
      pfVar25 = (float *)FUN_004013d0(puVar8 + 0xf,2);
      *pfVar25 = *pfVar25 - local_2ba4 * 30.0 * 0.25;
      goto LAB_00546a5d;
    }
    uVar39 = 0xae;
    uVar48 = 0x68;
    uVar50 = 0x54;
    puVar16 = puVar8;
    pvVar18 = (void *)FUN_00405420(local_2b1c,puVar8);
    local_2b90 = pvVar18;
    if ((pvVar18 != (void *)0x0) && (uVar17 = puVar8[0x1a], (int)uVar17 < 0x4b1)) {
      if ((int)uVar17 < 0x44d) {
        if ((int)uVar17 < 0x321) {
          FUN_00402510((int)local_348);
          pfVar25 = local_1680;
          fVar54 = 0.05;
          uVar39 = (undefined1)local_2b28;
          uVar48 = (undefined1)((uint)local_2b28 >> 8);
          uVar50 = (undefined2)((uint)local_2b28 >> 0x10);
          fVar44 = 5.0;
          puVar16 = puVar8 + 6;
          puVar46 = local_24a0;
          puVar33 = FUN_00402cb0((void *)((int)pvVar18 + 0x10),local_24d0,local_348);
          puVar16 = FUN_00402c50(puVar33,puVar46,puVar16);
          pfVar36 = FUN_00402550(local_1698,(longlong *)puVar16);
          puVar35 = (undefined8 *)FUN_004079f0(pfVar36,pfVar25,fVar44);
          in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x546a2a;
          FUN_0052e7c0((float *)(puVar8 + 0xf),puVar35,CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),
                       fVar54);
        }
        else {
          fVar44 = 10.0;
          uVar39 = SUB41(local_1650,0);
          uVar48 = (undefined1)((uint)local_1650 >> 8);
          uVar50 = (undefined2)((uint)local_1650 >> 0x10);
          in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x546995;
          puVar16 = FUN_00402c50((void *)((int)pvVar18 + 0x10),local_2470,puVar8 + 6);
          pfVar25 = FUN_00402550(local_1668,(longlong *)puVar16);
          puVar22 = (undefined4 *)
                    FUN_004079f0(pfVar25,(float *)CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),fVar44);
          FUN_00401060(puVar8 + 0xf,puVar22);
        }
      }
      else {
        local_2b48 = (CombatBehavior *)((float)(int)(uVar17 - 0x44c) / 100.0);
        puVar46 = puVar8 + 6;
        iVar7 = 0x546906;
        FUN_00402a10((ulonglong *)&stack0xffffc89c);
        puVar22 = local_23b0;
        FUN_00402a10((ulonglong *)&stack0xffffc890);
        puVar34 = local_23e0;
        puVar33 = FUN_00402c50((void *)((int)local_2b90 + 0x10),local_2410,puVar46);
        puVar34 = FUN_00402bd0(puVar33,puVar34,(uint)in_stack_ffffc890,iVar7);
        puVar16 = FUN_00402bd0(puVar34,puVar22,CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),(int)puVar16
                              );
        puVar16 = FUN_00402cb0(puVar46,local_2440,puVar16);
        FUN_00402a40(puVar46,puVar16);
      }
      goto LAB_00546a5d;
    }
    goto LAB_00546b28;
  }
LAB_00546a5d:
  FUN_004e1520(local_120,local_2ba4,(float *)(puVar8 + 0xf));
  pvVar18 = local_2b1c;
  puVar8[0x1a] = puVar8[0x1a] + local_2b28;
  if ((puVar8[0x18] != 2) && (5000 < (int)puVar8[0x1a])) {
    if ((puVar8[0x18] != 3) && (uVar17 = FUN_00405420(local_2b1c,puVar8), uVar17 != 0)) {
      uVar17 = FUN_00405420(pvVar18,puVar8);
      fVar43 = FUN_00412150(uVar17);
      local_2b48 = (CombatBehavior *)(float)fVar43;
      uVar17 = FUN_00405420(pvVar18,puVar8);
      *(undefined4 *)(uVar17 + 0x70) = 0;
      uVar17 = FUN_00405420(pvVar18,puVar8);
      uVar11 = FUN_00405420(local_2b1c,puVar8);
      fVar43 = FUN_00412150(uVar11);
      local_2b90 = (void *)(float)fVar43;
      *(int *)(uVar17 + 0x6c) =
           (int)(((float)local_2b48 / (float)local_2b90) * (float)*(int *)(uVar17 + 0x6c));
    }
    goto LAB_00546b28;
  }
  local_2b50 = (CombatBehavior *)0x0;
  uVar17 = FUN_00405420(local_2b1c,puVar8);
  if (uVar17 != 0) {
    local_2b50 = (CombatBehavior *)FUN_00405420(local_2b1c,puVar8);
  }
  fVar43 = FUN_00401d80(local_120);
  local_2b48 = (CombatBehavior *)(float)fVar43;
  local_2c0c = (int)((float)local_2b48 * 2.0 + 1.0);
  FUN_004f7a70(local_120,local_44,(float)local_2c0c);
  FUN_00401060(local_b4,puVar8 + 0xf);
  fVar43 = FUN_004021b0(local_b4);
  local_2b48 = (CombatBehavior *)(float)fVar43;
  if (0.0 < (float)local_2b48) {
    FUN_00401fb0(local_b4);
  }
  FUN_00401610(local_b4,(float)puVar8[0x15] * 5.0);
  local_2b48 = (CombatBehavior *)((float)puVar8[0x15] * 3.0);
  pfVar25 = (float *)FUN_004013d0(local_b4,2);
  *pfVar25 = (float)local_2b48;
  local_2b88 = (CombatBehavior *)FUN_00405420(local_2b1c,puVar8);
  local_2c08 = 0;
  if (0 < local_2c0c) {
    do {
      pCVar42 = local_2b88;
      local_2b5c = (SequentialBehavior_vftable *)((uint)local_2b5c & 0xffffff00);
      local_2b68[0] = local_2b68[0] & 0xffffff00;
      FUN_00428070(local_2b70,&local_2bb0);
      piVar9 = (int *)FUN_00530550(local_2b70,&local_2d60);
      bVar4 = FUN_0042c6f0(&local_2bb0,piVar9);
      if (bVar4) {
        do {
          iVar7 = FUN_00402bc0(&local_2bb0);
          local_2b58 = *(CombatBehavior **)(iVar7 + 8);
          if (((local_2b58 != (CombatBehavior *)0x0) &&
              (0.0 < (float)local_2b58[0x12].CombatBehavior_data.offset_0x0)) &&
             ((((puVar8[0x18] == 3 && ((char)puVar8[0x19] == '\x02')) ||
               (pCVar42 == (CombatBehavior *)0x0)) ||
              (((local_2b58 != pCVar42 &&
                (uVar21 = FUN_004d18c0((int)pCVar42,(int)local_2b58), (char)uVar21 != '\0')) &&
               (((local_2b58->CombatBehavior_data).offset_0x4 !=
                 pCVar42[0xe3].CombatBehavior_data.offset_0x0 ||
                ((local_2b58->CombatBehavior_data).offset_0x8 !=
                 pCVar42[0xe3].CombatBehavior_data.offset_0x4)))))))) {
            local_2b3c = (CombatBehavior *)&local_2b58[6].CombatBehavior_data.offset_0x4;
            local_2b20 = (CRefTime *)FUN_004013d0(local_2b3c,0);
            local_2b6c = (CombatBehavior *)&(local_2b58->CombatBehavior_data).offset_0xc;
            local_2b4c = (CRefTime *)FUN_004e2320(local_2b6c,0);
            local_2b94 = (uint *)FUN_004e2320(puVar8 + 6,0);
            puVar16 = (uint *)FUN_004014b0(local_2b4c,local_36f0);
            pvVar18 = (void *)FUN_00401530(local_2b94,local_3710);
            uVar17 = FUN_004ce380(pvVar18,puVar16);
            if ((char)uVar17 != '\0') {
              local_2bbc = (CombatBehavior *)FUN_004013d0(local_2b3c,1);
              local_2b9c = (void *)FUN_004e2320(local_2b6c,1);
              local_2bc0 = (void *)FUN_004e2320(puVar8 + 6,1);
              puVar16 = (uint *)FUN_004014b0(local_2b9c,local_3488);
              pvVar18 = (void *)FUN_00401530(local_2bc0,local_31c8);
              uVar17 = FUN_004ce380(pvVar18,puVar16);
              if ((char)uVar17 != '\0') {
                local_2b3c = (CombatBehavior *)FUN_004013d0(local_2b3c,2);
                local_2b98 = (CRefTime *)FUN_004e2320(local_2b6c,2);
                local_2bac = (int *)FUN_004e2320(puVar8 + 6,2);
                puVar16 = (uint *)FUN_004014b0(local_2b98,local_36f8);
                pvVar18 = (void *)FUN_00401530(local_2bac,local_31d8);
                uVar17 = FUN_004ce380(pvVar18,puVar16);
                if ((char)uVar17 != '\0') {
                  puVar16 = (uint *)FUN_00401530(local_2b4c,local_3498);
                  pvVar18 = (void *)FUN_004014b0(local_2b94,local_31a8);
                  uVar17 = FUN_004ce350(pvVar18,puVar16);
                  if ((char)uVar17 != '\0') {
                    puVar16 = (uint *)FUN_00401530(local_2b9c,local_35f8);
                    pvVar18 = (void *)FUN_004014b0(local_2bc0,local_31f8);
                    uVar17 = FUN_004ce350(pvVar18,puVar16);
                    if ((char)uVar17 != '\0') {
                      puVar16 = (uint *)FUN_00401530(local_2b98,local_34a8);
                      pvVar18 = (void *)FUN_004014b0(local_2bac,local_3208);
                      uVar17 = FUN_004ce350(pvVar18,puVar16);
                      if ((char)uVar17 != '\0') {
                        in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x5476f7;
                        cVar6 = FUN_004d4d80(puVar8 + 6,(uint *)local_2b6c,'\x01',200.0);
                        pCVar41 = local_2b88;
                        if (cVar6 != '\0') {
                          if (local_2b58[0xe].CombatBehavior_data.offset_0xc != 0) {
                            if (pCVar42 != (CombatBehavior *)0x0) {
                              FUN_00530690(&pCVar42[0xe2].CombatBehavior_data.offset_0x8,local_d4,
                                           &(local_2b58->CombatBehavior_data).offset_0x4);
                            }
                            goto LAB_00547c9b;
                          }
                          uVar17 = puVar8[0x18];
                          if (((uVar17 == 0) && ((char)puVar8[0x17] == '\0')) ||
                             ((((uVar17 == 1 || (uVar17 == 4)) && ((char)puVar8[0x17] == '\0')) ||
                              ((uVar17 == 3 &&
                               (uVar17 = puVar8[0x18], pCVar42 = local_2b88,
                               (int)puVar8[0x1a] / 1000 != (int)(puVar8[0x1a] - local_2b28) / 1000))
                              )))) {
LAB_005477df:
                            if ((uVar17 != 3) &&
                               (local_2b5c = (SequentialBehavior_vftable *)((uint)local_2b5c & 0xff)
                               , uVar17 != 2)) {
                              local_2b5c = (SequentialBehavior_vftable *)0x1;
                            }
                            if (((((char)puVar8[0x17] == '\0') && (uVar17 != 3)) && (uVar17 != 1))
                               && ((uVar17 != 4 && (local_2b88 != (CombatBehavior *)0x0)))) {
                              iVar7 = rand();
                              local_2b3c = (CombatBehavior *)
                                           ((1.0 - ((float)iVar7 * 2.0) / 32767.0) * 0.05 + 0.1);
                              if (puVar8[0x18] == 2) {
                                local_2b3c = (CombatBehavior *)((float)local_2b3c * 0.2);
                              }
                              iVar7 = FUN_004084b0((int)pCVar41);
                              local_2b3c = (CombatBehavior *)
                                           (((float)iVar7 / 300.0) * (float)local_2b3c);
                              uVar17 = rand();
                              uVar17 = uVar17 & 0x80000007;
                              bVar4 = uVar17 == 0;
                              if ((int)uVar17 < 0) {
                                bVar4 = (uVar17 - 1 | 0xfffffff8) == 0xffffffff;
                              }
                              pCVar42 = local_2b3c;
                              if (bVar4) {
                                pCVar42 = (CombatBehavior *)((float)local_2b3c * 2.0);
                              }
                              if (((*(char *)((int)local_2b1c + 0xb4) == '\0') ||
                                  (pCVar41 == *(CombatBehavior **)((int)local_2b1c + 0xb8))) &&
                                 (fVar44 = (float)pCVar41[0x12].CombatBehavior_data.offset_0x4 +
                                           (float)pCVar42,
                                 pCVar41[0x12].CombatBehavior_data.offset_0x4 = fVar44, 1.0 < fVar44
                                 )) {
                                pCVar41[0x12].CombatBehavior_data.offset_0x4 = 0x3f800000;
                              }
                            }
                            bVar4 = false;
                            local_2b44 = (RandomWalkBehavior *)((uint)local_2b44 & 0xffffff00);
                            if (pCVar41 != (CombatBehavior *)0x0) {
                              bVar4 = FUN_0040f520((int)pCVar41);
                              local_2b44 = (RandomWalkBehavior *)CONCAT31(local_2b44._1_3_,bVar4);
                            }
                            local_2b7c[0] = (float)puVar8[0x12];
                            if (bVar4 != false) {
                              local_2b7c[0] = local_2b7c[0] * 2.0;
                            }
                            if (((local_2b50 != (CombatBehavior *)0x0) &&
                                (((local_2b50 == *(CombatBehavior **)((int)local_2b1c + 0xb8) ||
                                  ((*(char *)((int)local_2b1c + 0xb4) == '\0' &&
                                   (*(char *)&local_2b50[4].CombatBehavior_data.offset_0xc != '\0'))
                                  )) && (bVar4 = FUN_0040f220(local_2b50,0.15), bVar4)))) &&
                               ((((char)puVar8[0x17] == '\0' &&
                                 (*(char *)&local_2b50[0x10].vftablePtr == '\x02')) &&
                                (*(char *)((int)&local_2b50[0x10].vftablePtr + 1) == '\x01')))) {
                              FUN_004029b0(&local_2f68);
                              local_2f68 = '\n';
                              local_2f60 = 30000;
                              FUN_00411740(local_2b50,&local_2f68);
                              FUN_004063d0((int)&local_244);
                              local_234 = CONCAT71(uStack_2f67,local_2f68);
                              local_244 = (RandomWalkBehavior_vftable *)
                                          (local_2b50->CombatBehavior_data).offset_0x4;
                              local_240 = (local_2b50->CombatBehavior_data).offset_0x8;
                              local_22c = CONCAT44(uStack_2f5c,local_2f60);
                              local_224 = local_2f58;
                              local_23c = local_244;
                              local_238 = local_240;
                              FUN_00411040(local_2b2c + 0x16,(undefined8 *)&local_244);
                              FUN_004c8530((int)local_1f0);
                              local_1e4 = 0x2f;
                              FUN_00402550(local_1f0,
                                           (longlong *)&(local_2b50->CombatBehavior_data).offset_0xc
                                          );
                              FUN_00428590(local_2b2c + 2,local_1f0);
                            }
                            if (local_2b7c[0] < 0.0) {
                              local_2b7c[0] = 0.0;
                            }
                            if ((char)puVar8[0x19] == '\x02') {
                              if (((local_2b50 == (CombatBehavior *)0x0) ||
                                  (uVar21 = FUN_004cfcc0((int)local_2b50,(int)local_2b58),
                                  (char)uVar21 != '\0')) ||
                                 (*(char *)&local_2b58[4].CombatBehavior_data.offset_0xc == '\x06'))
                              {
                                if ((char)puVar8[0x19] != '\x02') goto LAB_00547be8;
                              }
                              else {
                                FUN_00422a90((int)&local_a2c);
                                FUN_00402a40(local_a0c,&local_2b6c->vftablePtr);
                                local_a1c = -local_2b7c[0];
                                if (*(char *)&local_2b50[4].CombatBehavior_data.offset_0xc == '\x01'
                                   ) {
                                  local_a1c = local_a1c * 0.5;
                                }
                                local_a18 = local_2b44._0_1_;
                                local_a2c = *puVar8;
                                local_a28 = puVar8[1];
                                local_a24 = (local_2b58->CombatBehavior_data).offset_0x4;
                                local_a20 = (local_2b58->CombatBehavior_data).offset_0x8;
                                FUN_00428400(local_2b2c,&local_a2c);
                                if ((*(char *)((int)local_2b1c + 0xb4) == '\0') ||
                                   ((local_2b50 == *(CombatBehavior **)((int)local_2b1c + 0xb8) &&
                                    (local_2b58 == *(CombatBehavior **)((int)local_2b1c + 0xb8)))))
                                {
                                  FUN_004cea80(local_2b1c,&local_a2c,local_2b2c,
                                               &local_2bec.vfunction1);
                                }
                              }
                            }
                            else {
LAB_00547be8:
                              cVar6 = '\x01';
                              iVar7 = FUN_0052eb90(&local_2b54);
                              in_stack_ffffc890 = &local_2bec;
                              cVar6 = FUN_004cfd50(local_2b1c,(float)local_2b58,pCVar41,
                                                   local_2b7c[0],(char)local_2b44,(char)puVar8[0x17]
                                                   ,(float)puVar8[0x15],puVar8 + 6,local_b4,
                                                   local_2b2c,&in_stack_ffffc890->vfunction1,
                                                   puVar8[0x18] == 1,0,iVar7,cVar6);
                              local_2b68[0] = local_2b68[0] & 0xff;
                              if (cVar6 != '\0') {
                                local_2b68[0] = 1;
                              }
                            }
                            pCVar42 = pCVar41;
                            if ((int)local_2b58[0xf].CombatBehavior_data.offset_0x4 <
                                (int)puVar8[0x1b]) {
                              local_2b58[0xf].CombatBehavior_data.offset_0x4 = puVar8[0x1b];
                            }
                          }
                          else if ((300 < (int)puVar8[0x1a]) &&
                                  ((uVar17 == 2 &&
                                   ((int)puVar8[0x1a] / 100 !=
                                    (int)(puVar8[0x1a] - local_2b28) / 100)))) {
                            uVar17 = puVar8[0x18];
                            goto LAB_005477df;
                          }
                          uVar17 = puVar8[0x18];
                          if (((uVar17 == 0) || (uVar17 == 1)) || (uVar17 == 4)) {
                            local_2b5c = (SequentialBehavior_vftable *)CONCAT31(local_2b5c._1_3_,1);
                            break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if ((char)local_2b5c != '\0') break;
          }
LAB_00547c9b:
          FUN_00407a30(&local_2bb0,local_2c48);
          piVar9 = (int *)FUN_00530550(local_2b70,&local_2d60);
          bVar4 = FUN_0042c6f0(&local_2bb0,piVar9);
        } while (bVar4);
      }
      if (puVar8[0x18] != 3) {
        if ((puVar8[0x18] == 2) &&
           ((int)puVar8[0x1a] / 200 != (int)(puVar8[0x1a] - local_2b28) / 200)) {
          FUN_004c8530((int)local_1d8);
          FUN_00402550(local_1d8,(longlong *)(puVar8 + 6));
          iVar7 = rand();
          local_1c8 = ((float)iVar7 * 0.25) / 32767.0 + 1.0;
          local_1cc = 0xf;
          FUN_00428590(local_2b2c + 2,local_1d8);
        }
        FUN_00402510((int)local_36c);
        pRVar23 = (RandomWalkBehavior_vftable *)(puVar8 + 6);
        FUN_00402e30(pRVar23,local_36c);
        uVar17 = puVar8[0x13];
        FUN_00401080(local_16b0,uVar17,uVar17,uVar17);
        FUN_00402510((int)local_45c);
        FUN_00402c50(pRVar23,local_2500,local_45c);
        uVar17 = puVar8[0x13];
        FUN_00401080(local_16c8,uVar17,uVar17,uVar17);
        FUN_00402510((int)local_4a4);
        FUN_00402cb0(pRVar23,local_2530,local_4a4);
        local_2b35 = '\0';
        local_2b3c = (CombatBehavior *)FUN_004e2320(pRVar23,2);
        local_2b20 = (CRefTime *)FUN_004e2320(pRVar23,1);
        local_2b48 = (CombatBehavior *)FUN_004e2320(pRVar23,0);
        in_stack_ffffc890 = *(RandomWalkBehavior_vftable **)local_2b20;
        iVar7 = FUN_00406050(local_2b1c,(uint)local_2b48->vftablePtr,
                             (local_2b48->CombatBehavior_data).offset_0x0,(uint)in_stack_ffffc890,
                             *(uint *)(local_2b20 + 4),(uint)local_2b3c->vftablePtr,
                             (local_2b3c->CombatBehavior_data).offset_0x0,0);
        uVar21 = FUN_004061f0(iVar7);
        if ((char)uVar21 == '\0') {
          fVar43 = FUN_00401d80((float *)(puVar8 + 0xf));
          pCVar42 = (CombatBehavior *)((float)fVar43 * local_2ba4);
          cVar52 = '\x01';
          cVar6 = '\0';
          pfVar25 = local_1710;
          local_2b48 = pCVar42;
          pfVar36 = FUN_00412670(puVar8 + 0xf,local_1728);
          pfVar25 = FUN_0052ec30(pfVar36,pfVar25);
          in_stack_ffffc890 = pRVar23;
          fVar43 = (float10)FUN_004d6730(local_2b1c,(uint *)pRVar23,pfVar25,(float)pCVar42,cVar6,
                                         cVar52);
          local_2b90 = (void *)(float)fVar43;
          if ((float)local_2b90 < (float)local_2b48) {
            local_2b35 = '\x01';
            FUN_00402510((int)local_9b4);
            FUN_00402e80(pRVar23,local_9b4);
          }
        }
        else {
          FUN_00402510((int)local_48c);
          FUN_00402e80(pRVar23,local_48c);
          local_2b35 = '\x01';
          if (puVar8[0x18] == 0) {
            FUN_004c8510((int)local_96c);
            fVar44 = 255.0;
            uVar39 = SUB41(local_2c4,0);
            uVar48 = (undefined1)((uint)local_2c4 >> 8);
            uVar50 = (undefined2)((uint)local_2c4 >> 0x10);
            pbVar37 = (byte *)FUN_00406050(local_2b1c,(uint)local_2b48->vftablePtr,
                                           (local_2b48->CombatBehavior_data).offset_0x0,
                                           *(uint *)local_2b20,*(uint *)(local_2b20 + 4),
                                           (uint)local_2b3c->vftablePtr,
                                           (local_2b3c->CombatBehavior_data).offset_0x0,0);
            pfVar25 = FUN_004c6470(local_16e0,pbVar37);
            FUN_004f7a70(pfVar25,(float *)CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),fVar44);
            uVar55 = 0x3f800000;
            puVar22 = (undefined4 *)FUN_004013d0(local_2c4,2);
            uVar21 = *puVar22;
            uVar39 = (undefined1)uVar21;
            uVar48 = (undefined1)((uint)uVar21 >> 8);
            uVar50 = (undefined2)((uint)uVar21 >> 0x10);
            puVar22 = (undefined4 *)FUN_004013d0(local_2c4,1);
            uVar21 = *puVar22;
            puVar22 = (undefined4 *)FUN_004013d0(local_2c4,0);
            in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x547f87;
            ppVar38 = (pair<unsigned___int64,unsigned___int64> *)
                      FUN_004010b0(local_1ba0,*puVar22,uVar21,
                                   CONCAT22(uVar50,CONCAT11(uVar48,uVar39)),uVar55);
            std::pair<unsigned___int64,unsigned___int64>::
            operator=<std::pair<unsigned___int64,unsigned___int64>,0>(local_948,ppVar38);
            local_934 = 4;
            local_938 = 0x3dcccccd;
            puVar22 = FUN_00401080(local_16f8,0,0,0x41200000);
            FUN_00401060(local_954,puVar22);
            FUN_00402a40(local_96c,(undefined4 *)pRVar23);
            FUN_00428540(local_2b2c + 4,local_96c);
          }
        }
        pCVar42 = local_2b88;
        cVar6 = (char)local_2b5c;
        if (((cVar6 == '\0') && (local_2b35 != '\0')) &&
           ((puVar8[0x18] != 3 && (local_2b88 != (CombatBehavior *)0x0)))) {
          fVar43 = FUN_00412150((int)local_2b88);
          local_2b48 = (CombatBehavior *)(float)fVar43;
          pCVar42[5].CombatBehavior_data.offset_0x8 = 0;
          fVar43 = FUN_00412150((int)pCVar42);
          local_2b90 = (void *)(float)fVar43;
          pCVar42[5].CombatBehavior_data.offset_0x4 =
               (int)(((float)local_2b48 / (float)local_2b90) *
                    (float)(int)pCVar42[5].CombatBehavior_data.offset_0x4);
          cVar6 = (char)local_2b5c;
        }
        if (puVar8[0x18] == 2) {
          if (((char)local_2b68[0] != '\0') && (pCVar42 != (CombatBehavior *)0x0)) {
            puVar22 = &pCVar42[5].CombatBehavior_data.offset_0x8;
            *puVar22 = *puVar22 + 1;
            FUN_004103a0((int)pCVar42);
            pCVar42[5].CombatBehavior_data.offset_0xc = 0;
          }
          if (local_2b35 != '\0') {
            if (puVar8[0x18] != 2) {
              FUN_004c8530((int)local_1b4);
              FUN_00402550(local_1b4,(longlong *)(puVar8 + 6));
              iVar7 = rand();
              local_1a4 = ((float)iVar7 * 0.4) / 32767.0 + 1.0;
              local_1a8 = 0x13;
              FUN_00428590(local_2b2c + 2,local_1b4);
              goto LAB_00546b28;
            }
            puVar22 = FUN_00401080(local_1740,0,0,0);
            FUN_00401060(puVar8 + 0xf,puVar22);
          }
        }
        else if ((cVar6 != '\0') || (local_2b35 != '\0')) {
          if ((puVar8[0x18] != 1) && ((char)puVar8[0x17] == '\0')) goto LAB_005488d0;
          if (cVar6 == '\0') {
            FUN_004c8530((int)local_80);
            FUN_00402550(local_80,(longlong *)(puVar8 + 6));
            iVar7 = rand();
            local_70 = ((float)iVar7 * 0.4) / 32767.0 + 1.0;
            if (puVar8[0x18] == 1) {
              local_74 = 0x27;
              if ((char)puVar8[0x19] == '\x02') {
                local_74 = 0x2a;
              }
            }
            else {
              local_74 = 0x14;
            }
            FUN_00428590(local_2b2c + 2,local_80);
          }
          local_2c00 = CONCAT31(local_2c00._1_3_,(char)puVar8[0x17]);
          FUN_00428070(local_2b70,local_2be0);
          piVar9 = (int *)FUN_00530550(local_2b70,&local_2d68);
          bVar4 = FUN_0042c6f0(local_2be0,piVar9);
          if (!bVar4) goto LAB_005488d0;
          local_2b4c = (CRefTime *)FUN_004e2320(puVar8 + 6,0);
          local_2bbc = (CombatBehavior *)FUN_004e2320(puVar8 + 6,1);
          local_2b9c = (void *)FUN_004e2320(puVar8 + 6,2);
          goto LAB_00548313;
        }
      }
      local_2c08 = local_2c08 + 1;
    } while (local_2c08 < local_2c0c);
  }
  goto LAB_00546b3a;
code_r0x00535a7c:
  FUN_0052ebf0(&local_2b84,&local_2b48);
  piVar19 = (int *)FUN_00530550(&local_2bd8,&local_2d64);
  bVar4 = FUN_0042c6f0(&local_2b84,piVar19);
  if (!bVar4) goto LAB_005361f3;
  goto LAB_00535a24;
LAB_00548313:
  do {
    iVar7 = FUN_00402bc0(local_2be0);
    local_2b6c = *(CombatBehavior **)(iVar7 + 8);
    if (local_2b6c != (CombatBehavior *)0x0) {
      if ((((local_2b50 != (CombatBehavior *)0x0) && (*(char *)((int)local_2b1c + 0xb4) == '\0')) &&
          (*(char *)&local_2b50[4].CombatBehavior_data.offset_0xc == '\0')) &&
         (local_2b50 != *(CombatBehavior **)((int)local_2b1c + 0xb8))) break;
      if ((pCVar42 == (CombatBehavior *)0x0) ||
         ((((local_2b6c != pCVar42 &&
            (uVar21 = FUN_004d18c0((int)pCVar42,(int)local_2b6c), (char)uVar21 != '\0')) &&
           (((local_2b6c->CombatBehavior_data).offset_0x4 !=
             pCVar42[0xe3].CombatBehavior_data.offset_0x0 ||
            ((local_2b6c->CombatBehavior_data).offset_0x8 !=
             pCVar42[0xe3].CombatBehavior_data.offset_0x4)))) &&
          (0.0 < (float)local_2b6c[0x12].CombatBehavior_data.offset_0x0)))) {
        local_2b3c = (CombatBehavior *)&local_2b6c[6].CombatBehavior_data.offset_0x4;
        local_2b20 = (CRefTime *)FUN_004013d0(local_2b3c,0);
        local_2b98 = (CRefTime *)&(local_2b6c->CombatBehavior_data).offset_0xc;
        local_2b48 = (CombatBehavior *)FUN_004e2320(local_2b98,0);
        puVar16 = (uint *)FUN_004014b0(local_2b48,local_36a8);
        pvVar18 = (void *)FUN_00401530(local_2b4c,local_3218);
        uVar17 = FUN_004ce380(pvVar18,puVar16);
        if ((char)uVar17 != '\0') {
          local_2b94 = (uint *)FUN_004013d0(local_2b3c,1);
          local_2b90 = (void *)FUN_004e2320(local_2b98,1);
          puVar16 = (uint *)FUN_004014b0(local_2b90,local_34b8);
          pvVar18 = (void *)FUN_00401530(local_2bbc,local_3228);
          uVar17 = FUN_004ce380(pvVar18,puVar16);
          if ((char)uVar17 != '\0') {
            local_2b3c = (CombatBehavior *)FUN_004013d0(local_2b3c,2);
            local_2bd0[0] = (Creature *)FUN_004e2320(local_2b98,2);
            puVar16 = (uint *)FUN_004014b0(local_2bd0[0],local_3608);
            pvVar18 = (void *)FUN_00401530(local_2b9c,local_3238);
            uVar17 = FUN_004ce380(pvVar18,puVar16);
            if ((char)uVar17 != '\0') {
              puVar16 = (uint *)FUN_00401530(local_2b48,local_34c8);
              pvVar18 = (void *)FUN_004014b0(local_2b4c,local_3248);
              uVar17 = FUN_004ce350(pvVar18,puVar16);
              if ((char)uVar17 != '\0') {
                puVar16 = (uint *)FUN_00401530(local_2b90,local_3728);
                pvVar18 = (void *)FUN_004014b0(local_2bbc,local_3258);
                uVar17 = FUN_004ce350(pvVar18,puVar16);
                if ((char)uVar17 != '\0') {
                  puVar16 = (uint *)FUN_00401530(local_2bd0[0],local_34d8);
                  pvVar18 = (void *)FUN_004014b0(local_2b9c,local_3268);
                  uVar17 = FUN_004ce350(pvVar18,puVar16);
                  if ((char)uVar17 != '\0') {
                    in_stack_ffffc890 = (RandomWalkBehavior_vftable *)0x548637;
                    cVar6 = FUN_004d4d80(puVar8 + 6,(uint *)local_2b98,'\x01',200.0);
                    if (cVar6 != '\0') {
                      if ((local_2b6c[0xe].CombatBehavior_data.offset_0xc == 0) ||
                         (pCVar42 == (CombatBehavior *)0x0)) {
                        pCVar41 = (CombatBehavior *)(extraout_ECX & 0xffffff00);
                        local_2c04 = local_2c04 & 0xffffff00;
                        local_2b48 = pCVar41;
                        if (local_2b50 != (CombatBehavior *)0x0) {
                          bVar4 = FUN_0040f520((int)local_2b50);
                          pCVar41 = (CombatBehavior *)((uint)local_2b48 & 0xff);
                          if (bVar4) {
                            pCVar41 = (CombatBehavior *)0x1;
                          }
                          local_2c04 = CONCAT31(local_2c04._1_3_,(char)pCVar41);
                        }
                        local_2b3c = (CombatBehavior *)puVar8[0x12];
                        if ((char)pCVar41 != '\0') {
                          local_2b3c = (CombatBehavior *)((float)local_2b3c * 2.0);
                        }
                        if (((local_2b50 != (CombatBehavior *)0x0) &&
                            (((local_2b50 == *(CombatBehavior **)((int)local_2b1c + 0xb8) ||
                              ((*(char *)((int)local_2b1c + 0xb4) == '\0' &&
                               (*(char *)&local_2b50[4].CombatBehavior_data.offset_0xc != '\0'))))
                             && (bVar4 = FUN_0040f220(local_2b50,0.25), bVar4)))) &&
                           ((((char)local_2c00 == '\0' && (puVar8[0x18] == 1)) &&
                            ((char)puVar8[0x19] == '\x01')))) {
                          FUN_004029b0(&local_2f80);
                          local_2f80 = '\t';
                          local_2f78 = 30000;
                          FUN_00411740(local_2b50,&local_2f80);
                          FUN_004063d0((int)&local_2e70);
                          local_2e60 = CONCAT71(uStack_2f7f,local_2f80);
                          local_2e70 = (RandomWalkBehavior_vftable *)
                                       (local_2b50->CombatBehavior_data).offset_0x4;
                          local_2e6c = (local_2b50->CombatBehavior_data).offset_0x8;
                          local_2e58 = CONCAT44(uStack_2f74,local_2f78);
                          local_2e50 = local_2f70;
                          local_2e68 = local_2e70;
                          local_2e64 = local_2e6c;
                          FUN_00411040(local_2b2c + 0x16,(undefined8 *)&local_2e70);
                          FUN_004c8530((int)local_208);
                          local_1fc = 0x2f;
                          FUN_00402550(local_208,
                                       (longlong *)&(local_2b50->CombatBehavior_data).offset_0xc);
                          FUN_00428590(local_2b2c + 2,local_208);
                        }
                        cVar6 = '\x01';
                        iVar7 = FUN_0052eb90(&local_2b54);
                        in_stack_ffffc890 = &local_2bec;
                        cVar6 = FUN_004cfd50(local_2b1c,(float)local_2b6c,pCVar42,(float)local_2b3c,
                                             (char)local_2c04,(char)local_2c00,(float)puVar8[0x15],
                                             puVar8 + 6,local_b4,local_2b2c,
                                             &in_stack_ffffc890->vfunction1,puVar8[0x18] == 1,0,
                                             iVar7,cVar6);
                        uVar39 = (undefined1)local_2b68[0];
                        if (cVar6 != '\0') {
                          uVar39 = 1;
                        }
                        local_2b68[0] = CONCAT31(local_2b68[0]._1_3_,uVar39);
                      }
                      else {
                        FUN_00530690(&pCVar42[0xe2].CombatBehavior_data.offset_0x8,local_3078,
                                     &(local_2b6c->CombatBehavior_data).offset_0x4);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_00407a30(local_2be0,local_2ce4);
    piVar9 = (int *)FUN_00530550(local_2b70,&local_2d68);
    bVar4 = FUN_0042c6f0(local_2be0,piVar9);
  } while (bVar4);
LAB_005488d0:
  if ((((char)local_2b68[0] != '\0') && (puVar8[0x18] != 3)) && (pCVar42 != (CombatBehavior *)0x0))
  {
    puVar22 = &pCVar42[5].CombatBehavior_data.offset_0x8;
    *puVar22 = *puVar22 + 1;
    FUN_004103a0((int)pCVar42);
    pCVar42[5].CombatBehavior_data.offset_0xc = 0;
  }
  if ((puVar8[0x18] == 1) && ((char)puVar8[0x19] == '\x02')) {
    puVar8[0x18] = 3;
    uVar17 = 3000;
    if ((char)puVar8[0x17] != '\0') {
      uVar17 = 0;
    }
    puVar8[0x1a] = uVar17;
    puVar8[0x12] = (uint)((float)puVar8[0x12] * 0.05);
    puVar8[0x13] = (uint)((float)puVar8[0x15] * 5.0 + 5.0);
    puVar8[0x15] = 0;
    *(undefined1 *)(puVar8 + 0x17) = 0;
  }
  else {
LAB_00546b28:
    FUN_004d6620(&local_2c24,&local_2b54);
  }
LAB_00546b3a:
  FUN_0052ebf0(&local_2b54,&local_2bc4);
  pvVar18 = (void *)((int)local_2b1c + 0x14);
  piVar9 = (int *)FUN_00530550(pvVar18,&local_2d70);
  bVar4 = FUN_0042c6f0(&local_2b54,piVar9);
  goto joined_r0x00546872;
}


/* lib_fn_549550 @ 00549550  kind=lib  attributed-by=ledger  size=1479 */

void __fastcall FUN_00549550(int *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  DWORD DVar10;
  byte *pbVar11;
  int *piVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  int local_60;
  DWORD local_5c;
  int *local_58;
  undefined4 local_54;
  int *local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  int local_40;
  char local_39;
  int local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  uint local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00556718;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = param_1;
  local_5c = timeGetTime();
  if (*(char *)param_1[2] != '\0') {
    local_60 = 0xffff;
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)param_1[3]);
      FUN_00422740(&local_58,(undefined4 *)param_1[4]);
      iVar14 = param_1[1];
      iVar19 = *param_1;
      local_8 = 0;
      if (*(int *)(iVar14 + 8) == *(int *)(iVar19 + 0x800164)) {
        uVar8 = *(uint *)(iVar19 + 0xa4);
        pbVar13 = (byte *)(iVar19 + 0x94);
        pbVar11 = (byte *)(iVar14 + 0xc);
        if (0xf < *(uint *)(iVar19 + 0xa8)) {
          pbVar13 = *(byte **)pbVar13;
        }
        uVar15 = *(uint *)(iVar14 + 0x1c);
        if (0xf < *(uint *)(iVar14 + 0x20)) {
          pbVar11 = *(byte **)pbVar11;
        }
        uVar7 = uVar8;
        if (uVar15 < uVar8) {
          uVar7 = uVar15;
        }
        uVar7 = FUN_0041eab0(pbVar11,pbVar13,uVar7);
        bVar20 = false;
        if (uVar7 == 0) {
          if (uVar15 < uVar8) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)(uVar15 != uVar8);
          }
          bVar20 = uVar8 == 0;
        }
        if (!bVar20) {
          iVar19 = *param_1;
          goto LAB_005499e4;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)param_1[3]);
        local_39 = '\0';
        iVar14 = 9;
        local_44 = (int *)*local_58;
        local_40 = 9;
        if (local_44 != local_58) {
          do {
            uVar1 = *(undefined8 *)(local_44 + 2);
            local_2c._0_4_ = (int)uVar1;
            local_2c._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
            local_4c = local_2c._4_4_ + iVar14;
            uVar8 = (int)local_2c - iVar14;
            if ((int)local_2c - iVar14 < 0) {
              uVar8 = 0;
            }
            iVar19 = (int)local_2c + iVar14;
            if (0xffff < (int)local_2c + iVar14) {
              iVar19 = local_60;
            }
            local_38 = 0;
            local_48 = local_2c._4_4_ - iVar14;
            if (local_2c._4_4_ - iVar14 < 0) {
              local_48 = 0;
            }
            uVar4 = local_34;
            if (0xffff < local_4c) {
              local_4c = local_60;
            }
            for (; uVar15 = local_48, local_34 = uVar4, (int)uVar8 <= iVar19; uVar8 = uVar8 + 1) {
              for (; (int)uVar15 <= local_4c; uVar15 = uVar15 + 1) {
                iVar18 = ((int)local_2c - uVar8) * ((int)local_2c - uVar8) +
                         (local_2c._4_4_ - uVar15) * (local_2c._4_4_ - uVar15);
                if (iVar18 < iVar14) {
                  if (((-1 < (int)uVar8) && (-1 < (int)uVar15)) &&
                     (((int)uVar8 < 0x10000 && ((int)uVar15 < 0x10000)))) {
                    local_38 = (int)(uVar15 + ((int)uVar15 >> 0x1f & 0x3fU)) >> 6;
                    iVar14 = (int)(((int)uVar8 >> 0x1f & 0x3fU) + uVar8) >> 6;
                    if ((((-1 < iVar14) && (-1 < local_38)) && (iVar14 < 0x400)) &&
                       ((local_38 < 0x400 &&
                        (local_38 = *(int *)(*local_50 + 0xbc + (iVar14 * 0x400 + local_38) * 4),
                        local_38 != 0)))) {
                      uVar7 = uVar8 & 0x8000003f;
                      if ((int)uVar7 < 0) {
                        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
                      }
                      uVar9 = uVar15 & 0x8000003f;
                      if ((int)uVar9 < 0) {
                        uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
                      }
                      iVar14 = local_40;
                      if (*(int *)(local_38 + 0x10018 + (uVar7 * 0x40 + uVar9) * 4) != 0)
                      goto LAB_00549798;
                    }
                  }
                  local_34 = CONCAT44(uVar15,uVar8);
                  local_39 = '\x01';
                  iVar14 = iVar18;
                  local_40 = iVar18;
                  local_1c = uVar8;
                  uStack_18 = uVar15;
                }
LAB_00549798:
                local_24 = uVar1;
              }
              uVar4 = local_34;
            }
            local_44 = (int *)*local_44;
          } while (local_44 != local_58);
          param_1 = local_50;
          local_2c = uVar1;
          if (local_39 != '\0') {
            local_34._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uVar5 = local_34._4_4_;
            local_34._0_4_ = (undefined4)uVar4;
            uVar6 = (undefined4)local_34;
            FUN_00518630(uVar6,uVar5);
          }
        }
        DVar10 = timeGetTime();
        piVar12 = local_58;
        if (1000 < (int)(DVar10 - local_5c)) {
          local_48 = 0;
          local_44 = (int *)0x2f;
          do {
            local_4c = 0;
            uVar8 = local_48;
            piVar16 = local_44;
            do {
              iVar14 = local_4c;
              if (((-1 < (int)uVar8) && (-1 < local_4c)) &&
                 (((int)piVar16 < 0x10002f &&
                  ((local_4c < 0x400 &&
                   (iVar19 = *(int *)(*param_1 + ((int)piVar16 + local_4c) * 4), uVar8 = local_48,
                   piVar16 = local_44, iVar19 != 0)))))) {
                piVar16 = (int *)(iVar19 + 0x10018);
                local_38 = 0x40;
                do {
                  local_40 = 0x40;
                  do {
                    iVar19 = local_40;
                    iVar14 = *piVar16;
                    if (iVar14 != 0) {
                      for (piVar2 = (int *)*piVar12; piVar2 != piVar12; piVar2 = (int *)*piVar2) {
                        iVar17 = *(int *)(iVar14 + 0x60) - piVar2[2];
                        iVar18 = *(int *)(iVar14 + 100) - piVar2[3];
                        if (iVar17 * iVar17 + iVar18 * iVar18 < 9) goto LAB_0054989e;
                      }
                      FUN_004d79f0((void *)*local_50,*(uint *)(iVar14 + 0x60),
                                   *(uint *)(iVar14 + 100));
                      piVar12 = local_58;
                    }
LAB_0054989e:
                    iVar14 = local_4c;
                    piVar2 = local_50;
                    piVar16 = piVar16 + 1;
                    local_40 = iVar19 + -1;
                  } while (local_40 != 0);
                  local_38 = local_38 + -1;
                } while (local_38 != 0);
                piVar16 = (int *)*piVar12;
                if (piVar16 == piVar12) {
                  FUN_004d7960((void *)*local_50,local_48,local_4c);
                  piVar12 = local_58;
                }
                else {
                  do {
                    uVar8 = local_48 - ((int)((piVar16[2] >> 0x1f & 0x3fU) + piVar16[2]) >> 6);
                    uVar15 = (int)uVar8 >> 0x1f;
                    if (((int)((uVar8 ^ uVar15) - uVar15) < 3) &&
                       (uVar8 = local_4c - ((int)((piVar16[3] >> 0x1f & 0x3fU) + piVar16[3]) >> 6),
                       uVar15 = (int)uVar8 >> 0x1f, (int)((uVar8 ^ uVar15) - uVar15) < 3))
                    goto LAB_0054991a;
                    piVar16 = (int *)*piVar16;
                  } while (piVar16 != piVar12);
                  FUN_004d7960((void *)*local_50,local_48,local_4c);
                  piVar12 = local_58;
                }
LAB_0054991a:
                for (piVar3 = (int *)*piVar12; piVar3 != piVar12; piVar3 = (int *)*piVar3) {
                  uVar8 = local_48 - ((int)((piVar3[2] >> 0x1f & 0x3fU) + piVar3[2]) >> 6);
                  uVar15 = (int)uVar8 >> 0x1f;
                  if (((int)((uVar8 ^ uVar15) - uVar15) < 5) &&
                     (uVar15 = iVar14 - ((int)((piVar3[3] >> 0x1f & 0x3fU) + piVar3[3]) >> 6),
                     uVar7 = (int)uVar15 >> 0x1f, uVar8 = local_48, piVar16 = local_44,
                     (int)((uVar15 ^ uVar7) - uVar7) < 5)) goto LAB_0054996f;
                }
                FUN_004d78e0((void *)*piVar2,local_48,iVar14);
                uVar8 = local_48;
                piVar16 = local_44;
                piVar12 = local_58;
              }
LAB_0054996f:
              local_4c = iVar14 + 1;
              param_1 = local_50;
            } while (local_4c < 0x400);
            local_44 = piVar16 + 0x100;
            local_48 = uVar8 + 1;
            local_5c = DVar10;
          } while ((int)local_44 < 0x10002f);
        }
        piVar16 = (int *)*piVar12;
        *piVar12 = (int)piVar12;
        local_8 = 0xffffffff;
        local_58[1] = (int)local_58;
        local_54 = 0;
        if (piVar16 != local_58) {
          do {
            piVar12 = (int *)*piVar16;
            operator_delete(piVar16);
            piVar16 = piVar12;
          } while (piVar12 != local_58);
        }
        operator_delete(local_58);
        param_1 = local_50;
      }
      else {
LAB_005499e4:
        FUN_004d3df0(iVar19);
        local_4c = 0;
        local_40 = 0x2f;
        do {
          local_44 = (int *)0x0;
          iVar19 = local_40;
          iVar14 = local_4c;
          do {
            piVar12 = local_44;
            if ((((-1 < iVar14) && (-1 < (int)local_44)) && (iVar19 < 0x10002f)) &&
               (((int)local_44 < 0x400 &&
                (iVar18 = *(int *)(*param_1 + (iVar19 + (int)local_44) * 4), iVar19 = local_40,
                iVar18 != 0)))) {
              piVar16 = (int *)(iVar18 + 0x10018);
              local_38 = 0x40;
              do {
                iVar19 = 0x40;
                do {
                  iVar14 = *piVar16;
                  if (iVar14 != 0) {
                    FUN_004d79f0((void *)*param_1,*(uint *)(iVar14 + 0x60),*(uint *)(iVar14 + 100));
                  }
                  piVar12 = local_44;
                  iVar14 = local_4c;
                  piVar16 = piVar16 + 1;
                  iVar19 = iVar19 + -1;
                } while (iVar19 != 0);
                local_38 = local_38 + -1;
              } while (local_38 != 0);
              FUN_004d7960((void *)*param_1,local_4c,(int)local_44);
              FUN_004d78e0((void *)*param_1,iVar14,(int)piVar12);
              iVar19 = local_40;
            }
            local_44 = (int *)((int)piVar12 + 1);
          } while ((int)local_44 < 0x400);
          local_40 = iVar19 + 0x400;
          local_4c = iVar14 + 1;
        } while (local_40 < 0x10002f);
        FUN_004d83a0((void *)*param_1,*(uint *)(param_1[1] + 8),(int *)(param_1[1] + 0xc));
        FUN_004d5c60(*param_1);
        LeaveCriticalSection((LPCRITICAL_SECTION)param_1[3]);
        local_8 = 0xffffffff;
        piVar12 = (int *)*local_58;
        *local_58 = (int)local_58;
        local_58[1] = (int)local_58;
        local_54 = 0;
        if (piVar12 != local_58) {
          do {
            piVar16 = (int *)*piVar12;
            operator_delete(piVar12);
            piVar12 = piVar16;
          } while (piVar16 != local_58);
        }
        operator_delete(local_58);
      }
    } while (*(char *)param_1[2] != '\0');
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


