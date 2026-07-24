// Proven (world) -- cube. 29 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Proven.h"

/* mat_scaleColumns @ 00434ad0  kind=game  attributed-by=ledger  size=147 */

void FUN_00434ad0(float param_1,float param_2)

{
  float *in_ECX;
  
  if (param_1 != 1.0) {
    *in_ECX = *in_ECX * param_1;
    in_ECX[1] = param_1 * in_ECX[1];
    in_ECX[2] = param_1 * in_ECX[2];
    in_ECX[3] = param_1 * in_ECX[3];
  }
  if (param_2 != 1.0) {
    in_ECX[4] = in_ECX[4] * param_2;
    in_ECX[5] = in_ECX[5] * param_2;
    in_ECX[6] = in_ECX[6] * param_2;
    in_ECX[7] = in_ECX[7] * param_2;
  }
  return;
}


/* GameController_getVoxelColumn8 @ 00487da0  kind=game  attributed-by=ledger  size=133 */

int FUN_00487da0(uint param_1,uint param_2)

{
  int iVar1;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x2000)) &&
     ((int)param_2 < 0x2000)) {
    iVar1 = FUN_00434a90((int)(param_1 * 8 + ((int)(param_1 * 8) >> 0x1f & 0x3fU)) >> 6,
                         (int)(param_2 * 8 + ((int)(param_2 * 8) >> 0x1f & 0x3fU)) >> 6);
    if (iVar1 != 0) {
      param_1 = param_1 & 0x80000007;
      if ((int)param_1 < 0) {
        param_1 = (param_1 - 1 | 0xfffffff8) + 1;
      }
      param_2 = param_2 & 0x80000007;
      if ((int)param_2 < 0) {
        param_2 = (param_2 - 1 | 0xfffffff8) + 1;
      }
      return (param_2 + param_1 * 8) * 0x68 + 0x14018 + iVar1;
    }
  }
  return 0;
}


/* perlinNoise2D_cosInterp @ 004c0ef0  kind=game  attributed-by=ledger  size=522 */

float10 FUN_004c0ef0(undefined4 param_1,undefined4 param_2,double param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = (double)(int)param_3;
  dVar6 = (double)(int)(double)CONCAT44(param_2,param_1);
  iVar1 = (int)dVar8 * 0x39;
  uVar4 = (int)dVar6 + iVar1;
  uVar2 = iVar1 + (int)(dVar6 + 1.0);
  uVar4 = uVar4 ^ uVar4 * 0x2000;
  uVar2 = uVar2 ^ uVar2 * 0x2000;
  dVar7 = ((double)CONCAT44(param_2,param_1) - dVar6) * 3.1415927;
  iVar1 = (int)(dVar8 + 1.0) * 0x39;
  uVar5 = (int)dVar6 + iVar1;
  uVar3 = iVar1 + (int)(dVar6 + 1.0);
  uVar5 = uVar5 ^ uVar5 * 0x2000;
  uVar3 = uVar3 ^ uVar3 * 0x2000;
  libm_sse2_cos_precise();
  dVar6 = (1.0 - dVar7) * 0.5;
  dVar7 = (param_3 - (double)(int)param_3) * 3.1415927;
  libm_sse2_cos_precise();
  dVar7 = (1.0 - dVar7) * 0.5;
  return (float10)(float)(((1.0 - (double)((uVar4 * uVar4 * 0xec4d + 0x131071f) * uVar4 + 0xd208dd0d
                                          & 0x7fffffff) * 9.313225746154785e-10) * (1.0 - dVar6) +
                          (1.0 - (double)((uVar2 * uVar2 * 0xec4d + 0x131071f) * uVar2 + 0xd208dd0d
                                         & 0x7fffffff) * 9.313225746154785e-10) * dVar6) *
                          (1.0 - dVar7) +
                         ((1.0 - (double)((uVar5 * uVar5 * 0xec4d + 0x131071f) * uVar5 + 0xd208dd0d
                                         & 0x7fffffff) * 9.313225746154785e-10) * (1.0 - dVar6) +
                         (1.0 - (double)((uVar3 * uVar3 * 0xec4d + 0x131071f) * uVar3 + 0xd208dd0d &
                                        0x7fffffff) * 9.313225746154785e-10) * dVar6) * dVar7);
}


/* VoxelModel_load_from_file_or_buffer @ 004e7290  kind=gamemisc  attributed-by=ledger  size=627 */

void FUN_004e7290(int param_1,size_t param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  basic_istream<char,std::char_traits<char>_> local_e8 [3];
  int aiStack_dc [25];
  basic_ios<char,std::char_traits<char>_> local_78 [6];
  char *local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  void *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  basic_ifstream<char,std::char_traits<char>_>_vftable *local_8;
  
  local_8 = (basic_ifstream<char,std::char_traits<char>_>_vftable *)0xffffffff;
  puStack_c = &LAB_006e9f73;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(char *)(in_ECX + 0x55) = (char)param_3;
  if (param_2 == 0) {
    local_24 = in_ECX;
    FUN_004cb100(local_e8,param_1,0x20,0x40,1);
    local_8 = (basic_ifstream<char,std::char_traits<char>_>_vftable *)0x2;
    if (*(int *)((int)aiStack_dc +
                (local_e8[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) == 0) {
      std::basic_istream<char,std::char_traits<char>_>::read
                (local_e8,(char *)&local_24,(ulonglong)uVar3 << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::read
                (local_e8,(char *)&param_2,(ulonglong)uVar3 << 0x20);
      std::basic_istream<char,std::char_traits<char>_>::read
                (local_e8,(char *)&param_1,(ulonglong)uVar3 << 0x20);
      local_30 = (char *)0x0;
      local_2c = 0;
      local_28 = 0;
      FUN_004cb490(param_1 * param_2 * local_24);
      pcVar1 = local_30;
      local_8 = (basic_ifstream<char,std::char_traits<char>_>_vftable *)CONCAT31(local_8._1_3_,3);
      std::basic_istream<char,std::char_traits<char>_>::read
                (local_e8,local_30,(ulonglong)uVar3 << 0x20);
      FUN_004e7650(local_24,param_2,param_1,pcVar1,param_3);
      if (pcVar1 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pcVar1);
      }
    }
    std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
              ((basic_ifstream<char,std::char_traits<char>_> *)local_78);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_78)
    ;
  }
  else {
    local_20 = (void *)0x0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_8 = (basic_ifstream<char,std::char_traits<char>_>_vftable *)0x0;
    cVar2 = FUN_004498d0(param_1,&local_20);
    if (cVar2 != '\0') {
      FUN_004496a0();
      iVar4 = local_1c - (int)local_20;
      iVar5 = local_14 + 4;
      if (iVar4 < iVar5) {
        param_1 = param_3;
        iVar5 = iVar4;
      }
      else {
        param_1 = *(int *)((int)local_20 + local_14);
      }
      iVar6 = iVar4;
      iVar7 = param_3;
      if (iVar5 + 4 <= iVar4) {
        iVar6 = iVar5 + 4;
        iVar7 = *(int *)((int)local_20 + iVar5);
      }
      iVar5 = param_3;
      local_14 = iVar4;
      if (iVar6 + 4 <= iVar4) {
        iVar5 = *(int *)((int)local_20 + iVar6);
        local_14 = iVar6 + 4;
      }
      local_30 = (char *)0x0;
      local_2c = 0;
      local_28 = 0;
      FUN_004cb490(iVar5 * iVar7 * param_1);
      pcVar1 = local_30;
      param_2 = ((local_2c - (int)local_30) / 3) * 3;
      local_8 = (basic_ifstream<char,std::char_traits<char>_>_vftable *)CONCAT31(local_8._1_3_,1);
      iVar4 = local_1c - (int)local_20;
      if ((int)(local_14 + param_2) <= local_1c - (int)local_20) {
        memcpy(local_30,(void *)((int)local_20 + local_14),param_2);
        iVar4 = local_14 + param_2;
      }
      local_14 = iVar4;
      FUN_004e7650(param_1,iVar7,iVar5,pcVar1,param_3);
      if (pcVar1 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pcVar1);
      }
    }
    if (local_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_20);
    }
  }
  ExceptionList = local_10;
  return;
}


/* VoxelModel_set_data @ 004e7650  kind=gamemisc  attributed-by=ledger  size=514 */

void FUN_004e7650(undefined4 param_1,undefined4 param_2,int param_3,void *param_4,char param_5)

{
  longlong lVar1;
  void *_Dst;
  int in_ECX;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  char local_3c [4];
  char local_38 [4];
  char local_34 [4];
  undefined2 local_30;
  undefined1 local_2e;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(in_ECX + 0x44) = param_1;
  *(undefined4 *)(in_ECX + 0x48) = param_2;
  *(int *)(in_ECX + 0x4c) = param_3;
  if (*(void **)(in_ECX + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(in_ECX + 0x30));
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  if (((0 < *(int *)(in_ECX + 0x44)) && (0 < *(int *)(in_ECX + 0x48))) &&
     (0 < *(int *)(in_ECX + 0x4c))) {
    lVar1 = (ulonglong)(uint)(*(int *)(in_ECX + 0x48) * *(int *)(in_ECX + 0x44) * param_3) * 3;
    _Dst = (void *)FUN_0068d652(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    *(void **)(in_ECX + 0x30) = _Dst;
    memcpy(_Dst,param_4,
           *(int *)(in_ECX + 0x48) * *(int *)(in_ECX + 0x4c) * *(int *)(in_ECX + 0x44) * 3);
  }
  puVar7 = (undefined4 *)(in_ECX + 0x10);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 0x14) = *puVar7;
  iVar8 = in_ECX + 0x1c;
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(in_ECX + 0x1c);
  if ((param_5 == '\0') && (iVar4 = 0, 0 < *(int *)(in_ECX + 0x44))) {
    do {
      iVar6 = 0;
      if (0 < *(int *)(in_ECX + 0x48)) {
        do {
          iVar5 = 0;
          if (0 < *(int *)(in_ECX + 0x4c)) {
            local_38[0] = -1;
            local_38[1] = '\0';
            local_38[2] = 0;
            local_3c[0] = '\0';
            local_3c[1] = -1;
            local_3c[2] = 0;
            local_34[0] = '\0';
            local_34[1] = '\0';
            local_34[2] = 0xff;
            do {
              if (((iVar4 < 0) || (iVar6 < 0)) ||
                 ((iVar5 < 0 ||
                  (((*(int *)(in_ECX + 0x44) <= iVar4 || (*(int *)(in_ECX + 0x48) <= iVar6)) ||
                   (*(int *)(in_ECX + 0x4c) <= iVar5)))))) {
                puVar2 = (undefined2 *)&DAT_0076b340;
              }
              else {
                puVar2 = (undefined2 *)
                         (((*(int *)(in_ECX + 0x48) * iVar5 + iVar6) * *(int *)(in_ECX + 0x44) +
                          iVar4) * 3 + *(int *)(in_ECX + 0x30));
              }
              local_30 = *puVar2;
              local_2e = *(undefined1 *)(puVar2 + 1);
              iVar3 = 0;
              do {
                if (*(char *)((int)&local_30 + iVar3) != local_38[iVar3]) goto LAB_004e77c5;
                iVar3 = iVar3 + 1;
              } while (iVar3 < 3);
              local_20 = iVar4;
              local_1c = iVar6;
              local_18 = iVar5;
              FUN_00674ee0(&local_20);
LAB_004e77c5:
              iVar3 = 0;
              do {
                if (*(char *)((int)&local_30 + iVar3) != local_3c[iVar3]) goto LAB_004e77f5;
                iVar3 = iVar3 + 1;
              } while (iVar3 < 3);
              local_2c = iVar4;
              local_28 = iVar6;
              local_24 = iVar5;
              FUN_00674ee0(&local_2c);
LAB_004e77f5:
              iVar3 = 0;
              do {
                if (*(char *)((int)&local_30 + iVar3) != local_34[iVar3]) goto LAB_004e7825;
                iVar3 = iVar3 + 1;
              } while (iVar3 < 3);
              local_14 = iVar4;
              local_10 = iVar6;
              local_c = iVar5;
              FUN_00674ee0(&local_14);
LAB_004e7825:
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(in_ECX + 0x4c));
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(in_ECX + 0x48));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x44));
  }
  if (*(char *)(in_ECX + 0x56) == '\0') {
    FUN_004e7870(puVar7,iVar8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* VoxelChunk_cellAt @ 00598930  kind=gamemisc  attributed-by=ledger  size=156 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00598930(int param_1,int param_2,int param_3)

{
  int in_ECX;
  
  FUN_005a5b40(&param_1,&param_2,&param_3);
  if ((((-1 < param_1) && (-1 < param_2)) && (-1 < param_3)) &&
     (((param_1 < *(int *)(in_ECX + 100) && (param_2 < *(int *)(in_ECX + 0x68))) &&
      (param_3 < *(int *)(in_ECX + 0x6c))))) {
    return (undefined *)
           (*(int *)(in_ECX + 0x70) +
           ((*(int *)(in_ECX + 0x68) * param_3 + param_2) * *(int *)(in_ECX + 100) + param_1) * 0xc)
    ;
  }
  if ((DAT_0076b7f0 & 1) == 0) {
    DAT_0076b7f0 = DAT_0076b7f0 | 1;
    _DAT_0076b7e5 = 0;
    DAT_0076b7e7 = 0;
    _DAT_0076b7e8 = 0;
    DAT_0076b7ec = 0;
  }
  DAT_0076b7e4 = 0;
  return &DAT_0076b7e4;
}


/* Terrain_sampleHeightAtWorldXY @ 005989d0  kind=gamemisc  attributed-by=ledger  size=116 */

float10 FUN_005989d0(uint param_1,uint param_2)

{
  int iVar1;
  float10 fVar2;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  iVar1 = FUN_00487da0((int)(param_1 + ((int)param_1 >> 0x1f & 0x7ffU)) >> 0xb,
                       (int)(param_2 + ((int)param_2 >> 0x1f & 0x7ffU)) >> 0xb);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 1)) {
    local_8 = ((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10;
    local_c = param_2 << 0x10;
    local_10 = ((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10;
    local_14 = param_1 << 0x10;
    fVar2 = (float10)FUN_005fa4c0(&local_14,&local_c);
    return fVar2;
  }
  return (float10)0;
}


/* Creature_spawnDeathEffects @ 0059b180  kind=gamemisc  attributed-by=ledger  size=4679 */

/* WARNING: Removing unreachable block (ram,0x0059b33d) */
/* WARNING: Removing unreachable block (ram,0x0059b346) */
/* WARNING: Removing unreachable block (ram,0x0059b34b) */
/* WARNING: Removing unreachable block (ram,0x0059b34d) */
/* WARNING: Removing unreachable block (ram,0x0059b357) */
/* WARNING: Removing unreachable block (ram,0x0059c3af) */

void FUN_0059b180(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  bool bVar9;
  float10 fVar10;
  float fVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_18c;
  int local_17c;
  int *local_170;
  uint local_16c;
  undefined2 local_168 [2];
  undefined4 local_164;
  undefined4 local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined2 local_158;
  undefined1 local_154 [256];
  undefined4 local_54;
  uint local_50 [7];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20 [3];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar8 = rand_exref;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f207b;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((*(char *)(param_1 + 0x60) == '\0') || (*(char *)(param_1 + 0x60) == '\x03')) ||
     ((*(ushort *)(param_1 + 0x7e) & 0x800) != 0)) goto LAB_0059c3b8;
  rand();
  local_8 = 0;
  if (*(char *)(param_1 + 0x990) != '\0') {
    local_170 = (int *)(param_1 + 0x990);
    FUN_0066add0(&local_170);
  }
  if (*(char *)(param_1 + 0xaa8) != '\0') {
    local_170 = (int *)(param_1 + 0xaa8);
    FUN_0066add0(&local_170);
  }
  if (*(char *)(param_1 + 0x530) != '\0') {
    local_170 = (int *)(param_1 + 0x530);
    FUN_0066add0(&local_170);
  }
  if (*(char *)(param_1 + 0x878) != '\0') {
    local_170 = (int *)(param_1 + 0x878);
    FUN_0066add0(&local_170);
  }
  if (*(char *)(param_1 + 0x760) != '\0') {
    local_170 = (int *)(param_1 + 0x760);
    FUN_0066add0(&local_170);
  }
  if (*(char *)(param_1 + 0x648) != '\0') {
    local_170 = (int *)(param_1 + 0x648);
    FUN_0066add0(&local_170);
  }
  if (*(char *)(param_1 + 0x418) != '\0') {
    local_170 = (int *)(param_1 + 0x418);
    FUN_0066add0(&local_170);
  }
  if (((*(char *)(param_1 + 0x60) == '\x01') || (*(int *)(param_1 + 100) == 0x8f)) &&
     (iVar2 = rand(), iVar2 % 10 == 0)) {
    uVar3 = rand();
    uVar3 = uVar3 & 0x80000001;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
    }
    iVar2 = *(int *)(param_1 + 400) + -1 + uVar3;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    uVar3 = rand();
    uVar3 = uVar3 & 0x80000001;
    bVar9 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar9 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
    }
    uVar16 = 0xffffffff;
    if (bVar9) {
      uVar4 = FUN_005f8530(*(undefined1 *)(param_1 + 0x1a8),0);
      FUN_005f51e0(local_168,iVar2,uVar4,uVar16);
    }
    else {
      uVar4 = FUN_005f8530(*(undefined1 *)(param_1 + 0x1a8),0);
      FUN_005f8ad0(local_168,iVar2,uVar4,uVar16);
    }
    FUN_004c7e80(0x3d4ccccd,1);
    iVar5 = rand();
    local_20[0] = 1.0 - ((float)iVar5 * 2.0) / 32767.0;
    iVar5 = rand();
    local_20[1] = 1.0 - ((float)iVar5 * 2.0) / 32767.0;
    local_20[2] = 0.0;
    FUN_0042c460(local_20);
    uVar14 = 0x3f800000;
    uVar16 = param_2;
    iVar5 = rand();
    fVar11 = ((float)iVar5 * 360.0) / 32767.0;
    uVar4 = FUN_0042c800(local_50,local_50 + 6);
    FUN_0059aeb0(local_168,uVar4,fVar11,uVar14,uVar16);
    iVar5 = rand();
    if (iVar5 % 5 == 0) {
      uVar16 = FUN_005f8530(*(undefined1 *)(param_1 + 0x1a8),0);
      FUN_005f79e0(local_168,iVar2,uVar16);
      FUN_004c7e80(0x3d4ccccd,1);
      iVar2 = rand();
      local_20[0] = 1.0 - ((float)iVar2 * 2.0) / 32767.0;
      iVar2 = rand();
      local_20[1] = 1.0 - ((float)iVar2 * 2.0) / 32767.0;
      local_20[2] = 0.0;
      FUN_0042c460(local_20);
      uVar14 = 0x3f800000;
      uVar16 = param_2;
      iVar2 = rand();
      fVar11 = ((float)iVar2 * 360.0) / 32767.0;
      uVar4 = FUN_0042c800(local_50,local_50 + 6);
      FUN_0059aeb0(local_168,uVar4,fVar11,uVar14,uVar16);
    }
  }
  iVar2 = rand();
  local_17c = 0;
  iVar2 = iVar2 % 3 + 1;
  if (0 < iVar2) {
    do {
      local_168[0] = 0;
      local_164 = 0;
      local_160 = 0;
      local_15c = 0;
      local_15a = 0;
      local_54 = 0;
      memset(local_154,0,0x100);
      local_16c = 0x3f400000;
      local_158 = 1;
      switch(*(undefined4 *)(param_1 + 100)) {
      case 0x3a:
        local_168[0] = 0x20b;
        local_15c = CONCAT11(0x13,(undefined1)local_15c);
        local_16c = 0x3f4ccccd;
        break;
      default:
        if ((char)local_168[0] == '\0') goto LAB_0059bb28;
        break;
      case 0x46:
        local_168[0] = 0x120b;
        local_16c = 0x3f4ccccd;
        break;
      case 0x47:
        local_168[0] = 0x150b;
        local_16c = 0x3f4ccccd;
        break;
      case 0x78:
      case 0x79:
      case 0x7c:
      case 0x7e:
        uVar3 = (*pcVar8)();
        uVar3 = uVar3 & 0x80000001;
        bVar9 = uVar3 == 0;
        if ((int)uVar3 < 0) {
          bVar9 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar9) {
          local_168[0] = 0x50b;
          local_15c = CONCAT11(0x15,(undefined1)local_15c);
          local_16c = 0x3f4ccccd;
        }
        else {
          local_168[0] = 0x10b;
          local_15c = CONCAT11(2,(undefined1)local_15c);
          local_16c = 0x3f4ccccd;
        }
        break;
      case 0x7a:
        local_168[0] = 0x1b0b;
        goto LAB_0059b924;
      case 0x7b:
        local_168[0] = 0xb0b;
        local_15c = CONCAT11(0x1b,(undefined1)local_15c);
        local_16c = 0x3f4ccccd;
        break;
      case 0x7d:
        local_168[0] = 0x60b;
LAB_0059b924:
        local_15c = local_15c & 0xff;
        local_16c = 0x3f4ccccd;
        break;
      case 0x7f:
        local_168[0] = 0x140b;
        local_16c = 0x3f4ccccd;
        break;
      case 0x80:
        local_168[0] = 0x170b;
        local_16c = 0x3f4ccccd;
        break;
      case 0x83:
        local_168[0] = 0xb;
        local_15c = CONCAT11(0xb,(undefined1)local_15c);
        local_16c = 0x40400000;
        break;
      case 0x84:
        local_168[0] = 0xb;
        local_15c = CONCAT11(1,(undefined1)local_15c);
        local_16c = 0x40400000;
        break;
      case 0x85:
        local_168[0] = 0xb;
        local_15c = CONCAT11(0xc,(undefined1)local_15c);
        local_16c = 0x40400000;
        break;
      case 0x86:
        local_168[0] = 0xb;
        local_15c = CONCAT11(0x11,(undefined1)local_15c);
        local_16c = 0x3f4ccccd;
        break;
      case 0x87:
        local_168[0] = 0xb;
        local_15c = 0xd01;
        local_16c = 0x40400000;
        break;
      case 0x88:
        local_168[0] = 0xb;
        local_15c = 0xe02;
        local_16c = 0x40400000;
        break;
      case 0x89:
        local_168[0] = 0xb;
        local_15c = 0xf03;
        local_16c = 0x40400000;
        break;
      case 0x8a:
        local_168[0] = 0xb;
        local_15c = 0x1004;
        local_16c = 0x40400000;
        break;
      case 0x8b:
        local_168[0] = 0x80b;
        local_15c = CONCAT11(0x16,(undefined1)local_15c);
        local_16c = 0x3f4ccccd;
      }
      iVar5 = (*pcVar8)();
      local_20[0] = 1.0 - ((float)iVar5 * 2.0) / 32767.0;
      iVar5 = (*pcVar8)();
      local_20[2] = 0.0;
      iVar6 = 0;
      local_20[1] = 1.0 - ((float)iVar5 * 2.0) / 32767.0;
      do {
        local_170 = (int *)(local_20[iVar6] * 65536.0);
        uVar12 = FUN_0068d946();
        pcVar8 = rand_exref;
        local_50[iVar6 * 2] = (uint)uVar12;
        local_50[iVar6 * 2 + 1] = (uint)((ulonglong)uVar12 >> 0x20);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 3);
      local_50[6] = *(uint *)(param_1 + 0x10) + local_50[0];
      local_34 = *(int *)(param_1 + 0x14) + local_50[1] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x10),local_50[0]);
      local_30 = *(uint *)(param_1 + 0x18) + local_50[2];
      local_2c = *(int *)(param_1 + 0x1c) + local_50[3] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x18),local_50[2]);
      local_28 = *(uint *)(param_1 + 0x20) + local_50[4];
      local_24 = *(int *)(param_1 + 0x24) + local_50[5] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x20),local_50[4]);
      uVar3 = local_16c;
      uVar16 = param_2;
      iVar5 = rand();
      FUN_0059aeb0(local_168,local_50 + 6,((float)iVar5 * 360.0) / 32767.0,uVar3,uVar16);
      local_17c = local_17c + 1;
    } while (local_17c < iVar2);
  }
LAB_0059bb28:
  if ((*(char *)(param_1 + 0x60) == '\x01') || (*(int *)(param_1 + 100) == 0x8f)) {
    iVar2 = (*pcVar8)();
    if (iVar2 % 0x32 == 0) {
      iVar2 = (*pcVar8)();
      local_20[0] = 1.0 - ((float)iVar2 * 2.0) / 32767.0;
      iVar2 = (*pcVar8)();
      local_20[2] = 0.0;
      iVar5 = 0;
      local_20[1] = 1.0 - ((float)iVar2 * 2.0) / 32767.0;
      do {
        local_170 = (int *)(local_20[iVar5] * 65536.0);
        uVar12 = FUN_0068d946();
        pcVar8 = rand_exref;
        local_50[iVar5 * 2] = (uint)uVar12;
        local_50[iVar5 * 2 + 1] = (uint)((ulonglong)uVar12 >> 0x20);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      local_50[6] = *(uint *)(param_1 + 0x10) + local_50[0];
      local_34 = *(int *)(param_1 + 0x14) + local_50[1] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x10),local_50[0]);
      local_30 = *(uint *)(param_1 + 0x18) + local_50[2];
      local_2c = *(int *)(param_1 + 0x1c) + local_50[3] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x18),local_50[2]);
      local_28 = *(uint *)(param_1 + 0x20) + local_50[4];
      local_24 = *(int *)(param_1 + 0x24) + local_50[5] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x20),local_50[4]);
      uVar14 = 0x3f400000;
      uVar16 = param_2;
      iVar2 = rand();
      fVar11 = ((float)iVar2 * 360.0) / 32767.0;
      puVar13 = local_50 + 6;
      uVar4 = FUN_005f8530(*(byte *)(param_1 + 0x1a8) + 1,0);
      uVar4 = FUN_005f6d50(local_168,*(undefined4 *)(param_1 + 400),uVar4);
      FUN_0059aeb0(uVar4,puVar13,fVar11,uVar14,uVar16);
    }
    uVar16 = param_2;
    if ((*(ushort *)(param_1 + 0x7e) & 0x18) == 0) {
      fVar10 = (float10)FUN_00445f60((float)*(int *)(param_1 + 400),*(undefined1 *)(param_1 + 0x1a8)
                                    );
      local_170 = (int *)((float)fVar10 * 10.0);
      iVar2 = (*pcVar8)();
      fVar11 = (((float)iVar2 * 2.0) / 32767.0 + 1.0) * (float)local_170;
      if ((*(ushort *)(param_1 + 0x7e) & 0x200) != 0) {
        fVar11 = fVar11 * 10.0;
      }
      iVar2 = (int)fVar11 / 100;
      iVar5 = (int)fVar11 % 100;
      local_170 = (int *)(iVar2 / 100);
      iVar2 = iVar2 % 100;
      if (iVar5 != 0) {
        FUN_0042f3e0();
        local_168[0] = 0xc;
        local_15c = CONCAT11(10,(undefined1)local_15c);
        local_158 = (undefined2)iVar5;
        iVar5 = (*pcVar8)();
        local_20[0] = 1.0 - ((float)iVar5 * 2.0) / 32767.0;
        iVar5 = (*pcVar8)();
        local_20[1] = 1.0 - ((float)iVar5 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_0042c460(local_20);
        uVar15 = 0x3f400000;
        uVar4 = param_2;
        iVar5 = (*pcVar8)(0x3f400000,param_2);
        fVar11 = ((float)iVar5 * 360.0) / 32767.0;
        uVar14 = FUN_0042c800(local_50,local_50 + 6);
        FUN_0059aeb0(local_168,uVar14,fVar11,uVar15,uVar4);
      }
      if (iVar2 != 0) {
        FUN_0042f3e0();
        local_168[0] = 0xc;
        local_15c = CONCAT11(0xc,(undefined1)local_15c);
        local_158 = (undefined2)iVar2;
        iVar2 = (*pcVar8)();
        local_20[0] = 1.0 - ((float)iVar2 * 2.0) / 32767.0;
        iVar2 = (*pcVar8)();
        local_20[1] = 1.0 - ((float)iVar2 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_0042c460(local_20);
        uVar15 = 0x3f400000;
        uVar4 = param_2;
        iVar2 = (*pcVar8)(0x3f400000,param_2);
        fVar11 = ((float)iVar2 * 360.0) / 32767.0;
        uVar14 = FUN_0042c800(local_50,local_50 + 6);
        FUN_0059aeb0(local_168,uVar14,fVar11,uVar15,uVar4);
      }
      piVar7 = local_170;
      if (local_170 != (int *)0x0) {
        FUN_0042f3e0();
        local_168[0] = 0xc;
        local_15c = CONCAT11(0xb,(undefined1)local_15c);
        local_158 = SUB42(piVar7,0);
        iVar2 = (*pcVar8)();
        local_20[0] = 1.0 - ((float)iVar2 * 2.0) / 32767.0;
        iVar2 = (*pcVar8)();
        local_20[1] = 1.0 - ((float)iVar2 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_0042c460(local_20);
        uVar14 = 0x3f400000;
        iVar2 = (*pcVar8)(0x3f400000,param_2);
        fVar11 = ((float)iVar2 * 360.0) / 32767.0;
        uVar4 = FUN_0042c800(local_50,local_50 + 6);
LAB_0059c156:
        FUN_0059aeb0(local_168,uVar4,fVar11,uVar14,uVar16);
      }
    }
    else {
      iVar2 = (*pcVar8)();
      iVar2 = iVar2 % 1000 + (uint)*(byte *)(param_1 + 0x1a8) * 0x14;
      if (iVar2 < 700) {
        local_16c = 0;
      }
      else if (iVar2 < 0x3b6) {
        local_16c = 1;
      }
      else {
        local_16c = (0x3e6 < iVar2) + 2;
      }
      if (((*(ushort *)(param_1 + 0x7e) & 0x200) != 0) && (local_16c = local_16c + 1, 3 < local_16c)
         ) {
        local_16c = 3;
      }
      iVar2 = (*pcVar8)();
      if ((iVar2 % 0x14 == 0) && (local_16c != 0)) {
        FUN_0042f3e0();
        local_168[0] = CONCAT11(local_168[0]._1_1_,0xe);
        local_164 = (*pcVar8)();
        local_158 = *(undefined2 *)(param_1 + 400);
        local_15c = CONCAT11(local_15c._1_1_,(char)local_16c);
        iVar2 = (*pcVar8)();
        local_20[0] = 1.0 - ((float)iVar2 * 2.0) / 32767.0;
        iVar2 = (*pcVar8)();
        local_20[1] = 1.0 - ((float)iVar2 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_0042c460(local_20);
        uVar14 = 0x3f400000;
        iVar2 = (*pcVar8)(0x3f400000,param_2);
        fVar11 = ((float)iVar2 * 360.0) / 32767.0;
        uVar4 = FUN_0042c800(local_50,local_50 + 6);
        goto LAB_0059c156;
      }
    }
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x11dc);
    if ((iVar2 != *(int *)(param_1 + 0x11e0)) &&
       (local_16c = 0, 0 < (*(int *)(param_1 + 0x11e0) - iVar2) / 0xc)) {
      local_17c = 0;
      do {
        piVar7 = *(int **)(local_17c + iVar2);
        local_170 = piVar7;
        if (piVar7 != *(int **)(local_17c + 4 + *(int *)(param_1 + 0x11dc))) {
          do {
            piVar1 = piVar7 + 1;
            if ((((char)piVar7[1] != '\0') && (*piVar7 != 0)) &&
               (local_18c = 0, local_170 = piVar7, 0 < *piVar7)) {
              do {
                if (((char)*piVar1 != '\x01') || (*(char *)((int)piVar7 + 5) != '\x01')) {
                  iVar2 = (*pcVar8)();
                  local_20[0] = 1.0 - ((float)iVar2 * 2.0) / 32767.0;
                  iVar2 = (*pcVar8)();
                  local_20[2] = 0.0;
                  iVar5 = 0;
                  local_20[1] = 1.0 - ((float)iVar2 * 2.0) / 32767.0;
                  do {
                    uVar12 = FUN_0068d946();
                    pcVar8 = rand_exref;
                    local_50[iVar5 * 2] = (uint)uVar12;
                    local_50[iVar5 * 2 + 1] = (uint)((ulonglong)uVar12 >> 0x20);
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < 3);
                  local_50[6] = *(uint *)(param_1 + 0x10) + local_50[0];
                  local_34 = *(int *)(param_1 + 0x14) + local_50[1] +
                             (uint)CARRY4(*(uint *)(param_1 + 0x10),local_50[0]);
                  local_30 = *(uint *)(param_1 + 0x18) + local_50[2];
                  local_2c = *(int *)(param_1 + 0x1c) + local_50[3] +
                             (uint)CARRY4(*(uint *)(param_1 + 0x18),local_50[2]);
                  local_28 = *(uint *)(param_1 + 0x20) + local_50[4];
                  local_24 = *(int *)(param_1 + 0x24) + local_50[5] +
                             (uint)CARRY4(*(uint *)(param_1 + 0x20),local_50[4]);
                  uVar4 = 0x3f400000;
                  uVar16 = param_2;
                  iVar2 = rand();
                  FUN_0059aeb0(piVar1,local_50 + 6,((float)iVar2 * 360.0) / 32767.0,uVar4,uVar16);
                  piVar7 = local_170;
                }
                local_18c = local_18c + 1;
              } while (local_18c < *piVar7);
            }
            piVar7 = piVar7 + 0x47;
            local_170 = piVar7;
          } while (piVar7 != *(int **)(local_17c + 4 + *(int *)(param_1 + 0x11dc)));
        }
        iVar2 = *(int *)(param_1 + 0x11dc);
        local_16c = local_16c + 1;
        local_17c = local_17c + 0xc;
      } while ((int)local_16c < (*(int *)(param_1 + 0x11e0) - iVar2) / 0xc);
    }
  }
LAB_0059c3b8:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* Chunk_generateObjects @ 005af170  kind=gamemisc  attributed-by=ledger  size=61916 */
// (decompilation unavailable)
undefined FUN_005af170(void) { }

/* terrain_biomeColorFromNoise @ 005c4520  kind=gamemisc  attributed-by=ledger  size=456 */

float * FUN_005c4520(float *param_1,int param_2,int param_3)

{
  int in_ECX;
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x800274) + (double)param_2 * 0.03,
                                (double)*(int *)(in_ECX + 0x800278) + (double)param_3 * 0.03);
  fVar2 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x80027c) + (double)param_2 * 0.01,
                                (double)*(int *)(in_ECX + 0x800280) + (double)param_3 * 0.01);
  fVar5 = ((float)fVar1 + 1.0) * 0.5 * 80.0;
  fVar4 = ((float)fVar2 + 1.0) * 0.5;
  fVar6 = (1.0 - fVar4) * 240.0;
  fVar3 = fVar6 + fVar4 * 240.0 + fVar5;
  fVar6 = fVar6 + fVar4 * 180.0 + fVar5;
  fVar5 = (1.0 - fVar4) * 100.0 + fVar4 * 50.0 + fVar5;
  *param_1 = fVar3;
  param_1[1] = fVar6;
  param_1[2] = fVar5;
  if (0.0 <= fVar3) {
    if (255.0 < fVar3) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar6 < 0.0) {
    param_1[1] = 0.0;
  }
  if (255.0 < param_1[1]) {
    param_1[1] = 255.0;
  }
  if (fVar5 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  return param_1;
}


/* GameController_sampleHumidityGrid @ 005c4dd0  kind=game  attributed-by=ledger  size=1228 */

void FUN_005c4dd0(int param_1,int param_2)

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
  int in_ECX;
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
  
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_7c = (int)(param_1 + -0x4000 + (param_1 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (int)(param_2 + -0x4000 + (param_2 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (int)(param_1 + 0x4000 + (param_1 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar13 = (int)((param_2 + 0x4000 >> 0x1f & 0x3fffU) + param_2 + 0x4000) >> 0xe;
  fVar15 = (float10)FUN_004c0ef0((double)param_2 * 0.0005,0x40aabe0000000000);
  fVar16 = (float10)FUN_004c0ef0((double)param_1 * 0.0005,0x40d6df4000000000);
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
            (puVar14 = *(uint **)(in_ECX + (iVar9 + iVar10) * 4), puVar14 == (uint *)0x0))))
        goto LAB_005c5286;
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
               (puVar14 = *(uint **)(in_ECX + (iVar10 + iVar11) * 4), puVar14 == (uint *)0x0))))))
          goto LAB_005c5286;
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
LAB_005c5286:
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


/* terrain_surfaceColor_blend @ 005c56e0  kind=gamemisc  attributed-by=ledger  size=1822 */

void FUN_005c56e0(undefined4 *param_1,uint param_2,uint param_3,int param_4,float param_5,
                 float param_6,undefined4 param_7)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float local_40;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [4];
  int local_1c;
  uint local_18;
  float local_14 [3];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  *param_1 = 0x4000000;
  pfVar1 = (float *)FUN_005ee540();
  local_40 = *pfVar1;
  local_30 = pfVar1[1];
  local_28 = pfVar1[2];
  local_14[0] = local_40;
  local_14[1] = local_30;
  local_14[2] = local_28;
  fVar4 = (float10)FUN_005f9340();
  local_2c = ((float)fVar4 * 10.0 - 0.3) * 1.5;
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
    fVar4 = (float10)FUN_004c0ef0((double)(int)param_2 * 0.03,(double)(int)param_3 * 0.03);
    fVar5 = (float)fVar4;
    if (fVar5 <= 1.0) {
      if (fVar5 < 0.0) {
        fVar5 = 0.0;
      }
    }
    else {
      fVar5 = 1.0;
    }
    fVar5 = 1.0 - fVar5 * fVar5;
    local_34 = (1.0 - fVar5 * fVar5) * 0.8 * local_24;
    fVar5 = 1.0 - local_34;
    local_24 = local_40 * fVar5;
    local_30 = local_30 * fVar5;
    local_28 = local_28 * fVar5;
    pfVar1 = (float *)FUN_005f9620(local_20,param_2,param_3,param_4,param_7);
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
    iVar2 = FUN_00487da0((int)(param_2 + ((int)param_2 >> 0x1f & 0x7ffU)) >> 0xb,
                         (int)(param_3 + ((int)param_3 >> 0x1f & 0x7ffU)) >> 0xb);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) == 4)) {
      local_34 = (float)(((int)param_3 >> 0x1f) << 0x10 | param_3 >> 0x10);
      local_38 = param_3 << 0x10;
      local_18 = ((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10;
      local_1c = param_2 << 0x10;
      fVar4 = (float10)FUN_005f8e10(&local_1c,&local_38);
      fVar6 = (float)fVar4 - 0.5;
      fVar5 = 0.0;
      if ((0.0 <= fVar6) && (fVar5 = fVar6, 1.0 < fVar6)) {
        fVar5 = 1.0;
      }
      fVar5 = 1.0 - fVar5 * fVar5;
      local_24 = (1.0 - fVar5 * fVar5) * local_24;
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
    fVar5 = 1.0 - local_24;
    local_34 = local_40 * fVar5;
    local_2c = local_30 * fVar5;
    local_28 = local_28 * fVar5;
    pfVar1 = (float *)FUN_005f9bc0();
    local_40 = *pfVar1 * local_24 + local_34;
    local_30 = pfVar1[1] * local_24 + local_2c;
    local_28 = pfVar1[2] * local_24 + local_28;
    local_14[0] = local_40;
    local_14[1] = local_30;
    local_14[2] = local_28;
  }
  fVar4 = (float10)FUN_004c0ef0((double)(int)param_2 * 0.01 + 854.0,
                                (double)(int)param_3 * 0.01 + 985.0);
  local_34 = (float)fVar4;
  fVar5 = (local_34 + (float)(0xf - param_4) / 10.0) - 0.5;
  if (fVar5 <= 1.0) {
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
  }
  else {
    fVar5 = 1.0;
  }
  fVar5 = 1.0 - fVar5 * fVar5;
  local_2c = 1.0 - fVar5 * fVar5;
  if (param_6 < 0.2) {
    local_2c = local_2c * (param_6 / 0.2);
  }
  if (0.0 < local_2c) {
    fVar5 = 1.0 - local_2c;
    local_34 = fVar5 * local_40;
    local_24 = fVar5 * local_30;
    local_28 = fVar5 * local_28;
    pfVar1 = (float *)FUN_005c4520();
    fVar5 = pfVar1[2];
    local_40 = *pfVar1 * local_2c + local_34;
    local_30 = pfVar1[1] * local_2c + local_24;
    *(undefined1 *)((int)param_1 + 3) = 9;
    local_28 = fVar5 * local_2c + local_28;
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
    fVar5 = 1.0 - local_2c;
    local_34 = fVar5 * local_40;
    local_24 = fVar5 * local_30;
    local_28 = fVar5 * local_28;
    pfVar1 = (float *)FUN_005f9e50();
    local_40 = *pfVar1 * local_2c + local_34;
    local_30 = pfVar1[1] * local_2c + local_24;
    local_28 = pfVar1[2] * local_2c + local_28;
    local_14[0] = local_40;
    local_14[1] = local_30;
    local_14[2] = local_28;
  }
  iVar2 = FUN_004347a0();
  if (iVar2 == 0) {
    fVar4 = (float10)FUN_005ef040(param_2,param_3);
    local_2c = (float)fVar4;
    local_34 = local_2c;
  }
  else {
    local_2c = *(float *)(iVar2 + 0xc);
  }
  if (0.0 < local_2c) {
    fVar5 = 1.0 - local_2c;
    local_34 = fVar5 * local_40;
    local_24 = fVar5 * local_30;
    local_28 = fVar5 * local_28;
    pfVar1 = (float *)FUN_005f9620(local_20,param_2,param_3,param_4,param_7);
    local_14[0] = *pfVar1 * local_2c + local_34;
    local_14[1] = pfVar1[1] * local_2c + local_24;
    local_14[2] = pfVar1[2] * local_2c + local_28;
    if (0.5 < local_2c) {
      *(undefined1 *)((int)param_1 + 3) = 0xc;
    }
  }
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    *(char *)(iVar2 + (int)param_1) = (char)(int)local_14[iVar2];
    iVar2 = iVar3;
  } while (iVar3 < 3);
  *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) | 0x20;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* terrain_generateColumnColor @ 005c5e20  kind=gamemisc  attributed-by=ledger  size=4874 */

void FUN_005c5e20(uint param_1,uint param_2,undefined4 param_3)

{
  uint *puVar1;
  float fVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  undefined8 uVar19;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  uint *local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  double local_140;
  uint local_134;
  float local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  undefined8 local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  uint local_f0;
  undefined4 local_ec;
  int local_e8;
  float local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  double local_b8;
  uint local_b0;
  uint local_ac;
  float local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  float local_4c;
  float local_48;
  uint local_44;
  
  local_44 = DAT_0076aa78 ^ (uint)&local_174;
  local_110 = (double)(int)param_2;
  local_100 = local_110 * 0.0001;
  local_118 = (double)(int)param_1;
  local_108 = local_118 * 0.0001;
  local_130 = (float)param_1;
  local_124 = param_2;
  local_ec = param_3;
  fVar11 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x80018c) + local_108,
                                 (double)*(int *)(in_ECX + 0x800190) + local_100);
  local_164 = (float)fVar11;
  local_14c = (local_164 + 1.0) * 0.5;
  fVar11 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x800194) + local_108,
                                 (double)*(int *)(in_ECX + 0x800198) + local_100);
  local_164 = (float)fVar11;
  local_100 = local_110 * 0.001;
  local_148 = (local_164 + 1.0) * 0.5;
  local_108 = local_118 * 0.001;
  fVar11 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x80019c) + local_108,
                                 (double)*(int *)(in_ECX + 0x8001a0) + local_100);
  local_164 = (float)fVar11;
  local_160 = (local_164 + 1.0) * 0.5;
  fVar11 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x8001a4) + local_108,
                                 (double)*(int *)(in_ECX + 0x8001a8) + local_100);
  local_164 = (float)fVar11;
  local_b8 = local_110 * 0.002;
  local_158 = (local_164 + 1.0) * 0.5;
  local_120 = local_118 * 0.002;
  fVar11 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x8001ac) + local_120,
                                 (double)*(int *)(in_ECX + 0x8001b0) + local_b8);
  local_164 = (float)fVar11;
  local_14c = local_14c * local_14c;
  local_140._0_4_ = (local_164 + 1.0) * 0.5;
  local_148 = local_148 * local_148;
  local_140._0_4_ = local_140._0_4_ * local_140._0_4_;
  local_160 = local_160 * local_160;
  local_158 = local_158 * local_158;
  fVar11 = (float10)FUN_005f9340();
  fVar13 = (float)fVar11 * 4.0;
  if (1.0 < fVar13) {
    fVar13 = 1.0;
  }
  local_150 = fVar13 * 3.0 * fVar13 - fVar13 * 2.0 * fVar13 * fVar13;
  local_150 = local_150 * local_150;
  local_e4 = local_150 * local_160;
  local_174 = local_150 * local_158;
  local_150 = local_150 * local_140._0_4_;
  local_154 = (float)((int)(param_1 + 0x4000 + ((int)(param_1 + 0x4000) >> 0x1f & 0x3fffU)) >> 0xe);
  local_16c = (float)((int)(local_124 + 0x4000 + ((int)(local_124 + 0x4000) >> 0x1f & 0x3fffU)) >>
                     0xe);
  iVar9 = (int)(((int)(param_1 - 0x4000) >> 0x1f & 0x3fffU) + (param_1 - 0x4000)) >> 0xe;
  local_164 = 0.0;
  local_170 = (float)iVar9;
  local_158 = (float)((int)((local_124 - 0x4000) + ((int)(local_124 - 0x4000) >> 0x1f & 0x3fffU)) >>
                     0xe);
  fVar11 = (float10)FUN_004c0ef0(local_110 * 0.0005,0x40aabe0000000000);
  local_140._0_4_ = (float)fVar11;
  local_4c = local_140._0_4_ * 3.0 * 256.0;
  local_f8 = (double)CONCAT44(local_f8._4_4_,local_4c);
  fVar11 = (float10)FUN_004c0ef0(local_118 * 0.0005,0x40d6df4000000000);
  local_15c = (uint *)((float)fVar11 * 3.0 * 256.0);
  local_140._0_4_ = local_f8._0_4_ * 65536.0;
  local_134 = ((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10;
  local_128 = param_1 * 0x10000;
  local_48 = (float)local_15c;
  lVar18 = FUN_0068d946();
  lVar18 = lVar18 + CONCAT44(local_134,param_1 * 0x10000);
  local_f0 = (uint)lVar18;
  local_e8 = (int)((ulonglong)lVar18 >> 0x20);
  local_12c = ((int)local_124 >> 0x1f) << 0x10 | local_124 >> 0x10;
  local_140 = (double)CONCAT44(local_140._4_4_,(float)local_15c * 65536.0);
  uVar7 = local_124 * 0x10000;
  local_160 = (float)uVar7;
  lVar18 = FUN_0068d946();
  lVar18 = lVar18 + CONCAT44(local_12c,uVar7);
  uVar7 = (uint)lVar18;
  iVar6 = (int)((ulonglong)lVar18 >> 0x20);
  puVar3 = (uint *)0x0;
  fVar16 = 0.0;
  local_15c = (uint *)0x0;
  fVar13 = 0.0;
  if (iVar9 <= (int)local_154) {
    iVar10 = iVar9 * 0x400 + 0x10002f;
    fVar17 = local_158;
    do {
      for (; (int)fVar17 <= (int)local_16c; fVar17 = (float)((int)fVar17 + 1)) {
        if ((((-1 < iVar9) && (-1 < (int)fVar17)) && (iVar10 < 0x20002f)) &&
           (((int)fVar17 < 0x400 &&
            (puVar1 = *(uint **)(in_ECX + (iVar10 + (int)fVar17) * 4), puVar3 = local_15c,
            puVar1 != (uint *)0x0)))) {
          local_70 = *puVar1;
          uStack_6c = ((int)local_70 >> 0x1f) << 0x10 | local_70 >> 0x10;
          local_70 = local_70 * 0x10000;
          local_68 = puVar1[1];
          uStack_64 = ((int)local_68 >> 0x1f) << 0x10 | local_68 >> 0x10;
          local_68 = local_68 * 0x10000;
          local_90 = CONCAT44((uStack_6c - local_e8) - (uint)(local_70 < local_f0),
                              local_70 - local_f0);
          local_88 = CONCAT44((uStack_64 - iVar6) - (uint)(local_68 < uVar7),local_68 - uVar7);
          local_168 = (float)local_88;
          local_80 = (float)local_90 * 1.5258789e-05;
          local_7c = local_168 * 1.5258789e-05;
          fVar14 = local_7c * local_7c + local_80 * local_80;
          if ((local_15c == (uint *)0x0) || (fVar14 < fVar13)) {
            puVar3 = puVar1;
            fVar13 = fVar14;
            local_15c = puVar1;
          }
        }
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x400;
      fVar17 = local_158;
    } while (iVar9 <= (int)local_154);
  }
  fVar17 = 0.0;
  local_15c = (uint *)0x3f800000;
  local_144 = 0.0;
  if (puVar3 != (uint *)0x0) {
    fVar14 = 0.0;
    if ((int)local_170 <= (int)local_154) {
      iVar9 = (int)local_170 * 0x400 + 0x10002f;
      fVar2 = local_158;
      do {
        for (; (int)fVar2 <= (int)local_16c; fVar2 = (float)((int)fVar2 + 1)) {
          if (((-1 < (int)local_170) && (-1 < (int)fVar2)) &&
             ((iVar9 < 0x20002f &&
              (((int)fVar2 < 0x400 &&
               (puVar3 = *(uint **)(in_ECX + (iVar9 + (int)fVar2) * 4), puVar3 != (uint *)0x0))))))
          {
            local_60 = *puVar3;
            uStack_5c = ((int)local_60 >> 0x1f) << 0x10 | local_60 >> 0x10;
            local_60 = local_60 * 0x10000;
            local_58 = puVar3[1];
            uStack_54 = ((int)local_58 >> 0x1f) << 0x10 | local_58 >> 0x10;
            local_58 = local_58 * 0x10000;
            local_a0 = CONCAT44((uStack_5c - local_e8) - (uint)(local_60 < local_f0),
                                local_60 - local_f0);
            local_98 = CONCAT44((uStack_54 - iVar6) - (uint)(local_58 < uVar7),local_58 - uVar7);
            local_168 = (float)local_98;
            local_78 = (float)local_a0 * 1.5258789e-05;
            local_74 = local_168 * 1.5258789e-05;
            fVar15 = ((local_74 * local_74 + local_78 * local_78) - fVar13) * 5e-08;
            if (1.0 < fVar15) {
              fVar15 = 1.0;
            }
            fVar15 = (1.0 - fVar15) * (1.0 - fVar15);
            fVar14 = fVar14 + fVar15;
            fVar17 = fVar17 + (float)(int)puVar3[6] * fVar15;
            if (0 < (int)puVar3[6]) {
              fVar16 = fVar16 + fVar15;
            }
          }
        }
        local_170 = (float)((int)local_170 + 1);
        iVar9 = iVar9 + 0x400;
        fVar2 = local_158;
      } while ((int)local_170 <= (int)local_154);
    }
    local_164 = fVar17 / fVar14;
    local_15c = (uint *)(fVar16 / fVar14);
    local_144 = local_164;
  }
  local_140 = local_110 * 0.0002;
  local_f8 = local_118 * 0.0002;
  fVar11 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x8001bc) + local_f8,
                                 (double)*(int *)(in_ECX + 0x8001c0) + local_140);
  local_168 = (float)fVar11;
  local_154 = (local_168 + 1.0) * 100.0 * local_148;
  fVar11 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x8001b4) + local_f8,
                                 (double)*(int *)(in_ECX + 0x8001b8) + local_140);
  uVar7 = local_124;
  fVar13 = local_130;
  local_168 = (float)fVar11;
  local_154 = (local_154 + (local_168 + 1.0) * 100.0 * local_14c) * (float)local_15c + local_164;
  fVar11 = (float10)FUN_005989d0(local_130,local_124);
  local_130 = (float)fVar11;
  if (0.5 < local_130) {
    fVar16 = (local_130 - 0.5) * 2.0;
    if (1.0 < fVar16) {
      fVar16 = 1.0;
    }
    local_150 = (1.0 - (fVar16 * 3.0 * fVar16 - fVar16 * 2.0 * fVar16 * fVar16)) * local_150;
  }
  fVar11 = (float10)FUN_005f9f70();
  local_130 = (float)fVar11;
  fVar16 = local_130;
  if (local_130 < 0.02) {
    fVar16 = 0.02;
  }
  fVar16 = fVar16 * 2.0;
  if (1.0 < fVar16) {
    fVar16 = 1.0;
  }
  fVar16 = 1.0 - fVar16;
  uVar8 = (int)(((int)fVar13 >> 0x1f & 0x7ffU) + (int)fVar13) >> 0xb;
  uVar7 = (int)(((int)uVar7 >> 0x1f & 0x7ffU) + uVar7) >> 0xb;
  fVar13 = 1.0 - fVar16 * fVar16 * fVar16 * fVar16;
  local_14c = fVar13 * 0.1 + 0.9;
  local_150 = (fVar13 * 0.5 + 0.5) * local_150;
  local_148 = local_14c * local_e4;
  local_14c = local_14c * local_174;
  if ((((-1 < (int)uVar8) && (-1 < (int)uVar7)) && ((int)uVar8 < 0x2000)) && ((int)uVar7 < 0x2000))
  {
    iVar6 = (int)(uVar8 * 8 + ((int)(uVar8 * 8) >> 0x1f & 0x3fU)) >> 6;
    iVar9 = (int)(((int)(uVar7 * 8) >> 0x1f & 0x3fU) + uVar7 * 8) >> 6;
    if (((-1 < iVar6) && (-1 < iVar9)) &&
       ((iVar6 < 0x400 &&
        ((iVar9 < 0x400 &&
         (iVar6 = *(int *)(in_ECX + 0xbc + (iVar6 * 0x400 + iVar9) * 4), iVar6 != 0)))))) {
      uVar8 = uVar8 & 0x80000007;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
      }
      uVar7 = uVar7 & 0x80000007;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
      }
      puVar3 = (uint *)(iVar6 + 0x14018 + (uVar7 + uVar8 * 8) * 0x68);
      if ((puVar3 != (uint *)0x0) && (puVar3[6] == 1)) {
        local_d8 = (uint)local_160;
        local_d4 = local_12c;
        local_e0 = local_128;
        local_dc = local_134;
        fVar11 = (float10)FUN_005f8e10(&local_e0,&local_d8);
        local_174 = (float)fVar11;
        fVar13 = 1.0 - local_174;
        if (0.0 < fVar13) {
          fVar13 = fVar13 * fVar13;
        }
        else {
          fVar13 = 0.0;
        }
        fVar13 = 1.0 - fVar13 * 0.5;
        local_148 = fVar13 * local_148;
        local_14c = fVar13 * local_14c;
        local_150 = fVar13 * local_150;
      }
      goto LAB_005c6a63;
    }
  }
  puVar3 = (uint *)0x0;
LAB_005c6a63:
  fVar11 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x8001cc) + local_120,
                                 (double)*(int *)(in_ECX + 0x8001d0) + local_b8);
  local_174 = (float)fVar11;
  local_170 = (local_174 + 1.0) * 50.0 * local_14c;
  fVar11 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x8001c4) + local_120,
                                 (double)*(int *)(in_ECX + 0x8001c8) + local_b8);
  local_174 = (float)fVar11;
  local_170 = local_170 + (local_174 + 1.0) * 50.0 * local_148;
  fVar11 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x8001d4) + local_118 * 0.01,
                                 (double)*(int *)(in_ECX + 0x8001d8) + local_110 * 0.01);
  local_174 = (float)fVar11;
  local_170 = local_170 + (local_174 + 1.0) * 20.0 * local_150 + local_154;
  local_16c = local_170;
  if ((puVar3 != (uint *)0x0) && (puVar3[6] != 0)) {
    uVar4 = __alldiv(puVar3[2],puVar3[3],0x10000,0);
    uVar5 = __alldiv(*puVar3,puVar3[1],0x10000,0);
    iVar6 = FUN_00477e10(uVar5,uVar4);
    uVar7 = local_128;
    if ((iVar6 != 0) && ((iVar6 = *(int *)(iVar6 + 0x18), iVar6 < 0 && (puVar3[6] != 0xb)))) {
      local_110 = local_110 * 0.0025;
      local_118 = local_118 * 0.0025;
      fVar11 = (float10)FUN_004c0ef0(local_118 + 8432984.0,local_110 + 90493.0);
      local_174 = (float)fVar11 * 100.0 * 65536.0;
      uVar19 = FUN_0068d946();
      uVar7 = local_128;
      uVar8 = (uint)uVar19 - *puVar3;
      local_120 = (double)CONCAT44((((int)((ulonglong)uVar19 >> 0x20) - puVar3[1]) -
                                   (uint)((uint)uVar19 < *puVar3)) + local_134 +
                                   (uint)CARRY4(uVar8,local_128),uVar8 + local_128);
      local_174 = (float)(longlong)local_120;
      local_a8 = local_174 * 1.5258789e-05;
      fVar11 = (float10)FUN_004c0ef0(local_118 + 3423.0,local_110 + 112.0);
      local_174 = ((float)fVar11 * 100.0 + (float)(int)local_124) * 65536.0;
      uVar19 = FUN_0068d946();
      local_120 = (double)CONCAT44(((int)((ulonglong)uVar19 >> 0x20) - puVar3[3]) -
                                   (uint)((uint)uVar19 < puVar3[2]),(uint)uVar19 - puVar3[2]);
      local_174 = (float)(longlong)local_120;
      fVar13 = (local_174 * 1.5258789e-05 * local_174 * 1.5258789e-05 + local_a8 * local_a8) /
               (((float)puVar3[4] + 256.0) * ((float)puVar3[4] + 256.0));
      if (1.0 < fVar13) {
        fVar13 = 1.0;
      }
      if (0.0 < 1.0 - fVar13) {
        fVar13 = (1.0 - fVar13) * 1.1;
        if (1.0 < fVar13) {
          fVar13 = 1.0;
        }
        local_170 = local_170 -
                    (fVar13 * 3.0 * fVar13 - fVar13 * 2.0 * fVar13 * fVar13) * (float)iVar6;
        local_16c = local_170;
      }
    }
    uVar8 = puVar3[6];
    if (uVar8 == 4) {
      local_c0 = (uint)local_160;
      local_bc = local_12c;
      local_ac = local_134;
      local_b0 = uVar7;
      fVar11 = (float10)FUN_005f8e10(&local_b0,&local_c0);
      local_174 = (float)fVar11;
      if (0.25 < local_174) {
        if (local_174 < 1.0) {
          dVar12 = (double)local_174;
          libm_sse2_sqrt_precise();
          fVar13 = ((float)dVar12 - 0.5) * 2.0;
          fVar13 = 1.0 - fVar13 * fVar13;
          local_170 = (((float)puVar3[5] - 25.0) - local_170) * fVar13 * fVar13 + local_170;
          local_16c = local_170;
        }
      }
      else {
        fVar13 = 1.0 - local_174 * 4.0;
        fVar13 = fVar13 * fVar13;
        local_170 = (1.0 - fVar13) * ((float)puVar3[5] - 25.0) + ((float)puVar3[5] - 50.0) * fVar13;
        local_16c = local_170;
      }
    }
    if ((uVar8 == 6) || (uVar8 == 7)) {
      local_d0 = (uint)local_160;
      local_cc = local_12c;
      local_c4 = local_134;
      local_c8 = uVar7;
      fVar11 = (float10)FUN_005f8e10(&local_c8,&local_d0);
      local_174 = (float)fVar11;
      if (0.25 < local_174) {
        if (local_174 < 1.0) {
          dVar12 = (double)local_174;
          libm_sse2_sqrt_precise();
          fVar13 = ((float)dVar12 - 0.5) * 2.0;
          fVar13 = 1.0 - fVar13 * fVar13;
          local_170 = fVar13 * fVar13 * 10.0 + local_170;
          local_16c = local_170;
        }
      }
      else {
        fVar13 = 1.0 - local_174 * 4.0;
        fVar13 = fVar13 * fVar13;
        local_170 = (1.0 - fVar13) * (local_170 + 10.0) + (local_170 - 30.0) * fVar13;
        local_16c = local_170;
      }
      if (local_170 < local_144) {
        local_170 = local_144;
        local_16c = local_144;
      }
    }
    if (uVar8 == 0xd) {
      local_108 = (double)CONCAT44(local_12c,local_160);
      local_100 = (double)CONCAT44(local_134,uVar7);
      fVar11 = (float10)FUN_005f8e10(&local_100,&local_108);
      local_174 = (float)fVar11;
      if (0.010000001 < local_174) {
        if (local_174 < 1.0) {
          dVar12 = (double)local_174;
          libm_sse2_sqrt_precise();
          fVar13 = ((float)dVar12 - 0.1) / 0.9;
          fVar13 = 1.0 - fVar13 * fVar13;
          local_16c = fVar13 * fVar13 * fVar13 * fVar13 * 150.0 + local_170;
        }
      }
      else {
        local_16c = local_170 + 150.0;
      }
    }
  }
  __security_check_cookie(local_44 ^ (uint)&local_174);
  return;
}


/* terrain_rockColor_blend @ 005c7140  kind=gamemisc  attributed-by=ledger  size=1509 */

void FUN_005c7140(float *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int in_ECX;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float local_28;
  undefined1 local_14 [4];
  double local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_10 = (double)param_3;
  fVar7 = (float10)FUN_004c0ef0(local_10 * 0.1 + 98984.0,(double)param_4 * 0.4 + 8437.0);
  fVar8 = (float10)FUN_004c0ef0((double)param_2 * 0.1,(double)param_4 * 0.4);
  local_10 = local_10 * 0.01;
  dVar17 = (double)param_2 * 0.01;
  fVar12 = (((float)fVar7 + (float)fVar8) * 0.5 + 1.0) * 0.5;
  fVar7 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x80025c) + dVar17,
                                (double)*(int *)(in_ECX + 0x800260) + local_10);
  fVar8 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x800264) + dVar17,
                                (double)*(int *)(in_ECX + 0x800268) + local_10);
  fVar9 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x80026c) + dVar17,
                                (double)*(int *)(in_ECX + 0x800270) + local_10);
  fVar15 = fVar12 * 60.0;
  fVar10 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x80024c) + dVar17,
                                 (double)*(int *)(in_ECX + 0x800250) + local_10);
  fVar11 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x800254) + dVar17,
                                 (double)*(int *)(in_ECX + 0x800258) + local_10);
  fVar12 = fVar12 * 0.0 + 60.0 + (float)fVar9 * 20.0;
  fVar18 = fVar15 + (float)fVar10 * 20.0 + 180.0 + (float)fVar7 * 20.0;
  fVar15 = fVar15 + (float)fVar11 * 20.0 + 100.0 + (float)fVar8 * 20.0;
  param_1[2] = fVar12;
  *param_1 = fVar18;
  param_1[1] = fVar15;
  if (0.0 <= fVar18) {
    if (255.0 < fVar18) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar15 < 0.0) {
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
  iVar4 = FUN_004347a0();
  if (iVar4 == 0) {
    fVar7 = (float10)FUN_005c4dd0(param_2,param_3);
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
    fVar15 = *param_1;
    fVar18 = param_1[1];
    fVar1 = param_1[2];
    fVar13 = 1.0 - fVar12;
    pfVar5 = (float *)FUN_005f9620(local_14,param_2,param_3,param_4,param_5);
    fVar2 = pfVar5[1];
    fVar3 = pfVar5[2];
    *param_1 = *pfVar5 * fVar12 * 0.9 + fVar15 * fVar13;
    param_1[1] = fVar2 * fVar12 * 0.9 + fVar18 * fVar13;
    param_1[2] = fVar3 * fVar12 * 0.9 + fVar1 * fVar13;
  }
  if (local_28 < 0.2) {
    fVar12 = param_1[1];
    fVar15 = param_1[2];
    fVar16 = 1.0 - local_28 * 4.0;
    fVar18 = *param_1;
    fVar14 = 1.0 - fVar16;
    pfVar5 = (float *)FUN_005f9620(local_14,param_2,param_3,param_4,param_5);
    pfVar6 = (float *)FUN_005f9e50();
    fVar1 = pfVar5[1];
    fVar2 = pfVar5[2];
    fVar3 = pfVar6[1];
    fVar13 = pfVar6[2];
    fVar16 = fVar16 * 0.5;
    *param_1 = (*pfVar6 + *pfVar5) * fVar16 + fVar18 * fVar14;
    param_1[1] = (fVar1 + fVar3) * fVar16 + fVar12 * fVar14;
    param_1[2] = (fVar2 + fVar13) * fVar16 + fVar15 * fVar14;
  }
  iVar4 = FUN_004347a0();
  if (iVar4 == 0) {
    fVar7 = (float10)FUN_005ef040(param_2,param_3);
    fVar12 = (float)fVar7;
  }
  else {
    fVar12 = *(float *)(iVar4 + 0xc);
  }
  if (0.0 < fVar12) {
    fVar15 = *param_1;
    fVar18 = param_1[1];
    fVar13 = 1.0 - fVar12;
    fVar1 = param_1[2];
    pfVar5 = (float *)FUN_005f9620(local_14,param_2,param_3,param_4,param_5);
    fVar2 = pfVar5[1];
    fVar3 = pfVar5[2];
    *param_1 = fVar15 * fVar13 + *pfVar5 * fVar12;
    param_1[2] = fVar3 * fVar12 + fVar13 * fVar1;
    param_1[1] = fVar18 * fVar13 + fVar2 * fVar12;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* World_populateRegionDecorations @ 005cc510  kind=gamemisc  attributed-by=ledger  size=36702 */
// (decompilation unavailable)
undefined FUN_005cc510(void) { }

/* World_generateFoliageBlob @ 005d7f60  kind=gamemisc  attributed-by=ledger  size=2010 */

void FUN_005d7f60(int param_1,int param_2,int param_3,float param_4,float param_5,undefined8 param_6
                 ,float param_7,undefined8 param_8,float param_9,int param_10,undefined4 param_11)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  float10 fVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  double dVar30;
  double dVar31;
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
  undefined4 local_74;
  int local_70;
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
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  dVar22 = (double)param_1 + 0.5;
  dVar23 = (double)param_2 + 0.5;
  local_74 = param_11;
  dVar24 = (double)param_3 + 0.5;
  iVar7 = rand();
  iVar8 = rand();
  iVar17 = (int)((dVar22 - (double)param_4) - 1.0);
  dVar20 = (double)param_4 + dVar22 + 1.0;
  dVar31 = (double)iVar17;
  local_70 = iVar17;
  if (dVar31 <= dVar20) {
    iVar12 = (int)((dVar23 - (double)param_4) - 1.0);
    dVar25 = (double)param_4 + dVar23 + 1.0;
    do {
      local_80 = (double)iVar12;
      if (local_80 <= dVar25) {
        iVar16 = (int)((double)param_5 + dVar24 + 1.0);
        dVar26 = (dVar24 - (double)param_5) - 1.0;
        iVar15 = iVar12;
        local_70 = iVar17;
        do {
          fVar19 = (float10)FUN_004c0ef0(dVar31 * 0.04 + (double)iVar7,
                                         local_80 * 0.04 + (double)iVar8);
          local_6c = (float)fVar19;
          local_88 = (double)local_6c * 0.5;
          fVar19 = (float10)FUN_004c0ef0(dVar31 * 0.1 + (double)iVar7,local_80 * 0.1 + (double)iVar8
                                        );
          dVar28 = (double)iVar16;
          fVar29 = (float)(local_88 + (double)((float)fVar19 * 0.3));
          local_88 = (double)CONCAT44(fVar29,(undefined4)local_88);
          local_6c = (float)iVar16;
          if (dVar26 <= dVar28) {
            dVar27 = ((double)iVar17 - dVar22) / (double)param_4;
            dVar30 = (local_80 - dVar23) / (double)param_4;
            dVar27 = dVar30 * dVar30 + dVar27 * dVar27;
            fVar21 = (float)iVar16;
            local_80 = dVar27;
            do {
              dVar28 = ((dVar28 - dVar24) / (double)param_5) * 1.7999999523162842 + (double)fVar29;
              if (dVar28 * dVar28 + dVar27 <= 1.0) {
                local_6c = fVar21;
                iVar9 = FUN_004347a0();
                if (iVar9 == 0) {
                  puVar10 = (undefined4 *)&DAT_0076ddfc;
                }
                else if ((int)fVar21 < *(int *)(iVar9 + 0x10)) {
                  puVar10 = (undefined4 *)&DAT_0076ddfc;
                }
                else if ((int)fVar21 < *(int *)(iVar9 + 0x1c) + *(int *)(iVar9 + 0x10)) {
                  puVar10 = (undefined4 *)FUN_0042f730();
                  if ((((*(byte *)((int)puVar10 + 3) & 0x1f) == 0) && ((int)fVar21 < 1)) &&
                     ((*(byte *)((int)puVar10 + 3) & 0x40) == 0)) {
                    puVar10 = (undefined4 *)&DAT_0076ddf4;
                  }
                }
                else {
                  puVar10 = (undefined4 *)&DAT_0076ddf4;
                  if (0 < (int)fVar21) {
                    puVar10 = &DAT_0076ddf8;
                  }
                }
                if ((*(byte *)((int)puVar10 + 3) & 0x40) == 0) {
                  fVar29 = (float)((dVar28 + 1.0) * 0.5);
                  if (0.0 <= fVar29) {
                    if (1.0 < fVar29) {
                      fVar29 = 1.0;
                    }
                  }
                  else {
                    fVar29 = 0.0;
                  }
                  local_5c = param_8;
                  uVar3 = local_5c;
                  local_5c._0_4_ = (float)param_8;
                  fVar2 = (float)local_5c;
                  local_5c._4_4_ = (float)((ulonglong)param_8 >> 0x20);
                  fVar4 = local_5c._4_4_;
                  local_c = 1.0 - fVar29;
                  local_54 = param_9;
                  local_14 = (float)param_6;
                  fVar5 = local_14;
                  local_14 = local_c * local_14;
                  fStack_10 = (float)((ulonglong)param_6 >> 0x20);
                  fVar6 = fStack_10;
                  fStack_10 = local_c * fStack_10;
                  local_c = local_c * param_7;
                  local_20 = CONCAT44(fStack_10 + local_5c._4_4_ * fVar29,
                                      local_14 + (float)local_5c * fVar29);
                  local_18 = local_c + param_9 * fVar29;
                  local_48 = local_18;
                  local_50 = local_20;
                  iVar9 = 0;
                  do {
                    pfVar1 = (float *)((int)&local_50 + iVar9 * 4);
                    if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
                      *(undefined4 *)((int)&local_50 + iVar9 * 4) = 0;
                    }
                    if (255.0 < *(float *)((int)&local_50 + iVar9 * 4)) {
                      *(undefined4 *)((int)&local_50 + iVar9 * 4) = 0x437f0000;
                    }
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < 3);
                  iVar9 = 0;
                  do {
                    iVar13 = iVar9 + 1;
                    *(char *)((int)&local_8c + iVar9) =
                         (char)(int)*(float *)((int)&local_50 + iVar9 * 4);
                    iVar9 = iVar13;
                  } while (iVar13 < 3);
                  local_94 = local_8c;
                  local_92 = local_8a;
                  local_91 = 0x28;
                  local_5c = uVar3;
                  FUN_0044e7a0(iVar17,iVar15,fVar21,&local_94,local_74);
                  if ((param_10 == 4) && (iVar9 = rand(), iVar9 % 0x14 == 0)) {
                    iVar9 = rand();
                    iVar9 = iVar9 % 10;
                    uVar11 = rand();
                    uVar11 = uVar11 & 0x80000003;
                    bVar18 = uVar11 == 0;
                    if ((int)uVar11 < 0) {
                      bVar18 = (uVar11 - 1 | 0xfffffffc) == 0xffffffff;
                    }
                    if (bVar18) {
                      iVar9 = iVar9 * 2;
                    }
                    iVar17 = local_70;
                    iVar13 = (int)fVar21;
                    if (0 < iVar9) {
                      do {
                        iVar13 = iVar13 + -1;
                        iVar17 = FUN_004347a0();
                        if (iVar17 == 0) {
                          puVar10 = (undefined4 *)&DAT_0076ddfc;
                        }
                        else if (iVar13 < *(int *)(iVar17 + 0x10)) {
                          puVar10 = (undefined4 *)&DAT_0076ddfc;
                        }
                        else if (iVar13 < *(int *)(iVar17 + 0x1c) + *(int *)(iVar17 + 0x10)) {
                          puVar10 = (undefined4 *)FUN_0042f730();
                          if ((((*(byte *)((int)puVar10 + 3) & 0x1f) == 0) && (iVar13 < 1)) &&
                             ((*(byte *)((int)puVar10 + 3) & 0x40) == 0)) {
                            puVar10 = (undefined4 *)&DAT_0076ddf4;
                          }
                        }
                        else {
                          puVar10 = (undefined4 *)&DAT_0076ddf4;
                          if (0 < iVar13) {
                            puVar10 = &DAT_0076ddf8;
                          }
                        }
                        if ((*(byte *)((int)puVar10 + 3) & 0x40) == 0) {
                          fVar29 = (float)(((((double)iVar13 - dVar24) / (double)param_5) *
                                            1.7999999523162842 + (double)local_88._4_4_ + 1.0) * 0.5
                                          );
                          if (0.0 <= fVar29) {
                            if (1.0 < fVar29) {
                              fVar29 = 1.0;
                            }
                          }
                          else {
                            fVar29 = 0.0;
                          }
                          local_68 = param_8;
                          fVar21 = 1.0 - fVar29;
                          local_60 = param_9;
                          local_30 = fVar21 * param_7;
                          _local_38 = CONCAT44(fVar21 * fVar6,fVar21 * fVar5);
                          local_24 = param_9 * fVar29 + local_30;
                          local_2c = CONCAT44(fVar4 * fVar29 + fVar21 * fVar6,
                                              fVar21 * fVar5 + fVar2 * fVar29);
                          local_3c = local_24;
                          local_44 = local_2c;
                          iVar17 = 0;
                          do {
                            pfVar1 = (float *)((int)&local_44 + iVar17 * 4);
                            if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
                              *(undefined4 *)((int)&local_44 + iVar17 * 4) = 0;
                            }
                            if (255.0 < *(float *)((int)&local_44 + iVar17 * 4)) {
                              *(undefined4 *)((int)&local_44 + iVar17 * 4) = 0x437f0000;
                            }
                            iVar17 = iVar17 + 1;
                          } while (iVar17 < 3);
                          iVar17 = 0;
                          do {
                            iVar14 = iVar17 + 1;
                            *(char *)((int)&local_98 + iVar17) =
                                 (char)(int)*(float *)((int)&local_44 + iVar17 * 4);
                            iVar17 = iVar14;
                          } while (iVar14 < 3);
                          local_90 = local_98;
                          local_8e = local_96;
                          local_8d = 0x28;
                          FUN_0044e7a0(local_70,iVar15,iVar13,&local_90,local_74);
                        }
                        iVar9 = iVar9 + -1;
                        fVar21 = local_6c;
                        iVar17 = local_70;
                      } while (iVar9 != 0);
                    }
                  }
                }
                fVar29 = local_88._4_4_;
                dVar27 = local_80;
              }
              fVar21 = (float)((int)fVar21 + -1);
              dVar28 = (double)(int)fVar21;
              local_6c = fVar21;
            } while (dVar26 <= dVar28);
          }
          iVar15 = iVar15 + 1;
          local_80 = (double)iVar15;
        } while (local_80 <= dVar25);
      }
      iVar17 = iVar17 + 1;
      dVar31 = (double)iVar17;
      local_70 = iVar17;
    } while (dVar31 <= dVar20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* World_generateWaterOrPathFeature @ 005df960  kind=gamemisc  attributed-by=ledger  size=20099 */

/* WARNING: Removing unreachable block (ram,0x005e2b58) */
/* WARNING: Removing unreachable block (ram,0x005e2bf1) */

void FUN_005df960(uint param_1,uint param_2,float param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  longlong lVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  code *pcVar16;
  uint uVar17;
  bool bVar18;
  float10 fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 uVar28;
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
  int local_61c;
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
  uint local_5d8;
  float local_5d4;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  float local_5b8;
  float local_5b4;
  float local_5b0;
  int local_5ac;
  int local_5a8;
  float local_5a4;
  int local_5a0;
  float local_59c;
  float local_598;
  float local_594;
  byte local_58d;
  undefined1 local_58c [12];
  undefined1 local_580 [12];
  undefined1 local_574 [12];
  undefined1 local_568 [12];
  undefined1 local_55c [12];
  undefined1 local_550 [12];
  undefined1 local_544 [12];
  undefined1 local_538 [12];
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
  int local_3d4;
  uint local_3d0;
  int local_3cc;
  int local_3c8;
  uint local_3c4;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a0 [2];
  float local_398;
  float local_394;
  float local_390;
  float local_38c;
  int local_388;
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
  int local_2c4;
  int local_2c0;
  int local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  int local_2ac;
  float local_2a8;
  int local_2a4;
  float local_2a0;
  undefined4 local_29c;
  float local_298;
  int local_294;
  int local_290;
  int local_28c;
  int local_288;
  float local_284;
  int local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  int local_248;
  int local_244;
  int local_240;
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
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_5dc = param_2;
  local_5d0 = param_3;
  local_5ac = param_5;
  local_5c0 = (float)param_4;
  local_5cc = local_5c0 * 0.25;
  local_5f8 = ((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10;
  local_5d8 = param_1;
  local_5a0 = param_7;
  local_5c4 = local_5cc;
  uVar25 = FUN_0068d946();
  uVar6 = local_5dc;
  iVar2 = (int)((ulonglong)uVar25 >> 0x20);
  uVar15 = (uint)uVar25;
  local_5c8 = (float)(param_1 * 0x10000 - uVar15);
  local_5f8 = (local_5f8 - iVar2) - (uint)(param_1 * 0x10000 < uVar15);
  local_660 = (double)CONCAT44(local_5f8,local_5c8);
  local_5ec = local_5dc * 0x10000 - uVar15;
  local_61c = ((((int)local_5dc >> 0x1f) << 0x10 | local_5dc >> 0x10) - iVar2) -
              (uint)(local_5dc * 0x10000 < uVar15);
  local_668 = (double)CONCAT44(local_61c,local_5ec);
  iVar2 = FUN_004347a0(local_5d8,local_5dc,param_7);
  if (iVar2 == 0) {
    fVar19 = (float10)FUN_005c4dd0(local_5d8,uVar6);
    local_5fc = (float)fVar19;
    local_594 = local_5fc;
  }
  else {
    local_5fc = *(float *)(iVar2 + 8);
  }
  pcVar16 = rand_exref;
  local_5f4 = local_5fc * 50.0 + 120.0;
  iVar2 = rand();
  local_5a4 = (float)(iVar2 % 0x50) + local_5f4;
  local_624 = local_5fc * 100.0 + 50.0;
  iVar2 = rand();
  local_598 = 240.0;
  local_2c[0] = 240.0;
  local_2c[1] = local_5a4;
  local_658 = (float)(iVar2 % 0x32) + local_624;
  local_2c[2] = local_658;
  iVar2 = rand();
  local_594 = (float)(iVar2 % 0x50) + local_5f4;
  iVar2 = rand();
  fStack_34 = local_594;
  local_38 = 240.0;
  local_30 = (float)(iVar2 % 0x32) + local_624;
  if (param_6 == 5) {
    local_5ac = (int)((float)local_5ac * 0.7);
    param_4 = (int)(local_5c0 * 0.2);
    if (3 < (int)(local_5c0 * 0.2)) {
      param_4 = 3;
    }
    if ((float)local_5ac < (float)(param_4 << 3)) {
      local_5ac = (int)(float)(param_4 << 3);
    }
LAB_005dfd3e:
    if (local_5cc < 0.3) {
      local_5cc = 0.3;
    }
    fVar23 = 0.3;
    if (local_5c4 < 0.3) {
LAB_005dfd5c:
      local_5c4 = fVar23;
    }
  }
  else {
    if (param_6 == 1) {
      local_5cc = local_5cc * 0.5;
      local_5ac = local_5ac * 2;
      local_5c4 = 0.1;
      goto LAB_005dfd3e;
    }
    if (param_6 == 6) {
      local_5c4 = local_5cc * 0.5;
      goto LAB_005dfd3e;
    }
    if (param_6 == 3) {
      local_5a4 = 180.0;
      local_2c[1] = 180.0;
      local_5cc = 2.0;
      local_598 = 240.0;
      local_2c[0] = 240.0;
      local_658 = 120.0;
      local_2c[2] = 120.0;
      local_38 = 220.0;
      fStack_34 = 100.0;
      local_30 = 50.0;
      fVar23 = 2.0;
      goto LAB_005dfd5c;
    }
    if (param_6 != 2) goto LAB_005dfd3e;
    local_5cc = 1.5;
    local_5c4 = 1.5;
    local_598 = 255.0;
    local_2c[0] = 255.0;
    local_5a4 = 255.0;
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
  iVar2 = rand();
  if ((((float)iVar2 / 32767.0 < local_594) || (param_6 == 4)) || (param_6 == 3)) {
    iVar2 = rand();
    local_5b0 = (float)(iVar2 % 0x14);
    iVar2 = rand();
    local_59c = (float)(iVar2 % 0x9b + 0x32);
    iVar2 = rand();
    local_5b4 = (float)(iVar2 % 100);
    if (0.0 <= local_5b0) {
      if (255.0 < local_5b0) {
        local_5b0 = 255.0;
      }
    }
    else {
      local_5b0 = 0.0;
    }
    if (0.0 <= local_59c) {
      if (255.0 < local_59c) {
        local_59c = 255.0;
      }
    }
    else {
      local_59c = 0.0;
    }
    if (0.0 <= local_5b4) {
      if (255.0 < local_5b4) {
        local_5b4 = 255.0;
      }
    }
    else {
      local_5b4 = 0.0;
    }
    local_11c[3] = local_5b0;
    local_10c = local_59c;
    local_108 = local_5b4;
    local_2c[6] = local_5b0;
    local_2c[7] = local_59c;
    local_2c[8] = local_5b4;
    iVar2 = rand();
    fVar23 = 0.0;
    local_310 = local_5b4 + 0.0;
    local_41c = (float)(iVar2 % 100 + 0x32);
    local_318 = local_41c + local_5b0;
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
    fVar20 = local_5b0;
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
    iVar2 = FUN_004347a0(local_5d8,local_5dc,param_7);
    if (iVar2 == 0) {
      fVar19 = (float10)FUN_005c4800(local_5d8,local_5dc);
      fVar23 = (float)fVar19;
      local_594 = fVar23;
    }
    else {
      fVar23 = *(float *)(iVar2 + 4);
    }
    if (fVar23 <= 0.5) {
      uVar6 = rand();
      uVar6 = uVar6 & 0x80000001;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
      }
      if (uVar6 == 0) {
        iVar2 = rand();
        iVar13 = rand();
        local_2a0 = (float)(iVar2 % 0x37 + 200);
        local_29c = 0;
        local_298 = (float)(iVar13 % 200);
        pfVar3 = (float *)FUN_005c4770(local_55c);
        local_5b0 = *pfVar3;
        local_59c = pfVar3[1];
        local_5b4 = pfVar3[2];
        local_2c[6] = local_5b0;
        local_2c[7] = local_59c;
        local_2c[8] = local_5b4;
        iVar2 = rand();
        local_2e8 = (float)(iVar2 % 100 + 100);
        local_270 = local_2e8 + local_5b0;
        local_268 = local_2e8 + local_5b4;
        local_26c = local_2e8 + local_59c;
        fVar20 = local_5b0;
        local_2e4 = local_2e8;
        local_2e0 = local_2e8;
        pfVar3 = (float *)FUN_005c4770(local_574,&local_270);
        local_2c[3] = *pfVar3;
        local_2c[4] = pfVar3[1];
        local_2c[5] = pfVar3[2];
        local_58d = '\x01';
        fVar23 = 0.0;
      }
      else if (uVar6 == 1) {
        iVar2 = rand();
        local_594 = (float)(iVar2 % 0x14);
        iVar2 = rand();
        iVar13 = rand();
        local_27c = local_594;
        local_278 = (float)(iVar2 % 100 + 0x78);
        local_274 = (float)(iVar13 % 100);
        pfVar3 = (float *)FUN_005c4770(local_568);
        local_5b0 = *pfVar3;
        local_59c = pfVar3[1];
        local_5b4 = pfVar3[2];
        local_2c[6] = local_5b0;
        local_2c[7] = local_59c;
        local_2c[8] = local_5b4;
        iVar2 = rand();
        fVar23 = 0.0;
        local_3f8 = (float)(iVar2 % 0x96 + 100);
        local_2b8 = local_3f8 + local_5b0;
        local_2b4 = local_3f8 + local_59c;
        local_2b0 = local_5b4 + 0.0;
        fVar20 = local_5b0;
        local_3f4 = local_3f8;
        pfVar3 = (float *)FUN_005c4770(local_544,&local_2b8);
        local_2c[3] = *pfVar3;
        local_2c[4] = pfVar3[1];
        local_2c[5] = pfVar3[2];
      }
      else {
        local_5b4 = local_2c[8];
        local_59c = local_2c[7];
        local_5b0 = local_2c[6];
        fVar23 = 0.0;
        fVar20 = local_2c[6];
      }
    }
    else {
      iVar2 = rand();
      local_5b0 = (float)(iVar2 % 0x37 + 200);
      iVar2 = rand();
      local_59c = (float)(iVar2 % 100);
      iVar2 = rand();
      local_2c[6] = local_5b0;
      local_2c[7] = local_59c;
      local_5b4 = (float)(iVar2 % 0x32);
      local_2c[8] = local_5b4;
      iVar2 = rand();
      fVar23 = 0.0;
      local_3ec = (float)(iVar2 % 100 + 0x32);
      local_234 = local_5b0 + local_3ec;
      local_230 = local_59c + local_3ec;
      local_22c = local_5b4 + 0.0;
      fVar20 = local_5b0;
      local_3e8 = local_3ec;
      pfVar3 = (float *)FUN_005c4770(local_58c);
      local_2c[3] = *pfVar3;
      local_2c[4] = pfVar3[1];
      local_2c[5] = pfVar3[2];
      local_58d = '\x01';
    }
  }
  if (param_6 == 2) {
    fVar20 = 150.0;
    local_5b0 = 150.0;
    local_2c[6] = 150.0;
    local_59c = 255.0;
    local_2c[7] = 255.0;
    local_2c[3] = 244.0;
    local_2c[4] = 255.0;
    local_2c[5] = 0.0;
    local_58d = '\0';
    local_5b4 = fVar23;
    local_2c[8] = fVar23;
  }
  if (local_5fc < 0.2) {
    local_5b8 = 1.0 - (local_5fc - 0.1) / 0.1;
    if (1.0 < local_5b8) {
      local_5b8 = 1.0;
    }
    local_5f4 = 1.0 - local_5b8;
    local_594 = local_5f4 * fVar20;
    local_5c0 = local_5f4 * local_59c;
    local_5f0 = local_5f4 * local_5b4;
    local_354 = local_594;
    local_350 = local_5c0;
    local_34c = local_5f0;
    pfVar3 = (float *)FUN_005f9e50(local_538,local_5d8,local_5dc);
    local_334 = pfVar3[2] * local_5b8;
    local_33c = local_5b8 * *pfVar3;
    local_5b4 = local_334 + local_5f0;
    local_338 = local_5b8 * pfVar3[1];
    local_5b0 = local_33c + local_594;
    local_594 = local_5f4 * local_2c[3];
    local_59c = local_338 + local_5c0;
    local_5c0 = local_5f4 * local_2c[4];
    local_5f0 = local_5f4 * local_2c[5];
    local_30c = local_5b0;
    local_308 = local_59c;
    local_304 = local_5b4;
    local_2f4 = local_594;
    local_2f0 = local_5c0;
    local_2ec = local_5f0;
    local_2c[6] = local_5b0;
    local_2c[7] = local_59c;
    local_2c[8] = local_5b4;
    pfVar3 = (float *)FUN_005f9e50(local_550,local_5d8,local_5dc);
    local_300 = *pfVar3 * local_5b8;
    local_2fc = pfVar3[1] * local_5b8;
    local_2f8 = pfVar3[2] * local_5b8;
    local_330 = local_300 + local_594;
    local_32c = local_2fc + local_5c0;
    local_328 = local_2f8 + local_5f0;
    local_360 = local_5b8 * 120.0;
    local_358 = local_5b8 * 80.0;
    local_348 = local_5f4 * local_598;
    local_344 = local_5f4 * local_5a4;
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
  local_5a4 = 0.0;
  if (param_6 == 3) {
    iVar2 = rand();
    local_5b8 = (0.5 - (float)iVar2 / 32767.0) * (float)local_5ac;
    iVar2 = rand();
    fVar23 = (float)param_4;
    local_5a4 = (0.5 - (float)iVar2 / 32767.0) * (float)local_5ac;
    iVar2 = *(int *)(param_7 + 0x60) * 0x100;
    if ((((float)(int)local_5d8 + local_5b8) - fVar23 < (float)iVar2) ||
       ((float)(iVar2 + 0x100) <= fVar23 + (float)(int)local_5d8 + local_5b8)) {
      local_5b8 = 0.0;
    }
    iVar2 = *(int *)(param_7 + 100) * 0x100;
    if ((((float)(int)local_5dc + local_5a4) - fVar23 < (float)iVar2) ||
       ((float)(iVar2 + 0x100) <= fVar23 + (float)(int)local_5dc + local_5a4)) {
      local_5a4 = 0.0;
    }
  }
  fVar23 = (float)(int)(((float)(int)local_5d8 - local_5cc) - 1.0);
  fVar24 = (float)(int)fVar23;
  fVar20 = (float)(int)local_5d8 + local_5cc + 1.0;
  local_5bc = fVar24;
  local_598 = fVar23;
  local_594 = fVar20;
  if (fVar24 <= fVar20) {
    fVar22 = (float)(int)local_5dc + local_5cc + 1.0;
    fVar4 = (float)(int)(((float)(int)local_5dc - local_5cc) - 1.0);
    local_648 = fVar22;
    local_5d4 = fVar4;
    do {
      local_5c0 = (float)(int)fVar4;
      if (local_5c0 <= fVar22) {
        local_618 = (float)((int)local_5d0 + local_5ac);
        fVar5 = (float)((int)local_5d0 + -2);
        local_5b4 = fVar4;
        local_5f0 = fVar5;
        local_5bc = fVar24;
        local_598 = fVar23;
        do {
          if ((int)fVar5 <= (int)local_618) {
            local_674 = (float)local_5ac + 2.0;
            local_628 = (float)(((int)local_618 - (int)local_5d0) + 2);
            fVar20 = local_618;
            do {
              fVar23 = local_598;
              local_644 = (float)(int)local_628 / local_674;
              if (local_644 < 0.0) {
                local_644 = 0.0;
              }
              fVar4 = local_644 * local_644;
              local_620 = local_598;
              local_59c = (1.0 - fVar4) * local_5cc + fVar4 * local_5c4;
              local_5b0 = local_5b4;
              if (param_6 == 3) {
                local_620 = (float)(int)(local_5b8 * fVar4 + fVar24);
                local_5b0 = (float)(int)(local_5a4 * fVar4 + local_5c0);
              }
              if (local_59c <= 0.8) {
                iVar2 = __alldiv(local_5ec,local_61c,0x10000,0);
                iVar13 = __alldiv(local_5c8,local_5f8,0x10000,0);
                local_228 = (double)((int)local_598 - iVar13) / (double)local_59c;
                local_220 = (double)((int)local_5b4 - iVar2) / (double)local_59c;
                local_4fc = local_228;
                local_4f4 = local_220;
              }
              else {
                uVar15 = ((int)local_5b4 >> 0x1f) << 0x10 | (uint)local_5b4 >> 0x10;
                uVar6 = (int)local_5b4 * 0x10000;
                if (param_6 == 6) {
                  local_604 = (double)CONCAT44((uVar15 - local_61c) - (uint)(uVar6 < local_5ec),
                                               uVar6 - local_5ec);
                  local_5e8 = (double)(longlong)local_604 * 1.52587890625e-05;
                  local_5e0 = 5.0 / local_59c;
                  local_630 = (double)CONCAT44(((((int)local_598 >> 0x1f) << 0x10 |
                                                (uint)local_598 >> 0x10) - local_5f8) -
                                               (uint)((uint)((int)local_598 * 0x10000) <
                                                     (uint)local_5c8),
                                               (int)local_598 * 0x10000 - (int)local_5c8);
                  local_638 = (double)(longlong)local_630;
                  local_6dc = local_638 * 1.52587890625e-05;
                  local_6ec = (double)(int)fVar20 * 0.025;
                  fVar19 = (float10)FUN_004c0ef0((double)(int)local_5b4 * 0.025,local_6ec);
                  local_638 = (double)CONCAT44((float)fVar19,(undefined4)local_638);
                  local_6dc = (double)((float)fVar19 * local_5e0) + local_6dc / (double)local_59c;
                  fVar19 = (float10)FUN_004c0ef0((double)(int)fVar23 * 0.025);
                  local_638 = (double)CONCAT44((float)fVar19,(undefined4)local_638);
                  local_220 = (double)((float)fVar19 * local_5e0) + local_5e8 / (double)local_59c;
                  local_4c4 = local_6dc;
                  local_228 = local_6dc;
                  local_4bc = local_220;
                }
                else {
                  local_670 = (double)CONCAT44((uVar15 - local_61c) - (uint)(uVar6 < local_5ec),
                                               uVar6 - local_5ec);
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
              fVar23 = local_620;
              if (local_220 * local_220 + local_228 * local_228 <= 1.0) {
                iVar2 = FUN_004347a0(local_620,local_5b0,local_5a0);
                if (iVar2 == 0) {
                  puVar7 = (undefined4 *)&DAT_0076ddfc;
                }
                else if ((int)fVar20 < *(int *)(iVar2 + 0x10)) {
                  puVar7 = (undefined4 *)&DAT_0076ddfc;
                }
                else if ((int)fVar20 < *(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x10)) {
                  puVar7 = (undefined4 *)FUN_0042f730();
                  if ((((*(byte *)((int)puVar7 + 3) & 0x1f) == 0) && ((int)fVar20 < 1)) &&
                     ((*(byte *)((int)puVar7 + 3) & 0x40) == 0)) {
                    puVar7 = (undefined4 *)&DAT_0076ddf4;
                  }
                }
                else {
                  puVar7 = (undefined4 *)&DAT_0076ddf4;
                  if (0 < (int)fVar20) {
                    puVar7 = &DAT_0076ddf8;
                  }
                }
                if ((*(byte *)((int)puVar7 + 3) & 0x40) == 0) {
                  fVar24 = 1.0 - local_644;
                  local_b0 = CONCAT44(local_2c[1] * fVar24,local_2c[0] * fVar24);
                  local_a8 = local_2c[2] * fVar24;
                  local_144 = local_30 * local_644;
                  local_44 = local_b0;
                  local_59c = local_2c[0] * fVar24 + local_38 * local_644;
                  _local_14c = CONCAT44(fStack_34 * local_644,local_38 * local_644);
                  local_620 = local_2c[1] * fVar24 + fStack_34 * local_644;
                  local_5e0 = local_a8 + local_144;
                  local_3c = local_a8;
                  if (param_6 == 2) {
                    uVar6 = rand();
                    uVar6 = uVar6 & 0x80000007;
                    bVar18 = uVar6 == 0;
                    if ((int)uVar6 < 0) {
                      bVar18 = (uVar6 - 1 | 0xfffffff8) == 0xffffffff;
                    }
                    if (bVar18) {
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
                  fVar19 = (float10)FUN_005efdb0(fVar23,local_5b0,fVar20,local_5a0);
                  local_120 = (float)fVar19;
                  local_638 = (double)CONCAT44(local_120,(undefined4)local_638);
                  local_128 = (float)_local_bc;
                  local_128 = local_120 * local_128;
                  fStack_124 = (float)((ulonglong)_local_bc >> 0x20);
                  fStack_124 = local_120 * fStack_124;
                  local_120 = local_120 * local_b4;
                  local_44 = CONCAT44(fStack_124 + local_620,local_128 + local_59c);
                  local_3c = local_120 + local_5e0;
                  iVar2 = 0;
                  if (param_6 == 6) {
                    do {
                      iVar13 = iVar2 + 1;
                      *(char *)((int)&local_68c + iVar2) =
                           (char)(int)*(float *)((int)&local_44 + iVar2 * 4);
                      iVar2 = iVar13;
                    } while (iVar13 < 3);
                    local_698 = local_68c;
                    local_696 = local_68a;
                    local_695 = 7;
                    puVar8 = &local_698;
                  }
                  else {
                    do {
                      iVar13 = iVar2 + 1;
                      *(char *)((int)&local_6c4 + iVar2) =
                           (char)(int)*(float *)((int)&local_44 + iVar2 * 4);
                      iVar2 = iVar13;
                    } while (iVar13 < 3);
                    local_6cc = local_6c4;
                    local_6ca = local_6c2;
                    local_6c9 = 0x27;
                    puVar8 = &local_6cc;
                  }
                  FUN_0044e7a0(fVar23,local_5b0,fVar20,puVar8,local_5a0);
                }
              }
              fVar20 = (float)((int)fVar20 + -1);
              local_628 = (float)((int)local_628 + -1);
              fVar5 = local_5f0;
              fVar23 = local_598;
              fVar22 = local_648;
              fVar24 = local_5bc;
            } while ((int)local_5f0 <= (int)fVar20);
          }
          local_5b4 = (float)((int)local_5b4 + 1);
          local_5c0 = (float)(int)local_5b4;
          fVar4 = local_5d4;
          fVar20 = local_594;
        } while (local_5c0 <= fVar22);
      }
      fVar23 = (float)((int)fVar23 + 1);
      fVar24 = (float)(int)fVar23;
    } while (fVar24 <= fVar20);
    local_5b4 = local_2c[8];
    local_59c = local_2c[7];
    local_5b0 = local_2c[6];
    local_5bc = fVar24;
    local_598 = fVar23;
  }
  if (param_6 == 6) {
    uVar6 = rand();
    uVar6 = uVar6 & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    fVar20 = (float)(uVar6 + 5);
    local_674 = fVar20;
    iVar13 = rand();
    iVar2 = local_5a0;
    local_5c0 = 0.0;
    fVar23 = ((float)iVar13 * 6.2831855) / 32767.0;
    local_638 = (double)CONCAT44(fVar23,(undefined4)local_638);
    if (0 < (int)fVar20) {
      local_6dc = (double)(int)fVar20;
      local_6ec = (double)(longlong)local_660 * 1.52587890625e-05;
      local_1f8 = 0.0;
      local_5e8 = (double)(longlong)local_668 * 1.52587890625e-05;
      local_618 = local_5cc * 0.75;
      do {
        local_5d4 = (float)(((double)(int)local_5c0 * 3.141592653589793 * 2.0) / local_6dc +
                           (double)fVar23);
        dVar21 = (double)local_5d4;
        libm_sse2_sin_precise();
        local_5bc = (float)dVar21;
        dVar21 = (double)local_5d4;
        libm_sse2_cos_precise();
        local_200 = (float)dVar21;
        fStack_1fc = local_5bc;
        fVar23 = local_5bc * local_5cc;
        _local_a4 = CONCAT44(fVar23,local_200 * local_5cc);
        local_9c = local_1f8 * local_5cc;
        local_5bc = local_5bc * local_618 * 0.1;
        fVar20 = local_200 * local_5cc * 0.5;
        fVar23 = fVar23 * 0.5;
        local_150 = local_9c * 0.5;
        local_52c = (double)fVar20;
        local_524 = (double)fVar23;
        _local_158 = CONCAT44(fVar23,fVar20);
        local_51c = (double)local_150;
        local_604 = local_6ec + local_52c;
        local_630 = local_5e8 + local_524;
        local_670 = local_51c + (double)(int)local_5d0;
        local_5d4 = local_618 * local_200 * 0.1;
        local_648 = local_618 * 0.05;
        local_594 = 0.0;
        do {
          iVar13 = 0;
          do {
            iVar14 = iVar13 + 1;
            *(char *)((int)&local_694 + iVar13) = (char)(int)local_2c[iVar13];
            iVar13 = iVar14;
          } while (iVar14 < 3);
          local_6f0 = local_694;
          local_6ee = local_692;
          local_6ed = 0x27;
          FUN_0059cbf0((int)local_604,(int)local_630,(int)local_670,
                       (float)(10 - (int)local_594 / 0x14),&local_6f0,iVar2,1,1);
          local_604 = (double)local_5d4 + local_604;
          local_630 = (double)local_5bc + local_630;
          local_514 = local_604;
          local_50c = local_630;
          iVar13 = rand();
          local_594 = (float)((int)local_594 + 7);
          local_670 = local_670 - (double)(((float)iVar13 * local_648) / 32767.0);
          local_504 = local_670;
        } while ((int)local_594 < 0x8d);
        local_5c0 = (float)((int)local_5c0 + 1);
        fVar23 = local_638._4_4_;
      } while ((int)local_5c0 < (int)local_674);
      local_5b4 = local_2c[8];
      local_59c = local_2c[7];
      local_5b0 = local_2c[6];
    }
    goto LAB_005e200e;
  }
  if (param_6 == 1) {
LAB_005e1918:
    iVar2 = local_5a0;
    if (param_6 != 3) goto LAB_005e200e;
  }
  else if (param_6 != 3) {
    local_5c4 = -1.0;
    iVar2 = local_5d8 + 1;
    iVar13 = local_5dc + 1;
    local_5d4 = (float)(4 - (int)local_5d0);
    local_594 = 2.8026e-45;
    local_598 = local_5d0;
    do {
      local_5bc = ((float)((int)local_5d4 + (int)local_598) * local_5cc) / 5.0;
      local_5c4 = local_5c4 + local_5bc;
      iVar14 = 0;
      do {
        iVar12 = iVar14 + 1;
        *(char *)((int)&local_6f8 + iVar14) = (char)(int)local_2c[iVar14];
        iVar14 = iVar12;
      } while (iVar12 < 3);
      local_6ac = local_6f8;
      local_6aa = local_6f6;
      local_6a9 = 0x27;
      FUN_0059cbf0((int)((float)(int)local_5d8 - local_5c4),local_5dc,local_598,local_5bc,&local_6ac
                   ,local_5a0,1,1);
      iVar14 = 0;
      do {
        iVar12 = iVar14 + 1;
        *(char *)((int)&local_69c + iVar14) = (char)(int)local_2c[iVar14];
        iVar14 = iVar12;
      } while (iVar12 < 3);
      local_6d4 = local_69c;
      local_6d2 = local_69a;
      local_6d1 = 0x27;
      FUN_0059cbf0((int)((float)iVar2 + local_5c4),local_5dc,local_598,local_5bc,&local_6d4,
                   local_5a0,1,1);
      iVar14 = 0;
      do {
        iVar12 = iVar14 + 1;
        *(char *)((int)&local_6a0 + iVar14) = (char)(int)local_2c[iVar14];
        iVar14 = iVar12;
      } while (iVar12 < 3);
      local_6b4 = local_6a0;
      local_6b2 = local_69e;
      local_6b1 = 0x27;
      FUN_0059cbf0(local_5d8,(int)((float)(int)local_5dc - local_5c4),local_598,local_5bc,&local_6b4
                   ,local_5a0,1,1);
      iVar14 = 0;
      do {
        iVar12 = iVar14 + 1;
        *(char *)((int)&local_680 + iVar14) = (char)(int)local_2c[iVar14];
        iVar14 = iVar12;
      } while (iVar12 < 3);
      local_704 = local_680;
      local_702 = local_67e;
      local_701 = 0x27;
      FUN_0059cbf0(local_5d8,(int)((float)iVar13 + local_5c4),local_598,local_5bc,&local_704,
                   local_5a0,1,1);
      local_598 = (float)((int)local_598 + -1);
      local_594 = (float)((int)local_594 + -1);
    } while (local_594 != 0.0);
    local_594 = 0.0;
    goto LAB_005e1918;
  }
  local_5d4 = local_5b8 * 65536.0;
  lVar26 = FUN_0068d946();
  local_598 = (float)__alldiv(lVar26 + CONCAT44(local_5f8,local_5c8),0x10000,0);
  local_5d4 = local_5a4 * 65536.0;
  lVar26 = FUN_0068d946();
  local_5b8 = (float)__alldiv(lVar26 + CONCAT44(local_61c,local_5ec),0x10000,0);
  iVar2 = local_5a0;
  if ((0x23f0 < (int)(*(int *)(local_5a8 + 0x24) - *(int *)(local_5a8 + 0x20) & 0xfffffffcU)) &&
     (local_5a4 = *(float *)(*(int *)(local_5a8 + 0x20) + 0x23f0), local_5a4 != 0.0)) {
    local_78c[0x18] = 0.0;
    local_78c[0x19] = 0.0;
    local_78c[0x1a] = 0.0;
    local_78c[0x1b] = 0.0;
    iVar2 = 0;
    do {
      iVar13 = iVar2 + 4;
      *(int *)((int)local_7d4 + iVar2) = (int)*(float *)((int)local_78c + iVar2 + 0x60);
      iVar2 = iVar13;
    } while (iVar13 < 0x10);
    iVar2 = *(int *)((int)local_5a4 + 0x44);
    iVar13 = rand();
    fVar23 = local_5a4;
    local_238 = (int)local_5d0 + local_5ac + -5 + iVar13 % 3;
    local_240 = (int)local_598 - iVar2 / 2;
    local_23c = (int)local_5b8 + 1;
    FUN_005f0ce0(local_5a4,&local_240,0,0x28,0,local_5a0,0,local_7d4);
    local_78c[0xc] = 0.0;
    local_78c[0xd] = 0.0;
    local_78c[0xe] = 0.0;
    local_78c[0xf] = 0.0;
    iVar2 = 0;
    do {
      iVar13 = iVar2 + 4;
      *(int *)((int)local_7f4 + iVar2) = (int)*(float *)((int)local_78c + iVar2 + 0x30);
      iVar2 = iVar13;
    } while (iVar13 < 0x10);
    iVar2 = *(int *)((int)fVar23 + 0x44);
    iVar13 = rand();
    fVar23 = local_5a4;
    local_294 = (int)local_598 + 1;
    local_28c = (int)local_5d0 + local_5ac + -5 + iVar13 % 3;
    local_290 = (int)local_5b8 - iVar2 / 2;
    FUN_005f0ce0(local_5a4,&local_294,1,0x28,0,local_5a0,0,local_7f4,0);
    local_78c[4] = 0.0;
    local_78c[5] = 0.0;
    local_78c[6] = 0.0;
    local_78c[7] = 0.0;
    iVar2 = 0;
    do {
      iVar13 = iVar2 + 4;
      *(int *)((int)local_814 + iVar2) = (int)*(float *)((int)local_78c + iVar2 + 0x10);
      iVar2 = iVar13;
    } while (iVar13 < 0x10);
    iVar2 = *(int *)((int)fVar23 + 0x48);
    iVar13 = *(int *)((int)fVar23 + 0x44);
    iVar14 = rand();
    fVar23 = local_5a4;
    local_244 = (int)local_5d0 + local_5ac + -5 + iVar14 % 3;
    local_24c = (int)local_598 - iVar13 / 2;
    local_248 = (int)local_5b8 - iVar2;
    FUN_005f0ce0(local_5a4,&local_24c,2,0x28,0,local_5a0,0,local_814,0);
    local_78c[0] = 0.0;
    local_78c[1] = 0.0;
    local_78c[2] = 0.0;
    local_78c[3] = 0.0;
    iVar2 = 0;
    do {
      iVar13 = iVar2 + 4;
      *(int *)((int)local_7e4 + iVar2) = (int)*(float *)((int)local_78c + iVar2);
      iVar2 = iVar13;
    } while (iVar13 < 0x10);
    iVar13 = *(int *)((int)fVar23 + 0x44);
    iVar14 = *(int *)((int)fVar23 + 0x48);
    iVar12 = rand();
    iVar2 = local_5a0;
    local_258 = (int)local_598 - iVar14;
    local_250 = (int)local_5d0 + local_5ac + -5 + iVar12 % 3;
    local_254 = (int)local_5b8 - iVar13 / 2;
    FUN_005f0ce0(local_5a4,&local_258,3,0x28,0,local_5a0,0,local_7e4,0);
    pcVar16 = rand_exref;
  }
  if ((0x23f4 < (int)(*(int *)(local_5a8 + 0x24) - *(int *)(local_5a8 + 0x20) & 0xfffffffcU)) &&
     (local_5a4 = *(float *)(*(int *)(local_5a8 + 0x20) + 0x23f4), local_5a4 != 0.0)) {
    local_78c[8] = 0.0;
    local_78c[9] = 0.0;
    local_78c[10] = 0.0;
    local_78c[0xb] = 0.0;
    iVar2 = 0;
    do {
      iVar13 = iVar2 + 4;
      *(int *)((int)local_7a4 + iVar2) = (int)*(float *)((int)local_78c + iVar2 + 0x20);
      iVar2 = iVar13;
    } while (iVar13 < 0x10);
    iVar2 = (*pcVar16)();
    fVar23 = local_5a4;
    local_5d4 = (float)((int)local_598 + 1);
    local_618 = (float)((int)local_5b8 + 1);
    local_2a4 = (int)local_5d0 + local_5ac + -5 + iVar2 % 3;
    local_2ac = (int)local_5d4;
    local_2a8 = local_618;
    FUN_005f0ce0(local_5a4,&local_2ac,0,0x28,0,local_5a0,0,local_7a4);
    local_78c[0x10] = 0.0;
    local_78c[0x11] = 0.0;
    local_78c[0x12] = 0.0;
    local_78c[0x13] = 0.0;
    iVar2 = 0;
    do {
      iVar13 = iVar2 + 4;
      *(int *)((int)local_7b4 + iVar2) = (int)*(float *)((int)local_78c + iVar2 + 0x40);
      iVar2 = iVar13;
    } while (iVar13 < 0x10);
    iVar2 = *(int *)((int)fVar23 + 0x48);
    iVar13 = (*pcVar16)();
    fVar23 = local_5a4;
    local_264 = (int)local_5d4;
    local_260 = (int)local_5b8 - iVar2;
    local_25c = local_5ac + (int)local_5d0 + -5 + iVar13 % 3;
    FUN_005f0ce0(local_5a4,&local_264,1,0x28,0,local_5a0,0,local_7b4,0);
    local_78c[0x1c] = 0.0;
    local_78c[0x1d] = 0.0;
    local_78c[0x1e] = 0.0;
    local_78c[0x1f] = 0.0;
    iVar2 = 0;
    do {
      iVar13 = iVar2 + 4;
      *(int *)((int)local_7c4 + iVar2) = (int)*(float *)((int)local_78c + iVar2 + 0x70);
      iVar2 = iVar13;
    } while (iVar13 < 0x10);
    iVar2 = *(int *)((int)fVar23 + 0x48);
    iVar13 = (*pcVar16)();
    fVar23 = local_5a4;
    local_2c4 = (int)local_598 - iVar2;
    local_2c0 = (int)local_5b8 - iVar2;
    local_2bc = local_5ac + (int)local_5d0 + -5 + iVar13 % 3;
    FUN_005f0ce0(local_5a4,&local_2c4,2,0x28,0,local_5a0,0,local_7c4,0);
    local_78c[0x14] = 0.0;
    local_78c[0x15] = 0.0;
    local_78c[0x16] = 0.0;
    local_78c[0x17] = 0.0;
    iVar2 = 0;
    do {
      iVar13 = iVar2 + 4;
      *(int *)((int)local_804 + iVar2) = (int)*(float *)((int)local_78c + iVar2 + 0x50);
      iVar2 = iVar13;
    } while (iVar13 < 0x10);
    fVar23 = *(float *)((int)fVar23 + 0x48);
    local_5d4 = fVar23;
    iVar13 = (*pcVar16)();
    iVar2 = local_5a0;
    local_288 = (int)local_598 - (int)fVar23;
    local_284 = local_618;
    local_280 = (int)local_5d0 + local_5ac + -5 + iVar13 % 3;
    FUN_005f0ce0(local_5a4,&local_288,3,0x28,0,local_5a0,0,local_804,0);
  }
LAB_005e200e:
  iVar13 = (*pcVar16)();
  if ((iVar13 % 10 == 0) && (0.2 < local_5fc)) {
    uVar6 = local_5ac + (int)local_5d0;
    local_3d8 = local_5c8;
    local_790 = ((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10;
    local_3d4 = local_5f8;
    local_3d0 = local_5ec;
    local_3cc = local_61c;
    local_5d4 = *(float *)(iVar2 + 4);
    local_794 = uVar6 * 0x10000;
    local_3b4 = 0x3f800000;
    local_3b0 = 0x3f800000;
    local_3ac = 0x3f800000;
    local_3a8 = 2;
    local_3e0[0] = 0x3d;
    local_3c8 = local_794;
    local_3c4 = local_790;
    iVar13 = FUN_005c03f0(local_5d4,*(undefined4 *)((int)local_5d4 + 4),local_3e0);
    if (*(int *)(iVar2 + 8) == 0x38e38e2) {
LAB_005e20f0:
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    *(int *)((int)local_5d4 + 4) = iVar13;
    **(int **)(iVar13 + 4) = iVar13;
  }
  if (param_6 == 5) {
    fVar23 = (float)(int)((float)(((int)(local_5ac + (local_5ac >> 0x1f & 3U)) >> 2) + 6) +
                         (float)param_4 * 0.5);
    local_5b0 = fVar23;
    (*pcVar16)();
    (*pcVar16)();
    uVar6 = (*pcVar16)();
    uVar6 = uVar6 & 0x80000007;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
    }
    local_5d4 = (float)(int)uVar6 * 0.7853982;
    local_5b4 = 0.0;
    if (0 < (int)fVar23) {
      local_59c = 0.0;
      do {
        uVar6 = (uint)local_5b4 & 0x80000001;
        bVar18 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar18 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar18) {
LAB_005e21cc:
          iVar2 = local_5ac;
          local_6ec = (double)(longlong)local_660 * 1.52587890625e-05;
          local_648 = ((float)(int)local_5b4 * 0.6) / (float)((int)fVar23 + -1) + 0.6;
          local_5e8 = (double)(longlong)local_668 * 1.52587890625e-05;
          local_6dc = (double)((float)local_5ac * local_648 + (float)(int)local_5d0);
          local_618 = (float)(int)local_5b4 * 3.1415927 * 0.25 + local_5d4;
          dVar21 = (double)local_618;
          libm_sse2_sin_precise();
          local_5e0 = (float)dVar21;
          dVar21 = (double)local_618;
          libm_sse2_cos_precise();
          local_17c = (float)dVar21;
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
          iVar13 = 0;
          do {
            pfVar3 = (float *)((int)&local_164 + iVar13 * 4);
            if (*pfVar3 <= 0.0 && *pfVar3 != 0.0) {
              *(undefined4 *)((int)&local_164 + iVar13 * 4) = 0;
            }
            if (255.0 < *(float *)((int)&local_164 + iVar13 * 4)) {
              *(undefined4 *)((int)&local_164 + iVar13 * 4) = 0x437f0000;
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < 3);
          local_4b4 = local_6e4;
          local_4ac = local_6ec;
          local_4a4 = local_5e8;
          iVar13 = (*pcVar16)();
          iVar14 = (int)local_59c + ((int)local_59c >> 0x1f & 3U);
          local_5d8 = iVar2 / 2 + iVar13 % (iVar2 / 2) +
                      (int)(CONCAT44(iVar14 >> 0x1f,iVar14 >> 2) / (longlong)(int)local_5b0);
          local_5dc = 0;
          fVar20 = (float)param_4 * 8.0 * local_618 + (float)param_4;
          fVar23 = local_5b0;
          if (-1 < (int)(local_5d8 * 2)) {
            fVar24 = (float)(int)(local_5d8 * 2);
            local_618 = fVar20 * local_5e0;
            local_648 = fVar20 * local_17c;
            local_604 = (double)CONCAT44(fVar24,(undefined4)local_604);
            iVar2 = local_5a0;
            do {
              fVar23 = 1.0 - (float)(int)local_5dc / fVar24;
              local_5bc = 1.0 - fVar23 * fVar23;
              local_700 = ((double)((float)(int)local_5dc * 0.5) + local_5e8) * 65536.0;
              local_650 = (double)FUN_0068d946();
              local_70c = ((double)(local_5bc * local_618) + local_6ec) * 65536.0;
              local_640 = (double)FUN_0068d946();
              local_614 = ((double)(local_5bc * local_648) + local_6e4) * 65536.0;
              local_60c = (double)FUN_0068d946();
              iVar13 = FUN_0042f860();
              if ((*(byte *)(iVar13 + 3) & 0x40) == 0) {
                local_5f8 = (uint)local_650 + 0x10000;
                local_5fc = (float)(local_650._4_4_ + (uint)(0xfffeffff < (uint)local_650));
                iVar13 = FUN_0042f860();
                if ((*(byte *)(iVar13 + 3) & 0x40) == 0) {
                  iVar13 = 0;
                  do {
                    iVar14 = iVar13 + 1;
                    *(char *)((int)&local_6a8 + iVar13) =
                         (char)(int)*(float *)((int)&local_164 + iVar13 * 4);
                    iVar13 = iVar14;
                  } while (iVar14 < 3);
                  local_6bc = local_6a8;
                  local_6ba = local_6a6;
                  local_6b9 = 0x27;
                  local_594 = (float)__alldiv((undefined4)local_640,local_640._4_4_,0x10000,0);
                  local_5c0 = (float)__alldiv((undefined4)local_60c,local_60c._4_4_,0x10000,0);
                  uVar25 = CONCAT44(iVar2,&local_6bc);
                  uVar9 = __alldiv(local_5f8,local_5fc,0x10000,0);
                  FUN_0044e7a0(local_5c0,local_594,uVar9,uVar25);
                  iVar13 = 0;
                  do {
                    iVar14 = iVar13 + 1;
                    *(char *)((int)&local_6c0 + iVar13) =
                         (char)(int)*(float *)((int)&local_164 + iVar13 * 4);
                    iVar13 = iVar14;
                  } while (iVar14 < 3);
                  local_684 = local_6c0;
                  local_682 = local_6be;
                  uVar25 = CONCAT44(iVar2,&local_684);
                  local_681 = 0x27;
                  uVar9 = __alldiv((uint)local_650,local_650._4_4_,0x10000,0);
                  FUN_0044e7a0(local_5c0,local_594,uVar9,uVar25);
                  if (local_5dc == local_5d8 * 2) {
LAB_005e2882:
                    iVar13 = (*pcVar16)();
                    local_5c4 = (((float)iVar13 * local_5bc * 0.75) / 32767.0 + 0.25) *
                                (float)(int)local_5d8 * 0.5 + 2.0;
                    iVar13 = (*pcVar16)();
                    local_630 = (double)CONCAT44((((float)iVar13 * 0.5) / 32767.0 + 0.5) * local_5c4
                                                 ,(undefined4)local_630);
                    local_674 = local_5c4 * local_5e0 * 0.25 * 65536.0;
                    lVar26 = FUN_0068d946();
                    uVar17 = (uint)(lVar26 + (longlong)local_640);
                    local_5b8 = (float)((ulonglong)(lVar26 + (longlong)local_640) >> 0x20);
                    local_638 = (double)CONCAT44(local_5c4 * local_17c * 0.25 * 65536.0,
                                                 (undefined4)local_638);
                    local_5c8 = (float)uVar17;
                    lVar26 = FUN_0068d946();
                    local_5a4 = (float)(lVar26 + (longlong)local_60c);
                    local_5f0 = local_5c4 * 65536.0;
                    local_598 = (float)((ulonglong)(lVar26 + (longlong)local_60c) >> 0x20);
                    local_18c._4_4_ = (int)local_5b8;
                    local_194._0_4_ = (uint)local_5a4;
                    local_194._4_4_ = (int)local_598;
                    local_18c._0_4_ = uVar17;
                    lVar26 = FUN_0068d946();
                    local_61c = (int)((ulonglong)lVar26 >> 0x20);
                    local_5ec = (uint)lVar26;
                    local_5bc = (float)(((int)local_5a4 - local_5ec) - 0x10000);
                    uVar6 = *(uint *)(iVar2 + 0x60);
                    iVar13 = (((int)local_598 - local_61c) - (uint)((uint)local_5a4 < local_5ec)) -
                             (uint)((int)local_5a4 - local_5ec < 0x10000);
                    local_620 = (float)(uVar6 << 8);
                    uVar15 = ((int)local_620 >> 0x1f) << 0x10 | (uVar6 & 0xffffff) >> 8;
                    lVar27 = CONCAT44(local_598,local_5a4);
                    local_194 = CONCAT44(local_194._4_4_,(uint)local_194);
                    if ((iVar13 <= (int)uVar15) &&
                       ((iVar13 < (int)uVar15 ||
                        (lVar27 = CONCAT44(local_598,local_5a4),
                        local_194 = CONCAT44(local_194._4_4_,(uint)local_194),
                        (uint)local_5bc < uVar6 << 0x18)))) {
                      local_628 = ((float)(int)local_620 + local_5c4 + 1.0) * 65536.0;
                      lVar27 = FUN_0068d946();
                      lVar26 = CONCAT44(local_61c,local_5ec);
                      local_194 = lVar27;
                    }
                    local_598 = (float)((ulonglong)lVar27 >> 0x20);
                    local_5a4 = (float)lVar27;
                    local_61c = (int)((ulonglong)lVar26 >> 0x20);
                    local_5ec = (uint)lVar26;
                    local_5c0 = (float)((uVar17 - local_5ec) - 0x10000);
                    uVar6 = *(uint *)(iVar2 + 100);
                    iVar13 = (((int)local_5b8 - local_61c) - (uint)(uVar17 < local_5ec)) -
                             (uint)(uVar17 - local_5ec < 0x10000);
                    local_594 = (float)(uVar6 << 8);
                    uVar15 = ((int)local_594 >> 0x1f) << 0x10 | (uVar6 & 0xffffff) >> 8;
                    uVar25 = CONCAT44(local_5b8,uVar17);
                    uVar28 = CONCAT44(local_18c._4_4_,local_5c8);
                    if ((iVar13 <= (int)uVar15) &&
                       ((iVar13 < (int)uVar15 ||
                        (uVar25 = CONCAT44(local_5b8,uVar17),
                        uVar28 = CONCAT44(local_18c._4_4_,local_5c8),
                        (uint)local_5c0 < uVar6 << 0x18)))) {
                      local_644 = ((float)(int)local_594 + local_5c4 + 1.0) * 65536.0;
                      uVar25 = FUN_0068d946();
                      lVar27 = CONCAT44(local_598,local_5a4);
                      lVar26 = CONCAT44(local_61c,local_5ec);
                      local_18c._0_4_ = (uint)uVar25;
                      uVar28 = uVar25;
                    }
                    local_18c._4_4_ = (int)((ulonglong)uVar28 >> 0x20);
                    local_5c8 = (float)uVar28;
                    local_5b8 = (float)((ulonglong)uVar25 >> 0x20);
                    local_598 = (float)((ulonglong)lVar27 >> 0x20);
                    local_5a4 = (float)lVar27;
                    local_61c = (int)((ulonglong)lVar26 >> 0x20);
                    local_5ec = (uint)lVar26;
                    lVar1 = lVar26 + lVar27 + 0x10000;
                    local_5c0 = (float)lVar1;
                    uVar6 = (int)local_620 + 0x100;
                    if (CONCAT44(((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10,uVar6 * 0x10000) <=
                        lVar1) {
                      fStack_678 = (((float)((int)local_620 + 0x100) - local_5c4) - 2.0) * 65536.0;
                      lVar27 = FUN_0068d946();
                      uVar28 = CONCAT44(local_18c._4_4_,local_5c8);
                      lVar26 = CONCAT44(local_61c,local_5ec);
                      local_194 = lVar27;
                    }
                    local_18c._4_4_ = (int)((ulonglong)uVar28 >> 0x20);
                    local_5c8 = (float)uVar28;
                    uVar28 = CONCAT44(local_5b8,local_5c8);
                    local_598 = (float)((ulonglong)lVar27 >> 0x20);
                    local_5a4 = (float)lVar27;
                    local_61c = (int)((ulonglong)lVar26 >> 0x20);
                    local_5ec = (uint)lVar26;
                    local_594 = (float)((int)local_594 + 0x100);
                    local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
                    if (CONCAT44(((int)local_594 >> 0x1f) << 0x10 | (uint)local_594 >> 0x10,
                                 (int)local_594 * 0x10000) <=
                        lVar26 + CONCAT44(local_5b8,(int)uVar25) + 0x10000) {
                      local_670 = (double)CONCAT44((((float)(int)local_594 - local_5c4) - 2.0) *
                                                   65536.0,(undefined4)local_670);
                      uVar28 = FUN_0068d946();
                      lVar27 = CONCAT44(local_598,local_5a4);
                      lVar26 = CONCAT44(local_61c,local_5ec);
                      local_18c = uVar28;
                    }
                    local_5b8 = (float)((ulonglong)uVar28 >> 0x20);
                    local_5c8 = (float)uVar28;
                    local_598 = (float)((ulonglong)lVar27 >> 0x20);
                    local_5a4 = (float)lVar27;
                    local_61c = (int)((ulonglong)lVar26 >> 0x20);
                    local_5ec = (uint)lVar26;
                    uVar28 = CONCAT44(iVar2,5);
                    uVar25 = CONCAT44(local_2c[7],local_2c[6]);
                    fVar23 = local_2c[8];
                    fVar20 = local_2c[3];
                    fVar24 = local_2c[4];
                    fVar4 = local_2c[5];
                    uVar9 = __alldiv(local_5f8,local_5fc,0x10000,0);
                    uVar10 = __alldiv(local_5c8,local_5b8,0x10000,0);
                    uVar11 = __alldiv(local_5a4,local_598,0x10000,0);
                    FUN_005d7f60(uVar11,uVar10,uVar9,local_5c4,local_630._4_4_,uVar25,fVar23,fVar20,
                                 fVar24,fVar4,uVar28);
                    iVar2 = local_5a0;
                    if (local_58d != '\0') {
                      local_398 = local_5a4;
                      local_394 = local_598;
                      local_390 = local_5c8;
                      local_38c = local_5b8;
                      local_388 = local_5f8;
                      local_384 = local_5fc;
                      local_98 = CONCAT44(local_2c[7] / 255.0,local_2c[6] / 255.0);
                      local_36c = local_2c[8] / 255.0;
                      iVar13 = *(int *)(local_5a0 + 4);
                      local_630 = (double)CONCAT44(iVar13,(undefined4)local_630);
                      local_368 = 2;
                      local_3a0[0] = 0x3c;
                      local_374 = local_98;
                      local_90 = local_36c;
                      iVar13 = FUN_005c03f0(iVar13,*(undefined4 *)(iVar13 + 4),local_3a0);
                      if (*(int *)(iVar2 + 8) == 0x38e38e2) goto LAB_005e20f0;
                      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
                      *(int *)((int)local_630._4_4_ + 4) = iVar13;
                      **(int **)(iVar13 + 4) = iVar13;
                    }
                  }
                  else {
                    uVar6 = local_5dc & 0x80000003;
                    bVar18 = uVar6 == 0;
                    if ((int)uVar6 < 0) {
                      bVar18 = (uVar6 - 1 | 0xfffffffc) == 0xffffffff;
                    }
                    if (bVar18) {
                      iVar13 = (*pcVar16)();
                      if (iVar13 % 3 == 0) goto LAB_005e2882;
                    }
                  }
                }
              }
              local_5dc = local_5dc + 1;
              fVar23 = local_5b0;
              fVar24 = local_604._4_4_;
            } while ((int)local_5dc <= (int)(local_5d8 * 2));
          }
        }
        else {
          iVar2 = (*pcVar16)();
          if (iVar2 % 3 == 0) goto LAB_005e21cc;
        }
        local_59c = (float)((int)local_59c + local_5ac);
        local_5b4 = (float)((int)local_5b4 + 1);
      } while ((int)local_5b4 < (int)fVar23);
    }
  }
  else if (((param_6 == 0) || (param_6 == 4)) || (param_6 == 2)) {
    iVar13 = (*pcVar16)();
    local_5e0 = (float)(iVar13 % 5 + 4);
    iVar13 = (*pcVar16)();
    local_630 = (double)CONCAT44(((float)iVar13 * 6.2831855) / 32767.0,(undefined4)local_630);
    iVar13 = (*pcVar16)();
    local_5bc = ((float)iVar13 * 0.8) / 32767.0 + 0.6;
    iVar13 = (*pcVar16)();
    uVar28 = CONCAT44(iVar2,param_6);
    local_604 = (double)CONCAT44((((float)iVar13 * 1.25) / 32767.0 + 2.0) * local_5cc,
                                 (undefined4)local_604);
    uVar25 = CONCAT44(local_59c,local_5b0);
    fVar23 = local_5b4;
    fVar20 = local_2c[3];
    fVar24 = local_2c[4];
    fVar4 = local_2c[5];
    uVar9 = __alldiv(local_5ec,local_61c,0x10000,0);
    uVar10 = __alldiv(local_5c8,local_5f8,0x10000,0);
    FUN_005d7f60(uVar10,uVar9,local_5ac + (int)local_5d0,local_604._4_4_,local_604._4_4_ * local_5bc
                 ,uVar25,fVar23,fVar20,fVar24,fVar4,uVar28);
    iVar2 = local_5a0;
    local_5ec = 0;
    if (0 < (int)local_5e0) {
      local_6e4 = (double)(longlong)local_668 * 1.52587890625e-05;
      local_1ec = 0.0;
      local_614 = (double)(longlong)local_660 * 1.52587890625e-05;
      fStack_678 = local_5cc * 0.75;
      do {
        iVar13 = (*pcVar16)();
        fVar23 = ((float)iVar13 * 0.5) / 32767.0 + 0.5;
        local_670 = (double)CONCAT44(fVar23,(undefined4)local_670);
        local_70c = (double)(fVar23 * (float)local_5ac + (float)(int)local_5d0);
        fVar23 = ((float)(int)local_5ec * 3.1415927 * 2.0) / (float)(int)local_5e0 + local_630._4_4_
        ;
        dVar21 = (double)fVar23;
        local_604._4_4_ = fVar23;
        libm_sse2_sin_precise();
        local_5c8 = (float)dVar21;
        dVar21 = (double)local_604._4_4_;
        libm_sse2_cos_precise();
        local_1f4 = (float)dVar21;
        fStack_1f0 = local_5c8;
        local_8c = CONCAT44(local_5c8 * local_5cc,local_1f4 * local_5cc);
        local_210 = local_1ec * local_5cc;
        local_218 = local_8c;
        local_20c = CONCAT44(fStack_34,local_38);
        local_60c = (double)(local_1f4 * local_5cc * 0.5) + local_614;
        local_640 = (double)(local_210 * 0.5) + local_70c;
        local_650 = (double)(local_5c8 * local_5cc * 0.5) + local_6e4;
        local_204 = local_30;
        fVar23 = 1.0 - local_670._4_4_;
        local_594 = 8.40779e-45;
        _local_5c = CONCAT44(local_2c[1] * fVar23,local_2c[0] * fVar23);
        local_54 = local_2c[2] * fVar23;
        local_ec[1] = local_2c[1] * fVar23 + fStack_34 * local_670._4_4_;
        local_ec[0] = local_2c[0] * fVar23 + local_38 * local_670._4_4_;
        local_ec[2] = local_54 + local_30 * local_670._4_4_;
        local_624 = local_1f4 * fStack_678 * 0.5;
        local_5c8 = local_5c8 * fStack_678 * 0.5;
        local_604 = (double)CONCAT44(fStack_678 * 0.5,(undefined4)local_604);
        local_84 = local_210;
        do {
          if (((param_6 != 2) && (param_6 != 4)) && (1.5 < local_5cc)) {
            iVar13 = 0;
            do {
              iVar14 = iVar13 + 1;
              *(char *)((int)&local_658 + iVar13) = (char)(int)local_ec[iVar13];
              iVar13 = iVar14;
            } while (iVar14 < 3);
            local_5f4 = (float)CONCAT13(0x27,SUB43(local_658,0));
            FUN_0059cbf0((int)local_60c,(int)local_650,(int)local_640,0x40000000,&local_5f4,iVar2,1,
                         1);
          }
          local_60c = (double)local_624 + local_60c;
          local_650 = (double)local_5c8 + local_650;
          iVar13 = (*pcVar16)();
          local_594 = (float)((int)local_594 - 1);
          local_640 = (double)(((float)iVar13 * local_604._4_4_) / 32767.0) + local_640;
        } while (local_594 != 0.0);
        iVar13 = (*pcVar16)();
        iVar14 = *(int *)(iVar2 + 0x60) * 0x100;
        fVar23 = (((float)iVar13 * 1.25) / 32767.0 + 2.0) * local_5cc;
        if ((local_60c - (double)fVar23) - 1.0 < (double)iVar14) {
          local_60c = (double)((float)iVar14 + fVar23 + 1.0);
        }
        iVar13 = *(int *)(iVar2 + 100) * 0x100;
        if ((local_650 - (double)fVar23) - 1.0 < (double)iVar13) {
          local_650 = (double)((float)iVar13 + fVar23 + 1.0);
        }
        if ((double)(iVar14 + 0x100) <= (double)fVar23 + local_60c + 1.0) {
          local_60c = (double)(((float)(iVar14 + 0x100) - fVar23) - 2.0);
        }
        if ((double)(iVar13 + 0x100) <= (double)fVar23 + local_650 + 1.0) {
          local_650 = (double)(((float)(iVar13 + 0x100) - fVar23) - 2.0);
        }
        if (4 < (int)local_5ec) {
          local_640 = (double)(local_5bc * fVar23 * 0.5) + local_640;
        }
        fVar20 = local_5bc * fVar23 * 0.25;
        local_604 = (double)CONCAT44(fVar20,(undefined4)local_604);
        FUN_005d7f60((int)local_60c,(int)local_650,(int)((double)fVar20 + local_640),fVar23,
                     local_5bc * fVar23,CONCAT44(local_2c[7],local_2c[6]),local_2c[8],local_2c[3],
                     local_2c[4],local_2c[5],param_6,iVar2);
        if (local_58d != '\0') {
          local_410[0] = local_60c + 0.0;
          local_430 = 0x3f8000003f800000;
          local_428 = 1.0;
          local_424 = 2;
          local_410[1] = local_650 + 0.0;
          iVar13 = 0;
          local_410[2] = local_640 + (double)local_604._4_4_;
          do {
            local_700 = *(double *)((int)local_410 + iVar13) * 65536.0;
            uVar25 = FUN_0068d946();
            *(int *)((int)auStack_454 + iVar13) = (int)uVar25;
            *(int *)((int)auStack_454 + iVar13 + 4) = (int)((ulonglong)uVar25 >> 0x20);
            iVar13 = iVar13 + 8;
          } while (iVar13 < 0x18);
          local_68 = CONCAT44(local_2c[7] / 255.0,local_2c[6] / 255.0);
          local_428 = local_2c[8] / 255.0;
          iVar13 = *(int *)(iVar2 + 4);
          local_45c[0] = 0x3c;
          local_430 = local_68;
          local_604 = (double)CONCAT44(iVar13,(undefined4)local_604);
          local_60 = local_428;
          iVar13 = FUN_005c03f0(iVar13,*(undefined4 *)(iVar13 + 4),local_45c);
          if (*(int *)(iVar2 + 8) == 0x38e38e2) goto LAB_005e20f0;
          *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
          *(int *)((int)local_604._4_4_ + 4) = iVar13;
          **(int **)(iVar13 + 4) = iVar13;
        }
        local_5ec = local_5ec + 1;
      } while ((int)local_5ec < (int)local_5e0);
    }
  }
  else if (param_6 == 6) {
    iVar13 = (*pcVar16)();
    local_5e0 = (float)(iVar13 % 5 + 8);
    iVar13 = (*pcVar16)();
    local_604 = (double)CONCAT44(((float)iVar13 * 6.2831855) / 32767.0,(undefined4)local_604);
    (*pcVar16)();
    (*pcVar16)();
    local_5bc = 0.0;
    if (0 < (int)local_5e0) {
      local_6e4 = (double)(longlong)local_668 * 1.52587890625e-05;
      local_198 = 0.0;
      local_614 = (double)(longlong)local_660 * 1.52587890625e-05;
      fStack_678 = local_5cc * 0.75;
      do {
        iVar13 = (*pcVar16)();
        fVar23 = ((float)iVar13 * 0.5) / 32767.0 + 0.5;
        local_670 = (double)CONCAT44(fVar23,(undefined4)local_670);
        local_70c = (double)((float)local_5ac * fVar23 + (float)(int)local_5d0);
        local_594 = ((float)(int)local_5bc * 3.1415927 * 2.0) / (float)(int)local_5e0 +
                    local_604._4_4_;
        dVar21 = (double)local_594;
        libm_sse2_sin_precise();
        local_644 = (float)dVar21;
        dVar21 = (double)local_594;
        libm_sse2_cos_precise();
        local_1a0 = (float)dVar21;
        fStack_19c = local_644;
        local_630 = (double)CONCAT44(local_594 + 1.5707964,(undefined4)local_630);
        dVar21 = (double)(local_594 + 1.5707964);
        libm_sse2_sin_precise();
        local_5c0 = (float)dVar21;
        dVar21 = (double)local_630._4_4_;
        libm_sse2_cos_precise();
        local_5f0 = (float)dVar21;
        local_74 = CONCAT44(fStack_19c * local_5cc,local_1a0 * local_5cc);
        local_1c8 = local_198 * local_5cc;
        local_1d0 = local_74;
        local_1dc = CONCAT44(fStack_34,local_38);
        fVar23 = 1.0 - local_670._4_4_;
        local_1d4 = local_30;
        local_660 = (double)(local_1a0 * local_5cc * 0.5) + local_614;
        local_668 = (double)(fStack_19c * local_5cc * 0.5) + local_6e4;
        local_60c = (double)(local_1c8 * 0.5) + local_70c;
        _local_c8 = CONCAT44(local_2c[1] * fVar23,local_2c[0] * fVar23);
        local_c0 = local_2c[2] * fVar23;
        local_2dc[0] = local_660;
        local_2dc[1] = local_668;
        local_2dc[2] = local_60c;
        local_5c8 = 0.0;
        local_5f4 = 0.0;
        local_104[1] = local_2c[1] * fVar23 + fStack_34 * local_670._4_4_;
        local_104[0] = local_2c[0] * fVar23 + local_38 * local_670._4_4_;
        local_104[2] = local_c0 + local_30 * local_670._4_4_;
        local_6c = local_1c8;
        do {
          local_594 = 6.5 - (float)(int)local_5f4 / 40.0;
          iVar13 = 0;
          do {
            iVar14 = iVar13 + 1;
            *(char *)((int)&local_6c8 + iVar13) = (char)(int)local_104[iVar13];
            iVar13 = iVar14;
          } while (iVar14 < 3);
          local_654 = (float)CONCAT13(0x27,CONCAT12(local_6c6,local_6c8));
          local_2dc[0] = local_660;
          local_2dc[1] = local_668;
          local_2dc[2] = local_60c;
          FUN_0059cbf0((int)local_660,(int)local_668,(int)local_60c,local_594,&local_654,iVar2,1,1);
          if (10 < (int)local_5c8) {
            local_628 = 7.00649e-45;
            do {
              iVar13 = (int)local_5c8 + -10;
              iVar14 = (*pcVar16)();
              if (iVar14 % 0x78 < iVar13) {
                uVar28 = CONCAT44(iVar2,6);
                uVar25 = CONCAT44(local_2c[7],local_2c[6]);
                fVar23 = local_2c[8];
                fVar20 = local_2c[3];
                fVar24 = local_2c[4];
                fVar4 = local_2c[5];
                uVar6 = (*pcVar16)(uVar25,local_2c[8],local_2c[3],local_2c[4],local_2c[5]);
                uVar6 = uVar6 & 0x80000003;
                if ((int)uVar6 < 0) {
                  uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
                }
                fVar22 = (float)(int)(uVar6 + 4);
                uVar6 = (*pcVar16)(fVar22);
                uVar6 = uVar6 & 0x80000003;
                if ((int)uVar6 < 0) {
                  uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
                }
                fVar5 = (float)(int)(uVar6 + 4);
                iVar2 = (*pcVar16)(fVar5);
                iVar2 = (int)((double)(iVar2 % (2 - (int)(local_594 * -2.0))) + (local_60c - 3.0));
                iVar14 = (*pcVar16)(iVar2);
                iVar14 = (int)((((double)(iVar14 % 0x14) + local_668) - 10.0) +
                              (double)(local_5c0 * 4.0));
                iVar12 = (*pcVar16)(iVar14);
                FUN_005d7f60((int)((((double)(iVar12 % 0x14) + local_660) - 10.0) +
                                  (double)(local_5f0 * 4.0)),iVar14,iVar2,fVar5,fVar22,uVar25,fVar23
                             ,fVar20,fVar24,fVar4,uVar28);
                iVar2 = local_5a0;
              }
              iVar14 = (*pcVar16)();
              if (iVar14 % 0x78 < iVar13) {
                uVar28 = CONCAT44(iVar2,6);
                uVar25 = CONCAT44(local_2c[7],local_2c[6]);
                fVar23 = local_2c[8];
                fVar20 = local_2c[3];
                fVar24 = local_2c[4];
                fVar4 = local_2c[5];
                uVar6 = (*pcVar16)(uVar25,local_2c[8],local_2c[3],local_2c[4],local_2c[5]);
                uVar6 = uVar6 & 0x80000003;
                if ((int)uVar6 < 0) {
                  uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
                }
                fVar22 = (float)(int)(uVar6 + 4);
                uVar6 = (*pcVar16)(fVar22);
                uVar6 = uVar6 & 0x80000003;
                if ((int)uVar6 < 0) {
                  uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
                }
                fVar5 = (float)(int)(uVar6 + 4);
                iVar2 = (*pcVar16)(fVar5);
                iVar2 = (int)((double)(iVar2 % ((1 - (int)(local_594 * -2.0)) * 2)) +
                             (local_60c - 3.0));
                iVar13 = (*pcVar16)(iVar2);
                iVar13 = (int)((((double)(iVar13 % 0x14) + local_668) - 10.0) -
                              (double)(local_5c0 * 4.0));
                iVar14 = (*pcVar16)(iVar13);
                FUN_005d7f60((int)((((double)(iVar14 % 0x14) + local_660) - 10.0) -
                                  (double)(local_5f0 * 4.0)),iVar13,iVar2,fVar5,fVar22,uVar25,fVar23
                             ,fVar20,fVar24,fVar4,uVar28);
              }
              local_628 = (float)((int)local_628 + -1);
              iVar2 = local_5a0;
            } while (local_628 != 0.0);
            local_628 = 0.0;
            if (local_58d != '\0') {
              local_470 = 0x3f8000003f800000;
              local_468 = 1.0;
              local_464 = 2;
              iVar13 = 0;
              do {
                local_700 = *(double *)((int)local_2dc + iVar13) * 65536.0;
                uVar25 = FUN_0068d946();
                iVar2 = local_5a0;
                *(int *)((int)auStack_494 + iVar13) = (int)uVar25;
                *(int *)((int)auStack_494 + iVar13 + 4) = (int)((ulonglong)uVar25 >> 0x20);
                iVar13 = iVar13 + 8;
              } while (iVar13 < 0x18);
              local_50 = CONCAT44(local_2c[7] / 255.0,local_2c[6] / 255.0);
              local_468 = local_2c[8] / 255.0;
              iVar13 = *(int *)(local_5a0 + 4);
              local_630 = (double)CONCAT44(iVar13,(undefined4)local_630);
              local_49c[0] = 0x3c;
              local_470 = local_50;
              local_48 = local_468;
              iVar13 = FUN_005c03f0(iVar13,*(undefined4 *)(iVar13 + 4),local_49c);
              if (*(int *)(iVar2 + 8) == 0x38e38e2) goto LAB_005e20f0;
              *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
              *(int *)((int)local_630._4_4_ + 4) = iVar13;
              **(int **)(iVar13 + 4) = iVar13;
            }
          }
          local_660 = (double)(local_1a0 * fStack_678 * 0.075) + local_660;
          local_2dc[0] = local_660;
          local_668 = (double)(local_644 * fStack_678 * 0.075) + local_668;
          fVar23 = (float)(int)local_5c8;
          local_5c8 = (float)((int)local_5c8 + 1);
          local_5f4 = (float)((int)local_5f4 + 5);
          local_60c = (double)((fStack_678 * 0.1 * fVar23) / 40.0) + local_60c;
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
    iVar2 = (*pcVar16)();
    local_654 = ((float)iVar2 * 6.2831855) / 32767.0;
    iVar2 = (*pcVar16)();
    local_58d = (byte)(iVar2 % 100);
    iVar2 = (*pcVar16)();
    iVar13 = rand();
    local_170[0] = (float)(iVar13 % 100 & 0xff);
    local_170[1] = (float)(iVar2 % 0x32 + 100U & 0xff);
    local_170[2] = (float)local_58d;
    iVar2 = rand();
    local_58d = (byte)(iVar2 % 100);
    iVar13 = rand();
    iVar14 = rand();
    iVar2 = local_5a0;
    local_628 = 0.0;
    local_1b8 = (float)(iVar14 % 100 & 0xff);
    fStack_1b4 = (float)(iVar13 % 0x32 + 100U & 0xff);
    local_1b0 = (float)local_58d;
    local_594 = (float)param_4;
    fVar23 = (float)(local_5ac / 3);
    local_5d4 = (float)((int)local_5d0 + local_5ac + 1);
    local_5f0 = fVar23;
    local_670._4_4_ = (float)-param_4 * 0.3;
    do {
      local_654 = local_654 + 0.9424778;
      local_604 = (double)CONCAT44(((float)(int)local_628 * 0.7) / 30.0 + 0.3,(undefined4)local_604)
      ;
      dVar21 = (double)local_654;
      libm_sse2_cos_precise();
      local_630 = (double)CONCAT44((float)dVar21 * local_594,(undefined4)local_630);
      dVar21 = (double)local_654;
      libm_sse2_sin_precise();
      fVar20 = (1.0 - local_604._4_4_) * 2.0;
      local_614 = (double)(local_604._4_4_ * (float)local_5ac + (float)(int)local_5d0);
      local_6e4 = (double)(int)local_5d8 + (double)(fVar20 * local_630._4_4_);
      local_70c = (double)(int)local_5dc + (double)(fVar20 * (float)dVar21 * local_594);
      local_700 = local_614 + (double)(fVar20 * local_670._4_4_);
      if (0 < (int)fVar23) {
        fStack_678 = (float)(int)fVar23;
        local_5c0 = local_5f0;
        do {
          fVar24 = (float)(int)fVar23 / fStack_678;
          fVar20 = 1.0 - fVar24;
          local_660 = (double)fVar24 * local_6e4 + (double)fVar20 * (double)(int)local_5d8;
          local_668 = (double)fVar24 * local_70c + (double)fVar20 * (double)(int)local_5dc;
          local_630 = (double)CONCAT44(fVar24,(undefined4)local_630);
          local_604 = (double)CONCAT44(fVar20,(undefined4)local_604);
          local_60c = (double)fVar24 * local_700 + (double)fVar20 * local_614;
          if (local_5fc < 0.3) {
            iVar14 = FUN_005f9e50(local_580,local_5d8,local_5dc);
            iVar13 = 0;
            do {
              iVar12 = iVar13 + 1;
              *(char *)((int)&local_6d0 + iVar13) = (char)(int)*(float *)(iVar14 + iVar13 * 4);
              iVar13 = iVar12;
            } while (iVar12 < 3);
            local_690 = local_6d0;
            local_68e = local_6ce;
            local_68d = 0x28;
            FUN_0059c890((int)local_660,(int)local_668,(int)(local_60c + 1.0),0x40000000,&local_690,
                         iVar2,1,0);
            fVar20 = local_604._4_4_;
            fVar24 = local_630._4_4_;
          }
          local_1c4 = CONCAT44(fStack_1b4,local_1b8);
          local_1bc = local_1b0;
          stack0xffffff20 = CONCAT44(fVar20 * local_170[1],fVar20 * local_170[0]);
          local_d8 = fVar20 * local_170[2];
          local_11c[1] = fVar20 * local_170[1] + fStack_1b4 * fVar24;
          local_11c[0] = fVar20 * local_170[0] + local_1b8 * fVar24;
          local_11c[2] = local_d8 + local_1b0 * fVar24;
          iVar13 = 0;
          do {
            iVar14 = iVar13 + 1;
            *(char *)((int)&local_6f4 + iVar13) = (char)(int)local_11c[iVar13];
            iVar13 = iVar14;
          } while (iVar14 < 3);
          local_6b0 = local_6f4;
          local_6ae = local_6f2;
          local_6ad = 0x28;
          FUN_0059c890((int)local_660,(int)local_668,(int)local_60c,0x40000000,&local_6b0,iVar2,1,0)
          ;
          fVar23 = (float)((int)fVar23 + -1);
          local_5c0 = (float)((int)local_5c0 + -1);
        } while (local_5c0 != 0.0);
        local_5c0 = 0.0;
        fVar23 = local_5f0;
      }
      iVar13 = 0;
      do {
        iVar14 = iVar13 + 1;
        *(char *)((int)&local_6a4 + iVar13) = (char)(int)local_170[iVar13];
        iVar13 = iVar14;
      } while (iVar14 < 3);
      local_6b8 = local_6a4;
      local_6b6 = local_6a2;
      local_6b5 = 0x28;
      FUN_0044e7a0(local_5d8,local_5dc,local_5d4,&local_6b8,iVar2);
      iVar13 = 0;
      do {
        iVar14 = iVar13 + 1;
        *(char *)((int)&local_688 + iVar13) = (char)(int)local_170[iVar13];
        iVar13 = iVar14;
      } while (iVar14 < 3);
      local_624 = (float)CONCAT13(0x28,CONCAT12(local_686,local_688));
      FUN_0044e7a0(local_5d8,local_5dc,local_5ac + (int)local_5d0,&local_624,iVar2);
      local_628 = (float)((int)local_628 + 1);
    } while ((int)local_628 < 0x1e);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* WorldInfo_generateBiomeContent @ 005e4850  kind=game  attributed-by=ledger  size=37430 */
// (decompilation unavailable)
undefined FUN_005e4850(void) { }

/* World_getColumnDataAt @ 005ee540  kind=gamemisc  attributed-by=ledger  size=593 */

float * FUN_005ee540(float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_8;
  
  fVar1 = (float10)FUN_004c0ef0((double)param_2 * 0.04,(double)param_3 * 0.04);
  fVar3 = ((float)fVar1 + 1.0) * 0.5;
  fVar1 = (float10)FUN_004c0ef0((double)param_2 * 0.005 + 45645.0,(double)param_3 * 0.005 + 456456.0
                               );
  local_8 = -((float)fVar1 * 120.0);
  if (0.0 < local_8) {
    local_8 = 0.0;
  }
  fVar2 = (float10)FUN_004c0ef0((double)param_2 * 0.02 + 89648.0,(double)param_3 * 0.02 + 1649.0);
  fVar4 = (float)fVar2 * 80.0 + 1.0;
  fVar2 = (float10)FUN_004c0ef0((double)param_2 * 0.005 + 342.0,(double)param_3 * 0.005 + 23423.0);
  fVar6 = 1.0 - fVar3;
  fVar5 = fVar4 * fVar3;
  local_8 = fVar5 + fVar6 * 200.0 + local_8;
  fVar3 = fVar3 * 120.0 + fVar6 * 230.0 + (float)fVar2 * 30.0;
  fVar4 = fVar5 + fVar6 * fVar4 + (float)fVar1 * 120.0;
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


/* World_findNearestObject @ 005eea60  kind=gamemisc  attributed-by=ledger  size=1137 */

void FUN_005eea60(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  float10 fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float local_48;
  int local_30;
  int local_2c;
  
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_005cade0();
  if ((((-1 < local_30) && (-1 < local_2c)) && (local_30 < 0x400)) &&
     ((local_2c < 0x400 &&
      (iVar2 = local_30 * 0x400, *(int *)(in_ECX + 0x4000bc + (iVar2 + local_2c) * 4) != 0)))) {
    local_48 = -1.0;
    dVar7 = (double)param_2 * 0.01;
    dVar8 = (double)param_2 * 0.0005;
    dVar6 = (double)param_1 * 0.01;
    dVar5 = (double)param_1 * 0.0005;
    FUN_004c0ef0((double)*(int *)(in_ECX + 0x800204) + dVar6,
                 (double)*(int *)(in_ECX + 0x800208) + dVar7);
    FUN_004c0ef0((double)*(int *)(in_ECX + 0x8001fc) + dVar5,
                 (double)*(int *)(in_ECX + 0x800200) + dVar8);
    FUN_004c0ef0((double)*(int *)(in_ECX + 0x800214) + dVar6,
                 (double)*(int *)(in_ECX + 0x800218) + dVar7);
    FUN_004c0ef0((double)*(int *)(in_ECX + 0x80020c) + dVar5,
                 (double)*(int *)(in_ECX + 0x800210) + dVar8);
    iVar3 = local_30 + -1;
    if ((-1 < iVar3) &&
       ((iVar3 < 0x400 && (*(int *)(in_ECX + 0x4000bc + (iVar3 * 0x400 + local_2c) * 4) != 0)))) {
      fVar4 = (float10)FUN_005ef5a0();
      local_48 = (float)fVar4;
      local_30 = extraout_ECX;
    }
    iVar3 = local_30 + 1;
    if (((-1 < iVar3) && (iVar3 < 0x400)) &&
       (*(int *)(in_ECX + 0x4000bc + (iVar3 * 0x400 + local_2c) * 4) != 0)) {
      fVar4 = (float10)FUN_005ef5a0();
      if ((local_48 < 0.0) || ((float)fVar4 < local_48)) {
        local_48 = (float)fVar4;
      }
    }
    iVar3 = local_2c + -1;
    if (((-1 < iVar3) && (iVar3 < 0x400)) &&
       (*(int *)(in_ECX + 0x4000bc + (iVar3 + iVar2) * 4) != 0)) {
      fVar4 = (float10)FUN_005ef5a0();
      iVar2 = extraout_ECX_00;
      if ((local_48 < 0.0) || ((float)fVar4 < local_48)) {
        local_48 = (float)fVar4;
      }
    }
    iVar3 = local_2c + 1;
    if (((-1 < iVar3) && (iVar3 < 0x400)) &&
       (*(int *)(in_ECX + 0x4000bc + (iVar2 + iVar3) * 4) != 0)) {
      fVar4 = (float10)FUN_005ef5a0();
      if ((local_48 < 0.0) || ((float)fVar4 < local_48)) {
        local_48 = (float)fVar4;
      }
    }
    if (0.0 <= local_48) {
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


/* World_getRegionCellPtr @ 005ef040  kind=gamemisc  attributed-by=ledger  size=1376 */

void FUN_005ef040(int param_1,int param_2)

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
joined_r0x005ef0e4:
    do {
      if (iVar10 <= iVar13) {
        if ((((iVar14 < 0) || (iVar10 < 0)) || (0x20002e < iVar12)) ||
           ((0x3ff < iVar10 || (iVar9 = *(int *)(in_ECX + (iVar12 + iVar10) * 4), iVar9 == 0))))
        goto LAB_005ef58b;
        if (*(char *)(iVar9 + 8) != '\x01') {
          iVar10 = iVar10 + 1;
          goto joined_r0x005ef0e4;
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
          goto LAB_005ef58b;
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
            goto LAB_005ef58b;
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
LAB_005ef58b:
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}


/* WorldInfo_placeStructure @ 005f0ce0  kind=game  attributed-by=ledger  size=15724 */

void FUN_005f0ce0(int param_1,int *param_2,uint param_3,byte param_4,int param_5,int param_6,
                 char param_7,int *param_8,int param_9)

{
  Spawn_vftable *pSVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  Spawn *pSVar6;
  float *pfVar7;
  longlong *plVar8;
  undefined4 uVar9;
  Spawn *pSVar10;
  uint uVar11;
  int iVar12;
  SequentialBehavior *pSVar13;
  undefined1 *puVar14;
  int iVar15;
  Spawn *pSVar16;
  _Container_base0 *this;
  bool bVar17;
  float10 fVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined4 uVar24;
  char local_71c [4];
  char local_718 [4];
  char local_714 [4];
  char local_710 [4];
  char local_70c [4];
  char local_708 [4];
  char local_704 [4];
  char local_700 [4];
  char local_6fc [4];
  int local_6f8;
  int local_6f4;
  int *local_6f0;
  int local_6ec;
  int local_6e8;
  Spawn *local_6e4;
  Spawn *local_6e0;
  int local_6dc;
  int local_6d8;
  int local_6d4;
  int local_6d0;
  int local_6cc;
  int local_6c8;
  undefined1 local_6c1;
  Spawn *local_6c0;
  int local_6bc;
  int local_6b8;
  undefined8 local_6b0;
  Spawn *local_6a8;
  Spawn *local_6a4;
  undefined4 local_6a0;
  undefined4 local_618 [2];
  Spawn *local_610;
  float local_60c;
  undefined8 local_608;
  Spawn *local_600;
  float local_5fc;
  uint local_5f8;
  undefined8 local_5f4;
  undefined4 local_5ec;
  void *local_5d0;
  undefined4 local_5cc;
  Spawn_vftable local_490 [2];
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined1 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined8 local_450;
  undefined4 *local_448;
  undefined4 *local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined2 local_438 [2];
  undefined4 local_434;
  undefined4 local_430;
  undefined2 local_42c;
  undefined1 local_42a;
  undefined2 local_428;
  undefined1 local_424 [256];
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 uStack_310;
  undefined4 local_30c;
  int local_308 [2];
  undefined8 local_300;
  undefined8 local_2f8;
  int local_2f0;
  uint local_2ec;
  uint local_2e8;
  undefined8 local_2e4;
  undefined4 local_2dc;
  _Container_base0 *local_2c0;
  _Container_base0 *local_2bc;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  Spawn *local_138;
  uint uStack_134;
  int local_12c;
  int iStack_128;
  Spawn *local_120;
  uint uStack_11c;
  Spawn *local_114;
  uint uStack_110;
  Spawn *local_108;
  uint uStack_104;
  int local_fc;
  int iStack_f8;
  int local_f0;
  int iStack_ec;
  int local_e4;
  int iStack_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined1 local_c0 [24];
  int local_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int iStack_98;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78 [2];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  float local_54;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  int local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  uint uStack_24;
  Spawn *local_20;
  uint uStack_1c;
  Spawn *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4726;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_6b0._4_4_ = (SequentialBehavior *)param_8;
  local_6d8 = param_1;
  local_6f0 = param_2;
  local_6e8 = param_6;
  local_6d0 = param_9;
  uVar3 = param_3 & 0x80000001;
  bVar17 = uVar3 == 0;
  if ((int)uVar3 < 0) {
    bVar17 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
  }
  local_6e4 = *(Spawn **)(param_1 + 0x44);
  local_6e0 = *(Spawn **)(param_1 + 0x48);
  if (!bVar17) {
    local_6e4 = *(Spawn **)(param_1 + 0x48);
    local_6e0 = *(Spawn **)(param_1 + 0x44);
  }
  local_a8 = *param_2;
  local_6ec = param_2[2];
  iStack_a4 = param_2[1];
  local_a0 = local_6ec;
  if ((param_6 == 0) ||
     ((((local_6f8 = *(int *)(param_6 + 0x60) * 0x100,
        local_300 = CONCAT44(local_300._4_4_,(undefined4)local_300),
        local_90 = CONCAT44(local_90._4_4_,(undefined4)local_90),
        uVar20 = CONCAT44(local_38._4_4_,(int)local_38),
        local_2f8 = CONCAT44(local_2f8._4_4_,(Spawn *)local_2f8),
        local_88 = CONCAT44(local_88._4_4_,(undefined4)local_88),
        uStack_30 = CONCAT44(uStack_30._4_4_,(uint)uStack_30),
        local_608 = CONCAT44(local_608._4_4_,(float)local_608),
        local_6f8 < (int)&local_6e4->vftablePtr + local_a8 &&
        (local_6e4 = (Spawn *)(*(int *)(param_6 + 100) * 0x100),
        local_300 = CONCAT44(local_300._4_4_,(undefined4)local_300),
        local_90 = CONCAT44(local_90._4_4_,(undefined4)local_90),
        uVar20 = CONCAT44(local_38._4_4_,(int)local_38),
        local_2f8 = CONCAT44(local_2f8._4_4_,(Spawn *)local_2f8),
        local_88 = CONCAT44(local_88._4_4_,(undefined4)local_88),
        uStack_30 = CONCAT44(uStack_30._4_4_,(uint)uStack_30),
        local_608 = CONCAT44(local_608._4_4_,(float)local_608),
        (int)local_6e4 < (int)&local_6e0->vftablePtr + iStack_a4)) &&
       (local_300 = CONCAT44(local_300._4_4_,(undefined4)local_300),
       local_90 = CONCAT44(local_90._4_4_,(undefined4)local_90),
       uVar20 = CONCAT44(local_38._4_4_,(int)local_38),
       local_2f8 = CONCAT44(local_2f8._4_4_,(Spawn *)local_2f8),
       local_88 = CONCAT44(local_88._4_4_,(undefined4)local_88),
       uStack_30 = CONCAT44(uStack_30._4_4_,(uint)uStack_30),
       local_608 = CONCAT44(local_608._4_4_,(float)local_608), local_a8 < local_6f8 + 0x100)) &&
      (local_300 = CONCAT44(local_300._4_4_,(undefined4)local_300),
      local_90 = CONCAT44(local_90._4_4_,(undefined4)local_90),
      uVar20 = CONCAT44(local_38._4_4_,(int)local_38),
      local_2f8 = CONCAT44(local_2f8._4_4_,(Spawn *)local_2f8),
      local_88 = CONCAT44(local_88._4_4_,(undefined4)local_88),
      uStack_30 = CONCAT44(uStack_30._4_4_,(uint)uStack_30),
      local_608 = CONCAT44(local_608._4_4_,(float)local_608),
      iStack_a4 < (int)&(local_6e4->Spawn_data).field_0xfc)))) {
    iVar4 = FUN_004347a0();
    if (iVar4 == 0) {
      fVar18 = (float10)FUN_005c4dd0(*local_6f0,local_6f0[1]);
      local_6e4 = (Spawn *)(float)fVar18;
      local_6a4 = local_6e4;
    }
    else {
      local_6e4 = *(Spawn **)(iVar4 + 8);
    }
    uVar20 = CONCAT44(local_38._4_4_,(int)local_38);
    local_6dc = *(int *)(local_6d8 + 0x44);
    local_6e0 = *(Spawn **)(local_6d8 + 0x48);
    local_6b8 = 0;
    local_6f4 = 0;
    uVar3 = param_3 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    switch(uVar3) {
    case 0:
      local_6b8 = *(int *)local_6b0._4_4_;
      local_6f4 = *(int *)((int)local_6b0._4_4_ + 4);
      local_6dc = local_6dc - *(int *)((int)local_6b0._4_4_ + 8);
      local_6e0 = (Spawn *)((int)local_6e0 - *(int *)((int)local_6b0._4_4_ + 0xc));
      break;
    case 1:
      local_6b8 = *(int *)((int)local_6b0._4_4_ + 0xc);
      local_6f4 = *(int *)local_6b0._4_4_;
      local_6dc = local_6dc - *(int *)((int)local_6b0._4_4_ + 4);
      local_6e0 = (Spawn *)((int)local_6e0 - *(int *)((int)local_6b0._4_4_ + 8));
      break;
    case 2:
      local_6b8 = *(int *)((int)local_6b0._4_4_ + 8);
      local_6f4 = *(int *)((int)local_6b0._4_4_ + 0xc);
      local_6dc = local_6dc - *(int *)local_6b0._4_4_;
      local_6e0 = (Spawn *)((int)local_6e0 - *(int *)((int)local_6b0._4_4_ + 4));
      break;
    case 3:
      local_6b8 = *(int *)((int)local_6b0._4_4_ + 4);
      local_6f4 = *(int *)((int)local_6b0._4_4_ + 8);
      local_6dc = local_6dc - *(int *)((int)local_6b0._4_4_ + 0xc);
      local_6e0 = (Spawn *)((int)local_6e0 - *(int *)local_6b0._4_4_);
    }
    iVar4 = local_6d8;
    pSVar10 = local_6e0;
    lVar19 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
    if (local_6b8 < local_6dc) {
      do {
        local_6b0 = lVar19;
        local_6bc = local_6f4;
        lVar19 = local_6b0;
        if (local_6f4 < (int)pSVar10) {
LAB_005f0fa4:
          iVar4 = *(int *)(iVar4 + 0x4c);
          iVar15 = 0;
          local_6c8 = 0;
          local_6cc = iVar4;
          if (0 < iVar4) {
            do {
              if ((((local_6b8 < 0) || (local_6bc < 0)) ||
                  ((iVar15 < 0 ||
                   ((*(int *)(local_6d8 + 0x44) <= local_6b8 ||
                    (*(int *)(local_6d8 + 0x48) <= local_6bc)))))) || (iVar4 <= iVar15)) {
                puVar14 = &DAT_0076b340;
              }
              else {
                puVar14 = (undefined1 *)
                          (((*(int *)(local_6d8 + 0x48) * iVar15 + local_6bc) *
                            *(int *)(local_6d8 + 0x44) + local_6b8) * 3 + *(int *)(local_6d8 + 0x30)
                          );
              }
              iVar4 = 0;
              do {
                if (puVar14[iVar4] != (&DAT_0076b340)[iVar4]) {
                  if (iVar15 < local_6cc) {
                    local_6cc = iVar15;
                  }
                  if (local_6c8 < iVar15) {
                    local_6c8 = iVar15;
                  }
                  break;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < 3);
              iVar4 = *(int *)(local_6d8 + 0x4c);
              iVar15 = iVar15 + 1;
              param_9 = local_6d0;
              param_6 = local_6e8;
            } while (iVar15 < iVar4);
          }
          lVar19 = local_6b0;
          if (param_7 != '\0') {
            if ((((local_6b8 < 0) || (local_6bc < 0)) || (*(int *)(local_6d8 + 0x44) <= local_6b8))
               || ((*(int *)(local_6d8 + 0x48) <= local_6bc || (iVar4 < 1)))) {
              puVar14 = &DAT_0076b340;
            }
            else {
              puVar14 = (undefined1 *)
                        ((*(int *)(local_6d8 + 0x44) * local_6bc + local_6b8) * 3 +
                        *(int *)(local_6d8 + 0x30));
            }
            iVar4 = 0;
            do {
              if (puVar14[iVar4] != (&DAT_0076b340)[iVar4]) {
                switch(uVar3) {
                case 0:
                  local_9c = local_a8 + local_6b8;
                  iStack_98 = iStack_a4 + local_6bc;
                  _local_e4 = CONCAT44(iStack_98,local_9c);
                  break;
                case 1:
                  local_9c = local_a8 + local_6bc;
                  iStack_98 = iStack_a4 + (*(int *)(local_6d8 + 0x44) - local_6b8) + -1;
                  _local_fc = CONCAT44(iStack_98,local_9c);
                  break;
                case 2:
                  local_9c = local_a8 + (*(int *)(local_6d8 + 0x44) - local_6b8) + -1;
                  iStack_98 = iStack_a4 + (*(int *)(local_6d8 + 0x48) - local_6bc) + -1;
                  _local_f0 = CONCAT44(iStack_98,local_9c);
                  break;
                case 3:
                  local_9c = local_a8 + (*(int *)(local_6d8 + 0x48) - local_6bc) + -1;
                  iStack_98 = iStack_a4 + local_6b8;
                  _local_12c = CONCAT44(iStack_98,local_9c);
                  break;
                default:
                  goto switchD_005f10e9_default;
                }
                local_94 = local_6ec;
switchD_005f10e9_default:
                local_38 = uVar20;
                iVar4 = FUN_004347a0();
                uVar20 = local_38;
                lVar19 = CONCAT44(local_6b0._4_4_,iVar4);
                if ((iVar4 != 0) &&
                   (iVar15 = local_6ec + -1, local_6b0._0_4_ = (Spawn *)iVar4,
                   lVar19 = CONCAT44(local_6b0._4_4_,iVar4), *(int *)(iVar4 + 0x10) < iVar15))
                goto LAB_005f1217;
                break;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < 3);
          }
          goto LAB_005f12f5;
        }
LAB_005f4ab2:
        local_6b0._4_4_ = (SequentialBehavior *)((ulonglong)lVar19 >> 0x20);
        local_6b0._0_4_ = (Spawn *)lVar19;
        local_6b8 = local_6b8 + 1;
      } while (local_6b8 < local_6dc);
    }
  }
  ExceptionList = local_10;
  local_38 = uVar20;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
  while( true ) {
    FUN_004a2870();
    FUN_0044e7a0();
    iVar15 = iVar15 + -1;
    param_9 = local_6d0;
    uVar20 = local_38;
    lVar19 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
    if (iVar15 <= *(int *)((int)(Spawn *)local_6b0 + 0x10)) break;
LAB_005f1217:
    iVar4 = FUN_004347a0();
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)&DAT_0076ddfc;
    }
    else {
      iVar12 = *(int *)(iVar4 + 0x10);
      if (iVar15 < iVar12) {
        puVar5 = (undefined4 *)&DAT_0076ddfc;
      }
      else if (iVar15 < *(int *)(iVar4 + 0x1c) + iVar12) {
        puVar5 = (undefined4 *)FUN_0042f730(iVar15 - iVar12);
        if ((((*(byte *)((int)puVar5 + 3) & 0x1f) == 0) && (iVar15 < 1)) &&
           ((*(byte *)((int)puVar5 + 3) & 0x40) == 0)) {
          puVar5 = (undefined4 *)&DAT_0076ddf4;
        }
      }
      else {
        puVar5 = (undefined4 *)&DAT_0076ddf4;
        if (0 < iVar15) {
          puVar5 = &DAT_0076ddf8;
        }
      }
    }
    if (((*(byte *)((int)puVar5 + 3) & 0x1f) != 0) &&
       (param_9 = local_6d0, uVar20 = local_38,
       lVar19 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0),
       (*(byte *)((int)puVar5 + 3) & 0x1f) != 2)) break;
  }
LAB_005f12f5:
  local_6b0 = lVar19;
  iVar4 = *(int *)(local_6d8 + 0x4c) + -1;
  iVar15 = param_9;
  local_6d4 = iVar4;
  if (-1 < iVar4) {
LAB_005f1310:
    local_38._0_4_ = (int)uVar20;
    switch(uVar3) {
    case 0:
      local_20 = (Spawn *)(local_a8 + local_6b8);
      uStack_1c = iStack_a4 + local_6bc;
      _local_108 = CONCAT44(uStack_1c,local_20);
      local_18 = (Spawn *)(local_6ec + iVar4);
      goto switchD_005f131f_default;
    case 1:
      local_20 = (Spawn *)(local_a8 + local_6bc);
      uStack_1c = iStack_a4 + (*(int *)(local_6d8 + 0x44) - local_6b8) + -1;
      _local_120 = CONCAT44(uStack_1c,local_20);
      param_6 = local_6e8;
      break;
    case 2:
      local_20 = (Spawn *)(local_a8 + (*(int *)(local_6d8 + 0x44) - local_6b8) + -1);
      uStack_1c = iStack_a4 + (*(int *)(local_6d8 + 0x48) - local_6bc) + -1;
      _local_138 = CONCAT44(uStack_1c,local_20);
      break;
    case 3:
      local_20 = (Spawn *)(local_a8 + (*(int *)(local_6d8 + 0x48) - local_6bc) + -1);
      uStack_1c = iStack_a4 + local_6b8;
      _local_114 = CONCAT44(uStack_1c,local_20);
      break;
    default:
      goto switchD_005f131f_default;
    }
    local_18 = (Spawn *)(local_6ec + iVar4);
switchD_005f131f_default:
    if (((local_6b8 < 0) || (local_6bc < 0)) ||
       ((iVar4 < 0 ||
        (((*(int *)(local_6d8 + 0x44) <= local_6b8 || (*(int *)(local_6d8 + 0x48) <= local_6bc)) ||
         (*(int *)(local_6d8 + 0x4c) <= iVar4)))))) {
      local_6b0._4_4_ = (SequentialBehavior *)&DAT_0076b340;
    }
    else {
      local_6b0._4_4_ =
           (SequentialBehavior *)
           (((*(int *)(local_6d8 + 0x48) * iVar4 + local_6bc) * *(int *)(local_6d8 + 0x44) +
            local_6b8) * 3 + *(int *)(local_6d8 + 0x30));
    }
    iVar12 = 0;
    do {
      param_9 = iVar15;
      local_6d4 = iVar4;
      if (*(char *)((int)&(local_6b0._4_4_)->vftablePtr + iVar12) != (&DAT_0076b340)[iVar12]) {
        local_6a4 = local_18;
        uVar9 = 0x5f15a2;
        uVar11 = uStack_1c;
        local_38 = uVar20;
        iVar12 = FUN_004347a0();
        if (iVar12 == 0) {
          puVar5 = (undefined4 *)&DAT_0076ddfc;
        }
        else if ((int)local_18 < *(int *)(iVar12 + 0x10)) {
          puVar5 = (undefined4 *)&DAT_0076ddfc;
        }
        else if ((int)local_18 < *(int *)(iVar12 + 0x1c) + *(int *)(iVar12 + 0x10)) {
          uVar11 = 0x5f15e9;
          puVar5 = (undefined4 *)FUN_0042f730((int)local_18 - *(int *)(iVar12 + 0x10));
          if ((((*(byte *)((int)puVar5 + 3) & 0x1f) == 0) && ((int)local_6a4 < 1)) &&
             ((*(byte *)((int)puVar5 + 3) & 0x40) == 0)) {
            puVar5 = (undefined4 *)&DAT_0076ddf4;
          }
        }
        else {
          puVar5 = (undefined4 *)&DAT_0076ddf4;
          if (0 < (int)local_18) {
            puVar5 = &DAT_0076ddf8;
          }
        }
        if ((*(byte *)((int)puVar5 + 3) & 0x40) != 0) {
          local_6a4 = local_18;
          uVar9 = 0x5f1629;
          uVar11 = uStack_1c;
          iVar12 = FUN_004347a0();
          if (iVar12 == 0) {
            puVar5 = (undefined4 *)&DAT_0076ddfc;
          }
          else if ((int)local_18 < *(int *)(iVar12 + 0x10)) {
            puVar5 = (undefined4 *)&DAT_0076ddfc;
          }
          else if ((int)local_18 < *(int *)(iVar12 + 0x1c) + *(int *)(iVar12 + 0x10)) {
            uVar11 = 0x5f1670;
            puVar5 = (undefined4 *)FUN_0042f730((int)local_18 - *(int *)(iVar12 + 0x10));
            if ((((*(byte *)((int)puVar5 + 3) & 0x1f) == 0) && ((int)local_6a4 < 1)) &&
               ((*(byte *)((int)puVar5 + 3) & 0x40) == 0)) {
              puVar5 = (undefined4 *)&DAT_0076ddf4;
            }
          }
          else {
            puVar5 = (undefined4 *)&DAT_0076ddf4;
            if (0 < (int)local_18) {
              puVar5 = &DAT_0076ddf8;
            }
          }
          if (((*(byte *)((int)puVar5 + 3) & 0x1f) != 0) &&
             (uVar20 = local_38, local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0),
             (*(byte *)((int)puVar5 + 3) & 0x1f) != 2)) goto LAB_005f4a7e;
        }
        param_9 = local_6d0;
        iVar12 = local_6d4;
        if (((((param_5 != 1) &&
              (((((param_5 != 2 && (param_5 != 6)) && (param_5 != 3)) &&
                ((param_5 != 4 && (param_5 != 5)))) && (param_5 != 7)))) &&
             ((param_5 != 9 && (param_5 != 10)))) && (param_5 != 0xb)) &&
           ((((param_5 != 0xc && (param_5 != 0xd)) && (param_5 != 0xe)) && (param_5 != 0xf))))
        goto LAB_005f493b;
        local_708[0] = -1;
        local_708[1] = '\0';
        local_708[2] = 0;
        local_6a8 = (Spawn *)0x0;
        local_6a4 = (Spawn *)((int)local_6b0._4_4_ - (int)local_708);
        goto LAB_005f1720;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 3);
    local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
    if ((local_6cc < iVar4) &&
       (local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0), iVar4 < local_6c8)) {
      if (iVar15 != 0) {
        uStack_25 = 0xc0;
        uStack_26 = 0xff;
        local_6a4 = *(Spawn **)(iVar15 + 0x18);
        local_28 = 0xffff;
        uStack_24 = 0;
        local_6a0 = (Spawn *)CONCAT13(0xc0,(undefined3)local_6a0);
        local_38._4_4_ = local_20;
        uStack_30._0_4_ = uStack_1c;
        uStack_30._4_4_ = local_18;
        iVar12 = FUN_00451e80();
        uVar20 = CONCAT44(local_38._4_4_,(int)local_38);
        if (*(int *)(iVar15 + 0x1c) == 0x9249248) goto LAB_005f4ae3;
        *(int *)(iVar15 + 0x1c) = *(int *)(iVar15 + 0x1c) + 1;
        *(int *)&local_6a4->Spawn_data = iVar12;
        **(int **)(iVar12 + 4) = iVar12;
      }
      goto LAB_005f4a73;
    }
    goto LAB_005f4a7e;
  }
LAB_005f4a91:
  local_6bc = local_6bc + 1;
  iVar4 = local_6d8;
  pSVar10 = local_6e0;
  lVar19 = local_6b0;
  if ((int)local_6e0 <= local_6bc) goto LAB_005f4ab2;
  goto LAB_005f0fa4;
  while (local_6a8 = (Spawn *)((int)&local_6a8->vftablePtr + 1), (int)local_6a8 < 3) {
LAB_005f1720:
    if ((local_708 + (int)local_6a8)[(int)local_6b0._4_4_ - (int)local_708] !=
        local_708[(int)local_6a8]) {
      local_6fc[0] = '\0';
      local_6fc[1] = -1;
      local_6fc[2] = 0;
      local_6a8 = (Spawn *)0x0;
      local_6a4 = (Spawn *)((int)local_6b0._4_4_ - (int)local_6fc);
      goto LAB_005f1ca0;
    }
  }
  local_428 = 1;
  local_460 = 1;
  local_45c = 0;
  local_458 = 0;
  local_450 = 0;
  local_448 = (undefined4 *)0x0;
  local_444 = (undefined4 *)0x0;
  local_440 = 0;
  local_43c = 0;
  local_438[0] = 0;
  local_434 = 0;
  local_430 = 0;
  local_42c = 0;
  local_42a = 0;
  local_324 = 0;
  memset(local_424,0,0x100);
  local_320 = 0;
  local_31c = 0;
  local_318 = 0xffffffff;
  local_314 = 0xffffffff;
  uStack_310 = 0xffffffff;
  local_30c = 0;
  local_8 = 0;
  cVar2 = FUN_005cb3b0(local_6d8,&local_a8,param_3,local_6b8,local_6bc,iVar4,local_490);
  iVar4 = local_6d0;
  if (cVar2 != '\0') {
    local_6a8 = (Spawn *)(param_6 + 0xc);
    local_6a4 = (Spawn *)((param_5 == 7) + 1);
    local_490[0].deleting_destructor = (deleting_destructor *)local_6a4;
    if ((local_490 < *(Spawn_vftable **)(param_6 + 0x10)) &&
       (pSVar1 = local_6a8->vftablePtr, param_9 = local_6d0, pSVar1 <= local_490)) {
      if (*(int *)(param_6 + 0x10) == *(int *)(param_6 + 0x14)) {
        FUN_00594b40(1);
      }
      pSVar10 = *(Spawn **)(param_6 + 0x10);
      pSVar16 = (Spawn *)(((Spawn *)(param_6 + 0xc))->vftablePtr +
                         (((int)local_490 - (int)pSVar1) / 0x188) * 0x62);
      local_8 = CONCAT31(local_8._1_3_,1);
      pSVar6 = (Spawn *)(param_6 + 0xc);
      local_6c0 = pSVar10;
      local_6b0._0_4_ = pSVar10;
      local_6a4 = pSVar16;
      local_6a0 = pSVar10;
      if (pSVar10 != (Spawn *)0x0) {
        pSVar10->vftablePtr = pSVar16->vftablePtr;
        (pSVar10->Spawn_data).offset_0x4 = (pSVar16->Spawn_data).offset_0x4;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x8 =
             *(undefined4 *)&(pSVar16->Spawn_data).field_0x8;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0xc =
             *(undefined4 *)&(pSVar16->Spawn_data).field_0xc;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x10 =
             *(undefined4 *)&(pSVar16->Spawn_data).field_0x10;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x14 =
             *(undefined4 *)&(pSVar16->Spawn_data).field_0x14;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x18 =
             *(undefined4 *)&(pSVar16->Spawn_data).field_0x18;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x1c =
             *(undefined4 *)&(pSVar16->Spawn_data).field_0x1c;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x20 =
             *(undefined4 *)&(pSVar16->Spawn_data).field_0x20;
        (pSVar10->Spawn_data).offset_0x24 = (pSVar16->Spawn_data).offset_0x24;
        (pSVar10->Spawn_data).offset_0x28 = (pSVar16->Spawn_data).offset_0x28;
        *(undefined1 *)&(pSVar10->Spawn_data).offset_0x2c =
             *(undefined1 *)&(pSVar16->Spawn_data).offset_0x2c;
        (pSVar10->Spawn_data).offset_0x30 = (pSVar16->Spawn_data).offset_0x30;
        (pSVar10->Spawn_data).offset_0x34 = (pSVar16->Spawn_data).offset_0x34;
        (pSVar10->Spawn_data).offset_0x3c = (pSVar16->Spawn_data).offset_0x3c;
        (pSVar10->Spawn_data).offset_0x40 = (pSVar16->Spawn_data).offset_0x40;
        FUN_004593e0(&(pSVar16->Spawn_data).offset_0x44);
        (pSVar10->Spawn_data).offset_0x50 = (pSVar16->Spawn_data).offset_0x50;
        FUN_0040ee70(&(pSVar16->Spawn_data).offset_0x54);
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x16c =
             *(undefined4 *)&(pSVar16->Spawn_data).field_0x16c;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x170 =
             *(undefined4 *)&(pSVar16->Spawn_data).field_0x170;
        *(undefined4 *)&(((Spawn *)local_6b0)->Spawn_data).field_0x174 =
             *(undefined4 *)&(local_6a4->Spawn_data).field_0x174;
        *(undefined4 *)&(((Spawn *)local_6b0)->Spawn_data).field_0x178 =
             *(undefined4 *)&(local_6a4->Spawn_data).field_0x178;
        *(undefined4 *)&(((Spawn *)local_6b0)->Spawn_data).field_0x17c =
             *(undefined4 *)&(local_6a4->Spawn_data).field_0x17c;
        *(undefined4 *)&(((Spawn *)local_6b0)->Spawn_data).field_0x180 =
             *(undefined4 *)&(local_6a4->Spawn_data).field_0x180;
        pSVar6 = local_6a8;
        param_6 = local_6e8;
      }
      *(int *)&pSVar6->Spawn_data = *(int *)&pSVar6->Spawn_data + 0x188;
      param_9 = iVar4;
    }
    else {
      if (*(Spawn_vftable **)(param_6 + 0x10) == *(Spawn_vftable **)(param_6 + 0x14)) {
        FUN_00594b40(1);
      }
      pSVar10 = *(Spawn **)(param_6 + 0x10);
      local_8 = CONCAT31(local_8._1_3_,2);
      local_6c0 = pSVar10;
      local_6a0 = pSVar10;
      if (pSVar10 != (Spawn *)0x0) {
        pSVar10->vftablePtr = (Spawn_vftable *)local_6a4;
        (pSVar10->Spawn_data).offset_0x4 = local_488;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x8 = local_484;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0xc = local_480;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x10 = local_47c;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x14 = local_478;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x18 = local_474;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x1c = local_470;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x20 = local_46c;
        (pSVar10->Spawn_data).offset_0x24 = local_468;
        (pSVar10->Spawn_data).offset_0x28 = local_464;
        *(undefined1 *)&(pSVar10->Spawn_data).offset_0x2c = local_460;
        (pSVar10->Spawn_data).offset_0x30 = local_45c;
        (pSVar10->Spawn_data).offset_0x34 = local_458;
        (pSVar10->Spawn_data).offset_0x3c = (undefined4)local_450;
        (pSVar10->Spawn_data).offset_0x40 = local_450._4_4_;
        local_6a4 = pSVar10;
        FUN_004593e0(&local_448);
        (pSVar10->Spawn_data).offset_0x50 = local_43c;
        FUN_0040ee70(local_438);
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x16c = local_320;
        *(undefined4 *)&(pSVar10->Spawn_data).field_0x170 = local_31c;
        *(undefined4 *)&(local_6a4->Spawn_data).field_0x174 = local_318;
        *(undefined4 *)&(local_6a4->Spawn_data).field_0x178 = local_314;
        *(undefined4 *)&(local_6a4->Spawn_data).field_0x17c = uStack_310;
        *(undefined4 *)&(local_6a4->Spawn_data).field_0x180 = local_30c;
        pSVar10 = local_6a4;
      }
      local_6a4 = pSVar10;
      *(int *)(param_6 + 0x10) = *(int *)(param_6 + 0x10) + 0x188;
    }
    local_8 = local_8 & 0xffffff00;
  }
  if (param_9 != 0) {
    local_28 = 0;
    uStack_30._4_4_ = local_18;
    local_6a4 = *(Spawn **)(param_9 + 0x18);
    uStack_24 = 0;
    local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
    uStack_26 = 0;
    uStack_25 = 0x40;
    local_38._4_4_ = local_20;
    uStack_30._0_4_ = uStack_1c;
    iVar4 = FUN_00451e80();
    if (*(int *)(param_9 + 0x1c) == 0x9249248) {
LAB_005f4ae3:
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(param_9 + 0x1c) = *(int *)(param_9 + 0x1c) + 1;
    *(int *)&local_6a4->Spawn_data = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
  }
  FUN_0044e7a0();
  local_8 = 0xffffffff;
  iVar4 = local_6d4;
  uVar20 = local_38;
  puVar5 = local_448;
  if (local_448 != (undefined4 *)0x0) {
    while( true ) {
      if (puVar5 == local_444) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_448);
      }
      if ((void *)*puVar5 != (void *)0x0) break;
      puVar5 = puVar5 + 3;
    }
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar5);
  }
  goto LAB_005f4a7e;
  while (local_6a8 = (Spawn *)((int)&local_6a8->vftablePtr + 1), (int)local_6a8 < 3) {
LAB_005f1ca0:
    if ((local_6fc + (int)local_6a8)[(int)local_6b0._4_4_ - (int)local_6fc] !=
        local_6fc[(int)local_6a8]) {
      local_704[0] = '\0';
      local_704[1] = '\x7f';
      local_704[2] = 0x7f;
      local_6a8 = (Spawn *)0x0;
      local_6a4 = (Spawn *)((int)local_6b0._4_4_ - (int)local_704);
      goto LAB_005f1eb0;
    }
  }
  FUN_0058eaa0();
  local_8 = 3;
  cVar2 = FUN_005cb3b0();
  if (cVar2 != '\0') {
    local_308[0] = 3;
    FUN_005a0e00(local_308);
  }
  if (param_9 != 0) {
    local_6a4 = *(Spawn **)(param_9 + 0x18);
    local_28 = 0;
    uStack_24 = 0;
    local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
    uStack_26 = 0;
    uStack_25 = 0x40;
    local_38._4_4_ = local_20;
    uStack_30._0_4_ = uStack_1c;
    uStack_30._4_4_ = local_18;
    iVar15 = FUN_00451e80();
    if (*(int *)(param_9 + 0x1c) == 0x9249248) goto LAB_005f4ae3;
    *(int *)(param_9 + 0x1c) = *(int *)(param_9 + 0x1c) + 1;
    *(int *)&local_6a4->Spawn_data = iVar15;
    **(int **)(iVar15 + 4) = iVar15;
  }
  FUN_0044e7a0();
  local_8 = 0xffffffff;
  uVar20 = local_38;
  local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  if (local_2c0 != (_Container_base0 *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_2c0);
    local_6a4 = (Spawn *)local_2bc;
    this = local_2c0;
    while( true ) {
      if (this == local_2bc) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c0);
      }
      if (*(int *)this != 0) break;
      this = this + 0xc;
    }
    std::_Container_base0::_Orphan_all(this);
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)this);
  }
  goto LAB_005f4a7e;
  while (local_6a8 = (Spawn *)((int)&local_6a8->vftablePtr + 1), (int)local_6a8 < 3) {
LAB_005f1eb0:
    iVar15 = param_9;
    if ((local_704 + (int)local_6a8)[(int)local_6b0._4_4_ - (int)local_704] !=
        local_704[(int)local_6a8]) {
      local_70c[0] = -1;
      local_70c[1] = '\x7f';
      local_70c[2] = 0;
      local_6a8 = (Spawn *)0x0;
      local_6a4 = (Spawn *)((int)local_6b0._4_4_ - (int)local_70c);
      goto LAB_005f2170;
    }
  }
  uVar20 = local_38;
  local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  if ((float)local_6e4 <= 0.5) goto LAB_005f4a7e;
  iVar12 = FUN_0042f7e0(local_20,uStack_1c,local_18,param_6);
  if (((*(byte *)(iVar12 + 3) & 0x1f) != 0) &&
     (uVar20 = local_38, local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0),
     (*(byte *)(iVar12 + 3) & 0x1f) != 2)) goto LAB_005f4a7e;
  iVar12 = rand();
  uVar20 = local_38;
  if (iVar12 % 5 == 0) {
    local_4c = 0x3f800000;
    uStack_48 = 0x3f800000;
    local_44 = 0x3f800000;
    iVar4 = rand();
    local_78[0] = iVar4 % 3 + 0x29;
    lVar19 = FUN_0068d946();
    local_d0 = FUN_0068d946();
    param_6 = local_6e8;
    local_38._4_4_ = (Spawn *)(((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10);
    local_38._0_4_ = (int)local_20 * 0x10000;
    uStack_30._4_4_ = (Spawn *)(((int)uStack_1c >> 0x1f) << 0x10 | uStack_1c >> 0x10);
    uStack_30._0_4_ = uStack_1c * 0x10000;
    uStack_24 = ((int)local_18 >> 0x1f) << 0x10 | (uint)local_18 >> 0x10;
    local_28 = 0;
    uStack_26 = SUB41(local_18,0);
    uStack_25 = (undefined1)((uint)local_18 >> 8);
    local_d8 = local_d0 + CONCAT44(local_38._4_4_,(int)local_38);
    local_d0 = local_d0 + CONCAT44(uStack_30._4_4_,(uint)uStack_30);
    local_c8 = lVar19 + CONCAT44(uStack_24,(int)local_18 * 0x10000);
    iVar4 = *(int *)(local_6e8 + 4);
    local_70 = local_d8;
    local_68 = local_d0;
    local_60 = local_c8;
    local_54 = (float)(int)(param_3 * -0x5a);
    local_58 = 0x3e19999a;
    local_40 = 0;
    iVar15 = FUN_005c03f0();
    uVar20 = CONCAT44(local_38._4_4_,(int)local_38);
    if (*(int *)(param_6 + 8) == 0x38e38e2) goto LAB_005f4ae3;
    *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
    *(int *)(iVar4 + 4) = iVar15;
    **(int **)(iVar15 + 4) = iVar15;
    iVar15 = local_6d0;
    iVar4 = local_6d4;
  }
  local_38._0_4_ = (int)uVar20;
  if (iVar15 != 0) {
    local_6a4 = *(Spawn **)(iVar15 + 0x18);
    local_28 = 0;
    uStack_24 = 0;
    local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
    uStack_26 = 0;
    uStack_25 = 0x40;
    local_38._4_4_ = local_20;
    uStack_30._0_4_ = uStack_1c;
    uStack_30._4_4_ = local_18;
    iVar12 = FUN_00451e80();
    uVar20 = CONCAT44(local_38._4_4_,(int)local_38);
    if (*(int *)(iVar15 + 0x1c) == 0x9249248) goto LAB_005f4ae3;
    *(int *)(iVar15 + 0x1c) = *(int *)(iVar15 + 0x1c) + 1;
    *(int *)&local_6a4->Spawn_data = iVar12;
    **(int **)(iVar12 + 4) = iVar12;
  }
  goto LAB_005f4a73;
  while (local_6a8 = (Spawn *)((int)&local_6a8->vftablePtr + 1), (int)local_6a8 < 3) {
LAB_005f2170:
    if ((local_70c + (int)local_6a8)[(int)local_6b0._4_4_ - (int)local_70c] !=
        local_70c[(int)local_6a8]) {
      local_714[0] = -1;
      local_714[1] = '\x7f';
      local_714[2] = 0x7f;
      local_6b0._0_4_ = (Spawn *)0x0;
      local_6a4 = (Spawn *)((int)local_6b0._4_4_ - (int)local_714);
      goto LAB_005f2570;
    }
  }
  FUN_0058eaa0();
  local_8 = 4;
  local_308[0] = 0x13;
  local_6b0 = FUN_0068d946();
  local_6a4 = (Spawn *)(((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10);
  local_2ec = ((int)local_18 >> 0x1f) << 0x10 | (uint)local_18 >> 0x10;
  local_6a8 = (Spawn *)((int)local_18 << 0x10);
  local_300 = local_6b0 + CONCAT44(local_6a4,(int)local_20 * 0x10000);
  local_2f8 = local_6b0 +
              CONCAT44(((int)uStack_1c >> 0x1f) << 0x10 | uStack_1c >> 0x10,uStack_1c * 0x10000);
  local_160 = 0x3f800000;
  local_2dc = 0x3f800000;
  local_168 = 0x40000000;
  uStack_164 = 0x40400000;
  local_2e4 = 0x4040000040000000;
  local_2e8 = 0;
  local_2f0 = (int)local_6a8;
  FUN_005a0e00(local_308);
  FUN_0058eaa0();
  local_8 = CONCAT31(local_8._1_3_,5);
  local_618[0] = 0x14;
  lVar19 = FUN_0068d946();
  param_6 = local_6e8;
  local_6a4 = (Spawn *)((ulonglong)lVar19 >> 0x20);
  local_5fc = (float)(((int)local_18 >> 0x1f) << 0x10 | (uint)local_18 >> 0x10);
  local_600 = (Spawn *)((int)local_18 << 0x10);
  lVar19 = lVar19 + CONCAT44(((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10,
                             (int)local_20 * 0x10000);
  local_6a8 = (Spawn *)lVar19;
  local_60c = (float)((ulonglong)lVar19 >> 0x20);
  local_608 = local_6b0 +
              CONCAT44(((int)uStack_1c >> 0x1f) << 0x10 | uStack_1c >> 0x10,uStack_1c * 0x10000);
  local_6b0._4_4_ = (SequentialBehavior *)((ulonglong)local_608 >> 0x20);
  local_13c = 0x3f800000;
  local_5ec = 0x3f800000;
  local_144 = 0x3f800000;
  uStack_140 = 0x3f800000;
  local_5f8 = 0;
  local_5f4 = 0x3f8000003f800000;
  local_610 = local_6a8;
  FUN_005a0e00(local_618);
  param_9 = local_6d0;
  iVar4 = local_6d4;
  if ((local_6cc < local_6d4) && (local_6d4 < local_6c8)) {
    if (local_6d0 != 0) {
      local_6a4 = *(Spawn **)(local_6d0 + 0x18);
      local_28 = 0;
      uStack_24 = 0;
      local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
      uStack_26 = 0;
      uStack_25 = 0x40;
      local_38._4_4_ = local_20;
      uStack_30._0_4_ = uStack_1c;
      uStack_30._4_4_ = local_18;
      iVar15 = FUN_00451e80();
      if (*(int *)(param_9 + 0x1c) == 0x9249248) goto LAB_005f4ae3;
      *(int *)(param_9 + 0x1c) = *(int *)(param_9 + 0x1c) + 1;
      *(int *)&local_6a4->Spawn_data = iVar15;
      **(int **)(iVar15 + 4) = iVar15;
    }
    FUN_0044e7a0();
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  goto LAB_005f2494;
  while (local_6b0._0_4_ = (Spawn *)((int)(Spawn *)local_6b0 + 1), (int)(Spawn *)local_6b0 < 3) {
LAB_005f2570:
    if ((local_714 + (int)(Spawn *)local_6b0)[(int)local_6b0._4_4_ - (int)local_714] !=
        local_714[(int)(Spawn *)local_6b0]) {
      local_71c[0] = '\x7f';
      local_71c[1] = '\x7f';
      local_71c[2] = 0;
      local_6b0._0_4_ = (Spawn *)0x0;
      local_6a4 = (Spawn *)(local_71c + -(int)local_6b0._4_4_);
      pSVar13 = local_6b0._4_4_;
      goto LAB_005f27e0;
    }
  }
  FUN_0058eaa0();
  local_8 = 6;
  iVar4 = rand();
  local_308[0] = iVar4 % 3 + 0x20;
  lVar19 = FUN_0068d946();
  param_6 = local_6e8;
  local_6b0._0_4_ = (Spawn *)((ulonglong)lVar19 >> 0x20);
  local_6a4 = (Spawn *)(((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10);
  local_2ec = ((int)local_18 >> 0x1f) << 0x10 | (uint)local_18 >> 0x10;
  local_2f0 = (int)local_18 << 0x10;
  local_300 = lVar19 + CONCAT44(local_6a4,(int)local_20 * 0x10000);
  lVar19 = lVar19 + CONCAT44(((int)uStack_1c >> 0x1f) << 0x10 | uStack_1c >> 0x10,
                             uStack_1c * 0x10000);
  local_6a8 = (Spawn *)lVar19;
  local_2f8._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
  local_2e8 = param_3;
  local_16c = 0x3f800000;
  local_2dc = 0x3f800000;
  local_174 = 0x40000000;
  uStack_170 = 0x40400000;
  local_2e4 = 0x4040000040000000;
  local_2f8._0_4_ = local_6a8;
  FUN_005a0e00(local_308);
  param_9 = local_6d0;
  iVar4 = local_6d4;
  if ((local_6cc < local_6d4) && (local_6d4 < local_6c8)) {
    if (local_6d0 != 0) {
      local_28 = 0;
      uStack_30._4_4_ = local_18;
      uStack_24 = 0;
      local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
      uStack_26 = 0;
      uStack_25 = 0x40;
      local_38._4_4_ = local_20;
      uStack_30._0_4_ = uStack_1c;
      FUN_00486240((int)&local_38 + 4);
    }
    FUN_0044e7a0();
  }
  local_8 = 0xffffffff;
  uVar20 = local_38;
  local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  if (local_2c0 != (_Container_base0 *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_2c0);
    FUN_00639cf0(local_2c0,local_2bc,&local_6c1,local_6a0);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c0);
  }
  goto LAB_005f4a7e;
  while( true ) {
    local_6b0._0_4_ = (Spawn *)((int)(Spawn *)local_6b0 + 1);
    pSVar13 = (SequentialBehavior *)((int)&pSVar13->vftablePtr + 1);
    if (2 < (int)(Spawn *)local_6b0) break;
LAB_005f27e0:
    if (*(char *)&pSVar13->vftablePtr !=
        *(char *)((int)&pSVar13->vftablePtr +
                 (int)&((Spawn *)(local_71c + -(int)local_6b0._4_4_))->vftablePtr)) {
      local_6c0 = (Spawn *)(local_718 + -(int)local_6b0._4_4_);
      local_718[0] = -1;
      local_718[1] = -1;
      local_718[2] = 0;
      local_6b0._0_4_ = (Spawn *)0x0;
      pSVar13 = local_6b0._4_4_;
      goto LAB_005f2bf0;
    }
  }
  FUN_0058eaa0();
  local_8 = 7;
  local_308[0] = 0xc;
  local_6b0 = FUN_0068d946();
  local_6a4 = (Spawn *)(((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10);
  local_2ec = ((int)local_18 >> 0x1f) << 0x10 | (uint)local_18 >> 0x10;
  local_6a8 = (Spawn *)((int)local_18 << 0x10);
  local_300 = local_6b0 + CONCAT44(local_6a4,(int)local_20 * 0x10000);
  local_2f8 = local_6b0 +
              CONCAT44(((int)uStack_1c >> 0x1f) << 0x10 | uStack_1c >> 0x10,uStack_1c * 0x10000);
  local_2f0 = (int)local_6a8;
  local_2e8 = rand();
  local_2e8 = local_2e8 & 0x80000003;
  if ((int)local_2e8 < 0) {
    local_2e8 = (local_2e8 - 1 | 0xfffffffc) + 1;
  }
  local_178 = 0x3f800000;
  local_2dc = 0x3f800000;
  local_180 = 0x40400000;
  uStack_17c = 0x40400000;
  local_2e4 = 0x4040000040400000;
  FUN_005a0e00(local_308);
  FUN_0058eaa0();
  local_8 = CONCAT31(local_8._1_3_,8);
  local_618[0] = 0x10;
  lVar19 = FUN_0068d946();
  uVar9 = (Spawn *)local_6b0;
  local_6a4 = (Spawn *)((ulonglong)lVar19 >> 0x20);
  local_5fc = (float)(((int)local_18 >> 0x1f) << 0x10 | (uint)local_18 >> 0x10);
  local_6c0 = (Spawn *)((int)local_18 << 0x10);
  lVar19 = lVar19 + CONCAT44(((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10,
                             (int)local_20 * 0x10000);
  local_6a8 = (Spawn *)lVar19;
  local_60c = (float)((ulonglong)lVar19 >> 0x20);
  local_608 = local_6b0 +
              CONCAT44(((int)uStack_1c >> 0x1f) << 0x10 | uStack_1c >> 0x10,uStack_1c * 0x10000);
  local_610 = local_6a8;
  local_600 = local_6c0;
  local_5f8 = rand();
  param_6 = local_6e8;
  local_5f8 = local_5f8 & 0x80000003;
  if ((int)local_5f8 < 0) {
    local_5f8 = (local_5f8 - 1 | 0xfffffffc) + 1;
  }
  local_148 = 0x3f000000;
  local_5ec = 0x3f000000;
  local_150 = 0x3f800000;
  uStack_14c = 0x3f800000;
  local_5f4 = 0x3f8000003f800000;
  FUN_005a0e00(local_618);
  uVar20 = FUN_0068d946();
  local_88._4_4_ = local_6b0._4_4_;
  local_38._4_4_ = (Spawn *)(((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10);
  local_38._0_4_ = (int)local_20 << 0x10;
  uStack_30._4_4_ = (Spawn *)(((int)uStack_1c >> 0x1f) << 0x10 | uStack_1c >> 0x10);
  uStack_30._0_4_ = uStack_1c << 0x10;
  uStack_24 = ((int)local_18 >> 0x1f) << 0x10 | (uint)local_18 >> 0x10;
  local_28 = 0;
  uStack_26 = SUB41(local_18,0);
  uStack_25 = (undefined1)((uint)local_18 >> 8);
  local_88._0_4_ = uVar9;
  local_80 = 0;
  local_90 = uVar20;
  pfVar7 = (float *)FUN_0042c800(local_c0,&local_90);
  local_610 = (Spawn *)*pfVar7;
  local_60c = pfVar7[1];
  local_608._0_4_ = pfVar7[2];
  local_608._4_4_ = pfVar7[3];
  local_600 = (Spawn *)pfVar7[4];
  local_5fc = pfVar7[5];
  FUN_005a0e00(local_618);
  local_5f8 = rand();
  param_9 = local_6d0;
  iVar4 = local_6d4;
  local_5f8 = local_5f8 & 0x80000003;
  if ((int)local_5f8 < 0) {
    local_5f8 = (local_5f8 - 1 | 0xfffffffc) + 1;
  }
  if ((local_6cc < local_6d4) && (local_6d4 < local_6c8)) {
    if (local_6d0 != 0) {
      local_28 = 0;
      uStack_30._4_4_ = local_18;
      uStack_24 = 0;
      local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
      uStack_26 = 0;
      uStack_25 = 0x40;
      local_38._4_4_ = local_20;
      uStack_30._0_4_ = uStack_1c;
      FUN_00486240((int)&local_38 + 4);
    }
    FUN_0044e7a0();
  }
  local_8 = CONCAT31(local_8._1_3_,7);
LAB_005f2494:
  if (local_5d0 != (void *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_5d0);
    FUN_00639cf0(local_5d0,local_5cc,&local_6c1,local_6a0);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5d0);
  }
  local_8 = 0xffffffff;
  uVar20 = local_38;
  if (local_2c0 != (_Container_base0 *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_2c0);
    FUN_00639cf0(local_2c0,local_2bc,&local_6c1,local_6a0);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c0);
  }
  goto LAB_005f4a7e;
  while( true ) {
    local_6b0._0_4_ = (Spawn *)((int)&((Spawn *)local_6b0)->vftablePtr + 1);
    pSVar13 = (SequentialBehavior *)((int)&pSVar13->vftablePtr + 1);
    if (2 < (int)(Spawn *)local_6b0) break;
LAB_005f2bf0:
    iVar4 = iVar12;
    if (*(char *)&pSVar13->vftablePtr !=
        *(char *)((int)&pSVar13->vftablePtr + (int)&local_6c0->vftablePtr)) {
      local_710[0] = '?';
      local_710[1] = '\0';
      local_710[2] = 0;
      local_6b0._0_4_ = (Spawn *)0x0;
      local_6c0 = (Spawn *)((int)local_6b0._4_4_ - (int)local_710);
      goto LAB_005f2df0;
    }
  }
  local_4c = 0x3f800000;
  uStack_48 = 0x3f800000;
  local_44 = 0x3f800000;
  local_78[0] = 0xd;
  uVar20 = FUN_0068d946();
  local_38._4_4_ = (Spawn *)(((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10);
  local_38._0_4_ = (int)local_20 << 0x10;
  uStack_30._4_4_ = (Spawn *)(((int)uStack_1c >> 0x1f) << 0x10 | uStack_1c >> 0x10);
  uStack_30._0_4_ = uStack_1c << 0x10;
  uStack_24 = ((int)local_18 >> 0x1f) << 0x10 | (uint)local_18 >> 0x10;
  local_28 = 0;
  uStack_26 = SUB41(local_18,0);
  uStack_25 = (undefined1)((uint)local_18 >> 8);
  local_80 = 0;
  local_90 = uVar20;
  local_88 = uVar20;
  plVar8 = (longlong *)FUN_0042c800(local_c0,&local_90);
  local_154 = 0x3ecccccd;
  local_70 = *plVar8;
  local_68 = plVar8[1];
  local_60 = plVar8[2];
  local_44 = 0x3ecccccd;
  local_15c = 0x3f19999a;
  uStack_158 = 0x3f000000;
  local_58 = 0x3dcccccd;
  local_54 = 0.0;
  local_40 = 1;
  local_4c = 0x3f19999a;
  uStack_48 = 0x3f000000;
  FUN_004862e0(local_78);
  uVar20 = CONCAT44(local_38._4_4_,(int)local_38);
  uStack_30 = CONCAT44(uStack_30._4_4_,(uint)uStack_30);
  local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  if ((iVar12 <= local_6cc) ||
     (uVar20 = CONCAT44(local_38._4_4_,(int)local_38),
     uStack_30 = CONCAT44(uStack_30._4_4_,(uint)uStack_30),
     local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0), local_6c8 <= iVar12))
  goto LAB_005f4a7e;
  if (param_9 != 0) {
    local_28 = 0;
    uStack_30._4_4_ = local_18;
    uStack_24 = 0;
    local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
    uStack_26 = 0;
    uStack_25 = 0x40;
    local_38._4_4_ = local_20;
    uStack_30._0_4_ = uStack_1c;
    FUN_00486240((int)&local_38 + 4);
  }
  local_6f0 = (int *)0x40000000;
  uVar20 = CONCAT44(local_38._4_4_,(int)local_38);
  goto LAB_005f4a73;
  while (local_6b0._0_4_ = (Spawn *)((int)&((Spawn *)local_6b0)->vftablePtr + 1),
        (int)(Spawn *)local_6b0 < 3) {
LAB_005f2df0:
    if ((local_710 + (int)(Spawn *)local_6b0)[(int)local_6b0._4_4_ - (int)local_710] !=
        local_710[(int)(Spawn *)local_6b0]) {
      local_700[0] = '\0';
      local_700[1] = '\0';
      local_700[2] = 0xff;
      local_6b0._0_4_ = (Spawn *)0x0;
      goto LAB_005f2f80;
    }
  }
  local_4c = 0x3f800000;
  uStack_48 = 0x3f800000;
  local_44 = 0x3f800000;
  local_78[0] = 0x30;
  uVar20 = FUN_0068d946();
  uStack_24 = (uint)((ulonglong)uVar20 >> 0x20);
  local_28 = (undefined2)uVar20;
  uStack_26 = (undefined1)((ulonglong)uVar20 >> 0x10);
  uStack_25 = (undefined1)((ulonglong)uVar20 >> 0x18);
  puVar23 = &local_38;
  puVar14 = local_c0;
  local_38 = uVar20;
  uStack_30 = uVar20;
  FUN_005a6a70();
  plVar8 = (longlong *)FUN_0042c800(puVar14,puVar23);
  local_70 = *plVar8;
  local_68 = plVar8[1];
  local_60 = plVar8[2];
  local_54 = (float)(int)(param_3 * -0x5a);
  local_58 = 0x3d851eb8;
  local_40 = 0;
  FUN_004862e0(local_78);
  uVar20 = local_38;
  local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  if ((iVar12 <= local_6cc) ||
     (local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0), local_6c8 <= iVar12))
  goto LAB_005f4a7e;
  if (param_9 != 0) {
    local_28 = 0;
    uStack_30._4_4_ = local_18;
    uStack_24 = 0;
    local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
    uStack_26 = 0;
    uStack_25 = 0x40;
    local_38._4_4_ = local_20;
    uStack_30._0_4_ = uStack_1c;
    FUN_00486240((int)&local_38 + 4);
  }
  local_6f8 = 0x40000000;
  uVar20 = local_38;
  goto LAB_005f4a73;
  while (local_6b0._0_4_ = (Spawn *)((int)&((Spawn *)local_6b0)->vftablePtr + 1),
        (int)(Spawn *)local_6b0 < 3) {
LAB_005f2f80:
    if ((local_700 + (int)(Spawn *)local_6b0)[(int)local_6b0._4_4_ - (int)local_700] !=
        local_700[(int)(Spawn *)local_6b0]) {
      uVar9 = FUN_0040ea70();
      cVar2 = FUN_004e6bd0(uVar9);
      if (cVar2 == '\0') {
        uVar9 = FUN_0040ea70();
        uVar24 = 0x5f33ea;
        cVar2 = FUN_004e6bd0(uVar9);
        if (cVar2 == '\0') {
          uVar9 = FUN_0040ea70();
          uVar24 = 0x5f39f7;
          cVar2 = FUN_004e6bd0(uVar9);
          if (cVar2 != '\0') {
            uVar20 = local_38;
            local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
            if (param_5 == 0xd) {
              uVar9 = 0x5f3a14;
              FUN_0058eaa0();
              local_8 = 0xd;
              local_308[0] = 0x4d;
              uVar21 = 0x5f3a31;
              FUN_00412080();
              uVar20 = 0x3fe0000000000000;
              FUN_00459c00(0x3fe0000000000000);
              FUN_00459c00(0x3fe0000000000000);
              uVar9 = FUN_0043b610(uVar20,uVar21,uVar24,uVar9);
              puVar23 = &local_90;
              FUN_005a6a70();
              uVar9 = FUN_0042c800(puVar23,uVar9);
              FUN_0042c5b0(uVar9);
              local_2e8 = -param_3;
              uVar9 = FUN_0040ea90();
              FUN_00411e30(uVar9);
              FUN_005a0e00(local_308);
              if (param_9 != 0) {
                FUN_0044a7c0();
                uVar24 = 0x40;
                uVar9 = FUN_0040ea70(0,0,0);
                uVar9 = FUN_0040ee40(uVar9,uVar24);
                FUN_0042f470(uVar9);
                FUN_00411e30(&local_20);
                FUN_00486240((int)&local_38 + 4);
              }
              FUN_0040ea70();
              goto LAB_005f3377;
            }
            goto LAB_005f4a7e;
          }
          uVar9 = FUN_0040ea70();
          uVar24 = 0x5f3b6d;
          cVar2 = FUN_004e6bd0(uVar9);
          if (cVar2 == '\0') {
            uVar9 = FUN_0040ea70();
            uVar24 = 0x5f3fc4;
            cVar2 = FUN_004e6bd0(uVar9);
            if (cVar2 == '\0') {
              uVar9 = FUN_0040ea70();
              cVar2 = FUN_004e6bd0(uVar9);
              if (cVar2 == '\0') goto LAB_005f493b;
              pSVar10 = operator_new(0x10f0);
              if (pSVar10 == (Spawn *)0x0) {
                pSVar10 = (Spawn *)0x0;
              }
              else {
                pSVar10 = cube::Spawn::Spawn(pSVar10);
              }
              (pSVar10->Spawn_data).offset_0x24 = 3;
              local_6a0 = pSVar10;
              uVar11 = rand();
              uVar11 = uVar11 & 0x80000003;
              if ((int)uVar11 < 0) {
                uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
              }
              (pSVar10->Spawn_data).offset_0x28 = uVar11;
              (pSVar10->Spawn_data).offset_0x50 = (float)(int)((2 - param_3) * 0x5a);
              uVar9 = FUN_0040ea90();
              FUN_0042c460(uVar9);
              puVar23 = &local_90;
              puVar14 = local_c0;
              FUN_005a6a70();
              uVar9 = FUN_0042c800(puVar14,puVar23);
              FUN_0042c5b0(uVar9);
              *(undefined2 *)&(pSVar10->Spawn_data).field_0x34c = 4;
              (pSVar10->Spawn_data).field_0x359 = 6;
              local_6a8 = (Spawn *)FUN_00428970(1);
              uVar24 = 0;
              uVar9 = 0x5f426b;
              local_6a4 = (Spawn *)FUN_00428970(0);
              uVar20 = CONCAT44(local_6a8->vftablePtr,0x5f4283);
              FUN_00412080();
              FUN_00412080();
              uVar9 = FUN_0059a9b0(uVar20,uVar9,uVar24);
              (pSVar10->Spawn_data).offset_0x30 = uVar9;
              switch(param_5) {
              case 6:
                *(undefined1 *)&(pSVar10->Spawn_data).offset_0x2c = 0x83;
                break;
              case 7:
                (pSVar10->Spawn_data).offset_0x30 = 0x14;
                uVar11 = rand();
                uVar11 = uVar11 & 0x80000001;
                if ((int)uVar11 < 0) {
                  uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
                }
                (pSVar10->Spawn_data).offset_0x28 = uVar11 + 2;
                *(undefined1 *)&(pSVar10->Spawn_data).offset_0x2c = 0x89;
                break;
              case 9:
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x76 = 0x40;
                (pSVar10->Spawn_data).offset_0x30 = 0x14;
                (pSVar10->Spawn_data).offset_0x28 = 2;
                *(undefined1 *)&(pSVar10->Spawn_data).offset_0x2c = 1;
                (pSVar10->Spawn_data).field_0x8c4 = 3;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x8c5 = (char)(iVar4 % 3) + '\x0f';
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x8d0 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x8d4 =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x8d1 = 1;
                (pSVar10->Spawn_data).field_0x694 = 7;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x6a0 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x6a4 =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x6a1 = 1;
                (pSVar10->Spawn_data).field_0x34c = 4;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x358 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x35c =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x359 = 1;
                (pSVar10->Spawn_data).field_0x464 = 6;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x470 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x474 =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x471 = 1;
                (pSVar10->Spawn_data).field_0x57c = 5;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x588 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x58c =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x589 = 1;
                break;
              case 10:
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x76 = 0x40;
                (pSVar10->Spawn_data).offset_0x30 = 0x14;
                (pSVar10->Spawn_data).offset_0x28 = 2;
                *(undefined1 *)&(pSVar10->Spawn_data).offset_0x2c = 2;
                (pSVar10->Spawn_data).field_0x8c4 = 3;
                uVar11 = rand();
                uVar11 = uVar11 & 0x80000001;
                if ((int)uVar11 < 0) {
                  uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
                }
                (pSVar10->Spawn_data).field_0x8c5 = (char)uVar11 + '\x06';
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x8d0 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x8d4 =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x8d1 = 2;
                (pSVar10->Spawn_data).field_0x694 = 7;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x6a0 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x6a4 =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x6a1 = 0x1a;
                (pSVar10->Spawn_data).field_0x34c = 4;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x358 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x35c =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x359 = 0x1a;
                (pSVar10->Spawn_data).field_0x464 = 6;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x470 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x474 =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x471 = 0x1a;
                (pSVar10->Spawn_data).field_0x57c = 5;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x588 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x58c =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x589 = 0x1a;
                break;
              case 0xb:
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x76 = 0x40;
                (pSVar10->Spawn_data).offset_0x30 = 0x14;
                (pSVar10->Spawn_data).offset_0x28 = 2;
                *(undefined1 *)&(pSVar10->Spawn_data).offset_0x2c = 4;
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x8c4 = 0x503;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x8d0 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x8d4 =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x8d1 = 1;
                (pSVar10->Spawn_data).field_0x694 = 7;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x6a0 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x6a4 =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x6a1 = 0x1b;
                (pSVar10->Spawn_data).field_0x34c = 4;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x358 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x35c =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x359 = 0x1b;
                (pSVar10->Spawn_data).field_0x464 = 6;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x470 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x474 =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x471 = 0x1b;
                (pSVar10->Spawn_data).field_0x57c = 5;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x588 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x58c =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x589 = 0x1b;
                break;
              case 0xc:
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x76 = 0x40;
                (pSVar10->Spawn_data).offset_0x30 = 0x14;
                (pSVar10->Spawn_data).offset_0x28 = 2;
                *(undefined1 *)&(pSVar10->Spawn_data).offset_0x2c = 3;
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x8c4 = 0xa03;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x8d0 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x8d4 =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x8d1 = 2;
                (pSVar10->Spawn_data).field_0x694 = 7;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x6a0 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x6a4 =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x6a1 = 0x19;
                (pSVar10->Spawn_data).field_0x34c = 4;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x358 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x35c =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x359 = 0x19;
                (pSVar10->Spawn_data).field_0x464 = 6;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x470 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x474 =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x471 = 0x19;
                (pSVar10->Spawn_data).field_0x57c = 5;
                iVar4 = rand();
                (pSVar10->Spawn_data).field_0x588 = (char)(iVar4 % 5);
                *(undefined2 *)&(pSVar10->Spawn_data).field_0x58c =
                     *(undefined2 *)&(pSVar10->Spawn_data).offset_0x30;
                (pSVar10->Spawn_data).field_0x589 = 0x19;
                break;
              case 0xd:
                *(undefined1 *)&(pSVar10->Spawn_data).offset_0x2c = 0x85;
                break;
              case 0xe:
                *(undefined1 *)&(pSVar10->Spawn_data).offset_0x2c = 0x86;
                break;
              case 0xf:
                *(undefined1 *)&(pSVar10->Spawn_data).offset_0x2c = 0x87;
              }
              local_6c0 = operator_new(0xc);
              local_8 = 0x12;
              if (local_6c0 == (Spawn *)0x0) {
                local_6b0._4_4_ = (SequentialBehavior *)0x0;
              }
              else {
                local_6b0._4_4_ =
                     cube::SequentialBehavior::SequentialBehavior((SequentialBehavior *)local_6c0);
              }
              local_8 = 0xffffffff;
              local_6c0 = operator_new(0x14);
              local_8 = 0x13;
              if (local_6c0 == (Spawn *)0x0) {
                local_6c0 = (Spawn *)0x0;
              }
              else {
                local_6c0 = (Spawn *)cube::CombatBehavior::CombatBehavior
                                               ((CombatBehavior *)local_6c0,0x41a00000);
              }
              local_8 = 0xffffffff;
              FUN_004860b0(&local_6c0);
              local_6c0 = operator_new(4);
              local_8 = 0x14;
              if (local_6c0 == (Spawn *)0x0) {
                local_6c0 = (Spawn *)0x0;
              }
              else {
                local_6c0 = (Spawn *)cube::LookAtPlayerBehavior::LookAtPlayerBehavior
                                               ((LookAtPlayerBehavior *)local_6c0);
              }
              local_8 = 0xffffffff;
              FUN_004860b0(&local_6c0);
              local_6c0 = operator_new(0x1c);
              local_8 = 0x15;
              if (local_6c0 == (Spawn *)0x0) {
                local_6b0._0_4_ = (Spawn *)0x0;
              }
              else {
                local_6b0._0_4_ =
                     (Spawn *)cube::WalkPathBehavior::WalkPathBehavior
                                        ((WalkPathBehavior *)local_6c0,0x40000000);
              }
              local_8 = 0xffffffff;
              FUN_005bf4f0(&(pSVar10->Spawn_data).field_0xc);
              local_6c0 = (Spawn *)local_6b0;
              FUN_004860b0(&local_6c0);
              *(SequentialBehavior **)&pSVar10[1].Spawn_data.field_0x124 = local_6b0._4_4_;
              FUN_0066add0(&local_6a0);
              iVar4 = local_6d4;
              uVar20 = local_38;
              local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
              if ((local_6d4 <= local_6cc) ||
                 (local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0), local_6c8 <= local_6d4))
              goto LAB_005f4a7e;
              if (param_9 != 0) {
                FUN_0044a7c0();
                uVar24 = 0x40;
                uVar9 = FUN_0040ea70(0,0,0);
                uVar9 = FUN_0040ee40(uVar9,uVar24);
                FUN_0042f470(uVar9);
                FUN_00411e30(&local_20);
                FUN_00486240((int)&local_38 + 4);
              }
              FUN_0040ea70();
              FUN_0040ee40();
              FUN_00428970();
              uVar20 = local_38;
              goto LAB_005f4a73;
            }
            FUN_0058eaa0();
            local_8 = 0x11;
            uVar9 = 0x5f3fe4;
            iVar15 = rand();
            local_308[0] = iVar15 % 9 + 0x38;
            uVar21 = 0x5f4001;
            FUN_00412080();
            uVar20 = 0x3fe0000000000000;
            FUN_00459c00(0x3fe0000000000000);
            FUN_00459c00(0x3fe0000000000000);
            uVar9 = FUN_0043b610(uVar20,uVar21,uVar24,uVar9);
            puVar23 = &local_90;
            FUN_005a6a70();
            uVar9 = FUN_0042c800(puVar23,uVar9);
            FUN_0042c5b0(uVar9);
            local_2e8 = rand();
            local_2e8 = local_2e8 & 0x80000003;
            if ((int)local_2e8 < 0) {
              local_2e8 = (local_2e8 - 1 | 0xfffffffc) + 1;
            }
            uVar9 = FUN_0040ea90();
            FUN_00411e30(uVar9);
            FUN_005a0e00(local_308);
            if ((local_6cc < iVar12) && (iVar12 < local_6c8)) {
              if (param_9 != 0) {
                FUN_0044a7c0();
                uVar24 = 0x40;
                uVar9 = FUN_0040ea70(0,0,0);
                uVar9 = FUN_0040ee40(uVar9,uVar24);
                FUN_0042f470(uVar9);
                FUN_00411e30(&local_20);
                FUN_00486240((int)&local_38 + 4);
              }
              FUN_0040ea70();
              goto LAB_005f3377;
            }
          }
          else if (param_5 == 0xd) {
            uVar9 = 0x5f3b8c;
            FUN_0058eaa0();
            local_8 = 0xe;
            local_308[0] = 0x48;
            uVar21 = 0x5f3ba9;
            FUN_00412080();
            uVar20 = 0x3fe0000000000000;
            FUN_00459c00(0x3fe0000000000000);
            FUN_00459c00(0x3fe0000000000000);
            uVar9 = FUN_0043b610(uVar20,uVar21,uVar24,uVar9);
            puVar23 = &local_90;
            FUN_005a6a70();
            uVar9 = FUN_0042c800(puVar23,uVar9);
            FUN_0042c5b0(uVar9);
            local_2e8 = -param_3;
            uVar9 = FUN_0040ea90();
            FUN_00411e30(uVar9);
            FUN_005a0e00(local_308);
            if ((local_6cc < iVar12) && (iVar12 < local_6c8)) {
              if (param_9 != 0) {
                FUN_0044a7c0();
                uVar24 = 0x40;
                uVar9 = FUN_0040ea70(0,0,0);
                uVar9 = FUN_0040ee40(uVar9,uVar24);
                FUN_0042f470(uVar9);
                FUN_00411e30(&local_20);
                FUN_00486240((int)&local_38 + 4);
              }
              FUN_0040ea70();
              goto LAB_005f3377;
            }
          }
          else if (param_5 == 0xe) {
            uVar9 = 0x5f3cf1;
            FUN_0058eaa0();
            local_8 = 0xf;
            local_308[0] = 0x4c;
            uVar21 = 0x5f3d0e;
            FUN_00412080();
            uVar20 = 0x3fe0000000000000;
            FUN_00459c00(0x3fe0000000000000);
            FUN_00459c00(0x3fe0000000000000);
            uVar9 = FUN_0043b610(uVar20,uVar21,uVar24,uVar9);
            puVar23 = &local_90;
            FUN_005a6a70();
            uVar9 = FUN_0042c800(puVar23,uVar9);
            FUN_0042c5b0(uVar9);
            local_2e8 = -param_3;
            uVar9 = FUN_0040ea90();
            FUN_00411e30(uVar9);
            FUN_005a0e00(local_308);
            if ((local_6cc < iVar12) && (iVar12 < local_6c8)) {
              if (param_9 != 0) {
                FUN_0044a7c0();
                uVar24 = 0x40;
                uVar9 = FUN_0040ea70(0,0,0);
                uVar9 = FUN_0040ee40(uVar9,uVar24);
                FUN_0042f470(uVar9);
                FUN_00411e30(&local_20);
                FUN_00486240((int)&local_38 + 4);
              }
              FUN_0040ea70();
              goto LAB_005f3377;
            }
          }
          else {
            uVar20 = local_38;
            local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
            if (param_5 != 0xf) goto LAB_005f4a7e;
            uVar9 = 0x5f3e56;
            FUN_0058eaa0();
            local_8 = 0x10;
            local_308[0] = 0x4a;
            uVar21 = 0x5f3e73;
            FUN_00412080();
            uVar20 = 0x3fe0000000000000;
            FUN_00459c00(0x3fe0000000000000);
            FUN_00459c00(0x3fe0000000000000);
            uVar9 = FUN_0043b610(uVar20,uVar21,uVar24,uVar9);
            puVar23 = &local_90;
            FUN_005a6a70();
            uVar9 = FUN_0042c800(puVar23,uVar9);
            FUN_0042c5b0(uVar9);
            local_2e8 = -param_3;
            uVar9 = FUN_0040ea90();
            FUN_00411e30(uVar9);
            FUN_005a0e00(local_308);
            if ((local_6cc < iVar12) && (iVar12 < local_6c8)) {
              if (param_9 != 0) {
                FUN_0044a7c0();
                uVar24 = 0x40;
                uVar9 = FUN_0040ea70(0,0,0);
                uVar9 = FUN_0040ee40(uVar9,uVar24);
                FUN_0042f470(uVar9);
                FUN_00411e30(&local_20);
                FUN_00486240((int)&local_38 + 4);
              }
              FUN_0040ea70();
              goto LAB_005f3377;
            }
          }
        }
        else if (param_5 == 0xd) {
          uVar9 = 0x5f3409;
          FUN_0058eaa0();
          local_8 = 10;
          local_308[0] = 0x47;
          uVar21 = 0x5f3426;
          FUN_00412080();
          uVar20 = 0x3fe0000000000000;
          FUN_00459c00(0x3fe0000000000000);
          FUN_00459c00(0x3fe0000000000000);
          uVar9 = FUN_0043b610(uVar20,uVar21,uVar24,uVar9);
          puVar23 = &local_90;
          FUN_005a6a70();
          uVar9 = FUN_0042c800(puVar23,uVar9);
          FUN_0042c5b0(uVar9);
          local_2e8 = -param_3;
          uVar9 = FUN_0040ea90();
          FUN_00411e30(uVar9);
          FUN_005a0e00(local_308);
          if ((local_6cc < iVar12) && (iVar12 < local_6c8)) {
            if (param_9 != 0) {
              FUN_0044a7c0();
              uVar24 = 0x40;
              uVar9 = FUN_0040ea70(0,0,0);
              uVar9 = FUN_0040ee40(uVar9,uVar24);
              FUN_0042f470(uVar9);
              FUN_00411e30(&local_20);
              FUN_00486240((int)&local_38 + 4);
            }
            FUN_0040ea70();
            goto LAB_005f3377;
          }
        }
        else if (param_5 == 0xe) {
          uVar9 = 0x5f356e;
          FUN_0058eaa0();
          local_8 = 0xb;
          local_308[0] = 0x4b;
          uVar21 = 0x5f358b;
          FUN_00412080();
          uVar20 = 0x3fe0000000000000;
          FUN_00459c00(0x3fe0000000000000);
          FUN_00459c00(0x3fe0000000000000);
          uVar9 = FUN_0043b610(uVar20,uVar21,uVar24,uVar9);
          puVar23 = &local_90;
          FUN_005a6a70();
          uVar9 = FUN_0042c800(puVar23,uVar9);
          FUN_0042c5b0(uVar9);
          local_2e8 = -param_3;
          uVar9 = FUN_0040ea90();
          FUN_00411e30(uVar9);
          FUN_005a0e00(local_308);
          if ((local_6cc < iVar12) && (iVar12 < local_6c8)) {
            if (param_9 != 0) {
              FUN_0044a7c0();
              uVar24 = 0x40;
              uVar9 = FUN_0040ea70(0,0,0);
              uVar9 = FUN_0040ee40(uVar9,uVar24);
              FUN_0042f470(uVar9);
              FUN_00411e30(&local_20);
              FUN_00486240((int)&local_38 + 4);
            }
            FUN_0040ea70();
            goto LAB_005f3377;
          }
        }
        else {
          if (param_5 != 0xf) {
            pSVar10 = operator_new(0x10f0);
            if (pSVar10 == (Spawn *)0x0) {
              local_6a8 = (Spawn *)0x0;
            }
            else {
              local_6a8 = cube::Spawn::Spawn(pSVar10);
            }
            (local_6a8->Spawn_data).offset_0x24 = 6;
            (local_6a8->Spawn_data).offset_0x28 = (param_5 != 10) + 0x8d;
            (local_6a8->Spawn_data).offset_0x50 = (float)(int)((2 - param_3) * 0x5a);
            local_6c0 = local_6a8;
            uVar9 = FUN_0040ea90();
            FUN_0042c460(uVar9);
            puVar23 = &local_90;
            puVar14 = local_c0;
            FUN_005a6a70();
            uVar9 = FUN_0042c800(puVar14,puVar23);
            FUN_0042c5b0(uVar9);
            local_6b0._0_4_ = (Spawn *)FUN_00428970(1);
            uVar24 = 0;
            uVar9 = 0x5f38fe;
            local_6b0._4_4_ = (SequentialBehavior *)FUN_00428970(0);
            uVar20 = CONCAT44(((Spawn *)local_6b0)->vftablePtr,0x5f3916);
            FUN_00412080();
            FUN_00412080();
            uVar9 = FUN_0059a9b0(uVar20,uVar9,uVar24);
            (local_6a8->Spawn_data).offset_0x30 = uVar9;
            FUN_0066add0(&local_6c0);
            if (param_9 != 0) {
              FUN_0044a7c0();
              uVar24 = 0x40;
              uVar9 = FUN_0040ea70(0,0,0);
              uVar9 = FUN_0040ee40(uVar9,uVar24);
              FUN_0042f470(uVar9);
              FUN_00411e30(&local_20);
              FUN_00486240((int)&local_38 + 4);
            }
            FUN_0040ea70();
            FUN_0040ee40();
            FUN_00428970();
            uVar20 = local_38;
            goto LAB_005f4a73;
          }
          uVar9 = 0x5f36d3;
          FUN_0058eaa0();
          local_8 = 0xc;
          local_308[0] = 0x49;
          uVar21 = 0x5f36f0;
          FUN_00412080();
          uVar20 = 0x3fe0000000000000;
          FUN_00459c00(0x3fe0000000000000);
          FUN_00459c00(0x3fe0000000000000);
          uVar9 = FUN_0043b610(uVar20,uVar21,uVar24,uVar9);
          puVar23 = &local_90;
          FUN_005a6a70();
          uVar9 = FUN_0042c800(puVar23,uVar9);
          FUN_0042c5b0(uVar9);
          local_2e8 = -param_3;
          uVar9 = FUN_0040ea90();
          FUN_00411e30(uVar9);
          FUN_005a0e00(local_308);
          if ((local_6cc < iVar12) && (iVar12 < local_6c8)) {
            if (param_9 != 0) {
              FUN_0044a7c0();
              uVar24 = 0x40;
              uVar9 = FUN_0040ea70(0,0,0);
              uVar9 = FUN_0040ee40(uVar9,uVar24);
              FUN_0042f470(uVar9);
              FUN_00411e30(&local_20);
              FUN_00486240((int)&local_38 + 4);
            }
            FUN_0040ea70();
            goto LAB_005f3377;
          }
        }
      }
      else {
        uVar20 = local_38;
        local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
        if ((float)local_6e4 <= 0.5) goto LAB_005f4a7e;
        FUN_0058eaa0();
        local_8 = 9;
        cVar2 = FUN_005cb3b0();
        if (cVar2 != '\0') {
          iVar15 = rand();
          local_308[0] = iVar15 % 3 + 0x2f;
          FUN_005a0e00(local_308);
        }
        if ((iVar12 <= local_6cc) || (local_6c8 <= iVar12)) goto LAB_005f33b0;
        if (param_9 != 0) {
          FUN_0044a7c0();
          uVar24 = 0x40;
          uVar9 = FUN_0040ea70(0,0,0);
          uVar9 = FUN_0040ee40(uVar9,uVar24);
          FUN_0042f470(uVar9);
          FUN_00411e30(&local_20);
          FUN_00486240((int)&local_38 + 4);
        }
        FUN_0040ea70();
LAB_005f3377:
        FUN_0040ee40();
        FUN_00428970();
        FUN_00428970(1);
        FUN_00428970();
        FUN_0044e7a0();
      }
LAB_005f33b0:
      local_8 = 0xffffffff;
      FUN_00593e80();
      uVar20 = local_38;
      local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
      goto LAB_005f4a7e;
    }
  }
  if (param_5 == 2) {
    local_4c = 0x3f800000;
    uStack_48 = 0x3f800000;
    local_44 = 0x3f800000;
    local_40 = param_5;
    local_78[0] = 0x21;
    uVar22 = CONCAT44(0x5f2fe0,uVar9);
    uVar20 = FUN_0068d946();
    uVar21 = 0x3fe0000000000000;
    FUN_00459c00(0x3fe0000000000000);
    FUN_00459c00(0x3fe0000000000000);
    uVar9 = FUN_0043b610(uVar21,uVar22,uVar20);
    puVar23 = &local_90;
    FUN_005a6a70();
    uVar9 = FUN_0042c800(puVar23,uVar9);
    FUN_0042c5b0(uVar9);
    local_54 = (float)(int)((-1 - param_3) * 0x5a);
    local_58 = 0x3dcccccd;
    local_40 = 0;
    FUN_004862e0(local_78);
    iVar12 = local_6d4;
  }
  else {
    if (param_5 == 6) {
      uVar9 = 0x5f308f;
      FUN_0058e9f0();
      local_78[0] = 0x25;
    }
    else if (param_5 == 3) {
      uVar9 = 0x5f30a8;
      FUN_0058e9f0();
      local_78[0] = 0x22;
    }
    else if (param_5 == 5) {
      uVar9 = 0x5f30be;
      FUN_0058e9f0();
      local_78[0] = 0x24;
    }
    else if (param_5 == 4) {
      uVar9 = 0x5f30d4;
      FUN_0058e9f0();
      local_78[0] = 0x23;
    }
    else if (param_5 == 0xd) {
      uVar9 = 0x5f30ea;
      FUN_0058e9f0();
      local_78[0] = 0x26;
    }
    else if (param_5 == 0xe) {
      uVar9 = 0x5f3100;
      FUN_0058e9f0();
      local_78[0] = 0x27;
    }
    else {
      if (param_5 != 0xf) goto LAB_005f31cd;
      uVar9 = 0x5f311a;
      FUN_0058e9f0();
      local_78[0] = 0x28;
    }
    uVar21 = 0xbfe0000000000000;
    FUN_00459c00(0xbfe0000000000000);
    uVar20 = 0x3fe0000000000000;
    FUN_00459c00(0x3fe0000000000000);
    FUN_00459c00(0x3fe0000000000000);
    uVar9 = FUN_0043b610(uVar20,uVar21,uVar11,uVar9);
    puVar23 = &local_90;
    FUN_005a6a70();
    uVar9 = FUN_0042c800(puVar23,uVar9);
    FUN_0042c5b0(uVar9);
    local_54 = (float)(int)((-1 - param_3) * 0x5a);
    local_58 = 0x3dcccccd;
    local_40 = 0;
    FUN_004862e0(local_78);
  }
LAB_005f31cd:
  iVar4 = iVar12;
  uVar20 = local_38;
  local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  if ((iVar12 <= local_6cc) ||
     (local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0), local_6c8 <= iVar12))
  goto LAB_005f4a7e;
  if (param_9 != 0) {
    FUN_0044a7c0();
    uVar24 = 0x40;
    uVar9 = FUN_0040ea70(0,0,0);
    uVar9 = FUN_0040ee40(uVar9,uVar24);
    FUN_0042f470(uVar9);
    FUN_00411e30(&local_20);
    FUN_00486240((int)&local_38 + 4);
  }
  FUN_0040ea70();
LAB_005f4a46:
  FUN_0040ee40();
  FUN_00428970();
  FUN_00428970(1);
  FUN_00428970();
  iVar4 = iVar12;
  uVar20 = local_38;
LAB_005f4a73:
  local_38 = uVar20;
  FUN_0044e7a0();
  param_9 = iVar15;
  uVar20 = local_38;
  local_6b0 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
LAB_005f4a7e:
  iVar4 = iVar4 + -1;
  iVar15 = param_9;
  local_6d4 = iVar4;
  if (iVar4 < 0) goto LAB_005f4a91;
  goto LAB_005f1310;
LAB_005f493b:
  iVar12 = iVar4;
  if (param_5 == 8) {
    uVar9 = FUN_0040ea70();
    cVar2 = FUN_004e6bd0(uVar9);
    if (cVar2 != '\0') {
      if (iVar15 != 0) {
        FUN_0044a7c0();
        uVar24 = 2;
        uVar9 = FUN_0040ea70(0xff,0xff,0xff);
        uVar9 = FUN_0040ee40(uVar9,uVar24);
        FUN_0042f470(uVar9);
        FUN_00411e30(&local_20);
        FUN_00486240((int)&local_38 + 4);
      }
      FUN_0040ea70();
      goto LAB_005f4a46;
    }
  }
  if (iVar15 != 0) {
    FUN_0044a7c0();
    uVar9 = FUN_0040ee40(local_6b0._4_4_,param_4 | 0x40);
    FUN_0042f470(uVar9);
    FUN_00411e30(&local_20);
    FUN_00486240((int)&local_38 + 4);
  }
  goto LAB_005f4a46;
}


/* World_emitDecalOrParticle @ 005f6d50  kind=gamemisc  attributed-by=ledger  size=194 */

void FUN_005f6d50(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 local_120 [280];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  param_1[0x10] = 1;
  param_1[0x11] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  memset(param_1 + 0x14,0,0x100);
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000001;
  bVar3 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar3 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar3) {
    uVar2 = FUN_005f51e0(local_120,param_2,param_3,0xffffffff);
  }
  else {
    uVar2 = FUN_005f8ad0(local_120,param_2,param_3,0xffffffff);
  }
  FUN_0042c5e0(uVar2);
  *(uint *)(param_1 + 8) = (uint)*param_1;
  *param_1 = 2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* WorldInfo_vectorElementAt @ 005f8530  kind=game  attributed-by=ledger  size=94 */

int FUN_005f8530(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = rand();
  iVar1 = iVar1 % (param_1 + 1);
  iVar2 = rand();
  if (iVar2 % 100 == 0) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = rand();
  if (iVar2 % 1000 == 0) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = rand();
  if (iVar2 % 10000 == 0) {
    iVar1 = iVar1 + 1;
  }
  if (param_2 != '\0') {
    iVar1 = param_1 + 1;
  }
  if (4 < iVar1) {
    iVar1 = 4;
  }
  return iVar1;
}


/* WorldInfo_sampleTerrainHeight @ 005f9340  kind=game  attributed-by=ledger  size=731 */

float10 FUN_005f9340(uint param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  float local_c;
  int local_8;
  
  uVar1 = (uint)param_2;
  local_18 = (double)(int)param_2 * 0.001;
  local_20 = (double)(int)param_1 * 0.001;
  local_8 = in_ECX;
  fVar5 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x800170) + (double)(int)param_1 * 0.01,
                                (double)*(int *)(in_ECX + 0x800174) + (double)(int)param_2 * 0.01);
  fVar6 = (float10)FUN_004c0ef0((double)*(int *)(local_8 + 0x800168) + local_20,
                                (double)*(int *)(local_8 + 0x80016c) + local_18);
  local_c = (float)fVar6;
  fVar7 = (float)fVar5 * 0.1 + local_c;
  fVar5 = (float10)FUN_004c0ef0(local_20,local_18);
  local_c = (float)fVar5;
  fVar7 = ABS(fVar7) * ((local_c + 1.0) * 0.1 + 0.8);
  fVar5 = (float10)FUN_005eea60(param_1,param_2);
  local_c = (float)fVar5;
  fVar8 = 1.0 - local_c * 0.75;
  param_2 = fVar7;
  if (0.0 < fVar8) {
    param_2 = fVar8 * fVar8 * 0.05 + fVar7;
  }
  uVar3 = (int)uVar1 >> 0x1f;
  uVar4 = (int)param_1 >> 0x1f;
  iVar2 = FUN_00487da0((int)(param_1 + (uVar4 & 0x7ff)) >> 0xb,(int)(uVar1 + (uVar3 & 0x7ff)) >> 0xb
                      );
  local_18 = (double)CONCAT44(iVar2,(undefined4)local_18);
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x18);
    if ((((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 4)) || (iVar2 == 0xd)) {
      local_20 = (double)CONCAT44(uVar3 << 0x10 | uVar1 >> 0x10,uVar1 << 0x10);
      local_c = (float)(uVar4 << 0x10 | param_1 >> 0x10);
      local_10 = param_1 << 0x10;
      fVar5 = (float10)FUN_005f8e10(&local_10,&local_20);
      local_c = (float)fVar5;
      fVar7 = 1.0 - local_c;
      if (0.0 < fVar7) {
        fVar7 = fVar7 * fVar7;
      }
      else {
        fVar7 = 0.0;
      }
      param_2 = fVar7 + param_2;
    }
    if ((iVar2 == 6) || (iVar2 == 7)) {
      local_20 = (double)CONCAT44(uVar3 << 0x10 | uVar1 >> 0x10,uVar1 << 0x10);
      local_18 = (double)CONCAT44(uVar4 << 0x10 | param_1 >> 0x10,param_1 << 0x10);
      fVar5 = (float10)FUN_005f8e10(&local_18,&local_20);
      fVar8 = 1.0 - (float)fVar5;
      fVar7 = 0.0;
      if (0.0 < fVar8) {
        fVar7 = fVar8 * fVar8;
      }
      param_2 = fVar7 * 0.5 + param_2;
    }
  }
  iVar2 = FUN_004347a0();
  if (iVar2 == 0) {
    fVar5 = (float10)FUN_005ef040(param_1,uVar1);
    fVar7 = (float)fVar5;
  }
  else {
    fVar7 = *(float *)(iVar2 + 0xc);
  }
  return (float10)(fVar7 + param_2);
}


/* vec3_computeNoiseOffset @ 005f9bc0  kind=gamemisc  attributed-by=ledger  size=581 */

float * FUN_005f9bc0(float *param_1,int param_2,int param_3)

{
  int in_ECX;
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x800274) + (double)param_2 * 0.03,
                                (double)*(int *)(in_ECX + 0x800278) + (double)param_3 * 0.03);
  fVar2 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x80027c) + (double)param_2 * 0.003,
                                (double)*(int *)(in_ECX + 0x800280) + (double)param_3 * 0.003);
  fVar4 = ((float)fVar1 + 1.0) * 0.5 * 80.0;
  fVar3 = ((float)fVar2 + 1.0) * 0.5;
  fVar1 = (float10)FUN_004c0ef0((double)param_2 * 0.01 + 493.0,(double)param_3 * 0.01 + 789.0);
  fVar5 = 1.0 - fVar3;
  fVar6 = fVar5 * 255.0 + fVar3 * 255.0 + fVar4;
  fVar7 = fVar5 * ((float)fVar1 * 40.0 + 200.0) + fVar3 * 150.0 + fVar4;
  fVar4 = fVar5 * 100.0 + fVar3 * 50.0 + fVar4;
  *param_1 = fVar6;
  param_1[1] = fVar7;
  param_1[2] = fVar4;
  if (0.0 <= fVar6) {
    if (255.0 < fVar6) {
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
  if (fVar4 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  return param_1;
}


/* WorldInfo_rotateAndPlace @ 005f9f70  kind=game  attributed-by=ledger  size=498 */

void FUN_005f9f70(uint param_1,uint param_2)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  int local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  fVar2 = (float10)FUN_005989d0(param_1,param_2);
  local_28 = (float)fVar2;
  FUN_0059fc90(&local_18,param_1,param_2);
  fVar2 = (float10)FUN_005eea60(param_1,param_2);
  local_1c = (float)fVar2;
  if (0.0 < local_28) {
    fVar4 = local_28 * 3.0;
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    fVar4 = 1.0 - fVar4 * fVar4;
    local_20 = 1.0 - fVar4 * fVar4;
    dVar3 = local_18 * 360.0;
    libm_sse2_cos_precise();
    fVar4 = (float)(dVar3 * (double)local_20 + 1.0);
    if (fVar4 < local_1c) {
      local_1c = fVar4;
    }
    dVar3 = local_10 * 360.0;
    libm_sse2_cos_precise();
    fVar4 = (float)(dVar3 * (double)local_20 + 1.0);
    if (fVar4 < local_1c) {
      local_1c = fVar4;
    }
  }
  if (0.65 < local_28) {
    fVar4 = (0.7 - local_28) / 0.05;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    local_1c = fVar4 * local_1c;
  }
  iVar1 = FUN_00487da0((int)(param_1 + ((int)param_1 >> 0x1f & 0x7ffU)) >> 0xb,
                       (int)(param_2 + ((int)param_2 >> 0x1f & 0x7ffU)) >> 0xb);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x18) == 2 || (*(int *)(iVar1 + 0x18) == 4)))) {
    local_20 = (float)(((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10);
    local_24 = param_2 << 0x10;
    local_28 = (float)(((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10);
    local_2c = param_1 << 0x10;
    fVar2 = (float10)FUN_005f8e10(&local_2c,&local_24);
    local_20 = (float)fVar2;
    fVar5 = 1.0 - local_20;
    fVar4 = 0.0;
    if (0.0 < fVar5) {
      fVar4 = fVar5 * fVar5;
    }
    local_1c = fVar4 * 2.0 + local_1c;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* Widget_deserialize_common_field @ 00659940  kind=game  attributed-by=ledger  size=857 */

void FUN_00659940(basic_istream<char,std::char_traits<char>_> *param_1,int param_2,
                 undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_e4 [24];
  char local_cc [64];
  undefined1 local_8c [24];
  undefined1 local_74 [24];
  undefined1 local_5c [24];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
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
  puStack_c = &LAB_006f6d9b;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  switch(param_3) {
  case 1:
    FUN_00650a20(local_e4,param_1);
    uVar2 = FUN_00658530(local_8c,param_1);
    local_8 = 0;
    iVar3 = FUN_006089c0(local_5c,uVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (param_2 + 0xc != iVar3) {
      FUN_0040f680(iVar3,0,0xffffffff);
    }
    FUN_00593e50();
    FUN_00403eb0();
    break;
  case 2:
    FUN_00650a20(local_e4,param_1);
    uVar2 = FUN_0064cd70(param_1);
    *(undefined4 *)(param_2 + 0x130) = uVar2;
    break;
  case 3:
    FUN_00650a20(local_e4,param_1);
    uVar2 = FUN_0064cd70(param_1);
    *(undefined4 *)(param_2 + 300) = uVar2;
    break;
  case 4:
    FUN_00650a20(local_e4,param_1);
    iVar3 = FUN_0064cd70(param_1);
    FUN_0064e7b0(iVar3 == 1);
    break;
  case 5:
    FUN_00650a20(local_e4,param_1);
    iVar3 = FUN_0064cd70(param_1);
    FUN_0064e790(iVar3 == 1);
    break;
  case 6:
    FUN_00650a20(local_e4,param_1);
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_24,(ulonglong)uVar1 << 0x20);
    *(undefined4 *)(param_2 + 0x48) = local_24;
    *(undefined4 *)(param_2 + 0x4c) = local_20;
    break;
  case 7:
    FUN_00650a20(local_e4,param_1);
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_44,(ulonglong)uVar1 << 0x20);
    *(undefined4 *)(param_2 + 0x50) = local_44;
    *(undefined4 *)(param_2 + 0x54) = local_40;
    break;
  default:
    break;
  case 10:
    FUN_00650a20(local_e4,param_1);
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_3c,(ulonglong)uVar1 << 0x20);
    *(undefined4 *)(param_2 + 0x58) = local_3c;
    *(undefined4 *)(param_2 + 0x5c) = local_38;
    break;
  case 0xb:
    FUN_00650a20(local_e4,param_1);
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_2c,(ulonglong)uVar1 << 0x20);
    *(undefined4 *)(param_2 + 0x60) = local_2c;
    *(undefined4 *)(param_2 + 100) = local_28;
    break;
  case 0xc:
    FUN_00650a20(local_e4,param_1);
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_34,(ulonglong)uVar1 << 0x20);
    *(undefined4 *)(param_2 + 0x68) = local_34;
    *(undefined4 *)(param_2 + 0x6c) = local_30;
    break;
  case 0xd:
    FUN_00650a20(local_e4,param_1);
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_1c,(ulonglong)uVar1 << 0x20);
    *(undefined4 *)(param_2 + 0x70) = local_1c;
    *(undefined4 *)(param_2 + 0x74) = local_18;
    break;
  case 0xe:
    FUN_00650a20(local_e4,param_1);
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,local_cc,(ulonglong)uVar1 << 0x20);
    pcVar4 = local_cc;
    puVar5 = (undefined4 *)(param_2 + 0xa8);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      puVar5 = puVar5 + 1;
    }
    pcVar4 = local_cc;
    puVar5 = (undefined4 *)(param_2 + 0xe8);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      puVar5 = puVar5 + 1;
    }
    FUN_0058c440();
    break;
  case 0x16:
    FUN_00650a20(local_e4,param_1);
    uVar2 = FUN_00659670(local_74,param_1);
    local_8 = 2;
    FUN_0062ddc0(uVar2,0);
    FUN_00593e50();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* Widget_readProperty @ 00687560  kind=game  attributed-by=ledger  size=1366 */

void FUN_00687560(int param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined4 *puVar7;
  bool bVar8;
  char local_8c [64];
  void *local_4c [4];
  undefined4 local_3c;
  uint local_38;
  void *local_34 [5];
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f9110;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = param_2[4];
  puVar7 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar7 = (undefined4 *)*param_2;
  }
  uVar5 = 0xb;
  if (uVar1 < 0xb) {
    uVar5 = uVar1;
  }
  local_14 = uVar3;
  iVar4 = FUN_0040c590(puVar7,"Widget.name",uVar5);
  bVar8 = false;
  if (iVar4 == 0) {
    if (uVar1 < 0xb) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = (uint)(uVar1 != 0xb);
    }
    bVar8 = uVar5 == 0;
  }
  if (bVar8) {
    FUN_00688180();
    uVar6 = FUN_00688510(local_34);
    local_8 = 0;
    iVar4 = FUN_006089c0(local_4c,uVar6);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (param_1 + 0xc != iVar4) {
      FUN_0040f680(iVar4,0,0xffffffff);
    }
    if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_4c[0]);
    }
    local_38 = 7;
    local_3c = 0;
    local_4c[0] = (void *)((uint)local_4c[0] & 0xffff0000);
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_34[0]);
    }
    FUN_00688490();
  }
  else {
    puVar7 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar7 = (undefined4 *)*param_2;
    }
    uVar5 = 0xc;
    if (uVar1 < 0xc) {
      uVar5 = uVar1;
    }
    iVar4 = FUN_0040c590(puVar7,"Widget.wname",uVar5);
    bVar8 = false;
    if (iVar4 == 0) {
      if (uVar1 < 0xc) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar1 != 0xc);
      }
      bVar8 = uVar5 == 0;
    }
    if (bVar8) {
      FUN_00688180();
      iVar4 = FUN_00688610(local_34);
      local_8 = 2;
      if (param_1 + 0xc != iVar4) {
        FUN_0040f680(iVar4,0,0xffffffff);
      }
      local_8 = 0xffffffff;
      if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_34[0]);
      }
      FUN_00688490();
    }
    else {
      puVar7 = param_2;
      if (0xf < (uint)param_2[5]) {
        puVar7 = (undefined4 *)*param_2;
      }
      uVar5 = 0xe;
      if (uVar1 < 0xe) {
        uVar5 = uVar1;
      }
      iVar4 = FUN_0040c590(puVar7,"Widget.caption",uVar5);
      bVar8 = false;
      if (iVar4 == 0) {
        if (uVar1 < 0xe) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar1 != 0xe);
        }
        bVar8 = uVar5 == 0;
      }
      if (bVar8) {
        FUN_00688180();
        uVar6 = FUN_00688610(local_34);
        local_8 = 3;
        FUN_0062ddc0(uVar6,0);
        local_8 = 0xffffffff;
        if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_34[0]);
        }
        FUN_00688490();
      }
      else {
        puVar7 = param_2;
        if (0xf < (uint)param_2[5]) {
          puVar7 = (undefined4 *)*param_2;
        }
        uVar5 = 0x13;
        if (uVar1 < 0x13) {
          uVar5 = uVar1;
        }
        iVar4 = FUN_0040c590(puVar7,"Widget.innerBindPos",uVar5);
        if (((iVar4 == 0) && (0x12 < uVar1)) && (uVar1 == 0x13)) {
          FUN_00688180();
          std::basic_istream<char,std::char_traits<char>_>::read
                    (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_1c
                     ,(ulonglong)uVar3 << 0x20);
          *(undefined4 *)(param_1 + 0x48) = local_1c;
          *(undefined4 *)(param_1 + 0x4c) = local_18;
          FUN_00688490();
        }
        else {
          cVar2 = FUN_00451470(param_2,"Widget.innerBindSize");
          if (cVar2 == '\0') {
            cVar2 = FUN_00451470(param_2,"Widget.bindPos");
            if (cVar2 == '\0') {
              cVar2 = FUN_00451470(param_2,"Widget.bindSize");
              if (cVar2 == '\0') {
                cVar2 = FUN_00451470(param_2,"Widget.framePos");
                if (cVar2 == '\0') {
                  cVar2 = FUN_00451470(param_2,"Widget.frameSize");
                  if (cVar2 == '\0') {
                    cVar2 = FUN_00451470(param_2,"Widget.bindMatrix");
                    if (cVar2 == '\0') {
                      cVar2 = FUN_00451470(param_2,"Widget.horizontalAlignment");
                      if (cVar2 == '\0') {
                        cVar2 = FUN_00451470(param_2,"Widget.verticalAlignment");
                        if (cVar2 == '\0') {
                          cVar2 = FUN_00451470(param_2,"Widget.flags");
                          if (cVar2 != '\0') {
                            FUN_00688180();
                            uVar6 = FUN_00681220();
                            *(undefined4 *)(param_1 + 0x128) = uVar6;
                            FUN_00688490();
                          }
                        }
                        else {
                          FUN_00688180();
                          uVar6 = FUN_00681220();
                          *(undefined4 *)(param_1 + 300) = uVar6;
                          FUN_00688490();
                        }
                      }
                      else {
                        FUN_00688180();
                        uVar6 = FUN_00681220();
                        *(undefined4 *)(param_1 + 0x130) = uVar6;
                        FUN_00688490();
                      }
                    }
                    else {
                      FUN_00688180();
                      std::basic_istream<char,std::char_traits<char>_>::read
                                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                                 local_8c,(ulonglong)uVar3 << 0x20);
                      FUN_00687ad0(local_8c);
                      FUN_00688490();
                    }
                  }
                  else {
                    FUN_00688180();
                    std::basic_istream<char,std::char_traits<char>_>::read
                              (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                               (char *)&local_1c,(ulonglong)uVar3 << 0x20);
                    *(undefined4 *)(param_1 + 0x70) = local_1c;
                    *(undefined4 *)(param_1 + 0x74) = local_18;
                    FUN_00688490();
                  }
                }
                else {
                  FUN_00688180();
                  std::basic_istream<char,std::char_traits<char>_>::read
                            (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                             (char *)&local_1c,(ulonglong)uVar3 << 0x20);
                  *(undefined4 *)(param_1 + 0x68) = local_1c;
                  *(undefined4 *)(param_1 + 0x6c) = local_18;
                  FUN_00688490();
                }
              }
              else {
                FUN_00688180();
                std::basic_istream<char,std::char_traits<char>_>::read
                          (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                           (char *)&local_1c,(ulonglong)uVar3 << 0x20);
                *(undefined4 *)(param_1 + 0x60) = local_1c;
                *(undefined4 *)(param_1 + 100) = local_18;
                FUN_00688490();
              }
            }
            else {
              FUN_00688180();
              std::basic_istream<char,std::char_traits<char>_>::read
                        (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                         (char *)&local_1c,(ulonglong)uVar3 << 0x20);
              *(undefined4 *)(param_1 + 0x58) = local_1c;
              *(undefined4 *)(param_1 + 0x5c) = local_18;
              FUN_00688490();
            }
          }
          else {
            FUN_00688180();
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)&local_1c,(ulonglong)uVar3 << 0x20);
            *(undefined4 *)(param_1 + 0x50) = local_1c;
            *(undefined4 *)(param_1 + 0x54) = local_18;
            FUN_00688490();
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


