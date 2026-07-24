// Unsorted_007 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_007.h"

/* FUN_006aabd0 @ 006aabd0  kind=gamemisc  attributed-by=none  size=742 */

undefined4 FUN_006aabd0(int param_1,byte *param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint *puVar12;
  byte *pbVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *local_38;
  byte *pbStack_28;
  int local_24;
  uint local_1c;
  uint *puStack_18;
  undefined4 *local_14;
  uint local_10;
  byte *pbStack_c;
  byte *pbStack_8;
  int local_4;
  
  iVar9 = param_1;
  uVar6 = (uint)&local_1c ^ (uint)&param_1 ^ (uint)&param_2;
  local_1c = ((int)((int)uVar6 >> 10 ^ uVar6) >> 10 ^ uVar6) & 0xffff;
  local_4 = param_1;
  local_24 = 0;
  if (local_1c == 0) {
    local_1c = 0x7384;
  }
  *(int *)(param_1 + 0x470) = param_1 + 0x70;
  *(int *)(param_1 + 0x540) = param_1 + 0x474;
  puVar3 = *(undefined4 **)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = 0;
  puVar15 = (undefined4 *)(param_1 + 0x474);
  local_14 = puVar15;
  if (*(int *)(param_1 + 0x5d4) != 0) {
    memset(*(void **)(param_1 + 0x5d0),0,*(int *)(param_1 + 0x5d4) * 4);
  }
  pbStack_28 = param_2;
  *(byte **)(iVar9 + 0x478) = param_2;
  pbVar7 = param_2 + param_3;
  *(byte **)(iVar9 + 0x47c) = pbVar7;
  *puVar15 = param_2;
  uVar6 = *(uint *)(iVar9 + 0x18);
  uVar4 = *(uint *)(iVar9 + 0x1c);
  local_10 = uVar6;
  if (puVar3 != (undefined4 *)0x0) {
    (*(code *)puVar3[1])(*puVar3);
  }
  param_3 = param_3 & 0xffffff00;
  if (pbVar7 <= pbStack_28) {
    return 0;
  }
  do {
    puStack_18 = *(uint **)(param_1 + 0x470);
    pbVar13 = pbStack_28 + 1;
    uVar8 = 0;
    iVar11 = 0;
    switch(*pbStack_28) {
    case 1:
      uVar8 = 0x10;
      pbStack_28 = pbVar13;
      break;
    default:
      bVar2 = *pbStack_28;
      if (bVar2 < 0x20) {
        return 0xa0;
      }
      if (bVar2 < 0xf7) {
        iVar11 = bVar2 - 0x8b;
        pbStack_28 = pbVar13;
      }
      else {
        pbVar13 = pbStack_28 + 2;
        if (pbVar7 < pbVar13) {
          return 0xa0;
        }
        bVar2 = *pbStack_28;
        if (bVar2 < 0xfb) {
          iVar11 = (uint)bVar2 * 0x100 + -0xf694 + (uint)pbStack_28[1];
          pbStack_28 = pbVar13;
        }
        else {
          iVar11 = ((uint)bVar2 * -0x100 + 0xfa94) - (uint)pbStack_28[1];
          pbStack_28 = pbVar13;
        }
      }
LAB_006aaee1:
      if ((char)param_3 == '\0') {
        iVar11 = iVar11 << 0x10;
      }
      break;
    case 3:
      uVar8 = 0x12;
      pbStack_28 = pbVar13;
      break;
    case 4:
      uVar8 = 0xe;
      pbStack_28 = pbVar13;
      break;
    case 5:
      uVar8 = 9;
      pbStack_28 = pbVar13;
      break;
    case 6:
      uVar8 = 6;
      pbStack_28 = pbVar13;
      break;
    case 7:
      uVar8 = 0xd;
      pbStack_28 = pbVar13;
      break;
    case 8:
      uVar8 = 0xb;
      pbStack_28 = pbVar13;
      break;
    case 9:
      uVar8 = 5;
      pbStack_28 = pbVar13;
      break;
    case 10:
      uVar8 = 0x16;
      pbStack_28 = pbVar13;
      break;
    case 0xb:
      uVar8 = 0x18;
      pbStack_28 = pbVar13;
      break;
    case 0xc:
      if (pbVar7 < pbVar13) {
        return 0xa0;
      }
      pbStack_28 = pbStack_28 + 2;
      switch(*pbVar13) {
      case 0:
        uVar8 = 0xf;
        break;
      case 1:
        uVar8 = 0x13;
        break;
      case 2:
        uVar8 = 0x11;
        break;
      default:
        goto switchD_006aadd5_caseD_3;
      case 6:
        uVar8 = 3;
        break;
      case 7:
        uVar8 = 4;
        break;
      case 0xc:
        uVar8 = 0x14;
        break;
      case 0x10:
        uVar8 = 0x15;
        break;
      case 0x11:
        uVar8 = 0x17;
        break;
      case 0x21:
        uVar8 = 0x19;
      }
      break;
    case 0xd:
      uVar8 = 2;
      pbStack_28 = pbVar13;
      break;
    case 0xe:
      uVar8 = 1;
      pbStack_28 = pbVar13;
      break;
    case 0xf:
      uVar8 = 0x1a;
      pbStack_28 = pbVar13;
      break;
    case 0x15:
      uVar8 = 10;
      pbStack_28 = pbVar13;
      break;
    case 0x16:
      uVar8 = 7;
      pbStack_28 = pbVar13;
      break;
    case 0x1e:
      uVar8 = 0xc;
      pbStack_28 = pbVar13;
      break;
    case 0x1f:
      uVar8 = 8;
      pbStack_28 = pbVar13;
      break;
    case 0xff:
      pbStack_8 = pbStack_28 + 5;
      if (pbVar7 < pbStack_8) {
        return 0xa0;
      }
      iVar11 = CONCAT31(CONCAT21(CONCAT11(*pbVar13,pbStack_28[2]),pbStack_28[3]),pbStack_28[4]);
      pbStack_28 = pbStack_8;
      if (iVar11 + 32000U < 0xfa01) goto LAB_006aaee1;
      if ((char)param_3 == '\0') {
        param_3 = CONCAT31(param_3._1_3_,1);
      }
    }
    if (((0 < local_24) && (uVar8 != 0)) && ((uVar8 < 0x16 || (0x18 < uVar8)))) {
      local_24 = 0;
    }
    if ((char)param_3 != '\0') {
      if (uVar8 != 0) {
        if (uVar8 != 0x14) {
          param_3 = param_3 & 0xffffff00;
        }
        goto LAB_006aaf1c;
      }
LAB_006aaf20:
      if (0x3ff < (int)((int)puStack_18 + (-0x70 - param_1) & 0xfffffffcU)) {
switchD_006aadd5_caseD_3:
        return 0xa0;
      }
      *puStack_18 = iVar11;
      *(uint **)(param_1 + 0x470) = puStack_18 + 1;
      goto LAB_006ab89c;
    }
LAB_006aaf1c:
    if (uVar8 == 0) goto LAB_006aaf20;
    if (uVar8 != 0x15) {
      if ((int)puStack_18 + (-0x70 - param_1) >> 2 < (int)(&DAT_00732f88)[uVar8]) {
        return 0xa1;
      }
      if (0x19 < uVar8 - 1) {
        return 0xa0;
      }
      uVar10 = (*(code *)(&PTR_LAB_006abb50)[uVar8 - 1])();
      return uVar10;
    }
    if ((int)((int)puStack_18 + (-0x70 - param_1) & 0xfffffffcU) < 8) {
      return 0xa1;
    }
    pbStack_c = (byte *)(int)*(short *)((int)puStack_18 + -2);
    iVar11 = (int)*(short *)((int)puStack_18 + -6);
    if ((int)puStack_18 + (-0x78 - param_1) >> 2 < iVar11) {
      return 0xa1;
    }
    puVar1 = puStack_18 + (-2 - iVar11);
    local_38 = (uint *)0x0;
    local_24 = 0;
    puStack_18 = puVar1;
    switch(pbStack_c) {
    case (byte *)0x0:
      if (iVar11 != 3) {
        return 0xa0;
      }
      if (*(int *)(param_1 + 0x578) == 0) {
        return 0xa0;
      }
      if (*(int *)(param_1 + 0x57c) != 7) {
        return 0xa0;
      }
      *puVar1 = uVar6;
      puVar1[1] = uVar4;
      *(uint **)(param_1 + 0x470) = puVar1 + 2;
      break;
    case (byte *)0x1:
      if (iVar11 != 0) {
        return 0xa0;
      }
      *(undefined4 *)(param_1 + 0x578) = 1;
      *(undefined4 *)(param_1 + 0x57c) = 0;
      iVar11 = FUN_006a9770(iVar9,uVar6,uVar4);
      if (iVar11 != 0) {
        return 0;
      }
      iVar11 = FUN_006a9620(iVar9,6);
      if (iVar11 != 0) {
        return 0;
      }
      *(uint **)(param_1 + 0x470) = puVar1;
      break;
    case (byte *)0x2:
      if (iVar11 != 0) {
        return 0xa0;
      }
      uVar8 = *(uint *)(param_1 + 0x57c);
      *(uint *)(param_1 + 0x57c) = uVar8 + 1;
      if (uVar8 - 1 < 6) {
        if ((uVar8 == 3) || (uVar8 == 6)) {
          FUN_006a9660(iVar9,uVar6,uVar4,1);
          *(uint **)(param_1 + 0x470) = puVar1;
        }
        else {
          FUN_006a9660(iVar9,uVar6,uVar4,uVar8 & 0xffffff00);
          *(uint **)(param_1 + 0x470) = puVar1;
        }
        break;
      }
      goto LAB_006ab2a8;
    case (byte *)0x3:
      if (iVar11 != 1) {
        return 0xa0;
      }
      local_38 = (uint *)0x1;
      if (puVar3 == (undefined4 *)0x0) goto LAB_006ab2a8;
      (*(code *)puVar3[5])(*puVar3,(int)*(short *)(*(int *)(iVar9 + 0x14) + 2));
      *(uint **)(param_1 + 0x470) = puVar1 + 1;
      break;
    default:
      *(uint **)(param_1 + 0x470) = puVar1;
      local_24 = iVar11;
      break;
    case (byte *)0xc:
    case (byte *)0xd:
      *(int *)(param_1 + 0x470) = param_1 + 0x70;
      break;
    case (byte *)0xe:
    case (byte *)0xf:
    case (byte *)0x10:
    case (byte *)0x11:
    case (byte *)0x12:
      puVar5 = *(uint **)(param_1 + 0x5b8);
      if (puVar5 == (uint *)0x0) {
        return 0xa0;
      }
      pbStack_8 = (byte *)(((pbStack_c == (byte *)0x12) - 0xd) + (int)pbStack_c);
      if (iVar11 != *puVar5 * (int)pbStack_8) {
        return 0xa0;
      }
      puVar12 = puVar1 + (int)pbStack_8;
      local_38 = puVar1;
      pbVar13 = pbStack_8;
      if (pbStack_8 != (byte *)0x0) {
        do {
          pbStack_c = pbVar13;
          uVar8 = *local_38;
          uVar14 = 1;
          if (1 < *puVar5) {
            do {
              iVar9 = FUN_0068ebc0(*puVar12,*(undefined4 *)(puVar5[0x22] + uVar14 * 4));
              uVar14 = uVar14 + 1;
              uVar8 = uVar8 + iVar9;
              puVar12 = puVar12 + 1;
            } while (uVar14 < *puVar5);
          }
          *local_38 = uVar8;
          local_38 = local_38 + 1;
          pbVar13 = pbStack_c + -1;
        } while (pbStack_c + -1 != (byte *)0x0);
        pbStack_c = (byte *)0x0;
      }
      *(uint **)(param_1 + 0x470) = puStack_18 + (int)pbStack_8;
      iVar9 = local_4;
      break;
    case (byte *)0x13:
      if (iVar11 != 1) {
        return 0xa0;
      }
      if (*(uint **)(param_1 + 0x5b8) == (uint *)0x0) {
        return 0xa0;
      }
      iVar11 = (int)*(short *)((int)puVar1 + 2);
      if (iVar11 < 0) {
        return 0xa0;
      }
      pbStack_8 = (byte *)**(uint **)(param_1 + 0x5b8);
      if (*(byte **)(param_1 + 0x5d4) < pbStack_8 + iVar11) {
        return 0xa0;
      }
      memcpy((void *)(*(int *)(param_1 + 0x5d0) + iVar11 * 4),
             *(void **)(*(int *)(param_1 + 0x5b8) + 0x88),(int)pbStack_8 * 4);
      *(uint **)(param_1 + 0x470) = puVar1;
      break;
    case (byte *)0x14:
      if (iVar11 != 2) {
        return 0xa0;
      }
      *puVar1 = *puVar1 + puVar1[1];
      goto LAB_006ab29c;
    case (byte *)0x15:
      if (iVar11 != 2) {
        return 0xa0;
      }
      *puVar1 = *puVar1 - puVar1[1];
      goto LAB_006ab29c;
    case (byte *)0x16:
      if (iVar11 != 2) {
        return 0xa0;
      }
      uVar8 = FUN_0068ebc0(*puVar1,puVar1[1]);
      goto LAB_006ab29a;
    case (byte *)0x17:
      if (iVar11 != 2) {
        return 0xa0;
      }
      if (puVar1[1] == 0) {
        return 0xa0;
      }
      uVar8 = FUN_0068ec40(*puVar1,puVar1[1]);
      goto LAB_006ab29a;
    case (byte *)0x18:
      if (iVar11 != 2) {
        return 0xa0;
      }
      if (*(int *)(param_1 + 0x5b8) == 0) {
        return 0xa0;
      }
      uVar8 = (uint)*(short *)((int)puVar1 + 6);
      if ((int)uVar8 < 0) {
        return 0xa0;
      }
      if (*(uint *)(param_1 + 0x5d4) <= uVar8) {
        return 0xa0;
      }
      *(uint *)(*(int *)(param_1 + 0x5d0) + uVar8 * 4) = *puVar1;
      *(uint **)(param_1 + 0x470) = puVar1;
      break;
    case (byte *)0x19:
      if (iVar11 != 1) {
        return 0xa0;
      }
      if (*(int *)(param_1 + 0x5b8) == 0) {
        return 0xa0;
      }
      uVar8 = (uint)*(short *)((int)puVar1 + 2);
      if ((int)uVar8 < 0) {
        return 0xa0;
      }
      if (*(uint *)(param_1 + 0x5d4) <= uVar8) {
        return 0xa0;
      }
      uVar8 = *(uint *)(*(int *)(param_1 + 0x5d0) + uVar8 * 4);
LAB_006ab29a:
      *puVar1 = uVar8;
      goto LAB_006ab29c;
    case (byte *)0x1b:
      if (iVar11 != 4) {
        return 0xa0;
      }
      if ((int)puVar1[3] < (int)puVar1[2]) {
        *puVar1 = puVar1[1];
      }
      *(uint **)(param_1 + 0x470) = puVar1 + 1;
      break;
    case (byte *)0x1c:
      if (iVar11 != 0) {
        return 0xa0;
      }
      uVar8 = local_1c;
      if (0x7fff < (int)local_1c) {
        uVar8 = local_1c + 1;
      }
      *puVar1 = uVar8;
      local_1c = FUN_0068ebc0(local_1c,0x10000 - local_1c);
      if (local_1c == 0) {
        local_1c = 0x2873;
      }
LAB_006ab29c:
      local_38 = (uint *)0x1;
LAB_006ab2a8:
      *(uint **)(param_1 + 0x470) = puVar1 + (int)local_38;
    }
LAB_006ab89c:
    if (pbVar7 <= pbStack_28) {
      return 0;
    }
  } while( true );
}


/* FUN_006abbc0 @ 006abbc0  kind=gamemisc  attributed-by=none  size=300 */

uint FUN_006abbc0(char *param_1,uint param_2)

{
  char *pcVar1;
  char *_Str1;
  void *_Dst;
  int in_ECX;
  int iVar2;
  size_t _Size;
  int *piVar3;
  undefined8 uVar4;
  uint local_c;
  int iStack_4;
  
  pcVar1 = param_1;
  if (5 < param_2) {
    return 0;
  }
  local_c = 0;
  if (param_2 != 0) {
    piVar3 = (int *)(in_ECX + 4);
    do {
      if (piVar3[-1] == 0) {
        uVar4 = FUN_006a9d30();
      }
      else {
        uVar4 = FUN_006a9cc0();
      }
      _Str1 = (char *)uVar4;
      if (_Str1 == (char *)0x0) {
        return local_c;
      }
      iVar2 = *(int *)((ulonglong)uVar4 >> 0x20) - (int)_Str1;
      _Size = iVar2 - 1;
      param_1 = _Str1;
      switch(piVar3[-1]) {
      case 0:
      case 1:
        _Dst = (void *)FUN_00691240(*(undefined4 *)pcVar1,iVar2,&iStack_4);
        *piVar3 = (int)_Dst;
        if (iStack_4 == 0) {
          memcpy(_Dst,_Str1,_Size);
          *(undefined1 *)(_Size + *piVar3) = 0;
        }
        break;
      case 2:
        iVar2 = FUN_006aa050(&param_1,_Str1 + _Size,0);
        *piVar3 = iVar2;
        break;
      case 3:
        iVar2 = FUN_006aa020();
        *piVar3 = iVar2;
        break;
      case 4:
        if ((_Size == 4) && (iVar2 = strncmp(_Str1,"true",4), iVar2 == 0)) {
          *(undefined1 *)piVar3 = 1;
        }
        else {
          *(undefined1 *)piVar3 = 0;
        }
        break;
      case 5:
        if (*(code **)(pcVar1 + 0xc) == (code *)0x0) {
          *piVar3 = 0;
        }
        else {
          iVar2 = (**(code **)(pcVar1 + 0xc))(_Str1,_Size,*(undefined4 *)(pcVar1 + 0x10));
          *piVar3 = iVar2;
        }
      }
      local_c = local_c + 1;
      piVar3 = piVar3 + 2;
    } while (local_c < param_2);
  }
  return local_c;
}


/* FUN_006abd50 @ 006abd50  kind=gamemisc  attributed-by=none  size=205 */

void FUN_006abd50(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_40;
  iVar3 = param_1[2];
  piVar5 = (int *)(iVar3 + 0x20);
  local_3c = -1;
  local_34 = piVar5;
  local_30 = iVar3;
  iVar1 = FUN_006abd10(piVar5);
  if (iVar1 == 0) {
    if (*piVar5 != 0) {
      uVar2 = FUN_00693a60(*param_1,0x14,0,*piVar5,0,&local_40);
      *(undefined4 *)(iVar3 + 0x1c) = uVar2;
      if (local_40 != 0) goto LAB_006abea8;
    }
    iVar3 = FUN_006a9d80(1,&local_40);
    if (iVar3 != 0) {
      local_38 = -0x14;
LAB_006abde0:
      uVar2 = FUN_006a9e10();
      switch(uVar2) {
      case 0x14:
      case 0x15:
      case 0x17:
        *piVar5 = local_3c + 1;
        __security_check_cookie(local_4 ^ (uint)&local_40);
        return;
      default:
        break;
      case 0x38:
        goto LAB_006abe05;
      case 0x4b:
        goto LAB_006abe8a;
      }
    }
  }
LAB_006abea3:
LAB_006abea8:
  __security_check_cookie(local_4 ^ (uint)&local_40);
  return;
LAB_006abe05:
  local_38 = local_38 + 0x14;
  local_3c = local_3c + 1;
  if (*piVar5 <= local_3c) goto LAB_006abea3;
  piVar4 = (int *)(*(int *)(local_30 + 0x1c) + local_38);
  uStack_2c = 3;
  uStack_24 = 2;
  uStack_1c = 2;
  uStack_14 = 2;
  uStack_c = 2;
  iVar3 = FUN_006abbc0(param_1,5);
  if (iVar3 != 5) goto LAB_006abea3;
  piVar4[1] = iStack_20;
  piVar4[3] = iStack_10;
  *piVar4 = iStack_28;
  piVar4[2] = iStack_18;
  piVar4[4] = iStack_8;
  piVar5 = local_34;
  if ((iStack_28 < 0) && (0 < iStack_18)) {
    piVar4[2] = -iStack_18;
  }
LAB_006abe8a:
  iVar3 = FUN_006a9d80(1,&local_40);
  if (iVar3 == 0) goto LAB_006abea3;
  goto LAB_006abde0;
}


/* FUN_006abf20 @ 006abf20  kind=gamemisc  attributed-by=none  size=422 */

void FUN_006abf20(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_34;
  iVar5 = param_1[2];
  local_30 = -1;
  local_28 = iVar5;
  iVar1 = FUN_006abd10((int *)(iVar5 + 0x28));
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar5 + 0x28);
    if (iVar1 != 0) {
      uVar2 = FUN_00693a60(*param_1,0x10,0,iVar1,0,&local_34);
      *(undefined4 *)(iVar5 + 0x24) = uVar2;
      if (local_34 != 0) goto LAB_006ac082;
    }
    iVar1 = FUN_006a9d80(1,&local_34);
    if (iVar1 != 0) {
      local_2c = -0x10;
LAB_006abfb0:
      iVar1 = FUN_006a9e10();
      switch(iVar1) {
      case 0x14:
      case 0x15:
      case 0x16:
        *(size_t *)(iVar5 + 0x28) = local_30 + 1U;
        qsort(*(void **)(iVar5 + 0x24),local_30 + 1U,0x10,FUN_006a9ed0);
        __security_check_cookie(local_4 ^ (uint)&local_34);
        return;
      default:
        break;
      case 0x22:
      case 0x24:
      case 0x25:
        goto switchD_006abfd0_caseD_22;
      case 0x4b:
        goto switchD_006abfd0_caseD_4b;
      }
    }
  }
switchD_006abfd0_caseD_17:
LAB_006ac082:
  __security_check_cookie(local_4 ^ (uint)&local_34);
  return;
switchD_006abfd0_caseD_22:
  local_2c = local_2c + 0x10;
  local_30 = local_30 + 1;
  if (*(int *)(iVar5 + 0x28) <= local_30) goto switchD_006abfd0_caseD_17;
  puVar4 = (undefined4 *)(*(int *)(iVar5 + 0x24) + local_2c);
  local_24 = 5;
  local_1c = 5;
  local_14 = 3;
  local_c = 3;
  iVar3 = FUN_006abbc0(param_1,4);
  if (iVar3 < 3) goto switchD_006abfd0_caseD_17;
  *puVar4 = local_20;
  puVar4[1] = local_18;
  iVar5 = local_28;
  if (iVar1 == 0x25) {
    puVar4[2] = 0;
    puVar4[3] = local_10;
  }
  else {
    puVar4[2] = local_10;
    if ((iVar1 != 0x22) || (uVar2 = local_8, iVar3 != 4)) {
      uVar2 = 0;
    }
    puVar4[3] = uVar2;
  }
switchD_006abfd0_caseD_4b:
  iVar1 = FUN_006a9d80(1,&local_34);
  if (iVar1 == 0) goto switchD_006abfd0_caseD_17;
  goto LAB_006abfb0;
}


/* FUN_006ac110 @ 006ac110  kind=gamemisc  attributed-by=none  size=116 */

int FUN_006ac110(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  iVar1 = FUN_006a9d80(1,local_4);
  while (iVar1 != 0) {
    uVar2 = FUN_006a9e10();
    switch(uVar2) {
    case 0x14:
    case 0x15:
      return 0;
    default:
      goto LAB_006ac180;
    case 0x32:
    case 0x33:
      iVar1 = FUN_006abf20();
      break;
    case 0x35:
      iVar1 = FUN_006abd50();
      break;
    case 0x4b:
      goto switchD_006ac14a_caseD_4b;
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_006ac14a_caseD_4b:
    iVar1 = FUN_006a9d80(1,local_4);
  }
LAB_006ac180:
  return 0xa0;
}


/* FUN_006ac1e0 @ 006ac1e0  kind=gamemisc  attributed-by=none  size=318 */

void FUN_006ac1e0(undefined4 *param_1)

{
  char *_Str1;
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_44;
  puVar3 = (undefined1 *)param_1[2];
  local_30 = *param_1;
  local_3c = 0xa0;
  local_38 = 0;
  local_44 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    __security_check_cookie(local_c ^ (uint)&local_44);
    return;
  }
  _Str1 = (char *)FUN_006a9d80(1,&local_40);
  if (((_Str1 == (char *)0x0) || (local_40 != 0x10)) ||
     (iVar1 = strncmp(_Str1,"StartFontMetrics",0x10), iVar1 != 0)) {
LAB_006ac46e:
    __security_check_cookie(local_c ^ (uint)&local_44);
    return;
  }
  iVar1 = FUN_006a9d80(1,&local_40);
  do {
    if (iVar1 == 0) {
LAB_006ac2d7:
      uVar2 = local_30;
      FUN_00691290(local_30,*(undefined4 *)(puVar3 + 0x1c));
      *(undefined4 *)(puVar3 + 0x1c) = 0;
      *(undefined4 *)(puVar3 + 0x20) = 0;
      FUN_00691290(uVar2,*(undefined4 *)(puVar3 + 0x24));
      *(undefined4 *)(puVar3 + 0x24) = 0;
      *(undefined4 *)(puVar3 + 0x28) = 0;
      *puVar3 = 0;
      __security_check_cookie(local_c ^ (uint)&local_44);
      return;
    }
    uVar2 = FUN_006a9e10();
    switch(uVar2) {
    case 0:
      uStack_2c = 2;
      iVar1 = FUN_006abbc0(param_1,1);
      puVar3 = local_44;
      if (iVar1 != 1) goto LAB_006ac2d7;
      *(undefined4 *)(local_44 + 0x14) = uStack_28;
      break;
    case 0xe:
      uStack_2c = 2;
      iVar1 = FUN_006abbc0(param_1,1);
      puVar3 = local_44;
      if (iVar1 != 1) goto LAB_006ac2d7;
      *(undefined4 *)(local_44 + 0x18) = uStack_28;
      break;
    case 0x14:
      goto LAB_006ac455;
    case 0x1a:
      uStack_2c = 2;
      uStack_24 = 2;
      uStack_1c = 2;
      uStack_14 = 2;
      iVar1 = FUN_006abbc0(param_1,4);
      puVar3 = local_44;
      if (iVar1 != 4) goto LAB_006ac2d7;
      *(undefined4 *)(local_44 + 4) = uStack_28;
      *(undefined4 *)(local_44 + 8) = uStack_20;
      *(undefined4 *)(local_44 + 0xc) = uStack_18;
      *(undefined4 *)(local_44 + 0x10) = uStack_10;
      break;
    case 0x1e:
      uStack_2c = 4;
      iVar1 = FUN_006abbc0(param_1,1);
      puVar3 = local_44;
      if (iVar1 != 1) goto LAB_006ac2d7;
      *local_44 = (undefined1)uStack_28;
      break;
    case 0x28:
      iVar1 = FUN_006abd10(&local_38);
      puVar3 = local_44;
      if (iVar1 != 0) goto LAB_006ac2d7;
      if ((local_38 != 0) && (local_38 != 2)) {
        local_3c = 7;
        goto LAB_006ac2d7;
      }
      break;
    case 0x2d:
      uStack_34 = 0;
      iVar1 = FUN_006abd10(&uStack_34);
      puVar3 = local_44;
      if (iVar1 != 0) goto LAB_006ac2d7;
      local_3c = FUN_006a9f00(param_1,0x11);
      if (local_3c != 0) goto LAB_006ac46e;
      break;
    case 0x31:
      local_3c = FUN_006ac110();
      puVar3 = local_44;
      if (local_3c == 0) {
LAB_006ac455:
        __security_check_cookie(local_c ^ (uint)&local_44);
        return;
      }
      goto LAB_006ac2d7;
    }
    iVar1 = FUN_006a9d80(1,&local_40);
    puVar3 = local_44;
  } while( true );
}


/* FUN_006ac4e0 @ 006ac4e0  kind=gamemisc  attributed-by=none  size=61 */

void FUN_006ac4e0(void)

{
  int in_EAX;
  uint uVar1;
  byte *in_EDX;
  
  for (; in_EAX != 0; in_EAX = in_EAX + -1) {
    uVar1 = *in_EDX >> 1 & 0x55 | (*in_EDX & 0x55) * 2;
    uVar1 = uVar1 >> 2 & 0x33 | (uVar1 & 0x33) * 4;
    *in_EDX = (byte)(uVar1 >> 4) | (char)uVar1 << 4;
    in_EDX = in_EDX + 1;
  }
  return;
}


/* FUN_006ac520 @ 006ac520  kind=gamemisc  attributed-by=none  size=34 */

void FUN_006ac520(void)

{
  undefined1 uVar1;
  undefined1 *in_EAX;
  uint in_ECX;
  uint uVar2;
  
  if (1 < in_ECX) {
    uVar2 = in_ECX >> 1;
    do {
      uVar1 = *in_EAX;
      *in_EAX = in_EAX[1];
      in_EAX[1] = uVar1;
      in_EAX = in_EAX + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


/* FUN_006ac550 @ 006ac550  kind=gamemisc  attributed-by=none  size=48 */

void FUN_006ac550(void)

{
  undefined1 uVar1;
  int in_EAX;
  undefined1 *puVar2;
  uint in_ECX;
  uint uVar3;
  
  if (3 < in_ECX) {
    puVar2 = (undefined1 *)(in_EAX + 1);
    uVar3 = in_ECX >> 2;
    do {
      uVar1 = puVar2[-1];
      puVar2[-1] = puVar2[2];
      puVar2[2] = uVar1;
      uVar1 = *puVar2;
      *puVar2 = puVar2[1];
      puVar2[1] = uVar1;
      puVar2 = puVar2 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}


/* FUN_006ac580 @ 006ac580  kind=gamemisc  attributed-by=none  size=482 */

int FUN_006ac580(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint local_c;
  
  iVar9 = param_2;
  uVar2 = *(undefined4 *)(param_2 + 100);
  piVar1 = (int *)(param_2 + 0xb8);
  param_2 = FUN_006908c0(param_1,0);
  if ((param_2 != 0) || (param_2 = FUN_00692010(param_1,&DAT_007331b0,piVar1), param_2 != 0)) {
    return 1;
  }
  if (((*piVar1 == 0x70636601) && (uVar12 = *(uint *)(iVar9 + 0xbc), uVar12 < 0x8000000)) &&
     (uVar12 != 0)) {
    iVar10 = FUN_00693a60(uVar2,0x10,0,uVar12,0,&param_2);
    *(int *)(iVar9 + 0xc0) = iVar10;
    if (param_2 != 0) {
      return 0x40;
    }
    uVar12 = 0;
    if (*(int *)(iVar9 + 0xbc) != 0) {
      do {
        param_2 = FUN_00692010(param_1,&DAT_007331c0,iVar10);
        if (param_2 != 0) {
          FUN_00691290(uVar2,*(undefined4 *)(iVar9 + 0xc0));
          *(undefined4 *)(iVar9 + 0xc0) = 0;
          return param_2;
        }
        uVar12 = uVar12 + 1;
        iVar10 = iVar10 + 0x10;
        param_2 = 0;
      } while (uVar12 < *(uint *)(iVar9 + 0xbc));
    }
    iVar10 = *(int *)(iVar9 + 0xbc);
    iVar3 = *(int *)(iVar9 + 0xc0);
    local_c = 0;
    if (iVar10 != 1) {
      do {
        bVar8 = false;
        if (iVar10 - local_c == 1) {
          return 0;
        }
        puVar11 = (uint *)(iVar3 + 0x1c);
        uVar12 = 0;
        do {
          if (*puVar11 < puVar11[-4]) {
            uVar4 = puVar11[-5];
            uVar5 = puVar11[-4];
            uVar6 = puVar11[-7];
            uVar7 = puVar11[-6];
            puVar11[-7] = puVar11[-3];
            puVar11[-6] = puVar11[-2];
            puVar11[-5] = puVar11[-1];
            puVar11[-3] = uVar6;
            puVar11[-2] = uVar7;
            puVar11[-1] = uVar4;
            puVar11[-4] = *puVar11;
            *puVar11 = uVar5;
            bVar8 = true;
          }
          if ((*puVar11 < puVar11[-5]) || (*puVar11 - puVar11[-5] < puVar11[-4])) {
            return 9;
          }
          uVar12 = uVar12 + 1;
          puVar11 = puVar11 + 4;
        } while (uVar12 < (*(int *)(iVar9 + 0xbc) - local_c) - 1);
        if (!bVar8) {
          return 0;
        }
        iVar10 = *(int *)(iVar9 + 0xbc);
        local_c = local_c + 1;
      } while (local_c < iVar10 - 1U);
    }
    return 0;
  }
  return 3;
}


/* FUN_006ac770 @ 006ac770  kind=gamemisc  attributed-by=none  size=134 */

void FUN_006ac770(void)

{
  uint in_EAX;
  int iVar1;
  short *unaff_ESI;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  byte local_4;
  
  if ((in_EAX & 0xffffff00) == 0) {
    FUN_00692010();
    return;
  }
  iVar1 = FUN_00692010();
  if (iVar1 == 0) {
    *unaff_ESI = local_8 - 0x80;
    unaff_ESI[1] = local_7 - 0x80;
    unaff_ESI[2] = local_6 - 0x80;
    unaff_ESI[3] = local_5 - 0x80;
    unaff_ESI[4] = local_4 - 0x80;
    unaff_ESI[5] = 0;
  }
  return;
}


/* FUN_006ac800 @ 006ac800  kind=gamemisc  attributed-by=none  size=119 */

undefined4 FUN_006ac800(int param_1,int *param_2,int *param_3)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int unaff_EBX;
  int *unaff_EDI;
  
  uVar2 = 0;
  piVar3 = unaff_EDI;
  if (in_EAX != 0) {
    do {
      if (*piVar3 == param_1) {
        if ((*(uint *)(unaff_EBX + 8) <= (uint)unaff_EDI[uVar2 * 4 + 3]) &&
           (iVar1 = FUN_00690900(), iVar1 == 0)) {
          *param_3 = unaff_EDI[uVar2 * 4 + 2];
          *param_2 = unaff_EDI[uVar2 * 4 + 1];
          return 0;
        }
        *param_3 = 0;
        return 0x53;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 < in_EAX);
  }
  *param_3 = 0;
  return 3;
}


/* FUN_006ac880 @ 006ac880  kind=gamemisc  attributed-by=none  size=24 */

uint FUN_006ac880(void)

{
  uint uVar1;
  int *in_ECX;
  uint in_EDX;
  int unaff_ESI;
  
  uVar1 = 0;
  if (in_EDX != 0) {
    do {
      if (*in_ECX == unaff_ESI) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      uVar1 = uVar1 + 1;
      in_ECX = in_ECX + 4;
    } while (uVar1 < in_EDX);
  }
  return uVar1 & 0xffffff00;
}


/* FUN_006ac8a0 @ 006ac8a0  kind=gamemisc  attributed-by=none  size=128 */

undefined4 * FUN_006ac8a0(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  int in_EAX;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  bVar2 = false;
  iVar6 = 0;
  puVar7 = *(undefined4 **)(in_EAX + 0x11c);
  if (0 < *(int *)(in_EAX + 0x118)) {
    do {
      if (bVar2) goto LAB_006ac907;
      pbVar3 = (byte *)*puVar7;
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_006ac8f0:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_006ac8f5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_006ac8f0;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_006ac8f5:
      if (iVar4 == 0) {
        bVar2 = true;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 3;
    } while (iVar6 < *(int *)(in_EAX + 0x118));
    if (bVar2) {
LAB_006ac907:
      return *(undefined4 **)(in_EAX + 0x11c) + iVar6 * 3 + -3;
    }
  }
  return (undefined4 *)0x0;
}


/* FUN_006ac920 @ 006ac920  kind=gamemisc  attributed-by=none  size=751 */

int FUN_006ac920(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  local_14 = *(undefined4 *)(param_1 + 100);
  local_c = 0;
  local_10 = 0;
  local_18 = FUN_006ac800(1,&local_8,&local_4);
  if (((local_18 == 0) && (uVar2 = FUN_00690d40(), local_18 == 0)) && ((uVar2 & 0xffffff00) == 0)) {
    local_8 = uVar2 >> 2 & 1;
    if (local_8 == 0) {
      uVar2 = FUN_00690d40();
    }
    else {
      uVar2 = FUN_00690cd0();
    }
    if (local_18 == 0) {
      if (uVar2 <= local_4 / 9) {
        *(uint *)(param_1 + 0x118) = uVar2;
        local_c = FUN_00693a60(local_14,0xc,0,uVar2,0,&local_18);
        if (local_18 != 0) goto LAB_006acbe0;
        uVar7 = 0;
        iVar3 = local_18;
        if (uVar2 != 0) {
          do {
            iVar3 = FUN_00692010();
            local_18 = iVar3;
            if (iVar3 != 0) goto LAB_006acbe0;
            uVar7 = uVar7 + 1;
            local_18 = 0;
          } while (uVar7 < uVar2);
        }
        local_18 = iVar3;
        if (((uVar2 & 3) != 0) && (local_18 = FUN_00690900(), local_18 != 0)) {
          local_18 = 0x53;
          goto LAB_006acbe0;
        }
        if (local_8 == 1) {
          uVar7 = FUN_00690cd0();
        }
        else {
          uVar7 = FUN_00690d40();
        }
        if (local_18 != 0) goto LAB_006acbe0;
        if (uVar7 <= local_4 + uVar2 * -9) {
          local_10 = FUN_00693a60(local_14,1,0,uVar7,0,&local_18);
          if (((local_18 == 0) && (local_18 = FUN_00691ec0(), local_18 == 0)) &&
             (iVar3 = FUN_00693a60(local_14,0xc,0,uVar2,0,&local_18), local_18 == 0)) {
            uVar5 = 0;
            *(int *)(param_1 + 0x11c) = iVar3;
            if (uVar2 != 0) {
              puVar8 = (undefined4 *)(iVar3 + 8);
              local_4 = iVar3 - local_c;
              pcVar6 = (char *)(local_c + 4);
              do {
                uVar1 = *(uint *)(pcVar6 + -4);
                if (((int)uVar1 < 0) || (uVar7 < uVar1)) {
LAB_006acc08:
                  local_18 = 9;
                  goto LAB_006acbe0;
                }
                uVar4 = FUN_00691310(local_14,uVar1 + local_10,&local_18);
                puVar8[-2] = uVar4;
                if (local_18 != 0) goto LAB_006acbe0;
                pcVar6[local_4] = *pcVar6;
                if (*pcVar6 == '\0') {
                  *puVar8 = *(undefined4 *)(pcVar6 + 4);
                }
                else {
                  uVar1 = *(uint *)(pcVar6 + 4);
                  if (((int)uVar1 < 0) || (uVar7 < uVar1)) goto LAB_006acc08;
                  uVar4 = FUN_00691310(local_14,uVar1 + local_10,&local_18);
                  *puVar8 = uVar4;
                  if (local_18 != 0) goto LAB_006acbe0;
                }
                uVar5 = uVar5 + 1;
                pcVar6 = pcVar6 + 0xc;
                puVar8 = puVar8 + 3;
              } while (uVar5 < uVar2);
            }
            local_18 = 0;
          }
          goto LAB_006acbe0;
        }
      }
      local_18 = 8;
    }
  }
LAB_006acbe0:
  uVar4 = local_14;
  FUN_00691290(local_14,local_c);
  FUN_00691290(uVar4,local_10);
  return local_18;
}


/* FUN_006acc20 @ 006acc20  kind=gamemisc  attributed-by=none  size=437 */

int FUN_006acc20(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = *(undefined4 *)(param_2 + 100);
  param_2 = 0;
  param_2 = FUN_006ac800(4,&local_8,&local_c);
  if ((param_2 != 0) || (local_8 = FUN_00690d40(param_1,&param_2), param_2 != 0)) {
    return param_2;
  }
  uVar4 = local_8 & 0xffffff00;
  if ((uVar4 == 0) || (uVar4 == 0x100)) {
    if (uVar4 == 0) {
      if ((local_8 & 4) == 0) {
        uVar2 = FUN_00690d40(param_1,&param_2);
      }
      else {
        uVar2 = FUN_00690cd0(param_1,&param_2);
      }
    }
    else {
      if ((local_8 & 4) == 0) {
        uVar2 = FUN_00690bf0(param_1,&param_2);
      }
      else {
        uVar2 = FUN_00690b80(param_1,&param_2);
      }
      uVar2 = uVar2 & 0xffff;
    }
    if (param_2 == 0) {
      *(uint *)(iVar1 + 0x120) = uVar2;
      if (uVar2 == 0) {
        return 8;
      }
      if (uVar4 == 0) {
        if (local_c / 0xc < uVar2) {
          return 8;
        }
      }
      else if (local_c / 5 < uVar2) {
        return 8;
      }
      iVar3 = FUN_00693a60(local_4,0x10,0,uVar2,0,&param_2);
      *(int *)(iVar1 + 0x124) = iVar3;
      if (param_2 == 0) {
        uVar4 = 0;
        if (uVar2 == 0) {
          return 0;
        }
        do {
          param_2 = FUN_006ac770();
          *(undefined4 *)(iVar3 + 0xc) = 0;
          if (param_2 != 0) {
            FUN_00691290(local_4,*(undefined4 *)(iVar1 + 0x124));
            *(undefined4 *)(iVar1 + 0x124) = 0;
            return param_2;
          }
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x10;
          param_2 = 0;
        } while (uVar4 < uVar2);
        return 0;
      }
      return 0x40;
    }
  }
  return 3;
}


/* FUN_006acde0 @ 006acde0  kind=gamemisc  attributed-by=none  size=473 */

void FUN_006acde0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18 [5];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_2c;
  local_1c = *(undefined4 *)(in_EDX + 100);
  local_2c = 0;
  local_20 = in_EDX;
  local_2c = FUN_006ac800(8,&local_24,local_18);
  if ((local_2c != 0) || (local_2c = FUN_00691f30(), local_2c != 0)) {
LAB_006acfa7:
    __security_check_cookie(local_4 ^ (uint)&local_2c);
    return;
  }
  local_24 = FUN_00690ae0();
  uVar4 = local_24 >> 2 & 1;
  if (uVar4 == 0) {
    uVar1 = FUN_00690ae0();
  }
  else {
    uVar1 = FUN_00690aa0();
  }
  FUN_00691fe0();
  if (((((local_24 & 0xffffff00) != 0) || ((int)*(uint *)(in_EDX + 0x120) < 0)) ||
      (uVar1 != *(uint *)(in_EDX + 0x120))) ||
     (local_28 = FUN_00693a60(local_1c,4,0,uVar1,0,&local_2c), local_2c != 0)) goto LAB_006acfa7;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar4 == 1) {
        uVar2 = FUN_00690cd0();
      }
      else {
        uVar2 = FUN_00690d40();
      }
      *(undefined4 *)(local_28 + uVar5 * 4) = uVar2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
    if (local_2c != 0) goto LAB_006acf78;
  }
  uVar5 = 0;
  do {
    if (uVar4 == 1) {
      FUN_00690cd0();
    }
    else {
      FUN_00690d40();
    }
    if (local_2c != 0) goto LAB_006acf78;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  if (uVar1 != 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      uVar5 = *(uint *)(local_28 + uVar4 * 4);
      if ((-1 < (int)uVar5) && (uVar5 <= local_18[0])) {
        *(uint *)(*(int *)(local_20 + 0x124) + 0xc + iVar3) = *(int *)(in_ECX + 8) + uVar5;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar4 < uVar1);
  }
  *(uint *)(local_20 + 0x134) = local_24;
LAB_006acf78:
  FUN_00691290(local_1c,local_28);
  __security_check_cookie(local_4 ^ (uint)&local_2c);
  return;
}


/* FUN_006acfc0 @ 006acfc0  kind=gamemisc  attributed-by=none  size=601 */

int FUN_006acfc0(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  local_20 = *(undefined4 *)(param_1 + 100);
  local_24 = 0;
  local_4 = 0;
  local_24 = FUN_006ac800(0x20,&local_14,&local_8);
  if ((local_24 != 0) || (local_24 = FUN_00691f30(), local_24 != 0)) {
    return local_24;
  }
  local_14 = FUN_00690ae0();
  local_c = local_14 >> 2 & 1;
  if (local_c == 0) {
    sVar1 = FUN_00690a70();
    local_18 = (int)sVar1;
    sVar2 = FUN_00690a70();
    sVar1 = FUN_00690a70();
    local_1c = (int)sVar1;
    sVar1 = FUN_00690a70();
    uVar3 = FUN_00690a70();
  }
  else {
    sVar1 = FUN_00690a40();
    local_18 = (int)sVar1;
    sVar2 = FUN_00690a40();
    sVar1 = FUN_00690a40();
    local_1c = (int)sVar1;
    sVar1 = FUN_00690a40();
    uVar3 = FUN_00690a40();
  }
  *(undefined2 *)(param_1 + 0x130) = uVar3;
  FUN_00691fe0();
  uVar9 = local_20;
  if ((local_14 & 0xffffff00) == 0) {
    local_8 = (sVar2 - local_18) + 1;
    local_10 = ((sVar1 - local_1c) + 1) * local_8;
    iVar4 = FUN_00693a60(local_20,8,0,local_10,0,&local_24);
    if (local_24 != 0) {
      return 0x40;
    }
    local_24 = FUN_00691f30();
    iVar5 = local_4;
    if (local_24 == 0) {
      iVar10 = 0;
      local_14 = 0;
      if (0 < local_10) {
        do {
          uVar8 = local_14;
          if (local_c == 1) {
            sVar1 = FUN_00690a40();
          }
          else {
            sVar1 = FUN_00690a70();
          }
          if (sVar1 != -1) {
            *(short *)(iVar4 + 4 + iVar10 * 8) = sVar1;
            iVar10 = iVar10 + 1;
            *(int *)(iVar4 + -8 + iVar10 * 8) =
                 ((int)uVar8 / local_8 + local_1c) * 0x100 + (int)uVar8 % local_8 + local_18;
            uVar8 = local_14;
          }
          local_14 = uVar8 + 1;
        } while ((int)local_14 < local_10);
      }
      FUN_00691fe0();
      iVar5 = FUN_00693a60(local_20,8,0,iVar10,0,&local_24);
      uVar9 = local_20;
      if (local_24 == 0) {
        iVar7 = 0;
        if (0 < iVar10) {
          puVar6 = (undefined2 *)(iVar5 + 4);
          do {
            *(undefined4 *)(puVar6 + -2) = *(undefined4 *)(iVar4 + iVar7 * 8);
            *puVar6 = *(undefined2 *)((iVar4 - iVar5) + (int)puVar6);
            iVar7 = iVar7 + 1;
            puVar6 = puVar6 + 4;
          } while (iVar7 < iVar10);
        }
        *(int *)(param_1 + 0x128) = iVar10;
        *(int *)(param_1 + 300) = iVar5;
        FUN_00691290(local_20,iVar4);
        return local_24;
      }
    }
    FUN_00691290(uVar9,iVar5);
    FUN_00691290(uVar9,iVar4);
    return local_24;
  }
  return 3;
}


/* FUN_006ad220 @ 006ad220  kind=gamemisc  attributed-by=none  size=322 */

void FUN_006ad220(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  uint local_8;
  uint local_4;
  
  iVar1 = FUN_006ac800(param_1,&local_8,&local_4);
  if (iVar1 == 0) {
    local_8 = FUN_00690d40();
    local_4 = local_8 & 0xffffff00;
    if ((((local_4 == 0) || (local_4 == 0x100)) && (iVar1 = FUN_00692010(), iVar1 == 0)) &&
       (iVar1 = FUN_006ac770(), iVar1 == 0)) {
      iVar1 = FUN_006ac770();
      if (iVar1 == 0) {
        if (local_4 == 0x100) {
          iVar1 = FUN_006ac770();
          if (iVar1 == 0) {
            FUN_006ac770();
            return;
          }
        }
        else {
          *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(in_ECX + 0xd8);
          *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(in_ECX + 0xdc);
          *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(in_ECX + 0xe0);
          *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(in_ECX + 0xe4);
          *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(in_ECX + 0xe8);
          *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(in_ECX + 0xec);
          *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(in_ECX + 0xf0);
          *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(in_ECX + 0xf4);
        }
      }
    }
  }
  return;
}


/* FUN_006ad370 @ 006ad370  kind=gamemisc  attributed-by=none  size=467 */

void FUN_006ad370(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *_Dst;
  uint uVar5;
  uint uVar6;
  int unaff_EBX;
  uint uVar7;
  int local_28;
  char *local_24 [4];
  uint local_14 [4];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_28;
  uVar7 = 0;
  local_28 = 0;
  local_24[0] = (char *)0x0;
  local_24[1] = (undefined1 *)0x0;
  local_24[2] = (char *)0x0;
  local_24[3] = (char *)0x0;
  *(undefined4 *)(unaff_EBX + 0xc) = 0;
  iVar3 = FUN_006ac8a0("SLANT");
  if (((iVar3 != 0) && (*(char *)(iVar3 + 4) != '\0')) &&
     ((cVar2 = **(char **)(iVar3 + 8), cVar2 == 'O' ||
      (((cVar2 == 'o' || (cVar2 == 'I')) || (cVar2 == 'i')))))) {
    *(undefined4 *)(unaff_EBX + 0xc) = 1;
    if ((**(char **)(iVar3 + 8) == 'O') || (local_24[2] = "Italic", **(char **)(iVar3 + 8) == 'o'))
    {
      local_24[2] = "Oblique";
    }
  }
  iVar3 = FUN_006ac8a0("WEIGHT_NAME");
  if (((iVar3 != 0) && (*(char *)(iVar3 + 4) != '\0')) &&
     ((**(char **)(iVar3 + 8) == 'B' || (**(char **)(iVar3 + 8) == 'b')))) {
    *(uint *)(unaff_EBX + 0xc) = *(uint *)(unaff_EBX + 0xc) | 2;
    local_24[1] = "Bold";
  }
  iVar3 = FUN_006ac8a0("SETWIDTH_NAME");
  if ((iVar3 != 0) && (*(char *)(iVar3 + 4) != '\0')) {
    cVar2 = **(char **)(iVar3 + 8);
    if ((cVar2 != '\0') && ((cVar2 != 'N' && (cVar2 != 'n')))) {
      local_24[3] = *(char **)(iVar3 + 8);
    }
  }
  iVar3 = FUN_006ac8a0("ADD_STYLE_NAME");
  if ((iVar3 != 0) && (*(char *)(iVar3 + 4) != '\0')) {
    cVar2 = **(char **)(iVar3 + 8);
    if ((cVar2 != '\0') && ((cVar2 != 'N' && (cVar2 != 'n')))) {
      local_24[0] = *(char **)(iVar3 + 8);
    }
  }
  iVar3 = 0;
  uVar6 = 0;
  do {
    pcVar4 = *(char **)((int)local_24 + uVar6);
    *(undefined4 *)((int)local_14 + uVar6) = 0;
    if (pcVar4 != (char *)0x0) {
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      *(int *)((int)local_14 + uVar6) = (int)pcVar4 - (int)pcVar1;
      iVar3 = iVar3 + 1 + ((int)pcVar4 - (int)pcVar1);
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x10);
  if (iVar3 == 0) {
    local_24[0] = "Regular";
    local_14[0] = 7;
    iVar3 = 8;
  }
  _Dst = (undefined1 *)FUN_00692230(*(undefined4 *)(unaff_EBX + 100),iVar3,&local_28);
  *(undefined1 **)(unaff_EBX + 0x18) = _Dst;
  if (local_28 == 0) {
    do {
      pcVar4 = local_24[uVar7];
      uVar6 = local_14[uVar7];
      if (pcVar4 != (char *)0x0) {
        if (_Dst != *(undefined1 **)(unaff_EBX + 0x18)) {
          *_Dst = 0x20;
          _Dst = _Dst + 1;
        }
        memcpy(_Dst,pcVar4,uVar6);
        if (((uVar7 == 0) || (uVar7 == 3)) && (uVar5 = 0, uVar6 != 0)) {
          do {
            if (_Dst[uVar5] == ' ') {
              _Dst[uVar5] = 0x2d;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        _Dst = _Dst + uVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
    *_Dst = 0;
  }
  __security_check_cookie(local_4 ^ (uint)&local_28);
  return;
}


/* FUN_006ad550 @ 006ad550  kind=gamemisc  attributed-by=none  size=844 */

undefined4 FUN_006ad550(void)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  short sVar10;
  undefined4 *unaff_EDI;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = unaff_EDI[0x19];
  local_c = 0;
  local_c = FUN_006ac580();
  if ((((local_c == 0) && (local_c = FUN_006ac920(), local_c == 0)) &&
      ((cVar3 = FUN_006ac880(), cVar3 != '\0' || (local_c = FUN_006ad220(2), local_c == 0)))) &&
     ((((local_c = FUN_006acc20(), local_c == 0 && (local_c = FUN_006acde0(), local_c == 0)) &&
       (local_c = FUN_006acfc0(), local_c == 0)) &&
      ((iVar4 = 0, cVar3 == '\0' || (iVar4 = FUN_006ad220(0x100), iVar4 == 0)))))) {
    local_c = iVar4;
    *unaff_EDI = 1;
    unaff_EDI[1] = 0;
    unaff_EDI[2] = 0x92;
    if (*(char *)((int)unaff_EDI + 199) != '\0') {
      unaff_EDI[2] = 0x96;
    }
    local_c = FUN_006ad370();
    if (local_c == 0) {
      iVar4 = FUN_006ac8a0("FAMILY_NAME");
      if ((iVar4 == 0) || (*(char *)(iVar4 + 4) == '\0')) {
        unaff_EDI[5] = 0;
      }
      else {
        uVar5 = FUN_00691310(local_8,*(undefined4 *)(iVar4 + 8),&local_c);
        unaff_EDI[5] = uVar5;
        if (local_c != 0) {
          return 3;
        }
      }
      unaff_EDI[4] = unaff_EDI[0x48] + 1;
      unaff_EDI[7] = 1;
      psVar6 = (short *)FUN_00693a60(local_8,0x10,0,1,0,&local_c);
      unaff_EDI[8] = psVar6;
      if (local_c == 0) {
        psVar6[0] = 0;
        psVar6[1] = 0;
        psVar6[2] = 0;
        psVar6[3] = 0;
        psVar6[4] = 0;
        psVar6[5] = 0;
        psVar6[6] = 0;
        psVar6[7] = 0;
        local_4 = 0;
        sVar9 = *(short *)(unaff_EDI + 0x34);
        sVar1 = *(short *)(unaff_EDI + 0x33);
        sVar10 = 0;
        *psVar6 = sVar9 + sVar1;
        iVar4 = FUN_006ac8a0("AVERAGE_WIDTH");
        if (iVar4 == 0) {
          lVar2 = (longlong)((short)(sVar9 + sVar1) * 2) * 0x55555556;
          psVar6[1] = (short)((ulonglong)lVar2 >> 0x20) - (short)(lVar2 >> 0x3f);
        }
        else {
          iVar4 = *(int *)(iVar4 + 8) + 5;
          psVar6[1] = ((short)(iVar4 / 10) + (short)(iVar4 >> 0x1f)) -
                      (short)((longlong)iVar4 * 0x66666667 >> 0x3f);
        }
        iVar4 = FUN_006ac8a0("POINT_SIZE");
        if (iVar4 != 0) {
          *(int *)(psVar6 + 2) = (*(int *)(iVar4 + 8) * 0x70800 + 0x8d27) / 0x11a4e;
        }
        iVar4 = FUN_006ac8a0("PIXEL_SIZE");
        if (iVar4 != 0) {
          *(int *)(psVar6 + 6) = (int)*(short *)(iVar4 + 8) << 6;
        }
        iVar4 = FUN_006ac8a0("RESOLUTION_X");
        if (iVar4 == 0) {
          sVar9 = (short)local_4;
        }
        else {
          sVar9 = *(short *)(iVar4 + 8);
        }
        iVar4 = FUN_006ac8a0("RESOLUTION_Y");
        if (iVar4 != 0) {
          sVar10 = *(short *)(iVar4 + 8);
        }
        if (*(int *)(psVar6 + 6) == 0) {
          *(int *)(psVar6 + 6) = *(int *)(psVar6 + 2);
          if (sVar10 != 0) {
            *(int *)(psVar6 + 6) = ((int)sVar10 * *(int *)(psVar6 + 2)) / 0x48;
          }
        }
        if ((sVar9 == 0) || (sVar10 == 0)) {
          *(undefined4 *)(psVar6 + 4) = *(undefined4 *)(psVar6 + 6);
        }
        else {
          *(int *)(psVar6 + 4) = ((int)sVar9 * *(int *)(psVar6 + 6)) / (int)sVar10;
        }
        iVar4 = FUN_006ac8a0("CHARSET_REGISTRY");
        iVar7 = FUN_006ac8a0("CHARSET_ENCODING");
        uVar5 = local_8;
        if ((((iVar4 != 0) && (*(char *)(iVar4 + 4) != '\0')) && (iVar7 != 0)) &&
           (*(char *)(iVar7 + 4) != '\0')) {
          uVar8 = FUN_00691310(local_8,*(undefined4 *)(iVar7 + 8),&local_c);
          unaff_EDI[0x2c] = uVar8;
          if (local_c != 0) {
            return 3;
          }
          uVar5 = FUN_00691310(uVar5,*(undefined4 *)(iVar4 + 8),&local_c);
          unaff_EDI[0x2d] = uVar5;
        }
        if (local_c == 0) {
          return 0;
        }
      }
    }
  }
  return 3;
}


/* FUN_006ad990 @ 006ad990  kind=gamemisc  attributed-by=none  size=306 */

void FUN_006ad990(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = param_1;
  iVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 100);
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 300));
    *(undefined4 *)(param_1 + 300) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x124));
    *(undefined4 *)(param_1 + 0x124) = 0;
    if ((*(int *)(param_1 + 0x11c) != 0) && (0 < *(int *)(param_1 + 0x118))) {
      param_1 = 0;
      do {
        puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x11c) + param_1);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_00691290(uVar1,*puVar4);
          *puVar4 = 0;
          if (*(char *)(puVar4 + 1) != '\0') {
            FUN_00691290(uVar1,puVar4[2]);
            puVar4[2] = 0;
          }
        }
        param_1 = param_1 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar2 + 0x118));
    }
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0x11c));
    *(undefined4 *)(iVar2 + 0x11c) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0xc0));
    *(undefined4 *)(iVar2 + 0xc0) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0x14));
    *(undefined4 *)(iVar2 + 0x14) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0x18));
    *(undefined4 *)(iVar2 + 0x18) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0x20));
    *(undefined4 *)(iVar2 + 0x20) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0xb0));
    *(undefined4 *)(iVar2 + 0xb0) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0xb4));
    *(undefined4 *)(iVar2 + 0xb4) = 0;
    if (*(int *)(iVar2 + 0x68) == iVar2 + 0x84) {
      FUN_006908a0(iVar2 + 0x84);
      *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar2 + 0xac);
    }
  }
  return;
}


/* FUN_006adad0 @ 006adad0  kind=gamemisc  attributed-by=none  size=415 */

undefined4 FUN_006adad0(undefined4 param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 uVar9;
  byte *pbVar10;
  bool bVar11;
  int local_c [3];
  
  iVar4 = FUN_006ad550();
  if (iVar4 != 0) {
    FUN_006ad990(param_2);
    iVar4 = param_2 + 0x84;
    iVar5 = FUN_006cf6b0(iVar4,param_1);
    if (((char)iVar5 == '\a') ||
       ((iVar5 != 0 && ((iVar5 = FUN_006cd080(iVar4,param_1), (char)iVar5 == '\a' || (iVar5 != 0))))
       )) {
LAB_006adb2d:
      FUN_006ad990(param_2);
      return 2;
    }
    *(undefined4 *)(param_2 + 0xac) = param_1;
    *(int *)(param_2 + 0x68) = iVar4;
    iVar4 = FUN_006ad550();
    if (iVar4 != 0) goto LAB_006adb2d;
  }
  pcVar2 = *(char **)(param_2 + 0xb4);
  bVar11 = false;
  bVar3 = false;
  if (((((pcVar2 == (char *)0x0) ||
        (pbVar8 = *(byte **)(param_2 + 0xb0), bVar3 = bVar11, pbVar8 == (byte *)0x0)) ||
       ((*pcVar2 != 'i' && (*pcVar2 != 'I')))) || ((pcVar2[1] != 's' && (pcVar2[1] != 'S')))) ||
     ((pcVar2[2] != 'o' && (pcVar2[2] != 'O')))) goto LAB_006adc2c;
  pbVar7 = (byte *)(pcVar2 + 3);
  pbVar10 = &DAT_007234e0;
  pbVar6 = pbVar7;
  do {
    bVar1 = *pbVar6;
    bVar11 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_006adbc0:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_006adbc5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar11 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_006adbc0;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_006adbc5:
  if (iVar4 != 0) {
    pbVar6 = &DAT_007234d8;
    do {
      bVar1 = *pbVar7;
      bVar11 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_006adbf0:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_006adbf5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar11 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_006adbf0;
      pbVar7 = pbVar7 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_006adbf5:
    if (iVar4 != 0) goto LAB_006adc2c;
    pbVar7 = &DAT_007157e0;
    do {
      bVar1 = *pbVar8;
      bVar11 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_006adc20:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_006adc25;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar11 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_006adc20;
      pbVar8 = pbVar8 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_006adc25:
    if (iVar4 != 0) goto LAB_006adc2c;
  }
  bVar3 = true;
LAB_006adc2c:
  local_c[0] = param_2;
  local_c[1] = 0;
  local_c[2] = 0;
  if (bVar3) {
    local_c[1] = 0x756e6963;
    local_c[2] = 0x10003;
  }
  uVar9 = FUN_00693ed0(&DAT_007332c4,0,local_c,0);
  return uVar9;
}


/* FUN_006adfd0 @ 006adfd0  kind=gamemisc  attributed-by=none  size=89 */

void FUN_006adfd0(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EDI;
  
  uVar1 = *(undefined4 *)(unaff_EDI + 100);
  iVar2 = *(int *)(unaff_EDI + 0x84);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0xa0) != 0) {
      FUN_00691ee0(*(undefined4 *)(unaff_EDI + 0x68),iVar2 + 0xa0);
    }
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0xa8));
    *(undefined4 *)(iVar2 + 0xa8) = 0;
    FUN_00691290(uVar1,iVar2);
    *(undefined4 *)(unaff_EDI + 0x84) = 0;
  }
  return;
}


/* FUN_006ae030 @ 006ae030  kind=gamemisc  attributed-by=none  size=187 */

int FUN_006ae030(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = FUN_006908c0();
  if ((iVar2 != 0) || (iVar2 = FUN_00692010(), iVar2 != 0)) {
    return iVar2;
  }
  sVar1 = *(short *)(in_EAX + 4);
  if (((sVar1 == 0x200) || (sVar1 == 0x300)) &&
     (((*(short *)(in_EAX + 4) != 0x300) - 1 & 0x1e) + 0x76 <= *(uint *)(in_EAX + 8))) {
    if (sVar1 == 0x200) {
      *(undefined4 *)(in_EAX + 0x84) = 0;
      *(undefined4 *)(in_EAX + 0x88) = 0;
      *(undefined4 *)(in_EAX + 0x8c) = 0;
    }
    if ((*(byte *)(in_EAX + 0x48) & 1) == 0) {
      iVar2 = FUN_006908c0();
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_00693a30();
      return iVar2;
    }
  }
  return 2;
}


/* FUN_006ae0f0 @ 006ae0f0  kind=gamemisc  attributed-by=none  size=1770 */

void FUN_006ae0f0(uint param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint *in_ECX;
  ushort uVar8;
  int iVar9;
  uint *puVar10;
  undefined1 auStack_bc [4];
  int local_b8;
  uint *local_b4;
  int local_b0;
  short local_ac;
  ushort local_aa;
  uint local_a8;
  short local_a4;
  ushort local_a2;
  ushort local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined1 local_8c [4];
  uint local_88;
  int local_84;
  uint local_80;
  undefined1 local_7c [4];
  int local_78;
  undefined1 local_74 [8];
  int local_6c;
  int local_64;
  int local_60;
  short local_5c;
  ushort local_5a;
  short local_58;
  short local_56;
  int local_54;
  undefined1 local_4c [12];
  ushort local_40;
  ushort local_3e;
  undefined1 local_3c [12];
  ushort local_30;
  ushort local_2e;
  undefined1 local_2c [12];
  ushort local_20;
  ushort local_1e;
  int local_1c;
  undefined4 local_18;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_bc;
  local_9c = in_ECX[0x19];
  uVar2 = in_ECX[0x1a];
  in_ECX[0x21] = 0;
  local_b4 = in_ECX;
  local_b8 = FUN_006908c0(uVar2,0);
  if ((local_b8 != 0) || (iVar4 = FUN_00692010(uVar2,&DAT_00733390,&local_ac), iVar4 != 0))
  goto LAB_006ae7c5;
  local_b8 = 2;
  if (local_ac == 0x5a4d) {
    local_b8 = FUN_006908c0(uVar2,local_aa);
    if ((local_b8 != 0) || (iVar4 = FUN_00692010(uVar2,&DAT_007333a4,&local_a4), iVar4 != 0))
    goto LAB_006ae7c5;
    local_b8 = 2;
    if (local_a4 == 0x454e) {
      local_b0 = 0;
      local_b8 = FUN_006908c0(uVar2,(uint)local_a2 + (uint)local_aa);
      if ((local_b8 != 0) ||
         (local_b8 = FUN_00691f30(uVar2,(uint)local_a0 - (uint)local_a2), local_b8 != 0))
      goto LAB_006ae7c5;
      local_a8 = FUN_00690a70(uVar2);
      local_a8 = local_a8 & 0xffff;
      sVar3 = FUN_00690a70(uVar2);
      while (uVar5 = 0, sVar3 != 0) {
        uVar5 = FUN_00690a70(uVar2);
        uVar5 = uVar5 & 0xffff;
        if (sVar3 == -0x7ff8) {
          iVar4 = FUN_00690930(uVar2);
          local_b0 = iVar4 + 4 + (*(int *)(uVar2 + 0x20) - *(int *)(uVar2 + 0x24));
          break;
        }
        *(int *)(uVar2 + 0x20) = *(int *)(uVar2 + 0x20) + uVar5 * 0xc + 4;
        sVar3 = FUN_00690a70();
      }
      FUN_00691fe0(uVar2);
      puVar10 = local_b4;
      iVar4 = local_b8;
      if ((((short)uVar5 == 0) || (local_b0 == 0)) ||
         (*(uint *)(uVar2 + 4) <= uVar5 * 0x76 && uVar5 * 0x76 - *(uint *)(uVar2 + 4) != 0))
      goto LAB_006ae441;
      *local_b4 = uVar5;
      if ((int)uVar5 <= (int)param_1) goto LAB_006ae2af;
      if ((int)param_1 < 0) goto LAB_006ae7c5;
      uVar5 = FUN_00692230(local_9c,0xac,&local_b8);
      puVar10[0x21] = uVar5;
      if (local_b8 != 0) goto LAB_006ae7c5;
      local_b8 = FUN_006908c0(uVar2,local_b0 + param_1 * 0xc);
      if ((local_b8 != 0) || (local_b8 = FUN_00691f30(uVar2,0xc), uVar5 = local_a8, local_b8 != 0))
      goto LAB_006ae7ba;
      uVar6 = FUN_00690a70(uVar2);
      *(uint *)local_b4[0x21] = (uVar6 & 0xffff) << ((byte)uVar5 & 0x1f);
      uVar6 = FUN_00690a70(uVar2);
      *(uint *)(local_b4[0x21] + 0xa4) = (uVar6 & 0xffff) << ((byte)uVar5 & 0x1f);
      *(int *)(uVar2 + 0x20) = *(int *)(uVar2 + 0x20) + 8;
      FUN_00691fe0(uVar2);
      local_b8 = FUN_006ae030();
      puVar10 = local_b4;
    }
    else {
      puVar10 = in_ECX;
      if (local_a4 == 0x4550) {
        local_b8 = FUN_006908c0(uVar2,local_aa);
        if ((local_b8 == 0) &&
           (local_b8 = FUN_00692010(uVar2,&DAT_007333bc,&local_60), local_b8 == 0)) {
          iVar4 = 0;
          if ((local_60 == 0x4550) &&
             (((local_5c == 0x14c && (local_58 == 0xe0)) && (local_56 == 0x10b)))) {
            *in_ECX = 0;
            uVar8 = 0;
            if (local_5a != 0) {
              do {
                local_b8 = 0;
                local_b8 = FUN_00692010(uVar2,&DAT_007333f0,local_74);
                if (local_b8 != 0) goto LAB_006ae7c5;
                if (local_54 == local_6c) {
                  local_b8 = FUN_006908c0(uVar2,local_64);
                  if ((local_b8 != 0) ||
                     (local_b8 = FUN_00692010(uVar2,&DAT_00733410,local_4c), local_b8 != 0))
                  goto LAB_006ae7c5;
                  local_b0 = local_64;
                  local_a8 = 0;
                  puVar10 = local_b4;
                  if ((uint)local_3e + (uint)local_40 == 0) goto LAB_006ae79d;
                  uVar5 = 0;
                  local_b8 = 0;
                  goto LAB_006ae4bc;
                }
                uVar8 = uVar8 + 1;
                iVar4 = 0;
              } while (uVar8 < local_5a);
            }
          }
          goto LAB_006ae441;
        }
        goto LAB_006ae7c5;
      }
    }
    goto LAB_006ae79d;
  }
  goto LAB_006ae7ba;
  while( true ) {
    iVar4 = 0;
    if (-1 < (int)local_80) goto LAB_006ae441;
    local_80 = local_80 & 0x7fffffff;
    iVar9 = local_80 + local_64;
    local_90 = iVar9;
    local_b8 = FUN_006908c0(uVar2,iVar9);
    if ((local_b8 != 0) || (local_b8 = FUN_00692010(uVar2,&DAT_00733410,local_3c), local_b8 != 0))
    goto LAB_006ae7c5;
    local_94 = 0;
    if ((uint)local_2e + (uint)local_30 != 0) {
      uVar5 = 0;
      local_b8 = 0;
      local_94 = 0;
      do {
        local_b8 = FUN_006908c0(uVar2,iVar9 + 0x10 + uVar5 * 8);
        if ((local_b8 != 0) ||
           (local_b8 = FUN_00692010(uVar2,&DAT_00733430,local_8c), local_b8 != 0))
        goto LAB_006ae7c5;
        iVar4 = 0;
        if (-1 < (int)local_88) goto LAB_006ae441;
        local_88 = local_88 & 0x7fffffff;
        iVar1 = local_88 + local_64;
        local_b8 = FUN_006908c0(uVar2,iVar1);
        if ((local_b8 != 0) ||
           (local_b8 = FUN_00692010(uVar2,&DAT_00733410,local_2c), local_b8 != 0))
        goto LAB_006ae7c5;
        local_98 = 0;
        if ((uint)local_1e + (uint)local_20 != 0) {
          uVar5 = 0;
          local_b8 = 0;
          local_98 = 0;
          do {
            local_b8 = FUN_006908c0(uVar2,iVar1 + 0x10 + uVar5 * 8);
            if ((local_b8 != 0) ||
               (local_b8 = FUN_00692010(uVar2,&DAT_00733430,local_7c), local_b8 != 0))
            goto LAB_006ae7c5;
            iVar4 = 0;
            if ((local_88 & 0x80000000) != 0) goto LAB_006ae441;
            if (local_84 == 8) {
              local_b8 = FUN_006908c0(uVar2,local_78 + local_b0);
              if ((local_b8 != 0) ||
                 (local_b8 = FUN_00692010(uVar2,&DAT_00733440,&local_1c), puVar10 = local_b4,
                 local_b8 != 0)) goto LAB_006ae7c5;
              if (param_1 == *local_b4) {
                piVar7 = (int *)FUN_00692230(local_9c,0xac,&local_b8);
                puVar10[0x21] = (uint)piVar7;
                if (local_b8 != 0) goto LAB_006ae7c5;
                *piVar7 = (local_1c - local_6c) + local_64;
                *(undefined4 *)(puVar10[0x21] + 0xa4) = local_18;
                local_b8 = FUN_006ae030();
                if (local_b8 != 0) goto LAB_006ae7ba;
              }
              *puVar10 = *puVar10 + 1;
            }
            local_98 = local_98 + 1;
            uVar5 = local_98 & 0xffff;
            iVar9 = local_90;
          } while (uVar5 < (uint)local_1e + (uint)local_20);
        }
        local_94 = local_94 + 1;
        uVar5 = local_94 & 0xffff;
      } while (uVar5 < (uint)local_2e + (uint)local_30);
    }
    local_a8 = local_a8 + 1;
    uVar5 = local_a8 & 0xffff;
    puVar10 = local_b4;
    if ((uint)local_3e + (uint)local_40 <= uVar5) break;
LAB_006ae4bc:
    local_b8 = FUN_006908c0(uVar2,local_b0 + 0x10 + uVar5 * 8);
    if ((local_b8 != 0) || (local_b8 = FUN_00692010(uVar2,&DAT_00733430,&local_84), local_b8 != 0))
    goto LAB_006ae7c5;
  }
LAB_006ae79d:
  iVar4 = local_b8;
  if (*puVar10 == 0) {
LAB_006ae441:
    local_b8 = iVar4;
    __security_check_cookie(local_c ^ (uint)auStack_bc);
    return;
  }
  if ((int)*puVar10 <= (int)param_1) {
LAB_006ae2af:
    __security_check_cookie(local_c ^ (uint)auStack_bc);
    return;
  }
  if (local_b8 == 0) goto LAB_006ae7c5;
LAB_006ae7ba:
  FUN_006adfd0();
LAB_006ae7c5:
  __security_check_cookie(local_c ^ (uint)auStack_bc);
  return;
}


/* FUN_006af220 @ 006af220  kind=gamemisc  attributed-by=none  size=238 */

void FUN_006af220(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x60) + 0x28);
  FUN_006af1a0();
  iVar1 = (**(code **)(iVar1 + 0x50))
                    (*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_2 + 0x2c),param_3,
                     param_4 | 8);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xa0);
    puVar3 = (undefined4 *)(iVar1 + 0x18);
    puVar4 = (undefined4 *)(param_1 + 0x18);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar1 + 0x6c);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar1 + 0x70);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar1 + 0x74);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar1 + 0x78);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar1 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar1 + 100);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar1 + 0x68);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar1 + 0x80);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar1 + 0x84);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar1 + 0x88);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar1 + 0x8c);
  }
  return;
}


/* FUN_006af480 @ 006af480  kind=gamemisc  attributed-by=none  size=33 */

undefined4 FUN_006af480(void)

{
  char in_AL;
  
  if ((((in_AL != ' ') && (in_AL != '\t')) && (in_AL != '\r')) &&
     (((in_AL != '\n' && (in_AL != '\f')) && (in_AL != '\0')))) {
    return 0;
  }
  return 1;
}


/* FUN_006af4b0 @ 006af4b0  kind=gamemisc  attributed-by=none  size=243 */

void FUN_006af4b0(int param_1,int param_2)

{
  undefined2 extraout_var;
  int iVar1;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_1c;
  (**(code **)(param_2 + 0x34))(param_2,6,&local_1c,3);
  iVar1 = (uStack_10 ^ (int)uStack_10 >> 0x1f) - ((int)uStack_10 >> 0x1f);
  FUN_0068ec40(0x3e80000,iVar1);
  *(undefined2 *)(param_1 + 0x44) = extraout_var;
  if (iVar1 != 0x10000) {
    local_1c = FUN_0068ec40(local_1c,iVar1);
    uStack_18 = FUN_0068ec40(uStack_18,iVar1);
    uStack_14 = FUN_0068ec40(uStack_14,iVar1);
    iStack_c = FUN_0068ec40(iStack_c,iVar1);
    iStack_8 = FUN_0068ec40(iStack_8,iVar1);
    uStack_10 = 0x10000;
  }
  *(undefined4 *)(param_1 + 0x1b4) = local_1c;
  *(uint *)(param_1 + 0x1c0) = uStack_10;
  *(undefined4 *)(param_1 + 0x1bc) = uStack_18;
  *(undefined4 *)(param_1 + 0x1b8) = uStack_14;
  *(int *)(param_1 + 0x1c4) = iStack_c >> 0x10;
  *(int *)(param_1 + 0x1c8) = iStack_8 >> 0x10;
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}


/* FUN_006af5b0 @ 006af5b0  kind=gamemisc  attributed-by=none  size=802 */

void FUN_006af5b0(int param_1,int *param_2)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte extraout_CL;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iStack_10;
  byte *local_c;
  uint uStack_8;
  undefined4 *local_4;
  
  local_4 = *(undefined4 **)(param_1 + 0x1e8);
  pbVar1 = (byte *)param_2[2];
  local_c = pbVar1;
  (*(code *)param_2[7])(param_2);
  pbVar9 = (byte *)*param_2;
  if (pbVar9 < pbVar1) {
    bVar6 = *pbVar9;
    if ((bVar6 - 0x30 < 10) || (bVar6 == 0x5b)) {
      iVar3 = param_2[4];
      if (bVar6 != 0x5b) {
        uStack_8 = (*(code *)param_2[9])(param_2);
      }
      else {
        uStack_8 = 0x100;
        *param_2 = (int)(pbVar9 + 1);
      }
      uVar8 = uStack_8;
      bVar2 = bVar6 == 0x5b;
      (*(code *)param_2[7])(param_2);
      if ((byte *)*param_2 < local_c) {
        *(uint *)(param_1 + 0x174) = uVar8;
        param_2[0x16] = uVar8;
        uVar4 = FUN_00693a60(iVar3,2,0,uVar8,0,&iStack_10);
        *(undefined4 *)(param_1 + 0x180) = uVar4;
        if (iStack_10 == 0) {
          uVar4 = FUN_00693a60(iVar3,4,0,uVar8,0,&iStack_10);
          *(undefined4 *)(param_1 + 0x184) = uVar4;
          if ((iStack_10 == 0) &&
             (iStack_10 = (**(code **)*local_4)(param_2 + 0x17,uVar8,iVar3), iStack_10 == 0)) {
            uVar7 = 0;
            iStack_10 = 0;
            if (uVar8 != 0) {
              do {
                (*(code *)param_2[0x22])(param_2 + 0x17,uVar7,".notdef",8);
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar8);
            }
            uVar8 = 0;
            local_4 = (undefined4 *)0x0;
            (*(code *)param_2[7])(param_2);
            if ((byte *)*param_2 < local_c) {
              while( true ) {
                pbVar9 = (byte *)*param_2;
                bVar6 = *pbVar9;
                if ((((bVar6 == 100) && (pbVar9 + 3 < local_c)) && (pbVar9[1] == 0x65)) &&
                   ((pbVar9[2] == 0x66 && (iVar3 = FUN_006af480(), bVar6 = extraout_CL, iVar3 != 0))
                   )) {
                  *(undefined4 *)(param_1 + 0x170) = 1;
                  *param_2 = (int)(pbVar9 + 3);
                  return;
                }
                if (bVar6 == 0x5d) break;
                uVar7 = uVar8;
                if (bVar6 - 0x30 < 10) {
                  if (!bVar2) {
                    uVar7 = (*(code *)param_2[9])(param_2);
                    (*(code *)param_2[7])(param_2);
                  }
LAB_006af80c:
                  pbVar9 = (byte *)*param_2;
                  if (((*pbVar9 == 0x2f) && (pbVar9 + 2 < local_c)) && (uVar8 < uStack_8)) {
                    pbVar9 = pbVar9 + 1;
                    *param_2 = (int)pbVar9;
                    (*(code *)param_2[8])(param_2);
                    if (param_2[3] != 0) {
                      return;
                    }
                    iVar3 = *param_2;
                    iVar5 = (*(code *)param_2[0x22])
                                      (param_2 + 0x17,uVar7,pbVar9,(iVar3 - (int)pbVar9) + 1);
                    param_2[3] = iVar5;
                    if (iVar5 != 0) {
                      return;
                    }
                    uVar8 = (int)local_4 + 1;
                    *(undefined1 *)(*(int *)(param_2[0x1d] + uVar7 * 4) + (iVar3 - (int)pbVar9)) = 0
                    ;
                    local_4 = (undefined4 *)uVar8;
                  }
                }
                else {
                  if (bVar2) goto LAB_006af80c;
                  (*(code *)param_2[8])(param_2);
                  if (param_2[3] != 0) {
                    return;
                  }
                }
                (*(code *)param_2[7])(param_2);
                if (local_c <= (byte *)*param_2) {
                  *(undefined4 *)(param_1 + 0x170) = 1;
                  *param_2 = (int)pbVar9;
                  return;
                }
              }
              pbVar9 = pbVar9 + 1;
            }
            *(undefined4 *)(param_1 + 0x170) = 1;
            *param_2 = (int)pbVar9;
            return;
          }
        }
        param_2[3] = iStack_10;
      }
      return;
    }
    if ((pbVar9 + 0x11 < pbVar1) &&
       (iVar3 = strncmp((char *)pbVar9,"StandardEncoding",0x10), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x170) = 2;
      return;
    }
    if ((pbVar9 + 0xf < pbVar1) &&
       (iVar3 = strncmp((char *)pbVar9,"ExpertEncoding",0xe), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x170) = 4;
      return;
    }
    if ((pbVar9 + 0x12 < pbVar1) &&
       (iVar3 = strncmp((char *)pbVar9,"ISOLatin1Encoding",0x11), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x170) = 3;
      return;
    }
  }
  param_2[3] = 3;
  return;
}


/* FUN_006af8e0 @ 006af8e0  kind=gamemisc  attributed-by=none  size=998 */

void FUN_006af8e0(int param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uStack_30;
  int local_2c;
  uint uStack_28;
  uint uStack_24;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  byte *pbStack_14;
  char *local_10;
  int iStack_c;
  uint uStack_8;
  int iStack_4;
  
  local_20 = param_2[4];
  pcVar3 = (char *)param_2[2];
  uVar13 = 0;
  uVar12 = 0;
  local_2c = 0;
  bVar5 = false;
  local_10 = pcVar3;
  (*(code *)param_2[7])(param_2);
  pcVar4 = (char *)*param_2;
  if ((pcVar4 < pcVar3) && (cVar1 = *pcVar4, *param_2 = (uint)(pcVar4 + 1), cVar1 == '[')) {
    (*(code *)param_2[7])(param_2);
    uVar10 = 0;
    iStack_18 = 0;
    uStack_28 = 0;
    iStack_c = 0;
    uStack_24 = 0;
    if ((char *)*param_2 < local_10) {
      do {
        pbStack_14 = (byte *)*param_2;
        bVar2 = *pbStack_14;
        if (bVar2 == 0x5d) {
          *param_2 = *param_2 + 1;
          goto LAB_006afcac;
        }
        if (bVar2 == 0x3c) {
          (*(code *)param_2[8])(param_2);
          if (param_2[3] != 0) goto LAB_006afcac;
          iVar11 = (int)((*param_2 - (int)pbStack_14) + -1) / 2;
          local_2c = FUN_00693a60(local_20,1,iStack_c,iVar11,local_2c,&uStack_30);
          if (uStack_30 != 0) goto LAB_006afca9;
          *param_2 = (uint)pbStack_14;
          bVar5 = true;
          (*(code *)param_2[0xb])(param_2,local_2c,iVar11,&uStack_8,1);
          uStack_28 = uStack_8;
          uVar10 = uStack_24;
          iStack_c = iVar11;
        }
        else if (bVar2 - 0x30 < 10) {
          if (!bVar5) {
            uStack_28 = (*(code *)param_2[9])(param_2);
            (*(code *)param_2[8])(param_2);
            if (param_2[3] != 0) {
              return;
            }
            local_2c = *param_2 + 1;
            pcVar3 = (char *)(*param_2 + 1 + uStack_28);
            *param_2 = (uint)pcVar3;
            if (pcVar3 < local_10) goto LAB_006afa51;
          }
          uStack_30 = 3;
          goto LAB_006afca9;
        }
LAB_006afa51:
        if (local_2c == 0) {
LAB_006afc9c:
          uStack_30 = 3;
          goto LAB_006afca9;
        }
        if (*(char *)((uStack_28 - 1) + local_2c) == '\0') {
          uVar8 = uStack_28 & 0x80000001;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
          }
          if (uVar8 == 1) {
            uStack_28 = uStack_28 - 1;
          }
        }
        if (uStack_28 == 0) goto LAB_006afc9c;
        pbStack_14 = (byte *)0x0;
        if (0 < (int)uStack_28) {
          do {
            if (iStack_18 == 0) {
              iVar11 = *(int *)(param_1 + 0x1ec);
              if (0xb < uVar10) {
                uVar12 = (uint)*(byte *)(iVar11 + 4) * 0x10 + (uint)*(byte *)(iVar11 + 5);
                uVar13 = uVar12 * 0x10 + 0xc;
                iStack_18 = 1;
                uVar7 = FUN_00693a60(local_20,1,0xc,uVar13,iVar11,&uStack_30);
                *(undefined4 *)(param_1 + 0x1ec) = uVar7;
                if (uStack_30 == 0) goto LAB_006afb1d;
                goto LAB_006afca9;
              }
              *(byte *)(uVar10 + iVar11) = pbStack_14[local_2c];
LAB_006afc4d:
              uVar10 = uVar10 + 1;
              uStack_24 = uVar10;
            }
            else {
              if (iStack_18 == 1) {
LAB_006afb1d:
                if (uVar10 < uVar13) {
LAB_006afc3d:
                  *(byte *)(uVar10 + *(int *)(param_1 + 0x1ec)) = pbStack_14[local_2c];
                  goto LAB_006afc4d;
                }
                iVar11 = 0;
                iStack_18 = 0;
                iStack_1c = 0;
                if (1 < uVar12) {
                  puVar6 = (undefined1 *)(*(int *)(param_1 + 0x1ec) + 0x1a);
                  iVar9 = (uVar12 - 2 >> 1) + 1;
                  iVar11 = iVar9 * 2;
                  do {
                    iStack_18 = iStack_18 +
                                (CONCAT31(CONCAT21(CONCAT11(puVar6[-2],puVar6[-1]),*puVar6),
                                          puVar6[1]) + 3U & 0xfffffffc);
                    iStack_1c = iStack_1c +
                                (CONCAT31(CONCAT21(CONCAT11(puVar6[0xe],puVar6[0xf]),puVar6[0x10]),
                                          puVar6[0x11]) + 3U & 0xfffffffc);
                    puVar6 = puVar6 + 0x20;
                    iVar9 = iVar9 + -1;
                    uVar10 = uStack_24;
                    iStack_4 = iVar11;
                  } while (iVar9 != 0);
                }
                if (iVar11 < (int)uVar12) {
                  iVar9 = *(int *)(param_1 + 0x1ec) + 0x18 + iVar11 * 0x10;
                  uVar13 = uVar13 + (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                                 (*(int *)(param_1 + 0x1ec) + 0x18 +
                                                                 iVar11 * 0x10),
                                                                *(undefined1 *)(iVar9 + 1)),
                                                       *(undefined1 *)(iVar9 + 2)),
                                              *(undefined1 *)(iVar9 + 3)) + 3U & 0xfffffffc);
                }
                uVar13 = uVar13 + iStack_1c + iStack_18;
                iStack_18 = 2;
                *(uint *)(param_1 + 0x1f0) = uVar13;
                uVar7 = FUN_00693a60(local_20,1,uVar12 * 0x10 + 0xc,uVar13 + 1,
                                     *(undefined4 *)(param_1 + 0x1ec),&uStack_30);
                *(undefined4 *)(param_1 + 0x1ec) = uVar7;
                if (uStack_30 == 0) goto LAB_006afc39;
                goto LAB_006afca9;
              }
              if (iStack_18 == 2) {
LAB_006afc39:
                if (uVar10 < uVar13) goto LAB_006afc3d;
                goto LAB_006afc9c;
              }
            }
            pbStack_14 = pbStack_14 + 1;
          } while ((int)pbStack_14 < (int)uStack_28);
        }
        (*(code *)param_2[7])(param_2);
      } while ((char *)*param_2 < local_10);
    }
  }
  uStack_30 = 3;
LAB_006afca9:
  param_2[3] = uStack_30;
LAB_006afcac:
  if (bVar5) {
    FUN_00691290(local_20,local_2c);
  }
  return;
}


/* FUN_006afcd0 @ 006afcd0  kind=gamemisc  attributed-by=none  size=1054 */

void FUN_006afcd0(uint param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  byte extraout_CL;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  int iStack_c;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1e8);
  pbVar8 = (byte *)param_2[2];
  iVar4 = param_2[4];
  param_1 = 0;
  bVar11 = false;
  (*(code *)param_2[7])(param_2);
  if ((byte *)*param_2 < pbVar8) {
    bVar6 = *(byte *)*param_2;
    if (bVar6 - 0x30 < 10) {
      iVar3 = (*(code *)param_2[9])(param_2);
      param_2[0x24] = iVar3;
      if (param_2[3] != 0) {
        return;
      }
LAB_006afdb5:
      if ((byte *)*param_2 < pbVar8) {
        iVar3 = (**(code **)*puVar2)(param_2 + 0x32,param_2[0x24],iVar4);
        if (((iVar3 != 0) ||
            (iVar3 = (**(code **)*puVar2)(param_2 + 0x25,param_2[0x24],iVar4), iVar3 != 0)) ||
           (iVar3 = (**(code **)*puVar2)(param_2 + 0x3f,4,iVar4), iVar3 != 0)) goto LAB_006b00e3;
        uVar9 = 0;
        (*(code *)param_2[7])(param_2);
        pbVar7 = (byte *)*param_2;
        while (((pbVar7 < pbVar8 &&
                (((bVar6 = *pbVar7, bVar6 != 0x65 || (pbVar8 <= pbVar7 + 3)) ||
                 ((pbVar7[1] != 0x6e ||
                  ((pbVar7[2] != 100 || (iVar4 = FUN_006af480(), bVar6 = extraout_CL, iVar4 == 0))))
                 )))) && (bVar6 != 0x3e))) {
          (*(code *)param_2[8])(param_2);
          if (param_2[3] != 0) {
            return;
          }
          if (*pbVar7 == 0x2f) {
            pbVar7 = pbVar7 + 1;
            if (pbVar8 <= pbVar7) goto LAB_006b00de;
            iVar4 = *param_2;
            iVar3 = (*(code *)param_2[0x30])(param_2 + 0x25,uVar9,pbVar7,(iVar4 - (int)pbVar7) + 1);
            if (iVar3 != 0) goto LAB_006b00e3;
            *(undefined1 *)((iVar4 - (int)pbVar7) + *(int *)(param_2[0x2b] + uVar9 * 4)) = 0;
            if (*pbVar7 == 0x2e) {
              pbVar7 = *(byte **)(param_2[0x2b] + uVar9 * 4);
              pcVar5 = ".notdef";
              do {
                bVar6 = *pcVar5;
                bVar10 = bVar6 < *pbVar7;
                if (bVar6 != *pbVar7) {
LAB_006afef0:
                  iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_006afef5;
                }
                if (bVar6 == 0) break;
                bVar6 = pcVar5[1];
                bVar10 = bVar6 < pbVar7[1];
                if (bVar6 != pbVar7[1]) goto LAB_006afef0;
                pcVar5 = pcVar5 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar6 != 0);
              iVar4 = 0;
LAB_006afef5:
              if (iVar4 == 0) {
                bVar11 = true;
                param_1 = uVar9;
              }
            }
            (*(code *)param_2[7])(param_2);
            iVar4 = *param_2;
            (*(code *)param_2[9])(param_2);
            pbVar7 = (byte *)*param_2;
            if (pbVar8 <= pbVar7) goto LAB_006b00de;
            iVar3 = (*(code *)param_2[0x3d])(param_2 + 0x32,uVar9,iVar4,pbVar7 + (1 - iVar4));
            if (iVar3 != 0) goto LAB_006b00e3;
            iVar3 = uVar9 * 4;
            uVar9 = uVar9 + 1;
            pbVar7[*(int *)(param_2[0x38] + iVar3) - iVar4] = 0;
            if ((uint)param_2[0x24] <= uVar9) break;
          }
          (*(code *)param_2[7])(param_2);
          pbVar7 = (byte *)*param_2;
        }
        param_2[0x24] = uVar9;
        if (bVar11) {
          pcVar5 = ".notdef";
          pbVar8 = *(byte **)param_2[0x2b];
          do {
            bVar6 = *pcVar5;
            bVar11 = bVar6 < *pbVar8;
            if (bVar6 != *pbVar8) {
LAB_006affb0:
              iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_006affb5;
            }
            if (bVar6 == 0) break;
            bVar6 = pcVar5[1];
            bVar11 = bVar6 < pbVar8[1];
            if (bVar6 != pbVar8[1]) goto LAB_006affb0;
            pcVar5 = pcVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar6 != 0);
          iVar4 = 0;
LAB_006affb5:
          if (iVar4 == 0) {
            return;
          }
          piVar1 = param_2 + 0x3f;
          iVar3 = (*(code *)param_2[0x4a])
                            (piVar1,0,*(byte **)param_2[0x2b],*(undefined4 *)param_2[0x2c]);
          if (iVar3 == 0) {
            iVar3 = (*(code *)param_2[0x4a])
                              (piVar1,1,*(undefined4 *)param_2[0x38],*(undefined4 *)param_2[0x39]);
            if (((((iVar3 == 0) &&
                  (iVar3 = (*(code *)param_2[0x4a])
                                     (piVar1,2,*(undefined4 *)(param_2[0x2b] + param_1 * 4),
                                      *(undefined4 *)(param_2[0x2c] + param_1 * 4)), iVar3 == 0)) &&
                 (iVar3 = (*(code *)param_2[0x4a])
                                    (piVar1,3,*(undefined4 *)(param_2[0x38] + param_1 * 4),
                                     *(undefined4 *)(param_2[0x39] + param_1 * 4)), iVar3 == 0)) &&
                ((iVar3 = (*(code *)param_2[0x30])
                                    (param_2 + 0x25,param_1,*(undefined4 *)param_2[0x45],
                                     *(undefined4 *)param_2[0x46]), iVar3 == 0 &&
                 (iVar3 = (*(code *)param_2[0x3d])
                                    (param_2 + 0x32,param_1,*(undefined4 *)(param_2[0x45] + 4),
                                     *(undefined4 *)(param_2[0x46] + 4)), iVar3 == 0)))) &&
               ((iVar3 = (*(code *)param_2[0x30])
                                   (param_2 + 0x25,0,*(undefined4 *)(param_2[0x45] + 8),
                                    *(undefined4 *)(param_2[0x46] + 8)), iVar3 == 0 &&
                (iVar3 = (*(code *)param_2[0x3d])
                                   (param_2 + 0x32,0,*(undefined4 *)(param_2[0x45] + 0xc),
                                    *(undefined4 *)(param_2[0x46] + 0xc)), iVar3 == 0)))) {
              return;
            }
          }
          goto LAB_006b00e3;
        }
      }
    }
    else if (bVar6 == 0x3c) {
      iStack_c = 0;
      (*(code *)param_2[8])(param_2);
      if (param_2[3] != 0) {
        return;
      }
      (*(code *)param_2[7])(param_2);
      pbVar7 = (byte *)*param_2;
      if (pbVar7 < pbVar8) {
        do {
          if (*(char *)*param_2 == '/') {
            iStack_c = iStack_c + 1;
          }
          else if (*(char *)*param_2 == '>') {
            param_2[0x24] = iStack_c;
            *param_2 = (int)pbVar7;
            break;
          }
          (*(code *)param_2[8])(param_2);
          if (param_2[3] != 0) {
            return;
          }
          (*(code *)param_2[7])(param_2);
        } while ((byte *)*param_2 < pbVar8);
        goto LAB_006afdb5;
      }
    }
  }
LAB_006b00de:
  iVar3 = 3;
LAB_006b00e3:
  param_2[3] = iVar3;
  return;
}


/* FUN_006b00f0 @ 006b00f0  kind=gamemisc  attributed-by=none  size=122 */

undefined4 FUN_006b00f0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(in_EAX + 8);
  if (iVar1 == 10) {
    (**(code **)(in_EAX + 0xc))();
    return *(undefined4 *)(unaff_ESI + 0xc);
  }
  if ((iVar1 != 8) && (iVar1 != 9)) {
    uVar2 = (**(code **)(unaff_ESI + 0x40))();
    return uVar2;
  }
  uVar2 = (**(code **)(unaff_ESI + 0x44))();
  return uVar2;
}


/* FUN_006b0170 @ 006b0170  kind=gamemisc  attributed-by=none  size=505 */

uint FUN_006b0170(void)

{
  int *piVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  uint in_ECX;
  int *piVar4;
  uint *in_EDX;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  char *_Str1;
  int *piVar9;
  undefined **ppuStack_18;
  int iStack_4;
  
  *in_EDX = in_ECX;
  pcVar6 = (char *)(in_ECX + in_EAX);
  in_EDX[2] = (uint)pcVar6;
  in_EDX[3] = 0;
  (*(code *)in_EDX[7])();
  pcVar7 = (char *)*in_EDX;
  while (pcVar7 < pcVar6) {
    pcVar7 = (char *)*in_EDX;
    if (((*pcVar7 == 'F') && (pcVar7 + 0x19 < pcVar6)) &&
       (iVar3 = strncmp(pcVar7,"FontDirectory",0xd), iVar3 == 0)) {
      (*(code *)in_EDX[8])();
      (*(code *)in_EDX[7])();
      pcVar7 = (char *)*in_EDX;
      _Str1 = pcVar7;
      if (pcVar7 < pcVar6) {
        do {
          if (((*_Str1 == 'k') && (_Str1 + 5 < pcVar6)) &&
             (iVar3 = strncmp(_Str1,"known",5), iVar3 == 0)) {
            if (_Str1 < pcVar6) {
              (*(code *)in_EDX[8])();
              (*(code *)in_EDX[0xe])();
              if (iStack_4 == 3) {
                pcVar7 = (char *)*in_EDX;
              }
            }
            goto LAB_006b024f;
          }
          (*(code *)in_EDX[8])();
          if (in_EDX[3] != 0) goto LAB_006b035e;
          (*(code *)in_EDX[7])();
          _Str1 = (char *)*in_EDX;
        } while (_Str1 < pcVar6);
        *in_EDX = (uint)pcVar7;
      }
      else {
LAB_006b024f:
        *in_EDX = (uint)pcVar7;
      }
    }
    else if ((*pcVar7 == '/') && (pcVar7 + 2 < pcVar6)) {
      piVar9 = (int *)(pcVar7 + 1);
      *in_EDX = (uint)piVar9;
      (*(code *)in_EDX[8])();
      if (in_EDX[3] != 0) break;
      uVar8 = (int)*in_EDX - (int)piVar9;
      if ((uVar8 - 1 < 0x15) && ((char *)*in_EDX < pcVar6)) {
        ppuStack_18 = &PTR_s_version_00733640;
        do {
          piVar5 = (int *)*ppuStack_18;
          if ((piVar5 != (int *)0x0) && ((char)*piVar9 == (char)*piVar5)) {
            piVar4 = piVar5;
            do {
              iVar3 = *piVar4;
              piVar4 = (int *)((int)piVar4 + 1);
            } while ((char)iVar3 != '\0');
            piVar1 = piVar9;
            uVar2 = uVar8;
            if (uVar8 == (int)piVar4 - ((int)piVar5 + 1)) {
              for (; 3 < uVar2; uVar2 = uVar2 - 4) {
                if (*piVar1 != *piVar5) goto LAB_006b0310;
                piVar5 = piVar5 + 1;
                piVar1 = piVar1 + 1;
              }
              if ((uVar2 == 0) ||
                 (((char)*piVar5 == (char)*piVar1 &&
                  ((uVar2 < 2 ||
                   ((*(char *)((int)piVar5 + 1) == *(char *)((int)piVar1 + 1) &&
                    ((uVar2 < 3 || (*(char *)((int)piVar5 + 2) == *(char *)((int)piVar1 + 2)))))))))
                 )) {
                uVar8 = FUN_006b00f0();
                in_EDX[3] = uVar8;
                if (uVar8 != 0) {
                  return uVar8;
                }
                break;
              }
            }
          }
LAB_006b0310:
          ppuStack_18 = ppuStack_18 + 9;
        } while ((int)ppuStack_18 < 0x733910);
      }
    }
    else {
      (*(code *)in_EDX[8])();
      if (in_EDX[3] != 0) break;
    }
    (*(code *)in_EDX[7])();
    pcVar7 = (char *)*in_EDX;
  }
LAB_006b035e:
  return in_EDX[3];
}


/* FUN_006b04d0 @ 006b04d0  kind=gamemisc  attributed-by=none  size=28 */

undefined4 FUN_006b04d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xa8);
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}


/* FUN_006b0500 @ 006b0500  kind=gamemisc  attributed-by=none  size=609 */

int FUN_006b0500(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  int unaff_EBX;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  byte *local_134;
  undefined4 local_d8;
  int local_c4;
  int local_bc;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_84;
  undefined4 local_68;
  int local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar2 = *(undefined4 *)(unaff_EBX + 100);
  FUN_006b0370();
  uVar3 = FUN_00692230(uVar2,0xc,&local_140);
  *(undefined4 *)(unaff_EBX + 0x1ec) = uVar3;
  if (((local_140 == 0) && (local_140 = FUN_006af310(uVar2), local_140 == 0)) &&
     (local_140 = FUN_006b0170(), local_140 == 0)) {
    if (*(char *)(unaff_EBX + 0x1b1) == '*') {
      *(undefined4 *)(unaff_EBX + 0x1a0) = local_a0;
      if (local_5c == 0) {
        local_140 = 3;
      }
      *(undefined4 *)(unaff_EBX + 0x18c) = local_68;
      *(undefined4 *)(unaff_EBX + 0x1a8) = local_50;
      local_5c = 0;
      *(undefined4 *)(unaff_EBX + 0x1ac) = local_4c;
      *(undefined4 *)(unaff_EBX + 400) = local_9c;
      *(undefined4 *)(unaff_EBX + 0x1a4) = local_84;
      local_9c = 0;
      local_84 = 0;
      if (*(int *)(unaff_EBX + 0x170) == 1) {
        local_13c = 0;
        local_138 = 0;
        local_144 = 0;
        if (0 < local_c4) {
LAB_006b0632:
          iVar10 = 0;
          *(undefined2 *)(*(int *)(unaff_EBX + 0x180) + local_144 * 2) = 0;
          *(char **)(*(int *)(unaff_EBX + 0x184) + local_144 * 4) = ".notdef";
          local_134 = *(byte **)(local_bc + local_144 * 4);
          if ((local_134 != (byte *)0x0) && (0 < *(int *)(unaff_EBX + 0x1a0))) {
            puVar9 = *(undefined4 **)(unaff_EBX + 0x1a4);
            do {
              pbVar8 = (byte *)*puVar9;
              pbVar4 = local_134;
              pbVar7 = pbVar8;
              do {
                bVar1 = *pbVar4;
                bVar11 = bVar1 < *pbVar7;
                if (bVar1 != *pbVar7) {
LAB_006b06a0:
                  iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_006b06a5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar11 = bVar1 < pbVar7[1];
                if (bVar1 != pbVar7[1]) goto LAB_006b06a0;
                pbVar4 = pbVar4 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_006b06a5:
              if (iVar5 == 0) {
                *(short *)(*(int *)(unaff_EBX + 0x180) + local_144 * 2) = (short)iVar10;
                *(byte **)(*(int *)(unaff_EBX + 0x184) + local_144 * 4) = pbVar8;
                pcVar6 = ".notdef";
                goto LAB_006b06d5;
              }
              iVar10 = iVar10 + 1;
              puVar9 = puVar9 + 1;
            } while (iVar10 < *(int *)(unaff_EBX + 0x1a0));
          }
          goto LAB_006b071f;
        }
LAB_006b0731:
        *(int *)(unaff_EBX + 0x178) = local_13c;
        *(int *)(unaff_EBX + 0x17c) = local_138;
        *(undefined4 *)(unaff_EBX + 0x174) = local_d8;
      }
    }
    else {
      local_140 = 2;
    }
  }
  FUN_006b03a0();
  return local_140;
  while( true ) {
    bVar1 = pcVar6[1];
    bVar11 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_006b06f5;
    pcVar6 = pcVar6 + 2;
    pbVar8 = pbVar8 + 2;
    if (bVar1 == 0) break;
LAB_006b06d5:
    bVar1 = *pcVar6;
    bVar11 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_006b06f5:
      iVar10 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_006b06fa;
    }
    if (bVar1 == 0) break;
  }
  iVar10 = 0;
LAB_006b06fa:
  if (iVar10 != 0) {
    if (local_144 < local_13c) {
      local_13c = local_144;
    }
    if (local_138 <= local_144) {
      local_138 = local_144 + 1;
    }
  }
LAB_006b071f:
  local_144 = local_144 + 1;
  if (local_c4 <= local_144) goto LAB_006b0731;
  goto LAB_006b0632;
}


/* FUN_006b0770 @ 006b0770  kind=gamemisc  attributed-by=none  size=648 */

int FUN_006b0770(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_8;
  undefined4 local_4;
  
  piVar4 = param_2 + 0x7d;
  *piVar4 = 0;
  *param_2 = 1;
  iVar5 = FUN_0068fe10(param_2[0x18],"postscript-cmaps");
  param_2[0x79] = iVar5;
  iVar6 = FUN_0068fdf0(*(undefined4 *)(param_2[0x18] + 4),"psaux");
  param_2[0x7a] = iVar6;
  iVar7 = FUN_006b0500();
  if ((iVar7 == 0) && (-1 < param_3)) {
    if (0 < param_3) {
      return 6;
    }
    param_2[4] = param_2[0x68];
    param_2[9] = 0;
    param_2[1] = 0;
    param_2[2] = 0x211;
    if (*(char *)(param_2 + 0x27) != '\0') {
      param_2[2] = 0x215;
    }
    param_2[2] = param_2[2] | 0x800;
    pcVar9 = (char *)param_2[0x24];
    param_2[5] = pcVar9;
    param_2[6] = "Regular";
    if (pcVar9 == (char *)0x0) {
      if (param_2[0x5b] != 0) {
        param_2[5] = param_2[0x5b];
      }
    }
    else {
      pcVar8 = (char *)param_2[0x23];
      if (pcVar8 != (char *)0x0) {
        cVar1 = *pcVar8;
        while (cVar1 != '\0') {
          cVar2 = *pcVar9;
          if (cVar1 == cVar2) {
            pcVar9 = pcVar9 + 1;
LAB_006b084f:
            pcVar8 = pcVar8 + 1;
          }
          else {
            if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_006b084f;
            if ((cVar2 != ' ') && (cVar2 != '-')) {
              if (*pcVar9 == '\0') {
                param_2[6] = pcVar8;
              }
              break;
            }
            pcVar9 = pcVar9 + 1;
          }
          cVar1 = *pcVar8;
        }
      }
    }
    local_18 = param_2[0x7c];
    local_1c = param_2[0x7b];
    param_2[7] = 0;
    param_2[8] = 0;
    local_20 = 1;
    if (param_4 != 0) {
      local_20 = 0x11;
      local_8 = param_4;
      local_4 = param_5;
    }
    iVar7 = FUN_00694b60(*(undefined4 *)(param_2[0x18] + 4),&local_20,0,piVar4);
    if (iVar7 == 0) {
      FUN_006919d0(*(undefined4 *)(*piVar4 + 0x58));
      iVar3 = *piVar4;
      param_2[0xd] = *(undefined4 *)(iVar3 + 0x34);
      param_2[0xe] = *(undefined4 *)(iVar3 + 0x38);
      param_2[0xf] = *(undefined4 *)(iVar3 + 0x3c);
      param_2[0x10] = *(undefined4 *)(iVar3 + 0x40);
      *(undefined2 *)(param_2 + 0x11) = *(undefined2 *)(iVar3 + 0x44);
      *(undefined2 *)((int)param_2 + 0x46) = *(undefined2 *)(iVar3 + 0x46);
      *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(iVar3 + 0x48);
      *(undefined2 *)((int)param_2 + 0x4a) = *(undefined2 *)(iVar3 + 0x4a);
      *(undefined2 *)(param_2 + 0x13) = *(undefined2 *)(iVar3 + 0x4c);
      *(undefined2 *)((int)param_2 + 0x4e) = *(undefined2 *)(iVar3 + 0x4e);
      *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)((int)param_2 + 0x9e);
      *(undefined2 *)((int)param_2 + 0x52) = *(undefined2 *)(param_2 + 0x28);
      param_2[3] = 0;
      if (param_2[0x26] != 0) {
        param_2[3] = 1;
      }
      if ((*(byte *)(iVar3 + 0xc) & 2) != 0) {
        param_2[3] = param_2[3] | 2;
      }
      if ((*(byte *)(iVar3 + 8) & 0x20) != 0) {
        param_2[2] = param_2[2] | 0x20;
      }
      if ((iVar5 != 0) && (iVar6 != 0)) {
        piVar4 = *(int **)(iVar6 + 0x14);
        local_2c = param_2;
        local_24 = 0x10003;
        local_28 = 0x756e6963;
        iVar7 = FUN_00693ed0(piVar4[3],0,&local_2c,0);
        if ((iVar7 == 0) || (iVar7 == 0xa3)) {
          iVar7 = 0;
          switch(param_2[0x5c]) {
          case 1:
            local_28 = 0x41444243;
            local_24 = 0x20007;
            iVar5 = piVar4[2];
            break;
          case 2:
            local_28 = 0x41444f42;
            local_24 = 7;
            iVar5 = *piVar4;
            break;
          case 3:
            local_28 = 0x6c617431;
            local_24 = 0x30007;
            iVar5 = piVar4[3];
            break;
          case 4:
            local_28 = 0x41444245;
            local_24 = 0x10007;
            iVar5 = piVar4[1];
            break;
          default:
            goto LAB_006b0a58;
          }
          if (iVar5 != 0) {
            iVar7 = FUN_00693ed0(iVar5,0,&local_2c,0);
          }
        }
      }
    }
  }
LAB_006b0a58:
  return iVar7;
}


/* FUN_006b0a80 @ 006b0a80  kind=gamemisc  attributed-by=none  size=147 */

int FUN_006b0a80(uint *param_1,uint *param_2,undefined4 param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  byte *unaff_EBX;
  byte *pbVar5;
  byte *pbVar6;
  uint local_4;
  
  pbVar5 = (byte *)*param_1;
  pbVar6 = pbVar5 + 1;
  iVar4 = 0;
  if (pbVar6 <= unaff_EBX) {
    local_4 = (uint)*pbVar5;
    if (local_4 == 0) {
      *param_1 = (uint)pbVar6;
      return iVar4;
    }
    while (pbVar5 = pbVar6, pbVar6 + 2 <= unaff_EBX) {
      pbVar1 = pbVar6 + 1;
      pbVar5 = pbVar6 + 2;
      pbVar6 = pbVar5 + *pbVar6;
      if (unaff_EBX < pbVar6) break;
      if (param_2 != (uint *)0x0) {
        uVar2 = param_2[1];
        puVar3 = param_2;
        while (uVar2 != 0) {
          if (*puVar3 == (uint)*pbVar1) {
            iVar4 = (*(code *)puVar3[1])(pbVar5,pbVar6,param_3);
            if (iVar4 != 0) goto LAB_006b0af1;
            break;
          }
          uVar2 = puVar3[3];
          puVar3 = puVar3 + 2;
        }
      }
      local_4 = local_4 - 1;
      pbVar5 = pbVar6;
      if (local_4 == 0) {
LAB_006b0af1:
        *param_1 = (uint)pbVar5;
        return iVar4;
      }
    }
  }
  *param_1 = (uint)pbVar5;
  return 8;
}


/* FUN_006b0b20 @ 006b0b20  kind=gamemisc  attributed-by=none  size=44 */

void FUN_006b0b20(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_006908c0();
  if (iVar1 == 0) {
    iVar1 = FUN_00692010();
    if (iVar1 == 0) {
      *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + *(int *)(unaff_ESI + 0x48) * 0x10000
      ;
    }
  }
  return;
}


/* FUN_006b0b50 @ 006b0b50  kind=gamemisc  attributed-by=none  size=34 */

undefined1 FUN_006b0b50(void)

{
  undefined1 uVar1;
  int *in_ECX;
  
  uVar1 = 1;
  if ((((*in_ECX != 0x50465230) || (4 < (uint)in_ECX[1])) || ((uint)in_ECX[3] < 0x3a)) ||
     (in_ECX[2] != 0xd0a)) {
    uVar1 = 0;
  }
  return uVar1;
}


/* FUN_006b0bc0 @ 006b0bc0  kind=gamemisc  attributed-by=none  size=479 */

int FUN_006b0bc0(int param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int local_14 [5];
  
  local_14[0] = 0;
  if ((byte *)(param_1 + 5U) <= param_2) {
    uVar5 = (uint)*(byte *)(param_1 + 4);
    bVar1 = *(byte *)(param_1 + 3);
    uVar6 = uVar5 + param_3[0x17];
    pbVar8 = (byte *)(param_1 + 5);
    if ((uint)param_3[0x18] < uVar6) {
      uVar6 = uVar6 + 3 & 0xfffffffc;
      uVar2 = FUN_00693a60(*param_3,0x24,param_3[0x17],uVar6,param_3[0x19],local_14);
      param_3[0x19] = uVar2;
      if (local_14[0] != 0) {
        return local_14[0];
      }
      param_3[0x18] = uVar6;
    }
    iVar7 = 8;
    if ((bVar1 & 1) != 0) {
      iVar7 = 9;
    }
    if ((bVar1 & 2) != 0) {
      iVar7 = iVar7 + 1;
    }
    if ((bVar1 & 4) != 0) {
      iVar7 = iVar7 + 1;
    }
    if ((bVar1 & 8) != 0) {
      iVar7 = iVar7 + 1;
    }
    if ((bVar1 & 0x10) != 0) {
      iVar7 = iVar7 + 1;
    }
    puVar4 = (uint *)(param_3[0x19] + param_3[0x17] * 0x24);
    uVar6 = uVar5;
    if (pbVar8 + iVar7 * uVar5 <= param_2) {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if ((bVar1 & 1) == 0) {
          uVar3 = (uint)*pbVar8;
          pbVar9 = pbVar8 + 1;
        }
        else {
          pbVar9 = pbVar8 + 2;
          uVar3 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
        }
        *puVar4 = uVar3;
        if ((bVar1 & 2) == 0) {
          uVar3 = (uint)*pbVar9;
          pbVar8 = pbVar9 + 1;
        }
        else {
          pbVar8 = pbVar9 + 2;
          uVar3 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
        }
        puVar4[1] = uVar3;
        puVar4[2] = (uint)*pbVar8;
        if ((bVar1 & 4) == 0) {
          pbVar9 = pbVar8 + 3;
          uVar3 = (uint)pbVar8[1];
        }
        else {
          pbVar9 = pbVar8 + 4;
          uVar3 = (uint)CONCAT11(pbVar8[1],pbVar8[2]);
        }
        puVar4[5] = uVar3 << 8 | (uint)pbVar9[-1];
        if ((bVar1 & 8) == 0) {
          pbVar10 = pbVar9 + 2;
          uVar3 = (uint)*pbVar9;
        }
        else {
          pbVar10 = pbVar9 + 3;
          uVar3 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
        }
        puVar4[6] = uVar3 << 8 | (uint)pbVar10[-1];
        if ((bVar1 & 0x10) == 0) {
          uVar3 = (uint)*pbVar10;
          pbVar8 = pbVar10 + 1;
        }
        else {
          pbVar8 = pbVar10 + 2;
          uVar3 = (uint)CONCAT11(*pbVar10,pbVar10[1]);
        }
        puVar4[7] = uVar3;
        puVar4 = puVar4 + 9;
      }
      param_3[0x17] = param_3[0x17] + uVar5;
      return local_14[0];
    }
  }
  return 8;
}


/* FUN_006b0eb0 @ 006b0eb0  kind=gamemisc  attributed-by=none  size=416 */

int FUN_006b0eb0(undefined1 *param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int local_8;
  undefined4 local_4;
  
  uVar7 = *param_3;
  local_8 = 0;
  local_4 = uVar7;
  puVar3 = (undefined4 *)FUN_00692230(uVar7,0x18,&local_8);
  if (local_8 != 0) {
    return local_8;
  }
  if (param_1 + 4 <= param_2) {
    *(undefined1 *)(puVar3 + 1) = *param_1;
    *(ushort *)((int)puVar3 + 6) = CONCAT11(param_1[1],param_1[2]);
    *(undefined1 *)((int)puVar3 + 5) = param_1[3];
    pbVar4 = param_1 + 4;
    puVar3[3] = pbVar4 + (param_3[1] - param_3[0x25]);
    bVar5 = *(byte *)((int)puVar3 + 5) & 1;
    puVar3[2] = 3;
    if (bVar5 != 0) {
      puVar3[2] = 5;
    }
    if ((*(byte *)((int)puVar3 + 5) & 2) != 0) {
      puVar3[2] = puVar3[2] + 1;
    }
    uVar6 = (uint)*(byte *)(puVar3 + 1);
    iVar2 = puVar3[2];
    uVar7 = local_4;
    if (pbVar4 + uVar6 * iVar2 <= param_2) {
      if (*(char *)(puVar3 + 1) == '\0') {
        FUN_00691290(local_4,puVar3);
        return local_8;
      }
      if (bVar5 == 0) {
        puVar3[4] = (uint)*pbVar4 << 0x10 | (uint)(byte)param_1[5];
        puVar3[5] = (uint)pbVar4[(uVar6 - 1) * iVar2] << 0x10 |
                    (uint)(pbVar4 + (uVar6 - 1) * iVar2)[1];
      }
      else {
        pbVar1 = pbVar4 + (uVar6 - 1) * iVar2 + 2;
        puVar3[4] = CONCAT22(CONCAT11(*pbVar4,param_1[5]),CONCAT11(param_1[6],param_1[7]));
        puVar3[5] = CONCAT22(CONCAT11(pbVar1[-2],pbVar1[-1]),CONCAT11(*pbVar1,pbVar1[1]));
      }
      *puVar3 = 0;
      *(undefined4 **)param_3[0x23] = puVar3;
      param_3[0x23] = puVar3;
      param_3[0x21] = param_3[0x21] + (uint)*(byte *)(puVar3 + 1);
      return 0;
    }
  }
  FUN_00691290(uVar7,puVar3);
  return 8;
}


/* FUN_006b1050 @ 006b1050  kind=gamemisc  attributed-by=none  size=121 */

int FUN_006b1050(undefined4 param_1,undefined4 *param_2)

{
  uint in_EAX;
  uint uVar1;
  void *unaff_EBX;
  void *_Dst;
  int local_4;
  
  _Dst = (void *)0x0;
  local_4 = 0;
  if ((in_EAX != 0) && (*(char *)((int)unaff_EBX + (in_EAX - 1)) == '\0')) {
    in_EAX = in_EAX - 1;
  }
  uVar1 = 0;
  if (in_EAX != 0) {
    do {
      if ((*(byte *)(uVar1 + (int)unaff_EBX) < 0x20) || (0x7f < *(byte *)(uVar1 + (int)unaff_EBX)))
      goto LAB_006b10bb;
      uVar1 = uVar1 + 1;
    } while (uVar1 < in_EAX);
  }
  if (in_EAX != 0) {
    _Dst = (void *)FUN_00692230(param_1,in_EAX + 1,&local_4);
    if (local_4 == 0) {
      memcpy(_Dst,unaff_EBX,in_EAX);
      *(undefined1 *)((int)_Dst + in_EAX) = 0;
    }
  }
LAB_006b10bb:
  *param_2 = _Dst;
  return local_4;
}


/* FUN_006b1190 @ 006b1190  kind=gamemisc  attributed-by=none  size=1209 */

int FUN_006b1190(int param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  short sVar3;
  int in_EAX;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 *unaff_EDI;
  int local_1c;
  byte *local_18;
  undefined4 local_14;
  uint local_10;
  byte *local_c;
  uint local_8;
  uint local_4;
  
  local_14 = *(undefined4 *)(param_1 + 0x1c);
  *unaff_EDI = local_14;
  unaff_EDI[1] = param_2;
  unaff_EDI[0x22] = 0;
  unaff_EDI[0x23] = unaff_EDI + 0x22;
  local_1c = FUN_006908c0(param_1,param_2);
  if (local_1c != 0) {
    return local_1c;
  }
  local_1c = FUN_00691f30(param_1);
  if (local_1c != 0) {
    return local_1c;
  }
  unaff_EDI[0x25] = *(undefined4 *)(param_1 + 0x20);
  puVar2 = *(undefined1 **)(param_1 + 0x20);
  pbVar14 = puVar2 + in_EAX;
  pbVar15 = local_18;
  local_c = pbVar14;
  if (puVar2 + 0xf <= pbVar14) {
    unaff_EDI[2] = (uint)CONCAT11(*puVar2,puVar2[1]);
    unaff_EDI[3] = (uint)CONCAT11(puVar2[2],puVar2[3]);
    unaff_EDI[4] = (uint)CONCAT11(puVar2[4],puVar2[5]);
    unaff_EDI[5] = (int)(short)((short)(char)puVar2[6] << 8) | (uint)(byte)puVar2[7];
    unaff_EDI[6] = (int)(short)((short)(char)puVar2[8] << 8) | (uint)(byte)puVar2[9];
    unaff_EDI[7] = (int)(short)((short)(char)puVar2[10] << 8) | (uint)(byte)puVar2[0xb];
    unaff_EDI[8] = (int)(short)((short)(char)puVar2[0xc] << 8) | (uint)(byte)puVar2[0xd];
    bVar1 = puVar2[0xe];
    local_4 = (uint)bVar1;
    local_8 = local_4 & 4;
    unaff_EDI[9] = local_4;
    local_18 = puVar2 + 0xf;
    if ((bVar1 & 4) == 0) {
      local_18 = puVar2 + 0x11;
      pbVar15 = puVar2 + 0xf;
      if (pbVar14 < local_18) goto LAB_006b1553;
      unaff_EDI[10] = (int)(short)((short)(char)puVar2[0xf] << 8) | (uint)(byte)puVar2[0x10];
    }
    iVar7 = 0;
    if (((char)bVar1 < '\0') &&
       (local_1c = FUN_006b0a80(&local_18,&DAT_00733ab4), iVar7 = local_1c, local_1c != 0))
    goto LAB_006b1621;
    local_1c = iVar7;
    pbVar4 = local_18 + 3;
    pbVar15 = local_18;
    if (pbVar4 <= pbVar14) {
      local_10 = (uint)CONCAT21(CONCAT11(*local_18,local_18[1]),local_18[2]);
      pbVar13 = pbVar4;
      if (local_10 != 0) {
        local_18 = pbVar4 + local_10;
        if (pbVar14 < pbVar4 + local_10) goto LAB_006b1553;
        do {
          pbVar13 = local_18;
          if (((local_18 < pbVar4 + 4) || (uVar12 = (uint)CONCAT11(*pbVar4,pbVar4[1]), uVar12 < 4))
             || (local_10 < uVar12)) break;
          sVar3 = CONCAT11(pbVar4[2],pbVar4[3]);
          if (sVar3 == 1) {
            puVar10 = unaff_EDI + 0x15;
LAB_006b13d2:
            local_1c = FUN_006b1050(local_14,puVar10);
            if (local_1c != 0) {
              return local_1c;
            }
          }
          else if (sVar3 == 2) {
            if (pbVar4 + 0x24 <= pbVar4 + uVar12) {
              unaff_EDI[0xb] = (int)(short)((short)(char)pbVar4[0xe] << 8) | (uint)pbVar4[0xf];
              unaff_EDI[0xc] = (int)(short)((short)(char)pbVar4[0x10] << 8) | (uint)pbVar4[0x11];
              unaff_EDI[0xd] = (int)(short)((short)(char)pbVar4[0x12] << 8) | (uint)pbVar4[0x13];
            }
          }
          else if (sVar3 == 3) {
            puVar10 = unaff_EDI + 0x16;
            goto LAB_006b13d2;
          }
          local_10 = local_10 - uVar12;
          pbVar13 = local_18;
          pbVar4 = pbVar4 + uVar12;
          pbVar14 = local_c;
        } while (local_10 != 0);
      }
      pbVar4 = pbVar13 + 1;
      pbVar15 = local_18;
      if (pbVar4 <= pbVar14) {
        uVar12 = (uint)*pbVar13;
        unaff_EDI[0x1a] = uVar12;
        if (pbVar4 + uVar12 * 2 <= pbVar14) {
          uVar5 = FUN_00693a60(local_14,4,0,uVar12,0,&local_1c);
          unaff_EDI[0x1b] = uVar5;
          if (local_1c != 0) goto LAB_006b1621;
          uVar6 = 0;
          pbVar15 = pbVar4;
          if (uVar12 != 0) {
            do {
              pbVar4 = pbVar15 + 2;
              *(uint *)(unaff_EDI[0x1b] + uVar6 * 4) =
                   (int)(short)((short)(char)*pbVar15 << 8) | (uint)pbVar15[1];
              uVar6 = uVar6 + 1;
              pbVar15 = pbVar4;
            } while (uVar6 < uVar12);
          }
          pbVar15 = local_18;
          if (pbVar4 + 8 <= pbVar14) {
            unaff_EDI[0x1c] = (uint)*pbVar4;
            unaff_EDI[0x1d] = (uint)pbVar4[1];
            unaff_EDI[0x11] = (uint)CONCAT11(pbVar4[2],pbVar4[3]);
            unaff_EDI[0xe] = (uint)CONCAT11(pbVar4[4],pbVar4[5]);
            pbVar13 = pbVar4 + 8;
            uVar12 = (uint)CONCAT11(pbVar4[6],pbVar4[7]);
            unaff_EDI[0x1e] = uVar12;
            unaff_EDI[0x1f] = pbVar13 + (param_2 - *(int *)(param_1 + 0x20));
            uVar5 = FUN_00693a60(local_14,0x10,0,uVar12,0,&local_1c);
            unaff_EDI[0x20] = uVar5;
            if (local_1c != 0) goto LAB_006b1621;
            uVar6 = local_4 & 2;
            iVar7 = 4;
            if (uVar6 != 0) {
              iVar7 = 5;
            }
            if (local_8 != 0) {
              iVar7 = iVar7 + 2;
            }
            uVar11 = local_4 & 8;
            if (uVar11 != 0) {
              iVar7 = iVar7 + 1;
            }
            local_c = (byte *)(local_4 & 0x10);
            if (local_c != (byte *)0x0) {
              iVar7 = iVar7 + 1;
            }
            local_10 = local_4 & 0x20;
            if (local_10 != 0) {
              iVar7 = iVar7 + 1;
            }
            pbVar15 = local_18;
            local_4 = uVar11;
            if (pbVar13 + iVar7 * uVar12 <= pbVar14) {
              if (uVar12 != 0) {
                iVar7 = 0;
                do {
                  puVar9 = (uint *)(unaff_EDI[0x20] + iVar7);
                  if (uVar6 == 0) {
                    uVar8 = (uint)*pbVar13;
                    pbVar14 = pbVar13 + 1;
                  }
                  else {
                    pbVar14 = pbVar13 + 2;
                    uVar8 = (uint)CONCAT11(*pbVar13,pbVar13[1]);
                  }
                  *puVar9 = uVar8;
                  if (local_8 == 0) {
                    uVar8 = unaff_EDI[10];
                  }
                  else {
                    bVar1 = *pbVar14;
                    pbVar15 = pbVar14 + 1;
                    pbVar14 = pbVar14 + 2;
                    uVar8 = (int)(short)((short)(char)bVar1 << 8) | (uint)*pbVar15;
                  }
                  puVar9[1] = uVar8;
                  if (uVar11 != 0) {
                    pbVar14 = pbVar14 + 1;
                  }
                  if (local_c == (byte *)0x0) {
                    uVar8 = (uint)*pbVar14;
                    pbVar15 = pbVar14 + 1;
                  }
                  else {
                    pbVar15 = pbVar14 + 2;
                    uVar8 = (uint)CONCAT11(*pbVar14,pbVar14[1]);
                  }
                  puVar9[2] = uVar8;
                  if (local_10 == 0) {
                    pbVar13 = pbVar15 + 2;
                    uVar8 = (uint)*pbVar15;
                  }
                  else {
                    pbVar13 = pbVar15 + 3;
                    uVar8 = (uint)CONCAT11(*pbVar15,pbVar15[1]);
                  }
                  iVar7 = iVar7 + 0x10;
                  uVar12 = uVar12 - 1;
                  puVar9[3] = uVar8 << 8 | (uint)pbVar13[-1];
                } while (uVar12 != 0);
              }
              goto LAB_006b1621;
            }
          }
        }
      }
    }
  }
LAB_006b1553:
  local_18 = pbVar15;
  local_1c = 8;
LAB_006b1621:
  FUN_00691fe0(param_1);
  uVar5 = FUN_00690930(param_1);
  unaff_EDI[0x24] = uVar5;
  unaff_EDI[0x25] = 0;
  return local_1c;
}


/* FUN_006b16c0 @ 006b16c0  kind=gamemisc  attributed-by=none  size=109 */

void FUN_006b16c0(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (*(char *)(param_1 + 0x20) != '\0') {
    sVar1 = *(short *)(iVar3 + 0x3a);
    sVar2 = *(short *)(iVar3 + 0x38);
    iVar5 = sVar1 + -1;
    iVar6 = 0;
    if (0 < sVar2) {
      iVar6 = (int)*(short *)(*(int *)(iVar3 + 0x44) + -2 + sVar2 * 2);
    }
    iVar4 = iVar5 - iVar6;
    if (iVar6 < iVar5) {
      iVar4 = *(int *)(iVar3 + 0x3c);
      if ((*(int *)(iVar4 + iVar6 * 8) == *(int *)(iVar4 + iVar5 * 8)) &&
         (*(int *)(iVar4 + 4 + iVar6 * 8) == *(int *)(iVar4 + 4 + iVar5 * 8))) {
        *(short *)(iVar3 + 0x3a) = sVar1 + -1;
        iVar5 = sVar1 + -2;
      }
      iVar4 = iVar5 - iVar6;
    }
    if (SBORROW4(iVar5,iVar6) == iVar4 < 0) {
      *(short *)(*(int *)(iVar3 + 0x44) + sVar2 * 2) = (short)iVar5;
      *(short *)(iVar3 + 0x38) = *(short *)(iVar3 + 0x38) + 1;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


/* FUN_006b1740 @ 006b1740  kind=gamemisc  attributed-by=none  size=94 */

int FUN_006b1740(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  iVar1 = *(int *)(in_EAX + 0x1c);
  if (*(char *)(in_EAX + 0x20) == '\0') {
    return 8;
  }
  if ((*(uint *)(iVar1 + 4) < (uint)(*(short *)(iVar1 + 0x3a) + 1 + (int)*(short *)(iVar1 + 0x16)))
     && (iVar2 = FUN_00693c40(iVar1,1,0), iVar2 != 0)) {
    return iVar2;
  }
  iVar3 = (int)*(short *)(iVar1 + 0x3a);
  iVar2 = *(int *)(iVar1 + 0x3c);
  *(undefined4 *)(iVar2 + iVar3 * 8) = *in_ECX;
  *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = in_ECX[1];
  *(undefined1 *)(iVar3 + *(int *)(iVar1 + 0x40)) = 1;
  *(short *)(iVar1 + 0x3a) = *(short *)(iVar1 + 0x3a) + 1;
  return 0;
}


/* FUN_006b17a0 @ 006b17a0  kind=gamemisc  attributed-by=none  size=136 */

int FUN_006b17a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *unaff_EBX;
  
  iVar2 = *(int *)(in_EAX + 0x1c);
  if (*(char *)(in_EAX + 0x20) == '\0') {
    return 8;
  }
  if ((*(uint *)(iVar2 + 4) < (uint)(*(short *)(iVar2 + 0x3a) + 3 + (int)*(short *)(iVar2 + 0x16)))
     && (iVar3 = FUN_00693c40(iVar2,3,0), iVar3 != 0)) {
    return iVar3;
  }
  puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x3c) + *(short *)(iVar2 + 0x3a) * 8);
  puVar4 = (undefined2 *)(*(int *)(iVar2 + 0x40) + (int)*(short *)(iVar2 + 0x3a));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = *param_2;
  puVar1[3] = param_2[1];
  puVar1[4] = *unaff_EBX;
  puVar1[5] = unaff_EBX[1];
  *puVar4 = 0x202;
  *(undefined1 *)(puVar4 + 1) = 1;
  *(short *)(iVar2 + 0x3a) = *(short *)(iVar2 + 0x3a) + 3;
  return 0;
}


/* FUN_006b1830 @ 006b1830  kind=gamemisc  attributed-by=none  size=82 */

void FUN_006b1830(void)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x1c);
  FUN_006b16c0();
  *(undefined1 *)(unaff_EDI + 0x20) = 1;
  if ((*(uint *)(iVar1 + 4) < (uint)(*(short *)(iVar1 + 0x3a) + 1 + (int)*(short *)(iVar1 + 0x16)))
     || (*(uint *)(iVar1 + 8) < (uint)(*(short *)(iVar1 + 0x38) + 1 + (int)*(short *)(iVar1 + 0x14))
        )) {
    iVar1 = FUN_00693c40(iVar1,1,1);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_006b1740();
  return;
}


/* FUN_006b1960 @ 006b1960  kind=gamemisc  attributed-by=none  size=158 */

uint FUN_006b1960(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_4;
  
  uVar5 = *param_2;
  local_4 = 0;
  do {
    uVar5 = uVar5 + 1;
    uVar4 = 0;
    uVar2 = *(uint *)(param_1 + 0x10);
    while( true ) {
      uVar3 = uVar2;
      if (uVar3 <= uVar4) {
        if (*(uint *)(param_1 + 0x10) <= uVar4) {
          *param_2 = 0;
          return local_4;
        }
        if (uVar4 == 0) {
          *param_2 = 0;
          return 0;
        }
        *param_2 = *(uint *)(*(int *)(param_1 + 0x14) + uVar4 * 0x10);
        return uVar4 + 1;
      }
      uVar2 = (uVar3 - uVar4 >> 1) + uVar4;
      uVar1 = *(uint *)(uVar2 * 0x10 + *(int *)(param_1 + 0x14));
      if (uVar1 == uVar5) break;
      if (uVar1 < uVar5) {
        uVar4 = uVar2 + 1;
        uVar2 = uVar3;
      }
    }
    local_4 = uVar2;
    if (uVar2 != 0) {
      *param_2 = uVar5;
      return uVar2 + 1;
    }
  } while( true );
}


/* FUN_006b1aa0 @ 006b1aa0  kind=gamemisc  attributed-by=none  size=537 */

int FUN_006b1aa0(int param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  
  *param_4 = 0;
  param_4[1] = 0;
  if (param_2 != 0) {
    param_2 = param_2 - 1;
  }
  if (param_3 != 0) {
    param_3 = param_3 - 1;
  }
  if (*(uint *)(param_1 + 0x198) < param_2) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x198) < param_3) {
    return 0;
  }
  piVar12 = *(int **)(param_1 + 0x1a8);
  iVar1 = *(int *)(param_1 + 0x68);
  uVar6 = *(int *)(*(int *)(param_1 + 0x1a0) + param_2 * 0x10) << 0x10 |
          (uint)*(ushort *)(*(int *)(param_1 + 0x1a0) + param_3 * 0x10);
  if (piVar12 == (int *)0x0) {
    return 0;
  }
  while ((uVar6 < (uint)piVar12[4] || ((uint)piVar12[5] < uVar6))) {
    piVar12 = (int *)*piVar12;
    if (piVar12 == (int *)0x0) {
      return 0;
    }
  }
  iVar2 = FUN_006908c0(iVar1,piVar12[3]);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_00691f30(iVar1,(uint)*(byte *)(piVar12 + 1) * piVar12[2]);
  if (iVar2 != 0) {
    return iVar2;
  }
  bVar9 = *(byte *)(piVar12 + 1);
  uVar8 = piVar12[2];
  iVar2 = FUN_006914c0((uint)bVar9);
  iVar11 = (uint)bVar9 - iVar2;
  uVar10 = iVar2 * uVar8;
  pbVar5 = *(byte **)(iVar1 + 0x20);
  bVar9 = *(byte *)((int)piVar12 + 5) & 1;
  param_1._0_1_ = *(byte *)((int)piVar12 + 5) & 2;
  if (iVar11 == 0) {
LAB_006b1be8:
    if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
      do {
        uVar10 = uVar10 >> 1;
        pbVar3 = pbVar5 + uVar10;
        if (bVar9 == 0) {
          pbVar4 = pbVar3 + 2;
          uVar7 = (uint)*pbVar3 << 0x10;
        }
        else {
          pbVar4 = pbVar3 + 4;
          uVar7 = (uint)CONCAT21(CONCAT11(*pbVar3,pbVar3[1]),pbVar3[2]) << 8;
        }
        if ((uVar7 | pbVar4[-1]) == uVar6) goto LAB_006b1c77;
        if ((uVar7 | pbVar4[-1]) < uVar6) {
          pbVar5 = pbVar3;
        }
      } while (uVar8 < uVar10);
    }
    if (bVar9 == 0) {
      pbVar4 = pbVar5 + 2;
      uVar8 = (uint)*pbVar5 << 0x10;
    }
    else {
      pbVar4 = pbVar5 + 4;
      uVar8 = (uint)CONCAT21(CONCAT11(*pbVar5,pbVar5[1]),pbVar5[2]) << 8;
    }
    if ((uVar8 | pbVar4[-1]) != uVar6) goto LAB_006b1ca0;
  }
  else {
    pbVar3 = pbVar5 + iVar11 * uVar8;
    if (bVar9 == 0) {
      pbVar4 = pbVar3 + 2;
      uVar7 = (uint)*pbVar3 << 0x10;
    }
    else {
      pbVar4 = pbVar3 + 4;
      uVar7 = (uint)CONCAT21(CONCAT11(*pbVar3,pbVar3[1]),pbVar3[2]) << 8;
    }
    if ((uVar7 | pbVar4[-1]) != uVar6) {
      if ((uVar7 | pbVar4[-1]) < uVar6) {
        if ((byte)param_1 == 0) {
          pbVar5 = pbVar4 + 1;
        }
        else {
          pbVar5 = pbVar4 + 2;
        }
      }
      goto LAB_006b1be8;
    }
  }
LAB_006b1c77:
  if ((byte)param_1 == 0) {
    uVar6 = (uint)*pbVar4;
  }
  else {
    uVar6 = (int)(short)((short)(char)*pbVar4 << 8) | (uint)pbVar4[1];
  }
  *param_4 = (int)*(short *)((int)piVar12 + 6) + uVar6;
LAB_006b1ca0:
  FUN_00691fe0(iVar1);
  return 0;
}


/* FUN_006b1e00 @ 006b1e00  kind=gamemisc  attributed-by=none  size=57 */

void FUN_006b1e00(char param_1)

{
  int iVar1;
  int *in_EAX;
  int *in_ECX;
  
  *in_EAX = in_ECX[3];
  in_EAX[1] = in_ECX[2];
  in_EAX[2] = in_ECX[1];
  iVar1 = *in_ECX;
  in_EAX[4] = in_EAX[2] * iVar1;
  in_EAX[3] = iVar1;
  if (param_1 == '\0') {
    *in_EAX = *in_EAX + (*in_ECX + -1) * in_EAX[1];
    in_EAX[1] = -in_EAX[1];
  }
  return;
}


/* FUN_006b1e40 @ 006b1e40  kind=gamemisc  attributed-by=none  size=175 */

void FUN_006b1e40(char *param_1)

{
  int *in_EAX;
  int in_ECX;
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int local_c;
  
  local_c = in_EAX[2];
  uVar2 = 0;
  uVar1 = (in_ECX - (int)param_1) * 8;
  puVar6 = (undefined1 *)*in_EAX;
  uVar5 = 0x80;
  cVar3 = '\0';
  if (in_EAX[4] < (int)uVar1) {
    uVar1 = in_EAX[4];
  }
  uVar4 = uVar1 & 7;
  if (0 < (int)uVar1) {
    do {
      if ((uVar1 & 7) == uVar4) {
        cVar3 = *param_1;
        param_1 = param_1 + 1;
      }
      if (cVar3 < '\0') {
        uVar2 = uVar2 | uVar5;
      }
      cVar3 = cVar3 * '\x02';
      local_c = local_c + -1;
      uVar5 = uVar5 >> 1;
      if (local_c < 1) {
        *puVar6 = (char)uVar2;
        local_c = in_EAX[2];
        *in_EAX = *in_EAX + in_EAX[1];
        puVar6 = (undefined1 *)*in_EAX;
LAB_006b1ed6:
        uVar2 = 0;
        uVar5 = 0x80;
      }
      else if (uVar5 == 0) {
        *puVar6 = (char)uVar2;
        puVar6 = puVar6 + 1;
        goto LAB_006b1ed6;
      }
      uVar1 = uVar1 - 1;
    } while (0 < (int)uVar1);
    if (uVar5 != 0x80) {
      *puVar6 = (char)uVar2;
    }
  }
  return;
}


/* FUN_006b1f00 @ 006b1f00  kind=gamemisc  attributed-by=none  size=256 */

void FUN_006b1f00(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *in_EAX;
  uint uVar4;
  uint uVar5;
  int *in_EDX;
  uint local_14;
  uint local_10;
  undefined1 *local_c;
  int local_8;
  int local_4;
  
  local_c = (undefined1 *)*in_EDX;
  local_4 = in_EDX[4];
  local_8 = in_EDX[2];
  uVar5 = 0;
  bVar3 = true;
  uVar4 = 0;
  local_14 = 0x80;
  local_10 = 0;
  bVar2 = true;
  if (0 < local_4) {
    do {
      if (bVar2) {
        do {
          if (bVar3) {
            if (param_1 <= in_EAX) break;
            bVar1 = *in_EAX;
            in_EAX = in_EAX + 1;
            uVar4 = bVar1 & 0xf;
            bVar3 = false;
            uVar5 = (int)(uint)bVar1 >> 4;
          }
          else {
            bVar3 = true;
            uVar5 = uVar4;
          }
        } while (uVar5 == 0);
      }
      if (bVar3) {
        local_10 = local_10 | local_14;
      }
      local_14 = local_14 >> 1;
      local_8 = local_8 + -1;
      if (local_8 < 1) {
        *local_c = (undefined1)local_10;
        local_8 = in_EDX[2];
        *in_EDX = *in_EDX + in_EDX[1];
        local_c = (undefined1 *)*in_EDX;
LAB_006b1fb9:
        local_10 = 0;
        local_14 = 0x80;
      }
      else if (local_14 == 0) {
        *local_c = (undefined1)local_10;
        local_c = local_c + 1;
        goto LAB_006b1fb9;
      }
      uVar5 = uVar5 - 1;
      bVar2 = (int)uVar5 < 1;
      local_4 = local_4 + -1;
    } while (0 < local_4);
    if (local_14 != 0x80) {
      *local_c = (undefined1)local_10;
    }
  }
  return;
}


/* FUN_006b2000 @ 006b2000  kind=gamemisc  attributed-by=none  size=188 */

void FUN_006b2000(byte *param_1,byte *param_2)

{
  bool bVar1;
  bool bVar2;
  int *in_EAX;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int local_8;
  int local_4;
  
  local_8 = in_EAX[2];
  local_4 = in_EAX[4];
  puVar5 = (undefined1 *)*in_EAX;
  uVar6 = 0x80;
  uVar4 = 0;
  uVar3 = 0;
  bVar2 = true;
  bVar1 = true;
  if (0 < local_4) {
    do {
      if (bVar1) {
        do {
          if (param_2 <= param_1) break;
          uVar3 = (uint)*param_1;
          param_1 = param_1 + 1;
          bVar2 = (bool)(bVar2 ^ 1);
        } while (uVar3 == 0);
      }
      if (bVar2) {
        uVar4 = uVar4 | uVar6;
      }
      local_8 = local_8 + -1;
      uVar6 = uVar6 >> 1;
      if (local_8 < 1) {
        *puVar5 = (char)uVar4;
        local_8 = in_EAX[2];
        *in_EAX = *in_EAX + in_EAX[1];
        puVar5 = (undefined1 *)*in_EAX;
LAB_006b2093:
        uVar4 = 0;
        uVar6 = 0x80;
      }
      else if (uVar6 == 0) {
        *puVar5 = (char)uVar4;
        puVar5 = puVar5 + 1;
        goto LAB_006b2093;
      }
      uVar3 = uVar3 - 1;
      bVar1 = (int)uVar3 < 1;
      local_4 = local_4 + -1;
    } while (0 < local_4);
    if (uVar6 != 0x80) {
      *puVar5 = (char)uVar4;
    }
  }
  return;
}


/* FUN_006b20c0 @ 006b20c0  kind=gamemisc  attributed-by=none  size=274 */

void FUN_006b20c0(int param_1,byte *param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint in_EAX;
  byte *pbVar1;
  byte *pbVar2;
  uint in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 4;
  if ((in_EAX & 1) != 0) {
    iVar6 = 5;
  }
  if ((in_EAX & 2) != 0) {
    iVar6 = iVar6 + 1;
  }
  if ((in_EAX & 4) != 0) {
    iVar6 = iVar6 + 1;
  }
  uVar5 = 0;
  if (in_ECX != 0) {
    do {
      uVar3 = in_ECX + uVar5 >> 1;
      pbVar1 = (byte *)(uVar3 * iVar6 + param_1);
      if (param_2 < pbVar1 + iVar6) break;
      if ((in_EAX & 1) == 0) {
        uVar4 = (uint)*pbVar1;
        pbVar2 = pbVar1 + 1;
      }
      else {
        pbVar2 = pbVar1 + 2;
        uVar4 = (uint)CONCAT11(*pbVar1,pbVar1[1]);
      }
      if (uVar4 == param_3) {
        if ((in_EAX & 2) == 0) {
          uVar5 = (uint)*pbVar2;
          pbVar1 = pbVar2 + 1;
        }
        else {
          pbVar1 = pbVar2 + 2;
          uVar5 = (uint)CONCAT11(*pbVar2,pbVar2[1]);
        }
        *param_5 = uVar5;
        if ((in_EAX & 4) == 0) {
          *param_4 = (uint)CONCAT11(*pbVar1,pbVar1[1]);
          return;
        }
        *param_4 = (uint)CONCAT21(CONCAT11(*pbVar1,pbVar1[1]),pbVar1[2]);
        return;
      }
      if (uVar4 < param_3) {
        uVar5 = uVar3;
        uVar3 = in_ECX;
      }
      in_ECX = uVar3;
    } while (uVar5 < uVar3);
  }
  *param_5 = 0;
  *param_4 = 0;
  return;
}


/* FUN_006b21e0 @ 006b21e0  kind=gamemisc  attributed-by=none  size=560 */

undefined4
FUN_006b21e0(uint *param_1,byte *param_2,uint param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,uint *param_8,uint *param_9)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_4;
  
  pbVar3 = (byte *)*param_1;
  pbVar5 = pbVar3 + 1;
  if (param_2 < pbVar5) {
    return 8;
  }
  bVar1 = *pbVar3;
  uVar6 = 0;
  uVar8 = 0;
  uVar9 = 0;
  local_4 = 0;
  pbVar4 = pbVar5;
  switch(bVar1 & 3) {
  case 0:
    pbVar4 = pbVar3 + 2;
    if (param_2 < pbVar4) {
      return 8;
    }
    uVar6 = (int)(char)*pbVar5 >> 4;
    uVar8 = (int)(char)(*pbVar5 << 4) >> 4;
    break;
  case 1:
    if (param_2 < pbVar3 + 3) {
      return 8;
    }
    uVar6 = (uint)(char)*pbVar5;
    uVar8 = (uint)(char)pbVar3[2];
    pbVar4 = pbVar3 + 3;
    break;
  case 2:
    if (param_2 < pbVar3 + 5) {
      return 8;
    }
    uVar6 = (int)(short)((short)(char)*pbVar5 << 8) | (uint)pbVar3[2];
    pbVar4 = pbVar3 + 5;
    uVar8 = (uint)(short)((short)(char)pbVar3[3] << 8);
    goto LAB_006b22c0;
  case 3:
    if (param_2 < pbVar3 + 7) {
      return 8;
    }
    uVar6 = (uint)CONCAT21(CONCAT11(*pbVar5,pbVar3[2]),pbVar3[3]);
    pbVar4 = pbVar3 + 7;
    uVar8 = (int)CONCAT11(pbVar3[4],pbVar3[5]) << 8;
LAB_006b22c0:
    uVar8 = uVar8 | pbVar4[-1];
  }
  switch(bVar1 >> 2 & 3) {
  case 0:
    uVar9 = 0;
    local_4 = 0;
    break;
  case 1:
    if (param_2 < pbVar4 + 1) {
      return 8;
    }
    uVar9 = (int)(char)*pbVar4 >> 4 & 0xf;
    local_4 = (int)(char)*pbVar4 & 0xf;
    pbVar4 = pbVar4 + 1;
    break;
  case 2:
    if (param_2 < pbVar4 + 2) {
      return 8;
    }
    local_4 = (uint)pbVar4[1];
    uVar9 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 2;
    break;
  case 3:
    if (param_2 < pbVar4 + 4) {
      return 8;
    }
    uVar9 = (uint)CONCAT11(*pbVar4,pbVar4[1]);
    local_4 = (uint)CONCAT11(pbVar4[2],pbVar4[3]);
    pbVar4 = pbVar4 + 4;
  }
  uVar7 = 0;
  switch(bVar1 >> 4 & 3) {
  case 0:
    uVar7 = param_3;
    break;
  case 1:
    if (param_2 < pbVar4 + 1) {
      return 8;
    }
    bVar2 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    uVar7 = (int)(char)bVar2 << 8;
    break;
  case 2:
    pbVar5 = pbVar4 + 2;
    if (param_2 < pbVar5) {
      return 8;
    }
    uVar7 = (uint)(short)((short)(char)*pbVar4 << 8);
    goto LAB_006b23cf;
  case 3:
    pbVar5 = pbVar4 + 3;
    if (param_2 < pbVar5) {
      return 8;
    }
    uVar7 = (int)CONCAT11(*pbVar4,pbVar4[1]) << 8;
LAB_006b23cf:
    pbVar4 = pbVar5;
    uVar7 = uVar7 | pbVar5[-1];
  }
  *param_4 = uVar6;
  *param_5 = uVar8;
  *param_6 = uVar9;
  *param_7 = local_4;
  *param_8 = uVar7;
  *param_9 = (uint)(bVar1 >> 6);
  *param_1 = (uint)pbVar4;
  return 0;
}


/* FUN_006b2440 @ 006b2440  kind=gamemisc  attributed-by=none  size=115 */

undefined4 FUN_006b2440(int param_1)

{
  int *in_ECX;
  
  if ((0 < *in_ECX) && (0 < in_ECX[1])) {
    FUN_006b1e00();
    if (param_1 != 0) {
      if (param_1 == 1) {
        FUN_006b1f00();
        return 0;
      }
      if (param_1 != 2) {
        return 3;
      }
      FUN_006b2000();
      return 0;
    }
    FUN_006b1e40();
  }
  return 0;
}


/* FUN_006b24c0 @ 006b24c0  kind=gamemisc  attributed-by=none  size=746 */

int FUN_006b24c0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  int unaff_ESI;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  undefined4 local_8;
  uint local_4;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  iVar2 = *(int *)(iVar1 + 0x68);
  local_1c = (undefined4 *)(in_EAX * 0x10 + *(int *)(iVar1 + 0x1a0));
  puVar6 = *(uint **)(iVar1 + 0x184);
  uVar3 = 0;
  if (*(uint *)(iVar1 + 0x17c) != 0) {
    do {
      if ((*puVar6 == (uint)*(ushort *)(param_1 + 0xc)) &&
         (puVar6[1] == (uint)*(ushort *)(param_1 + 0xe))) {
        uVar3 = puVar6[2];
        local_20 = 4;
        if ((uVar3 & 1) != 0) {
          local_20 = 5;
        }
        if ((uVar3 & 2) != 0) {
          local_20 = local_20 + 1;
        }
        if ((uVar3 & 4) != 0) {
          local_20 = local_20 + 1;
        }
        iVar4 = FUN_006908c0(iVar2,*(int *)(iVar1 + 0x1b0) + puVar6[6]);
        if ((iVar4 == 0) && (iVar4 = FUN_00691f30(iVar2,puVar6[7] * local_20), iVar4 == 0)) {
          FUN_006b20c0(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),*local_1c,
                       &local_4,&local_18);
          FUN_00691fe0(iVar2);
          if (local_18 == 0) {
            return 6;
          }
          uVar5 = local_1c[1];
          local_20 = 0;
          local_10 = 0;
          local_c = (int *)0x0;
          local_14 = 0;
          local_8 = 0;
          if (*(int *)(iVar1 + 0x130) != *(int *)(iVar1 + 300)) {
            uVar5 = FUN_0068ea60(uVar5,*(int *)(iVar1 + 300),*(int *)(iVar1 + 0x130));
          }
          *(undefined4 *)(unaff_ESI + 0x38) = uVar5;
          local_1c = (undefined4 *)
                     FUN_0068ea60((uint)*(ushort *)(param_1 + 0xc) << 8,local_1c[1],
                                  *(undefined4 *)(iVar1 + 0x130));
          iVar4 = FUN_006908c0(iVar2,*(int *)(iVar1 + 0xbc) + local_4);
          if ((iVar4 == 0) && (iVar4 = FUN_00691f30(iVar2,local_18), iVar4 == 0)) {
            local_18 = *(int *)(iVar2 + 0x20);
            iVar4 = FUN_006b21e0(&local_18,*(undefined4 *)(iVar2 + 0x24),local_1c,&local_20,
                                 &local_10,&local_c,&local_14,&local_1c,&local_8);
            local_4 = local_14 + local_10;
            if (0x7fffffff < local_4) {
              FUN_00691fe0(iVar2);
              return 0x17;
            }
            if (iVar4 == 0) {
              *(int *)(unaff_ESI + 0x1c) = local_14 << 6;
              *(int **)(unaff_ESI + 0x50) = local_c;
              *(int *)(unaff_ESI + 0x4c) = local_14;
              *(int *)(unaff_ESI + 0x20) = local_20 << 6;
              *(int *)(unaff_ESI + 0x18) = (int)local_c * 0x40;
              *(int *)(unaff_ESI + 0x54) = (int)local_c + 7 >> 3;
              *(int *)(unaff_ESI + 0x2c) = (int)local_c * -0x40 >> 1;
              *(undefined4 *)(unaff_ESI + 0x48) = 0x62697473;
              *(undefined1 *)(unaff_ESI + 0x5e) = 1;
              *(int *)(unaff_ESI + 0x24) = local_10 << 6;
              *(uint *)(unaff_ESI + 0x28) = ((int)local_1c >> 2) + 0x20U & 0xffffffc0;
              *(undefined4 *)(unaff_ESI + 0x30) = 0;
              *(undefined4 *)(unaff_ESI + 0x34) = *(undefined4 *)(param_1 + 0x20);
              *(int *)(unaff_ESI + 100) = local_20;
              *(uint *)(unaff_ESI + 0x68) = local_4;
              local_c = (int *)(unaff_ESI + 0x4c);
              iVar4 = FUN_00692520();
              if (iVar4 == 0) {
                iVar4 = FUN_006b2440(local_8);
              }
            }
            FUN_00691fe0(iVar2);
          }
        }
        return iVar4;
      }
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 9;
    } while (uVar3 < *(uint *)(iVar1 + 0x17c));
  }
  return 6;
}


/* FUN_006b27c0 @ 006b27c0  kind=gamemisc  attributed-by=none  size=675 */

int FUN_006b27c0(int param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint in_ECX;
  int iVar7;
  int iVar8;
  uint *unaff_ESI;
  byte *pbVar9;
  int local_10;
  byte *local_c;
  byte *local_8;
  uint local_4;
  
  local_10 = FUN_006908c0(param_1);
  if (local_10 == 0) {
    uVar4 = FUN_00690b80(param_1,&local_10);
    if (local_10 == 0) {
      if ((uVar4 & 0xffff) <= in_ECX) {
        return 6;
      }
      local_10 = FUN_00690900(param_1,in_ECX * 5);
      if (local_10 == 0) {
        uVar4 = FUN_00690b80(param_1,&local_10);
        uVar4 = uVar4 & 0xffff;
        if ((local_10 == 0) && (uVar5 = FUN_00690c60(param_1,&local_10), local_10 == 0)) {
          *unaff_ESI = uVar4;
          unaff_ESI[1] = uVar5;
          local_10 = FUN_006908c0(param_1,uVar5);
          if ((local_10 == 0) && (local_10 = FUN_00691f30(param_1,uVar4), local_10 == 0)) {
            puVar3 = *(undefined1 **)(param_1 + 0x20);
            pbVar9 = puVar3 + uVar4;
            local_8 = pbVar9;
            if (puVar3 + 0xd <= pbVar9) {
              unaff_ESI[2] = (int)CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]);
              unaff_ESI[3] = (int)CONCAT21(CONCAT11(puVar3[3],puVar3[4]),puVar3[5]);
              unaff_ESI[4] = (int)CONCAT21(CONCAT11(puVar3[6],puVar3[7]),puVar3[8]);
              unaff_ESI[5] = (int)CONCAT21(CONCAT11(puVar3[9],puVar3[10]),puVar3[0xb]);
              bVar1 = puVar3[0xc];
              local_c = puVar3 + 0xd;
              iVar7 = 0;
              if ((bVar1 & 4) != 0) {
                iVar7 = 1;
                if ((bVar1 & 8) != 0) {
                  iVar7 = 2;
                }
                if ((bVar1 & 3) == 0) {
                  iVar7 = iVar7 + 3;
                }
              }
              local_4 = bVar1 & 0x10;
              iVar8 = iVar7;
              if (((bVar1 & 0x10) != 0) && (iVar8 = iVar7 + 1, (bVar1 & 0x20) != 0)) {
                iVar8 = iVar7 + 2;
              }
              if (local_c + iVar8 <= pbVar9) {
                if ((bVar1 & 4) != 0) {
                  if ((bVar1 & 8) == 0) {
                    uVar4 = (uint)*local_c;
                    pbVar6 = puVar3 + 0xe;
                  }
                  else {
                    pbVar6 = puVar3 + 0xf;
                    uVar4 = (int)(short)((short)(char)*local_c << 8) | (uint)(byte)puVar3[0xe];
                  }
                  unaff_ESI[7] = uVar4;
                  local_c = pbVar6;
                  if ((bVar1 & 3) == 0) {
                    local_c = pbVar6 + 3;
                    unaff_ESI[9] = (int)CONCAT21(CONCAT11(*pbVar6,pbVar6[1]),pbVar6[2]);
                  }
                }
                if ((bVar1 & 0x10) != 0) {
                  if ((bVar1 & 0x20) == 0) {
                    uVar4 = (uint)*local_c;
                    local_c = local_c + 1;
                  }
                  else {
                    bVar2 = *local_c;
                    pbVar6 = local_c + 1;
                    local_c = local_c + 2;
                    uVar4 = (int)(short)((short)(char)bVar2 << 8) | (uint)*pbVar6;
                  }
                  unaff_ESI[8] = uVar4;
                }
                iVar7 = 0;
                if (((bVar1 & 0x40) == 0) ||
                   (local_10 = FUN_006b27b0(), iVar7 = local_10, local_10 == 0)) {
                  local_10 = iVar7;
                  if (pbVar9 < local_c + 5) goto LAB_006b2a29;
                  unaff_ESI[10] = (uint)CONCAT11(*local_c,local_c[1]);
                  unaff_ESI[0xb] = (uint)CONCAT21(CONCAT11(local_c[2],local_c[3]),local_c[4]);
                  if (param_2 != '\0') {
                    if (pbVar9 < local_c + 6) goto LAB_006b2a29;
                    unaff_ESI[10] = unaff_ESI[10] + (uint)local_c[5] * 0x10000;
                  }
                }
                FUN_00691fe0(param_1);
                return local_10;
              }
            }
LAB_006b2a29:
            local_10 = 8;
            FUN_00691fe0(param_1);
            return local_10;
          }
        }
      }
    }
  }
  return local_10;
}


/* FUN_006b2a70 @ 006b2a70  kind=gamemisc  attributed-by=none  size=1165 */

void FUN_006b2a70(byte *param_1,byte *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  uint *puVar5;
  byte *pbVar6;
  int extraout_EDX;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *local_40;
  byte *local_3c;
  int local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  uint local_28;
  uint local_24 [2];
  undefined1 local_1c [16];
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_40;
  pbVar10 = param_1 + 1;
  local_3c = (byte *)0x0;
  if (param_2 < pbVar10) goto LAB_006b2ec9;
  bVar2 = *param_1;
  local_28 = (uint)bVar2;
  local_40 = pbVar10;
  if ((char)bVar2 < '\0') goto LAB_006b2ec9;
  local_30 = (byte *)0x0;
  local_2c = (byte *)0x0;
  if ((bVar2 & 4) == 0) {
    pbVar12 = pbVar10;
    if ((bVar2 & 2) != 0) {
      pbVar12 = param_1 + 2;
      if (param_2 < pbVar12) goto LAB_006b2ec9;
      local_30 = (byte *)(uint)*pbVar10;
    }
    local_40 = pbVar12;
    if ((bVar2 & 1) != 0) {
      param_1 = pbVar12 + 1;
      if (param_2 < param_1) goto LAB_006b2ec9;
      bVar2 = *pbVar12;
      goto LAB_006b2b1e;
    }
  }
  else {
    param_1 = param_1 + 2;
    if (param_2 < param_1) goto LAB_006b2ec9;
    local_30 = (byte *)(*pbVar10 & 0xf);
    bVar2 = *pbVar10 >> 4;
LAB_006b2b1e:
    local_2c = (byte *)(uint)bVar2;
    local_40 = param_1;
  }
  pbVar10 = local_40;
  pbVar12 = local_2c + (int)local_30;
  local_38 = in_ECX;
  local_34 = pbVar12;
  if (*(byte **)(in_ECX + 4) < pbVar12) {
    uVar3 = FUN_00693a60(**(undefined4 **)(in_ECX + 0x1c),4,*(byte **)(in_ECX + 4),
                         (uint)(pbVar12 + 7) & 0xfffffff8,*(undefined4 *)(in_ECX + 8),&local_3c);
    *(undefined4 *)(in_ECX + 8) = uVar3;
    if (local_3c != (byte *)0x0) goto LAB_006b2eec;
    *(uint *)(in_ECX + 4) = (uint)(pbVar12 + 7) & 0xfffffff8;
  }
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 8) + (int)local_30 * 4;
  uVar8 = 0;
  uVar4 = 0;
  pbVar6 = (byte *)0x0;
  if (pbVar12 != (byte *)0x0) {
    pbVar12 = pbVar10 + 1;
    pbVar11 = pbVar10 + 2;
    do {
      if (((uint)pbVar6 & 7) == 0) {
        local_40 = pbVar10;
        if (param_2 < pbVar12) goto LAB_006b2ec9;
        uVar8 = (uint)*pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar12 + 1;
      }
      local_40 = pbVar10;
      if ((uVar8 & 1) == 0) {
        if (param_2 < pbVar12) goto LAB_006b2ec9;
        uVar4 = uVar4 + *pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar12 + 1;
      }
      else {
        if (param_2 < pbVar11) goto LAB_006b2ec9;
        bVar2 = *pbVar10;
        pbVar9 = pbVar10 + 1;
        pbVar10 = pbVar10 + 2;
        pbVar11 = pbVar11 + 2;
        pbVar12 = pbVar12 + 2;
        uVar4 = (int)(short)((short)(char)bVar2 << 8) | (uint)*pbVar9;
      }
      *(uint *)(*(int *)(local_38 + 8) + (int)pbVar6 * 4) = uVar4;
      pbVar6 = pbVar6 + 1;
      uVar8 = uVar8 >> 1;
      local_40 = pbVar10;
    } while (pbVar6 < local_34);
  }
  if (((local_28 & 8) == 0) ||
     (local_3c = (byte *)FUN_006b27b0(), pbVar10 = local_40, local_3c == (byte *)0x0)) {
    FUN_006b1730();
    local_24[1] = 0;
    uVar4 = 0;
    local_8 = 0;
    local_40 = (byte *)0x0;
    pbVar12 = pbVar10 + 1;
    local_24[0] = 0;
    local_c = 0;
    iVar7 = extraout_EDX;
    if (pbVar12 <= param_2) {
      do {
        local_40 = (byte *)0x0;
        local_28 = (uint)(*pbVar10 >> 4);
        pbVar10 = (byte *)(*pbVar10 & 0xf);
        switch(local_28) {
        case 0:
          pbVar6 = (byte *)0x0;
          break;
        case 1:
        case 4:
        case 5:
          pbVar6 = (byte *)0x1;
          local_40 = pbVar10;
          break;
        case 2:
          if (local_30 <= pbVar10) goto LAB_006b2ec9;
          uVar4 = *(uint *)(*(int *)(iVar7 + 8) + (int)pbVar10 * 4);
          local_24[0] = uVar4;
          local_24[1] = local_8;
          local_c = uVar4;
          pbVar6 = (byte *)0x0;
          break;
        case 3:
          if (local_2c <= pbVar10) goto LAB_006b2ec9;
          local_24[1] = *(uint *)(*(int *)(iVar7 + 0xc) + (int)pbVar10 * 4);
          local_24[0] = uVar4;
          local_c = uVar4;
          local_8 = local_24[1];
          pbVar6 = (byte *)0x0;
          break;
        case 6:
          local_40 = (byte *)0xb8e;
          pbVar6 = (byte *)0x3;
          break;
        case 7:
          local_40 = (byte *)0xe2b;
          pbVar6 = (byte *)0x3;
          break;
        default:
          pbVar6 = (byte *)0x4;
          local_40 = pbVar10;
        }
        puVar5 = local_24;
        local_34 = (byte *)0x0;
        pbVar10 = pbVar12;
        if (pbVar6 != (byte *)0x0) {
          pbVar11 = pbVar12 + 1;
          pbVar9 = pbVar12 + 2;
          do {
            uVar8 = (uint)local_40 & 3;
            if (uVar8 == 0) {
              if (param_2 < pbVar11) goto LAB_006b2ec9;
              bVar2 = *pbVar12;
              pbVar12 = pbVar12 + 1;
              pbVar9 = pbVar9 + 1;
              pbVar11 = pbVar11 + 1;
              if (local_30 <= (byte *)(uint)bVar2) goto LAB_006b2ec9;
              uVar4 = *(uint *)(*(int *)(local_38 + 8) + (int)(uint)bVar2 * 4);
LAB_006b2d7c:
              *puVar5 = uVar4;
            }
            else {
              if (uVar8 == 1) {
                if (pbVar9 <= param_2) {
                  bVar2 = *pbVar12;
                  pbVar10 = pbVar12 + 1;
                  pbVar12 = pbVar12 + 2;
                  pbVar9 = pbVar9 + 2;
                  pbVar11 = pbVar11 + 2;
                  uVar4 = (int)(short)((short)(char)bVar2 << 8) | (uint)*pbVar10;
                  goto LAB_006b2d7c;
                }
                goto LAB_006b2ec9;
              }
              if (uVar8 == 2) {
                if (pbVar11 <= param_2) {
                  bVar2 = *pbVar12;
                  pbVar12 = pbVar12 + 1;
                  pbVar9 = pbVar9 + 1;
                  pbVar11 = pbVar11 + 1;
                  uVar4 = (int)(char)bVar2 + uVar4;
                  goto LAB_006b2d7c;
                }
                goto LAB_006b2ec9;
              }
              *puVar5 = uVar4;
            }
            uVar4 = (uint)local_40 >> 2 & 3;
            if (uVar4 == 0) {
              if (param_2 < pbVar11) goto LAB_006b2ec9;
              bVar2 = *pbVar12;
              pbVar12 = pbVar12 + 1;
              pbVar9 = pbVar9 + 1;
              pbVar11 = pbVar11 + 1;
              if (local_2c <= (byte *)(uint)bVar2) goto LAB_006b2ec9;
              uVar8 = *(uint *)(*(int *)(local_38 + 0xc) + (int)(uint)bVar2 * 4);
            }
            else if (uVar4 == 1) {
              if (param_2 < pbVar9) goto LAB_006b2ec9;
              bVar2 = *pbVar12;
              pbVar10 = pbVar12 + 1;
              pbVar12 = pbVar12 + 2;
              pbVar9 = pbVar9 + 2;
              pbVar11 = pbVar11 + 2;
              uVar8 = (int)(short)((short)(char)bVar2 << 8) | (uint)*pbVar10;
            }
            else {
              uVar8 = local_8;
              if (uVar4 == 2) {
                if (param_2 < pbVar11) goto LAB_006b2ec9;
                bVar2 = *pbVar12;
                pbVar12 = pbVar12 + 1;
                pbVar9 = pbVar9 + 1;
                pbVar11 = pbVar11 + 1;
                uVar8 = (int)(char)bVar2 + local_8;
              }
            }
            puVar5[1] = uVar8;
            if ((local_34 == (byte *)0x0) && (pbVar6 == (byte *)0x4)) {
              if (param_2 < pbVar11) goto LAB_006b2ec9;
              local_40 = (byte *)(uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
              pbVar9 = pbVar9 + 1;
              pbVar11 = pbVar11 + 1;
              pbVar6 = (byte *)0x3;
            }
            else {
              local_40 = (byte *)((uint)local_40 >> 4);
            }
            uVar4 = *puVar5;
            local_34 = local_34 + 1;
            local_c = uVar4;
            puVar1 = puVar5 + 1;
            puVar5 = puVar5 + 2;
            local_8 = *puVar1;
            pbVar10 = pbVar12;
          } while (local_34 < pbVar6);
        }
        switch(local_28) {
        case 0:
          FUN_006b1890();
          goto LAB_006b2eec;
        case 1:
        case 2:
        case 3:
          local_3c = (byte *)FUN_006b1740();
          break;
        case 4:
        case 5:
          local_3c = (byte *)FUN_006b1830(local_24);
          break;
        default:
          local_3c = (byte *)FUN_006b17a0(local_24,local_1c);
        }
        if (local_3c != (byte *)0x0) goto LAB_006b2eec;
        pbVar12 = pbVar10 + 1;
        iVar7 = local_38;
        if (param_2 < pbVar12) {
          local_40 = local_3c;
          __security_check_cookie(local_4 ^ (uint)&local_40);
          return;
        }
      } while( true );
    }
LAB_006b2ec9:
    __security_check_cookie(local_4 ^ (uint)&local_40);
    return;
  }
LAB_006b2eec:
  __security_check_cookie(local_4 ^ (uint)&local_40);
  return;
}


/* FUN_006b2f40 @ 006b2f40  kind=gamemisc  attributed-by=none  size=737 */

int FUN_006b2f40(int param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  int local_14 [2];
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_14[0] = 0;
  local_4 = **(undefined4 **)(param_1 + 0x1c);
  pbVar12 = param_2 + 1;
  if (pbVar12 <= param_3) {
    bVar1 = *param_2;
    if ((char)bVar1 < '\0') {
      local_8 = bVar1 & 0x3f;
      if (((bVar1 & 8) != 0) && (local_14[0] = FUN_006b27b0(), local_14[0] != 0)) {
        return local_14[0];
      }
      iVar2 = *(int *)(param_1 + 0x10);
      uVar8 = iVar2 + local_8;
      if (*(uint *)(param_1 + 0x14) < uVar8) {
        uVar8 = uVar8 + 3 & 0xfffffffc;
        if (0x40 < uVar8) {
          return 8;
        }
        uVar3 = FUN_00693a60(local_4,0x18,*(uint *)(param_1 + 0x14),uVar8,
                             *(undefined4 *)(param_1 + 0x18),local_14);
        *(undefined4 *)(param_1 + 0x18) = uVar3;
        if (local_14[0] != 0) {
          return local_14[0];
        }
        *(uint *)(param_1 + 0x14) = uVar8;
      }
      piVar9 = (int *)(*(int *)(param_1 + 0x18) + iVar2 * 0x18);
      local_4 = 0;
      if (local_8 == 0) {
        return local_14[0];
      }
      pbVar5 = param_2 + 3;
      pbVar14 = param_2 + 4;
      param_2 = param_2 + 2;
      while (local_c = 0, param_2 <= param_3) {
        bVar1 = *pbVar12;
        pbVar10 = pbVar12 + 1;
        pbVar6 = param_2 + 1;
        pbVar13 = pbVar14 + 1;
        pbVar4 = pbVar5 + 1;
        *piVar9 = 0x10000;
        if ((bVar1 & 0x10) != 0) {
          if (param_3 < pbVar4) {
            return 8;
          }
          bVar7 = *pbVar10;
          pbVar10 = pbVar12 + 3;
          pbVar6 = param_2 + 3;
          pbVar13 = pbVar14 + 3;
          pbVar4 = pbVar5 + 3;
          *piVar9 = ((int)(short)((short)(char)bVar7 << 8) | (uint)pbVar12[2]) << 4;
        }
        piVar9[1] = 0x10000;
        if ((bVar1 & 0x20) != 0) {
          if (param_3 < pbVar4) {
            return 8;
          }
          bVar7 = *pbVar10;
          pbVar12 = pbVar10 + 1;
          pbVar10 = pbVar10 + 2;
          pbVar6 = pbVar6 + 2;
          pbVar13 = pbVar13 + 2;
          pbVar4 = pbVar4 + 2;
          piVar9[1] = ((int)(short)((short)(char)bVar7 << 8) | (uint)*pbVar12) << 4;
        }
        if ((bVar1 & 3) == 1) {
          if (param_3 < pbVar4) {
            return 8;
          }
          bVar7 = *pbVar10;
          pbVar12 = pbVar10 + 1;
          pbVar10 = pbVar10 + 2;
          pbVar6 = pbVar6 + 2;
          pbVar13 = pbVar13 + 2;
          pbVar4 = pbVar4 + 2;
          local_c = (int)(short)((short)(char)bVar7 << 8) | (uint)*pbVar12;
        }
        else if ((bVar1 & 3) == 2) {
          if (param_3 < pbVar6) {
            return 8;
          }
          local_c = (uint)(char)*pbVar10;
          pbVar10 = pbVar10 + 1;
          pbVar6 = pbVar6 + 1;
          pbVar13 = pbVar13 + 1;
          pbVar4 = pbVar4 + 1;
        }
        uVar8 = 0;
        bVar7 = bVar1 >> 2 & 3;
        if (bVar7 == 1) {
          if (param_3 < pbVar4) {
            return 8;
          }
          bVar7 = *pbVar10;
          pbVar12 = pbVar10 + 1;
          pbVar10 = pbVar10 + 2;
          pbVar6 = pbVar6 + 2;
          pbVar13 = pbVar13 + 2;
          pbVar4 = pbVar4 + 2;
          uVar8 = (int)(short)((short)(char)bVar7 << 8) | (uint)*pbVar12;
        }
        else if (bVar7 == 2) {
          if (param_3 < pbVar6) {
            return 8;
          }
          uVar8 = (uint)(char)*pbVar10;
          pbVar10 = pbVar10 + 1;
          pbVar6 = pbVar6 + 1;
          pbVar13 = pbVar13 + 1;
          pbVar4 = pbVar4 + 1;
        }
        piVar9[2] = local_c;
        piVar9[3] = uVar8;
        if ((bVar1 & 0x40) == 0) {
          if (param_3 < pbVar6) {
            return 8;
          }
          pbVar11 = pbVar10 + 1;
          pbVar6 = pbVar6 + 1;
          pbVar13 = pbVar13 + 1;
          piVar9[5] = (uint)*pbVar10;
          pbVar4 = pbVar4 + 1;
        }
        else {
          if (param_3 < pbVar4) {
            return 8;
          }
          pbVar11 = pbVar10 + 2;
          pbVar6 = pbVar6 + 2;
          pbVar13 = pbVar13 + 2;
          pbVar4 = pbVar4 + 2;
          piVar9[5] = (uint)CONCAT11(*pbVar10,pbVar10[1]);
        }
        if ((bVar1 & 0x80) == 0) {
          if (param_3 < pbVar4) {
            return 8;
          }
          pbVar12 = pbVar11 + 2;
          param_2 = pbVar6 + 2;
          pbVar14 = pbVar13 + 2;
          pbVar5 = pbVar4 + 2;
          uVar8 = (uint)*pbVar11;
        }
        else {
          if (param_3 < pbVar13) {
            return 8;
          }
          pbVar12 = pbVar11 + 3;
          uVar8 = (uint)CONCAT11(*pbVar11,pbVar11[1]);
          param_2 = pbVar6 + 3;
          pbVar14 = pbVar13 + 3;
          pbVar5 = pbVar4 + 3;
        }
        piVar9[4] = uVar8 << 8 | (uint)pbVar12[-1];
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        local_4 = local_4 + 1;
        piVar9 = piVar9 + 6;
        if (local_8 <= local_4) {
          return local_14[0];
        }
      }
    }
  }
  return 8;
}


/* FUN_006b3230 @ 006b3230  kind=gamemisc  attributed-by=none  size=416 */

int FUN_006b3230(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_c;
  
  iVar3 = FUN_006908c0(param_2,param_3 + param_4);
  if ((iVar3 == 0) && (iVar3 = FUN_00691f30(param_2,param_5), iVar3 == 0)) {
    pbVar1 = *(byte **)(param_2 + 0x20);
    if ((param_5 == 0) || ((*pbVar1 & 0x80) == 0)) {
      iVar3 = FUN_006b2a70(pbVar1,pbVar1 + param_5);
      FUN_00691fe0(param_2);
      return iVar3;
    }
    iVar6 = *(int *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar3 = FUN_006b2f40(param_1,pbVar1,pbVar1 + param_5);
    FUN_00691fe0(param_2);
    if ((iVar3 != 0) || (iVar4 = *(int *)(param_1 + 0x10) - iVar6, iVar4 < 1)) {
      return iVar3;
    }
    iVar6 = iVar6 * 0x18;
    local_c = 0;
    do {
      iVar8 = (int)*(short *)(iVar2 + 0x16);
      iVar3 = FUN_006b3230(param_1,param_2,param_3,
                           *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10 + iVar6),
                           *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x14 + iVar6));
      if (iVar3 != 0) {
        return iVar3;
      }
      piVar7 = (int *)(*(int *)(param_1 + 0x18) + iVar6);
      iVar3 = *(short *)(iVar2 + 0x16) - iVar8;
      if ((*piVar7 == 0x10000) && (piVar7[1] == 0x10000)) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x18) + iVar8 * 8);
        if (0 < iVar3) {
          do {
            *piVar5 = *piVar5 + piVar7[2];
            piVar5[1] = piVar5[1] + piVar7[3];
            piVar5 = piVar5 + 2;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        piVar5 = (int *)(*(int *)(iVar2 + 0x18) + iVar8 * 8);
        if (0 < iVar3) {
          do {
            iVar8 = FUN_0068ebc0(*piVar5,*piVar7);
            *piVar5 = iVar8 + piVar7[2];
            iVar8 = FUN_0068ebc0(piVar5[1],piVar7[1]);
            piVar5[1] = iVar8 + piVar7[3];
            piVar5 = piVar5 + 2;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      iVar6 = iVar6 + 0x18;
      local_c = local_c + 1;
      iVar3 = 0;
    } while (local_c < iVar4);
  }
  return iVar3;
}


/* FUN_006b3400 @ 006b3400  kind=gamemisc  attributed-by=none  size=825 */

int FUN_006b3400(undefined4 param_1,int *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  short sVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int local_10;
  int *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar4 = param_2;
  param_2 = (int *)FUN_006b0b20();
  if (param_2 == (int *)0x0) {
    cVar5 = FUN_006b0b50();
    if (cVar5 == '\0') {
      return 2;
    }
    param_2 = (int *)FUN_006b0b80();
    iVar8 = param_3;
    if ((param_2 == (int *)0x0) && (*piVar4 = local_10, -1 < param_3)) {
      if (local_10 <= param_3) {
        return 6;
      }
      param_2 = (int *)FUN_006b27c0(param_1,piVar4[0x33] != 0);
      if ((param_2 == (int *)0x0) &&
         (param_2 = (int *)FUN_006b1190(param_1,piVar4[0x47]), param_2 == (int *)0x0)) {
        piVar4[1] = iVar8;
        piVar4[4] = piVar4[0x66] + 1;
        piVar4[2] = 1;
        uVar1 = piVar4[0x66];
        uVar6 = 0;
        if (uVar1 != 0) {
          piVar9 = (int *)(piVar4[0x68] + 0xc);
          do {
            if (*piVar9 != 0) break;
            uVar6 = uVar6 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 < uVar1);
        }
        if (uVar6 == uVar1) {
          if (piVar4[0x5f] == 0) {
            return 3;
          }
          piVar4[2] = 0;
        }
        if ((*(byte *)(piVar4 + 0x51) & 4) == 0) {
          piVar4[2] = piVar4[2] | 4;
        }
        if ((*(byte *)(piVar4 + 0x51) & 1) == 0) {
          piVar4[2] = piVar4[2] | 0x10;
        }
        else {
          piVar4[2] = piVar4[2] | 0x20;
        }
        if (piVar4[0x5f] != 0) {
          piVar4[2] = piVar4[2] | 2;
        }
        if (piVar4[0x69] != 0) {
          piVar4[2] = piVar4[2] | 0x40;
        }
        piVar4[5] = piVar4[0x5d];
        if (piVar4[0x5d] == 0) {
          piVar4[5] = piVar4[0x5c];
        }
        piVar4[6] = piVar4[0x5e];
        piVar4[7] = 0;
        piVar4[8] = 0;
        piVar4[0xd] = piVar4[0x4d];
        piVar4[0xe] = piVar4[0x4e];
        piVar4[0xf] = piVar4[0x4f];
        piVar4[0x10] = piVar4[0x50];
        *(ushort *)(piVar4 + 0x11) = *(ushort *)(piVar4 + 0x4b);
        *(short *)((int)piVar4 + 0x46) = (short)piVar4[0x50];
        *(short *)(piVar4 + 0x12) = (short)piVar4[0x4e];
        sVar3 = (short)(((uint)*(ushort *)(piVar4 + 0x4b) * 0xc) / 10);
        *(short *)((int)piVar4 + 0x4a) = sVar3;
        if ((int)sVar3 < (int)*(short *)((int)piVar4 + 0x46) - (int)(short)piVar4[0x12]) {
          *(short *)((int)piVar4 + 0x4a) = *(short *)((int)piVar4 + 0x46) - (short)piVar4[0x12];
        }
        iVar8 = piVar4[0x5f];
        if (iVar8 != 0) {
          puVar7 = (undefined2 *)
                   FUN_00693a60(*(undefined4 *)(piVar4[0x1a] + 0x1c),0x10,0,iVar8,0,&param_2);
          piVar4[8] = (int)puVar7;
          if (param_2 != (int *)0x0) {
            return (int)param_2;
          }
          piVar9 = (int *)piVar4[0x61];
          for (iVar10 = iVar8; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar7 = (short)piVar9[1];
            puVar7[1] = (short)*piVar9;
            *(int *)(puVar7 + 2) = piVar9[1] << 6;
            *(int *)(puVar7 + 4) = *piVar9 << 6;
            *(int *)(puVar7 + 6) = piVar9[1] << 6;
            puVar7 = puVar7 + 8;
            piVar9 = piVar9 + 9;
          }
          piVar4[7] = iVar8;
        }
        if ((*(byte *)(piVar4 + 0x51) & 4) == 0) {
          *(short *)(piVar4 + 0x13) = (short)piVar4[0x52];
        }
        else {
          iVar8 = piVar4[0x66];
          iVar10 = 0;
          if (iVar8 != 0) {
            piVar9 = (int *)(piVar4[0x68] + 4);
            do {
              if (iVar10 < *piVar9) {
                iVar10 = *piVar9;
              }
              piVar9 = piVar9 + 4;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          *(short *)(piVar4 + 0x13) = (short)iVar10;
        }
        *(undefined2 *)((int)piVar4 + 0x4e) = *(undefined2 *)((int)piVar4 + 0x4a);
        lVar2 = (longlong)(int)(uint)*(ushort *)(piVar4 + 0x11) * -0x66666667;
        *(short *)(piVar4 + 0x14) = (short)(int)(lVar2 >> 0x22) - (short)(lVar2 >> 0x3f);
        *(ushort *)((int)piVar4 + 0x52) = *(ushort *)(piVar4 + 0x11) / 0x1e;
        local_c = piVar4;
        local_4 = 0x10003;
        local_8 = 0x756e6963;
        param_2 = (int *)FUN_00693ed0(&DAT_00733adc,0,&local_c,0);
        if (piVar4[0x69] != 0) {
          piVar4[2] = piVar4[2] | 0x40;
        }
      }
    }
  }
  return (int)param_2;
}


/* FUN_006b3740 @ 006b3740  kind=gamemisc  attributed-by=none  size=552 */

void FUN_006b3740(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 auStack_24 [3];
  byte local_21;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)auStack_24;
  local_20 = *(int *)(param_1 + 4);
  local_1c = param_2;
  puVar1 = (undefined4 *)(param_1 + 0x6c);
  if (param_3 != 0) {
    param_3 = param_3 - 1;
  }
  if ((((local_20 != 0) && (param_3 < *(uint *)(local_20 + 0x198))) &&
      (((param_4 & 9) != 0 || (iVar4 = FUN_006b24c0(param_2), iVar4 != 0)))) &&
     ((param_4 & 0x4000) == 0)) {
    iVar7 = param_3 * 0x10 + *(int *)(local_20 + 0x1a0);
    *(undefined4 *)(param_1 + 0x48) = 0x6f75746c;
    *puVar1 = 0;
    local_18 = FUN_006b33d0(*(undefined4 *)(local_20 + 0x68),*(undefined4 *)(local_20 + 0xbc),
                            *(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 8));
    iVar3 = local_1c;
    iVar4 = local_20;
    if (local_18 == 0) {
      local_21 = ~(byte)param_4 & 1;
      iVar2 = *(int *)(param_1 + 0xbc);
      *puVar1 = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar2 + 0x18);
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar2 + 0x20);
      uVar5 = *(uint *)(iVar2 + 0x24);
      *(uint *)(param_1 + 0x7c) = uVar5;
      uVar5 = uVar5 & 0xfffffffe;
      *(uint *)(param_1 + 0x7c) = uVar5 | 4;
      if ((local_1c != 0) && (*(ushort *)(local_1c + 0xe) < 0x18)) {
        *(uint *)(param_1 + 0x7c) = uVar5 | 0x104;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      uVar6 = *(undefined4 *)(iVar7 + 4);
      if (*(int *)(local_20 + 0x130) != *(int *)(local_20 + 300)) {
        uVar6 = FUN_0068ea60(uVar6,*(int *)(local_20 + 300),*(int *)(local_20 + 0x130));
      }
      if ((*(byte *)(iVar4 + 0x144) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x28) = uVar6;
      }
      else {
        *(undefined4 *)(param_1 + 0x34) = uVar6;
      }
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      if (local_21 != 0) {
        local_20 = *(int *)(iVar3 + 0x10);
        local_1c = *(int *)(iVar3 + 0x14);
        puVar8 = *(undefined4 **)(param_1 + 0x70);
        iVar4 = 0;
        if (0 < *(short *)(param_1 + 0x6e)) {
          do {
            uVar6 = FUN_0068ebc0(*puVar8,local_20);
            *puVar8 = uVar6;
            uVar6 = FUN_0068ebc0(puVar8[1],local_1c);
            puVar8[1] = uVar6;
            iVar4 = iVar4 + 1;
            puVar8 = puVar8 + 2;
          } while (iVar4 < *(short *)(param_1 + 0x6e));
        }
        uVar6 = FUN_0068ebc0(*(undefined4 *)(param_1 + 0x28),local_20);
        *(undefined4 *)(param_1 + 0x28) = uVar6;
        uVar6 = FUN_0068ebc0(*(undefined4 *)(param_1 + 0x34),local_1c);
        *(undefined4 *)(param_1 + 0x34) = uVar6;
      }
      FUN_00690430(puVar1,&local_14);
      *(int *)(param_1 + 0x18) = local_c - local_14;
      *(int *)(param_1 + 0x1c) = local_8 - local_10;
      *(int *)(param_1 + 0x20) = local_14;
      *(int *)(param_1 + 0x24) = local_8 - (local_8 - local_10);
      __security_check_cookie(local_4 ^ (uint)auStack_24);
      return;
    }
  }
  __security_check_cookie(local_4 ^ (uint)auStack_24);
  return;
}


/* FUN_006b3970 @ 006b3970  kind=gamemisc  attributed-by=none  size=712 */

void FUN_006b3970(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_ECX;
  char *pcVar3;
  char *_Str;
  uint *unaff_ESI;
  char *pcVar4;
  uint uVar5;
  char *pcStack_124;
  uint local_120;
  char *pcStack_11c;
  char *pcStack_118;
  int iStack_114;
  char acStack_110 [10];
  char acStack_106 [258];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&pcStack_124;
  local_120 = in_ECX;
  memset(unaff_ESI,0,100);
  (*(code *)**(undefined4 **)(param_1 + 4))();
  unaff_ESI[0x12] = in_ECX;
  iStack_114 = FUN_00690930();
  iVar1 = FUN_00691f30();
  if (iVar1 == 0) {
    iVar1 = strncmp(*(char **)(in_ECX + 0x20),"%!PS-Adobe-3.0 Resource-CIDFont",0x1f);
    FUN_00691fe0();
    if (iVar1 == 0) {
LAB_006b3a00:
      uVar5 = local_120;
      iVar1 = 0x10a;
      pcVar3 = acStack_110;
      pcStack_124 = (char *)FUN_00690930(local_120);
      while( true ) {
        iVar2 = FUN_00690930(uVar5);
        iVar2 = *(int *)(uVar5 + 4) - iVar2;
        if (iVar2 == 0) break;
        if (iVar2 <= iVar1) {
          iVar1 = iVar2;
        }
        iVar2 = FUN_00691ec0(uVar5,pcVar3,iVar1);
        if (iVar2 != 0) break;
        if (iVar1 < 0x100) {
          pcVar3[iVar1] = '\0';
        }
        for (pcVar4 = acStack_110; pcVar4 < pcVar3 + iVar1 + -10; pcVar4 = pcVar4 + 1) {
          if ((*pcVar4 == 'S') && (iVar2 = strncmp(pcVar4,"StartData",9), iVar2 == 0)) {
            pcStack_124 = pcStack_124 + (10 - (int)acStack_110);
LAB_006b3ae4:
            pcStack_124 = pcVar4 + (int)pcStack_124;
            uVar5 = (int)pcStack_124 - iStack_114;
            iVar1 = FUN_006908c0(local_120,iStack_114);
            if (iVar1 != 0) goto LAB_006b3c1e;
            iVar1 = FUN_00693a30(local_120,uVar5,unaff_ESI + 0x13);
            if (iVar1 != 0) goto LAB_006b3c1e;
            pcStack_11c = (char *)unaff_ESI[0x13];
            unaff_ESI[1] = (uint)pcStack_11c;
            *unaff_ESI = (uint)pcStack_11c;
            unaff_ESI[0x15] = (uint)pcStack_124;
            unaff_ESI[0x14] = uVar5;
            unaff_ESI[2] = (uint)(pcStack_11c + uVar5);
            unaff_ESI[0x18] = 0xffffffff;
            (*(code *)unaff_ESI[8])();
            (*(code *)unaff_ESI[7])();
            pcVar3 = (char *)*unaff_ESI;
            (*(code *)unaff_ESI[8])();
            (*(code *)unaff_ESI[7])();
            pcStack_118 = (char *)unaff_ESI[2];
            pcVar4 = (char *)*unaff_ESI;
            if (pcStack_118 <= (char *)*unaff_ESI) goto LAB_006b3bc6;
            goto LAB_006b3b70;
          }
          if ((pcVar4[1] == 's') && (iVar2 = strncmp(pcVar4,"/sfnts",6), iVar2 == 0)) {
            pcStack_124 = pcStack_124 + (7 - (int)acStack_110);
            goto LAB_006b3ae4;
          }
        }
        memmove(acStack_110,pcVar4,10);
        iVar1 = 0x100;
        pcStack_124 = pcStack_124 + 0x100;
        pcVar3 = acStack_106;
        uVar5 = local_120;
      }
    }
  }
LAB_006b3c1e:
  __security_check_cookie(local_4 ^ (uint)&pcStack_124);
  return;
  while( true ) {
    if ((*pcVar4 == 'S') && (iVar1 = strncmp(pcVar4,"StartData",9), iVar1 == 0)) {
      iVar1 = strncmp(pcStack_11c,"(Hex)",5);
      if (iVar1 == 0) {
        uVar5 = atol(_Str);
        unaff_ESI[0x16] = uVar5;
      }
      goto LAB_006b3c1e;
    }
    if ((pcVar4[1] == 's') && (iVar1 = strncmp(pcVar4,"/sfnts",6), iVar1 == 0)) goto LAB_006b3c1e;
    (*(code *)unaff_ESI[8])();
    (*(code *)unaff_ESI[7])();
    pcVar3 = pcVar4;
    pcVar4 = (char *)*unaff_ESI;
    pcStack_11c = _Str;
    if (pcStack_118 <= (char *)*unaff_ESI) break;
LAB_006b3b70:
    _Str = pcVar3;
    if (unaff_ESI[3] != 0) goto LAB_006b3c1e;
  }
LAB_006b3bc6:
  uVar5 = local_120;
  FUN_00691ee0(local_120,unaff_ESI + 0x13);
  iVar1 = FUN_006908c0(uVar5,pcStack_124);
  if (iVar1 != 0) goto LAB_006b3c1e;
  goto LAB_006b3a00;
}


/* FUN_006b3c60 @ 006b3c60  kind=gamemisc  attributed-by=none  size=33 */

uint FUN_006b3c60(void)

{
  uint uVar1;
  byte *pbVar2;
  char in_DL;
  undefined4 *unaff_ESI;
  
  pbVar2 = (byte *)*unaff_ESI;
  uVar1 = 0;
  for (; in_DL != '\0'; in_DL = in_DL + -1) {
    uVar1 = uVar1 << 8 | (uint)*pbVar2;
    pbVar2 = pbVar2 + 1;
  }
  *unaff_ESI = pbVar2;
  return uVar1;
}


/* FUN_006b3c90 @ 006b3c90  kind=gamemisc  attributed-by=none  size=157 */

undefined4 FUN_006b3c90(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int unaff_ESI;
  
  iVar1 = *(int *)(in_ECX + 8);
  if (iVar1 == 10) {
    (**(code **)(in_ECX + 0xc))();
    return *(undefined4 *)(unaff_ESI + 0xc);
  }
  switch(*(undefined4 *)(in_ECX + 4)) {
  case 0:
    break;
  default:
    if (*(int *)(unaff_ESI + 0x60) < 0) {
      return 0xa0;
    }
    break;
  case 2:
    break;
  case 3:
    break;
  case 5:
  }
  if ((iVar1 != 8) && (iVar1 != 9)) {
    uVar2 = (**(code **)(unaff_ESI + 0x40))();
    return uVar2;
  }
  uVar2 = (**(code **)(unaff_ESI + 0x44))();
  return uVar2;
}


/* FUN_006b3d50 @ 006b3d50  kind=gamemisc  attributed-by=none  size=285 */

void FUN_006b3d50(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_1c;
  if (-1 < *(int *)(param_2 + 0x60)) {
    iVar2 = *(int *)(param_2 + 0x60) * 0xfc + *(int *)(param_1 + 0x130);
    (**(code **)(param_2 + 0x34))(param_2,6,&local_1c,3);
    iVar4 = (uStack_10 ^ (int)uStack_10 >> 0x1f) - ((int)uStack_10 >> 0x1f);
    uVar3 = FUN_0068ec40(iVar4,1000);
    uVar1 = FUN_0068ec40(0x10000,uVar3);
    *(undefined2 *)(param_1 + 0x44) = uVar1;
    if (iVar4 != 0x10000) {
      local_1c = FUN_0068ec40(local_1c,iVar4);
      uStack_18 = FUN_0068ec40(uStack_18,iVar4);
      uStack_14 = FUN_0068ec40(uStack_14,iVar4);
      iStack_c = FUN_0068ec40(iStack_c,iVar4);
      iStack_8 = FUN_0068ec40(iStack_8,iVar4);
      uStack_10 = 0x10000;
    }
    *(undefined4 *)(iVar2 + 0xd8) = local_1c;
    *(undefined4 *)(iVar2 + 0xe0) = uStack_18;
    *(undefined4 *)(iVar2 + 0xdc) = uStack_14;
    *(uint *)(iVar2 + 0xe4) = uStack_10;
    *(int *)(iVar2 + 0xe8) = iStack_c >> 0x10;
    *(int *)(iVar2 + 0xec) = iStack_8 >> 0x10;
  }
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}


/* FUN_006b3f40 @ 006b3f40  kind=gamemisc  attributed-by=none  size=325 */

int FUN_006b3f40(int param_1)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  char *pcVar4;
  char *in_ECX;
  undefined4 *in_EDX;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined **ppuStack_8;
  
  pcVar1 = in_ECX + in_EAX;
  *in_EDX = in_ECX;
  in_EDX[2] = pcVar1;
  in_EDX[3] = 0;
LAB_006b3f60:
  do {
    *in_EDX = in_ECX;
    (*(code *)in_EDX[7])();
    if ((char *)*in_EDX < pcVar1) {
      pcVar7 = (char *)*in_EDX + -0x11;
    }
    else {
      pcVar7 = pcVar1 + -0x12;
    }
    for (; in_ECX < pcVar7; in_ECX = in_ECX + 1) {
      if (((*in_ECX == '%') && (iVar3 = strncmp(in_ECX,"%ADOBeginFontDict",0x11), iVar3 == 0)) &&
         (0 < *(int *)(param_1 + 300))) {
        in_EDX[0x18] = in_EDX[0x18] + 1;
      }
    }
    pcVar7 = (char *)*in_EDX;
    if (pcVar1 <= pcVar7) {
LAB_006b407d:
      return in_EDX[3];
    }
    (*(code *)in_EDX[8])();
    if ((pcVar1 <= (char *)*in_EDX) || (in_EDX[3] != 0)) goto LAB_006b407d;
    if ((*pcVar7 == '/') && (pcVar7 + 2 < pcVar1)) {
      pcVar6 = pcVar7 + 1;
      iVar3 = (int)*in_EDX - (int)pcVar6;
      if (iVar3 - 1U < 0x15) {
        pcVar8 = "CIDFontName";
        ppuStack_8 = &PTR_s_CIDFontName_00733d48;
        do {
          if (*pcVar6 == *pcVar8) {
            pcVar4 = pcVar8;
            do {
              cVar2 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar2 != '\0');
            if (iVar3 == (int)pcVar4 - (int)(pcVar8 + 1)) {
              iVar5 = 1;
              if (1 < iVar3) {
                pcVar4 = pcVar7 + 2;
                while (*pcVar4 == pcVar4[(int)pcVar8 - (int)pcVar6]) {
                  iVar5 = iVar5 + 1;
                  pcVar4 = pcVar4 + 1;
                  if (iVar3 <= iVar5) goto LAB_006b403d;
                }
                if (iVar5 < iVar3) goto LAB_006b4060;
              }
LAB_006b403d:
              iVar3 = FUN_006b3c90();
              in_EDX[3] = iVar3;
              if (iVar3 != 0) {
                return iVar3;
              }
              goto LAB_006b4051;
            }
          }
LAB_006b4060:
          pcVar8 = ppuStack_8[9];
          ppuStack_8 = ppuStack_8 + 9;
        } while (pcVar8 != (char *)0x0);
        in_ECX = (char *)*in_EDX;
        goto LAB_006b3f60;
      }
    }
LAB_006b4051:
    in_ECX = (char *)*in_EDX;
  } while( true );
}


/* FUN_006b4090 @ 006b4090  kind=gamemisc  attributed-by=none  size=811 */

int FUN_006b4090(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint *local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  local_24 = *(int *)(param_1 + 0x148);
  local_4 = *(int *)(param_1 + 0x88);
  local_28 = *(undefined4 *)(param_1 + 100);
  piVar10 = (int *)0x0;
  local_1c = 0;
  puVar5 = (uint *)FUN_00693a60(local_28,8,0,*(undefined4 *)(param_1 + 300),0,&local_2c);
  *(uint **)(param_1 + 0x13c) = puVar5;
  if ((local_2c == 0) && (local_14 = 0, local_10 = puVar5, 0 < *(int *)(param_1 + 300))) {
    local_20 = 0;
    do {
      iVar9 = *(int *)(param_1 + 0x130) + local_20;
      local_8 = *(int *)(iVar9 + 4);
      uVar2 = *(uint *)(iVar9 + 0xf0);
      if (local_1c < uVar2 + 1) {
        local_18 = uVar2 + 4 & 0xfffffffc;
        piVar10 = (int *)FUN_00693a60(local_28,4,local_1c,local_18,piVar10,&local_2c);
        if (local_2c == 0) {
          local_1c = local_18;
          goto LAB_006b415a;
        }
LAB_006b430e:
        if (*(int *)(param_1 + 0x13c) != 0) {
          iVar9 = 0;
          if (0 < *(int *)(param_1 + 300)) {
            do {
              puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x13c) + 4 + iVar9 * 8);
              if (puVar4 != (undefined4 *)0x0) {
                FUN_00691290(local_28,*puVar4);
                **(undefined4 **)(*(int *)(param_1 + 0x13c) + 4 + iVar9 * 8) = 0;
              }
              FUN_00691290(local_28,*(undefined4 *)(*(int *)(param_1 + 0x13c) + 4 + iVar9 * 8));
              *(undefined4 *)(*(int *)(param_1 + 0x13c) + 4 + iVar9 * 8) = 0;
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)(param_1 + 300));
          }
          FUN_00691290(local_28,*(undefined4 *)(param_1 + 0x13c));
          *(undefined4 *)(param_1 + 0x13c) = 0;
        }
        break;
      }
LAB_006b415a:
      local_2c = FUN_006908c0(local_24,*(int *)(iVar9 + 0xf4) + *(int *)(param_1 + 0x134));
      if ((local_2c != 0) ||
         (local_2c = FUN_00691f30(local_24,*(int *)(iVar9 + 0xf8) * (uVar2 + 1)), local_2c != 0))
      goto LAB_006b430e;
      local_c = *(undefined4 *)(local_24 + 0x20);
      local_18 = 0;
      do {
        iVar9 = FUN_006b3c60();
        piVar10[local_18] = iVar9;
        local_18 = local_18 + 1;
      } while (local_18 <= uVar2);
      FUN_00691fe0(local_24);
      iVar9 = piVar10[uVar2];
      iVar3 = *piVar10;
      uVar6 = FUN_00693a60(local_28,4,0,uVar2 + 1,0,&local_2c);
      puVar5 = local_10;
      local_10[1] = uVar6;
      if (local_2c != 0) goto LAB_006b430e;
      uVar7 = FUN_00692230(local_28,iVar9 - iVar3,&local_2c);
      *(undefined4 *)puVar5[1] = uVar7;
      if (((local_2c != 0) ||
          (local_2c = FUN_006908c0(local_24,*piVar10 + *(int *)(param_1 + 0x134)), local_2c != 0))
         || (local_2c = FUN_00691ec0(local_24,*(undefined4 *)puVar5[1],iVar9 - iVar3), local_2c != 0
            )) goto LAB_006b430e;
      uVar6 = 1;
      if (uVar2 != 0) {
        do {
          piVar1 = (int *)(puVar5[1] + uVar6 * 4);
          uVar8 = uVar6 + 1;
          *piVar1 = (piVar1[-1] - piVar10[uVar6 - 1]) + piVar10[uVar6];
          uVar6 = uVar8;
        } while (uVar8 <= uVar2);
      }
      if ((-1 < local_8) && (uVar6 = 0, uVar2 != 0)) {
        do {
          (**(code **)(local_4 + 0x10))
                    (*(undefined4 *)(puVar5[1] + uVar6 * 4),piVar10[uVar6 + 1] - piVar10[uVar6],
                     0x10ea);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
      local_20 = local_20 + 0xfc;
      *puVar5 = uVar2;
      local_14 = local_14 + 1;
      local_10 = puVar5 + 2;
    } while (local_14 < *(int *)(param_1 + 300));
  }
  FUN_00691290(local_28,piVar10);
  return local_2c;
}


/* FUN_006b43f0 @ 006b43f0  kind=gamemisc  attributed-by=none  size=347 */

void FUN_006b43f0(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  char cVar7;
  char *in_ECX;
  byte *pbVar8;
  undefined1 auStack_10c [2];
  char local_10a;
  char local_109;
  char *local_108;
  byte local_104 [256];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)auStack_10c;
  iVar2 = *(int *)(param_3 + 0x68);
  iVar3 = FUN_006908c0(iVar2,param_2);
  if (iVar3 == 0) {
    local_108 = in_ECX + param_1;
    pbVar6 = local_104;
    local_109 = '\x01';
    local_10a = '\0';
    pbVar8 = pbVar6;
    if (in_ECX < local_108) {
      do {
        if (pbVar6 <= pbVar8) {
          iVar3 = FUN_00690930(iVar2);
          uVar4 = *(int *)(iVar2 + 4) - iVar3;
          if (uVar4 == 0) break;
          if (0xff < uVar4) {
            uVar4 = 0x100;
          }
          iVar5 = FUN_00691ec0(iVar2,local_104,uVar4);
          if (iVar5 != 0) break;
          pbVar8 = local_104;
          iVar5 = FUN_00690930(iVar2);
          pbVar6 = pbVar8 + (iVar5 - iVar3);
        }
        bVar1 = *pbVar8;
        if (bVar1 - 0x30 < 10) {
          cVar7 = bVar1 - 0x30;
LAB_006b44fd:
          if (local_109 == '\0') {
            *in_ECX = *in_ECX + cVar7;
            in_ECX = in_ECX + 1;
          }
          else {
            *in_ECX = cVar7 << 4;
          }
          local_109 = '\x01' - local_109;
          if (local_10a != '\0') break;
        }
        else {
          if ((0x60 < bVar1) && (bVar1 < 0x67)) {
            cVar7 = bVar1 + 0x9f;
            goto LAB_006b44fd;
          }
          if ((0x40 < bVar1) && (bVar1 < 0x47)) {
            cVar7 = bVar1 - 0x37;
            goto LAB_006b44fd;
          }
          if ((((bVar1 != 0x20) && (bVar1 != 9)) && (bVar1 != 0xd)) &&
             (((bVar1 != 10 && (bVar1 != 0xc)) && (bVar1 != 0)))) {
            if (bVar1 == 0x3e) {
              cVar7 = '\0';
              local_10a = '\x01';
              goto LAB_006b44fd;
            }
            break;
          }
        }
        pbVar8 = pbVar8 + 1;
      } while (in_ECX < local_108);
    }
  }
  __security_check_cookie(local_4 ^ (uint)auStack_10c);
  return;
}


/* FUN_006b4550 @ 006b4550  kind=gamemisc  attributed-by=none  size=283 */

int FUN_006b4550(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  int local_6c [22];
  undefined4 local_14;
  int local_10;
  
  uVar2 = *(undefined4 *)(unaff_EBX + 100);
  FUN_006b43d0();
  local_6c[0] = FUN_006b3970(*(undefined4 *)(unaff_EBX + 0x88));
  if (local_6c[0] == 0) {
    local_6c[0] = FUN_006b3f40();
    if ((local_6c[0] == 0) && (-1 < param_1)) {
      puVar1 = (undefined4 *)FUN_00692230(uVar2,0x28,local_6c);
      *(undefined4 **)(unaff_EBX + 0x148) = puVar1;
      if (local_6c[0] == 0) {
        if (local_10 == 0) {
          puVar4 = *(undefined4 **)(unaff_EBX + 0x68);
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar1 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar1 = puVar1 + 1;
          }
          *(undefined4 *)(unaff_EBX + 0x134) = local_14;
        }
        else {
          uVar2 = FUN_00692230(uVar2,local_10,local_6c);
          *(undefined4 *)(unaff_EBX + 0x144) = uVar2;
          if (local_6c[0] != 0) goto LAB_006b4658;
          iVar3 = FUN_006b43f0(local_10,local_14);
          if (iVar3 != 0) goto LAB_006b4658;
          FUN_00690880(*(undefined4 *)(unaff_EBX + 0x148),*(undefined4 *)(unaff_EBX + 0x144),
                       local_10);
          *(undefined4 *)(unaff_EBX + 0x134) = 0;
        }
        local_6c[0] = FUN_006b4090();
      }
    }
  }
LAB_006b4658:
  thunk_FUN_006b3c40();
  return local_6c[0];
}


/* FUN_006b4930 @ 006b4930  kind=gamemisc  attributed-by=none  size=584 */

int FUN_006b4930(undefined4 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  bool bVar14;
  
  *param_2 = 1;
  if (param_2[0x22] == 0) {
    uVar7 = FUN_0068fdf0(*(undefined4 *)(param_2[0x18] + 4),"psaux");
    param_2[0x22] = uVar7;
  }
  if (param_2[0x50] == 0) {
    uVar7 = FUN_0068fdf0(*(undefined4 *)(param_2[0x18] + 4),"pshinter");
    param_2[0x50] = uVar7;
  }
  iVar8 = FUN_006908c0(param_1,0);
  if (iVar8 != 0) {
    return iVar8;
  }
  iVar8 = FUN_006b4550(param_3);
  if (iVar8 != 0) {
    return iVar8;
  }
  if (param_3 < 0) {
    return 0;
  }
  if (param_3 != 0) {
    return 6;
  }
  param_2[4] = param_2[0x4a];
  param_2[9] = 0;
  param_2[1] = 0;
  param_2[2] = 0x811;
  if (*(char *)(param_2 + 0x2f) != '\0') {
    param_2[2] = 0x815;
  }
  pcVar13 = (char *)param_2[0x2c];
  param_2[5] = pcVar13;
  param_2[6] = "Regular";
  if (pcVar13 == (char *)0x0) {
    if (param_2[0x23] != 0) {
      param_2[5] = param_2[0x23];
    }
  }
  else {
    pcVar11 = (char *)param_2[0x2b];
    if (pcVar11 != (char *)0x0) {
      cVar1 = *pcVar11;
      while (cVar1 != '\0') {
        cVar2 = *pcVar13;
        if (cVar1 == cVar2) {
          pcVar13 = pcVar13 + 1;
LAB_006b4a19:
          pcVar11 = pcVar11 + 1;
        }
        else {
          if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_006b4a19;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if (*pcVar13 == '\0') {
              param_2[6] = pcVar11;
            }
            break;
          }
          pcVar13 = pcVar13 + 1;
        }
        cVar1 = *pcVar11;
      }
    }
  }
  param_2[3] = 0;
  if (param_2[0x2e] != 0) {
    param_2[3] = 1;
  }
  pbVar10 = (byte *)param_2[0x2d];
  if (pbVar10 != (byte *)0x0) {
    pbVar12 = &DAT_00723468;
    pbVar9 = pbVar10;
    do {
      bVar3 = *pbVar9;
      bVar14 = bVar3 < *pbVar12;
      if (bVar3 != *pbVar12) {
LAB_006b4a90:
        iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_006b4a95;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar9[1];
      bVar14 = bVar3 < pbVar12[1];
      if (bVar3 != pbVar12[1]) goto LAB_006b4a90;
      pbVar9 = pbVar9 + 2;
      pbVar12 = pbVar12 + 2;
    } while (bVar3 != 0);
    iVar8 = 0;
LAB_006b4a95:
    if (iVar8 != 0) {
      pcVar13 = "Black";
      do {
        bVar3 = *pbVar10;
        bVar14 = bVar3 < (byte)*pcVar13;
        if (bVar3 != *pcVar13) {
LAB_006b4ac0:
          iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_006b4ac5;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar10[1];
        bVar14 = bVar3 < (byte)pcVar13[1];
        if (bVar3 != pcVar13[1]) goto LAB_006b4ac0;
        pbVar10 = pbVar10 + 2;
        pcVar13 = pcVar13 + 2;
      } while (bVar3 != 0);
      iVar8 = 0;
LAB_006b4ac5:
      if (iVar8 != 0) goto LAB_006b4acd;
    }
    param_2[3] = param_2[3] | 2;
  }
LAB_006b4acd:
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0xd] = (int)*(short *)((int)param_2 + 0xc6);
  param_2[0xe] = (int)*(short *)((int)param_2 + 0xca);
  param_2[0xf] = param_2[0x33] + 0xffff >> 0x10;
  param_2[0x10] = param_2[0x34] + 0xffff >> 0x10;
  if (*(short *)(param_2 + 0x11) == 0) {
    *(undefined2 *)(param_2 + 0x11) = 1000;
  }
  sVar4 = *(short *)(param_2 + 0xe);
  sVar6 = (short)(((uint)*(ushort *)(param_2 + 0x11) * 0xc) / 10);
  sVar5 = (short)((uint)(param_2[0x34] + 0xffff) >> 0x10);
  *(short *)((int)param_2 + 0x4a) = sVar6;
  *(short *)((int)param_2 + 0x46) = sVar5;
  *(short *)(param_2 + 0x12) = sVar4;
  if ((int)sVar6 < (int)sVar5 - (int)sVar4) {
    *(short *)((int)param_2 + 0x4a) = sVar5 - sVar4;
  }
  *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)((int)param_2 + 0xbe);
  *(undefined2 *)((int)param_2 + 0x52) = *(undefined2 *)(param_2 + 0x30);
  return 0;
}


/* FUN_006b4ba0 @ 006b4ba0  kind=gamemisc  attributed-by=none  size=28 */

undefined4 FUN_006b4ba0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xa4);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}


/* FUN_006b4c60 @ 006b4c60  kind=gamemisc  attributed-by=none  size=921 */

void FUN_006b4c60(int param_1,int param_2)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  size_t _Size;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_30;
  uint local_2c;
  void *local_28;
  undefined4 local_24;
  int local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_30;
  iVar6 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(iVar6 + 0x148);
  _Size = 0;
  local_30 = 0;
  local_24 = *(undefined4 *)(iVar6 + 100);
  local_18 = *(int *)(iVar6 + 0x88);
  local_1c = *(int **)(*(int *)(iVar6 + 0x80) + 0x34);
  local_28 = (void *)0x0;
  local_20 = iVar4;
  if (local_1c == (int *)0x0) {
    iVar5 = *(int *)(iVar6 + 0x124) + *(int *)(iVar6 + 0x120);
    local_30 = FUN_006908c0(iVar4,iVar5 * param_2 + *(int *)(iVar6 + 0x11c) +
                                  *(int *)(iVar6 + 0x134));
    if ((local_30 != 0) || (local_30 = FUN_00691f30(iVar4,iVar5 * 2), local_30 != 0))
    goto LAB_006b4fe6;
    local_2c = *(int *)(iVar4 + 0x20);
    local_14 = FUN_006b3c60();
    local_28 = (void *)FUN_006b3c60();
    local_2c = local_2c + *(int *)(iVar6 + 0x120);
    iVar4 = FUN_006b3c60();
    pvVar1 = local_28;
    _Size = iVar4 - (int)local_28;
    FUN_00691fe0(local_20);
    if (*(uint *)(iVar6 + 300) <= local_14) {
      __security_check_cookie(local_4 ^ (uint)&local_30);
      return;
    }
    if (((_Size == 0) || (local_28 = (void *)FUN_00692230(local_24,_Size,&local_30), local_30 != 0))
       || (local_30 = FUN_00690940(local_20,*(int *)(iVar6 + 0x134) + (int)pvVar1,local_28,_Size),
          local_30 != 0)) goto LAB_006b4fe6;
    local_30 = 0;
    uVar3 = local_14;
  }
  else {
    local_30 = (**(code **)*local_1c)(local_1c[1],param_2,&local_14);
    if (local_30 != 0) goto LAB_006b4fe6;
    local_2c = local_14;
    uVar3 = FUN_006b3c60();
    if (iStack_10 != 0) {
      _Size = iStack_10 - *(int *)(iVar6 + 0x120);
      local_28 = (void *)FUN_00692230(local_24,_Size,&local_30);
      if (local_30 == 0) {
        memcpy(local_28,(void *)(*(int *)(iVar6 + 0x120) + local_14),_Size);
      }
    }
    (**(code **)(*local_1c + 4))(local_1c[1],&local_14);
    if (local_30 != 0) goto LAB_006b4fe6;
  }
  pvVar1 = local_28;
  iVar4 = *(int *)(iVar6 + 0x13c);
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(iVar4 + uVar3 * 8);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(iVar4 + uVar3 * 8 + 4);
  *(undefined4 *)(param_1 + 0x55c) = 0;
  iVar6 = uVar3 * 0xfc + *(int *)(iVar6 + 0x130);
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(iVar6 + 0xd8);
  *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(iVar6 + 0xdc);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(iVar6 + 0xe0);
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(iVar6 + 0xe4);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(iVar6 + 0xe8);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(iVar6 + 0xec);
  uVar3 = *(uint *)(iVar6 + 4);
  *(uint *)(param_1 + 0x550) = uVar3;
  uVar7 = ((int)uVar3 < 0) - 1 & uVar3;
  if (-1 < (int)uVar3) {
    (**(code **)(local_18 + 0x10))(local_28,_Size,0x10ea);
  }
  local_30 = (**(code **)(param_1 + 0x5cc))(param_1,uVar7 + (int)pvVar1,_Size - uVar7);
  FUN_00691290(local_24,pvVar1);
  piVar2 = local_1c;
  if (((local_30 == 0) && (local_1c != (int *)0x0)) && (*(int *)(*local_1c + 8) != 0)) {
    iVar6 = FUN_0068e970(*(undefined4 *)(param_1 + 0x20));
    local_14 = iVar6 >> 0x10;
    iStack_10 = 0;
    iStack_c = FUN_0068e970(*(undefined4 *)(param_1 + 0x28));
    iStack_c = iStack_c >> 0x10;
    iStack_8 = FUN_0068e970(*(undefined4 *)(param_1 + 0x2c));
    iStack_8 = iStack_8 >> 0x10;
    (**(code **)(*piVar2 + 8))(piVar2[1],param_2,0,&local_14);
    *(uint *)(param_1 + 0x20) = local_14 << 0x10;
    *(int *)(param_1 + 0x28) = iStack_c << 0x10;
    *(int *)(param_1 + 0x2c) = iStack_8 << 0x10;
    __security_check_cookie(local_4 ^ (uint)&local_30);
    return;
  }
LAB_006b4fe6:
  __security_check_cookie(local_4 ^ (uint)&local_30);
  return;
}


/* FUN_006b5520 @ 006b5520  kind=gamemisc  attributed-by=none  size=70 */

int FUN_006b5520(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0068f110(&PTR_s_xf86_driver_name_007345b4,param_2);
  if (iVar1 == 0) {
    if (param_1 != 0) {
      piVar2 = (int *)FUN_0068fd80(*(undefined4 *)(param_1 + 4),&DAT_007235ec);
      if (piVar2 != (int *)0x0) {
        iVar1 = (**(code **)(*piVar2 + 0x20))(piVar2,param_2);
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


/* FUN_006b55b0 @ 006b55b0  kind=gamemisc  attributed-by=none  size=152 */

uint FUN_006b55b0(void)

{
  uint uVar1;
  byte *in_ECX;
  byte *in_EDX;
  
  uVar1 = (uint)*in_ECX;
  if (uVar1 == 0x1c) {
    if (in_ECX + 3 <= in_EDX) {
      return (int)(short)((ushort)in_ECX[1] << 8) | (uint)in_ECX[2];
    }
  }
  else if (uVar1 == 0x1d) {
    if (in_ECX + 5 <= in_EDX) {
      return CONCAT31(CONCAT21(CONCAT11(in_ECX[1],in_ECX[2]),in_ECX[3]),in_ECX[4]);
    }
  }
  else {
    if (uVar1 < 0xf7) {
      return uVar1 - 0x8b;
    }
    if (uVar1 < 0xfb) {
      if (in_ECX + 2 <= in_EDX) {
        return uVar1 * 0x100 + -0xf694 + (uint)in_ECX[1];
      }
    }
    else if (in_ECX + 2 <= in_EDX) {
      return (uVar1 * -0x100 + 0xfa94) - (uint)in_ECX[1];
    }
  }
  return 0;
}


/* FUN_006b5650 @ 006b5650  kind=gamemisc  attributed-by=none  size=705 */

int FUN_006b5650(byte *param_1,int param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *in_EAX;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  bVar3 = false;
  bVar2 = false;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  iVar7 = 0;
  local_10 = 0;
  local_c = 0;
  iVar6 = 0;
  iVar5 = 4;
  while( true ) {
    while( true ) {
      if ((iVar5 != 0) && (in_EAX = in_EAX + 1, param_1 <= in_EAX)) {
        return 0;
      }
      bVar1 = *in_EAX >> ((byte)iVar5 & 0x1f);
      iVar5 = 4 - iVar5;
      uVar4 = bVar1 & 0xf;
      if (uVar4 != 0xe) break;
      bVar3 = true;
    }
    if (9 < uVar4) break;
    if (local_14 < 0xccccccc) {
      if (((bVar1 & 0xf) != 0) || (local_14 != 0)) {
        local_c = local_c + 1;
        local_14 = uVar4 + local_14 * 10;
      }
    }
    else {
      local_10 = local_10 + 1;
    }
  }
  if (uVar4 == 10) {
    while( true ) {
      if ((iVar5 != 0) && (in_EAX = in_EAX + 1, param_1 <= in_EAX)) {
        return 0;
      }
      bVar1 = *in_EAX >> ((byte)iVar5 & 0x1f);
      iVar5 = 4 - iVar5;
      uVar4 = bVar1 & 0xf;
      if (9 < uVar4) break;
      if (((bVar1 & 0xf) == 0) && (local_14 == 0)) {
        local_10 = local_10 + -1;
      }
      else if ((local_14 < 0xccccccc) && (iVar6 < 9)) {
        iVar6 = iVar6 + 1;
        local_14 = uVar4 + local_14 * 10;
      }
    }
  }
  if (uVar4 == 0xc) {
    bVar2 = true;
LAB_006b5740:
    while( true ) {
      if ((iVar5 != 0) && (in_EAX = in_EAX + 1, param_1 <= in_EAX)) {
        return 0;
      }
      bVar1 = (byte)iVar5;
      iVar5 = 4 - iVar5;
      uVar4 = *in_EAX >> (bVar1 & 0x1f) & 0xf;
      if (9 < uVar4) break;
      iVar7 = uVar4 + iVar7 * 10;
      if (1000 < iVar7) {
        return 0;
      }
    }
    if (bVar2) {
      iVar7 = -iVar7;
    }
  }
  else if (uVar4 == 0xb) goto LAB_006b5740;
  iVar7 = iVar7 + local_10 + param_2;
  if (param_3 == (int *)0x0) {
    uVar4 = local_c + iVar7;
    iVar6 = iVar6 - iVar7;
    if (5 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
      return 0;
    }
    if ((int)uVar4 < 0) {
      local_14 = local_14 / *(int *)(&DAT_00734690 + uVar4 * -4);
      iVar6 = iVar6 + uVar4;
    }
    if (iVar6 == 10) {
      local_14 = local_14 / 10;
      iVar6 = 9;
    }
    else if (iVar6 < 1) {
      if (0x7fff < *(int *)(&DAT_00734690 + iVar6 * -4) * local_14) {
        return 0;
      }
      local_14 = *(int *)(&DAT_00734690 + iVar6 * -4) * local_14 * 0x10000;
      goto LAB_006b58f4;
    }
    if (0x7fff < local_14 / *(int *)(&DAT_00734690 + iVar6 * 4)) {
      return 0;
    }
    local_14 = FUN_0068ec40(local_14,*(int *)(&DAT_00734690 + iVar6 * 4));
  }
  else {
    iVar6 = iVar6 + local_c;
    iVar7 = iVar7 + local_c;
    if (iVar6 < 6) {
      if (local_14 < 0x8000) {
        if (iVar7 < 1) {
          iVar7 = iVar7 - iVar6;
        }
        else {
          iVar5 = iVar7;
          if (4 < iVar7) {
            iVar5 = 5;
          }
          iVar7 = iVar7 - iVar5;
          local_14 = local_14 * *(int *)(&DAT_00734690 + (iVar5 - iVar6) * 4);
          if (0x7fff < local_14) {
            local_14 = (local_14 / 10) * 0x10000;
            *param_3 = iVar7 + 1;
            goto LAB_006b58f4;
          }
        }
        local_14 = local_14 << 0x10;
        *param_3 = iVar7;
      }
      else {
        local_14 = FUN_0068ec40(local_14,10);
        *param_3 = (iVar7 - iVar6) + 1;
      }
    }
    else if (local_14 / (int)(&PTR_LAB_0073467c)[iVar6] < 0x8000) {
      local_14 = FUN_0068ec40(local_14,(&PTR_LAB_0073467c)[iVar6]);
      *param_3 = iVar7 + -5;
    }
    else {
      local_14 = FUN_0068ec40(local_14,*(undefined4 *)(&DAT_00734680 + iVar6 * 4));
      *param_3 = iVar7 + -4;
    }
  }
LAB_006b58f4:
  if (bVar3) {
    local_14 = -local_14;
  }
  return local_14;
}


/* FUN_006b5bf0 @ 006b5bf0  kind=gamemisc  attributed-by=none  size=398 */

int FUN_006b5bf0(int param_1,byte *param_2)

{
  uint uVar1;
  byte *in_EDX;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte *local_10;
  int local_8;
  int iStack_4;
  
  iVar3 = 0;
  local_8 = 0;
  *(int *)(param_1 + 0x194) = param_1 + 0x10;
  *(byte **)(param_1 + 4) = in_EDX;
  *(byte **)(param_1 + 8) = param_2;
  *(byte **)(param_1 + 0xc) = in_EDX;
  local_10 = in_EDX;
  if (param_2 <= in_EDX) {
    return 0;
  }
  while ((uVar1 = (uint)*local_10, 0x1a < uVar1 && (uVar1 != 0x1f))) {
    if (0x17f < (int)((int)*(undefined4 **)(param_1 + 0x194) + (-0x10 - param_1) & 0xfffffffcU)) {
      return 6;
    }
    **(undefined4 **)(param_1 + 0x194) = local_10;
    *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x194) + 4;
    if (uVar1 == 0x1e) {
      do {
        local_10 = local_10 + 1;
        if (param_2 <= local_10) {
          return iVar3;
        }
      } while (((*local_10 & 0xf0) != 0xf0) && ((*local_10 & 0xf) != 0xf));
    }
    else if (uVar1 == 0x1c) {
      local_10 = local_10 + 2;
    }
    else if (uVar1 == 0x1d) {
      local_10 = local_10 + 4;
    }
    else if (0xf6 < uVar1) {
      local_10 = local_10 + 1;
    }
LAB_006b5df1:
    local_10 = local_10 + 1;
    if (param_2 <= local_10) {
      return iVar3;
    }
  }
  uVar2 = (int)*(undefined4 **)(param_1 + 0x194) + (-0x10 - param_1) >> 2;
  **(undefined4 **)(param_1 + 0x194) = local_10;
  if (uVar1 == 0xc) {
    local_10 = local_10 + 1;
    if (param_2 <= local_10) {
      return 6;
    }
    uVar1 = *local_10 | 0x100;
  }
  piVar5 = (int *)&DAT_007346b8;
  while (piVar5[1] != (uVar1 | *(uint *)(param_1 + 0x198))) {
    piVar5 = piVar5 + 7;
    if (*piVar5 == 0) goto LAB_006b5de0;
  }
  piVar4 = (int *)(piVar5[2] + *(int *)(param_1 + 0x19c));
  if ((*piVar5 != 6) && (uVar2 == 0)) {
    return 6;
  }
  switch(*piVar5) {
  case 1:
  case 4:
  case 5:
    iVar3 = FUN_006b5920();
    break;
  case 2:
    iVar3 = FUN_006b5950();
    break;
  case 3:
    iVar3 = FUN_006b5980();
    break;
  case 6:
    if ((uint)piVar5[5] < uVar2) {
      uVar2 = piVar5[5];
    }
    *(char *)(piVar5[6] + *(int *)(param_1 + 0x19c)) = (char)uVar2;
    iStack_4 = 0;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      iVar3 = FUN_006b5920();
      iStack_4 = iStack_4 + iVar3;
      if ((char)piVar5[3] == '\x01') {
        *(char *)piVar4 = (char)iStack_4;
      }
      else if ((char)piVar5[3] == '\x02') {
        *(short *)piVar4 = (short)iStack_4;
      }
      else {
        *piVar4 = iStack_4;
      }
      piVar4 = (int *)((int)piVar4 + (uint)*(byte *)(piVar5 + 3));
    }
LAB_006b5de0:
    *(int *)(param_1 + 0x194) = param_1 + 0x10;
    iVar3 = local_8;
    goto LAB_006b5df1;
  default:
    local_8 = (*(code *)piVar5[4])(param_1);
    if (local_8 != 0) {
      return local_8;
    }
    goto LAB_006b5de0;
  }
  if ((char)piVar5[3] == '\x01') {
    *(char *)piVar4 = (char)iVar3;
  }
  else if ((char)piVar5[3] == '\x02') {
    *(short *)piVar4 = (short)iVar3;
  }
  else {
    *piVar4 = iVar3;
  }
  goto LAB_006b5de0;
}


/* FUN_006b5e50 @ 006b5e50  kind=gamemisc  attributed-by=none  size=19 */

undefined2 FUN_006b5e50(void)

{
  uint in_EAX;
  
  if (in_EAX < 0x100) {
    return *(undefined2 *)((int)&DAT_00735038 + in_EAX * 2);
  }
  return 0;
}


/* FUN_006b5e70 @ 006b5e70  kind=gamemisc  attributed-by=none  size=71 */

uint FUN_006b5e70(void)

{
  byte *pbVar1;
  undefined4 *in_EAX;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  uint uVar4;
  byte local_4 [4];
  
  uVar4 = 0;
  iVar2 = FUN_00691ec0(*in_EAX,local_4,*(undefined1 *)(in_EAX + 3));
  if (iVar2 == 0) {
    iVar3 = 0;
    if (*(byte *)(in_EAX + 3) != 0) {
      do {
        pbVar1 = local_4 + iVar3;
        iVar3 = iVar3 + 1;
        uVar4 = uVar4 << 8 | (uint)*pbVar1;
      } while (iVar3 < (int)(uint)*(byte *)(in_EAX + 3));
    }
  }
  *unaff_EBX = iVar2;
  return uVar4;
}


/* FUN_006b5ec0 @ 006b5ec0  kind=gamemisc  attributed-by=none  size=273 */

int FUN_006b5ec0(char param_1)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int in_ECX;
  int *unaff_ESI;
  int unaff_EDI;
  int local_4;
  
  uVar1 = *(undefined4 *)(unaff_EDI + 0x1c);
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  *unaff_ESI = unaff_EDI;
  iVar4 = FUN_00690930();
  unaff_ESI[1] = iVar4;
  uVar3 = FUN_00690b80();
  local_4 = in_ECX;
  if (in_ECX != 0) goto LAB_006b5fb5;
  if (uVar3 == 0) {
    return 0;
  }
  bVar2 = FUN_00690b20();
  if ((byte)(bVar2 - 1) < 4) {
    *(byte *)(unaff_ESI + 3) = bVar2;
    unaff_ESI[2] = (uint)uVar3;
    unaff_ESI[4] = (uVar3 + 1) * (uint)bVar2 + 3 + unaff_ESI[1];
    local_4 = FUN_00690900();
    if (local_4 != 0) goto LAB_006b5fb5;
    iVar4 = FUN_006b5e70();
    if (iVar4 != 0) {
      unaff_ESI[5] = iVar4 + -1;
      if (param_1 == '\0') {
        local_4 = FUN_00690900();
        if (local_4 == 0) {
          return 0;
        }
      }
      else {
        local_4 = FUN_00693a30();
        if (local_4 == 0) {
          return 0;
        }
      }
      goto LAB_006b5fb5;
    }
  }
  local_4 = 8;
LAB_006b5fb5:
  FUN_00691290(uVar1,unaff_ESI[6]);
  unaff_ESI[6] = 0;
  return local_4;
}


/* FUN_006b5fe0 @ 006b5fe0  kind=gamemisc  attributed-by=none  size=76 */

void FUN_006b5fe0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    if (unaff_ESI[7] != 0) {
      FUN_00691ee0(iVar1,unaff_ESI + 7);
    }
    FUN_00691290(uVar2,unaff_ESI[6]);
    unaff_ESI[6] = 0;
    *unaff_ESI = 0;
    unaff_ESI[1] = 0;
    unaff_ESI[2] = 0;
    unaff_ESI[3] = 0;
    unaff_ESI[4] = 0;
    unaff_ESI[5] = 0;
    unaff_ESI[6] = 0;
    unaff_ESI[7] = 0;
  }
  return;
}


/* FUN_006b6030 @ 006b6030  kind=gamemisc  attributed-by=none  size=364 */

int FUN_006b6030(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int *unaff_EDI;
  int local_8;
  undefined4 local_4;
  
  iVar2 = *unaff_EDI;
  local_8 = 0;
  local_4 = *(undefined4 *)(iVar2 + 0x1c);
  iVar3 = 0;
  if ((unaff_EDI[2] != 0) && (unaff_EDI[6] == 0)) {
    uVar6 = (uint)*(byte *)(unaff_EDI + 3);
    iVar3 = unaff_EDI[2] + 1;
    iVar7 = uVar6 * iVar3;
    iVar3 = FUN_00693a60(local_4,4,0,iVar3,0,&local_8);
    unaff_EDI[6] = iVar3;
    if ((local_8 == 0) &&
       ((local_8 = FUN_006908c0(iVar2,unaff_EDI[1] + 3), local_8 == 0 &&
        (local_8 = FUN_00691f30(iVar2,iVar7), local_8 == 0)))) {
      pbVar4 = *(byte **)(iVar2 + 0x20);
      puVar5 = (uint *)unaff_EDI[6];
      pbVar1 = pbVar4 + iVar7;
      if (uVar6 == 1) {
        for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 1) {
          *puVar5 = (uint)*pbVar4;
          puVar5 = puVar5 + 1;
        }
      }
      else if (uVar6 == 2) {
        for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 2) {
          *puVar5 = (uint)CONCAT11(*pbVar4,pbVar4[1]);
          puVar5 = puVar5 + 1;
        }
      }
      else if (uVar6 == 3) {
        for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 3) {
          *puVar5 = (int)CONCAT21(CONCAT11(*pbVar4,pbVar4[1]),pbVar4[2]);
          puVar5 = puVar5 + 1;
        }
      }
      else {
        for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 4) {
          *puVar5 = CONCAT31(CONCAT21(CONCAT11(*pbVar4,pbVar4[1]),pbVar4[2]),pbVar4[3]);
          puVar5 = puVar5 + 1;
        }
      }
      FUN_00691fe0(iVar2);
      if (local_8 == 0) {
        return 0;
      }
    }
    FUN_00691290(local_4,unaff_EDI[6]);
    unaff_EDI[6] = 0;
    iVar3 = local_8;
  }
  return iVar3;
}


/* FUN_006b6310 @ 006b6310  kind=gamemisc  attributed-by=none  size=278 */

int FUN_006b6310(int *param_1,int *param_2)

{
  undefined4 uVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *unaff_ESI;
  
  if ((unaff_ESI == (undefined4 *)0x0) || ((uint)unaff_ESI[2] <= in_EAX)) {
    return 6;
  }
  iVar2 = unaff_ESI[6];
  uVar1 = *unaff_ESI;
  if (iVar2 == 0) {
    iVar2 = FUN_006908c0(uVar1,unaff_ESI[1] + 3 + *(byte *)(unaff_ESI + 3) * in_EAX);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar3 = FUN_006b5e70();
    if (uVar3 != 0) {
      do {
        in_EAX = in_EAX + 1;
        uVar4 = FUN_006b5e70();
        if (uVar4 != 0) goto LAB_006b63cb;
      } while (in_EAX < (uint)unaff_ESI[2]);
    }
  }
  else {
    uVar3 = *(uint *)(iVar2 + in_EAX * 4);
    iVar2 = iVar2 + in_EAX * 4;
    if (uVar3 != 0) {
      do {
        uVar4 = *(uint *)(iVar2 + 4);
        iVar2 = iVar2 + 4;
        in_EAX = in_EAX + 1;
        if (uVar4 != 0) goto LAB_006b63cb;
      } while (in_EAX < (uint)unaff_ESI[2]);
    }
  }
LAB_006b638c:
  *param_1 = 0;
  *param_2 = 0;
  return 0;
LAB_006b63cb:
  if (uVar3 < uVar4) {
    *param_2 = uVar4 - uVar3;
    if (unaff_ESI[7] != 0) {
      *param_1 = unaff_ESI[7] + -1 + uVar3;
      return 0;
    }
    iVar2 = FUN_006908c0(uVar1,unaff_ESI[4] + -1 + uVar3);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_00693a30(uVar1,uVar4 - uVar3,param_1);
    return iVar2;
  }
  goto LAB_006b638c;
}


/* FUN_006b6450 @ 006b6450  kind=gamemisc  attributed-by=none  size=125 */

void * FUN_006b6450(void)

{
  undefined4 uVar1;
  int in_EAX;
  void *_Dst;
  int local_c;
  void *local_8;
  size_t local_4;
  
  uVar1 = *(undefined4 *)(*(int *)(in_EAX + 0x14) + 0x1c);
  local_c = FUN_006b6310(&local_8,&local_4);
  if (local_c == 0) {
    _Dst = (void *)FUN_00692230(uVar1,local_4 + 1,&local_c);
    if (local_c == 0) {
      memcpy(_Dst,local_8,local_4);
      *(undefined1 *)(local_4 + (int)_Dst) = 0;
    }
    FUN_006b6430();
    return _Dst;
  }
  return (void *)0x0;
}


/* FUN_006b64d0 @ 006b64d0  kind=gamemisc  attributed-by=none  size=21 */

undefined4 FUN_006b64d0(void)

{
  uint in_EAX;
  int in_ECX;
  
  if (in_EAX < *(uint *)(in_ECX + 0x520)) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x524) + in_EAX * 4);
  }
  return 0;
}


/* FUN_006b6560 @ 006b6560  kind=gamemisc  attributed-by=none  size=120 */

/* WARNING: Removing unreachable block (ram,0x006b65d4) */

int FUN_006b6560(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *unaff_EDI;
  
  iVar2 = FUN_006908c0();
  if (iVar2 != 0) {
    return iVar2;
  }
  cVar1 = FUN_00690b20();
  *unaff_EDI = cVar1;
  unaff_EDI[0x14] = '\0';
  unaff_EDI[0x15] = '\0';
  unaff_EDI[0x16] = '\0';
  unaff_EDI[0x17] = '\0';
  if (cVar1 == '\0') {
    *(undefined4 *)(unaff_EDI + 0xc) = param_1;
  }
  else {
    if (cVar1 != '\x03') {
      return 3;
    }
    uVar3 = FUN_00690b80();
    *(uint *)(unaff_EDI + 0xc) = (uVar3 & 0xffff) * 3 + 2;
  }
  iVar2 = FUN_00693a30();
  return iVar2;
}


/* FUN_006b6670 @ 006b6670  kind=gamemisc  attributed-by=none  size=116 */

int FUN_006b6670(undefined4 param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  int unaff_EBX;
  int unaff_ESI;
  int iVar5;
  int local_4;
  
  uVar4 = 0;
  local_4 = 0;
  iVar5 = 0;
  if (*(int *)(unaff_ESI + 0x10) == 0) {
    if (unaff_EBX != 0) {
      puVar2 = *(ushort **)(unaff_ESI + 8);
      iVar5 = unaff_EBX;
      do {
        if (uVar4 < *puVar2) {
          uVar4 = *puVar2;
        }
        puVar2 = puVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar3 = FUN_00693a60(param_1,2,0,(uint)(ushort)(uVar4 + 1),0,&local_4);
    *(undefined4 *)(unaff_ESI + 0xc) = uVar3;
    iVar5 = local_4;
    iVar1 = unaff_EBX;
    if (local_4 == 0) {
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        *(short *)(*(int *)(unaff_ESI + 0xc) +
                  (uint)*(ushort *)(*(int *)(unaff_ESI + 8) + iVar1 * 2) * 2) = (short)iVar1;
      }
      *(uint *)(unaff_ESI + 0x10) = (uint)(ushort)(uVar4 + 1);
      *(int *)(unaff_ESI + 0x14) = unaff_EBX;
    }
  }
  return iVar5;
}


/* FUN_006b66f0 @ 006b66f0  kind=gamemisc  attributed-by=none  size=15 */

undefined2 FUN_006b66f0(void)

{
  undefined2 uVar1;
  uint in_ECX;
  int in_EDX;
  
  uVar1 = 0;
  if (in_ECX < *(uint *)(in_EDX + 0x10)) {
    uVar1 = *(undefined2 *)(*(int *)(in_EDX + 0xc) + in_ECX * 2);
  }
  return uVar1;
}


/* FUN_006b6750 @ 006b6750  kind=gamemisc  attributed-by=none  size=779 */

int FUN_006b6750(uint *param_1,int param_2,char param_3)

{
  ushort uVar1;
  uint in_EAX;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  int in_ECX;
  uint in_EDX;
  uint uVar7;
  undefined4 uVar8;
  int local_8;
  undefined4 local_4;
  
  uVar8 = *(undefined4 *)(param_2 + 0x1c);
  local_8 = 0;
  local_4 = uVar8;
  if (in_EAX < 3) {
    param_1[1] = in_EAX;
    if (in_EAX == 0) {
      if (0xe5 < in_EDX) goto LAB_006b6907;
      pvVar6 = (void *)FUN_00693a60(uVar8,2,0);
      param_1[2] = (uint)pvVar6;
      if (local_8 != 0) goto LAB_006b68d3;
      memcpy(pvVar6,&DAT_00734c68,in_EDX * 2);
    }
    else if (in_EAX == 1) {
      if (0xa6 < in_EDX) goto LAB_006b6907;
      pvVar6 = (void *)FUN_00693a60(uVar8,2,0);
      param_1[2] = (uint)pvVar6;
      if (local_8 != 0) goto LAB_006b68d3;
      memcpy(pvVar6,&DAT_00734e38,in_EDX * 2);
    }
    else {
      if ((in_EAX != 2) || (0x57 < in_EDX)) {
LAB_006b6907:
        local_8 = 3;
        goto LAB_006b68d3;
      }
      pvVar6 = (void *)FUN_00693a60(uVar8,2,0);
      param_1[2] = (uint)pvVar6;
      if (local_8 != 0) goto LAB_006b68d3;
      memcpy(pvVar6,&DAT_00734f88,in_EDX * 2);
    }
  }
  else {
    param_1[1] = in_EAX + in_ECX;
    local_8 = FUN_006908c0(param_2,in_EAX + in_ECX);
    if (local_8 != 0) goto LAB_006b68d3;
    uVar2 = FUN_00690b20(param_2,&local_8);
    *param_1 = uVar2 & 0xff;
    if (local_8 != 0) goto LAB_006b68d3;
    puVar3 = (undefined2 *)FUN_00693a60(uVar8,2,0);
    param_1[2] = (uint)puVar3;
    if (local_8 != 0) goto LAB_006b68d3;
    *puVar3 = 0;
    if (*param_1 == 0) {
      if (in_EDX != 0) {
        local_8 = FUN_00691f30(param_2,in_EDX * 2 + -2);
        if (local_8 != 0) goto LAB_006b68d3;
        uVar2 = 1;
        if (1 < in_EDX) {
          do {
            uVar1 = FUN_00690a40(param_2);
            if (uVar1 < 65000) {
              *(ushort *)(param_1[2] + uVar2 * 2) = uVar1;
            }
            else {
              *(undefined2 *)(param_1[2] + uVar2 * 2) = 0;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < in_EDX);
        }
        FUN_00691fe0(param_2);
        uVar8 = local_4;
      }
    }
    else {
      if (1 < *param_1 - 1) goto LAB_006b6907;
      uVar2 = 1;
      uVar8 = local_4;
      if (1 < in_EDX) {
        do {
          uVar1 = FUN_00690b80(param_2,&local_8);
          uVar7 = (uint)uVar1;
          uVar8 = local_4;
          if (local_8 != 0) goto LAB_006b68d3;
          if (*param_1 == 2) {
            uVar4 = FUN_00690b80(param_2,&local_8);
            uVar4 = uVar4 & 0xffff;
          }
          else {
            uVar4 = FUN_00690b20(param_2,&local_8);
            uVar4 = uVar4 & 0xff;
          }
          uVar8 = local_4;
          if (local_8 != 0) goto LAB_006b68d3;
          if (64999 < uVar1) {
            local_8 = 3;
            goto LAB_006b68d3;
          }
          if ((64999 < uVar4) || (65000 - uVar4 <= uVar7)) {
            uVar4 = 64999 - uVar7;
          }
          uVar5 = 0;
          while( true ) {
            if (in_EDX <= uVar2) goto LAB_006b67fb;
            if (uVar4 < uVar5) break;
            *(short *)(param_1[2] + uVar2 * 2) = (short)uVar7;
            uVar2 = uVar2 + 1;
            uVar5 = uVar5 + 1;
            uVar7 = uVar7 + 1;
          }
        } while (uVar2 < in_EDX);
      }
    }
  }
LAB_006b67fb:
  if (param_3 != '\0') {
    local_8 = FUN_006b6670(uVar8);
  }
  if (local_8 == 0) {
    return 0;
  }
LAB_006b68d3:
  FUN_00691290(uVar8,param_1[2]);
  param_1[2] = 0;
  FUN_00691290(uVar8,param_1[3]);
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return local_8;
}


/* FUN_006b6a70 @ 006b6a70  kind=gamemisc  attributed-by=none  size=11 */

void FUN_006b6a70(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  return;
}


/* FUN_006b6a80 @ 006b6a80  kind=gamemisc  attributed-by=none  size=833 */

int FUN_006b6a80(uint *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  short sVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  short *psVar11;
  uint in_EDX;
  uint *puVar12;
  uint *puVar13;
  int local_8;
  uint local_4;
  
  local_8 = 0;
  if (*(int *)(param_2 + 8) == 0) {
    return 3;
  }
  puVar3 = param_1 + 0x83;
  iVar9 = 0x100;
  do {
    *(undefined2 *)(puVar3 + -0x80) = 0;
    *(undefined2 *)puVar3 = 0;
    puVar3 = (uint *)((int)puVar3 + 2);
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (in_EDX < 2) {
    if (in_EDX == 0) {
      puVar3 = &DAT_00735038;
    }
    else {
      if (in_EDX != 1) {
        return 3;
      }
      puVar3 = &DAT_00735238;
    }
    puVar12 = param_1 + 3;
    puVar13 = puVar12;
    for (iVar9 = 0x80; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar13 = puVar13 + 1;
    }
    param_1[2] = 0;
    local_8 = FUN_006b6670(*(undefined4 *)(param_4 + 0x1c));
    if (local_8 == 0) {
      iVar9 = 0x100;
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        if (((short)*puVar12 == 0) || (iVar8 = FUN_006b66f0(), iVar8 == 0)) {
          *(undefined2 *)(puVar12 + 0x80) = 0;
          *(undefined2 *)puVar12 = 0;
        }
        else {
          *(short *)(puVar12 + 0x80) = (short)iVar8;
          if (param_1[2] < uVar4) {
            param_1[2] = uVar4;
          }
        }
        puVar12 = (uint *)((int)puVar12 + 2);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    param_1[1] = param_5 + in_EDX;
    local_8 = FUN_006908c0(param_4,param_5 + in_EDX);
    if (local_8 == 0) {
      uVar4 = FUN_00690b20(param_4,&local_8);
      *param_1 = uVar4 & 0xff;
      if (local_8 == 0) {
        uVar4 = FUN_00690b20(param_4,&local_8);
        uVar4 = uVar4 & 0xff;
        if (local_8 == 0) {
          if ((*param_1 & 0x7f) == 0) {
            param_1[2] = uVar4 + 1;
            local_8 = FUN_00691f30(param_4,uVar4);
            if (local_8 != 0) {
              return local_8;
            }
            pbVar10 = *(byte **)(param_4 + 0x20);
            uVar7 = 1;
            if (uVar4 != 0) {
              do {
                bVar1 = *pbVar10;
                pbVar10 = pbVar10 + 1;
                if (uVar7 < param_3) {
                  *(short *)((int)param_1 + (uint)bVar1 * 2 + 0x20c) = (short)uVar7;
                  *(undefined2 *)((int)param_1 + (uint)bVar1 * 2 + 0xc) =
                       *(undefined2 *)(*(int *)(param_2 + 8) + uVar7 * 2);
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 <= uVar4);
            }
            FUN_00691fe0(param_4);
          }
          else {
            if ((*param_1 & 0x7f) != 1) {
              return 3;
            }
            param_1[2] = 0;
            local_4 = 0;
            uVar7 = 1;
            uVar5 = 0;
            if (uVar4 != 0) {
              do {
                uVar5 = FUN_00690b20(param_4,&local_8);
                if (local_8 != 0) {
                  return local_8;
                }
                uVar6 = FUN_00690b20(param_4,&local_8);
                if (local_8 != 0) {
                  return local_8;
                }
                uVar6 = (uVar6 & 0xff) + 1;
                if (param_1[2] < uVar6) {
                  param_1[2] = uVar6;
                }
                uVar6 = uVar6 + uVar7;
                if (uVar7 < uVar6) {
                  pbVar10 = (byte *)((int)param_1 + (uVar5 & 0xff) * 2 + 0xc);
                  iVar9 = (uVar5 & 0xff) - uVar7;
                  do {
                    if ((uVar7 < param_3) && (iVar9 + uVar7 < 0x100)) {
                      *(short *)(pbVar10 + 0x200) = (short)uVar7;
                      *(undefined2 *)pbVar10 = *(undefined2 *)(*(int *)(param_2 + 8) + uVar7 * 2);
                    }
                    uVar7 = uVar7 + 1;
                    pbVar10 = pbVar10 + 2;
                  } while (uVar7 < uVar6);
                }
                local_4 = local_4 + 1;
                uVar7 = uVar6;
                uVar5 = local_4;
              } while (local_4 < uVar4);
            }
            local_4 = uVar5;
            if (0x100 < param_1[2]) {
              param_1[2] = 0x100;
            }
          }
          if ((*param_1 & 0x80) != 0) {
            local_4 = FUN_00690b20(param_4,&local_8);
            local_4 = local_4 & 0xff;
            if ((local_8 == 0) && (uVar4 = 0, local_4 != 0)) {
              while( true ) {
                uVar7 = FUN_00690b20(param_4,&local_8);
                if ((local_8 != 0) || (sVar2 = FUN_00690b80(param_4,&local_8), local_8 != 0)) break;
                uVar5 = 0;
                *(short *)((int)param_1 + (uVar7 & 0xff) * 2 + 0xc) = sVar2;
                if (param_3 != 0) {
                  psVar11 = *(short **)(param_2 + 8);
                  do {
                    if (*psVar11 == sVar2) {
                      *(short *)((int)param_1 + (uVar7 & 0xff) * 2 + 0x20c) = (short)uVar5;
                      break;
                    }
                    uVar5 = uVar5 + 1;
                    psVar11 = psVar11 + 1;
                  } while (uVar5 < param_3);
                }
                uVar4 = uVar4 + 1;
                if (local_4 <= uVar4) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return local_8;
}


/* FUN_006b6dd0 @ 006b6dd0  kind=gamemisc  attributed-by=none  size=551 */

int FUN_006b6dd0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  byte *_Dst;
  undefined4 *in_EAX;
  int iVar1;
  int local_1a8;
  int local_1a4;
  undefined1 local_1a0 [416];
  
  local_1a4 = 0;
  _Dst = (byte *)(in_EAX + 0x2b);
  FUN_006b5570(0x1000);
  memset(in_EAX,0,0xac);
  in_EAX[0xc] = 0x10000;
  in_EAX[0xf] = 0x10000;
  *in_EAX = 0xffff;
  in_EAX[1] = 0xffff;
  in_EAX[2] = 0xffff;
  in_EAX[3] = 0xffff;
  in_EAX[4] = 0xffff;
  in_EAX[5] = 0xffff;
  in_EAX[0x1f] = 0xffff;
  in_EAX[0x20] = 0xffff;
  in_EAX[0x21] = 0xffff;
  in_EAX[0x2a] = 0xffff;
  in_EAX[8] = 0xff9c0000;
  in_EAX[9] = 0x320000;
  in_EAX[0xb] = 2;
  in_EAX[0x26] = 0x2210;
  iVar1 = FUN_006b6310(&local_1a4,&local_1a8);
  if (iVar1 == 0) {
    iVar1 = FUN_006b5bf0(local_1a0,local_1a8 + local_1a4);
  }
  FUN_006b6430();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (in_EAX[0x20] != 0xffff) {
    return 0;
  }
  if ((in_EAX[0x1c] != 0) && (in_EAX[0x1d] != 0)) {
    memset(_Dst,0,0x168);
    in_EAX[0x5d] = 7;
    in_EAX[0x5e] = 1;
    in_EAX[0x7e] = 0xffffffff;
    in_EAX[0x80] = 0xf5c;
    in_EAX[0x5c] = 0x27a000;
    FUN_006b5570(0x2000,_Dst,param_5);
    iVar1 = FUN_006908c0(param_3,in_EAX[0x1c] + param_4);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_00691f30(param_3,in_EAX[0x1d]);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_006b5bf0(local_1a0,*(undefined4 *)(param_3 + 0x24));
    FUN_00691fe0(param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    *_Dst = *_Dst & 0xfe;
  }
  iVar1 = 0;
  if ((in_EAX[0x82] != 0) &&
     (iVar1 = FUN_006908c0(param_3,in_EAX[0x1c] + in_EAX[0x82] + param_4), iVar1 == 0)) {
    iVar1 = FUN_006b5ec0(1);
    if (iVar1 == 0) {
      iVar1 = FUN_006b61b0(in_EAX + 0x85,in_EAX + 0x8d,0);
    }
  }
  return iVar1;
}


/* FUN_006b7030 @ 006b7030  kind=gamemisc  attributed-by=none  size=999 */

int FUN_006b7030(undefined4 param_1,int param_2,int *param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int unaff_EBX;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  uint local_18;
  
  piVar1 = param_3;
  iVar2 = *(int *)(unaff_EBX + 0x1c);
  memset(param_3,0,0x818);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  *piVar1 = unaff_EBX;
  piVar1[1] = iVar2;
  FUN_00690930();
  param_3 = (int *)FUN_00692010();
  if (param_3 != (int *)0x0) goto LAB_006b7403;
  if ((((char)piVar1[4] == '\x01') && (3 < *(byte *)((int)piVar1 + 0x12))) &&
     (*(byte *)((int)piVar1 + 0x13) < 5)) {
    param_3 = (int *)FUN_00690900();
    if ((((param_3 != (int *)0x0) || (param_3 = (int *)FUN_006b5ec0(0), param_3 != (int *)0x0)) ||
        ((param_3 = (int *)FUN_006b5ec0(0), param_3 != (int *)0x0 ||
         ((param_3 = (int *)FUN_006b5ec0(1), param_3 != (int *)0x0 ||
          (param_3 = (int *)FUN_006b5ec0(1), param_3 != (int *)0x0)))))) ||
       (param_3 = (int *)FUN_006b61b0(&local_40,piVar1 + 0x149,piVar1 + 0x14a),
       param_3 != (int *)0x0)) goto LAB_006b7403;
    piVar1[0x148] = local_38;
    piVar1[2] = piVar1[7];
    if (piVar1[7] <= param_2) {
      param_3 = (int *)0x6;
    }
    if ((((param_2 < 0) ||
         (param_3 = (int *)FUN_006b6dd0(piVar1 + 0x12e,param_2), param_3 != (int *)0x0)) ||
        (param_3 = (int *)FUN_006908c0(), param_3 != (int *)0x0)) ||
       (param_3 = (int *)FUN_006b5ec0(0), param_3 != (int *)0x0)) goto LAB_006b7403;
    if (piVar1[0x16b] == 0xffff) {
      piVar1[0x1d9] = 0;
      param_3 = (int *)0x0;
    }
    else {
      param_3 = (int *)FUN_006908c0();
      if ((param_3 != (int *)0x0) || (param_3 = (int *)FUN_006b5ec0(0), param_3 != (int *)0x0))
      goto LAB_006b7403;
      if (local_18 < 0x21) {
        piVar1[0x1d9] = local_18;
        iVar2 = FUN_00693a60(iVar2,0x238,0,local_18,0,&param_3);
        if (param_3 == (int *)0x0) {
          if (local_18 != 0) {
            piVar3 = piVar1 + 0x1da;
            uVar4 = local_18;
            do {
              *piVar3 = iVar2;
              piVar3 = piVar3 + 1;
              iVar2 = iVar2 + 0x238;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          uVar4 = 0;
          iVar2 = (int)param_3;
          if (local_18 != 0) {
            do {
              param_3 = (int *)iVar2;
              param_3 = (int *)FUN_006b6dd0(local_20,uVar4);
              if (param_3 != (int *)0x0) goto LAB_006b7302;
              uVar4 = uVar4 + 1;
              param_3 = (int *)0x0;
              iVar2 = 0;
            } while (uVar4 < local_18);
          }
          param_3 = (int *)FUN_006b6560(piVar1[0x128]);
        }
      }
LAB_006b7302:
      FUN_006b5fe0();
      if (param_3 != (int *)0x0) goto LAB_006b7403;
    }
    if (piVar1[0x166] != 0) {
      piVar1[3] = piVar1[0x128];
      param_3 = (int *)FUN_006b61b0(piVar1 + 0x15,piVar1 + 0x147,0);
      if (param_3 == (int *)0x0) {
        iVar2 = 0;
        if (piVar1[3] != 0) {
          param_3 = (int *)FUN_006b6750(piVar1 + 0x120);
          if ((param_3 != (int *)0x0) ||
             ((iVar2 = 0, piVar1[0x16b] == 0xffff &&
              (param_3 = (int *)FUN_006b6a80(piVar1 + 0x1d,piVar1 + 0x120,piVar1[3]),
              iVar2 = (int)param_3, param_3 != (int *)0x0)))) goto LAB_006b7403;
        }
        param_3 = (int *)iVar2;
        iVar2 = FUN_006b6450(param_2);
        piVar1[0x146] = iVar2;
        FUN_006b5fe0();
        return (int)param_3;
      }
      goto LAB_006b7403;
    }
  }
  param_3 = (int *)0x2;
LAB_006b7403:
  FUN_006b5fe0();
  return (int)param_3;
}


/* FUN_006b7420 @ 006b7420  kind=gamemisc  attributed-by=none  size=278 */

void FUN_006b7420(void)

{
  undefined4 uVar1;
  undefined4 *unaff_EBX;
  uint uVar2;
  
  uVar1 = unaff_EBX[1];
  FUN_006b5fe0();
  FUN_006b5fe0();
  FUN_006b5fe0();
  FUN_006b5fe0();
  if (unaff_EBX[0x1d9] != 0) {
    uVar2 = 0;
    if (unaff_EBX[0x1d9] != 0) {
      do {
        FUN_006b7000(uVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)unaff_EBX[0x1d9]);
    }
    FUN_00691290(uVar1,unaff_EBX[0x1da]);
    unaff_EBX[0x1da] = 0;
  }
  FUN_006b6a70();
  FUN_006b6720();
  FUN_006b7000(uVar1);
  FUN_006b6530(*unaff_EBX);
  FUN_00691290(uVar1,unaff_EBX[0x203]);
  unaff_EBX[0x203] = 0;
  FUN_00691290(uVar1,unaff_EBX[0x146]);
  unaff_EBX[0x146] = 0;
  FUN_00691290(uVar1,unaff_EBX[0x147]);
  unaff_EBX[0x147] = 0;
  FUN_00691290(uVar1,unaff_EBX[0x149]);
  unaff_EBX[0x149] = 0;
  FUN_00691290(uVar1,unaff_EBX[0x14a]);
  unaff_EBX[0x14a] = 0;
  return;
}


/* FUN_006b75d0 @ 006b75d0  kind=gamemisc  attributed-by=none  size=362 */

void FUN_006b75d0(void)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  void *unaff_ESI;
  int unaff_EDI;
  
  memset(unaff_ESI,0,0xc4);
  bVar1 = *(byte *)(unaff_EDI + 0xac);
  *(byte *)((int)unaff_ESI + 8) = bVar1;
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    puVar2 = (undefined2 *)((int)unaff_ESI + 0xc);
    puVar3 = (undefined2 *)(unaff_EDI + 0xb0);
    do {
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  bVar1 = *(byte *)(unaff_EDI + 0xad);
  *(byte *)((int)unaff_ESI + 9) = bVar1;
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    puVar2 = (undefined2 *)((int)unaff_ESI + 0x28);
    puVar3 = (undefined2 *)(unaff_EDI + 0xe8);
    do {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  bVar1 = *(byte *)(unaff_EDI + 0xae);
  *(byte *)((int)unaff_ESI + 10) = bVar1;
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    puVar2 = (undefined2 *)((int)unaff_ESI + 0x3c);
    puVar3 = (undefined2 *)(unaff_EDI + 0x110);
    do {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  bVar1 = *(byte *)(unaff_EDI + 0xaf);
  *(byte *)((int)unaff_ESI + 0xb) = bVar1;
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    puVar2 = (undefined2 *)((int)unaff_ESI + 0x58);
    puVar3 = (undefined2 *)(unaff_EDI + 0x148);
    do {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(undefined4 *)((int)unaff_ESI + 0x6c) = *(undefined4 *)(unaff_EDI + 0x170);
  *(undefined4 *)((int)unaff_ESI + 0x70) = *(undefined4 *)(unaff_EDI + 0x174);
  *(undefined4 *)((int)unaff_ESI + 0x74) = *(undefined4 *)(unaff_EDI + 0x178);
  *(undefined2 *)((int)unaff_ESI + 0x78) = *(undefined2 *)(unaff_EDI + 0x17c);
  *(undefined2 *)((int)unaff_ESI + 0x7a) = *(undefined2 *)(unaff_EDI + 0x180);
  bVar1 = *(byte *)(unaff_EDI + 0x184);
  *(byte *)((int)unaff_ESI + 0x7c) = bVar1;
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    puVar2 = (undefined2 *)((int)unaff_ESI + 0x80);
    puVar3 = (undefined2 *)(unaff_EDI + 0x188);
    do {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  bVar1 = *(byte *)(unaff_EDI + 0x185);
  *(byte *)((int)unaff_ESI + 0x7d) = bVar1;
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    puVar2 = (undefined2 *)((int)unaff_ESI + 0x9a);
    puVar3 = (undefined2 *)(unaff_EDI + 0x1bc);
    do {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(undefined1 *)((int)unaff_ESI + 0x7e) = *(undefined1 *)(unaff_EDI + 0x1f0);
  *(undefined4 *)((int)unaff_ESI + 0xb8) = *(undefined4 *)(unaff_EDI + 0x1fc);
  *(undefined4 *)((int)unaff_ESI + 4) = *(undefined4 *)(unaff_EDI + 0x1f8);
  return;
}


/* FUN_006b7880 @ 006b7880  kind=gamemisc  attributed-by=none  size=227 */

undefined4 FUN_006b7880(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  param_1[0xb] = (int)param_2;
  FUN_0068f560(*param_1,param_2);
  iVar3 = FUN_006b7540();
  if (iVar3 == 0) {
    return 0;
  }
  iVar5 = *(int *)(*param_1 + 0x2b4);
  puVar1 = (undefined4 *)param_1[10];
  iVar2 = *(int *)(iVar5 + 0x56c);
  (**(code **)(iVar3 + 4))(*puVar1,param_1[4],param_1[5],0,0);
  iVar6 = *(int *)(iVar5 + 0x764);
  if (iVar6 != 0) {
    param_2 = (int *)(iVar5 + 0x764 + iVar6 * 4);
    do {
      iVar5 = *(int *)(*param_2 + 0x40);
      if (iVar2 == iVar5) {
        iVar4 = param_1[4];
        iVar5 = param_1[5];
      }
      else {
        iVar4 = FUN_0068ea60(param_1[4],iVar2,iVar5);
        iVar5 = FUN_0068ea60(param_1[5],iVar2,iVar5);
      }
      (**(code **)(iVar3 + 4))(puVar1[iVar6],iVar4,iVar5,0,0);
      param_2 = param_2 + -1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}


/* FUN_006b7970 @ 006b7970  kind=gamemisc  attributed-by=none  size=280 */

undefined4 FUN_006b7970(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = param_2;
  piVar3 = param_1;
  iVar4 = *param_1;
  if ((*(byte *)(iVar4 + 8) & 2) != 0) {
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x214) + 0x94))(iVar4,param_2,&param_1);
    if (iVar4 == 0) {
      uVar5 = FUN_006b7880(piVar3,param_1);
      return uVar5;
    }
    piVar3[0xb] = -1;
  }
  FUN_0068f5f0(*piVar3,uVar5);
  iVar4 = FUN_006b7540();
  if (iVar4 != 0) {
    iVar7 = *(int *)(*piVar3 + 0x2b4);
    puVar1 = (undefined4 *)piVar3[10];
    iVar2 = *(int *)(iVar7 + 0x56c);
    (**(code **)(iVar4 + 4))(*puVar1,piVar3[4],piVar3[5],0,0);
    iVar8 = *(int *)(iVar7 + 0x764);
    if (iVar8 != 0) {
      param_1 = (int *)(iVar7 + 0x764 + iVar8 * 4);
      do {
        iVar7 = *(int *)(*param_1 + 0x40);
        if (iVar2 == iVar7) {
          iVar6 = piVar3[4];
          iVar7 = piVar3[5];
        }
        else {
          iVar6 = FUN_0068ea60(piVar3[4],iVar2,iVar7);
          iVar7 = FUN_0068ea60(piVar3[5],iVar2,iVar7);
        }
        (**(code **)(iVar4 + 4))(puVar1[iVar8],iVar6,iVar7,0,0);
        param_1 = param_1 + -1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return 0;
}


/* FUN_006b7b10 @ 006b7b10  kind=gamemisc  attributed-by=none  size=144 */

void FUN_006b7b10(void)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char *in_EDX;
  char *pcVar5;
  char *pcVar6;
  
  pcVar3 = in_EDX;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  bVar2 = true;
  while( true ) {
    if (((int)(pcVar3 + (1 - (int)(in_EDX + 1))) < 7) || (in_EDX[6] != '+')) {
      return;
    }
    if ((*in_EDX < 'A') || ('Z' < *in_EDX)) {
      bVar2 = false;
    }
    if ((in_EDX[1] < 'A') || ('Z' < in_EDX[1])) {
      bVar2 = false;
    }
    if ((in_EDX[2] < 'A') || ('Z' < in_EDX[2])) {
      bVar2 = false;
    }
    if ((in_EDX[3] < 'A') || ('Z' < in_EDX[3])) {
      bVar2 = false;
    }
    if ((in_EDX[4] < 'A') || ('Z' < in_EDX[4])) {
      bVar2 = false;
    }
    if (in_EDX[5] < 'A') break;
    if ('Z' < in_EDX[5]) {
      return;
    }
    if (!bVar2) {
      return;
    }
    if (7 < (int)(pcVar3 + (1 - (int)(in_EDX + 1)))) {
      pcVar5 = in_EDX + 7;
      pcVar6 = in_EDX;
      for (pcVar4 = pcVar3 + (-6 - (int)(in_EDX + 1)); pcVar4 != (char *)0x0; pcVar4 = pcVar4 + -1)
      {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
  }
  return;
}


/* FUN_006b8400 @ 006b8400  kind=gamemisc  attributed-by=none  size=78 */

void FUN_006b8400(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 100);
    if (*(int *)(param_1 + 0x214) != 0) {
      (**(code **)(*(int *)(param_1 + 0x214) + 0xc))(param_1);
    }
    if (*(int *)(param_1 + 0x2b4) != 0) {
      FUN_006b7420();
      FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x2b4));
      *(undefined4 *)(param_1 + 0x2b4) = 0;
    }
  }
  return;
}


/* FUN_006b8660 @ 006b8660  kind=gamemisc  attributed-by=none  size=44 */

undefined4 FUN_006b8660(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int in_EDX;
  
  if (in_ECX != 0) {
    iVar1 = *(int *)(in_EDX + 0xc);
    if (*(uint *)(iVar1 + 4) <
        (uint)((int)*(short *)(iVar1 + 0x16) + *(short *)(iVar1 + 0x3a) + in_ECX)) {
      uVar2 = FUN_00693c40(iVar1);
      return uVar2;
    }
  }
  return 0;
}


/* FUN_006b8690 @ 006b8690  kind=gamemisc  attributed-by=none  size=62 */

void FUN_006b8690(char param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  
  iVar3 = *(int *)(in_ECX + 0x14);
  if (*(char *)(in_ECX + 0x41) != '\0') {
    sVar2 = *(short *)(iVar3 + 2);
    piVar1 = (int *)(*(int *)(iVar3 + 4) + sVar2 * 8);
    iVar4 = *(int *)(iVar3 + 8);
    *piVar1 = in_EDX >> 0x10;
    piVar1[1] = in_EAX >> 0x10;
    *(char *)(iVar4 + sVar2) = (param_1 == '\0') + '\x01';
  }
  *(short *)(iVar3 + 2) = *(short *)(iVar3 + 2) + 1;
  return;
}


/* FUN_006b8700 @ 006b8700  kind=gamemisc  attributed-by=none  size=90 */

int FUN_006b8700(void)

{
  short *psVar1;
  int in_EAX;
  int iVar2;
  
  psVar1 = *(short **)(in_EAX + 0x14);
  if (*(char *)(in_EAX + 0x41) == '\0') {
    *psVar1 = *psVar1 + 1;
    return 0;
  }
  iVar2 = *(int *)(in_EAX + 0xc);
  if ((*(uint *)(iVar2 + 8) < (uint)(*(short *)(iVar2 + 0x38) + 1 + (int)*(short *)(iVar2 + 0x14)))
     && (iVar2 = FUN_00693c40(iVar2,0,1), iVar2 != 0)) {
    return iVar2;
  }
  if (0 < *psVar1) {
    *(short *)(*(int *)(psVar1 + 6) + -2 + *psVar1 * 2) = psVar1[1] + -1;
  }
  *psVar1 = *psVar1 + 1;
  return 0;
}


/* FUN_006b8760 @ 006b8760  kind=gamemisc  attributed-by=none  size=45 */

void FUN_006b8760(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  int iVar1;
  
  if (*(char *)(in_EAX + 0x40) == '\0') {
    *(undefined1 *)(in_EAX + 0x40) = 1;
    iVar1 = FUN_006b8700();
    if (iVar1 == 0) {
      FUN_006b86d0(param_1,param_2);
    }
  }
  return;
}


/* FUN_006b8790 @ 006b8790  kind=gamemisc  attributed-by=none  size=133 */

void FUN_006b8790(void)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  
  psVar3 = *(short **)(in_EAX + 0x14);
  if (psVar3 != (short *)0x0) {
    sVar1 = *psVar3;
    if (sVar1 < 2) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(short *)(*(int *)(psVar3 + 6) + -4 + sVar1 * 2) + 1;
    }
    sVar2 = psVar3[1];
    if (1 < sVar2) {
      iVar4 = *(int *)(psVar3 + 2);
      iVar6 = (int)sVar2;
      if (((*(int *)(iVar4 + iVar5 * 8) == *(int *)(iVar4 + -8 + iVar6 * 8)) &&
          (*(int *)(iVar4 + 4 + iVar5 * 8) == *(int *)(iVar4 + -4 + iVar6 * 8))) &&
         (*(char *)(*(int *)(psVar3 + 4) + -1 + iVar6) == '\x01')) {
        psVar3[1] = sVar2 + -1;
      }
    }
    if (0 < sVar1) {
      sVar2 = psVar3[1];
      if (iVar5 == sVar2 + -1) {
        *psVar3 = sVar1 + -1;
        psVar3[1] = sVar2 + -1;
        return;
      }
      *(short *)(*(int *)(psVar3 + 6) + -2 + sVar1 * 2) = sVar2 + -1;
    }
  }
  return;
}


/* FUN_006b8820 @ 006b8820  kind=gamemisc  attributed-by=none  size=57 */

uint FUN_006b8820(void)

{
  short sVar1;
  uint in_EAX;
  uint uVar2;
  int in_ECX;
  int extraout_ECX;
  short *extraout_EDX;
  short *psVar3;
  
  if ((*(int *)(in_ECX + 0x488) != 0) && (in_EAX < 0x100)) {
    sVar1 = FUN_006b5e50();
    uVar2 = 0;
    psVar3 = extraout_EDX;
    if (*(uint *)(extraout_ECX + 0xc) != 0) {
      do {
        if (*psVar3 == sVar1) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        psVar3 = psVar3 + 1;
      } while (uVar2 < *(uint *)(extraout_ECX + 0xc));
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}


/* FUN_006b8910 @ 006b8910  kind=gamemisc  attributed-by=none  size=558 */

int FUN_006b8910(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_ESI;
  int local_1c;
  
  if (*(char *)(unaff_ESI + 0x39c) != '\0') {
    return 0xa0;
  }
  param_2 = param_2 + *(int *)(unaff_ESI + 0x20);
  param_3 = param_3 + *(int *)(unaff_ESI + 0x24);
  local_1c = in_EAX;
  if (*(int *)(*(int *)(*(int *)(unaff_ESI + 4) + 0x80) + 0x34) == 0) {
    local_1c = FUN_006b8820();
    param_4 = FUN_006b8820();
  }
  if ((-1 < local_1c) && (-1 < param_4)) {
    if (*(char *)(unaff_ESI + 0x42) != '\0') {
      iVar8 = *(int *)(unaff_ESI + 8);
      iVar9 = **(int **)(iVar8 + 0x9c);
      iVar7 = FUN_00693db0(iVar9,2);
      if (iVar7 != 0) {
        return iVar7;
      }
      piVar1 = *(int **)(iVar9 + 0x58);
      *piVar1 = local_1c;
      piVar1[2] = 0;
      piVar1[3] = 0;
      *(undefined2 *)(piVar1 + 1) = 0x202;
      piVar1[8] = param_4;
      *(undefined2 *)(piVar1 + 9) = 2;
      piVar1[10] = param_2 >> 0x10;
      piVar1[0xb] = param_3 >> 0x10;
      *(undefined4 *)(iVar8 + 0x80) = 2;
      *(undefined4 *)(iVar8 + 0x84) = *(undefined4 *)(iVar9 + 0x34);
      *(undefined4 *)(iVar8 + 0x48) = 0x636f6d70;
      *(undefined4 *)(iVar9 + 0x54) = 2;
    }
    FUN_0068f0a0(*(undefined4 *)(unaff_ESI + 0xc));
    iVar8 = FUN_006b8860();
    if (iVar8 == 0) {
      *(undefined1 *)(unaff_ESI + 0x39c) = 1;
      iVar8 = FUN_006b8b40();
      *(undefined1 *)(unaff_ESI + 0x39c) = 0;
      FUN_006b88c0(local_1c);
      if (iVar8 != 0) {
        return iVar8;
      }
    }
    uVar2 = *(undefined4 *)(unaff_ESI + 0x24);
    uVar3 = *(undefined4 *)(unaff_ESI + 0x20);
    uVar4 = *(undefined4 *)(unaff_ESI + 0x28);
    uVar5 = *(undefined4 *)(unaff_ESI + 0x2e8);
    uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
    *(undefined4 *)(unaff_ESI + 0x20) = 0;
    *(undefined4 *)(unaff_ESI + 0x24) = 0;
    *(int *)(unaff_ESI + 0x1c) = param_3;
    *(int *)(unaff_ESI + 0x18) = param_2 - param_1;
    iVar8 = FUN_006b8860();
    if (iVar8 == 0) {
      *(undefined1 *)(unaff_ESI + 0x39c) = 1;
      iVar9 = FUN_006b8b40();
      *(undefined1 *)(unaff_ESI + 0x39c) = 0;
      FUN_006b88c0(local_1c);
      iVar8 = 0;
      if (iVar9 != 0) {
        return iVar9;
      }
    }
    *(undefined4 *)(unaff_ESI + 0x20) = uVar3;
    *(undefined4 *)(unaff_ESI + 0x24) = uVar2;
    *(undefined4 *)(unaff_ESI + 0x2c) = uVar6;
    *(undefined4 *)(unaff_ESI + 0x28) = uVar4;
    *(undefined4 *)(unaff_ESI + 0x2e8) = uVar5;
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    return iVar8;
  }
  return 0xa0;
}


/* FUN_006b8b40 @ 006b8b40  kind=gamemisc  attributed-by=none  size=5939 */

undefined4 FUN_006b8b40(int param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  sbyte sVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  uint *puVar24;
  byte *pbVar25;
  bool bVar26;
  byte *local_28;
  uint uStack_24;
  int *local_20;
  byte *local_1c;
  uint local_10;
  int local_c;
  uint uStack_8;
  int local_4;
  
  iVar22 = param_1;
  local_4 = *(int *)(*(int *)(param_1 + 0x4c) + 0x558);
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined1 *)(param_1 + 0x2f0) = 1;
  uVar10 = (uint)&local_10 ^ (uint)&param_1 ^ (uint)&param_2;
  local_10 = ((int)((int)uVar10 >> 10 ^ uVar10) >> 10 ^ uVar10) & 0xffff;
  local_c = param_1;
  if (local_10 == 0) {
    local_10 = 0x7384;
  }
  *(int *)(param_1 + 0x114) = param_1 + 0x50;
  *(int *)(param_1 + 0x2a4) = param_1 + 0x118;
  puVar4 = *(uint **)(param_1 + 0x114);
  local_20 = (int *)(param_1 + 0x118);
  *(undefined1 *)(param_1 + 0x40) = 0;
  puVar5 = *(undefined4 **)(param_1 + 0x44);
  *local_20 = param_2;
  local_1c = (byte *)(param_3 + param_2);
  *(byte **)(param_1 + 0x11c) = local_1c;
  local_28 = (byte *)*local_20;
  *(byte **)(param_1 + 0x120) = local_28;
  uVar10 = *(uint *)(param_1 + 0x18);
  iVar21 = *(int *)(param_1 + 0x1c);
  if (puVar5 != (undefined4 *)0x0) {
    (*(code *)puVar5[1])(*puVar5);
  }
  if (local_28 < local_1c) {
    do {
      bVar3 = *local_28;
      pbVar23 = local_28 + 1;
      if ((0x1f < bVar3) || (bVar3 == 0x1c)) {
        sVar17 = 0x10;
        if (bVar3 == 0x1c) {
          if (local_1c <= local_28 + 2) {
            return 3;
          }
          uVar14 = (int)(short)((ushort)*pbVar23 << 8) | (uint)local_28[2];
          local_28 = local_28 + 3;
        }
        else if (bVar3 < 0xf7) {
          uVar14 = bVar3 - 0x8b;
          local_28 = pbVar23;
        }
        else if (bVar3 < 0xfb) {
          if (local_1c <= pbVar23) {
            return 3;
          }
          local_28 = local_28 + 2;
          uVar14 = (uint)bVar3 * 0x100 + -0xf694 + (uint)*pbVar23;
        }
        else if (bVar3 == 0xff) {
          pbVar25 = local_28 + 4;
          if (local_1c <= pbVar25) {
            return 3;
          }
          pbVar1 = local_28 + 2;
          pbVar2 = local_28 + 3;
          local_28 = local_28 + 5;
          uVar14 = CONCAT31(CONCAT21(CONCAT11(*pbVar23,*pbVar1),*pbVar2),*pbVar25);
          if (local_4 == 2) {
            sVar17 = 0;
          }
          else {
            sVar17 = 0x10;
          }
        }
        else {
          if (local_1c <= pbVar23) {
            return 3;
          }
          uVar14 = ((uint)bVar3 * -0x100 + 0xfa94) - (uint)*pbVar23;
          local_28 = local_28 + 2;
        }
        if (0xbf < (int)(*(int *)(param_1 + 0x114) - (int)puVar4 & 0xfffffffcU)) {
          return 0x82;
        }
        **(int **)(param_1 + 0x114) = uVar14 << sVar17;
        *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 4;
        goto LAB_006ba15a;
      }
      uStack_24 = (*(int *)(param_1 + 0x114) - param_1) + -0x50 >> 2;
      pbVar25 = pbVar23;
      switch(bVar3) {
      case 1:
switchD_006b8c5c_caseD_1:
        local_28 = pbVar25;
        param_3 = 0x13;
        break;
      default:
        goto switchD_006b8c5c_caseD_2;
      case 3:
switchD_006b8c5c_caseD_3:
        local_28 = pbVar25;
        param_3 = 0x14;
        break;
      case 4:
        param_3 = 3;
        local_28 = pbVar23;
        break;
      case 5:
        param_3 = 4;
        local_28 = pbVar23;
        break;
      case 6:
        param_3 = 5;
        local_28 = pbVar23;
        break;
      case 7:
        param_3 = 6;
        local_28 = pbVar23;
        break;
      case 8:
        param_3 = 7;
        local_28 = pbVar23;
        break;
      case 9:
        param_3 = 0x35;
        local_28 = pbVar23;
        break;
      case 10:
        param_3 = 0x31;
        local_28 = pbVar23;
        break;
      case 0xb:
        param_3 = 0x33;
        local_28 = pbVar23;
        break;
      case 0xc:
        if (local_1c <= pbVar23) {
          return 3;
        }
        local_28 = local_28 + 2;
        pbVar25 = local_28;
        switch(*pbVar23) {
        case 0:
          param_3 = 0x19;
          break;
        case 1:
          goto switchD_006b8c5c_caseD_3;
        case 2:
          goto switchD_006b8c5c_caseD_1;
        case 3:
          param_3 = 0x2c;
          break;
        case 4:
          param_3 = 0x2d;
          break;
        case 5:
          param_3 = 0x2e;
          break;
        case 6:
          param_3 = 0x38;
          break;
        case 7:
          param_3 = 0x39;
          break;
        case 8:
          param_3 = 0x2a;
          break;
        case 9:
          param_3 = 0x1a;
          break;
        case 10:
          param_3 = 0x1b;
          break;
        case 0xb:
          param_3 = 0x1c;
          break;
        case 0xc:
          param_3 = 0x1d;
          break;
        case 0xd:
          param_3 = 0x2b;
          break;
        case 0xe:
          param_3 = 0x1e;
          break;
        case 0xf:
          param_3 = 0x2f;
          break;
        case 0x10:
          param_3 = 0x36;
          break;
        case 0x11:
          param_3 = 0x37;
          break;
        case 0x12:
          param_3 = 0x23;
          break;
        default:
          goto switchD_006b8c5c_caseD_2;
        case 0x14:
          param_3 = 0x28;
          break;
        case 0x15:
          param_3 = 0x29;
          break;
        case 0x16:
          param_3 = 0x30;
          break;
        case 0x17:
          param_3 = 0x1f;
          break;
        case 0x18:
          param_3 = 0x20;
          break;
        case 0x1a:
          param_3 = 0x21;
          break;
        case 0x1b:
          param_3 = 0x27;
          break;
        case 0x1c:
          param_3 = 0x24;
          break;
        case 0x1d:
          param_3 = 0x25;
          break;
        case 0x1e:
          param_3 = 0x26;
          break;
        case 0x21:
          param_3 = 0x3a;
          break;
        case 0x22:
          param_3 = 0xf;
          break;
        case 0x23:
          param_3 = 0xe;
          break;
        case 0x24:
          param_3 = 0x10;
          break;
        case 0x25:
          param_3 = 0x11;
        }
        break;
      case 0xd:
        param_3 = 0x34;
        local_28 = pbVar23;
        break;
      case 0xe:
        param_3 = 0x12;
        local_28 = pbVar23;
        break;
      case 0x10:
        param_3 = 0x22;
        local_28 = pbVar23;
        break;
      case 0x12:
        param_3 = 0x15;
        local_28 = pbVar23;
        break;
      case 0x13:
        param_3 = 0x17;
        local_28 = pbVar23;
        break;
      case 0x14:
        param_3 = 0x18;
        local_28 = pbVar23;
        break;
      case 0x15:
        param_3 = 1;
        local_28 = pbVar23;
        break;
      case 0x16:
        param_3 = 2;
        local_28 = pbVar23;
        break;
      case 0x17:
        param_3 = 0x16;
        local_28 = pbVar23;
        break;
      case 0x18:
        param_3 = 10;
        local_28 = pbVar23;
        break;
      case 0x19:
        param_3 = 0xb;
        local_28 = pbVar23;
        break;
      case 0x1a:
        param_3 = 0xd;
        local_28 = pbVar23;
        break;
      case 0x1b:
        param_3 = 8;
        local_28 = pbVar23;
        break;
      case 0x1d:
        param_3 = 0x32;
        local_28 = pbVar23;
        break;
      case 0x1e:
        param_3 = 0xc;
        local_28 = pbVar23;
        break;
      case 0x1f:
        param_3 = 9;
        local_28 = pbVar23;
      }
      uVar14 = (uint)(byte)(&UNK_007345ec)[param_3];
      if ((char)(&UNK_007345ec)[param_3] < '\0') {
        if ((0 < (int)uStack_24) && (*(char *)(param_1 + 0x2f0) != '\0')) {
          switch(param_3) {
          case 1:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
            uVar14 = uStack_24 & 1;
            break;
          case 2:
          case 3:
            uVar14 = uStack_24 & 2;
            break;
          default:
            goto switchD_006b8ecc_caseD_4;
          case 0x12:
            if ((uStack_24 != 5) && (uStack_24 != 1)) goto switchD_006b8ecc_caseD_4;
            goto LAB_006b8edc;
          }
          if (uVar14 != 0) {
LAB_006b8edc:
            *(int *)(param_1 + 0x2e8) = (int)*(short *)((int)puVar4 + 2) + *(int *)(param_1 + 0x2ec)
            ;
            if (*(char *)(param_1 + 0x2f1) != '\0') {
              return 0;
            }
            uStack_24 = uStack_24 - 1;
          }
        }
switchD_006b8ecc_caseD_4:
        *(undefined1 *)(param_1 + 0x2f0) = 0;
        uVar14 = 0;
      }
      uVar14 = uVar14 & 0xf;
      if ((int)uStack_24 < (int)uVar14) {
        return 0x81;
      }
      puVar11 = (uint *)(*(int *)(param_1 + 0x114) + uVar14 * -4);
      uVar14 = uStack_24 - uVar14;
      switch(param_3) {
      case 1:
        FUN_006b8790();
        *(undefined1 *)(iVar22 + 0x40) = 0;
        uVar10 = uVar10 + puVar11[-2];
        iVar21 = iVar21 + puVar11[-1];
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 2:
        FUN_006b8790();
        *(undefined1 *)(iVar22 + 0x40) = 0;
        uVar10 = uVar10 + puVar11[-1];
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 3:
        FUN_006b8790();
        *(undefined1 *)(iVar22 + 0x40) = 0;
        iVar21 = iVar21 + puVar11[-1];
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 4:
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        if ((int)uVar14 < 2) {
          return 0x81;
        }
        puVar11 = puVar11 + -(uVar14 & 0xfffffffe);
        if (puVar11 < *(uint **)(param_1 + 0x114)) {
          do {
            uVar10 = uVar10 + *puVar11;
            iVar21 = iVar21 + puVar11[1];
            FUN_006b8690(1);
            puVar11 = puVar11 + 2;
          } while (puVar11 < *(uint **)(param_1 + 0x114));
        }
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 5:
      case 6:
        param_3 = (uint)(param_3 == 5);
        if ((int)uVar14 < 1) {
          return 0x81;
        }
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        puVar11 = puVar4;
        if (puVar4 < *(uint **)(param_1 + 0x114)) {
          do {
            if (param_3 == 0) {
              iVar21 = iVar21 + *puVar11;
            }
            else {
              uVar10 = uVar10 + *puVar11;
            }
            iVar12 = FUN_006b86d0(uVar10,iVar21);
            if (iVar12 != 0) {
              return 0;
            }
            param_3 = param_3 ^ 1;
            puVar11 = puVar11 + 1;
          } while (puVar11 < *(uint **)(param_1 + 0x114));
        }
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 7:
        if ((int)uVar14 < 6) {
          return 0x81;
        }
        param_3 = ((int)uVar14 / 6) * 6;
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        puVar11 = puVar11 + -param_3;
        if (puVar11 < *(uint **)(param_1 + 0x114)) {
          do {
            uVar14 = *puVar11;
            uVar13 = puVar11[1];
            FUN_006b8690(0);
            uVar6 = puVar11[2];
            uVar7 = puVar11[3];
            FUN_006b8690(0);
            uVar10 = uVar10 + uVar14 + uVar6 + puVar11[4];
            iVar21 = iVar21 + uVar13 + uVar7 + puVar11[5];
            FUN_006b8690(1);
            puVar11 = puVar11 + 6;
          } while (puVar11 < *(uint **)(param_1 + 0x114));
        }
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 8:
        if ((int)uVar14 < 4) {
          return 0x81;
        }
        param_3 = uVar14 & 0x80000003;
        if ((int)param_3 < 0) {
          param_3 = (param_3 - 1 | 0xfffffffc) + 1;
        }
        param_3 = uVar14 - param_3;
        if (uVar14 != param_3 && -1 < (int)(uVar14 - param_3)) {
          param_3 = param_3 + 1;
        }
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        puVar11 = puVar11 + -param_3;
        if ((param_3 & 1) != 0) {
          iVar21 = iVar21 + *puVar11;
          puVar11 = puVar11 + 1;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        if (puVar11 < *(uint **)(param_1 + 0x114)) {
          puVar11 = puVar11 + 2;
          do {
            uVar14 = puVar11[-2];
            FUN_006b8690(0);
            uVar13 = puVar11[-1];
            iVar21 = iVar21 + *puVar11;
            FUN_006b8690(0);
            uVar10 = uVar10 + uVar14 + uVar13 + puVar11[1];
            FUN_006b8690(1);
            puVar9 = puVar11 + 2;
            puVar11 = puVar11 + 4;
          } while (puVar9 < *(uint **)(param_1 + 0x114));
        }
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 9:
      case 0xc:
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        if ((int)uVar14 < 4) {
          return 0x81;
        }
        uStack_24 = uVar14 & 0x80000003;
        if ((int)uStack_24 < 0) {
          uStack_24 = (uStack_24 - 1 | 0xfffffffc) + 1;
        }
        uStack_24 = uVar14 - uStack_24;
        if (uVar14 != uStack_24 && -1 < (int)(uVar14 - uStack_24)) {
          uStack_24 = uStack_24 + 1;
        }
        puVar11 = puVar11 + -uStack_24;
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0x81;
        }
        param_3 = (uint)(param_3 == 9);
        while (3 < (int)uStack_24) {
          uStack_24 = uStack_24 - 4;
          if (param_3 == 0) {
            uVar14 = *puVar11;
            FUN_006b8690(0);
            uVar13 = puVar11[1];
            iVar21 = iVar21 + uVar14 + puVar11[2];
            FUN_006b8690(0);
            uVar10 = uVar10 + uVar13 + puVar11[3];
            if (uStack_24 == 1) {
              iVar21 = iVar21 + puVar11[4];
            }
          }
          else {
            uVar14 = *puVar11;
            FUN_006b8690(0);
            uVar10 = uVar10 + uVar14 + puVar11[1];
            uVar14 = puVar11[2];
            FUN_006b8690(0);
            iVar21 = iVar21 + uVar14 + puVar11[3];
            if (uStack_24 == 1) {
              uVar10 = uVar10 + puVar11[4];
            }
          }
          FUN_006b8690(1);
          param_3 = param_3 ^ 1;
          puVar11 = puVar11 + 4;
        }
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 10:
        if ((int)uVar14 < 8) {
          return 0x81;
        }
        iVar12 = ((int)(uVar14 - 2) / 6) * 6;
        param_3 = iVar12 / 6;
        iVar18 = FUN_006b8760(uVar10,iVar21);
        if (iVar18 != 0) {
          return 0;
        }
        iVar18 = FUN_006b8660();
        if (iVar18 != 0) {
          return 0;
        }
        puVar11 = puVar11 + -(iVar12 + 2);
        for (; 0 < (int)param_3; param_3 = param_3 + -1) {
          uVar14 = *puVar11;
          uVar13 = puVar11[1];
          FUN_006b8690(0);
          uVar6 = puVar11[2];
          uVar7 = puVar11[3];
          FUN_006b8690(0);
          uVar10 = uVar10 + uVar14 + uVar6 + puVar11[4];
          iVar21 = iVar21 + uVar13 + uVar7 + puVar11[5];
          FUN_006b8690(1);
          puVar11 = puVar11 + 6;
        }
        uVar10 = uVar10 + *puVar11;
        iVar21 = iVar21 + puVar11[1];
        goto LAB_006b9770;
      case 0xb:
        if ((int)uVar14 < 8) {
          return 0x81;
        }
        param_3 = (int)((uVar14 & 0xfffffffe) - 6) / 2;
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        puVar11 = puVar11 + -(uVar14 & 0xfffffffe);
        for (; 0 < (int)param_3; param_3 = param_3 + -1) {
          uVar10 = uVar10 + *puVar11;
          iVar21 = iVar21 + puVar11[1];
          FUN_006b8690(1);
          puVar11 = puVar11 + 2;
        }
        uVar14 = *puVar11;
        uVar13 = puVar11[1];
        FUN_006b8690(0);
        uVar6 = puVar11[2];
        uVar7 = puVar11[3];
        FUN_006b8690(0);
        uVar10 = uVar10 + uVar14 + uVar6 + puVar11[4];
        iVar21 = iVar21 + uVar13 + uVar7 + puVar11[5];
        FUN_006b8690(1);
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0xd:
        if ((int)uVar14 < 4) {
          return 0x81;
        }
        param_3 = uVar14 & 0x80000003;
        if ((int)param_3 < 0) {
          param_3 = (param_3 - 1 | 0xfffffffc) + 1;
        }
        param_3 = uVar14 - param_3;
        if (uVar14 != param_3 && -1 < (int)(uVar14 - param_3)) {
          param_3 = param_3 + 1;
        }
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        puVar11 = puVar11 + -param_3;
        if ((param_3 & 1) != 0) {
          uVar10 = uVar10 + *puVar11;
          puVar11 = puVar11 + 1;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        if (puVar11 < *(uint **)(param_1 + 0x114)) {
          puVar11 = puVar11 + 2;
          do {
            uVar14 = puVar11[-2];
            FUN_006b8690(0);
            uVar10 = uVar10 + puVar11[-1];
            uVar13 = *puVar11;
            FUN_006b8690(0);
            iVar21 = iVar21 + uVar14 + uVar13 + puVar11[1];
            FUN_006b8690(1);
            puVar9 = puVar11 + 2;
            puVar11 = puVar11 + 4;
          } while (puVar9 < *(uint **)(param_1 + 0x114));
        }
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0xe:
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        param_3 = 6;
        do {
          uVar10 = uVar10 + *puVar11;
          iVar21 = iVar21 + puVar11[1];
          if ((param_3 == 4) || (param_3 == 1)) {
            uVar14 = 1;
          }
          else {
            uVar14 = param_3 & 0xffffff00;
          }
          FUN_006b8690(uVar14);
          puVar11 = puVar11 + 2;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0xf:
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        uVar14 = *puVar11;
        param_3 = iVar21;
        FUN_006b8690(0);
        uVar13 = puVar11[1];
        FUN_006b8690(0);
        uVar6 = puVar11[3];
        FUN_006b8690(1);
        uVar7 = puVar11[4];
        FUN_006b8690(0);
        iVar21 = param_3;
        uVar8 = puVar11[5];
        FUN_006b8690(0);
        uVar10 = uVar10 + uVar14 + uVar13 + uVar6 + uVar7 + uVar8 + puVar11[6];
        FUN_006b8690(1);
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0x10:
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        uVar14 = *puVar11;
        param_3 = iVar21;
        FUN_006b8690(0);
        uVar13 = puVar11[2];
        FUN_006b8690(0);
        uVar6 = puVar11[4];
        FUN_006b8690(1);
        uVar7 = puVar11[5];
        FUN_006b8690(0);
        uVar8 = puVar11[6];
        FUN_006b8690(0);
        iVar21 = param_3;
        uVar10 = uVar10 + uVar14 + uVar13 + uVar6 + uVar7 + uVar8 + puVar11[8];
        FUN_006b8690(1);
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0x11:
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = puVar11[8] + puVar11[6] + puVar11[4] + puVar11[2] + *puVar11;
        iVar18 = puVar11[9] + puVar11[7] + puVar11[5] + puVar11[3] + puVar11[1];
        if (iVar12 < 0) {
          iVar12 = -iVar12;
        }
        if (iVar18 < 0) {
          iVar18 = -iVar18;
        }
        param_3 = 5;
        iVar20 = iVar21;
        uStack_8 = uVar10;
        do {
          uVar10 = uVar10 + *puVar11;
          iVar20 = iVar20 + puVar11[1];
          FUN_006b8690(param_3 == 3);
          param_3 = param_3 + -1;
          puVar11 = puVar11 + 2;
        } while (0 < (int)param_3);
        if (iVar18 < iVar12) {
          uVar10 = uVar10 + *puVar11;
        }
        else {
          iVar21 = iVar20 + *puVar11;
          uVar10 = uStack_8;
        }
LAB_006b9770:
        FUN_006b8690(1);
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0x12:
        if (3 < (int)uVar14) {
          uVar15 = *(undefined4 *)(param_1 + 0x2e8);
          uVar16 = FUN_006b8910(0,puVar11[-4],puVar11[-3],(int)*(short *)((int)puVar11 + -2));
          *(undefined4 *)(param_1 + 0x2e8) = uVar15;
          return uVar16;
        }
        FUN_006b8790();
        if (puVar5 != (undefined4 *)0x0) {
          iVar21 = (*(code *)puVar5[2])(*puVar5,(int)*(short *)(*(int *)(iVar22 + 0x14) + 2));
          if (iVar21 != 0) {
            return 3;
          }
          (*(code *)puVar5[6])
                    (*puVar5,*(undefined4 *)(iVar22 + 0x14),*(undefined4 *)(iVar22 + 0x48),
                     *(undefined4 *)(param_1 + 0x398));
        }
        FUN_0068f0c0(*(undefined4 *)(iVar22 + 0xc));
        return 0;
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
        if (puVar5 != (undefined4 *)0x0) {
          if ((param_3 == 0x13) || (param_3 == 0x15)) {
            uVar15 = 1;
          }
          else {
            uVar15 = 0;
          }
          (*(code *)puVar5[3])(*puVar5,uVar15,(int)uVar14 / 2,puVar11 + -(uVar14 & 0xfffffffe));
        }
        *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) + (int)uVar14 / 2;
      case 0x35:
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0x17:
      case 0x18:
        if (0 < (int)uVar14) {
          if (puVar5 != (undefined4 *)0x0) {
            (*(code *)puVar5[3])(*puVar5,0,(int)uVar14 / 2,puVar11 + -(uVar14 & 0xfffffffe));
          }
          *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) + (int)uVar14 / 2;
        }
        iVar12 = *(int *)(param_1 + 0x2f4);
        if (local_1c <= local_28 + (iVar12 + 7 >> 3)) {
          return 3;
        }
        if (puVar5 != (undefined4 *)0x0) {
          if (param_3 == 0x17) {
            (*(code *)puVar5[4])
                      (*puVar5,(int)*(short *)(*(int *)(iVar22 + 0x14) + 2),iVar12,local_28);
          }
          else {
            (*(code *)puVar5[5])(*puVar5,iVar12,local_28);
          }
        }
        local_28 = local_28 + (*(int *)(param_1 + 0x2f4) + 7 >> 3);
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0x19:
      case 0x23:
        goto switchD_006b8f43_caseD_19;
      case 0x1a:
        if ((int)*puVar11 < 0) {
          *puVar11 = -*puVar11;
        }
      case 0x37:
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x1b:
        *puVar11 = *puVar11 + puVar11[1];
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x1c:
        *puVar11 = *puVar11 - puVar11[1];
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x1d:
        uVar14 = FUN_0068ec40(*puVar11,puVar11[1]);
        *puVar11 = uVar14;
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x1e:
        *puVar11 = -*puVar11;
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x1f:
        uVar14 = local_10;
        if (0x7fff < (int)local_10) {
          uVar14 = local_10 + 1;
        }
        *puVar11 = uVar14;
        local_10 = FUN_0068ebc0(local_10,0x10000 - local_10);
        if (local_10 == 0) {
          local_10 = 0x2873;
        }
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x20:
        uVar14 = FUN_0068ebc0(*puVar11,puVar11[1]);
        *puVar11 = uVar14;
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x21:
        param_3 = *puVar11;
        if ((int)param_3 < 1) {
          *puVar11 = 0;
          *(uint **)(param_1 + 0x114) = puVar11 + 1;
        }
        else {
          iVar12 = FUN_0068ec40(param_3,param_3);
          uVar14 = (int)(iVar12 + 1 + param_3) >> 1;
          bVar26 = uVar14 != param_3;
          param_3 = uVar14;
          if (bVar26) {
            do {
              uStack_8 = param_3;
              iVar12 = FUN_0068ec40(*puVar11,param_3);
              param_3 = (int)(iVar12 + 1 + param_3) >> 1;
            } while (param_3 != uStack_8);
          }
          *puVar11 = param_3;
          *(uint **)(param_1 + 0x114) = puVar11 + 1;
        }
        break;
      default:
        return 7;
      case 0x24:
        uVar14 = *puVar11;
        *puVar11 = puVar11[1];
        puVar11[1] = uVar14;
        *(uint **)(param_1 + 0x114) = puVar11 + 2;
        break;
      case 0x25:
        iVar12 = (int)*(short *)((int)puVar11 + 2);
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else if ((int)(uVar14 - 2) < iVar12) {
          iVar12 = uVar14 - 2;
        }
        *puVar11 = *(uint *)((int)puVar11 - (iVar12 * 4 + 4));
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x26:
        iVar12 = (int)*(short *)((int)puVar11 + 2);
        iVar18 = (int)*(short *)((int)puVar11 + 6);
        if (iVar12 < 1) {
          iVar12 = 1;
        }
        puVar11 = puVar11 + -iVar12;
        if (puVar11 < puVar4) {
          return 0x81;
        }
        if (iVar18 < 0) {
          uStack_24 = -iVar18;
          do {
            uVar14 = *puVar11;
            iVar18 = iVar12 + -1;
            puVar24 = puVar11;
            puVar9 = puVar11;
            if (0 < iVar12 + -1) {
              for (; iVar22 = local_c, iVar18 != 0; iVar18 = iVar18 + -1) {
                *puVar24 = puVar9[1];
                puVar24 = puVar24 + 1;
                puVar9 = puVar9 + 1;
              }
            }
            uStack_24 = uStack_24 + -1;
            puVar11[iVar12 + -1] = uVar14;
          } while (uStack_24 != 0);
        }
        else if (0 < iVar18) {
          uStack_8 = iVar12 - 2;
          do {
            uVar14 = puVar11[iVar12 + -1];
            for (uVar13 = uStack_8; -1 < (int)uVar13; uVar13 = uVar13 - 1) {
              puVar11[uVar13 + 1] = puVar11[uVar13];
            }
            iVar18 = iVar18 + -1;
            *puVar11 = uVar14;
          } while (0 < iVar18);
          *(uint **)(param_1 + 0x114) = puVar11 + iVar12;
          break;
        }
        *(uint **)(param_1 + 0x114) = puVar11 + iVar12;
        break;
      case 0x27:
        puVar11[1] = *puVar11;
        *(uint **)(param_1 + 0x114) = puVar11 + 2;
        break;
      case 0x28:
        if (0x1f < (uint)(int)*(short *)((int)puVar11 + 6)) goto switchD_006b8f43_caseD_19;
        *(uint *)(param_1 + 0x2f8 + *(short *)((int)puVar11 + 6) * 4) = *puVar11;
        *(uint **)(param_1 + 0x114) = puVar11;
        break;
      case 0x29:
        uVar14 = 0;
        if ((uint)(int)*(short *)((int)puVar11 + 2) < 0x20) {
          uVar14 = *(uint *)(param_1 + 0x2f8 + *(short *)((int)puVar11 + 2) * 4);
        }
        *puVar11 = uVar14;
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x2c:
        if ((*puVar11 == 0) || (puVar11[1] == 0)) {
          *puVar11 = 0;
          *(uint **)(param_1 + 0x114) = puVar11 + 1;
        }
        else {
          *puVar11 = 0x10000;
          *(uint **)(param_1 + 0x114) = puVar11 + 1;
        }
        break;
      case 0x2d:
        if ((*puVar11 == 0) && (puVar11[1] == 0)) {
          *puVar11 = 0;
          *(uint **)(param_1 + 0x114) = puVar11 + 1;
        }
        else {
          *puVar11 = 0x10000;
          *(uint **)(param_1 + 0x114) = puVar11 + 1;
        }
        break;
      case 0x2f:
        *puVar11 = (-(uint)(*puVar11 != 0) & 0xffff0000) + 0x10000;
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x30:
        if ((int)puVar11[3] < (int)puVar11[2]) {
          *puVar11 = puVar11[1];
        }
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x31:
        uVar14 = (int)*(short *)((int)puVar11 + 2) + *(int *)(param_1 + 0x380);
        if ((*(uint *)(param_1 + 0x378) <= uVar14) ||
           (0x1f < ((int)local_20 + (-0x118 - param_1)) / 0xc)) {
switchD_006b8c5c_caseD_2:
          return 3;
        }
        local_20[2] = (int)local_28;
        piVar19 = local_20 + 3;
        *piVar19 = *(int *)(*(int *)(param_1 + 0x388) + uVar14 * 4);
        iVar12 = *piVar19;
        local_20[4] = *(int *)(*(int *)(param_1 + 0x388) + 4 + uVar14 * 4);
        local_20[5] = iVar12;
        if (iVar12 == 0) {
          return 3;
        }
        if (local_20[4] == iVar12) {
          return 3;
        }
        *(int **)(param_1 + 0x2a4) = piVar19;
        local_28 = (byte *)*piVar19;
        local_1c = (byte *)local_20[4];
        *(uint **)(param_1 + 0x114) = puVar11;
        local_20 = piVar19;
        break;
      case 0x32:
        uVar14 = (int)*(short *)((int)puVar11 + 2) + *(int *)(param_1 + 900);
        if (*(uint *)(param_1 + 0x37c) <= uVar14) {
          return 3;
        }
        if (0x1f < ((int)local_20 + (-0x118 - param_1)) / 0xc) {
          return 3;
        }
        local_20[2] = (int)local_28;
        piVar19 = local_20 + 3;
        *piVar19 = *(int *)(*(int *)(param_1 + 0x38c) + uVar14 * 4);
        iVar12 = *piVar19;
        local_20[4] = *(int *)(*(int *)(param_1 + 0x38c) + 4 + uVar14 * 4);
        local_20[5] = iVar12;
        if (iVar12 == 0) {
          return 3;
        }
        if (local_20[4] == iVar12) {
          return 3;
        }
        *(int **)(param_1 + 0x2a4) = piVar19;
        local_28 = (byte *)*piVar19;
        local_1c = (byte *)local_20[4];
        *(uint **)(param_1 + 0x114) = puVar11;
        local_20 = piVar19;
        break;
      case 0x33:
        if (*(uint *)(param_1 + 0x2a4) <= param_1 + 0x118U) {
          return 3;
        }
        *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x2a4) + -0xc;
        local_20 = *(int **)(param_1 + 0x2a4);
        local_28 = (byte *)local_20[2];
        local_1c = (byte *)local_20[1];
        goto switchD_006b8f43_caseD_19;
      case 0x34:
        *(int *)(param_1 + 0x2e8) = (int)*(short *)((int)puVar11 + 6) + *(int *)(param_1 + 0x2ec);
        *(uint *)(param_1 + 0x20) = *puVar11;
        *(undefined4 *)(param_1 + 0x24) = 0;
        uVar10 = *(int *)(param_1 + 0x18) + *puVar11;
        iVar21 = *(int *)(param_1 + 0x1c);
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0x36:
        puVar11 = puVar11 + (-2 - *(short *)((int)puVar11 + -6));
        if (puVar11 < puVar4) {
          return 0x81;
        }
switchD_006b8f43_caseD_19:
        *(uint **)(param_1 + 0x114) = puVar11;
        break;
      case 0x38:
        uVar15 = FUN_006b8910(*puVar11,puVar11[1],puVar11[2],(int)*(short *)((int)puVar11 + 0x12));
        FUN_0068f0c0(*(undefined4 *)(local_c + 0xc));
        return uVar15;
      case 0x39:
        *(int *)(param_1 + 0x2e8) = (int)*(short *)((int)puVar11 + 10) + *(int *)(param_1 + 0x2ec);
        *(uint *)(param_1 + 0x20) = *puVar11;
        *(uint *)(param_1 + 0x24) = puVar11[1];
        uVar10 = *(int *)(param_1 + 0x18) + *puVar11;
        iVar21 = *(int *)(param_1 + 0x1c) + puVar11[1];
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0x3a:
        uVar10 = *(int *)(param_1 + 0x18) + *puVar11;
        iVar21 = puVar11[1] + *(int *)(param_1 + 0x1c);
        *(uint **)(param_1 + 0x114) = puVar4;
      }
LAB_006ba15a:
    } while (local_28 < local_1c);
  }
  return 0;
}


/* FUN_006ba4b0 @ 006ba4b0  kind=gamemisc  attributed-by=none  size=143 */

void FUN_006ba4b0(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_ECX;
  int iVar7;
  int in_EDX;
  undefined2 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 auStack_400 [2];
  char cStack_3fe;
  char local_3fd;
  undefined4 uStack_3fc;
  uint local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  uint local_3ec;
  int iStack_3e8;
  undefined2 *puStack_3e4;
  uint uStack_3e0;
  int *local_3dc;
  uint uStack_3d8;
  undefined1 auStack_3d4 [32];
  int iStack_3b4;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined1 uStack_392;
  int iStack_390;
  undefined4 uStack_ec;
  undefined1 uStack_e3;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)auStack_400;
  local_3f8 = *(uint *)(in_EDX + 4);
  iVar9 = *(int *)(local_3f8 + 0x2b4);
  local_3dc = param_1;
  local_3fd = '\0';
  local_3ec = in_ECX;
  if ((*(int *)(iVar9 + 0x5ac) == 0xffff) || (*(int *)(iVar9 + 0x48c) == 0)) {
    if (*(uint *)(iVar9 + 0xc) <= in_ECX) goto LAB_006ba516;
  }
  else if ((in_ECX != 0) && (local_3ec = FUN_006b66f0(), local_3ec == 0)) {
LAB_006ba516:
    __security_check_cookie(local_4 ^ (uint)auStack_400);
    return;
  }
  if ((param_2 & 0x400) != 0) {
    param_2 = param_2 | 3;
  }
  *(undefined4 *)(in_EDX + 0xa4) = 0x10000;
  *(undefined4 *)(in_EDX + 0xa8) = 0x10000;
  if (param_1 != (int *)0x0) {
    *(int *)(in_EDX + 0xa4) = param_1[4];
    *(int *)(in_EDX + 0xa8) = param_1[5];
    iVar3 = *(int *)(*param_1 + 0x214);
    uStack_3fc = *(undefined4 *)(*param_1 + 0x68);
    if ((((param_1[0xb] != -1) && (*(int *)(iVar3 + 0x8c) != 0)) && ((param_2 & 8) == 0)) &&
       (iVar3 = (**(code **)(iVar3 + 0x68))
                          (local_3f8,param_1[0xb],local_3ec,param_2,uStack_3fc,in_EDX + 0x4c,
                           &uStack_3f4), iVar3 == 0)) {
      *(undefined4 *)(in_EDX + 0x6c) = 0;
      *(uint *)(in_EDX + 0x18) = (uStack_3f4 >> 8 & 0xff) << 6;
      *(uint *)(in_EDX + 0x1c) = (uStack_3f4 & 0xff) << 6;
      *(int *)(in_EDX + 0x20) = (int)uStack_3f4._2_1_ << 6;
      *(int *)(in_EDX + 0x24) = (int)uStack_3f4._3_1_ << 6;
      *(uint *)(in_EDX + 0x28) = (uStack_3f0 & 0xff) << 6;
      *(int *)(in_EDX + 0x2c) = (int)uStack_3f0._1_1_ << 6;
      *(int *)(in_EDX + 0x30) = (int)uStack_3f0._2_1_ << 6;
      *(uint *)(in_EDX + 0x34) = (uStack_3f0 >> 0x18) << 6;
      *(undefined4 *)(in_EDX + 0x48) = 0x62697473;
      if ((param_2 & 0x10) == 0) {
        *(int *)(in_EDX + 100) = (int)uStack_3f4._2_1_;
        *(int *)(in_EDX + 0x68) = (int)uStack_3f4._3_1_;
      }
      else {
        *(int *)(in_EDX + 100) = (int)uStack_3f0._1_1_;
        *(int *)(in_EDX + 0x68) = (int)uStack_3f0._2_1_;
      }
      goto code_r0x006bac69;
    }
  }
  if ((param_2 & 0x4000) != 0) goto code_r0x006bac69;
  if (*(int *)(iVar9 + 0x764) == 0) {
    iStack_34 = *(int *)(iVar9 + 0x55c);
    iStack_30 = *(int *)(iVar9 + 0x560);
    iStack_2c = *(int *)(iVar9 + 0x564);
    iStack_28 = *(int *)(iVar9 + 0x568);
    uStack_3f4 = *(uint *)(iVar9 + 0x570);
    uStack_3f0 = *(uint *)(iVar9 + 0x574);
  }
  else {
    uVar4 = func_0x006b65e0(local_3ec);
    if (*(uint *)(iVar9 + 0x764) <= (uVar4 & 0xff)) {
      uVar4 = (uint)(byte)(*(char *)(iVar9 + 0x764) - 1);
    }
    iVar3 = *(int *)(iVar9 + 0x56c);
    iVar7 = *(int *)(iVar9 + 0x768 + (uVar4 & 0xff) * 4);
    iVar1 = *(int *)(iVar7 + 0x40);
    iStack_34 = *(int *)(iVar7 + 0x30);
    iStack_30 = *(int *)(iVar7 + 0x34);
    iStack_2c = *(int *)(iVar7 + 0x38);
    iStack_28 = *(int *)(iVar7 + 0x3c);
    iVar7 = *(int *)(iVar9 + 0x768 + (uVar4 & 0xff) * 4);
    uStack_3f4 = *(uint *)(iVar7 + 0x44);
    uStack_3f0 = *(uint *)(iVar7 + 0x48);
    param_1 = local_3dc;
    if (iVar3 != iVar1) {
      uVar5 = FUN_0068ea60(*(undefined4 *)(in_EDX + 0xa4),iVar3,iVar1);
      *(undefined4 *)(in_EDX + 0xa4) = uVar5;
      uVar5 = FUN_0068ea60(*(undefined4 *)(in_EDX + 0xa8),iVar3,iVar1);
      *(undefined4 *)(in_EDX + 0xa8) = uVar5;
      local_3fd = '\x01';
      param_1 = local_3dc;
    }
  }
  *(undefined2 *)(in_EDX + 0x6e) = 0;
  puStack_3e4 = (undefined2 *)(in_EDX + 0x6c);
  *puStack_3e4 = 0;
  uStack_3d8 = param_2 & 1;
  if (uStack_3d8 == 0) {
    uStack_3e0 = CONCAT31(uStack_3e0._1_3_,1);
    if ((param_2 & 2) != 0) goto code_r0x006ba76c;
  }
  else {
code_r0x006ba76c:
    uStack_3e0 = uStack_3e0 & 0xffffff00;
  }
  *(undefined4 *)(in_EDX + 0x48) = 0x6f75746c;
  func_0x006b8530(local_3f8,param_1,uStack_3e0,(int)param_2 >> 0x10 & 0xf);
  if ((param_2 & 0x100) != 0) {
    uStack_e3 = 1;
  }
  uStack_392 = 0;
  iStack_3e8 = FUN_006b8860();
  if (iStack_3e8 == 0) {
    iStack_3e8 = func_0x006b85a0(param_1,local_3ec);
    iVar3 = iStack_24;
    if (iStack_3e8 == 0) {
      iStack_3e8 = FUN_006b8b40(auStack_3d4,uStack_3fc,iStack_24);
      uVar4 = local_3f8;
      FUN_006b88c0(iVar3);
      iVar7 = 0;
      if (*(int *)(*(int *)(uVar4 + 0x80) + 0x34) == 0) {
        if (*(int *)(iVar9 + 0x4b0) == 0) goto code_r0x006ba8a8;
        iVar7 = *(int *)(*(int *)(iVar9 + 0x4b0) + local_3ec * 4) + -1 + *(int *)(iVar9 + 0x4b4);
        *(int *)(in_EDX + 0x8c) = iVar3;
      }
      else {
        *(undefined4 *)(in_EDX + 0x8c) = 0;
      }
      *(int *)(in_EDX + 0x88) = iVar7;
    }
  }
code_r0x006ba8a8:
  func_0x006b84d0();
  if (iStack_3e8 != 0) goto code_r0x006bac69;
  piVar2 = *(int **)(*(int *)(local_3f8 + 0x80) + 0x34);
  if ((piVar2 != (int *)0x0) && (*(int *)(*piVar2 + 8) != 0)) {
    iStack_24 = iStack_3b4;
    uStack_18 = uStack_3a8;
    uStack_1c = uStack_3ac;
    iStack_20 = 0;
    piVar2 = *(int **)(*(int *)(local_3f8 + 0x80) + 0x34);
    iStack_3e8 = (**(code **)(*piVar2 + 8))(piVar2[1],local_3ec,0,&iStack_24);
    iStack_3b4 = iStack_24;
    uStack_3ac = uStack_1c;
    uStack_3a8 = uStack_18;
    if (iStack_3e8 != 0) goto code_r0x006bac69;
  }
  uVar4 = local_3f8;
  if ((param_2 & 0x400) != 0) {
    iVar9 = *(int *)(in_EDX + 0x9c);
    *(int *)(in_EDX + 0x20) = iStack_3b4;
    *(undefined4 *)(in_EDX + 0x28) = uStack_ec;
    *(int *)(iVar9 + 0xc) = iStack_34;
    *(int *)(iVar9 + 0x10) = iStack_30;
    *(int *)(iVar9 + 0x14) = iStack_2c;
    *(int *)(iVar9 + 0x18) = iStack_28;
    *(uint *)(iVar9 + 0x1c) = uStack_3f4;
    *(uint *)(iVar9 + 0x20) = uStack_3f0;
    *(undefined1 *)(iVar9 + 8) = 1;
    goto code_r0x006bac69;
  }
  *(undefined4 *)(in_EDX + 0x28) = uStack_ec;
  *(undefined4 *)(in_EDX + 0x38) = uStack_ec;
  *(undefined1 *)(*(int *)(in_EDX + 0x9c) + 8) = 0;
  if (((*(char *)(local_3f8 + 0x128) == '\0') || (*(short *)(local_3f8 + 0x14e) == 0)) ||
     (*(int *)(local_3f8 + 0x150) == 0)) {
    cStack_3fe = '\0';
    if (*(short *)(local_3f8 + 0x170) == -1) {
      uVar4 = (int)*(short *)(local_3f8 + 0xdc) - (int)*(short *)(local_3f8 + 0xde);
      goto code_r0x006baa6c;
    }
    *(int *)(in_EDX + 0x34) =
         (int)*(short *)(local_3f8 + 0x1b6) - (int)*(short *)(local_3f8 + 0x1b8);
  }
  else {
    piVar2 = (int *)(local_3f8 + 0x214);
    uStack_3fc = 0;
    local_3f8 = 0;
    cStack_3fe = '\x01';
    (**(code **)(*piVar2 + 0x9c))(uVar4,1,local_3ec,&uStack_3fc,&local_3f8);
    uVar4 = local_3f8 & 0xffff;
    *(int *)(in_EDX + 0x30) = (int)(short)uStack_3fc;
code_r0x006baa6c:
    *(uint *)(in_EDX + 0x34) = uVar4;
  }
  puVar8 = puStack_3e4;
  *(undefined4 *)(in_EDX + 0x3c) = *(undefined4 *)(in_EDX + 0x34);
  *(undefined4 *)(in_EDX + 0x48) = 0x6f75746c;
  *(undefined4 *)(in_EDX + 0x7c) = 0;
  if ((local_3dc != (int *)0x0) && (*(ushort *)((int)local_3dc + 0xe) < 0x18)) {
    *(undefined4 *)(in_EDX + 0x7c) = 0x100;
  }
  *(uint *)(in_EDX + 0x7c) = *(uint *)(in_EDX + 0x7c) | 4;
  if ((((iStack_34 != 0x10000) || (iStack_28 != 0x10000)) || (iStack_30 != 0)) || (iStack_2c != 0))
  {
    FUN_00690560(puStack_3e4,&iStack_34);
  }
  uVar4 = uStack_3f0;
  if ((uStack_3f4 != 0) || (uStack_3f0 != 0)) {
    FUN_006904c0(puVar8,uStack_3f4,uStack_3f0);
  }
  iStack_24 = *(int *)(in_EDX + 0x28);
  iStack_20 = 0;
  FUN_00690500(&iStack_24,&iStack_34);
  iStack_20 = *(int *)(in_EDX + 0x34);
  *(uint *)(in_EDX + 0x28) = iStack_24 + uStack_3f4;
  iStack_24 = 0;
  FUN_00690500(&iStack_24,&iStack_34);
  *(uint *)(in_EDX + 0x34) = iStack_20 + uVar4;
  if ((uStack_3d8 == 0) || (local_3fd != '\0')) {
    uStack_3fc = *(undefined4 *)(in_EDX + 0xa8);
    puVar10 = *(undefined4 **)(puVar8 + 2);
    uVar5 = *(undefined4 *)(in_EDX + 0xa4);
    if (((char)uStack_3e0 == '\0') || (iStack_390 == 0)) {
      for (iVar9 = (int)(short)puStack_3e4[1]; 0 < iVar9; iVar9 = iVar9 + -1) {
        uVar6 = FUN_0068ebc0(*puVar10,uVar5);
        *puVar10 = uVar6;
        uVar6 = FUN_0068ebc0(puVar10[1],uStack_3fc);
        puVar10[1] = uVar6;
        puVar10 = puVar10 + 2;
      }
    }
    uVar5 = FUN_0068ebc0(*(undefined4 *)(in_EDX + 0x28),uVar5);
    *(undefined4 *)(in_EDX + 0x28) = uVar5;
    uVar5 = FUN_0068ebc0(*(undefined4 *)(in_EDX + 0x34),uStack_3fc);
    *(undefined4 *)(in_EDX + 0x34) = uVar5;
    puVar8 = puStack_3e4;
  }
  FUN_00690430(puVar8,&iStack_14);
  *(int *)(in_EDX + 0x18) = iStack_c - iStack_14;
  *(int *)(in_EDX + 0x1c) = iStack_8 - iStack_10;
  *(int *)(in_EDX + 0x20) = iStack_14;
  *(int *)(in_EDX + 0x24) = iStack_8;
  if (cStack_3fe == '\0') {
    if ((param_2 & 0x10) != 0) {
      FUN_0068f4a0((int *)(in_EDX + 0x18),*(undefined4 *)(in_EDX + 0x34));
    }
  }
  else {
    *(int *)(in_EDX + 0x2c) = iStack_14 - *(int *)(in_EDX + 0x28) / 2;
  }
code_r0x006bac69:
  __security_check_cookie(local_4 ^ (uint)auStack_400);
  return;
}


/* FUN_006bace0 @ 006bace0  kind=gamemisc  attributed-by=none  size=63 */

void FUN_006bace0(int param_1,uint *param_2)

{
  uint uVar1;
  short *psVar2;
  
  uVar1 = *param_2;
  *param_2 = 0;
  if ((uVar1 < 0xff) && (uVar1 = uVar1 + 1, uVar1 < 0x100)) {
    psVar2 = (short *)(*(int *)(param_1 + 0x10) + uVar1 * 2);
    while (*psVar2 == 0) {
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 1;
      if (0xff < uVar1) {
        return;
      }
    }
    *param_2 = uVar1;
  }
  return;
}


/* FUN_006bae00 @ 006bae00  kind=gamemisc  attributed-by=none  size=70 */

undefined4 FUN_006bae00(int param_1,int *param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0x25;
  }
  if (param_2 == (int *)0x0) {
    param_4 = param_4 | 3;
  }
  if ((param_4 & 1) == 0) {
    if ((param_2 != (int *)0x0) && (*param_2 != *(int *)(param_1 + 4))) {
      return 0x23;
    }
  }
  else {
    param_2 = (int *)0x0;
  }
  uVar1 = FUN_006ba4b0(param_2,param_4);
  return uVar1;
}


/* FUN_006bae50 @ 006bae50  kind=gamemisc  attributed-by=none  size=90 */

void FUN_006bae50(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x54);
  if (param_3 != 0) {
    do {
      iVar2 = FUN_006bae00(iVar1,*(undefined4 *)(param_1 + 0x58),uVar4 + param_2,param_4 | 0x100);
      if (iVar2 != 0) {
        return;
      }
      if ((param_4 & 0x10) == 0) {
        uVar3 = *(undefined4 *)(iVar1 + 0x38);
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 0x3c);
      }
      *(undefined4 *)(param_5 + uVar4 * 4) = uVar3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return;
}


/* FUN_006bb190 @ 006bb190  kind=gamemisc  attributed-by=none  size=193 */

int FUN_006bb190(int *param_1,uint param_2)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  short local_8 [4];
  
  iVar1 = FUN_006908c0();
  if ((((iVar1 == 0) && (iVar1 = FUN_006bb130(local_8), iVar1 == 0)) &&
      ((local_8[0] == -0x7fff || (iVar1 = FUN_006908c0(), iVar1 == 0)))) &&
     (iVar1 = FUN_00691f30(), iVar1 == 0)) {
    iVar1 = 0;
    piVar2 = *(int **)(in_EAX + 0x20);
    for (; 3 < param_2; param_2 = param_2 - 4) {
      if (*piVar2 != *param_1) goto LAB_006bb239;
      param_1 = param_1 + 1;
      piVar2 = piVar2 + 1;
    }
    if ((param_2 != 0) &&
       (((char)*param_1 != (char)*piVar2 ||
        ((1 < param_2 &&
         ((*(char *)((int)param_1 + 1) != *(char *)((int)piVar2 + 1) ||
          ((2 < param_2 && (*(char *)((int)param_1 + 2) != *(char *)((int)piVar2 + 2))))))))))) {
LAB_006bb239:
      iVar1 = 2;
    }
    FUN_00691fe0();
  }
  return iVar1;
}


/* FUN_006bb260 @ 006bb260  kind=gamemisc  attributed-by=none  size=338 */

int FUN_006bb260(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  int *in_ECX;
  int iVar2;
  int *unaff_EDI;
  short asStack_c [2];
  int iStack_8;
  int iStack_4;
  
  (*(code *)**(undefined4 **)(in_EAX + 4))();
  unaff_EDI[0x12] = (int)in_ECX;
  unaff_EDI[0x14] = 0;
  unaff_EDI[0x13] = 0;
  unaff_EDI[0x16] = 0;
  unaff_EDI[0x15] = 0;
  *(undefined2 *)(unaff_EDI + 0x17) = 0;
  *(undefined1 *)((int)unaff_EDI + 0x5e) = 0;
  iStack_8 = FUN_006bb190("%!PS-AdobeFont",0xe);
  if ((((iStack_8 == 0) ||
       ((iStack_8 == 2 && (iStack_8 = FUN_006bb190("%!FontType",10), iStack_8 == 0)))) &&
      (iStack_8 = FUN_006908c0(), iStack_8 == 0)) &&
     (iStack_8 = FUN_006bb130(asStack_c), iStack_8 == 0)) {
    if (asStack_c[0] == -0x7fff) {
      *(undefined1 *)(unaff_EDI + 0x17) = 1;
      iVar2 = iStack_4;
    }
    else {
      iStack_8 = FUN_006908c0();
      if (iStack_8 != 0) goto LAB_006bb349;
      iVar2 = in_ECX[1];
    }
    if (in_ECX[5] == 0) {
      unaff_EDI[0x13] = in_ECX[2] + *in_ECX;
      unaff_EDI[0x14] = iVar2;
      *(undefined1 *)((int)unaff_EDI + 0x5d) = 1;
      iStack_8 = FUN_00690900();
      if (iStack_8 == 0) {
LAB_006bb39b:
        iVar2 = unaff_EDI[0x13];
        unaff_EDI[1] = iVar2;
        *unaff_EDI = iVar2;
        unaff_EDI[2] = unaff_EDI[0x14] + iVar2;
        return 0;
      }
    }
    else {
      iVar1 = FUN_00692230(param_1,iVar2,&iStack_8);
      unaff_EDI[0x13] = iVar1;
      if ((iStack_8 == 0) && (iStack_8 = FUN_00691ec0(), iStack_8 == 0)) {
        unaff_EDI[0x14] = iVar2;
        goto LAB_006bb39b;
      }
    }
  }
LAB_006bb349:
  if (*(char *)((int)unaff_EDI + 0x5d) == '\0') {
    FUN_00691290(param_1,unaff_EDI[0x13]);
    unaff_EDI[0x13] = 0;
  }
  return iStack_8;
}


/* FUN_006bb400 @ 006bb400  kind=gamemisc  attributed-by=none  size=869 */

int FUN_006bb400(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  size_t _Size;
  byte *pbVar8;
  int *unaff_EDI;
  short local_10 [2];
  int local_c;
  int local_8;
  int local_4;
  
  local_4 = unaff_EDI[4];
  iVar5 = unaff_EDI[0x12];
  local_c = 0;
  if ((char)unaff_EDI[0x17] == '\0') {
    pbVar4 = (byte *)unaff_EDI[0x13];
    pbVar7 = pbVar4 + unaff_EDI[0x14];
    pbVar8 = pbVar4;
    do {
      while ((((*pbVar4 != 0x65 || (pbVar7 <= pbVar4 + 9)) || (pbVar4[1] != 0x65)) ||
             (((pbVar4[2] != 0x78 || (pbVar4[3] != 0x65)) || (pbVar4[4] != 99))))) {
        pbVar4 = pbVar4 + 1;
        if (pbVar7 <= pbVar4) {
          return 3;
        }
      }
      unaff_EDI[2] = (int)(pbVar4 + 9);
      pbVar4 = (byte *)unaff_EDI[2];
      *unaff_EDI = (int)pbVar8;
      while (pbVar8 < pbVar4) {
        if ((*pbVar8 == 0x65) && (iVar5 = strncmp((char *)pbVar8,"eexec",5), iVar5 == 0)) {
          unaff_EDI[2] = unaff_EDI[0x13] + unaff_EDI[0x14];
          (*(code *)unaff_EDI[8])();
          pbVar8 = (byte *)*unaff_EDI;
          if (pbVar4 <= pbVar8) {
            return 3;
          }
          while ((((bVar1 = *pbVar8, bVar1 == 0x20 || (bVar1 == 9)) || (bVar1 == 0xd)) ||
                 (bVar1 == 10))) {
            pbVar8 = pbVar8 + 1;
            if (pbVar4 <= pbVar8) {
              return 3;
            }
          }
          if (pbVar4 <= pbVar8) {
            return 3;
          }
          _Size = (unaff_EDI[0x13] - (int)pbVar8) + unaff_EDI[0x14];
          if (*(char *)((int)unaff_EDI + 0x5d) == '\0') {
            unaff_EDI[0x15] = unaff_EDI[0x13];
            *(undefined1 *)((int)unaff_EDI + 0x5e) = 1;
            unaff_EDI[0x13] = 0;
            unaff_EDI[0x14] = 0;
          }
          else {
            iVar5 = FUN_00692230(local_4,_Size + 1,&local_c);
            unaff_EDI[0x15] = iVar5;
            if (local_c != 0) {
              return local_c;
            }
          }
          unaff_EDI[0x16] = _Size;
          uVar6 = (uint)*pbVar8;
          if (((((uVar6 - 0x30 < 10) || (uVar6 - 0x61 < 6)) || (uVar6 - 0x41 < 6)) &&
              ((((uVar6 = (uint)pbVar8[1], uVar6 - 0x30 < 10 || (uVar6 - 0x61 < 6)) ||
                (uVar6 - 0x41 < 6)) &&
               (((uVar6 = (uint)pbVar8[2], uVar6 - 0x30 < 10 || (uVar6 - 0x61 < 6)) ||
                (uVar6 - 0x41 < 6)))))) &&
             (((uVar6 = (uint)pbVar8[3], uVar6 - 0x30 < 10 || (uVar6 - 0x61 < 6)) ||
              (uVar6 - 0x41 < 6)))) {
            *unaff_EDI = (int)pbVar8;
            (**(code **)(*(int *)(param_1 + 4) + 0x18))();
            unaff_EDI[0x16] = local_4;
            *(undefined1 *)(local_4 + unaff_EDI[0x15]) = 0;
          }
          else {
            memmove((void *)unaff_EDI[0x15],pbVar8,_Size);
          }
          goto LAB_006bb71f;
        }
        (*(code *)unaff_EDI[8])();
        if (unaff_EDI[3] != 0) break;
        (*(code *)unaff_EDI[7])();
        pbVar8 = (byte *)*unaff_EDI;
      }
      pbVar8 = (byte *)unaff_EDI[0x13];
      pbVar7 = pbVar8 + unaff_EDI[0x14];
    } while( true );
  }
  uVar2 = FUN_00690930(iVar5);
  unaff_EDI[0x16] = 0;
  iVar3 = FUN_006bb130(local_10);
  if (iVar3 != 0) {
    return iVar3;
  }
  local_c = 0;
  while (local_10[0] == -0x7ffe) {
    unaff_EDI[0x16] = unaff_EDI[0x16] + local_8;
    local_c = FUN_00690900(iVar5,local_8);
    if (local_c != 0) {
      return local_c;
    }
    local_c = FUN_006bb130(local_10);
    if (local_c != 0) {
      return local_c;
    }
  }
  if (unaff_EDI[0x16] == 0) {
    return 3;
  }
  local_c = FUN_006908c0(iVar5,uVar2);
  if (local_c != 0) {
    return local_c;
  }
  iVar3 = FUN_00692230(local_4,unaff_EDI[0x16],&local_c);
  unaff_EDI[0x15] = iVar3;
  if (local_c != 0) {
    return local_c;
  }
  unaff_EDI[0x16] = 0;
  iVar3 = FUN_006bb130(local_10);
  if (iVar3 == 0) {
    local_c = 0;
    do {
      iVar3 = local_8;
      if (local_10[0] != -0x7ffe) break;
      local_c = FUN_00691ec0(iVar5,unaff_EDI[0x16] + unaff_EDI[0x15],local_8);
      if (local_c != 0) {
        return local_c;
      }
      unaff_EDI[0x16] = unaff_EDI[0x16] + iVar3;
      local_c = FUN_006bb130(local_10);
    } while (local_c == 0);
  }
  local_c = 0;
LAB_006bb71f:
  (**(code **)(param_1 + 0x10))(unaff_EDI[0x15],unaff_EDI[0x16],0xd971);
  *(undefined1 *)unaff_EDI[0x15] = 0x20;
  *(undefined1 *)(unaff_EDI[0x15] + 1) = 0x20;
  *(undefined1 *)(unaff_EDI[0x15] + 2) = 0x20;
  *(undefined1 *)(unaff_EDI[0x15] + 3) = 0x20;
  iVar5 = unaff_EDI[0x15];
  unaff_EDI[1] = iVar5;
  *unaff_EDI = iVar5;
  unaff_EDI[2] = unaff_EDI[0x16] + iVar5;
  return local_c;
}


/* FUN_006bb770 @ 006bb770  kind=gamemisc  attributed-by=none  size=498 */

int FUN_006bb770(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint in_EAX;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int local_4;
  
  uVar1 = *(undefined4 *)(in_ECX + 100);
  puVar3 = *(uint **)(in_ECX + 0x214);
  local_4 = 0;
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)FUN_00692230(uVar1,0x1a4,&local_4);
    if (local_4 != 0) {
      return local_4;
    }
    puVar3[0x68] = 0;
    *(uint **)(in_ECX + 0x214) = puVar3;
  }
  if (in_EAX != 0) {
    if (*puVar3 == 0) {
      uVar4 = FUN_00693a60(uVar1,0x20,0);
      puVar3[0x25] = uVar4;
      if (local_4 != 0) {
        return local_4;
      }
      uVar4 = FUN_00693a60(uVar1,0xc4,0);
      puVar3[0x36] = uVar4;
      if (local_4 != 0) {
        return local_4;
      }
      uVar4 = FUN_00693a60(uVar1,0x10,0);
      puVar3[0x48] = uVar4;
      if (local_4 != 0) {
        return local_4;
      }
      uVar4 = FUN_00693a60(uVar1,4,0,in_EAX * 2,0,&local_4);
      puVar3[0x22] = uVar4;
      if (local_4 != 0) {
        return local_4;
      }
      puVar3[0x23] = uVar4 + in_EAX * 4;
      puVar3[0x24] = in_ECX + 0x84;
      puVar3[0x35] = in_ECX + 0xa8;
      puVar3[0x47] = in_ECX + 0x1cc;
      if (1 < in_EAX) {
        puVar6 = puVar3 + 0x37;
        iVar7 = in_EAX - 1;
        do {
          *puVar6 = puVar6[-1] + 0xc4;
          puVar6[-0x11] = puVar6[-0x12] + 0x20;
          puVar6[0x12] = puVar6[0x11] + 0x10;
          puVar6 = puVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      *puVar3 = in_EAX;
    }
    else if (*puVar3 != in_EAX) {
      return 3;
    }
  }
  if (param_1 != 0) {
    if ((puVar3[1] != 0) && (puVar3[1] != param_1)) {
      return 3;
    }
    puVar3[1] = param_1;
  }
  uVar4 = *puVar3;
  uVar2 = puVar3[1];
  if (((uVar4 != 0) && (uVar2 != 0)) && (puVar3[6] == 0)) {
    uVar5 = FUN_00693a60(uVar1,4,0,uVar4 * uVar2,0,&local_4);
    puVar3[6] = uVar5;
    if ((local_4 == 0) && (1 < uVar4)) {
      puVar6 = puVar3 + 7;
      iVar8 = uVar4 - 1;
      iVar7 = uVar2 * 4;
      do {
        *puVar6 = puVar3[6] + iVar7;
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + uVar2 * 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return local_4;
}


/* FUN_006bb970 @ 006bb970  kind=gamemisc  attributed-by=none  size=99 */

undefined4 FUN_006bb970(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x214);
  uVar2 = 6;
  if (puVar1 != (undefined4 *)0x0) {
    *param_2 = puVar1[1];
    uVar5 = 0;
    param_2[1] = *puVar1;
    if (puVar1[1] != 0) {
      puVar4 = puVar1 + 2;
      param_2 = param_2 + 4;
      piVar3 = puVar1 + 0x17;
      do {
        param_2[-2] = *puVar4;
        param_2[-1] = *(undefined4 *)*piVar3;
        *param_2 = *(undefined4 *)(*piVar3 + -4 + (uint)*(byte *)(piVar3 + -1) * 4);
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 1;
        param_2 = param_2 + 3;
        piVar3 = piVar3 + 3;
      } while (uVar5 < (uint)puVar1[1]);
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* FUN_006bb9e0 @ 006bb9e0  kind=gamemisc  attributed-by=none  size=122 */

int FUN_006bb9e0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int in_EDX;
  int iVar5;
  byte *unaff_EDI;
  
  piVar4 = *(int **)(unaff_EDI + 8);
  if (in_EDX <= *piVar4) {
    return **(int **)(unaff_EDI + 4) << 0x10;
  }
  uVar1 = (uint)*unaff_EDI;
  iVar5 = 1;
  if (1 < uVar1) {
    do {
      piVar4 = piVar4 + 1;
      if (in_EDX <= *piVar4) {
        piVar4 = (int *)(*(int *)(unaff_EDI + 8) + iVar5 * 4);
        iVar3 = piVar4[-1];
        uVar2 = FUN_0068ea60(in_EDX - iVar3,0x10000,*piVar4 - iVar3);
        iVar3 = FUN_0068ea60(uVar2,*(int *)(*(int *)(unaff_EDI + 4) + iVar5 * 4) -
                                   *(int *)(*(int *)(unaff_EDI + 4) + -4 + iVar5 * 4),1);
        return iVar3 + *(int *)(*(int *)(unaff_EDI + 4) + -4 + iVar5 * 4) * 0x10000;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar1);
  }
  return *(int *)(*(int *)(unaff_EDI + 4) + -4 + uVar1 * 4) << 0x10;
}


/* FUN_006bba60 @ 006bba60  kind=gamemisc  attributed-by=none  size=189 */

void FUN_006bba60(void)

{
  int in_EAX;
  int *in_ECX;
  int in_EDX;
  
  if (in_EDX == 1) {
    *in_ECX = *(int *)(in_EAX + 4);
    return;
  }
  if (in_EDX == 2) {
    *in_ECX = *(int *)(in_EAX + 4) + *(int *)(in_EAX + 0xc);
    in_ECX[1] = *(int *)(in_EAX + 8) + *(int *)(in_EAX + 0xc);
    return;
  }
  if (in_EDX == 3) {
    *in_ECX = *(int *)(in_EAX + 4) + *(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 0xc) +
              *(int *)(in_EAX + 0x1c);
    in_ECX[1] = *(int *)(in_EAX + 8) + *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x1c) +
                *(int *)(in_EAX + 0x18);
    in_ECX[2] = *(int *)(in_EAX + 0x10) + *(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 0x1c) +
                *(int *)(in_EAX + 0x18);
    return;
  }
  *in_ECX = *(int *)(in_EAX + 4) + *(int *)(in_EAX + 0x34) + *(int *)(in_EAX + 0x14) +
            *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x3c) + *(int *)(in_EAX + 0x1c) +
            *(int *)(in_EAX + 0x2c) + *(int *)(in_EAX + 0x24);
  in_ECX[1] = *(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x28) + *(int *)(in_EAX + 0x38) +
              *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x3c) + *(int *)(in_EAX + 0x1c) +
              *(int *)(in_EAX + 0x2c) + *(int *)(in_EAX + 0x18);
  in_ECX[2] = *(int *)(in_EAX + 0x10) + *(int *)(in_EAX + 0x38) + *(int *)(in_EAX + 0x34) +
              *(int *)(in_EAX + 0x30) + *(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 0x3c) +
              *(int *)(in_EAX + 0x1c) + *(int *)(in_EAX + 0x18);
  in_ECX[3] = *(int *)(in_EAX + 0x20) + *(int *)(in_EAX + 0x28) + *(int *)(in_EAX + 0x38) +
              *(int *)(in_EAX + 0x34) + *(int *)(in_EAX + 0x30) + *(int *)(in_EAX + 0x3c) +
              *(int *)(in_EAX + 0x2c) + *(int *)(in_EAX + 0x24);
  return;
}


/* FUN_006bbb20 @ 006bbb20  kind=gamemisc  attributed-by=none  size=561 */

void FUN_006bbb20(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int local_60;
  int local_5c;
  int *local_58;
  uint local_54;
  int *local_50;
  uint local_4c;
  uint local_48;
  int local_40 [15];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_60;
  uVar7 = *(undefined4 *)(param_1 + 100);
  piVar10 = *(int **)(param_1 + 0x214);
  local_50 = param_2;
  local_58 = piVar10;
  local_5c = FUN_006bb970(param_1,&local_4c);
  uVar9 = local_4c;
  if ((local_5c == 0) &&
     (puVar3 = (uint *)FUN_00692230(uVar7,local_4c * 0x18 + 0x14,&local_5c), local_5c == 0)) {
    *puVar3 = uVar9;
    puVar3[1] = local_48;
    puVar3[2] = 0xffffffff;
    puVar3[3] = (uint)(puVar3 + 5);
    puVar3[4] = 0;
    if (uVar9 != 0) {
      iVar11 = 0;
      piVar10 = local_40;
      local_54 = uVar9;
      do {
        iVar5 = *piVar10;
        *(int *)(iVar11 + puVar3[3]) = piVar10[-1];
        iVar2 = piVar10[1];
        *(int *)(puVar3[3] + 4 + iVar11) = iVar5 << 0x10;
        *(int *)(puVar3[3] + 0xc + iVar11) = iVar2 << 0x10;
        uVar9 = puVar3[3];
        *(int *)(uVar9 + 8 + iVar11) =
             (*(int *)(uVar9 + 0xc + iVar11) + *(int *)(uVar9 + 4 + iVar11)) / 2;
        *(undefined4 *)(puVar3[3] + 0x14 + iVar11) = 0xffffffff;
        *(undefined4 *)(puVar3[3] + 0x10 + iVar11) = 0xffffffff;
        pbVar6 = *(byte **)(puVar3[3] + iVar11);
        local_60 = puVar3[3] + iVar11;
        pcVar8 = "Weight";
        pbVar4 = pbVar6;
        do {
          bVar1 = *pbVar4;
          bVar12 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_006bbc40:
            iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_006bbc45;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar12 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_006bbc40;
          pbVar4 = pbVar4 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_006bbc45:
        if (iVar5 == 0) {
          *(undefined4 *)(local_60 + 0x10) = 0x77676874;
        }
        else {
          pcVar8 = "Width";
          pbVar4 = pbVar6;
          do {
            bVar1 = *pbVar4;
            bVar12 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_006bbc80:
              iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_006bbc85;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar12 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_006bbc80;
            pbVar4 = pbVar4 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_006bbc85:
          if (iVar5 == 0) {
            *(undefined4 *)(local_60 + 0x10) = 0x77647468;
          }
          else {
            pcVar8 = "OpticalSize";
            do {
              bVar1 = *pbVar6;
              bVar12 = bVar1 < (byte)*pcVar8;
              if (bVar1 != *pcVar8) {
LAB_006bbcc0:
                iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_006bbcc5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar12 = bVar1 < (byte)pcVar8[1];
              if (bVar1 != pcVar8[1]) goto LAB_006bbcc0;
              pbVar6 = pbVar6 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_006bbcc5:
            if (iVar5 == 0) {
              *(undefined4 *)(local_60 + 0x10) = 0x6f70737a;
            }
          }
        }
        piVar10 = piVar10 + 3;
        iVar11 = iVar11 + 0x18;
        local_54 = local_54 - 1;
      } while (local_54 != 0);
      local_54 = 0;
      piVar10 = local_58;
    }
    if (*piVar10 == 1 << ((byte)piVar10[1] & 0x1f)) {
      FUN_006bba60();
      uVar9 = 0;
      if (local_4c != 0) {
        iVar11 = 0;
        do {
          uVar7 = FUN_006bb9e0();
          *(undefined4 *)(puVar3[3] + 8 + iVar11) = uVar7;
          uVar9 = uVar9 + 1;
          iVar11 = iVar11 + 0x18;
        } while (uVar9 < local_4c);
      }
    }
    *local_50 = (int)puVar3;
  }
  __security_check_cookie(local_4 ^ (uint)&local_60);
  return;
}


/* FUN_006bbd60 @ 006bbd60  kind=gamemisc  attributed-by=none  size=137 */

undefined4 FUN_006bbd60(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = *(uint **)(param_1 + 0x214);
  uVar2 = 6;
  if ((puVar1 != (uint *)0x0) && (puVar1[1] == param_2)) {
    uVar4 = 0;
    if (*puVar1 != 0) {
      do {
        uVar5 = 0;
        uVar2 = 0x10000;
        if (puVar1[1] != 0) {
          do {
            iVar3 = *(int *)(param_3 + uVar5 * 4);
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            else if (0x10000 < iVar3) {
              iVar3 = 0x10000;
            }
            if ((uVar4 & 1 << ((byte)uVar5 & 0x1f)) == 0) {
              iVar3 = 0x10000 - iVar3;
            }
            uVar2 = FUN_0068ebc0(uVar2,iVar3);
            uVar5 = uVar5 + 1;
          } while (uVar5 < puVar1[1]);
        }
        *(undefined4 *)(puVar1[0x22] + uVar4 * 4) = uVar2;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *puVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* FUN_006bbdf0 @ 006bbdf0  kind=gamemisc  attributed-by=none  size=280 */

void FUN_006bbdf0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint local_58 [3];
  int local_4c;
  int local_48;
  int local_44 [16];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)local_58;
  local_58[2] = *(int *)(param_1 + 0x214);
  local_4c = param_1;
  if ((local_58[2] != 0) && (*(int *)(local_58[2] + 4) == param_2)) {
    local_58[0] = 0;
    if (*(int *)(local_58[2] + 4) != 0) {
      pbVar7 = (byte *)(local_58[2] + 0x58);
      local_48 = param_3 - (int)local_44;
      do {
        iVar5 = *(int *)(pbVar7 + 4);
        uVar8 = (uint)*pbVar7;
        iVar1 = *(int *)((int)local_44 + local_48 + local_58[0] * 4);
        uVar6 = 0xffffffff;
        local_58[1] = 0xffffffff;
        uVar3 = 0;
        if (uVar8 == 0) {
LAB_006bbe88:
          iVar5 = **(int **)(pbVar7 + 8);
        }
        else {
          do {
            uVar4 = uVar3;
            iVar2 = *(int *)(iVar5 + uVar4 * 4);
            if (iVar1 == iVar2) {
              iVar5 = *(int *)(*(int *)(pbVar7 + 8) + uVar4 * 4);
              goto LAB_006bbec2;
            }
            if (iVar1 < iVar2) goto LAB_006bbe84;
            uVar3 = uVar4 + 1;
            uVar6 = uVar4;
          } while (uVar4 + 1 < uVar8);
          uVar4 = 0xffffffff;
LAB_006bbe84:
          if ((int)uVar6 < 0) goto LAB_006bbe88;
          if ((int)uVar4 < 0) {
            iVar5 = *(int *)(*(int *)(pbVar7 + 8) + -4 + uVar8 * 4);
          }
          else {
            iVar2 = *(int *)(iVar5 + uVar6 * 4);
            iVar5 = FUN_0068ea60(iVar1 - iVar2,
                                 *(int *)(*(int *)(pbVar7 + 8) + uVar4 * 4) -
                                 *(int *)(*(int *)(pbVar7 + 8) + uVar6 * 4),
                                 *(int *)(iVar5 + uVar4 * 4) - iVar2);
          }
        }
LAB_006bbec2:
        local_44[local_58[0]] = iVar5;
        local_58[0] = local_58[0] + 1;
        pbVar7 = pbVar7 + 0xc;
      } while (local_58[0] < *(uint *)(local_58[2] + 4));
    }
    FUN_006bbd60(local_4c,param_2,local_44);
  }
  __security_check_cookie(local_4 ^ (uint)local_58);
  return;
}


/* FUN_006bbf10 @ 006bbf10  kind=gamemisc  attributed-by=none  size=117 */

void FUN_006bbf10(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int local_14 [4];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)local_14;
  if (param_2 - 1 < 4) {
    uVar2 = 0;
    if (param_2 != 0) {
      do {
        iVar1 = FUN_0068e970(*(undefined4 *)(param_3 + uVar2 * 4));
        local_14[uVar2] = iVar1 >> 0x10;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_2);
    }
    FUN_006bbdf0(param_1,param_2,local_14);
  }
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}


/* FUN_006bbf90 @ 006bbf90  kind=gamemisc  attributed-by=none  size=296 */

void FUN_006bbf90(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 100);
  puVar6 = *(uint **)(param_1 + 0x214);
  if (puVar6 != (uint *)0x0) {
    uVar5 = puVar6[1];
    uVar4 = *puVar6;
    FUN_00691290(uVar1,puVar6[6]);
    puVar6[6] = 0;
    if (1 < uVar4) {
      puVar2 = puVar6 + 7;
      uVar3 = uVar4;
      while (uVar3 = uVar3 - 1, uVar3 != 0) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    FUN_00691290(uVar1,puVar6[0x36]);
    puVar6[0x36] = 0;
    FUN_00691290(uVar1,puVar6[0x25]);
    puVar6[0x25] = 0;
    FUN_00691290(uVar1,puVar6[0x48]);
    puVar6[0x48] = 0;
    if (uVar4 != 0) {
      puVar2 = puVar6 + 0x24;
      do {
        puVar2[0x11] = 0;
        *puVar2 = 0;
        puVar2[0x23] = 0;
        puVar2 = puVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    FUN_00691290(uVar1,puVar6[0x22]);
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    if (uVar5 != 0) {
      puVar2 = puVar6 + 2;
      uVar4 = uVar5;
      do {
        FUN_00691290(uVar1,*puVar2);
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      if (uVar5 != 0) {
        puVar6 = puVar6 + 0x17;
        do {
          FUN_00691290(uVar1,*puVar6);
          *puVar6 = 0;
          *(undefined1 *)(puVar6 + -1) = 0;
          puVar6 = puVar6 + 3;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x214));
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  return;
}


/* FUN_006bc0c0 @ 006bc0c0  kind=gamemisc  attributed-by=none  size=359 */

void FUN_006bc0c0(int param_1,int param_2)

{
  int iVar1;
  void *_Dst;
  int *piVar2;
  int iVar3;
  size_t _Size;
  int local_48;
  int local_44;
  int local_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  int local_34 [12];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_48;
  iVar3 = 0;
  local_40 = param_2;
  local_48 = 0;
  (**(code **)(param_2 + 0x3c))(param_2,local_34,4,&local_44);
  if (local_44 < 0) {
    iVar1 = 0xa2;
  }
  else {
    if ((local_44 == 0) || (4 < local_44)) {
      *(undefined4 *)(param_2 + 0xc) = 3;
      __security_check_cookie(local_4 ^ (uint)&local_48);
      return;
    }
    iVar1 = FUN_006bb770(local_44);
    local_48 = iVar1;
    if (iVar1 == 0) {
      uStack_38 = *(undefined4 *)(param_1 + 100);
      if (0 < local_44) {
        puStack_3c = (undefined4 *)(*(int *)(param_1 + 0x214) + 8);
        piVar2 = local_34;
        local_48 = 0;
        do {
          if (*(char *)*piVar2 == '/') {
            *piVar2 = (int)((char *)*piVar2 + 1);
          }
          _Size = piVar2[1] - *piVar2;
          if (_Size == 0) {
            *(undefined4 *)(param_2 + 0xc) = 3;
            __security_check_cookie(local_4 ^ (uint)&local_48);
            return;
          }
          _Dst = (void *)FUN_00692230(uStack_38,_Size + 1,&local_48);
          *puStack_3c = _Dst;
          if (local_48 != 0) {
            *(int *)(local_40 + 0xc) = local_48;
            __security_check_cookie(local_4 ^ (uint)&local_48);
            return;
          }
          memcpy(_Dst,(void *)*piVar2,_Size);
          puStack_3c = puStack_3c + 1;
          iVar3 = iVar3 + 1;
          *(undefined1 *)((int)_Dst + _Size) = 0;
          piVar2 = piVar2 + 3;
          param_2 = local_40;
        } while (iVar3 < local_44);
        *(int *)(local_40 + 0xc) = local_48;
        __security_check_cookie(local_4 ^ (uint)&local_48);
        return;
      }
    }
  }
  *(int *)(param_2 + 0xc) = iVar1;
  __security_check_cookie(local_4 ^ (uint)&local_48);
  return;
}


/* FUN_006bc720 @ 006bc720  kind=gamemisc  attributed-by=none  size=215 */

undefined4 FUN_006bc720(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 8);
  if (iVar1 == 10) {
    (**(code **)(unaff_EDI + 0xc))();
    return *(undefined4 *)(unaff_ESI + 0xc);
  }
  switch(*(undefined4 *)(unaff_EDI + 4)) {
  case 2:
  default:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 8:
  }
  if ((iVar1 != 8) && (iVar1 != 9)) {
    uVar2 = (**(code **)(unaff_ESI + 0x40))();
    return uVar2;
  }
  uVar2 = (**(code **)(unaff_ESI + 0x44))();
  return uVar2;
}


/* FUN_006bc890 @ 006bc890  kind=gamemisc  attributed-by=none  size=303 */

void FUN_006bc890(int param_1,int param_2)

{
  int iVar1;
  undefined2 extraout_var;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_1c;
  iVar1 = (**(code **)(param_2 + 0x34))(param_2,6,&local_1c,3);
  if (iVar1 < 0) {
    *(undefined4 *)(param_2 + 0xc) = 3;
    __security_check_cookie(local_4 ^ (uint)&local_1c);
    return;
  }
  iVar1 = (uStack_10 ^ (int)uStack_10 >> 0x1f) - ((int)uStack_10 >> 0x1f);
  if (iVar1 != 0) {
    FUN_0068ec40(0x3e80000,iVar1);
    *(undefined2 *)(param_1 + 0x44) = extraout_var;
    if (iVar1 != 0x10000) {
      local_1c = FUN_0068ec40(local_1c,iVar1);
      uStack_18 = FUN_0068ec40(uStack_18,iVar1);
      uStack_14 = FUN_0068ec40(uStack_14,iVar1);
      iStack_c = FUN_0068ec40(iStack_c,iVar1);
      iStack_8 = FUN_0068ec40(iStack_8,iVar1);
      uStack_10 = 0x10000;
    }
    *(undefined4 *)(param_1 + 0x1b4) = local_1c;
    *(uint *)(param_1 + 0x1c0) = uStack_10;
    *(undefined4 *)(param_1 + 0x1bc) = uStack_18;
    *(undefined4 *)(param_1 + 0x1b8) = uStack_14;
    *(int *)(param_1 + 0x1c4) = iStack_c >> 0x10;
    *(int *)(param_1 + 0x1c8) = iStack_8 >> 0x10;
    __security_check_cookie(local_4 ^ (uint)&local_1c);
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 3;
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}


/* FUN_006bcd60 @ 006bcd60  kind=gamemisc  attributed-by=none  size=569 */

void FUN_006bcd60(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  void *_Dst;
  size_t sStack_18;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 *local_8;
  undefined4 uStack_4;
  
  puVar4 = param_2;
  puVar2 = *(undefined4 **)(param_1 + 0x1e8);
  uVar3 = param_2[4];
  puVar1 = param_2 + 0x4f;
  local_8 = puVar2;
  (*(code *)param_2[7])(param_2);
  if (((char *)*puVar4 < (char *)puVar4[2]) && (*(char *)*puVar4 == '[')) {
    (*(code *)puVar4[8])(puVar4);
    (*(code *)puVar4[7])(puVar4);
    if (((char *)puVar4[2] <= (char *)*puVar4) || (*(char *)*puVar4 != ']')) {
      puVar4[3] = 3;
      return;
    }
  }
  else {
    uStack_c = (*(code *)puVar4[9])(puVar4);
    (*(code *)puVar4[8])(puVar4);
    if (puVar4[3] == 0) {
      (*(code *)puVar4[7])(puVar4);
      if ((puVar4[0x4e] == 0) &&
         (param_2 = (undefined4 *)(**(code **)*puVar2)(puVar1,uStack_c,uVar3),
         param_2 != (undefined4 *)0x0)) {
LAB_006bcf8e:
        puVar4[3] = param_2;
      }
      else {
        iVar5 = strncmp((char *)*puVar4,"dup",3);
        while (iVar5 == 0) {
          (*(code *)puVar4[8])(puVar4);
          uVar6 = (*(code *)puVar4[9])(puVar4);
          uStack_4 = uVar6;
          iVar5 = FUN_006bc830(&pvStack_10);
          if (iVar5 == 0) {
            return;
          }
          (*(code *)puVar4[8])(puVar4);
          if (puVar4[3] != 0) {
            return;
          }
          (*(code *)puVar4[7])(puVar4);
          iVar5 = strncmp((char *)*puVar4,"put",3);
          if (iVar5 == 0) {
            (*(code *)puVar4[8])(puVar4);
            (*(code *)puVar4[7])(puVar4);
          }
          if (puVar4[0x4e] == 0) {
            if (*(int *)(param_1 + 0xac) < 0) {
              param_2 = (undefined4 *)(*(code *)puVar4[0x5a])(puVar1,uVar6,pvStack_10,sStack_18);
            }
            else {
              if ((int)sStack_18 < *(int *)(param_1 + 0xac)) {
                param_2 = (undefined4 *)0x3;
                goto LAB_006bcf8e;
              }
              _Dst = (void *)FUN_00692230(uVar3,sStack_18,&param_2);
              if (param_2 != (undefined4 *)0x0) goto LAB_006bcf8e;
              memcpy(_Dst,pvStack_10,sStack_18);
              (*(code *)local_8[4])(_Dst,sStack_18,0x10ea);
              sStack_18 = sStack_18 - *(int *)(param_1 + 0xac);
              param_2 = (undefined4 *)
                        (*(code *)puVar4[0x5a])
                                  (puVar1,uStack_4,*(int *)(param_1 + 0xac) + (int)_Dst,sStack_18);
              FUN_00691290(uVar3,_Dst);
            }
            if (param_2 != (undefined4 *)0x0) goto LAB_006bcf8e;
          }
          iVar5 = strncmp((char *)*puVar4,"dup",3);
        }
        if (puVar4[0x4e] == 0) {
          puVar4[0x4e] = uStack_c;
          return;
        }
      }
    }
  }
  return;
}


/* FUN_006bcfa0 @ 006bcfa0  kind=gamemisc  attributed-by=none  size=1536 */

void FUN_006bcfa0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  undefined4 *puVar5;
  size_t _Size;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  void *_Dst;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  int iStack_38;
  char local_31;
  int *local_30;
  int iStack_2c;
  int local_28;
  size_t sStack_24;
  char *local_20;
  void *pvStack_1c;
  int local_18;
  int iStack_14;
  int local_10;
  undefined4 *local_c;
  undefined1 uStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&iStack_38;
  puVar5 = *(undefined4 **)(param_1 + 0x1e8);
  pcVar8 = (char *)param_2[2];
  iVar9 = param_2[4];
  local_18 = param_1;
  local_30 = param_2;
  local_28 = 0;
  local_31 = '\0';
  local_20 = pcVar8;
  local_10 = iVar9;
  local_c = puVar5;
  iStack_14 = (*(code *)param_2[9])(param_2);
  if ((iStack_14 == 0) || (param_2[3] != 0)) goto LAB_006bd58d;
  if (param_2[0x26] == 0) {
    iVar1 = iStack_14 + 6;
    iStack_38 = (**(code **)*puVar5)(param_2 + 0x34,iVar1,iVar9);
    iVar7 = iStack_38;
    if (((iStack_38 == 0) &&
        (iStack_38 = (**(code **)*puVar5)(param_2 + 0x27,iVar1,iVar9), iVar7 = iStack_38,
        iStack_38 == 0)) &&
       (iStack_38 = (**(code **)*puVar5)(param_2 + 0x41,4,iVar9), iVar7 = iStack_38,
       pcVar8 = local_20, iStack_38 == 0)) goto LAB_006bd074;
  }
  else {
LAB_006bd074:
    iStack_2c = 0;
    (*(code *)param_2[7])(param_2);
    pcVar11 = (char *)*param_2;
    if (pcVar11 < pcVar8) {
      do {
        if ((pcVar11 + 3 < pcVar8) &&
           (((((cVar3 = pcVar11[3], cVar3 == ' ' || (cVar3 == '\r')) ||
              ((cVar3 == '\n' || ((cVar3 == '\t' || (cVar3 == '\f')))))) ||
             (((cVar3 == '\0' ||
               ((((cVar3 == '/' || (cVar3 == '(')) || (cVar3 == ')')) ||
                ((cVar3 == '<' || (cVar3 == '>')))))) ||
              ((((cVar3 == '[' || ((cVar3 == ']' || (cVar3 == '{')))) || (cVar3 == '}')) ||
               (cVar3 == '%')))))) &&
            (((((*pcVar11 == 'd' && (pcVar11[1] == 'e')) && (pcVar11[2] == 'f')) && (iStack_2c != 0)
              ) || (((*pcVar11 == 'e' && (pcVar11[1] == 'n')) && (pcVar11[2] == 'd')))))))) break;
        (*(code *)param_2[8])(param_2);
        if (param_2[3] != 0) goto LAB_006bd58d;
        if (*pcVar11 == '/') {
          pcVar11 = pcVar11 + 1;
          if (pcVar8 <= pcVar11) {
            iVar7 = 3;
            goto LAB_006bd58a;
          }
          iVar9 = *param_2;
          iVar7 = FUN_006bc830(&pvStack_1c);
          iVar1 = iStack_2c;
          piVar2 = local_30;
          if (iVar7 == 0) goto LAB_006bd58d;
          pcVar8 = local_20;
          param_2 = local_30;
          if (local_30[0x26] == 0) {
            iStack_38 = (*(code *)local_30[0x32])
                                  (local_30 + 0x27,iStack_2c,pcVar11,(iVar9 - (int)pcVar11) + 1);
            iVar6 = local_10;
            _Size = sStack_24;
            iVar7 = iStack_38;
            param_2 = local_30;
            if (iStack_38 != 0) goto LAB_006bd58a;
            *(undefined1 *)((iVar9 - (int)pcVar11) + *(int *)(piVar2[0x2d] + iVar1 * 4)) = 0;
            if (*pcVar11 == '.') {
              pbVar10 = *(byte **)(piVar2[0x2d] + iVar1 * 4);
              pcVar8 = ".notdef";
              do {
                bVar4 = *pcVar8;
                bVar12 = bVar4 < *pbVar10;
                if (bVar4 != *pbVar10) {
LAB_006bd1c2:
                  iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_006bd1c7;
                }
                if (bVar4 == 0) break;
                bVar4 = pcVar8[1];
                bVar12 = bVar4 < pbVar10[1];
                if (bVar4 != pbVar10[1]) goto LAB_006bd1c2;
                pcVar8 = pcVar8 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar4 != 0);
              iVar9 = 0;
LAB_006bd1c7:
              if (iVar9 == 0) {
                local_28 = iVar1;
                local_31 = '\x01';
              }
            }
            if ((*(int *)(local_18 + 0xac) < 0) || (iStack_14 + 5 <= iVar1)) {
              iStack_38 = (*(code *)local_30[0x3f])(local_30 + 0x34,iVar1,pvStack_1c,sStack_24);
            }
            else {
              if ((int)sStack_24 <= *(int *)(local_18 + 0xac)) {
                iVar7 = 3;
                goto LAB_006bd58a;
              }
              _Dst = (void *)FUN_00692230(local_10,sStack_24,&iStack_38);
              iVar7 = iStack_38;
              param_2 = local_30;
              if (iStack_38 != 0) goto LAB_006bd58a;
              memcpy(_Dst,pvStack_1c,_Size);
              (*(code *)local_c[4])(_Dst,_Size,0x10ea);
              sStack_24 = _Size - *(int *)(local_18 + 0xac);
              iStack_38 = (*(code *)local_30[0x3f])
                                    (local_30 + 0x34,iVar1,*(int *)(local_18 + 0xac) + (int)_Dst,
                                     sStack_24);
              FUN_00691290(iVar6,_Dst);
            }
            iVar7 = iStack_38;
            param_2 = local_30;
            if (iStack_38 != 0) goto LAB_006bd58a;
            iStack_2c = iVar1 + 1;
            pcVar8 = local_20;
          }
        }
        (*(code *)param_2[7])(param_2);
        pcVar11 = (char *)*param_2;
      } while (pcVar11 < pcVar8);
    }
    param_2[0x26] = iStack_2c;
    if (local_31 == '\0') {
      local_c = (undefined4 *)0xde1f78b;
      uStack_8 = 0xe;
      iStack_38 = (*(code *)param_2[0x4c])
                            (param_2 + 0x41,0,*(undefined4 *)param_2[0x2d],
                             *(undefined4 *)param_2[0x2e]);
      iVar7 = iStack_38;
      if (iStack_38 == 0) {
        iStack_38 = (*(code *)param_2[0x4c])
                              (param_2 + 0x41,1,*(undefined4 *)param_2[0x3a],
                               *(undefined4 *)param_2[0x3b]);
        iVar7 = iStack_38;
        if ((((iStack_38 == 0) &&
             (iStack_38 = (*(code *)param_2[0x32])(param_2 + 0x27,0,".notdef",8), iVar7 = iStack_38,
             iStack_38 == 0)) &&
            (iStack_38 = (*(code *)param_2[0x3f])(param_2 + 0x34,0,&local_c,5), iVar7 = iStack_38,
            iStack_38 == 0)) &&
           ((iStack_38 = (*(code *)param_2[0x32])
                                   (param_2 + 0x27,iStack_2c,*(undefined4 *)param_2[0x47],
                                    *(undefined4 *)param_2[0x48]), iVar7 = iStack_38, iStack_38 == 0
            && (iVar7 = (*(code *)param_2[0x3f])
                                  (param_2 + 0x34,iStack_2c,*(undefined4 *)(param_2[0x47] + 4),
                                   *(undefined4 *)(param_2[0x48] + 4)), iVar7 == 0)))) {
          param_2[0x26] = param_2[0x26] + 1;
          __security_check_cookie(local_4 ^ (uint)&iStack_38);
          return;
        }
      }
    }
    else {
      pcVar8 = ".notdef";
      pbVar10 = *(byte **)param_2[0x2d];
      do {
        bVar4 = *pcVar8;
        bVar12 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_006bd310:
          iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_006bd315;
        }
        if (bVar4 == 0) break;
        bVar4 = pcVar8[1];
        bVar12 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_006bd310;
        pcVar8 = pcVar8 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar9 = 0;
LAB_006bd315:
      if (iVar9 == 0) goto LAB_006bd58d;
      piVar2 = param_2 + 0x41;
      iStack_38 = (*(code *)param_2[0x4c])
                            (piVar2,0,*(byte **)param_2[0x2d],*(undefined4 *)param_2[0x2e]);
      iVar7 = iStack_38;
      if (iStack_38 == 0) {
        iStack_38 = (*(code *)param_2[0x4c])
                              (piVar2,1,*(undefined4 *)param_2[0x3a],*(undefined4 *)param_2[0x3b]);
        iVar7 = iStack_38;
        if ((((iStack_38 == 0) &&
             (iStack_38 = (*(code *)param_2[0x4c])
                                    (piVar2,2,*(undefined4 *)(param_2[0x2d] + local_28 * 4),
                                     *(undefined4 *)(param_2[0x2e] + local_28 * 4)),
             iVar7 = iStack_38, iStack_38 == 0)) &&
            ((iStack_38 = (*(code *)param_2[0x4c])
                                    (piVar2,3,*(undefined4 *)(param_2[0x3a] + local_28 * 4),
                                     *(undefined4 *)(param_2[0x3b] + local_28 * 4)),
             iVar7 = iStack_38, iStack_38 == 0 &&
             (((iStack_38 = (*(code *)param_2[0x32])
                                      (param_2 + 0x27,local_28,*(undefined4 *)param_2[0x47],
                                       *(undefined4 *)param_2[0x48]), iVar7 = iStack_38,
               iStack_38 == 0 &&
               (iStack_38 = (*(code *)param_2[0x3f])
                                      (param_2 + 0x34,local_28,*(undefined4 *)(param_2[0x47] + 4),
                                       *(undefined4 *)(param_2[0x48] + 4)), iVar7 = iStack_38,
               iStack_38 == 0)) &&
              (iStack_38 = (*(code *)param_2[0x32])
                                     (param_2 + 0x27,0,*(undefined4 *)(param_2[0x47] + 8),
                                      *(undefined4 *)(param_2[0x48] + 8)), iVar7 = iStack_38,
              iStack_38 == 0)))))) &&
           (iVar7 = (*(code *)param_2[0x3f])
                              (param_2 + 0x34,0,*(undefined4 *)(param_2[0x47] + 0xc),
                               *(undefined4 *)(param_2[0x48] + 0xc)), iVar7 == 0)) {
          __security_check_cookie(local_4 ^ (uint)&iStack_38);
          return;
        }
      }
    }
  }
LAB_006bd58a:
  param_2[3] = iVar7;
LAB_006bd58d:
  __security_check_cookie(local_4 ^ (uint)&iStack_38);
  return;
}


/* FUN_006bd5a0 @ 006bd5a0  kind=gamemisc  attributed-by=none  size=930 */

int FUN_006bd5a0(undefined4 param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int in_EAX;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  int in_EDX;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  undefined **ppuStack_14;
  byte *local_10;
  byte *local_c;
  
  pbVar8 = (byte *)(in_EAX + in_EDX);
  *param_2 = in_EAX;
  local_c = (byte *)0x0;
  bVar11 = false;
  param_2[2] = (int)pbVar8;
  param_2[3] = 0;
  local_10 = pbVar8;
  (*(code *)param_2[7])(param_2);
  if (pbVar8 <= (byte *)*param_2) {
LAB_006bd937:
    return param_2[3];
  }
LAB_006bd5d5:
  pbVar6 = local_10;
  pbVar8 = (byte *)*param_2;
  if (((*pbVar8 == 0x65) &&
      (((pbVar8 + 6 == local_10 ||
        ((pbVar8 + 6 < local_10 &&
         ((((((((bVar1 = pbVar8[5], bVar1 == 0x20 || (bVar1 == 0xd)) || (bVar1 == 10)) ||
              ((bVar1 == 9 || (bVar1 == 0xc)))) || (bVar1 == 0)) ||
            (((bVar1 == 0x2f || (bVar1 == 0x28)) ||
             ((bVar1 == 0x29 || (((bVar1 == 0x3c || (bVar1 == 0x3e)) || (bVar1 == 0x5b)))))))) ||
           ((bVar1 == 0x5d || (bVar1 == 0x7b)))) || ((bVar1 == 0x7d || (bVar1 == 0x25)))))))) &&
       (iVar5 = strncmp((char *)pbVar8,"eexec",5), iVar5 == 0)))) ||
     ((*pbVar8 == 99 &&
      (((pbVar8 + 10 == pbVar6 ||
        ((pbVar8 + 10 < pbVar6 &&
         (((((bVar1 = pbVar8[9], bVar1 == 0x20 || (bVar1 == 0xd)) ||
            ((bVar1 == 10 || (((bVar1 == 9 || (bVar1 == 0xc)) || (bVar1 == 0)))))) ||
           ((bVar1 == 0x2f || (bVar1 == 0x28)))) ||
          ((bVar1 == 0x29 ||
           (((bVar1 == 0x3c || (bVar1 == 0x3e)) ||
            ((bVar1 == 0x5b ||
             ((((bVar1 == 0x5d || (bVar1 == 0x7b)) || (bVar1 == 0x7d)) || (bVar1 == 0x25))))))))))))
        )) && (iVar5 = strncmp((char *)pbVar8,"closefile",9), iVar5 == 0)))))) goto LAB_006bd937;
  if (((*pbVar8 == 0x46) &&
      ((pbVar8 + 0xe == pbVar6 ||
       ((pbVar8 + 0xe < pbVar6 &&
        ((((bVar1 = pbVar8[0xd], bVar1 == 0x20 || (bVar1 == 0xd)) ||
          ((bVar1 == 10 || ((bVar1 == 9 || (bVar1 == 0xc)))))) ||
         ((((bVar1 == 0 ||
            ((((bVar1 == 0x2f || (bVar1 == 0x28)) || (bVar1 == 0x29)) ||
             (((bVar1 == 0x3c || (bVar1 == 0x3e)) ||
              ((bVar1 == 0x5b || ((bVar1 == 0x5d || (bVar1 == 0x7b)))))))))) || (bVar1 == 0x7d)) ||
          (bVar1 == 0x25)))))))))) &&
     (iVar5 = strncmp((char *)pbVar8,"FontDirectory",0xd), iVar5 == 0)) {
    if ((param_2[0x5d] & 1U) != 0) {
      param_2[0x5d] = param_2[0x5d] | 2;
    }
    *param_2 = *param_2 + 0xd;
    goto LAB_006bd91e;
  }
  bVar1 = *pbVar8;
  if (bVar1 - 0x30 < 10) {
    local_c = pbVar8;
    (*(code *)param_2[8])(param_2);
    if (param_2[3] == 0) {
      bVar11 = true;
      goto LAB_006bd91e;
    }
    goto LAB_006bd937;
  }
  if (((((bVar1 == 0x52) && (pbVar8 + 6 < pbVar6)) && (pbVar8[1] == 0x44)) && (bVar11)) ||
     (((bVar1 == 0x2d && (pbVar8 + 6 < pbVar6)) && ((pbVar8[1] == 0x7c && (bVar11)))))) {
    *param_2 = (int)local_c;
    iVar5 = FUN_006bc830(&ppuStack_14);
    if (iVar5 == 0) {
      return 3;
    }
  }
  else {
    if ((bVar1 == 0x2f) && (pbVar8 + 2 < pbVar6)) {
      pbVar8 = pbVar8 + 1;
      *param_2 = (int)pbVar8;
      (*(code *)param_2[8])(param_2);
      if (param_2[3] == 0) {
        uVar10 = *param_2 - (int)pbVar8;
        if ((uVar10 - 1 < 0x15) && ((byte *)*param_2 < local_10)) {
          pcVar9 = "version";
          ppuStack_14 = &PTR_s_version_007354f0;
          do {
            if (*pbVar8 == *pcVar9) {
              pbVar6 = (byte *)pcVar9;
              do {
                bVar1 = *pbVar6;
                pbVar6 = pbVar6 + 1;
              } while (bVar1 != 0);
              pbVar2 = pbVar8;
              uVar3 = uVar10;
              pbVar4 = (byte *)pcVar9;
              if (uVar10 == (int)pbVar6 - (int)(pcVar9 + 1)) {
                for (; 3 < uVar3; uVar3 = uVar3 - 4) {
                  if (*(int *)pbVar2 != *(int *)pbVar4) goto LAB_006bd880;
                  pbVar2 = pbVar2 + 4;
                  pbVar4 = pbVar4 + 4;
                }
                if ((uVar3 == 0) ||
                   ((*pbVar4 == *pbVar2 &&
                    ((uVar3 < 2 ||
                     ((pbVar4[1] == pbVar2[1] && ((uVar3 < 3 || (pbVar4[2] == pbVar2[2])))))))))) {
                  if (((uint)ppuStack_14[8] & ((param_2[0x5d] & 1U) != 0) + 1) != 0) {
                    if ((param_2[0x5d] & 2U) == 0) goto LAB_006bd8e9;
                    pcVar7 = "CharStrings";
                    goto LAB_006bd8c0;
                  }
                  break;
                }
              }
            }
LAB_006bd880:
            pcVar9 = ppuStack_14[9];
            ppuStack_14 = ppuStack_14 + 9;
          } while ((byte *)pcVar9 != (byte *)0x0);
        }
        goto LAB_006bd919;
      }
      goto LAB_006bd937;
    }
    (*(code *)param_2[8])(param_2);
    if (param_2[3] != 0) goto LAB_006bd937;
  }
LAB_006bd919:
  bVar11 = false;
LAB_006bd91e:
  (*(code *)param_2[7])(param_2);
  if (local_10 <= (byte *)*param_2) goto LAB_006bd937;
  goto LAB_006bd5d5;
  while( true ) {
    bVar1 = pcVar9[1];
    bVar11 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_006bd8e0;
    pcVar9 = pcVar9 + 2;
    pcVar7 = pcVar7 + 2;
    if (bVar1 == 0) break;
LAB_006bd8c0:
    bVar1 = *pcVar9;
    bVar11 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_006bd8e0:
      iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_006bd8e5;
    }
    if (bVar1 == 0) break;
  }
  iVar5 = 0;
LAB_006bd8e5:
  if (iVar5 == 0) {
LAB_006bd8e9:
    iVar5 = FUN_006bc720();
    param_2[3] = iVar5;
    if (iVar5 != 0) {
      if ((char)iVar5 != -0x5e) {
        return iVar5;
      }
      param_2[3] = 0;
    }
  }
  goto LAB_006bd919;
}


/* FUN_006bd9a0 @ 006bd9a0  kind=gamemisc  attributed-by=none  size=117 */

void FUN_006bd9a0(void)

{
  int in_EAX;
  
  if (*(code **)(in_EAX + 0x94) != (code *)0x0) {
    (**(code **)(in_EAX + 0x94))(in_EAX + 100);
  }
  if (*(code **)(in_EAX + 0x100) != (code *)0x0) {
    (**(code **)(in_EAX + 0x100))(in_EAX + 0xd0);
  }
  if (*(code **)(in_EAX + 0xcc) != (code *)0x0) {
    (**(code **)(in_EAX + 0xcc))(in_EAX + 0x9c);
  }
  if (*(code **)(in_EAX + 0x134) != (code *)0x0) {
    (**(code **)(in_EAX + 0x134))(in_EAX + 0x104);
  }
  if (*(code **)(in_EAX + 0x16c) != (code *)0x0) {
    (**(code **)(in_EAX + 0x16c))(in_EAX + 0x13c);
  }
  FUN_006bb3c0();
  return;
}


/* FUN_006bda20 @ 006bda20  kind=gamemisc  attributed-by=none  size=956 */

int FUN_006bda20(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  byte *local_17c;
  undefined1 local_178 [96];
  undefined4 local_118;
  int local_104;
  int local_fc;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_c4;
  undefined4 local_a8;
  int local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_40;
  undefined4 local_3c;
  int local_30;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar4 = *(undefined4 *)(param_1 + 0x1e8);
  FUN_006bd950();
  *(undefined4 *)(param_1 + 0x218) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x118) = 7;
  *(undefined4 *)(param_1 + 0x11c) = 1;
  *(undefined4 *)(param_1 + 0xac) = 4;
  *(undefined4 *)(param_1 + 0x15c) = 0xf5c;
  *(undefined4 *)(param_1 + 0x114) = 0x27a000;
  local_188 = FUN_006bb260(*(undefined4 *)(param_1 + 100));
  if ((((local_188 == 0) && (local_188 = FUN_006bd5a0(param_1,local_178), local_188 == 0)) &&
      (local_188 = FUN_006bb400(uVar4), local_188 == 0)) &&
     (local_188 = FUN_006bd5a0(param_1,local_178), local_188 == 0)) {
    *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfe;
    iVar10 = *(int *)(param_1 + 0x214);
    if (((iVar10 != 0) && (*(int *)(iVar10 + 0x1a0) != 0)) &&
       (*(int *)(iVar10 + 0x1a0) != *(int *)(iVar10 + 4))) {
      *(undefined4 *)(iVar10 + 0x1a0) = 0;
    }
    piVar2 = *(int **)(param_1 + 0x214);
    if ((piVar2 != (int *)0x0) && ((*piVar2 == 0 || (piVar2[1] == 0)))) {
      FUN_006bbf90(param_1);
    }
    iVar10 = *(int *)(param_1 + 0x214);
    if ((iVar10 != 0) && (uVar3 = 0, *(int *)(iVar10 + 4) != 0)) {
      pcVar7 = (char *)(iVar10 + 0x58);
      do {
        if (*pcVar7 == '\0') {
          FUN_006bbf90(param_1);
          break;
        }
        uVar3 = uVar3 + 1;
        pcVar7 = pcVar7 + 0xc;
      } while (uVar3 < *(uint *)(*(int *)(param_1 + 0x214) + 4));
    }
    if ((*(int *)(param_1 + 0x214) != 0) && (*(int *)(param_1 + 0x220) != 0)) {
      uVar4 = FUN_00693a60(*(undefined4 *)(param_1 + 100),4,0,*(int *)(param_1 + 0x220),0,&local_188
                          );
      *(undefined4 *)(param_1 + 0x224) = uVar4;
      if (local_188 != 0) {
        *(undefined4 *)(param_1 + 0x220) = 0;
        goto LAB_006bddc4;
      }
    }
    *(undefined4 *)(param_1 + 0x1a0) = local_e0;
    if (local_30 != 0) {
      *(undefined4 *)(param_1 + 0x194) = local_40;
      local_30 = 0;
      *(undefined4 *)(param_1 + 0x188) = local_3c;
      *(undefined4 *)(param_1 + 0x198) = local_24;
      *(undefined4 *)(param_1 + 0x19c) = local_20;
    }
    if ((*(int *)(*(int *)(param_1 + 0x80) + 0x34) == 0) && (local_9c == 0)) {
      local_188 = 3;
    }
    *(undefined4 *)(param_1 + 0x18c) = local_a8;
    *(undefined4 *)(param_1 + 0x1a8) = local_90;
    local_9c = 0;
    *(undefined4 *)(param_1 + 0x1ac) = local_8c;
    *(undefined4 *)(param_1 + 400) = local_dc;
    *(undefined4 *)(param_1 + 0x1a4) = local_c4;
    local_dc = 0;
    local_c4 = 0;
    if (*(int *)(param_1 + 0x170) == 1) {
      local_184 = 0;
      local_180 = 0;
      local_18c = 0;
      if (0 < local_104) {
LAB_006bdca1:
        *(undefined2 *)(*(int *)(param_1 + 0x180) + local_18c * 2) = 0;
        *(char **)(*(int *)(param_1 + 0x184) + local_18c * 4) = ".notdef";
        local_17c = *(byte **)(local_fc + local_18c * 4);
        if ((local_17c != (byte *)0x0) && (iVar10 = 0, 0 < *(int *)(param_1 + 0x1a0))) {
          puVar11 = *(undefined4 **)(param_1 + 0x1a4);
          do {
            pbVar9 = (byte *)*puVar11;
            pbVar5 = local_17c;
            pbVar8 = pbVar9;
            do {
              bVar1 = *pbVar5;
              bVar12 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_006bdd10:
                iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_006bdd15;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar12 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_006bdd10;
              pbVar5 = pbVar5 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_006bdd15:
            if (iVar6 == 0) {
              *(short *)(*(int *)(param_1 + 0x180) + local_18c * 2) = (short)iVar10;
              *(byte **)(*(int *)(param_1 + 0x184) + local_18c * 4) = pbVar9;
              pcVar7 = ".notdef";
              goto LAB_006bdd45;
            }
            iVar10 = iVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (iVar10 < *(int *)(param_1 + 0x1a0));
        }
        goto LAB_006bdd91;
      }
LAB_006bdda3:
      *(int *)(param_1 + 0x178) = local_184;
      *(int *)(param_1 + 0x17c) = local_180;
      *(undefined4 *)(param_1 + 0x174) = local_118;
    }
  }
LAB_006bddc4:
  FUN_006bd9a0();
  return local_188;
  while( true ) {
    bVar1 = pcVar7[1];
    bVar12 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_006bdd65;
    pcVar7 = pcVar7 + 2;
    pbVar9 = pbVar9 + 2;
    if (bVar1 == 0) break;
LAB_006bdd45:
    bVar1 = *pcVar7;
    bVar12 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_006bdd65:
      iVar10 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_006bdd6a;
    }
    if (bVar1 == 0) break;
  }
  iVar10 = 0;
LAB_006bdd6a:
  if (iVar10 != 0) {
    if (local_18c < local_184) {
      local_184 = local_18c;
    }
    if (local_180 <= local_18c) {
      local_180 = local_18c + 1;
    }
  }
LAB_006bdd91:
  local_18c = local_18c + 1;
  if (local_104 <= local_18c) goto LAB_006bdda3;
  goto LAB_006bdca1;
}


/* FUN_006bdf90 @ 006bdf90  kind=gamemisc  attributed-by=none  size=28 */

undefined4 FUN_006bdf90(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x84);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}


/* FUN_006bdff0 @ 006bdff0  kind=gamemisc  attributed-by=none  size=322 */

void FUN_006bdff0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  int unaff_ESI;
  int aiStack_14 [3];
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)aiStack_14;
  iVar2 = *(int *)(unaff_ESI + 4);
  piVar1 = *(int **)(*(int *)(iVar2 + 0x80) + 0x34);
  *(undefined4 *)(unaff_ESI + 0x560) = *(undefined4 *)(iVar2 + 0x1b4);
  *(undefined4 *)(unaff_ESI + 0x564) = *(undefined4 *)(iVar2 + 0x1b8);
  *(undefined4 *)(unaff_ESI + 0x568) = *(undefined4 *)(iVar2 + 0x1bc);
  *(undefined4 *)(unaff_ESI + 0x56c) = *(undefined4 *)(iVar2 + 0x1c0);
  *(undefined4 *)(unaff_ESI + 0x570) = *(undefined4 *)(iVar2 + 0x1c4);
  *(undefined4 *)(unaff_ESI + 0x574) = *(undefined4 *)(iVar2 + 0x1c8);
  if (piVar1 == (int *)0x0) {
    *unaff_EBX = *(undefined4 *)(*(int *)(iVar2 + 0x1a8) + param_1 * 4);
    unaff_EBX[1] = *(undefined4 *)(*(int *)(iVar2 + 0x1ac) + param_1 * 4);
  }
  else {
    iVar2 = (**(code **)*piVar1)(piVar1[1],param_1);
    if (iVar2 != 0) goto LAB_006be105;
  }
  iVar2 = (**(code **)(unaff_ESI + 0x5cc))();
  if (((iVar2 == 0) && (piVar1 != (int *)0x0)) && (*(int *)(*piVar1 + 8) != 0)) {
    aiStack_14[0] = FUN_0068e970(*(undefined4 *)(unaff_ESI + 0x20));
    aiStack_14[0] = aiStack_14[0] >> 0x10;
    aiStack_14[1] = 0;
    aiStack_14[2] = FUN_0068e970(*(undefined4 *)(unaff_ESI + 0x28));
    aiStack_14[2] = aiStack_14[2] >> 0x10;
    iStack_8 = FUN_0068e970(*(undefined4 *)(unaff_ESI + 0x2c));
    iStack_8 = iStack_8 >> 0x10;
    (**(code **)(*piVar1 + 8))(piVar1[1],param_1,0,aiStack_14);
    *(int *)(unaff_ESI + 0x20) = aiStack_14[0] << 0x10;
    *(int *)(unaff_ESI + 0x28) = aiStack_14[2] << 0x10;
    *(int *)(unaff_ESI + 0x2c) = iStack_8 << 0x10;
  }
LAB_006be105:
  __security_check_cookie(local_4 ^ (uint)aiStack_14);
  return;
}


/* FUN_006be190 @ 006be190  kind=gamemisc  attributed-by=none  size=254 */

void FUN_006be190(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  int unaff_ESI;
  undefined1 local_5e0 [40];
  int iStack_5b8;
  undefined1 uStack_59c;
  undefined1 uStack_59a;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)local_5e0;
  iVar1 = *(int *)(unaff_ESI + 0x1e8);
  *unaff_EBX = 0;
  iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0xc))(local_5e0);
  if (iVar2 == 0) {
    uStack_88 = *(undefined4 *)(unaff_ESI + 0x198);
    uStack_84 = *(undefined4 *)(unaff_ESI + 0x19c);
    uStack_59c = 0;
    uStack_8c = *(undefined4 *)(unaff_ESI + 0x194);
    uStack_10 = *(undefined4 *)(unaff_ESI + 0x224);
    uStack_c = *(undefined4 *)(unaff_ESI + 0x220);
    iVar2 = 0;
    *unaff_EBX = 0;
    uStack_59a = 1;
    if (0 < *(int *)(unaff_ESI + 0x1a0)) {
      do {
        FUN_006be140(local_5e0,iVar2);
        if ((iVar2 == 0) || (*unaff_EBX < iStack_5b8)) {
          *unaff_EBX = iStack_5b8;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(unaff_ESI + 0x1a0));
    }
    (**(code **)(*(int *)(iVar1 + 0xc) + 4))(local_5e0);
  }
  __security_check_cookie(local_4 ^ (uint)local_5e0);
  return;
}


/* FUN_006be910 @ 006be910  kind=gamemisc  attributed-by=none  size=119 */

int FUN_006be910(char *param_1,uint param_2,int param_3)

{
  char cVar1;
  char *_Str1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  if (0xffff < param_2) {
    return 0;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_3 + 0x11c)) {
    do {
      _Str1 = *(char **)(*(int *)(param_3 + 0x120) + iVar4 * 4);
      if ((_Str1 != (char *)0x0) && (*_Str1 == *param_1)) {
        pcVar2 = _Str1;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        if ((int)pcVar2 - (int)(_Str1 + 1) == param_2) {
          iVar3 = strncmp(_Str1,param_1,param_2);
          if (iVar3 == 0) {
            return iVar4;
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_3 + 0x11c));
  }
  return 0;
}


/* FUN_006be990 @ 006be990  kind=gamemisc  attributed-by=none  size=491 */

int FUN_006be990(int param_1)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  ushort *puVar6;
  int iVar7;
  int unaff_EBX;
  ushort *puVar8;
  int local_10;
  ushort *local_c;
  undefined4 local_8;
  int local_4;
  
  local_8 = *(undefined4 *)(in_ECX + 0x1c);
  puVar8 = *(ushort **)(in_ECX + 0x20);
  puVar1 = *(ushort **)(in_ECX + 0x24);
  local_10 = 0;
  if ((ushort *)((int)puVar8 + 0x65U) <= puVar1) {
    puVar6 = (ushort *)((int)puVar8 + *(ushort *)((int)puVar8 + 99) + 0x75);
    if (puVar1 < puVar6 + 9) {
      return 0;
    }
    if (*puVar6 < 0x12) {
      return 0;
    }
    puVar6 = (ushort *)(*(int *)(puVar6 + 7) + (int)puVar8);
    if (puVar6 == puVar8) {
      return 0;
    }
    puVar8 = puVar6 + 1;
    if (puVar8 <= puVar1) {
      uVar2 = (uint)*puVar6;
      *(uint *)(param_1 + 0x28) = uVar2;
      if (puVar8 + uVar2 * 2 <= puVar1) {
        if (uVar2 == 0) {
          return 0;
        }
        puVar3 = (undefined4 *)FUN_00693a60(local_8,0x10,0,uVar2,0,&local_10);
        *(undefined4 **)(param_1 + 0x24) = puVar3;
        if (local_10 == 0) {
          local_4 = *(int *)(unaff_EBX + 0x5c);
          local_c = puVar8 + *(int *)(param_1 + 0x28) * 2;
          iVar7 = 0;
          if (0 < *(int *)(unaff_EBX + 0x24)) {
            piVar4 = *(int **)(unaff_EBX + 0x28);
            do {
              if (*(short *)(*piVar4 + 8) == 7) {
                local_10 = FUN_00691a90();
                if (local_10 != 0) goto LAB_006beb57;
                break;
              }
              iVar7 = iVar7 + 1;
              piVar4 = piVar4 + 1;
            } while (iVar7 < *(int *)(unaff_EBX + 0x24));
          }
          if (puVar8 < local_c) {
            do {
              uVar5 = FUN_0068fb90();
              *puVar3 = uVar5;
              uVar5 = FUN_0068fb90();
              puVar3[1] = uVar5;
              puVar3[2] = (int)(short)((short)*(char *)((int)puVar8 + 3) << 8) |
                          (uint)(byte)puVar8[1];
              puVar3[3] = 0;
              puVar8 = puVar8 + 2;
              puVar3 = puVar3 + 4;
            } while (puVar8 < local_c);
          }
          if (local_4 != 0) {
            local_10 = FUN_00691a90();
          }
          if ((local_10 == 0) &&
             (qsort(*(void **)(param_1 + 0x24),*(size_t *)(param_1 + 0x28),0x10,FUN_006a9ed0),
             local_10 == 0)) {
            return 0;
          }
        }
        goto LAB_006beb57;
      }
    }
  }
  local_10 = 2;
LAB_006beb57:
  FUN_00691290(local_8,*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return local_10;
}


/* FUN_006beb80 @ 006beb80  kind=gamemisc  attributed-by=none  size=517 */

int FUN_006beb80(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_14 [8];
  int iStack_c;
  code *pcStack_8;
  int iStack_4;
  
  iVar3 = param_2;
  puVar1 = (undefined4 *)(param_2 + 0x1c);
  param_2 = 2;
  iVar4 = FUN_00692230(*puVar1,0x2c,&param_2);
  if ((param_2 != 0) || (param_2 = FUN_00691f30(iVar3,*(undefined4 *)(iVar3 + 4)), param_2 != 0))
  goto LAB_006bed6c;
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(param_1 + 0x1d0);
  iVar2 = *(int *)(param_1 + 0x1e8);
  if ((iVar2 != 0) &&
     ((*(undefined4 **)(iVar2 + 0x18) != (undefined4 *)0x0 &&
      (param_2 = (*(code *)**(undefined4 **)(iVar2 + 0x18))
                           (local_14,*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x20),
                            *(undefined4 *)(iVar3 + 0x24)), param_2 == 0)))) {
    pcStack_8 = FUN_006be910;
    iStack_c = iVar4;
    iStack_4 = param_1 + 0x84;
    param_2 = (**(code **)(*(int *)(iVar2 + 0x18) + 8))(local_14);
    (**(code **)(*(int *)(iVar2 + 0x18) + 4))(local_14);
  }
  if (param_2 == 2) {
    if (((6 < *(uint *)(iVar3 + 4)) && (*(byte *)(*(int *)(iVar3 + 0x20) + 1) < 4)) &&
       (*(int *)(*(int *)(iVar3 + 0x20) + 2) == *(int *)(iVar3 + 4))) {
      param_2 = FUN_006be990(iVar4);
      goto LAB_006becd6;
    }
  }
  else {
LAB_006becd6:
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(iVar4 + 0xc);
      *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(iVar4 + 0x10);
      *(int *)(param_1 + 0x34) = (int)*(short *)(iVar4 + 6);
      *(int *)(param_1 + 0x38) = (int)*(short *)(iVar4 + 10);
      *(int *)(param_1 + 0x3c) = *(int *)(iVar4 + 0xc) + 0xffff >> 0x10;
      *(int *)(param_1 + 0x40) = *(int *)(iVar4 + 0x10) + 0xffff >> 0x10;
      *(short *)(param_1 + 0x46) = (short)((uint)(*(int *)(iVar4 + 0x14) + 0x8000) >> 0x10);
      *(short *)(param_1 + 0x48) = (short)((uint)(*(int *)(iVar4 + 0x18) + 0x8000) >> 0x10);
      if (*(int *)(iVar4 + 0x28) != 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40;
        *(int *)(param_1 + 0x1ec) = iVar4;
        iVar4 = 0;
      }
    }
  }
  FUN_00691fe0(iVar3);
LAB_006bed6c:
  if (iVar4 != 0) {
    FUN_006be8e0();
  }
  return param_2;
}


/* FUN_006bed90 @ 006bed90  kind=gamemisc  attributed-by=none  size=113 */

void FUN_006bed90(uint param_1,undefined4 *param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_1 = in_EAX << 0x10 | param_1;
  uVar4 = *(uint *)(in_ECX + 0x24);
  uVar5 = (uVar4 - 0x10) + *(int *)(in_ECX + 0x28) * 0x10;
  if (uVar4 <= uVar5) {
    do {
      iVar1 = (((int)(uVar5 - uVar4) >> 4) - ((int)(uVar5 - uVar4) >> 0x1f) >> 1) * 0x10;
      iVar2 = iVar1 + uVar4;
      uVar3 = *(int *)(iVar1 + uVar4) << 0x10 | *(uint *)(iVar2 + 4);
      if (uVar3 == param_1) {
        *param_2 = *(undefined4 *)(iVar2 + 8);
        param_2[1] = *(undefined4 *)(iVar2 + 0xc);
        return;
      }
      if (uVar3 < param_1) {
        uVar4 = iVar2 + 0x10;
      }
      else {
        uVar5 = iVar2 - 0x10;
      }
    } while (uVar4 <= uVar5);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}


/* FUN_006bee10 @ 006bee10  kind=gamemisc  attributed-by=none  size=149 */

undefined4 FUN_006bee10(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x1ec);
  if (iVar1 != 0) {
    local_4 = 0;
    if (0 < *(int *)(iVar1 + 0x20)) {
      param_1 = 0;
      do {
        piVar3 = (int *)(*(int *)(iVar1 + 0x1c) + param_1);
        if (*piVar3 == param_3) {
          if (param_2 < piVar3[1]) {
            *param_4 = piVar3[2];
          }
          else {
            if (piVar3[3] < param_2) {
              iVar2 = piVar3[4];
            }
            else {
              iVar2 = FUN_0068ea60(param_2 - piVar3[1],piVar3[4] - piVar3[2],piVar3[3] - piVar3[1]);
              iVar2 = iVar2 + piVar3[2];
            }
            *param_4 = iVar2;
          }
        }
        param_1 = param_1 + 0x14;
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(iVar1 + 0x20));
    }
    return 0;
  }
  return 6;
}


/* FUN_006beeb0 @ 006beeb0  kind=gamemisc  attributed-by=none  size=401 */

void FUN_006beeb0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 100);
    if (*(int *)(param_1 + 0x224) != 0) {
      FUN_00691290(uVar1,*(int *)(param_1 + 0x224));
      *(undefined4 *)(param_1 + 0x224) = 0;
      *(undefined4 *)(param_1 + 0x220) = 0;
    }
    FUN_006bbf90(param_1);
    *(undefined4 *)(param_1 + 0x214) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x84) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x8c) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x1ac));
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x1a4));
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x198));
    *(undefined4 *)(param_1 + 0x198) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x19c));
    *(undefined4 *)(param_1 + 0x19c) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x188) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x18c));
    *(undefined4 *)(param_1 + 0x18c) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 400));
    *(undefined4 *)(param_1 + 400) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x180));
    *(undefined4 *)(param_1 + 0x180) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x184));
    *(undefined4 *)(param_1 + 0x184) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x16c));
    *(undefined4 *)(param_1 + 0x16c) = 0;
    if (*(int *)(param_1 + 0x1ec) != 0) {
      FUN_006be8e0();
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


/* FUN_006bf050 @ 006bf050  kind=gamemisc  attributed-by=none  size=789 */

int FUN_006bf050(undefined4 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  int *piVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined2 extraout_var;
  char *pcVar14;
  byte *pbVar15;
  char *pcVar16;
  bool bVar17;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *param_2 = 1;
  iVar8 = FUN_0068fe10(param_2[0x18],"postscript-cmaps");
  param_2[0x79] = iVar8;
  iVar9 = FUN_0068fdf0(*(undefined4 *)(param_2[0x18] + 4),"psaux");
  param_2[0x7a] = iVar9;
  uVar10 = FUN_0068fdf0(*(undefined4 *)(param_2[0x18] + 4),"pshinter");
  param_2[0x8a] = uVar10;
  iVar11 = FUN_006bda20(param_2);
  if (iVar11 != 0) {
    return iVar11;
  }
  if (param_3 < 0) {
    return 0;
  }
  if (0 < param_3) {
    return 6;
  }
  param_2[4] = param_2[0x68];
  param_2[1] = 0;
  param_2[2] = 0xa11;
  if (*(char *)(param_2 + 0x27) != '\0') {
    param_2[2] = 0xa15;
  }
  if (param_2[0x85] != 0) {
    param_2[2] = param_2[2] | 0x100;
  }
  pcVar16 = (char *)param_2[0x24];
  param_2[5] = pcVar16;
  param_2[6] = 0;
  if (pcVar16 == (char *)0x0) {
    if (param_2[0x5b] != 0) {
      param_2[5] = param_2[0x5b];
    }
  }
  else {
    pcVar14 = (char *)param_2[0x23];
    if (pcVar14 != (char *)0x0) {
      cVar1 = *pcVar14;
      while (cVar1 != '\0') {
        cVar2 = *pcVar16;
        if (cVar1 == cVar2) {
          pcVar16 = pcVar16 + 1;
LAB_006bf13e:
          pcVar14 = pcVar14 + 1;
        }
        else {
          if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_006bf13e;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if (*pcVar16 == '\0') {
              param_2[6] = pcVar14;
            }
            goto LAB_006bf176;
          }
          pcVar16 = pcVar16 + 1;
        }
        cVar1 = *pcVar14;
      }
      param_2[6] = "Regular";
    }
  }
LAB_006bf176:
  if (param_2[6] == 0) {
    if (param_2[0x25] == 0) {
      param_2[6] = "Regular";
    }
    else {
      param_2[6] = param_2[0x25];
    }
  }
  param_2[3] = 0;
  if (param_2[0x26] != 0) {
    param_2[3] = 1;
  }
  pbVar13 = (byte *)param_2[0x25];
  if (pbVar13 != (byte *)0x0) {
    pbVar15 = &DAT_00723468;
    pbVar12 = pbVar13;
    do {
      bVar3 = *pbVar12;
      bVar17 = bVar3 < *pbVar15;
      if (bVar3 != *pbVar15) {
LAB_006bf1d0:
        iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_006bf1d5;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar12[1];
      bVar17 = bVar3 < pbVar15[1];
      if (bVar3 != pbVar15[1]) goto LAB_006bf1d0;
      pbVar12 = pbVar12 + 2;
      pbVar15 = pbVar15 + 2;
    } while (bVar3 != 0);
    iVar11 = 0;
LAB_006bf1d5:
    if (iVar11 != 0) {
      pcVar16 = "Black";
      do {
        bVar3 = *pbVar13;
        bVar17 = bVar3 < (byte)*pcVar16;
        if (bVar3 != *pcVar16) {
LAB_006bf200:
          iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_006bf205;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar13[1];
        bVar17 = bVar3 < (byte)pcVar16[1];
        if (bVar3 != pcVar16[1]) goto LAB_006bf200;
        pbVar13 = pbVar13 + 2;
        pcVar16 = pcVar16 + 2;
      } while (bVar3 != 0);
      iVar11 = 0;
LAB_006bf205:
      if (iVar11 != 0) goto LAB_006bf20d;
    }
    param_2[3] = param_2[3] | 2;
  }
LAB_006bf20d:
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0xd] = (int)*(short *)((int)param_2 + 0x1ce);
  param_2[0xe] = (int)*(short *)((int)param_2 + 0x1d2);
  param_2[0xf] = param_2[0x75] + 0xffff >> 0x10;
  param_2[0x10] = param_2[0x76] + 0xffff >> 0x10;
  if (*(short *)(param_2 + 0x11) == 0) {
    *(undefined2 *)(param_2 + 0x11) = 1000;
  }
  sVar6 = (short)((uint)(param_2[0x76] + 0xffff) >> 0x10);
  sVar4 = *(short *)(param_2 + 0xe);
  sVar7 = (short)(((uint)*(ushort *)(param_2 + 0x11) * 0xc) / 10);
  *(short *)((int)param_2 + 0x4a) = sVar7;
  *(short *)((int)param_2 + 0x46) = sVar6;
  *(short *)(param_2 + 0x12) = sVar4;
  if ((int)sVar7 < (int)sVar6 - (int)sVar4) {
    *(short *)((int)param_2 + 0x4a) = sVar6 - sVar4;
  }
  *(undefined2 *)(param_2 + 0x13) = *(undefined2 *)(param_2 + 0xf);
  iVar11 = FUN_006be190();
  if (iVar11 == 0) {
    FUN_0068e970(param_2);
    *(undefined2 *)(param_2 + 0x13) = extraout_var;
  }
  iVar11 = 0;
  *(undefined2 *)((int)param_2 + 0x4e) = *(undefined2 *)((int)param_2 + 0x4a);
  *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)((int)param_2 + 0x9e);
  *(undefined2 *)((int)param_2 + 0x52) = *(undefined2 *)(param_2 + 0x28);
  if ((iVar8 != 0) && (iVar9 != 0)) {
    piVar5 = *(int **)(iVar9 + 0x14);
    local_c = param_2;
    local_4 = 0x10003;
    local_8 = 0x756e6963;
    iVar11 = FUN_00693ed0(piVar5[3],0,&local_c,0);
    if ((iVar11 == 0) || (iVar11 == 0xa3)) {
      iVar11 = 0;
      switch(param_2[0x5c]) {
      case 1:
        local_8 = 0x41444243;
        local_4 = 0x20007;
        iVar8 = piVar5[2];
        break;
      case 2:
        local_8 = 0x41444f42;
        local_4 = 7;
        iVar8 = *piVar5;
        break;
      case 3:
        local_8 = 0x6c617431;
        local_4 = 0x30007;
        iVar8 = piVar5[3];
        break;
      case 4:
        local_8 = 0x41444245;
        local_4 = 0x10007;
        iVar8 = piVar5[1];
        break;
      default:
        goto LAB_006bf3ca;
      }
      if (iVar8 != 0) {
        iVar11 = FUN_00693ed0(iVar8,0,&local_c,0);
      }
    }
  }
LAB_006bf3ca:
  return iVar11;
}


/* FUN_006bf430 @ 006bf430  kind=gamemisc  attributed-by=none  size=80 */

int FUN_006bf430(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0068f110(&PTR_s_xf86_driver_name_00735cdc,param_2);
  if (iVar1 == 0) {
    if (param_1 != 0) {
      piVar2 = (int *)FUN_0068fd80(*(undefined4 *)(param_1 + 4),&DAT_007235ec);
      if ((piVar2 != (int *)0x0) && (*(int *)(*piVar2 + 0x14) != 0)) {
        iVar1 = (**(code **)(*(int *)(*piVar2 + 0x14) + 0x10))(param_1,param_2);
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


/* FUN_006bf480 @ 006bf480  kind=gamemisc  attributed-by=none  size=290 */

int FUN_006bf480(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  sbyte sVar5;
  uint in_ECX;
  int iVar6;
  uint uVar7;
  uint uStack_4;
  
  iVar1 = (**(code **)(in_EAX + 0x1fc))();
  if (iVar1 == 0x8e) {
    *(undefined4 *)(in_EAX + 0x2c0) = 0;
  }
  else if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (**(code **)(in_EAX + 0x1fc))();
  if (iVar1 == 0) {
    if (*(short *)(in_EAX + 0xd2) == 0) {
      sVar5 = 1;
      if (0x1ffff < in_ECX) {
        return 8;
      }
      uVar2 = in_ECX >> 1;
    }
    else {
      sVar5 = 2;
      if (0x3ffff < in_ECX) {
        return 8;
      }
      uVar2 = in_ECX >> 2;
    }
    *(uint *)(in_EAX + 0x2dc) = uVar2;
    uStack_4 = in_ECX;
    if (uVar2 < *(uint *)(in_EAX + 0x10)) {
      uVar2 = *(uint *)(in_EAX + 0x9c);
      uVar3 = *(uint *)(in_EAX + 0x10) << sVar5;
      uVar7 = (uint)*(ushort *)(in_EAX + 0x98) * 0x10 + uVar2;
      iVar4 = FUN_00690930(param_1);
      iVar1 = 0x7fffffff;
      for (; uVar2 < uVar7; uVar2 = uVar2 + 0x10) {
        iVar6 = *(int *)(uVar2 + 8) - iVar4;
        if ((0 < iVar6) && (iVar6 < iVar1)) {
          iVar1 = iVar6;
        }
      }
      uStack_4 = in_ECX;
      if ((int)uVar3 <= iVar1) {
        *(undefined4 *)(in_EAX + 0x2dc) = *(undefined4 *)(in_EAX + 0x10);
        uStack_4 = uVar3;
      }
    }
    iVar1 = FUN_00693a30(param_1,uStack_4,in_EAX + 0x2e0);
    return iVar1;
  }
  return 0x90;
}


/* FUN_006bf5b0 @ 006bf5b0  kind=gamemisc  attributed-by=none  size=198 */

void FUN_006bf5b0(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x2dc);
  uVar4 = 0;
  uVar5 = 0;
  if (param_2 < uVar2) {
    iVar3 = *(int *)(param_1 + 0x2e0);
    if (*(short *)(param_1 + 0xd2) == 0) {
      uVar1 = iVar3 + 4 + param_2 * 2;
      uVar4 = (uint)CONCAT11(*(undefined1 *)(iVar3 + param_2 * 2),
                             *(undefined1 *)(iVar3 + 1 + param_2 * 2));
      uVar5 = uVar4;
      if (uVar1 <= iVar3 + uVar2 * 2) {
        uVar5 = (uint)CONCAT11(*(undefined1 *)(uVar1 - 2),*(undefined1 *)(uVar1 - 1));
      }
      uVar4 = uVar4 * 2;
      uVar5 = uVar5 * 2;
    }
    else {
      uVar1 = iVar3 + 8 + param_2 * 4;
      uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + param_2 * 4),
                                         *(undefined1 *)(iVar3 + 1 + param_2 * 4)),
                                *(undefined1 *)(iVar3 + 2 + param_2 * 4)),
                       *(undefined1 *)(iVar3 + 3 + param_2 * 4));
      uVar5 = uVar4;
      if (iVar3 + uVar2 * 4 < uVar1) goto LAB_006bf66a;
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar1 - 4),*(undefined1 *)(uVar1 - 3)),
                                *(undefined1 *)(uVar1 - 2)),*(undefined1 *)(uVar1 - 1));
    }
    if (uVar5 < uVar4) {
      uVar5 = *(uint *)(param_1 + 0x2c0);
    }
  }
LAB_006bf66a:
  *param_3 = uVar5 - uVar4;
  return;
}


/* FUN_006bf740 @ 006bf740  kind=gamemisc  attributed-by=none  size=388 */

int FUN_006bf740(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint local_c;
  undefined4 local_8;
  undefined1 *puStack_4;
  
  iVar2 = param_2;
  iVar1 = param_1;
  local_8 = *(undefined4 *)(param_2 + 0x1c);
  param_1 = (**(code **)(param_1 + 0x1fc))(param_1,0x68646d78,param_2,&local_c);
  if ((param_1 != 0) || (local_c < 8)) {
    return 0;
  }
  param_1 = FUN_00693a30(iVar2,local_c,(undefined4 *)(iVar1 + 0x2e4));
  if (param_1 == 0) {
    puVar6 = *(undefined1 **)(iVar1 + 0x2e4);
    puStack_4 = puVar6 + local_c;
    uVar5 = (uint)CONCAT11(puVar6[2],puVar6[3]);
    uVar7 = CONCAT31(CONCAT21(CONCAT11(puVar6[4],puVar6[5]),puVar6[6]),puVar6[7]);
    if (0xfffeffff < uVar7) {
      uVar7 = uVar7 & 0xffff;
    }
    if (((CONCAT11(*puVar6,puVar6[1]) == 0) && (uVar5 < 0x100)) && (uVar7 < 0x10002)) {
      uVar3 = FUN_00693a60(local_8,1,0,uVar5,0,&param_1);
      *(undefined4 *)(iVar1 + 0x2f4) = uVar3;
      if (param_1 == 0) {
        uVar4 = 0;
        puVar6 = puVar6 + 8;
        if (uVar5 != 0) {
          do {
            if (puStack_4 < puVar6 + uVar7) break;
            *(undefined1 *)(uVar4 + *(int *)(iVar1 + 0x2f4)) = *puVar6;
            uVar4 = uVar4 + 1;
            puVar6 = puVar6 + uVar7;
          } while (uVar4 < uVar5);
        }
        *(uint *)(iVar1 + 0x2ec) = uVar4;
        *(uint *)(iVar1 + 0x2f0) = uVar7;
        *(uint *)(iVar1 + 0x2e8) = local_c;
        return 0;
      }
    }
    else {
      param_1 = 3;
    }
    FUN_00691ee0(param_2,iVar1 + 0x2e4);
    *(undefined4 *)(iVar1 + 0x2e8) = 0;
  }
  return param_1;
}


/* FUN_006bf910 @ 006bf910  kind=gamemisc  attributed-by=none  size=81 */

int FUN_006bf910(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int in_EDX;
  
  iVar1 = 0;
  uVar2 = 0;
  if (*(uint *)(in_EDX + 0x2ec) != 0) {
    while (*(byte *)(*(int *)(in_EDX + 0x2f4) + uVar2) != param_1) {
      uVar2 = uVar2 + 1;
      if (*(uint *)(in_EDX + 0x2ec) <= uVar2) {
        return iVar1;
      }
    }
    if (param_2 + 2U < *(uint *)(in_EDX + 0x2f0)) {
      iVar1 = *(int *)(in_EDX + 0x2e4) + 8 + uVar2 * *(uint *)(in_EDX + 0x2f0) + param_2 + 2U;
    }
  }
  return iVar1;
}


/* FUN_006bfa80 @ 006bfa80  kind=gamemisc  attributed-by=none  size=155 */

void FUN_006bfa80(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  int local_14 [3];
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)local_14;
  piVar1 = *(int **)(*(int *)(*unaff_ESI + 0x80) + 0x34);
  if ((piVar1 != (int *)0x0) && (*(int *)(*piVar1 + 8) != 0)) {
    local_14[2] = unaff_ESI[0xe];
    local_14[0] = unaff_ESI[0xd];
    local_14[1] = 0;
    local_8 = 0;
    piVar1 = *(int **)(*(int *)(*unaff_ESI + 0x80) + 0x34);
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1[1],param_1,0,local_14);
    if (iVar2 == 0) {
      unaff_ESI[0xd] = (int)(short)local_14[0];
      unaff_ESI[0xe] = local_14[2] & 0xffffU;
      unaff_ESI[0x2c] = 0;
      unaff_ESI[0x2d] = 0;
      if ((char)unaff_ESI[0x10] == '\0') {
        *(undefined1 *)(unaff_ESI + 0x10) = 1;
        unaff_ESI[0xf] = local_14[2] & 0xffffU;
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}


/* FUN_006bfb20 @ 006bfb20  kind=gamemisc  attributed-by=none  size=44 */

void FUN_006bfb20(void)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  uint in_EDX;
  int unaff_ESI;
  int unaff_EDI;
  
  if ((unaff_ESI != 0) && (uVar1 = 0, in_EDX != 0)) {
    do {
      piVar2 = (int *)(in_ECX + uVar1 * 8);
      *piVar2 = *piVar2 + unaff_ESI;
      uVar1 = uVar1 + 1;
    } while (uVar1 < in_EDX);
  }
  if ((unaff_EDI != 0) && (in_EDX != 0)) {
    piVar2 = (int *)(in_ECX + 4);
    do {
      *piVar2 = *piVar2 + unaff_EDI;
      piVar2 = piVar2 + 2;
      in_EDX = in_EDX - 1;
    } while (in_EDX != 0);
  }
  return;
}


