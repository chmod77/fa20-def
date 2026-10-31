
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac1f4(char param_1,short param_2,char param_3,short param_4,char param_5,char param_6,
                 char param_7,short *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  
  iVar8 = (int)param_2;
  if (param_7 != '\0') {
    if (param_1 == '\0') {
      sVar4 = 0x37af;
    }
    else {
      sVar4 = 0x948;
    }
    bVar2 = false;
    if (((param_5 == '\x03') && (param_4 < -0xee)) && (param_3 != '\0')) {
      bVar2 = true;
    }
    bVar3 = false;
    if (((param_5 == '\x03') && (0xed < param_4)) && (param_3 != '\0')) {
      bVar3 = true;
    }
    bVar7 = 0;
    if ((bVar2) && (bVar7 = 0xff, DAT_fffec4cf != 0xff)) {
      bVar7 = DAT_fffec4cf + 1;
    }
    if (DAT_fffec4ce != 0) {
      bVar7 = 1;
    }
    bVar1 = 0x20 < bVar7;
    iVar5 = iVar8;
    if (bVar2 && bVar1 < DAT_fffec4ce) {
      iVar5 = -0x8000;
      if (-0x8001 < iVar8 + -0xbe) {
        iVar5 = (int)(short)(iVar8 + -0xbe);
      }
    }
    bVar6 = 0;
    if ((bVar3) && (bVar6 = 0xff, DAT_fffec4d2 != 0xff)) {
      bVar6 = DAT_fffec4d2 + 1;
    }
    if (DAT_fffec4d0 != 0) {
      bVar6 = 1;
    }
    bVar2 = 0x20 < bVar6;
    if ((bVar3 && bVar2 < DAT_fffec4d0) && (iVar5 = iVar8 + 0xbe, 0x7fff < iVar5)) {
      iVar5 = 0x7fff;
    }
    _DAT_fffec4cc = (short)iVar5;
    if (sVar4 <= (short)iVar5) {
      _DAT_fffec4cc = sVar4;
    }
    DAT_fffec4ce = bVar1;
    DAT_fffec4cf = bVar7;
    DAT_fffec4d0 = bVar2;
    DAT_fffec4d2 = bVar6;
    if (_DAT_fffec4cc < -0x947) {
      _DAT_fffec4cc = -0x948;
    }
  }
  if (((param_1 == '\0') < DAT_fffec4d1) || (param_6 != '\0')) {
    *param_8 = 0;
  }
  else if (param_7 == '\0') {
    *param_8 = param_2;
  }
  else {
    *param_8 = _DAT_fffec4cc;
  }
  DAT_fffec4d1 = param_1 == '\0';
  return;
}

