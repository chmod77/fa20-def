
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac564(char param_1,short param_2,char param_3,short param_4,char param_5,char param_6,
                 char param_7,short *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  
  iVar7 = (int)param_2;
  if (param_7 != '\0') {
    bVar2 = false;
    if (((param_5 == '\0') && (param_4 < -0xee)) && (param_3 != '\0')) {
      bVar2 = true;
    }
    bVar3 = false;
    if (((param_5 == '\0') && (0xed < param_4)) && (param_3 != '\0')) {
      bVar3 = true;
    }
    bVar6 = 0;
    if ((bVar2) && (bVar6 = 0xff, DAT_fffec4df != 0xff)) {
      bVar6 = DAT_fffec4df + 1;
    }
    if (DAT_fffec4de != 0) {
      bVar6 = 1;
    }
    bVar1 = 0x20 < bVar6;
    iVar4 = iVar7;
    if (bVar2 && bVar1 < DAT_fffec4de) {
      iVar4 = -0x8000;
      if (-0x8001 < iVar7 + -0xbe) {
        iVar4 = (int)(short)(iVar7 + -0xbe);
      }
    }
    bVar5 = 0;
    if ((bVar3) && (bVar5 = 0xff, DAT_fffec4e0 != 0xff)) {
      bVar5 = DAT_fffec4e0 + 1;
    }
    if (DAT_fffec4e1 != 0) {
      bVar5 = 1;
    }
    bVar2 = 0x20 < bVar5;
    if ((bVar3 && bVar2 < DAT_fffec4e1) && (iVar4 = iVar7 + 0xbe, 0x7fff < iVar4)) {
      iVar4 = 0x7fff;
    }
    _DAT_fffec4dc = (short)iVar4;
    if (0x947 < _DAT_fffec4dc) {
      _DAT_fffec4dc = 0x948;
    }
    DAT_fffec4de = bVar1;
    DAT_fffec4df = bVar6;
    DAT_fffec4e0 = bVar5;
    DAT_fffec4e1 = bVar2;
    if (_DAT_fffec4dc < -0x947) {
      _DAT_fffec4dc = -0x948;
    }
  }
  if ((((param_1 == '\0') < DAT_fffec4e2) || (param_6 != '\0')) || (param_5 != '\0')) {
    *param_8 = 0;
  }
  else if (param_7 == '\0') {
    *param_8 = param_2;
  }
  else {
    *param_8 = _DAT_fffec4dc;
  }
  DAT_fffec4e2 = param_1 == '\0';
  return;
}

