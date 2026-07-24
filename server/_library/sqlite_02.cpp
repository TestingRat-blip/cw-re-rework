// sqlite_02 (_library) -- server. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "sqlite_02.h"

/* FUN_004940f0 @ 004940f0  kind=lib  attributed-by=lib-string  size=2153 */

int * __cdecl
FUN_004940f0(int *param_1,undefined4 *param_2,int param_3,short *param_4,uint *param_5,int param_6,
            int param_7,undefined4 param_8,undefined1 param_9,int param_10)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  void *_Src;
  byte *extraout_EDX;
  int iVar14;
  int iVar15;
  undefined4 local_58 [5];
  char *local_44;
  uint local_40;
  int *local_3c;
  int local_38;
  byte *local_34;
  int *local_30;
  byte *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int *local_18;
  byte *local_14;
  uint *local_10;
  undefined4 *local_c;
  uint local_8;
  
  iVar10 = *param_1;
  local_3c = (int *)0x0;
  local_14 = (byte *)0x0;
  local_24 = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_1c = iVar10;
  if ((*(char *)(iVar10 + 0x38) != '\0') || (*(char *)((int)param_1 + 0x1d5) != '\0'))
  goto LAB_00494936;
  if ((*(char *)(iVar10 + 0x81) == '\0') && (iVar4 = FUN_0049ddb0(iVar10,param_1 + 1), iVar4 != 0))
  {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar4;
    goto LAB_00494936;
  }
  if (param_4 == (short *)0x0) {
    puVar5 = (undefined4 *)param_1[0x7f];
    local_c = puVar5;
    if (puVar5 == (undefined4 *)0x0) goto LAB_00494936;
    local_8 = FUN_004a7ba0(iVar10,puVar5[0x10]);
  }
  else {
    local_8 = FUN_004ab150(param_1,param_2,param_3,(int *)&local_24);
    if ((int)local_8 < 0) goto LAB_00494936;
    if ((((*(char *)(iVar10 + 0x81) == '\0') &&
         (iVar4 = FUN_004aa130(param_1,(int)param_4), *(int *)(param_3 + 4) == 0)) && (iVar4 != 0))
       && (*(int *)(iVar4 + 0x40) == *(int *)(*(int *)(iVar10 + 0x10) + 0x1c))) {
      local_8 = 1;
    }
    iVar4 = FUN_0049a350(local_58,param_1,local_8,"index",local_24);
    if (iVar4 != 0) {
      FUN_0049a430(local_58,param_4);
    }
    puVar5 = (undefined4 *)FUN_004a0120(param_1,0,(int *)(param_4 + 4));
    local_c = puVar5;
    if (puVar5 == (undefined4 *)0x0) goto LAB_00494936;
  }
  pbVar1 = (byte *)*puVar5;
  local_38 = local_8 * 0x10;
  local_20 = (undefined4 *)(*(int *)(iVar10 + 0x10) + local_38);
  iVar4 = FUN_00468380(pbVar1,(byte *)"sqlite_",7);
  if ((iVar4 == 0) &&
     (((*(int *)(pbVar1 + 7) != 0x65746c61 || (*(int *)(pbVar1 + 0xb) != 0x62617472)) ||
      (pbVar1[0xf] != 0x5f)))) {
    FUN_004962b0(param_1,(byte *)"table %s may not be indexed");
    goto LAB_00494936;
  }
  if (local_c[3] != 0) {
    FUN_004962b0(param_1,(byte *)"views may not be indexed");
    goto LAB_00494936;
  }
  if ((*(byte *)((int)local_c + 0x2a) & 0x10) != 0) {
    FUN_004962b0(param_1,(byte *)"virtual tables may not be indexed");
    goto LAB_00494936;
  }
  if (local_24 == (undefined4 *)0x0) {
    for (iVar4 = local_c[2]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
    }
    local_14 = (byte *)FUN_004a02d0(iVar10,(byte *)"sqlite_autoindex_%s_%d");
    puVar5 = local_20;
    if (local_14 == (byte *)0x0) goto LAB_00494936;
  }
  else {
    local_14 = (byte *)FUN_004a0d40(iVar10,local_24);
    if ((local_14 == (byte *)0x0) || (iVar4 = FUN_00492220(param_1,local_14), iVar4 != 0))
    goto LAB_00494936;
    if ((*(char *)(iVar10 + 0x81) == '\0') &&
       (iVar4 = FUN_00499c30(iVar10,local_14,(byte *)0x0), iVar4 != 0)) {
      FUN_004962b0(param_1,(byte *)"there is already a table named %s");
      goto LAB_00494936;
    }
    puVar5 = local_20;
    iVar4 = FUN_00499af0(iVar10,local_14,(byte *)*local_20);
    if (iVar4 != 0) {
      if (param_10 == 0) {
        FUN_004962b0(param_1,(byte *)"index %s already exists");
      }
      else {
        FUN_00493400(param_1,local_8);
      }
      goto LAB_00494936;
    }
  }
  uVar2 = *puVar5;
  pcVar6 = "sqlite_temp_master";
  if (local_8 != 1) {
    pcVar6 = "sqlite_master";
  }
  iVar4 = FUN_0048d4b0(param_1,0x12,pcVar6,0,uVar2);
  puVar5 = local_c;
  if (iVar4 != 0) goto LAB_00494936;
  uVar7 = 1;
  if (local_8 == 1) {
    uVar7 = 3;
  }
  iVar4 = FUN_0048d4b0(param_1,uVar7,local_14,*local_c,uVar2);
  if (iVar4 != 0) goto LAB_00494936;
  local_10 = param_5;
  if (param_5 == (uint *)0x0) {
    local_44 = *(char **)(puVar5[1] + -0x18 + *(short *)((int)puVar5 + 0x26) * 0x18);
    local_40 = FUN_004aa9b0(local_44);
    param_5 = FUN_00498f00(param_1,(uint *)0x0,(undefined4 *)0x0);
    local_10 = param_5;
    if (param_5 == (uint *)0x0) goto LAB_00494936;
    FUN_004992e0(param_1,(int *)param_5,&local_44,0);
    *(undefined1 *)(param_5[2] + 0xc) = param_9;
  }
  iVar4 = 0;
  if (0 < (int)*param_5) {
    iVar15 = 0;
    do {
      if ((*(char **)(iVar15 + param_5[2]) != (char *)0x0) &&
         (puVar5 = (undefined4 *)FUN_004984d0(param_1,*(char **)(iVar15 + param_5[2])),
         puVar5 != (undefined4 *)0x0)) {
        uVar8 = FUN_004aa9b0((char *)*puVar5);
        local_28 = (undefined4 *)((int)local_28 + uVar8 + 1);
      }
      iVar4 = iVar4 + 1;
      iVar15 = iVar15 + 0x14;
      param_5 = local_10;
      iVar10 = local_1c;
    } while (iVar4 < (int)*local_10);
  }
  local_30 = (int *)FUN_004aa9b0((char *)local_14);
  local_34 = (byte *)*local_10;
  piVar9 = FUN_00494c20(iVar10,(int)local_30 +
                               (int)local_28 +
                               (int)local_34 * 9 + ((int)local_34 * 4 + 0xbU & 0xfffffff8) + 0x31);
  local_18 = piVar9;
  if (*(char *)(iVar10 + 0x38) == '\0') {
    iVar4 = ((int)local_34 * 4 + 8U & 0xfffffff8) + (int)(piVar9 + 0xc);
    piVar9[8] = iVar4;
    iVar4 = iVar4 + (int)local_34 * 4;
    piVar9[1] = iVar4;
    iVar4 = iVar4 + (int)local_34 * 4;
    piVar9[2] = (int)(piVar9 + 0xc);
    pbVar1 = local_34 + iVar4;
    piVar9[7] = iVar4;
    *piVar9 = (int)pbVar1;
    local_2c = pbVar1 + (int)local_30 + 1;
    memcpy(pbVar1,local_14,(int)local_30 + 1);
    puVar5 = local_20;
    piVar9[3] = (int)local_c;
    piVar9[9] = *local_10;
    *(char *)(piVar9 + 0xb) = (char)param_6;
    *(bool *)((int)piVar9 + 0x2d) = local_24 == (undefined4 *)0x0;
    piVar9[6] = *(int *)(local_38 + 0xc + *(int *)(iVar10 + 0x10));
    local_20 = (undefined4 *)0x0;
    local_40 = (*(byte *)(puVar5[3] + 0x4c) < 4) - 1;
    local_28 = (undefined4 *)local_10[2];
    if (0 < (int)*local_10) {
      do {
        local_34 = (byte *)local_28[1];
        piVar9 = (int *)(int)*(short *)((int)local_c + 0x26);
        puVar5 = (undefined4 *)local_c[1];
        iVar10 = 0;
        local_30 = piVar9;
        if (0 < (int)piVar9) {
          do {
            iVar4 = FUN_004bcc60(local_34,(byte *)*puVar5);
            if (iVar4 == 0) break;
            iVar10 = iVar10 + 1;
            puVar5 = puVar5 + 6;
          } while (iVar10 < (int)piVar9);
        }
        piVar9 = local_18;
        if ((int)local_30 <= iVar10) {
          FUN_004962b0(param_1,(byte *)"table %s has no column named %s");
          *(undefined1 *)((int)param_1 + 0x11) = 1;
          goto LAB_00494700;
        }
        *(int *)(local_18[1] + (int)local_20 * 4) = iVar10;
        if (((char *)*local_28 == (char *)0x0) ||
           (puVar5 = (undefined4 *)FUN_004984d0(param_1,(char *)*local_28),
           puVar5 == (undefined4 *)0x0)) {
          pbVar1 = *(byte **)(local_c[1] + 0x10 + iVar10 * 0x18);
          local_34 = (byte *)"BINARY";
          if (pbVar1 != (byte *)0x0) {
            local_34 = pbVar1;
          }
        }
        else {
          uVar8 = FUN_004aa9b0((char *)*puVar5);
          memcpy(local_2c,_Src,uVar8 + 1);
          local_34 = local_2c;
          local_2c = local_2c + uVar8 + 1;
        }
        iVar10 = local_1c;
        if ((*(char *)(local_1c + 0x81) == '\0') &&
           (piVar11 = FUN_004a0000(param_1,local_34), piVar11 == (int *)0x0)) goto LAB_00494700;
        *(byte **)(piVar9[8] + (int)local_20 * 4) = local_34;
        pbVar1 = (byte *)(local_28 + 3);
        local_28 = local_28 + 5;
        *(byte *)((int)local_20 + piVar9[7]) = *pbVar1 & (byte)local_40;
        local_20 = (undefined4 *)((int)local_20 + 1);
      } while ((int)local_20 < (int)*local_10);
    }
    FUN_00494e40((int)piVar9);
    if (local_c == (undefined4 *)param_1[0x7f]) {
      piVar11 = local_18;
      piVar9 = local_18;
      for (iVar4 = local_c[2]; local_18 = piVar9, iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
        iVar10 = *(int *)(iVar4 + 0x24);
        piVar9 = piVar11;
        if (iVar10 == piVar11[9]) {
          iVar15 = 0;
          if (0 < iVar10) {
            iVar13 = piVar11[1];
            iVar14 = *(int *)(iVar4 + 4) - iVar13;
            do {
              piVar9 = (int *)(iVar13 + iVar15 * 4);
              if (*(int *)(iVar14 + (int)piVar9) != *piVar9) {
LAB_00494728:
                iVar10 = *(int *)(iVar4 + 0x24);
                piVar9 = local_18;
                break;
              }
              pbVar1 = *(byte **)(*(int *)(iVar4 + 0x20) + iVar15 * 4);
              pbVar3 = *(byte **)(piVar11[8] + iVar15 * 4);
              if ((pbVar1 != pbVar3) &&
                 (iVar10 = FUN_004bcc60(pbVar1,pbVar3), piVar11 = local_18, iVar10 != 0))
              goto LAB_00494728;
              iVar10 = *(int *)(iVar4 + 0x24);
              iVar13 = piVar11[1];
              iVar15 = iVar15 + 1;
              piVar9 = local_18;
            } while (iVar15 < iVar10);
          }
          if (iVar15 == iVar10) {
            if (*(char *)(iVar4 + 0x2c) != (char)piVar9[0xb]) {
              if ((*(char *)(iVar4 + 0x2c) != 'c') && ((char)piVar9[0xb] != 'c')) {
                FUN_004962b0(param_1,(byte *)"conflicting ON CONFLICT clauses specified");
                piVar9 = local_18;
              }
              if (*(char *)(iVar4 + 0x2c) == 'c') {
                *(char *)(iVar4 + 0x2c) = (char)piVar9[0xb];
              }
            }
            goto LAB_00494700;
          }
        }
        iVar10 = local_1c;
        piVar11 = piVar9;
        piVar9 = local_18;
      }
    }
    if (*(char *)(iVar10 + 0x81) == '\0') {
      param_1[0x13] = param_1[0x13] + 1;
      iVar4 = param_1[0x13];
      local_30 = FUN_0049d4d0(param_1);
      if (local_30 != (int *)0x0) {
        FUN_0048e5e0(param_1,1,local_8);
        FUN_004ae830(local_30,0x68,local_8,iVar4);
        if (param_7 == 0) {
          local_34 = (byte *)0x0;
        }
        else {
          local_34 = (byte *)FUN_004a02d0(iVar10,(byte *)"CREATE%s INDEX %.*s");
        }
        FUN_004a0da0(param_1,(byte *)"INSERT INTO %Q.%s VALUES(\'index\',%Q,%Q,#%d,%Q);");
        FUN_00494b00(iVar10,(undefined4 *)local_34);
        if (param_4 != (short *)0x0) {
          FUN_004a6290(param_1,piVar9,iVar4);
          FUN_00492110(param_1,local_8);
          piVar12 = (int *)FUN_004a02d0(iVar10,(byte *)"name=\'%q\' AND type=\'index\'");
          piVar11 = local_30;
          FUN_004aeac0(local_30,local_8,piVar12);
          FUN_004ae7d0(piVar11,0x81,0);
        }
        goto LAB_004948ce;
      }
    }
    else {
      piVar11 = piVar9;
      uVar8 = FUN_004aa9b0((char *)*piVar9);
      uVar8 = FUN_0049d6f0((uint *)(piVar9[6] + 0x18),extraout_EDX,uVar8,(uint)piVar11);
      if (uVar8 == 0) {
        *(uint *)(iVar10 + 0x18) = *(uint *)(iVar10 + 0x18) | 2;
        if (param_4 != (short *)0x0) {
          piVar9[10] = *(int *)(iVar10 + 0x7c);
        }
LAB_004948ce:
        if ((*(char *)(iVar10 + 0x81) != '\0') || (param_4 == (short *)0x0)) {
          param_5 = local_10;
          local_3c = piVar9;
          if ((param_6 == 5) &&
             ((iVar4 = local_c[2], iVar4 != 0 && (*(char *)(iVar4 + 0x2c) != '\x05')))) {
            iVar15 = *(int *)(iVar4 + 0x14);
            while ((iVar15 != 0 &&
                   (iVar13 = *(int *)(iVar4 + 0x14), *(char *)(iVar13 + 0x2c) != '\x05'))) {
              iVar15 = *(int *)(iVar13 + 0x14);
              iVar4 = iVar13;
            }
            piVar9[5] = *(int *)(iVar4 + 0x14);
            *(int **)(iVar4 + 0x14) = piVar9;
          }
          else {
            piVar9[5] = local_c[2];
            local_c[2] = piVar9;
          }
          goto LAB_00494936;
        }
      }
      else {
        *(undefined1 *)(iVar10 + 0x38) = 1;
      }
    }
  }
LAB_00494700:
  piVar9 = local_18;
  iVar10 = local_1c;
  param_5 = local_10;
  if (local_18 != (int *)0x0) {
    FUN_00494b00(local_1c,(undefined4 *)local_18[4]);
    iVar10 = local_1c;
    FUN_00494b00(local_1c,piVar9);
    param_5 = local_10;
  }
LAB_00494936:
  FUN_00499060(iVar10,(int *)param_5);
  FUN_004a9cb0(iVar10,param_4);
  FUN_00494b00(iVar10,(undefined4 *)local_14);
  return local_3c;
}


/* FUN_00494960 @ 00494960  kind=lib  attributed-by=lib-island  size=411 */

void __cdecl
FUN_00494960(int *param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 *param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 local_20 [5];
  int local_c;
  int local_8;
  
  local_8 = 0;
  iVar1 = *param_1;
  if (param_1[0x73] < 1) {
    FUN_004aa1c0(param_1,param_3,param_4,param_6,1,0,param_7);
    iVar2 = param_1[0x7f];
    if ((iVar2 == 0) || (param_1[0x11] != 0)) {
      if (param_5 != (undefined4 *)0x0) {
        FUN_00472d10(iVar1,param_5);
        FUN_00494b00(iVar1,param_5);
      }
    }
    else {
      FUN_004ab150(param_1,param_3,param_4,&local_8);
      iVar3 = FUN_004a7ba0(iVar1,*(int *)(iVar2 + 0x40));
      iVar3 = FUN_0049a350(local_20,param_1,iVar3,&DAT_0056f6d8,local_8);
      if ((iVar3 != 0) && (iVar3 = FUN_0049a3a0(local_20,param_5), iVar3 != 0)) {
        FUN_004a9650(iVar1,param_5);
        return;
      }
      puVar4 = FUN_004a9680(iVar1,param_5,1);
      *(undefined4 **)(iVar2 + 0xc) = puVar4;
      if (param_5 != (undefined4 *)0x0) {
        FUN_00472d10(iVar1,param_5);
        FUN_00494b00(iVar1,param_5);
      }
      if (*(char *)(iVar1 + 0x38) == '\0') {
        if (*(char *)(iVar1 + 0x81) == '\0') {
          FUN_004b9570(param_1,iVar2);
        }
        pcVar5 = (char *)param_1[0x84];
        if ((*pcVar5 != '\0') && (*pcVar5 != ';')) {
          pcVar5 = pcVar5 + param_1[0x85];
        }
        iVar1 = *param_2;
        local_c = (int)pcVar5 - iVar1;
        while ((0 < local_c && (((&DAT_00569720)[*(byte *)(iVar1 + -1 + local_c)] & 1) != 0))) {
          local_c = local_c + -1;
        }
        local_c = iVar1 + -1 + local_c;
        local_8 = 1;
        FUN_00495df0(param_1,(int *)0x0,&local_c,(int *)0x0);
        return;
      }
    }
  }
  else {
    FUN_004962b0(param_1,(byte *)"parameters are not allowed in views");
    if (param_5 != (undefined4 *)0x0) {
      FUN_00472d10(iVar1,param_5);
      FUN_00494b00(iVar1,param_5);
      return;
    }
  }
  return;
}


/* FUN_00494b00 @ 00494b00  kind=lib  attributed-by=lib-island  size=139 */

void __cdecl FUN_00494b00(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x1f0) != 0) {
      if (((param_2 != (undefined4 *)0x0) && (*(undefined4 **)(param_1 + 0x104) <= param_2)) &&
         (param_2 < *(undefined4 **)(param_1 + 0x108))) {
        **(int **)(param_1 + 0x1f0) =
             **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
        return;
      }
      iVar1 = (*DAT_00582af0._4_4_)(param_2);
      **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar1;
      return;
    }
    if (((param_2 != (undefined4 *)0x0) && (*(undefined4 **)(param_1 + 0x104) <= param_2)) &&
       (param_2 < *(undefined4 **)(param_1 + 0x108))) {
      *param_2 = *(undefined4 *)(param_1 + 0x100);
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
      *(undefined4 **)(param_1 + 0x100) = param_2;
      return;
    }
  }
  FUN_00466dd0((int)param_2);
  return;
}


/* FUN_00494b90 @ 00494b90  kind=lib  attributed-by=lib-island  size=138 */

undefined4 * __cdecl FUN_00494b90(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x38) != '\0') {
      return (undefined4 *)0x0;
    }
    if (*(char *)(param_1 + 0xea) != '\0') {
      if ((int)(uint)*(ushort *)(param_1 + 0xe8) < param_2) {
        *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
      }
      else {
        puVar2 = *(undefined4 **)(param_1 + 0x100);
        if (puVar2 != (undefined4 *)0x0) {
          uVar1 = *puVar2;
          *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
          *(undefined4 *)(param_1 + 0x100) = uVar1;
          *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
          if (*(int *)(param_1 + 0xf0) < *(int *)(param_1 + 0xec)) {
            *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xec);
          }
          return puVar2;
        }
        *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
      }
    }
  }
  puVar2 = (undefined4 *)FUN_004a0350(param_2);
  if ((puVar2 == (undefined4 *)0x0) && (param_1 != 0)) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return puVar2;
}


/* FUN_00494c20 @ 00494c20  kind=lib  attributed-by=lib-island  size=43 */

undefined4 * __cdecl FUN_00494c20(int param_1,size_t param_2)

{
  undefined4 *_Dst;
  
  _Dst = FUN_00494b90(param_1,param_2);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,param_2);
  }
  return _Dst;
}


/* FUN_00494c50 @ 00494c50  kind=lib  attributed-by=lib-island  size=146 */

undefined4 __cdecl FUN_00494c50(int param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar6 = 0;
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    do {
      if (puVar4[1] != 0) {
        if (param_2 == (byte *)0x0) {
LAB_00494cd9:
          return (*(undefined4 **)(param_1 + 0x10))[iVar6 * 4 + 1];
        }
        pbVar5 = (byte *)*puVar4;
        bVar2 = *param_2;
        pbVar3 = param_2;
        while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar5]))) {
          pbVar1 = pbVar3 + 1;
          pbVar3 = pbVar3 + 1;
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar5]) goto LAB_00494cd9;
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x14));
  }
  return 0;
}


/* FUN_00494cf0 @ 00494cf0  kind=lib  attributed-by=lib-island  size=180 */

undefined4 * __cdecl FUN_00494cf0(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *_Dst;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (param_2 == (undefined4 *)0x0) {
      puVar2 = FUN_00494b90(param_1,param_3);
      return puVar2;
    }
    if ((param_2 < *(undefined4 **)(param_1 + 0x104)) ||
       (*(undefined4 **)(param_1 + 0x108) <= param_2)) {
      iVar1 = FUN_004bc920();
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x38) = 1;
        return (undefined4 *)0x0;
      }
      puVar2 = (undefined4 *)FUN_004a6140((int)param_2,param_3);
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined1 *)(param_1 + 0x38) = 1;
      }
    }
    else {
      if (param_3 <= (int)(uint)*(ushort *)(param_1 + 0xe8)) {
        return param_2;
      }
      _Dst = FUN_00494b90(param_1,param_3);
      puVar2 = (undefined4 *)0x0;
      if (_Dst != (undefined4 *)0x0) {
        memcpy(_Dst,param_2,(uint)*(ushort *)(param_1 + 0xe8));
        FUN_00494b00(param_1,param_2);
        return _Dst;
      }
    }
  }
  return puVar2;
}


/* FUN_00494db0 @ 00494db0  kind=lib  attributed-by=lib-island  size=77 */

undefined4 * __cdecl FUN_00494db0(int param_1,char *param_2)

{
  size_t _Size;
  char cVar1;
  char *pcVar2;
  undefined4 *_Dst;
  
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar2 = param_2;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    _Size = ((int)pcVar2 - (int)param_2 & 0x3fffffffU) + 1;
    _Dst = FUN_00494b90(param_1,_Size);
    if (_Dst != (undefined4 *)0x0) {
      memcpy(_Dst,param_2,_Size);
    }
    return _Dst;
  }
  return (undefined4 *)0x0;
}


/* FUN_00494e00 @ 00494e00  kind=lib  attributed-by=lib-island  size=62 */

undefined4 * __cdecl FUN_00494e00(int param_1,void *param_2,size_t param_3)

{
  undefined4 *_Dst;
  
  if (param_2 == (void *)0x0) {
    return (undefined4 *)0x0;
  }
  _Dst = FUN_00494b90(param_1,param_3 + 1);
  if (_Dst != (undefined4 *)0x0) {
    memcpy(_Dst,param_2,param_3);
    *(undefined1 *)((int)_Dst + param_3) = 0;
  }
  return _Dst;
}


/* FUN_00494e40 @ 00494e40  kind=lib  attributed-by=lib-island  size=80 */

void __cdecl FUN_00494e40(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = *(uint **)(param_1 + 8);
  uVar3 = *(uint *)(*(int *)(param_1 + 0xc) + 0x1c);
  if (uVar3 < 10) {
    uVar3 = 10;
  }
  *puVar1 = uVar3;
  iVar2 = 1;
  uVar3 = 10;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      puVar1[iVar2] = uVar3;
      if (5 < uVar3) {
        uVar3 = uVar3 - 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(param_1 + 0x24));
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    puVar1[*(int *)(param_1 + 0x24)] = 1;
  }
  return;
}


/* FUN_00494ea0 @ 00494ea0  kind=lib  attributed-by=lib-island  size=31 */

void __cdecl FUN_00494ea0(int param_1,undefined1 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1fc) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x1fc) + 0x10), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x18) = param_2;
  }
  return;
}


/* FUN_00494ec0 @ 00494ec0  kind=lib  attributed-by=lib-island  size=1084 */

void __cdecl FUN_00494ec0(int *param_1,short *param_2,byte *param_3)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 extraout_var;
  int iVar5;
  int *piVar6;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  int *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  iVar5 = *param_1;
  local_20 = -1;
  local_34 = 0;
  local_8 = iVar5;
  if (((param_1[0x11] == 0) && (*(char *)(iVar5 + 0x38) == '\0')) &&
     (piVar2 = (int *)FUN_004aa130(param_1,(int)param_2), local_28 = piVar2, piVar2 != (int *)0x0))
  {
    local_24 = (int *)FUN_004ab0e0(param_1,piVar2,0x6a,(int *)0x0,(uint *)0x0);
    local_1c = (uint)(piVar2[3] != 0);
    iVar3 = FUN_004b9570(param_1,(int)piVar2);
    if ((iVar3 == 0) &&
       (iVar3 = FUN_0049f850(param_1,(int)piVar2,(uint)(local_24 != (int *)0x0)), iVar3 == 0)) {
      local_18 = FUN_004a7ba0(iVar5,piVar2[0x10]);
      local_2c = (int *)FUN_0048d4b0(param_1,9,*piVar2,0,
                                     *(undefined4 *)(*(int *)(iVar5 + 0x10) + local_18 * 0x10));
      if (local_2c != (int *)0x1) {
        local_14 = param_1[0x12];
        *(int *)(param_2 + 0x1a) = local_14;
        param_1[0x12] = param_1[0x12] + 1;
        iVar3 = param_1[0x12];
        for (iVar5 = piVar2[2]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
          iVar3 = iVar3 + 1;
          param_1[0x12] = iVar3;
        }
        if (local_1c == 0) {
          local_c = local_34._4_4_;
          local_10 = (int)local_34;
        }
        else {
          local_10 = param_1[0x81];
          local_c = param_1;
          param_1[0x81] = *piVar2;
        }
        piVar4 = FUN_0049d4d0(param_1);
        piVar6 = local_c;
        iVar3 = local_10;
        iVar5 = local_8;
        if (piVar4 != (int *)0x0) {
          if (*(char *)((int)param_1 + 0x12) == '\0') {
            piVar4[0x18] = piVar4[0x18] | 0x10;
          }
          FUN_0048e5e0(param_1,1,local_18);
          if (local_1c != 0) {
            FUN_004a05b0(param_1,piVar2,(undefined4 *)param_3,local_14);
          }
          local_4c = 0;
          local_44 = 0;
          local_3c = 0;
          local_54 = CONCAT44(param_2,param_1);
          uVar1 = FUN_004a69e0((int *)&local_54,(int)param_3);
          piVar6 = local_c;
          iVar3 = local_10;
          iVar5 = local_8;
          if (CONCAT22(extraout_var,uVar1) == 0) {
            if ((*(byte *)(local_8 + 0x18) & 0x10) != 0) {
              param_1[0x13] = param_1[0x13] + 1;
              local_20 = param_1[0x13];
              FUN_004ae830(piVar4,7,0,local_20);
            }
            if ((((local_2c == (int *)0x0) && (param_3 == (byte *)0x0)) &&
                ((local_24 == (int *)0x0 && ((*(byte *)((int)piVar2 + 0x2a) & 0x10) == 0)))) &&
               (((*(uint *)(*param_1 + 0x18) & 0x40000) == 0 ||
                ((iVar5 = FUN_0049ae70(piVar2), iVar5 == 0 && (piVar2[4] == 0)))))) {
              FUN_004ae8f0(piVar4,0x67,piVar2[8],local_18,local_20,(int *)*piVar2,0xfffffffe);
              iVar3 = local_18;
              for (iVar5 = piVar2[2]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
                FUN_004ae830(piVar4,0x67,*(undefined4 *)(iVar5 + 0x28),iVar3);
              }
            }
            else {
              local_18 = param_1[0x13] + 1;
              param_1[0x13] = param_1[0x13] + 2;
              FUN_004ae830(piVar4,10,0,local_18);
              local_2c = FUN_004bb240(param_1,param_2,param_3,(undefined2 *)0x0,(int *)0x0,8,0);
              piVar6 = local_c;
              iVar3 = local_10;
              iVar5 = local_8;
              if (local_2c == (int *)0x0) goto LAB_004952d6;
              iVar5 = FUN_004970c0(param_1,piVar2,-1,local_14,local_18 + 1,'\0');
              FUN_004ae830(piVar4,0x70,local_18,iVar5);
              if ((*(byte *)(local_8 + 0x18) & 0x10) != 0) {
                FUN_004ae830(piVar4,0x14,local_20,1);
              }
              FUN_004bbe40(local_2c);
              local_2c = (int *)FUN_004b6b80(piVar4);
              if (local_1c == 0) {
                FUN_004a1030(param_1,piVar2,local_14,0x28);
              }
              iVar5 = FUN_004ae890(piVar4,0x71,local_18,local_2c,local_18 + 1);
              local_34 = CONCAT44(iVar5,(int)local_34);
              if ((*(byte *)((int)piVar2 + 0x2a) & 0x10) == 0) {
                FUN_0049c510(param_1,piVar2,local_14,local_18 + 1,
                             (uint)(*(char *)((int)param_1 + 0x12) == '\0'),local_24,99);
              }
              else {
                piVar2 = (int *)FUN_0049d250(local_8,(int)piVar2);
                FUN_004b9d20(param_1,(int)local_28);
                FUN_004ae8f0(piVar4,0x8c,0,1,local_18 + 1,piVar2,0xfffffff6);
                FUN_004aee30((int)piVar4,2);
                piVar2 = param_1;
                if ((int *)param_1[0x6c] != (int *)0x0) {
                  piVar2 = (int *)param_1[0x6c];
                }
                *(undefined1 *)(piVar2 + 6) = 1;
                piVar2 = local_28;
              }
              FUN_004ae830(piVar4,1,0,local_34._4_4_);
              FUN_004b87b0((int)piVar4,(int)local_2c);
              if ((local_1c == 0) && ((*(byte *)((int)piVar2 + 0x2a) & 0x10) == 0)) {
                iVar3 = local_14;
                for (iVar5 = piVar2[2]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
                  iVar3 = iVar3 + 1;
                  FUN_004ae830(piVar4,0x2d,iVar3,*(undefined4 *)(iVar5 + 0x28));
                }
                FUN_004ae7d0(piVar4,0x2d,local_14);
              }
            }
            if ((*(char *)((int)param_1 + 0x12) == '\0') && (param_1[0x6d] == 0)) {
              FUN_0048dbc0(param_1);
            }
            piVar6 = local_c;
            iVar3 = local_10;
            iVar5 = local_8;
            if ((((*(byte *)(local_8 + 0x18) & 0x10) != 0) &&
                (*(char *)((int)param_1 + 0x12) == '\0')) && (param_1[0x6d] == 0)) {
              FUN_004ae830(piVar4,0x10,local_20,1);
              FUN_004b8c50(piVar4,1);
              FUN_004b8c10(piVar4,0,0,"rows deleted",(undefined *)0x0);
              piVar6 = local_c;
              iVar3 = local_10;
              iVar5 = local_8;
            }
          }
        }
        goto LAB_004952d6;
      }
    }
  }
  piVar6 = local_34._4_4_;
  iVar3 = (int)local_34;
LAB_004952d6:
  if (piVar6 != (int *)0x0) {
    piVar6[0x81] = iVar3;
  }
  FUN_004a9cb0(iVar5,param_2);
  FUN_00498790(iVar5,(undefined4 *)param_3);
  return;
}


/* FUN_00495300 @ 00495300  kind=lib  attributed-by=lib-island  size=375 */

void __cdecl FUN_00495300(int param_1,undefined4 *param_2)

{
  short *psVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_2 != (undefined4 *)0x0) {
    if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
      psVar1 = (short *)(param_2 + 10);
      *psVar1 = *psVar1 + -1;
      if (*psVar1 != 0) {
        return;
      }
    }
    puVar5 = (undefined4 *)param_2[2];
    while (puVar5 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar5[5];
      if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
        pbVar4 = (byte *)*puVar5;
        uVar9 = 0;
        if (pbVar4 != (byte *)0x0) {
          bVar2 = *pbVar4;
          pbVar8 = pbVar4;
          while (bVar2 != 0) {
            pbVar8 = pbVar8 + 1;
            bVar2 = *pbVar8;
          }
          uVar9 = (int)pbVar8 - (int)pbVar4 & 0x3fffffff;
        }
        puVar6 = (uint *)(puVar5[6] + 0x18);
        if (*puVar6 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          pbVar8 = pbVar4;
          uVar11 = uVar9;
          if (uVar9 != 0) {
            do {
              uVar11 = uVar11 - 1;
              uVar10 = uVar10 ^ (uint)(byte)(&DAT_00569620)[*pbVar8] ^ uVar10 * 8;
              pbVar8 = pbVar8 + 1;
            } while (0 < (int)uVar11);
          }
          uVar10 = uVar10 % *puVar6;
        }
        piVar7 = FUN_00479af0((int)puVar6,pbVar4,uVar9,uVar10);
        if (piVar7 != (int *)0x0) {
          FUN_004884b0(puVar6,piVar7,uVar10);
        }
      }
      FUN_00494b00(param_1,(undefined4 *)puVar5[4]);
      FUN_00494b00(param_1,puVar5);
      puVar5 = puVar3;
    }
    FUN_0049ab00(param_1,(int)param_2);
    FUN_004bce20(param_1,(int)param_2);
    FUN_00494b00(param_1,(undefined4 *)*param_2);
    FUN_00494b00(param_1,(undefined4 *)param_2[5]);
    puVar5 = (undefined4 *)param_2[3];
    if (puVar5 != (undefined4 *)0x0) {
      FUN_00472d10(param_1,puVar5);
      FUN_00494b00(param_1,puVar5);
    }
    FUN_00499060(param_1,(int *)param_2[6]);
    FUN_004b9b30(param_1,(int)param_2);
    FUN_00494b00(param_1,param_2);
  }
  return;
}


/* FUN_00495480 @ 00495480  kind=lib  attributed-by=lib-island  size=184 */

void __cdecl FUN_00495480(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  while (param_2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)param_2[8];
    FUN_00498790(param_1,(undefined4 *)param_2[5]);
    FUN_00499060(param_1,(int *)param_2[6]);
    puVar2 = (undefined4 *)param_2[2];
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00499060(param_1,(int *)*puVar2);
      FUN_004a9cb0(param_1,(short *)puVar2[10]);
      FUN_00498790(param_1,(undefined4 *)puVar2[0xb]);
      FUN_00499060(param_1,(int *)puVar2[0xc]);
      FUN_00498790(param_1,(undefined4 *)puVar2[0xd]);
      FUN_00499060(param_1,(int *)puVar2[0xe]);
      FUN_004a9650(param_1,(undefined4 *)puVar2[0xf]);
      FUN_00498790(param_1,(undefined4 *)puVar2[0x12]);
      FUN_00498790(param_1,(undefined4 *)puVar2[0x13]);
      FUN_00494b00(param_1,puVar2);
    }
    FUN_0049d910(param_1,(int *)param_2[7]);
    FUN_00494b00(param_1,param_2);
    param_2 = puVar1;
  }
  return;
}


/* FUN_00495540 @ 00495540  kind=lib  attributed-by=lib-island  size=107 */

int __cdecl FUN_00495540(char *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  cVar4 = *param_1;
  switch(cVar4) {
  case '\"':
  case '\'':
  case '`':
    break;
  default:
    return -1;
  case '[':
    cVar4 = ']';
  }
  pcVar1 = param_1 + 1;
  iVar2 = 0;
  if (*pcVar1 != '\0') {
    pcVar3 = param_1 + 2;
    do {
      if (*pcVar1 == cVar4) {
        if (*pcVar3 != cVar4) break;
        param_1[iVar2] = cVar4;
        pcVar3 = pcVar3 + 1;
        pcVar1 = pcVar1 + 1;
      }
      else {
        param_1[iVar2] = *pcVar1;
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
  }
  param_1[iVar2] = '\0';
  return iVar2;
}


/* FUN_00495600 @ 00495600  kind=lib  attributed-by=lib-string  size=493 */

void __cdecl FUN_00495600(int *param_1,short *param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x38) == '\0') {
    if ((*(char *)(iVar1 + 0x81) == '\0') && (iVar5 = FUN_0049ddb0(iVar1,param_1 + 1), iVar5 != 0))
    {
      param_1[0x11] = param_1[0x11] + 1;
      param_1[3] = iVar5;
      FUN_004a9cb0(iVar1,param_2);
      return;
    }
    pbVar2 = *(byte **)(param_2 + 6);
    puVar6 = (undefined4 *)FUN_00499af0(iVar1,*(byte **)(param_2 + 8),pbVar2);
    if (puVar6 == (undefined4 *)0x0) {
      if (param_3 == 0) {
        FUN_004962b0(param_1,(byte *)"no such index: %S");
        *(undefined1 *)((int)param_1 + 0x11) = 1;
        FUN_004a9cb0(iVar1,param_2);
        return;
      }
      FUN_00493360(param_1,pbVar2);
      *(undefined1 *)((int)param_1 + 0x11) = 1;
      FUN_004a9cb0(iVar1,param_2);
      return;
    }
    if (*(char *)((int)puVar6 + 0x2d) != '\0') {
      FUN_004962b0(param_1,(byte *)
                           "index associated with UNIQUE or PRIMARY KEY constraint cannot be dropped"
                  );
      FUN_004a9cb0(iVar1,param_2);
      return;
    }
    iVar5 = FUN_004a7ba0(iVar1,puVar6[6]);
    puVar3 = (undefined4 *)puVar6[3];
    uVar4 = *(undefined4 *)(iVar5 * 0x10 + *(int *)(iVar1 + 0x10));
    pcVar7 = "sqlite_temp_master";
    if (iVar5 != 1) {
      pcVar7 = "sqlite_master";
    }
    iVar8 = FUN_0048d4b0(param_1,9,pcVar7,0,uVar4);
    if (iVar8 == 0) {
      uVar9 = 10;
      if (iVar5 != 0) {
        uVar9 = 0xc;
      }
      iVar8 = FUN_0048d4b0(param_1,uVar9,*puVar6,*puVar3,uVar4);
      if ((iVar8 == 0) && (piVar10 = FUN_0049d4d0(param_1), piVar10 != (int *)0x0)) {
        FUN_0048e5e0(param_1,1,iVar5);
        FUN_004a0da0(param_1,(byte *)"DELETE FROM %Q.%s WHERE name=%Q AND type=\'index\'");
        FUN_004923a0(param_1,iVar5);
        FUN_00492110(param_1,iVar5);
        FUN_00476a70(param_1,puVar6[10],iVar5);
        FUN_004ae8f0(piVar10,0x6d,iVar5,0,0,(int *)*puVar6,0);
      }
    }
  }
  FUN_004a9cb0(iVar1,param_2);
  return;
}


/* FUN_004957f0 @ 004957f0  kind=lib  attributed-by=lib-string  size=578 */

void __cdecl FUN_004957f0(int *param_1,short *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 uVar9;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x38) != '\0') goto LAB_00495a20;
  if (param_4 != 0) {
    *(char *)(iVar1 + 0x3b) = *(char *)(iVar1 + 0x3b) + '\x01';
  }
  puVar3 = (undefined4 *)FUN_004a0120(param_1,param_3,(int *)(param_2 + 4));
  if (param_4 != 0) {
    *(char *)(iVar1 + 0x3b) = *(char *)(iVar1 + 0x3b) + -1;
  }
  if (puVar3 == (undefined4 *)0x0) {
    if (param_4 != 0) {
      FUN_00493360(param_1,*(byte **)(param_2 + 6));
      FUN_004a9cb0(iVar1,param_2);
      return;
    }
    goto LAB_00495a20;
  }
  iVar4 = FUN_004a7ba0(iVar1,puVar3[0x10]);
  if (((*(byte *)((int)puVar3 + 0x2a) & 0x10) != 0) &&
     (iVar5 = FUN_004b9570(param_1,(int)puVar3), iVar5 != 0)) goto LAB_00495a20;
  pcVar8 = "sqlite_temp_master";
  if (iVar4 != 1) {
    pcVar8 = "sqlite_master";
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + iVar4 * 0x10);
  iVar5 = FUN_0048d4b0(param_1,9,pcVar8,0,uVar2);
  if (iVar5 != 0) goto LAB_00495a20;
  if (param_3 == 0) {
    if ((*(byte *)((int)puVar3 + 0x2a) & 0x10) == 0) {
      iVar5 = (uint)(iVar4 == 1) * 2 + 0xb;
      goto LAB_004958fe;
    }
    uVar9 = FUN_0049d250(iVar1,(int)puVar3);
    iVar5 = (int)((ulonglong)uVar9 >> 0x20);
    uVar6 = *(undefined4 *)(*(int *)((int)uVar9 + 4) + 4);
  }
  else {
    iVar5 = (uint)(iVar4 != 1) * 2 + 0xf;
LAB_004958fe:
    uVar6 = 0;
  }
  iVar5 = FUN_0048d4b0(param_1,iVar5,*puVar3,uVar6,uVar2);
  if ((iVar5 == 0) && (iVar5 = FUN_0048d4b0(param_1,9,*puVar3,0,uVar2), iVar5 == 0)) {
    iVar5 = FUN_00468380((byte *)*puVar3,(byte *)"sqlite_",7);
    if ((iVar5 == 0) &&
       (iVar5 = FUN_00468380((byte *)*puVar3,(byte *)"sqlite_stat",0xb), iVar5 != 0)) {
      FUN_004962b0(param_1,(byte *)"table %s may not be dropped");
      FUN_004a9cb0(iVar1,param_2);
      return;
    }
    if (param_3 == 0) {
      if (puVar3[3] != 0) {
        FUN_004962b0(param_1,(byte *)"use DROP VIEW to delete view %s");
        FUN_004a9cb0(iVar1,param_2);
        return;
      }
    }
    else if (puVar3[3] == 0) {
      FUN_004962b0(param_1,(byte *)"use DROP TABLE to delete table %s");
      FUN_004a9cb0(iVar1,param_2);
      return;
    }
    piVar7 = FUN_0049d4d0(param_1);
    if (piVar7 != (int *)0x0) {
      FUN_0048e5e0(param_1,1,iVar4);
      FUN_004923a0(param_1,iVar4);
      FUN_0049ac40(param_1,param_2,puVar3);
      FUN_00492a10(param_1,puVar3,iVar4,param_3);
    }
  }
LAB_00495a20:
  FUN_004a9cb0(iVar1,param_2);
  return;
}


/* FUN_00495a40 @ 00495a40  kind=lib  attributed-by=lib-island  size=376 */

void __cdecl FUN_00495a40(int *param_1,short *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 *local_c;
  
  local_c = (undefined4 *)0x0;
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x38) == '\0') {
    if ((*(char *)(iVar2 + 0x81) == '\0') && (iVar5 = FUN_0049ddb0(iVar2,param_1 + 1), iVar5 != 0))
    {
      param_1[0x11] = param_1[0x11] + 1;
      param_1[3] = iVar5;
      FUN_004a9cb0(iVar2,param_2);
      return;
    }
    pbVar3 = *(byte **)(param_2 + 6);
    pbVar4 = *(byte **)(param_2 + 8);
    uVar12 = 0;
    if (pbVar4 != (byte *)0x0) {
      bVar1 = *pbVar4;
      pbVar11 = pbVar4;
      while (bVar1 != 0) {
        pbVar11 = pbVar11 + 1;
        bVar1 = *pbVar11;
      }
      uVar12 = (int)pbVar11 - (int)pbVar4 & 0x3fffffff;
    }
    iVar5 = *(int *)(iVar2 + 0x14);
    uVar8 = 0;
    if (0 < iVar5) {
      do {
        uVar9 = uVar8;
        if ((int)uVar8 < 2) {
          uVar9 = uVar8 ^ 1;
        }
        if ((pbVar3 == (byte *)0x0) ||
           (iVar6 = FUN_004bcc60(*(byte **)(*(int *)(iVar2 + 0x10) + uVar9 * 0x10),pbVar3),
           iVar6 == 0)) {
          iVar6 = *(int *)(*(int *)(iVar2 + 0x10) + 0xc + uVar9 * 0x10);
          puVar10 = (uint *)(iVar6 + 0x28);
          if (*(int *)(iVar6 + 0x34) == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_004bd210(pbVar4,uVar12);
            uVar9 = uVar9 % *puVar10;
          }
          puVar7 = FUN_00479af0((int)puVar10,*(byte **)(param_2 + 8),uVar12,uVar9);
          if (puVar7 == (undefined4 *)0x0) {
            local_c = (undefined4 *)0x0;
          }
          else {
            local_c = (undefined4 *)puVar7[2];
            if (local_c != (undefined4 *)0x0) goto LAB_00495b65;
          }
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar5);
      if (local_c != (undefined4 *)0x0) {
LAB_00495b65:
        FUN_00495bc0(param_1,local_c);
        goto LAB_00495ba7;
      }
    }
    if (param_3 == 0) {
      FUN_004962b0(param_1,(byte *)"no such trigger: %S");
    }
    else {
      FUN_00493360(param_1,pbVar3);
    }
    *(undefined1 *)((int)param_1 + 0x11) = 1;
  }
LAB_00495ba7:
  FUN_004a9cb0(iVar2,param_2);
  return;
}


/* FUN_00495bc0 @ 00495bc0  kind=lib  attributed-by=lib-string  size=548 */

void __cdecl FUN_00495bc0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  void *extraout_EDX;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  
  iVar5 = *param_1;
  iVar12 = -1000000;
  if (param_2[5] != 0) {
    iVar12 = 0;
    if (0 < *(int *)(iVar5 + 0x14)) {
      piVar3 = (int *)(*(int *)(iVar5 + 0x10) + 0xc);
      do {
        if (*piVar3 == param_2[5]) break;
        iVar12 = iVar12 + 1;
        piVar3 = piVar3 + 4;
      } while (iVar12 < *(int *)(iVar5 + 0x14));
    }
  }
  puVar4 = (undefined4 *)FUN_004bd9c0((int)param_2);
  uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0x10) + iVar12 * 0x10);
  if (iVar12 == 1) {
    pcVar10 = "sqlite_temp_master";
    uVar8 = 0xe;
  }
  else {
    pcVar10 = "sqlite_master";
    uVar8 = 0x10;
  }
  iVar5 = FUN_0048d4b0(param_1,uVar8,*param_2,*puVar4,uVar2);
  if ((iVar5 == 0) && (iVar5 = FUN_0048d4b0(param_1,9,pcVar10,0,uVar2), iVar5 == 0)) {
    piVar3 = (int *)param_1[2];
    if (piVar3 == (int *)0x0) {
      piVar3 = FUN_004af150(*param_1);
      param_1[2] = (int)piVar3;
      if (piVar3 == (int *)0x0) {
        return;
      }
      FUN_004ae760(piVar3,0x94);
    }
    piVar11 = param_1;
    if ((int *)param_1[0x6c] != (int *)0x0) {
      piVar11 = (int *)param_1[0x6c];
    }
    FUN_00493400(param_1,iVar12);
    piVar11[0x55] = piVar11[0x55] | 1 << ((byte)iVar12 & 0x1f);
    FUN_004a0e40(param_1,iVar12);
    iVar6 = FUN_004aea10(piVar3,9,0x56a708);
    iVar5 = *piVar3;
    piVar11 = (int *)*param_2;
    iVar9 = iVar6 + 1;
    if ((piVar3[1] == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
      FUN_0047bc80(iVar5,0,piVar11);
    }
    else {
      if (iVar9 < 0) {
        iVar9 = piVar3[7] + -1;
      }
      iVar1 = piVar3[1] + iVar9 * 0x14;
      FUN_0047bc80(iVar5,(int)*(char *)(iVar1 + 1),*(int **)(piVar3[1] + 0x10 + iVar9 * 0x14));
      *(undefined4 *)(iVar1 + 0x10) = 0;
      if (piVar11 == (int *)0x0) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined1 *)(iVar1 + 1) = 0;
      }
      else {
        uVar7 = FUN_004aa9b0((char *)piVar11);
        puVar4 = FUN_00494e00(*piVar3,extraout_EDX,uVar7);
        *(undefined4 **)(iVar1 + 0x10) = puVar4;
        *(undefined1 *)(iVar1 + 1) = 0xff;
      }
    }
    iVar5 = piVar3[1];
    iVar9 = *piVar3;
    iVar6 = iVar6 + 4;
    if ((iVar5 == 0) || (*(char *)(iVar9 + 0x38) != '\0')) {
      FUN_0047bc80(iVar9,0xfffffffe,(int *)"trigger");
    }
    else {
      if (iVar6 < 0) {
        iVar6 = piVar3[7] + -1;
      }
      iVar1 = iVar5 + iVar6 * 0x14;
      FUN_0047bc80(iVar9,(int)*(char *)(iVar1 + 1),*(int **)(iVar5 + 0x10 + iVar6 * 0x14));
      *(char **)(iVar1 + 0x10) = "trigger";
      *(undefined1 *)(iVar1 + 1) = 0xfe;
    }
    FUN_00492110(param_1,iVar12);
    FUN_004ae830(piVar3,0x2d,0,0);
    FUN_004ae8f0(piVar3,0x6e,iVar12,0,0,(int *)*param_2,0);
    if (param_1[0x13] < 3) {
      param_1[0x13] = 3;
    }
  }
  return;
}


/* FUN_00495df0 @ 00495df0  kind=lib  attributed-by=lib-string  size=972 */

void __cdecl FUN_00495df0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  undefined2 extraout_var;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int *piVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  int local_88;
  int local_7c;
  undefined2 local_78 [8];
  undefined4 local_68;
  undefined4 *local_60;
  undefined4 local_44;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar12 = *param_1;
  if ((((param_3 != (int *)0x0) || (param_4 != (int *)0x0)) && (*(char *)(iVar12 + 0x38) == '\0'))
     && (puVar2 = (undefined4 *)param_1[0x7f], puVar2 != (undefined4 *)0x0)) {
    iVar5 = FUN_004a7ba0(iVar12,puVar2[0x10]);
    piVar6 = (int *)puVar2[6];
    if (piVar6 != (int *)0x0) {
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      memset(local_78,0,0x50);
      local_78[0] = 1;
      local_68 = *puVar2;
      local_44 = 0xffffffff;
      local_28 = CONCAT44(local_78,param_1);
      local_10._0_5_ = CONCAT14(4,(undefined4)local_10);
      local_7c = 0;
      local_60 = puVar2;
      if (0 < *piVar6) {
        local_88 = 0;
        do {
          uVar4 = FUN_004a69e0((int *)&local_28,*(int *)(local_88 + piVar6[2]));
          if (CONCAT22(extraout_var,uVar4) != 0) goto LAB_004961ac;
          local_7c = local_7c + 1;
          local_88 = local_88 + 0x14;
        } while (local_7c < *piVar6);
      }
    }
    if ((*(char *)(iVar12 + 0x81) == '\0') ||
       (puVar2[8] = *(undefined4 *)(iVar12 + 0x7c), *(char *)(iVar12 + 0x81) == '\0')) {
      piVar6 = (int *)param_1[2];
      if (piVar6 == (int *)0x0) {
        piVar6 = FUN_004af150(*param_1);
        param_1[2] = (int)piVar6;
        if (piVar6 == (int *)0x0) goto LAB_004961ac;
        FUN_004ae760(piVar6,0x94);
      }
      FUN_004ae7d0(piVar6,0x2d,0);
      if (param_4 == (int *)0x0) {
        pcVar8 = (char *)FUN_004a02d0(iVar12,(byte *)"CREATE %s %.*s");
      }
      else {
        FUN_004ae890(piVar6,0x28,1,param_1[0x65],iVar5);
        if (piVar6[1] != 0) {
          *(undefined1 *)(piVar6[1] + -0x11 + piVar6[7] * 0x14) = 2;
        }
        param_1[0x12] = 2;
        local_18 = CONCAT62(local_18._2_6_,8);
        local_18 = CONCAT44(1,(undefined4)local_18);
        local_10 = 0;
        FUN_004a7e30(param_1,param_4,(byte *)&local_18);
        FUN_004ae7d0(piVar6,0x2d,1);
        if (param_1[0x11] == 0) {
          puVar7 = FUN_004a6bb0(param_1,param_4);
          if (puVar7 == (undefined4 *)0x0) goto LAB_004961ac;
          *(undefined2 *)((int)puVar2 + 0x26) = *(undefined2 *)((int)puVar7 + 0x26);
          puVar2[1] = puVar7[1];
          *(undefined2 *)((int)puVar7 + 0x26) = 0;
          puVar7[1] = 0;
          FUN_00495300(iVar12,puVar7);
        }
        pcVar8 = FUN_004765c0(iVar12,puVar2);
      }
      FUN_004a0da0(param_1,(byte *)
                           "UPDATE %Q.%s SET type=\'%s\', name=%Q, tbl_name=%Q, rootpage=#%d, sql=%Q WHERE rowid=#%d"
                  );
      FUN_00494b00(iVar12,(undefined4 *)pcVar8);
      FUN_00492110(param_1,iVar5);
      if (((*(byte *)((int)puVar2 + 0x2a) & 8) != 0) &&
         (*(int *)(*(int *)(*(int *)(iVar12 + 0x10) + iVar5 * 0x10 + 0xc) + 0x48) == 0)) {
        FUN_004a0da0(param_1,(byte *)"CREATE TABLE %Q.sqlite_sequence(name,seq)");
      }
      piVar9 = (int *)FUN_004a02d0(iVar12,(byte *)"tbl_name=\'%q\'");
      FUN_004aeac0(piVar6,iVar5,piVar9);
      if (*(char *)(iVar12 + 0x81) == '\0') goto LAB_004961ac;
    }
    pbVar3 = (byte *)*puVar2;
    uVar11 = 0;
    if (pbVar3 != (byte *)0x0) {
      bVar1 = *pbVar3;
      pbVar10 = pbVar3;
      while (bVar1 != 0) {
        pbVar10 = pbVar10 + 1;
        bVar1 = *pbVar10;
      }
      uVar11 = (int)pbVar10 - (int)pbVar3 & 0x3fffffff;
    }
    uVar11 = FUN_0049d6f0((uint *)(puVar2[0x10] + 8),pbVar3,uVar11,(uint)puVar2);
    if (uVar11 != 0) {
      *(undefined1 *)(iVar12 + 0x38) = 1;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    param_1[0x7f] = 0;
    *(uint *)(iVar12 + 0x18) = *(uint *)(iVar12 + 0x18) | 2;
    if (puVar2[3] == 0) {
      if (*param_2 == 0) {
        param_2 = param_3;
      }
      iVar12 = FUN_004ad230((byte *)param_1[0x82],*param_2 - param_1[0x82]);
      puVar2[0xb] = iVar12 + 0xd;
    }
  }
LAB_004961ac:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004961c0 @ 004961c0  kind=lib  attributed-by=lib-string  size=48 */

char * __cdecl FUN_004961c0(uint param_1)

{
  char *pcVar1;
  
  if (param_1 == 0x204) {
    pcVar1 = "abort due to ROLLBACK";
  }
  else if ((0x1a < (param_1 & 0xff)) ||
          (pcVar1 = (&PTR_s_not_an_error_00569918)[param_1 & 0xff], pcVar1 == (char *)0x0)) {
    return "unknown error";
  }
  return pcVar1;
}


/* FUN_004961f0 @ 004961f0  kind=lib  attributed-by=lib-island  size=186 */

void __cdecl FUN_004961f0(int param_1,undefined4 param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xd4) == 0) {
      iVar2 = FUN_004ae630(param_1);
      *(int *)(param_1 + 0xd4) = iVar2;
      if (iVar2 == 0) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = param_2;
    if (param_3 == (byte *)0x0) {
      iVar2 = *(int *)(param_1 + 0xd4);
      if (iVar2 != 0) {
        if ((*(byte *)(iVar2 + 0x1c) & 0x40) != 0) {
          piVar1 = *(int **)(iVar2 + 0x10);
          piVar1[1] = *(int *)(*piVar1 + 0xa4);
          *(int **)(*piVar1 + 0xa4) = piVar1;
        }
        if ((*(byte *)(iVar2 + 0x1c) & 0x20) != 0) {
          FUN_004a6e20(*(undefined4 **)(iVar2 + 0x10));
        }
        *(ushort *)(iVar2 + 0x1c) = *(ushort *)(iVar2 + 0x1c) & 0xbe01 | 1;
        *(undefined1 *)(iVar2 + 0x1e) = 5;
      }
    }
    else {
      pvVar3 = (void *)FUN_004ad2f0(param_1,param_3,(double *)&stack0x00000010);
      if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
        FUN_004b79e0(*(int **)(param_1 + 0xd4),pvVar3,0xffffffff,'\x01',FUN_004a0570);
        return;
      }
    }
  }
  return;
}


/* FUN_004962b0 @ 004962b0  kind=lib  attributed-by=lib-island  size=183 */

void __cdecl FUN_004962b0(int *param_1,byte *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char local_54;
  undefined2 local_53;
  undefined1 local_50 [72];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_68 = local_50;
  iVar1 = *param_1;
  local_58 = *(undefined4 *)(iVar1 + 0x50);
  local_60 = 0;
  local_5c = 0x46;
  local_53 = 1;
  local_54 = '\0';
  local_6c = iVar1;
  local_64 = local_68;
  FUN_004ad370(&local_6c,1,param_2,(double *)&stack0x0000000c);
  puVar2 = (undefined4 *)FUN_004aa8f0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  if (*(char *)(iVar1 + 0x3b) != '\0') {
    FUN_00494b00(iVar1,puVar2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  param_1[0x11] = param_1[0x11] + 1;
  FUN_00494b00(iVar1,(undefined4 *)param_1[1]);
  param_1[1] = (int)puVar2;
  param_1[3] = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00496370 @ 00496370  kind=lib  attributed-by=lib-island  size=29 */

void __cdecl FUN_00496370(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c)) {
    *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) | 0x20;
  }
  return;
}


/* FUN_00496390 @ 00496390  kind=lib  attributed-by=lib-island  size=67 */

void __cdecl FUN_00496390(int param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *local_c;
  uint local_8;
  
  local_c = param_3;
  if (param_3 == (char *)0x0) {
    local_8 = 0;
  }
  else {
    cVar1 = *param_3;
    pcVar2 = param_3;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    local_8 = (int)pcVar2 - (int)param_3 & 0x3fffffff;
  }
  FUN_00496510(param_1,param_2,&local_c,0);
  return;
}


/* FUN_004963e0 @ 004963e0  kind=lib  attributed-by=lib-island  size=96 */

undefined4 * __cdecl FUN_004963e0(int *param_1,undefined4 *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *local_c;
  uint local_8;
  
  local_c = param_3;
  local_8 = 0;
  if (param_3 != (char *)0x0) {
    cVar1 = *param_3;
    pcVar2 = param_3;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    local_8 = (int)pcVar2 - (int)param_3 & 0x3fffffff;
  }
  if ((local_8 != 0) &&
     (puVar3 = FUN_00496510(*param_1,0x5c,&local_c,1), puVar3 != (undefined4 *)0x0)) {
    *(ushort *)((int)puVar3 + 2) = *(ushort *)((int)puVar3 + 2) | 0x100;
    puVar3[2] = param_2;
    return puVar3;
  }
  return param_2;
}


/* FUN_00496440 @ 00496440  kind=lib  attributed-by=lib-island  size=56 */

undefined4 * __cdecl FUN_00496440(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_3[1] != 0) {
    puVar1 = FUN_00496510(*param_1,0x5c,param_3,1);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = param_2;
      *(ushort *)((int)puVar1 + 2) = *(ushort *)((int)puVar1 + 2) | 0x100;
      return puVar1;
    }
  }
  return param_2;
}


/* FUN_00496480 @ 00496480  kind=lib  attributed-by=lib-island  size=133 */

char __cdecl FUN_00496480(char *param_1)

{
  char cVar1;
  
  while( true ) {
    for (; (param_1 != (char *)0x0 && ((*param_1 == '\\' || (*param_1 == '\x18'))));
        param_1 = *(char **)(param_1 + 8)) {
    }
    cVar1 = *param_1;
    if (cVar1 != 't') break;
    param_1 = (char *)**(undefined4 **)(**(int **)(param_1 + 0x10) + 8);
  }
  if (cVar1 == '%') {
    cVar1 = FUN_0048bf70(*(byte **)(param_1 + 4));
    return cVar1;
  }
  if ((((cVar1 == -0x66) || (cVar1 == -0x68)) || (cVar1 == -0x7c)) &&
     (*(int *)(param_1 + 0x28) != 0)) {
    if (-1 < *(short *)(param_1 + 0x1c)) {
      return *(char *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + 0x15 +
                      *(short *)(param_1 + 0x1c) * 0x18);
    }
    return 'd';
  }
  return param_1[1];
}


/* FUN_00496510 @ 00496510  kind=lib  attributed-by=lib-island  size=254 */

undefined4 * __cdecl FUN_00496510(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *_Dst;
  int iVar3;
  uint local_8;
  
  iVar3 = 0;
  local_8 = 0;
  if (param_3 != (undefined4 *)0x0) {
    if ((param_2 == 0x81) && ((char *)*param_3 != (char *)0x0)) {
      iVar2 = FUN_0049ca30((char *)*param_3,&local_8);
      if (iVar2 != 0) goto LAB_00496547;
    }
    iVar3 = param_3[1] + 1;
  }
LAB_00496547:
  _Dst = FUN_00494b90(param_1,iVar3 + 0x2c);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,iVar3 + 0x2c);
    *(char *)_Dst = (char)param_2;
    *(undefined2 *)((int)_Dst + 0x1e) = 0xffff;
    if (param_3 != (undefined4 *)0x0) {
      if (iVar3 == 0) {
        *(ushort *)((int)_Dst + 2) = *(ushort *)((int)_Dst + 2) | 0x400;
        _Dst[1] = local_8;
        _Dst[5] = 1;
        return _Dst;
      }
      _Dst[1] = _Dst + 0xb;
      if (param_3[1] != 0) {
        memcpy(_Dst + 0xb,(void *)*param_3,param_3[1]);
      }
      *(undefined1 *)(param_3[1] + _Dst[1]) = 0;
      if (((param_4 != 0) && (2 < iVar3)) &&
         ((cVar1 = *(char *)*param_3, cVar1 == '\'' ||
          (((cVar1 == '\"' || (cVar1 == '[')) || (cVar1 == '`')))))) {
        FUN_00495540((char *)_Dst[1]);
        if (cVar1 == '\"') {
          *(ushort *)((int)_Dst + 2) = *(ushort *)((int)_Dst + 2) | 0x40;
        }
      }
    }
    _Dst[5] = 1;
  }
  return _Dst;
}


/* FUN_00496610 @ 00496610  kind=lib  attributed-by=lib-island  size=101 */

void __cdecl FUN_00496610(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)param_2[2];
    iVar2 = 0;
    if (0 < *param_2) {
      do {
        local_8 = param_1;
        local_10 = 0;
        local_18 = 0x46a0200046c7b0;
        FUN_004bb020((undefined4 *)&local_18,*piVar1);
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 5;
      } while (iVar2 < *param_2);
    }
  }
  return;
}


/* FUN_00496680 @ 00496680  kind=lib  attributed-by=lib-island  size=65 */

void __cdecl FUN_00496680(undefined4 param_1,int param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  local_8 = param_1;
  local_10 = 0;
  local_18 = 0x46a0200046c7b0;
  FUN_004bb020((undefined4 *)&local_18,param_2);
  return;
}


/* FUN_004966d0 @ 004966d0  kind=lib  attributed-by=lib-island  size=199 */

char * __cdecl FUN_004966d0(int param_1,char *param_2,char *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  char *_Dst;
  char *pcVar5;
  
  pcVar2 = param_3;
  pcVar5 = param_2;
  if (param_2 == (char *)0x0) {
    return param_3;
  }
  if (param_3 == (char *)0x0) {
    return param_2;
  }
  pbVar1 = (byte *)(param_2 + 2);
  param_2 = (char *)0x0;
  if ((*pbVar1 & 1) == 0) {
    iVar4 = FUN_00498e90(pcVar5,(int *)&param_2);
    if ((iVar4 != 0) && (param_2 == (char *)0x0)) goto LAB_0049676d;
  }
  bVar3 = FUN_00477d20(pcVar2);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    _Dst = (char *)FUN_00494b90(param_1,0x2c);
    if (_Dst != (char *)0x0) {
      memset(_Dst,0,0x2c);
      *_Dst = 'E';
      _Dst[0x1e] = -1;
      _Dst[0x1f] = -1;
      _Dst[0x14] = '\x01';
      _Dst[0x15] = '\0';
      _Dst[0x16] = '\0';
      _Dst[0x17] = '\0';
    }
    FUN_00496a30(param_1,(int)_Dst,(undefined4 *)pcVar5,(undefined4 *)pcVar2);
    return _Dst;
  }
LAB_0049676d:
  FUN_00498790(param_1,(undefined4 *)pcVar5);
  FUN_00498790(param_1,(undefined4 *)pcVar2);
  pcVar5 = (char *)FUN_00496510(param_1,0x81,&PTR_DAT_00569820,0);
  return pcVar5;
}


/* FUN_004967a0 @ 004967a0  kind=lib  attributed-by=lib-island  size=655 */

void __cdecl FUN_004967a0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  short sVar8;
  int *piVar9;
  int *piVar10;
  uint _Size;
  bool bVar11;
  uint local_10;
  int local_c;
  int *local_8;
  
  iVar2 = *param_1;
  if (param_2 == 0) {
    return;
  }
  local_8 = *(int **)(param_2 + 4);
  if (*(char *)((int)local_8 + 1) == '\0') {
    param_1[0x73] = param_1[0x73] + 1;
    *(short *)(param_2 + 0x1c) = (short)param_1[0x73];
    goto LAB_004969ed;
  }
  piVar10 = local_8;
  cVar1 = (char)*local_8;
  while (cVar1 != '\0') {
    piVar10 = (int *)((int)piVar10 + 1);
    cVar1 = *(char *)piVar10;
  }
  _Size = (int)piVar10 - (int)local_8 & 0x3fffffff;
  if ((char)*local_8 == '?') {
    iVar6 = FUN_0048d300((byte *)((int)local_8 + 1),&local_10,_Size - 1,'\x01');
    sVar8 = (short)local_10;
    *(short *)(param_2 + 0x1c) = sVar8;
    if (((iVar6 == 0) && (-1 < local_c)) && ((0 < local_c || (local_10 != 0)))) {
      iVar6 = (int)*(uint *)(iVar2 + 0x74) >> 0x1f;
      if ((iVar6 <= local_c) && ((iVar6 < local_c || (*(uint *)(iVar2 + 0x74) < local_10))))
      goto LAB_00496844;
    }
    else {
LAB_00496844:
      FUN_004962b0(param_1,(byte *)"variable number must be between ?1 and ?%d");
      sVar8 = 0;
    }
    iVar6 = param_1[0x73] >> 0x1f;
    if ((iVar6 <= local_c) && ((iVar6 < local_c || ((uint)param_1[0x73] < local_10)))) {
      param_1[0x73] = local_10;
    }
  }
  else {
    iVar6 = 0;
    local_c = 0;
    if (0 < param_1[0x74]) {
      do {
        piVar10 = *(int **)(param_1[0x7b] + iVar6 * 4);
        if (piVar10 != (int *)0x0) {
          piVar9 = local_8;
          uVar5 = _Size - 3;
          uVar4 = _Size + 1;
          while (uVar3 = uVar5, 3 < uVar4) {
            if (*piVar10 != *piVar9) goto LAB_004968bf;
            piVar10 = piVar10 + 1;
            piVar9 = piVar9 + 1;
            uVar5 = uVar3 - 4;
            uVar4 = uVar3;
          }
          if (uVar3 != 0xfffffffc) {
LAB_004968bf:
            if (((char)*piVar10 != (char)*piVar9) ||
               ((uVar3 != 0xfffffffd &&
                ((*(char *)((int)piVar10 + 1) != *(char *)((int)piVar9 + 1) ||
                 ((uVar3 != 0xfffffffe &&
                  ((*(char *)((int)piVar10 + 2) != *(char *)((int)piVar9 + 2) ||
                   ((uVar3 != 0xffffffff &&
                    (*(char *)((int)piVar10 + 3) != *(char *)((int)piVar9 + 3)))))))))))))
            goto LAB_004968ff;
          }
          sVar8 = (short)local_c + 1;
          *(short *)(param_2 + 0x1c) = sVar8;
          bVar11 = sVar8 == 0;
          if (!bVar11) goto LAB_0049692d;
          break;
        }
LAB_004968ff:
        local_c = local_c + 1;
        iVar6 = (int)(short)local_c;
      } while (iVar6 < param_1[0x74]);
    }
    iVar6 = param_1[0x73];
    param_1[0x73] = iVar6 + 1;
    sVar8 = (short)(iVar6 + 1);
    *(short *)(param_2 + 0x1c) = sVar8;
  }
  bVar11 = sVar8 == 0;
LAB_0049692d:
  if (!bVar11 && -1 < sVar8) {
    iVar6 = (int)sVar8;
    if (param_1[0x74] < iVar6) {
      puVar7 = FUN_00494cf0(iVar2,(undefined4 *)param_1[0x7b],iVar6 * 4);
      if (puVar7 == (undefined4 *)0x0) {
        return;
      }
      param_1[0x7b] = (int)puVar7;
      memset(puVar7 + param_1[0x74],0,(iVar6 - param_1[0x74]) * 4);
      param_1[0x74] = iVar6;
    }
    if (((char)*local_8 != '?') || (*(int *)(param_1[0x7b] + -4 + iVar6 * 4) == 0)) {
      FUN_00494b00(iVar2,*(undefined4 **)(param_1[0x7b] + -4 + iVar6 * 4));
      puVar7 = FUN_00494b90(iVar2,_Size + 1);
      if (puVar7 != (undefined4 *)0x0) {
        memcpy(puVar7,local_8,_Size);
        *(undefined1 *)((int)puVar7 + _Size) = 0;
      }
      *(undefined4 **)(param_1[0x7b] + -4 + iVar6 * 4) = puVar7;
    }
  }
LAB_004969ed:
  if ((param_1[0x11] == 0) && (*(int *)(iVar2 + 0x74) < param_1[0x73])) {
    FUN_004962b0(param_1,(byte *)"too many SQL variables");
  }
  return;
}


/* FUN_00496a30 @ 00496a30  kind=lib  attributed-by=lib-island  size=95 */

void __cdecl FUN_00496a30(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 == 0) {
    FUN_00498790(param_1,param_3);
    FUN_00498790(param_1,param_4);
    return;
  }
  if (param_4 != (undefined4 *)0x0) {
    *(undefined4 **)(param_2 + 0xc) = param_4;
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | *(ushort *)((int)param_4 + 2) & 0x100;
  }
  if (param_3 != (undefined4 *)0x0) {
    *(undefined4 **)(param_2 + 8) = param_3;
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | *(ushort *)((int)param_3 + 2) & 0x100;
  }
  FUN_004790b0(param_2);
  return;
}


/* FUN_00496a90 @ 00496a90  kind=lib  attributed-by=lib-island  size=526 */

void __cdecl FUN_00496a90(int param_1)

{
  if (*(int *)(param_1 + 0x74) != 0) {
    if (*(char *)(param_1 + 0x6c) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x74);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x6c) = 0;
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    if (*(char *)(param_1 + 0x84) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x8c);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x84) = 0;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    if (*(char *)(param_1 + 0x9c) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0xa4);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x9c) = 0;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (*(char *)(param_1 + 0xb4) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0xbc);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0xb4) = 0;
    }
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    if (*(char *)(param_1 + 0xcc) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0xd4);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0xcc) = 0;
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    if (*(char *)(param_1 + 0xe4) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0xec);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0xe4) = 0;
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    if (*(char *)(param_1 + 0xfc) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x104);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0xfc) = 0;
    }
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    if (*(char *)(param_1 + 0x114) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x11c);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x114) = 0;
    }
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  if (*(int *)(param_1 + 0x134) != 0) {
    if (*(char *)(param_1 + 300) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x134);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 300) = 0;
    }
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    if (*(char *)(param_1 + 0x144) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x14c);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x144) = 0;
    }
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  return;
}


/* FUN_00496ca0 @ 00496ca0  kind=lib  attributed-by=lib-island  size=155 */

void __cdecl FUN_00496ca0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x74) == param_2) {
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0x8c) == param_2) {
    *(undefined1 *)(param_1 + 0x84) = 0;
  }
  if (*(int *)(param_1 + 0xa4) == param_2) {
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  if (*(int *)(param_1 + 0xbc) == param_2) {
    *(undefined1 *)(param_1 + 0xb4) = 0;
  }
  if (*(int *)(param_1 + 0xd4) == param_2) {
    *(undefined1 *)(param_1 + 0xcc) = 0;
  }
  if (*(int *)(param_1 + 0xec) == param_2) {
    *(undefined1 *)(param_1 + 0xe4) = 0;
  }
  if (*(int *)(param_1 + 0x104) == param_2) {
    *(undefined1 *)(param_1 + 0xfc) = 0;
  }
  if (*(int *)(param_1 + 0x11c) == param_2) {
    *(undefined1 *)(param_1 + 0x114) = 0;
  }
  if (*(int *)(param_1 + 0x134) == param_2) {
    *(undefined1 *)(param_1 + 300) = 0;
  }
  if (*(int *)(param_1 + 0x14c) == param_2) {
    *(undefined1 *)(param_1 + 0x144) = 0;
  }
  return;
}


/* FUN_00496d40 @ 00496d40  kind=lib  attributed-by=lib-island  size=80 */

void __cdecl FUN_00496d40(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - param_2;
  piVar1 = (int *)(param_1 + 0x74);
  iVar2 = 10;
  do {
    if ((*piVar1 != 0) && (*(int *)(param_1 + 0x5c) < piVar1[-1])) {
      if ((char)piVar1[-2] != '\0') {
        if (*(byte *)(param_1 + 0x13) < 8) {
          *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *piVar1;
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        }
        *(undefined1 *)(piVar1 + -2) = 0;
      }
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* FUN_00496d90 @ 00496d90  kind=lib  attributed-by=lib-island  size=90 */

void __cdecl FUN_00496d90(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x74);
  iVar3 = 10;
  do {
    iVar1 = *piVar2;
    if ((param_2 <= iVar1) && (iVar1 <= param_3 + -1 + param_2)) {
      if ((char)piVar2[-2] != '\0') {
        if (*(byte *)(param_1 + 0x13) < 8) {
          *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = iVar1;
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        }
        *(undefined1 *)(piVar2 + -2) = 0;
      }
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


/* FUN_00496df0 @ 00496df0  kind=lib  attributed-by=lib-island  size=26 */

void __cdecl FUN_00496df0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(byte *)(*param_1 + 0x34) & 2) != 0) {
    return;
  }
  iVar1 = 0;
  piVar2 = param_1 + 0x19;
  do {
    if (piVar2[4] == 0) {
      piVar2[3] = param_1[0x17];
      *piVar2 = param_2;
      piVar2[1] = param_3;
      piVar2[4] = param_4;
      *(undefined1 *)(piVar2 + 2) = 0;
      piVar2[5] = param_1[0x18];
      param_1[0x18] = param_1[0x18] + 1;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 6;
  } while (iVar1 < 10);
  iVar3 = -1;
  iVar1 = 0x7fffffff;
  if (param_1[0x1e] < 0x7fffffff) {
    iVar3 = 0;
    iVar1 = param_1[0x1e];
  }
  if (param_1[0x24] < iVar1) {
    iVar3 = 1;
    iVar1 = param_1[0x24];
  }
  if (param_1[0x2a] < iVar1) {
    iVar3 = 2;
    iVar1 = param_1[0x2a];
  }
  if (param_1[0x30] < iVar1) {
    iVar3 = 3;
    iVar1 = param_1[0x30];
  }
  if (param_1[0x36] < iVar1) {
    iVar3 = 4;
    iVar1 = param_1[0x36];
  }
  if (param_1[0x3c] < iVar1) {
    iVar3 = 5;
    iVar1 = param_1[0x3c];
  }
  if (param_1[0x42] < iVar1) {
    iVar3 = 6;
    iVar1 = param_1[0x42];
  }
  if (param_1[0x48] < iVar1) {
    iVar3 = 7;
    iVar1 = param_1[0x48];
  }
  if (param_1[0x4e] < iVar1) {
    iVar3 = 8;
    iVar1 = param_1[0x4e];
  }
  if (param_1[0x54] < iVar1) {
    iVar3 = 9;
  }
  else if (iVar3 < 0) {
    return;
  }
  param_1[iVar3 * 6 + 0x1c] = param_1[0x17];
  param_1[iVar3 * 6 + 0x19] = param_2;
  param_1[iVar3 * 6 + 0x1a] = param_3;
  param_1[iVar3 * 6 + 0x1d] = param_4;
  *(undefined1 *)(param_1 + iVar3 * 6 + 0x1b) = 0;
  param_1[iVar3 * 6 + 0x1e] = param_1[0x18];
  param_1[0x18] = param_1[0x18] + 1;
  return;
}


/* FUN_00496f30 @ 00496f30  kind=lib  attributed-by=lib-island  size=92 */

int __cdecl FUN_00496f30(int *param_1,byte *param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != (byte *)0x0) && (*param_2 == 0x84)) {
    FUN_004ae830((int *)param_1[2],0xe,*(undefined4 *)(param_2 + 0x18),param_3);
    return param_3;
  }
  iVar1 = FUN_00497780(param_1,param_2,param_3);
  if ((iVar1 != param_3) && ((int *)param_1[2] != (int *)0x0)) {
    FUN_004ae830((int *)param_1[2],0xf,iVar1,param_3);
  }
  return param_3;
}


/* FUN_00496f90 @ 00496f90  kind=lib  attributed-by=lib-island  size=122 */

int __cdecl FUN_00496f90(int *param_1,byte *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  
  piVar1 = (int *)param_1[2];
  if ((param_2 == (byte *)0x0) || (*param_2 != 0x84)) {
    iVar2 = FUN_00497780(param_1,param_2,param_3);
    if ((iVar2 == param_3) || (piVar3 = (int *)param_1[2], piVar3 == (int *)0x0)) goto LAB_00496fde;
    uVar4 = 0xf;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x18);
    uVar4 = 0xe;
    piVar3 = piVar1;
  }
  FUN_004ae830(piVar3,uVar4,iVar2,param_3);
LAB_00496fde:
  if (*param_2 != 0x84) {
    param_1[0x13] = param_1[0x13] + 1;
    iVar2 = param_1[0x13];
    FUN_004ae830(piVar1,0xe,param_3,iVar2);
    *(int *)(param_2 + 0x18) = iVar2;
    param_2[0x23] = *param_2;
    *param_2 = 0x84;
  }
  return param_3;
}


/* FUN_00497010 @ 00497010  kind=lib  attributed-by=lib-island  size=170 */

int __cdecl FUN_00497010(int param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  piVar2 = (int *)*param_2;
  puVar7 = (undefined4 *)param_2[2];
  param_2 = piVar2;
  if (0 < (int)piVar2) {
    do {
      iVar5 = FUN_00497780((int *)param_1,(byte *)*puVar7,param_3);
      if (iVar5 != param_3) {
        piVar3 = *(int **)(param_1 + 8);
        iVar4 = piVar3[7];
        if ((iVar4 < piVar3[8]) || (iVar6 = FUN_0047de10(piVar3), iVar6 == 0)) {
          piVar3[7] = piVar3[7] + 1;
          iVar6 = piVar3[1];
          *(undefined1 *)(iVar6 + 3 + iVar4 * 0x14) = 0;
          pcVar1 = (char *)(iVar6 + iVar4 * 0x14);
          *pcVar1 = (param_4 == 0) + '\x0e';
          *(int *)(pcVar1 + 4) = iVar5;
          *(int *)(pcVar1 + 8) = param_3;
          pcVar1[0xc] = '\0';
          pcVar1[0xd] = '\0';
          pcVar1[0xe] = '\0';
          pcVar1[0xf] = '\0';
          pcVar1[0x10] = '\0';
          pcVar1[0x11] = '\0';
          pcVar1[0x12] = '\0';
          pcVar1[0x13] = '\0';
          pcVar1[1] = '\0';
        }
      }
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 5;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
    return (int)piVar2;
  }
  return (int)piVar2;
}


/* FUN_004970c0 @ 004970c0  kind=lib  attributed-by=lib-island  size=166 */

int __cdecl FUN_004970c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,char param_6)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int extraout_EDX;
  
  piVar1 = (int *)param_1[2];
  iVar2 = 0;
  piVar3 = param_1 + 0x19;
  while (((piVar3[4] < 1 || (*piVar3 != param_4)) || (piVar3[1] != param_3))) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 6;
    if (9 < iVar2) {
      FUN_00497170(piVar1,param_2,param_4,param_3,param_5);
      if (param_6 == '\0') {
        FUN_00496df0(param_1,param_4,param_3,param_5);
      }
      else if (piVar1[1] != 0) {
        *(char *)(piVar1[1] + -0x11 + piVar1[7] * 0x14) = param_6;
        return param_5;
      }
      return param_5;
    }
  }
  piVar3[5] = param_1[0x18];
  param_1[0x18] = param_1[0x18] + 1;
  FUN_00496ca0((int)param_1,piVar3[4]);
  return *(int *)(extraout_EDX + 0x10);
}


/* FUN_00497170 @ 00497170  kind=lib  attributed-by=lib-island  size=165 */

void __cdecl FUN_00497170(int *param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  if ((param_4 < 0) || (param_4 == (short)param_2[9])) {
    iVar1 = param_1[7];
    if ((iVar1 < param_1[8]) || (iVar3 = FUN_0047de10(param_1), iVar3 == 0)) {
      param_1[7] = param_1[7] + 1;
      iVar3 = param_1[1];
      *(undefined2 *)(iVar3 + iVar1 * 0x14) = 0x41;
      iVar3 = iVar3 + iVar1 * 0x14;
      *(undefined4 *)(iVar3 + 4) = param_3;
      *(undefined1 *)(iVar3 + 3) = 0;
      *(int *)(iVar3 + 8) = param_5;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
  }
  else {
    uVar2 = 0x1d;
    if ((*(byte *)((int)param_2 + 0x2a) & 0x10) != 0) {
      uVar2 = 0x89;
    }
    FUN_004ae890(param_1,uVar2,param_3,param_4,param_5);
  }
  if (-1 < param_4) {
    FUN_00493630(param_1,param_2,param_4,param_5);
  }
  return;
}


/* FUN_00497220 @ 00497220  kind=lib  attributed-by=lib-island  size=918 */

void __cdecl FUN_00497220(int *param_1,char *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  byte bVar11;
  int iVar12;
  int *piVar13;
  undefined1 uVar14;
  int local_c;
  char local_5;
  
  piVar10 = (int *)param_1[2];
  local_c = 0;
  iVar3 = FUN_004997b0(param_1,param_2,&local_c);
  local_5 = FUN_00475250((int)param_2);
  param_1[0x17] = param_1[0x17] + 1;
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    iVar12 = param_1[0x13];
  }
  else {
    bVar11 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar11;
    iVar12 = param_1[bVar11 + 7];
  }
  pbVar1 = *(byte **)(param_2 + 8);
  if ((pbVar1 == (byte *)0x0) || (*pbVar1 != 0x84)) {
    iVar5 = FUN_00497780(param_1,pbVar1,iVar12);
    if ((iVar5 == iVar12) || (piVar13 = (int *)param_1[2], piVar13 == (int *)0x0))
    goto LAB_004972b1;
    uVar14 = 0xf;
  }
  else {
    iVar5 = *(int *)(pbVar1 + 0x18);
    uVar14 = 0xe;
    piVar13 = (int *)param_1[2];
  }
  FUN_004ae830(piVar13,uVar14,iVar5,iVar12);
LAB_004972b1:
  if (param_4 == param_3) {
    FUN_004ae830(piVar10,0x49,iVar12,param_4);
  }
  else {
    uVar7 = FUN_004ae7d0(piVar10,0x4a,iVar12);
    FUN_004ae830(piVar10,0x48,*(undefined4 *)(param_2 + 0x18),param_3);
    iVar5 = piVar10[7];
    if ((iVar5 < piVar10[8]) || (iVar4 = FUN_0047de10(piVar10), iVar4 == 0)) {
      piVar10[7] = piVar10[7] + 1;
      iVar4 = piVar10[1];
      *(undefined2 *)(iVar4 + iVar5 * 0x14) = 1;
      *(undefined1 *)(iVar4 + 3 + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 4 + iVar5 * 0x14) = 0;
      *(int *)(iVar4 + 8 + iVar5 * 0x14) = param_4;
      *(undefined4 *)(iVar4 + 0xc + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x10 + iVar5 * 0x14) = 0;
    }
    if ((-1 < (int)uVar7) && (uVar7 < (uint)piVar10[7])) {
      *(int *)(piVar10[1] + 8 + uVar7 * 0x14) = piVar10[7];
    }
  }
  if (iVar3 == 1) {
    FUN_004ae830(piVar10,0x15,iVar12,param_3);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    iVar3 = piVar10[7];
    if ((iVar3 < piVar10[8]) || (iVar5 = FUN_0047de10(piVar10), iVar5 == 0)) {
      piVar10[7] = piVar10[7] + 1;
      iVar5 = piVar10[1];
      *(undefined4 *)(iVar5 + 4 + iVar3 * 0x14) = uVar2;
      *(undefined2 *)(iVar5 + iVar3 * 0x14) = 0x36;
      *(undefined1 *)(iVar5 + 3 + iVar3 * 0x14) = 0;
      *(int *)(iVar5 + 8 + iVar3 * 0x14) = param_3;
      *(int *)(iVar5 + 0xc + iVar3 * 0x14) = iVar12;
      *(undefined4 *)(iVar5 + 0x10 + iVar3 * 0x14) = 0;
    }
  }
  else {
    iVar3 = piVar10[7];
    if ((iVar3 < piVar10[8]) || (iVar5 = FUN_0047de10(piVar10), iVar5 == 0)) {
      iVar5 = piVar10[1];
      piVar10[7] = piVar10[7] + 1;
      *(undefined2 *)(iVar5 + iVar3 * 0x14) = 0x1e;
      *(undefined1 *)(iVar5 + 3 + iVar3 * 0x14) = 0;
      *(int *)(iVar5 + 4 + iVar3 * 0x14) = iVar12;
      *(undefined4 *)(iVar5 + 8 + iVar3 * 0x14) = 1;
      *(undefined4 *)(iVar5 + 0xc + iVar3 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x10 + iVar3 * 0x14) = 0;
    }
    else {
      iVar3 = 1;
    }
    iVar5 = *piVar10;
    if ((piVar10[1] == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
      FUN_0047bc80(iVar5,1,(int *)&local_5);
    }
    else {
      if (iVar3 < 0) {
        iVar3 = piVar10[7] + -1;
      }
      iVar4 = piVar10[1] + iVar3 * 0x14;
      FUN_0047bc80(iVar5,(int)*(char *)(iVar4 + 1),*(int **)(piVar10[1] + 0x10 + iVar3 * 0x14));
      *(undefined4 *)(iVar4 + 0x10) = 0;
      puVar6 = FUN_00494e00(*piVar10,&local_5,1);
      *(undefined4 **)(iVar4 + 0x10) = puVar6;
      *(undefined1 *)(iVar4 + 1) = 0xff;
    }
    if ((local_c == 0) || (param_3 == param_4)) {
      FUN_004ae960(piVar10,0x33,*(undefined4 *)(param_2 + 0x18),param_3,iVar12,(int *)0x1);
    }
    else {
      uVar7 = FUN_004ae960(piVar10,0x34,*(undefined4 *)(param_2 + 0x18),0,iVar12,(int *)0x1);
      uVar8 = FUN_004ae7d0(piVar10,0x4a,local_c);
      uVar9 = FUN_004ae960(piVar10,0x34,*(undefined4 *)(param_2 + 0x18),0,local_c,(int *)0x1);
      FUN_004ae830(piVar10,7,0xffffffff,local_c);
      if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar10[7])) {
        *(int *)(piVar10[1] + 8 + uVar9 * 0x14) = piVar10[7];
      }
      FUN_004ae830(piVar10,0x14,local_c,1);
      if ((-1 < (int)uVar8) && (uVar8 < (uint)piVar10[7])) {
        *(int *)(piVar10[1] + 8 + uVar8 * 0x14) = piVar10[7];
      }
      FUN_004ae830(piVar10,0x1b,local_c,param_4);
      FUN_004ae830(piVar10,1,0,param_3);
      if ((-1 < (int)uVar7) && (uVar7 < (uint)piVar10[7])) {
        *(int *)(piVar10[1] + 8 + uVar7 * 0x14) = piVar10[7];
      }
    }
  }
  if ((iVar12 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar3 = 0;
    piVar10 = param_1 + 0x19;
    while (piVar10[4] != iVar12) {
      iVar3 = iVar3 + 1;
      piVar10 = piVar10 + 6;
      if (9 < iVar3) {
        param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar12;
        *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        FUN_00496d40((int)param_1,1);
        return;
      }
    }
    *(undefined1 *)(piVar10 + 2) = 1;
  }
  FUN_00496d40((int)param_1,1);
  return;
}


/* FUN_00497600 @ 00497600  kind=lib  attributed-by=lib-island  size=371 */

void __cdecl FUN_00497600(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar3 = piVar2[7];
  if ((iVar3 < piVar2[8]) || (iVar4 = FUN_0047de10(piVar2), iVar4 == 0)) {
    piVar2[7] = piVar2[7] + 1;
    puVar1 = (undefined2 *)(piVar2[1] + iVar3 * 0x14);
    *puVar1 = 0xd;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(int *)(puVar1 + 2) = param_2;
    *(int *)(puVar1 + 4) = param_3;
    *(int *)(puVar1 + 6) = param_4 + -1;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x74);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0x74) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0x8c);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0x8c) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0xa4);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0xa4) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0xbc);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0xbc) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0xd4);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0xd4) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0xec);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0xec) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0x104);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0x104) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0x11c);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0x11c) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0x134);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0x134) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0x14c);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0x14c) = (iVar3 - param_2) + param_3;
  }
  return;
}


/* FUN_00497780 @ 00497780  kind=lib  attributed-by=lib-string  size=3065 */

int __cdecl FUN_00497780(int *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int extraout_EDX;
  byte *extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int *piVar10;
  undefined1 uVar11;
  char *pcVar12;
  undefined1 local_88 [8];
  undefined8 *local_80;
  int *local_7c;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  int *local_28;
  char *local_24;
  int *local_20;
  int local_1c;
  char *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  iVar6 = param_3;
  piVar4 = param_1;
  local_2c = *param_1;
  piVar9 = (int *)param_1[2];
  local_8 = param_3;
  local_c = 0;
  local_10 = (int *)0x0;
  if (piVar9 == (int *)0x0) {
    return 0;
  }
  local_14 = (int *)0x62;
  if (param_2 != (byte *)0x0) {
    local_14 = (int *)(uint)*param_2;
  }
  local_28 = piVar9;
  switch(local_14) {
  case (int *)0x13:
  case (int *)0x5d:
    iVar6 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 8),&local_c);
    local_8 = param_3;
    FUN_004ae830(piVar9,(char)local_14,iVar6,param_3);
    break;
  case (int *)0x14:
  case (int *)0x74:
    iVar6 = FUN_00492f00(param_1,(char *)param_2,0,0);
    return iVar6;
  default:
    puVar7 = (undefined4 *)(*(int **)(param_2 + 0x10))[2];
    local_18 = (char *)**(int **)(param_2 + 0x10);
    param_1 = (int *)0x0;
    local_28 = (int *)FUN_004b6b80(piVar9);
    local_20 = *(int **)(param_2 + 8);
    if (local_20 != (int *)0x0) {
      local_5c = *(undefined8 *)local_20;
      local_54 = *(undefined8 *)((int)local_20 + 8);
      local_4c = *(undefined8 *)((int)local_20 + 0x10);
      local_44 = *(undefined8 *)((int)local_20 + 0x18);
      local_3c = *(undefined8 *)((int)local_20 + 0x20);
      local_34 = *(undefined4 *)((int)local_20 + 0x28);
      iVar6 = FUN_00498470((int)piVar4,local_20,&local_c);
      local_44 = CONCAT44(local_44._4_4_,iVar6);
      local_80 = &local_5c;
      param_1 = (int *)local_88;
      local_5c = CONCAT71(local_5c._1_7_,0x84);
      local_88[0] = 0x4c;
    }
    if (0 < (int)local_18) {
      local_18 = (char *)(((int)local_18 - 1U >> 1) + 1);
      do {
        piVar4[0x17] = piVar4[0x17] + 1;
        piVar10 = (int *)*puVar7;
        if (local_20 != (int *)0x0) {
          piVar10 = param_1;
          local_7c = (int *)*puVar7;
        }
        param_1 = piVar10;
        local_2c = FUN_004b6b80(piVar9);
        FUN_004988a0(piVar4,(char *)param_1,local_2c,8);
        pbVar1 = (byte *)puVar7[5];
        if ((pbVar1 == (byte *)0x0) || (*pbVar1 != 0x84)) {
          iVar6 = FUN_00497780(piVar4,pbVar1,param_3);
          if ((iVar6 != param_3) && (piVar10 = (int *)piVar4[2], piVar10 != (int *)0x0)) {
            uVar11 = 0xf;
            goto LAB_0049822e;
          }
        }
        else {
          iVar6 = *(int *)(pbVar1 + 0x18);
          uVar11 = 0xe;
          piVar10 = (int *)piVar4[2];
LAB_0049822e:
          FUN_004ae830(piVar10,uVar11,iVar6,param_3);
        }
        local_1c = piVar9[7];
        if ((local_1c < piVar9[8]) || (iVar6 = FUN_0047de10(piVar9), iVar6 == 0)) {
          piVar9[7] = piVar9[7] + 1;
          iVar6 = piVar9[1];
          *(undefined2 *)(iVar6 + local_1c * 0x14) = 1;
          *(undefined1 *)(iVar6 + 3 + local_1c * 0x14) = 0;
          *(undefined4 *)(iVar6 + 4 + local_1c * 0x14) = 0;
          *(int **)(iVar6 + 8 + local_1c * 0x14) = local_28;
          *(undefined4 *)(iVar6 + 0xc + local_1c * 0x14) = 0;
          *(undefined4 *)(iVar6 + 0x10 + local_1c * 0x14) = 0;
        }
        FUN_00496d40((int)piVar4,1);
        if (piVar9[10] != 0) {
          *(int *)(piVar9[10] - (local_2c * 4 + 4)) = piVar9[7];
        }
        puVar7 = puVar7 + 10;
        local_18 = (char *)((int)local_18 + -1);
      } while (local_18 != (char *)0x0);
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      iVar6 = piVar9[7];
      if ((iVar6 < piVar9[8]) || (iVar8 = FUN_0047de10(piVar9), iVar8 == 0)) {
        iVar8 = piVar9[1];
        piVar9[7] = piVar9[7] + 1;
        *(undefined2 *)(iVar8 + iVar6 * 0x14) = 10;
        *(undefined1 *)(iVar8 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar8 + 4 + iVar6 * 0x14) = 0;
        *(int *)(iVar8 + 8 + iVar6 * 0x14) = param_3;
        *(undefined4 *)(iVar8 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar8 + 0x10 + iVar6 * 0x14) = 0;
      }
      goto LAB_00498354;
    }
    piVar4[0x17] = piVar4[0x17] + 1;
    pbVar1 = *(byte **)(param_2 + 0xc);
    if ((pbVar1 == (byte *)0x0) || (*pbVar1 != 0x84)) {
      iVar6 = FUN_00497780(piVar4,pbVar1,param_3);
      if ((iVar6 != param_3) && (piVar10 = (int *)piVar4[2], piVar10 != (int *)0x0)) {
        uVar11 = 0xf;
        goto LAB_004982fa;
      }
    }
    else {
      iVar6 = *(int *)(pbVar1 + 0x18);
      uVar11 = 0xe;
      piVar10 = (int *)piVar4[2];
LAB_004982fa:
      FUN_004ae830(piVar10,uVar11,iVar6,param_3);
    }
    FUN_00496d40((int)piVar4,1);
LAB_00498354:
    if (piVar9[10] == 0) {
      return param_3;
    }
    *(int *)(piVar9[10] - ((int)local_28 * 4 + 4)) = piVar9[7];
    return param_3;
  case (int *)0x18:
  case (int *)0x5c:
  case (int *)0x9d:
    iVar6 = FUN_00497780(param_1,*(byte **)(param_2 + 8),param_3);
    return iVar6;
  case (int *)0x25:
    local_8 = FUN_00497780(param_1,*(byte **)(param_2 + 8),param_3);
    cVar2 = FUN_0048bf70(*(byte **)(param_2 + 4));
    if (local_8 != param_3) {
      FUN_004ae830(piVar9,0xf,local_8,param_3);
      local_8 = param_3;
    }
    FUN_004ae7d0(piVar9,cVar2 + ',',local_8);
    iVar6 = local_8;
    FUN_00496d90((int)param_1,local_8,1);
    return iVar6;
  case (int *)0x38:
    if (param_1[0x6d] == 0) {
      FUN_004962b0(param_1,(byte *)"RAISE() may only be used within a trigger-program");
      return 0;
    }
    if (param_2[1] == 2) {
      if ((int *)param_1[0x6c] != (int *)0x0) {
        piVar4 = (int *)param_1[0x6c];
      }
      *(undefined1 *)(piVar4 + 6) = 1;
    }
    if (param_2[1] != 4) {
      FUN_0049d510(param_1,(int)(char)param_2[1],*(int **)(param_2 + 4),0);
      return param_3;
    }
    FUN_004ae8f0(piVar9,6,0,4,0,*(int **)(param_2 + 4),0);
    return param_3;
  case (int *)0x3c:
    iVar6 = *(int *)(param_2 + 0x28);
    FUN_004ae830(piVar9,0x74,
                 *(short *)(param_2 + 0x1c) + 1 +
                 (*(short *)(iVar6 + 0x26) + 1) * *(int *)(param_2 + 0x18),param_3);
    if (*(short *)(param_2 + 0x1c) < 0) {
      return param_3;
    }
    if (*(char *)(*(int *)(iVar6 + 4) + 0x15 + *(short *)(param_2 + 0x1c) * 0x18) != 'e') {
      return param_3;
    }
    FUN_004ae7d0(piVar9,0x16,param_3);
    return param_3;
  case (int *)0x44:
  case (int *)0x45:
  case (int *)0x52:
  case (int *)0x53:
  case (int *)0x54:
  case (int *)0x55:
  case (int *)0x56:
  case (int *)0x57:
  case (int *)0x58:
  case (int *)0x59:
  case (int *)0x5a:
  case (int *)0x5b:
    iVar6 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 8),&local_c);
    iVar8 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 0xc),(int *)&local_10);
    FUN_004ae890(piVar9,(char)local_14,iVar8,iVar6,param_3);
    break;
  case (int *)0x46:
  case (int *)0x92:
    iVar6 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 8),&local_c);
    iVar8 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 0xc),(int *)&local_10);
    FUN_004733e0(param_1,*(char **)(param_2 + 8),*(char **)(param_2 + 0xc),
                 (local_14 == (int *)0x46) + 'K',iVar6,iVar8,param_3,0x90);
    break;
  case (int *)0x47:
    local_18 = *(char **)(param_2 + 8);
    puVar7 = *(undefined4 **)(*(int *)(param_2 + 0x10) + 8);
    pcVar12 = (char *)*puVar7;
    iVar8 = FUN_00498470((int)param_1,local_18,&local_c);
    FUN_00498470((int)param_1,pcVar12,(int *)&local_10);
    local_20 = (int *)FUN_0049cb40((int)param_1);
    local_1c = FUN_0049cb40((int)param_1);
    FUN_004733e0(param_1,local_18,pcVar12,0x50,iVar8,extraout_EDX_01,local_20,0x10);
    pcVar12 = (char *)puVar7[5];
    FUN_004a68f0((int)param_1,(int)local_10);
    iVar5 = FUN_00498470((int)param_1,pcVar12,(int *)&local_10);
    iVar6 = local_1c;
    FUN_004733e0(param_1,local_18,pcVar12,0x4e,iVar8,iVar5,local_1c,0x10);
    piVar9 = local_20;
    FUN_004ae890(local_28,0x45,local_20,iVar6,param_3);
    FUN_004a68f0((int)param_1,(int)piVar9);
    FUN_004a68f0((int)param_1,iVar6);
    break;
  case (int *)0x48:
    iVar6 = FUN_004b6b80(piVar9);
    iVar8 = FUN_004b6b80(piVar9);
    FUN_004ae830(local_28,10,0,param_3);
    FUN_00497220(param_1,(char *)param_2,iVar6,iVar8);
    piVar9 = local_28;
    FUN_004ae830(local_28,7,1,param_3);
    FUN_004b87b0((int)piVar9,iVar6);
    FUN_004ae830(piVar9,0x14,param_3,0);
    FUN_004b87b0((int)piVar9,iVar8);
    return local_8;
  case (int *)0x49:
  case (int *)0x4a:
    FUN_004ae830(piVar9,7,1,param_3);
    iVar6 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 8),&local_c);
    uVar3 = FUN_004ae7d0(piVar9,(char)local_14,iVar6);
    FUN_004ae830(piVar9,0x14,param_3,0xffffffff);
    FUN_004b6720((int)piVar9,uVar3);
    break;
  case (int *)0x4b:
  case (int *)0x4c:
  case (int *)0x4d:
  case (int *)0x4e:
  case (int *)0x4f:
  case (int *)0x50:
    iVar6 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 8),&local_c);
    iVar8 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 0xc),(int *)&local_10);
    FUN_004733e0(param_1,*(char **)(param_2 + 8),*(char **)(param_2 + 0xc),(char)local_14,iVar6,
                 iVar8,param_3,0x10);
    break;
  case (int *)0x5e:
    FUN_004ae8f0(piVar9,0x5e,0,param_3,0,*(int **)(param_2 + 4),0);
    return param_3;
  case (int *)0x62:
    FUN_004ae830(piVar9,10,0,param_3);
    return param_3;
  case (int *)0x81:
    FUN_00473790((int)param_1,(int)param_2,0,param_3);
    return param_3;
  case (int *)0x82:
    FUN_00474a90(piVar9,*(byte **)(param_2 + 4),0,param_3);
    return param_3;
  case (int *)0x83:
    uVar3 = FUN_004aa9b0((char *)(*(int *)(param_2 + 4) + 2));
    piVar4 = FUN_0049d800(*piVar9,extraout_EDX,uVar3 - 1);
    FUN_004ae8f0(piVar9,0xb,(int)(uVar3 - 1) / 2,param_3,0,piVar4,0xffffffff);
    return local_8;
  case (int *)0x84:
    return *(int *)(param_2 + 0x18);
  case (int *)0x85:
    FUN_004ae830(piVar9,0xc,(int)*(short *)(param_2 + 0x1c),param_3);
    if (*(char *)(*(int *)(param_2 + 4) + 1) == '\0') {
      return param_3;
    }
    iVar6 = piVar9[1];
    piVar4 = *(int **)(param_1[0x7b] + -4 + *(short *)(param_2 + 0x1c) * 4);
    iVar8 = *piVar9;
    if ((iVar6 != 0) && (*(char *)(iVar8 + 0x38) == '\0')) {
      iVar5 = iVar6 + (piVar9[7] + -1) * 0x14;
      FUN_0047bc80(iVar8,(int)*(char *)(iVar5 + 1),*(int **)(iVar6 + 0x10 + (piVar9[7] + -1) * 0x14)
                  );
      *(undefined4 *)(iVar5 + 0x10) = 0;
      if (piVar4 != (int *)0x0) {
        *(int **)(iVar5 + 0x10) = piVar4;
        *(undefined1 *)(iVar5 + 1) = 0xfe;
        return local_8;
      }
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(undefined1 *)(iVar5 + 1) = 0;
      return local_8;
    }
    FUN_0047bc80(iVar8,0xfffffffe,piVar4);
    return param_3;
  case (int *)0x97:
  case (int *)0x9b:
    local_18 = (char *)0x0;
    local_20 = (int *)0x0;
    local_1c = CONCAT31(local_1c._1_3_,
                        *(undefined1 *)(*(int *)(*(int *)(local_2c + 0x10) + 0xc) + 0x4d));
    if ((*(ushort *)(param_2 + 2) & 0x4000) == 0) {
      local_10 = *(int **)(param_2 + 0x10);
      if (local_10 == (int *)0x0) goto LAB_00497c20;
      local_c = *local_10;
    }
    else {
      local_10 = (int *)0x0;
LAB_00497c20:
      local_c = 0;
    }
    local_24 = *(char **)(param_2 + 4);
    local_30 = FUN_004aa9b0(local_24);
    local_14 = (int *)FUN_004995c0(local_2c,extraout_EDX_00,local_30,local_c,(byte)local_1c,'\0');
    if (local_14 == (int *)0x0) {
      FUN_004962b0(param_1,(byte *)"unknown function: %.*s()");
      return param_3;
    }
    if ((*local_14 & 0x20000000) != 0) {
      local_18 = (char *)FUN_004b6b80(piVar9);
      FUN_00496f30(param_1,*(byte **)local_10[2],param_3);
      if (1 < local_c) {
        param_1 = (int *)(local_c + -1);
        param_3 = 0x14;
        do {
          FUN_004ae830(piVar9,0x4a,iVar6,local_18);
          FUN_00496d90((int)piVar4,iVar6,1);
          piVar4[0x17] = piVar4[0x17] + 1;
          FUN_00496f30(piVar4,*(byte **)(param_3 + local_10[2]),iVar6);
          FUN_00496d40((int)piVar4,1);
          param_3 = param_3 + 0x14;
          param_1 = (int *)((int)param_1 + -1);
        } while (param_1 != (int *)0x0);
      }
      FUN_004b87b0((int)piVar9,(int)local_18);
      return iVar6;
    }
    if (local_10 == (int *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = FUN_0049cb00((int)param_1,local_c);
      if ((*(byte *)((int)local_14 + 3) & 0xc0) != 0) {
        local_24 = *(char **)local_10[2];
        if ((*local_24 == -0x68) || (*local_24 == -0x66)) {
          local_24[0x23] = *(byte *)((int)local_14 + 3);
        }
      }
      param_1[0x17] = param_1[0x17] + 1;
      FUN_00497010((int)param_1,local_10,local_1c,1);
      FUN_00496d40((int)param_1,1);
    }
    if ((local_c < 2) || ((param_2[2] & 0x80) == 0)) {
      if (local_c < 1) goto LAB_00497da7;
      pcVar12 = *(char **)local_10[2];
    }
    else {
      pcVar12 = *(char **)(local_10[2] + 0x14);
    }
    local_14 = (int *)FUN_004b9db0(local_2c,(undefined8 *)local_14,local_c,pcVar12);
LAB_00497da7:
    piVar4 = local_10;
    local_30 = 0;
    local_24 = (char *)0x1;
    if (0 < local_c) {
      iVar8 = 0;
      iVar6 = local_c;
      do {
        if (((int)local_30 < 0x20) &&
           (iVar5 = FUN_00498e10(*(int *)(piVar4[2] + iVar8)), iVar6 = local_c, iVar5 != 0)) {
          local_18 = (char *)((uint)local_18 | (uint)local_24);
        }
        if (((*local_14 & 0x8000000) != 0) && (local_20 == (int *)0x0)) {
          local_20 = (int *)FUN_004984d0(param_1,*(char **)(piVar4[2] + iVar8));
          iVar6 = local_c;
        }
        local_24 = (char *)((int)local_24 << 1 | (uint)((int)local_24 < 0));
        local_30 = local_30 + 1;
        iVar8 = iVar8 + 0x14;
        piVar9 = local_28;
      } while ((int)local_30 < iVar6);
    }
    if ((*local_14 & 0x8000000) != 0) {
      piVar4 = local_20;
      if (local_20 == (int *)0x0) {
        piVar4 = *(int **)(local_2c + 8);
      }
      FUN_004ae8f0(piVar9,0x11,0,0,0,piVar4,0xfffffffc);
    }
    FUN_004ae8f0(piVar9,0x12,local_18,local_1c,param_3,local_14,0xfffffffb);
    iVar6 = local_c;
    FUN_004aee30((int)piVar9,(char)local_c);
    if (iVar6 == 0) {
      return local_8;
    }
    FUN_004a68c0((int)param_1,local_1c,iVar6);
    return local_8;
  case (int *)0x99:
    if (*(int *)(param_2 + 0x24) != 0) {
      return *(int *)(*(int *)(*(int *)(param_2 + 0x24) + 0x20) + 8 +
                     *(short *)(param_2 + 0x1e) * 0x10);
    }
    FUN_004962b0(param_1,(byte *)"misuse of aggregate: %s()");
    return param_3;
  case (int *)0x9a:
    iVar6 = *(int *)(*(int *)(param_2 + 0x24) + 0x14) + *(short *)(param_2 + 0x1e) * 0x18;
    pcVar12 = *(char **)(param_2 + 0x24);
    if (*pcVar12 == '\0') {
      return *(int *)(iVar6 + 0x10);
    }
    if (pcVar12[1] != '\0') {
      FUN_004ae890(piVar9,0x1d,*(undefined4 *)(pcVar12 + 8),*(undefined4 *)(iVar6 + 0xc),param_3);
      return param_3;
    }
  case (int *)0x98:
    if (-1 < *(int *)(param_2 + 0x18)) {
      iVar6 = FUN_004970c0(param_1,*(int **)(param_2 + 0x28),(int)*(short *)(param_2 + 0x1c),
                           *(int *)(param_2 + 0x18),param_3,param_2[0x23]);
      return iVar6;
    }
    return (int)*(short *)(param_2 + 0x1c) + param_1[0x16];
  case (int *)0x9c:
    pcVar12 = *(char **)(param_2 + 8);
    if (*pcVar12 == -0x7f) {
      FUN_00473790((int)param_1,(int)pcVar12,1,param_3);
      local_8 = param_3;
    }
    else if (*pcVar12 == -0x7e) {
      FUN_00474a90(piVar9,*(byte **)(pcVar12 + 4),1,param_3);
      local_8 = param_3;
    }
    else {
      iVar6 = FUN_0049cb40((int)param_1);
      local_c = iVar6;
      FUN_004ae830(piVar9,7,0,iVar6);
      iVar8 = FUN_00498470((int)param_1,*(undefined4 *)(param_2 + 8),(int *)&local_10);
      FUN_004ae890(piVar9,0x57,iVar8,iVar6,param_3);
      local_8 = param_3;
    }
  }
  if ((local_c != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar6 = 0;
    piVar9 = param_1 + 0x19;
    do {
      if (piVar9[4] == local_c) {
        *(undefined1 *)(piVar9 + 2) = 1;
        goto LAB_00497ffd;
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 6;
    } while (iVar6 < 10);
    param_1[*(byte *)((int)param_1 + 0x13) + 7] = local_c;
    *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
  }
LAB_00497ffd:
  if ((local_10 != (int *)0x0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar6 = 0;
    piVar9 = param_1 + 0x19;
    do {
      if ((int *)piVar9[4] == local_10) {
        *(undefined1 *)(piVar9 + 2) = 1;
        return local_8;
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 6;
    } while (iVar6 < 10);
    param_1[*(byte *)((int)param_1 + 0x13) + 7] = (int)local_10;
    *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
    return local_8;
  }
  return local_8;
}


/* FUN_00498470 @ 00498470  kind=lib  attributed-by=lib-island  size=91 */

int __cdecl FUN_00498470(int param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar3 = *(int *)(param_1 + 0x4c);
  }
  else {
    bVar1 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    iVar3 = *(int *)(param_1 + 0x1c + (uint)bVar1 * 4);
  }
  iVar2 = FUN_00497780((int *)param_1,param_2,iVar3);
  if (iVar2 == iVar3) {
    *param_3 = iVar3;
    return iVar2;
  }
  FUN_004a68f0(param_1,iVar3);
  *param_3 = 0;
  return iVar2;
}


/* FUN_004984d0 @ 004984d0  kind=lib  attributed-by=lib-island  size=316 */

uint __cdecl FUN_004984d0(int *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  
  iVar3 = *param_1;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  do {
    cVar1 = *param_2;
    if ((cVar1 == '%') || (cVar1 == -99)) {
      pcVar5 = *(char **)(param_2 + 8);
    }
    else {
      if (cVar1 == '\\') {
        if (*(char *)(iVar3 + 0x81) == '\0') {
          piVar7 = FUN_0049c970(param_1,*(byte *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + 0x4d),
                                (int *)0x0,*(byte **)(param_2 + 4));
        }
        else {
          piVar7 = FUN_00499500(iVar3,*(byte *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + 0x4d),
                                *(byte **)(param_2 + 4),0);
        }
LAB_004985da:
        if (piVar7 != (int *)0x0) {
          piVar6 = FUN_0049c970(param_1,*(byte *)(*(int *)(*(int *)(*param_1 + 0x10) + 0xc) + 0x4d),
                                piVar7,(byte *)*piVar7);
          return -(uint)(piVar6 != (int *)0x0) & (uint)piVar7;
        }
        return 0;
      }
      if ((*(int *)(param_2 + 0x28) != 0) &&
         ((((cVar1 == -0x66 || (cVar1 == -0x68)) || (cVar1 == -0x7c)) || (cVar1 == '<')))) {
        if (*(short *)(param_2 + 0x1c) < 0) {
          return 0;
        }
        pbVar4 = *(byte **)(*(int *)(*(int *)(param_2 + 0x28) + 4) + 0x10 +
                           *(short *)(param_2 + 0x1c) * 0x18);
        bVar2 = *(byte *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + 0x4d);
        if (pbVar4 == (byte *)0x0) {
          piVar6 = *(int **)(iVar3 + 8);
        }
        else {
          piVar6 = FUN_004799f0(iVar3,pbVar4,0);
        }
        piVar7 = (int *)0x0;
        if (piVar6 != (int *)0x0) {
          piVar7 = piVar6 + (uint)bVar2 * 5 + -5;
        }
        goto LAB_004985da;
      }
      if ((*(ushort *)(param_2 + 2) & 0x100) == 0) {
        return 0;
      }
      pcVar5 = *(char **)(param_2 + 8);
      if ((pcVar5 == (char *)0x0) || ((*(ushort *)(pcVar5 + 2) & 0x100) == 0)) {
        pcVar5 = *(char **)(param_2 + 0xc);
      }
    }
    param_2 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      return 0;
    }
  } while( true );
}


/* FUN_00498610 @ 00498610  kind=lib  attributed-by=lib-island  size=381 */

char __cdecl FUN_00498610(char *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    cVar2 = '\x02';
    if (param_2 == param_1) {
      cVar2 = '\0';
    }
    return cVar2;
  }
  if ((((*(ushort *)(param_1 + 2) & 0x800) == 0) && ((*(ushort *)(param_2 + 2) & 0x800) == 0)) &&
     ((((byte)*(ushort *)(param_2 + 2) ^ (byte)*(ushort *)(param_1 + 2)) & 0x10) == 0)) {
    if (*param_1 == *param_2) {
      cVar2 = FUN_00498610(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
      if (CONCAT31(extraout_var_01,cVar2) != 0) {
        return '\x02';
      }
      cVar2 = FUN_00498610(*(char **)(param_1 + 0xc),*(char **)(param_2 + 0xc));
      if (CONCAT31(extraout_var_02,cVar2) != 0) {
        return '\x02';
      }
      iVar3 = FUN_00498fe0(*(int **)(param_1 + 0x10),*(int **)(param_2 + 0x10));
      if (iVar3 != 0) {
        return '\x02';
      }
      if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
        return '\x02';
      }
      if (*(short *)(param_1 + 0x1c) != *(short *)(param_2 + 0x1c)) {
        return '\x02';
      }
      if ((*(ushort *)(param_1 + 2) & 0x400) == 0) {
        cVar2 = *param_1;
        if (((cVar2 != -0x68) && (cVar2 != -0x66)) &&
           (pbVar6 = *(byte **)(param_1 + 4), pbVar6 != (byte *)0x0)) {
          if ((*(ushort *)(param_2 + 2) & 0x400) != 0) {
            return '\x02';
          }
          pbVar4 = *(byte **)(param_2 + 4);
          if (pbVar4 == (byte *)0x0) {
            return '\x02';
          }
          do {
            bVar1 = *pbVar6;
            bVar7 = bVar1 < *pbVar4;
            if (bVar1 != *pbVar4) {
LAB_00498756:
              uVar5 = -(uint)bVar7 | 1;
              goto LAB_0049875b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar7 = bVar1 < pbVar4[1];
            if (bVar1 != pbVar4[1]) goto LAB_00498756;
            pbVar6 = pbVar6 + 2;
            pbVar4 = pbVar4 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_0049875b:
          if (uVar5 != 0) {
            return (cVar2 != '\\') + '\x01';
          }
        }
      }
      else if (((*(ushort *)(param_2 + 2) & 0x400) == 0) ||
              (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) {
        return '\x02';
      }
      return '\0';
    }
    if ((*param_1 == '\\') &&
       (cVar2 = FUN_00498610(*(char **)(param_1 + 8),param_2), CONCAT31(extraout_var,cVar2) < 2)) {
      return '\x01';
    }
    if ((*param_2 == '\\') &&
       (cVar2 = FUN_00498610(param_1,*(char **)(param_2 + 8)), CONCAT31(extraout_var_00,cVar2) < 2))
    {
      return '\x01';
    }
  }
  return '\x02';
}


/* FUN_00498790 @ 00498790  kind=lib  attributed-by=lib-island  size=156 */

void __cdecl FUN_00498790(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    if ((*(ushort *)((int)param_2 + 2) & 0x4000) == 0) {
      FUN_00498790(param_1,(undefined4 *)param_2[2]);
      FUN_00498790(param_1,(undefined4 *)param_2[3]);
      if (((*(ushort *)((int)param_2 + 2) & 0x2000) == 0) &&
         ((*(byte *)((int)param_2 + 0x22) & 1) != 0)) {
        FUN_00494b00(param_1,(undefined4 *)param_2[1]);
      }
      if ((*(ushort *)((int)param_2 + 2) & 0x800) == 0) {
        FUN_00499060(param_1,(int *)param_2[4]);
      }
      else {
        puVar1 = (undefined4 *)param_2[4];
        if (puVar1 != (undefined4 *)0x0) {
          FUN_00472d10(param_1,puVar1);
          FUN_00494b00(param_1,puVar1);
        }
      }
    }
    if ((*(ushort *)((int)param_2 + 2) & 0x8000) == 0) {
      FUN_00494b00(param_1,param_2);
    }
  }
  return;
}


/* FUN_00498830 @ 00498830  kind=lib  attributed-by=lib-island  size=102 */

undefined4 * __cdecl FUN_00498830(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *param_1;
  puVar2 = FUN_00496510(iVar1,0x97,param_3,1);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00499060(iVar1,param_2);
    return (undefined4 *)0x0;
  }
  puVar2[4] = param_2;
  FUN_004790b0((int)puVar2);
  if (*(int *)(*param_1 + 0x5c) < (int)puVar2[5]) {
    FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
  }
  return puVar2;
}


/* FUN_004988a0 @ 004988a0  kind=lib  attributed-by=lib-island  size=525 */

void __cdecl FUN_004988a0(int *param_1,char *param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int local_8;
  
  uVar4 = param_4;
  iVar6 = param_3;
  pcVar3 = param_2;
  piVar2 = param_1;
  piVar1 = (int *)param_1[2];
  param_1 = (int *)0x0;
  local_8 = 0;
  if ((piVar1 != (int *)0x0) && (param_2 != (char *)0x0)) {
    cVar7 = (*param_2 + 1U ^ 1) - 1;
    switch(*param_2) {
    case '\x13':
      FUN_00498b60(piVar2,*(byte **)(param_2 + 8),param_3,param_4);
      break;
    default:
      iVar6 = FUN_00498470((int)piVar2,param_2,(int *)&param_1);
      FUN_004ae890(piVar1,0x1c,iVar6,param_3,(uint)(param_4 != 0));
      break;
    case 'D':
      iVar6 = FUN_004b6b80(piVar1);
      uVar4 = param_4;
      piVar2[0x17] = piVar2[0x17] + 1;
      FUN_00498b60(piVar2,*(byte **)(param_2 + 8),iVar6,param_4 ^ 8);
      FUN_004988a0(piVar2,*(char **)(param_2 + 0xc),param_3,uVar4);
      FUN_004b87b0((int)piVar1,iVar6);
      FUN_00496d40((int)piVar2,1);
      break;
    case 'E':
      FUN_004988a0(piVar2,*(char **)(param_2 + 8),param_3,param_4);
      FUN_004988a0(piVar2,*(char **)(param_2 + 0xc),iVar6,uVar4);
      break;
    case 'F':
    case -0x6e:
      iVar6 = FUN_00498470((int)piVar2,*(undefined4 *)(param_2 + 8),(int *)&param_1);
      iVar5 = FUN_00498470((int)piVar2,*(undefined4 *)(pcVar3 + 0xc),&local_8);
      FUN_004733e0(piVar2,*(char **)(pcVar3 + 8),*(char **)(pcVar3 + 0xc),(*pcVar3 != 'F') + 'K',
                   iVar6,iVar5,param_3,0x80);
      break;
    case 'G':
      FUN_004789f0((int)piVar2,(int)param_2,param_3,0,param_4);
      break;
    case 'H':
      if (param_4 == 0) {
        iVar6 = FUN_004b6b80(piVar1);
        FUN_00497220(piVar2,pcVar3,param_3,iVar6);
        FUN_004b87b0((int)piVar1,iVar6);
      }
      else {
        FUN_00497220(piVar2,param_2,param_3,param_3);
      }
      break;
    case 'I':
    case 'J':
      iVar6 = FUN_00498470((int)piVar2,*(undefined4 *)(param_2 + 8),(int *)&param_1);
      FUN_004ae830(piVar1,cVar7,iVar6,param_3);
      break;
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
      iVar6 = FUN_00498470((int)piVar2,*(undefined4 *)(param_2 + 8),(int *)&param_1);
      iVar5 = FUN_00498470((int)piVar2,*(undefined4 *)(pcVar3 + 0xc),&local_8);
      FUN_004733e0(piVar2,*(char **)(pcVar3 + 8),*(char **)(pcVar3 + 0xc),cVar7,iVar6,iVar5,param_3,
                   (byte)param_4);
    }
    FUN_004a68f0((int)piVar2,(int)param_1);
    FUN_004a68f0((int)piVar2,local_8);
  }
  return;
}


/* FUN_00498b60 @ 00498b60  kind=lib  attributed-by=lib-island  size=521 */

void __cdecl FUN_00498b60(int *param_1,byte *param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_c;
  uint local_8;
  
  uVar4 = param_4;
  iVar7 = param_3;
  pbVar3 = param_2;
  piVar2 = param_1;
  piVar1 = (int *)param_1[2];
  param_1 = (int *)0x0;
  local_c = 0;
  if ((piVar1 != (int *)0x0) && (param_2 != (byte *)0x0)) {
    local_8 = (uint)*param_2;
    switch(local_8) {
    case 0x13:
      FUN_004988a0(piVar2,*(char **)(param_2 + 8),param_3,param_4);
      break;
    default:
      iVar7 = FUN_00498470((int)piVar2,param_2,(int *)&param_1);
      FUN_004ae890(piVar1,0x1b,iVar7,param_3,(uint)(param_4 != 0));
      break;
    case 0x44:
      FUN_00498b60(piVar2,*(byte **)(param_2 + 8),param_3,param_4);
      FUN_00498b60(piVar2,*(byte **)(param_2 + 0xc),iVar7,uVar4);
      break;
    case 0x45:
      iVar7 = FUN_004b6b80(piVar1);
      uVar4 = param_4;
      piVar2[0x17] = piVar2[0x17] + 1;
      FUN_004988a0(piVar2,*(char **)(param_2 + 8),iVar7,param_4 ^ 8);
      FUN_00498b60(piVar2,*(byte **)(param_2 + 0xc),param_3,uVar4);
      FUN_004b87b0((int)piVar1,iVar7);
      FUN_00496d40((int)piVar2,1);
      break;
    case 0x46:
    case 0x92:
      iVar7 = FUN_00498470((int)piVar2,*(undefined4 *)(param_2 + 8),(int *)&param_1);
      iVar5 = FUN_00498470((int)piVar2,*(undefined4 *)(pbVar3 + 0xc),&local_c);
      FUN_004733e0(piVar2,*(char **)(pbVar3 + 8),*(char **)(pbVar3 + 0xc),(local_8 == 0x46) + 'K',
                   iVar7,iVar5,param_3,0x80);
      break;
    case 0x47:
      FUN_004789f0((int)piVar2,(int)param_2,param_3,1,param_4);
      break;
    case 0x48:
      iVar6 = FUN_004b6b80(piVar1);
      iVar7 = param_3;
      iVar5 = iVar6;
      if (param_4 != 0) {
        iVar5 = param_3;
      }
      FUN_00497220(piVar2,(char *)param_2,iVar6,iVar5);
      FUN_004ae830(piVar1,1,0,iVar7);
      FUN_004b87b0((int)piVar1,iVar6);
      break;
    case 0x49:
    case 0x4a:
      iVar7 = FUN_00498470((int)piVar2,*(undefined4 *)(param_2 + 8),(int *)&param_1);
      FUN_004ae830(piVar1,(char)local_8,iVar7,param_3);
      break;
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
      iVar7 = FUN_00498470((int)piVar2,*(undefined4 *)(param_2 + 8),(int *)&param_1);
      iVar5 = FUN_00498470((int)piVar2,*(undefined4 *)(pbVar3 + 0xc),&local_c);
      FUN_004733e0(piVar2,*(char **)(pbVar3 + 8),*(char **)(pbVar3 + 0xc),(char)local_8,iVar7,iVar5,
                   param_3,(byte)param_4);
    }
    FUN_004a68f0((int)piVar2,(int)param_1);
    FUN_004a68f0((int)piVar2,local_c);
  }
  return;
}


/* FUN_00498e10 @ 00498e10  kind=lib  attributed-by=lib-island  size=49 */

undefined4 __cdecl FUN_00498e10(int param_1)

{
  code *local_18;
  code *local_14;
  undefined4 local_8;
  
  local_8 = 1;
  local_18 = FUN_00478e60;
  local_14 = FUN_0048b2c0;
  FUN_004bb020(&local_18,param_1);
  return local_8;
}


/* FUN_00498e50 @ 00498e50  kind=lib  attributed-by=lib-island  size=49 */

undefined4 __cdecl FUN_00498e50(int param_1)

{
  code *local_18;
  code *local_14;
  undefined4 local_8;
  
  local_8 = 3;
  local_18 = FUN_00478e60;
  local_14 = FUN_0048b2c0;
  FUN_004bb020(&local_18,param_1);
  return local_8;
}


/* FUN_00498e90 @ 00498e90  kind=lib  attributed-by=lib-island  size=108 */

undefined4 __cdecl FUN_00498e90(char *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(ushort *)(param_1 + 2) & 0x400) != 0) {
    *param_2 = *(int *)(param_1 + 4);
    return 1;
  }
  if (*param_1 == -100) {
    iVar1 = FUN_00498e90(*(char **)(param_1 + 8),(int *)&param_1);
    if (iVar1 != 0) {
      *param_2 = -(int)param_1;
      uVar2 = 1;
    }
  }
  else if (*param_1 == -99) {
    uVar2 = FUN_00498e90(*(char **)(param_1 + 8),param_2);
    return uVar2;
  }
  return uVar2;
}


/* FUN_00498f00 @ 00498f00  kind=lib  attributed-by=lib-island  size=174 */

uint * __cdecl FUN_00498f00(int *param_1,uint *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar2 = *param_1;
  if (param_2 == (uint *)0x0) {
    param_2 = FUN_00494b90(iVar2,0xc);
    if (param_2 != (uint *)0x0) {
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      puVar4 = FUN_00494b90(iVar2,0x14);
      param_2[2] = (uint)puVar4;
      if (puVar4 != (undefined4 *)0x0) goto LAB_00498f80;
    }
LAB_00498f64:
    FUN_00498790(iVar2,param_3);
    FUN_00499060(iVar2,(int *)param_2);
    return (uint *)0x0;
  }
  uVar3 = *param_2;
  if ((uVar3 & uVar3 - 1) == 0) {
    puVar4 = FUN_00494cf0(iVar2,(undefined4 *)param_2[2],uVar3 * 0x28);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00498f64;
    param_2[2] = (uint)puVar4;
  }
LAB_00498f80:
  puVar1 = (undefined8 *)(param_2[2] + *param_2 * 0x14);
  *param_2 = *param_2 + 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 **)puVar1 = param_3;
  return param_2;
}


/* FUN_00498fb0 @ 00498fb0  kind=lib  attributed-by=lib-island  size=40 */

void __cdecl FUN_00498fb0(int *param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (*(int *)(*param_1 + 0x58) < *param_2)) {
    FUN_004962b0(param_1,(byte *)"too many columns in %s");
    return;
  }
  return;
}


/* FUN_00498fe0 @ 00498fe0  kind=lib  attributed-by=lib-island  size=114 */

undefined4 __cdecl FUN_00498fe0(int *param_1,int *param_2)

{
  char cVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    if (param_2 == (int *)0x0) {
      return 0;
    }
  }
  else if ((param_2 != (int *)0x0) && (*param_1 == *param_2)) {
    iVar2 = 0;
    if (0 < *param_1) {
      iVar3 = 0;
      do {
        if (*(char *)(param_1[2] + 0xc + iVar3) != *(char *)(param_2[2] + 0xc + iVar3)) {
          return 1;
        }
        cVar1 = FUN_00498610(*(char **)(param_1[2] + iVar3),*(char **)(param_2[2] + iVar3));
        if (CONCAT31(extraout_var,cVar1) != 0) {
          return 1;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x14;
      } while (iVar2 < *param_1);
    }
    return 0;
  }
  return 1;
}


/* FUN_00499060 @ 00499060  kind=lib  attributed-by=lib-island  size=221 */

void __cdecl FUN_00499060(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 != (int *)0x0) {
    iVar3 = 0;
    puVar4 = (undefined4 *)param_2[2];
    if (0 < *param_2) {
      do {
        FUN_00498790(param_1,(undefined4 *)*puVar4);
        puVar1 = (undefined4 *)puVar4[1];
        if (param_1 == 0) {
LAB_004990ff:
          FUN_00466dd0((int)puVar1);
        }
        else if (*(int *)(param_1 + 0x1f0) == 0) {
          if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
             (*(undefined4 **)(param_1 + 0x108) <= puVar1)) goto LAB_004990ff;
          *puVar1 = *(undefined4 *)(param_1 + 0x100);
          *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
          *(undefined4 **)(param_1 + 0x100) = puVar1;
        }
        else if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
                (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
          iVar2 = (*DAT_00582af0._4_4_)(puVar1);
          **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar2;
        }
        else {
          **(int **)(param_1 + 0x1f0) =
               **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
        }
        FUN_00494b00(param_1,(undefined4 *)puVar4[2]);
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 5;
      } while (iVar3 < *param_2);
    }
    FUN_00494b00(param_1,(undefined4 *)param_2[2]);
    FUN_00494b00(param_1,param_2);
  }
  return;
}


/* FUN_00499140 @ 00499140  kind=lib  attributed-by=lib-island  size=405 */

int * __cdecl FUN_00499140(int param_1,int *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  size_t sVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_8;
  
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3 = FUN_00494b90(param_1,0xc);
  if (piVar3 != (int *)0x0) {
    piVar3[1] = 0;
    iVar4 = *param_2;
    *piVar3 = iVar4;
    if ((param_3 & 1) == 0) {
      iVar4 = 1;
      if (1 < *param_2) {
        do {
          iVar4 = iVar4 * 2;
        } while (iVar4 < *param_2);
      }
    }
    puVar5 = FUN_00494b90(param_1,iVar4 * 0x14);
    piVar3[2] = (int)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      puVar9 = (undefined4 *)param_2[2];
      local_8 = 0;
      if (0 < *param_2) {
        puVar8 = puVar5 + 2;
        iVar4 = (int)puVar5 - (int)puVar9;
        do {
          puVar5 = FUN_00478bb0(param_1,(undefined4 *)*puVar9,param_3,(int *)0x0);
          *(undefined4 **)(iVar4 + (int)puVar9) = puVar5;
          pcVar2 = (char *)puVar9[1];
          if (pcVar2 == (char *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            cVar1 = *pcVar2;
            pcVar6 = pcVar2;
            while (cVar1 != '\0') {
              pcVar6 = pcVar6 + 1;
              cVar1 = *pcVar6;
            }
            sVar7 = ((int)pcVar6 - (int)pcVar2 & 0x3fffffffU) + 1;
            puVar5 = FUN_00494b90(param_1,sVar7);
            if (puVar5 != (undefined4 *)0x0) {
              memcpy(puVar5,pcVar2,sVar7);
            }
          }
          puVar8[-1] = puVar5;
          pcVar2 = (char *)puVar9[2];
          if (pcVar2 == (char *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            cVar1 = *pcVar2;
            pcVar6 = pcVar2;
            while (cVar1 != '\0') {
              pcVar6 = pcVar6 + 1;
              cVar1 = *pcVar6;
            }
            sVar7 = ((int)pcVar6 - (int)pcVar2 & 0x3fffffffU) + 1;
            puVar5 = FUN_00494b90(param_1,sVar7);
            if (puVar5 != (undefined4 *)0x0) {
              memcpy(puVar5,pcVar2,sVar7);
            }
          }
          *puVar8 = puVar5;
          *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar9 + 3);
          *(undefined1 *)((int)puVar8 + 5) = 0;
          *(undefined2 *)((int)puVar8 + 6) = *(undefined2 *)((int)puVar9 + 0xe);
          *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar9 + 4);
          local_8 = local_8 + 1;
          puVar8 = puVar8 + 5;
          puVar9 = puVar9 + 5;
        } while (local_8 < *param_2);
      }
      return piVar3;
    }
    FUN_00494b00(param_1,piVar3);
  }
  return (int *)0x0;
}


/* FUN_004992e0 @ 004992e0  kind=lib  attributed-by=lib-island  size=115 */

void __cdecl FUN_004992e0(int *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *_Src;
  size_t _Size;
  char *_Dst;
  
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    iVar2 = param_2[2];
    _Src = (void *)*param_3;
    _Size = param_3[1];
    if (_Src == (void *)0x0) {
      _Dst = (char *)0x0;
    }
    else {
      _Dst = (char *)FUN_00494b90(*param_1,_Size + 1);
      if (_Dst != (char *)0x0) {
        memcpy(_Dst,_Src,_Size);
        _Dst[_Size] = '\0';
      }
    }
    *(char **)(iVar2 + iVar1 * 0x14 + -0x10) = _Dst;
    if ((param_4 != 0) && (_Dst != (char *)0x0)) {
      FUN_00495540(_Dst);
    }
  }
  return;
}


/* FUN_00499360 @ 00499360  kind=lib  attributed-by=lib-island  size=120 */

void __cdecl FUN_00499360(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Src;
  undefined4 *_Dst;
  size_t _Size;
  
  iVar2 = *param_1;
  if (param_2 != (int *)0x0) {
    iVar1 = param_2[2] + *param_2 * 0x14;
    FUN_00494b00(iVar2,*(undefined4 **)(iVar1 + -0xc));
    _Src = *(void **)(param_3 + 4);
    _Size = *(int *)(param_3 + 8) - (int)_Src;
    if (_Src == (void *)0x0) {
      *(undefined4 *)(iVar1 + -0xc) = 0;
      return;
    }
    _Dst = FUN_00494b90(iVar2,_Size + 1);
    if (_Dst != (undefined4 *)0x0) {
      memcpy(_Dst,_Src,_Size);
      *(undefined1 *)((int)_Dst + _Size) = 0;
    }
    *(undefined4 **)(iVar1 + -0xc) = _Dst;
  }
  return;
}


/* FUN_004994a0 @ 004994a0  kind=lib  attributed-by=lib-island  size=47 */

void __cdecl FUN_004994a0(int *param_1,int param_2)

{
  FUN_004790b0(param_2);
  if (*(int *)(*param_1 + 0x5c) < *(int *)(param_2 + 0x14)) {
    FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
  }
  return;
}


/* FUN_004994d0 @ 004994d0  kind=lib  attributed-by=lib-island  size=37 */

void __cdecl FUN_004994d0(char *param_1)

{
  for (; (param_1 != (char *)0x0 && ((*param_1 == '\\' || (*param_1 == '\x18'))));
      param_1 = *(char **)(param_1 + 8)) {
  }
  return;
}


/* FUN_00499500 @ 00499500  kind=lib  attributed-by=lib-island  size=58 */

int * __cdecl FUN_00499500(int param_1,byte param_2,byte *param_3,int param_4)

{
  int *piVar1;
  
  if (param_3 == (byte *)0x0) {
    piVar1 = *(int **)(param_1 + 8);
  }
  else {
    piVar1 = FUN_004799f0(param_1,param_3,param_4);
  }
  if (piVar1 != (int *)0x0) {
    return piVar1 + (uint)param_2 * 5 + -5;
  }
  return (int *)0x0;
}


/* FUN_00499540 @ 00499540  kind=lib  attributed-by=lib-island  size=118 */

int __cdecl FUN_00499540(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int iVar8;
  
  if (param_2 == (byte *)0x0) {
    return -1;
  }
  bVar1 = *param_2;
  pbVar7 = param_2;
  while (bVar1 != 0) {
    pbVar7 = pbVar7 + 1;
    bVar1 = *pbVar7;
  }
  iVar8 = *(int *)(param_1 + 0x14) + -1;
  puVar6 = (undefined4 *)(iVar8 * 0x10 + *(int *)(param_1 + 0x10));
  while( true ) {
    if (iVar8 < 0) {
      return iVar8;
    }
    pbVar2 = (byte *)*puVar6;
    uVar4 = 0;
    if (pbVar2 != (byte *)0x0) {
      bVar1 = *pbVar2;
      pbVar3 = pbVar2;
      while (bVar1 != 0) {
        pbVar3 = pbVar3 + 1;
        bVar1 = *pbVar3;
      }
      uVar4 = (int)pbVar3 - (int)pbVar2 & 0x3fffffff;
    }
    if ((((int)pbVar7 - (int)param_2 & 0x3fffffffU) == uVar4) &&
       (iVar5 = FUN_004bcc60(pbVar2,param_2), iVar5 == 0)) break;
    puVar6 = puVar6 + -4;
    iVar8 = iVar8 + -1;
  }
  return iVar8;
}


/* FUN_004995c0 @ 004995c0  kind=lib  attributed-by=lib-island  size=491 */

short * __cdecl
FUN_004995c0(int param_1,byte *param_2,size_t param_3,int param_4,byte param_5,char param_6)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short *_Dst;
  uint local_8;
  
  iVar4 = (int)((byte)(&DAT_00569620)[*param_2] + param_3) % 0x17;
  uVar5 = 0;
  _Dst = (short *)0x0;
  local_8 = 0;
  for (psVar2 = (short *)FUN_0047c390(param_1 + 0x140,iVar4,param_2,param_3); psVar2 != (short *)0x0
      ; psVar2 = *(short **)(psVar2 + 4)) {
    if (param_4 == -2) {
      if ((*(int *)(psVar2 + 6) == 0) && (*(int *)(psVar2 + 8) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 6;
      }
    }
    else {
      sVar1 = *psVar2;
      if ((sVar1 == param_4) || (sVar1 < 0)) {
        uVar3 = 1;
        if (sVar1 == param_4) {
          uVar3 = 4;
        }
        uVar5 = local_8;
        if (param_5 == *(byte *)(psVar2 + 1)) {
          uVar3 = uVar3 + 2;
        }
        else if ((*(byte *)(psVar2 + 1) & param_5 & 2) != 0) {
          uVar3 = uVar3 + 1;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    if (uVar5 < uVar3) {
      uVar5 = uVar3;
      _Dst = psVar2;
      local_8 = uVar3;
    }
  }
  if (param_6 == '\0') {
    if ((_Dst == (short *)0x0) || ((*(uint *)(param_1 + 0x18) & 0x100000) != 0)) {
      uVar5 = 0;
      for (psVar2 = (short *)FUN_0047c390(0x583f68,iVar4,param_2,param_3); psVar2 != (short *)0x0;
          psVar2 = *(short **)(psVar2 + 4)) {
        if (param_4 == -2) {
          if ((*(int *)(psVar2 + 6) == 0) && (*(int *)(psVar2 + 8) == 0)) {
            uVar3 = 0;
          }
          else {
            uVar3 = 6;
          }
        }
        else {
          sVar1 = *psVar2;
          if ((sVar1 == param_4) || (sVar1 < 0)) {
            uVar3 = 1;
            if (sVar1 == param_4) {
              uVar3 = 4;
            }
            if (param_5 == *(byte *)(psVar2 + 1)) {
              uVar3 = uVar3 + 2;
            }
            else if ((*(byte *)(psVar2 + 1) & param_5 & 2) != 0) {
              uVar3 = uVar3 + 1;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        if (uVar5 < uVar3) {
          uVar5 = uVar3;
          _Dst = psVar2;
        }
      }
    }
  }
  else if (uVar5 < 6) {
    _Dst = (short *)FUN_00494b90(param_1,param_3 + 0x25);
    if (_Dst == (short *)0x0) {
      return (short *)0x0;
    }
    memset(_Dst,0,param_3 + 0x25);
    if (_Dst == (short *)0x0) {
      return (short *)0x0;
    }
    *(short **)(_Dst + 0xc) = _Dst + 0x12;
    *_Dst = (short)param_4;
    *(byte *)(_Dst + 1) = param_5;
    memcpy(_Dst + 0x12,param_2,param_3);
    *(undefined1 *)(param_3 + *(int *)(_Dst + 0xc)) = 0;
    FUN_0049b0f0(param_1 + 0x140,(int)_Dst);
  }
  if ((_Dst != (short *)0x0) &&
     (((*(int *)(_Dst + 8) != 0 || (*(int *)(_Dst + 6) != 0)) || (param_6 != '\0')))) {
    return _Dst;
  }
  return (short *)0x0;
}


/* FUN_004997b0 @ 004997b0  kind=lib  attributed-by=lib-island  size=822 */

int __cdecl FUN_004997b0(int *param_1,char *param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined3 extraout_var_00;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *extraout_EDX;
  int iVar12;
  int iVar13;
  int iVar14;
  int *local_14;
  int local_8;
  
  iVar2 = param_1[0x12];
  param_1[0x12] = iVar2 + 1;
  local_14 = (int *)param_1[2];
  local_8 = 0;
  if (local_14 == (int *)0x0) {
    local_14 = FUN_004af150(*param_1);
    param_1[2] = (int)local_14;
    if (local_14 != (int *)0x0) {
      FUN_004ae760(local_14,0x94);
    }
  }
  if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = *(int **)(param_2 + 0x10);
  }
  if ((param_1[0x11] == 0) && (bVar4 = FUN_0047ea40(piVar11), CONCAT31(extraout_var,bVar4) != 0)) {
    iVar13 = *param_1;
    piVar11 = *(int **)(extraout_EDX[10] + 0x18);
    pcVar3 = (char *)**(undefined4 **)(*extraout_EDX + 8);
    iVar5 = (int)*(short *)(pcVar3 + 0x1c);
    iVar6 = FUN_004a7ba0(iVar13,piVar11[0x10]);
    FUN_00493400(param_1,iVar6);
    FUN_004aab20(param_1,iVar6,piVar11[8],'\0',*piVar11);
    if (iVar5 < 0) {
      uVar7 = FUN_00492ce0(param_1);
      FUN_004a0f40(param_1,iVar2,iVar6,piVar11,0x27);
      iVar12 = 1;
      if ((-1 < (int)uVar7) && (uVar7 < (uint)local_14[7])) {
        *(int *)(local_14[1] + 8 + uVar7 * 0x14) = local_14[7];
        *(int *)(param_2 + 0x18) = iVar2;
        return 1;
      }
LAB_00499a01:
      *(int *)(param_2 + 0x18) = iVar2;
      return iVar12;
    }
    piVar8 = (int *)FUN_0048e620(param_1,*(char **)(param_2 + 8),pcVar3);
    bVar4 = FUN_0049db30((int)param_2,*(char *)(piVar11[1] + 0x15 + iVar5 * 0x18));
    iVar14 = piVar11[2];
    if (iVar14 != 0) {
      iVar12 = 0;
      do {
        if (iVar12 != 0) goto LAB_00499a01;
        if (CONCAT31(extraout_var_00,bVar4) == 0) goto LAB_00499a13;
        if (((**(int **)(iVar14 + 4) == iVar5) &&
            (piVar9 = FUN_00499500(iVar13,*(byte *)(*(int *)(*(int *)(iVar13 + 0x10) + 0xc) + 0x4d),
                                   (byte *)**(undefined4 **)(iVar14 + 0x20),0), iVar12 = local_8,
            piVar9 == piVar8)) &&
           ((param_3 != (int *)0x0 ||
            ((*(int *)(iVar14 + 0x24) == 1 && (*(char *)(iVar14 + 0x2c) != '\0')))))) {
          piVar9 = FUN_0049dbf0(param_1,iVar14);
          uVar7 = FUN_00492ce0(param_1);
          FUN_004ae8f0(local_14,0x27,iVar2,*(undefined4 *)(iVar14 + 0x28),iVar6,piVar9,0xfffffff0);
          local_8 = 3;
          FUN_004b6720((int)local_14,uVar7);
          if (param_3 == (int *)0x0) {
            iVar12 = 3;
          }
          else {
            iVar12 = local_8;
            if (*(char *)(piVar11[1] + 0x14 + iVar5 * 0x18) == '\0') {
              iVar10 = param_1[0x13] + 1;
              param_1[0x13] = iVar10;
              *param_3 = iVar10;
              FUN_004ae830(local_14,10,0,iVar10);
            }
          }
        }
        iVar14 = *(int *)(iVar14 + 0x14);
      } while (iVar14 != 0);
      if (iVar12 != 0) goto LAB_00499a01;
    }
  }
LAB_00499a13:
  uVar1 = *(undefined8 *)(param_1 + 0x6e);
  iVar13 = 0;
  iVar2 = 2;
  iVar5 = iVar2;
  if (param_3 == (int *)0x0) {
    param_1[0x6e] = 0;
    param_1[0x6f] = 0x3ff00000;
    iVar5 = 2;
    if ((*(short *)(*(int *)(param_2 + 8) + 0x1c) < 0) &&
       (iVar5 = iVar2, (*(ushort *)(param_2 + 2) & 0x800) == 0)) {
      iVar5 = 1;
    }
  }
  else {
    param_1[0x13] = param_1[0x13] + 1;
    iVar13 = param_1[0x13];
    *param_3 = iVar13;
    iVar2 = local_14[7];
    if ((iVar2 < local_14[8]) || (iVar6 = FUN_0047de10(local_14), iVar6 == 0)) {
      local_14[7] = local_14[7] + 1;
      iVar6 = local_14[1];
      *(undefined2 *)(iVar6 + iVar2 * 0x14) = 10;
      *(undefined1 *)(iVar6 + 3 + iVar2 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 4 + iVar2 * 0x14) = 0;
      *(int *)(iVar6 + 8 + iVar2 * 0x14) = iVar13;
      *(undefined4 *)(iVar6 + 0xc + iVar2 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x10 + iVar2 * 0x14) = 0;
    }
  }
  FUN_00492f00(param_1,param_2,iVar13,(uint)(iVar5 == 1));
  *(undefined8 *)(param_1 + 0x6e) = uVar1;
  return iVar5;
}


/* FUN_00499af0 @ 00499af0  kind=lib  attributed-by=lib-island  size=119 */

int __cdecl FUN_00499af0(int param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  uVar11 = 0;
  if (param_2 != (byte *)0x0) {
    bVar2 = *param_2;
    pbVar10 = param_2;
    while (bVar2 != 0) {
      pbVar10 = pbVar10 + 1;
      bVar2 = *pbVar10;
    }
    uVar11 = (int)pbVar10 - (int)param_2 & 0x3fffffff;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  local_c = 0;
  iVar7 = 0;
  if (0 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x10);
    do {
      uVar5 = local_c;
      if ((int)local_c < 2) {
        uVar5 = local_c ^ 1;
      }
      iVar7 = *(int *)(uVar5 * 0x10 + 0xc + iVar4);
      if (param_3 == (byte *)0x0) {
LAB_00499bab:
        puVar8 = (uint *)(iVar7 + 0x18);
        if (*(int *)(iVar7 + 0x24) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          uVar12 = uVar11;
          pbVar10 = param_2;
          if (uVar11 != 0) {
            do {
              uVar12 = uVar12 - 1;
              uVar5 = uVar5 ^ (uint)(byte)(&DAT_00569620)[*pbVar10] ^ uVar5 * 8;
              pbVar10 = pbVar10 + 1;
            } while (0 < (int)uVar12);
          }
          uVar5 = uVar5 % *puVar8;
        }
        puVar6 = FUN_00479af0((int)puVar8,param_2,uVar11,uVar5);
        if (puVar6 == (undefined4 *)0x0) {
          local_8 = 0;
        }
        else {
          local_8 = puVar6[2];
          if (local_8 != 0) {
            return local_8;
          }
        }
      }
      else {
        pbVar10 = *(byte **)(uVar5 * 0x10 + iVar4);
        bVar2 = *param_3;
        pbVar9 = param_3;
        while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar10]))) {
          pbVar1 = pbVar9 + 1;
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar10 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_00569620)[*pbVar9] == (&DAT_00569620)[*pbVar10]) goto LAB_00499bab;
      }
      local_c = local_c + 1;
      iVar7 = local_8;
    } while ((int)local_c < iVar3);
  }
  return iVar7;
}


/* FUN_00499c30 @ 00499c30  kind=lib  attributed-by=lib-island  size=103 */

int __cdecl FUN_00499c30(int param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  uVar9 = 0;
  if (param_2 != (byte *)0x0) {
    bVar2 = *param_2;
    pbVar8 = param_2;
    while (bVar2 != 0) {
      pbVar8 = pbVar8 + 1;
      bVar2 = *pbVar8;
    }
    uVar9 = (int)pbVar8 - (int)param_2 & 0x3fffffff;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  local_c = 0;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      uVar11 = local_c;
      if ((int)local_c < 2) {
        uVar11 = local_c ^ 1;
      }
      if (param_3 == (byte *)0x0) {
LAB_00499cdf:
        iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0xc + uVar11 * 0x10);
        puVar6 = (uint *)(iVar5 + 8);
        if (*(int *)(iVar5 + 0x14) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          uVar10 = uVar9;
          pbVar8 = param_2;
          if (uVar9 != 0) {
            do {
              uVar10 = uVar10 - 1;
              uVar11 = uVar11 ^ (uint)(byte)(&DAT_00569620)[*pbVar8] ^ uVar11 * 8;
              pbVar8 = pbVar8 + 1;
            } while (0 < (int)uVar10);
          }
          uVar11 = uVar11 % *puVar6;
        }
        puVar4 = FUN_00479af0((int)puVar6,param_2,uVar9,uVar11);
        if (puVar4 == (undefined4 *)0x0) {
          local_8 = 0;
        }
        else {
          local_8 = puVar4[2];
          if (local_8 != 0) {
            return local_8;
          }
        }
      }
      else {
        pbVar8 = *(byte **)(*(int *)(param_1 + 0x10) + uVar11 * 0x10);
        bVar2 = *param_3;
        pbVar7 = param_3;
        while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar8]))) {
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          pbVar8 = pbVar8 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_00569620)[*pbVar7] == (&DAT_00569620)[*pbVar8]) goto LAB_00499cdf;
      }
      local_c = local_c + 1;
      iVar5 = local_8;
    } while ((int)local_c < iVar3);
  }
  return iVar5;
}


/* FUN_00499d70 @ 00499d70  kind=lib  attributed-by=lib-island  size=730 */

void __cdecl FUN_00499d70(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *local_10;
  int local_c;
  uint local_8;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x38) != '\0') {
    return;
  }
  if (*(char *)((int)param_1 + 0x12) != '\0') {
    return;
  }
  if (param_1[0x11] != 0) {
    return;
  }
  piVar3 = FUN_0049d4d0(param_1);
  if (piVar3 != (int *)0x0) {
    FUN_004ae760(piVar3,6);
    if (0 < param_1[0x57]) {
      FUN_004b6720((int)piVar3,param_1[0x57] - 1);
      iVar6 = 0;
      local_8 = 1;
      if (0 < *(int *)(iVar1 + 0x14)) {
        local_10 = param_1 + 0x58;
        local_c = 0;
        do {
          if ((param_1[0x56] & local_8) != 0) {
            FUN_004b9540(piVar3,iVar6);
            FUN_004ae830(piVar3,0x23,iVar6,(uint)((param_1[0x55] & local_8) != 0));
            if (*(char *)(iVar1 + 0x81) == '\0') {
              FUN_004ae890(piVar3,0x26,iVar6,*local_10,
                           *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0xc + local_c) + 4));
            }
          }
          local_10 = local_10 + 1;
          local_8 = local_8 * 2;
          iVar6 = iVar6 + 1;
          local_c = local_c + 0x10;
        } while (iVar6 < *(int *)(iVar1 + 0x14));
      }
      local_10 = (int *)0x0;
      if (0 < param_1[0x76]) {
        do {
          for (piVar2 = *(int **)(*(int *)(param_1[0x88] + (int)local_10 * 4) + 0x38);
              (piVar2 != (int *)0x0 && (*piVar2 != iVar1)); piVar2 = (int *)piVar2[6]) {
          }
          iVar6 = piVar3[7];
          if ((iVar6 < piVar3[8]) || (iVar4 = FUN_0047de10(piVar3), iVar4 == 0)) {
            iVar4 = piVar3[1];
            piVar3[7] = piVar3[7] + 1;
            *(undefined2 *)(iVar4 + iVar6 * 0x14) = 0x84;
            *(undefined1 *)(iVar4 + 3 + iVar6 * 0x14) = 0;
            *(undefined4 *)(iVar4 + 4 + iVar6 * 0x14) = 0;
            *(undefined4 *)(iVar4 + 8 + iVar6 * 0x14) = 0;
            *(undefined4 *)(iVar4 + 0xc + iVar6 * 0x14) = 0;
            *(undefined4 *)(iVar4 + 0x10 + iVar6 * 0x14) = 0;
          }
          else {
            iVar6 = 1;
          }
          if ((piVar3[1] != 0) && (*(char *)(*piVar3 + 0x38) == '\0')) {
            if (iVar6 < 0) {
              iVar6 = piVar3[7] + -1;
            }
            iVar4 = piVar3[1] + iVar6 * 0x14;
            FUN_0047bc80(*piVar3,(int)*(char *)(piVar3[1] + 1 + iVar6 * 0x14),
                         *(int **)(piVar3[1] + 0x10 + iVar6 * 0x14));
            *(undefined4 *)(iVar4 + 0x10) = 0;
            if (piVar2 == (int *)0x0) {
              *(undefined4 *)(iVar4 + 0x10) = 0;
              *(undefined1 *)(iVar4 + 1) = 0;
            }
            else {
              *(int **)(iVar4 + 0x10) = piVar2;
              *(undefined1 *)(iVar4 + 1) = 0xf6;
              piVar2[3] = piVar2[3] + 1;
            }
          }
          local_10 = (int *)((int)local_10 + 1);
        } while ((int)local_10 < param_1[0x76]);
      }
      param_1[0x76] = 0;
      FUN_00474bc0(param_1);
      FUN_0048d7c0(param_1);
      iVar6 = piVar3[7];
      iVar4 = param_1[0x57];
      if ((iVar6 < piVar3[8]) || (iVar5 = FUN_0047de10(piVar3), iVar5 == 0)) {
        iVar5 = piVar3[1];
        piVar3[7] = piVar3[7] + 1;
        *(undefined2 *)(iVar5 + iVar6 * 0x14) = 1;
        *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = 0;
        *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar4;
        *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
      }
    }
    if ((param_1[0x11] == 0) && (*(char *)(iVar1 + 0x38) == '\0')) {
      if ((param_1[0x6b] != 0) && (param_1[0x12] == 0)) {
        param_1[0x12] = 1;
      }
      FUN_004b6bf0(piVar3,(int)param_1);
      param_1[3] = 0x65;
      *(undefined1 *)(param_1 + 4) = 0;
      goto LAB_0049a010;
    }
  }
  param_1[3] = 1;
LAB_0049a010:
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x73] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  return;
}


/* FUN_0049a050 @ 0049a050  kind=lib  attributed-by=lib-string  size=602 */

void __cdecl FUN_0049a050(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint *extraout_EDX;
  byte *extraout_EDX_00;
  undefined4 *puVar8;
  int iVar9;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  char *local_24;
  char **local_20;
  char *local_1c;
  uint local_18;
  int *local_14;
  int local_10;
  byte *local_c;
  int local_8;
  
  puVar8 = (undefined4 *)param_1[0x80];
  iVar9 = *param_1;
  param_1[0x80] = 0;
  local_10 = iVar9;
  if (param_1[0x11] == 0) {
    if (puVar8 == (undefined4 *)0x0) {
      FUN_00495480(iVar9,param_2);
      return;
    }
    local_c = (byte *)*puVar8;
    local_8 = FUN_004a7ba0(iVar9,puVar8[5]);
    puVar8[7] = param_2;
    for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)param_2[8]) {
      param_2[1] = puVar8;
    }
    local_1c = (char *)*puVar8;
    local_18 = 0;
    if (local_1c != (char *)0x0) {
      cVar1 = *local_1c;
      pcVar3 = local_1c;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      local_18 = (int)pcVar3 - (int)local_1c & 0x3fffffff;
    }
    param_2 = (undefined4 *)0x0;
    if ((-1 < local_8) && (local_8 != 1)) {
      local_30 = param_1;
      local_28 = *(undefined4 *)(*(int *)(*param_1 + 0x10) + local_8 * 0x10);
      local_2c = *(undefined4 *)(*(int *)(*param_1 + 0x10) + 0xc + local_8 * 0x10);
      local_20 = &local_1c;
      local_24 = "trigger";
      iVar4 = FUN_0049a530(&local_30,puVar8[7]);
      if (iVar4 != 0) goto LAB_0049a25f;
    }
    if (*(char *)(iVar9 + 0x81) == '\0') {
      local_14 = FUN_0049d4d0(param_1);
      if (local_14 != (int *)0x0) {
        FUN_0048e5e0(param_1,0,local_8);
        puVar5 = FUN_00494e00(iVar9,(void *)*param_3,param_3[1]);
        FUN_004a0da0(param_1,(byte *)
                             "INSERT INTO %Q.%s VALUES(\'trigger\',%Q,%Q,0,\'CREATE TRIGGER %q\')");
        iVar9 = local_10;
        FUN_00494b00(local_10,puVar5);
        FUN_00492110(param_1,local_8);
        piVar6 = (int *)FUN_004a02d0(iVar9,(byte *)"type=\'trigger\' AND name=\'%q\'");
        FUN_004aeac0(local_14,local_8,piVar6);
        if (*(char *)(iVar9 + 0x81) != '\0') goto LAB_0049a1cf;
      }
    }
    else {
LAB_0049a1cf:
      pbVar2 = local_c;
      puVar5 = puVar8;
      uVar7 = FUN_004aa9b0((char *)local_c);
      puVar5 = (undefined4 *)FUN_0049d6f0(extraout_EDX,pbVar2,uVar7,(uint)puVar5);
      if (puVar5 == (undefined4 *)0x0) {
        if (puVar8[5] == puVar8[6]) {
          uVar7 = FUN_004aa9b0((char *)puVar8[1]);
          iVar4 = FUN_0049d6a0((uint *)(puVar8[6] + 8),extraout_EDX_00,uVar7);
          puVar8[8] = *(undefined4 *)(iVar4 + 0x3c);
          *(undefined4 **)(iVar4 + 0x3c) = puVar8;
          FUN_00495480(iVar9,(undefined4 *)0x0);
          return;
        }
        goto LAB_0049a299;
      }
      *(undefined1 *)(iVar9 + 0x38) = 1;
      puVar8 = puVar5;
    }
  }
LAB_0049a25f:
  if (puVar8 != (undefined4 *)0x0) {
    FUN_00495480(iVar9,(undefined4 *)puVar8[7]);
    FUN_00494b00(iVar9,(undefined4 *)*puVar8);
    FUN_00494b00(iVar9,(undefined4 *)puVar8[1]);
    FUN_00498790(iVar9,(undefined4 *)puVar8[3]);
    FUN_0049d910(iVar9,(int *)puVar8[4]);
    FUN_00494b00(iVar9,puVar8);
  }
LAB_0049a299:
  FUN_00495480(iVar9,param_2);
  return;
}


/* FUN_0049a2b0 @ 0049a2b0  kind=lib  attributed-by=lib-island  size=147 */

undefined4 __cdecl FUN_0049a2b0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  while( true ) {
    if ((param_2 == 0) || ((*(ushort *)(param_2 + 2) & 0x4000) != 0)) {
      return 0;
    }
    if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
      piVar1 = *(int **)(param_2 + 0x10);
      if (piVar1 != (int *)0x0) {
        piVar4 = (int *)piVar1[2];
        iVar2 = 0;
        if (0 < *piVar1) {
          do {
            iVar3 = FUN_0049a2b0(param_1,*piVar4);
            if (iVar3 != 0) {
              return 1;
            }
            iVar2 = iVar2 + 1;
            piVar4 = piVar4 + 5;
          } while (iVar2 < *piVar1);
        }
      }
    }
    else {
      iVar2 = FUN_0049a3a0(param_1,*(undefined4 **)(param_2 + 0x10));
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar2 = FUN_0049a2b0(param_1,*(int *)(param_2 + 0xc));
    if (iVar2 != 0) break;
    param_2 = *(int *)(param_2 + 8);
  }
  return 1;
}


/* FUN_0049a350 @ 0049a350  kind=lib  attributed-by=lib-island  size=72 */

undefined4 __cdecl
FUN_0049a350(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((-1 < param_3) && (param_3 != 1)) {
    iVar1 = *param_2;
    *param_1 = param_2;
    param_1[2] = *(undefined4 *)(*(int *)(iVar1 + 0x10) + param_3 * 0x10);
    param_1[1] = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0xc + param_3 * 0x10);
    param_1[3] = param_4;
    param_1[4] = param_5;
    return 1;
  }
  return 0;
}


/* FUN_0049a3a0 @ 0049a3a0  kind=lib  attributed-by=lib-island  size=142 */

undefined4 __cdecl FUN_0049a3a0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  while( true ) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    piVar1 = (int *)*param_2;
    if (piVar1 != (int *)0x0) {
      piVar4 = (int *)piVar1[2];
      iVar3 = 0;
      if (0 < *piVar1) {
        do {
          iVar2 = FUN_0049a2b0(param_1,*piVar4);
          if (iVar2 != 0) {
            return 1;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 5;
        } while (iVar3 < *piVar1);
      }
    }
    iVar3 = FUN_0049a430(param_1,(short *)param_2[10]);
    if (((iVar3 != 0) || (iVar3 = FUN_0049a2b0(param_1,param_2[0xb]), iVar3 != 0)) ||
       (iVar3 = FUN_0049a2b0(param_1,param_2[0xd]), iVar3 != 0)) break;
    param_2 = (undefined4 *)param_2[0xf];
  }
  return 1;
}


/* FUN_0049a430 @ 0049a430  kind=lib  attributed-by=lib-island  size=248 */

undefined4 __cdecl FUN_0049a430(undefined4 *param_1,short *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  short *psVar7;
  int local_8;
  
  if (param_2 == (short *)0x0) {
    return 0;
  }
  pbVar1 = (byte *)param_1[2];
  local_8 = 0;
  psVar7 = param_2 + 4;
  if (0 < *param_2) {
    do {
      pbVar2 = *(byte **)(psVar7 + 2);
      pbVar5 = pbVar2;
      if (pbVar2 != (byte *)0x0) {
        bVar4 = *pbVar2;
        pbVar6 = pbVar1;
        if (bVar4 != 0) {
          do {
            if ((&DAT_00569620)[bVar4] != (&DAT_00569620)[*pbVar6]) break;
            bVar4 = pbVar2[1];
            pbVar2 = pbVar2 + 1;
            pbVar6 = pbVar6 + 1;
          } while (bVar4 != 0);
          pbVar5 = *(byte **)(psVar7 + 2);
        }
        if ((&DAT_00569620)[*pbVar2] != (&DAT_00569620)[*pbVar6]) {
          FUN_004962b0((int *)*param_1,(byte *)"%s %T cannot reference objects in database %s");
          return 1;
        }
      }
      FUN_00494b00(*(int *)*param_1,(undefined4 *)pbVar5);
      psVar7[2] = 0;
      psVar7[3] = 0;
      *(undefined4 *)psVar7 = param_1[1];
      iVar3 = FUN_0049a3a0(param_1,*(undefined4 **)(psVar7 + 10));
      if ((iVar3 != 0) || (iVar3 = FUN_0049a2b0(param_1,*(int *)(psVar7 + 0x18)), iVar3 != 0)) {
        return 1;
      }
      local_8 = local_8 + 1;
      psVar7 = psVar7 + 0x24;
    } while (local_8 < *param_2);
  }
  return 0;
}


/* FUN_0049a530 @ 0049a530  kind=lib  attributed-by=lib-island  size=122 */

undefined4 __cdecl FUN_0049a530(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    iVar2 = FUN_0049a3a0(param_1,*(undefined4 **)(param_2 + 8));
    if ((iVar2 != 0) || (iVar2 = FUN_0049a2b0(param_1,*(int *)(param_2 + 0x14)), iVar2 != 0)) break;
    piVar1 = *(int **)(param_2 + 0x18);
    if (piVar1 != (int *)0x0) {
      piVar4 = (int *)piVar1[2];
      iVar2 = 0;
      if (0 < *piVar1) {
        do {
          iVar3 = FUN_0049a2b0(param_1,*piVar4);
          if (iVar3 != 0) {
            return 1;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 5;
        } while (iVar2 < *piVar1);
      }
    }
    param_2 = *(int *)(param_2 + 0x20);
  }
  return 1;
}


/* FUN_0049a5b0 @ 0049a5b0  kind=lib  attributed-by=lib-island  size=86 */

void __cdecl FUN_0049a5b0(int *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  
  if ((*(uint *)(*param_1 + 0x18) & 0x40000) != 0) {
    for (piVar1 = (int *)FUN_0049ae70(param_2); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
      puVar2 = FUN_00479db0(param_1,(int)param_2,piVar1,param_3);
      if (puVar2 != (uint *)0x0) {
        FUN_00492dd0(param_1,(int *)puVar2,param_2,param_4,2,0);
      }
    }
  }
  return;
}


/* FUN_0049a610 @ 0049a610  kind=lib  attributed-by=lib-island  size=922 */

void __cdecl FUN_0049a610(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  short *psVar9;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint local_28;
  uint local_24;
  byte *local_20;
  uint *local_1c;
  uint local_18;
  int local_14;
  uint *local_10;
  int local_c;
  int local_8;
  
  local_8 = *param_1;
  local_24 = (uint)*(byte *)((int)param_1 + 0x1ca);
  if ((*(uint *)(local_8 + 0x18) & 0x40000) != 0) {
    local_c = -1000000;
    if (param_2[0x10] != 0) {
      iVar15 = 0;
      local_c = 0;
      if (0 < *(int *)(local_8 + 0x14)) {
        piVar5 = (int *)(*(int *)(local_8 + 0x10) + 0xc);
        do {
          local_c = iVar15;
          if (*piVar5 == param_2[0x10]) break;
          iVar15 = iVar15 + 1;
          piVar5 = piVar5 + 4;
          local_c = iVar15;
        } while (iVar15 < *(int *)(local_8 + 0x14));
      }
    }
    pbVar3 = *(byte **)(*(int *)(local_8 + 0x10) + local_c * 0x10);
    piVar12 = param_1;
    puVar4 = param_2;
    for (piVar5 = (int *)param_2[4]; param_2 = puVar4, piVar5 != (int *)0x0;
        piVar5 = (int *)piVar5[1]) {
      local_14 = 0;
      local_1c = (uint *)0x0;
      local_18 = 0;
      if (*(char *)((int)piVar12 + 0x1ca) == '\0') {
        piVar6 = (int *)FUN_004a0080(piVar12,0,(byte *)piVar5[2],pbVar3);
      }
      else {
        piVar6 = (int *)FUN_00499c30(local_8,(byte *)piVar5[2],pbVar3);
      }
      if ((piVar6 == (int *)0x0) ||
         (iVar15 = FUN_0047f9a0(piVar12,(int)piVar6,(int)piVar5,&local_14,&local_1c), iVar15 != 0))
      {
        if (local_24 == 0) {
          return;
        }
        if (*(char *)(local_8 + 0x38) != '\0') {
          return;
        }
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)piVar12[2];
          if (piVar6 == (int *)0x0) {
            piVar6 = FUN_004af150(*piVar12);
            piVar12[2] = (int)piVar6;
            if (piVar6 != (int *)0x0) {
              FUN_004ae760(piVar6,0x94);
            }
          }
          local_14 = piVar6[7] + 1 + piVar5[5];
          iVar15 = 0;
          if (0 < piVar5[5]) {
            local_20 = (byte *)(piVar5 + 9);
            do {
              local_18 = *(int *)local_20 + param_3 + 1;
              local_1c = (uint *)piVar6[7];
              if (((int)local_1c < piVar6[8]) || (iVar7 = FUN_0047de10(piVar6), iVar7 == 0)) {
                piVar6[7] = piVar6[7] + 1;
                iVar7 = piVar6[1];
                *(uint *)(iVar7 + 4 + (int)local_1c * 0x14) = local_18;
                *(undefined2 *)(iVar7 + (int)local_1c * 0x14) = 0x49;
                *(undefined1 *)(iVar7 + 3 + (int)local_1c * 0x14) = 0;
                *(int *)(iVar7 + 8 + (int)local_1c * 0x14) = local_14;
                *(undefined4 *)(iVar7 + 0xc + (int)local_1c * 0x14) = 0;
                *(undefined4 *)(iVar7 + 0x10 + (int)local_1c * 0x14) = 0;
              }
              iVar15 = iVar15 + 1;
              local_20 = (byte *)((int)local_20 + 8);
            } while (iVar15 < piVar5[5]);
          }
          local_20 = (byte *)(uint)*(byte *)(piVar5 + 6);
          iVar15 = piVar6[7];
          if ((iVar15 < piVar6[8]) || (iVar7 = FUN_0047de10(piVar6), piVar12 = param_1, iVar7 == 0))
          {
            iVar7 = piVar6[1];
            piVar6[7] = piVar6[7] + 1;
            *(undefined2 *)(iVar7 + iVar15 * 0x14) = 0x75;
            *(undefined1 *)(iVar7 + 3 + iVar15 * 0x14) = 0;
            *(byte **)(iVar7 + 4 + iVar15 * 0x14) = local_20;
            *(undefined4 *)(iVar7 + 8 + iVar15 * 0x14) = 0xffffffff;
            *(undefined4 *)(iVar7 + 0xc + iVar15 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 0x10 + iVar15 * 0x14) = 0;
            piVar12 = param_1;
          }
        }
      }
      else {
        if (local_1c == (uint *)0x0) {
          puVar10 = &local_28;
          local_28 = piVar5[9];
          local_10 = puVar10;
        }
        else {
          local_10 = local_1c;
          puVar10 = local_1c;
        }
        local_20 = (byte *)0x0;
        local_10 = puVar10;
        if (0 < piVar5[5]) {
          do {
            iVar15 = (int)local_20 * 4;
            if (puVar10[(int)local_20] == (int)*(short *)(param_2 + 9)) {
              puVar10[(int)local_20] = 0xffffffff;
            }
            if (*(int *)(local_8 + 0x10c) != 0) {
              if (local_14 == 0) {
                iVar15 = (int)(short)piVar6[9];
              }
              else {
                iVar15 = *(int *)(iVar15 + *(int *)(local_14 + 4));
              }
              iVar15 = FUN_0048d620(piVar12,*piVar6,*(undefined4 *)(piVar6[1] + iVar15 * 0x18),
                                    local_c);
              local_18 = (uint)(iVar15 == 2);
              puVar10 = local_10;
            }
            local_20 = local_20 + 1;
          } while ((int)local_20 < piVar5[5]);
        }
        FUN_004aab20(piVar12,local_c,piVar6[8],'\0',*piVar6);
        piVar12[0x12] = piVar12[0x12] + 1;
        if (param_3 != 0) {
          FUN_0047a7a0(piVar12,local_c,piVar6,local_14,piVar5,(int *)local_10,param_3,-1,local_18);
        }
        if (param_4 != 0) {
          FUN_0047a7a0(piVar12,local_c,piVar6,local_14,piVar5,(int *)local_10,param_4,1,local_18);
        }
        FUN_00494b00(local_8,local_1c);
      }
      puVar4 = param_2;
    }
    pbVar3 = (byte *)*puVar4;
    uVar14 = 0;
    if (pbVar3 != (byte *)0x0) {
      bVar1 = *pbVar3;
      pbVar13 = pbVar3;
      while (bVar1 != 0) {
        pbVar13 = pbVar13 + 1;
        bVar1 = *pbVar13;
      }
      uVar14 = (int)pbVar13 - (int)pbVar3 & 0x3fffffff;
    }
    local_1c = (uint *)(puVar4[0x10] + 0x38);
    if (*(int *)(puVar4[0x10] + 0x44) == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      pbVar13 = pbVar3;
      uVar11 = uVar14;
      local_20 = pbVar3;
      if (uVar14 != 0) {
        do {
          local_20 = pbVar13 + 1;
          uVar11 = uVar11 - 1;
          uVar16 = uVar16 ^ (uint)(byte)(&DAT_00569620)[*pbVar13] ^ uVar16 * 8;
          pbVar13 = local_20;
          piVar12 = param_1;
        } while (0 < (int)uVar11);
      }
      uVar16 = uVar16 % *local_1c;
    }
    puVar8 = FUN_00479af0((int)local_1c,pbVar3,uVar14,uVar16);
    if (puVar8 != (undefined4 *)0x0) {
      for (piVar5 = (int *)puVar8[2]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[3]) {
        local_1c = (uint *)0x0;
        param_1 = (int *)0x0;
        if ((((char)piVar5[6] != '\0') || (piVar12[0x6c] != 0)) ||
           (*(char *)((int)piVar12 + 0x17) != '\0')) {
          iVar15 = FUN_0047f9a0(piVar12,(int)puVar4,(int)piVar5,(int *)&local_1c,&param_1);
          if (iVar15 == 0) {
            psVar9 = (short *)FUN_00494b90(local_8,0x50);
            if (psVar9 != (short *)0x0) {
              memset(psVar9,0,0x50);
              psVar9[1] = 1;
              psVar9 = FUN_004a9fc0(local_8,psVar9,1,(int)*psVar9);
              if (*(char *)(local_8 + 0x38) == '\0') {
                sVar2 = *psVar9;
                (psVar9 + sVar2 * 0x24 + -0x1c)[0] = 0;
                (psVar9 + sVar2 * 0x24 + -0x1c)[1] = 0;
                (psVar9 + sVar2 * 0x24 + -0x1e)[0] = 0;
                (psVar9 + sVar2 * 0x24 + -0x1e)[1] = 0;
                *(int *)(psVar9 + 0xc) = *piVar5;
                *(undefined4 *)(psVar9 + 8) = *(undefined4 *)*piVar5;
                *(short *)(*(int *)(psVar9 + 0xc) + 0x28) =
                     *(short *)(*(int *)(psVar9 + 0xc) + 0x28) + 1;
                *(int *)(psVar9 + 0x1a) = piVar12[0x12];
                piVar12[0x12] = piVar12[0x12] + 1;
                if (param_4 != 0) {
                  FUN_0047afc0(piVar12,psVar9,(int)param_2,(int)local_1c,piVar5,(int)param_1,param_4
                               ,-1);
                }
                if (param_3 != 0) {
                  FUN_0047afc0(piVar12,psVar9,(int)param_2,(int)local_1c,piVar5,(int)param_1,param_3
                               ,1);
                }
                psVar9[8] = 0;
                psVar9[9] = 0;
              }
              FUN_004a9cb0(local_8,psVar9);
            }
            FUN_00494b00(local_8,param_1);
          }
          else {
            if (local_24 == 0) {
              return;
            }
            if (*(char *)(local_8 + 0x38) != '\0') {
              return;
            }
          }
        }
        puVar4 = param_2;
      }
    }
  }
  return;
}


/* FUN_0049ab00 @ 0049ab00  kind=lib  attributed-by=lib-island  size=317 */

void __cdecl FUN_0049ab00(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  
  puVar6 = *(undefined4 **)(param_2 + 0x10);
  while (puVar6 != (undefined4 *)0x0) {
    if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
      if (puVar6[4] == 0) {
        uVar2 = puVar6[3];
        if (uVar2 == 0) {
          pbVar9 = (byte *)puVar6[2];
        }
        else {
          pbVar9 = *(byte **)(uVar2 + 8);
        }
        uVar8 = 0;
        if (pbVar9 != (byte *)0x0) {
          bVar1 = *pbVar9;
          pbVar7 = pbVar9;
          while (bVar1 != 0) {
            pbVar7 = pbVar7 + 1;
            bVar1 = *pbVar7;
          }
          uVar8 = (int)pbVar7 - (int)pbVar9 & 0x3fffffff;
        }
        FUN_0049d6f0((uint *)(*(int *)(param_2 + 0x40) + 0x38),pbVar9,uVar8,uVar2);
      }
      else {
        *(undefined4 *)(puVar6[4] + 0xc) = puVar6[3];
      }
      if (puVar6[3] != 0) {
        *(undefined4 *)(puVar6[3] + 0x10) = puVar6[4];
      }
    }
    puVar3 = (undefined4 *)puVar6[7];
    if (puVar3 != (undefined4 *)0x0) {
      iVar4 = puVar3[7];
      FUN_00498790(param_1,*(undefined4 **)(iVar4 + 0x14));
      FUN_00499060(param_1,*(int **)(iVar4 + 0x18));
      puVar5 = *(undefined4 **)(iVar4 + 8);
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00472d10(param_1,puVar5);
        FUN_00494b00(param_1,puVar5);
      }
      FUN_00498790(param_1,(undefined4 *)puVar3[3]);
      FUN_00494b00(param_1,puVar3);
    }
    puVar3 = (undefined4 *)puVar6[8];
    if (puVar3 != (undefined4 *)0x0) {
      iVar4 = puVar3[7];
      FUN_00498790(param_1,*(undefined4 **)(iVar4 + 0x14));
      FUN_00499060(param_1,*(int **)(iVar4 + 0x18));
      puVar5 = *(undefined4 **)(iVar4 + 8);
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00472d10(param_1,puVar5);
        FUN_00494b00(param_1,puVar5);
      }
      FUN_00498790(param_1,(undefined4 *)puVar3[3]);
      FUN_00494b00(param_1,puVar3);
    }
    puVar3 = (undefined4 *)puVar6[1];
    FUN_00494b00(param_1,puVar6);
    puVar6 = puVar3;
  }
  return;
}


/* FUN_0049ac40 @ 0049ac40  kind=lib  attributed-by=lib-string  size=230 */

void __cdecl FUN_0049ac40(int *param_1,short *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  byte *pbVar5;
  
  iVar1 = *param_1;
  if ((((*(uint *)(iVar1 + 0x18) & 0x40000) != 0) && ((*(byte *)((int)param_3 + 0x2a) & 0x10) == 0))
     && (param_3[3] == 0)) {
    piVar2 = FUN_0049d4d0(param_1);
    iVar3 = FUN_0049ae70(param_3);
    if (iVar3 == 0) {
      iVar3 = param_3[4];
      if (iVar3 == 0) {
        return;
      }
      while (*(char *)(iVar3 + 0x18) == '\0') {
        iVar3 = *(int *)(iVar3 + 4);
        if (iVar3 == 0) {
          return;
        }
      }
      iVar3 = FUN_004b6b80(piVar2);
      FUN_004ae830(piVar2,0x76,1,iVar3);
    }
    else {
      iVar3 = 0;
    }
    pbVar5 = (byte *)0x0;
    *(undefined1 *)((int)param_1 + 0x1ca) = 1;
    psVar4 = FUN_004a9d60(iVar1,param_2,0);
    FUN_00494ec0(param_1,psVar4,pbVar5);
    *(undefined1 *)((int)param_1 + 0x1ca) = 0;
    FUN_004ae830(piVar2,0x76,0,piVar2[7] + 2);
    FUN_0049d510(param_1,2,(int *)"foreign key constraint failed",0xfffffffe);
    if ((iVar3 != 0) && (piVar2[10] != 0)) {
      *(int *)(piVar2[10] - (iVar3 * 4 + 4)) = piVar2[7];
    }
  }
  return;
}


/* FUN_0049ad30 @ 0049ad30  kind=lib  attributed-by=lib-island  size=310 */

uint __cdecl FUN_0049ad30(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint *local_c;
  uint local_8;
  
  uVar8 = 0;
  if ((*(uint *)(*param_1 + 0x18) & 0x40000) == 0) {
    return 0;
  }
  for (iVar2 = param_2[4]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    iVar9 = *(int *)(iVar2 + 0x14);
    if (0 < iVar9) {
      piVar6 = (int *)(iVar2 + 0x24);
      do {
        if (*piVar6 < 0x20) {
          uVar4 = 1 << ((byte)*piVar6 & 0x1f);
        }
        else {
          uVar4 = 0xffffffff;
        }
        uVar8 = uVar8 | uVar4;
        piVar6 = piVar6 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  pbVar3 = (byte *)*param_2;
  local_8 = 0;
  if (pbVar3 != (byte *)0x0) {
    bVar1 = *pbVar3;
    pbVar10 = pbVar3;
    while (bVar1 != 0) {
      pbVar10 = pbVar10 + 1;
      bVar1 = *pbVar10;
    }
    local_8 = (int)pbVar10 - (int)pbVar3 & 0x3fffffff;
  }
  local_c = (uint *)(param_2[0x10] + 0x38);
  uVar4 = 0;
  if (*(int *)(param_2[0x10] + 0x44) != 0) {
    uVar7 = local_8;
    pbVar10 = pbVar3;
    if (local_8 != 0) {
      do {
        uVar7 = uVar7 - 1;
        uVar4 = uVar4 ^ (uint)(byte)(&DAT_00569620)[*pbVar10] ^ uVar4 * 8;
        pbVar10 = pbVar10 + 1;
      } while (0 < (int)uVar7);
    }
    uVar4 = uVar4 % *local_c;
  }
  puVar5 = FUN_00479af0((int)local_c,pbVar3,local_8,uVar4);
  if (puVar5 != (undefined4 *)0x0) {
    for (iVar2 = puVar5[2]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      local_c = (uint *)0x0;
      FUN_0047f9a0(param_1,(int)param_2,iVar2,(int *)&local_c,(undefined4 *)0x0);
      if ((local_c != (uint *)0x0) && (uVar4 = local_c[9], 0 < (int)uVar4)) {
        piVar6 = (int *)local_c[1];
        do {
          if (*piVar6 < 0x20) {
            uVar7 = 1 << ((byte)*piVar6 & 0x1f);
          }
          else {
            uVar7 = 0xffffffff;
          }
          uVar8 = uVar8 | uVar7;
          piVar6 = piVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
  }
  return uVar8;
}


/* FUN_0049ae70 @ 0049ae70  kind=lib  attributed-by=lib-island  size=94 */

undefined4 __cdecl FUN_0049ae70(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  
  pbVar2 = (byte *)*param_1;
  uVar7 = 0;
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    pbVar6 = pbVar2;
    while (bVar1 != 0) {
      pbVar6 = pbVar6 + 1;
      bVar1 = *pbVar6;
    }
    uVar7 = (int)pbVar6 - (int)pbVar2 & 0x3fffffff;
  }
  puVar5 = (uint *)(param_1[0x10] + 0x38);
  if (*(int *)(param_1[0x10] + 0x44) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004bd210(pbVar2,uVar7);
    uVar3 = uVar3 % *puVar5;
  }
  puVar4 = FUN_00479af0((int)puVar5,pbVar2,uVar7,uVar3);
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  return puVar4[2];
}


/* FUN_0049aed0 @ 0049aed0  kind=lib  attributed-by=lib-island  size=529 */

undefined4 __cdecl FUN_0049aed0(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  ushort uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  
  if ((*(uint *)(*param_1 + 0x18) & 0x40000) != 0) {
    if (param_3 == 0) {
      iVar3 = FUN_0049ae70(param_2);
      if ((iVar3 != 0) || (param_2[4] != 0)) {
        return 1;
      }
    }
    else {
      for (iVar3 = param_2[4]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
        iVar8 = 0;
        if (0 < *(int *)(iVar3 + 0x14)) {
          piVar9 = (int *)(iVar3 + 0x24);
          do {
            if (-1 < *(int *)(param_3 + *piVar9 * 4)) {
              return 1;
            }
            if ((*piVar9 == (int)*(short *)(param_2 + 9)) && (param_4 != 0)) {
              return 1;
            }
            iVar8 = iVar8 + 1;
            piVar9 = piVar9 + 2;
          } while (iVar8 < *(int *)(iVar3 + 0x14));
        }
      }
      pbVar6 = (byte *)*param_2;
      uVar13 = 0;
      if (pbVar6 != (byte *)0x0) {
        bVar2 = *pbVar6;
        pbVar12 = pbVar6;
        while (bVar2 != 0) {
          pbVar12 = pbVar12 + 1;
          bVar2 = *pbVar12;
        }
        uVar13 = (int)pbVar12 - (int)pbVar6 & 0x3fffffff;
      }
      puVar4 = (uint *)(param_2[0x10] + 0x38);
      if (*(int *)(param_2[0x10] + 0x44) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        uVar10 = uVar13;
        pbVar12 = pbVar6;
        if (uVar13 != 0) {
          do {
            uVar10 = uVar10 - 1;
            uVar14 = uVar14 ^ (uint)(byte)(&DAT_00569620)[*pbVar12] ^ uVar14 * 8;
            pbVar12 = pbVar12 + 1;
          } while (0 < (int)uVar10);
        }
        uVar14 = uVar14 % *puVar4;
      }
      puVar5 = FUN_00479af0((int)puVar4,pbVar6,uVar13,uVar14);
      if (puVar5 != (undefined4 *)0x0) {
        for (iVar3 = puVar5[2]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
          param_1 = (int *)0x0;
          if (0 < *(int *)(iVar3 + 0x14)) {
            puVar5 = (undefined4 *)(iVar3 + 0x28);
            do {
              iVar8 = 0;
              if (0 < *(short *)((int)param_2 + 0x26)) {
                puVar11 = (undefined4 *)param_2[1];
                do {
                  if ((byte *)*puVar5 == (byte *)0x0) {
                    uVar7 = *(ushort *)((int)puVar11 + 0x16) & 1;
                  }
                  else {
                    pbVar6 = (byte *)*puVar11;
                    bVar2 = *pbVar6;
                    pbVar12 = (byte *)*puVar5;
                    while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar12]))) {
                      pbVar1 = pbVar6 + 1;
                      pbVar6 = pbVar6 + 1;
                      pbVar12 = pbVar12 + 1;
                      bVar2 = *pbVar1;
                    }
                    uVar7 = (ushort)((&DAT_00569620)[*pbVar6] == (&DAT_00569620)[*pbVar12]);
                  }
                  if (uVar7 != 0) {
                    if (-1 < *(int *)(param_3 + iVar8 * 4)) {
                      return 1;
                    }
                    if ((iVar8 == *(short *)(param_2 + 9)) && (param_4 != 0)) {
                      return 1;
                    }
                  }
                  iVar8 = iVar8 + 1;
                  puVar11 = puVar11 + 6;
                } while (iVar8 < *(short *)((int)param_2 + 0x26));
              }
              param_1 = (int *)((int)param_1 + 1);
              puVar5 = puVar5 + 2;
            } while ((int)param_1 < *(int *)(iVar3 + 0x14));
          }
        }
      }
    }
  }
  return 0;
}


/* FUN_0049b0f0 @ 0049b0f0  kind=lib  attributed-by=lib-island  size=113 */

void __cdecl FUN_0049b0f0(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  pbVar2 = *(byte **)(param_2 + 0x18);
  uVar5 = 0;
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    pbVar4 = pbVar2;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
    }
    uVar5 = (int)pbVar4 - (int)pbVar2 & 0x3fffffff;
  }
  uVar6 = ((byte)(&DAT_00569620)[*pbVar2] + uVar5) % 0x17;
  iVar3 = FUN_0047c390(param_1,uVar6,pbVar2,uVar5);
  if (iVar3 == 0) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + uVar6 * 4);
    *(int *)(param_1 + uVar6 * 4) = param_2;
    return;
  }
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar3 + 8);
  *(int *)(iVar3 + 8) = param_2;
  return;
}


/* FUN_0049b170 @ 0049b170  kind=lib  attributed-by=lib-island  size=104 */

undefined4 __cdecl FUN_0049b170(int param_1,undefined4 param_2)

{
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_14 = &local_10;
  local_10 = param_2;
  local_1c = 0;
  local_24 = 0x479150;
  local_c = 0;
  local_8 = 0;
  FUN_004bb0b0(&local_24,*(int **)(param_1 + 0x10));
  if ((local_c < 1) && (local_8 != 0)) {
    return 0;
  }
  return 1;
}


/* FUN_0049b1e0 @ 0049b1e0  kind=lib  attributed-by=lib-island  size=4187 */

void __cdecl
FUN_0049b1e0(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8,undefined4 param_9,int *param_10)

{
  undefined2 *puVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  size_t _Size;
  uint uVar16;
  undefined1 uVar17;
  int local_54;
  int *local_50;
  int *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  int local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_c = 0;
  local_20 = 0;
  if ((param_6 == 0) || (param_7 == 0)) {
    local_30 = param_4;
  }
  else {
    local_30 = param_6;
  }
  piVar6 = (int *)param_1[2];
  local_14 = *param_1;
  local_18 = piVar6;
  if (piVar6 == (int *)0x0) {
    piVar6 = FUN_004af150(local_14);
    param_1[2] = (int)piVar6;
    local_18 = piVar6;
    if (piVar6 != (int *)0x0) {
      FUN_004ae760(piVar6,0x94);
    }
  }
  local_24 = (int *)(int)*(short *)((int)param_2 + 0x26);
  iVar14 = param_4 + 1;
  local_1c = (int *)0x0;
  local_2c = iVar14;
  if (0 < (int)local_24) {
    local_10 = (int *)0x0;
    do {
      piVar15 = local_10;
      local_10 = piVar15;
      if (local_1c != (int *)(int)*(short *)(param_2 + 9)) {
        piVar12 = (int *)(uint)*(byte *)((int)local_10 + 0x14 + param_2[1]);
        if (piVar12 != (int *)0x0) {
          piVar13 = param_8;
          if ((param_8 == (int *)0x63) && (piVar13 = piVar12, piVar12 == (int *)0x63)) {
            piVar13 = (int *)0x2;
          }
          else if ((piVar13 == (int *)0x5) && (*(int *)((int)local_10 + 4 + param_2[1]) == 0)) {
            piVar13 = (int *)0x2;
          }
          switch(piVar13) {
          case (int *)0x2:
            piVar12 = param_1;
            if ((int *)param_1[0x6c] != (int *)0x0) {
              piVar12 = (int *)param_1[0x6c];
            }
            *(undefined1 *)(piVar12 + 6) = 1;
          case (int *)0x1:
          case (int *)0x3:
            FUN_004ae890(piVar6,5,0x13,piVar13,iVar14);
            local_28 = (int *)FUN_004a02d0(local_14,(byte *)"%s.%s may not be NULL");
            iVar7 = *piVar6;
            if ((piVar6[1] == 0) || (*(char *)(iVar7 + 0x38) != '\0')) {
              FUN_0047bc80(iVar7,0xffffffff,local_28);
              local_10 = piVar15;
            }
            else {
              iVar9 = piVar6[7] + -1;
              local_34 = (undefined4 *)(piVar6[1] + iVar9 * 0x14);
              FUN_0047bc80(iVar7,(int)*(char *)(piVar6[1] + 1 + iVar9 * 0x14),
                           *(int **)(piVar6[1] + 0x10 + iVar9 * 0x14));
              *(undefined4 *)((int)local_34 + 0x10) = 0;
              if (local_28 == (int *)0x0) {
                *(undefined4 *)((int)local_34 + 0x10) = 0;
                *(undefined1 *)((int)local_34 + 1) = 0;
                local_10 = piVar15;
              }
              else {
                *(int **)((int)local_34 + 0x10) = local_28;
                *(undefined1 *)((int)local_34 + 1) = 0xff;
                local_10 = piVar15;
              }
            }
            break;
          case (int *)0x4:
            FUN_004ae830(piVar6,0x49,iVar14,param_9);
            local_10 = piVar15;
            break;
          default:
            uVar16 = piVar6[7];
            if (((int)uVar16 < piVar6[8]) || (iVar7 = FUN_0047de10(piVar6), iVar7 == 0)) {
              iVar7 = piVar6[1];
              piVar6[7] = piVar6[7] + 1;
              *(undefined2 *)(iVar7 + uVar16 * 0x14) = 0x4a;
              *(undefined1 *)(iVar7 + 3 + uVar16 * 0x14) = 0;
              *(int *)(iVar7 + 4 + uVar16 * 0x14) = iVar14;
              *(undefined4 *)(iVar7 + 8 + uVar16 * 0x14) = 0;
              *(undefined4 *)(iVar7 + 0xc + uVar16 * 0x14) = 0;
              *(undefined4 *)(iVar7 + 0x10 + uVar16 * 0x14) = 0;
            }
            else {
              uVar16 = 1;
            }
            pbVar3 = *(byte **)((int)local_10 + 4 + param_2[1]);
            if ((pbVar3 == (byte *)0x0) || (*pbVar3 != 0x84)) {
              iVar7 = FUN_00497780(param_1,pbVar3,iVar14);
              if ((iVar7 != iVar14) && (piVar15 = (int *)param_1[2], piVar15 != (int *)0x0)) {
                uVar17 = 0xf;
                goto LAB_0049b418;
              }
            }
            else {
              iVar7 = *(int *)(pbVar3 + 0x18);
              uVar17 = 0xe;
              piVar15 = (int *)param_1[2];
LAB_0049b418:
              FUN_004ae830(piVar15,uVar17,iVar7,iVar14);
            }
            if ((-1 < (int)uVar16) && (uVar16 < (uint)piVar6[7])) {
              *(int *)(piVar6[1] + 8 + uVar16 * 0x14) = piVar6[7];
            }
          }
        }
      }
      local_1c = (int *)((int)local_1c + 1);
      local_10 = (int *)((int)local_10 + 0x18);
      iVar14 = iVar14 + 1;
    } while ((int)local_1c < (int)local_24);
  }
  local_10 = (int *)param_2[6];
  if ((local_10 != (int *)0x0) && ((*(uint *)(local_14 + 0x18) & 0x400) == 0)) {
    param_1[0x16] = local_2c;
    piVar15 = (int *)0x2;
    if (param_8 != (int *)0x63) {
      piVar15 = param_8;
    }
    local_28 = (int *)0x0;
    if (0 < *local_10) {
      local_1c = (int *)0x0;
      do {
        uVar16 = piVar6[9];
        piVar6[9] = uVar16 + 1;
        if ((uVar16 & uVar16 - 1) == 0) {
          local_34 = (undefined4 *)piVar6[10];
          local_24 = (int *)*piVar6;
          local_8 = FUN_00494cf0((int)local_24,local_34,uVar16 * 8 + 4);
          if (local_8 == (undefined4 *)0x0) {
            FUN_00494b00((int)local_24,local_34);
          }
          piVar6[10] = (int)local_8;
        }
        piVar12 = local_1c;
        if (piVar6[10] != 0) {
          *(undefined4 *)(piVar6[10] + uVar16 * 4) = 0xffffffff;
        }
        local_34 = (undefined4 *)(-uVar16 - 1);
        FUN_00498b60(param_1,*(byte **)((int)local_1c + local_10[2]),(int)local_34,8);
        if (piVar15 == (int *)0x4) {
          iVar14 = piVar6[7];
          if ((iVar14 < piVar6[8]) || (iVar7 = FUN_0047de10(piVar6), iVar7 == 0)) {
            iVar7 = piVar6[1];
            piVar6[7] = piVar6[7] + 1;
            *(undefined2 *)(iVar7 + iVar14 * 0x14) = 1;
            *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 4 + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 8 + iVar14 * 0x14) = param_9;
            *(undefined4 *)(iVar7 + 0xc + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 0x10 + iVar14 * 0x14) = 0;
          }
        }
        else {
          if (piVar15 == (int *)0x5) {
            piVar15 = (int *)0x2;
          }
          if (*(int *)((int)piVar12 + local_10[2] + 4) == 0) {
            FUN_0049d510(param_1,(int)piVar15,(int *)0x0,0xffffffff);
            local_1c = piVar12;
          }
          else {
            piVar13 = (int *)FUN_004a02d0(local_14,(byte *)"constraint %s failed");
            FUN_0049d510(param_1,(int)piVar15,piVar13,0xffffffff);
            local_1c = piVar12;
          }
        }
        if (piVar6[10] != 0) {
          *(int *)(piVar6[10] - ((int)local_34 * 4 + 4)) = piVar6[7];
        }
        local_28 = (int *)((int)local_28 + 1);
        local_1c = local_1c + 5;
      } while ((int)local_28 < *local_10);
    }
  }
  if (param_6 != 0) {
    piVar15 = param_8;
    if ((param_8 == (int *)0x63) &&
       (piVar15 = (int *)(uint)*(byte *)((int)param_2 + 0x2b),
       (int *)(uint)*(byte *)((int)param_2 + 0x2b) == (int *)0x63)) {
      piVar15 = (int *)0x2;
    }
    if (param_7 != 0) {
      local_c = piVar6[7];
      if (((int)local_c < piVar6[8]) || (iVar14 = FUN_0047de10(piVar6), iVar14 == 0)) {
        iVar14 = piVar6[1];
        piVar6[7] = piVar6[7] + 1;
        *(undefined2 *)(iVar14 + local_c * 0x14) = 0x4c;
        *(undefined1 *)(iVar14 + 3 + local_c * 0x14) = 0;
        *(int *)(iVar14 + 4 + local_c * 0x14) = param_4;
        *(undefined4 *)(iVar14 + 8 + local_c * 0x14) = 0;
        *(int *)(iVar14 + 0xc + local_c * 0x14) = param_6;
        *(undefined4 *)(iVar14 + 0x10 + local_c * 0x14) = 0;
      }
      else {
        local_c = 1;
      }
    }
    uVar16 = piVar6[7];
    if (((int)uVar16 < piVar6[8]) || (iVar14 = FUN_0047de10(piVar6), iVar14 == 0)) {
      iVar14 = piVar6[1];
      piVar6[7] = piVar6[7] + 1;
      *(int *)(iVar14 + 4 + uVar16 * 0x14) = param_3;
      *(undefined2 *)(iVar14 + uVar16 * 0x14) = 0x36;
      *(undefined1 *)(iVar14 + 3 + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar14 + 8 + uVar16 * 0x14) = 0;
      *(int *)(iVar14 + 0xc + uVar16 * 0x14) = param_4;
      *(undefined4 *)(iVar14 + 0x10 + uVar16 * 0x14) = 0;
    }
    else {
      uVar16 = 1;
    }
    switch(piVar15) {
    case (int *)0x4:
      iVar14 = piVar6[7];
      if ((iVar14 < piVar6[8]) || (iVar7 = FUN_0047de10(piVar6), iVar7 == 0)) {
        iVar7 = piVar6[1];
        piVar6[7] = piVar6[7] + 1;
        *(undefined2 *)(iVar7 + iVar14 * 0x14) = 1;
        *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar7 + 4 + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar7 + 8 + iVar14 * 0x14) = param_9;
        *(undefined4 *)(iVar7 + 0xc + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar7 + 0x10 + iVar14 * 0x14) = 0;
      }
      break;
    case (int *)0x5:
      piVar15 = (int *)0x0;
      if ((((*(uint *)(local_14 + 0x18) & 0x20000) == 0) ||
          (piVar15 = (int *)FUN_004ab0e0(param_1,param_2,0x6a,(int *)0x0,(uint *)0x0),
          piVar15 == (int *)0x0)) &&
         (((*(uint *)(*param_1 + 0x18) & 0x40000) == 0 ||
          ((iVar14 = FUN_0049ae70(param_2), iVar14 == 0 && (param_2[4] == 0)))))) {
        if (param_2[2] != 0) {
          piVar15 = param_1;
          if ((int *)param_1[0x6c] != (int *)0x0) {
            piVar15 = (int *)param_1[0x6c];
          }
          *(undefined1 *)((int)piVar15 + 0x17) = 1;
          FUN_0049c860(param_1,(int)param_2,param_3,(int *)0x0);
        }
        local_20 = 1;
      }
      else {
        piVar12 = param_1;
        if ((int *)param_1[0x6c] != (int *)0x0) {
          piVar12 = (int *)param_1[0x6c];
        }
        *(undefined1 *)((int)piVar12 + 0x17) = 1;
        FUN_0049c510(param_1,param_2,param_3,param_4,0,piVar15,5);
        local_20 = 1;
      }
      break;
    default:
      piVar15 = (int *)0x2;
    case (int *)0x1:
    case (int *)0x2:
    case (int *)0x3:
      FUN_0049d510(param_1,(int)piVar15,(int *)"PRIMARY KEY must be unique",0xfffffffe);
    }
    if ((-1 < (int)uVar16) && (uVar16 < (uint)piVar6[7])) {
      *(int *)(piVar6[1] + 8 + uVar16 * 0x14) = piVar6[7];
    }
    if (((param_7 != 0) && (-1 < (int)local_c)) && (local_c < (uint)piVar6[7])) {
      *(int *)(piVar6[1] + 8 + local_c * 0x14) = piVar6[7];
    }
  }
  local_c = 0;
  local_8 = (undefined4 *)param_2[2];
  do {
    if (local_8 == (undefined4 *)0x0) {
      if (param_10 != (int *)0x0) {
        *param_10 = local_20;
      }
      return;
    }
    if (*(int *)(param_5 + local_c * 4) != 0) {
      piVar15 = (int *)param_1[0x10];
      iVar14 = *(int *)((int)local_8 + 0x24) + 1;
      if (param_1[0xf] < iVar14) {
        piVar15 = (int *)(param_1[0x13] + 1);
        param_1[0x13] = param_1[0x13] + iVar14;
      }
      else {
        param_1[0x10] = iVar14 + (int)piVar15;
        param_1[0xf] = param_1[0xf] - iVar14;
      }
      local_10 = (int *)0x0;
      piVar12 = piVar15;
      if (0 < *(int *)((int)local_8 + 0x24)) {
        do {
          local_1c = piVar12;
          iVar14 = piVar6[7];
          local_34 = *(undefined4 **)(*(int *)((int)local_8 + 4) + (int)local_10 * 4);
          iVar7 = piVar6[8];
          if (local_34 == (undefined4 *)(int)*(short *)(param_2 + 9)) {
            if (iVar7 <= iVar14) {
              if (iVar7 == 0) {
                iVar7 = 0x33;
              }
              else {
                iVar7 = iVar7 * 2;
              }
              puVar8 = FUN_00494cf0(*piVar6,(undefined4 *)piVar6[1],iVar7 * 0x14);
              if (puVar8 == (undefined4 *)0x0) goto LAB_0049b9e9;
              iVar7 = *piVar6;
              if (((iVar7 == 0) || (puVar8 < *(undefined4 **)(iVar7 + 0x104))) ||
                 (*(undefined4 **)(iVar7 + 0x108) <= puVar8)) {
                uVar16 = (*DAT_00582af0._4_4_)(puVar8);
              }
              else {
                uVar16 = (uint)*(ushort *)(iVar7 + 0xe8);
              }
              piVar6[8] = uVar16 / 0x14;
              piVar6[1] = (int)puVar8;
            }
            iVar7 = piVar6[1];
            piVar6[7] = piVar6[7] + 1;
            *(int *)(iVar7 + 4 + iVar14 * 0x14) = param_4;
            *(undefined2 *)(iVar7 + iVar14 * 0x14) = 0xf;
            *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
            *(int **)(iVar7 + 8 + iVar14 * 0x14) = local_1c;
            *(undefined4 *)(iVar7 + 0xc + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 0x10 + iVar14 * 0x14) = 0;
          }
          else {
            if (iVar7 <= iVar14) {
              if (iVar7 == 0) {
                iVar7 = 0x33;
              }
              else {
                iVar7 = iVar7 * 2;
              }
              puVar8 = FUN_00494cf0(*piVar6,(undefined4 *)piVar6[1],iVar7 * 0x14);
              if (puVar8 == (undefined4 *)0x0) goto LAB_0049b9e9;
              iVar7 = *piVar6;
              if (((iVar7 == 0) || (puVar8 < *(undefined4 **)(iVar7 + 0x104))) ||
                 (*(undefined4 **)(iVar7 + 0x108) <= puVar8)) {
                uVar16 = (*DAT_00582af0._4_4_)(puVar8);
              }
              else {
                uVar16 = (uint)*(ushort *)(iVar7 + 0xe8);
              }
              piVar6[8] = uVar16 / 0x14;
              piVar6[1] = (int)puVar8;
            }
            piVar6[7] = piVar6[7] + 1;
            puVar1 = (undefined2 *)(piVar6[1] + iVar14 * 0x14);
            *puVar1 = 0xf;
            *(undefined1 *)((int)puVar1 + 3) = 0;
            *(int *)(puVar1 + 2) = (int)local_34 + local_2c;
            *(int **)(puVar1 + 4) = local_1c;
            *(undefined4 *)(puVar1 + 6) = 0;
            *(undefined4 *)(puVar1 + 8) = 0;
          }
LAB_0049b9e9:
          local_1c = (int *)((int)local_1c + 1);
          local_10 = (int *)((int)local_10 + 1);
          piVar12 = local_1c;
        } while ((int)local_10 < *(int *)((int)local_8 + 0x24));
      }
      iVar14 = piVar6[7];
      iVar7 = piVar6[8];
      if (iVar14 < iVar7) {
LAB_0049ba6b:
        piVar6[7] = piVar6[7] + 1;
        puVar1 = (undefined2 *)(piVar6[1] + iVar14 * 0x14);
        *(int *)(puVar1 + 2) = param_4;
        *puVar1 = 0xf;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(int *)(puVar1 + 4) = (int)local_10 + (int)piVar15;
        *(undefined4 *)(puVar1 + 6) = 0;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      else {
        if (iVar7 == 0) {
          iVar7 = 0x33;
        }
        else {
          iVar7 = iVar7 * 2;
        }
        puVar8 = FUN_00494cf0(*piVar6,(undefined4 *)piVar6[1],iVar7 * 0x14);
        if (puVar8 != (undefined4 *)0x0) {
          iVar7 = *piVar6;
          if (((iVar7 == 0) || (puVar8 < *(undefined4 **)(iVar7 + 0x104))) ||
             (*(undefined4 **)(iVar7 + 0x108) <= puVar8)) {
            uVar16 = (*DAT_00582af0._4_4_)(puVar8);
          }
          else {
            uVar16 = (uint)*(ushort *)(iVar7 + 0xe8);
          }
          piVar6[8] = uVar16 / 0x14;
          piVar6[1] = (int)puVar8;
          goto LAB_0049ba6b;
        }
      }
      local_28 = *(int **)(param_5 + local_c * 4);
      local_34 = (undefined4 *)piVar6[7];
      iVar14 = *(int *)((int)local_8 + 0x24);
      iVar7 = piVar6[8];
      if ((int)local_34 < iVar7) {
LAB_0049bb22:
        iVar7 = piVar6[1];
        piVar6[7] = piVar6[7] + 1;
        *(int **)(iVar7 + 4 + (int)local_34 * 0x14) = piVar15;
        *(undefined2 *)(iVar7 + (int)local_34 * 0x14) = 0x1f;
        *(undefined1 *)(iVar7 + 3 + (int)local_34 * 0x14) = 0;
        *(int *)(iVar7 + 8 + (int)local_34 * 0x14) = iVar14 + 1;
        *(int **)(iVar7 + 0xc + (int)local_34 * 0x14) = local_28;
        *(undefined4 *)(iVar7 + 0x10 + (int)local_34 * 0x14) = 0;
      }
      else {
        if (iVar7 == 0) {
          iVar7 = 0x33;
        }
        else {
          iVar7 = iVar7 * 2;
        }
        puVar8 = FUN_00494cf0(*piVar6,(undefined4 *)piVar6[1],iVar7 * 0x14);
        if (puVar8 != (undefined4 *)0x0) {
          iVar7 = *piVar6;
          if (((iVar7 == 0) || (puVar8 < *(undefined4 **)(iVar7 + 0x104))) ||
             (*(undefined4 **)(iVar7 + 0x108) <= puVar8)) {
            uVar16 = (*DAT_00582af0._4_4_)(puVar8);
          }
          else {
            uVar16 = (uint)*(ushort *)(iVar7 + 0xe8);
          }
          piVar6[8] = uVar16 / 0x14;
          piVar6[1] = (int)puVar8;
          goto LAB_0049bb22;
        }
      }
      piVar12 = (int *)FUN_0049db70(piVar6,(int)local_8);
      iVar14 = piVar6[1];
      iVar7 = *piVar6;
      if ((iVar14 == 0) || (*(char *)(iVar7 + 0x38) != '\0')) {
        FUN_0047bc80(iVar7,0,piVar12);
      }
      else {
        iVar9 = iVar14 + (piVar6[7] + -1) * 0x14;
        local_28 = (int *)iVar9;
        FUN_0047bc80(iVar7,(int)*(char *)(iVar9 + 1),
                     *(int **)(iVar14 + 0x10 + (piVar6[7] + -1) * 0x14));
        *(undefined4 *)(iVar9 + 0x10) = 0;
        if (piVar12 == (int *)0x0) {
          *(undefined4 *)(iVar9 + 0x10) = 0;
          *(undefined1 *)(iVar9 + 1) = 0;
        }
        else {
          cVar2 = (char)*piVar12;
          piVar13 = piVar12;
          while (cVar2 != '\0') {
            piVar13 = (int *)((int)piVar13 + 1);
            cVar2 = *(char *)piVar13;
          }
          uVar16 = (int)piVar13 - (int)piVar12 & 0x3fffffff;
          local_34 = FUN_00494b90(*piVar6,uVar16 + 1);
          if (local_34 != (undefined4 *)0x0) {
            memcpy(local_34,piVar12,uVar16);
            *(undefined1 *)((int)local_34 + uVar16) = 0;
          }
          *(undefined4 **)((int)local_28 + 0x10) = local_34;
          *(undefined1 *)((int)local_28 + 1) = 0xff;
        }
      }
      piVar12 = local_18;
      iVar14 = *(int *)((int)local_8 + 0x24);
      local_28 = param_1 + 0x19;
      piVar6 = param_1 + 0x1d;
      iVar7 = 10;
      do {
        iVar9 = *piVar6;
        if (((int)piVar15 <= iVar9) && (iVar9 <= iVar14 + (int)piVar15)) {
          if ((char)piVar6[-2] != '\0') {
            if (*(byte *)((int)param_1 + 0x13) < 8) {
              param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar9;
              *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar6 + -2) = 0;
          }
          *piVar6 = 0;
        }
        piVar6 = piVar6 + 6;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      piVar6 = (int *)(uint)*(byte *)((int)local_8 + 0x2c);
      if (piVar6 == (int *)0x0) {
        iVar14 = *(int *)((int)local_8 + 0x24);
        local_34 = (undefined4 *)(iVar14 + 1);
        piVar6 = param_1 + 0x1d;
        iVar7 = 10;
        do {
          iVar9 = *piVar6;
          if (((int)piVar15 <= iVar9) && (iVar9 <= (int)piVar15 + iVar14)) {
            if ((char)piVar6[-2] != '\0') {
              if (*(byte *)((int)param_1 + 0x13) < 8) {
                param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar9;
                *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
              }
              *(undefined1 *)(piVar6 + -2) = 0;
            }
            *piVar6 = 0;
          }
          piVar6 = piVar6 + 6;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        piVar6 = local_18;
        if (param_1[0xf] < (int)local_34) {
          param_1[0xf] = (int)local_34;
          param_1[0x10] = (int)piVar15;
        }
      }
      else {
        local_1c = param_8;
        if ((param_8 == (int *)0x63) && (local_1c = piVar6, piVar6 == (int *)0x63)) {
          local_1c = (int *)0x2;
        }
        if (local_20 != 0) {
          if (local_1c == (int *)0x4) {
            local_1c = (int *)0x5;
          }
          else if (local_1c == (int *)0x3) {
            local_1c = (int *)0x2;
          }
        }
        if (*(char *)((int)param_1 + 0x13) == '\0') {
          param_1[0x13] = param_1[0x13] + 1;
          local_10 = (int *)param_1[0x13];
        }
        else {
          bVar5 = *(char *)((int)param_1 + 0x13) - 1;
          *(byte *)((int)param_1 + 0x13) = bVar5;
          local_10 = (int *)param_1[bVar5 + 7];
        }
        iVar14 = local_18[7];
        iVar7 = local_18[8];
        if (iVar14 < iVar7) {
LAB_0049bda9:
          iVar7 = piVar12[1];
          piVar12[7] = piVar12[7] + 1;
          *(int *)(iVar7 + 4 + iVar14 * 0x14) = local_30;
          *(undefined2 *)(iVar7 + iVar14 * 0x14) = 0xf;
          *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
          *(int **)(iVar7 + 8 + iVar14 * 0x14) = local_10;
          *(undefined4 *)(iVar7 + 0xc + iVar14 * 0x14) = 0;
          *(undefined4 *)(iVar7 + 0x10 + iVar14 * 0x14) = 0;
        }
        else {
          if (iVar7 == 0) {
            iVar7 = 0x33;
          }
          else {
            iVar7 = iVar7 * 2;
          }
          puVar8 = FUN_00494cf0(*local_18,(undefined4 *)local_18[1],iVar7 * 0x14);
          if (puVar8 != (undefined4 *)0x0) {
            iVar7 = *piVar12;
            if (((iVar7 == 0) || (puVar8 < *(undefined4 **)(iVar7 + 0x104))) ||
               (*(undefined4 **)(iVar7 + 0x108) <= puVar8)) {
              uVar16 = (*DAT_00582af0._4_4_)(puVar8);
            }
            else {
              uVar16 = (uint)*(ushort *)(iVar7 + 0xe8);
            }
            piVar12[8] = uVar16 / 0x14;
            piVar12[1] = (int)puVar8;
            goto LAB_0049bda9;
          }
        }
        uVar16 = piVar12[7];
        iVar14 = piVar12[8];
        local_34 = (undefined4 *)uVar16;
        if ((int)uVar16 < iVar14) {
LAB_0049be4e:
          piVar12[7] = piVar12[7] + 1;
          puVar1 = (undefined2 *)(piVar12[1] + uVar16 * 0x14);
          *puVar1 = 0x35;
          *(uint *)(puVar1 + 2) = local_c + 1 + param_3;
          *(undefined1 *)((int)puVar1 + 3) = 0;
          *(undefined4 *)(puVar1 + 4) = 0;
          *(int **)(puVar1 + 6) = local_10;
          *(undefined4 *)(puVar1 + 8) = 0;
        }
        else {
          if (iVar14 == 0) {
            iVar14 = 0x33;
          }
          else {
            iVar14 = iVar14 * 2;
          }
          puVar8 = FUN_00494cf0(*piVar12,(undefined4 *)piVar12[1],iVar14 * 0x14);
          if (puVar8 != (undefined4 *)0x0) {
            iVar14 = *piVar12;
            if (((iVar14 == 0) || (puVar8 < *(undefined4 **)(iVar14 + 0x104))) ||
               (*(undefined4 **)(iVar14 + 0x108) <= puVar8)) {
              uVar10 = (*DAT_00582af0._4_4_)(puVar8);
            }
            else {
              uVar10 = (uint)*(ushort *)(iVar14 + 0xe8);
            }
            piVar12[8] = uVar10 / 0x14;
            piVar12[1] = (int)puVar8;
            goto LAB_0049be4e;
          }
          uVar16 = 1;
          local_34 = (undefined4 *)0x1;
        }
        iVar14 = piVar12[1];
        iVar7 = *piVar12;
        if ((iVar14 == 0) || (*(char *)(iVar7 + 0x38) != '\0')) {
          FUN_0047bc80(iVar7,0xfffffff2,piVar15);
        }
        else {
          if ((int)uVar16 < 0) {
            uVar16 = piVar12[7] - 1;
          }
          iVar9 = iVar14 + uVar16 * 0x14;
          FUN_0047bc80(iVar7,(int)*(char *)(iVar9 + 1),*(int **)(iVar14 + 0x10 + uVar16 * 0x14));
          *(int **)(iVar9 + 0x10) = piVar15;
          *(undefined1 *)(iVar9 + 1) = 0xf2;
        }
        piVar6 = local_18;
        iVar14 = *(int *)((int)local_8 + 0x24);
        local_38 = iVar14 + 1;
        piVar12 = local_28 + 4;
        iVar7 = 10;
        do {
          iVar9 = *piVar12;
          if (((int)piVar15 <= iVar9) && (iVar9 <= (int)piVar15 + iVar14)) {
            if ((char)piVar12[-2] != '\0') {
              if (*(byte *)((int)param_1 + 0x13) < 8) {
                param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar9;
                *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
              }
              *(undefined1 *)(piVar12 + -2) = 0;
            }
            *piVar12 = 0;
          }
          piVar12 = piVar12 + 6;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (param_1[0xf] < local_38) {
          param_1[0xf] = local_38;
          param_1[0x10] = (int)piVar15;
        }
        if ((int)local_1c < 1) {
LAB_0049c189:
          piVar15 = param_1;
          if ((int *)param_1[0x6c] != (int *)0x0) {
            piVar15 = (int *)param_1[0x6c];
          }
          *(undefined1 *)((int)piVar15 + 0x17) = 1;
          piVar15 = (int *)0x0;
          if ((*(uint *)(local_14 + 0x18) & 0x20000) != 0) {
            bVar5 = 0;
            piVar15 = (int *)0x0;
            piVar12 = piVar15;
            if ((*(uint *)(*param_1 + 0x18) & 0x400000) != 0) {
              piVar15 = (int *)FUN_004aaf60(param_1,param_2);
              piVar12 = piVar15;
            }
            for (; piVar15 != (int *)0x0; piVar15 = (int *)piVar15[8]) {
              if ((char)piVar15[2] == 'j') {
                bVar5 = bVar5 | *(byte *)((int)piVar15 + 9);
              }
            }
            piVar15 = (int *)0x0;
            if (bVar5 != 0) {
              piVar15 = piVar12;
            }
          }
          piVar12 = local_10;
          FUN_0049c510(param_1,param_2,param_3,local_10,0,piVar15,5);
          local_20 = 1;
          local_10 = piVar12;
        }
        else if ((int)local_1c < 4) {
          local_54 = local_14;
          pcVar11 = "columns ";
          if (*(int *)((int)local_8 + 0x24) < 2) {
            pcVar11 = "column ";
          }
          iVar14 = 0;
          local_50 = (int *)0x0;
          local_4c = (int *)0x0;
          local_48 = 0;
          local_44 = 0;
          local_40 = 200;
          local_3b = 1;
          local_3c = 0;
          if (0 < *(int *)((int)local_8 + 0x24)) {
            do {
              pcVar4 = *(char **)(param_2[1] +
                                 *(int *)(*(int *)((int)local_8 + 4) + iVar14 * 4) * 0x18);
              FUN_004aa7b0(&local_54,pcVar11,0xffffffff);
              pcVar11 = ", ";
              FUN_004aa7b0(&local_54,pcVar4,0xffffffff);
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)((int)local_8 + 0x24));
          }
          piVar6 = local_18;
          pcVar11 = " are not unique";
          if (*(int *)((int)local_8 + 0x24) < 2) {
            pcVar11 = " is not unique";
          }
          FUN_004aa7b0(&local_54,pcVar11,0xffffffff);
          uVar16 = local_48;
          piVar15 = local_4c;
          if (local_4c != (int *)0x0) {
            *(undefined1 *)(local_48 + (int)local_4c) = 0;
            if (((char)local_3b != '\0') && (local_4c == local_50)) {
              _Size = local_48 + 1;
              if ((char)local_3b == '\x01') {
                piVar15 = FUN_00494b90(local_54,_Size);
              }
              else {
                iVar14 = FUN_004bc920();
                if (iVar14 == 0) {
                  if (uVar16 < 0x7ffffeff) {
                    if (DAT_00582ac8 == 0) {
                      local_24 = (int *)(*DAT_00582ae8)(_Size);
                      piVar15 = local_24;
                    }
                    else {
                      if (DAT_00583f40 != 0) {
                        (*DAT_00582b18)(DAT_00583f40);
                      }
                      FUN_00480650(_Size,(int *)&local_24);
                      piVar15 = local_24;
                      if (DAT_00583f40 != 0) {
                        (*DAT_00582b20)(DAT_00583f40);
                        piVar15 = local_24;
                      }
                    }
                  }
                  else {
                    local_24 = (int *)0x0;
                    piVar15 = local_24;
                  }
                }
                else {
                  piVar15 = (int *)0x0;
                }
              }
              if (piVar15 != (int *)0x0) {
                memcpy(piVar15,local_50,_Size);
              }
            }
          }
          FUN_0049d510(param_1,(int)local_1c,piVar15,0);
          FUN_00494b00(local_54,piVar15);
        }
        else {
          if (local_1c != (int *)0x4) goto LAB_0049c189;
          iVar14 = local_18[7];
          if ((iVar14 < local_18[8]) || (iVar7 = FUN_0047de10(local_18), iVar7 == 0)) {
            iVar7 = piVar6[1];
            piVar6[7] = piVar6[7] + 1;
            *(undefined2 *)(iVar7 + iVar14 * 0x14) = 1;
            *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 4 + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 8 + iVar14 * 0x14) = param_9;
            *(undefined4 *)(iVar7 + 0xc + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 0x10 + iVar14 * 0x14) = 0;
          }
        }
        if ((-1 < (int)local_34) && (local_34 < (uint)piVar6[7])) {
          *(int *)(piVar6[1] + 8 + (int)local_34 * 0x14) = piVar6[7];
        }
        if ((local_10 != (int *)0x0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
          iVar14 = 0;
          piVar15 = local_28;
          do {
            if ((int *)piVar15[4] == local_10) {
              *(undefined1 *)(piVar15 + 2) = 1;
              goto LAB_0049c21e;
            }
            iVar14 = iVar14 + 1;
            piVar15 = piVar15 + 6;
          } while (iVar14 < 10);
          param_1[*(byte *)((int)param_1 + 0x13) + 7] = (int)local_10;
          *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        }
      }
    }
LAB_0049c21e:
    local_8 = *(undefined4 **)((int)local_8 + 0x14);
    local_c = local_c + 1;
  } while( true );
}


/* FUN_0049c270 @ 0049c270  kind=lib  attributed-by=lib-island  size=660 */

int __cdecl
FUN_0049c270(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  void *extraout_EDX;
  int iVar10;
  int iVar11;
  int local_c;
  
  piVar2 = (int *)param_2[3];
  iVar3 = param_2[9];
  iVar10 = param_1[0x10];
  piVar4 = (int *)param_1[2];
  iVar1 = iVar3 + 1;
  if (param_1[0xf] < iVar1) {
    iVar10 = param_1[0x13] + 1;
    param_1[0x13] = param_1[0x13] + iVar1;
  }
  else {
    param_1[0x10] = iVar10 + iVar1;
    param_1[0xf] = param_1[0xf] - iVar1;
  }
  iVar11 = piVar4[7];
  if ((iVar11 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
    piVar4[7] = piVar4[7] + 1;
    iVar6 = piVar4[1];
    *(undefined2 *)(iVar6 + iVar11 * 0x14) = 0x41;
    iVar6 = iVar6 + iVar11 * 0x14;
    *(undefined4 *)(iVar6 + 4) = param_3;
    *(undefined1 *)(iVar6 + 3) = 0;
    *(int *)(iVar6 + 8) = iVar10 + iVar3;
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(undefined4 *)(iVar6 + 0x10) = 0;
  }
  iVar11 = 0;
  local_c = iVar10;
  if (0 < iVar3) {
    do {
      iVar6 = *(int *)(param_2[1] + iVar11 * 4);
      iVar5 = piVar4[7];
      if (iVar6 == (short)piVar2[9]) {
        if ((iVar5 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
          piVar4[7] = piVar4[7] + 1;
          iVar6 = piVar4[1];
          *(undefined2 *)(iVar6 + iVar5 * 0x14) = 0xf;
          iVar6 = iVar6 + iVar5 * 0x14;
          *(int *)(iVar6 + 4) = iVar3 + iVar10;
          *(undefined1 *)(iVar6 + 3) = 0;
          *(int *)(iVar6 + 8) = local_c;
          *(undefined4 *)(iVar6 + 0xc) = 0;
          *(undefined4 *)(iVar6 + 0x10) = 0;
        }
      }
      else {
        if ((iVar5 < piVar4[8]) || (iVar7 = FUN_0047de10(piVar4), iVar7 == 0)) {
          piVar4[7] = piVar4[7] + 1;
          iVar7 = piVar4[1];
          *(undefined4 *)(iVar7 + 4 + iVar5 * 0x14) = param_3;
          *(int *)(iVar7 + 0xc + iVar5 * 0x14) = local_c;
          *(undefined2 *)(iVar7 + iVar5 * 0x14) = 0x1d;
          *(undefined1 *)(iVar7 + 3 + iVar5 * 0x14) = 0;
          *(int *)(iVar7 + 8 + iVar5 * 0x14) = iVar6;
          *(undefined4 *)(iVar7 + 0x10 + iVar5 * 0x14) = 0;
        }
        FUN_00493630(piVar4,piVar2,iVar6,-1);
      }
      iVar11 = iVar11 + 1;
      local_c = local_c + 1;
    } while (iVar11 < iVar3);
  }
  if (param_5 != 0) {
    if ((piVar2[3] == 0) && ((*(byte *)(*param_1 + 0x34) & 0x10) == 0)) {
      param_2 = (int *)FUN_0049db70(piVar4,(int)param_2);
    }
    else {
      param_2 = (int *)0x0;
    }
    iVar3 = piVar4[7];
    if ((iVar3 < piVar4[8]) || (iVar11 = FUN_0047de10(piVar4), iVar11 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      iVar11 = piVar4[1];
      *(undefined2 *)(iVar11 + iVar3 * 0x14) = 0x1f;
      iVar11 = iVar11 + iVar3 * 0x14;
      *(int *)(iVar11 + 4) = iVar10;
      *(int *)(iVar11 + 8) = iVar1;
      *(undefined1 *)(iVar11 + 3) = 0;
      *(undefined4 *)(iVar11 + 0xc) = param_4;
      *(undefined4 *)(iVar11 + 0x10) = 0;
    }
    iVar3 = piVar4[1];
    iVar11 = *piVar4;
    if ((iVar3 == 0) || (*(char *)(iVar11 + 0x38) != '\0')) {
      FUN_0047bc80(iVar11,0,param_2);
    }
    else {
      iVar6 = iVar3 + (piVar4[7] + -1) * 0x14;
      FUN_0047bc80(iVar11,(int)*(char *)(iVar6 + 1),
                   *(int **)(iVar3 + 0x10 + (piVar4[7] + -1) * 0x14));
      *(undefined4 *)(iVar6 + 0x10) = 0;
      if (param_2 == (int *)0x0) {
        *(undefined4 *)(iVar6 + 0x10) = 0;
        *(undefined1 *)(iVar6 + 1) = 0;
      }
      else {
        uVar8 = FUN_004aa9b0((char *)param_2);
        puVar9 = FUN_00494e00(*piVar4,extraout_EDX,uVar8);
        *(undefined4 **)(iVar6 + 0x10) = puVar9;
        *(undefined1 *)(iVar6 + 1) = 0xff;
      }
    }
  }
  FUN_00496d90((int)param_1,iVar10,iVar1);
  if (param_1[0xf] < iVar1) {
    param_1[0xf] = iVar1;
    param_1[0x10] = iVar10;
  }
  return iVar10;
}


/* FUN_0049c510 @ 0049c510  kind=lib  attributed-by=lib-island  size=844 */

void __cdecl
FUN_0049c510(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            int param_7)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  void *extraout_EDX;
  int local_8;
  
  piVar3 = param_2;
  piVar1 = (int *)param_1[2];
  local_8 = 0;
  iVar4 = FUN_004b6b80(piVar1);
  iVar6 = piVar1[7];
  if ((iVar6 < piVar1[8]) || (iVar5 = FUN_0047de10(piVar1), iVar5 == 0)) {
    iVar5 = piVar1[1];
    piVar1[7] = piVar1[7] + 1;
    *(int *)(iVar5 + 4 + iVar6 * 0x14) = param_3;
    *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar4;
    *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x36;
    *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = param_4;
    *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
  }
  if ((((*(uint *)(*param_1 + 0x18) & 0x40000) != 0) &&
      ((iVar6 = FUN_0049ae70(param_2), iVar6 != 0 || (param_2[4] != 0)))) || (param_6 != (int *)0x0)
     ) {
    param_2 = (int *)0x0;
    for (piVar2 = param_6; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[8]) {
      if (((((char)piVar2[2] == 'j') && ((*(byte *)((int)piVar2 + 9) & 3) != 0)) &&
          (iVar6 = FUN_00471c90((undefined4 *)piVar2[4],(int *)0x0), iVar6 != 0)) &&
         (piVar7 = FUN_0047d6f0(param_1,piVar2,(int)piVar3,param_7), piVar7 != (int *)0x0)) {
        param_2 = (int *)((uint)param_2 | piVar7[4]);
      }
    }
    uVar8 = FUN_0049ad30(param_1,piVar3);
    iVar6 = param_1[0x13];
    param_1[0x13] = *(short *)((int)piVar3 + 0x26) + 1 + iVar6;
    iVar5 = piVar1[7];
    local_8 = iVar6 + 1;
    if ((iVar5 < piVar1[8]) || (iVar9 = FUN_0047de10(piVar1), iVar9 == 0)) {
      iVar9 = piVar1[1];
      piVar1[7] = piVar1[7] + 1;
      *(undefined4 *)(iVar9 + 4 + iVar5 * 0x14) = param_4;
      *(undefined2 *)(iVar9 + iVar5 * 0x14) = 0xe;
      *(undefined1 *)(iVar9 + 3 + iVar5 * 0x14) = 0;
      *(int *)(iVar9 + 8 + iVar5 * 0x14) = local_8;
      *(undefined4 *)(iVar9 + 0xc + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar9 + 0x10 + iVar5 * 0x14) = 0;
    }
    iVar5 = 0;
    if (0 < *(short *)((int)piVar3 + 0x26)) {
      do {
        if ((((uint)param_2 | uVar8) == 0xffffffff) ||
           ((((uint)param_2 | uVar8) & 1 << ((byte)iVar5 & 0x1f)) != 0)) {
          FUN_00497170(piVar1,piVar3,param_3,iVar5,iVar6 + 2 + iVar5);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(short *)((int)piVar3 + 0x26));
    }
    FUN_00492d70(param_1,param_6,0x6a,(int *)0x0,1,piVar3,local_8,param_7,iVar4);
    iVar6 = piVar1[7];
    if ((iVar6 < piVar1[8]) || (iVar5 = FUN_0047de10(piVar1), iVar5 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar5 = piVar1[1];
      *(int *)(iVar5 + 4 + iVar6 * 0x14) = param_3;
      *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar4;
      *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x36;
      *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = param_4;
      *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
    }
    FUN_0049a610(param_1,piVar3,local_8,0);
  }
  if (piVar3[3] == 0) {
    FUN_0049c860(param_1,(int)piVar3,param_3,(int *)0x0);
    iVar6 = piVar1[7];
    if ((iVar6 < piVar1[8]) || (iVar5 = FUN_0047de10(piVar1), iVar5 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar5 = piVar1[1];
      *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x3b;
      iVar5 = iVar5 + iVar6 * 0x14;
      *(int *)(iVar5 + 4) = param_3;
      *(undefined1 *)(iVar5 + 3) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(uint *)(iVar5 + 8) = (uint)(param_5 != 0);
    }
    if (param_5 != 0) {
      iVar6 = piVar1[1];
      piVar2 = (int *)*piVar3;
      iVar5 = *piVar1;
      if ((iVar6 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
        FUN_0047bc80(iVar5,0,piVar2);
      }
      else {
        iVar9 = iVar6 + (piVar1[7] + -1) * 0x14;
        FUN_0047bc80(iVar5,(int)*(char *)(iVar9 + 1),
                     *(int **)(iVar6 + 0x10 + (piVar1[7] + -1) * 0x14));
        *(undefined4 *)(iVar9 + 0x10) = 0;
        if (piVar2 == (int *)0x0) {
          *(undefined4 *)(iVar9 + 0x10) = 0;
          *(undefined1 *)(iVar9 + 1) = 0;
        }
        else {
          uVar8 = FUN_004aa9b0((char *)piVar2);
          puVar10 = FUN_00494e00(*piVar1,extraout_EDX,uVar8);
          *(undefined4 **)(iVar9 + 0x10) = puVar10;
          *(undefined1 *)(iVar9 + 1) = 0xff;
        }
      }
    }
  }
  FUN_0049a5b0(param_1,piVar3,0,local_8);
  FUN_00492d70(param_1,param_6,0x6a,(int *)0x0,2,piVar3,local_8,param_7,iVar4);
  if (piVar1[10] != 0) {
    *(int *)(piVar1[10] - (iVar4 * 4 + 4)) = piVar1[7];
  }
  return;
}


/* FUN_0049c860 @ 0049c860  kind=lib  attributed-by=lib-island  size=187 */

void __cdecl FUN_0049c860(int *param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar5 = param_3;
  piVar8 = param_4;
  for (piVar1 = *(int **)(param_2 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    iVar5 = iVar5 + 1;
    if ((param_4 == (int *)0x0) || (*piVar8 != 0)) {
      iVar6 = FUN_0049c270(param_1,piVar1,param_3,0,0);
      piVar2 = (int *)param_1[2];
      iVar3 = piVar1[9];
      iVar4 = piVar2[7];
      if ((iVar4 < piVar2[8]) || (iVar7 = FUN_0047de10(piVar2), iVar7 == 0)) {
        piVar2[7] = piVar2[7] + 1;
        iVar7 = piVar2[1];
        *(int *)(iVar7 + 4 + iVar4 * 0x14) = iVar5;
        *(int *)(iVar7 + 8 + iVar4 * 0x14) = iVar6;
        *(undefined2 *)(iVar7 + iVar4 * 0x14) = 0x62;
        *(undefined1 *)(iVar7 + 3 + iVar4 * 0x14) = 0;
        *(int *)(iVar7 + 0xc + iVar4 * 0x14) = iVar3 + 1;
        *(undefined4 *)(iVar7 + 0x10 + iVar4 * 0x14) = 0;
      }
    }
    piVar8 = piVar8 + 1;
  }
  return;
}


/* FUN_0049c920 @ 0049c920  kind=lib  attributed-by=lib-island  size=38 */

undefined4 __cdecl FUN_0049c920(undefined1 *param_1)

{
  return CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
}


/* FUN_0049c950 @ 0049c950  kind=lib  attributed-by=lib-island  size=30 */

bool __cdecl FUN_0049c950(byte *param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0047da70(param_1,1,param_2);
  return (char)uVar1 != '\0';
}


/* FUN_0049c970 @ 0049c970  kind=lib  attributed-by=lib-string  size=178 */

int * __cdecl FUN_0049c970(int *param_1,byte param_2,int *param_3,byte *param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (param_3 == (int *)0x0) {
    if (param_4 == (byte *)0x0) {
      piVar1 = *(int **)(iVar2 + 8);
    }
    else {
      piVar1 = FUN_004799f0(iVar2,param_4,0);
    }
    if ((piVar1 != (int *)0x0) && (param_3 = piVar1 + (uint)param_2 * 5 + -5, param_3 != (int *)0x0)
       ) goto LAB_0049c9b1;
LAB_0049c9b7:
    FUN_00471910(iVar2,(uint)param_2,(char *)param_4);
    if (param_4 == (byte *)0x0) {
      piVar1 = *(int **)(iVar2 + 8);
    }
    else {
      piVar1 = FUN_004799f0(iVar2,param_4,0);
    }
    if (piVar1 == (int *)0x0) goto LAB_0049ca0a;
    param_3 = piVar1 + (uint)param_2 * 5 + -5;
  }
  else {
LAB_0049c9b1:
    if (param_3[3] == 0) goto LAB_0049c9b7;
  }
  if (param_3 != (int *)0x0) {
    if (param_3[3] != 0) {
      return param_3;
    }
    iVar2 = FUN_004bd7c0(iVar2,(undefined8 *)param_3);
    if (iVar2 == 0) {
      return param_3;
    }
  }
LAB_0049ca0a:
  FUN_004962b0(param_1,(byte *)"no such collation sequence: %s");
  return (int *)0x0;
}


/* FUN_0049ca30 @ 0049ca30  kind=lib  attributed-by=lib-island  size=193 */

undefined4 __cdecl FUN_0049ca30(char *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  uint local_10;
  uint uStack_c;
  uint local_8;
  
  local_8 = 0;
  if (*param_1 == '-') {
    local_8 = 1;
  }
  else if (*param_1 != '+') goto LAB_0049ca5c;
  param_1 = param_1 + 1;
LAB_0049ca5c:
  cVar1 = *param_1;
  pcVar6 = param_1;
  while (cVar1 == '0') {
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
  }
  uStack_c = 0;
  local_10 = 0;
  param_1 = (char *)0x0;
  do {
    uVar5 = (int)param_1[(int)pcVar6] - 0x30;
    if (9 < uVar5) break;
    uVar2 = local_10 >> 0x1e;
    bVar7 = CARRY4(local_10,local_10 * 4);
    uVar4 = local_10 * 5;
    uVar3 = local_10 * 10;
    local_10 = uVar3 + uVar5;
    uStack_c = ((uStack_c + (uStack_c << 2 | uVar2) + (uint)bVar7) * 2 | uVar4 >> 0x1f) +
               ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar3,uVar5);
    param_1 = param_1 + 1;
  } while ((int)param_1 < 0xb);
  if ((int)param_1 < 0xb) {
    uVar5 = (uint)(local_10 < local_8);
    if (((int)(uStack_c - uVar5) < 0) ||
       ((uStack_c == uVar5 || SBORROW4(uStack_c,uVar5) && (local_10 - local_8 < 0x80000000)))) {
      if (local_8 != 0) {
        local_10 = -local_10;
      }
      *param_2 = local_10;
      return 1;
    }
  }
  return 0;
}


/* FUN_0049cb00 @ 0049cb00  kind=lib  attributed-by=lib-island  size=51 */

int __cdecl FUN_0049cb00(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (param_2 <= *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - param_2;
    *(int *)(param_1 + 0x40) = iVar1 + param_2;
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  *(int *)(param_1 + 0x4c) = iVar1 + param_2;
  return iVar1 + 1;
}


/* FUN_0049cb40 @ 0049cb40  kind=lib  attributed-by=lib-island  size=36 */

int __cdecl FUN_0049cb40(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar2 = *(int *)(param_1 + 0x4c) + 1;
    *(int *)(param_1 + 0x4c) = iVar2;
    return iVar2;
  }
  bVar1 = *(char *)(param_1 + 0x13) - 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  return *(int *)(param_1 + 0x1c + (uint)bVar1 * 4);
}


/* FUN_0049cb70 @ 0049cb70  kind=lib  attributed-by=lib-island  size=1481 */

uint __cdecl FUN_0049cb70(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  uVar4 = (uint)*param_1;
  switch(uVar4) {
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x20:
    uVar4 = 1;
    bVar1 = (&DAT_00569720)[param_1[1]];
    while ((bVar1 & 1) != 0) {
      iVar7 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = (&DAT_00569720)[param_1[iVar7]];
    }
    break;
  default:
switchD_0049cb8e_caseD_b:
    if (((&DAT_00569720)[uVar4] & 0x46) != 0) {
      uVar4 = 1;
      bVar1 = (&DAT_00569720)[param_1[1]];
      while ((bVar1 & 0x46) != 0) {
        iVar7 = uVar4 + 1;
        uVar4 = uVar4 + 1;
        bVar1 = (&DAT_00569720)[param_1[iVar7]];
      }
      uVar2 = FUN_0047f6a0(param_1,uVar4);
      *param_2 = CONCAT31(extraout_var,uVar2);
      return uVar4;
    }
    *param_2 = 0x94;
    return 1;
  case 0x21:
    if (param_1[1] != 0x3d) {
      *param_2 = 0x94;
      return 2;
    }
    goto LAB_0049cd02;
  case 0x22:
  case 0x27:
  case 0x60:
    uVar3 = 1;
    bVar1 = param_1[1];
    while (uVar6 = (uint)bVar1, uVar6 != 0) {
      if (uVar6 == uVar4) {
        if (param_1[uVar3 + 1] != uVar4) break;
        uVar3 = uVar3 + 1;
      }
      iVar7 = uVar3 + 1;
      uVar3 = uVar3 + 1;
      bVar1 = param_1[iVar7];
    }
    if (uVar6 == 0x27) {
      *param_2 = 0x5e;
      return uVar3 + 1;
    }
    if (uVar6 != 0) {
      *param_2 = 0x1a;
      return uVar3 + 1;
    }
    *param_2 = 0x94;
    return uVar3;
  case 0x23:
    uVar4 = 1;
    if (((&DAT_00569720)[param_1[1]] & 4) != 0) {
      do {
        iVar7 = uVar4 + 1;
        uVar4 = uVar4 + 1;
      } while (((&DAT_00569720)[param_1[iVar7]] & 4) != 0);
      if (1 < (int)uVar4) {
        *param_2 = 0x84;
        return uVar4;
      }
    }
  case 0x24:
  case 0x3a:
  case 0x40:
    *param_2 = 0x85;
    uVar3 = (uint)param_1[1];
    iVar7 = 0;
    uVar4 = 1;
    if (uVar3 != 0) {
      do {
        if (((&DAT_00569720)[uVar3] & 0x46) == 0) {
          if (uVar3 == 0x28) {
            if (0 < iVar7) goto LAB_0049d060;
            break;
          }
          if ((uVar3 != 0x3a) || (param_1[uVar4 + 1] != 0x3a)) break;
          uVar4 = uVar4 + 1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        uVar3 = (uint)param_1[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar3 != 0);
LAB_0049d08b:
      if (iVar7 != 0) {
        return uVar4;
      }
    }
    *param_2 = 0x94;
    return uVar4;
  case 0x25:
    *param_2 = 0x5a;
    return 1;
  case 0x26:
    *param_2 = 0x52;
    return 1;
  case 0x28:
    *param_2 = 0x16;
    return 1;
  case 0x29:
    *param_2 = 0x17;
    return 1;
  case 0x2a:
    *param_2 = 0x58;
    return 1;
  case 0x2b:
    *param_2 = 0x56;
    return 1;
  case 0x2c:
    *param_2 = 0x19;
    return 1;
  case 0x2d:
    if (param_1[1] != 0x2d) {
      *param_2 = 0x57;
      return 1;
    }
    bVar1 = param_1[2];
    uVar4 = 2;
    if (bVar1 != 0) {
      while (bVar1 != 10) {
        bVar1 = param_1[uVar4 + 1];
        uVar4 = uVar4 + 1;
        if (bVar1 == 0) {
          *param_2 = 0x95;
          return uVar4;
        }
      }
    }
    break;
  case 0x2e:
    if (((&DAT_00569720)[param_1[1]] & 4) == 0) {
      *param_2 = 0x76;
      return 1;
    }
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    uVar4 = 0;
    *param_2 = 0x81;
    bVar1 = (&DAT_00569720)[*param_1];
    while ((bVar1 & 4) != 0) {
      iVar7 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = (&DAT_00569720)[param_1[iVar7]];
    }
    if (param_1[uVar4] == 0x2e) {
      bVar1 = (&DAT_00569720)[param_1[uVar4 + 1]];
      uVar3 = uVar4;
      while (uVar4 = uVar3 + 1, (bVar1 & 4) != 0) {
        bVar1 = (&DAT_00569720)[param_1[uVar3 + 2]];
        uVar3 = uVar4;
      }
      *param_2 = 0x82;
    }
    if (((param_1[uVar4] == 0x65) || (param_1[uVar4] == 0x45)) &&
       ((bVar1 = param_1[uVar4 + 1], ((&DAT_00569720)[bVar1] & 4) != 0 ||
        (((bVar1 == 0x2b || (bVar1 == 0x2d)) && (((&DAT_00569720)[param_1[uVar4 + 2]] & 4) != 0)))))
       ) {
      iVar7 = uVar4 + 2;
      uVar4 = uVar4 + 2;
      bVar1 = (&DAT_00569720)[param_1[iVar7]];
      while ((bVar1 & 4) != 0) {
        iVar7 = uVar4 + 1;
        uVar4 = uVar4 + 1;
        bVar1 = (&DAT_00569720)[param_1[iVar7]];
      }
      *param_2 = 0x82;
    }
    if (((&DAT_00569720)[param_1[uVar4]] & 0x46) == 0) {
      return uVar4;
    }
    do {
      uVar4 = uVar4 + 1;
      *param_2 = 0x94;
    } while (((&DAT_00569720)[param_1[uVar4]] & 0x46) != 0);
    return uVar4;
  case 0x2f:
    if ((param_1[1] != 0x2a) || (bVar1 = param_1[2], bVar1 == 0)) {
      *param_2 = 0x59;
      return 1;
    }
    for (uVar4 = 3; (bVar1 != 0x2a || (param_1[uVar4] != 0x2f)); uVar4 = uVar4 + 1) {
      bVar1 = param_1[uVar4];
      if (bVar1 == 0) goto LAB_0049cc97;
    }
    uVar4 = uVar4 + 1;
LAB_0049cc97:
    *param_2 = 0x95;
    return uVar4;
  case 0x3b:
    *param_2 = 1;
    return 1;
  case 0x3c:
    bVar1 = param_1[1];
    if (bVar1 == 0x3d) {
      *param_2 = 0x4e;
      return 2;
    }
    if (bVar1 != 0x3e) {
      if (bVar1 == 0x3c) {
        *param_2 = 0x54;
        return 2;
      }
      *param_2 = 0x4f;
      return 1;
    }
LAB_0049cd02:
    *param_2 = 0x4b;
    return 2;
  case 0x3d:
    *param_2 = 0x4c;
    return (param_1[1] == 0x3d) + 1;
  case 0x3e:
    if (param_1[1] == 0x3d) {
      *param_2 = 0x50;
      return 2;
    }
    if (param_1[1] == 0x3e) {
      *param_2 = 0x55;
      return 2;
    }
    *param_2 = 0x4d;
    return 1;
  case 0x3f:
    uVar4 = 1;
    *param_2 = 0x85;
    if (((&DAT_00569720)[param_1[1]] & 4) == 0) {
      return 1;
    }
    do {
      iVar7 = uVar4 + 1;
      uVar4 = uVar4 + 1;
    } while (((&DAT_00569720)[param_1[iVar7]] & 4) != 0);
    return uVar4;
  case 0x58:
  case 0x78:
    if (param_1[1] != 0x27) goto switchD_0049cb8e_caseD_b;
    uVar4 = 2;
    *param_2 = 0x83;
    bVar1 = (&DAT_00569720)[param_1[2]];
    while ((bVar1 & 8) != 0) {
      iVar7 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = (&DAT_00569720)[param_1[iVar7]];
    }
    if (param_1[uVar4] == 0x27) {
      uVar3 = uVar4 & 0x80000001;
      bVar8 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar8 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar8) goto LAB_0049d0ff;
    }
    *param_2 = 0x94;
    bVar1 = param_1[uVar4];
    while ((bVar1 != 0 && (bVar1 != 0x27))) {
      iVar7 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = param_1[iVar7];
    }
LAB_0049d0ff:
    if (param_1[uVar4] != 0) {
      uVar4 = uVar4 + 1;
    }
    return uVar4;
  case 0x5b:
    for (uVar3 = 1; (uVar4 != 0x5d && (uVar4 = (uint)param_1[uVar3], uVar4 != 0)); uVar3 = uVar3 + 1
        ) {
    }
    uVar5 = 0x94;
    if (uVar4 == 0x5d) {
      uVar5 = 0x1a;
    }
    *param_2 = uVar5;
    return uVar3;
  case 0x7c:
    if (param_1[1] != 0x7c) {
      *param_2 = 0x53;
      return 1;
    }
    *param_2 = 0x5b;
    return 2;
  case 0x7e:
    *param_2 = 0x5d;
    return 1;
  }
  *param_2 = 0x95;
  return uVar4;
  while (uVar6 != 0x29) {
LAB_0049d060:
    uVar3 = uVar4;
    uVar6 = (uint)param_1[uVar3 + 1];
    uVar4 = uVar3 + 1;
    if ((uVar6 == 0) || (((&DAT_00569720)[uVar6] & 1) != 0)) {
      if (uVar6 == 0x29) {
        uVar4 = uVar3 + 2;
      }
      else {
        *param_2 = 0x94;
      }
      goto LAB_0049d08b;
    }
  }
  uVar4 = uVar3 + 2;
  goto LAB_0049d08b;
}


/* FUN_0049d250 @ 0049d250  kind=lib  attributed-by=lib-island  size=29 */

void __cdecl FUN_0049d250(int param_1,int param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_2 + 0x38); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[6]) {
  }
  return;
}


/* FUN_0049d270 @ 0049d270  kind=lib  attributed-by=lib-island  size=450 */

undefined4 __cdecl FUN_0049d270(byte *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined3 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (uint)*param_1;
  uVar3 = (undefined3)((uint)param_2 >> 8);
  if (-1 < (char)*param_1) {
    *param_2 = uVar4;
    param_2[1] = 0;
    return CONCAT31(uVar3,1);
  }
  uVar5 = (uint)param_1[1];
  if (-1 < (char)param_1[1]) {
    *param_2 = (uVar4 & 0x7f) << 7 | uVar5;
    param_2[1] = 0;
    return CONCAT31(uVar3,2);
  }
  uVar4 = uVar4 << 0xe | (uint)param_1[2];
  if (-1 < (char)param_1[2]) {
    *param_2 = (uVar5 & 0x7f) << 7 | uVar4 & 0x1fc07f;
    param_2[1] = 0;
    return CONCAT31(uVar3,3);
  }
  uVar5 = uVar5 << 0xe | (uint)param_1[3];
  uVar4 = uVar4 & 0x1fc07f;
  if (-1 < (char)param_1[3]) {
    *param_2 = uVar5 & 0x1fc07f | uVar4 << 7;
    param_2[1] = 0;
    return CONCAT31(uVar3,4);
  }
  uVar1 = uVar4 << 0xe | (uint)param_1[4];
  uVar5 = uVar5 & 0x1fc07f;
  if (-1 < (char)param_1[4]) {
    *param_2 = uVar5 << 7 | uVar1;
    param_2[1] = uVar4 >> 0x12;
    return CONCAT31(uVar3,5);
  }
  uVar4 = uVar4 << 7 | uVar5;
  uVar5 = uVar5 << 0xe | (uint)param_1[5];
  if (-1 < (char)param_1[5]) {
    *param_2 = (uVar1 & 0x1fc07f) << 7 | uVar5;
    param_2[1] = uVar4 >> 0x12;
    return CONCAT31(uVar3,6);
  }
  uVar1 = uVar1 << 0xe | (uint)param_1[6];
  if (-1 < (char)param_1[6]) {
    *param_2 = (uVar5 << 7 ^ uVar1) & 0xfe03f80 ^ uVar1;
    param_2[1] = uVar4 >> 0xb;
    return CONCAT31(uVar3,7);
  }
  uVar6 = uVar5 << 0xe | (uint)param_1[7];
  uVar5 = (uVar1 & 0x1fc07f) << 7;
  if (-1 < (char)param_1[7]) {
    *param_2 = uVar6 & 0xf01fc07f | uVar5;
    param_2[1] = uVar4 >> 4;
    return CONCAT31(uVar3,8);
  }
  bVar2 = param_1[4];
  *param_2 = (uVar6 & 0x1fc07f | uVar5) << 8 | (uint)param_1[8];
  param_2[1] = bVar2 >> 3 & 0xf | uVar4 << 4;
  return CONCAT31(uVar3,9);
}


/* FUN_0049d440 @ 0049d440  kind=lib  attributed-by=lib-island  size=137 */

uint __cdecl FUN_0049d440(byte *param_1,uint *param_2)

{
  byte bVar1;
  undefined3 uVar3;
  undefined4 uVar2;
  uint local_c;
  int local_8;
  
  bVar1 = param_1[1];
  uVar3 = (undefined3)((uint)param_2 >> 8);
  if (-1 < (char)bVar1) {
    *param_2 = (*param_1 & 0x7f) << 7 | (uint)bVar1;
    return CONCAT31(uVar3,2);
  }
  if ((char)param_1[2] < '\0') {
    uVar2 = FUN_0049d270(param_1,&local_c);
    if (local_8 != 0) {
      *param_2 = 0xffffffff;
      return CONCAT31(uVar3,(char)uVar2);
    }
    *param_2 = local_c;
    return CONCAT31(uVar3,(char)uVar2);
  }
  *param_2 = (bVar1 & 0x7f) << 7 | ((uint)*param_1 << 0xe | (uint)param_1[2]) & 0x1fc07f;
  return CONCAT31(uVar3,3);
}


/* FUN_0049d4d0 @ 0049d4d0  kind=lib  attributed-by=lib-island  size=54 */

int * __cdecl FUN_0049d4d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 == (int *)0x0) {
    piVar1 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      FUN_004ae760(piVar1,0x94);
    }
  }
  return piVar1;
}


/* FUN_0049d510 @ 0049d510  kind=lib  attributed-by=lib-island  size=169 */

void __cdecl FUN_0049d510(int *param_1,int param_2,int *param_3,size_t param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 == (int *)0x0) {
    piVar1 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      FUN_004ae760(piVar1,0x94);
    }
  }
  if (param_2 == 2) {
    if ((int *)param_1[0x6c] != (int *)0x0) {
      param_1 = (int *)param_1[0x6c];
    }
    *(undefined1 *)(param_1 + 6) = 1;
  }
  iVar3 = piVar1[7];
  if (piVar1[8] <= iVar3) {
    iVar2 = FUN_0047de10(piVar1);
    if (iVar2 != 0) {
      iVar3 = 1;
      goto LAB_0049d5a4;
    }
  }
  iVar2 = piVar1[1];
  piVar1[7] = piVar1[7] + 1;
  *(undefined2 *)(iVar2 + iVar3 * 0x14) = 6;
  *(undefined1 *)(iVar2 + 3 + iVar3 * 0x14) = 0;
  *(undefined4 *)(iVar2 + 4 + iVar3 * 0x14) = 0x13;
  *(int *)(iVar2 + 8 + iVar3 * 0x14) = param_2;
  *(undefined4 *)(iVar2 + 0xc + iVar3 * 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x10 + iVar3 * 0x14) = 0;
LAB_0049d5a4:
  FUN_004aecc0(piVar1,iVar3,param_3,param_4);
  return;
}


/* FUN_0049d5c0 @ 0049d5c0  kind=lib  attributed-by=lib-island  size=58 */

void __cdecl FUN_0049d5c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)param_1[2];
  param_1[2] = 0;
  FUN_00466dd0(param_1[3]);
  param_1[3] = 0;
  *param_1 = 0;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    if (DAT_00582ac8 == 0) {
      (*DAT_00582aec)(puVar1);
      puVar1 = puVar2;
    }
    else {
      if (DAT_00583f40 != 0) {
        (*DAT_00582b18)(DAT_00583f40);
      }
      iVar3 = (*DAT_00582af0._4_4_)(puVar1);
      DAT_00583e18 = DAT_00583e18 - iVar3;
      if (DAT_00583e40 < DAT_00583e18) {
        DAT_00583e40 = DAT_00583e18;
      }
      DAT_00583e3c = DAT_00583e3c + -1;
      if (DAT_00583e64 < DAT_00583e3c) {
        DAT_00583e64 = DAT_00583e3c;
      }
      (*DAT_00582aec)(puVar1);
      puVar1 = puVar2;
      if (DAT_00583f40 != 0) {
        (*DAT_00582b20)(DAT_00583f40);
      }
    }
  }
  param_1[1] = 0;
  return;
}


/* FUN_0049d6a0 @ 0049d6a0  kind=lib  attributed-by=lib-island  size=65 */

undefined4 __cdecl FUN_0049d6a0(uint *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1[3] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004bd210(param_2,param_3);
    uVar1 = uVar1 % *param_1;
  }
  puVar2 = FUN_00479af0((int)param_1,param_2,param_3,uVar1);
  if (puVar2 != (undefined4 *)0x0) {
    return puVar2[2];
  }
  return 0;
}


/* FUN_0049d6f0 @ 0049d6f0  kind=lib  attributed-by=lib-island  size=272 */

uint __cdecl FUN_0049d6f0(uint *param_1,byte *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004bd210(param_2,param_3);
    uVar2 = uVar2 % uVar1;
  }
  piVar3 = FUN_00479af0((int)param_1,param_2,param_3,uVar2);
  if (piVar3 != (int *)0x0) {
    uVar1 = piVar3[2];
    if (param_4 == 0) {
      FUN_004884b0(param_1,piVar3,uVar2);
      return uVar1;
    }
    piVar3[3] = (int)param_2;
    piVar3[2] = param_4;
    return uVar1;
  }
  if (param_4 != 0) {
    puVar4 = (uint *)FUN_004a0350(0x14);
    if (puVar4 == (uint *)0x0) {
      return param_4;
    }
    puVar4[3] = (uint)param_2;
    puVar4[4] = param_3;
    puVar4[2] = param_4;
    param_1[1] = param_1[1] + 1;
    uVar1 = param_1[1];
    if ((9 < uVar1) && (*param_1 * 2 < uVar1)) {
      iVar5 = FUN_00487c30(param_1,uVar1 * 2);
      if (iVar5 != 0) {
        uVar2 = FUN_004bd210(param_2,param_3);
        uVar2 = uVar2 % *param_1;
      }
    }
    if (param_1[3] != 0) {
      FUN_0047e8a0((int)param_1,(int *)(param_1[3] + uVar2 * 8),(int *)puVar4);
      return 0;
    }
    *puVar4 = param_1[2];
    if (param_1[2] != 0) {
      *(uint **)(param_1[2] + 4) = puVar4;
    }
    puVar4[1] = 0;
    param_1[2] = (uint)puVar4;
  }
  return 0;
}


/* FUN_0049d800 @ 0049d800  kind=lib  attributed-by=lib-island  size=142 */

undefined4 * __cdecl FUN_0049d800(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = FUN_00494b90(param_1,param_3 / 2 + 1);
  if (puVar3 != (undefined4 *)0x0) {
    uVar5 = 0;
    if (0 < param_3 + -1) {
      do {
        cVar2 = *(char *)(param_2 + 1 + uVar5);
        pcVar1 = (char *)(param_2 + uVar5);
        uVar4 = uVar5 >> 1;
        uVar5 = uVar5 + 2;
        *(byte *)(uVar4 + (int)puVar3) =
             cVar2 + (cVar2 >> 6 & 1U) * -7 & 0xf ^ (*pcVar1 + (*pcVar1 >> 6 & 1U) * -7) * '\x10';
      } while ((int)uVar5 < param_3 + -1);
    }
    *(undefined1 *)((int)uVar5 / 2 + (int)puVar3) = 0;
  }
  return puVar3;
}


/* FUN_0049d890 @ 0049d890  kind=lib  attributed-by=lib-island  size=117 */

int * __cdecl FUN_0049d890(int param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  piVar2 = param_2;
  if (param_2 == (int *)0x0) {
    piVar2 = FUN_00494b90(param_1,8);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar2[0] = 0;
    piVar2[1] = 0;
  }
  puVar3 = FUN_0048cc10(param_1,(undefined4 *)*piVar2,8,(uint *)(piVar2 + 1),(uint *)&param_2);
  piVar1 = param_2;
  *piVar2 = (int)puVar3;
  if ((int)param_2 < 0) {
    FUN_0049d910(param_1,piVar2);
    return (int *)0x0;
  }
  pcVar4 = FUN_004a0d40(param_1,param_3);
  *(char **)(*piVar2 + (int)piVar1 * 8) = pcVar4;
  return piVar2;
}


/* FUN_0049d910 @ 0049d910  kind=lib  attributed-by=lib-island  size=191 */

void __cdecl FUN_0049d910(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    iVar3 = 0;
    if (0 < param_2[1]) {
      do {
        puVar1 = *(undefined4 **)(*param_2 + iVar3 * 8);
        if (param_1 == 0) {
LAB_0049d9a5:
          FUN_00466dd0((int)puVar1);
        }
        else if (*(int *)(param_1 + 0x1f0) == 0) {
          if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
             (*(undefined4 **)(param_1 + 0x108) <= puVar1)) goto LAB_0049d9a5;
          *puVar1 = *(undefined4 *)(param_1 + 0x100);
          *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
          *(undefined4 **)(param_1 + 0x100) = puVar1;
        }
        else if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
                (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
          iVar2 = (*DAT_00582af0._4_4_)(puVar1);
          **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar2;
        }
        else {
          **(int **)(param_1 + 0x1f0) =
               **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_2[1]);
    }
    FUN_00494b00(param_1,(undefined4 *)*param_2);
    FUN_00494b00(param_1,param_2);
  }
  return;
}


/* FUN_0049d9d0 @ 0049d9d0  kind=lib  attributed-by=lib-island  size=221 */

int * __cdecl FUN_0049d9d0(int param_1,int *param_2)

{
  char cVar1;
  char *_Src;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  size_t _Size;
  undefined4 *puVar5;
  undefined4 *_Dst;
  int local_8;
  
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar2 = FUN_00494b90(param_1,8);
  if (piVar2 != (int *)0x0) {
    piVar2[1] = param_2[1];
    puVar3 = FUN_00494b90(param_1,param_2[1] << 3);
    *piVar2 = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      local_8 = 0;
      if (0 < param_2[1]) {
        do {
          puVar3 = (undefined4 *)(*param_2 + local_8 * 8);
          puVar5 = (undefined4 *)(*piVar2 + local_8 * 8);
          _Src = (char *)*puVar3;
          if (_Src == (char *)0x0) {
            _Dst = (undefined4 *)0x0;
          }
          else {
            cVar1 = *_Src;
            pcVar4 = _Src;
            while (cVar1 != '\0') {
              pcVar4 = pcVar4 + 1;
              cVar1 = *pcVar4;
            }
            _Size = ((int)pcVar4 - (int)_Src & 0x3fffffffU) + 1;
            _Dst = FUN_00494b90(param_1,_Size);
            if (_Dst != (undefined4 *)0x0) {
              memcpy(_Dst,_Src,_Size);
            }
          }
          *puVar5 = _Dst;
          puVar5[1] = puVar3[1];
          local_8 = local_8 + 1;
        } while (local_8 < param_2[1]);
      }
      return piVar2;
    }
    FUN_00494b00(param_1,piVar2);
  }
  return (int *)0x0;
}


/* FUN_0049dab0 @ 0049dab0  kind=lib  attributed-by=lib-island  size=127 */

int __cdecl FUN_0049dab0(undefined4 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return -1;
  }
  iVar6 = 0;
  if (0 < (int)param_1[1]) {
    puVar4 = (undefined4 *)*param_1;
    do {
      pbVar3 = (byte *)*puVar4;
      bVar2 = *pbVar3;
      pbVar5 = param_2;
      while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar5]))) {
        pbVar1 = pbVar3 + 1;
        pbVar3 = pbVar3 + 1;
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar1;
      }
      if ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar5]) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar6 < (int)param_1[1]);
  }
  return -1;
}


/* FUN_0049db30 @ 0049db30  kind=lib  attributed-by=lib-island  size=54 */

bool __cdecl FUN_0049db30(int param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_00475250(param_1);
  if (cVar1 == 'a') {
    return param_2 == 'a';
  }
  if (cVar1 != 'b') {
    return 'b' < param_2;
  }
  return true;
}


/* FUN_0049db70 @ 0049db70  kind=lib  attributed-by=lib-island  size=116 */

undefined4 __cdecl FUN_0049db70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    iVar3 = *param_1;
    iVar2 = FUN_004a0350(*(int *)(param_2 + 0x24) + 2);
    *(int *)(param_2 + 0x10) = iVar2;
    if (iVar2 == 0) {
      *(undefined1 *)(iVar3 + 0x38) = 1;
      return 0;
    }
    iVar2 = 0;
    iVar3 = iVar2;
    if (0 < *(int *)(param_2 + 0x24)) {
      do {
        iVar2 = iVar3 + 1;
        *(undefined1 *)(iVar3 + *(int *)(param_2 + 0x10)) =
             *(undefined1 *)
              (*(int *)(iVar1 + 4) + 0x15 + *(int *)(*(int *)(param_2 + 4) + iVar3 * 4) * 0x18);
        iVar3 = iVar2;
      } while (iVar2 < *(int *)(param_2 + 0x24));
    }
    *(undefined1 *)(iVar2 + *(int *)(param_2 + 0x10)) = 100;
    *(undefined1 *)(iVar2 + 1 + *(int *)(param_2 + 0x10)) = 0;
  }
  return *(undefined4 *)(param_2 + 0x10);
}


/* FUN_0049dbf0 @ 0049dbf0  kind=lib  attributed-by=lib-island  size=287 */

int * __cdecl FUN_0049dbf0(int *param_1,int param_2)

{
  size_t _Size;
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int *_Dst;
  int *piVar7;
  int *piVar8;
  int iVar9;
  
  iVar3 = *param_1;
  iVar4 = *(int *)(param_2 + 0x24);
  _Size = iVar4 * 5 + 0xc;
  _Dst = FUN_00494b90(iVar3,_Size);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,_Size);
    if (_Dst != (int *)0x0) {
      iVar9 = 0;
      *_Dst = *param_1;
      _Dst[2] = (int)(_Dst + iVar4 + 3);
      if (0 < iVar4) {
        do {
          iVar5 = *param_1;
          bVar1 = *(byte *)(iVar5 + 0x81);
          pbVar6 = *(byte **)(*(int *)(param_2 + 0x20) + iVar9 * 4);
          bVar2 = *(byte *)(*(int *)(*(int *)(iVar5 + 0x10) + 0xc) + 0x4d);
          if (pbVar6 == (byte *)0x0) {
            piVar7 = *(int **)(iVar5 + 8);
          }
          else {
            piVar7 = FUN_004799f0(iVar5,pbVar6,(uint)bVar1);
          }
          piVar8 = (int *)0x0;
          if (piVar7 != (int *)0x0) {
            piVar8 = piVar7 + (uint)bVar2 * 5 + -5;
          }
          if ((bVar1 == 0) && ((piVar8 == (int *)0x0 || (piVar8[3] == 0)))) {
            piVar8 = FUN_0049c970(param_1,bVar2,piVar8,pbVar6);
          }
          _Dst[iVar9 + 3] = (int)piVar8;
          *(undefined1 *)(iVar9 + _Dst[2]) = *(undefined1 *)(iVar9 + *(int *)(param_2 + 0x1c));
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar4);
      }
      *(short *)((int)_Dst + 6) = (short)iVar4;
    }
  }
  if (param_1[0x11] != 0) {
    FUN_00494b00(iVar3,_Dst);
    return (int *)0x0;
  }
  return _Dst;
}


/* FUN_0049dd10 @ 0049dd10  kind=lib  attributed-by=lib-string  size=155 */

undefined4 __cdecl FUN_0049dd10(int *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if ((*(int *)(param_2 + 0x10) != 0) && (*(byte **)(param_2 + 0x40) != (byte *)0x0)) {
    puVar3 = *(undefined4 **)(*(int *)(param_2 + 0x10) + 8);
    while( true ) {
      if (puVar3 == (undefined4 *)0x0) {
        FUN_004962b0(param_1,(byte *)"no such index: %s");
        *(undefined1 *)((int)param_1 + 0x11) = 1;
        return 1;
      }
      pbVar4 = (byte *)*puVar3;
      bVar2 = *pbVar4;
      pbVar5 = *(byte **)(param_2 + 0x40);
      while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar5]))) {
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar1;
      }
      if ((&DAT_00569620)[*pbVar4] == (&DAT_00569620)[*pbVar5]) break;
      puVar3 = (undefined4 *)puVar3[5];
    }
    *(undefined4 **)(param_2 + 0x44) = puVar3;
  }
  return 0;
}


/* FUN_0049ddb0 @ 0049ddb0  kind=lib  attributed-by=lib-island  size=217 */

int __cdecl FUN_0049ddb0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1;
  uVar1 = *(uint *)(param_1 + 0x18);
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  param_1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)(iVar2 + 0x14) <= iVar3) {
      if ((((iVar4 == 0) && (1 < *(int *)(iVar2 + 0x14))) &&
          ((*(byte *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x1c) + 0x4e) & 1) == 0)) &&
         (iVar4 = FUN_0049e0a0(iVar2,1,param_2), iVar4 != 0)) {
        FUN_004a7960(*(int *)(*(int *)(iVar2 + 0x10) + 0x1c));
      }
      break;
    }
    if ((((*(byte *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc + param_1) + 0x4e) & 1) == 0) &&
        (iVar3 != 1)) && (iVar4 = FUN_0049e0a0(iVar2,iVar3,param_2), iVar4 != 0)) {
      FUN_004a7960(*(int *)(*(int *)(iVar2 + 0x10) + 0xc + param_1));
      FUN_004a7960(*(int *)(*(int *)(iVar2 + 0x10) + 0x1c));
    }
    param_1 = param_1 + 0x10;
    iVar3 = iVar3 + 1;
  } while (iVar4 == 0);
  *(undefined1 *)(iVar2 + 0x81) = 0;
  if ((iVar4 == 0) && ((~(uVar1 >> 1) & 1) != 0)) {
    *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) & 0xfffffffd;
  }
  return iVar4;
}


/* FUN_0049de90 @ 0049de90  kind=lib  attributed-by=lib-string  size=527 */

undefined4 __cdecl FUN_0049de90(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  ushort *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  
  puVar4 = param_3;
  piVar3 = param_1;
  iVar7 = *param_1;
  iVar2 = param_1[2];
  puVar1 = (ushort *)(*(int *)(*(int *)(iVar7 + 0x10) + 0xc + iVar2 * 0x10) + 0x4e);
  *puVar1 = *puVar1 & 0xfffb;
  if (*(char *)(iVar7 + 0x38) != '\0') {
    iVar7 = *param_1;
    if (*(char *)(iVar7 + 0x38) == '\0') {
      if ((*(uint *)(iVar7 + 0x18) & 0x8000) == 0) {
        FUN_004a9a30((int *)param_1[1],iVar7,(byte *)"malformed database schema (%s)");
      }
      if (*(char *)(iVar7 + 0x38) == '\0') {
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        piVar3[3] = 0xb;
        return 1;
      }
    }
    piVar3[3] = 7;
    return 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (param_3[1] == 0) {
      FUN_00476240(param_1,*param_3,0);
      return 0;
    }
    if (((char *)param_3[2] != (char *)0x0) && (*(char *)param_3[2] != '\0')) {
      *(char *)(iVar7 + 0x80) = (char)iVar2;
      uVar5 = FUN_0048d2d0((char *)param_3[1]);
      *(uint *)(iVar7 + 0x7c) = uVar5;
      *(undefined1 *)(iVar7 + 0x82) = 0;
      FUN_004a0180(iVar7,(void *)puVar4[2],0xffffffff,0,0,&param_1,(int *)0x0);
      iVar2 = *(int *)(iVar7 + 0x2c);
      *(undefined1 *)(iVar7 + 0x80) = 0;
      if ((iVar2 != 0) && (*(char *)(iVar7 + 0x82) == '\0')) {
        piVar3[3] = iVar2;
        if (iVar2 == 7) {
          *(undefined1 *)(iVar7 + 0x38) = 1;
          FUN_0046aa30(param_1);
          return 0;
        }
        if ((iVar2 != 9) && ((char)iVar2 != '\x06')) {
          pcVar6 = FUN_004687f0(iVar7);
          FUN_00476240(piVar3,*puVar4,(int)pcVar6);
        }
      }
      FUN_0046aa30(param_1);
      return 0;
    }
    if ((byte *)*param_3 == (byte *)0x0) {
      iVar7 = *param_1;
      if (*(char *)(iVar7 + 0x38) == '\0') {
        if ((*(uint *)(iVar7 + 0x18) & 0x8000) == 0) {
          FUN_004a9a30((int *)param_1[1],iVar7,(byte *)"malformed database schema (%s)");
        }
        if (*(char *)(iVar7 + 0x38) == '\0') {
          FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
          piVar3[3] = 0xb;
          return 0;
        }
      }
      piVar3[3] = 7;
      return 0;
    }
    iVar7 = FUN_00499af0(iVar7,(byte *)*param_3,*(byte **)(*(int *)(iVar7 + 0x10) + iVar2 * 0x10));
    if ((iVar7 != 0) && (iVar7 = FUN_0049ca30((char *)puVar4[1],(uint *)(iVar7 + 0x28)), iVar7 == 0)
       ) {
      FUN_00476240(piVar3,*puVar4,0x5703d8);
    }
  }
  return 0;
}


/* FUN_0049e0a0 @ 0049e0a0  kind=lib  attributed-by=lib-string  size=1226 */

void __cdecl FUN_0049e0a0(int param_1,int param_2,int *param_3)

{
  ushort *puVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  byte *pbVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  char *pcVar16;
  int local_4c;
  int *local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  byte *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 local_1c;
  byte *local_18;
  undefined *local_14;
  char *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  local_28 = param_2;
  local_30 = param_3;
  local_3c = 0;
  if (param_2 == 1) {
    local_10 = 
    "CREATE TEMP TABLE sqlite_temp_master(\n  type text,\n  name text,\n  tbl_name text,\n  rootpage integer,\n  sql text\n)"
    ;
    local_34 = (byte *)0x56e7b8;
  }
  else {
    local_10 = 
    "CREATE TABLE sqlite_master(\n  type text,\n  name text,\n  tbl_name text,\n  rootpage integer,\n  sql text\n)"
    ;
    local_34 = (byte *)0x56e7cc;
  }
  local_14 = &DAT_0056cd2c;
  local_c = 0;
  local_4c = param_1;
  local_44 = param_2;
  local_40 = 0;
  local_48 = param_3;
  local_18 = local_34;
  FUN_0049de90(&local_4c,3,&local_18);
  uVar14 = local_40;
  if (local_40 != 0) goto LAB_0049e54c;
  iVar13 = param_2 * 0x10;
  local_38 = iVar13;
  iVar8 = FUN_00499c30(param_1,local_34,*(byte **)(*(int *)(param_1 + 0x10) + iVar13));
  if (iVar8 != 0) {
    *(byte *)(iVar8 + 0x2a) = *(byte *)(iVar8 + 0x2a) | 1;
  }
  iVar13 = iVar13 + *(int *)(param_1 + 0x10);
  local_2c = iVar13;
  if (*(undefined4 **)(iVar13 + 4) == (undefined4 *)0x0) {
    if (param_2 == 1) {
      puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0x1c) + 0x4e);
      *puVar1 = *puVar1 | 1;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_0048fbc0(*(undefined4 **)(iVar13 + 4));
  local_24 = *(undefined4 **)(iVar13 + 4);
  if (*(char *)(local_24 + 2) == '\0') {
    piVar3 = (int *)local_24[1];
    uVar14 = 0;
    FUN_0048fbc0(local_24);
    if ((*(char *)(local_24 + 2) != '\x02') && (*(char *)(local_24 + 2) != '\x01')) {
      if (((*(byte *)((int)piVar3 + 0x16) & 0x40) == 0) || (*(int *)piVar3[0x13] == 0)) {
        uVar14 = FUN_00487510((int)local_24,1,'\x01');
        if (uVar14 == 0) {
          *(ushort *)((int)piVar3 + 0x16) = *(ushort *)((int)piVar3 + 0x16) & 0xfff7;
          if (piVar3[0xb] == 0) {
            *(ushort *)((int)piVar3 + 0x16) = *(ushort *)((int)piVar3 + 0x16) | 8;
          }
LAB_0049e200:
          if (piVar3[3] == 0) goto code_r0x0049e206;
          if (uVar14 != 0) goto LAB_0049e21b;
          goto LAB_0049e257;
        }
      }
      else {
        uVar14 = 0x106;
      }
    }
    goto LAB_0049e2d5;
  }
LAB_0049e326:
  iVar8 = 0;
  puVar15 = &local_1c;
  do {
    iVar8 = iVar8 + 1;
    FUN_0048fe70(*(undefined4 **)(iVar13 + 4),iVar8,puVar15);
    param_1 = local_20;
    iVar7 = local_28;
    puVar15 = puVar15 + 1;
  } while (iVar8 < 5);
  **(undefined4 **)(iVar13 + 0xc) = local_1c;
  if (local_c == 0) {
    puVar1 = (ushort *)(*(int *)(*(int *)(local_20 + 0x10) + 0xc + local_38) + 0x4e);
    *puVar1 = *puVar1 | 4;
LAB_0049e3b0:
    *(undefined1 *)(*(int *)(iVar13 + 0xc) + 0x4d) =
         *(undefined1 *)(*(int *)(*(int *)(local_20 + 0x10) + 0xc) + 0x4d);
    if (*(int *)(*(int *)(iVar13 + 0xc) + 0x50) == 0) {
      puVar9 = local_14;
      if ((int)local_14 < 0) {
        if (local_14 != (undefined *)0x80000000) {
          puVar9 = (undefined *)-(int)local_14;
          goto LAB_0049e3df;
        }
        puVar9 = (undefined *)0x7fffffff;
      }
      else {
LAB_0049e3df:
        if (puVar9 == (undefined *)0x0) {
          puVar9 = (undefined *)0x7d0;
        }
      }
      *(undefined **)(*(int *)(iVar13 + 0xc) + 0x50) = puVar9;
      FUN_00491b30(*(undefined4 **)(iVar13 + 4),*(uint *)(*(int *)(iVar13 + 0xc) + 0x50));
    }
    *(char *)(*(int *)(iVar13 + 0xc) + 0x4c) = (char)local_18;
    if (*(char *)(*(int *)(iVar13 + 0xc) + 0x4c) == '\0') {
      *(undefined1 *)(*(int *)(iVar13 + 0xc) + 0x4c) = 1;
    }
    if (4 < *(byte *)(*(int *)(iVar13 + 0xc) + 0x4c)) {
      pcVar16 = "unsupported file format";
      goto LAB_0049e38b;
    }
    if ((iVar7 == 0) && (3 < (int)local_18)) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffefff;
    }
    pbVar10 = (byte *)FUN_004a02d0(param_1,(byte *)
                                           "SELECT name, rootpage, sql FROM \'%q\'.%s ORDER BY rowid"
                                  );
    uVar6 = *(undefined4 *)(local_20 + 0x10c);
    *(undefined4 *)(local_20 + 0x10c) = 0;
    uVar14 = FUN_00463120(local_20,pbVar10,FUN_0049de90,&local_4c,(int *)0x0);
    param_1 = local_20;
    if (uVar14 == 0) {
      uVar14 = local_40;
    }
    *(undefined4 *)(local_20 + 0x10c) = uVar6;
    FUN_00494b00(local_20,(undefined4 *)pbVar10);
    if (uVar14 == 0) {
      FUN_0048c830(param_1,local_28);
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      if (uVar14 != 0) goto LAB_0049e4bb;
LAB_0049e4c4:
      puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc + local_38) + 0x4e);
      *puVar1 = *puVar1 | 1;
      uVar14 = 0;
    }
    else {
      uVar14 = 7;
      FUN_004a6940(param_1);
LAB_0049e4bb:
      if ((*(uint *)(param_1 + 0x18) & 0x8000) != 0) goto LAB_0049e4c4;
    }
  }
  else {
    if (local_28 == 0) {
      bVar12 = (byte)local_c & 3;
      if ((local_c & 3) == 0) {
        bVar12 = 1;
      }
      *(byte *)(*(int *)(*(int *)(local_20 + 0x10) + 0xc) + 0x4d) = bVar12;
      goto LAB_0049e3b0;
    }
    if (local_c == *(byte *)(*(int *)(*(int *)(local_20 + 0x10) + 0xc) + 0x4d)) goto LAB_0049e3b0;
    pcVar16 = "attached databases must use the same text encoding as main database";
LAB_0049e38b:
    FUN_004a9a30(local_30,param_1,(byte *)pcVar16);
    uVar14 = 1;
  }
  if (local_3c != 0) {
    piVar3 = *(int **)(local_2c + 4);
    FUN_0048fbc0(piVar3);
    uVar11 = FUN_0048f2f0(piVar3,(char *)0x0);
    if (uVar11 == 0) {
      FUN_0048f390(piVar3,0);
    }
    if (*(char *)((int)piVar3 + 9) != '\0') {
      piVar2 = piVar3 + 3;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        if (*(int *)(piVar3[1] + 0x38) != 0) {
          (*DAT_00582b20)(*(int *)(piVar3[1] + 0x38));
        }
        *(undefined1 *)((int)piVar3 + 10) = 0;
      }
    }
  }
  goto LAB_0049e523;
code_r0x0049e206:
  uVar14 = FUN_0047fc00(piVar3);
  if (uVar14 != 0) {
LAB_0049e21b:
    if ((*(char *)((int)piVar3 + 0x13) == '\0') && (piVar3[3] != 0)) {
      puVar15 = *(undefined4 **)(piVar3[3] + 0x44);
      if (puVar15 != (undefined4 *)0x0) {
        puVar4 = (uint *)puVar15[4];
        FUN_004a3a80(puVar15);
        if (*(int *)(puVar4[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar4);
        }
      }
      piVar3[3] = 0;
    }
LAB_0049e257:
    if (((char)uVar14 != '\x05') || (*(char *)((int)piVar3 + 0x13) != '\0')) goto LAB_0049e296;
    iVar13 = piVar3[1];
    if (((undefined4 *)(iVar13 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar5 = *(code **)(iVar13 + 0x1ac), pcVar5 == (code *)0x0 ||
        (*(int *)(iVar13 + 0x1b4) < 0)))) goto LAB_0049e296;
    iVar8 = (*pcVar5)(*(undefined4 *)(iVar13 + 0x1b0),*(int *)(iVar13 + 0x1b4));
    if (iVar8 == 0) goto LAB_0049e28f;
    *(int *)(iVar13 + 0x1b4) = *(int *)(iVar13 + 0x1b4) + 1;
  }
  goto LAB_0049e200;
LAB_0049e28f:
  *(undefined4 *)(iVar13 + 0x1b4) = 0xffffffff;
LAB_0049e296:
  param_1 = local_20;
  if (uVar14 == 0) {
    if ((*(char *)(local_24 + 2) == '\0') &&
       (piVar3[10] = piVar3[10] + 1, *(char *)((int)local_24 + 9) != '\0')) {
      *(undefined1 *)(local_24 + 9) = 1;
      local_24[10] = piVar3[0x12];
      piVar3[0x12] = (int)(local_24 + 7);
    }
    *(undefined1 *)(local_24 + 2) = 1;
    if (*(char *)((int)piVar3 + 0x13) == '\0') {
      *(undefined1 *)((int)piVar3 + 0x13) = 1;
    }
  }
LAB_0049e2d5:
  if (*(char *)((int)local_24 + 9) != '\0') {
    piVar3 = local_24 + 3;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      if (*(int *)(local_24[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(local_24[1] + 0x38));
      }
      *(undefined1 *)((int)local_24 + 10) = 0;
    }
  }
  if (uVar14 == 0) {
    local_3c = 1;
    iVar13 = local_2c;
    goto LAB_0049e326;
  }
  FUN_004961c0(uVar14);
  FUN_004a9a30(local_30,param_1,&DAT_0056de50);
LAB_0049e523:
  iVar13 = *(int *)(local_2c + 4);
  if (*(char *)(iVar13 + 9) != '\0') {
    piVar3 = (int *)(iVar13 + 0xc);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      iVar8 = *(int *)(*(int *)(iVar13 + 4) + 0x38);
      if (iVar8 != 0) {
        (*DAT_00582b20)(iVar8);
      }
      *(undefined1 *)(iVar13 + 10) = 0;
    }
  }
LAB_0049e54c:
  if ((uVar14 == 7) || (uVar14 == 0xc0a)) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0049e570 @ 0049e570  kind=lib  attributed-by=lib-island  size=4386 */

void __cdecl
FUN_0049e570(int *param_1,short *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  undefined2 *puVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined2 extraout_var_00;
  undefined3 extraout_var;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  uint *puVar13;
  int iVar14;
  undefined1 uVar15;
  ushort *puVar16;
  int *piVar17;
  undefined4 extraout_EDX;
  int *piVar18;
  int *piVar19;
  ulonglong local_a8 [4];
  int local_88;
  int local_84;
  undefined4 *local_80;
  uint local_7c;
  short *local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  uint local_20;
  int *local_1c;
  byte local_18 [4];
  int iStack_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_78 = param_2;
  local_58 = param_3;
  local_48 = param_4;
  local_7c = 0;
  local_6c = 0;
  local_44 = 0;
  local_74 = 0;
  local_84 = 0;
  local_38 = 0;
  local_80 = (undefined4 *)0x0;
  local_4c = *param_1;
  local_24 = param_1;
  local_28 = param_5;
  local_5c = 0;
  local_64 = -1;
  local_54 = 0;
  local_40 = 0;
  _local_18 = 0;
  local_10 = 0;
  if ((((param_1[0x11] != 0) || (*(char *)(local_4c + 0x38) != '\0')) ||
      (*(int *)(param_2 + 8) == 0)) ||
     (local_1c = (int *)FUN_004aa130(param_1,(int)param_2), local_1c == (int *)0x0))
  goto LAB_0049f5f2;
  iVar6 = FUN_004a7ba0(local_4c,local_1c[0x10]);
  iVar7 = FUN_0048d4b0(param_1,0x12,*local_1c,0,
                       *(undefined4 *)(*(int *)(local_4c + 0x10) + iVar6 * 0x10));
  param_5 = local_28;
  if (iVar7 != 0) goto LAB_0049f5f2;
  local_68 = (int *)FUN_004ab0e0(param_1,local_1c,0x69,(int *)0x0,&local_20);
  local_70 = (uint)(local_1c[3] != 0);
  iVar7 = FUN_004b9570(param_1,(int)local_1c);
  param_5 = local_28;
  if (((iVar7 != 0) ||
      (iVar7 = FUN_0049f850(param_1,(int)local_1c,local_20), param_5 = local_28, iVar7 != 0)) ||
     (piVar8 = FUN_0049d4d0(param_1), param_5 = local_28, local_2c = piVar8, piVar8 == (int *)0x0))
  goto LAB_0049f5f2;
  if (*(char *)((int)local_24 + 0x12) == '\0') {
    piVar8[0x18] = piVar8[0x18] | 0x10;
  }
  if ((local_48 == (int *)0x0) && (local_68 == (int *)0x0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  FUN_0048e5e0(local_24,bVar3,iVar6);
  if ((local_28 != (int *)0x0) ||
     (iVar7 = FUN_004c2e90(local_24,local_1c,local_48,(uint)param_6,iVar6), iVar7 == 0)) {
    local_50 = FUN_0046e0c0(local_24,iVar6,(int)local_1c);
    if (local_48 == (int *)0x0) {
      local_a8[1] = 0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[0] = ZEXT48(local_24);
      local_40 = -1;
      if (local_58 == (int *)0x0) {
        local_60 = 0;
      }
      else {
        local_60 = *local_58;
      }
      iVar6 = 0;
      piVar17 = local_24;
      if (0 < local_60) {
        iVar7 = 0;
        do {
          uVar5 = FUN_004a69e0((int *)local_a8,*(int *)(iVar7 + local_58[2]));
          param_5 = local_28;
          if (CONCAT22(extraout_var_00,uVar5) != 0) goto LAB_0049f5f2;
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 0x14;
          piVar17 = local_24;
        } while (iVar6 < local_60);
      }
    }
    else {
      iVar7 = FUN_004927e0(local_24,local_48,local_18);
      piVar17 = local_24;
      param_5 = local_28;
      if (iVar7 != 0) goto LAB_0049f5f2;
      local_38 = iStack_14 + 1;
      local_74 = (int)local_10;
      local_60 = *(int *)*local_48;
      if ((local_68 != (int *)0x0) ||
         (iVar6 = FUN_00487b40(local_24,0,iVar6,(int)local_1c), iVar6 != 0)) {
        local_40 = piVar17[0x12];
        local_54 = 1;
        piVar17[0x12] = local_40 + 1;
        iVar6 = FUN_0049cb40((int)piVar17);
        local_34 = FUN_0049cb40((int)piVar17);
        FUN_004ae830(piVar8,0x2a,extraout_EDX,local_60);
        iVar7 = FUN_004ae7d0(piVar8,4,iStack_14);
        uVar9 = FUN_004ae7d0(local_2c,0x1b,local_38);
        FUN_004ae890(local_2c,0x1f,local_74,local_60,iVar6);
        FUN_004ae830(local_2c,0x38,local_40,local_34);
        FUN_004ae890(local_2c,0x39,local_40,iVar6,local_34);
        piVar8 = local_2c;
        FUN_004ae830(local_2c,1,0,iVar7);
        FUN_004b6720((int)piVar8,uVar9);
        piVar17 = local_24;
        FUN_004a68f0((int)local_24,iVar6);
        FUN_004a68f0((int)piVar17,local_34);
      }
    }
    iVar6 = 0;
    if (((*(byte *)((int)local_1c + 0x2a) & 0x10) != 0) &&
       (iVar7 = (int)*(short *)((int)local_1c + 0x26), 0 < iVar7)) {
      puVar16 = (ushort *)(local_1c[1] + 0x16);
      do {
        iVar6 = iVar6 + (*puVar16 >> 1 & 1);
        puVar16 = puVar16 + 0xc;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (local_28 == (int *)0x0) {
      if (local_60 != 0) {
        if (local_60 != *(short *)((int)local_1c + 0x26) - iVar6) {
          FUN_004962b0(piVar17,(byte *)"table %S has %d columns but %d values were supplied");
          param_5 = local_28;
          goto LAB_0049f5f2;
        }
        if (0 < local_60) {
          local_64 = (int)(short)local_1c[9];
        }
      }
    }
    else {
      if (local_60 != local_28[1]) {
        FUN_004962b0(piVar17,(byte *)"%d values for %d columns");
        param_5 = local_28;
        goto LAB_0049f5f2;
      }
      iVar6 = 0;
      if (0 < local_28[1]) {
        do {
          iVar6 = iVar6 + 1;
          *(undefined4 *)(*local_28 + -4 + iVar6 * 8) = 0xffffffff;
        } while (iVar6 < local_28[1]);
      }
      local_34 = 0;
      piVar17 = local_28;
      piVar18 = local_1c;
      if (0 < local_28[1]) {
        do {
          iVar6 = 0;
          if (0 < *(short *)((int)piVar18 + 0x26)) {
            local_30 = (int *)(*piVar17 + local_34 * 8);
            puVar11 = (undefined4 *)piVar18[1];
            do {
              iVar7 = FUN_004bcc60((byte *)*local_30,(byte *)*puVar11);
              piVar17 = local_28;
              piVar18 = local_1c;
              if (iVar7 == 0) {
                local_30[1] = iVar6;
                if (iVar6 == (short)local_1c[9]) {
                  local_64 = local_34;
                }
                break;
              }
              iVar6 = iVar6 + 1;
              puVar11 = puVar11 + 6;
            } while (iVar6 < *(short *)((int)local_1c + 0x26));
          }
          iVar7 = local_34;
          iVar14 = local_64;
          if ((*(short *)((int)piVar18 + 0x26) <= iVar6) &&
             (bVar4 = FUN_0049f8e0(*(byte **)(*piVar17 + local_34 * 8)), piVar19 = local_24,
             param_5 = local_28, piVar17 = local_28, piVar18 = local_1c, iVar14 = iVar7,
             CONCAT31(extraout_var,bVar4) == 0)) {
            FUN_004962b0(local_24,(byte *)"table %S has no column named %s");
            *(undefined1 *)((int)piVar19 + 0x11) = 1;
            goto LAB_0049f5f2;
          }
          local_64 = iVar14;
          local_34 = iVar7 + 1;
        } while (local_34 < piVar17[1]);
      }
    }
    piVar17 = local_24;
    if ((*(byte *)(local_4c + 0x18) & 0x10) != 0) {
      local_24[0x13] = local_24[0x13] + 1;
      local_84 = local_24[0x13];
      FUN_004ae830(piVar8,7,0,local_84);
    }
    if (local_70 == 0) {
      local_5c = piVar17[0x12];
      iVar6 = FUN_004a1030(piVar17,local_1c,local_5c,0x28);
      local_80 = FUN_00494b90(local_4c,iVar6 * 4 + 4);
      param_5 = local_28;
      if (local_80 == (undefined4 *)0x0) goto LAB_0049f5f2;
      iVar7 = 0;
      if (0 < iVar6) {
        do {
          piVar17[0x13] = piVar17[0x13] + 1;
          local_80[iVar7] = piVar17[0x13];
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar6);
      }
    }
    if (local_54 == 0) {
      if (local_48 != (int *)0x0) {
        local_6c = FUN_004ae7d0(piVar8,4,iStack_14);
        local_7c = FUN_004ae7d0(piVar8,0x1b,local_38);
      }
    }
    else {
      local_7c = FUN_004ae7d0(piVar8,0x48,local_40);
      local_6c = piVar8[7];
    }
    iVar6 = piVar17[0x13];
    local_2c = (int *)(iVar6 + 1);
    iVar7 = *(short *)((int)local_1c + 0x26) + 1 + iVar6;
    piVar17[0x13] = iVar7;
    piVar18 = local_2c;
    if ((*(byte *)((int)local_1c + 0x2a) & 0x10) != 0) {
      piVar18 = (int *)(iVar6 + 2);
      piVar17[0x13] = iVar7 + 1;
    }
    local_88 = (int)piVar18 + 1;
    local_3c = piVar18;
    local_34 = FUN_004b6b80(piVar8);
    if ((local_20 & 1) != 0) {
      uVar9 = piVar17[0x10];
      iVar6 = *(short *)((int)local_1c + 0x26) + 1;
      if (piVar17[0xf] < iVar6) {
        uVar9 = piVar17[0x13] + 1;
        piVar17[0x13] = piVar17[0x13] + iVar6;
      }
      else {
        piVar17[0x10] = iVar6 + uVar9;
        piVar17[0xf] = piVar17[0xf] - iVar6;
      }
      local_20 = uVar9;
      if (local_64 < 0) {
        FUN_004ae830(piVar8,7,0xffffffff,uVar9);
      }
      else {
        if (local_54 == 0) {
          FUN_00496f30(piVar17,*(byte **)(local_58[2] + local_64 * 0x14),uVar9);
        }
        else {
          FUN_004ae890(piVar8,0x1d,local_40,local_64,uVar9);
        }
        uVar10 = FUN_004ae7d0(piVar8,0x4a,uVar9);
        FUN_004ae830(piVar8,7,0xffffffff,local_20);
        uVar9 = local_20;
        if ((-1 < (int)uVar10) && (uVar10 < (uint)piVar8[7])) {
          *(int *)(piVar8[1] + 8 + uVar10 * 0x14) = piVar8[7];
        }
        FUN_004ae7d0(piVar8,0x15,local_20);
      }
      local_30 = (int *)0x0;
      piVar17 = local_1c;
      if (0 < *(short *)((int)local_1c + 0x26)) {
        local_38 = 0;
        do {
          piVar18 = local_30;
          piVar19 = local_30;
          if (local_28 != (int *)0x0) {
            piVar19 = (int *)0x0;
            if (0 < local_28[1]) {
              puVar11 = (undefined4 *)(*local_28 + 4);
              do {
                if ((int *)*puVar11 == local_30) break;
                piVar19 = (int *)((int)piVar19 + 1);
                puVar11 = puVar11 + 2;
              } while ((int)piVar19 < local_28[1]);
            }
          }
          if (((local_54 == 0) && (local_58 == (int *)0x0)) ||
             ((local_28 != (int *)0x0 && (local_28[1] <= (int)piVar19)))) {
            pbVar2 = *(byte **)(piVar17[1] + 4 + local_38);
            iVar6 = local_20 + 1 + (int)local_30;
            if ((pbVar2 == (byte *)0x0) || (*pbVar2 != 0x84)) {
              iVar7 = FUN_00497780(local_24,pbVar2,iVar6);
              piVar17 = local_1c;
              if ((iVar7 == iVar6) || (piVar19 = (int *)local_24[2], piVar19 == (int *)0x0))
              goto LAB_0049ec57;
              uVar15 = 0xf;
            }
            else {
              iVar7 = *(int *)(pbVar2 + 0x18);
              uVar15 = 0xe;
              piVar19 = (int *)local_24[2];
            }
            FUN_004ae830(piVar19,uVar15,iVar7,iVar6);
            piVar17 = local_1c;
          }
          else if (local_54 == 0) {
            FUN_00496f90(local_24,*(byte **)(local_58[2] + (int)piVar19 * 0x14),
                         local_20 + 1 + (int)local_30);
            piVar17 = local_1c;
          }
          else {
            iVar6 = piVar8[7];
            if ((iVar6 < piVar8[8]) ||
               (iVar7 = FUN_0047de10(piVar8), piVar17 = local_1c, piVar18 = local_30, iVar7 == 0)) {
              piVar8[7] = piVar8[7] + 1;
              puVar1 = (undefined2 *)(piVar8[1] + iVar6 * 0x14);
              *(int *)(puVar1 + 2) = local_40;
              *(int **)(puVar1 + 4) = piVar19;
              *puVar1 = 0x1d;
              *(undefined1 *)((int)puVar1 + 3) = 0;
              *(uint *)(puVar1 + 6) = (int)local_30 + local_20 + 1;
              *(undefined4 *)(puVar1 + 8) = 0;
              piVar18 = local_30;
            }
          }
LAB_0049ec57:
          local_30 = (int *)((int)piVar18 + 1);
          local_38 = local_38 + 0x18;
          uVar9 = local_20;
        } while ((int)local_30 < (int)*(short *)((int)piVar17 + 0x26));
      }
      if (local_70 == 0) {
        FUN_004ae830(piVar8,0x1e,uVar9 + 1,(int)*(short *)((int)piVar17 + 0x26));
        FUN_004aaa40(piVar8,(int)local_1c);
      }
      piVar17 = local_24;
      FUN_00492d70(local_24,local_68,0x69,(int *)0x0,1,local_1c,
                   (uVar9 - (int)*(short *)((int)local_1c + 0x26)) + -1,param_6,local_34);
      iVar6 = *(short *)((int)local_1c + 0x26) + 1;
      FUN_00496d90((int)piVar17,local_20,iVar6);
      piVar18 = local_3c;
      if (piVar17[0xf] < iVar6) {
        piVar17[0xf] = iVar6;
        piVar17[0x10] = local_20;
      }
    }
    piVar19 = local_24;
    if (local_70 == 0) {
      if ((*(byte *)((int)local_1c + 0x2a) & 0x10) != 0) {
        FUN_004ae830(piVar8,10,0,local_2c);
      }
      if (local_64 < 0) {
        if ((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0) {
          FUN_004ae890(piVar8,0x38,local_5c,piVar18,local_50);
LAB_0049eef8:
          local_44 = 1;
        }
        else {
          FUN_004ae830(piVar8,10,0,piVar18);
        }
      }
      else {
        if (local_54 == 0) {
          if (local_48 == (int *)0x0) {
            FUN_00496f30(piVar17,*(byte **)(local_58[2] + local_64 * 0x14),(int)piVar18);
            if (*(char *)(*piVar8 + 0x38) == '\0') {
              pcVar12 = (char *)(piVar8[1] + (piVar8[7] + -1) * 0x14);
              if (pcVar12 == (char *)0x0) goto LAB_0049ed29;
            }
            else {
              pcVar12 = &DAT_00583fc4;
            }
            if ((*pcVar12 == '\n') && ((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0)) {
              *(int *)(pcVar12 + 4) = local_5c;
              *pcVar12 = '8';
              *(int **)(pcVar12 + 8) = piVar18;
              *(int *)(pcVar12 + 0xc) = local_50;
              goto LAB_0049eef8;
            }
          }
          else {
            FUN_004ae830(piVar8,0xf,local_74 + local_64,piVar18);
          }
        }
        else {
          FUN_004ae890(piVar8,0x1d,local_40,local_64,piVar18);
        }
LAB_0049ed29:
        if ((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0) {
          uVar9 = FUN_004ae7d0(piVar8,0x4a,piVar18);
          FUN_004ae890(piVar8,0x38,local_5c,local_3c,local_50);
          piVar18 = local_3c;
          if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar8[7])) {
            *(int *)(piVar8[1] + 8 + uVar9 * 0x14) = piVar8[7];
          }
          FUN_004ae7d0(piVar8,0x15,local_3c);
        }
        else {
          FUN_004ae830(piVar8,0x49,piVar18,piVar8[7] + 2);
          FUN_004ae7d0(piVar8,0x15,piVar18);
        }
      }
      if (0 < local_50) {
        FUN_004ae830((int *)piVar17[2],0x77,local_50,piVar18);
      }
      local_38 = 0;
      local_20 = 0;
      if (0 < *(short *)((int)local_1c + 0x26)) {
        local_50 = 0;
        do {
          piVar17 = local_24;
          piVar18 = (int *)(local_88 + local_20);
          local_30 = piVar18;
          if (local_20 == (int)(short)local_1c[9]) {
            iVar6 = piVar8[7];
            if ((iVar6 < piVar8[8]) || (iVar7 = FUN_0047de10(piVar8), iVar7 == 0)) {
              iVar7 = piVar8[1];
              piVar8[7] = piVar8[7] + 1;
              *(undefined2 *)(iVar7 + iVar6 * 0x14) = 10;
              *(undefined1 *)(iVar7 + 3 + iVar6 * 0x14) = 0;
              *(undefined4 *)(iVar7 + 4 + iVar6 * 0x14) = 0;
              *(int **)(iVar7 + 8 + iVar6 * 0x14) = piVar18;
              *(undefined4 *)(iVar7 + 0xc + iVar6 * 0x14) = 0;
              *(undefined4 *)(iVar7 + 0x10 + iVar6 * 0x14) = 0;
            }
          }
          else {
            if (local_28 == (int *)0x0) {
              if ((*(byte *)(local_1c[1] + 0x16 + local_50) & 2) == 0) {
                iVar6 = local_20 - local_38;
LAB_0049f02c:
                if (-1 < iVar6) goto LAB_0049f037;
              }
              else {
                local_38 = local_38 + 1;
              }
            }
            else {
              iVar6 = 0;
              if (0 < local_28[1]) {
                puVar13 = (uint *)(*local_28 + 4);
                do {
                  if (*puVar13 == local_20) break;
                  iVar6 = iVar6 + 1;
                  puVar13 = puVar13 + 2;
                } while (iVar6 < local_28[1]);
                goto LAB_0049f02c;
              }
LAB_0049f037:
              if ((local_60 != 0) && ((local_28 == (int *)0x0 || (iVar6 < local_28[1])))) {
                if (local_54 == 0) {
                  if (local_48 == (int *)0x0) {
                    FUN_00496f30(local_24,*(byte **)(local_58[2] + iVar6 * 0x14),(int)piVar18);
                  }
                  else {
                    FUN_004ae830(piVar8,0xf,local_74 + iVar6,piVar18);
                  }
                }
                else {
                  iVar7 = piVar8[7];
                  if ((iVar7 < piVar8[8]) || (iVar14 = FUN_0047de10(piVar8), iVar14 == 0)) {
                    iVar14 = piVar8[1];
                    piVar8[7] = piVar8[7] + 1;
                    *(int *)(iVar14 + 8 + iVar7 * 0x14) = iVar6;
                    *(undefined2 *)(iVar14 + iVar7 * 0x14) = 0x1d;
                    *(undefined1 *)(iVar14 + 3 + iVar7 * 0x14) = 0;
                    *(int *)(iVar14 + 4 + iVar7 * 0x14) = local_40;
                    *(int **)(iVar14 + 0xc + iVar7 * 0x14) = local_30;
                    *(undefined4 *)(iVar14 + 0x10 + iVar7 * 0x14) = 0;
                  }
                }
                goto LAB_0049f13d;
              }
            }
            pbVar2 = *(byte **)(local_1c[1] + 4 + local_50);
            if ((pbVar2 == (byte *)0x0) || (*pbVar2 != 0x84)) {
              local_3c = (int *)FUN_00497780(local_24,pbVar2,(int)piVar18);
              if (((local_3c != piVar18) && (piVar17 = (int *)piVar17[2], piVar17 != (int *)0x0)) &&
                 ((iVar6 = piVar17[7], iVar6 < piVar17[8] ||
                  (iVar7 = FUN_0047de10(piVar17), iVar7 == 0)))) {
                iVar7 = piVar17[1];
                piVar17[7] = piVar17[7] + 1;
                *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0xf;
                goto LAB_0049f117;
              }
            }
            else {
              local_3c = *(int **)(pbVar2 + 0x18);
              piVar17 = (int *)local_24[2];
              iVar6 = piVar17[7];
              if ((iVar6 < piVar17[8]) || (iVar7 = FUN_0047de10(piVar17), iVar7 == 0)) {
                iVar7 = piVar17[1];
                piVar17[7] = piVar17[7] + 1;
                *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0xe;
LAB_0049f117:
                *(undefined4 *)(iVar7 + 0x10 + iVar6 * 0x14) = 0;
                *(undefined4 *)(iVar7 + 0xc + iVar6 * 0x14) = 0;
                *(int **)(iVar7 + 8 + iVar6 * 0x14) = local_30;
                *(int **)(iVar7 + 4 + iVar6 * 0x14) = local_3c;
                *(undefined1 *)(iVar7 + 3 + iVar6 * 0x14) = 0;
              }
            }
          }
LAB_0049f13d:
          local_20 = local_20 + 1;
          local_50 = local_50 + 0x18;
        } while ((int)local_20 < (int)*(short *)((int)local_1c + 0x26));
      }
      piVar17 = local_1c;
      piVar19 = local_24;
      if ((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0) {
        FUN_0049b1e0(local_24,local_1c,local_5c,(int)local_2c,(int)local_80,(uint)(-1 < local_64),0,
                     param_6,local_34,(int *)&local_30);
        FUN_0049a610(piVar19,piVar17,0,(int)local_2c);
        FUN_00493790(piVar19,piVar17,local_5c,(int)local_2c,(int)local_80,0,local_44,
                     (uint)(local_30 == (int *)0x0));
      }
      else {
        for (piVar17 = (int *)local_1c[0xe]; (piVar17 != (int *)0x0 && (*piVar17 != local_4c));
            piVar17 = (int *)piVar17[6]) {
        }
        FUN_004b9d20(local_24,(int)local_1c);
        iVar6 = piVar8[7];
        local_44 = *(short *)((int)local_1c + 0x26) + 2;
        if ((iVar6 < piVar8[8]) || (iVar7 = FUN_0047de10(piVar8), iVar7 == 0)) {
          iVar7 = piVar8[1];
          piVar8[7] = piVar8[7] + 1;
          *(int *)(iVar7 + 8 + iVar6 * 0x14) = local_44;
          *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0x8c;
          *(undefined1 *)(iVar7 + 3 + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar7 + 4 + iVar6 * 0x14) = 1;
          *(int **)(iVar7 + 0xc + iVar6 * 0x14) = local_2c;
          *(undefined4 *)(iVar7 + 0x10 + iVar6 * 0x14) = 0;
        }
        else {
          iVar6 = 1;
        }
        iVar7 = piVar8[1];
        if ((iVar7 != 0) && (*(char *)(*piVar8 + 0x38) == '\0')) {
          if (iVar6 < 0) {
            iVar6 = piVar8[7] + -1;
          }
          iVar14 = iVar7 + iVar6 * 0x14;
          FUN_0047bc80(*piVar8,(int)*(char *)(iVar14 + 1),*(int **)(iVar7 + 0x10 + iVar6 * 0x14));
          *(undefined4 *)(iVar14 + 0x10) = 0;
          if (piVar17 == (int *)0x0) {
            *(undefined4 *)(iVar14 + 0x10) = 0;
            *(undefined1 *)(iVar14 + 1) = 0;
          }
          else {
            *(int **)(iVar14 + 0x10) = piVar17;
            *(undefined1 *)(iVar14 + 1) = 0xf6;
            piVar17[3] = piVar17[3] + 1;
          }
        }
        if (piVar8[1] != 0) {
          uVar15 = SUB41(param_6,0);
          if (param_6 == (int *)0x63) {
            uVar15 = 2;
          }
          *(undefined1 *)(piVar8[1] + -0x11 + piVar8[7] * 0x14) = uVar15;
        }
        piVar17 = local_24;
        if ((int *)local_24[0x6c] != (int *)0x0) {
          piVar17 = (int *)local_24[0x6c];
        }
        *(undefined1 *)(piVar17 + 6) = 1;
        piVar19 = local_24;
      }
    }
    if (((*(byte *)(local_4c + 0x18) & 0x10) != 0) &&
       ((iVar6 = piVar8[7], iVar6 < piVar8[8] || (iVar7 = FUN_0047de10(piVar8), iVar7 == 0)))) {
      iVar7 = piVar8[1];
      piVar8[7] = piVar8[7] + 1;
      *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0x14;
      *(undefined1 *)(iVar7 + 3 + iVar6 * 0x14) = 0;
      *(int *)(iVar7 + 4 + iVar6 * 0x14) = local_84;
      *(undefined4 *)(iVar7 + 8 + iVar6 * 0x14) = 1;
      *(undefined4 *)(iVar7 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x10 + iVar6 * 0x14) = 0;
    }
    iVar6 = local_34;
    if (local_68 != (int *)0x0) {
      FUN_00492d70(piVar19,local_68,0x69,(int *)0x0,2,local_1c,
                   (local_88 - *(short *)((int)local_1c + 0x26)) + -2,param_6,local_34);
    }
    if (piVar8[10] != 0) {
      *(int *)(piVar8[10] - (iVar6 * 4 + 4)) = piVar8[7];
    }
    if (local_54 == 0) {
      if (local_48 != (int *)0x0) {
        iVar6 = piVar8[7];
        if ((iVar6 < piVar8[8]) || (iVar7 = FUN_0047de10(piVar8), iVar7 == 0)) {
          iVar7 = piVar8[1];
          piVar8[7] = piVar8[7] + 1;
          *(undefined2 *)(iVar7 + iVar6 * 0x14) = 1;
          *(undefined1 *)(iVar7 + 3 + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar7 + 4 + iVar6 * 0x14) = 0;
          *(int *)(iVar7 + 8 + iVar6 * 0x14) = local_6c;
          *(undefined4 *)(iVar7 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar7 + 0x10 + iVar6 * 0x14) = 0;
        }
        if ((-1 < (int)local_7c) && (local_7c < (uint)piVar8[7])) {
          *(int *)(piVar8[1] + 8 + local_7c * 0x14) = piVar8[7];
        }
      }
    }
    else {
      iVar6 = piVar8[7];
      if ((iVar6 < piVar8[8]) || (iVar7 = FUN_0047de10(piVar8), iVar7 == 0)) {
        iVar7 = piVar8[1];
        piVar8[7] = piVar8[7] + 1;
        *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0x5f;
        *(undefined1 *)(iVar7 + 3 + iVar6 * 0x14) = 0;
        *(int *)(iVar7 + 4 + iVar6 * 0x14) = local_40;
        *(int *)(iVar7 + 8 + iVar6 * 0x14) = local_6c;
        *(undefined4 *)(iVar7 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar7 + 0x10 + iVar6 * 0x14) = 0;
      }
      iVar6 = local_40;
      if ((-1 < (int)local_7c) && (local_7c < (uint)piVar8[7])) {
        *(int *)(piVar8[1] + 8 + local_7c * 0x14) = piVar8[7];
      }
      iVar7 = piVar8[7];
      if ((iVar7 < piVar8[8]) || (iVar14 = FUN_0047de10(piVar8), iVar14 == 0)) {
        iVar14 = piVar8[1];
        piVar8[7] = piVar8[7] + 1;
        *(undefined2 *)(iVar14 + iVar7 * 0x14) = 0x2d;
        *(undefined1 *)(iVar14 + 3 + iVar7 * 0x14) = 0;
        *(int *)(iVar14 + 4 + iVar7 * 0x14) = iVar6;
        *(undefined4 *)(iVar14 + 8 + iVar7 * 0x14) = 0;
        *(undefined4 *)(iVar14 + 0xc + iVar7 * 0x14) = 0;
        *(undefined4 *)(iVar14 + 0x10 + iVar7 * 0x14) = 0;
      }
    }
    piVar17 = local_1c;
    if (((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0) && (local_70 == 0)) {
      iVar6 = piVar8[7];
      if ((iVar6 < piVar8[8]) || (iVar7 = FUN_0047de10(piVar8), iVar7 == 0)) {
        iVar7 = piVar8[1];
        piVar8[7] = piVar8[7] + 1;
        *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0x2d;
        *(undefined1 *)(iVar7 + 3 + iVar6 * 0x14) = 0;
        *(int *)(iVar7 + 4 + iVar6 * 0x14) = local_5c;
        *(undefined4 *)(iVar7 + 8 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar7 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar7 + 0x10 + iVar6 * 0x14) = 0;
      }
      iVar6 = piVar17[2];
      if (iVar6 != 0) {
        local_44 = local_5c + 1;
        do {
          iVar7 = piVar8[7];
          if ((iVar7 < piVar8[8]) || (iVar14 = FUN_0047de10(piVar8), iVar14 == 0)) {
            iVar14 = piVar8[1];
            piVar8[7] = piVar8[7] + 1;
            *(undefined2 *)(iVar14 + iVar7 * 0x14) = 0x2d;
            *(undefined1 *)(iVar14 + 3 + iVar7 * 0x14) = 0;
            *(int *)(iVar14 + 4 + iVar7 * 0x14) = local_44;
            *(undefined4 *)(iVar14 + 8 + iVar7 * 0x14) = 0;
            *(undefined4 *)(iVar14 + 0xc + iVar7 * 0x14) = 0;
            *(undefined4 *)(iVar14 + 0x10 + iVar7 * 0x14) = 0;
          }
          iVar6 = *(int *)(iVar6 + 0x14);
          local_44 = local_44 + 1;
        } while (iVar6 != 0);
      }
    }
  }
  if ((*(char *)((int)local_24 + 0x12) == '\0') && (local_24[0x6d] == 0)) {
    FUN_0048dbc0(local_24);
  }
  param_5 = local_28;
  if ((((*(byte *)(local_4c + 0x18) & 0x10) != 0) && (*(char *)((int)local_24 + 0x12) == '\0')) &&
     (local_24[0x6d] == 0)) {
    iVar6 = piVar8[7];
    if ((iVar6 < piVar8[8]) || (iVar7 = FUN_0047de10(piVar8), iVar7 == 0)) {
      iVar7 = piVar8[1];
      piVar8[7] = piVar8[7] + 1;
      *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0x10;
      *(undefined1 *)(iVar7 + 3 + iVar6 * 0x14) = 0;
      *(int *)(iVar7 + 4 + iVar6 * 0x14) = local_84;
      *(undefined4 *)(iVar7 + 8 + iVar6 * 0x14) = 1;
      *(undefined4 *)(iVar7 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x10 + iVar6 * 0x14) = 0;
    }
    FUN_004b8c50(piVar8,1);
    param_5 = local_28;
    if (*(char *)(*piVar8 + 0x38) == '\0') {
      FUN_004b79e0((int *)piVar8[4],"rows inserted",0xffffffff,'\x01',(undefined *)0x0);
      param_5 = local_28;
    }
  }
LAB_0049f5f2:
  iVar6 = local_4c;
  FUN_004a9cb0(local_4c,local_78);
  FUN_00499060(iVar6,local_58);
  piVar8 = local_48;
  if (local_48 != (int *)0x0) {
    FUN_00499060(iVar6,(int *)*local_48);
    FUN_004a9cb0(iVar6,(short *)piVar8[10]);
    FUN_00498790(iVar6,(undefined4 *)piVar8[0xb]);
    FUN_00499060(iVar6,(int *)piVar8[0xc]);
    FUN_00498790(iVar6,(undefined4 *)piVar8[0xd]);
    FUN_00499060(iVar6,(int *)piVar8[0xe]);
    FUN_004a9650(iVar6,(undefined4 *)piVar8[0xf]);
    FUN_00498790(iVar6,(undefined4 *)piVar8[0x12]);
    FUN_00498790(iVar6,(undefined4 *)piVar8[0x13]);
    FUN_00494b00(iVar6,piVar8);
  }
  FUN_0049d910(iVar6,param_5);
  FUN_00494b00(iVar6,local_80);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0049f780 @ 0049f780  kind=lib  attributed-by=lib-island  size=135 */

undefined4 __cdecl FUN_0049f780(int param_1,char *param_2,uint *param_3,undefined2 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  size_t sVar5;
  short *psVar6;
  
  if (((*param_2 != -0x69) || (*(int **)(param_2 + 0x10) == (int *)0x0)) ||
     (**(int **)(param_2 + 0x10) != 2)) {
    return 0;
  }
  pbVar2 = *(byte **)(param_2 + 4);
  sVar5 = 0;
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    pbVar4 = pbVar2;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
    }
    sVar5 = (int)pbVar4 - (int)pbVar2 & 0x3fffffff;
  }
  psVar6 = FUN_004995c0(param_1,pbVar2,sVar5,2,1,'\0');
  if ((psVar6 != (short *)0x0) && ((*(byte *)((int)psVar6 + 3) & 1) != 0)) {
    puVar3 = *(undefined2 **)(psVar6 + 2);
    *param_4 = *puVar3;
    *(undefined1 *)(param_4 + 1) = *(undefined1 *)(puVar3 + 1);
    *param_3 = ~(uint)(*(byte *)((int)psVar6 + 3) >> 1) & 1;
    return 1;
  }
  return 0;
}


/* FUN_0049f810 @ 0049f810  kind=lib  attributed-by=lib-island  size=57 */

/* WARNING: Removing unreachable block (ram,0x0049f83a) */

undefined4 FUN_0049f810(void)

{
  return 0;
}


/* FUN_0049f850 @ 0049f850  kind=lib  attributed-by=lib-island  size=142 */

undefined4 __cdecl FUN_0049f850(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if ((*(byte *)(param_2 + 0x2a) & 0x10) != 0) {
    piVar1 = *(int **)(param_2 + 0x38);
    if (piVar1 != (int *)0x0) {
      do {
        if (*piVar1 == *param_1) break;
        piVar1 = (int *)piVar1[6];
      } while (piVar1 != (int *)0x0);
    }
    if (*(int *)(*(int *)piVar1[1] + 0x34) == 0) goto LAB_0049f89d;
  }
  if ((((*(byte *)(param_2 + 0x2a) & 1) == 0) || ((*(uint *)(*param_1 + 0x18) & 0x100) != 0)) ||
     (*(char *)((int)param_1 + 0x12) != '\0')) {
    if ((param_3 == 0) && (*(int *)(param_2 + 0xc) != 0)) {
      FUN_004962b0(param_1,(byte *)"cannot modify %s because it is a view");
      return 1;
    }
    return 0;
  }
LAB_0049f89d:
  FUN_004962b0(param_1,(byte *)"table %s may not be modified");
  return 1;
}


/* FUN_0049f8e0 @ 0049f8e0  kind=lib  attributed-by=lib-island  size=126 */

bool __cdecl FUN_0049f8e0(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = &DAT_0056ecbc;
  bVar2 = *param_1;
  pbVar4 = param_1;
  while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar5]))) {
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = *pbVar1;
  }
  if (((&DAT_00569620)[*pbVar4] != (&DAT_00569620)[*pbVar5]) &&
     (iVar3 = FUN_004bcc60(param_1,(byte *)"ROWID"), iVar3 != 0)) {
    iVar3 = FUN_004bcc60(param_1,&DAT_0056eccc);
    return (bool)('\x01' - (iVar3 != 0));
  }
  return true;
}


/* FUN_0049f970 @ 0049f970  kind=lib  attributed-by=lib-island  size=337 */

uint __cdecl FUN_0049f970(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int local_28 [4];
  undefined4 *local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_28[0] = param_2;
  local_28[2] = param_4;
  local_c = 0;
  local_28[1] = param_3;
  local_10 = 0;
LAB_0049f995:
  local_18 = (undefined4 *)local_28[local_10];
  uVar1 = local_c;
  if (local_18 != (undefined4 *)0x0) {
    local_14 = local_18[1];
    local_8 = 0;
    pbVar2 = &DAT_0056a9ac;
    do {
      if (local_14 == pbVar2[1]) {
        pbVar4 = (byte *)*local_18;
        pbVar3 = (byte *)("naturaleftouterightfullinnercross" + *pbVar2);
        uVar1 = local_14;
        while (0 < (int)uVar1) {
          if ((*pbVar4 == 0) || ((&DAT_00569620)[*pbVar4] != (&DAT_00569620)[*pbVar3])) break;
          pbVar4 = pbVar4 + 1;
          pbVar3 = pbVar3 + 1;
          uVar1 = uVar1 - 1;
        }
        if (((int)(uVar1 - 1) < 0) || ((&DAT_00569620)[*pbVar4] == (&DAT_00569620)[*pbVar3]))
        goto LAB_0049fa63;
      }
      pbVar2 = pbVar2 + 3;
      local_8 = local_8 + 1;
      if (0x56a9c0 < (int)pbVar2) {
        uVar1 = local_c | 0x40;
        break;
      }
    } while( true );
  }
  goto LAB_0049fa2c;
LAB_0049fa63:
  uVar1 = local_c | (byte)(&DAT_0056a9ae)[local_8 * 3];
  local_10 = local_10 + 1;
  local_c = uVar1;
  if (2 < local_10) {
LAB_0049fa2c:
    if ((((byte)uVar1 & 0x21) == 0x21) || ((uVar1 & 0x40) != 0)) {
      FUN_004962b0(param_1,(byte *)"unknown or unsupported join type: %T %T%s%T");
      uVar1 = 1;
    }
    else if ((uVar1 & 0x20) != 0) {
      if (((byte)uVar1 & 0x18) == 8) {
        return uVar1;
      }
      FUN_004962b0(param_1,(byte *)"RIGHT and FULL OUTER JOINs are not currently supported");
      return 1;
    }
    return uVar1;
  }
  goto LAB_0049f995;
}


/* FUN_0049fad0 @ 0049fad0  kind=lib  attributed-by=lib-island  size=304 */

void __cdecl FUN_0049fad0(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_8;
  
  piVar6 = param_1;
  if ((param_1[0x11] == 0x64cffc7f) && (iVar7 = FUN_004757a0((int)param_1), iVar7 == 0)) {
    FUN_00492710((int)param_1);
    iVar7 = 0;
    if (0 < param_1[5]) {
      param_1 = (int *)0x0;
      do {
        iVar2 = piVar6[4];
        piVar8 = *(int **)((int)param_1 + iVar2 + 4);
        if (piVar8 != (int *)0x0) {
          FUN_0048f070(piVar8);
          *(undefined4 *)((int)param_1 + iVar2 + 4) = 0;
          if (iVar7 != 1) {
            *(undefined4 *)((int)param_1 + iVar2 + 0xc) = 0;
          }
        }
        iVar7 = iVar7 + 1;
        param_1 = param_1 + 4;
      } while (iVar7 < piVar6[5]);
    }
    if (*(int *)(piVar6[4] + 0x1c) != 0) {
      FUN_004a7960(*(int *)(piVar6[4] + 0x1c));
    }
    FUN_004ba070((int)piVar6);
    FUN_004934c0((int)piVar6);
    piVar8 = piVar6 + 0x50;
    local_8 = 0x17;
    do {
      puVar5 = (undefined4 *)*piVar8;
      while (puVar5 != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)puVar5[7];
        puVar10 = puVar5;
        do {
          piVar3 = (int *)puVar10[8];
          if ((piVar3 != (int *)0x0) && (*piVar3 = *piVar3 + -1, *piVar3 == 0)) {
            (*(code *)piVar3[1])(piVar3[2]);
            FUN_00494b00((int)piVar6,piVar3);
          }
          puVar4 = (undefined4 *)puVar10[2];
          FUN_00494b00((int)piVar6,puVar10);
          puVar10 = puVar4;
          puVar5 = puVar9;
        } while (puVar4 != (undefined4 *)0x0);
      }
      piVar8 = piVar8 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    for (puVar5 = (undefined4 *)piVar6[0x69]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)*puVar5) {
      puVar10 = (undefined4 *)puVar5[2];
      puVar9 = puVar10 + 4;
      iVar7 = 3;
      do {
        if ((code *)*puVar9 != (code *)0x0) {
          (*(code *)*puVar9)(puVar9[-2]);
        }
        puVar9 = puVar9 + 5;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      FUN_00494b00((int)piVar6,puVar10);
    }
    FUN_0049d5c0(piVar6 + 0x67);
    for (puVar5 = (undefined4 *)piVar6[0x4b]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)*puVar5) {
      puVar9 = (undefined4 *)puVar5[2];
      if ((code *)puVar9[3] != (code *)0x0) {
        (*(code *)puVar9[3])(puVar9[2]);
      }
      FUN_00494b00((int)piVar6,puVar9);
    }
    FUN_0049d5c0(piVar6 + 0x49);
    FUN_004961f0((int)piVar6,0,(byte *)0x0);
    piVar8 = (int *)piVar6[0x35];
    if (piVar8 != (int *)0x0) {
      uVar1 = *(ushort *)(piVar8 + 7);
      if ((uVar1 & 0x2460) != 0) {
        if ((uVar1 & 0x2000) == 0) {
          if (((uVar1 & 0x400) == 0) || ((code *)piVar8[8] == (code *)0x0)) {
            if ((uVar1 & 0x20) == 0) {
              if ((uVar1 & 0x40) != 0) {
                piVar3 = (int *)piVar8[4];
                piVar3[1] = *(int *)(*piVar3 + 0xa4);
                *(int **)(*piVar3 + 0xa4) = piVar3;
                if ((*(byte *)(piVar8 + 7) & 0x20) != 0) {
                  FUN_004a6e20((undefined4 *)piVar8[4]);
                }
                *(ushort *)(piVar8 + 7) = *(ushort *)(piVar8 + 7) & 0xbe01 | 1;
                *(undefined1 *)((int)piVar8 + 0x1e) = 5;
              }
            }
            else {
              FUN_004a6e20((undefined4 *)piVar8[4]);
            }
          }
          else {
            (*(code *)piVar8[8])(piVar8[1]);
            piVar8[8] = 0;
          }
        }
        else {
          FUN_004b7010(piVar8,piVar8[4]);
          FUN_004b76e0(piVar8);
        }
      }
      FUN_00494b00(*piVar8,(undefined4 *)piVar8[9]);
      piVar8[1] = 0;
      piVar8[9] = 0;
      piVar8[8] = 0;
      FUN_00494b00(*piVar8,piVar8);
    }
    FUN_00492650(piVar6);
    piVar6[0x11] = -0x4aca86d0;
    FUN_00494b00((int)piVar6,*(undefined4 **)(piVar6[4] + 0x1c));
    if (piVar6[3] != 0) {
      (*DAT_00582b20)(piVar6[3]);
    }
    piVar6[0x11] = -0x60c3d2cd;
    if (piVar6[3] != 0) {
      (*DAT_00582b14)(piVar6[3]);
    }
    if (*(char *)((int)piVar6 + 0xeb) != '\0') {
      FUN_00466dd0(piVar6[0x41]);
    }
    FUN_00466dd0((int)piVar6);
    return;
  }
  if (param_1[3] != 0) {
    (*DAT_00582b20)(param_1[3]);
  }
  return;
}


/* FUN_0049fde0 @ 0049fde0  kind=lib  attributed-by=lib-string  size=540 */

undefined4 __cdecl FUN_0049fde0(int *param_1,char *param_2,char *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  undefined4 *_Dst;
  
  piVar3 = param_4;
  piVar2 = param_1;
  iVar7 = *param_1;
  param_1 = (int *)0x0;
  uVar5 = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar4 = param_2;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    uVar5 = (int)pcVar4 - (int)param_2 & 0x3fffffff;
  }
  iVar6 = uVar5 + 300;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if ((piVar2[6] & 0x200000U) == 0) {
    if (param_4 != (int *)0x0) {
      iVar7 = FUN_004666d0((byte *)"not authorized");
      *piVar3 = iVar7;
    }
    return 1;
  }
  param_4 = (int *)"sqlite3_extension_init";
  if (param_3 != (char *)0x0) {
    param_4 = (int *)param_3;
  }
  iVar8 = (**(code **)(iVar7 + 0x28))(iVar7,param_2);
  if (iVar8 == 0) {
    if (piVar3 != (int *)0x0) {
      iVar8 = FUN_004bc920();
      if (iVar8 == 0) {
        param_1 = (int *)FUN_004a0350(iVar6);
      }
      else {
        param_1 = (int *)0x0;
      }
      *piVar3 = (int)param_1;
      if (param_1 != (int *)0x0) {
        FUN_00466a80(iVar6,param_1,(byte *)"unable to open shared library [%s]");
        (**(code **)(iVar7 + 0x2c))(iVar7,uVar5 + 299,param_1);
      }
    }
    return 1;
  }
  pcVar9 = (code *)(**(code **)(iVar7 + 0x30))(iVar7,iVar8,param_4);
  if (pcVar9 == (code *)0x0) {
    if (piVar3 != (int *)0x0) {
      uVar5 = FUN_004aa9b0((char *)param_4);
      iVar6 = iVar6 + uVar5;
      iVar10 = FUN_004bc920();
      if (iVar10 == 0) {
        param_1 = (int *)FUN_004a0350(iVar6);
      }
      else {
        param_1 = (int *)0x0;
      }
      *piVar3 = (int)param_1;
      if (param_1 != (int *)0x0) {
        FUN_00466a80(iVar6,param_1,(byte *)"no entry point [%s] in shared library [%s]");
        (**(code **)(iVar7 + 0x2c))(iVar7,iVar6 + -1,param_1);
      }
      (**(code **)(iVar7 + 0x34))(iVar7,iVar8);
    }
    return 1;
  }
  iVar6 = (*pcVar9)(piVar2,&param_1,&PTR_FUN_0056a290);
  if (iVar6 == 0) {
    _Dst = FUN_00494c20((int)piVar2,piVar2[0x24] * 4 + 4);
    if (_Dst != (undefined4 *)0x0) {
      if (0 < piVar2[0x24]) {
        memcpy(_Dst,(void *)piVar2[0x25],piVar2[0x24] << 2);
      }
      FUN_00494b00((int)piVar2,(undefined4 *)piVar2[0x25]);
      piVar2[0x25] = (int)_Dst;
      _Dst[piVar2[0x24]] = iVar8;
      piVar2[0x24] = piVar2[0x24] + 1;
      return 0;
    }
    return 7;
  }
  if (piVar3 != (int *)0x0) {
    iVar6 = FUN_004666d0((byte *)"error during initialization: %s");
    *piVar3 = iVar6;
  }
  FUN_00466dd0((int)param_1);
  (**(code **)(iVar7 + 0x34))(iVar7,iVar8);
  return 1;
}


/* FUN_004a0000 @ 004a0000  kind=lib  attributed-by=lib-island  size=113 */

int * __cdecl FUN_004a0000(int *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar3 = *param_1;
  bVar1 = *(byte *)(iVar3 + 0x81);
  bVar2 = *(byte *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + 0x4d);
  if (param_2 == (byte *)0x0) {
    piVar4 = *(int **)(iVar3 + 8);
  }
  else {
    piVar4 = FUN_004799f0(iVar3,param_2,(uint)bVar1);
  }
  piVar5 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    piVar5 = piVar4 + (uint)bVar2 * 5 + -5;
  }
  if ((bVar1 == 0) && ((piVar5 == (int *)0x0 || (piVar5[3] == 0)))) {
    piVar4 = FUN_0049c970(param_1,bVar2,piVar5,param_2);
    return piVar4;
  }
  return piVar5;
}


/* FUN_004a0080 @ 004a0080  kind=lib  attributed-by=lib-string  size=150 */

int __cdecl FUN_004a0080(int *param_1,int param_2,byte *param_3,byte *param_4)

{
  int iVar1;
  
  if ((*(char *)(*param_1 + 0x81) == '\0') &&
     (iVar1 = FUN_0049ddb0(*param_1,param_1 + 1), iVar1 != 0)) {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar1;
    return 0;
  }
  iVar1 = FUN_00499c30(*param_1,param_3,param_4);
  if (iVar1 == 0) {
    if (param_4 != (byte *)0x0) {
      FUN_004962b0(param_1,(byte *)"%s: %s.%s");
      *(undefined1 *)((int)param_1 + 0x11) = 1;
      return 0;
    }
    FUN_004962b0(param_1,(byte *)"%s: %s");
    *(undefined1 *)((int)param_1 + 0x11) = 1;
  }
  return iVar1;
}


/* FUN_004a0120 @ 004a0120  kind=lib  attributed-by=lib-island  size=83 */

void __cdecl FUN_004a0120(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  
  if (*param_3 == 0) {
    pbVar3 = (byte *)param_3[1];
  }
  else {
    iVar1 = *param_1;
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 0x14)) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x10) + 0xc);
      do {
        if (*piVar2 == *param_3) break;
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 4;
      } while (iVar4 < *(int *)(iVar1 + 0x14));
    }
    pbVar3 = *(byte **)(*(int *)(iVar1 + 0x10) + iVar4 * 0x10);
  }
  FUN_004a0080(param_1,param_2,(byte *)param_3[2],pbVar3);
  return;
}


/* FUN_004a0180 @ 004a0180  kind=lib  attributed-by=lib-island  size=187 */

uint __cdecl
FUN_004a0180(int param_1,void *param_2,size_t param_3,byte param_4,int param_5,undefined4 *param_6,
            int *param_7)

{
  int iVar1;
  uint uVar2;
  
  *param_6 = 0;
  iVar1 = FUN_004a7850(param_1);
  if (iVar1 == 0) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  FUN_0048fca0(param_1);
  uVar2 = FUN_004a5af0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (uVar2 == 0x11) {
    FUN_0046aa30((int *)*param_6);
    uVar2 = FUN_004a5af0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  FUN_00490780(param_1);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar2;
}


/* FUN_004a0240 @ 004a0240  kind=lib  attributed-by=lib-island  size=138 */

void __cdecl FUN_004a0240(int param_1,undefined4 *param_2,byte *param_3)

{
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char local_54;
  undefined2 local_53;
  undefined1 local_50 [72];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_68 = local_50;
  local_58 = *(undefined4 *)(param_1 + 0x50);
  local_60 = 0;
  local_5c = 0x46;
  local_53 = 1;
  local_54 = '\0';
  local_6c = param_1;
  local_64 = local_68;
  FUN_004ad370(&local_6c,1,param_3,(double *)&stack0x00000010);
  FUN_004aa8f0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  FUN_00494b00(param_1,param_2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004a02d0 @ 004a02d0  kind=lib  attributed-by=lib-island  size=117 */

void __cdecl FUN_004a02d0(int param_1,byte *param_2)

{
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char local_54;
  undefined2 local_53;
  undefined1 local_50 [72];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_68 = local_50;
  local_58 = *(undefined4 *)(param_1 + 0x50);
  local_60 = 0;
  local_5c = 0x46;
  local_53 = 1;
  local_54 = '\0';
  local_6c = param_1;
  local_64 = local_68;
  FUN_004ad370(&local_6c,1,param_2,(double *)&stack0x0000000c);
  FUN_004aa8f0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004a0350 @ 004a0350  kind=lib  attributed-by=lib-island  size=101 */

int __cdecl FUN_004a0350(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (0x7ffffefe < param_1 - 1U) {
    return 0;
  }
  if (DAT_00582ac8 != 0) {
    if (DAT_00583f40 != 0) {
      (*DAT_00582b18)(DAT_00583f40);
    }
    FUN_00480650(iVar1,&param_1);
    if (DAT_00583f40 != 0) {
      (*DAT_00582b20)(DAT_00583f40);
    }
    return param_1;
  }
  iVar1 = (*DAT_00582ae8)(param_1);
  return iVar1;
}


/* FUN_004a03c0 @ 004a03c0  kind=lib  attributed-by=lib-island  size=118 */

void __cdecl FUN_004a03c0(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_00583f54;
  pcVar2 = DAT_00583f50;
  iVar1 = DAT_00583e18;
  if (DAT_00583f50 != (code *)0x0) {
    iVar4 = DAT_00583e18 >> 0x1f;
    DAT_00583f50 = (code *)0x0;
    if (DAT_00583f40 != 0) {
      (*DAT_00582b20)(DAT_00583f40);
    }
    (*pcVar2)(uVar3,iVar1,iVar4,param_1);
    if (DAT_00583f40 != 0) {
      (*DAT_00582b18)(DAT_00583f40);
    }
  }
  DAT_00583f50 = pcVar2;
  DAT_00583f54 = uVar3;
  return;
}


/* FUN_004a0440 @ 004a0440  kind=lib  attributed-by=lib-island  size=293 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004a0440(undefined4 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_retaddr;
  
  if (DAT_00582ae8 == 0) {
    FUN_004bc440(4,(undefined8 *)&PTR_FUN_0056a9dc,unaff_retaddr,param_1);
  }
  _DAT_00583f40 = 0;
  _DAT_00583f48 = 0;
  _DAT_00583f50 = 0;
  _DAT_00583f58 = 0;
  _DAT_00583f60 = 0;
  if (DAT_00582acc != 0) {
    uVar2 = (*DAT_00582b10)(3);
    _DAT_00583f40 = CONCAT44(DAT_00583f40_4,uVar2);
  }
  if (((DAT_00582b70 == (undefined4 *)0x0) || ((int)DAT_00582b74 < 100)) || (DAT_00582b78 < 1)) {
    _DAT_00583f58 = _DAT_00583f58 & 0xffffffff00000000;
    DAT_00582b70 = (undefined4 *)0x0;
    DAT_00582b74 = 0;
    DAT_00582b78 = 0;
  }
  else {
    _DAT_00583f60 = CONCAT44(DAT_00583f64,DAT_00582b78);
    uVar6 = DAT_00582b74 & 0xfffffff8;
    iVar5 = DAT_00582b78 + -1;
    _DAT_00583f58 = ZEXT48(DAT_00582b70) << 0x20;
    lVar1 = _DAT_00583f58;
    DAT_00583f5c = DAT_00582b70;
    puVar3 = DAT_00582b70;
    puVar4 = DAT_00582b70;
    DAT_00582b74 = uVar6;
    if (0 < iVar5) {
      do {
        _DAT_00583f58 = lVar1;
        puVar4 = (undefined4 *)((int)puVar3 + uVar6);
        *puVar3 = puVar4;
        iVar5 = iVar5 + -1;
        puVar3 = puVar4;
        lVar1 = _DAT_00583f58;
      } while (iVar5 != 0);
    }
    *puVar4 = 0;
    _DAT_00583f58 = CONCAT44(DAT_00583f5c,puVar4 + 1);
  }
  if (((DAT_00582b7c == 0) || (DAT_00582b80 < 0x200)) || (DAT_00582b84 < 1)) {
    DAT_00582b7c = 0;
    DAT_00582b80 = 0;
    DAT_00582b84 = 0;
  }
  (*_DAT_00582afc)(DAT_00582b00._4_4_);
  return;
}


/* FUN_004a05b0 @ 004a05b0  kind=lib  attributed-by=lib-island  size=354 */

void __cdecl FUN_004a05b0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  short *psVar5;
  char *pcVar6;
  undefined4 *puVar7;
  byte local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar2 = *param_1;
  piVar3 = FUN_004a9680(iVar2,(undefined4 *)param_2[3],0);
  if (param_3 == (undefined4 *)0x0) goto LAB_004a06c4;
  puVar4 = FUN_00478bb0(iVar2,param_3,0,(int *)0x0);
  psVar5 = (short *)FUN_00494b90(iVar2,0x50);
  if (psVar5 == (short *)0x0) {
LAB_004a0643:
    psVar5 = (short *)0x0;
    if (piVar3 != (int *)0x0) {
      FUN_00472d10(iVar2,piVar3);
      FUN_00494b00(iVar2,piVar3);
    }
  }
  else {
    memset(psVar5,0,0x50);
    psVar5[1] = 1;
    psVar5 = FUN_004a9fc0(iVar2,psVar5,1,(int)*psVar5);
    if (*(char *)(iVar2 + 0x38) != '\0') {
      FUN_004a9cb0(iVar2,psVar5);
      goto LAB_004a0643;
    }
    sVar1 = *psVar5;
    pcVar6 = FUN_004a0d40(iVar2,(undefined4 *)0x0);
    *(char **)(psVar5 + sVar1 * 0x24 + -0x1c) = pcVar6;
    pcVar6 = FUN_004a0d40(iVar2,(undefined4 *)0x0);
    *(char **)(psVar5 + sVar1 * 0x24 + -0x1e) = pcVar6;
    puVar7 = FUN_00494db0(iVar2,(char *)*param_2);
    *(undefined4 **)(psVar5 + 10) = puVar7;
    *(int **)(psVar5 + 0xe) = piVar3;
  }
  piVar3 = (int *)FUN_004a97d0(param_1,(int *)0x0,(undefined4 *)psVar5,puVar4,0,0,0,0,0,0);
  if (piVar3 != (int *)0x0) {
    *(ushort *)((int)piVar3 + 6) = *(ushort *)((int)piVar3 + 6) | 0x100;
  }
LAB_004a06c4:
  local_14 = param_4;
  local_18[0] = 9;
  local_18[1] = 0;
  local_10 = 0;
  local_c = 0;
  FUN_004a7e30(param_1,piVar3,local_18);
  if (piVar3 != (int *)0x0) {
    FUN_00472d10(iVar2,piVar3);
    FUN_00494b00(iVar2,piVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004a0720 @ 004a0720  kind=lib  attributed-by=lib-island  size=574 */

uint __cdecl FUN_004a0720(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  int local_5c [22];
  
  uVar1 = *(ushort *)((int)param_1 + 0x1c);
  uVar2 = *(ushort *)((int)param_2 + 0x1c);
  uVar3 = uVar2 | uVar1;
  if ((uVar3 & 1) != 0) {
    return (uVar2 & 1) - (uVar1 & 1);
  }
  if ((uVar3 & 0xc) != 0) {
    if ((uVar1 & 0xc) == 0) {
      return 1;
    }
    if ((uVar2 & 0xc) != 0) {
      if ((uVar2 & uVar1 & 4) != 0) {
        iVar12 = *(int *)((int)param_1 + 0x14);
        iVar6 = *(int *)((int)param_2 + 0x14);
        if (iVar12 <= iVar6) {
          if (iVar12 < iVar6) {
            return 0xffffffff;
          }
          if (*(uint *)(param_1 + 2) < *(uint *)(param_2 + 2)) {
            return 0xffffffff;
          }
          if ((iVar12 < iVar6) ||
             ((iVar12 <= iVar6 && (*(uint *)(param_1 + 2) <= *(uint *)(param_2 + 2))))) {
            return 0;
          }
        }
        return 1;
      }
      if ((uVar1 & 8) == 0) {
        dVar15 = (double)(longlong)param_1[2];
      }
      else {
        dVar15 = (double)param_1[1];
      }
      if ((uVar2 & 8) == 0) {
        dVar14 = (double)(longlong)param_2[2];
      }
      else {
        dVar14 = (double)param_2[1];
      }
      if (dVar14 <= dVar15) {
        return (uint)(dVar14 < dVar15);
      }
    }
    return 0xffffffff;
  }
  if ((uVar3 & 2) != 0) {
    if ((uVar1 & 2) == 0) {
      return 1;
    }
    if ((uVar2 & 2) == 0) {
      return 0xffffffff;
    }
    if (param_3 != 0) {
      if (*(char *)((int)param_1 + 0x1f) != *(char *)(param_3 + 4)) {
        local_5c[10] = 0;
        local_5c[0xb] = 0;
        local_5c[0xc] = 0;
        local_5c[0xd] = 0;
        local_5c[0xe] = 0;
        local_5c[0xf] = 0;
        local_5c[0x10] = 0;
        local_5c[0x11] = 0;
        local_5c[0x12] = 0;
        local_5c[0x13] = 0;
        local_5c[0] = 0;
        local_5c[1] = 0;
        local_5c[2] = 0;
        local_5c[3] = 0;
        local_5c[4] = 0;
        local_5c[5] = 0;
        local_5c[6] = 0;
        local_5c[7] = 0;
        local_5c[8] = 0;
        local_5c[9] = 0;
        FUN_004b7c40(local_5c + 10,param_1,0x1000);
        FUN_004b7c40(local_5c,param_2,0x1000);
        iVar6 = FUN_004ae680(local_5c + 10,*(byte *)(param_3 + 4));
        iVar12 = local_5c[0x10];
        if (iVar6 == 0) {
          iVar12 = 0;
        }
        iVar7 = FUN_004ae680(local_5c,*(byte *)(param_3 + 4));
        iVar9 = local_5c[6];
        if (iVar7 == 0) {
          iVar9 = 0;
        }
        uVar5 = (**(code **)(param_3 + 0xc))(*(undefined4 *)(param_3 + 8),iVar12,iVar6,iVar9,iVar7);
        FUN_004b76e0(local_5c + 10);
        FUN_004b76e0(local_5c);
        return uVar5;
      }
      uVar5 = (**(code **)(param_3 + 0xc))
                        (*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_1 + 3),
                         *(undefined4 *)((int)param_1 + 4),*(undefined4 *)(param_2 + 3),
                         *(undefined4 *)((int)param_2 + 4));
      return uVar5;
    }
  }
  uVar5 = *(uint *)(param_1 + 3);
  pbVar10 = *(byte **)((int)param_1 + 4);
  pbVar11 = *(byte **)((int)param_2 + 4);
  uVar8 = uVar5;
  if (*(int *)(param_2 + 3) < (int)uVar5) {
    uVar8 = *(uint *)(param_2 + 3);
  }
  while (uVar4 = uVar8 - 4, 3 < uVar8) {
    if (*(int *)pbVar10 != *(int *)pbVar11) goto LAB_004a0918;
    pbVar10 = pbVar10 + 4;
    pbVar11 = pbVar11 + 4;
    uVar8 = uVar4;
  }
  if (uVar4 != 0xfffffffc) {
LAB_004a0918:
    bVar13 = *pbVar10 < *pbVar11;
    if ((*pbVar10 != *pbVar11) ||
       ((uVar4 != 0xfffffffd &&
        ((bVar13 = pbVar10[1] < pbVar11[1], pbVar10[1] != pbVar11[1] ||
         ((uVar4 != 0xfffffffe &&
          ((bVar13 = pbVar10[2] < pbVar11[2], pbVar10[2] != pbVar11[2] ||
           ((uVar4 != 0xffffffff && (bVar13 = pbVar10[3] < pbVar11[3], pbVar10[3] != pbVar11[3])))))
          ))))))) {
      uVar8 = -(uint)bVar13 | 1;
      goto LAB_004a094e;
    }
  }
  uVar8 = 0;
LAB_004a094e:
  if (uVar8 == 0) {
    uVar8 = uVar5 - *(int *)(param_2 + 3);
  }
  return uVar8;
}


/* FUN_004a0960 @ 004a0960  kind=lib  attributed-by=lib-island  size=41 */

void __cdecl FUN_004a0960(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined **)param_1 = &DAT_00569a48;
  return;
}


/* FUN_004a0a20 @ 004a0a20  kind=lib  attributed-by=lib-island  size=453 */

void __cdecl FUN_004a0a20(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  piVar1 = param_1;
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    piVar3 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      return;
    }
    FUN_004ae760(piVar3,0x94);
  }
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    param_1 = (int *)param_1[0x13];
  }
  else {
    bVar2 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar2;
    param_1 = (int *)param_1[bVar2 + 7];
  }
  if (*(char *)((int)piVar1 + 0x13) == '\0') {
    piVar1[0x13] = piVar1[0x13] + 1;
    iVar7 = piVar1[0x13];
  }
  else {
    bVar2 = *(char *)((int)piVar1 + 0x13) - 1;
    *(byte *)((int)piVar1 + 0x13) = bVar2;
    iVar7 = piVar1[bVar2 + 7];
  }
  iVar5 = piVar3[7];
  if ((iVar5 < piVar3[8]) || (iVar4 = FUN_0047de10(piVar3), iVar4 == 0)) {
    piVar3[7] = piVar3[7] + 1;
    iVar4 = piVar3[1];
    *(int *)(iVar4 + 4 + iVar5 * 0x14) = param_2;
    *(undefined2 *)(iVar4 + iVar5 * 0x14) = 0x24;
    *(undefined1 *)(iVar4 + 3 + iVar5 * 0x14) = 0;
    *(int **)(iVar4 + 8 + iVar5 * 0x14) = param_1;
    *(undefined4 *)(iVar4 + 0xc + iVar5 * 0x14) = 2;
    *(undefined4 *)(iVar4 + 0x10 + iVar5 * 0x14) = 0;
  }
  uVar6 = 1 << ((byte)param_2 & 0x1f);
  piVar3[0x1a] = piVar3[0x1a] | uVar6;
  if ((param_2 != 1) &&
     (*(char *)(*(int *)(*(int *)(*piVar3 + 0x10) + 4 + param_2 * 0x10) + 9) != '\0')) {
    piVar3[0x1b] = piVar3[0x1b] | uVar6;
  }
  FUN_004ae830(piVar3,7,param_3,iVar7);
  uVar6 = piVar3[7];
  if (((int)uVar6 < piVar3[8]) || (iVar5 = FUN_0047de10(piVar3), iVar5 == 0)) {
    iVar5 = piVar3[1];
    piVar3[7] = piVar3[7] + 1;
    *(int *)(iVar5 + 4 + uVar6 * 0x14) = iVar7;
    *(undefined2 *)(iVar5 + uVar6 * 0x14) = 0x50;
    *(undefined1 *)(iVar5 + 3 + uVar6 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 8 + uVar6 * 0x14) = 0;
    *(int **)(iVar5 + 0xc + uVar6 * 0x14) = param_1;
    *(undefined4 *)(iVar5 + 0x10 + uVar6 * 0x14) = 0;
  }
  else {
    uVar6 = 1;
  }
  iVar5 = piVar3[7];
  if ((iVar5 < piVar3[8]) || (iVar4 = FUN_0047de10(piVar3), iVar4 == 0)) {
    piVar3[7] = piVar3[7] + 1;
    iVar4 = piVar3[1];
    *(int *)(iVar4 + 4 + iVar5 * 0x14) = param_2;
    *(undefined2 *)(iVar4 + iVar5 * 0x14) = 0x25;
    *(undefined1 *)(iVar4 + 3 + iVar5 * 0x14) = 0;
    *(undefined4 *)(iVar4 + 8 + iVar5 * 0x14) = 2;
    *(int *)(iVar4 + 0xc + iVar5 * 0x14) = iVar7;
    *(undefined4 *)(iVar4 + 0x10 + iVar5 * 0x14) = 0;
  }
  if ((-1 < (int)uVar6) && (uVar6 < (uint)piVar3[7])) {
    *(int *)(piVar3[1] + 8 + uVar6 * 0x14) = piVar3[7];
  }
  FUN_004a68f0((int)piVar1,(int)param_1);
  FUN_004a68f0((int)piVar1,iVar7);
  return;
}


/* FUN_004a0bf0 @ 004a0bf0  kind=lib  attributed-by=lib-island  size=224 */

undefined4 __cdecl FUN_004a0bf0(uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int unaff_EBX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint local_c;
  int local_8;
  
  uVar2 = __alldvrm(*param_1,param_1[1],0,1);
  uVar3 = __alldvrm(param_2,param_3,0,1);
  param_3 = (uint)((ulonglong)uVar3 >> 0x20);
  local_8 = (int)((ulonglong)uVar2 >> 0x20);
  local_c = (uint)uVar2;
  lVar4 = __allmul((uint)uVar3,param_3,local_c,local_8);
  if (lVar4 == 0) {
    lVar4 = __allmul((uint)uVar3,param_3,extraout_ECX,unaff_EBX);
    lVar5 = __allmul(extraout_ECX_00,unaff_EBX,local_c,local_8);
    param_3 = (uint)(lVar5 + lVar4);
    if ((int)((ulonglong)(lVar5 + lVar4 + 0x80000000) >> 0x20) == 0) {
      param_2 = 0;
      lVar4 = __allmul(extraout_ECX_00,unaff_EBX,extraout_ECX,unaff_EBX);
      iVar1 = FUN_0048bce0(&param_2,(uint)lVar4,(int)((ulonglong)lVar4 >> 0x20));
      if (iVar1 == 0) {
        *param_1 = param_2;
        param_1[1] = param_3;
        return 0;
      }
    }
  }
  return 1;
}


/* FUN_004a0cd0 @ 004a0cd0  kind=lib  attributed-by=lib-island  size=102 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a0cd0(void)

{
  undefined **ppuVar1;
  
  if (DAT_00582b10 == (undefined *)0x0) {
    ppuVar1 = &PTR_LAB_0056caa0;
    if (DAT_00582acc == 0) {
      ppuVar1 = &PTR_LAB_0056c24c;
    }
    _DAT_00582b14 = *(undefined8 *)(ppuVar1 + 3);
    DAT_00582b08._4_4_ = ppuVar1[1];
    DAT_00582b08._0_4_ = (code *)*ppuVar1;
    _DAT_00582b1c = *(undefined8 *)(ppuVar1 + 5);
    DAT_00582b10 = ppuVar1[2];
    _DAT_00582b24 = *(undefined8 *)(ppuVar1 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x004a0d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)DAT_00582b08)();
  return;
}


/* FUN_004a0d40 @ 004a0d40  kind=lib  attributed-by=lib-island  size=96 */

char * __cdecl FUN_004a0d40(int param_1,undefined4 *param_2)

{
  void *_Src;
  size_t _Size;
  char *_Dst;
  
  if (param_2 == (undefined4 *)0x0) {
    return (char *)0x0;
  }
  _Src = (void *)*param_2;
  _Size = param_2[1];
  if (_Src == (void *)0x0) {
    FUN_00495540((char *)0x0);
    return (char *)0x0;
  }
  _Dst = (char *)FUN_00494b90(param_1,_Size + 1);
  if (_Dst != (char *)0x0) {
    memcpy(_Dst,_Src,_Size);
    _Dst[_Size] = '\0';
  }
  FUN_00495540(_Dst);
  return _Dst;
}


/* FUN_004a0da0 @ 004a0da0  kind=lib  attributed-by=lib-island  size=147 */

void __cdecl FUN_004a0da0(int *param_1,byte *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *_Dst;
  int local_74 [25];
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_10 = *param_1;
  if ((param_1[0x11] == 0) &&
     (local_c = (undefined4 *)FUN_004ad2f0(local_10,param_2,(double *)&stack0x0000000c),
     local_c != (undefined4 *)0x0)) {
    *(char *)((int)param_1 + 0x12) = *(char *)((int)param_1 + 0x12) + '\x01';
    _Dst = param_1 + 0x73;
    piVar3 = _Dst;
    piVar4 = local_74;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    memset(_Dst,0,100);
    puVar1 = local_c;
    FUN_004a7140(param_1,(int)local_c,(int *)&local_8);
    iVar2 = local_10;
    FUN_00494b00(local_10,local_8);
    FUN_00494b00(iVar2,puVar1);
    *(char *)((int)param_1 + 0x12) = *(char *)((int)param_1 + 0x12) + -1;
    piVar3 = local_74;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *_Dst = *piVar3;
      piVar3 = piVar3 + 1;
      _Dst = _Dst + 1;
    }
  }
  return;
}


/* FUN_004a0e40 @ 004a0e40  kind=lib  attributed-by=lib-string  size=242 */

void __cdecl FUN_004a0e40(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    piVar3 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      FUN_004ae760(piVar3,0x94);
    }
  }
  pcVar4 = "sqlite_temp_master";
  if (param_2 != 1) {
    pcVar4 = "sqlite_master";
  }
  FUN_004aab20(param_1,param_2,1,'\x01',(int)pcVar4);
  iVar2 = piVar3[7];
  if ((iVar2 < piVar3[8]) || (iVar5 = FUN_0047de10(piVar3), iVar5 == 0)) {
    piVar3[7] = piVar3[7] + 1;
    iVar5 = piVar3[1];
    *(undefined2 *)(iVar5 + iVar2 * 0x14) = 0x28;
    *(undefined1 *)(iVar5 + 3 + iVar2 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 4 + iVar2 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 8 + iVar2 * 0x14) = 1;
    *(int *)(iVar5 + 0xc + iVar2 * 0x14) = param_2;
    *(undefined4 *)(iVar5 + 0x10 + iVar2 * 0x14) = 0;
  }
  iVar2 = piVar3[1];
  iVar5 = *piVar3;
  if ((iVar2 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
    FUN_0047bc80(iVar5,0xfffffff2,(int *)0x5);
  }
  else {
    iVar1 = iVar2 + (piVar3[7] + -1) * 0x14;
    FUN_0047bc80(iVar5,(int)*(char *)(iVar1 + 1),*(int **)(iVar2 + 0x10 + (piVar3[7] + -1) * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 5;
    *(undefined1 *)(iVar1 + 1) = 0xf2;
  }
  if (param_1[0x12] == 0) {
    param_1[0x12] = 1;
  }
  return;
}


/* FUN_004a0f40 @ 004a0f40  kind=lib  attributed-by=lib-island  size=232 */

void __cdecl FUN_004a0f40(int *param_1,undefined4 param_2,int param_3,int *param_4,int param_5)

{
  undefined1 *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = (int *)param_1[2];
  if (piVar5 == (int *)0x0) {
    piVar5 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar5;
    if (piVar5 != (int *)0x0) {
      FUN_004ae760(piVar5,0x94);
    }
  }
  FUN_004aab20(param_1,param_3,param_4[8],param_5 == 0x28,*param_4);
  iVar3 = piVar5[7];
  iVar4 = param_4[8];
  if (piVar5[8] <= iVar3) {
    iVar6 = FUN_0047de10(piVar5);
    if (iVar6 != 0) goto LAB_004a0fdd;
  }
  piVar5[7] = piVar5[7] + 1;
  puVar1 = (undefined1 *)(piVar5[1] + iVar3 * 0x14);
  *puVar1 = (char)param_5;
  *(undefined4 *)(puVar1 + 4) = param_2;
  *(int *)(puVar1 + 8) = iVar4;
  puVar1[3] = 0;
  *(int *)(puVar1 + 0xc) = param_3;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
LAB_004a0fdd:
  iVar3 = piVar5[1];
  sVar2 = *(short *)((int)param_4 + 0x26);
  iVar4 = *piVar5;
  if ((iVar3 != 0) && (*(char *)(iVar4 + 0x38) == '\0')) {
    iVar6 = iVar3 + (piVar5[7] + -1) * 0x14;
    FUN_0047bc80(iVar4,(int)*(char *)(iVar6 + 1),*(int **)(iVar3 + 0x10 + (piVar5[7] + -1) * 0x14));
    *(int **)(iVar6 + 0x10) = (int *)(int)sVar2;
    *(undefined1 *)(iVar6 + 1) = 0xf2;
    return;
  }
  FUN_0047bc80(iVar4,0xfffffff2,(int *)(int)sVar2);
  return;
}


/* FUN_004a1030 @ 004a1030  kind=lib  attributed-by=lib-island  size=397 */

int __cdecl FUN_004a1030(int *param_1,int *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  
  piVar9 = param_2;
  if ((*(byte *)((int)param_2 + 0x2a) & 0x10) != 0) {
    return 0;
  }
  piVar7 = param_2 + 0x10;
  iVar6 = *param_1;
  param_2 = (int *)0xfff0bdc0;
  if (*piVar7 != 0) {
    piVar11 = (int *)0x0;
    param_2 = (int *)0x0;
    if (0 < *(int *)(iVar6 + 0x14)) {
      piVar5 = (int *)(*(int *)(iVar6 + 0x10) + 0xc);
      do {
        if (*piVar5 == *piVar7) break;
        piVar11 = (int *)((int)piVar11 + 1);
        piVar5 = piVar5 + 4;
      } while ((int)piVar11 < *(int *)(iVar6 + 0x14));
      iVar6 = *param_1;
      param_2 = piVar11;
    }
  }
  piVar7 = (int *)param_1[2];
  if (piVar7 == (int *)0x0) {
    piVar7 = FUN_004af150(iVar6);
    param_1[2] = (int)piVar7;
    if (piVar7 != (int *)0x0) {
      FUN_004ae760(piVar7,0x94);
    }
  }
  FUN_004a0f40(param_1,param_3,(int)param_2,piVar9,param_4);
  iVar8 = 1;
  for (iVar6 = piVar9[2]; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x14)) {
    piVar9 = FUN_0049dbf0(param_1,iVar6);
    iVar12 = piVar7[7];
    uVar3 = *(undefined4 *)(iVar6 + 0x28);
    if ((iVar12 < piVar7[8]) || (iVar10 = FUN_0047de10(piVar7), iVar10 == 0)) {
      piVar7[7] = piVar7[7] + 1;
      puVar1 = (undefined1 *)(piVar7[1] + iVar12 * 0x14);
      *puVar1 = (char)param_4;
      puVar1[3] = 0;
      *(int *)(puVar1 + 4) = iVar8 + param_3;
      *(undefined4 *)(puVar1 + 8) = uVar3;
      *(int **)(puVar1 + 0xc) = param_2;
      *(undefined4 *)(puVar1 + 0x10) = 0;
      puVar1[1] = 0;
    }
    else {
      iVar12 = 1;
    }
    iVar10 = piVar7[1];
    iVar4 = *piVar7;
    if ((iVar10 == 0) || (*(char *)(iVar4 + 0x38) != '\0')) {
      FUN_0047bc80(iVar4,0xfffffff0,piVar9);
    }
    else {
      if (iVar12 < 0) {
        iVar12 = piVar7[7] + -1;
      }
      iVar2 = iVar10 + iVar12 * 0x14;
      FUN_0047bc80(iVar4,(int)*(char *)(iVar2 + 1),*(int **)(iVar10 + 0x10 + iVar12 * 0x14));
      *(undefined4 *)(iVar2 + 0x10) = 0;
      if (piVar9 == (int *)0x0) {
        *(undefined4 *)(iVar2 + 0x10) = 0;
        *(undefined1 *)(iVar2 + 1) = 0;
      }
      else {
        *(int **)(iVar2 + 0x10) = piVar9;
        *(undefined1 *)(iVar2 + 1) = 0xfa;
      }
    }
    iVar8 = iVar8 + 1;
  }
  if (param_1[0x12] < param_3 + iVar8) {
    param_1[0x12] = param_3 + iVar8;
  }
  return iVar8 + -1;
}


/* FUN_004a11c0 @ 004a11c0  kind=lib  attributed-by=lib-island  size=137 */

undefined4 __cdecl FUN_004a11c0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  puVar1 = (undefined4 *)*param_1;
  if ((*(int *)(puVar1[4] + 0x14) == 0) && ((char)param_1[0x75] == '\0')) {
    iVar3 = FUN_00490e00((undefined *)*puVar1,(byte *)0x0,(int)puVar1,&param_1,0,0x21e);
    if (iVar3 != 0) {
      FUN_004962b0(piVar2,(byte *)
                          "unable to open a temporary database file for storing temporary tables");
      piVar2[3] = iVar3;
      return 1;
    }
    *(int **)(puVar1[4] + 0x14) = param_1;
    iVar3 = FUN_00491c00(param_1,puVar1[0x10],0xffffffff,0);
    if (iVar3 == 7) {
      *(undefined1 *)(puVar1 + 0xe) = 1;
      return 1;
    }
  }
  return 0;
}


/* FUN_004a1250 @ 004a1250  kind=lib  attributed-by=lib-island  size=36 */

undefined4 __cdecl FUN_004a1250(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = (**(code **)(*param_1 + 4))(param_1);
    *param_1 = 0;
    return uVar1;
  }
  return 0;
}


/* FUN_004a1280 @ 004a1280  kind=lib  attributed-by=lib-island  size=91 */

undefined4 __cdecl FUN_004a1280(int *param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  double local_c;
  
  if ((1 < *param_1) && ((code *)param_1[0x12] != (code *)0x0)) {
    uVar1 = (*(code *)param_1[0x12])(param_1,param_2);
    return uVar1;
  }
  uVar1 = (*(code *)param_1[0x10])(param_1,&local_c);
  local_c = local_c * 86400000.0;
  uVar2 = FUN_0054a946();
  *param_2 = uVar2;
  return uVar1;
}


/* FUN_004a1350 @ 004a1350  kind=lib  attributed-by=lib-island  size=31 */

void __cdecl
FUN_004a1350(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  (**(code **)(*param_1 + 8))(param_1,param_2,param_3,param_4,param_5);
  return;
}


/* FUN_004a1370 @ 004a1370  kind=lib  attributed-by=lib-island  size=25 */

void __cdecl FUN_004a1370(int *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  return;
}


/* FUN_004a1390 @ 004a1390  kind=lib  attributed-by=lib-island  size=31 */

void __cdecl
FUN_004a1390(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3,param_4,param_5);
  return;
}


/* FUN_004a13b0 @ 004a13b0  kind=lib  attributed-by=lib-island  size=135 */

void __cdecl FUN_004a13b0(undefined4 *param_1,uint param_2,int param_3)

{
  if (DAT_00584204 != 0) {
    if (param_3 < 0x5b) {
      DAT_00584210 = param_3 / 10 + 1;
    }
    else {
      DAT_00584210 = 10;
    }
    DAT_00584220 = (undefined4 *)0x0;
    DAT_00584228 = 0;
    DAT_00584208 = param_2 & 0xfffffff8;
    DAT_00584224 = param_3;
    DAT_0058420c = param_3;
    DAT_00584214 = param_1;
    DAT_00584218 = param_1;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *DAT_00584218 = DAT_00584220;
      DAT_00584220 = DAT_00584218;
      DAT_00584218 = (undefined4 *)((int)DAT_00584218 + (param_2 & 0xfffffff8));
    }
  }
  return;
}


/* FUN_004a1440 @ 004a1440  kind=lib  attributed-by=lib-island  size=116 */

char * __cdecl
FUN_004a1440(int *param_1,int param_2,char *param_3,char *param_4,undefined4 *param_5)

{
  char *pcVar1;
  
  if (((param_2 == 0x45) && (param_3 != (char *)0x0)) && (param_4 != (char *)0x0)) {
    pcVar1 = FUN_004966d0(*param_1,param_3,param_4);
  }
  else {
    pcVar1 = (char *)FUN_00496510(*param_1,param_2,param_5,1);
    FUN_00496a30(*param_1,(int)pcVar1,(undefined4 *)param_3,(undefined4 *)param_4);
  }
  if ((pcVar1 != (char *)0x0) && (*(int *)(*param_1 + 0x5c) < *(int *)(pcVar1 + 0x14))) {
    FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
  }
  return pcVar1;
}


/* FUN_004a14c0 @ 004a14c0  kind=lib  attributed-by=lib-island  size=422 */

int __cdecl FUN_004a14c0(int param_1,uint param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
    return 0xb;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if ((iVar3 == 0) &&
     (iVar3 = FUN_004a37e0(*(int **)(param_1 + 0xb4),param_2,1,param_3), iVar3 == 0)) {
    puVar1 = (undefined4 *)*param_3;
    if ((puVar1[4] != 0) && (param_4 == 0)) {
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      return 0;
    }
    puVar1[4] = param_1;
    if ((param_2 < 0x80000000) && (param_2 != DAT_00582bb8 / *(int *)(param_1 + 0x80) + 1U)) {
      if ((((*(char *)(param_1 + 0xe) == '\0') && (param_2 <= *(uint *)(param_1 + 0x18))) &&
          (param_4 == 0)) && (**(int **)(param_1 + 0x3c) != 0)) {
        *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
        iVar3 = FUN_004876e0((int)puVar1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      else {
        if (param_2 <= *(uint *)(param_1 + 0x84)) {
          if (param_4 != 0) {
            if (DAT_00583e74 != (code *)0x0) {
              (*DAT_00583e74)();
            }
            if (param_2 <= *(uint *)(param_1 + 0x1c)) {
              FUN_0048ea60(*(uint **)(param_1 + 0x38),param_2);
            }
            FUN_0046b780(param_1,param_2);
            if (DAT_00583e78 != (code *)0x0) {
              (*DAT_00583e78)();
            }
          }
          memset((void *)puVar1[1],0,*(size_t *)(param_1 + 0x80));
          return 0;
        }
        iVar3 = 0xd;
      }
    }
    else {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      iVar3 = 0xb;
    }
    if ((*(byte *)(puVar1 + 6) & 2) != 0) {
      FUN_00486ed0((int)puVar1);
    }
    iVar2 = puVar1[7];
    *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + -1;
    if (puVar1[5] == 1) {
      *(undefined4 *)(iVar2 + 0x2c) = 0;
    }
    (*DAT_00582b4c)(*(undefined4 *)(iVar2 + 0x28),*puVar1,1);
  }
  if (*(int *)(*(int *)(param_1 + 0xb4) + 0xc) == 0) {
    FUN_00484370((uint *)param_1);
  }
  *param_3 = 0;
  return iVar3;
}


/* FUN_004a1670 @ 004a1670  kind=lib  attributed-by=lib-island  size=232 */

/* WARNING: Removing unreachable block (ram,0x004a1755) */

int __cdecl FUN_004a1670(int param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if ((*(int *)(param_1 + 0x28) == 0) &&
     (*(undefined1 *)(param_1 + 0x15) = param_3, iVar2 = 0, *(char *)(param_1 + 0xf) == '\x01')) {
    if (*(int *)(param_1 + 0xb8) == 0) {
      if ((*(byte *)(param_1 + 0x10) < 2) || (*(byte *)(param_1 + 0x10) == 5)) {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),2);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (*(char *)(param_1 + 0x10) != '\x05') {
          *(undefined1 *)(param_1 + 0x10) = 2;
        }
      }
      iVar2 = 0;
      if (param_2 != 0) {
        iVar2 = FUN_004854a0(param_1,4);
      }
    }
    else {
      if ((*(char *)(param_1 + 4) != '\0') && (*(char *)(*(int *)(param_1 + 0xb8) + 0x2b) == '\0'))
      {
        iVar2 = FUN_00483ca0(param_1,4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = *(int *)(param_1 + 0xb8);
        if (*(char *)(iVar2 + 0x2b) == '\0') {
          (**(code **)(**(int **)(iVar2 + 4) + 0x38))
                    (*(int **)(iVar2 + 4),*(short *)(iVar2 + 0x28) + 3,1,5);
        }
        *(undefined1 *)(iVar2 + 0x2b) = 1;
      }
      iVar2 = FUN_004ba400(*(int *)(param_1 + 0xb8));
    }
    if (iVar2 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      *(undefined1 *)(param_1 + 0xf) = 2;
      *(undefined4 *)(param_1 + 0x24) = uVar1;
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      *(undefined4 *)(param_1 + 0x1c) = uVar1;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
  }
  return iVar2;
}


/* FUN_004a1760 @ 004a1760  kind=lib  attributed-by=lib-island  size=64 */

void __cdecl FUN_004a1760(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xe) == '\0') && (*(char *)(param_1 + 0xc) == '\0')) {
    for (iVar1 = *(int *)(param_1 + 0x58); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
      *(undefined4 *)(iVar1 + 0x10) = 1;
    }
    FUN_004a3b00(*(undefined4 **)(param_1 + 0xb4),0);
  }
  return;
}


/* FUN_004a17a0 @ 004a17a0  kind=lib  attributed-by=lib-island  size=309 */

undefined4 __cdecl FUN_004a17a0(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)param_1[0x2c];
  if (DAT_00583e74 != (code *)0x0) {
    (*DAT_00583e74)();
  }
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_004ba620((int *)param_1[0x2e],(uint)*(byte *)((int)param_1 + 9),param_1[0x20],puVar1);
  uVar3 = param_1[0x16];
  param_1[0x2e] = 0;
  for (; uVar3 != 0; uVar3 = *(uint *)(uVar3 + 0x2c)) {
    *(undefined4 *)(uVar3 + 0x10) = 1;
  }
  FUN_004a3b00((undefined4 *)param_1[0x2d],0);
  if (*(char *)((int)param_1 + 0xe) == '\0') {
    piVar2 = (int *)param_1[0x10];
    if (*piVar2 != 0) {
      if ((*(char *)((int)param_1 + 7) != '\0') ||
         (uVar3 = (**(code **)(*piVar2 + 0x14))(piVar2,2), uVar3 == 0)) {
        uVar3 = (**(code **)(*(int *)param_1[0x10] + 0x18))((int *)param_1[0x10],param_1 + 0x14);
      }
      if (((uVar3 & 0xff) == 0xd) || ((uVar3 & 0xff) == 10)) {
        param_1[10] = uVar3;
        *(undefined1 *)((int)param_1 + 0xf) = 6;
      }
    }
    FUN_00484370(param_1);
  }
  else {
    FUN_00485380((int)param_1);
  }
  if (DAT_00583e78 != (code *)0x0) {
    (*DAT_00583e78)();
  }
  piVar2 = (int *)param_1[0x10];
  if (*piVar2 != 0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    *piVar2 = 0;
  }
  piVar2 = (int *)param_1[0xf];
  if (*piVar2 != 0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    *piVar2 = 0;
  }
  FUN_00486af0(puVar1);
  if (*(int *)(param_1[0x2d] + 0x28) != 0) {
    (*DAT_00582b58)(*(int *)(param_1[0x2d] + 0x28));
  }
  FUN_00466dd0((int)param_1);
  return 0;
}


/* FUN_004a18e0 @ 004a18e0  kind=lib  attributed-by=lib-island  size=178 */

void __cdecl FUN_004a18e0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  if (param_1[0x2e] == 0) {
    piVar1 = param_1 + 4;
    param_1 = (int *)0x0;
    if (((char)*piVar1 == '\0') || ((char)*piVar1 == '\x05')) {
      iVar3 = (**(code **)(*(int *)piVar2[0xf] + 0x1c))((int *)piVar2[0xf],1);
      if (iVar3 != 0) {
        return;
      }
      if ((char)piVar2[4] != '\x05') {
        *(undefined1 *)(piVar2 + 4) = 1;
      }
    }
    iVar3 = (**(code **)(*piVar2 + 0x20))(*piVar2,piVar2[0x2f],0,&param_1);
    if (iVar3 != 0) {
      return;
    }
    if ((param_1 != (int *)0x0) && (iVar3 = FUN_00483cf0(piVar2), iVar3 != 0)) {
      return;
    }
  }
  if ((piVar2[0x2e] != 0) && (iVar3 = FUN_00483c40((int)piVar2), iVar3 == 0)) {
    FUN_004ba620((int *)piVar2[0x2e],(uint)*(byte *)((int)piVar2 + 9),piVar2[0x20],piVar2[0x2c]);
    piVar2[0x2e] = 0;
  }
  return;
}


/* FUN_004a19a0 @ 004a19a0  kind=lib  attributed-by=lib-island  size=514 */

uint __cdecl FUN_004a19a0(uint *param_1,char *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined3 extraout_var;
  undefined1 *puVar8;
  uint *puVar9;
  undefined4 *local_8;
  
  puVar2 = param_1;
  if (param_1[10] != 0) {
    return param_1[10];
  }
  if (*(byte *)((int)param_1 + 0xf) < 3) {
    return 0;
  }
  if (*(char *)((int)param_1 + 0xe) == '\0') {
    if (param_1[0x2e] == 0) {
      uVar6 = FUN_00484960(param_1);
      if (uVar6 != 0) {
        return uVar6;
      }
      puVar5 = (uint *)puVar2[6];
      puVar1 = (uint *)puVar2[7];
      if ((puVar5 < puVar1) && (*(char *)((int)puVar2 + 5) != '\x02')) {
        iVar7 = DAT_00582bb8 / (int)puVar2[0x20];
        puVar9 = (uint *)((int)puVar5 + 1);
        puVar2[6] = (uint)puVar1;
        param_1 = puVar9;
        if (puVar9 <= puVar1) {
          do {
            param_1 = puVar9;
            bVar4 = FUN_0048ec40((uint *)puVar2[0xe],(uint)puVar9);
            if ((CONCAT31(extraout_var,bVar4) == 0) && (puVar9 != (uint *)(iVar7 + 1U))) {
              uVar6 = FUN_004a14c0((int)puVar2,(uint)puVar9,(int *)&local_8,0);
              puVar3 = local_8;
              if (uVar6 != 0) {
                return uVar6;
              }
              uVar6 = FUN_004a2c80(local_8);
              FUN_004a2c20(puVar3);
              puVar9 = param_1;
              if (uVar6 != 0) {
                return uVar6;
              }
            }
            puVar9 = (uint *)((int)puVar9 + 1);
            param_1 = puVar9;
          } while (puVar9 <= (uint *)puVar2[7]);
        }
        puVar2[6] = (uint)puVar5;
      }
      uVar6 = FUN_004c2c10((int)puVar2,param_2);
      if (uVar6 != 0) {
        return uVar6;
      }
      uVar6 = FUN_004bd5d0((uint)puVar2,0);
      if (uVar6 != 0) {
        return uVar6;
      }
      puVar8 = FUN_004a3620((int *)puVar2[0x2d]);
      uVar6 = FUN_00485750((int *)puVar2,(int)puVar8);
      if (uVar6 != 0) {
        return uVar6;
      }
      FUN_004a35c0((undefined4 *)puVar2[0x2d]);
      uVar6 = puVar2[6];
      if ((uVar6 != puVar2[8]) &&
         (uVar6 = FUN_00485280((int)puVar2,uVar6 - (uVar6 == DAT_00582bb8 / (int)puVar2[0x20] + 1U))
         , uVar6 != 0)) {
        return uVar6;
      }
      uVar6 = 0;
      if (param_3 == 0) {
        uVar6 = FUN_004a2bd0((int)puVar2);
      }
      if (uVar6 != 0) {
        return uVar6;
      }
    }
    else {
      puVar5 = (uint *)FUN_004a3620((int *)param_1[0x2d]);
      param_1 = (uint *)0x0;
      if (puVar5 == (uint *)0x0) {
        FUN_004a14c0((int)puVar2,1,(int *)&param_1,0);
        param_1[3] = 0;
        puVar5 = param_1;
      }
      puVar1 = param_1;
      uVar6 = FUN_00484410((int)puVar2,puVar5,puVar2[6],1);
      FUN_004a2c20(puVar1);
      if (uVar6 != 0) {
        return uVar6;
      }
      FUN_004a35c0((undefined4 *)puVar2[0x2d]);
    }
  }
  else {
    for (uVar6 = param_1[0x16]; uVar6 != 0; uVar6 = *(uint *)(uVar6 + 0x2c)) {
      *(undefined4 *)(uVar6 + 0x10) = 1;
    }
  }
  if (puVar2[0x2e] == 0) {
    *(undefined1 *)((int)puVar2 + 0xf) = 5;
  }
  return 0;
}


/* FUN_004a1bb0 @ 004a1bb0  kind=lib  attributed-by=lib-island  size=75 */

void __cdecl FUN_004a1bb0(int *param_1)

{
  uint uVar1;
  
  if (param_1[10] == 0) {
    if (((*(char *)((int)param_1 + 0xf) == '\x02') && ((char)param_1[1] != '\0')) &&
       (*(char *)((int)param_1 + 5) == '\x01')) {
      *(undefined1 *)((int)param_1 + 0xf) = 1;
      return;
    }
    uVar1 = FUN_00484760(param_1,(uint)*(byte *)((int)param_1 + 0x12));
    if (((uVar1 & 0xff) == 0xd) || ((uVar1 & 0xff) == 10)) {
      param_1[10] = uVar1;
      *(undefined1 *)((int)param_1 + 0xf) = 6;
    }
  }
  return;
}


/* FUN_004a1c00 @ 004a1c00  kind=lib  attributed-by=lib-island  size=96 */

undefined8 __cdecl FUN_004a1c00(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if ((-2 < (int)param_3) && ((param_3 < 0x80000000 || (param_2 == -1)))) {
    iVar1 = *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x88) = param_2;
    *(uint *)(param_1 + 0x8c) = param_3;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x10) = param_2;
      *(uint *)(iVar1 + 0x14) = param_3;
      return *(undefined8 *)(param_1 + 0x88);
    }
    return CONCAT44(*(undefined4 *)(param_1 + 0x8c),param_2);
  }
  return *(undefined8 *)(param_1 + 0x88);
}


/* FUN_004a1c60 @ 004a1c60  kind=lib  attributed-by=lib-island  size=44 */

undefined1 __cdecl FUN_004a1c60(int param_1,int param_2)

{
  if (((-1 < param_2) && (*(char *)(param_1 + 0xc) == '\0')) &&
     ((*(int *)(param_1 + 0xb8) == 0 || (*(char *)(*(int *)(param_1 + 0xb8) + 0x2b) != '\x02')))) {
    *(char *)(param_1 + 4) = (char)param_2;
  }
  return *(undefined1 *)(param_1 + 4);
}


/* FUN_004a1ce0 @ 004a1ce0  kind=lib  attributed-by=lib-island  size=435 */

uint __cdecl FUN_004a1ce0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint local_8;
  
  puVar5 = param_2;
  puVar3 = param_1;
  local_8 = 0;
  if ((*(char *)((int)param_1 + 0xe) != '\0') && (uVar6 = FUN_004a2c80(param_2), uVar6 != 0)) {
    return uVar6;
  }
  if ((((*(byte *)(puVar5 + 6) & 2) != 0) && (iVar7 = FUN_004bd250((int)puVar5), iVar7 != 0)) &&
     (uVar6 = FUN_004bd350((int)puVar5), uVar6 != 0)) {
    return uVar6;
  }
  if (((*(ushort *)(puVar5 + 6) & 4) != 0) && (param_4 == 0)) {
    local_8 = puVar5[5];
  }
  *(ushort *)(puVar5 + 6) = *(ushort *)(puVar5 + 6) & 0xfffb;
  FUN_004a37e0((int *)puVar3[0x2d],param_3,0,&param_1);
  puVar4 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    *(ushort *)(puVar5 + 6) = *(ushort *)(puVar5 + 6) | *(ushort *)(param_1 + 6) & 4;
    if (*(char *)((int)puVar3 + 0xe) == '\0') {
      FUN_004a37a0(param_1);
    }
    else {
      FUN_004a39f0(param_1,puVar3[6] + 1);
    }
  }
  param_1 = (undefined4 *)puVar5[5];
  FUN_004a39f0(puVar5,param_3);
  *(ushort *)(puVar5 + 6) = *(ushort *)(puVar5 + 6) & 0xffdf;
  if ((*(ushort *)(puVar5 + 6) & 2) == 0) {
    *(ushort *)(puVar5 + 6) = *(ushort *)(puVar5 + 6) | 2;
    piVar1 = (int *)puVar5[7];
    iVar7 = *piVar1;
    puVar5[8] = iVar7;
    if (iVar7 != 0) {
      *(undefined4 **)(iVar7 + 0x24) = puVar5;
    }
    *piVar1 = (int)puVar5;
    if (piVar1[1] == 0) {
      piVar1[1] = (int)puVar5;
    }
    if ((piVar1[2] == 0) && ((*(byte *)(puVar5 + 6) & 4) == 0)) {
      piVar1[2] = (int)puVar5;
    }
  }
  if ((*(char *)((int)puVar3 + 0xe) != '\0') &&
     (FUN_004a39f0(puVar4,param_1), puVar4 != (undefined4 *)0x0)) {
    puVar2 = (uint *)puVar4[4];
    FUN_004a3a80(puVar4);
    if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar2);
    }
  }
  if (local_8 != 0) {
    uVar6 = FUN_004a14c0((int)puVar3,local_8,(int *)&param_1,0);
    puVar5 = param_1;
    if (uVar6 != 0) {
      if (local_8 <= (uint)puVar3[7]) {
        FUN_0048e8c0((uint *)puVar3[0xe],local_8,(uint *)puVar3[0x2c]);
      }
      return uVar6;
    }
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 4;
    FUN_004a39a0((int)param_1);
    puVar2 = (uint *)puVar5[4];
    FUN_004a3a80(puVar5);
    if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar2);
    }
  }
  return 0;
}


/* FUN_004a1ea0 @ 004a1ea0  kind=lib  attributed-by=lib-island  size=1124 */

int __cdecl
FUN_004a1ea0(undefined *param_1,undefined4 *param_2,char *param_3,int param_4,byte param_5,
            uint param_6,uint param_7)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  undefined *puVar7;
  byte bVar8;
  uint uVar9;
  char *_Dst;
  void *pvVar10;
  code *pcVar11;
  char *pcVar12;
  byte bVar13;
  uint uVar14;
  char *pcVar15;
  char local_1c;
  uint local_14;
  char *local_10;
  char *local_c;
  int local_8;
  
  bVar13 = param_5;
  puVar7 = param_1;
  local_1c = '\0';
  bVar6 = false;
  local_c = (char *)0x0;
  bVar8 = ~param_5;
  uVar14 = 0;
  pcVar15 = (char *)0x0;
  local_8 = 0;
  local_14 = 0x400;
  local_10 = (char *)0x0;
  if (*(int *)(param_1 + 4) < 0x29) {
    _param_5 = 0x28;
  }
  else {
    _param_5 = *(int *)(param_1 + 4) + 7U & 0xfffffff8;
  }
  *param_2 = 0;
  if ((bVar13 & 2) == 0) {
LAB_004a1f40:
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      iVar2 = *(int *)(param_1 + 8);
      _Dst = (char *)FUN_004a0350((iVar2 + 1) * 2);
      pcVar15 = param_3;
      if (_Dst == (char *)0x0) {
        return 7;
      }
      *_Dst = '\0';
      local_c = _Dst;
      local_8 = (**(code **)(puVar7 + 0x24))(puVar7,param_3,iVar2 + 1,_Dst);
      cVar3 = *_Dst;
      pcVar12 = _Dst;
      while (cVar3 != '\0') {
        pcVar12 = pcVar12 + 1;
        cVar3 = *pcVar12;
      }
      uVar14 = (int)pcVar12 - (int)_Dst & 0x3fffffff;
      cVar3 = *pcVar15;
      pcVar12 = pcVar15;
      while (cVar3 != '\0') {
        pcVar12 = pcVar12 + 1;
        cVar3 = *pcVar12;
      }
      local_10 = pcVar15 + ((int)pcVar12 - (int)pcVar15 & 0x3fffffffU) + 1;
      cVar3 = *local_10;
      pcVar15 = local_10;
      while (cVar3 != '\0') {
        cVar3 = *pcVar15;
        pcVar12 = pcVar15;
        while (cVar3 != '\0') {
          pcVar12 = pcVar12 + 1;
          cVar3 = *pcVar12;
        }
        pcVar15 = pcVar15 + ((int)pcVar12 - (int)pcVar15 & 0x3fffffffU) + 1;
        if (pcVar15 == (char *)0x0) {
          uVar9 = 0;
        }
        else {
          cVar3 = *pcVar15;
          pcVar12 = pcVar15;
          while (cVar3 != '\0') {
            pcVar12 = pcVar12 + 1;
            cVar3 = *pcVar12;
          }
          uVar9 = (int)pcVar12 - (int)pcVar15 & 0x3fffffff;
        }
        pcVar15 = pcVar15 + uVar9 + 1;
        cVar3 = *pcVar15;
      }
      pcVar15 = pcVar15 + (1 - (int)local_10);
      if ((local_8 != 0) ||
         ((*(int *)(param_1 + 8) < (int)(uVar14 + 8) && (local_8 = FUN_004920e0(), local_8 != 0))))
      goto LAB_004a22d9;
    }
  }
  else {
    bVar6 = true;
    if (param_3 != (char *)0x0) {
      if (*param_3 == '\0') goto LAB_004a1f40;
      local_c = (char *)FUN_00494db0(0,param_3);
      if (local_c == (char *)0x0) {
        return 7;
      }
      uVar14 = FUN_004aa9b0(local_c);
      param_3 = (char *)0x0;
    }
  }
  iVar4 = *(int *)(param_1 + 4);
  iVar2 = _param_5 * 2;
  _Dst = (char *)FUN_004a0350((int)(pcVar15 + uVar14 * 3 + iVar2 + (iVar4 + 7U & 0xfffffff8) + 0x101
                                   ));
  if (_Dst == (char *)0x0) {
    FUN_00466dd0((int)local_c);
    return 7;
  }
  memset(_Dst,0,(size_t)(pcVar15 + uVar14 * 3 + iVar2 + (iVar4 + 7U & 0xfffffff8) + 0x101));
  *(char **)(_Dst + 0xb4) = _Dst + 0xc0;
  pcVar12 = _Dst + 0xf0;
  *(char **)(_Dst + 0x3c) = pcVar12;
  pcVar12 = pcVar12 + (*(int *)(param_1 + 4) + 7U & 0xfffffff8);
  *(char **)(_Dst + 0x44) = pcVar12;
  *(char **)(_Dst + 0x40) = pcVar12 + _param_5;
  pcVar12 = pcVar12 + _param_5 + _param_5;
  *(char **)(_Dst + 0x90) = pcVar12;
  if (local_c != (char *)0x0) {
    *(char **)(_Dst + 0x94) = pcVar12 + (int)(pcVar15 + uVar14 + 1);
    memcpy(pcVar12,local_c,uVar14);
    if (pcVar15 != (char *)0x0) {
      memcpy((void *)(*(int *)(_Dst + 0x90) + 1 + uVar14),local_10,(size_t)pcVar15);
    }
    pcVar15 = local_c;
    memcpy(*(void **)(_Dst + 0x94),local_c,uVar14);
    iVar2 = *(int *)(_Dst + 0x94);
    *(undefined8 *)(iVar2 + uVar14) = 0x6c616e72756f6a2d;
    *(undefined2 *)(iVar2 + 8 + uVar14) = 0;
    pvVar10 = (void *)(*(int *)(_Dst + 0x94) + 9 + uVar14);
    *(void **)(_Dst + 0xbc) = pvVar10;
    memcpy(pvVar10,pcVar15,uVar14);
    iVar2 = *(int *)(_Dst + 0xbc);
    *(undefined4 *)(iVar2 + uVar14) = 0x6c61772d;
    *(undefined1 *)(iVar2 + 4 + uVar14) = 0;
    FUN_00466dd0((int)pcVar15);
  }
  puVar7 = param_1;
  *(undefined **)_Dst = param_1;
  *(uint *)(_Dst + 0x78) = param_6;
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    bVar13 = (byte)param_6 & 1;
    local_1c = '\x01';
    _Dst[0xf] = '\x01';
    _Dst[0x10] = '\x04';
    if (local_8 == 0) goto LAB_004a21d4;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x18);
    param_1 = (undefined *)0x0;
    local_8 = (*(code *)*puVar1)(puVar7,*(undefined4 *)(_Dst + 0x90),*(undefined4 *)(_Dst + 0x3c),
                                 param_6 & 0x87f7f,&param_1);
    bVar13 = (byte)((uint)param_1 & 1);
    if (local_8 == 0) {
      if (((uint)param_1 & 1) == 0) {
        FUN_0048b530((int)_Dst);
        uVar14 = *(uint *)(_Dst + 0x7c);
        if ((0x400 < uVar14) && (local_14 = uVar14, 0x2000 < uVar14)) {
          local_14 = 0x2000;
        }
      }
LAB_004a21d4:
      local_8 = FUN_004a27d0((int)_Dst,&local_14,-1);
      if (local_8 == 0) {
        pvVar10 = *(void **)(_Dst + 0xb4);
        param_1 = (undefined *)(param_4 + 7U & 0xfffffff8);
        memset(pvVar10,0,0x30);
        puVar7 = param_1;
        *(uint *)((int)pvVar10 + 0x14) = local_14;
        *(undefined **)((int)pvVar10 + 0x18) = param_1;
        *(char **)((int)pvVar10 + 0x24) = _Dst;
        *(undefined4 *)((int)pvVar10 + 0x10) = 100;
        param_1 = FUN_00484180;
        *(uint *)((int)pvVar10 + 0x1c) = (uint)!bVar6;
        pcVar11 = (code *)0x0;
        if (!bVar6) {
          pcVar11 = FUN_00484180;
        }
        *(code **)((int)pvVar10 + 0x20) = pcVar11;
        _Dst[6] = bVar8 & 1;
        _Dst[0x84] = -1;
        _Dst[0x85] = -1;
        _Dst[0x86] = -1;
        _Dst[0x87] = '?';
        _Dst[0xc] = local_1c;
        _Dst[4] = local_1c;
        _Dst[0x11] = local_1c;
        _Dst[0xe] = bVar6;
        _Dst[0xd] = bVar13;
        _Dst[7] = local_1c;
        if (local_1c == '\0') {
          builtin_strncpy(_Dst + 8,"\x01\x02\"\x02",4);
        }
        *(short *)(_Dst + 0x74) = (short)puVar7;
        _Dst[0x88] = -1;
        _Dst[0x89] = -1;
        _Dst[0x8a] = -1;
        _Dst[0x8b] = -1;
        _Dst[0x8c] = -1;
        _Dst[0x8d] = -1;
        _Dst[0x8e] = -1;
        _Dst[0x8f] = -1;
        FUN_0048b530((int)_Dst);
        if ((bVar8 & 1) == 0) {
          _Dst[5] = '\x02';
        }
        else if (bVar6) {
          _Dst[5] = '\x04';
        }
        *(uint *)(_Dst + 0xac) = param_7;
        *param_2 = _Dst;
        return 0;
      }
    }
  }
  piVar5 = *(int **)(_Dst + 0x3c);
  if (*piVar5 != 0) {
    (**(code **)(*piVar5 + 4))(piVar5);
    *piVar5 = 0;
  }
LAB_004a22d9:
  FUN_00466dd0((int)_Dst);
  return local_8;
}


/* FUN_004a2310 @ 004a2310  kind=lib  attributed-by=lib-island  size=303 */

undefined4 __cdecl FUN_004a2310(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *_Dst;
  void *_Dst_00;
  undefined4 *puVar5;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x60);
  if ((iVar1 < param_2) && (*(char *)(param_1 + 6) != '\0')) {
    iVar4 = FUN_004a6140(*(int *)(param_1 + 0x5c),param_2 * 0x30);
    if (iVar4 == 0) {
      return 7;
    }
    _Dst_00 = (void *)(iVar1 * 0x30 + iVar4);
    memset(_Dst_00,0,(param_2 - iVar1) * 0x30);
    *(int *)(param_1 + 0x5c) = iVar4;
    if (iVar1 < param_2) {
      puVar5 = (undefined4 *)((int)_Dst_00 + 0x24);
      param_1 = iVar1;
      do {
        puVar5[-4] = *(undefined4 *)(iVar3 + 0x18);
        if (**(int **)(iVar3 + 0x40) == 0) {
LAB_004a23b3:
          iVar4 = *(int *)(iVar3 + 0x7c);
          puVar5[-8] = 0;
        }
        else {
          iVar1 = *(int *)(iVar3 + 0x4c);
          iVar4 = *(int *)(iVar3 + 0x48);
          if ((iVar1 < 0) || ((iVar1 < 1 && (iVar4 == 0)))) goto LAB_004a23b3;
          puVar5[-8] = iVar1;
        }
        puVar5[-9] = iVar4;
        puVar5[-3] = *(undefined4 *)(iVar3 + 0x34);
        uVar2 = *(undefined4 *)(iVar3 + 0x18);
        _Dst = (undefined4 *)FUN_004a0350(0x200);
        if (_Dst != (undefined4 *)0x0) {
          memset(_Dst,0,0x200);
          *_Dst = uVar2;
        }
        puVar5[-5] = _Dst;
        if (_Dst == (undefined4 *)0x0) {
          return 7;
        }
        iVar1 = *(int *)(iVar3 + 0xb8);
        if (iVar1 != 0) {
          puVar5[-2] = *(undefined4 *)(iVar1 + 0x44);
          puVar5[-1] = *(undefined4 *)(iVar1 + 0x4c);
          *puVar5 = *(undefined4 *)(iVar1 + 0x50);
          puVar5[1] = *(undefined4 *)(iVar1 + 0x68);
        }
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 0xc;
        *(int *)(iVar3 + 0x60) = param_1;
      } while (param_1 < param_2);
    }
  }
  return 0;
}


/* FUN_004a2440 @ 004a2440  kind=lib  attributed-by=lib-island  size=115 */

int __cdecl FUN_004a2440(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((char)param_1[3] == '\0') && (param_1[0x2e] == 0)) {
    if (((char)param_1[1] == '\0') &&
       ((**(int **)param_1[0xf] < 2 || ((*(int **)param_1[0xf])[0xd] == 0)))) {
      return 0xe;
    }
    piVar1 = (int *)param_1[0x10];
    if (*piVar1 != 0) {
      (**(code **)(*piVar1 + 4))(piVar1);
      *piVar1 = 0;
    }
    iVar2 = FUN_00483cf0(param_1);
    if (iVar2 == 0) {
      *(undefined1 *)((int)param_1 + 5) = 5;
      *(undefined1 *)((int)param_1 + 0xf) = 0;
      return 0;
    }
  }
  else {
    *param_2 = 1;
  }
  return iVar2;
}


/* FUN_004a24c0 @ 004a24c0  kind=lib  attributed-by=lib-island  size=67 */

int __cdecl FUN_004a24c0(int param_1,size_t param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  
  memset(param_3,0,param_2);
  piVar1 = *(int **)(param_1 + 0x3c);
  if (*piVar1 != 0) {
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1,param_3,param_2,0,0);
    if (iVar2 == 0x20a) {
      iVar2 = 0;
    }
    return iVar2;
  }
  return 0;
}


/* FUN_004a2510 @ 004a2510  kind=lib  attributed-by=lib-island  size=170 */

uint __cdecl FUN_004a2510(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)((int)param_1 + 0xf);
  if (bVar1 == 6) {
    return param_1[10];
  }
  if (bVar1 < 2) {
    return 0;
  }
  if (param_1[0x2e] == 0) {
    if ((*(int *)param_1[0x10] == 0) || (bVar1 == 2)) {
      uVar2 = FUN_00484760((int *)param_1,0);
      if ((*(char *)((int)param_1 + 0xe) == '\0') && (2 < bVar1)) {
        param_1[10] = 4;
        *(undefined1 *)((int)param_1 + 0xf) = 6;
        return uVar2;
      }
      goto LAB_004a255a;
    }
    uVar3 = FUN_00484c20(param_1,0);
  }
  else {
    uVar2 = FUN_004a25c0(param_1,2,-1);
    uVar3 = FUN_00484760((int *)param_1,(uint)*(byte *)((int)param_1 + 0x12));
    if (uVar2 != 0) goto LAB_004a255a;
  }
  uVar2 = uVar3;
LAB_004a255a:
  if (((uVar2 & 0xff) == 0xd) || ((uVar2 & 0xff) == 10)) {
    param_1[10] = uVar2;
    *(undefined1 *)((int)param_1 + 0xf) = 6;
  }
  return uVar2;
}


/* FUN_004a25c0 @ 004a25c0  kind=lib  attributed-by=lib-island  size=235 */

uint __cdecl FUN_004a25c0(undefined4 *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1[10] != 0) || ((int)param_1[0x18] <= param_3)) {
    return param_1[10];
  }
  iVar3 = (uint)(param_2 != 1) + param_3;
  if (iVar3 < (int)param_1[0x18]) {
    iVar5 = iVar3 * 0x30;
    iVar4 = iVar3;
    do {
      FUN_0048e9a0(*(int *)(iVar5 + 0x10 + param_1[0x17]));
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar4 < (int)param_1[0x18]);
  }
  param_1[0x18] = iVar3;
  uVar2 = 0;
  if (param_2 == 1) {
    if (iVar3 == 0) {
      puVar1 = *(undefined **)param_1[0x11];
      if (puVar1 != (undefined *)0x0) {
        if (puVar1 == &DAT_00569a48) {
          uVar2 = FUN_00462070((undefined8 *)param_1[0x11]);
        }
        param_1[0xd] = 0;
      }
    }
  }
  else if ((param_1[0x2e] != 0) || (*(int *)param_1[0x10] != 0)) {
    if (iVar3 != 0) {
      uVar2 = FUN_00483e60(param_1,(uint *)(param_1[0x17] + -0x30 + iVar3 * 0x30));
      return uVar2;
    }
    uVar2 = FUN_00483e60(param_1,(uint *)0x0);
    return uVar2;
  }
  return uVar2;
}


/* FUN_004a26b0 @ 004a26b0  kind=lib  attributed-by=lib-island  size=57 */

void __cdecl FUN_004a26b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x98) = param_2;
  *(undefined4 *)(param_1 + 0x9c) = param_3;
  if (**(int **)(param_1 + 0x3c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004a26e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x28))();
    return;
  }
  return;
}


/* FUN_004a26f0 @ 004a26f0  kind=lib  attributed-by=lib-island  size=223 */

undefined1 __cdecl FUN_004a26f0(uint *param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  bVar1 = *(byte *)((int)param_1 + 5);
  if (((*(char *)((int)param_1 + 0xe) != '\0') && (param_2 != 4)) && (param_2 != 2)) {
    param_2 = (uint)bVar1;
  }
  if (((param_2 != bVar1) && (*(char *)((int)param_1 + 5) = (char)param_2, (char)param_1[1] == '\0')
      ) && (((bVar1 & 5) == 1 && ((param_2 & 1) == 0)))) {
    FUN_004a1250((int *)param_1[0x10]);
    if (1 < (byte)param_1[4]) {
      (**(code **)(*param_1 + 0x1c))(*param_1,param_1[0x25],0);
      return *(undefined1 *)((int)param_1 + 5);
    }
    cVar2 = *(char *)((int)param_1 + 0xf);
    iVar3 = 0;
    if (cVar2 == '\0') {
      iVar3 = FUN_004a2980(param_1);
    }
    if (*(char *)((int)param_1 + 0xf) == '\x01') {
      iVar3 = FUN_00483ca0((int)param_1,2);
    }
    if ((iVar3 == 0) && ((**(code **)(*param_1 + 0x1c))(*param_1,param_1[0x25],0), cVar2 == '\x01'))
    {
      FUN_004843d0((int)param_1,1);
      return *(undefined1 *)((int)param_1 + 5);
    }
    if (cVar2 == '\0') {
      FUN_00485380((int)param_1);
    }
  }
  return *(undefined1 *)((int)param_1 + 5);
}


/* FUN_004a27d0 @ 004a27d0  kind=lib  attributed-by=lib-island  size=291 */

int __cdecl FUN_004a27d0(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_c;
  
  uVar1 = *param_2;
  iVar5 = 0;
  if ((((*(char *)(param_1 + 0xe) == '\0') || (*(int *)(param_1 + 0x18) == 0)) &&
      (*(int *)(*(int *)(param_1 + 0xb4) + 0xc) == 0)) &&
     ((uVar1 != 0 && (uVar1 != *(uint *)(param_1 + 0x80))))) {
    local_c = 0;
    if ((*(char *)(param_1 + 0xf) != '\0') && (piVar2 = *(int **)(param_1 + 0x3c), *piVar2 != 0)) {
      iVar5 = (**(code **)(*piVar2 + 0x18))(piVar2,&local_c);
      if (iVar5 != 0) goto LAB_004a28cc;
    }
    puVar4 = FUN_004868a0(uVar1);
    if (puVar4 == (undefined4 *)0x0) {
      iVar5 = 7;
    }
    else {
      FUN_00485250(param_1);
      uVar6 = __alldiv((uVar1 + (uint)local_c) - 1,
                       (local_c._4_4_ + (uint)CARRY4(uVar1,(uint)local_c)) -
                       (uint)(uVar1 + (uint)local_c == 0),uVar1,0);
      *(int *)(param_1 + 0x18) = (int)uVar6;
      *(uint *)(param_1 + 0x80) = uVar1;
      FUN_00486af0(*(undefined4 **)(param_1 + 0xb0));
      *(undefined4 **)(param_1 + 0xb0) = puVar4;
      iVar3 = *(int *)(param_1 + 0xb4);
      if (*(int *)(iVar3 + 0x28) != 0) {
        (*DAT_00582b58)(*(int *)(iVar3 + 0x28));
        *(undefined4 *)(iVar3 + 0x28) = 0;
        *(undefined4 *)(iVar3 + 0x2c) = 0;
      }
      *(uint *)(iVar3 + 0x14) = uVar1;
    }
  }
LAB_004a28cc:
  *param_2 = *(uint *)(param_1 + 0x80);
  if (iVar5 == 0) {
    if (param_3 < 0) {
      param_3 = (int)*(short *)(param_1 + 0x76);
    }
    *(short *)(param_1 + 0x76) = (short)param_3;
  }
  return iVar5;
}


/* FUN_004a2900 @ 004a2900  kind=lib  attributed-by=lib-island  size=123 */

void __cdecl FUN_004a2900(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  
  if ((param_2 == 1) || (*(char *)(param_1 + 0xc) != '\0')) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  *(char *)(param_1 + 7) = cVar1;
  if ((param_2 == 3) && (*(char *)(param_1 + 0xc) == '\0')) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
  *(char *)(param_1 + 8) = cVar2;
  if (cVar1 == '\0') {
    if (param_3 == 0) {
      *(undefined1 *)(param_1 + 0xb) = 2;
      if (param_4 == 0) {
        *(undefined1 *)(param_1 + 9) = 2;
      }
      else {
        *(undefined1 *)(param_1 + 9) = 3;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xb) = 3;
      *(undefined1 *)(param_1 + 9) = 3;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 0xb);
  if (cVar2 != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 0xb) | 0x20;
  }
  return;
}


/* FUN_004a2980 @ 004a2980  kind=lib  attributed-by=lib-island  size=589 */

void __cdecl FUN_004a2980(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  int local_20;
  uint local_1c;
  uint local_18 [5];
  
  local_18[4] = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar5 = 0;
  if ((*(char *)((int)param_1 + 0xe) != '\0') && (param_1[10] != 0)) goto LAB_004a2bbd;
  if ((param_1[0x2e] == 0) && (*(char *)((int)param_1 + 0xf) == '\0')) {
    local_1c = 1;
    iVar2 = FUN_004854a0((int)param_1,1);
    if (iVar2 != 0) goto LAB_004a2b9c;
    if ((byte)param_1[4] < 2) {
      iVar2 = FUN_0047df00((int *)param_1,&local_1c);
      if (iVar2 != 0) goto LAB_004a2b9c;
      if (local_1c != 0) goto LAB_004a2a00;
LAB_004a2ac8:
      if (((char)param_1[3] == '\0') &&
         ((param_1[0x16] != 0 || (iVar2 = FUN_004a3a60(param_1[0x2d]), 0 < iVar2)))) {
        local_1c = 0;
        iVar2 = FUN_00483dd0((int)param_1,&local_1c);
        if (iVar2 != 0) goto LAB_004a2b9c;
        if (local_1c == 0) {
          local_18[0] = 0;
          local_18[1] = 0;
          local_18[2] = 0;
          local_18[3] = 0;
        }
        else {
          iVar2 = (**(code **)(*(int *)param_1[0xf] + 8))((int *)param_1[0xf],local_18,0x10,0x18,0);
          if (iVar2 != 0) goto LAB_004a2b9c;
        }
        puVar3 = param_1 + 0x19;
        puVar4 = local_18;
        uVar5 = 0xc;
        do {
          if (*puVar3 != *puVar4) {
            FUN_00485250((int)param_1);
            break;
          }
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
          bVar6 = 3 < uVar5;
          uVar5 = uVar5 - 4;
        } while (bVar6);
      }
      uVar5 = FUN_00483d40((int *)param_1);
      goto LAB_004a2b6b;
    }
LAB_004a2a00:
    iVar2 = FUN_00483ca0((int)param_1,4);
    if (iVar2 != 0) goto LAB_004a2b9c;
    uVar5 = 0;
    if (*(int *)param_1[0x10] == 0) {
      uVar1 = *param_1;
      uVar5 = (**(code **)(uVar1 + 0x20))(uVar1,param_1[0x25],0,&local_20);
      if ((((uVar5 == 0) && (local_20 != 0)) &&
          (local_1c = uVar5,
          uVar5 = (**(code **)(uVar1 + 0x18))(uVar1,param_1[0x25],param_1[0x10],0x802,&local_1c),
          uVar5 == 0)) && ((local_1c & 1) != 0)) {
        uVar5 = FUN_004920e0();
        FUN_004a1250((int *)param_1[0x10]);
      }
    }
    if (*(int *)param_1[0x10] == 0) {
      if ((char)param_1[1] == '\0') {
        FUN_004843d0((int)param_1,1);
      }
LAB_004a2ab8:
      if (uVar5 == 0) goto LAB_004a2ac8;
    }
    else {
      uVar5 = FUN_00484260((int)param_1);
      if (uVar5 == 0) {
        uVar5 = FUN_00484c20(param_1,1);
        *(undefined1 *)((int)param_1 + 0xf) = 0;
        goto LAB_004a2ab8;
      }
    }
    FUN_00484930((int)param_1,uVar5);
  }
  else {
LAB_004a2b6b:
    if (param_1[0x2e] != 0) {
      uVar5 = FUN_00483bd0((int)param_1);
    }
    if (*(char *)((int)param_1 + 0xf) == '\0') {
      if (uVar5 != 0) goto LAB_004a2b9c;
      uVar5 = FUN_00483dd0((int)param_1,param_1 + 6);
    }
  }
  if (uVar5 == 0) {
    *(undefined1 *)((int)param_1 + 0xf) = 1;
LAB_004a2bbd:
    __security_check_cookie(local_18[4] ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_004a2b9c:
  FUN_00485380((int)param_1);
  __security_check_cookie(local_18[4] ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004a2bd0 @ 004a2bd0  kind=lib  attributed-by=lib-island  size=70 */

int __cdecl FUN_004a2bd0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 7) == '\0') {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x14))
                      (*(int **)(param_1 + 0x3c),*(undefined1 *)(param_1 + 0xb));
    return iVar2;
  }
  piVar1 = *(int **)(param_1 + 0x3c);
  if (*piVar1 != 0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,8,0);
    if (iVar2 == 0xc) {
      iVar2 = 0;
    }
    return iVar2;
  }
  return 0;
}


/* FUN_004a2c20 @ 004a2c20  kind=lib  attributed-by=lib-island  size=47 */

void __cdecl FUN_004a2c20(undefined4 *param_1)

{
  uint *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (uint *)param_1[4];
    FUN_004a3a80(param_1);
    if (*(int *)(puVar1[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar1);
    }
  }
  return;
}


/* FUN_004a2c50 @ 004a2c50  kind=lib  attributed-by=lib-island  size=39 */

undefined4 __cdecl FUN_004a2c50(int param_1)

{
  if ((*(char *)(param_1 + 4) == '\0') &&
     ((*(int *)**(int **)(param_1 + 0x3c) < 2 || (((int *)**(int **)(param_1 + 0x3c))[0xd] == 0))))
  {
    return 0;
  }
  return 1;
}


/* FUN_004a2c80 @ 004a2c80  kind=lib  attributed-by=lib-island  size=137 */

uint __cdecl FUN_004a2c80(undefined4 *param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  undefined3 extraout_var;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *local_1c;
  int local_18;
  undefined4 *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  iVar1 = param_1[4];
  local_8 = *(uint *)(iVar1 + 0x7c) / *(uint *)(iVar1 + 0x80);
  local_10 = 0;
  if (local_8 < 2) {
    uVar6 = FUN_00485520((int)param_1);
    return uVar6;
  }
  *(char *)(iVar1 + 0x14) = *(char *)(iVar1 + 0x14) + '\x01';
  uVar6 = param_1[5];
  iVar8 = 0;
  uVar7 = (~(local_8 - 1) & uVar6 - 1) + 1;
  local_c = 0;
  if (*(uint *)(iVar1 + 0x18) < uVar6) {
    local_8 = (uVar6 - uVar7) + 1;
  }
  else if (*(uint *)(iVar1 + 0x18) < (local_8 - 1) + uVar7) {
    local_8 = (*(uint *)(iVar1 + 0x18) - uVar7) + 1;
  }
  local_18 = 0;
  uVar6 = local_8;
  uVar9 = uVar7;
  if (0 < (int)local_8) {
    do {
      if (local_10 != 0) goto LAB_004a2e6a;
      if ((uVar9 == param_1[5]) ||
         (bVar5 = FUN_0048ec40(*(uint **)(iVar1 + 0x38),uVar9), uVar6 = local_8,
         CONCAT31(extraout_var,bVar5) == 0)) {
        if ((uVar9 != DAT_00582bb8 / *(int *)(iVar1 + 0x80) + 1U) &&
           (local_10 = FUN_004a14c0(iVar1,uVar9,(int *)&local_14,0), puVar3 = local_14,
           uVar6 = local_8, local_10 == 0)) {
          local_10 = FUN_00485520((int)local_14);
          if ((*(byte *)(puVar3 + 6) & 4) != 0) {
            local_c = 1;
          }
          puVar2 = (uint *)puVar3[4];
          FUN_004a3a80(puVar3);
          uVar6 = local_8;
          iVar8 = local_c;
          if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
            FUN_00484370(puVar2);
            uVar6 = local_8;
            iVar8 = local_c;
          }
        }
      }
      else {
        FUN_004a37e0(*(int **)(iVar1 + 0xb4),uVar9,0,&local_1c);
        local_14 = local_1c;
        uVar6 = local_8;
        if (local_1c != (undefined4 *)0x0) {
          if ((*(byte *)(local_1c + 6) & 4) != 0) {
            iVar8 = 1;
          }
          puVar2 = (uint *)local_1c[4];
          local_c = iVar8;
          FUN_004a3a80(local_1c);
          uVar6 = local_8;
          if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
            FUN_00484370(puVar2);
            uVar6 = local_8;
          }
        }
      }
      uVar4 = local_8;
      local_18 = local_18 + 1;
      uVar9 = uVar9 + 1;
    } while (local_18 < (int)uVar6);
    if ((local_10 == 0) && (iVar8 != 0)) {
      iVar8 = 0;
      do {
        FUN_004a37e0(*(int **)(iVar1 + 0xb4),uVar7 + iVar8,0,&param_1);
        if (param_1 != (undefined4 *)0x0) {
          puVar2 = (uint *)param_1[4];
          *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 4;
          FUN_004a3a80(param_1);
          if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
            FUN_00484370(puVar2);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar4);
    }
  }
LAB_004a2e6a:
  *(char *)(iVar1 + 0x14) = *(char *)(iVar1 + 0x14) + -1;
  return local_10;
}


/* FUN_004a2e90 @ 004a2e90  kind=lib  attributed-by=lib-island  size=138 */

undefined4 __cdecl
FUN_004a2e90(byte *param_1,int *param_2,uint *param_3,int *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined **ppuVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  char cVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  uint local_20;
  uint local_1c;
  undefined4 local_14;
  uint local_10;
  int local_c;
  char *local_8;
  
  piVar4 = param_2;
  local_10 = *param_3;
  local_14 = 0;
  uVar16 = 0;
  if (param_2 != (int *)0x0) {
    cVar13 = (char)*param_2;
    piVar15 = param_2;
    while (cVar13 != '\0') {
      piVar15 = (int *)((int)piVar15 + 1);
      cVar13 = *(char *)piVar15;
    }
    uVar16 = (int)piVar15 - (int)param_2 & 0x3fffffff;
  }
  if (((((local_10 & 0x40) == 0) && (DAT_00582ad4 == 0)) || (uVar16 < 5)) ||
     ((*param_2 != 0x656c6966 || ((char)param_2[1] != ':')))) {
    iVar17 = FUN_004bc920();
    if (iVar17 != 0) {
      return 7;
    }
    local_8 = (char *)FUN_004a0350(uVar16 + 2);
    if (local_8 == (char *)0x0) {
      return 7;
    }
    memcpy(local_8,param_2,uVar16);
    local_10 = local_10 & 0xffffffbf;
    (local_8 + uVar16)[0] = '\0';
    (local_8 + uVar16)[1] = '\0';
LAB_004a3384:
    iVar17 = FUN_00464e80(param_1);
    *param_4 = iVar17;
    if (iVar17 != 0) goto LAB_004a33c2;
    uVar5 = FUN_004666d0((byte *)"no such vfs: %s");
  }
  else {
    local_10 = local_10 | 0x40;
    iVar14 = 0;
    iVar17 = uVar16 + 2;
    iVar10 = 0;
    local_8 = (char *)0x0;
    param_2 = (int *)0x0;
    local_c = 0;
    if (1 < uVar16) {
      do {
        iVar14 = iVar14 + (uint)(*(char *)((int)piVar4 + iVar10) == '&');
        iVar6 = iVar10 + 1;
        iVar10 = iVar10 + 2;
        param_2 = (int *)((int)param_2 + (uint)(*(char *)((int)piVar4 + iVar6) == '&'));
        local_8 = (char *)iVar14;
      } while (iVar10 < (int)(uVar16 - 1));
    }
    iVar14 = 0;
    if (iVar10 < (int)uVar16) {
      iVar17 = iVar17 + (uint)(*(char *)(iVar10 + (int)piVar4) == '&');
    }
    iVar10 = FUN_004bc920();
    if ((iVar10 != 0) ||
       (local_8 = (char *)FUN_004a0350((int)param_2 + iVar17 + (int)local_8), local_8 == (char *)0x0
       )) {
      return 7;
    }
    if ((*(char *)((int)piVar4 + 5) != '/') || (*(char *)((int)piVar4 + 6) != '/')) {
      iVar17 = 5;
LAB_004a2ff1:
      cVar13 = *(char *)(iVar17 + (int)piVar4);
      if (cVar13 != '\0') {
        iVar10 = 0;
        do {
          if (cVar13 == '#') break;
          iVar6 = iVar17 + 1;
          if (((cVar13 == '%') &&
              (bVar1 = *(byte *)(iVar6 + (int)piVar4), ((&DAT_00569720)[bVar1] & 8) != 0)) &&
             (((&DAT_00569720)[*(byte *)(iVar17 + 2 + (int)piVar4)] & 8) != 0)) {
            cVar13 = *(char *)(iVar17 + 2 + (int)piVar4);
            iVar6 = iVar17 + 3;
            cVar13 = (bVar1 + ((char)bVar1 >> 6 & 1U) * -7) * '\x10' +
                     (cVar13 + (cVar13 >> 6 & 1U) * -7 & 0xf);
            if (cVar13 == '\0') {
              cVar13 = *(char *)(iVar6 + (int)piVar4);
              while ((iVar14 = local_c, cVar13 != '\0' && (cVar13 != '#'))) {
                if (iVar10 == 0) {
                  bVar19 = cVar13 == '?';
LAB_004a30d4:
                  if (bVar19) break;
                }
                else {
                  if (iVar10 == 1) {
                    if (cVar13 != '=') {
LAB_004a30d1:
                      bVar19 = cVar13 == '&';
                      goto LAB_004a30d4;
                    }
                    break;
                  }
                  if (iVar10 == 2) goto LAB_004a30d1;
                }
                iVar17 = iVar6 + 1;
                iVar6 = iVar6 + 1;
                cVar13 = *(char *)(iVar17 + (int)piVar4);
              }
            }
            else {
              local_8[local_c] = cVar13;
              iVar14 = local_c + 1;
              local_c = local_c + 1;
            }
          }
          else {
            if (iVar10 == 1) {
              if ((cVar13 == '&') || (cVar13 == '=')) {
                if (local_8[iVar14 + -1] == '\0') {
                  cVar13 = *(char *)(iVar6 + (int)piVar4);
                  for (; ((cVar13 != '\0' && (cVar13 != '#')) &&
                         (*(char *)(iVar6 + -1 + (int)piVar4) != '&')); iVar6 = iVar6 + 1) {
                    cVar13 = *(char *)(iVar6 + 1 + (int)piVar4);
                  }
                }
                else if (cVar13 == '&') {
                  local_8[iVar14] = '\0';
                  local_8[iVar14 + 1] = '\0';
                  local_c = iVar14 + 2;
                  iVar14 = local_c;
                }
                else {
                  local_8[iVar14] = '\0';
                  local_c = iVar14 + 1;
                  iVar10 = 2;
                  iVar14 = local_c;
                }
                goto LAB_004a30ab;
              }
            }
            else {
              if (iVar10 == 0) {
                if (cVar13 != '?') {
                  local_c = iVar14 + 1;
                  local_8[iVar14] = cVar13;
                  iVar14 = local_c;
                  goto LAB_004a30ab;
                }
              }
              else if ((iVar10 != 2) || (cVar13 != '&')) goto LAB_004a318d;
              iVar10 = 1;
              cVar13 = '\0';
            }
LAB_004a318d:
            local_c = iVar14 + 1;
            local_8[iVar14] = cVar13;
            iVar14 = local_c;
          }
LAB_004a30ab:
          cVar13 = *(char *)(iVar6 + (int)piVar4);
          iVar17 = iVar6;
        } while (cVar13 != '\0');
        if (iVar10 == 1) {
          local_8[iVar14] = '\0';
          iVar14 = iVar14 + 1;
        }
      }
      (local_8 + iVar14)[0] = '\0';
      (local_8 + iVar14)[1] = '\0';
      cVar13 = *local_8;
      pcVar7 = local_8;
      while (cVar13 != '\0') {
        pcVar7 = pcVar7 + 1;
        cVar13 = *pcVar7;
      }
      pbVar11 = (byte *)(local_8 + ((int)pcVar7 - (int)local_8 & 0x3fffffffU) + 1);
      pbVar12 = pbVar11;
      if (*pbVar11 != 0) {
LAB_004a31d7:
        do {
          pbVar11 = pbVar11 + 1;
        } while (*pbVar11 != 0);
        uVar16 = (int)pbVar11 - (int)pbVar12 & 0x3fffffff;
        pbVar11 = pbVar12 + uVar16 + 1;
        if (pbVar11 == (byte *)0x0) {
          uVar18 = 0;
        }
        else {
          bVar1 = *pbVar11;
          pbVar9 = pbVar11;
          while (bVar1 != 0) {
            pbVar9 = pbVar9 + 1;
            bVar1 = *pbVar9;
          }
          uVar18 = (int)pbVar9 - (int)pbVar11 & 0x3fffffff;
        }
        if (uVar16 != 3) {
          if (uVar16 != 5) {
            if ((uVar16 == 4) && (*(int *)pbVar12 == 0x65646f6d)) {
              local_1c = local_10 & 0x87;
              local_20 = 0x87;
              ppuVar8 = &PTR_DAT_0058353c;
              goto LAB_004a329e;
            }
            goto LAB_004a3373;
          }
          if ((*(int *)pbVar12 != 0x68636163) || (pbVar12[4] != 0x65)) goto LAB_004a3373;
          local_20 = 0x60000;
          ppuVar8 = &PTR_s_shared_00583524;
          local_1c = 0x60000;
LAB_004a329e:
          pbVar12 = *ppuVar8;
          iVar17 = 0;
          if (pbVar12 != (byte *)0x0) {
            do {
              uVar16 = 0;
              if (pbVar12 != (byte *)0x0) {
                bVar1 = *pbVar12;
                pbVar9 = pbVar12;
                while (bVar1 != 0) {
                  pbVar9 = pbVar9 + 1;
                  bVar1 = *pbVar9;
                }
                uVar16 = (int)pbVar9 - (int)pbVar12 & 0x3fffffff;
              }
              pbVar9 = pbVar11;
              uVar3 = uVar18;
              if (uVar18 == uVar16) {
                while (uVar16 = uVar3 - 4, 3 < uVar3) {
                  if (*(int *)pbVar9 != *(int *)pbVar12) goto LAB_004a32ee;
                  pbVar12 = pbVar12 + 4;
                  pbVar9 = pbVar9 + 4;
                  uVar3 = uVar16;
                }
                if (uVar16 == 0xfffffffc) goto LAB_004a333e;
LAB_004a32ee:
                if ((*pbVar9 == *pbVar12) &&
                   ((uVar16 == 0xfffffffd ||
                    ((pbVar9[1] == pbVar12[1] &&
                     ((uVar16 == 0xfffffffe ||
                      ((pbVar9[2] == pbVar12[2] &&
                       ((uVar16 == 0xffffffff || (pbVar9[3] == pbVar12[3]))))))))))))
                goto LAB_004a333e;
              }
              iVar17 = iVar17 + 1;
              pbVar12 = ppuVar8[iVar17 * 2];
              if (pbVar12 == (byte *)0x0) break;
            } while( true );
          }
          goto LAB_004a3329;
        }
        if ((*(short *)pbVar12 == 0x6676) && (pbVar12[2] == 0x73)) {
          param_1 = pbVar11;
        }
        goto LAB_004a3373;
      }
      goto LAB_004a3384;
    }
    cVar13 = *(char *)((int)piVar4 + 7);
    iVar17 = 7;
    if (cVar13 == '\0') goto LAB_004a2ff1;
    do {
      if (cVar13 == '/') break;
      cVar13 = *(char *)(iVar17 + 1 + (int)piVar4);
      iVar17 = iVar17 + 1;
    } while (cVar13 != '\0');
    if ((iVar17 == 7) ||
       ((((iVar17 == 0x10 && (*(int *)((int)piVar4 + 7) == 0x61636f6c)) &&
         (*(int *)((int)piVar4 + 0xb) == 0x736f686c)) && (*(char *)((int)piVar4 + 0xf) == 't'))))
    goto LAB_004a2ff1;
    uVar5 = FUN_004666d0((byte *)"invalid uri authority: %.*s");
  }
LAB_004a33a9:
  local_14 = 1;
LAB_004a33b0:
  *param_6 = uVar5;
  FUN_00466dd0((int)local_8);
  local_8 = (char *)0x0;
LAB_004a33c2:
  *param_3 = local_10;
  *param_5 = local_8;
  return local_14;
LAB_004a333e:
  puVar2 = ppuVar8[iVar17 * 2 + 1];
  if (puVar2 == (undefined *)0x0) {
LAB_004a3329:
    uVar5 = FUN_004666d0((byte *)"no such %s mode: %s");
    goto LAB_004a33a9;
  }
  if ((int)local_1c < (int)((uint)puVar2 & 0xffffff7f)) {
    uVar5 = FUN_004666d0((byte *)"%s mode not allowed: %s");
    local_14 = 3;
    goto LAB_004a33b0;
  }
  local_10 = ~local_20 & local_10 | (uint)puVar2;
LAB_004a3373:
  pbVar11 = pbVar11 + uVar18 + 1;
  pbVar12 = pbVar11;
  if (*pbVar11 == 0) goto LAB_004a3384;
  goto LAB_004a31d7;
}


/* FUN_004a3440 @ 004a3440  kind=lib  attributed-by=lib-island  size=310 */

void __cdecl
FUN_004a3440(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  byte bVar4;
  undefined4 local_10;
  undefined4 uStack_c;
  int local_8;
  int iVar3;
  
  if (*param_1 < 0) {
    *param_1 = 0;
    param_1[1] = -1;
    *(undefined2 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 0;
  }
  local_10 = param_3;
  uStack_c = param_4;
  param_1[2] = param_5;
  do {
    bVar4 = (byte)param_2;
    uVar2 = FUN_004c35e0(param_1,bVar4);
    iVar3 = CONCAT22(extraout_var,uVar2);
    if (iVar3 < 0x273) {
      *param_1 = *param_1 + 1;
      iVar3 = *param_1;
      if (iVar3 < 100) {
        *(undefined2 *)(param_1 + iVar3 * 4 + 3) = uVar2;
        *(ulonglong *)(param_1 + iVar3 * 4 + 4) = CONCAT44(uStack_c,local_10);
        *(byte *)((int)param_1 + iVar3 * 0x10 + 0xe) = bVar4;
        param_1[iVar3 * 4 + 6] = local_8;
        param_1[1] = param_1[1] + -1;
        return;
      }
      piVar1 = (int *)param_1[2];
      iVar3 = iVar3 + -1;
      *param_1 = iVar3;
      while ((-1 < iVar3 && (iVar3 = *param_1, -1 < iVar3))) {
        FUN_004c34a0((int)param_1,*(undefined1 *)((int)param_1 + iVar3 * 0x10 + 0xe),
                     param_1 + iVar3 * 4 + 4);
        *param_1 = *param_1 + -1;
        iVar3 = *param_1;
      }
      FUN_004962b0(piVar1,(byte *)"parser stack overflow");
      param_1[1] = param_1[1] + -1;
      param_1[2] = (int)piVar1;
      return;
    }
    if (0x3b9 < iVar3) {
      piVar1 = (int *)param_1[2];
      FUN_004962b0(piVar1,(byte *)"near \"%T\": syntax error");
      param_1[2] = (int)piVar1;
      FUN_004c34a0((int)param_1,bVar4,&local_10);
      return;
    }
    FUN_004c3670(param_1,iVar3 + -0x273);
    if (param_2 == 0xfb) {
      return;
    }
  } while (-1 < *param_1);
  return;
}


/* FUN_004a3580 @ 004a3580  kind=lib  attributed-by=lib-island  size=63 */

void __cdecl FUN_004a3580(int *param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    iVar1 = iVar2;
    while ((-1 < iVar1 && (-1 < iVar2))) {
      FUN_004c34a0((int)param_1,*(undefined1 *)((int)param_1 + iVar2 * 0x10 + 0xe),
                   param_1 + iVar2 * 4 + 4);
      *param_1 = *param_1 + -1;
      iVar1 = *param_1;
      iVar2 = *param_1;
    }
    (*(code *)param_2)(param_1);
  }
  return;
}


/* FUN_004a35c0 @ 004a35c0  kind=lib  attributed-by=lib-island  size=95 */

void __cdecl FUN_004a35c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  while (puVar1 != (undefined4 *)0x0) {
    if ((*(byte *)(puVar1 + 6) & 2) != 0) {
      FUN_00486ed0((int)puVar1);
      *(ushort *)(puVar1 + 6) = *(ushort *)(puVar1 + 6) & 0xfff9;
      if ((*(short *)((int)puVar1 + 0x1a) == 0) && (iVar2 = puVar1[7], *(int *)(iVar2 + 0x1c) != 0))
      {
        if (puVar1[5] == 1) {
          *(undefined4 *)(iVar2 + 0x2c) = 0;
        }
        (*DAT_00582b4c)(*(undefined4 *)(iVar2 + 0x28),*puVar1,0);
      }
    }
    puVar1 = (undefined4 *)*param_1;
  }
  return;
}


/* FUN_004a3620 @ 004a3620  kind=lib  attributed-by=lib-island  size=378 */

undefined1 * __cdecl FUN_004a3620(int *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *local_ac [32];
  undefined1 local_2c [12];
  undefined1 *local_20;
  
  iVar7 = *param_1;
  while (iVar7 != 0) {
    *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0x20);
    iVar7 = *(int *)(iVar7 + 0x20);
  }
  puVar2 = (undefined1 *)*param_1;
  memset(local_ac,0,0x80);
  while (puVar2 != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(puVar2 + 0xc);
    *(int *)(puVar2 + 0xc) = 0;
    iVar7 = 0;
    do {
      if (local_ac[iVar7] == (undefined1 *)0x0) {
        local_ac[iVar7] = puVar2;
        puVar4 = puVar2;
        break;
      }
      puVar4 = local_2c;
      puVar5 = local_ac[iVar7];
      do {
        if (puVar2 == (undefined1 *)0x0) {
          if (puVar5 == (undefined1 *)0x0) goto LAB_004a36b4;
          *(undefined1 **)(puVar4 + 0xc) = puVar5;
          goto LAB_004a36bb;
        }
        if (*(uint *)(puVar5 + 0x14) < *(uint *)(puVar2 + 0x14)) {
          *(undefined1 **)(puVar4 + 0xc) = puVar5;
          puVar3 = puVar2;
          puVar6 = *(undefined1 **)(puVar5 + 0xc);
          puVar4 = puVar5;
        }
        else {
          *(undefined1 **)(puVar4 + 0xc) = puVar2;
          puVar3 = *(undefined1 **)(puVar2 + 0xc);
          puVar6 = puVar5;
          puVar4 = puVar2;
        }
        puVar2 = puVar3;
        puVar5 = puVar6;
      } while (puVar6 != (undefined1 *)0x0);
      if (puVar3 == (undefined1 *)0x0) {
LAB_004a36b4:
        *(undefined4 *)(puVar4 + 0xc) = 0;
      }
      else {
        *(undefined1 **)(puVar4 + 0xc) = puVar3;
      }
LAB_004a36bb:
      local_ac[iVar7] = (undefined1 *)0x0;
      iVar7 = iVar7 + 1;
      puVar2 = local_20;
      puVar4 = local_20;
    } while (iVar7 < 0x1f);
    puVar2 = puVar1;
    if (iVar7 == 0x1f) {
      puVar1 = local_2c;
      while (local_ac[0x1f] != (undefined1 *)0x0) {
        if (puVar4 == (undefined1 *)0x0) {
          if (local_ac[0x1f] == (undefined1 *)0x0) goto LAB_004a371b;
          *(undefined1 **)(puVar1 + 0xc) = local_ac[0x1f];
          goto LAB_004a3722;
        }
        if (*(uint *)(local_ac[0x1f] + 0x14) < *(uint *)(puVar4 + 0x14)) {
          *(undefined1 **)(puVar1 + 0xc) = local_ac[0x1f];
          puVar1 = local_ac[0x1f];
          local_ac[0x1f] = *(undefined1 **)(local_ac[0x1f] + 0xc);
        }
        else {
          *(undefined1 **)(puVar1 + 0xc) = puVar4;
          puVar1 = puVar4;
          puVar4 = *(undefined1 **)(puVar4 + 0xc);
        }
      }
      if (puVar4 == (undefined1 *)0x0) {
LAB_004a371b:
        *(undefined4 *)(puVar1 + 0xc) = 0;
      }
      else {
        *(undefined1 **)(puVar1 + 0xc) = puVar4;
      }
LAB_004a3722:
      local_ac[0x1f] = local_20;
    }
  }
  iVar7 = 1;
  do {
    puVar1 = local_ac[iVar7];
    puVar2 = local_2c;
    while (puVar4 = puVar1, local_ac[0] != (undefined1 *)0x0) {
      if (puVar4 == (undefined1 *)0x0) {
        if (local_ac[0] == (undefined1 *)0x0) goto LAB_004a3784;
        *(undefined1 **)(puVar2 + 0xc) = local_ac[0];
        goto LAB_004a378b;
      }
      if (*(uint *)(local_ac[0] + 0x14) < *(uint *)(puVar4 + 0x14)) {
        *(undefined1 **)(puVar2 + 0xc) = local_ac[0];
        puVar1 = puVar4;
        puVar2 = local_ac[0];
        local_ac[0] = *(undefined1 **)(local_ac[0] + 0xc);
      }
      else {
        *(undefined1 **)(puVar2 + 0xc) = puVar4;
        puVar1 = *(undefined1 **)(puVar4 + 0xc);
        puVar2 = puVar4;
      }
    }
    if (puVar4 == (undefined1 *)0x0) {
LAB_004a3784:
      *(undefined4 *)(puVar2 + 0xc) = 0;
    }
    else {
      *(undefined1 **)(puVar2 + 0xc) = puVar4;
    }
LAB_004a378b:
    iVar7 = iVar7 + 1;
    local_ac[0] = local_20;
    if (0x1f < iVar7) {
      return local_20;
    }
  } while( true );
}


/* FUN_004a37a0 @ 004a37a0  kind=lib  attributed-by=lib-island  size=60 */

void __cdecl FUN_004a37a0(undefined4 *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 6) & 2) != 0) {
    FUN_00486ed0((int)param_1);
  }
  iVar1 = param_1[7];
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
  if (param_1[5] == 1) {
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  (*DAT_00582b4c)(*(undefined4 *)(iVar1 + 0x28),*param_1,1);
  return;
}


/* FUN_004a37e0 @ 004a37e0  kind=lib  attributed-by=lib-island  size=366 */

int __cdecl FUN_004a37e0(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
  piVar4 = (int *)0x0;
  if ((param_1[10] == 0) && (param_3 != 0)) {
    iVar1 = (*DAT_00582b3c)(param_1[5],param_1[6] + 0x28,param_1[7]);
    if (iVar1 == 0) {
      return 7;
    }
    uVar5 = FUN_00483490((int)param_1);
    (*DAT_00582b40)(iVar1,(int)uVar5);
    param_1[10] = iVar1;
  }
  if ((param_1[7] == 0) || (*param_1 == 0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = (iVar1 + 1) * param_3;
  if ((param_1[10] == 0) ||
     (piVar2 = (int *)(*DAT_00582b48)(param_1[10],param_2,iVar1), piVar2 == (int *)0x0)) {
    if (iVar1 != 1) goto LAB_004a3936;
    for (iVar3 = param_1[2];
        (iVar3 != 0 && ((*(short *)(iVar3 + 0x1a) != 0 || ((*(byte *)(iVar3 + 0x18) & 4) != 0))));
        iVar3 = *(int *)(iVar3 + 0x24)) {
    }
    param_1[2] = iVar3;
    if (iVar3 == 0) {
      for (iVar3 = param_1[1]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x24)) {
        if (*(short *)(iVar3 + 0x1a) == 0) goto LAB_004a38a5;
      }
    }
    else {
LAB_004a38a5:
      iVar3 = (*(code *)param_1[8])(param_1[9],iVar3);
      if ((iVar3 != 0) && (iVar3 != 5)) {
        return iVar3;
      }
    }
    piVar2 = (int *)(*DAT_00582b48)(param_1[10],param_2,2);
    if (piVar2 == (int *)0x0) goto LAB_004a3936;
  }
  piVar4 = (int *)piVar2[1];
  if (*piVar4 == 0) {
    piVar4[0] = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
    piVar4[8] = 0;
    piVar4[9] = 0;
    *piVar4 = (int)piVar2;
    piVar4[1] = *piVar2;
    piVar4[2] = (int)(piVar4 + 10);
    memset(piVar4 + 10,0,param_1[6]);
    piVar4[7] = (int)param_1;
    piVar4[5] = param_2;
  }
  if (*(short *)((int)piVar4 + 0x1a) == 0) {
    param_1[3] = param_1[3] + 1;
  }
  *(short *)((int)piVar4 + 0x1a) = *(short *)((int)piVar4 + 0x1a) + 1;
  if (param_2 == 1) {
    param_1[0xb] = (int)piVar4;
  }
LAB_004a3936:
  *param_4 = piVar4;
  if ((piVar4 == (int *)0x0) && (iVar1 != 0)) {
    return 7;
  }
  return 0;
}


/* FUN_004a3950 @ 004a3950  kind=lib  attributed-by=lib-island  size=79 */

void __cdecl FUN_004a3950(undefined4 *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 6) & 2) != 0) {
    FUN_00486ed0((int)param_1);
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xfff9;
    if ((*(short *)((int)param_1 + 0x1a) == 0) && (iVar1 = param_1[7], *(int *)(iVar1 + 0x1c) != 0))
    {
      if (param_1[5] == 1) {
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
      (*DAT_00582b4c)(*(undefined4 *)(iVar1 + 0x28),*param_1,0);
    }
  }
  return;
}


/* FUN_004a39a0 @ 004a39a0  kind=lib  attributed-by=lib-island  size=74 */

void __cdecl FUN_004a39a0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xffdf;
  if ((*(ushort *)(param_1 + 0x18) & 2) == 0) {
    *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 2;
    piVar1 = *(int **)(param_1 + 0x1c);
    iVar2 = *piVar1;
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x24) = param_1;
    }
    *piVar1 = param_1;
    if (piVar1[1] == 0) {
      piVar1[1] = param_1;
    }
    if ((piVar1[2] == 0) && ((*(byte *)(param_1 + 0x18) & 4) == 0)) {
      piVar1[2] = param_1;
    }
  }
  return;
}


/* FUN_004a39f0 @ 004a39f0  kind=lib  attributed-by=lib-island  size=101 */

void __cdecl FUN_004a39f0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  (*DAT_00582b50)(*(undefined4 *)(param_1[7] + 0x28),*param_1,param_1[5],param_2);
  param_1[5] = param_2;
  if (((*(ushort *)(param_1 + 6) & 2) != 0) && ((*(ushort *)(param_1 + 6) & 4) != 0)) {
    FUN_00486ed0((int)param_1);
    piVar1 = (int *)param_1[7];
    iVar2 = *piVar1;
    param_1[8] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 0x24) = param_1;
    }
    *piVar1 = (int)param_1;
    if (piVar1[1] == 0) {
      piVar1[1] = (int)param_1;
    }
    if ((piVar1[2] == 0) && ((*(byte *)(param_1 + 6) & 4) == 0)) {
      piVar1[2] = (int)param_1;
    }
  }
  return;
}


/* FUN_004a3a60 @ 004a3a60  kind=lib  attributed-by=lib-island  size=27 */

undefined4 __cdecl FUN_004a3a60(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004a3a71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_00582b44)();
    return uVar1;
  }
  return 0;
}


/* FUN_004a3a80 @ 004a3a80  kind=lib  attributed-by=lib-island  size=119 */

void __cdecl FUN_004a3a80(undefined4 *param_1)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  
  psVar1 = (short *)((int)param_1 + 0x1a);
  *psVar1 = *psVar1 + -1;
  if (*psVar1 == 0) {
    *(int *)(param_1[7] + 0xc) = *(int *)(param_1[7] + 0xc) + -1;
    if ((*(byte *)(param_1 + 6) & 2) == 0) {
      iVar2 = param_1[7];
      if (*(int *)(iVar2 + 0x1c) != 0) {
        if (param_1[5] == 1) {
          *(undefined4 *)(iVar2 + 0x2c) = 0;
        }
        (*DAT_00582b4c)(*(undefined4 *)(iVar2 + 0x28),*param_1,0);
        return;
      }
    }
    else {
      FUN_00486ed0((int)param_1);
      piVar3 = (int *)param_1[7];
      iVar2 = *piVar3;
      param_1[8] = iVar2;
      if (iVar2 != 0) {
        *(undefined4 **)(iVar2 + 0x24) = param_1;
      }
      *piVar3 = (int)param_1;
      if (piVar3[1] == 0) {
        piVar3[1] = (int)param_1;
      }
      if ((piVar3[2] == 0) && ((*(byte *)(param_1 + 6) & 4) == 0)) {
        piVar3[2] = (int)param_1;
      }
    }
  }
  return;
}


/* FUN_004a3b00 @ 004a3b00  kind=lib  attributed-by=lib-island  size=170 */

void __cdecl FUN_004a3b00(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1[10] != 0) {
    puVar1 = (undefined4 *)*param_1;
    while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar3[8];
      if ((param_2 < (uint)puVar3[5]) && ((*(byte *)(puVar3 + 6) & 2) != 0)) {
        FUN_00486ed0((int)puVar3);
        *(ushort *)(puVar3 + 6) = *(ushort *)(puVar3 + 6) & 0xfff9;
        if ((*(short *)((int)puVar3 + 0x1a) == 0) &&
           (iVar2 = puVar3[7], *(int *)(iVar2 + 0x1c) != 0)) {
          if (puVar3[5] == 1) {
            *(undefined4 *)(iVar2 + 0x2c) = 0;
          }
          (*DAT_00582b4c)(*(undefined4 *)(iVar2 + 0x28),*puVar3,0);
        }
      }
    }
    if ((param_2 == 0) && (param_1[0xb] != 0)) {
      memset(*(void **)(param_1[0xb] + 4),0,param_1[5]);
      param_2 = 1;
    }
    (*DAT_00582b54)(param_1[10],param_2 + 1);
  }
  return;
}


/* FUN_004a3bb0 @ 004a3bb0  kind=lib  attributed-by=lib-island  size=7930 */

void FUN_004a3bb0(int *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  ushort uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  short extraout_var_01;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 *puVar10;
  int *piVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  byte *extraout_EDX;
  byte *pbVar17;
  int iVar18;
  undefined **ppuVar19;
  char *pcVar20;
  int *piVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  size_t sVar24;
  int *local_58;
  byte *local_54;
  byte *local_50;
  undefined4 local_4c;
  uint local_48;
  int *local_44;
  uint local_40;
  uint local_3c;
  int *local_38;
  undefined4 *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  byte *local_14;
  byte *local_10;
  undefined4 *local_c;
  int *local_8;
  
  piVar8 = param_1;
  piVar21 = (int *)*param_1;
  local_8 = piVar21;
  piVar6 = FUN_00494b90((int)piVar21,0xc0);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
    local_30 = (int *)0x0;
  }
  else {
    local_30 = piVar6;
    memset(piVar6,0,0xc0);
    *piVar6 = (int)piVar21;
    if (piVar21[1] != 0) {
      *(int **)(piVar21[1] + 0x38) = piVar6;
    }
    piVar6[0xf] = piVar21[1];
    piVar6[0xe] = 0;
    piVar21[1] = (int)piVar6;
    piVar6[0xc] = 0x26bceaa5;
  }
  piVar21 = param_3;
  piVar8[2] = (int)piVar6;
  if (piVar6 == (int *)0x0) {
    return;
  }
  piVar6[0x18] = piVar6[0x18] | 0x40;
  piVar8[0x13] = 2;
  local_18 = (int *)FUN_004ab150(piVar8,param_2,(int)param_3,(int *)&local_38);
  if ((int)local_18 < 0) {
    return;
  }
  local_c = (undefined4 *)((int)local_18 * 0x10 + local_8[4]);
  if ((local_18 == (int *)0x1) && (iVar7 = FUN_004a11c0(piVar8), iVar7 != 0)) {
    return;
  }
  piVar8 = local_8;
  local_14 = (byte *)FUN_004a0d40((int)local_8,local_38);
  if (local_14 == (byte *)0x0) {
    return;
  }
  if (param_5 == 0) {
    local_10 = (byte *)FUN_004a0d40((int)piVar8,param_4);
  }
  else {
    local_10 = (byte *)FUN_004a02d0((int)piVar8,&DAT_00570020);
  }
  if (piVar21[1] == 0) {
    pbVar17 = (byte *)0x0;
  }
  else {
    pbVar17 = (byte *)*local_c;
  }
  piVar8 = (int *)FUN_0048d4b0(param_1,0x13,local_14,local_10,pbVar17);
  if (piVar8 != (int *)0x0) goto LAB_004a5a8c;
  local_54 = local_14;
  local_50 = local_10;
  local_4c = 0;
  local_8[0x6d] = 0;
  local_58 = piVar8;
  local_38 = (int *)FUN_00465320((int)local_8,pbVar17,0xe,&local_58);
  if (local_38 == (int *)0x0) {
    puVar15 = local_c;
    if (local_58 != (int *)0x0) {
      param_1[0x13] = param_1[0x13] + 1;
      iVar7 = param_1[0x13];
      FUN_004ae8f0(piVar6,0x5e,0,iVar7,0,local_58,0);
      FUN_004b8c50(piVar6,1);
      FUN_004b8c10(piVar6,0,0,"result",(undefined *)0x0);
      FUN_004ae830(piVar6,0x10,iVar7,1);
      FUN_00466dd0((int)local_58);
      puVar15 = local_c;
    }
  }
  else if (local_38 == (int *)0xc) {
    iVar7 = FUN_004bcc60(local_14,(byte *)"default_cache_size");
    piVar8 = param_1;
    if (iVar7 == 0) {
      iVar7 = FUN_004a6100(param_1);
      if (iVar7 != 0) goto LAB_004a5a8c;
      FUN_004b9540(piVar6,(int)local_18);
      if (local_10 == (byte *)0x0) {
        FUN_004b8c50(piVar6,1);
        FUN_004b8c10(piVar6,0,0,"cache_size",(undefined *)0x0);
        piVar8 = piVar8 + 0x13;
        *piVar8 = *piVar8 + 2;
        uVar9 = FUN_004aea10(piVar6,8,0x56bfa4);
        piVar21 = local_18;
        FUN_004aec60((int)piVar6,uVar9,local_18);
        FUN_004aec60((int)piVar6,uVar9 + 1,piVar21);
        FUN_004aec60((int)piVar6,uVar9 + 6,2000);
        puVar15 = local_c;
      }
      else {
        uVar9 = FUN_0048d2d0((char *)local_10);
        iVar7 = FUN_0048b940(uVar9);
        FUN_0048e5e0(piVar8,0,(int)local_18);
        FUN_004ae830(piVar6,7,iVar7,1);
        FUN_004ae890(piVar6,0x25,local_18,3,1);
        puVar15 = local_c;
        *(int *)(local_c[3] + 0x50) = iVar7;
        FUN_00491b30((undefined4 *)local_c[1],*(uint *)(local_c[3] + 0x50));
      }
    }
    else {
      iVar7 = FUN_004bcc60(local_14,(byte *)"page_size");
      puVar15 = local_c;
      if (iVar7 == 0) {
        puVar10 = (undefined4 *)local_c[1];
        if (local_10 == (byte *)0x0) {
          if (puVar10 == (undefined4 *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(puVar10[1] + 0x20);
          }
          FUN_00489750(param_1,"page_size",iVar7,iVar7 >> 0x1f);
        }
        else {
          uVar9 = FUN_0048d2d0((char *)local_10);
          local_8[0x10] = uVar9;
          iVar7 = FUN_00491c00(puVar10,uVar9,0xffffffff,0);
          if (iVar7 == 7) {
            *(undefined1 *)(local_8 + 0xe) = 1;
          }
        }
      }
      else {
        iVar7 = FUN_004bcc60(local_14,(byte *)"secure_delete");
        if (iVar7 == 0) {
          uVar9 = 0xffffffff;
          local_38 = (int *)local_c[1];
          if (local_10 != (byte *)0x0) {
            bVar2 = FUN_0049c950(local_10,0);
            uVar9 = (uint)bVar2;
          }
          if (((piVar21[1] == 0) && (-1 < (int)uVar9)) && (iVar7 = 0, 0 < local_8[5])) {
            iVar18 = 0;
            do {
              FUN_00491a40(*(undefined4 **)(iVar18 + 4 + local_8[4]),uVar9);
              iVar7 = iVar7 + 1;
              iVar18 = iVar18 + 0x10;
            } while (iVar7 < local_8[5]);
          }
          uVar5 = FUN_00491a40(local_38,uVar9);
          FUN_00489750(param_1,"secure_delete",CONCAT22(extraout_var_01,uVar5),
                       (int)extraout_var_01 >> 0xf);
          puVar15 = local_c;
        }
        else {
          iVar7 = FUN_004bcc60(local_14,(byte *)"page_count");
          if ((iVar7 == 0) || (iVar7 = FUN_004bcc60(local_14,(byte *)"max_page_count"), iVar7 == 0))
          {
            piVar21 = param_1;
            iVar7 = FUN_004a6100(param_1);
            if (iVar7 != 0) goto LAB_004a5a8c;
            FUN_00493400(piVar21,(int)local_18);
            piVar21[0x13] = piVar21[0x13] + 1;
            iVar7 = piVar21[0x13];
            if ((&DAT_00569620)[*local_14] == 'p') {
              FUN_004ae830(piVar6,0x92,local_18,iVar7);
            }
            else {
              uVar9 = FUN_0048d2d0((char *)local_10);
              iVar18 = FUN_0048b940(uVar9);
              FUN_004ae890(piVar6,0x93,local_18,iVar7,iVar18);
            }
            FUN_004ae830(piVar6,0x10,iVar7,1);
            FUN_004b8c50(piVar6,1);
            FUN_004b8c10(piVar6,0,0,local_14,(undefined *)0xffffffff);
            puVar15 = local_c;
          }
          else {
            iVar7 = FUN_004bcc60(local_14,(byte *)"locking_mode");
            if (iVar7 == 0) {
              param_1 = (int *)FUN_0047d3d0(local_10);
              piVar8 = local_8;
              if (piVar21[1] == 0) {
                if (param_1 != (int *)0xffffffff) {
                  iVar7 = 2;
                  if (2 < local_8[5]) {
                    iVar18 = 0x20;
                    do {
                      FUN_004a1c60(**(int **)(*(int *)(iVar18 + 4 + piVar8[4]) + 4),(int)param_1);
                      iVar7 = iVar7 + 1;
                      iVar18 = iVar18 + 0x10;
                      piVar6 = local_30;
                    } while (iVar7 < piVar8[5]);
                  }
                  *(char *)((int)local_8 + 0x39) = (char)param_1;
                  goto LAB_004a404a;
                }
                uVar9 = (uint)*(byte *)((int)local_8 + 0x39);
                puVar15 = local_c;
              }
              else {
LAB_004a404a:
                puVar15 = local_c;
                uVar3 = FUN_004a1c60(**(int **)(local_c[1] + 4),(int)param_1);
                uVar9 = CONCAT31(extraout_var,uVar3);
              }
              pcVar20 = "exclusive";
              if (uVar9 != 1) {
                pcVar20 = "normal";
              }
              FUN_004b8c50(piVar6,1);
              FUN_004b8c10(piVar6,0,0,"locking_mode",(undefined *)0x0);
              FUN_004ae8f0(piVar6,0x5e,0,1,0,(int *)pcVar20,0);
              FUN_004ae830(piVar6,0x10,1,1);
            }
            else {
              iVar7 = FUN_004bcc60(local_14,(byte *)"journal_mode");
              if (iVar7 == 0) {
                iVar7 = FUN_004a6100(param_1);
                if (iVar7 != 0) goto LAB_004a5a8c;
                FUN_004b8c50(piVar6,1);
                FUN_004b8c10(piVar6,0,0,"journal_mode",(undefined *)0x0);
                if (local_10 != (byte *)0x0) {
                  param_1 = (int *)FUN_004aa9b0((char *)local_10);
                  pbVar17 = extraout_EDX;
                  for (iVar7 = 0; (iVar7 != 6 && ((&PTR_s_delete_0056a9c4)[iVar7] != (byte *)0x0));
                      iVar7 = iVar7 + 1) {
                    iVar18 = FUN_00468380(pbVar17,(&PTR_s_delete_0056a9c4)[iVar7],(int)param_1);
                    if (iVar18 == 0) {
                      if (iVar7 == -1) goto LAB_004a41b6;
                      goto LAB_004a4148;
                    }
                    pbVar17 = local_10;
                  }
                }
                iVar7 = -1;
LAB_004a41b6:
                if (piVar21[1] == 0) {
                  local_18 = (int *)0x0;
                  piVar21[1] = 1;
                }
LAB_004a4148:
                piVar21 = (int *)(local_8[5] - 1);
                if (-1 < (int)piVar21) {
                  param_1 = (int *)((int)piVar21 * 0x10);
                  do {
                    if ((*(int *)((int)param_1 + local_8[4] + 4) != 0) &&
                       ((piVar21 == local_18 || (param_3[1] == 0)))) {
                      FUN_004b9540(piVar6,(int)piVar21);
                      FUN_004ae890(piVar6,0x7e,piVar21,1,iVar7);
                    }
                    param_1 = param_1 + -4;
                    piVar21 = (int *)((int)piVar21 - 1);
                  } while (-1 < (int)piVar21);
                }
                FUN_004ae830(piVar6,0x10,1,1);
                puVar15 = local_c;
              }
              else {
                iVar7 = FUN_004bcc60(local_14,(byte *)"journal_size_limit");
                puVar15 = local_c;
                if (iVar7 == 0) {
                  local_44 = (int *)0xffffffff;
                  iVar7 = **(int **)(local_c[1] + 4);
                  local_48 = 0xfffffffe;
                  uVar9 = 0xfffffffe;
                  piVar21 = (int *)0xffffffff;
                  if (((local_10 != (byte *)0x0) &&
                      (FUN_0048d300(local_10,&local_48,1000000,'\x01'), uVar9 = local_48,
                      piVar21 = local_44, (int *)0x7fffffff < local_44)) &&
                     (((int)local_44 < -1 || (local_48 != 0xffffffff)))) {
                    uVar9 = 0xffffffff;
                    piVar21 = (int *)0xffffffff;
                  }
                  uVar23 = FUN_004a1c00(iVar7,uVar9,(uint)piVar21);
                  FUN_00489750(param_1,"journal_size_limit",(int)uVar23,
                               (int)((ulonglong)uVar23 >> 0x20));
                }
                else {
                  iVar7 = FUN_004bcc60(local_14,(byte *)"auto_vacuum");
                  piVar8 = param_1;
                  if (iVar7 == 0) {
                    puVar10 = (undefined4 *)local_c[1];
                    iVar7 = FUN_004a6100(param_1);
                    if (iVar7 != 0) goto LAB_004a5a8c;
                    if (local_10 == (byte *)0x0) {
                      if (puVar10 == (undefined4 *)0x0) {
                        iVar7 = 0;
                      }
                      else {
                        cVar4 = FUN_0048fe00(puVar10);
                        iVar7 = CONCAT31(extraout_var_00,cVar4);
                      }
                      FUN_00489750(piVar8,"auto_vacuum",iVar7,iVar7 >> 0x1f);
                      puVar15 = local_c;
                    }
                    else {
                      piVar21 = (int *)FUN_0047d090(local_10);
                      *(char *)((int)local_8 + 0x3a) = (char)piVar21;
                      puVar15 = local_c;
                      param_1 = piVar21;
                      if (((-1 < (int)piVar21) &&
                          (iVar7 = FUN_00491ab0(puVar10,(char)piVar21), puVar15 = local_c,
                          iVar7 == 0)) && ((piVar21 == (int *)0x1 || (piVar21 == (int *)0x2)))) {
                        uVar9 = FUN_004aea10(piVar6,6,0x56c7f8);
                        piVar21 = local_18;
                        FUN_004aec60((int)piVar6,uVar9,local_18);
                        FUN_004aec60((int)piVar6,uVar9 + 1,piVar21);
                        FUN_004aec80((int)piVar6,uVar9 + 2,uVar9 + 4);
                        FUN_004aec60((int)piVar6,uVar9 + 4,(int)param_1 + -1);
                        piVar21 = local_18;
                        FUN_004aec60((int)piVar6,uVar9 + 5,local_18);
                        FUN_004b9540(piVar6,(int)piVar21);
                        puVar15 = local_c;
                      }
                    }
                  }
                  else {
                    iVar7 = FUN_004bcc60(local_14,(byte *)"incremental_vacuum");
                    piVar8 = param_1;
                    if (iVar7 == 0) {
                      iVar7 = FUN_004a6100(param_1);
                      if (iVar7 != 0) goto LAB_004a5a8c;
                      if (((local_10 == (byte *)0x0) ||
                          (iVar7 = FUN_0049ca30((char *)local_10,(uint *)&param_1), iVar7 == 0)) ||
                         (piVar21 = param_1, (int)param_1 < 1)) {
                        piVar21 = (int *)0x7fffffff;
                      }
                      FUN_0048e5e0(piVar8,0,(int)local_18);
                      FUN_004ae830(piVar6,7,piVar21,1);
                      uVar9 = FUN_004ae7d0(piVar6,0x80,local_18);
                      FUN_004ae7d0(piVar6,0x10,1);
                      FUN_004ae830(piVar6,0x14,1,0xffffffff);
                      FUN_004ae830(piVar6,0x78,1,uVar9);
                      FUN_004b6720((int)piVar6,uVar9);
                      puVar15 = local_c;
                    }
                    else {
                      iVar7 = FUN_004bcc60(local_14,(byte *)"cache_size");
                      piVar8 = param_1;
                      if (iVar7 == 0) {
                        iVar7 = FUN_004a6100(param_1);
                        if (iVar7 != 0) goto LAB_004a5a8c;
                        if (local_10 == (byte *)0x0) {
                          FUN_00489750(piVar8,"cache_size",*(int *)(local_c[3] + 0x50),
                                       *(int *)(local_c[3] + 0x50) >> 0x1f);
                          puVar15 = local_c;
                        }
                        else {
                          uVar9 = FUN_0048d2d0((char *)local_10);
                          puVar15 = local_c;
                          *(uint *)(local_c[3] + 0x50) = uVar9;
                          FUN_00491b30((undefined4 *)local_c[1],*(uint *)(local_c[3] + 0x50));
                        }
                      }
                      else {
                        iVar7 = FUN_004bcc60(local_14,(byte *)"temp_store");
                        if (iVar7 == 0) {
                          if (local_10 == (byte *)0x0) {
                            FUN_00489750(param_1,"temp_store",(uint)*(byte *)((int)local_8 + 0x37),0
                                        );
                            puVar15 = local_c;
                          }
                          else {
                            FUN_00471b70(param_1,local_10);
                            puVar15 = local_c;
                          }
                        }
                        else {
                          iVar7 = FUN_004bcc60(local_14,(byte *)"temp_store_directory");
                          pbVar12 = local_10;
                          if (iVar7 == 0) {
                            if (local_10 == (byte *)0x0) {
                              puVar15 = local_c;
                              if (DAT_00583e10 != (int *)0x0) {
                                FUN_004b8c50(piVar6,1);
                                FUN_004b8c10(piVar6,0,0,"temp_store_directory",(undefined *)0x0);
                                FUN_004ae8f0(piVar6,0x5e,0,1,0,DAT_00583e10,0);
                                FUN_004ae830(piVar6,0x10,1,1);
                                puVar15 = local_c;
                              }
                            }
                            else {
                              if ((*local_10 != 0) &&
                                 ((iVar7 = (**(code **)(*local_8 + 0x20))(), iVar7 != 0 ||
                                  (local_38 == (int *)0x0)))) {
LAB_004a4543:
                                FUN_004962b0(param_1,(byte *)"not a writable directory");
                                goto LAB_004a5a8c;
                              }
                              if (*(byte *)((int)local_8 + 0x37) < 2) {
                                FUN_0047e910(param_1);
                              }
                              FUN_00466dd0((int)DAT_00583e10);
                              if (*pbVar12 == 0) {
                                DAT_00583e10 = (int *)0x0;
                                puVar15 = local_c;
                              }
                              else {
                                DAT_00583e10 = (int *)FUN_004666d0(&DAT_0056de50);
                                puVar15 = local_c;
                              }
                            }
                          }
                          else {
                            iVar7 = FUN_004bcc60(local_14,(byte *)"data_store_directory");
                            pbVar12 = local_10;
                            if (iVar7 == 0) {
                              if (local_10 == (byte *)0x0) {
                                puVar15 = local_c;
                                if (DAT_00583e14 != (int *)0x0) {
                                  FUN_004b8c50(piVar6,1);
                                  FUN_004b8c10(piVar6,0,0,"data_store_directory",(undefined *)0x0);
                                  FUN_004ae8f0(piVar6,0x5e,0,1,0,DAT_00583e14,0);
                                  FUN_004ae830(piVar6,0x10,1,1);
                                  puVar15 = local_c;
                                }
                              }
                              else {
                                if ((*local_10 != 0) &&
                                   ((iVar7 = (**(code **)(*local_8 + 0x20))(), iVar7 != 0 ||
                                    (local_38 == (int *)0x0)))) goto LAB_004a4543;
                                FUN_00466dd0((int)DAT_00583e14);
                                if (*pbVar12 == 0) {
                                  DAT_00583e14 = (int *)0x0;
                                  puVar15 = local_c;
                                }
                                else {
                                  DAT_00583e14 = (int *)FUN_004666d0(&DAT_0056de50);
                                  puVar15 = local_c;
                                }
                              }
                            }
                            else {
                              iVar7 = FUN_004bcc60(local_14,(byte *)"synchronous");
                              piVar8 = param_1;
                              if (iVar7 == 0) {
                                iVar7 = FUN_004a6100(param_1);
                                if (iVar7 != 0) goto LAB_004a5a8c;
                                if (local_10 == (byte *)0x0) {
                                  iVar7 = *(byte *)((int)local_c + 9) - 1;
                                  FUN_00489750(piVar8,"synchronous",iVar7,iVar7 >> 0x1f);
                                  puVar15 = local_c;
                                }
                                else if (*(char *)((int)local_8 + 0x36) == '\0') {
                                  FUN_004962b0(piVar8,(byte *)
                                                  "Safety level may not be changed inside a transaction"
                                              );
                                  puVar15 = local_c;
                                }
                                else {
                                  uVar9 = FUN_0047da70(local_10,0,1);
                                  *(char *)((int)local_c + 9) = (char)uVar9 + '\x01';
                                  puVar15 = local_c;
                                }
                              }
                              else {
                                iVar7 = FUN_0047b5a0(param_1,local_14,local_10);
                                puVar15 = local_c;
                                if (iVar7 == 0) {
                                  iVar7 = FUN_004bcc60(local_14,(byte *)"table_info");
                                  if ((iVar7 == 0) && (local_10 != (byte *)0x0)) {
                                    iVar7 = FUN_004a6100(param_1);
                                    if (iVar7 != 0) goto LAB_004a5a8c;
                                    piVar21 = (int *)FUN_00499c30((int)local_8,local_10,pbVar17);
                                    puVar15 = local_c;
                                    local_24 = piVar21;
                                    if (piVar21 != (int *)0x0) {
                                      local_28 = (int *)0x0;
                                      FUN_004b8c50(piVar6,6);
                                      piVar8 = param_1;
                                      param_1[0x13] = 6;
                                      FUN_004b8c10(piVar6,0,0,&DAT_00570180,(undefined *)0x0);
                                      FUN_004b8c10(piVar6,1,0,&DAT_00570184,(undefined *)0x0);
                                      FUN_004b8c10(piVar6,2,0,&DAT_0057018c,(undefined *)0x0);
                                      FUN_004b8c10(piVar6,3,0,"notnull",(undefined *)0x0);
                                      FUN_004b8c10(piVar6,4,0,"dflt_value",(undefined *)0x0);
                                      FUN_004b8c10(piVar6,5,0,&DAT_005701a8,(undefined *)0x0);
                                      FUN_004b9570(piVar8,(int)piVar21);
                                      puVar10 = (undefined4 *)piVar21[1];
                                      iVar7 = 0;
                                      puVar15 = local_c;
                                      if (0 < *(short *)((int)local_24 + 0x26)) {
                                        do {
                                          if ((*(byte *)((int)puVar10 + 0x16) & 2) == 0) {
                                            FUN_004ae830(piVar6,7,iVar7 - (int)local_28,1);
                                            FUN_004ae8f0(piVar6,0x5e,0,2,0,(int *)*puVar10,0);
                                            piVar21 = (int *)&DAT_0055b524;
                                            if ((int *)puVar10[3] != (int *)0x0) {
                                              piVar21 = (int *)puVar10[3];
                                            }
                                            FUN_004ae8f0(piVar6,0x5e,0,3,0,piVar21,0);
                                            FUN_004ae830(piVar6,7,(uint)(*(char *)(puVar10 + 5) !=
                                                                        '\0'),4);
                                            if ((int *)puVar10[2] == (int *)0x0) {
                                              FUN_004ae830(piVar6,10,0,5);
                                            }
                                            else {
                                              FUN_004ae8f0(piVar6,0x5e,0,5,0,(int *)puVar10[2],0);
                                            }
                                            FUN_004ae830(piVar6,7,*(ushort *)((int)puVar10 + 0x16) &
                                                                  1,6);
                                            FUN_004ae830(piVar6,0x10,1,6);
                                          }
                                          else {
                                            local_28 = (int *)((int)local_28 + 1);
                                          }
                                          iVar7 = iVar7 + 1;
                                          puVar10 = puVar10 + 6;
                                          puVar15 = local_c;
                                        } while (iVar7 < *(short *)((int)local_24 + 0x26));
                                      }
                                    }
                                  }
                                  else {
                                    iVar7 = FUN_004bcc60(local_14,(byte *)"index_info");
                                    if ((iVar7 == 0) && (local_10 != (byte *)0x0)) {
                                      iVar7 = FUN_004a6100(param_1);
                                      if (iVar7 != 0) goto LAB_004a5a8c;
                                      puVar10 = (undefined4 *)
                                                FUN_00499af0((int)local_8,local_10,pbVar17);
                                      puVar15 = local_c;
                                      local_34 = puVar10;
                                      if (puVar10 != (undefined4 *)0x0) {
                                        local_38 = (int *)puVar10[3];
                                        FUN_004b8c50(piVar6,3);
                                        param_1[0x13] = 3;
                                        FUN_004b8c10(piVar6,0,0,"seqno",(undefined *)0x0);
                                        FUN_004b8c10(piVar6,1,0,&DAT_00570180,(undefined *)0x0);
                                        FUN_004b8c10(piVar6,2,0,&DAT_00570184,(undefined *)0x0);
                                        puVar15 = local_c;
                                        if (0 < (int)puVar10[9]) {
                                          iVar7 = 0;
                                          do {
                                            iVar18 = *(int *)(puVar10[1] + iVar7 * 4);
                                            FUN_004ae830(piVar6,7,iVar7,1);
                                            FUN_004ae830(piVar6,7,iVar18,2);
                                            FUN_004ae8f0(piVar6,0x5e,0,3,0,
                                                         *(int **)(local_38[1] + iVar18 * 0x18),0);
                                            FUN_004ae830(piVar6,0x10,1,3);
                                            iVar7 = iVar7 + 1;
                                            puVar15 = local_c;
                                            puVar10 = local_34;
                                          } while (iVar7 < (int)local_34[9]);
                                        }
                                      }
                                    }
                                    else {
                                      iVar7 = FUN_004bcc60(local_14,(byte *)"index_list");
                                      piVar8 = param_1;
                                      if ((iVar7 == 0) && (local_10 != (byte *)0x0)) {
                                        iVar7 = FUN_004a6100(param_1);
                                        if (iVar7 != 0) goto LAB_004a5a8c;
                                        iVar7 = FUN_00499c30((int)local_8,local_10,pbVar17);
                                        puVar15 = local_c;
                                        if (iVar7 != 0) {
                                          piVar21 = FUN_0049d4d0(piVar8);
                                          puVar10 = *(undefined4 **)(iVar7 + 8);
                                          puVar15 = local_c;
                                          if (puVar10 != (undefined4 *)0x0) {
                                            iVar7 = 0;
                                            FUN_004b8c50(piVar21,3);
                                            param_1[0x13] = 3;
                                            FUN_004b8c10(piVar21,0,0,&DAT_005701cc,(undefined *)0x0)
                                            ;
                                            FUN_004b8c10(piVar21,1,0,&DAT_00570184,(undefined *)0x0)
                                            ;
                                            FUN_004b8c10(piVar21,2,0,"unique",(undefined *)0x0);
                                            do {
                                              FUN_004ae830(piVar21,7,iVar7,1);
                                              FUN_004ae8f0(piVar21,0x5e,0,2,0,(int *)*puVar10,0);
                                              FUN_004ae830(piVar21,7,
                                                           (uint)(*(char *)(puVar10 + 0xb) != '\0'),
                                                           3);
                                              FUN_004ae830(piVar21,0x10,1,3);
                                              puVar10 = (undefined4 *)puVar10[5];
                                              iVar7 = iVar7 + 1;
                                              puVar15 = local_c;
                                            } while (puVar10 != (undefined4 *)0x0);
                                          }
                                        }
                                      }
                                      else {
                                        iVar7 = FUN_004bcc60(local_14,(byte *)"database_list");
                                        piVar8 = param_1;
                                        if (iVar7 == 0) {
                                          iVar7 = FUN_004a6100(param_1);
                                          if (iVar7 != 0) goto LAB_004a5a8c;
                                          FUN_004b8c50(piVar6,3);
                                          piVar8[0x13] = 3;
                                          FUN_004b8c10(piVar6,0,0,&DAT_005701cc,(undefined *)0x0);
                                          FUN_004b8c10(piVar6,1,0,&DAT_00570184,(undefined *)0x0);
                                          FUN_004b8c10(piVar6,2,0,&DAT_0056ffa0,(undefined *)0x0);
                                          iVar7 = 0;
                                          puVar15 = local_c;
                                          if (0 < local_8[5]) {
                                            iVar18 = 0;
                                            do {
                                              if (*(int *)(iVar18 + 4 + local_8[4]) != 0) {
                                                FUN_004ae830(piVar6,7,iVar7,1);
                                                FUN_004ae8f0(piVar6,0x5e,0,2,0,
                                                             *(int **)(iVar18 + local_8[4]),0);
                                                sVar24 = 0;
                                                piVar21 = (int *)FUN_0048fe50(*(int *)(iVar18 + 4 +
                                                                                      local_8[4]));
                                                FUN_004ae8f0(piVar6,0x5e,0,3,0,piVar21,sVar24);
                                                FUN_004ae830(piVar6,0x10,1,3);
                                              }
                                              iVar7 = iVar7 + 1;
                                              iVar18 = iVar18 + 0x10;
                                              puVar15 = local_c;
                                            } while (iVar7 < local_8[5]);
                                          }
                                        }
                                        else {
                                          piVar8 = (int *)FUN_004bcc60(local_14,(byte *)
                                                  "collation_list");
                                          if (piVar8 == (int *)0x0) {
                                            local_28 = piVar8;
                                            FUN_004b8c50(piVar6,2);
                                            param_1[0x13] = 2;
                                            FUN_004b8c10(piVar6,0,0,&DAT_005701cc,(undefined *)0x0);
                                            FUN_004b8c10(piVar6,1,0,&DAT_00570184,(undefined *)0x0);
                                            for (puVar10 = (undefined4 *)local_8[0x69];
                                                puVar15 = local_c, puVar10 != (undefined4 *)0x0;
                                                puVar10 = (undefined4 *)*puVar10) {
                                              puVar15 = (undefined4 *)puVar10[2];
                                              FUN_004ae830(piVar6,7,local_28,1);
                                              local_28 = (int *)((int)local_28 + 1);
                                              FUN_004ae8f0(piVar6,0x5e,0,2,0,(int *)*puVar15,0);
                                              FUN_004ae830(piVar6,0x10,1,2);
                                            }
                                          }
                                          else {
                                            iVar7 = FUN_004bcc60(local_14,(byte *)"foreign_key_list"
                                                                );
                                            pbVar12 = local_14;
                                            piVar8 = param_1;
                                            if ((iVar7 == 0) && (local_10 != (byte *)0x0)) {
                                              iVar7 = FUN_004a6100(param_1);
                                              if (iVar7 != 0) goto LAB_004a5a8c;
                                              piVar21 = (int *)FUN_00499c30((int)local_8,local_10,
                                                                            pbVar17);
                                              puVar15 = local_c;
                                              local_38 = piVar21;
                                              if (piVar21 != (int *)0x0) {
                                                piVar8 = FUN_0049d4d0(piVar8);
                                                iVar7 = piVar21[4];
                                                puVar15 = local_c;
                                                local_20 = iVar7;
                                                local_18 = piVar8;
                                                if (iVar7 != 0) {
                                                  local_24 = (int *)0x0;
                                                  FUN_004b8c50(piVar8,8);
                                                  param_1[0x13] = 8;
                                                  FUN_004b8c10(piVar8,0,0,&DAT_0057020c,
                                                               (undefined *)0x0);
                                                  FUN_004b8c10(piVar8,1,0,&DAT_005701cc,
                                                               (undefined *)0x0);
                                                  FUN_004b8c10(piVar8,2,0,"table",(undefined *)0x0);
                                                  FUN_004b8c10(piVar8,3,0,&DAT_0056cd58,
                                                               (undefined *)0x0);
                                                  FUN_004b8c10(piVar8,4,0,&DAT_00570210,
                                                               (undefined *)0x0);
                                                  FUN_004b8c10(piVar8,5,0,"on_update",
                                                               (undefined *)0x0);
                                                  FUN_004b8c10(piVar8,6,0,"on_delete",
                                                               (undefined *)0x0);
                                                  FUN_004b8c10(piVar8,7,0,"match",(undefined *)0x0);
                                                  piVar21 = (int *)0x0;
                                                  do {
                                                    param_1 = (int *)0x0;
                                                    if (0 < *(int *)(iVar7 + 0x14)) {
                                                      local_28 = (int *)(iVar7 + 0x24);
                                                      do {
                                                        piVar21 = (int *)local_28[1];
                                                        piVar6 = (int *)FUN_0046b630(*(undefined1 *)
                                                                                      (iVar7 + 0x19)
                                                                                    );
                                                        piVar11 = (int *)FUN_0046b630(*(undefined1 *
                                                                                       )(iVar7 + 
                                                  0x1a));
                                                  FUN_004ae830(local_18,7,local_24,1);
                                                  FUN_004ae830(local_18,7,param_1,2);
                                                  FUN_004ae8f0(local_18,0x5e,0,3,0,
                                                               *(int **)(local_20 + 8),0);
                                                  FUN_004ae8f0(local_18,0x5e,0,4,0,
                                                               *(int **)(local_38[1] +
                                                                        *local_28 * 0x18),0);
                                                  piVar8 = local_18;
                                                  uVar3 = 10;
                                                  if (piVar21 != (int *)0x0) {
                                                    uVar3 = 0x5e;
                                                  }
                                                  FUN_004ae8f0(local_18,uVar3,0,5,0,piVar21,0);
                                                  FUN_004ae8f0(piVar8,0x5e,0,6,0,piVar11,0);
                                                  FUN_004ae8f0(piVar8,0x5e,0,7,0,piVar6,0);
                                                  FUN_004ae8f0(piVar8,0x5e,0,8,0,
                                                               (int *)&DAT_00570234,0);
                                                  FUN_004ae830(piVar8,0x10,1,8);
                                                  param_1 = (int *)((int)param_1 + 1);
                                                  local_28 = local_28 + 2;
                                                  piVar21 = local_24;
                                                  iVar7 = local_20;
                                                  } while ((int)param_1 < *(int *)(local_20 + 0x14))
                                                  ;
                                                  }
                                                  iVar7 = *(int *)(iVar7 + 4);
                                                  piVar21 = (int *)((int)piVar21 + 1);
                                                  local_24 = piVar21;
                                                  local_20 = iVar7;
                                                  } while (iVar7 != 0);
                                                  local_20 = 0;
                                                  puVar15 = local_c;
                                                }
                                              }
                                            }
                                            else {
                                              iVar7 = FUN_004bcc60(local_14,(byte *)
                                                  "case_sensitive_like");
                                              if (iVar7 == 0) {
                                                puVar15 = local_c;
                                                if (local_10 != (byte *)0x0) {
                                                  bVar2 = FUN_0049c950(local_10,0);
                                                  FUN_004a6660((int)local_8,(uint)bVar2);
                                                  puVar15 = local_c;
                                                }
                                              }
                                              else {
                                                iVar7 = FUN_004bcc60(pbVar12,(byte *)
                                                  "integrity_check");
                                                if ((iVar7 == 0) ||
                                                   (iVar7 = FUN_004bcc60(pbVar12,(byte *)
                                                  "quick_check"), iVar7 == 0)) {
                                                  piVar8 = param_1;
                                                  local_30 = (int *)(uint)((&DAT_00569620)
                                                                           [*local_14] == 'q');
                                                  if (*piVar21 == 0) {
                                                    local_18 = (int *)0xffffffff;
                                                  }
                                                  iVar7 = FUN_004a6100(param_1);
                                                  if (iVar7 != 0) goto LAB_004a5a8c;
                                                  piVar8[0x13] = 6;
                                                  FUN_004b8c50(piVar6,1);
                                                  FUN_004b8c10(piVar6,0,0,"integrity_check",
                                                               (undefined *)0x0);
                                                  local_38 = (int *)0x64;
                                                  local_2c = (int *)0x64;
                                                  if ((local_10 != (byte *)0x0) &&
                                                     (FUN_0049ca30((char *)local_10,
                                                                   (uint *)&local_2c),
                                                     local_38 = local_2c, (int)local_2c < 1)) {
                                                    local_38 = (int *)0x64;
                                                  }
                                                  piVar21 = local_38;
                                                  FUN_004ae830(piVar6,7,local_38,1);
                                                  local_24 = (int *)0x0;
                                                  if (0 < local_8[5]) {
                                                    local_28 = (int *)0x0;
                                                    piVar16 = local_8;
                                                    piVar11 = local_18;
                                                    do {
                                                      iVar7 = 0;
                                                      if (((int)piVar11 < 0) ||
                                                         (local_24 == piVar11)) {
                                                        FUN_00493400(piVar8,(int)local_24);
                                                        uVar9 = FUN_004ae7d0(piVar6,0x78,1);
                                                        FUN_004ae830(piVar6,6,0,0);
                                                        FUN_004b6720((int)piVar6,uVar9);
                                                        iVar18 = *(int *)((int)local_28 +
                                                                         local_8[4] + 0xc);
                                                        local_34 = (undefined4 *)(iVar18 + 8);
                                                        for (local_2c = *(int **)(iVar18 + 0x10);
                                                            local_2c != (int *)0x0;
                                                            local_2c = (int *)*local_2c) {
                                                          iVar18 = local_2c[2];
                                                          FUN_004ae830(piVar6,7,*(undefined4 *)
                                                                                 (iVar18 + 0x20),
                                                                       iVar7 + 2);
                                                          iVar14 = iVar7;
                                                          for (iVar18 = *(int *)(iVar18 + 8);
                                                              iVar7 = iVar14 + 1, iVar18 != 0;
                                                              iVar18 = *(int *)(iVar18 + 0x14)) {
                                                            FUN_004ae830(piVar6,7,*(undefined4 *)
                                                                                   (iVar18 + 0x28),
                                                                         iVar14 + 3);
                                                            iVar14 = iVar7;
                                                          }
                                                        }
                                                        if (param_1[0x13] < iVar7 + 4) {
                                                          param_1[0x13] = iVar7 + 4;
                                                        }
                                                        FUN_004ae890(piVar6,0x6f,2,iVar7,1);
                                                        FUN_004aee30((int)piVar6,(char)local_24);
                                                        uVar9 = FUN_004ae7d0(piVar6,0x49,2);
                                                        sVar24 = 0xffffffff;
                                                        piVar21 = (int *)FUN_004a02d0((int)local_8,
                                                                                      (byte *)
                                                  "*** in database %s ***\n");
                                                  FUN_004ae8f0(piVar6,0x5e,0,3,0,piVar21,sVar24);
                                                  FUN_004ae830(piVar6,0xd,2,4);
                                                  FUN_004ae890(piVar6,0x5b,4,3,2);
                                                  FUN_004ae830(piVar6,0x10,2,1);
                                                  FUN_004b6720((int)piVar6,uVar9);
                                                  local_34 = *(undefined4 **)((int)local_34 + 8);
                                                  piVar8 = param_1;
                                                  piVar21 = local_30;
                                                  piVar11 = local_18;
                                                  piVar16 = local_8;
                                                  while ((param_1 = piVar8, local_18 = piVar11,
                                                         local_8 = piVar16,
                                                         local_34 != (undefined4 *)0x0 &&
                                                         (piVar21 == (int *)0x0))) {
                                                    piVar8 = (int *)local_34[2];
                                                    piVar21 = (int *)0x0;
                                                    local_44 = piVar8;
                                                    if (piVar8[2] != 0) {
                                                      uVar9 = FUN_004ae7d0(piVar6,0x78,1);
                                                      FUN_004ae830(piVar6,6,0,0);
                                                      FUN_004b6720((int)piVar6,uVar9);
                                                      FUN_004a1030(param_1,piVar8,1,0x27);
                                                      FUN_004ae830(piVar6,7,0,2);
                                                      uVar9 = FUN_004ae830(piVar6,0x48,1,0);
                                                      local_40 = uVar9;
                                                      FUN_004ae830(piVar6,0x14,2,1);
                                                      piVar21 = (int *)piVar8[2];
                                                      local_2c = piVar21;
                                                      if (piVar21 != (int *)0x0) {
                                                        local_1c = 2;
                                                        do {
                                                          iVar7 = local_1c;
                                                          local_2c = piVar21;
                                                          iVar18 = FUN_0049c270(param_1,piVar21,1,3,
                                                                                0);
                                                          local_3c = FUN_004ae960(piVar6,0x34,iVar7,
                                                                                  0,iVar18,(int *)(
                                                  piVar21[9] + 1));
                                                  local_20 = FUN_004aea10(piVar6,0xb,0x5698ec);
                                                  iVar18 = piVar6[1];
                                                  iVar14 = *piVar6;
                                                  iVar7 = local_20 + 1;
                                                  if ((iVar18 == 0) ||
                                                     (*(char *)(iVar14 + 0x38) != '\0')) {
                                                    FUN_0047bc80(iVar14,0xfffffffe,(int *)"rowid ");
                                                  }
                                                  else {
                                                    if (iVar7 < 0) {
                                                      iVar7 = piVar6[7] + -1;
                                                    }
                                                    iVar1 = iVar18 + iVar7 * 0x14;
                                                    FUN_0047bc80(iVar14,(int)*(char *)(iVar1 + 1),
                                                                 *(int **)(iVar18 + 0x10 +
                                                                          iVar7 * 0x14));
                                                    *(char **)(iVar1 + 0x10) = "rowid ";
                                                    *(undefined1 *)(iVar1 + 1) = 0xfe;
                                                  }
                                                  iVar7 = piVar6[1];
                                                  iVar18 = *piVar6;
                                                  iVar14 = local_20 + 3;
                                                  if ((iVar7 == 0) ||
                                                     (*(char *)(iVar18 + 0x38) != '\0')) {
                                                    FUN_0047bc80(iVar18,0xfffffffe,
                                                                 (int *)" missing from index ");
                                                  }
                                                  else {
                                                    if (iVar14 < 0) {
                                                      iVar14 = piVar6[7] + -1;
                                                    }
                                                    iVar1 = iVar7 + iVar14 * 0x14;
                                                    FUN_0047bc80(iVar18,(int)*(char *)(iVar1 + 1),
                                                                 *(int **)(iVar7 + 0x10 +
                                                                          iVar14 * 0x14));
                                                    *(char **)(iVar1 + 0x10) =
                                                         " missing from index ";
                                                    *(undefined1 *)(iVar1 + 1) = 0xfe;
                                                  }
                                                  iVar7 = piVar6[1];
                                                  piVar21 = (int *)*piVar21;
                                                  iVar18 = *piVar6;
                                                  iVar14 = local_20 + 4;
                                                  if ((iVar7 == 0) ||
                                                     (*(char *)(iVar18 + 0x38) != '\0')) {
                                                    FUN_0047bc80(iVar18,0,piVar21);
                                                  }
                                                  else {
                                                    if (iVar14 < 0) {
                                                      iVar14 = piVar6[7] + -1;
                                                    }
                                                    iVar1 = iVar7 + iVar14 * 0x14;
                                                    FUN_0047bc80(iVar18,(int)*(char *)(iVar1 + 1),
                                                                 *(int **)(iVar7 + 0x10 +
                                                                          iVar14 * 0x14));
                                                    *(undefined4 *)(iVar1 + 0x10) = 0;
                                                    if (piVar21 == (int *)0x0) {
                                                      *(undefined4 *)(iVar1 + 0x10) = 0;
                                                      *(undefined1 *)(iVar1 + 1) = 0;
                                                    }
                                                    else {
                                                      uVar9 = FUN_004aa9b0((char *)piVar21);
                                                      puVar15 = FUN_00494e00(*piVar6,piVar21,uVar9);
                                                      *(undefined4 **)(iVar1 + 0x10) = puVar15;
                                                      *(undefined1 *)(iVar1 + 1) = 0xff;
                                                    }
                                                  }
                                                  FUN_004b6720((int)piVar6,local_20 + 9);
                                                  FUN_004b6720((int)piVar6,local_3c);
                                                  piVar21 = (int *)local_2c[5];
                                                  local_1c = local_1c + 1;
                                                  } while (piVar21 != (int *)0x0);
                                                  local_2c = (int *)0x0;
                                                  uVar9 = local_40;
                                                  }
                                                  FUN_004ae830(piVar6,0x5f,1,uVar9 + 1);
                                                  FUN_004b6720((int)piVar6,uVar9);
                                                  local_2c = (int *)local_44[2];
                                                  piVar21 = local_30;
                                                  if (local_2c != (int *)0x0) {
                                                    local_20 = 2;
                                                    do {
                                                      uVar9 = FUN_004ae7d0(piVar6,0x78,1);
                                                      FUN_004ae830(piVar6,6,0,0);
                                                      FUN_004b6720((int)piVar6,uVar9);
                                                      iVar7 = FUN_004aea10(piVar6,10,0x569984);
                                                      local_1c = iVar7;
                                                      FUN_004aec60((int)piVar6,iVar7 + 1U,local_20);
                                                      FUN_004aec80((int)piVar6,iVar7 + 1U,iVar7 + 4U
                                                                  );
                                                      uVar9 = local_1c + 3;
                                                      FUN_004aec60((int)piVar6,uVar9,local_20);
                                                      FUN_004aec80((int)piVar6,uVar9,local_1c + 2);
                                                      FUN_004b6720((int)piVar6,iVar7 + 4U);
                                                      iVar7 = piVar6[1];
                                                      iVar18 = *piVar6;
                                                      iVar14 = local_1c + 6;
                                                      if ((iVar7 == 0) ||
                                                         (*(char *)(iVar18 + 0x38) != '\0')) {
                                                        FUN_0047bc80(iVar18,0xfffffffe,
                                                                     (int *)
                                                  "wrong # of entries in index ");
                                                  }
                                                  else {
                                                    if (iVar14 < 0) {
                                                      iVar14 = piVar6[7] + -1;
                                                    }
                                                    iVar1 = iVar7 + iVar14 * 0x14;
                                                    FUN_0047bc80(iVar18,(int)*(char *)(iVar1 + 1),
                                                                 *(int **)(iVar7 + 0x10 +
                                                                          iVar14 * 0x14));
                                                    *(char **)(iVar1 + 0x10) =
                                                         "wrong # of entries in index ";
                                                    *(undefined1 *)(iVar1 + 1) = 0xfe;
                                                  }
                                                  iVar7 = piVar6[1];
                                                  piVar21 = (int *)*local_2c;
                                                  iVar18 = *piVar6;
                                                  iVar14 = local_1c + 7;
                                                  if ((iVar7 == 0) ||
                                                     (*(char *)(iVar18 + 0x38) != '\0')) {
                                                    FUN_0047bc80(iVar18,0,piVar21);
                                                  }
                                                  else {
                                                    if (iVar14 < 0) {
                                                      iVar14 = piVar6[7] + -1;
                                                    }
                                                    iVar1 = iVar7 + iVar14 * 0x14;
                                                    FUN_0047bc80(iVar18,(int)*(char *)(iVar1 + 1),
                                                                 *(int **)(iVar7 + 0x10 +
                                                                          iVar14 * 0x14));
                                                    *(undefined4 *)(iVar1 + 0x10) = 0;
                                                    if (piVar21 == (int *)0x0) {
                                                      *(undefined4 *)(iVar1 + 0x10) = 0;
                                                      *(undefined1 *)(iVar1 + 1) = 0;
                                                    }
                                                    else {
                                                      uVar9 = FUN_004aa9b0((char *)piVar21);
                                                      puVar15 = FUN_00494e00(*piVar6,piVar21,uVar9);
                                                      *(undefined4 **)(iVar1 + 0x10) = puVar15;
                                                      *(undefined1 *)(iVar1 + 1) = 0xff;
                                                    }
                                                  }
                                                  local_20 = local_20 + 1;
                                                  local_2c = (int *)local_2c[5];
                                                  piVar21 = local_30;
                                                  } while (local_2c != (int *)0x0);
                                                  }
                                                  }
                                                  local_34 = (undefined4 *)*local_34;
                                                  piVar8 = param_1;
                                                  piVar11 = local_18;
                                                  piVar16 = local_8;
                                                  }
                                                  }
                                                  local_28 = local_28 + 4;
                                                  local_24 = (int *)((int)local_24 + 1);
                                                  piVar21 = local_38;
                                                  } while ((int)local_24 < piVar16[5]);
                                                  }
                                                  uVar9 = FUN_004aea10(piVar6,4,0x5698dc);
                                                  FUN_004aec80((int)piVar6,uVar9,-(int)piVar21);
                                                  FUN_004b6720((int)piVar6,uVar9 + 1);
                                                  iVar7 = piVar6[1];
                                                  iVar18 = *piVar6;
                                                  iVar14 = uVar9 + 2;
                                                  if ((iVar7 == 0) ||
                                                     (*(char *)(iVar18 + 0x38) != '\0')) {
                                                    FUN_0047bc80(iVar18,0xfffffffe,
                                                                 (int *)&DAT_005702c4);
                                                    puVar15 = local_c;
                                                  }
                                                  else {
                                                    if (iVar14 < 0) {
                                                      iVar14 = piVar6[7] + -1;
                                                    }
                                                    iVar1 = iVar7 + iVar14 * 0x14;
                                                    FUN_0047bc80(iVar18,(int)*(char *)(iVar1 + 1),
                                                                 *(int **)(iVar7 + 0x10 +
                                                                          iVar14 * 0x14));
                                                    *(undefined **)(iVar1 + 0x10) = &DAT_005702c4;
                                                    *(undefined1 *)(iVar1 + 1) = 0xfe;
                                                    puVar15 = local_c;
                                                  }
                                                }
                                                else {
                                                  iVar7 = FUN_004bcc60(pbVar12,(byte *)"encoding");
                                                  pbVar17 = local_10;
                                                  piVar8 = param_1;
                                                  if (iVar7 == 0) {
                                                    if (local_10 == (byte *)0x0) {
                                                      iVar7 = FUN_004a6100(param_1);
                                                      if (iVar7 != 0) goto LAB_004a5a8c;
                                                      FUN_004b8c50(piVar6,1);
                                                      FUN_004b8c10(piVar6,0,0,"encoding",
                                                                   (undefined *)0x0);
                                                      FUN_004ae830(piVar6,0x5e,0,1);
                                                      iVar7 = piVar6[1];
                                                      iVar18 = *piVar6;
                                                      piVar21 = (int *)(&PTR_DAT_005699b0)
                                                                       [(uint)*(byte *)(*(int *)(*(
                                                  int *)(*piVar8 + 0x10) + 0xc) + 0x4d) * 2];
                                                  if ((iVar7 == 0) ||
                                                     (*(char *)(iVar18 + 0x38) != '\0')) {
                                                    FUN_0047bc80(iVar18,0xfffffffe,piVar21);
                                                    FUN_004ae830(piVar6,0x10,1,1);
                                                    puVar15 = local_c;
                                                  }
                                                  else {
                                                    iVar14 = iVar7 + (piVar6[7] + -1) * 0x14;
                                                    FUN_0047bc80(iVar18,(int)*(char *)(iVar14 + 1),
                                                                 *(int **)(iVar7 + 0x10 +
                                                                          (piVar6[7] + -1) * 0x14));
                                                    *(undefined4 *)(iVar14 + 0x10) = 0;
                                                    if (piVar21 == (int *)0x0) {
                                                      *(undefined4 *)(iVar14 + 0x10) = 0;
                                                      *(undefined1 *)(iVar14 + 1) = 0;
                                                      FUN_004ae830(piVar6,0x10,1,1);
                                                      puVar15 = local_c;
                                                    }
                                                    else {
                                                      *(int **)(iVar14 + 0x10) = piVar21;
                                                      *(undefined1 *)(iVar14 + 1) = 0xfe;
                                                      FUN_004ae830(piVar6,0x10,1,1);
                                                      puVar15 = local_c;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = *(ushort *)
                                                             (*(int *)(local_8[4] + 0xc) + 0x4e);
                                                    if (((uVar5 & 1) == 0) ||
                                                       (puVar15 = local_c, (uVar5 & 4) != 0)) {
                                                      pbVar12 = &DAT_0056cf6c;
                                                      ppuVar19 = &PTR_DAT_005699b0;
                                                      do {
                                                        iVar7 = FUN_004bcc60(pbVar17,pbVar12);
                                                        if (iVar7 == 0) {
                                                          cVar4 = *(char *)(ppuVar19 + 1);
                                                          if (cVar4 == '\0') {
                                                            cVar4 = '\x02';
                                                          }
                                                          *(char *)(*(int *)(*(int *)(*param_1 +
                                                                                     0x10) + 0xc) +
                                                                   0x4d) = cVar4;
                                                          puVar15 = local_c;
                                                          if (*ppuVar19 != (undefined *)0x0)
                                                          goto LAB_004a5a60;
                                                          break;
                                                        }
                                                        pbVar12 = ppuVar19[2];
                                                        ppuVar19 = ppuVar19 + 2;
                                                      } while (pbVar12 != (byte *)0x0);
                                                      FUN_004962b0(param_1,(byte *)
                                                  "unsupported encoding: %s");
                                                  puVar15 = local_c;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = FUN_004bcc60(pbVar12,(byte *)
                                                  "schema_version");
                                                  if (((iVar7 == 0) ||
                                                      (iVar7 = FUN_004bcc60(pbVar12,(byte *)
                                                  "user_version"), iVar7 == 0)) ||
                                                  (iVar7 = FUN_004bcc60(pbVar12,(byte *)
                                                  "freelist_count"), iVar7 == 0)) {
                                                    FUN_004b9540(piVar6,(int)local_18);
                                                    switch(*pbVar12) {
                                                    case 0x46:
                                                    case 0x66:
                                                      iVar7 = 0;
                                                      break;
                                                    default:
                                                      iVar7 = 6;
                                                      break;
                                                    case 0x53:
                                                    case 0x73:
                                                      iVar7 = 1;
                                                    }
                                                    if ((local_10 == (byte *)0x0) || (iVar7 == 0)) {
                                                      uVar9 = FUN_004aea10(piVar6,3,0x569a20);
                                                      FUN_004aec60((int)piVar6,uVar9,local_18);
                                                      FUN_004aec60((int)piVar6,uVar9 + 1,local_18);
                                                      FUN_004aeca0((int)piVar6,uVar9 + 1,iVar7);
                                                      FUN_004b8c50(piVar6,1);
                                                      FUN_004b8c10(piVar6,0,0,local_14,
                                                                   (undefined *)0xffffffff);
                                                      puVar15 = local_c;
                                                    }
                                                    else {
                                                      uVar9 = FUN_004aea10(piVar6,3,0x569a10);
                                                      FUN_004aec60((int)piVar6,uVar9,local_18);
                                                      uVar13 = FUN_0048d2d0((char *)local_10);
                                                      FUN_004aec60((int)piVar6,uVar9 + 1,uVar13);
                                                      FUN_004aec60((int)piVar6,uVar9 + 2,local_18);
                                                      FUN_004aec80((int)piVar6,uVar9 + 2,iVar7);
                                                      puVar15 = local_c;
                                                    }
                                                  }
                                                  else {
                                                    iVar7 = FUN_004bcc60(pbVar12,(byte *)
                                                  "compile_options");
                                                  if (iVar7 == 0) {
                                                    uVar9 = 0;
                                                    FUN_004b8c50(piVar6,1);
                                                    param_1[0x13] = 1;
                                                    FUN_004b8c10(piVar6,0,0,"compile_option",
                                                                 (undefined *)0x0);
                                                    piVar21 = (int *)FUN_00462e80(0);
                                                    while (puVar15 = local_c, piVar21 != (int *)0x0)
                                                    {
                                                      uVar9 = uVar9 + 1;
                                                      FUN_004ae8f0(piVar6,0x5e,0,1,0,piVar21,0);
                                                      FUN_004ae830(piVar6,0x10,1,1);
                                                      piVar21 = (int *)FUN_00462e80(uVar9);
                                                    }
                                                  }
                                                  else {
                                                    iVar7 = FUN_004bcc60(pbVar12,(byte *)
                                                  "wal_checkpoint");
                                                  pbVar17 = local_14;
                                                  if (iVar7 == 0) {
                                                    piVar8 = (int *)0xa;
                                                    if (*piVar21 != 0) {
                                                      piVar8 = local_18;
                                                    }
                                                    uVar22 = 0;
                                                    if (local_10 != (byte *)0x0) {
                                                      iVar7 = FUN_004bcc60(local_10,&DAT_0056ff8c);
                                                      if (iVar7 == 0) {
                                                        uVar22 = 1;
                                                      }
                                                      else {
                                                        iVar7 = FUN_004bcc60(local_10,(byte *)
                                                  "restart");
                                                  if (iVar7 == 0) {
                                                    uVar22 = 2;
                                                  }
                                                  }
                                                  }
                                                  iVar7 = FUN_004a6100(param_1);
                                                  if (iVar7 != 0) goto LAB_004a5a8c;
                                                  FUN_004b8c50(piVar6,3);
                                                  param_1[0x13] = 3;
                                                  FUN_004b8c10(piVar6,0,0,&DAT_00570358,
                                                               (undefined *)0x0);
                                                  FUN_004b8c10(piVar6,1,0,&DAT_00570360,
                                                               (undefined *)0x0);
                                                  FUN_004b8c10(piVar6,2,0,"checkpointed",
                                                               (undefined *)0x0);
                                                  FUN_004ae890(piVar6,0x7d,piVar8,uVar22,1);
                                                  FUN_004ae830(piVar6,0x10,1,3);
                                                  puVar15 = local_c;
                                                  }
                                                  else {
                                                    iVar7 = FUN_004bcc60(local_14,(byte *)
                                                  "wal_autocheckpoint");
                                                  if (iVar7 == 0) {
                                                    if (local_10 != (byte *)0x0) {
                                                      uVar9 = FUN_0048d2d0((char *)local_10);
                                                      FUN_00468600((int)local_8,uVar9);
                                                    }
                                                    if ((code *)local_8[0x30] == FUN_004ba730) {
                                                      iVar7 = local_8[0x31];
                                                    }
                                                    else {
                                                      iVar7 = 0;
                                                    }
                                                    FUN_00489750(param_1,"wal_autocheckpoint",iVar7,
                                                                 iVar7 >> 0x1f);
                                                    puVar15 = local_c;
                                                  }
                                                  else {
                                                    iVar7 = FUN_004bcc60(pbVar17,(byte *)
                                                  "shrink_memory");
                                                  if (iVar7 == 0) {
                                                    FUN_004bc720((int)local_8);
                                                    puVar15 = local_c;
                                                  }
                                                  else {
                                                    iVar7 = FUN_004bcc60(pbVar17,(byte *)
                                                  "busy_timeout");
                                                  puVar15 = local_c;
                                                  if (iVar7 == 0) {
                                                    if (local_10 != (byte *)0x0) {
                                                      uVar9 = FUN_0048d2d0((char *)local_10);
                                                      FUN_00466210((int)local_8,uVar9);
                                                    }
                                                    FUN_00489750(param_1,"timeout",local_8[0x77],
                                                                 local_8[0x77] >> 0x1f);
                                                    puVar15 = local_c;
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
  }
  else {
    if (local_58 != (int *)0x0) {
      FUN_004962b0(param_1,&DAT_0056de50);
      FUN_00466dd0((int)local_58);
    }
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = (int)local_38;
    puVar15 = local_c;
  }
LAB_004a5a60:
  if (*(char *)((int)local_8 + 0x36) != '\0') {
    FUN_00491ce0((undefined4 *)puVar15[1],(uint)*(byte *)((int)puVar15 + 9),
                 (uint)local_8[6] >> 0xd & 1,(uint)local_8[6] >> 0xe & 1);
  }
LAB_004a5a8c:
  FUN_00494b00((int)local_8,(undefined4 *)local_14);
  FUN_00494b00((int)local_8,(undefined4 *)local_10);
  return;
}


/* FUN_004a5af0 @ 004a5af0  kind=lib  attributed-by=lib-island  size=917 */

uint __cdecl
FUN_004a5af0(int param_1,void *param_2,size_t param_3,byte param_4,int param_5,undefined4 *param_6,
            int *param_7)

{
  int *piVar1;
  int *_Dst;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  size_t _Size;
  int iVar5;
  uint uVar6;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  _Dst = FUN_00494b90(param_1,0x230);
  if (_Dst == (int *)0x0) {
    uVar2 = 7;
  }
  else {
    memset(_Dst,0,0x230);
    _Dst[0x7c] = param_5;
    local_c = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      local_10 = 0;
      do {
        puVar3 = *(undefined4 **)(local_10 + 4 + *(int *)(param_1 + 0x10));
        if ((puVar3 != (undefined4 *)0x0) && (uVar2 = FUN_004919c0(puVar3), uVar2 != 0)) {
          FUN_004961f0(param_1,uVar2,(byte *)"database schema is locked: %s");
          goto LAB_004a5e39;
        }
        local_c = local_c + 1;
        local_10 = local_10 + 0x10;
      } while (local_c < *(int *)(param_1 + 0x14));
    }
    FUN_004ba070(param_1);
    *_Dst = param_1;
    _Dst[0x6e] = 0;
    _Dst[0x6f] = 0x3ff00000;
    if (((int)param_3 < 0) || ((param_3 != 0 && (*(char *)((int)param_2 + (param_3 - 1)) == '\0'))))
    {
      FUN_004a7140(_Dst,(int)param_2,(int *)&local_8);
    }
    else {
      if (*(int *)(param_1 + 0x54) < (int)param_3) {
        FUN_004961f0(param_1,0x12,(byte *)"statement too long");
        uVar2 = 0x12;
        if (*(char *)(param_1 + 0x38) != '\0') {
          FUN_004961f0(param_1,7,(byte *)0x0);
          *(undefined1 *)(param_1 + 0x38) = 0;
          uVar2 = 7;
        }
        uVar2 = *(uint *)(param_1 + 0x30) & uVar2;
        goto LAB_004a5e39;
      }
      if ((param_2 == (void *)0x0) ||
         (puVar3 = FUN_00494b90(param_1,param_3 + 1), puVar3 == (undefined4 *)0x0)) {
        _Dst[0x7e] = (int)param_2 + param_3;
      }
      else {
        memcpy(puVar3,param_2,param_3);
        *(undefined1 *)((int)puVar3 + param_3) = 0;
        FUN_004a7140(_Dst,(int)puVar3,(int *)&local_8);
        FUN_00494b00(param_1,puVar3);
        _Dst[0x7e] = (int)param_2 + (_Dst[0x7e] - (int)puVar3);
      }
    }
    if (*(char *)(param_1 + 0x38) != '\0') {
      _Dst[3] = 7;
    }
    if (_Dst[3] == 0x65) {
      _Dst[3] = 0;
    }
    if (*(char *)((int)_Dst + 0x11) != '\0') {
      FUN_00489d30(_Dst);
    }
    if (*(char *)(param_1 + 0x38) != '\0') {
      _Dst[3] = 7;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = _Dst[0x7e];
    }
    uVar2 = _Dst[3];
    if (((uVar2 == 0) && (piVar1 = (int *)_Dst[2], piVar1 != (int *)0x0)) &&
       ((char)_Dst[0x75] != '\0')) {
      if ((char)_Dst[0x75] == '\x02') {
        FUN_004b8c50(piVar1,4);
        uVar6 = 8;
        uVar4 = 0xc;
      }
      else {
        FUN_004b8c50(piVar1,8);
        uVar6 = 0;
        uVar4 = 8;
      }
      if (uVar6 < uVar4) {
        iVar5 = 0;
        do {
          if (*(char *)(*(int *)_Dst[2] + 0x38) == '\0') {
            FUN_004b79e0((int *)(((int *)_Dst[2])[4] + iVar5),(&PTR_DAT_0056a254)[uVar6],0xffffffff,
                         '\x01',(undefined *)0x0);
          }
          uVar6 = uVar6 + 1;
          iVar5 = iVar5 + 0x28;
        } while ((int)uVar6 < (int)uVar4);
      }
    }
    if (*(char *)(param_1 + 0x81) == '\0') {
      piVar1 = (int *)_Dst[2];
      _Size = _Dst[0x7e] - (int)param_2;
      if (piVar1 != (int *)0x0) {
        puVar3 = (undefined4 *)0x0;
        if ((param_2 != (void *)0x0) &&
           (puVar3 = FUN_00494b90(*piVar1,_Size + 1), puVar3 != (undefined4 *)0x0)) {
          memcpy(puVar3,param_2,_Size);
          *(undefined1 *)((int)puVar3 + _Size) = 0;
        }
        piVar1[0x26] = (int)puVar3;
        piVar1[0x18] = piVar1[0x18] ^ ((uint)param_4 << 9 ^ piVar1[0x18]) & 0x200;
      }
    }
    piVar1 = (int *)_Dst[2];
    if ((piVar1 == (int *)0x0) || ((uVar2 == 0 && (*(char *)(param_1 + 0x38) == '\0')))) {
      *param_6 = piVar1;
    }
    else {
      FUN_004b5e70(piVar1);
    }
    if (local_8 == (undefined4 *)0x0) {
      FUN_004961f0(param_1,uVar2,(byte *)0x0);
    }
    else {
      FUN_004961f0(param_1,uVar2,&DAT_0056de50);
      FUN_00494b00(param_1,local_8);
    }
    iVar5 = _Dst[0x8a];
    while (iVar5 != 0) {
      puVar3 = (undefined4 *)_Dst[0x8a];
      _Dst[0x8a] = puVar3[1];
      FUN_00494b00(param_1,puVar3);
      iVar5 = _Dst[0x8a];
    }
  }
LAB_004a5e39:
  FUN_00494b00(param_1,_Dst);
  if (param_1 != 0) {
    if ((*(char *)(param_1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
      FUN_004961f0(param_1,7,(byte *)0x0);
      *(undefined1 *)(param_1 + 0x38) = 0;
      uVar2 = 7;
    }
    return *(uint *)(param_1 + 0x30) & uVar2;
  }
  return uVar2 & 0xff;
}


/* FUN_004a5f90 @ 004a5f90  kind=lib  attributed-by=lib-island  size=37 */

void __cdecl FUN_004a5f90(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  return;
}


/* FUN_004a5fc0 @ 004a5fc0  kind=lib  attributed-by=lib-island  size=253 */

void __cdecl FUN_004a5fc0(byte *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte local_14 [12];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0xff000000) == 0) {
    iVar4 = 0;
    do {
      iVar6 = iVar4;
      bVar3 = (byte)param_2;
      param_2 = param_2 >> 7 | param_3 << 0x19;
      local_14[iVar6] = bVar3 | 0x80;
      param_3 = param_3 >> 7;
      iVar4 = iVar6 + 1;
    } while (param_2 != 0 || param_3 != 0);
    local_14[0] = local_14[0] & 0x7f;
    for (; -1 < iVar6; iVar6 = iVar6 + -1) {
      *param_1 = local_14[iVar6];
      param_1 = param_1 + 1;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  param_1[8] = (byte)param_2;
  uVar1 = (param_2 >> 8 | param_3 << 0x18) >> 7;
  param_1[7] = (byte)(param_2 >> 8) | 0x80;
  uVar2 = (uVar1 | (param_3 >> 8) << 0x19) >> 7;
  param_1[6] = (byte)uVar1 | 0x80;
  uVar1 = (uVar2 | (param_3 >> 0xf) << 0x19) >> 7;
  param_1[5] = (byte)uVar2 | 0x80;
  uVar2 = (uVar1 | (param_3 >> 0x16) << 0x19) >> 7;
  uVar5 = uVar2 | (param_3 >> 0x1d) << 0x19;
  param_1[4] = (byte)uVar1 | 0x80;
  param_1[3] = (byte)uVar2 | 0x80;
  param_1[2] = (byte)(uVar5 >> 7) | 0x80;
  param_1[1] = (byte)(uVar5 >> 0xe) | 0x80;
  *param_1 = (byte)(uVar5 >> 0x15) | 0x80;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004a60c0 @ 004a60c0  kind=lib  attributed-by=lib-island  size=55 */

undefined4 __cdecl FUN_004a60c0(byte *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 & 0xffffc000) == 0) {
    *param_1 = (byte)(param_2 >> 7) | 0x80;
    param_1[1] = (byte)param_2 & 0x7f;
    return 2;
  }
  uVar1 = FUN_004a5fc0(param_1,param_2,0);
  return uVar1;
}


/* FUN_004a6100 @ 004a6100  kind=lib  attributed-by=lib-island  size=49 */

int __cdecl FUN_004a6100(int *param_1)

{
  int iVar1;
  
  if ((*(char *)(*param_1 + 0x81) == '\0') &&
     (iVar1 = FUN_0049ddb0(*param_1,param_1 + 1), iVar1 != 0)) {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar1;
    return iVar1;
  }
  return 0;
}


/* FUN_004a6140 @ 004a6140  kind=lib  attributed-by=lib-island  size=325 */

int __cdecl FUN_004a6140(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    iVar1 = FUN_004a0350(param_2);
    return iVar1;
  }
  if (param_2 < 1) {
    FUN_00466dd0(param_1);
    return 0;
  }
  if (0x7ffffeff < param_2) {
    return 0;
  }
  iVar1 = (*DAT_00582af0._4_4_)(param_1);
  iVar2 = (*DAT_00582af8)(param_2);
  if (iVar1 == iVar2) {
    return param_1;
  }
  if (DAT_00582ac8 == 0) {
    iVar1 = (*(code *)DAT_00582af0)(param_1,iVar2);
    return iVar1;
  }
  if (DAT_00583f40 != 0) {
    (*DAT_00582b18)(DAT_00583f40);
  }
  FUN_004aa5b0(5,param_2);
  uVar3 = iVar2 - iVar1;
  iVar4 = (DAT_00583f4c - ((int)uVar3 >> 0x1f)) - (uint)(DAT_00583f48 < uVar3);
  if ((iVar4 <= (int)DAT_00583e18 >> 0x1f) &&
     ((iVar4 < (int)DAT_00583e18 >> 0x1f || (DAT_00583f48 - uVar3 <= DAT_00583e18)))) {
    FUN_004a03c0(uVar3);
  }
  iVar4 = (*(code *)DAT_00582af0)(param_1,iVar2);
  if (iVar4 == 0) {
    if (DAT_00583f50 == 0) goto LAB_004a6253;
    FUN_004a03c0(param_2);
    iVar4 = (*(code *)DAT_00582af0)(param_1,iVar2);
    if (iVar4 == 0) goto LAB_004a6253;
  }
  iVar2 = (*DAT_00582af0._4_4_)(iVar4);
  FUN_004aa580(0,iVar2 - iVar1);
LAB_004a6253:
  if (DAT_00583f40 == 0) {
    return iVar4;
  }
  (*DAT_00582b20)(DAT_00583f40);
  return iVar4;
}


