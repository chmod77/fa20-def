
void FUN_0009ea38(char param_1,char param_2,char param_3,char param_4,ushort param_5,char param_6,
                 char param_7,uint param_8,char param_9,char param_10,uint param_11,short param_12,
                 char param_13,char param_14,char param_15,undefined1 *param_16)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  
  bVar2 = false;
  if (((param_1 == '\0') && (param_9 != '\0')) && (param_13 != '\0')) {
    bVar2 = true;
  }
  bVar3 = false;
  if (((bVar2) && (param_6 == '\0')) && (99 < param_5)) {
    bVar3 = true;
  }
  param_8 = param_8 & 0xff;
  iVar9 = param_8 * (int)(short)(0x10 - ((ushort)param_11 & 0xff));
  sVar8 = 0x7fff;
  if (iVar9 < 0x800) {
    if (iVar9 < -0x800) {
      sVar8 = -0x8000;
    }
    else {
      sVar8 = (short)iVar9 * 0x10;
    }
  }
  bVar1 = param_15 == '\x01';
  iVar7 = param_8 * (param_11 & 0xff) * -0x10;
  iVar9 = -0x8000;
  if (-0x8001 < iVar7) {
    iVar9 = iVar7;
  }
  bVar5 = false;
  if (((5 < param_8) && ((short)iVar9 < param_12)) && (param_12 < 0)) {
    bVar5 = true;
  }
  bVar4 = false;
  if (((5 < param_8) && (param_12 < sVar8)) && (0 < param_12)) {
    bVar4 = true;
  }
  if (((!bVar2) || (param_6 != '\0')) ||
     (((param_10 != '\0' && (param_14 == DAT_fffec0dc)) || (bVar1)))) {
    if (((bVar1) || (!bVar3)) || ((param_2 == '\0' || (!bVar4)))) {
      if (((!bVar3) || (!bVar4)) || (bVar1)) {
        if ((!bVar3) || (bVar1)) {
          if ((bVar2) && (((param_7 != '\0' && (bVar5)) && (param_6 != '\0')))) {
            uVar6 = 8;
          }
          else if ((((bVar2) && (param_2 != '\0')) && (bVar5)) && (param_6 != '\0')) {
            uVar6 = 9;
          }
          else if (((bVar2) && (bVar5)) && (param_6 != '\0')) {
            uVar6 = 10;
          }
          else if ((bVar2) && (param_6 != '\0')) {
            uVar6 = 0xb;
          }
          else {
            uVar6 = 0;
          }
        }
        else {
          uVar6 = 7;
        }
      }
      else {
        uVar6 = 6;
      }
    }
    else {
      uVar6 = 5;
    }
  }
  else {
    uVar6 = 4;
  }
  if ((bVar2) && (param_3 != '\0')) {
    *param_16 = 1;
  }
  else if (param_4 == '\0') {
    if (param_13 == '\0') {
      *param_16 = 3;
    }
    else {
      *param_16 = uVar6;
    }
  }
  else {
    *param_16 = 2;
  }
  DAT_fffec0dc = param_14;
  return;
}

