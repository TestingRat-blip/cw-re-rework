// Unsorted_002 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_002.h"

/* FUN_004ccaa0 @ 004ccaa0  kind=gamemisc  attributed-by=none  size=330 */

undefined4 FUN_004ccaa0(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0042f4a0(param_1 + 0xd20);
  if (cVar1 != '\0') {
    cVar1 = FUN_0042f4a0(param_1 + 0xaf0);
    if (cVar1 != '\0') {
      cVar1 = FUN_0042f4a0(param_1 + 0xc08);
      if (cVar1 != '\0') {
        cVar1 = FUN_0042f4a0(param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_0042f4a0(param_1 + 0x118);
          if (cVar1 != '\0') {
            cVar1 = FUN_0042f4a0(param_1 + 0x230);
            if (cVar1 != '\0') {
              cVar1 = FUN_0042f4a0(param_1 + 0x348);
              if (cVar1 != '\0') {
                cVar1 = FUN_0042f4a0(param_1 + 0x460);
                if (cVar1 != '\0') {
                  cVar1 = FUN_0042f4a0(param_1 + 0x578);
                  if (cVar1 != '\0') {
                    cVar1 = FUN_0042f4a0(param_1 + 0x690);
                    if (cVar1 != '\0') {
                      cVar1 = FUN_0042f4a0(param_1 + 0x7a8);
                      if (cVar1 != '\0') {
                        cVar1 = FUN_0042f4a0(param_1 + 0x8c0);
                        if (cVar1 != '\0') {
                          cVar1 = FUN_0042f4a0(param_1 + 0x9d8);
                          if (cVar1 != '\0') {
                            return 0;
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
  return 1;
}


/* FUN_004ccc30 @ 004ccc30  kind=gamemisc  attributed-by=none  size=186 */

undefined1
FUN_004ccc30(int *param_1,uint *param_2,uint *param_3,byte *param_4,byte *param_5,char param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  bool bVar9;
  byte *local_c;
  undefined4 local_8;
  
  uVar8 = 0;
  pbVar5 = param_5;
  if (param_6 == '\0') {
    do {
      bVar1 = *param_4;
      bVar9 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_004ccc70:
        uVar3 = -(uint)bVar9 | 1;
        goto LAB_004ccc75;
      }
      if (bVar1 == 0) break;
      bVar1 = param_4[1];
      bVar9 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_004ccc70;
      param_4 = param_4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_004ccc75:
    if (uVar3 == 0) goto LAB_004ccce2;
  }
  local_c = param_5;
  iVar2 = *param_1;
  local_8 = 0x10;
  iVar4 = FUN_004cb5a0(iVar2,*(undefined4 *)(iVar2 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar2 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar3 = *param_3;
  uVar6 = 1 << (uVar3 & 0x1f);
  uVar8 = 1;
  uVar7 = 0;
  if (0x1f < uVar3) {
    uVar7 = uVar6;
  }
  uVar6 = uVar6 ^ uVar7;
  if (0x3f < uVar3) {
    uVar7 = uVar6;
  }
  *param_2 = *param_2 | uVar6;
  param_2[1] = param_2[1] | uVar7;
LAB_004ccce2:
  *param_3 = *param_3 + 1;
  return uVar8;
}


/* FUN_004cccf0 @ 004cccf0  kind=gamemisc  attributed-by=none  size=176 */

undefined4
FUN_004cccf0(int *param_1,uint *param_2,uint *param_3,int param_4,int *param_5,char param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_6 == '\0') {
    iVar5 = 0;
    piVar2 = param_5;
    while (*(int *)((param_4 - (int)param_5) + (int)piVar2) == *piVar2) {
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 1;
      if (10 < iVar5) {
        *param_3 = *param_3 + 1;
        return 0;
      }
    }
  }
  local_10 = param_5;
  iVar5 = *param_1;
  local_c = 0x2c;
  iVar3 = FUN_004cb5a0(iVar5,*(undefined4 *)(iVar5 + 4),&local_10);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar5 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar1) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar1) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return 1;
}


/* FUN_004ccda0 @ 004ccda0  kind=gamemisc  attributed-by=none  size=125 */

undefined4 FUN_004ccda0(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0x10) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0x10;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    param_4[1] = *(undefined8 *)(iVar3 + 8 + iVar2);
    param_1[3] = param_1[3] + 0x10;
    *param_3 = *param_3 + 1;
    return 0x10;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cce20 @ 004cce20  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cce20(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x10;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cce7b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x10;
  }
LAB_004cce7b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004ccea0 @ 004ccea0  kind=gamemisc  attributed-by=none  size=119 */

undefined4 FUN_004ccea0(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0x2c) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0x2c;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0x2c);
    param_1[3] = param_1[3] + 0x2c;
    *param_3 = *param_3 + 1;
    return 0x2c;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004ccf20 @ 004ccf20  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004ccf20(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x2c;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004ccf7b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x2c;
  }
LAB_004ccf7b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004ccfa0 @ 004ccfa0  kind=gamemisc  attributed-by=none  size=1074 */

int FUN_004ccfa0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 local_c;
  
  iVar3 = param_2;
  piVar2 = param_1;
  iVar4 = param_1[1] - *param_1;
  iVar1 = param_1[3] + 8;
  local_c = 0;
  if (iVar4 < iVar1) {
    param_1[3] = iVar4;
  }
  else {
    local_c = *(undefined8 *)(*param_1 + param_1[3]);
    param_1[3] = iVar1;
  }
  param_1 = (int *)0x0;
  FUN_004cc5c0(piVar2,&local_c,&param_1,param_2);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x18);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x24);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x30);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x3c);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x48);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x4c);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x50);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x54);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x58);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x5c);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x60);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 100);
  FUN_004cc1c0(piVar2,&local_c,&param_1,iVar3 + 0x68);
  FUN_004cbed0(piVar2,&local_c,&param_1,iVar3 + 0x114);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x118);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x11c);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x120);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x124);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x128);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 300);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x130);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x131);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x134);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x138);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x144);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x150);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x15c);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x160);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x164);
  FUN_004cc0b0(piVar2,&local_c,&param_1,iVar3 + 0x168);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x17c);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x17d);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x180);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x184);
  FUN_004cc6d0(piVar2,&local_c,&param_1,iVar3 + 0x188);
  FUN_004cc6d0(piVar2,&local_c,&param_1,iVar3 + 400);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x198);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x19c);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x1a0);
  FUN_004cc5c0(piVar2,&local_c,&param_1,iVar3 + 0x1b0);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x1cc);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x1c8);
  FUN_004cc3c0(piVar2,&local_c,&param_1,iVar3 + 0x1d8);
  FUN_004cc2c0(piVar2,&local_c,&param_1,iVar3 + 0x2f0);
  FUN_004ccda0(piVar2,&local_c,&param_1,iVar3 + 0x1158);
  FUN_004ccea0(piVar2,&local_c,&param_1,iVar3 + 0x1128);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x1154);
  return piVar2[1] - *piVar2;
}


/* FUN_004cd3e0 @ 004cd3e0  kind=gamemisc  attributed-by=none  size=1725 */

int FUN_004cd3e0(SOCKET param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  char local_10 [8];
  char *local_8;
  
  local_8 = local_10;
  local_10[0] = '\0';
  local_10[1] = '\0';
  local_10[2] = '\0';
  local_10[3] = '\0';
  local_10[4] = '\0';
  local_10[5] = '\0';
  local_10[6] = '\0';
  local_10[7] = '\0';
  iVar49 = 8;
  do {
    iVar1 = recv(param_1,local_8,iVar49,0);
    if (iVar1 < 1) {
      if (iVar1 == -1) {
        return 0;
      }
      goto LAB_004cd427;
    }
    iVar49 = iVar49 - iVar1;
    local_8 = local_8 + iVar1;
  } while (0 < iVar49);
  iVar1 = 8;
LAB_004cd427:
  local_8 = (char *)0x0;
  iVar49 = FUN_004cc650(param_1,local_10,&local_8,param_2);
  if (iVar49 != -1) {
    iVar2 = FUN_004cc4c0(param_1,local_10,&local_8,param_2 + 0x18);
    if (iVar2 != -1) {
      iVar3 = FUN_004cc4c0(param_1,local_10,&local_8,param_2 + 0x24);
      if (iVar3 != -1) {
        iVar4 = FUN_004cc4c0(param_1,local_10,&local_8,param_2 + 0x30);
        if (iVar4 != -1) {
          iVar5 = FUN_004cc4c0(param_1,local_10,&local_8,param_2 + 0x3c);
          if (iVar5 != -1) {
            iVar6 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x48);
            if (iVar6 != -1) {
              iVar7 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x4c);
              if (iVar7 != -1) {
                iVar8 = FUN_004cbe50(param_1,local_10,&local_8,param_2 + 0x50);
                if (iVar8 != -1) {
                  iVar9 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x54);
                  if (iVar9 != -1) {
                    iVar10 = FUN_004cbe50(param_1,local_10,&local_8,param_2 + 0x58);
                    if (iVar10 != -1) {
                      iVar11 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x5c);
                      if (iVar11 != -1) {
                        iVar12 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x60);
                        if (iVar12 != -1) {
                          iVar13 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 100);
                          if (iVar13 != -1) {
                            iVar14 = FUN_004cc240(param_1,local_10,&local_8,param_2 + 0x68);
                            if (iVar14 != -1) {
                              iVar15 = FUN_004cbf40(param_1,local_10,&local_8,param_2 + 0x114);
                              if (iVar15 != -1) {
                                iVar16 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x118);
                                if (iVar16 != -1) {
                                  iVar17 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x11c);
                                  if (iVar17 != -1) {
                                    iVar18 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x120)
                                    ;
                                    if (iVar18 != -1) {
                                      iVar19 = FUN_004cc030(param_1,local_10,&local_8,
                                                            param_2 + 0x124);
                                      if (iVar19 != -1) {
                                        iVar20 = FUN_004cc030(param_1,local_10,&local_8,
                                                              param_2 + 0x128);
                                        if (iVar20 != -1) {
                                          iVar21 = FUN_004cc030(param_1,local_10,&local_8,
                                                                param_2 + 300);
                                          if (iVar21 != -1) {
                                            iVar22 = FUN_004cbe50(param_1,local_10,&local_8,
                                                                  param_2 + 0x130);
                                            if (iVar22 != -1) {
                                              iVar23 = FUN_004cbe50(param_1,local_10,&local_8,
                                                                    param_2 + 0x131);
                                              if (iVar23 != -1) {
                                                iVar24 = FUN_004cc030(param_1,local_10,&local_8,
                                                                      param_2 + 0x134);
                                                if (iVar24 != -1) {
                                                  iVar25 = FUN_004cc4c0(param_1,local_10,&local_8,
                                                                        param_2 + 0x138);
                                                  if (iVar25 != -1) {
                                                    iVar26 = FUN_004cc4c0(param_1,local_10,&local_8,
                                                                          param_2 + 0x144);
                                                    if (iVar26 != -1) {
                                                      iVar27 = FUN_004cc4c0(param_1,local_10,
                                                                            &local_8,param_2 + 0x150
                                                                           );
                                                      if (iVar27 != -1) {
                                                        iVar28 = FUN_004cc030(param_1,local_10,
                                                                              &local_8,param_2 + 
                                                  0x15c);
                                                  if (iVar28 != -1) {
                                                    iVar29 = FUN_004cc030(param_1,local_10,&local_8,
                                                                          param_2 + 0x160);
                                                    if (iVar29 != -1) {
                                                      iVar30 = FUN_004cc030(param_1,local_10,
                                                                            &local_8,param_2 + 0x164
                                                                           );
                                                      if (iVar30 != -1) {
                                                        iVar31 = FUN_004cc140(param_1,local_10,
                                                                              &local_8,param_2 + 
                                                  0x168);
                                                  if (iVar31 != -1) {
                                                    iVar32 = FUN_004cbe50(param_1,local_10,&local_8,
                                                                          param_2 + 0x17c);
                                                    if (iVar32 != -1) {
                                                      iVar33 = FUN_004cbe50(param_1,local_10,
                                                                            &local_8,param_2 + 0x17d
                                                                           );
                                                      if (iVar33 != -1) {
                                                        iVar34 = FUN_004cc030(param_1,local_10,
                                                                              &local_8,param_2 + 
                                                  0x180);
                                                  if (iVar34 != -1) {
                                                    iVar35 = FUN_004cc030(param_1,local_10,&local_8,
                                                                          param_2 + 0x184);
                                                    if (iVar35 != -1) {
                                                      iVar36 = FUN_004cc750(param_1,local_10,
                                                                            &local_8,param_2 + 0x188
                                                                           );
                                                      if (iVar36 != -1) {
                                                        iVar37 = FUN_004cc750(param_1,local_10,
                                                                              &local_8,param_2 + 400
                                                                             );
                                                        if (iVar37 != -1) {
                                                          iVar38 = FUN_004cbe50(param_1,local_10,
                                                                                &local_8,param_2 + 
                                                  0x198);
                                                  if (iVar38 != -1) {
                                                    iVar39 = FUN_004cc030(param_1,local_10,&local_8,
                                                                          param_2 + 0x19c);
                                                    if (iVar39 != -1) {
                                                      iVar40 = FUN_004cc4c0(param_1,local_10,
                                                                            &local_8,param_2 + 0x1a0
                                                                           );
                                                      if (iVar40 != -1) {
                                                        iVar41 = FUN_004cc650(param_1,local_10,
                                                                              &local_8,param_2 + 
                                                  0x1b0);
                                                  if (iVar41 != -1) {
                                                    iVar42 = FUN_004cc4c0(param_1,local_10,&local_8,
                                                                          param_2 + 0x1cc);
                                                    if (iVar42 != -1) {
                                                      iVar43 = FUN_004cbe50(param_1,local_10,
                                                                            &local_8,param_2 + 0x1c8
                                                                           );
                                                      if (iVar43 != -1) {
                                                        iVar44 = FUN_004cc440(param_1,local_10,
                                                                              &local_8,param_2 + 
                                                  0x1d8);
                                                  if (iVar44 != -1) {
                                                    iVar45 = FUN_004cc340(param_1,local_10,&local_8,
                                                                          param_2 + 0x2f0);
                                                    if (iVar45 != -1) {
                                                      iVar46 = FUN_004cce20(param_1,local_10,
                                                                            &local_8,param_2 + 
                                                  0x1158);
                                                  if (iVar46 != -1) {
                                                    iVar47 = FUN_004ccf20(param_1,local_10,&local_8,
                                                                          param_2 + 0x1128);
                                                    if (iVar47 != -1) {
                                                      iVar48 = FUN_004cc030(param_1,local_10,
                                                                            &local_8,param_2 + 
                                                  0x1154);
                                                  if (iVar48 != -1) {
                                                    return iVar48 + iVar1 + iVar49 + iVar2 + iVar3 +
                                                                    iVar4 + iVar5 + iVar6 + iVar7 +
                                                                    iVar8 + iVar9 + iVar10 + iVar11
                                                                    + iVar12 + iVar13 + iVar14 +
                                                                    iVar15 + iVar16 + iVar17 +
                                                                    iVar18 + iVar19 + iVar20 +
                                                                    iVar21 + iVar22 + iVar23 +
                                                                    iVar24 + iVar25 + iVar26 +
                                                                    iVar27 + iVar28 + iVar29 +
                                                                    iVar30 + iVar31 + iVar32 +
                                                                    iVar33 + iVar34 + iVar35 +
                                                                    iVar36 + iVar37 + iVar38 +
                                                                    iVar39 + iVar40 + iVar41 +
                                                                    iVar42 + iVar43 + iVar44 +
                                                                    iVar45 + iVar46 + iVar47;
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
  return 0;
}


/* FUN_004cdaa0 @ 004cdaa0  kind=gamemisc  attributed-by=none  size=1726 */

void FUN_004cdaa0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  size_t _Size;
  void *_Src;
  uint uVar1;
  int *piVar2;
  undefined8 local_24;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8568;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  local_1c = (int *)FUN_004ccbf0(0,0);
  local_8 = 0;
  local_24 = 0;
  local_14 = 0;
  FUN_004cbc80(&local_1c,&local_24,&local_14,param_2,param_3,param_4,uVar1);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x18,param_3 + 0x18,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x24,param_3 + 0x24,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x30,param_3 + 0x30,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x3c,param_3 + 0x3c,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x48,param_3 + 0x48,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x4c,param_3 + 0x4c,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x50,param_3 + 0x50,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x54,param_3 + 0x54,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x58,param_3 + 0x58,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x5c,param_3 + 0x5c,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x60,param_3 + 0x60,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 100,param_3 + 100,param_4);
  FUN_004cb930(&local_1c,&local_24,&local_14,param_2 + 0x68,param_3 + 0x68,param_4);
  FUN_004cb670(&local_1c,&local_24,&local_14,param_2 + 0x114,param_3 + 0x114,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x118,param_3 + 0x118,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x11c,param_3 + 0x11c,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x120,param_3 + 0x120,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x124,param_3 + 0x124,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x128,param_3 + 0x128,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 300,param_3 + 300,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x130,param_3 + 0x130,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x131,param_3 + 0x131,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x134,param_3 + 0x134,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x138,param_3 + 0x138,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x144,param_3 + 0x144,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x150,param_3 + 0x150,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x15c,param_3 + 0x15c,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x160,param_3 + 0x160,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x164,param_3 + 0x164,param_4);
  FUN_004cb850(&local_1c,&local_24,&local_14,param_2 + 0x168,param_3 + 0x168,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x17c,param_3 + 0x17c,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x17d,param_3 + 0x17d,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x180,param_3 + 0x180,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x184,param_3 + 0x184,param_4);
  FUN_004cbd40(&local_1c,&local_24,&local_14,param_2 + 0x188,param_3 + 0x188,param_4);
  FUN_004cbd40(&local_1c,&local_24,&local_14,param_2 + 400,param_3 + 400,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x198,param_3 + 0x198,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x19c,param_3 + 0x19c,param_4);
  FUN_004cbb10(&local_1c,&local_24,&local_14,param_2 + 0x1a0,param_3 + 0x1a0,param_4);
  FUN_004cbc80(&local_1c,&local_24,&local_14,param_2 + 0x1b0,param_3 + 0x1b0,param_4);
  FUN_004cbb10(&local_1c,&local_24,&local_14,param_2 + 0x1cc,param_3 + 0x1cc,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x1c8,param_3 + 0x1c8,param_4);
  FUN_004cba70(&local_1c,&local_24,&local_14,param_2 + 0x1d8,param_3 + 0x1d8,param_4);
  FUN_004cb9d0(&local_1c,&local_24,&local_14,param_2 + 0x2f0,param_3 + 0x2f0,param_4);
  FUN_004ccc30(&local_1c,&local_24,&local_14,param_2 + 0x1158,param_3 + 0x1158,param_4);
  FUN_004cccf0(&local_1c,&local_24,&local_14,param_2 + 0x1128,param_3 + 0x1128,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x1154,param_3 + 0x1154,param_4);
  FUN_005870c0((param_1[1] - *param_1) + 8);
  *(undefined8 *)(*param_1 + param_1[3]) = local_24;
  param_1[3] = param_1[3] + 8;
  piVar2 = (int *)*local_1c;
  if (piVar2 != local_1c) {
    do {
      _Size = piVar2[3];
      _Src = (void *)piVar2[2];
      FUN_005870c0((param_1[1] - *param_1) + _Size);
      memcpy((void *)(*param_1 + param_1[3]),_Src,_Size);
      param_1[3] = param_1[3] + _Size;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != local_1c);
  }
  piVar2 = (int *)*local_1c;
  *local_1c = (int)local_1c;
  local_1c[1] = (int)local_1c;
  if (piVar2 != local_1c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_1c);
}


/* FUN_004ce3f9 @ 004ce3f9  kind=gamemisc  attributed-by=none  size=102 */

void FUN_004ce3f9(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  int *unaff_ESI;
  uint unaff_EDI;
  
  cVar1 = *(char *)(unaff_EBP + -0x11);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar2 = *(int *)(*unaff_ESI + 4);
  *(undefined4 *)(iVar2 + 0x20 + (int)unaff_ESI) = 0;
  *(undefined4 *)(iVar2 + 0x24 + (int)unaff_ESI) = 0;
  if (cVar1 == '\0') {
    unaff_EDI = unaff_EDI | 2;
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*unaff_ESI + 4) + (int)unaff_ESI),
             unaff_EDI,false);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar3 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x28) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x28));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* FUN_004ce6e0 @ 004ce6e0  kind=gamemisc  attributed-by=none  size=2183 */

void FUN_004ce6e0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *in_ECX;
  byte *****pppppbVar6;
  char *pcVar7;
  bool bVar8;
  basic_istream<char,std::char_traits<char>_> local_e4 [3];
  int aiStack_d8 [25];
  basic_ios<char,std::char_traits<char>_> local_74 [6];
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8643;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_004031d0(local_e4,"options.cfg",1,0x40,1);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  iVar1 = *(int *)((int)aiStack_d8 +
                  (local_e4[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset);
  do {
    local_8._0_1_ = 0;
    if (iVar1 != 0) {
LAB_004cef4a:
      std::basic_ifstream<char,std::char_traits<char>_>::
      basic_ifstream<char,std::char_traits<char>_>
                ((basic_ifstream<char,std::char_traits<char>_> *)local_74);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_74);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    local_8._0_1_ = 1;
    FUN_004ce2a0(local_e4,local_2c,uVar3);
    uVar5 = local_1c;
    if (*(int *)((int)aiStack_d8 +
                (local_e4[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) != 0) {
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      goto LAB_004cef4a;
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 10;
    if (local_1c < 10) {
      uVar4 = local_1c;
    }
    if (uVar4 == 0) {
LAB_004ce806:
      if (local_1c < 10) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 10);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "fullscreen";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ce7cc;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ce800:
        uVar4 = 0;
      }
      else {
LAB_004ce7cc:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ce800;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ce806;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ce8a1:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "resolutionX";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ce867;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ce89b:
        uVar4 = 0;
      }
      else {
LAB_004ce867:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ce89b;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ce8a1;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 1);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ce940:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "resolutionY";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ce906;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ce93a:
        uVar4 = 0;
      }
      else {
LAB_004ce906:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ce93a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ce940;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 2);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xc;
    if (uVar5 < 0xc) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ce9e0:
      if (uVar5 < 0xc) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xc);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "antiAliasing";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ce9a6;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ce9da:
        uVar4 = 0;
      }
      else {
LAB_004ce9a6:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ce9da;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ce9e0;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 3);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xe;
    if (uVar5 < 0xe) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004cea80:
      if (uVar5 < 0xe) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xe);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "renderDistance";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004cea46;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cea7a:
        uVar4 = 0;
      }
      else {
LAB_004cea46:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cea7a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004cea80;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 4);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ceb20:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "soundVolume";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ceae6;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ceb1a:
        uVar4 = 0;
      }
      else {
LAB_004ceae6:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ceb1a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ceb20;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 5);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004cebc0:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "musicVolume";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ceb86;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cebba:
        uVar4 = 0;
      }
      else {
LAB_004ceb86:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cebba;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004cebc0;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 6);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004cec60:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "cameraSpeed";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004cec26;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cec5a:
        uVar4 = 0;
      }
      else {
LAB_004cec26:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cec5a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004cec60;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 7);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0x10;
    if (uVar5 < 0x10) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ced00:
      if (uVar5 < 0x10) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0x10);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "cameraSmoothness";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004cecc6;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cecfa:
        uVar4 = 0;
      }
      else {
LAB_004cecc6:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cecfa;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ced00;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 8);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 8;
    if (uVar5 < 8) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ceda0:
      if (uVar5 < 8) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 8);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "language";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ced66;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ced9a:
        uVar4 = 0;
      }
      else {
LAB_004ced66:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ced9a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ceda0;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 10);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 7;
    if (uVar5 < 7) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004cee40:
      if (uVar5 < 7) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 7);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "invertY";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004cee06;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cee3a:
        uVar4 = 0;
      }
      else {
LAB_004cee06:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cee3a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004cee40;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 9);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ceee0:
      if (uVar5 < 0xb) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar5 == 0;
    }
    else {
      pcVar7 = "minTimeStep";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ceea6;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ceeda:
        uVar4 = 0;
      }
      else {
LAB_004ceea6:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ceeda;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ceee0;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 0xb);
    }
    local_8._0_1_ = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    iVar1 = *(int *)((int)aiStack_d8 +
                    (local_e4[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset);
  } while( true );
}


/* FUN_004cef80 @ 004cef80  kind=gamemisc  attributed-by=none  size=663 */

void FUN_004cef80(void)

{
  uint uVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  int *in_ECX;
  int iVar4;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var5;
  undefined1 local_b8 [96];
  code *local_58 [18];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e867b;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004ce550(local_b8,"options.cfg",2,0x40,1);
  iVar4 = *in_ECX;
  local_8 = 0;
  p_Var5 = endl_exref;
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_00449150(local_b8,"fullscreen ",iVar4,endl_exref,uVar1);
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar4);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar3,p_Var5);
  iVar4 = in_ECX[1];
  p_Var5 = endl_exref;
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(local_b8,"resolutionX ");
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar4);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar3,p_Var5);
  iVar4 = in_ECX[2];
  p_Var5 = endl_exref;
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(local_b8,"resolutionY ");
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar4);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar3,p_Var5);
  iVar4 = in_ECX[3];
  p_Var5 = endl_exref;
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(local_b8,"antiAliasing ");
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar4);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar3,p_Var5);
  iVar4 = in_ECX[4];
  p_Var5 = endl_exref;
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(local_b8,"renderDistance ");
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar4);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar3,p_Var5);
  iVar4 = in_ECX[5];
  p_Var5 = endl_exref;
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(local_b8,"soundVolume ");
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar4);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar3,p_Var5);
  iVar4 = in_ECX[6];
  p_Var5 = endl_exref;
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(local_b8,"musicVolume ");
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar4);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar3,p_Var5);
  iVar4 = in_ECX[7];
  p_Var5 = endl_exref;
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(local_b8,"cameraSpeed ");
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar4);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar3,p_Var5);
  iVar4 = in_ECX[8];
  p_Var5 = endl_exref;
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(local_b8,"cameraSmoothness ")
  ;
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar4);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar3,p_Var5);
  iVar4 = in_ECX[10];
  p_Var5 = endl_exref;
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(local_b8,"language ");
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar4);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar3,p_Var5);
  iVar4 = in_ECX[9];
  p_Var5 = endl_exref;
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(local_b8,"invertY ");
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar4);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar3,p_Var5);
  iVar4 = in_ECX[0xb];
  p_Var5 = endl_exref;
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(local_b8,"minTimeStep ");
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar4);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar3,p_Var5);
  local_8 = 0xffffffff;
  FUN_004cb220(local_58);
  local_58[0] = _vftable__exref;
  std::ios_base::_Ios_base_dtor((ios_base *)local_58);
  ExceptionList = local_10;
  return;
}


/* FUN_004d4cb0 @ 004d4cb0  kind=gamemisc  attributed-by=none  size=98 */

void FUN_004d4cb0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x204);
  *piVar1 = *piVar1 + -1;
  uVar3 = *(uint *)(in_ECX + 0x204);
  if (*piVar1 < 0) {
    uVar3 = 0;
  }
  *(uint *)(in_ECX + 0x204) = uVar3;
  iVar2 = *(int *)(in_ECX + 0x160);
  if (iVar2 != *(int *)(in_ECX + 0x164)) {
    *(undefined4 *)(in_ECX + 0x1d8) =
         *(undefined4 *)(iVar2 + (uVar3 % (uint)(*(int *)(in_ECX + 0x164) - iVar2 >> 3)) * 8);
    *(undefined4 *)(in_ECX + 0x1dc) =
         *(undefined4 *)
          (iVar2 + 4 +
          (*(uint *)(in_ECX + 0x204) % (uint)(*(int *)(in_ECX + 0x164) - iVar2 >> 3)) * 8);
  }
  return;
}


/* FUN_004d4d20 @ 004d4d20  kind=gamemisc  attributed-by=none  size=114 */

void FUN_004d4d20(void)

{
  int iVar1;
  int in_ECX;
  
  *(int *)(in_ECX + 0x204) = *(int *)(in_ECX + 0x204) + 1;
  iVar1 = *(int *)(in_ECX + 0x164) - *(int *)(in_ECX + 0x160) >> 3;
  if (iVar1 <= *(int *)(in_ECX + 0x204)) {
    *(int *)(in_ECX + 0x204) = iVar1 + -1;
  }
  iVar1 = *(int *)(in_ECX + 0x160);
  if (iVar1 != *(int *)(in_ECX + 0x164)) {
    *(undefined4 *)(in_ECX + 0x1d8) =
         *(undefined4 *)
          (iVar1 + (*(uint *)(in_ECX + 0x204) % (uint)(*(int *)(in_ECX + 0x164) - iVar1 >> 3)) * 8);
    *(undefined4 *)(in_ECX + 0x1dc) =
         *(undefined4 *)
          (iVar1 + 4 +
          (*(uint *)(in_ECX + 0x204) % (uint)(*(int *)(in_ECX + 0x164) - iVar1 >> 3)) * 8);
  }
  return;
}


/* FUN_004d6c40 @ 004d6c40  kind=gamemisc  attributed-by=none  size=112 */

undefined4 FUN_004d6c40(int *param_1,int *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (puVar1 = param_3; puVar1 < param_3 + (param_4 >> 2); puVar1 = puVar1 + 1) {
    if (*puVar1 < 0x10000) {
      iVar3 = iVar3 + 1;
    }
    else {
      iVar3 = iVar3 + 2;
    }
  }
  *param_2 = iVar3;
  iVar2 = 1;
  if (iVar3 != 0) {
    iVar2 = iVar3;
  }
  iVar3 = (*(code *)PTR_FUN_007663ac)(iVar2 * 2);
  *param_1 = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  FUN_004d7400(param_3,param_4 >> 2,iVar3);
  return 1;
}


/* FUN_004d6cb0 @ 004d6cb0  kind=gamemisc  attributed-by=none  size=82 */

undefined4 FUN_004d6cb0(int *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004d73a0(param_3,param_4 >> 2,0);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  *param_2 = iVar1;
  iVar2 = (*(code *)PTR_FUN_007663ac)(iVar2 * 2);
  *param_1 = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004d7460(param_3,param_4 >> 2,iVar2);
  return 1;
}


/* FUN_004d6d40 @ 004d6d40  kind=gamemisc  attributed-by=none  size=32 */

uint FUN_004d6d40(uint *param_1)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  if ((uVar1 == *param_1) && (uVar1 = in_ECX[1], uVar1 == param_1[1])) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


/* FUN_004d6d70 @ 004d6d70  kind=gamemisc  attributed-by=none  size=27 */

void FUN_004d6d70(int *param_1)

{
  int *in_ECX;
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  *in_ECX = *(int *)(*in_ECX + 0x18);
  return;
}


/* FUN_004d6d90 @ 004d6d90  kind=gamemisc  attributed-by=none  size=137 */

int FUN_004d6d90(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = param_1;
  if (param_1 < 0x2001) {
    uVar1 = 0x8000;
  }
  iVar2 = FUN_004d6ea0(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 < 0x2001) {
    *(int *)(*in_ECX + 0x10) = in_ECX[1];
    *(int *)(iVar2 + 8) = *in_ECX;
    *(int *)(*in_ECX + 0xc) = iVar2;
    in_ECX[1] = param_1;
    *in_ECX = iVar2;
    *(uint *)(iVar2 + 0x10) = param_1;
    *param_2 = iVar2;
    return iVar2 + 0x18;
  }
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(*in_ECX + 8);
  *(int *)(iVar2 + 0xc) = *in_ECX;
  *(int *)(*(int *)(*in_ECX + 8) + 0xc) = iVar2;
  *(int *)(*in_ECX + 8) = iVar2;
  *(uint *)(iVar2 + 0x10) = param_1;
  *param_2 = iVar2;
  return iVar2 + 0x18;
}


/* FUN_004d6e20 @ 004d6e20  kind=gamemisc  attributed-by=none  size=114 */

uint * FUN_004d6e20(int *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  
  uVar1 = param_1[1] + 0x20;
  if (uVar1 < 0x8001) {
    piVar3 = (int *)*param_1;
    puVar2 = (uint *)(param_1[1] + 0x18 + (int)piVar3);
    param_1[1] = uVar1;
  }
  else {
    puVar2 = (uint *)FUN_004d6d90(0x20,&param_1);
    piVar3 = param_1;
  }
  if (puVar2 != (uint *)0x0) {
    puVar2[1] = 0;
    *puVar2 = (uint)piVar3 | param_2;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    return puVar2;
  }
  return (uint *)0x0;
}


/* FUN_004d6ea0 @ 004d6ea0  kind=gamemisc  attributed-by=none  size=110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d6ea0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  
  iVar1 = (*(code *)PTR_FUN_007663ac)(param_1 + 0x38);
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x1fU & 0xffffffe0);
  if (puVar2 == (undefined4 *)0x0) {
    iRam00000004 = iVar1;
    _DAT_00000000 = *(undefined4 *)*in_ECX;
    return;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[1] = iVar1;
  *puVar2 = *(undefined4 *)*in_ECX;
  return;
}


/* FUN_004d6f10 @ 004d6f10  kind=gamemisc  attributed-by=none  size=67 */

ushort * FUN_004d6f10(ushort *param_1,uint param_2)

{
  if (param_2 < 0x10000) {
    *param_1 = (ushort)param_2;
    return param_1 + 1;
  }
  *param_1 = (short)(param_2 - 0x10000 >> 10) + 0xd800;
  param_1[1] = ((ushort)param_2 & 0x3ff) + 0xdc00;
  return param_1 + 2;
}


/* FUN_004d6f60 @ 004d6f60  kind=gamemisc  attributed-by=none  size=128 */

int * FUN_004d6f60(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  uVar1 = param_2[1] + 0x14;
  if (uVar1 < 0x8001) {
    piVar5 = (int *)*param_2;
    piVar4 = (int *)(param_2[1] + 0x18 + (int)piVar5);
    param_2[1] = uVar1;
  }
  else {
    piVar4 = (int *)FUN_004d6d90(0x14,&param_2);
    piVar5 = param_2;
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = (int)piVar5;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0xc);
      *(int **)(iVar3 + 0x10) = piVar4;
      piVar4[3] = iVar3;
      *(int **)(iVar2 + 0xc) = piVar4;
      return piVar4;
    }
    *(int **)(param_1 + 0x1c) = piVar4;
    piVar4[3] = (int)piVar4;
    return piVar4;
  }
  return (int *)0x0;
}


/* FUN_004d6fe0 @ 004d6fe0  kind=gamemisc  attributed-by=none  size=64 */

int FUN_004d6fe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_004d6e20(param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  *(int *)(iVar3 + 4) = param_1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14);
    *(int *)(iVar2 + 0x18) = iVar3;
    *(int *)(iVar3 + 0x14) = iVar2;
    *(int *)(iVar1 + 0x14) = iVar3;
    return iVar3;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  *(int *)(iVar3 + 0x14) = iVar3;
  return iVar3;
}


/* FUN_004d7020 @ 004d7020  kind=gamemisc  attributed-by=none  size=128 */

void FUN_004d7020(int *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int *in_ECX;
  ushort *puVar5;
  bool bVar6;
  
  if (*in_ECX == 0) {
    *param_1 = 0;
    return;
  }
  iVar2 = *(int *)(*in_ECX + 0x1c);
  do {
    if (iVar2 == 0) {
      *param_1 = 0;
      return;
    }
    puVar3 = *(ushort **)(iVar2 + 4);
    puVar5 = param_2;
    if (puVar3 != (ushort *)0x0) {
      do {
        uVar1 = *puVar5;
        bVar6 = uVar1 < *puVar3;
        if (uVar1 != *puVar3) {
LAB_004d7076:
          uVar4 = -(uint)bVar6 | 1;
          goto LAB_004d707b;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar5[1];
        bVar6 = uVar1 < puVar3[1];
        if (uVar1 != puVar3[1]) goto LAB_004d7076;
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar4 = 0;
LAB_004d707b:
      if (uVar4 == 0) {
        *param_1 = iVar2;
        return;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x10);
  } while( true );
}


/* FUN_004d70a0 @ 004d70a0  kind=gamemisc  attributed-by=none  size=38 */

void FUN_004d70a0(undefined4 *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 0x10);
    param_1[1] = iVar1;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


/* FUN_004d70d0 @ 004d70d0  kind=gamemisc  attributed-by=none  size=128 */

void FUN_004d70d0(int *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int *in_ECX;
  ushort *puVar5;
  bool bVar6;
  
  if (*in_ECX == 0) {
    *param_1 = 0;
    return;
  }
  iVar2 = *(int *)(*in_ECX + 0x10);
  do {
    if (iVar2 == 0) {
      *param_1 = 0;
      return;
    }
    puVar3 = *(ushort **)(iVar2 + 8);
    puVar5 = param_2;
    if (puVar3 != (ushort *)0x0) {
      do {
        uVar1 = *puVar5;
        bVar6 = uVar1 < *puVar3;
        if (uVar1 != *puVar3) {
LAB_004d7126:
          uVar4 = -(uint)bVar6 | 1;
          goto LAB_004d712b;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar5[1];
        bVar6 = uVar1 < puVar3[1];
        if (uVar1 != puVar3[1]) goto LAB_004d7126;
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar4 = 0;
LAB_004d712b:
      if (uVar4 == 0) {
        *param_1 = iVar2;
        return;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x18);
  } while( true );
}


/* FUN_004d7150 @ 004d7150  kind=gamemisc  attributed-by=none  size=54 */

undefined ** FUN_004d7150(void)

{
  uint *puVar1;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    for (puVar1 = *(uint **)(*in_ECX + 0x10); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[6]) {
      if ((puVar1[3] != 0) && (((*puVar1 & 7) == 3 || ((*puVar1 & 7) == 4)))) {
        return (undefined **)puVar1[3];
      }
    }
  }
  return &PTR_006fccac;
}


/* FUN_004d7190 @ 004d7190  kind=gamemisc  attributed-by=none  size=175 */

uint FUN_004d7190(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  
  if (param_3 == 2) {
    uVar1 = FUN_004d79f0(param_1,param_2,param_4,param_5,param_6);
    return uVar1;
  }
  if (param_3 == 3) {
    uVar1 = FUN_004d7240(param_1,param_2,param_4,param_5,param_6);
    return uVar1;
  }
  if (param_3 != 5) {
    if (param_3 == 1) {
      uVar1 = FUN_004d72a0(param_1,param_2,param_4,param_5);
      return uVar1;
    }
    if (param_3 == 6) {
      uVar1 = FUN_004d6cb0(param_1,param_2,param_4,param_5,0);
      return uVar1;
    }
    if (param_3 != 5) {
      return param_3 & 0xffffff00;
    }
  }
  param_3 = param_3 & 0xffffff00;
  uVar1 = FUN_004d6c40(param_1,param_2,param_4,param_5,param_3);
  return uVar1;
}


/* FUN_004d72a0 @ 004d72a0  kind=gamemisc  attributed-by=none  size=77 */

undefined4 FUN_004d72a0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004d74f0(param_3,param_4,0);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  *param_2 = iVar1;
  iVar2 = (*(code *)PTR_FUN_007663ac)(iVar2 * 2);
  *param_1 = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004d75f0(param_3,param_4,iVar2);
  return 1;
}


/* FUN_004d72f0 @ 004d72f0  kind=gamemisc  attributed-by=none  size=174 */

void FUN_004d72f0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_004d77d0();
  puVar5 = (undefined4 *)((int)in_ECX + 0x27U & 0xffffffe0);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
  }
  puVar3 = puVar5 + 6;
  puVar5[4] = 0x8000;
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    *puVar3 = (uint)puVar5 | 1;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
  }
  *in_ECX = (int)puVar3;
  puVar3[5] = (uint)puVar3;
  iVar1 = *in_ECX;
  uVar2 = puVar5[4];
  puVar4 = (undefined4 *)(iVar1 + 0x20);
  *puVar4 = puVar5;
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *puVar5 = puVar4;
  return;
}


/* FUN_004d73a0 @ 004d73a0  kind=gamemisc  attributed-by=none  size=94 */

int FUN_004d73a0(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_1 + param_2;
  if (puVar1 <= param_1) {
    return param_3;
  }
  do {
    uVar2 = *param_1;
    if (((uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 & 0xff00 | uVar2 << 0x10) << 8) < 0x10000)
    {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = param_3 + 2;
    }
    param_1 = param_1 + 1;
  } while (param_1 < puVar1);
  return param_3;
}


/* FUN_004d7400 @ 004d7400  kind=gamemisc  attributed-by=none  size=92 */

ushort * FUN_004d7400(uint *param_1,int param_2,ushort *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_1 + param_2;
  if (puVar1 <= param_1) {
    return param_3;
  }
  do {
    uVar2 = *param_1;
    if (uVar2 < 0x10000) {
      *param_3 = (ushort)uVar2;
      param_3 = param_3 + 1;
    }
    else {
      *param_3 = (short)(uVar2 - 0x10000 >> 10) + 0xd800;
      param_3[1] = ((ushort)uVar2 & 0x3ff) + 0xdc00;
      param_3 = param_3 + 2;
    }
    param_1 = param_1 + 1;
  } while (param_1 < puVar1);
  return param_3;
}


/* FUN_004d7460 @ 004d7460  kind=gamemisc  attributed-by=none  size=130 */

ushort * FUN_004d7460(uint *param_1,int param_2,ushort *param_3)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = param_1 + param_2;
  if (puVar1 <= param_1) {
    return param_3;
  }
  do {
    uVar4 = *param_1;
    uVar3 = uVar4 & 0xff0000 | uVar4 >> 0x10;
    uVar4 = uVar3 >> 8 | (uVar4 & 0xff00 | uVar4 << 0x10) << 8;
    uVar2 = (ushort)(uVar3 >> 8);
    if (uVar4 < 0x10000) {
      *param_3 = uVar2;
      param_3 = param_3 + 1;
    }
    else {
      *param_3 = (short)(uVar4 - 0x10000 >> 10) + 0xd800;
      param_3[1] = (uVar2 & 0x3ff) + 0xdc00;
      param_3 = param_3 + 2;
    }
    param_1 = param_1 + 1;
  } while (param_1 < puVar1);
  return param_3;
}


/* FUN_004d74f0 @ 004d74f0  kind=gamemisc  attributed-by=none  size=247 */

int FUN_004d74f0(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return param_3;
  }
  do {
    if ((byte)*param_1 < 0x80) {
      param_1 = (uint *)((int)param_1 + 1);
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
      if (((uint)param_1 & 3) == 0) {
        for (; (3 < param_2 && ((*param_1 & 0x80808080) == 0)); param_1 = param_1 + 1) {
          param_2 = param_2 - 4;
          param_3 = param_3 + 4;
        }
      }
    }
    else {
      uVar1 = (uint)(byte)*param_1;
      if (((uVar1 - 0xc0 < 0x20) && (1 < param_2)) && ((*param_1 & 0xc000) == 0x8000)) {
        param_3 = param_3 + 1;
        param_1 = (uint *)((int)param_1 + 2);
        param_2 = param_2 - 2;
      }
      else if (((uVar1 - 0xe0 < 0x10) && (2 < param_2)) &&
              (((*param_1 & 0xc000) == 0x8000 && ((*param_1 & 0xc00000) == 0x800000)))) {
        param_3 = param_3 + 1;
        param_1 = (uint *)((int)param_1 + 3);
        param_2 = param_2 - 3;
      }
      else if (((uVar1 - 0xf0 < 8) && (3 < param_2)) &&
              (((*param_1 & 0xc000) == 0x8000 &&
               (((*param_1 & 0xc00000) == 0x800000 && ((*param_1 & 0xc0000000) == 0x80000000)))))) {
        param_3 = param_3 + 2;
        param_1 = param_1 + 1;
        param_2 = param_2 - 4;
      }
      else {
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = param_2 - 1;
      }
    }
  } while (param_2 != 0);
  return param_3;
}


/* FUN_004d75f0 @ 004d75f0  kind=gamemisc  attributed-by=none  size=464 */

void FUN_004d75f0(uint *param_1,uint param_2,ushort *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if (param_2 == 0) {
              return;
            }
            bVar1 = (byte)*param_1;
            if (0x7f < bVar1) break;
            *param_3 = (ushort)bVar1;
            param_1 = (uint *)((int)param_1 + 1);
            param_3 = param_3 + 1;
            param_2 = param_2 - 1;
            if (((uint)param_1 & 3) == 0) {
              for (; (3 < param_2 && ((*param_1 & 0x80808080) == 0)); param_1 = param_1 + 1) {
                *param_3 = (ushort)(byte)*param_1;
                param_3[1] = (ushort)*(byte *)((int)param_1 + 1);
                param_3[2] = (ushort)*(byte *)((int)param_1 + 2);
                param_3[3] = (ushort)*(byte *)((int)param_1 + 3);
                param_2 = param_2 - 4;
                param_3 = param_3 + 4;
              }
            }
          }
          uVar3 = (uint)bVar1;
          if (((0x1f < uVar3 - 0xc0) || (param_2 < 2)) ||
             (uVar2 = CONCAT11(*(byte *)((int)param_1 + 1),*(byte *)((int)param_1 + 1)) & 0xffffffc0
             , (char)uVar2 != -0x80)) break;
          *param_3 = (bVar1 & 0x3f) << 6 | (ushort)((byte)(uVar2 >> 8) & 0x3f);
          param_1 = (uint *)((int)param_1 + 2);
          param_2 = param_2 - 2;
          param_3 = param_3 + 1;
        }
        if (((0xf < uVar3 - 0xe0) || (param_2 < 3)) ||
           ((uVar2 = CONCAT11(*(byte *)((int)param_1 + 1),*(byte *)((int)param_1 + 1)) & 0xffffffc0,
            (char)uVar2 != -0x80 ||
            (uVar2 = CONCAT31((int3)(uVar2 >> 8),*(byte *)((int)param_1 + 2)) & 0xffffffc0,
            (char)uVar2 != -0x80)))) break;
        *param_3 = ((CONCAT11((char)(uVar2 >> 8),bVar1) & 0x3fff) >> 8 | (ushort)bVar1 << 6) << 6 |
                   (ushort)(*(byte *)((int)param_1 + 2) & 0x3f);
        param_1 = (uint *)((int)param_1 + 3);
        param_2 = param_2 - 3;
        param_3 = param_3 + 1;
      }
      if (((uVar3 - 0xf0 < 8) && (3 < param_2)) && ((*(byte *)((int)param_1 + 1) & 0xc0) == 0x80))
      break;
LAB_004d77b8:
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = param_2 - 1;
    }
    if (((*(byte *)((int)param_1 + 2) & 0xc0) != 0x80) ||
       ((*(byte *)((int)param_1 + 3) & 0xc0) != 0x80)) goto LAB_004d77b8;
    uVar2 = *(byte *)((int)param_1 + 3) & 0x3f;
    uVar3 = (((uVar3 & 0xffffff0f) << 6 | *(byte *)((int)param_1 + 1) & 0x3f) << 6 |
            *(byte *)((int)param_1 + 2) & 0x3f) << 6;
    *param_3 = (short)((uVar3 | uVar2) - 0x10000 >> 10) + 0xd800;
    param_3[1] = ((ushort)uVar3 & 0x3ff | (ushort)uVar2) + 0xdc00;
    param_1 = param_1 + 1;
    param_2 = param_2 - 4;
    param_3 = param_3 + 2;
  } while( true );
}


/* FUN_004d77d0 @ 004d77d0  kind=gamemisc  attributed-by=none  size=106 */

void FUN_004d77d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  
  if (in_ECX[1] != 0) {
    (*(code *)PTR_free_007663b0)(in_ECX[1]);
    in_ECX[1] = 0;
  }
  if ((uint *)*in_ECX != (uint *)0x0) {
    puVar3 = (undefined4 *)(*(uint *)*in_ECX & 0xffffffe0);
    iVar2 = puVar3[3];
    while (iVar2 != 0) {
      puVar1 = (undefined4 *)(iVar2 + 4);
      iVar2 = *(int *)(iVar2 + 0xc);
      (*(code *)PTR_free_007663b0)(*puVar1);
    }
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    *in_ECX = 0;
  }
  return;
}


/* FUN_004d7840 @ 004d7840  kind=gamemisc  attributed-by=none  size=21 */

void FUN_004d7840(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = *in_ECX;
  *param_1 = 0;
  param_1[1] = uVar1;
  return;
}


/* FUN_004d7860 @ 004d7860  kind=gamemisc  attributed-by=none  size=52 */

void FUN_004d7860(undefined4 *param_1)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    *param_1 = *(undefined4 *)(*in_ECX + 0x10);
    return;
  }
  *param_1 = 0;
  return;
}


/* FUN_004d78a0 @ 004d78a0  kind=gamemisc  attributed-by=none  size=336 */

int FUN_004d78a0(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  
  if ((param_1 == 8) || (param_1 == 4)) {
    return 2;
  }
  if (param_1 == 7) {
    return 5;
  }
  if (param_1 != 0) {
    return param_1;
  }
  if (4 < param_3) {
    if ((((*param_2 == '\0') && (param_2[1] == '\0')) && (param_2[2] == -2)) && (param_2[3] == -1))
    {
      return 6;
    }
    if (((*param_2 == -1) && (param_2[1] == -2)) && ((param_2[2] == '\0' && (param_2[3] == '\0'))))
    {
      return 5;
    }
  }
  if (2 < param_3) {
    if ((*param_2 == -2) && (param_2[1] == -1)) {
      return 3;
    }
    if ((*param_2 == -1) && (param_2[1] == -2)) {
      return 2;
    }
  }
  if ((((param_3 < 4) || (*param_2 != -0x11)) || (param_2[1] != -0x45)) || (param_2[2] != -0x41)) {
    if (4 < param_3) {
      cVar1 = *param_2;
      if (((cVar1 == '\0') && (param_2[1] == '\0')) && ((param_2[2] == '\0' && (param_2[3] == '<')))
         ) {
        return 6;
      }
      if (((cVar1 == '<') && (param_2[1] == '\0')) && ((param_2[2] == '\0' && (param_2[3] == '\0')))
         ) {
        return 5;
      }
      if ((((cVar1 == '\0') && (param_2[1] == '<')) && (param_2[2] == '\0')) && (param_2[3] == '?'))
      {
        return 3;
      }
      if (cVar1 == '<') {
        if (((param_2[1] == '\0') && (param_2[2] == '?')) && (param_2[3] == '\0')) {
          return 2;
        }
        if (((param_2[1] == '?') && (param_2[2] == 'x')) && (param_2[3] == 'm')) {
          return 1;
        }
      }
    }
    if (2 < param_3) {
      if ((*param_2 == '\0') && (param_2[1] == '<')) {
        return 3;
      }
      if ((*param_2 == '<') && (param_2[1] == '\0')) {
        return 2;
      }
    }
  }
  return 1;
}


/* FUN_004d79f0 @ 004d79f0  kind=gamemisc  attributed-by=none  size=98 */

undefined4 FUN_004d79f0(undefined4 *param_1,uint *param_2,void *param_3,uint param_4,char param_5)

{
  uint uVar1;
  void *_Dst;
  
  if (param_5 != '\0') {
    *param_1 = param_3;
    *param_2 = param_4 >> 1;
    return 1;
  }
  uVar1 = 1;
  if (param_4 != 0) {
    uVar1 = param_4;
  }
  _Dst = (void *)(*(code *)PTR_FUN_007663ac)(uVar1);
  if (_Dst == (void *)0x0) {
    return 0;
  }
  memcpy(_Dst,param_3,param_4);
  *param_1 = _Dst;
  *param_2 = param_4 >> 1;
  return 1;
}


/* FUN_004d7a60 @ 004d7a60  kind=gamemisc  attributed-by=none  size=84 */

code * FUN_004d7a60(uint param_1)

{
  switch(param_1 >> 4 & 0xf) {
  case 0:
    return FUN_004d8ef0;
  case 1:
    return FUN_004d8f40;
  case 2:
    return FUN_004d8750;
  case 3:
    return FUN_004d8810;
  case 4:
  case 6:
    return FUN_004d9000;
  case 5:
  case 7:
    return FUN_004d90d0;
  case 8:
  case 10:
  case 0xc:
  case 0xe:
    return FUN_004d91d0;
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
    return FUN_004d9340;
  default:
    return (code *)0x0;
  }
}


/* FUN_004d7b00 @ 004d7b00  kind=gamemisc  attributed-by=none  size=179 */

void FUN_004d7b00(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *in_ECX;
  undefined1 local_10 [12];
  
  FUN_004d72f0();
  uVar4 = param_3;
  iVar2 = param_2;
  param_5 = FUN_004d78a0(param_5,param_2,param_3);
  param_2 = 0;
  param_3 = 0;
  cVar5 = FUN_004d7190(&param_2,&param_3,param_5,iVar2,uVar4,0);
  iVar3 = param_2;
  if (cVar5 == '\0') {
    *param_1 = 3;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  puVar6 = (undefined8 *)FUN_004d8410(local_10,param_2,param_3,*in_ECX,param_4);
  uVar1 = *puVar6;
  if (iVar3 != iVar2) {
    in_ECX[1] = iVar3;
  }
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = param_5;
  return;
}


/* FUN_004d7bc0 @ 004d7bc0  kind=gamemisc  attributed-by=none  size=19 */

undefined ** FUN_004d7bc0(void)

{
  undefined **ppuVar1;
  int *in_ECX;
  
  if ((*in_ECX == 0) || (ppuVar1 = *(undefined ***)(*in_ECX + 8), ppuVar1 == (undefined **)0x0)) {
    ppuVar1 = &PTR_006fccac;
  }
  return ppuVar1;
}


/* FUN_004d7be0 @ 004d7be0  kind=gamemisc  attributed-by=none  size=69 */

ushort * FUN_004d7be0(ushort *param_1)

{
  byte bVar1;
  
  while( true ) {
    while( true ) {
      if (*param_1 < 0x80) {
        bVar1 = (&DAT_00703680)[*param_1];
      }
      else {
        bVar1 = 0;
      }
      if ((bVar1 & 1) != 0) break;
      param_1 = param_1 + 1;
    }
    if (*param_1 == 0x3c) break;
    if (*param_1 == 0) {
      return param_1;
    }
    param_1 = param_1 + 1;
  }
  *param_1 = 0;
  return param_1 + 1;
}


/* FUN_004d7ce0 @ 004d7ce0  kind=gamemisc  attributed-by=none  size=217 */

ushort * FUN_004d7ce0(ushort *param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  ushort *local_c;
  int local_8;
  
  _Src = (ushort *)0x0;
  iVar5 = 0;
  local_c = _Src;
  local_8 = iVar5;
  while( true ) {
    while( true ) {
      puVar4 = param_1;
      if (*puVar4 < 0x80) {
        bVar2 = (&DAT_00703680)[*puVar4];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 1) != 0) break;
      param_1 = puVar4 + 1;
    }
    uVar1 = *puVar4;
    if (uVar1 == 0x3c) break;
    if (uVar1 == 0xd) {
      *puVar4 = 10;
      param_1 = puVar4 + 1;
      if (*param_1 == 10) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar5,_Src,(int)param_1 - (int)_Src);
        }
        _Src = puVar4 + 2;
        iVar5 = iVar5 + 1;
        param_1 = _Src;
        local_c = _Src;
        local_8 = iVar5;
      }
    }
    else if (uVar1 == 0x26) {
      param_1 = (ushort *)FUN_004d96f0(puVar4,&local_c);
      _Src = local_c;
      iVar5 = local_8;
    }
    else {
      if (uVar1 == 0) {
        return puVar4;
      }
      param_1 = puVar4 + 1;
    }
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + 1;
}


/* FUN_004d7dc0 @ 004d7dc0  kind=gamemisc  attributed-by=none  size=168 */

ushort * FUN_004d7dc0(ushort *param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      puVar4 = param_1;
      if (*puVar4 < 0x80) {
        bVar2 = (&DAT_00703680)[*puVar4];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 1) != 0) break;
      param_1 = puVar4 + 1;
    }
    uVar1 = *puVar4;
    if (uVar1 == 0x3c) break;
    if (uVar1 == 0xd) {
      *puVar4 = 10;
      param_1 = puVar4 + 1;
      if (*param_1 == 10) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar5,_Src,(int)param_1 - (int)_Src);
        }
        _Src = puVar4 + 2;
        iVar5 = iVar5 + 1;
        param_1 = _Src;
      }
    }
    else {
      if (uVar1 == 0) {
        return puVar4;
      }
      param_1 = puVar4 + 1;
    }
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + 1;
}


/* FUN_004d7e70 @ 004d7e70  kind=gamemisc  attributed-by=none  size=1415 */

void FUN_004d7e70(ushort *param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  code *pcVar5;
  int iVar6;
  ushort *puVar7;
  int in_ECX;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  code *local_c;
  undefined4 *local_8;
  
  uVar8 = param_3;
  pcVar5 = (code *)FUN_004d7a60(param_3);
  switch(uVar8 >> 4 & 3) {
  case 0:
    local_c = FUN_004d7be0;
    break;
  case 1:
    local_c = FUN_004d7c30;
    break;
  case 2:
    local_c = FUN_004d7dc0;
    break;
  case 3:
    local_c = FUN_004d7ce0;
    break;
  default:
    local_c = (code *)0x0;
  }
  uVar4 = *param_1;
  local_8 = param_2;
  puVar10 = param_1;
  puVar12 = param_2;
  if (uVar4 != 0) {
    do {
      puVar7 = puVar10;
      if (uVar4 == 0x3c) {
LAB_004d7fb6:
        puVar10 = puVar10 + 1;
LAB_004d7fbc:
        uVar8 = (uint)*puVar10;
        if (*puVar10 < 0x80) {
          cVar3 = (&DAT_00703680)[uVar8];
        }
        else {
          cVar3 = -0x40;
        }
        param_1 = puVar10;
        if (cVar3 < '\0') {
          local_8 = (undefined4 *)FUN_004d6fe0(puVar12,in_ECX,2);
          if (local_8 == (undefined4 *)0x0) {
LAB_004d83b7:
                    /* WARNING: Subroutine does not return */
            longjmp((int *)(in_ECX + 8),3);
          }
          local_8[2] = puVar10;
          while( true ) {
            if (*puVar10 < 0x80) {
              bVar2 = (&DAT_00703680)[*puVar10];
            }
            else {
              bVar2 = 0xc0;
            }
            if ((bVar2 & 0x40) == 0) break;
            puVar10 = puVar10 + 1;
          }
          uVar4 = *puVar10;
          uVar8 = (uint)uVar4;
          *puVar10 = 0;
          puVar7 = puVar10 + 1;
          puVar12 = local_8;
          if (uVar8 != 0x3e) {
            if (uVar4 < 0x80) {
              bVar2 = (&DAT_00703680)[uVar8];
            }
            else {
              bVar2 = 0;
            }
            puVar11 = local_8;
            if ((bVar2 & 8) == 0) {
              if (uVar8 == 0x2f) {
                uVar4 = *puVar7;
                if ((uVar4 != 0x3e) && ((puVar9 = puVar7, uVar4 != 0 || ((ushort)param_4 != 0x3e))))
                goto LAB_004d808c;
                puVar7 = puVar7 + (uVar4 == 0x3e);
                puVar12 = (undefined4 *)local_8[1];
                local_8 = (undefined4 *)local_8[1];
              }
              else {
joined_r0x004d830b:
                puVar9 = puVar7;
                if ((uVar4 != 0) ||
                   (puVar7 = puVar10, puVar9 = puVar10, puVar12 = puVar11, (ushort)param_4 != 0x3e))
                {
LAB_004d808c:
                  *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)(in_ECX + 8),0xb);
                }
              }
            }
            else {
LAB_004d8180:
              while( true ) {
                while( true ) {
                  if (*puVar7 < 0x80) {
                    bVar2 = (&DAT_00703680)[*puVar7];
                  }
                  else {
                    bVar2 = 0;
                  }
                  if ((bVar2 & 8) == 0) break;
                  puVar7 = puVar7 + 1;
                }
                if (*puVar7 < 0x80) {
                  cVar3 = (&DAT_00703680)[*puVar7];
                }
                else {
                  cVar3 = -0x40;
                }
                if (-1 < cVar3) break;
                iVar6 = FUN_004d6f60(puVar11,in_ECX);
                if (iVar6 == 0) {
                  *(undefined4 *)(in_ECX + 0x48) = 0;
                  goto LAB_004d83b7;
                }
                *(ushort **)(iVar6 + 4) = puVar7;
                while( true ) {
                  if (*puVar7 < 0x80) {
                    bVar2 = (&DAT_00703680)[*puVar7];
                  }
                  else {
                    bVar2 = 0xc0;
                  }
                  if ((bVar2 & 0x40) == 0) break;
                  puVar7 = puVar7 + 1;
                }
                uVar4 = *puVar7;
                if (uVar4 == 0) goto LAB_004d838f;
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
                if (*puVar7 == 0) goto LAB_004d838f;
                if (uVar4 < 0x80) {
                  bVar2 = (&DAT_00703680)[uVar4];
                }
                else {
                  bVar2 = 0;
                }
                if ((bVar2 & 8) != 0) {
                  while( true ) {
                    if (*puVar7 < 0x80) {
                      bVar2 = (&DAT_00703680)[*puVar7];
                    }
                    else {
                      bVar2 = 0;
                    }
                    if ((bVar2 & 8) == 0) break;
                    puVar7 = puVar7 + 1;
                  }
                  uVar4 = *puVar7;
                  if (uVar4 == 0) goto LAB_004d838f;
                  puVar7 = puVar7 + 1;
                }
                if (uVar4 != 0x3d) goto LAB_004d838f;
                while( true ) {
                  if (*puVar7 < 0x80) {
                    bVar2 = (&DAT_00703680)[*puVar7];
                  }
                  else {
                    bVar2 = 0;
                  }
                  if ((bVar2 & 8) == 0) break;
                  puVar7 = puVar7 + 1;
                }
                uVar4 = *puVar7;
                if ((uVar4 != 0x22) && (uVar4 != 0x27)) goto LAB_004d838f;
                *(ushort **)(iVar6 + 8) = puVar7 + 1;
                puVar7 = (ushort *)(*pcVar5)(puVar7 + 1,uVar4);
                if (puVar7 == (ushort *)0x0) {
                  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(iVar6 + 8);
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)(in_ECX + 8),0xc);
                }
                if (*puVar7 < 0x80) {
                  cVar3 = (&DAT_00703680)[*puVar7];
                }
                else {
                  cVar3 = -0x40;
                }
                puVar11 = local_8;
                if (cVar3 < '\0') {
LAB_004d838f:
                  *(ushort **)(in_ECX + 0x48) = puVar7;
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)(in_ECX + 8),0xc);
                }
              }
              uVar4 = *puVar7;
              if (uVar4 == 0x2f) {
                puVar9 = puVar7 + 1;
                if (puVar7[1] == 0x3e) {
                  puVar7 = puVar7 + 2;
                  puVar12 = (undefined4 *)puVar11[1];
                  local_8 = (undefined4 *)puVar11[1];
                }
                else {
                  if ((puVar7[1] != 0) || ((ushort)param_4 != 0x3e)) goto LAB_004d808c;
                  puVar7 = puVar9;
                  puVar12 = (undefined4 *)puVar11[1];
                  local_8 = (undefined4 *)puVar11[1];
                }
              }
              else {
                puVar10 = puVar7;
                if (uVar4 != 0x3e) goto joined_r0x004d830b;
                puVar7 = puVar7 + 1;
                puVar12 = puVar11;
              }
            }
          }
        }
        else if (uVar8 == 0x2f) {
          puVar9 = (ushort *)puVar12[2];
          puVar7 = puVar10 + 1;
          if (puVar9 == (ushort *)0x0) {
LAB_004d80db:
            *(ushort **)(in_ECX + 0x48) = puVar7;
                    /* WARNING: Subroutine does not return */
            longjmp((int *)(in_ECX + 8),0xe);
          }
          while( true ) {
            uVar4 = *puVar7;
            if (uVar4 < 0x80) {
              bVar2 = (&DAT_00703680)[uVar4];
            }
            else {
              bVar2 = 0xc0;
            }
            if ((bVar2 & 0x40) == 0) break;
            uVar1 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
            if (uVar4 != uVar1) goto LAB_004d80db;
          }
          if (*puVar9 != 0) {
            if (((*puVar7 == 0) && (*puVar9 == (ushort)param_4)) && (puVar9[1] == 0))
            goto LAB_004d8380;
            goto LAB_004d80db;
          }
          puVar12 = (undefined4 *)puVar12[1];
          while( true ) {
            if (*puVar7 < 0x80) {
              bVar2 = (&DAT_00703680)[*puVar7];
            }
            else {
              bVar2 = 0;
            }
            if ((bVar2 & 8) == 0) break;
            puVar7 = puVar7 + 1;
          }
          local_8 = puVar12;
          if (*puVar7 == 0) {
            if ((ushort)param_4 != 0x3e) {
LAB_004d8380:
              *(ushort **)(in_ECX + 0x48) = puVar7;
                    /* WARNING: Subroutine does not return */
              longjmp((int *)(in_ECX + 8),0xd);
            }
          }
          else {
            if (*puVar7 != 0x3e) goto LAB_004d8380;
            puVar7 = puVar7 + 1;
          }
        }
        else if (uVar8 == 0x3f) {
          FUN_004d8c70(&param_1,&local_8,param_3,param_4);
          puVar7 = param_1;
          puVar12 = local_8;
          if ((local_8 != (undefined4 *)0x0) && (puVar11 = local_8, ((byte)*local_8 & 7) == 7))
          goto LAB_004d8180;
        }
        else {
          if (uVar8 != 0x21) {
            if ((*puVar10 == 0) && ((ushort)param_4 == 0x3f)) {
              *(ushort **)(in_ECX + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
              longjmp((int *)(in_ECX + 8),6);
            }
            *(ushort **)(in_ECX + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
            longjmp((int *)(in_ECX + 8),5);
          }
          FUN_004d8900(&param_1,puVar12,param_3,param_4);
          puVar7 = param_1;
        }
      }
      else {
        while( true ) {
          if (*puVar7 < 0x80) {
            bVar2 = (&DAT_00703680)[*puVar7];
          }
          else {
            bVar2 = 0;
          }
          if ((bVar2 & 8) == 0) break;
          puVar7 = puVar7 + 1;
        }
        if (((param_3 & 8) != 0) && (puVar10 != puVar7)) {
LAB_004d7f2e:
          if (puVar12[1] == 0) {
            uVar4 = *puVar10;
            puVar7 = puVar10;
            if (uVar4 != 0) {
              while (puVar7 = puVar10, uVar4 != 0x3c) {
                uVar4 = puVar10[1];
                puVar7 = puVar10 + 1;
                puVar10 = puVar7;
                if (uVar4 == 0) goto LAB_004d7f92;
              }
            }
            puVar10 = puVar7;
            if (*puVar7 != 0) goto LAB_004d7fb6;
          }
          else {
            iVar6 = FUN_004d6fe0(puVar12,in_ECX,3);
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              longjmp((int *)(in_ECX + 8),3);
            }
            *(ushort **)(iVar6 + 0xc) = puVar10;
            puVar7 = (ushort *)(*local_c)(puVar10);
            puVar12 = *(undefined4 **)(iVar6 + 4);
            puVar10 = puVar7;
            param_1 = puVar7;
            local_8 = puVar12;
            if (*puVar7 != 0) goto LAB_004d7fbc;
          }
          break;
        }
        if (*puVar7 != 0x3c) {
          if (*puVar7 != 0) goto LAB_004d7f2e;
          break;
        }
      }
      uVar4 = *puVar7;
      puVar10 = puVar7;
    } while (uVar4 != 0);
LAB_004d7f92:
    if (puVar12 != param_2) {
      *(ushort **)(in_ECX + 0x48) = puVar7;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),0xe);
    }
  }
  return;
}


/* FUN_004d8410 @ 004d8410  kind=gamemisc  attributed-by=none  size=241 */

void FUN_004d8410(undefined8 *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_4c [64];
  int local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  *(int *)(param_4 + 0x28) = param_2;
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_4 + 0x20);
    uVar3 = *(undefined4 *)(param_4 + 0x24);
    local_c = 0;
    sVar1 = *(short *)(param_2 + -2 + param_3 * 2);
    *(undefined2 *)(param_2 + -2 + param_3 * 2) = 0;
    iVar4 = setjmp3(local_4c,0);
    if (iVar4 == 0) {
      FUN_004d7e70(param_2,param_4,param_5,sVar1);
    }
    if (local_c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = local_c - param_2 >> 1;
    }
    *(undefined4 *)(param_4 + 0x20) = uVar2;
    *(undefined4 *)(param_4 + 0x24) = uVar3;
    if ((iVar4 == 0) && (sVar1 == 0x3c)) {
      uVar6 = CONCAT44(param_3,5);
    }
    else {
      uVar6 = CONCAT44(iVar5,iVar4);
    }
  }
  *param_1 = uVar6;
  *(undefined4 *)(param_1 + 1) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d8510 @ 004d8510  kind=gamemisc  attributed-by=none  size=166 */

void FUN_004d8510(int *param_1,undefined4 param_2,char param_3)

{
  short sVar1;
  short *psVar2;
  int in_ECX;
  
  *param_1 = *param_1 + 2;
  sVar1 = *(short *)*param_1;
  do {
    if (sVar1 == 0) {
      if ((param_3 != '\0') && ((short)param_2 == 0x3e)) {
        return;
      }
      *(int *)(in_ECX + 0x48) = *param_1;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),9);
    }
    psVar2 = (short *)*param_1;
    sVar1 = *psVar2;
    if (sVar1 == 0x3c) {
      if ((psVar2[1] == 0x21) && (psVar2[2] != 0x2d)) {
        if (psVar2[2] == 0x5b) {
          FUN_004d85c0(param_1);
        }
        else {
          FUN_004d8510(param_1,param_2,0);
        }
      }
      else {
LAB_004d857f:
        FUN_004d8630(param_1);
      }
    }
    else {
      if ((sVar1 == 0x22) || (sVar1 == 0x27)) goto LAB_004d857f;
      if (sVar1 == 0x3e) {
        *param_1 = *param_1 + 2;
        return;
      }
      *param_1 = (int)(psVar2 + 1);
    }
    sVar1 = *(short *)*param_1;
  } while( true );
}


/* FUN_004d85c0 @ 004d85c0  kind=gamemisc  attributed-by=none  size=112 */

void FUN_004d85c0(int *param_1)

{
  short sVar1;
  short *psVar2;
  int in_ECX;
  
  *param_1 = *param_1 + 2;
  sVar1 = *(short *)*param_1;
  do {
    if (sVar1 == 0) {
      *(int *)(in_ECX + 0x48) = *param_1;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),9);
    }
    psVar2 = (short *)*param_1;
    if (((*psVar2 == 0x3c) && (psVar2[1] == 0x21)) && (psVar2[2] == 0x5b)) {
      FUN_004d85c0(param_1);
    }
    else {
      if (((*psVar2 == 0x5d) && (psVar2[1] == 0x5d)) && (psVar2[2] == 0x3e)) {
        *param_1 = *param_1 + 6;
        return;
      }
      *param_1 = (int)(psVar2 + 1);
    }
    sVar1 = *(short *)*param_1;
  } while( true );
}


/* FUN_004d8630 @ 004d8630  kind=gamemisc  attributed-by=none  size=275 */

void FUN_004d8630(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int in_ECX;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  if ((sVar1 == 0x22) || (sVar1 == 0x27)) {
    psVar3 = psVar3 + 1;
    *param_1 = psVar3;
    sVar2 = *psVar3;
    while ((sVar2 != 0 && (*psVar3 != sVar1))) {
      psVar3 = psVar3 + 1;
      *param_1 = psVar3;
      sVar2 = *psVar3;
    }
    psVar3 = (short *)*param_1;
    if (*psVar3 != 0) {
      *param_1 = psVar3 + 1;
      return;
    }
    *(short **)(in_ECX + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
    longjmp((int *)(in_ECX + 8),9);
  }
  if (sVar1 == 0x3c) {
    if (psVar3[1] == 0x3f) {
      *param_1 = psVar3 + 2;
      sVar1 = psVar3[2];
      while ((sVar1 != 0 && ((psVar3 = (short *)*param_1, *psVar3 != 0x3f || (psVar3[1] != 0x3e)))))
      {
        *param_1 = psVar3 + 1;
        sVar1 = psVar3[1];
      }
      psVar3 = (short *)*param_1;
      if (*psVar3 != 0) {
        *param_1 = psVar3 + 2;
        return;
      }
    }
    else if (((psVar3[1] == 0x21) && (psVar3[2] == 0x2d)) && (psVar3[3] == 0x2d)) {
      *param_1 = psVar3 + 4;
      sVar1 = psVar3[4];
      while ((sVar1 != 0 &&
             (((psVar3 = (short *)*param_1, *psVar3 != 0x2d || (psVar3[1] != 0x2d)) ||
              (psVar3[2] != 0x3e))))) {
        *param_1 = psVar3 + 1;
        sVar1 = psVar3[1];
      }
      psVar3 = (short *)*param_1;
      if (*psVar3 != 0) {
        *param_1 = psVar3 + 4;
        return;
      }
      *(short **)(in_ECX + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),9);
    }
  }
  *(short **)(in_ECX + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)(in_ECX + 8),9);
}


/* FUN_004d8750 @ 004d8750  kind=gamemisc  attributed-by=none  size=182 */

ushort * FUN_004d8750(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  code *pcVar5;
  ushort *puVar6;
  int iVar7;
  
  puVar4 = (ushort *)0x0;
  iVar7 = 0;
  pcVar5 = memmove_exref;
  while( true ) {
    while( true ) {
      puVar6 = param_1;
      if (*puVar6 < 0x80) {
        bVar2 = (&DAT_00703680)[*puVar6];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 2) != 0) break;
      param_1 = puVar6 + 1;
    }
    uVar1 = *puVar6;
    if (uVar1 == param_2) break;
    if (uVar1 == 0xd) {
      *puVar6 = 10;
      param_1 = puVar6 + 1;
      if (*param_1 == 10) {
        if (puVar4 != (ushort *)0x0) {
          (*pcVar5)(puVar4 + -iVar7,puVar4,(int)param_1 - (int)puVar4);
          pcVar5 = memmove_exref;
        }
        puVar4 = puVar6 + 2;
        iVar7 = iVar7 + 1;
        param_1 = puVar4;
      }
    }
    else {
      if (uVar1 == 0) {
        return (ushort *)0x0;
      }
      param_1 = puVar6 + 1;
    }
  }
  puVar3 = puVar6;
  if (puVar4 != (ushort *)0x0) {
    (*pcVar5)(puVar4 + -iVar7,puVar4,(int)puVar6 - (int)puVar4);
    puVar3 = puVar6 + -iVar7;
  }
  *puVar3 = 0;
  return puVar6 + 1;
}


/* FUN_004d8810 @ 004d8810  kind=gamemisc  attributed-by=none  size=226 */

ushort * FUN_004d8810(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  code *pcVar5;
  ushort *puVar6;
  int iVar7;
  ushort *local_10;
  int local_c;
  undefined4 local_8;
  
  puVar4 = (ushort *)0x0;
  iVar7 = 0;
  local_8 = 0x80;
  pcVar5 = memmove_exref;
  local_10 = puVar4;
  local_c = iVar7;
  while( true ) {
    while( true ) {
      puVar6 = param_1;
      if (*puVar6 < (ushort)local_8) {
        bVar2 = (&DAT_00703680)[*puVar6];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 2) != 0) break;
      param_1 = puVar6 + 1;
    }
    uVar1 = *puVar6;
    if (uVar1 == param_2) break;
    if (uVar1 == 0xd) {
      *puVar6 = 10;
      param_1 = puVar6 + 1;
      if (*param_1 == 10) {
        if (puVar4 != (ushort *)0x0) {
          (*pcVar5)(puVar4 + -iVar7,puVar4,(int)param_1 - (int)puVar4);
          pcVar5 = memmove_exref;
        }
        puVar4 = puVar6 + 2;
        iVar7 = iVar7 + 1;
        param_1 = puVar4;
        local_10 = puVar4;
        local_c = iVar7;
      }
    }
    else if (uVar1 == 0x26) {
      param_1 = (ushort *)FUN_004d96f0(puVar6,&local_10);
      puVar4 = local_10;
      pcVar5 = memmove_exref;
      iVar7 = local_c;
    }
    else {
      if (uVar1 == 0) {
        return (ushort *)0x0;
      }
      param_1 = puVar6 + 1;
    }
  }
  puVar3 = puVar6;
  if (puVar4 != (ushort *)0x0) {
    (*pcVar5)(puVar4 + -iVar7,puVar4,(int)puVar6 - (int)puVar4);
    puVar3 = puVar6 + -iVar7;
  }
  *puVar3 = 0;
  return puVar6 + 1;
}


/* FUN_004d8900 @ 004d8900  kind=gamemisc  attributed-by=none  size=869 */

void FUN_004d8900(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short sVar5;
  int in_ECX;
  short *local_8;
  
  iVar3 = *param_1;
  local_8 = (short *)(iVar3 + 2);
  sVar1 = *local_8;
  sVar5 = (short)param_4;
  if (sVar1 != 0x2d) {
    if (sVar1 == 0x5b) {
      local_8 = (short *)(iVar3 + 4);
      if (((((*(short *)(iVar3 + 4) == 0x43) &&
            (local_8 = (short *)(iVar3 + 6), *(short *)(iVar3 + 6) == 0x44)) &&
           (local_8 = (short *)(iVar3 + 8), *(short *)(iVar3 + 8) == 0x41)) &&
          ((local_8 = (short *)(iVar3 + 10), *(short *)(iVar3 + 10) == 0x54 &&
           (local_8 = (short *)(iVar3 + 0xc), *(short *)(iVar3 + 0xc) == 0x41)))) &&
         (local_8 = (short *)(iVar3 + 0xe), *(short *)(iVar3 + 0xe) == 0x5b)) {
        local_8 = (short *)(iVar3 + 0x10);
        if ((param_3 & 4) != 0) {
          iVar3 = FUN_004d6fe0(param_2);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            longjmp((int *)(in_ECX + 8),3);
          }
          *(short **)(iVar3 + 0xc) = local_8;
          if ((param_3 & 0x20) == 0) {
            sVar1 = *local_8;
            psVar4 = local_8;
            while (local_8 = psVar4, sVar1 != 0) {
              if (((sVar1 == 0x5d) && (psVar4[1] == 0x5d)) &&
                 ((psVar4[2] == 0x3e || ((psVar4[2] == 0 && (sVar5 == 0x3e)))))) {
                if (*psVar4 != 0) {
                  *psVar4 = 0;
                  goto LAB_004d8b8d;
                }
                break;
              }
              psVar4 = psVar4 + 1;
              sVar1 = *psVar4;
            }
          }
          else {
            psVar4 = (short *)FUN_004d9520(local_8,param_4);
            if (psVar4 != (short *)0x0) goto LAB_004d8b93;
            psVar4 = *(short **)(iVar3 + 0xc);
            local_8 = (short *)0x0;
          }
          *(short **)(in_ECX + 0x48) = psVar4;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),8);
        }
        sVar1 = *local_8;
        psVar4 = local_8;
        while (local_8 = psVar4, sVar1 != 0) {
          if (((sVar1 == 0x5d) && (psVar4[1] == 0x5d)) &&
             ((psVar4[2] == 0x3e || ((psVar4[2] == 0 && (sVar5 == 0x3e)))))) {
            if (*psVar4 != 0) goto LAB_004d8b8d;
            break;
          }
          psVar4 = psVar4 + 1;
          sVar1 = *psVar4;
        }
      }
LAB_004d8c47:
      *(short **)(in_ECX + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),8);
    }
    if (((((sVar1 == 0x44) && (*(short *)(iVar3 + 4) == 0x4f)) && (*(short *)(iVar3 + 6) == 0x43))
        && ((*(short *)(iVar3 + 8) == 0x54 && (*(short *)(iVar3 + 10) == 0x59)))) &&
       (*(short *)(iVar3 + 0xc) == 0x50)) {
      if (*(short *)(iVar3 + 0xe) == 0x45) {
        local_8 = (short *)(iVar3 + -2);
        FUN_004d8510(&local_8,param_4,1);
        goto LAB_004d8c19;
      }
      if ((*(short *)(iVar3 + 0xe) == 0) && (sVar5 == 0x45)) {
        *(short **)(in_ECX + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
        longjmp((int *)(in_ECX + 8),9);
      }
    }
    if (sVar1 == 0) {
      if (sVar5 == 0x2d) goto LAB_004d8c32;
      if (sVar5 == 0x5b) goto LAB_004d8c47;
    }
    *(short **)(in_ECX + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
    longjmp((int *)(in_ECX + 8),5);
  }
  local_8 = (short *)(iVar3 + 4);
  if (*local_8 == 0x2d) {
    local_8 = (short *)(iVar3 + 6);
    uVar2 = param_3 & 2;
    if (uVar2 != 0) {
      param_2 = FUN_004d6fe0(param_2);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        longjmp((int *)(in_ECX + 8),3);
      }
      *(short **)(param_2 + 0xc) = local_8;
    }
    if (((param_3 & 0x20) != 0) && (uVar2 != 0)) {
      local_8 = (short *)FUN_004d9600(local_8,param_4);
      if (local_8 == (short *)0x0) {
        *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_2 + 0xc);
                    /* WARNING: Subroutine does not return */
        longjmp((int *)(in_ECX + 8),7);
      }
LAB_004d8c19:
      *param_1 = (int)local_8;
      return;
    }
    sVar1 = *local_8;
    while (sVar1 != 0) {
      if (((sVar1 == 0x2d) && (local_8[1] == 0x2d)) &&
         ((local_8[2] == 0x3e || ((local_8[2] == 0 && (sVar5 == 0x3e)))))) {
        if (*local_8 != 0) {
          if (uVar2 != 0) {
            *local_8 = 0;
          }
          *param_1 = (int)(local_8 + (local_8[2] == 0x3e) + 2);
          return;
        }
        break;
      }
      local_8 = local_8 + 1;
      sVar1 = *local_8;
    }
  }
LAB_004d8c32:
  *(short **)(in_ECX + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)(in_ECX + 8),7);
LAB_004d8b8d:
  psVar4 = psVar4 + 1;
LAB_004d8b93:
  *param_1 = (int)(psVar4 + (psVar4[1] == 0x3e) + 1);
  return;
}


/* FUN_004d8c70 @ 004d8c70  kind=gamemisc  attributed-by=none  size=631 */

void FUN_004d8c70(int *param_1,int *param_2,uint param_3,short param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  undefined4 *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  
  puVar7 = (undefined4 *)*param_2;
  iVar5 = *param_1;
  puVar8 = (ushort *)(iVar5 + 2);
  if (*puVar8 < 0x80) {
    cVar2 = (&DAT_00703680)[*puVar8];
  }
  else {
    cVar2 = -0x40;
  }
  puVar9 = puVar8;
  if (cVar2 < '\0') {
    while( true ) {
      if (*puVar9 < 0x80) {
        bVar3 = (&DAT_00703680)[*puVar9];
      }
      else {
        bVar3 = 0xc0;
      }
      if ((bVar3 & 0x40) == 0) break;
      puVar9 = puVar9 + 1;
    }
    if (*puVar9 == 0) {
      *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),6);
    }
    if (((((*puVar8 | 0x20) == 0x78) && ((*(ushort *)(iVar5 + 4) | 0x20) == 0x6d)) &&
        ((*(ushort *)(iVar5 + 6) | 0x20) == 0x6c)) && ((ushort *)(iVar5 + 8) == puVar9)) {
      bVar1 = true;
      param_3 = param_3 & 0x100;
    }
    else {
      bVar1 = false;
      param_3 = param_3 & 1;
    }
    if (param_3 == 0) {
      uVar4 = *puVar9;
      do {
        if ((uVar4 == 0x3f) && ((puVar9[1] == 0x3e || ((puVar9[1] == 0 && (param_4 == 0x3e)))))) {
          if (*puVar9 != 0) {
            uVar6 = (puVar9[1] == 0x3e) + 1;
            goto LAB_004d8ed1;
          }
          break;
        }
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 1;
      } while (uVar4 != 0);
    }
    else {
      if (bVar1) {
        if (((byte)*puVar7 & 7) != 1) {
          *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),6);
        }
        iVar5 = FUN_004d6fe0(puVar7);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),3);
        }
      }
      else {
        iVar5 = FUN_004d6fe0(puVar7);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),3);
        }
      }
      *(ushort **)(iVar5 + 8) = puVar8;
      uVar4 = *puVar9;
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
      if (uVar4 == 0x3f) {
        uVar4 = *puVar9;
        if ((uVar4 != 0x3e) && ((uVar4 != 0 || (param_4 != 0x3e)))) {
          *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),6);
        }
        puVar7 = *(undefined4 **)(iVar5 + 4);
        uVar6 = (uint)(uVar4 == 0x3e);
LAB_004d8ed1:
        *param_1 = (int)(puVar9 + uVar6);
        *param_2 = (int)puVar7;
        return;
      }
      if (uVar4 < 0x80) {
        bVar3 = (&DAT_00703680)[uVar4];
      }
      else {
        bVar3 = 0;
      }
      if ((bVar3 & 8) != 0) {
        while( true ) {
          if (*puVar9 < 0x80) {
            bVar3 = (&DAT_00703680)[*puVar9];
          }
          else {
            bVar3 = 0;
          }
          if ((bVar3 & 8) == 0) break;
          puVar9 = puVar9 + 1;
        }
        puVar8 = puVar9;
        if (*puVar9 != 0) {
          do {
            if ((*puVar8 == 0x3f) &&
               ((puVar8[1] == 0x3e || ((puVar8[1] == 0 && (param_4 == 0x3e)))))) break;
            puVar8 = puVar8 + 1;
          } while (*puVar8 != 0);
          if (*puVar8 != 0) {
            if (bVar1) {
              *puVar8 = 0x2f;
              *param_1 = (int)puVar9;
              *param_2 = iVar5;
              return;
            }
            *(ushort **)(iVar5 + 0xc) = puVar9;
            puVar7 = *(undefined4 **)(iVar5 + 4);
            *puVar8 = 0;
            puVar9 = puVar8 + 1;
            uVar6 = (uint)(*puVar9 == 0x3e);
            goto LAB_004d8ed1;
          }
        }
        *(ushort **)(in_ECX + 0x48) = puVar8;
                    /* WARNING: Subroutine does not return */
        longjmp((int *)(in_ECX + 8),6);
      }
    }
  }
  *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)(in_ECX + 8),6);
}


/* FUN_004d8ef0 @ 004d8ef0  kind=gamemisc  attributed-by=none  size=78 */

ushort * FUN_004d8ef0(ushort *param_1,ushort param_2)

{
  byte bVar1;
  
  while( true ) {
    while( true ) {
      if (*param_1 < 0x80) {
        bVar1 = (&DAT_00703680)[*param_1];
      }
      else {
        bVar1 = 0;
      }
      if ((bVar1 & 2) != 0) break;
      param_1 = param_1 + 1;
    }
    if (*param_1 == param_2) break;
    if (*param_1 == 0) {
      return (ushort *)0x0;
    }
    param_1 = param_1 + 1;
  }
  *param_1 = 0;
  return param_1 + 1;
}


/* FUN_004d9000 @ 004d9000  kind=gamemisc  attributed-by=none  size=202 */

ushort * FUN_004d9000(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      puVar4 = param_1;
      if (*puVar4 < 0x80) {
        bVar2 = (&DAT_00703680)[*puVar4];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 4) != 0) break;
      param_1 = puVar4 + 1;
    }
    uVar1 = *puVar4;
    if (uVar1 == param_2) break;
    if (uVar1 < 0x80) {
      bVar2 = (&DAT_00703680)[uVar1];
    }
    else {
      bVar2 = 0;
    }
    if ((bVar2 & 8) == 0) {
      if (uVar1 == 0) {
        return (ushort *)0x0;
      }
      param_1 = puVar4 + 1;
    }
    else {
      *puVar4 = 0x20;
      param_1 = puVar4 + 1;
      if ((uVar1 == 0xd) && (*param_1 == 10)) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar5,_Src,(int)param_1 - (int)_Src);
        }
        _Src = puVar4 + 2;
        iVar5 = iVar5 + 1;
        param_1 = _Src;
      }
    }
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + 1;
}


/* FUN_004d90d0 @ 004d90d0  kind=gamemisc  attributed-by=none  size=254 */

ushort * FUN_004d90d0(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *_Src;
  ushort *puVar5;
  int iVar6;
  ushort *local_c;
  int local_8;
  
  local_c = (ushort *)0x0;
  local_8 = 0;
  iVar6 = local_8;
  _Src = local_c;
  while( true ) {
    while( true ) {
      puVar5 = param_1;
      if (*puVar5 < 0x80) {
        bVar2 = (&DAT_00703680)[*puVar5];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 4) != 0) break;
      param_1 = puVar5 + 1;
    }
    uVar1 = *puVar5;
    uVar4 = (uint)uVar1;
    if (uVar1 == param_2) break;
    if (uVar1 < 0x80) {
      bVar2 = (&DAT_00703680)[uVar4];
    }
    else {
      bVar2 = 0;
    }
    if ((bVar2 & 8) == 0) {
      if (uVar4 == 0x26) {
        param_1 = (ushort *)FUN_004d96f0(puVar5,&local_c);
        iVar6 = local_8;
        _Src = local_c;
      }
      else {
        if (uVar1 == 0) {
          return (ushort *)0x0;
        }
        param_1 = puVar5 + 1;
      }
    }
    else {
      *puVar5 = 0x20;
      param_1 = puVar5 + 1;
      if ((uVar4 == 0xd) && (*param_1 == 10)) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar6,_Src,(int)param_1 - (int)_Src);
        }
        local_c = puVar5 + 2;
        local_8 = iVar6 + 1;
        param_1 = local_c;
        iVar6 = local_8;
        _Src = local_c;
      }
    }
  }
  puVar3 = puVar5;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar6,_Src,(int)puVar5 - (int)_Src);
    puVar3 = puVar5 + -iVar6;
  }
  *puVar3 = 0;
  return puVar5 + 1;
}


/* FUN_004d91d0 @ 004d91d0  kind=gamemisc  attributed-by=none  size=362 */

ushort * FUN_004d91d0(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  
  puVar4 = (ushort *)0x0;
  iVar5 = 0;
  if (*param_1 < 0x80) {
    bVar2 = (&DAT_00703680)[*param_1];
  }
  else {
    bVar2 = 0;
  }
  puVar6 = param_1;
  if ((bVar2 & 8) != 0) {
    do {
      puVar4 = puVar6 + 1;
      if (puVar6[1] < 0x80) {
        bVar2 = (&DAT_00703680)[puVar6[1]];
      }
      else {
        bVar2 = 0;
      }
      puVar6 = puVar4;
    } while ((bVar2 & 8) != 0);
    iVar5 = (int)puVar4 - (int)param_1 >> 1;
    puVar4 = param_1 + iVar5;
    param_1 = puVar4;
  }
  while( true ) {
    while( true ) {
      puVar6 = param_1;
      if (*puVar6 < 0x80) {
        bVar2 = (&DAT_00703680)[*puVar6];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 0xc) != 0) break;
      param_1 = puVar6 + 1;
    }
    uVar1 = *puVar6;
    if (uVar1 == param_2) break;
    if (uVar1 < 0x80) {
      bVar2 = (&DAT_00703680)[uVar1];
    }
    else {
      bVar2 = 0;
    }
    if ((bVar2 & 8) == 0) {
      if (uVar1 == 0) {
        return (ushort *)0x0;
      }
      param_1 = puVar6 + 1;
    }
    else {
      *puVar6 = 0x20;
      param_1 = puVar6 + 1;
      if (puVar6[1] < 0x80) {
        bVar2 = (&DAT_00703680)[puVar6[1]];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 8) != 0) {
        puVar6 = puVar6 + 2;
        while( true ) {
          if (*puVar6 < 0x80) {
            bVar2 = (&DAT_00703680)[*puVar6];
          }
          else {
            bVar2 = 0;
          }
          if ((bVar2 & 8) == 0) break;
          puVar6 = puVar6 + 1;
        }
        iVar7 = (int)puVar6 - (int)param_1 >> 1;
        if (puVar4 != (ushort *)0x0) {
          memmove(puVar4 + -iVar5,puVar4,(int)param_1 - (int)puVar4);
        }
        puVar4 = param_1 + iVar7;
        iVar5 = iVar5 + iVar7;
        param_1 = puVar4;
      }
    }
  }
  puVar3 = puVar6;
  if (puVar4 != (ushort *)0x0) {
    memmove(puVar4 + -iVar5,puVar4,(int)puVar6 - (int)puVar4);
    puVar3 = puVar6 + -iVar5;
  }
  do {
    *puVar3 = 0;
    if (puVar3[-1] < 0x80) {
      bVar2 = (&DAT_00703680)[puVar3[-1]];
    }
    else {
      bVar2 = 0;
    }
    puVar3 = puVar3 + -1;
  } while ((bVar2 & 8) != 0);
  return puVar6 + 1;
}


/* FUN_004d9340 @ 004d9340  kind=gamemisc  attributed-by=none  size=415 */

ushort * FUN_004d9340(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  ushort *local_c;
  int local_8;
  
  local_c = (ushort *)0x0;
  local_8 = 0;
  if (*param_1 < 0x80) {
    bVar2 = (&DAT_00703680)[*param_1];
  }
  else {
    bVar2 = 0;
  }
  puVar4 = (ushort *)0x0;
  iVar6 = 0;
  puVar5 = param_1;
  if ((bVar2 & 8) != 0) {
    do {
      puVar4 = puVar5 + 1;
      if (puVar5[1] < 0x80) {
        bVar2 = (&DAT_00703680)[puVar5[1]];
      }
      else {
        bVar2 = 0;
      }
      puVar5 = puVar4;
    } while ((bVar2 & 8) != 0);
    iVar6 = (int)puVar4 - (int)param_1 >> 1;
    puVar4 = param_1 + iVar6;
    param_1 = puVar4;
    local_c = puVar4;
    local_8 = iVar6;
  }
  while( true ) {
    while( true ) {
      puVar5 = param_1;
      if (*puVar5 < 0x80) {
        bVar2 = (&DAT_00703680)[*puVar5];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 0xc) != 0) break;
      param_1 = puVar5 + 1;
    }
    uVar1 = *puVar5;
    if (uVar1 == param_2) break;
    if (uVar1 < 0x80) {
      bVar2 = (&DAT_00703680)[uVar1];
    }
    else {
      bVar2 = 0;
    }
    if ((bVar2 & 8) == 0) {
      if (uVar1 == 0x26) {
        param_1 = (ushort *)FUN_004d96f0(puVar5,&local_c);
        puVar4 = local_c;
        iVar6 = local_8;
      }
      else {
        if (uVar1 == 0) {
          return (ushort *)0x0;
        }
        param_1 = puVar5 + 1;
      }
    }
    else {
      *puVar5 = 0x20;
      param_1 = puVar5 + 1;
      if (puVar5[1] < 0x80) {
        bVar2 = (&DAT_00703680)[puVar5[1]];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 8) != 0) {
        puVar5 = puVar5 + 2;
        while( true ) {
          if (*puVar5 < 0x80) {
            bVar2 = (&DAT_00703680)[*puVar5];
          }
          else {
            bVar2 = 0;
          }
          if ((bVar2 & 8) == 0) break;
          puVar5 = puVar5 + 1;
        }
        iVar7 = (int)puVar5 - (int)param_1 >> 1;
        if (puVar4 != (ushort *)0x0) {
          memmove(puVar4 + -iVar6,puVar4,(int)param_1 - (int)puVar4);
        }
        puVar4 = param_1 + iVar7;
        iVar6 = iVar6 + iVar7;
        param_1 = puVar4;
        local_c = puVar4;
        local_8 = iVar6;
      }
    }
  }
  puVar3 = puVar5;
  if (puVar4 != (ushort *)0x0) {
    memmove(puVar4 + -iVar6,puVar4,(int)puVar5 - (int)puVar4);
    puVar3 = puVar5 + -iVar6;
  }
  do {
    *puVar3 = 0;
    if (puVar3[-1] < 0x80) {
      bVar2 = (&DAT_00703680)[puVar3[-1]];
    }
    else {
      bVar2 = 0;
    }
    puVar3 = puVar3 + -1;
  } while ((bVar2 & 8) != 0);
  return puVar5 + 1;
}


/* FUN_004d9520 @ 004d9520  kind=gamemisc  attributed-by=none  size=219 */

ushort * FUN_004d9520(ushort *param_1,short param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    return (ushort *)0x0;
  }
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        puVar4 = param_1;
        if (*puVar4 < 0x80) {
          bVar2 = (&DAT_00703680)[*puVar4];
        }
        else {
          bVar2 = 0;
        }
        if ((bVar2 & 0x10) != 0) break;
        param_1 = puVar4 + 1;
      }
      uVar1 = *puVar4;
      if (uVar1 != 0xd) break;
      *puVar4 = 10;
      param_1 = puVar4 + 1;
      if (*param_1 == 10) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar5,_Src,(int)param_1 - (int)_Src);
        }
        _Src = puVar4 + 2;
        iVar5 = iVar5 + 1;
        param_1 = _Src;
      }
    }
    if (((uVar1 == 0x5d) && (puVar4[1] == 0x5d)) &&
       ((puVar4[2] == 0x3e || ((puVar4[2] == 0 && (param_2 == 0x3e)))))) break;
    if (uVar1 == 0) {
      return (ushort *)0x0;
    }
    param_1 = puVar4 + 1;
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + 1;
}


/* FUN_004d9600 @ 004d9600  kind=gamemisc  attributed-by=none  size=232 */

ushort * FUN_004d9600(ushort *param_1,short param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    return (ushort *)0x0;
  }
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        puVar4 = param_1;
        if (*puVar4 < 0x80) {
          bVar2 = (&DAT_00703680)[*puVar4];
        }
        else {
          bVar2 = 0;
        }
        if ((bVar2 & 0x20) != 0) break;
        param_1 = puVar4 + 1;
      }
      uVar1 = *puVar4;
      if (uVar1 != 0xd) break;
      *puVar4 = 10;
      param_1 = puVar4 + 1;
      if (*param_1 == 10) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar5,_Src,(int)param_1 - (int)_Src);
        }
        _Src = puVar4 + 2;
        iVar5 = iVar5 + 1;
        param_1 = _Src;
      }
    }
    if (((uVar1 == 0x2d) && (puVar4[1] == 0x2d)) &&
       ((puVar4[2] == 0x3e || ((puVar4[2] == 0 && (param_2 == 0x3e)))))) break;
    if (uVar1 == 0) {
      return (ushort *)0x0;
    }
    param_1 = puVar4 + 1;
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + (puVar4[2] == 0x3e) + 2;
}


/* FUN_004d96f0 @ 004d96f0  kind=gamemisc  attributed-by=none  size=489 */

short * FUN_004d96f0(short *param_1)

{
  short *psVar1;
  ushort *puVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  ushort uVar7;
  uint uVar8;
  
  psVar1 = param_1 + 1;
  psVar6 = psVar1;
  switch(*psVar1) {
  case 0x23:
    iVar4 = 0;
    if (param_1[2] == 0x78) {
      uVar8 = (uint)(ushort)param_1[3];
      psVar6 = param_1 + 3;
      if (uVar8 == 0x3b) {
        return psVar6;
      }
      while( true ) {
        while (uVar8 - 0x30 < 10) {
          puVar2 = (ushort *)(psVar6 + 1);
          iVar4 = iVar4 * 0x10 + -0x30 + uVar8;
          psVar6 = psVar6 + 1;
          uVar8 = (uint)*puVar2;
        }
        uVar5 = uVar8 | 0x20;
        if (5 < uVar5 - 0x61) break;
        uVar8 = (uint)(ushort)psVar6[1];
        iVar4 = iVar4 * 0x10 + -0x57 + uVar5;
        psVar6 = psVar6 + 1;
      }
      uVar7 = (ushort)uVar8;
    }
    else {
      uVar7 = param_1[2];
      uVar8 = (uint)uVar7;
      psVar6 = param_1 + 2;
      if (uVar8 == 0x3b) {
        return psVar6;
      }
      while (uVar8 - 0x30 < 10) {
        uVar7 = psVar6[1];
        psVar6 = psVar6 + 1;
        iVar4 = uVar8 + iVar4 * 10 + -0x30;
        uVar8 = (uint)uVar7;
      }
    }
    if (uVar7 == 0x3b) {
      param_1 = (short *)FUN_004d6f10(param_1,iVar4);
      FUN_004d94e0(&param_1,(int)(psVar6 + 1) - (int)param_1 >> 1);
      return psVar6 + 1;
    }
    break;
  case 0x61:
    psVar6 = param_1 + 2;
    if (param_1[2] == 0x6d) {
      psVar6 = param_1 + 3;
      if ((*psVar6 == 0x70) && (psVar6 = param_1 + 4, *psVar6 == 0x3b)) {
        uVar3 = 0x26;
        goto LAB_004d9801;
      }
    }
    else if ((((param_1[2] == 0x70) && (psVar6 = param_1 + 3, *psVar6 == 0x6f)) &&
             (psVar6 = param_1 + 4, *psVar6 == 0x73)) && (psVar6 = param_1 + 5, *psVar6 == 0x3b)) {
      uVar3 = 0x27;
      goto LAB_004d9801;
    }
    break;
  case 0x67:
    psVar6 = param_1 + 2;
    if ((*psVar6 == 0x74) && (psVar6 = param_1 + 3, *psVar6 == 0x3b)) {
      uVar3 = 0x3e;
LAB_004d9801:
      *param_1 = uVar3;
      param_1 = psVar1;
      FUN_004d94e0(&param_1,(int)psVar6 + (2 - (int)psVar1) >> 1);
      return psVar6 + 1;
    }
    break;
  case 0x6c:
    psVar6 = param_1 + 2;
    if ((*psVar6 == 0x74) && (psVar6 = param_1 + 3, *psVar6 == 0x3b)) {
      uVar3 = 0x3c;
      goto LAB_004d9801;
    }
    break;
  case 0x71:
    psVar6 = param_1 + 2;
    if ((((*psVar6 == 0x75) && (psVar6 = param_1 + 3, *psVar6 == 0x6f)) &&
        (psVar6 = param_1 + 4, *psVar6 == 0x74)) && (psVar6 = param_1 + 5, *psVar6 == 0x3b)) {
      uVar3 = 0x22;
      goto LAB_004d9801;
    }
  }
  return psVar6;
}


/* FUN_004d9950 @ 004d9950  kind=gamemisc  attributed-by=none  size=228 */

uint FUN_004d9950(ushort *param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *in_ECX;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if ((param_3 == 0) && (param_2 <= (uint)in_ECX[4])) {
    return param_2;
  }
  if (((uint)in_ECX[4] <= param_2) || (uVar7 = in_ECX[4] - param_2, uVar7 < param_3)) {
    return 0xffffffff;
  }
  iVar8 = uVar7 + (1 - param_3);
  puVar3 = in_ECX;
  if (7 < (uint)in_ECX[5]) {
    puVar3 = (undefined4 *)*in_ECX;
  }
  puVar4 = (ushort *)((int)puVar3 + param_2 * 2);
  do {
    if (iVar8 != 0) {
      puVar5 = puVar4;
      iVar6 = iVar8;
      do {
        if (*puVar5 == *param_1) goto LAB_004d99c7;
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    puVar5 = (ushort *)0x0;
LAB_004d99c7:
    puVar1 = puVar5;
    uVar7 = param_3;
    puVar2 = param_1;
    if (puVar5 == (ushort *)0x0) {
      return 0xffffffff;
    }
    while( true ) {
      if (uVar7 == 0) goto LAB_004d99e7;
      if (*puVar1 != *puVar2) break;
      puVar1 = puVar1 + 1;
      uVar7 = uVar7 - 1;
      puVar2 = puVar2 + 1;
    }
    if ((-(uint)(*puVar1 < *puVar2) & 0xfffffffe) == 0xffffffff) {
LAB_004d99e7:
      if (7 < (uint)in_ECX[5]) {
        in_ECX = (undefined4 *)*in_ECX;
      }
      return (int)puVar5 - (int)in_ECX >> 1;
    }
    iVar8 = iVar8 + (-1 - ((int)puVar5 - (int)puVar4 >> 1));
    puVar4 = puVar5 + 1;
  } while( true );
}


/* FUN_004d9a40 @ 004d9a40  kind=gamemisc  attributed-by=none  size=135 */

int FUN_004d9a40(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8e11;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_004da730();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  local_8 = 1;
  if ((undefined2 *)(iVar1 + 0x10) != (undefined2 *)0x0) {
    *(undefined4 *)(iVar1 + 0x24) = 7;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined2 *)(iVar1 + 0x10) = 0;
    FUN_0040f680(param_1,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_004d9b10 @ 004d9b10  kind=gamemisc  attributed-by=none  size=116 */

void FUN_004d9b10(int *param_1,undefined4 param_2)

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
  uVar7 = FUN_004d9b90(*(undefined4 *)(*param_1 + 4),iVar2,param_2);
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


/* FUN_004d9b90 @ 004d9b90  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * FUN_004d9b90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8e30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)*in_ECX;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_004d9a40(param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_004d9b90(*param_1,puVar1,param_3);
    *puVar1 = uVar2;
    uVar2 = FUN_004d9b90(param_1[2],puVar1,param_3);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_004d9c50 @ 004d9c50  kind=gamemisc  attributed-by=none  size=511 */

void FUN_004d9c50(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (0x6666664 < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_004d9a40(param_4);
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
      goto LAB_004d9cae;
    }
    param_3[2] = piVar3;
    iVar4 = *in_ECX;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_004d9cae;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_004d9cae:
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
        goto LAB_004d9e2a;
      }
LAB_004d9d81:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_004d9d81;
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
LAB_004d9e2a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_004d9e50 @ 004d9e50  kind=gamemisc  attributed-by=none  size=511 */

void FUN_004d9e50(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (0x6666664 < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_004d9ae0(param_4);
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
      goto LAB_004d9eae;
    }
    param_3[2] = piVar3;
    iVar4 = *in_ECX;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_004d9eae;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_004d9eae:
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
        goto LAB_004da02a;
      }
LAB_004d9f81:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_004d9f81;
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
LAB_004da02a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_004da050 @ 004da050  kind=gamemisc  attributed-by=none  size=319 */

void FUN_004da050(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_ECX;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar5 = param_3;
  puStack_c = &LAB_006e8e50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar7 = true;
  local_8 = 0;
  puVar1 = (undefined4 *)*in_ECX;
  puVar4 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  while (*(char *)((int)puVar4 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      piVar3 = puVar4 + 4;
      if (7 < (uint)puVar4[9]) {
        piVar3 = (int *)*piVar3;
      }
      iVar2 = FUN_00428db0(0,puVar5[4],piVar3,puVar4[8]);
      bVar7 = iVar2 < 0;
    }
    else {
      puVar1 = puVar5;
      if (7 < (uint)puVar5[5]) {
        puVar1 = (undefined4 *)*puVar5;
      }
      iVar2 = FUN_00428db0(0,puVar4[8],puVar1,puVar5[4]);
      bVar7 = -1 < iVar2;
    }
    puVar1 = puVar4;
    if (bVar7 == false) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  param_2 = puVar1;
  if (bVar7 != false) {
    if (puVar1 == *(undefined4 **)*in_ECX) {
      puVar4 = &param_2;
      bVar7 = true;
      goto LAB_004da111;
    }
    FUN_0042c740();
  }
  puVar4 = param_2;
  puVar6 = puVar5;
  if (7 < (uint)puVar5[5]) {
    puVar6 = (undefined4 *)*puVar5;
  }
  iVar2 = FUN_00428db0(0,param_2[8],puVar6,puVar5[4]);
  if (-1 < iVar2) {
    *param_1 = puVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar4 = &param_3;
LAB_004da111:
  puVar5 = (undefined4 *)FUN_004d9c50(puVar4,bVar7,puVar1,puVar5,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004da1a0 @ 004da1a0  kind=gamemisc  attributed-by=none  size=319 */

void FUN_004da1a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_ECX;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar5 = param_3;
  puStack_c = &LAB_006e8e70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar7 = true;
  local_8 = 0;
  puVar1 = (undefined4 *)*in_ECX;
  puVar4 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  while (*(char *)((int)puVar4 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      piVar3 = puVar4 + 4;
      if (7 < (uint)puVar4[9]) {
        piVar3 = (int *)*piVar3;
      }
      iVar2 = FUN_00428db0(0,puVar5[4],piVar3,puVar4[8]);
      bVar7 = iVar2 < 0;
    }
    else {
      puVar1 = puVar5;
      if (7 < (uint)puVar5[5]) {
        puVar1 = (undefined4 *)*puVar5;
      }
      iVar2 = FUN_00428db0(0,puVar4[8],puVar1,puVar5[4]);
      bVar7 = -1 < iVar2;
    }
    puVar1 = puVar4;
    if (bVar7 == false) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  param_2 = puVar1;
  if (bVar7 != false) {
    if (puVar1 == *(undefined4 **)*in_ECX) {
      puVar4 = &param_2;
      bVar7 = true;
      goto LAB_004da261;
    }
    FUN_0042c740();
  }
  puVar4 = param_2;
  puVar6 = puVar5;
  if (7 < (uint)puVar5[5]) {
    puVar6 = (undefined4 *)*puVar5;
  }
  iVar2 = FUN_00428db0(0,param_2[8],puVar6,puVar5[4]);
  if (-1 < iVar2) {
    *param_1 = puVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar4 = &param_3;
LAB_004da261:
  puVar5 = (undefined4 *)FUN_004d9e50(puVar4,bVar7,puVar1,puVar5,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004da2f0 @ 004da2f0  kind=gamemisc  attributed-by=none  size=129 */

void FUN_004da2f0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined1 local_c [8];
  
  do {
    do {
      while( true ) {
        do {
          piVar3 = param_1;
          if (piVar3 == param_2) {
            return;
          }
          FUN_004da050(local_c,0,piVar3 + 4,DAT_0076b2a6);
          param_1 = piVar3;
        } while (*(char *)((int)piVar3 + 0xd) != '\0');
        param_1 = (int *)piVar3[2];
        if (*(char *)((int)param_1 + 0xd) != '\0') break;
        cVar1 = *(char *)(*param_1 + 0xd);
        piVar3 = (int *)*param_1;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          param_1 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      param_1 = (int *)piVar3[1];
    } while (*(char *)((int)param_1 + 0xd) != '\0');
    do {
      if (piVar3 != (int *)param_1[2]) break;
      piVar2 = (int *)param_1[1];
      piVar3 = param_1;
      param_1 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
  } while( true );
}


/* FUN_004da730 @ 004da730  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * FUN_004da730(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x28);
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


/* FUN_004da770 @ 004da770  kind=gamemisc  attributed-by=none  size=141 */

void FUN_004da770(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = param_1;
  if (param_1 != 0) {
    piVar3 = (int *)(param_1 + 4);
    FUN_004da2f0(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
    piVar1 = (int *)(param_1 + 0xc);
    if (piVar1 != piVar3) {
      FUN_00661940(*(undefined4 *)(*piVar1 + 4));
      param_1 = param_1 & 0xffffff00;
      *(int *)(*piVar1 + 4) = *piVar1;
      *(int *)*piVar1 = *piVar1;
      *(int *)(*piVar1 + 8) = *piVar1;
      *(undefined4 *)(uVar2 + 0x10) = 0;
      FUN_004d9b10(piVar3,param_1);
    }
    piVar3 = (int *)**(int **)(uVar2 + 0x38);
    if (piVar3 != *(int **)(uVar2 + 0x38)) {
      do {
        FUN_004da770(piVar3[2]);
        FUN_004da2f0(**(undefined4 **)(piVar3[2] + 0xc),*(undefined4 **)(piVar3[2] + 0xc));
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(uVar2 + 0x38));
    }
  }
  return;
}


/* FUN_004da800 @ 004da800  kind=gamemisc  attributed-by=none  size=75 */

undefined2 FUN_004da800(short param_1)

{
  if ((((((param_1 != 0x2e) && (param_1 != 0x3a)) && (param_1 != 0x2d)) &&
       ((param_1 != 0x2c && (param_1 != 0x3b)))) &&
      ((param_1 != 0x21 && ((param_1 != 0x3f && (param_1 != 0x2f)))))) &&
     ((param_1 != 0x28 && (param_1 != 0x29)))) {
    return 0;
  }
  return 1;
}


/* FUN_004da850 @ 004da850  kind=gamemisc  attributed-by=none  size=2102 */

/* WARNING: Type propagation algorithm not settling */

void FUN_004da850(undefined4 *param_1)

{
  short sVar1;
  int *piVar2;
  char cVar3;
  QuestTextNode *pQVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  short *******pppppppsVar9;
  undefined4 *puVar10;
  deleting_destructor *pdVar11;
  int in_ECX;
  uint extraout_ECX;
  uint uVar12;
  short *psVar13;
  undefined4 *extraout_EDX;
  uint uVar14;
  int in_stack_00000014;
  uint in_stack_00000018;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  int local_58;
  QuestTextNode *local_54;
  int local_50;
  short local_4c [2];
  QuestTextNode_vftable *local_48;
  int *local_44;
  uint local_40;
  QuestTextNode *local_3c;
  QuestTextNode *local_38;
  int local_34;
  QuestTextNode *local_30;
  short *******local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9005;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar10 = (undefined4 *)(in_ECX + 4);
  local_8 = 0;
  local_58 = in_ECX;
  if (*(undefined4 **)(in_ECX + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 4))(1,local_14);
    *puVar10 = 0;
  }
  local_54 = operator_new(0x44);
  local_8._0_1_ = 1;
  if (local_54 == (QuestTextNode *)0x0) {
    pQVar4 = (QuestTextNode *)0x0;
  }
  else {
    pQVar4 = cube::QuestTextNode::QuestTextNode(local_54);
  }
  *puVar10 = pQVar4;
  local_8._0_1_ = 0;
  FUN_00661940(*(undefined4 *)(*(int *)(in_ECX + 8) + 4));
  *(int *)(*(int *)(in_ECX + 8) + 4) = *(int *)(in_ECX + 8);
  *(undefined4 *)*(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 8);
  *(int *)(*(int *)(in_ECX + 8) + 8) = *(int *)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 0xc) = 0;
  local_40 = 0;
  piVar5 = (int *)FUN_0046d550(0,0);
  local_8._0_1_ = 2;
  local_44 = piVar5;
  iVar6 = FUN_00583cb0(piVar5,piVar5[1],puVar10);
  piVar5[1] = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  uVar14 = 1;
  local_40 = 1;
  local_54 = (QuestTextNode *)in_stack_00000014;
  local_50 = -1;
  local_34 = 0;
  uVar12 = in_stack_00000018;
  puVar10 = param_1;
  if (-1 < in_stack_00000014) {
    do {
      iVar6 = local_34;
      puVar7 = &param_1;
      if (7 < uVar12) {
        puVar7 = puVar10;
      }
      if (*(short *)((int)puVar7 + local_34 * 2) == 0x20) {
LAB_004da9f8:
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x7b) {
          local_30 = operator_new(0x44);
          local_8._0_1_ = 3;
          if (local_30 == (QuestTextNode *)0x0) {
            pQVar4 = (QuestTextNode *)0x0;
          }
          else {
            pQVar4 = cube::QuestTextNode::QuestTextNode(local_30);
          }
          (pQVar4->QuestTextNode_data).offset_0x3c = 2;
          local_38 = (QuestTextNode *)(*(int *)(piVar5[1] + 8) + 0x38);
          local_48 = local_38->vftablePtr;
          local_8._0_1_ = 2;
          local_3c = pQVar4;
          local_30 = (QuestTextNode *)
                     FUN_00583cb0(local_48,local_48[1].deleting_destructor,&local_3c);
          iVar6 = (local_38->QuestTextNode_data).offset_0x0;
          if (iVar6 == 0x15555554) goto LAB_004db0eb;
          (local_38->QuestTextNode_data).offset_0x0 = iVar6 + 1;
          local_48[1].deleting_destructor = (deleting_destructor *)local_30;
          *(QuestTextNode **)(local_30->QuestTextNode_data).offset_0x0 = local_30;
          (pQVar4->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
          iVar6 = FUN_00583cb0(piVar5,piVar5[1],&local_3c);
          if (uVar14 == 0x15555554) goto LAB_004db0eb;
          piVar5[1] = iVar6;
          **(int **)(iVar6 + 4) = iVar6;
          local_40 = uVar14 + 1;
          local_30 = operator_new(0x44);
          local_8._0_1_ = 4;
          if (local_30 == (QuestTextNode *)0x0) {
            local_3c = (QuestTextNode *)0x0;
          }
          else {
            local_3c = cube::QuestTextNode::QuestTextNode(local_30);
          }
          iVar6 = *(int *)(piVar5[1] + 8);
          local_30 = *(QuestTextNode **)(iVar6 + 0x38);
          local_8._0_1_ = 2;
          local_38 = local_3c;
          iVar8 = FUN_00583cb0(local_30,(local_30->QuestTextNode_data).offset_0x0,&local_38);
          if (*(int *)(iVar6 + 0x3c) == 0x15555554) goto LAB_004db0eb;
          *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + 1;
          (local_30->QuestTextNode_data).offset_0x0 = iVar8;
          **(int **)(iVar8 + 4) = iVar8;
          (local_3c->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
          iVar6 = FUN_00583cb0(piVar5,piVar5[1],&local_38);
          if (uVar14 + 1 == 0x15555554) goto LAB_004db0eb;
          piVar5[1] = iVar6;
          uVar14 = uVar14 + 2;
          **(int **)(iVar6 + 4) = iVar6;
          local_40 = uVar14;
          uVar12 = in_stack_00000018;
          puVar10 = param_1;
          iVar6 = local_34;
        }
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x5b) {
          local_30 = operator_new(0x44);
          local_8._0_1_ = 5;
          if (local_30 == (QuestTextNode *)0x0) {
            pQVar4 = (QuestTextNode *)0x0;
          }
          else {
            pQVar4 = cube::QuestTextNode::QuestTextNode(local_30);
          }
          (pQVar4->QuestTextNode_data).offset_0x3c = 3;
          local_30 = (QuestTextNode *)(*(int *)(piVar5[1] + 8) + 0x38);
          local_48 = local_30->vftablePtr;
          local_8._0_1_ = 2;
          local_38 = pQVar4;
          local_3c = (QuestTextNode *)
                     FUN_00583cb0(local_48,local_48[1].deleting_destructor,&local_38);
          iVar6 = (local_30->QuestTextNode_data).offset_0x0;
          if (iVar6 == 0x15555554) goto LAB_004db0eb;
          (local_30->QuestTextNode_data).offset_0x0 = iVar6 + 1;
          local_48[1].deleting_destructor = (deleting_destructor *)local_3c;
          *(QuestTextNode **)(local_3c->QuestTextNode_data).offset_0x0 = local_3c;
          (pQVar4->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
          iVar6 = FUN_00583cb0(piVar5,piVar5[1],&local_38);
          if (uVar14 == 0x15555554) goto LAB_004db0eb;
          piVar5[1] = iVar6;
          uVar14 = uVar14 + 1;
          **(int **)(iVar6 + 4) = iVar6;
          local_40 = uVar14;
          uVar12 = in_stack_00000018;
          puVar10 = param_1;
        }
        if (local_50 + 1 < local_34) {
LAB_004dac89:
          FUN_0043a450(local_2c,local_50 + 1,(local_34 - local_50) + -1);
          pppppppsVar9 = (short *******)local_2c;
          if (7 < local_18) {
            pppppppsVar9 = local_2c[0];
          }
          local_8._0_1_ = 6;
          if (*(short *)pppppppsVar9 == 0x23) {
            FUN_004da050(local_68,0,local_2c,DAT_0076b2a6);
          }
          else {
            pppppppsVar9 = (short *******)local_2c;
            if (7 < local_18) {
              pppppppsVar9 = local_2c[0];
            }
            if (*(short *)pppppppsVar9 == 0x24) {
              FUN_004da050(local_60,0,local_2c,DAT_0076b2a6);
            }
            else {
              local_30 = operator_new(0x44);
              local_8._0_1_ = 7;
              if (local_30 == (QuestTextNode *)0x0) {
                pQVar4 = (QuestTextNode *)0x0;
              }
              else {
                pQVar4 = cube::QuestTextNode::QuestTextNode(local_30);
              }
              local_8._0_1_ = 6;
              local_30 = pQVar4;
              if ((short ********)&(pQVar4->QuestTextNode_data).offset_0x18 != local_2c) {
                FUN_0040f680(local_2c,0,0xffffffff);
              }
              local_48 = (QuestTextNode_vftable *)(*(int *)(piVar5[1] + 8) + 0x38);
              local_38 = (QuestTextNode *)local_48->deleting_destructor;
              local_30 = (QuestTextNode *)
                         FUN_00583cb0(local_38,(local_38->QuestTextNode_data).offset_0x0,&local_30);
              if (local_48[1].deleting_destructor == (deleting_destructor *)0x15555554)
              goto LAB_004db0eb;
              local_48[1].deleting_destructor = local_48[1].deleting_destructor + 1;
              (local_38->QuestTextNode_data).offset_0x0 = local_30;
              *(QuestTextNode **)(local_30->QuestTextNode_data).offset_0x0 = local_30;
              (pQVar4->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
              puVar10 = &param_1;
              if (7 < in_stack_00000018) {
                puVar10 = param_1;
              }
              sVar1 = *(short *)((int)puVar10 + local_34 * 2);
              if (((((sVar1 == 0x2e) || (sVar1 == 0x3a)) || (sVar1 == 0x2d)) ||
                  (((sVar1 == 0x2c || (sVar1 == 0x3b)) ||
                   ((sVar1 == 0x21 || ((sVar1 == 0x3f || (sVar1 == 0x2f)))))))) ||
                 ((sVar1 == 0x28 || (sVar1 == 0x29)))) {
                puVar10 = &param_1;
                if (7 < in_stack_00000018) {
                  puVar10 = param_1;
                }
                local_4c[0] = *(short *)((int)puVar10 + local_34 * 2);
                local_4c[1] = 0;
                local_30 = operator_new(0x44);
                local_8._0_1_ = 8;
                if (local_30 == (QuestTextNode *)0x0) {
                  pQVar4 = (QuestTextNode *)0x0;
                }
                else {
                  pQVar4 = cube::QuestTextNode::QuestTextNode(local_30);
                }
                local_8._0_1_ = 6;
                local_30 = pQVar4;
                if (local_4c[0] == 0) {
                  iVar6 = 0;
                }
                else {
                  psVar13 = local_4c;
                  do {
                    sVar1 = *psVar13;
                    psVar13 = psVar13 + 1;
                  } while (sVar1 != 0);
                  iVar6 = (int)psVar13 - (int)(local_4c + 1) >> 1;
                }
                FUN_0040f7a0(local_4c,iVar6);
                (pQVar4->QuestTextNode_data).offset_0x3c = 1;
                (pQVar4->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
                iVar6 = *(int *)(piVar5[1] + 8);
                local_48 = *(QuestTextNode_vftable **)(iVar6 + 0x38);
                pdVar11 = (deleting_destructor *)
                          FUN_00583cb0(local_48,local_48[1].deleting_destructor,&local_30);
                if (*(int *)(iVar6 + 0x3c) == 0x15555554) goto LAB_004db0eb;
                *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + 1;
                local_48[1].deleting_destructor = pdVar11;
                **(undefined4 **)(pdVar11 + 4) = pdVar11;
              }
            }
          }
          local_8._0_1_ = 2;
          puVar10 = param_1;
          if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_2c[0]);
          }
        }
        else {
          puVar7 = &param_1;
          if (7 < uVar12) {
            puVar7 = puVar10;
          }
          sVar1 = *(short *)((int)puVar7 + local_34 * 2);
          if (((((((sVar1 == 0x2e) || (sVar1 == 0x3a)) || (sVar1 == 0x2d)) ||
                ((sVar1 == 0x2c || (sVar1 == 0x3b)))) ||
               ((sVar1 == 0x21 || ((sVar1 == 0x3f || (sVar1 == 0x2f)))))) || (sVar1 == 0x28)) ||
             (sVar1 == 0x29)) goto LAB_004dac89;
        }
        puVar7 = &param_1;
        if (7 < in_stack_00000018) {
          puVar7 = puVar10;
        }
        local_50 = local_34;
        if (*(short *)((int)puVar7 + local_34 * 2) == 0x7c) {
          if (uVar14 < 2) goto LAB_004db094;
          piVar2 = (int *)piVar5[1];
          if (piVar2 != piVar5) {
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar2);
          }
          local_30 = operator_new(0x44);
          local_8._0_1_ = 9;
          if (local_30 == (QuestTextNode *)0x0) {
            local_3c = (QuestTextNode *)0x0;
          }
          else {
            local_3c = cube::QuestTextNode::QuestTextNode(local_30);
          }
          iVar6 = *(int *)(piVar5[1] + 8);
          local_30 = *(QuestTextNode **)(iVar6 + 0x38);
          local_8._0_1_ = 2;
          local_38 = local_3c;
          iVar8 = FUN_00583cb0(local_30,(local_30->QuestTextNode_data).offset_0x0,&local_3c);
          if (*(int *)(iVar6 + 0x3c) == 0x15555554) {
LAB_004db0eb:
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + 1;
          (local_30->QuestTextNode_data).offset_0x0 = iVar8;
          **(int **)(iVar8 + 4) = iVar8;
          (local_38->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
          iVar6 = FUN_00583cb0(piVar5,piVar5[1],&local_3c);
          if (uVar14 == 0x15555554) goto LAB_004db0eb;
          piVar5[1] = iVar6;
          uVar14 = uVar14 + 1;
          **(int **)(iVar6 + 4) = iVar6;
          local_40 = uVar14;
          puVar10 = param_1;
        }
        puVar7 = &param_1;
        if (7 < in_stack_00000018) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + local_34 * 2) == 0x7d) {
          if (uVar14 < 3) goto LAB_004db094;
          piVar2 = (int *)piVar5[1];
          if (piVar2 != piVar5) {
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar2);
          }
          piVar2 = (int *)piVar5[1];
          if (piVar2 != piVar5) {
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar2);
          }
        }
        puVar7 = &param_1;
        if (7 < in_stack_00000018) {
          puVar7 = puVar10;
        }
        uVar12 = in_stack_00000018;
        iVar6 = local_34;
        if (*(short *)((int)puVar7 + local_34 * 2) == 0x5d) {
          if (uVar14 < 2) goto LAB_004db094;
          piVar2 = (int *)piVar5[1];
          if (piVar2 != piVar5) {
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar2);
          }
        }
      }
      else {
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + local_34 * 2) == 10) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + local_34 * 2) == 9) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + local_34 * 2) == 0) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        cVar3 = FUN_004da800(*(undefined2 *)((int)puVar7 + local_34 * 2));
        uVar12 = extraout_ECX;
        puVar10 = extraout_EDX;
        if (cVar3 != '\0') goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x7b) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x7d) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x5b) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x5d) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x7c) goto LAB_004da9f8;
      }
      local_34 = iVar6 + 1;
    } while (iVar6 + 1 <= (int)local_54);
  }
  FUN_004da770(*(undefined4 *)(local_58 + 4));
LAB_004db094:
  piVar2 = (int *)*piVar5;
  *piVar5 = (int)piVar5;
  piVar5[1] = (int)piVar5;
  if (piVar2 == piVar5) {
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar5);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar2);
}


/* FUN_004dc680 @ 004dc680  kind=gamemisc  attributed-by=none  size=155 */

void FUN_004dc680(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9100;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00451e80(param_1,*(undefined4 *)(param_1 + 4),param_2);
    if (*(int *)(in_ECX + 4) == 0x9249248) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = param_2 + 0x14;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004dc8e0 @ 004dc8e0  kind=gamemisc  attributed-by=none  size=2752 */

void FUN_004dc8e0(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *local_130;
  int local_128;
  undefined4 *local_124;
  int local_118;
  int local_10c;
  int local_108 [23];
  uint local_ac;
  uint uStack_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  uint local_50;
  uint uStack_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined8 local_30;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_006e9199;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00601cb0(local_14);
  local_128 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28) & 0xfffffffcU)) {
    do {
      iVar1 = local_128 * 4;
      iVar7 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
      if (iVar7 != 0) {
        FUN_004545a0(*(undefined4 *)(iVar7 + 0x30),*(undefined4 *)param_1[6],
                     (undefined4 *)param_1[6],local_108[0]);
        FUN_004540c0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x18),
                     *(undefined4 *)*param_1,(undefined4 *)*param_1,local_108[0]);
        iVar7 = *(int *)(in_ECX + 4);
        FUN_00477d90(local_108,*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x10);
        if (local_108[0] == *(int *)(iVar7 + 4)) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(local_108[0] + 0x18);
        }
        piVar11 = *(int **)param_1[4];
        if (piVar11 == (int *)param_1[4]) goto LAB_004dcb52;
        goto LAB_004dc9f7;
      }
      local_128 = local_128 + 1;
    } while (local_128 < *(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28) >> 2);
  }
  FUN_00601e90();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
LAB_004dc9f7:
  do {
    local_68 = piVar11[2] - *(uint *)(iVar7 + 0x10);
    iStack_64 = (piVar11[3] - *(int *)(iVar7 + 0x14)) -
                (uint)((uint)piVar11[2] < *(uint *)(iVar7 + 0x10));
    local_60 = piVar11[4] - *(uint *)(iVar7 + 0x18);
    iStack_5c = (piVar11[5] - *(int *)(iVar7 + 0x1c)) -
                (uint)((uint)piVar11[4] < *(uint *)(iVar7 + 0x18));
    local_58 = piVar11[6] - *(uint *)(iVar7 + 0x20);
    iStack_54 = (piVar11[7] - *(int *)(iVar7 + 0x24)) -
                (uint)((uint)piVar11[6] < *(uint *)(iVar7 + 0x20));
    local_3c = (float)CONCAT44(iStack_64,local_68) * 1.5258789e-05;
    local_38 = (float)CONCAT44(iStack_5c,local_60) * 1.5258789e-05;
    local_34 = (float)CONCAT44(iStack_54,local_58) * 1.5258789e-05;
    if (local_38 * local_38 + local_3c * local_3c + local_34 * local_34 < 40000.0) {
      iVar10 = *(int *)(*(int *)(in_ECX + 0x28) + local_128 * 4);
      iVar9 = *(int *)(iVar10 + 0x28);
      iVar8 = FUN_004520d0(iVar9,*(undefined4 *)(iVar9 + 4),piVar11 + 2);
      if (*(int *)(iVar10 + 0x2c) == 0x3333332) goto LAB_004dd5c9;
      *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 1;
      *(int *)(iVar9 + 4) = iVar8;
      **(int **)(iVar8 + 4) = iVar8;
    }
    piVar11 = (int *)*piVar11;
  } while (piVar11 != (int *)param_1[4]);
LAB_004dcb52:
  piVar11 = *(int **)param_1[2];
  if (piVar11 != (int *)param_1[2]) {
    do {
      local_48 = (float)*(longlong *)(iVar7 + 0x10) * 1.5258789e-05;
      local_44 = (float)*(longlong *)(iVar7 + 0x18) * 1.5258789e-05;
      uVar2 = *(undefined8 *)(piVar11 + 2);
      local_30._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      local_30._4_4_ = local_30._4_4_ - local_44;
      local_40 = (float)*(longlong *)(iVar7 + 0x20) * 1.5258789e-05;
      local_30._0_4_ = (float)uVar2;
      local_30._0_4_ = (float)local_30 - local_48;
      local_28 = (float)piVar11[4] - local_40;
      if (local_30._4_4_ * local_30._4_4_ + (float)local_30 * (float)local_30 + local_28 * local_28
          < 40000.0) {
        iVar10 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
        iVar9 = *(int *)(iVar10 + 0x20);
        iVar8 = FUN_0058d860(iVar9,*(undefined4 *)(iVar9 + 4),piVar11 + 2);
        if (*(int *)(iVar10 + 0x24) == 0x7fffffe) goto LAB_004dd5c9;
        *(int *)(iVar10 + 0x24) = *(int *)(iVar10 + 0x24) + 1;
        *(int *)(iVar9 + 4) = iVar8;
        **(int **)(iVar8 + 4) = iVar8;
      }
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)param_1[2]);
  }
  FUN_00453ff0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x38),
               *(undefined4 *)param_1[8],(undefined4 *)param_1[8],local_108[0]);
  FUN_00454670(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x40),
               *(undefined4 *)param_1[10],(undefined4 *)param_1[10],local_108[0]);
  FUN_004548e0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x48),
               *(undefined4 *)param_1[0xc],(undefined4 *)param_1[0xc],local_108[0]);
  FUN_004dc4e0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x50),
               *(undefined4 *)param_1[0xe],(undefined4 *)param_1[0xe],local_108[0]);
  FUN_00454740(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x58),
               *(undefined4 *)param_1[0x10],(undefined4 *)param_1[0x10],local_108[0]);
  FUN_004dc5b0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x60),
               *(undefined4 *)param_1[0x12],(undefined4 *)param_1[0x12],local_108[0]);
  FUN_004dc5b0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x68),
               *(undefined4 *)param_1[0x14],(undefined4 *)param_1[0x14],local_108[0]);
  FUN_004544d0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x70),
               *(undefined4 *)param_1[0x16],(undefined4 *)param_1[0x16],local_108[0]);
  FUN_00454810(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x78),
               *(undefined4 *)param_1[0x18],(undefined4 *)param_1[0x18],local_108[0]);
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x98));
  FUN_00459250(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x80);
  local_8 = 0;
  FUN_00459250(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x88);
  local_8._0_1_ = 1;
  iVar7 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
  puVar3 = *(undefined4 **)(iVar7 + 0x80);
  pvVar4 = (void *)*puVar3;
  *puVar3 = puVar3;
  *(int *)(*(int *)(iVar7 + 0x80) + 4) = *(int *)(iVar7 + 0x80);
  *(undefined4 *)(iVar7 + 0x84) = 0;
  if (pvVar4 != *(void **)(iVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar4);
  }
  iVar7 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
  puVar3 = *(undefined4 **)(iVar7 + 0x88);
  pvVar4 = (void *)*puVar3;
  *puVar3 = puVar3;
  *(int *)(*(int *)(iVar7 + 0x88) + 4) = *(int *)(iVar7 + 0x88);
  *(undefined4 *)(iVar7 + 0x8c) = 0;
  if (pvVar4 != *(void **)(iVar7 + 0x88)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x98));
  puVar3 = (undefined4 *)*local_124;
  do {
    if (puVar3 == local_124) {
      puVar3 = (undefined4 *)*local_130;
      do {
        if (puVar3 == local_130) {
          puVar3 = (undefined4 *)*local_130;
          *local_130 = local_130;
          local_130[1] = local_130;
          if (puVar3 == local_130) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_130);
          }
                    /* WARNING: Subroutine does not return */
          operator_delete(puVar3);
        }
        FUN_00601cb0();
        local_118 = 0;
        do {
          local_10c = 0;
          do {
            uStack_4c = ((int)((puVar3[3] * 0x40 >> 0x1f & 7U) + puVar3[3] * 0x40) >> 3) + local_10c
            ;
            local_50 = ((int)((puVar3[2] * 0x40 >> 0x1f & 7U) + puVar3[2] * 0x40) >> 3) + local_118;
            if ((((-1 < (int)local_50) && (-1 < (int)uStack_4c)) && ((int)local_50 < 0x2000)) &&
               ((int)uStack_4c < 0x2000)) {
              iVar7 = (int)(((int)(local_50 * 8) >> 0x1f & 0x3fU) + local_50 * 8) >> 6;
              iVar10 = (int)(((int)(uStack_4c * 8) >> 0x1f & 0x3fU) + uStack_4c * 8) >> 6;
              if (((-1 < iVar7) && (-1 < iVar10)) &&
                 ((iVar7 < 0x400 &&
                  ((iVar10 < 0x400 &&
                   (iVar7 = *(int *)(*(int *)(in_ECX + 4) + 0xbc + (iVar7 * 0x400 + iVar10) * 4),
                   iVar7 != 0)))))) {
                uVar12 = local_50 & 0x80000007;
                if ((int)uVar12 < 0) {
                  uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
                }
                uVar13 = uStack_4c & 0x80000007;
                if ((int)uVar13 < 0) {
                  uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
                }
                iVar7 = iVar7 + 0x14018 + (uVar13 + uVar12 * 8) * 0x68;
                if (iVar7 != 0) {
                  local_9c = *(undefined4 *)(iVar7 + 0x2c);
                  local_98 = *(undefined4 *)(iVar7 + 0x30);
                  local_94 = *(undefined4 *)(iVar7 + 0x34);
                  local_90 = *(undefined4 *)(iVar7 + 0x38);
                  local_8c = *(undefined4 *)(iVar7 + 0x3c);
                  local_88 = *(undefined1 *)(iVar7 + 0x40);
                  local_87 = *(undefined1 *)(iVar7 + 0x41);
                  local_84 = *(undefined4 *)(iVar7 + 0x44);
                  local_80 = *(undefined4 *)(iVar7 + 0x48);
                  local_7c = *(undefined4 *)(iVar7 + 0x4c);
                  local_78 = *(undefined4 *)(iVar7 + 0x50);
                  iVar7 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
                  iVar10 = *(int *)(iVar7 + 0x78);
                  local_a4 = 0;
                  local_ac = local_50;
                  uStack_a8 = uStack_4c;
                  iVar9 = FUN_00451d40(iVar10,*(undefined4 *)(iVar10 + 4),&local_ac);
                  if (*(int *)(iVar7 + 0x7c) == 0x3fffffe) goto LAB_004dd5c9;
                  *(int *)(iVar7 + 0x7c) = *(int *)(iVar7 + 0x7c) + 1;
                  *(int *)(iVar10 + 4) = iVar9;
                  **(int **)(iVar9 + 4) = iVar9;
                }
              }
            }
            local_10c = local_10c + 1;
          } while (local_10c < 8);
          local_118 = local_118 + 1;
        } while (local_118 < 8);
        FUN_00601e90();
        puVar3 = (undefined4 *)*puVar3;
      } while( true );
    }
    FUN_00601cb0();
    uVar12 = puVar3[2];
    uVar13 = puVar3[3];
    if ((((-1 < (int)uVar12) && (-1 < (int)uVar13)) && ((int)uVar12 < 0x10000)) &&
       ((int)uVar13 < 0x10000)) {
      iVar7 = (int)(uVar13 + ((int)uVar13 >> 0x1f & 0x3fU)) >> 6;
      iVar10 = (int)(((int)uVar12 >> 0x1f & 0x3fU) + uVar12) >> 6;
      if (((-1 < iVar10) && (-1 < iVar7)) &&
         ((iVar10 < 0x400 &&
          ((iVar7 < 0x400 &&
           (iVar7 = *(int *)(*(int *)(in_ECX + 4) + 0xbc + (iVar10 * 0x400 + iVar7) * 4), iVar7 != 0
           )))))) {
        uVar12 = uVar12 & 0x8000003f;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
        }
        uVar13 = uVar13 & 0x8000003f;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xffffffc0) + 1;
        }
        iVar7 = *(int *)(iVar7 + 0x10018 + (uVar12 * 0x40 + uVar13) * 4);
        if (iVar7 != 0) {
          FUN_004dc680(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x30),
                       *(undefined4 *)(iVar7 + 0x68),*(undefined4 *)(iVar7 + 0x6c),local_108[0]);
          local_24 = *(undefined4 *)(iVar7 + 0x60);
          uVar5 = *(undefined4 *)(iVar7 + 0x34);
          local_20 = *(undefined4 *)(iVar7 + 100);
          uVar6 = *(undefined4 *)(iVar7 + 0x30);
          local_1c = (undefined4 *)0x0;
          local_18 = 0;
          local_1c = (undefined4 *)FUN_0046d8d0(0,0);
          local_8._0_1_ = 2;
          FUN_004dc470(uVar6,uVar5);
          local_8._0_1_ = 3;
          iVar1 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
          iVar7 = *(int *)(iVar1 + 0x40);
          iVar10 = FUN_00451f50(iVar7,*(undefined4 *)(iVar7 + 4),&local_24);
          if (*(int *)(iVar1 + 0x44) != 0xaaaaaa9) {
            *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
            *(int *)(iVar7 + 4) = iVar10;
            local_8 = CONCAT31(local_8._1_3_,1);
            **(int **)(iVar10 + 4) = iVar10;
            puVar3 = (undefined4 *)*local_1c;
            *local_1c = local_1c;
            local_1c[1] = local_1c;
            local_18 = 0;
            if (puVar3 == local_1c) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_1c);
            }
                    /* WARNING: Subroutine does not return */
            operator_delete(puVar3);
          }
LAB_004dd5c9:
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
      }
    }
    FUN_00601e90();
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}


/* FUN_004df760 @ 004df760  kind=gamemisc  attributed-by=none  size=275 */

void FUN_004df760(void)

{
  int iVar1;
  bool bVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  bVar2 = false;
  iVar3 = 0;
  iVar1 = *(int *)(*(int *)(in_ECX + 400) + 0x8006d0);
  piVar4 = (int *)(in_ECX + 0x160);
  piVar5 = (int *)(iVar1 + 0x1138);
  do {
    if (*piVar4 != *piVar5) {
      bVar2 = true;
      break;
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0xb);
  if ((*(uint *)(in_ECX + 0x18c) == (uint)*(byte *)(iVar1 + 0x141)) && (!bVar2)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_006294d0(&local_10);
  fVar6 = (float10)FUN_00627ce0();
  if (((((float)fVar6 - 30.0 < local_c) && (fVar6 = (float10)FUN_00627ce0(), local_c < (float)fVar6)
       ) && (fVar6 = (float10)FUN_00627d50(), (float)fVar6 * 0.5 < local_10)) &&
     (fVar6 = (float10)FUN_00627d50(), local_10 < (float)fVar6)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004df880 @ 004df880  kind=gamemisc  attributed-by=none  size=317 */

void FUN_004df880(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  bVar1 = false;
  iVar4 = 0;
  iVar3 = *(int *)(*(int *)(in_ECX + 400) + 0x8006d0);
  piVar5 = (int *)(in_ECX + 0x160);
  piVar6 = (int *)(iVar3 + 0x1138);
  do {
    if (*piVar5 != *piVar6) {
      bVar1 = true;
      break;
    }
    iVar4 = iVar4 + 1;
    piVar6 = piVar6 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 0xb);
  if ((((*(uint *)(in_ECX + 0x18c) == (uint)*(byte *)(iVar3 + 0x141)) && (!bVar1)) ||
      (iVar3 = FUN_004df9c0(),
      *(int *)(*(int *)(*(int *)(in_ECX + 400) + 0x8006d0) + 0x1304) < iVar3)) ||
     ((0 < iVar3 && (cVar2 = FUN_0047f030(), cVar2 == '\0')))) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_006294d0(&local_10);
  fVar7 = (float10)FUN_00627ce0();
  if ((((float)fVar7 - 30.0 < local_c) &&
      ((fVar7 = (float10)FUN_00627ce0(), local_c < (float)fVar7 &&
       (fVar7 = (float10)FUN_00627d50(), local_10 < (float)fVar7 * 0.5)))) && (0.0 < local_10)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004df9c0 @ 004df9c0  kind=gamemisc  attributed-by=none  size=233 */

int FUN_004df9c0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  float10 fVar3;
  float fVar4;
  undefined4 local_8;
  
  fVar4 = 0.0;
  local_8 = 0.0;
  iVar2 = 0x1138;
  do {
    iVar1 = *(int *)(*(int *)(in_ECX + 400) + 0x8006d0);
    if (*(int *)(in_ECX + -0xfd8 + iVar2) < *(int *)(iVar2 + iVar1)) {
      fVar3 = (float10)FUN_00445f60((float)*(int *)(iVar1 + 400),0);
      fVar4 = (float)fVar3 * (float)(*(int *)(iVar2 + iVar1) - *(int *)(in_ECX + -0xfd8 + iVar2)) *
              10.0 + local_8;
      local_8 = fVar4;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x1164);
  iVar2 = *(int *)(*(int *)(in_ECX + 400) + 0x8006d0);
  if ((*(uint *)(in_ECX + 0x18c) != (uint)*(byte *)(iVar2 + 0x141)) && (1 < *(int *)(iVar2 + 400)))
  {
    fVar3 = (float10)FUN_00445f60((float)*(int *)(iVar2 + 400),0);
    fVar4 = (float)fVar3 * 100.0 + local_8;
  }
  return (int)fVar4;
}


/* FUN_004e0940 @ 004e0940  kind=gamemisc  attributed-by=none  size=609 */

void FUN_004e0940(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9508;
  local_10 = ExceptionList;
  if (0x4924922 < (uint)in_ECX[1]) {
    local_8 = 0;
    ExceptionList = &local_10;
    cube::QuestText::~QuestText((QuestText *)(param_5 + 10));
    local_8 = 0xffffffff;
    if ((uint)param_5[9] < 8) {
      param_5[9] = 7;
      param_5[8] = 0;
      *(undefined2 *)(param_5 + 4) = 0;
                    /* WARNING: Subroutine does not return */
      operator_delete(param_5);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_5[4]);
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
      if ((char)piVar5[3] == '\0') goto LAB_004e0ad7;
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
LAB_004e0b80:
      piVar6[1] = (int)piVar5;
    }
    else {
      if ((char)piVar5[3] != '\0') {
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
        goto LAB_004e0b80;
      }
LAB_004e0ad7:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004e0fe0 @ 004e0fe0  kind=gamemisc  attributed-by=none  size=468 */

undefined4 * FUN_004e0fe0(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

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
  
  puStack_c = &LAB_006e9570;
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
        if (-1 < iVar2) goto LAB_004e1181;
        param_2 = *(int **)(*in_ECX + 8);
        uVar5 = 0;
        goto LAB_004e1029;
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
        if (cVar1 == '\0') goto LAB_004e1126;
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_004e1029;
        }
      }
      else {
LAB_004e1126:
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if ((cVar1 == '\0') ||
           ((FUN_005c3ea0(), param_2 != (int *)*local_18 &&
            (cVar1 = FUN_0046d1f0(param_3,param_2 + 4), cVar1 == '\0')))) {
LAB_004e1181:
          local_8 = 0xffffffff;
          puVar4 = (undefined4 *)FUN_004e1480(local_1c,0,param_3,param_4);
          *param_1 = *puVar4;
          ExceptionList = local_10;
          return param_1;
        }
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_004e1029;
        }
      }
      uVar5 = 0;
      goto LAB_004e1029;
    }
    piVar3 = param_2 + 4;
    if (7 < (uint)param_2[9]) {
      piVar3 = (int *)*piVar3;
    }
    local_14 = (undefined1 *)&uStack_2c;
    iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
    if (-1 < iVar2) goto LAB_004e1181;
  }
  uVar5 = 1;
LAB_004e1029:
  FUN_004e0940(param_1,uVar5,param_2,param_3,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004e1480 @ 004e1480  kind=gamemisc  attributed-by=none  size=324 */

void FUN_004e1480(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_ECX;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar5 = param_3;
  puStack_c = &LAB_006e95d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar7 = true;
  local_8 = 0;
  puVar1 = (undefined4 *)*in_ECX;
  puVar4 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  while (*(char *)((int)puVar4 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      piVar3 = puVar4 + 4;
      if (7 < (uint)puVar4[9]) {
        piVar3 = (int *)*piVar3;
      }
      iVar2 = FUN_00428db0(0,puVar5[4],piVar3,puVar4[8]);
      bVar7 = iVar2 < 0;
    }
    else {
      puVar1 = puVar5;
      if (7 < (uint)puVar5[5]) {
        puVar1 = (undefined4 *)*puVar5;
      }
      iVar2 = FUN_00428db0(0,puVar4[8],puVar1,puVar5[4]);
      bVar7 = -1 < iVar2;
    }
    puVar1 = puVar4;
    if (bVar7 == false) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  param_2 = puVar1;
  if (bVar7 != false) {
    if (puVar1 == *(undefined4 **)*in_ECX) {
      puVar4 = &param_2;
      bVar7 = true;
      goto LAB_004e1541;
    }
    FUN_0042c740();
  }
  puVar4 = param_2;
  puVar6 = puVar5;
  if (7 < (uint)puVar5[5]) {
    puVar6 = (undefined4 *)*puVar5;
  }
  iVar2 = FUN_00428db0(0,param_2[8],puVar6,puVar5[4]);
  if (-1 < iVar2) {
    FUN_004e3550(param_4);
    *param_1 = puVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar4 = &param_3;
LAB_004e1541:
  puVar5 = (undefined4 *)FUN_004e0940(puVar4,bVar7,puVar1,puVar5,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004e16b0 @ 004e16b0  kind=gamemisc  attributed-by=none  size=207 */

void FUN_004e16b0(undefined4 *param_1,undefined4 *param_2)

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
  
  puStack_c = &LAB_006e9610;
  local_10 = ExceptionList;
  uStack_28 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_28;
  ExceptionList = &local_10;
  piVar3 = (int *)*in_ECX;
  local_8 = 0;
  for (; piVar3 = (int *)*piVar3, param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    if (piVar3 == (int *)*in_ECX) goto LAB_004e1715;
    if (piVar3 + 2 != param_1 + 2) {
      FUN_0040f680(param_1 + 2,0,0xffffffff);
    }
  }
LAB_004e176e:
  FUN_004e42c0(local_18,piVar3,*in_ECX);
  ExceptionList = local_10;
  return;
LAB_004e1715:
  for (; param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    iVar1 = *in_ECX;
    iVar2 = FUN_004521c0(iVar1,*(undefined4 *)(iVar1 + 4),param_1 + 2);
    if (in_ECX[1] == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    in_ECX[1] = in_ECX[1] + 1;
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  goto LAB_004e176e;
}


/* FUN_004e2d90 @ 004e2d90  kind=gamemisc  attributed-by=none  size=88 */

void FUN_004e2d90(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *in_ECX;
  
  piVar1 = param_1;
  if (in_ECX != param_1) {
    FUN_0046dbc0(*(undefined4 *)(*in_ECX + 4));
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    *(int *)(*in_ECX + 4) = *in_ECX;
    *(int *)*in_ECX = *in_ECX;
    *(int *)(*in_ECX + 8) = *in_ECX;
    in_ECX[1] = 0;
    FUN_004e03c0(piVar1,param_1);
  }
  piVar1 = piVar1 + 2;
  if (in_ECX + 2 != piVar1) {
    puVar2 = (undefined4 *)*piVar1;
    FUN_004e16b0(*puVar2,puVar2);
  }
  return;
}


/* FUN_004e2f00 @ 004e2f00  kind=gamemisc  attributed-by=none  size=314 */

void FUN_004e2f00(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  undefined4 local_54;
  undefined4 local_50;
  void *local_4c;
  undefined4 local_48;
  undefined1 local_41;
  undefined1 *local_40;
  undefined1 local_3c [24];
  undefined1 local_24 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9998;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  iVar2 = FUN_004e3790(param_1);
  if (iVar2 != *in_ECX) {
    piVar3 = (int *)(iVar2 + 0x10);
    if (7 < *(uint *)(iVar2 + 0x24)) {
      piVar3 = (int *)*piVar3;
    }
    iVar4 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar3,*(undefined4 *)(iVar2 + 0x20));
    if (-1 < iVar4) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  local_54 = 0;
  local_50 = 0;
  local_54 = FUN_00630a10(uVar1);
  local_8 = 0;
  local_4c = (void *)0x0;
  local_48 = 0;
  local_4c = (void *)FUN_00439600(0,0);
  local_8 = 1;
  FUN_0040eaf0(param_1);
  local_40 = local_24;
  local_8._0_1_ = 2;
  FUN_004e1790(&local_54,&local_41);
  local_8._0_1_ = 3;
  FUN_004e18d0(&local_4c);
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar4 = FUN_004e0190(local_3c);
  FUN_004e0df0(&local_40,iVar2,iVar4 + 0x10,iVar4);
  FUN_004e2a00();
  local_8 = 0xffffffff;
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  operator_delete(local_4c);
}


/* FUN_004e31e0 @ 004e31e0  kind=gamemisc  attributed-by=none  size=307 */

void FUN_004e31e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_60 [4];
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e99d0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_004e3790(param_1);
  if (iVar1 != *in_ECX) {
    piVar2 = (int *)(iVar1 + 0x10);
    if (7 < *(uint *)(iVar1 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    iVar3 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar3) goto LAB_004e32fb;
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  local_8 = 0;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  FUN_0040f680(param_1,0,0xffffffff);
  FUN_0040eaf0(local_5c);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar3 = FUN_00452260(local_44);
  FUN_00453230(local_60,iVar1,iVar3 + 0x10,iVar3);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
LAB_004e32fb:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004e3480 @ 004e3480  kind=gamemisc  attributed-by=none  size=47 */

void FUN_004e3480(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004e348e. Too many branches */
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


/* FUN_004e37e0 @ 004e37e0  kind=gamemisc  attributed-by=none  size=84 */

void FUN_004e37e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_ECX;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *(int *)(*in_ECX + 4)) {
    *(int **)(*in_ECX + 4) = piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}


/* FUN_004e3bb0 @ 004e3bb0  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * FUN_004e3bb0(undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_004e3630(piVar2[1]);
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
    FUN_004e3c70(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_004e3c70 @ 004e3c70  kind=gamemisc  attributed-by=none  size=599 */

/* WARNING: Removing unreachable block (ram,0x004e3d3d) */
/* WARNING: Removing unreachable block (ram,0x004e3d4d) */
/* WARNING: Removing unreachable block (ram,0x004e3d56) */
/* WARNING: Removing unreachable block (ram,0x004e3d59) */
/* WARNING: Removing unreachable block (ram,0x004e3d49) */
/* WARNING: Removing unreachable block (ram,0x004e3d67) */
/* WARNING: Removing unreachable block (ram,0x004e3d76) */
/* WARNING: Removing unreachable block (ram,0x004e3d81) */
/* WARNING: Removing unreachable block (ram,0x004e3d7d) */
/* WARNING: Removing unreachable block (ram,0x004e3d71) */
/* WARNING: Removing unreachable block (ram,0x004e3d84) */

void FUN_004e3c70(undefined4 param_1,int *param_2)

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
              break;
            }
LAB_004e3e67:
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
            goto LAB_004e3e67;
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
            break;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_2[0xc]);
}


/* FUN_004e5590 @ 004e5590  kind=gamemisc  attributed-by=none  size=409 */

void FUN_004e5590(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  void **ppvVar3;
  undefined4 local_7c;
  undefined4 local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9ce0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_78 = param_2;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  FUN_0040f7a0(L"singular",8);
  local_8 = 0;
  uVar1 = FUN_005a5240(local_5c,*(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c));
  ppvVar3 = local_44;
  local_8._0_1_ = 1;
  FUN_004e2f00(uVar1);
  uVar1 = FUN_004689a0(ppvVar3);
  local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
  local_18 = 7;
  local_1c = 0;
  FUN_0040f680(uVar1,0,0xffffffff);
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  local_8._0_1_ = 4;
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  if (local_1c == 0) {
    FUN_0040eb60(&PTR_006fccac);
  }
  else {
    local_7c = 0x40;
    iVar2 = FUN_004d9950(&local_7c,0,1);
    if (iVar2 != -1) {
      uVar1 = FUN_005a0ed0(local_74,*(undefined4 *)(param_3 + 0x20),0xffffffff);
      local_8._0_1_ = 5;
      FUN_00486d00(iVar2,1,uVar1,0,0xffffffff);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
    }
    FUN_0040eaf0(&local_2c);
  }
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004e6bd0 @ 004e6bd0  kind=gamemisc  attributed-by=none  size=41 */

undefined1 FUN_004e6bd0(int param_1)

{
  char *in_ECX;
  int iVar1;
  
  iVar1 = 0;
  param_1 = param_1 - (int)in_ECX;
  do {
    if (*in_ECX != in_ECX[param_1]) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    in_ECX = in_ECX + 1;
  } while (iVar1 < 3);
  return 1;
}


/* FUN_004e6ce0 @ 004e6ce0  kind=gamemisc  attributed-by=none  size=30 */

int * FUN_004e6ce0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = *(char *)(*param_1 + 0xd);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0xd);
    param_1 = piVar3;
  }
  return param_1;
}


/* FUN_004e6df0 @ 004e6df0  kind=gamemisc  attributed-by=none  size=97 */

void FUN_004e6df0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x34) == 0) {
    if (*(char *)(in_ECX + 0x56) != '\0') {
      *(undefined1 *)(in_ECX + 0x54) = 1;
      return;
    }
  }
  else if (*(int *)(in_ECX + 0x38) != 0) {
    *(undefined4 *)(in_ECX + 0x50) = DAT_0076b338;
    (**(code **)(**(int **)(in_ECX + 0x58) + 400))
              (*(int **)(in_ECX + 0x58),0,*(int *)(in_ECX + 0x34),0,8);
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x1a0))
              (*(int **)(in_ECX + 0x58),*(undefined4 *)(in_ECX + 0x38));
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x148))
              (*(int **)(in_ECX + 0x58),4,0,0,*(undefined4 *)(in_ECX + 0x3c),0,
               *(undefined4 *)(in_ECX + 0x40));
  }
  return;
}


/* FUN_004e71d0 @ 004e71d0  kind=gamemisc  attributed-by=none  size=166 */

undefined4 FUN_004e71d0(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uStack0000000a;
  
  iVar2 = 0;
  do {
    if (*(char *)(param_1 + iVar2) != (&DAT_0076b340)[iVar2]) {
      if (param_2 != '\0') {
        return 0;
      }
      iVar2 = 0;
      _param_2 = 0xff;
      uStack0000000a = 0;
      do {
        if ((&param_2 + iVar2)[param_1 - (int)&param_2] != (&param_2)[iVar2]) {
          _param_2 = 0xff00;
          uStack0000000a = 0;
          cVar1 = FUN_004e6bd0(&param_2);
          if (cVar1 == '\0') {
            _param_2 = 0;
            uStack0000000a = 0xff;
            cVar1 = FUN_004e6bd0(&param_2);
            if (cVar1 == '\0') {
              return 0;
            }
          }
          return 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return 1;
}


/* FUN_0051c760 @ 0051c760  kind=gamemisc  attributed-by=none  size=51 */

int FUN_0051c760(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
    iVar1 = FUN_0056bce0(param_1,2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((*(ushort *)(param_1 + 0x1c) & 0x4000) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x10);
  }
  return iVar1;
}


/* FUN_0051c7a0 @ 0051c7a0  kind=gamemisc  attributed-by=none  size=97 */

float10 FUN_0051c7a0(int param_1)

{
  ushort uVar1;
  double local_c;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 8) != 0) {
    return (float10)*(double *)(param_1 + 8);
  }
  if ((uVar1 & 4) != 0) {
    return (float10)*(longlong *)(param_1 + 0x10);
  }
  local_c = 0.0;
  if ((uVar1 & 0x12) != 0) {
    local_c = 0.0;
    FUN_0054a330(*(undefined4 *)(param_1 + 4),&local_c,*(undefined4 *)(param_1 + 0x18),
                 *(undefined1 *)(param_1 + 0x1f));
  }
  return (float10)local_c;
}


/* FUN_0051c810 @ 0051c810  kind=gamemisc  attributed-by=none  size=122 */

undefined4 FUN_0051c810(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 local_14 [2];
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 4) != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = FUN_00534710(*(undefined8 *)(param_1 + 8));
    return uVar2;
  }
  if ((uVar1 & 0x12) != 0) {
    local_14[0] = 0;
    FUN_0054a9a0(*(undefined4 *)(param_1 + 4),local_14,*(undefined4 *)(param_1 + 0x18),
                 *(undefined1 *)(param_1 + 0x1f));
    return (undefined4)local_14[0];
  }
  return 0;
}


/* FUN_0051c9c0 @ 0051c9c0  kind=gamemisc  attributed-by=none  size=89 */

undefined1 FUN_0051c9c0(int param_1)

{
  ushort uVar1;
  
  if (*(char *)(param_1 + 0x1e) == '\x03') {
    FUN_0052b630(param_1);
    uVar1 = *(ushort *)(param_1 + 0x1c);
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1e) = 5;
      return *(undefined1 *)(param_1 + 0x1e);
    }
    if ((uVar1 & 4) != 0) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
      return *(undefined1 *)(param_1 + 0x1e);
    }
    if ((uVar1 & 8) != 0) {
      *(undefined1 *)(param_1 + 0x1e) = 2;
      return *(undefined1 *)(param_1 + 0x1e);
    }
    *(char *)(param_1 + 0x1e) = '\x04' - ((uVar1 & 2) != 0);
  }
  return *(undefined1 *)(param_1 + 0x1e);
}


/* FUN_0051ca20 @ 0051ca20  kind=gamemisc  attributed-by=none  size=449 */

void FUN_0051ca20(int *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  char *_Src;
  size_t _Size;
  
  pbVar7 = param_3;
  piVar11 = param_1 + 2;
  iVar6 = *piVar11;
  iVar2 = FUN_0056bce0(*(undefined4 *)param_3,1);
  iVar3 = FUN_0056bce0(*(undefined4 *)(pbVar7 + 4),1);
  iVar10 = *(int *)pbVar7;
  if ((*(byte *)(iVar10 + 0x1c) & 0x10) == 0) {
    iVar4 = FUN_0056bce0(iVar10,1);
    iVar5 = 0;
    if (iVar4 != 0) goto LAB_0051ca6a;
  }
  else {
LAB_0051ca6a:
    iVar5 = *(int *)(iVar10 + 0x18);
    if ((*(ushort *)(iVar10 + 0x1c) & 0x4000) != 0) {
      iVar5 = iVar5 + *(int *)(iVar10 + 0x10);
    }
  }
  if (*(int *)(iVar6 + 0x70) < iVar5) {
    param_1[0xe] = 1;
    if (*piVar11 == 0) {
      iVar6 = 1000000000;
    }
    else {
      iVar6 = *(int *)(*piVar11 + 0x50);
    }
    iVar10 = 0;
    if (-1 < iVar6) {
      do {
        if ("LIKE or GLOB pattern too complex"[iVar10] == '\0') break;
        iVar10 = iVar10 + 1;
      } while (iVar10 <= iVar6);
    }
    _Size = iVar10 + 1;
    if (iVar6 < iVar10) {
      return;
    }
    iVar6 = FUN_005748c0(piVar11,_Size,0);
    if (iVar6 != 0) {
      return;
    }
    _Src = "LIKE or GLOB pattern too complex";
    goto LAB_0051cad6;
  }
  if (param_2 == 3) {
    param_3 = (byte *)FUN_0056bce0(*(undefined4 *)(pbVar7 + 8),1);
    if (param_3 == (byte *)0x0) {
      return;
    }
    iVar6 = 0;
    pbVar7 = param_3;
    if (*param_3 != 0) {
      do {
        if (pbVar7 == (byte *)0xffffffff) break;
        pbVar8 = pbVar7 + 1;
        if (0xbf < *pbVar7) {
          bVar1 = *pbVar8;
          while ((bVar1 & 0xc0) == 0x80) {
            pbVar7 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
            bVar1 = *pbVar7;
          }
        }
        iVar6 = iVar6 + 1;
        pbVar7 = pbVar8;
      } while (*pbVar8 != 0);
      if (iVar6 == 1) {
        uVar9 = FUN_0056a940(&param_3);
        goto LAB_0051cbb2;
      }
    }
    param_1[0xe] = 1;
    if (*piVar11 == 0) {
      iVar6 = 1000000000;
    }
    else {
      iVar6 = *(int *)(*piVar11 + 0x50);
    }
    iVar10 = 0;
    if (-1 < iVar6) {
      do {
        if ("ESCAPE expression must be a single character"[iVar10] == '\0') break;
        iVar10 = iVar10 + 1;
      } while (iVar10 <= iVar6);
    }
    _Size = iVar10 + 1;
    if ((iVar10 <= iVar6) && (iVar6 = FUN_005748c0(piVar11,_Size,0), iVar6 == 0)) {
      _Src = "ESCAPE expression must be a single character";
LAB_0051cad6:
      memcpy((void *)param_1[3],_Src,_Size);
      param_1[8] = iVar10;
      param_1[9] = 0x1030202;
      return;
    }
  }
  else {
    uVar9 = 0;
LAB_0051cbb2:
    if ((iVar3 != 0) && (iVar2 != 0)) {
      uVar9 = FUN_00543be0(iVar2,iVar3,*(undefined4 *)(*param_1 + 4),uVar9);
      FUN_0051d210(param_1,uVar9);
    }
  }
  return;
}


/* FUN_0051cbf0 @ 0051cbf0  kind=gamemisc  attributed-by=none  size=532 */

int FUN_0051cbf0(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_10;
  int local_c;
  uint local_8;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 == (int *)0x0) {
    iVar1 = FUN_0057fb50(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    piVar2 = *(int **)(param_1 + 0x18);
  }
  iVar1 = 0;
  piVar2 = (int *)*piVar2;
  if (*piVar2 != 0) {
    (*DAT_00766630)(*piVar2);
  }
  if (piVar2[0xc] <= param_2) {
    local_8 = (param_2 + 1) * param_3;
    piVar2[0xb] = param_3;
    iVar1 = FUN_00524570(piVar2 + 2,&local_10);
    if (iVar1 == 0) {
      iVar5 = (int)local_8 >> 0x1f;
      iVar1 = 0;
      if ((iVar5 < local_c) || ((iVar5 <= local_c && (local_8 <= local_10)))) {
LAB_0051cce2:
        iVar1 = 0;
        local_c = piVar2[0xd];
        iVar5 = FUN_00579f80();
        if ((iVar5 == 0) && (iVar5 = FUN_00563800(local_c,param_2 * 8 + 8), iVar5 != 0)) {
          piVar2[0xd] = iVar5;
          if (param_2 < piVar2[0xc]) goto LAB_0051cdbf;
          do {
            iVar5 = (*(code *)PTR_CreateFileMappingW_007670d8)(piVar2[4],0,4,0,local_8,0);
            if ((iVar5 == 0) ||
               (uVar6 = (uint)(piVar2[0xc] * param_3) % DAT_0076e2dc,
               iVar4 = (*(code *)PTR_MapViewOfFile_007672b8)
                                 (iVar5,6,0,piVar2[0xc] * param_3 - uVar6,param_3 + uVar6),
               iVar4 == 0)) {
              iVar1 = (*(code *)PTR_GetLastError_007671bc)();
              piVar2[0xe] = iVar1;
              iVar1 = FUN_0057fa50(0x150a,iVar1,"winShmMap3",*(undefined4 *)(param_1 + 0x1c),0x82e3)
              ;
              if (iVar5 != 0) {
                (*(code *)PTR_CloseHandle_007670a8)(iVar5);
              }
              break;
            }
            *(int *)(piVar2[0xd] + 4 + piVar2[0xc] * 8) = iVar4;
            *(int *)(piVar2[0xd] + piVar2[0xc] * 8) = iVar5;
            piVar2[0xc] = piVar2[0xc] + 1;
          } while (piVar2[0xc] <= param_2);
        }
        else {
          iVar1 = 0xc0a;
        }
      }
      else if (param_4 != 0) {
        iVar1 = FUN_005239d0(piVar2 + 2,local_8,iVar5);
        if (iVar1 == 0) goto LAB_0051cce2;
        uVar3 = (*(code *)PTR_GetLastError_007671bc)
                          ("winShmMap2",*(undefined4 *)(param_1 + 0x1c),0x82ad);
        iVar1 = FUN_0057fa50(0x130a,uVar3);
      }
    }
    else {
      uVar3 = (*(code *)PTR_GetLastError_007671bc)
                        ("winShmMap1",*(undefined4 *)(param_1 + 0x1c),0x829e);
      iVar1 = FUN_0057fa50(0x130a,uVar3);
    }
    if (piVar2[0xc] <= param_2) {
      *param_5 = 0;
      goto LAB_0051cdeb;
    }
  }
LAB_0051cdbf:
  *param_5 = (uint)(param_2 * param_3) % DAT_0076e2dc + *(int *)(piVar2[0xd] + 4 + param_2 * 8);
LAB_0051cdeb:
  if (*piVar2 != 0) {
    (*DAT_00766638)(*piVar2);
  }
  return iVar1;
}


/* FUN_0051ce10 @ 0051ce10  kind=gamemisc  attributed-by=none  size=123 */

undefined4 FUN_0051ce10(undefined4 *param_1,size_t param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0xc];
  if ((*(ushort *)(iVar1 + 0x1c) & 0x2000) != 0) {
    return *(undefined4 *)(iVar1 + 4);
  }
  if ((int)param_2 < 1) {
    FUN_00574d80(iVar1);
    *(undefined2 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 4) = 0;
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  else {
    FUN_005748c0(iVar1,param_2,0);
    *(undefined2 *)(iVar1 + 0x1c) = 0x2000;
    *(undefined4 *)(iVar1 + 0x10) = *param_1;
    uVar2 = 0;
    if (*(void **)(iVar1 + 4) != (void *)0x0) {
      memset(*(void **)(iVar1 + 4),0,param_2);
      return *(undefined4 *)(iVar1 + 4);
    }
  }
  return uVar2;
}


/* FUN_0051ceb0 @ 0051ceb0  kind=gamemisc  attributed-by=none  size=35 */

undefined4 FUN_0051ceb0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 != 0) && (param_2 < *(int *)(iVar1 + 4))) && (-1 < param_2)) {
    return *(undefined4 *)(iVar1 + 8 + param_2 * 8);
  }
  return 0;
}


/* FUN_0051cee0 @ 0051cee0  kind=gamemisc  attributed-by=none  size=173 */

void FUN_0051cee0(undefined4 *param_1,int param_2,undefined4 param_3,code *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (-1 < param_2) {
    puVar1 = (undefined4 *)param_1[1];
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = puVar1[1];
      if (param_2 < iVar2) goto LAB_0051cf50;
    }
    puVar1 = (undefined4 *)FUN_00552390(param_1[2],puVar1,param_2 * 8 + 0x10);
    if (puVar1 != (undefined4 *)0x0) {
      param_1[1] = puVar1;
      memset(puVar1 + iVar2 * 2 + 2,0,(param_2 - iVar2) * 8 + 8);
      puVar1[1] = param_2 + 1;
      *puVar1 = *param_1;
LAB_0051cf50:
      if ((puVar1[param_2 * 2 + 2] != 0) && ((code *)puVar1[param_2 * 2 + 3] != (code *)0x0)) {
        (*(code *)puVar1[param_2 * 2 + 3])(puVar1[param_2 * 2 + 2]);
      }
      puVar1[param_2 * 2 + 2] = param_3;
      puVar1[param_2 * 2 + 3] = param_4;
      return;
    }
  }
  if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  return;
}


/* FUN_0051d110 @ 0051d110  kind=gamemisc  attributed-by=none  size=91 */

void FUN_0051d110(int param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x24) & 0x40) != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    piVar1[1] = *(int *)(*piVar1 + 0xa4);
    *(int **)(*piVar1 + 0xa4) = piVar1;
  }
  if ((*(byte *)(param_1 + 0x24) & 0x20) != 0) {
    FUN_005644e0(*(undefined4 *)(param_1 + 0x18));
  }
  *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xbe01 | 1;
  *(undefined1 *)(param_1 + 0x26) = 5;
  *(undefined4 *)(param_1 + 0x38) = 7;
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x38) = 1;
  return;
}


/* FUN_0051d320 @ 0051d320  kind=gamemisc  attributed-by=none  size=48 */

void FUN_0051d320(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0056bce0(param_3[1],1);
  uVar1 = FUN_0051c810(*param_3,&DAT_00716900,uVar1);
  FUN_00525a30(uVar1);
  return;
}


/* FUN_0051d3d0 @ 0051d3d0  kind=gamemisc  attributed-by=none  size=42 */

void FUN_0051d3d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0056bce0(*param_3,1);
  if (iVar1 != 0) {
    uVar2 = FUN_005203c0(iVar1);
    FUN_0051d210(param_1,uVar2);
  }
  return;
}


/* FUN_0051d400 @ 0051d400  kind=gamemisc  attributed-by=none  size=198 */

undefined4 FUN_0051d400(undefined4 param_1,byte *param_2,undefined *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  if (param_2 == (byte *)0x0) {
    uVar2 = 0;
    do {
      if (*(int *)((int)&DAT_00767088 + uVar2) != 0) {
        *(int *)((int)&PTR_AreFileApisANSI_00767084 + uVar2) = *(int *)((int)&DAT_00767088 + uVar2);
      }
      if (*(int *)((int)&DAT_00767094 + uVar2) != 0) {
        *(int *)((int)&DAT_00767090 + uVar2) = *(int *)((int)&DAT_00767094 + uVar2);
      }
      uVar2 = uVar2 + 0x18;
    } while (uVar2 < 0x378);
    return 0;
  }
  iVar6 = 0;
  uVar2 = 0;
  do {
    pbVar3 = *(byte **)((int)&PTR_s_AreFileApisANSI_00767080 + uVar2);
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_0051d470:
        uVar4 = -(uint)bVar7 | 1;
        goto LAB_0051d475;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_0051d470;
      pbVar5 = pbVar5 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_0051d475:
    if (uVar4 == 0) {
      if ((&DAT_00767088)[iVar6 * 3] == 0) {
        (&DAT_00767088)[iVar6 * 3] = (&PTR_AreFileApisANSI_00767084)[iVar6 * 3];
      }
      if (param_3 == (undefined *)0x0) {
        param_3 = (undefined *)(&DAT_00767088)[iVar6 * 3];
      }
      (&PTR_AreFileApisANSI_00767084)[iVar6 * 3] = param_3;
      return 0;
    }
    uVar2 = uVar2 + 0xc;
    iVar6 = iVar6 + 1;
    if (0x377 < uVar2) {
      return 0xc;
    }
  } while( true );
}


/* FUN_0051d520 @ 0051d520  kind=gamemisc  attributed-by=none  size=88 */

void FUN_0051d520(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  
  uVar1 = FUN_0051c810(*param_3);
  if (uVar1 < 3) {
    puVar2 = (&PTR_s_CURDIR_007120cc)[uVar1];
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  iVar3 = FUN_00575040(param_1 + 8,puVar2,0xffffffff,1,0);
  if (iVar3 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
  }
  return;
}


/* FUN_0051d580 @ 0051d580  kind=gamemisc  attributed-by=none  size=96 */

void FUN_0051d580(int param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_00574d80((undefined4 *)(param_1 + 8));
  }
  FUN_005521a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c));
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x1044010;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


/* FUN_0051d5e0 @ 0051d5e0  kind=gamemisc  attributed-by=none  size=99 */

undefined * FUN_0051d5e0(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  uVar5 = 0;
  do {
    pbVar2 = *(byte **)((int)&PTR_s_AreFileApisANSI_00767080 + uVar5);
    pbVar4 = param_2;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_0051d618:
        uVar3 = -(uint)bVar7 | 1;
        goto LAB_0051d61d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_0051d618;
      pbVar4 = pbVar4 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_0051d61d:
    if (uVar3 == 0) {
      return (&PTR_AreFileApisANSI_00767084)[iVar6 * 3];
    }
    uVar5 = uVar5 + 0xc;
    iVar6 = iVar6 + 1;
    if (0x377 < uVar5) {
      return (undefined *)0x0;
    }
  } while( true );
}


/* FUN_0051d650 @ 0051d650  kind=gamemisc  attributed-by=none  size=123 */

void FUN_0051d650(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *_Src;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  undefined4 uStack_4c;
  int local_48;
  undefined8 uStack_44;
  char acStack_3c [52];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar7 = *param_3;
  local_48 = param_1;
  switch(*(undefined1 *)(iVar7 + 0x1e)) {
  case 1:
    FUN_00574570(param_1 + 8,iVar7);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 2:
    fVar12 = (float10)FUN_0051c7a0();
    uStack_44 = (double)fVar12;
    FUN_005240c0(0x32,acStack_3c,"%!.15g",uStack_44);
    FUN_0054a330(acStack_3c,&uStack_4c,0x14,1);
    if (uStack_44 != (double)CONCAT44(local_48,uStack_4c)) {
      FUN_005240c0(0x32,acStack_3c,"%!.20e",uStack_44);
    }
    if (*(int *)(param_1 + 8) == 0) {
      iVar7 = 1000000000;
    }
    else {
      iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar8 = 0;
    if (-1 < iVar7) {
      do {
        if (acStack_3c[iVar8] == '\0') break;
        iVar8 = iVar8 + 1;
      } while (iVar8 <= iVar7);
    }
    if (iVar8 <= iVar7) {
      iVar7 = FUN_005748c0(param_1 + 8,iVar8 + 1);
      if (iVar7 == 0) {
        memcpy(*(void **)(param_1 + 0xc),acStack_3c,iVar8 + 1);
        *(int *)(param_1 + 0x20) = iVar8;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_0051d996;
    }
    break;
  case 3:
    pcVar5 = (char *)FUN_0056bce0(iVar7,1);
    iVar7 = local_48;
    if (pcVar5 == (char *)0x0) goto LAB_0051d996;
    cVar2 = *pcVar5;
    uStack_44 = 0.0;
    uStack_44._4_4_ = 0;
    uStack_44._0_4_ = 0;
    uVar9 = 0;
    uVar4 = (uint)uStack_44;
    iVar8 = uStack_44._4_4_;
    if (cVar2 != '\0') {
      uVar9 = 0;
      do {
        if (cVar2 == '\'') {
          bVar11 = 0xfffffffe < uVar4;
          uVar4 = uVar4 + 1;
          iVar8 = iVar8 + (uint)bVar11;
        }
        cVar2 = pcVar5[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (cVar2 != '\0');
    }
    puVar6 = (undefined1 *)
             FUN_005336b0(local_48,uVar9 + uVar4 + 3,
                          ((int)uVar9 >> 0x1f) + iVar8 + (uint)CARRY4(uVar9,uVar4) +
                          (uint)(0xfffffffc < uVar9 + uVar4));
    if (puVar6 == (undefined1 *)0x0) goto LAB_0051d996;
    *puVar6 = 0x27;
    cVar2 = *pcVar5;
    iVar8 = 1;
    while (cVar2 != '\0') {
      puVar6[iVar8] = *pcVar5;
      iVar10 = iVar8 + 1;
      if (*pcVar5 == '\'') {
        puVar6[iVar10] = 0x27;
        iVar10 = iVar8 + 2;
      }
      pcVar5 = pcVar5 + 1;
      iVar8 = iVar10;
      cVar2 = *pcVar5;
    }
    puVar6[iVar8] = 0x27;
    iVar10 = iVar7 + 8;
    puVar6[iVar8 + 1] = 0;
    iVar8 = FUN_00575040(iVar10,puVar6,iVar8 + 1,1,FUN_00524410);
    if (iVar8 != 0x12) goto LAB_0051d996;
    *(undefined4 *)(iVar7 + 0x38) = 0x12;
    goto LAB_0051d98e;
  case 4:
    uVar3 = FUN_00528890();
    uStack_44 = (double)CONCAT44(uVar3,(uint)uStack_44);
    uVar4 = FUN_005288e0(*param_3);
    _Src = (undefined2 *)
           FUN_005336b0(param_1,(uVar4 + 2) * 2,
                        (((int)uVar4 >> 0x1f) + (uint)(0xfffffffd < uVar4)) * 2 | uVar4 + 2 >> 0x1f)
    ;
    if (_Src != (undefined2 *)0x0) {
      if (0 < (int)uVar4) {
        iVar7 = 0;
        puVar6 = (undefined1 *)((int)_Src + 3);
        do {
          iVar8 = iVar7 + 1;
          puVar6[-1] = (&DAT_007120bc)[*(byte *)(iVar7 + uStack_44._4_4_) >> 4];
          *puVar6 = (&DAT_007120bc)[(int)*(char *)(iVar7 + uStack_44._4_4_) & 0xf];
          iVar7 = iVar8;
          puVar6 = puVar6 + 2;
          param_1 = local_48;
        } while (iVar8 < (int)uVar4);
      }
      piVar1 = (int *)(param_1 + 8);
      _Src[uVar4 + 1] = 0x27;
      *_Src = 0x2758;
      uStack_44 = (double)CONCAT44(piVar1,(uint)uStack_44);
      if (*piVar1 == 0) {
        iVar7 = 1000000000;
      }
      else {
        iVar7 = *(int *)(*piVar1 + 0x50);
      }
      iVar8 = 0;
      if (-1 < iVar7) {
        do {
          if (*(char *)(iVar8 + (int)_Src) == '\0') break;
          iVar8 = iVar8 + 1;
        } while (iVar8 <= iVar7);
      }
      if (iVar7 < iVar8) {
        *(undefined4 *)(param_1 + 0x38) = 0x12;
        FUN_00575040(piVar1,"string or blob too big",0xffffffff,1);
      }
      else {
        iVar7 = FUN_005748c0(piVar1,iVar8 + 1);
        if (iVar7 == 0) {
          memcpy(*(void **)(param_1 + 0xc),_Src,iVar8 + 1);
          *(int *)(param_1 + 0x20) = iVar8;
          *(undefined4 *)(param_1 + 0x24) = 0x1030202;
          FUN_00524410();
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      FUN_00524410();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    goto LAB_0051d996;
  default:
    iVar7 = FUN_00575040(param_1 + 8,&DAT_00716880,4,1,0);
    if (iVar7 != 0x12) goto LAB_0051d996;
  }
  iVar10 = param_1 + 8;
  *(undefined4 *)(param_1 + 0x38) = 0x12;
LAB_0051d98e:
  FUN_00575040(iVar10,"string or blob too big",0xffffffff,1);
LAB_0051d996:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0051d9c0 @ 0051d9c0  kind=gamemisc  attributed-by=none  size=111 */

uint FUN_0051d9c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar2 = FUN_00533960(param_1,param_2,param_3,param_4,param_5,0);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar2 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar2;
}


/* FUN_0051da30 @ 0051da30  kind=gamemisc  attributed-by=none  size=135 */

undefined * FUN_0051da30(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined **ppuVar6;
  bool bVar7;
  
  iVar5 = -1;
  if (param_2 != (byte *)0x0) {
    iVar5 = 0;
    ppuVar6 = &PTR_s_AreFileApisANSI_00767080;
    do {
      pbVar2 = *ppuVar6;
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_0051da70:
          uVar3 = -(uint)bVar7 | 1;
          goto LAB_0051da75;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_0051da70;
        pbVar4 = pbVar4 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_0051da75:
      if (uVar3 == 0) break;
      ppuVar6 = ppuVar6 + 3;
      iVar5 = iVar5 + 1;
    } while ((int)ppuVar6 < 0x7673ec);
  }
  iVar5 = iVar5 + 1;
  if (iVar5 < 0x4a) {
    ppuVar6 = &PTR_AreFileApisANSI_00767084 + iVar5 * 3;
    do {
      if (*ppuVar6 != (undefined *)0x0) {
        return (&PTR_s_AreFileApisANSI_00767080)[iVar5 * 3];
      }
      ppuVar6 = ppuVar6 + 3;
      iVar5 = iVar5 + 1;
    } while ((int)ppuVar6 < 0x7673fc);
  }
  return (undefined *)0x0;
}


/* FUN_0051dac0 @ 0051dac0  kind=gamemisc  attributed-by=none  size=112 */

uint FUN_0051dac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar2 = FUN_00533960(param_1,param_2,param_3,param_4,param_5,param_6);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar2 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar2;
}


/* FUN_0051db30 @ 0051db30  kind=gamemisc  attributed-by=none  size=145 */

uint FUN_0051db30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  iVar2 = FUN_0056a850(param_1,param_2,0xffffffff,2);
  if (iVar2 != 0) {
    uVar3 = FUN_00533960(param_1,iVar2,param_3,param_4,param_5,0);
    FUN_005521a0(param_1,iVar2);
  }
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar3 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar3 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar3;
}


/* FUN_0051dbd0 @ 0051dbd0  kind=gamemisc  attributed-by=none  size=74 */

undefined4 FUN_0051dbd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 200) = param_3;
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_0051dc20 @ 0051dc20  kind=gamemisc  attributed-by=none  size=74 */

undefined4 FUN_0051dc20(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xcc) = param_3;
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_0051dc70 @ 0051dc70  kind=gamemisc  attributed-by=none  size=354 */

void FUN_0051dc70(int param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  iVar4 = *param_3;
  if ((*(byte *)(iVar4 + 0x1c) & 0x12) == 0) {
    pbVar7 = (byte *)FUN_0056bce0(iVar4,1);
  }
  else {
    FUN_00574600(iVar4);
    *(ushort *)(iVar4 + 0x1c) = *(ushort *)(iVar4 + 0x1c) & 0xfffd | 0x10;
    if (*(int *)(iVar4 + 0x18) == 0) {
      pbVar7 = (byte *)0x0;
    }
    else {
      pbVar7 = *(byte **)(iVar4 + 4);
    }
  }
  iVar4 = *param_3;
  if (((*(byte *)(iVar4 + 0x1c) & 0x10) == 0) && (iVar2 = FUN_0056bce0(iVar4,1), iVar2 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(iVar4 + 0x18);
    if ((*(ushort *)(iVar4 + 0x1c) & 0x4000) != 0) {
      uVar8 = uVar8 + *(int *)(iVar4 + 0x10);
    }
  }
  uVar6 = uVar8 * 2 + 1;
  iVar4 = (((int)uVar8 >> 0x1f) << 1 | uVar8 >> 0x1f) + (uint)(0xfffffffe < uVar8 * 2);
  piVar3 = (int *)(param_1 + 8);
  iVar2 = (int)*(uint *)(*piVar3 + 0x50) >> 0x1f;
  if ((iVar4 < iVar2) || ((iVar4 <= iVar2 && (uVar6 <= *(uint *)(*piVar3 + 0x50))))) {
    param_3 = (int *)FUN_0055da00(uVar6);
    if (param_3 == (int *)0x0) {
      FUN_0051d110(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(piVar3,"string or blob too big",0xffffffff,1,0);
    param_3 = (int *)0x0;
  }
  if (param_3 != (int *)0x0) {
    puVar5 = (undefined1 *)param_3;
    uVar6 = uVar8;
    if (0 < (int)uVar8) {
      do {
        bVar1 = *pbVar7;
        *puVar5 = (&DAT_007120bc)[bVar1 >> 4];
        puVar5[1] = (&DAT_007120bc)[bVar1 & 0xf];
        puVar5 = puVar5 + 2;
        pbVar7 = pbVar7 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *puVar5 = 0;
    iVar4 = FUN_00575040(piVar3,param_3,uVar8 * 2,1,FUN_00524410);
    if (iVar4 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(piVar3,"string or blob too big",0xffffffff,1,0);
    }
  }
  return;
}


/* FUN_0051de50 @ 0051de50  kind=gamemisc  attributed-by=none  size=182 */

/* WARNING: Removing unreachable block (ram,0x0051decf) */

void FUN_0051de50(int param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong local_c;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *param_3;
  uVar1 = *(ushort *)(iVar3 + 0x1c);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      local_c = 0;
      lVar4 = local_c;
      if ((uVar1 & 0x12) != 0) {
        FUN_0054a9a0(*(undefined4 *)(iVar3 + 4),&local_c,*(undefined4 *)(iVar3 + 0x18),
                     *(undefined1 *)(iVar3 + 0x1f));
        lVar4 = local_c;
      }
    }
    else {
      lVar4 = FUN_00534710(*(undefined8 *)(iVar3 + 8));
    }
  }
  else {
    lVar4 = *(longlong *)(iVar3 + 0x10);
  }
  if (*(int *)(iVar2 + 0x50) < lVar4) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    return;
  }
  FUN_0051d580(param_1,(int)lVar4);
  return;
}


/* FUN_0051df10 @ 0051df10  kind=gamemisc  attributed-by=none  size=63 */

undefined4 FUN_0051df10(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x3c);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_0051df50 @ 0051df50  kind=gamemisc  attributed-by=none  size=72 */

undefined4 FUN_0051df50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = param_2;
  *(undefined4 *)(param_1 + 0xa8) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_0051dfa0 @ 0051dfa0  kind=gamemisc  attributed-by=none  size=72 */

undefined4 FUN_0051dfa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  *(undefined4 *)(param_1 + 0xb0) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_0051dff0 @ 0051dff0  kind=gamemisc  attributed-by=none  size=637 */

void FUN_0051dff0(int param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  void *_Src;
  size_t _Size;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  uint local_18;
  int local_14;
  int local_8;
  
  iVar3 = FUN_0056bce0(*param_3,1);
  if (iVar3 != 0) {
    iVar10 = *param_3;
    if (((*(byte *)(iVar10 + 0x1c) & 0x10) == 0) && (iVar4 = FUN_0056bce0(iVar10,1), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar10 + 0x18);
      if ((*(ushort *)(iVar10 + 0x1c) & 0x4000) != 0) {
        iVar4 = iVar4 + *(int *)(iVar10 + 0x10);
      }
    }
    piVar5 = (int *)FUN_0056bce0(param_3[1],1);
    if (piVar5 != (int *)0x0) {
      if ((char)*piVar5 == '\0') {
        FUN_00574570(param_1 + 8,*param_3);
        return;
      }
      uVar6 = FUN_005288e0(param_3[1]);
      _Src = (void *)FUN_0056bce0(param_3[2],1);
      if (_Src != (void *)0x0) {
        _Size = FUN_005288e0(param_3[2]);
        local_18 = iVar4 + 1;
        local_14 = (int)local_18 >> 0x1f;
        local_8 = FUN_005336b0(param_1,local_18,local_14);
        if (local_8 != 0) {
          iVar11 = 0;
          iVar10 = 0;
          if (-1 < (int)(iVar4 - uVar6)) {
            iVar12 = 0;
            do {
              piVar7 = (int *)(iVar3 + iVar10);
              iVar9 = *piVar7;
              piVar2 = piVar5;
              uVar8 = uVar6;
              if ((char)iVar9 == (char)*piVar5) {
                while (uVar1 = uVar8 - 4, 3 < uVar8) {
                  if (*piVar7 != *piVar2) goto LAB_0051e116;
                  piVar7 = piVar7 + 1;
                  piVar2 = piVar2 + 1;
                  uVar8 = uVar1;
                }
                if (uVar1 != 0xfffffffc) {
LAB_0051e116:
                  if (((char)*piVar7 != (char)*piVar2) ||
                     ((uVar1 != 0xfffffffd &&
                      ((*(char *)((int)piVar7 + 1) != *(char *)((int)piVar2 + 1) ||
                       ((uVar1 != 0xfffffffe &&
                        ((*(char *)((int)piVar7 + 2) != *(char *)((int)piVar2 + 2) ||
                         ((uVar1 != 0xffffffff &&
                          (*(char *)((int)piVar7 + 3) != *(char *)((int)piVar2 + 3)))))))))))))
                  goto LAB_0051e1be;
                }
                uVar8 = _Size - uVar6;
                bVar13 = CARRY4(local_18,uVar8);
                local_18 = local_18 + uVar8;
                local_14 = local_14 + ((int)uVar8 >> 0x1f) + (uint)bVar13;
                uVar8 = *(uint *)(*(int *)(param_1 + 8) + 0x50);
                iVar9 = (int)uVar8 >> 0x1f;
                iVar11 = local_14 - (uint)(local_18 == 0);
                if ((iVar9 < iVar11) || ((iVar9 <= iVar11 && (uVar8 < local_18 - 1)))) {
                  FUN_0051d0e0(param_1);
                  FUN_00524410(local_8);
                  return;
                }
                iVar11 = FUN_00579f80();
                if ((iVar11 != 0) || (iVar9 = FUN_00563800(local_8,local_18), iVar9 == 0)) {
                  FUN_0051d110(param_1);
                  FUN_00524410(local_8);
                  return;
                }
                memcpy((void *)(iVar9 + iVar12),_Src,_Size);
                iVar11 = iVar12 + _Size;
                iVar10 = iVar10 + (uVar6 - 1);
                local_8 = iVar9;
              }
              else {
LAB_0051e1be:
                iVar11 = iVar12 + 1;
                *(char *)(iVar12 + local_8) = (char)iVar9;
              }
              iVar10 = iVar10 + 1;
              iVar12 = iVar11;
            } while (iVar10 <= (int)(iVar4 - uVar6));
          }
          memcpy((void *)(iVar11 + local_8),(void *)(iVar3 + iVar10),iVar4 - iVar10);
          iVar11 = iVar11 + (iVar4 - iVar10);
          *(undefined1 *)(iVar11 + local_8) = 0;
          iVar3 = FUN_00575040(param_1 + 8,local_8,iVar11,1,FUN_00524410);
          if (iVar3 == 0x12) {
            *(undefined4 *)(param_1 + 0x38) = 0x12;
            FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
          }
        }
      }
    }
  }
  return;
}


/* FUN_0051e270 @ 0051e270  kind=gamemisc  attributed-by=none  size=208 */

undefined4 FUN_0051e270(int param_1,void *param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  size_t _Size;
  size_t sVar4;
  bool bVar5;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (((*(uint *)(param_1 + 0x18) == param_4) && (*(int *)(param_1 + 0x1c) == param_5)) &&
     (param_4 != 0 || param_5 != 0)) {
    piVar3 = *(int **)(param_1 + 0x20);
  }
  else {
    piVar3 = *(int **)(param_1 + 4);
    if (piVar3 != (int *)0x0) {
      uStack_c = 0;
      local_10 = 0;
      do {
        bVar5 = 0xfffffc03 < local_10;
        local_10 = local_10 + 0x3fc;
        uStack_c = uStack_c + (uint)bVar5;
        if ((param_5 < uStack_c) || ((param_5 <= uStack_c && (param_4 < local_10)))) break;
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)0x0);
    }
  }
  iVar1 = __alldiv(param_4,param_5,0x3fc,0);
  iVar1 = param_4 + iVar1 * -0x3fc;
  uVar2 = param_3;
  do {
    sVar4 = 0x3fc - iVar1;
    _Size = sVar4;
    if ((int)uVar2 < (int)sVar4) {
      _Size = uVar2;
    }
    memcpy(param_2,(void *)(iVar1 + 4 + (int)piVar3),_Size);
    param_2 = (void *)((int)param_2 + _Size);
    uVar2 = uVar2 - sVar4;
    iVar1 = 0;
  } while (((-1 < (int)uVar2) && (piVar3 = (int *)*piVar3, piVar3 != (int *)0x0)) &&
          (0 < (int)uVar2));
  *(uint *)(param_1 + 0x18) = param_3 + param_4;
  *(int **)(param_1 + 0x20) = piVar3;
  *(uint *)(param_1 + 0x1c) = ((int)param_3 >> 0x1f) + param_5 + (uint)CARRY4(param_3,param_4);
  return 0;
}


/* FUN_0051e340 @ 0051e340  kind=gamemisc  attributed-by=none  size=72 */

undefined4 FUN_0051e340(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = param_2;
  *(undefined4 *)(param_1 + 0xb8) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_0051e960 @ 0051e960  kind=gamemisc  attributed-by=none  size=212 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0051e960(int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_00579f80();
  if (iVar2 != 0) {
    return 0xffffffffffffffff;
  }
  if (DAT_0076b488 != 0) {
    (*DAT_00766630)(DAT_0076b488);
  }
  uVar1 = _DAT_0076b490;
  if (DAT_0076b488 != 0) {
    (*DAT_00766638)(DAT_0076b488);
  }
  if (0 < param_2) {
LAB_0051e9c7:
    FUN_0055e040(cube::Controller::vfunction12,0,param_1,param_2);
    return uVar1;
  }
  if (-1 < param_2) {
    if ((-1 < param_2) && ((0 < param_2 || (param_1 != 0)))) goto LAB_0051e9c7;
    if (DAT_0076b488 != 0) {
      (*DAT_00766630)(DAT_0076b488);
    }
    DAT_0076b498 = 0;
    DAT_0076b49c = 0;
    _DAT_0076b490 = 0;
    DAT_0076b4ac = 0;
    if (DAT_0076b488 != 0) {
      (*DAT_00766638)(DAT_0076b488);
    }
  }
  return uVar1;
}


/* FUN_0051ea60 @ 0051ea60  kind=gamemisc  attributed-by=none  size=262 */

undefined4 FUN_0051ea60(int param_1,void *param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *_Size;
  
  puVar6 = param_3;
  do {
    if ((int)puVar6 < 1) {
      return 0;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    iVar4 = __allrem(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),0x3fc,0);
    _Size = (undefined4 *)(0x3fc - iVar4);
    if ((int)puVar6 < 0x3fc - iVar4) {
      _Size = puVar6;
    }
    if (iVar4 == 0) {
      iVar5 = FUN_00579f80();
      if (iVar5 != 0) {
        return 0xc0a;
      }
      if (DAT_007665e0 == 0) {
        param_3 = (undefined4 *)(*DAT_00766600)(0x400);
      }
      else {
        if (DAT_0076b488 != 0) {
          (*DAT_00766630)(DAT_0076b488);
        }
        FUN_0053dcf0(0x400,&param_3);
        if (DAT_0076b488 != 0) {
          (*DAT_00766638)(DAT_0076b488);
        }
      }
      if (param_3 == (undefined4 *)0x0) {
        return 0xc0a;
      }
      *param_3 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        *(undefined4 **)(param_1 + 4) = param_3;
      }
      else {
        *puVar3 = param_3;
      }
      *(undefined4 **)(param_1 + 0x10) = param_3;
    }
    memcpy((void *)(*(int *)(param_1 + 0x10) + 4 + iVar4),param_2,(size_t)_Size);
    param_2 = (void *)((int)param_2 + (int)_Size);
    puVar6 = (undefined4 *)((int)puVar6 - (int)_Size);
    puVar1 = (uint *)(param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + (int)_Size;
    *(int *)(param_1 + 0xc) =
         *(int *)(param_1 + 0xc) + ((int)_Size >> 0x1f) + (uint)CARRY4(uVar2,(uint)_Size);
  } while( true );
}


/* FUN_0051eb70 @ 0051eb70  kind=gamemisc  attributed-by=none  size=111 */

void FUN_0051eb70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong local_38 [6];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0053c140(param_1,param_2,param_3,local_38);
  if (iVar1 == 0) {
    FUN_00532a40();
    FUN_00574df0(param_1 + 8,(double)local_38[0] / 86400000.0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0051ec50 @ 0051ec50  kind=gamemisc  attributed-by=none  size=1390 */

/* WARNING: Removing unreachable block (ram,0x0051f045) */
/* WARNING: Removing unreachable block (ram,0x0051f050) */
/* WARNING: Removing unreachable block (ram,0x0051f06b) */
/* WARNING: Removing unreachable block (ram,0x0051f072) */
/* WARNING: Removing unreachable block (ram,0x0051f08a) */
/* WARNING: Removing unreachable block (ram,0x0051f09b) */
/* WARNING: Removing unreachable block (ram,0x0051f09f) */
/* WARNING: Removing unreachable block (ram,0x0051f0b9) */
/* WARNING: Removing unreachable block (ram,0x0051f0c4) */
/* WARNING: Removing unreachable block (ram,0x0051f08e) */
/* WARNING: Removing unreachable block (ram,0x0051f079) */
/* WARNING: Removing unreachable block (ram,0x0051f057) */
/* WARNING: Removing unreachable block (ram,0x0051f0dc) */

void FUN_0051ec50(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  byte *local_18;
  undefined **local_14;
  int *local_10;
  int local_c;
  undefined **local_8;
  
  if (*(char *)(*param_3 + 0x1e) == '\x05') {
    return;
  }
  local_10 = (int *)FUN_0056bce0(*param_3,1);
  if (local_10 == (int *)0x0) {
    return;
  }
  iVar12 = *param_3;
  if ((*(byte *)(iVar12 + 0x1c) & 0x10) == 0) {
    iVar4 = FUN_0056bce0(iVar12,1);
    sVar5 = 0;
    if (iVar4 != 0) goto LAB_0051ec94;
  }
  else {
LAB_0051ec94:
    sVar5 = *(size_t *)(iVar12 + 0x18);
    if ((*(ushort *)(iVar12 + 0x1c) & 0x4000) != 0) {
      sVar5 = sVar5 + *(int *)(iVar12 + 0x10);
    }
  }
  if (param_2 == 1) {
    local_c = 1;
    local_8 = (undefined **)&DAT_0071237f;
    local_14 = &PTR_DAT_007124d4;
    local_18 = (byte *)0x0;
  }
  else {
    local_18 = (byte *)FUN_0056bce0(param_3[1],1);
    if (local_18 == (byte *)0x0) {
      return;
    }
    uVar11 = 0;
    pbVar8 = local_18;
    param_3 = (int *)sVar5;
    if (*local_18 == 0) goto LAB_0051ef27;
    do {
      pbVar7 = pbVar8 + 1;
      if (0xbf < *pbVar8) {
        bVar1 = *pbVar7;
        while ((bVar1 & 0xc0) == 0x80) {
          pbVar8 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          bVar1 = *pbVar8;
        }
      }
      uVar11 = uVar11 + 1;
      pbVar8 = pbVar7;
    } while (*pbVar7 != 0);
    if ((int)uVar11 < 1) goto LAB_0051ef27;
    local_14 = (undefined **)
               FUN_005336b0(param_1,uVar11 * 5,
                            ((int)uVar11 >> 0x1f) + (((int)uVar11 >> 0x1f) << 2 | uVar11 >> 0x1e) +
                            (uint)CARRY4(uVar11,uVar11 * 4));
    if (local_14 == (undefined **)0x0) {
      return;
    }
    iVar12 = 0;
    local_8 = local_14 + uVar11;
    pbVar8 = local_18;
    if (*local_18 == 0) goto LAB_0051ef27;
    do {
      local_14[iVar12] = pbVar8;
      pbVar7 = pbVar8 + 1;
      if (0xbf < *pbVar8) {
        bVar1 = *pbVar7;
        while ((bVar1 & 0xc0) == 0x80) {
          pbVar8 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          bVar1 = *pbVar8;
        }
      }
      local_c = iVar12 + 1;
      *(char *)(iVar12 + (int)local_8) = (char)pbVar7 - *(char *)(local_14 + iVar12);
      pbVar8 = pbVar7;
      iVar12 = local_c;
    } while (*pbVar7 != 0);
    if (local_c < 1) goto LAB_0051ef27;
  }
  param_3 = (int *)sVar5;
  if (((*(uint *)(*param_1 + 4) & 1) != 0) && (0 < (int)sVar5)) {
LAB_0051edd0:
    iVar12 = 0;
    param_3 = (int *)sVar5;
    if (0 < local_c) {
      do {
        uVar11 = (uint)*(byte *)(iVar12 + (int)local_8);
        if ((int)uVar11 <= (int)sVar5) {
          piVar9 = (int *)local_14[iVar12];
          piVar6 = local_10;
          uVar3 = uVar11;
          while (uVar2 = uVar3 - 4, 3 < uVar3) {
            if (*piVar6 != *piVar9) goto LAB_0051ee0b;
            piVar6 = piVar6 + 1;
            piVar9 = piVar9 + 1;
            uVar3 = uVar2;
          }
          if (uVar2 == 0xfffffffc) goto LAB_0051ee51;
LAB_0051ee0b:
          if (((char)*piVar6 == (char)*piVar9) &&
             ((uVar2 == 0xfffffffd ||
              ((*(char *)((int)piVar6 + 1) == *(char *)((int)piVar9 + 1) &&
               ((uVar2 == 0xfffffffe ||
                ((*(char *)((int)piVar6 + 2) == *(char *)((int)piVar9 + 2) &&
                 ((uVar2 == 0xffffffff || (*(char *)((int)piVar6 + 3) == *(char *)((int)piVar9 + 3))
                  ))))))))))) goto LAB_0051ee51;
        }
        iVar12 = iVar12 + 1;
        if (local_c <= iVar12) break;
      } while( true );
    }
  }
LAB_0051ee72:
  if (((*(uint *)(*param_1 + 4) & 2) != 0) && (0 < (int)param_3)) {
LAB_0051ee83:
    iVar12 = 0;
    if (0 < local_c) {
      do {
        uVar11 = (uint)*(byte *)(iVar12 + (int)local_8);
        if ((int)uVar11 <= (int)param_3) {
          piVar6 = (int *)(((int)param_3 - uVar11) + (int)local_10);
          piVar9 = (int *)local_14[iVar12];
          uVar3 = uVar11;
          while (uVar2 = uVar3 - 4, 3 < uVar3) {
            if (*piVar6 != *piVar9) goto LAB_0051eec6;
            piVar6 = piVar6 + 1;
            piVar9 = piVar9 + 1;
            uVar3 = uVar2;
          }
          if (uVar2 == 0xfffffffc) goto LAB_0051ef03;
LAB_0051eec6:
          if (((char)*piVar6 == (char)*piVar9) &&
             ((uVar2 == 0xfffffffd ||
              ((*(char *)((int)piVar6 + 1) == *(char *)((int)piVar9 + 1) &&
               ((uVar2 == 0xfffffffe ||
                ((*(char *)((int)piVar6 + 2) == *(char *)((int)piVar9 + 2) &&
                 ((uVar2 == 0xffffffff || (*(char *)((int)piVar6 + 3) == *(char *)((int)piVar9 + 3))
                  ))))))))))) goto LAB_0051ef03;
        }
        iVar12 = iVar12 + 1;
        if (local_c <= iVar12) break;
      } while( true );
    }
  }
LAB_0051ef16:
  if (local_18 != (byte *)0x0) {
    FUN_00524410(local_14);
  }
LAB_0051ef27:
  piVar9 = param_1 + 2;
  if (local_10 == (int *)0x0) {
    if ((*(byte *)(param_1 + 9) & 0x40) != 0) {
      piVar9 = (int *)param_1[6];
      piVar9[1] = *(int *)(*piVar9 + 0xa4);
      *(int **)(*piVar9 + 0xa4) = piVar9;
    }
    if ((*(byte *)(param_1 + 9) & 0x20) != 0) {
      FUN_005644e0(param_1[6]);
    }
    *(ushort *)(param_1 + 9) = *(ushort *)(param_1 + 9) & 0xbe01 | 1;
    *(undefined1 *)((int)param_1 + 0x26) = 5;
    return;
  }
  if (*piVar9 == 0) {
    iVar12 = 1000000000;
  }
  else {
    iVar12 = *(int *)(*piVar9 + 0x50);
  }
  uVar10 = 2;
  if ((int)param_3 < 0) {
    sVar5 = 0;
    param_3 = (int *)0x0;
    if (-1 < iVar12) {
      do {
        param_3 = (int *)sVar5;
        if (*(char *)(sVar5 + (int)local_10) == '\0') break;
        sVar5 = sVar5 + 1;
        param_3 = (int *)sVar5;
      } while ((int)sVar5 <= iVar12);
    }
    uVar10 = 0x202;
  }
  sVar5 = (size_t)param_3;
  if ((uVar10 & 0x200) != 0) {
    sVar5 = (int)param_3 + 1;
  }
  if (iVar12 < (int)param_3) {
    param_1[0xe] = 0x12;
    if (*piVar9 == 0) {
      iVar12 = 1000000000;
    }
    else {
      iVar12 = *(int *)(*piVar9 + 0x50);
    }
    iVar4 = 0;
    if (-1 < iVar12) {
      do {
        if ("string or blob too big"[iVar4] == '\0') break;
        iVar4 = iVar4 + 1;
      } while (iVar4 <= iVar12);
    }
    uVar10 = *(ushort *)(param_1 + 9);
    if ((uVar10 & 0x2460) != 0) {
      if ((uVar10 & 0x2000) == 0) {
        if (((uVar10 & 0x400) == 0) || ((code *)param_1[10] == (code *)0x0)) {
          if ((uVar10 & 0x20) == 0) {
            if ((uVar10 & 0x40) != 0) {
              piVar6 = (int *)param_1[6];
              piVar6[1] = *(int *)(*piVar6 + 0xa4);
              *(int **)(*piVar6 + 0xa4) = piVar6;
              if ((*(byte *)(param_1 + 9) & 0x20) != 0) {
                FUN_005644e0(param_1[6]);
              }
              *(ushort *)(param_1 + 9) = *(ushort *)(param_1 + 9) & 0xbe01 | 1;
              *(undefined1 *)((int)param_1 + 0x26) = 5;
            }
          }
          else {
            FUN_005644e0(param_1[6]);
          }
        }
        else {
          (*(code *)param_1[10])(param_1[3]);
          param_1[10] = 0;
        }
      }
      else {
        FUN_00574670(piVar9,param_1[6]);
        FUN_00574d40(piVar9);
      }
    }
    FUN_005521a0(*piVar9,param_1[0xb]);
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[3] = (int)"string or blob too big";
    param_1[8] = iVar4;
    *(undefined2 *)((int)param_1 + 0x26) = 0x103;
    *(undefined2 *)(param_1 + 9) = 0xa02;
  }
  else {
    iVar12 = FUN_005748c0(piVar9,sVar5,0);
    if (iVar12 == 0) {
      memcpy((void *)param_1[3],local_10,sVar5);
      param_1[8] = (int)param_3;
      *(undefined2 *)((int)param_1 + 0x26) = 0x103;
      *(ushort *)(param_1 + 9) = uVar10;
      return;
    }
  }
  return;
LAB_0051ee51:
  sVar5 = sVar5 - uVar11;
  local_10 = (int *)((int)local_10 + uVar11);
  param_3 = (int *)sVar5;
  if ((int)sVar5 < 1) goto LAB_0051ee72;
  goto LAB_0051edd0;
LAB_0051ef03:
  param_3 = (int *)((int)param_3 - uVar11);
  if ((int)param_3 < 1) goto LAB_0051ef16;
  goto LAB_0051ee83;
}


/* FUN_0051f1f0 @ 0051f1f0  kind=gamemisc  attributed-by=none  size=283 */

void FUN_0051f1f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_9c [8];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  double local_7c;
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0053c140(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00532d10(local_9c);
    FUN_00532980(local_9c);
    FUN_005240c0(100,local_6c,"%04d-%02d-%02d %02d:%02d:%02d",local_94,local_90,local_8c,local_88,
                 local_84,(int)local_7c);
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
    else {
      iVar1 = FUN_005748c0(param_1 + 8,iVar2 + 1);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0051f310 @ 0051f310  kind=gamemisc  attributed-by=none  size=176 */

undefined4 * FUN_0051f310(undefined4 param_1,undefined4 param_2,int param_3)

{
  size_t _Size;
  bool bVar1;
  undefined4 *_Dst;
  int *piVar2;
  
  bVar1 = 0 < DAT_007665e4;
  _Size = (uint)bVar1 * 0x1c + 0x30;
  _Dst = (undefined4 *)FUN_0055da00(_Size);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,_Size);
    if (bVar1 == 0) {
      piVar2 = &DAT_0076b730;
    }
    else {
      piVar2 = _Dst + 0xc;
      _Dst[0xf] = 10;
    }
    _Dst[1] = param_1;
    _Dst[2] = param_2;
    *_Dst = piVar2;
    _Dst[3] = (uint)(param_3 != 0);
    if (param_3 != 0) {
      _Dst[4] = 10;
      if (*piVar2 != 0) {
        (*DAT_00766630)(*piVar2);
      }
      piVar2[2] = piVar2[2] + _Dst[4];
      piVar2[3] = (piVar2[1] - piVar2[2]) + 10;
      if (*piVar2 != 0) {
        (*DAT_00766638)(*piVar2);
      }
    }
  }
  return _Dst;
}


/* FUN_0051f3c0 @ 0051f3c0  kind=gamemisc  attributed-by=none  size=251 */

void FUN_0051f3c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_9c [20];
  undefined4 local_88;
  undefined4 local_84;
  double local_7c;
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0053c140(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00532980(local_9c);
    FUN_005240c0(100,local_6c,"%02d:%02d:%02d",local_88,local_84,(int)local_7c);
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
    else {
      iVar1 = FUN_005748c0(param_1 + 8,iVar2 + 1);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0051f4c0 @ 0051f4c0  kind=gamemisc  attributed-by=none  size=478 */

void FUN_0051f4c0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  char local_88 [128];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pbVar4 = (byte *)FUN_0056bce0(*param_3,1);
  iVar5 = *(int *)(param_1 + 8);
  puVar8 = (undefined4 *)0x0;
  pbVar6 = &DAT_006fc918;
  if (pbVar4 != (byte *)0x0) {
    pbVar6 = pbVar4;
  }
  iVar10 = *(int *)(iVar5 + 0x14);
  iVar7 = 0;
  if (0 < iVar10) {
    puVar3 = *(undefined4 **)(iVar5 + 0x10);
    do {
      puVar8 = puVar3;
      if (puVar8[1] != 0) {
        pbVar4 = (byte *)*puVar8;
        bVar2 = *pbVar4;
        pbVar9 = pbVar6;
        while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar9]))) {
          pbVar1 = pbVar4 + 1;
          pbVar4 = pbVar4 + 1;
          pbVar9 = pbVar9 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_007120d8)[*pbVar4] == (&DAT_007120d8)[*pbVar9]) break;
      }
      iVar7 = iVar7 + 1;
      puVar3 = puVar8 + 4;
    } while (iVar7 < iVar10);
  }
  if (iVar7 < iVar10) {
    if (iVar7 < 2) {
      pcVar11 = "cannot detach database %s";
    }
    else {
      if (*(char *)(iVar5 + 0x36) == '\0') {
        FUN_005240c0(0x80,local_88,"cannot DETACH database within transaction");
        goto LAB_0051f62c;
      }
      iVar10 = puVar8[1];
      if ((*(char *)(iVar10 + 8) == '\0') && (*(int *)(iVar10 + 0x10) == 0)) {
        FUN_0054c710(iVar10);
        puVar8[1] = 0;
        puVar8[3] = 0;
        FUN_00564000(iVar5);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      pcVar11 = "database %s is locked";
    }
  }
  else {
    pcVar11 = "no such database: %s";
  }
  FUN_005240c0(0x80,local_88,pcVar11,pbVar6);
LAB_0051f62c:
  *(undefined4 *)(param_1 + 0x38) = 1;
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    iVar5 = 1000000000;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x50);
  }
  iVar10 = 0;
  if (-1 < iVar5) {
    do {
      if (local_88[iVar10] == '\0') break;
      iVar10 = iVar10 + 1;
    } while (iVar10 <= iVar5);
  }
  if ((iVar10 <= iVar5) && (iVar5 = FUN_005748c0((int *)(param_1 + 8),iVar10 + 1U,0), iVar5 == 0)) {
    memcpy(*(void **)(param_1 + 0xc),local_88,iVar10 + 1U);
    *(int *)(param_1 + 0x20) = iVar10;
    *(undefined4 *)(param_1 + 0x24) = 0x1030202;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0051f6b0 @ 0051f6b0  kind=gamemisc  attributed-by=none  size=216 */

undefined4 FUN_0051f6b0(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)((int)param_1 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (DAT_007665e0 == 0) {
      (*DAT_00766604)(puVar2);
      puVar2 = puVar1;
    }
    else {
      if (DAT_0076b488 != 0) {
        (*DAT_00766630)(DAT_0076b488);
      }
      iVar3 = (*DAT_00766608._4_4_)(puVar2);
      DAT_0076b360 = DAT_0076b360 - iVar3;
      if (DAT_0076b388 < DAT_0076b360) {
        DAT_0076b388 = DAT_0076b360;
      }
      DAT_0076b384 = DAT_0076b384 + -1;
      if (DAT_0076b3ac < DAT_0076b384) {
        DAT_0076b3ac = DAT_0076b384;
      }
      (*DAT_00766604)(puVar2);
      puVar2 = puVar1;
      if (DAT_0076b488 != 0) {
        (*DAT_00766638)(DAT_0076b488);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined **)param_1 = &DAT_00712500;
  return 0;
}


/* FUN_0051f790 @ 0051f790  kind=gamemisc  attributed-by=none  size=254 */

void FUN_0051f790(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_9c [8];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0053c140(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00532d10(local_9c);
    FUN_005240c0(100,local_6c,"%04d-%02d-%02d",local_94,local_90,local_8c);
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
    else {
      iVar1 = FUN_005748c0(param_1 + 8,iVar2 + 1);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0051f890 @ 0051f890  kind=gamemisc  attributed-by=none  size=103 */

void FUN_0051f890(int *param_1,int param_2)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    piVar1 = (int *)*param_1;
    if (*piVar1 != 0) {
      (*DAT_00766630)(*piVar1);
    }
    piVar1[1] = piVar1[1] + (param_2 - param_1[5]);
    piVar1[3] = (piVar1[1] - piVar1[2]) + 10;
    param_1[5] = param_2;
    param_1[6] = (uint)(param_2 * 9) / 10;
    FUN_005440c0(piVar1);
    if (*piVar1 != 0) {
      (*DAT_00766638)(*piVar1);
    }
  }
  return;
}


/* FUN_0051f920 @ 0051f920  kind=gamemisc  attributed-by=none  size=75 */

void FUN_0051f920(int *param_1)

{
  int iVar1;
  
  if (param_1[3] != 0) {
    param_1 = (int *)*param_1;
    if (*param_1 != 0) {
      (*DAT_00766630)(*param_1);
    }
    iVar1 = param_1[1];
    param_1[1] = 0;
    FUN_005440c0(param_1);
    param_1[1] = iVar1;
    if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0051f962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_00766638)();
      return;
    }
  }
  return;
}


/* FUN_0051f970 @ 0051f970  kind=gamemisc  attributed-by=none  size=510 */

void FUN_0051f970(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  char *pcVar15;
  uint local_9c;
  int iStack_98;
  undefined1 local_6c [100];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pcVar4 = (char *)FUN_0056bce0(*param_3,1);
  if ((pcVar4 == (char *)0x0) ||
     (iVar5 = FUN_0053c140(param_1,param_2 + -1,param_3 + 1,&local_9c), iVar5 != 0))
  goto LAB_0051fe24;
  iVar5 = 0;
  uVar11 = 0;
  uVar10 = 1;
  if (*pcVar4 == '\0') {
LAB_0051fa9a:
    puVar6 = local_6c;
LAB_0051faa3:
    FUN_00532a40();
    FUN_00532d10(&local_9c);
    FUN_00532980(&local_9c);
    iVar5 = 0;
    cVar3 = *pcVar4;
    uVar10 = local_9c;
    iVar7 = iStack_98;
    while (cVar3 != '\0') {
      local_9c = uVar10;
      iStack_98 = iVar7;
      if (*pcVar4 != '%') {
        puVar6[iVar5] = *pcVar4;
        goto LAB_0051fdca;
      }
      cVar3 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
      switch(cVar3) {
      case 'H':
        break;
      default:
        puVar6[iVar5] = 0x25;
        goto LAB_0051fdca;
      case 'J':
        pcVar15 = "%.16g";
        uVar14 = 0x14;
        goto LAB_0051fb5f;
      case 'M':
        break;
      case 'S':
        break;
      case 'W':
      case 'j':
        FUN_00532a40();
        iVar2 = iStack_98;
        uVar11 = local_9c;
        __alldiv((local_9c - uVar10) + 43200000,
                 ((iStack_98 - iVar7) - (uint)(local_9c < uVar10)) +
                 (uint)(0xfd6cd1ff < local_9c - uVar10),86400000,0);
        if (cVar3 == 'W') {
          uVar13 = __alldiv(uVar11 + 43200000,iVar2 + (uint)(0xfd6cd1ff < uVar11),86400000,0);
          __allrem(uVar13,7,0);
          break;
        }
        FUN_005240c0(4,puVar6 + iVar5);
        iVar5 = iVar5 + 3;
        goto LAB_0051fdcb;
      case 'Y':
        FUN_005240c0(5,puVar6 + iVar5);
        iVar7 = FUN_00568070(puVar6 + iVar5);
        iVar5 = iVar5 + iVar7;
        goto LAB_0051fdcb;
      case 'd':
        break;
      case 'f':
        pcVar15 = "%06.3f";
        uVar14 = 7;
        goto LAB_0051fb5f;
      case 'm':
        break;
      case 's':
        __alldiv(uVar10,iVar7,1000,0);
        pcVar15 = "%lld";
        uVar14 = 0x1e;
LAB_0051fb5f:
        FUN_005240c0(uVar14,puVar6 + iVar5,pcVar15);
        iVar7 = FUN_00568070(puVar6 + iVar5);
        iVar5 = iVar5 + iVar7;
        goto LAB_0051fdcb;
      case 'w':
        uVar13 = __alldiv(uVar10 + 0x7b98a00,iVar7 + (uint)(0xf84675ff < uVar10),86400000,0);
        cVar3 = __allrem(uVar13,7,0);
        puVar6[iVar5] = cVar3 + '0';
LAB_0051fdca:
        iVar5 = iVar5 + 1;
        goto LAB_0051fdcb;
      }
      FUN_005240c0(3,puVar6 + iVar5);
      iVar5 = iVar5 + 2;
LAB_0051fdcb:
      pcVar4 = pcVar4 + 1;
      uVar10 = local_9c;
      iVar7 = iStack_98;
      cVar3 = *pcVar4;
    }
    pcVar8 = FUN_0055dc20;
    if (puVar6 == local_6c) {
      pcVar8 = (code *)0xffffffff;
    }
    puVar6[iVar5] = 0;
    iVar5 = FUN_00575040(param_1 + 8,puVar6,0xffffffff,CONCAT44(pcVar8,1));
    if (iVar5 != 0x12) goto LAB_0051fe24;
  }
  else {
    do {
      if (pcVar4[iVar5] == '%') {
        switch(pcVar4[iVar5 + 1]) {
        case '%':
        case 'w':
          goto LAB_0051fa2a;
        default:
          goto LAB_0051fe24;
        case 'H':
        case 'M':
        case 'S':
        case 'W':
        case 'd':
        case 'm':
          bVar12 = 0xfffffffe < uVar10;
          uVar10 = uVar10 + 1;
          break;
        case 'J':
        case 's':
          bVar12 = 0xffffffcd < uVar10;
          uVar10 = uVar10 + 0x32;
          break;
        case 'Y':
        case 'f':
          bVar12 = 0xfffffff7 < uVar10;
          uVar10 = uVar10 + 8;
          break;
        case 'j':
          bVar12 = 0xfffffffc < uVar10;
          uVar10 = uVar10 + 3;
        }
        uVar11 = uVar11 + bVar12;
LAB_0051fa2a:
        iVar5 = iVar5 + 1;
      }
      iVar5 = iVar5 + 1;
      bVar12 = 0xfffffffe < uVar10;
      uVar10 = uVar10 + 1;
      uVar11 = uVar11 + bVar12;
    } while (pcVar4[iVar5] != '\0');
    if ((uVar11 == 0) && (uVar10 < 100)) goto LAB_0051fa9a;
    uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x50);
    uVar9 = (int)uVar1 >> 0x1f;
    if ((uVar11 < uVar9) || ((uVar11 <= uVar9 && (uVar10 <= uVar1)))) {
      puVar6 = (undefined1 *)FUN_00552230(*(int *)(param_1 + 8),uVar10);
      if (puVar6 == (undefined1 *)0x0) {
        FUN_0051d110();
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_0051faa3;
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0x12;
  FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
LAB_0051fe24:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0051ff10 @ 0051ff10  kind=gamemisc  attributed-by=none  size=53 */

undefined4 FUN_0051ff10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)*param_1 != 0) {
    (*DAT_00766630)(*(int *)*param_1);
  }
  uVar1 = param_1[9];
  if (*(int *)*param_1 != 0) {
    (*DAT_00766638)(*(int *)*param_1);
  }
  return uVar1;
}


/* FUN_0051ff80 @ 0051ff80  kind=gamemisc  attributed-by=none  size=528 */

int FUN_0051ff80(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = 0;
  piVar2 = (int *)*param_1;
  if (*piVar2 != 0) {
    (*DAT_00766630)(*piVar2);
  }
  if (param_1[10] != 0) {
    for (iVar5 = *(int *)(param_1[0xb] + (param_2 % (uint)param_1[10]) * 4); iVar5 != 0;
        iVar5 = *(int *)(iVar5 + 0xc)) {
      if (*(uint *)(iVar5 + 8) == param_2) goto LAB_00520118;
    }
  }
  if (param_3 == 0) {
    if (iVar5 == 0) goto LAB_00520176;
LAB_00520118:
    iVar4 = **(int **)(iVar5 + 0x10);
    if ((*(int *)(iVar5 + 0x14) != 0) || (iVar5 == *(int *)(iVar4 + 0x18))) {
      if (*(int *)(iVar5 + 0x18) != 0) {
        *(int *)(*(int *)(iVar5 + 0x18) + 0x14) = *(int *)(iVar5 + 0x14);
      }
      if (*(int *)(iVar5 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x18) = *(undefined4 *)(iVar5 + 0x18);
      }
      if (*(int *)(iVar4 + 0x14) == iVar5) {
        *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
      }
      if (*(int *)(iVar4 + 0x18) == iVar5) {
        *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar5 + 0x18);
      }
      *(undefined4 *)(iVar5 + 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x18) = 0;
      piVar1 = (int *)(*(int *)(iVar5 + 0x10) + 0x20);
      *piVar1 = *piVar1 + -1;
    }
  }
  else if (param_3 == 1) {
    if (((uint)(param_1[9] - param_1[8]) < (uint)piVar2[3]) &&
       ((uint)(param_1[9] - param_1[8]) < (uint)param_1[6])) {
      if ((DAT_0076b754 == 0) || (iVar4 = DAT_0076b770, DAT_0076b750 < param_1[2] + param_1[1])) {
        iVar4 = DAT_0076b4ac;
      }
      if (iVar4 == 0) goto LAB_00520021;
    }
  }
  else {
LAB_00520021:
    if (((uint)param_1[9] < (uint)param_1[10]) || (iVar4 = FUN_00544360(param_1), iVar4 == 0)) {
      if ((param_1[3] == 0) || (iVar4 = piVar2[6], iVar4 == 0)) {
LAB_005200a3:
        if (iVar5 == 0) goto LAB_005200a7;
      }
      else {
        if ((param_1[9] + 1U < (uint)param_1[5]) && ((uint)piVar2[4] < (uint)piVar2[1])) {
          uVar6 = FUN_00544540(param_1);
          iVar4 = (int)((ulonglong)uVar6 >> 0x20);
          if ((int)uVar6 == 0) goto LAB_005200a3;
        }
        FUN_00544320(iVar4);
        FUN_005442c0(iVar4);
        iVar5 = *(int *)(iVar4 + 0x10);
        if (*(int *)(iVar5 + 8) + *(int *)(iVar5 + 4) == param_1[2] + param_1[1]) {
          piVar2[4] = piVar2[4] + (param_1[3] - *(int *)(iVar5 + 0xc));
          iVar5 = iVar4;
          goto LAB_005200a3;
        }
        FUN_00544290(iVar4);
LAB_005200a7:
        if ((param_3 == 1) && (DAT_0076b3bc != (code *)0x0)) {
          (*DAT_0076b3bc)();
        }
        iVar5 = FUN_00544050(param_1);
        if ((param_3 == 1) && (DAT_0076b3c0 != (code *)0x0)) {
          (*DAT_0076b3c0)();
        }
        if (iVar5 == 0) goto LAB_00520176;
      }
      uVar3 = param_1[10];
      param_1[9] = param_1[9] + 1;
      *(uint *)(iVar5 + 8) = param_2;
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1[0xb] + (param_2 % uVar3) * 4);
      *(int **)(iVar5 + 0x10) = param_1;
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x14) = 0;
      **(undefined4 **)(iVar5 + 4) = 0;
      *(int *)(param_1[0xb] + (param_2 % uVar3) * 4) = iVar5;
    }
  }
  if ((iVar5 != 0) && ((uint)param_1[7] < param_2)) {
    param_1[7] = param_2;
  }
LAB_00520176:
  if (*piVar2 != 0) {
    (*DAT_00766638)(*piVar2);
  }
  return iVar5;
}


/* FUN_005201b0 @ 005201b0  kind=gamemisc  attributed-by=none  size=505 */

void FUN_005201b0(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_c0 [4];
  int local_b0;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  iVar1 = FUN_00533710(param_2);
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_0076b480 == 0) {
    local_c0[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_c0);
    DAT_0076b480 = (local_b0 == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    iVar5 = 0;
    local_2c = 0;
    local_24 = 0;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    while( true ) {
      uVar4 = (*(code *)PTR_GetFileAttributesExW_0076718c)(iVar1,0,&local_2c);
      if (uVar4 != 0) break;
      iVar2 = (*(code *)PTR_GetLastError_007671bc)();
      if ((DAT_007666d4 <= iVar5) || (((iVar2 != 5 && (iVar2 != 0x21)) && (iVar2 != 0x20)))) {
        if (iVar5 != 0) {
          FUN_00525a30(10,"delayed %dms for lock/sharing conflict",
                       ((iVar5 + 1) * DAT_007666d8 * iVar5) / 2);
        }
        if ((iVar2 != 2) && (iVar2 != 3)) {
          FUN_0057fa50(0xd0a,iVar2,"winAccess",param_2,0x8547);
          FUN_00524410(iVar1);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        goto LAB_00520331;
      }
      iVar5 = iVar5 + 1;
      (*(code *)PTR_Sleep_00767300)(iVar5 * DAT_007666d8);
    }
    if (((param_3 == 0) && (local_14._4_4_ == 0)) && (local_c == 0)) {
LAB_00520331:
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)local_2c;
    }
  }
  else {
    uVar3 = (*(code *)PTR_GetFileAttributesA_00767174)(iVar1);
  }
  FUN_00524410(iVar1);
  if (param_3 != 0) {
    if (param_3 == 1) {
      if ((uVar3 == 0xffffffff) || ((uVar3 & 1) != 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      goto LAB_0052037a;
    }
    if (param_3 != 2) goto LAB_0052037a;
  }
  uVar4 = (uint)(uVar3 != 0xffffffff);
LAB_0052037a:
  *param_4 = uVar4;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005204f0 @ 005204f0  kind=gamemisc  attributed-by=none  size=300 */

void FUN_005204f0(void *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar4 = FUN_0056bce0(*param_3,1);
  iVar3 = (int)param_1;
  uVar2 = *(undefined4 *)((int)param_1 + 8);
  piVar1 = (int *)((int)param_1 + 8);
  param_1 = (void *)0x0;
  if (param_2 == 2) {
    uVar5 = FUN_0056bce0(param_3[1],1);
  }
  else {
    uVar5 = 0;
  }
  if ((iVar4 != 0) && (iVar4 = FUN_0057a1b0(uVar2,iVar4,uVar5,&param_1), _Src = param_1, iVar4 != 0)
     ) {
    *(undefined4 *)(iVar3 + 0x38) = 1;
    if (param_1 == (void *)0x0) {
      if ((*(byte *)(iVar3 + 0x24) & 0x40) != 0) {
        piVar1 = *(int **)(iVar3 + 0x18);
        piVar1[1] = *(int *)(*piVar1 + 0xa4);
        *(int **)(*piVar1 + 0xa4) = piVar1;
      }
      if ((*(byte *)(iVar3 + 0x24) & 0x20) != 0) {
        FUN_005644e0(*(undefined4 *)(iVar3 + 0x18));
      }
      *(ushort *)(iVar3 + 0x24) = *(ushort *)(iVar3 + 0x24) & 0xbe01 | 1;
      *(undefined1 *)(iVar3 + 0x26) = 5;
      FUN_00524410(0);
      return;
    }
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      iVar4 = 1000000000;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x50);
    }
    iVar6 = 0;
    if (-1 < iVar4) {
      do {
        if (*(char *)(iVar6 + (int)param_1) == '\0') break;
        iVar6 = iVar6 + 1;
      } while (iVar6 <= iVar4);
    }
    if ((iVar6 <= iVar4) && (iVar4 = FUN_005748c0(piVar1,iVar6 + 1,0), iVar4 == 0)) {
      memcpy(*(void **)(iVar3 + 0xc),_Src,iVar6 + 1);
      *(int *)(iVar3 + 0x20) = iVar6;
      *(undefined4 *)(iVar3 + 0x24) = 0x1030202;
    }
    FUN_00524410(_Src);
  }
  return;
}


/* FUN_00520620 @ 00520620  kind=gamemisc  attributed-by=none  size=18 */

void FUN_00520620(undefined4 param_1)

{
  FUN_0054fc20(param_1,0);
  return;
}


/* FUN_00520640 @ 00520640  kind=gamemisc  attributed-by=none  size=286 */

void FUN_00520640(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  double *pdVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  undefined8 *puVar5;
  double *pdVar6;
  int iVar7;
  float10 fVar8;
  longlong lVar9;
  
  iVar7 = param_1[0xc];
  if ((*(ushort *)(iVar7 + 0x1c) & 0x2000) == 0) {
    FUN_005748c0(iVar7,0x20,0);
    *(undefined2 *)(iVar7 + 0x1c) = 0x2000;
    *(undefined4 *)(iVar7 + 0x10) = *param_1;
    puVar5 = *(undefined8 **)(iVar7 + 4);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
    }
  }
  pdVar6 = *(double **)(iVar7 + 4);
  iVar7 = *param_3;
  if (*(char *)(iVar7 + 0x1e) == '\x03') {
    FUN_0052b630(iVar7);
    uVar4 = *(ushort *)(iVar7 + 0x1c);
    if ((uVar4 & 1) == 0) {
      if ((uVar4 & 4) == 0) {
        if ((uVar4 & 8) == 0) {
          *(char *)(iVar7 + 0x1e) = '\x04' - ((uVar4 & 2) != 0);
        }
        else {
          *(undefined1 *)(iVar7 + 0x1e) = 2;
        }
      }
      else {
        *(undefined1 *)(iVar7 + 0x1e) = 1;
      }
    }
    else {
      *(undefined1 *)(iVar7 + 0x1e) = 5;
    }
  }
  cVar3 = *(char *)(iVar7 + 0x1e);
  if ((pdVar6 != (double *)0x0) && (cVar3 != '\x05')) {
    pdVar1 = pdVar6 + 2;
    uVar2 = *(uint *)pdVar1;
    *(uint *)pdVar1 = *(uint *)pdVar1 + 1;
    *(int *)((int)pdVar6 + 0x14) = *(int *)((int)pdVar6 + 0x14) + (uint)(0xfffffffe < uVar2);
    if (cVar3 == '\x01') {
      lVar9 = FUN_0051c890();
      *pdVar6 = (double)lVar9 + *pdVar6;
      if (*(char *)((int)pdVar6 + 0x19) == '\0' && *(char *)(pdVar6 + 3) == '\0') {
        iVar7 = FUN_00549380(pdVar6 + 1,lVar9);
        if (iVar7 != 0) {
          *(undefined1 *)(pdVar6 + 3) = 1;
          return;
        }
      }
    }
    else {
      fVar8 = (float10)FUN_0051c7a0(*param_3);
      *(undefined1 *)((int)pdVar6 + 0x19) = 1;
      *pdVar6 = (double)fVar8 + *pdVar6;
    }
  }
  return;
}


/* FUN_00520c70 @ 00520c70  kind=gamemisc  attributed-by=none  size=178 */

void FUN_00520c70(int *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 != 0) {
    (*DAT_00766630)(*piVar1);
  }
  if ((param_3 == 0) && ((uint)piVar1[4] <= (uint)piVar1[1])) {
    if (piVar1[5] == 0) {
      piVar1[6] = (int)param_2;
      piVar1[5] = (int)param_2;
      param_1[8] = param_1[8] + 1;
    }
    else {
      *(undefined4 **)(piVar1[5] + 0x18) = param_2;
      param_2[5] = piVar1[5];
      piVar1[5] = (int)param_2;
      param_1[8] = param_1[8] + 1;
    }
  }
  else {
    iVar2 = param_2[4];
    piVar1 = (int *)(*(int *)(iVar2 + 0x2c) + ((uint)param_2[2] % *(uint *)(iVar2 + 0x28)) * 4);
    puVar3 = (undefined4 *)*piVar1;
    while (puVar3 != param_2) {
      piVar1 = puVar3 + 3;
      puVar3 = (undefined4 *)*piVar1;
    }
    *piVar1 = *(int *)(*piVar1 + 0xc);
    *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + -1;
    piVar1 = (int *)param_2[4];
    FUN_00544190(*param_2);
    if (piVar1[3] != 0) {
      piVar1 = (int *)(*piVar1 + 0x10);
      *piVar1 = *piVar1 + -1;
    }
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00766638)(*(int *)*param_1);
  }
  return;
}


