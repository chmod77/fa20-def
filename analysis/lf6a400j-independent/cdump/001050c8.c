
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001050c8(byte param_1,byte param_2,byte param_3,char param_4,char param_5,char param_6,
                 byte param_7,undefined1 param_8,byte param_9,char param_10,char param_11,
                 char param_12,char param_13,char param_14,byte param_15,ushort param_16,
                 char *param_17,char *param_18,char *param_19,char *param_20)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  
  cVar4 = '\0';
  if (param_6 == '\0') {
    cVar4 = DAT_fffeda46;
  }
  cVar6 = '\x01';
  if (DAT_fffeda50 <= param_15) {
    cVar6 = DAT_fffeda4c;
  }
  if (param_15 != 0) {
    cVar6 = '\0';
  }
  if (cVar6 == '\0') {
    _DAT_fffeda44 = 0;
    sVar3 = _DAT_fffeda44;
  }
  else {
    sVar3 = -1;
    if (_DAT_fffeda44 != -1) {
      sVar3 = _DAT_fffeda44 + 1;
    }
  }
  _DAT_fffeda44 = sVar3;
  if ((((DAT_fffeda4e < param_1) || (DAT_fffeda4b < param_2)) || (param_3 < DAT_fffeda4a)) &&
     ((param_4 != '\0' || (param_5 != '\0')))) {
    cVar4 = '\x01';
  }
  cVar5 = '\0';
  if (cVar4 != '\0') {
    cVar5 = -0x80;
  }
  DAT_fffeda4c = cVar6;
  *param_18 = cVar4;
  cVar6 = '\0';
  if (param_6 == '\0') {
    cVar6 = DAT_fffeda48;
  }
  cVar9 = '\0';
  if (param_6 == '\0') {
    cVar9 = DAT_fffeda47;
  }
  bVar2 = true;
  if (DAT_fffeda49 <= param_7) {
    if ((DAT_fffeda4d != '\0') && (DAT_fffeda4f < param_9)) {
      bVar1 = true;
      if ((param_14 == '\0') && ((param_15 == 0 && (0x6666 < param_16)))) {
        bVar1 = false;
      }
      if (!bVar1) goto LAB_00105238;
    }
    bVar2 = false;
  }
LAB_00105238:
  if ((bVar2) && ((param_12 != '\0' || (param_13 != '\0')))) {
    cVar9 = '\x01';
  }
  cVar7 = '\0';
  if (cVar9 != '\0') {
    cVar7 = '\b';
  }
  *param_20 = cVar9;
  if ((bVar2) && ((param_10 != '\0' || (param_11 == '\0')))) {
    cVar6 = '\x01';
  }
  cVar8 = '\0';
  if (cVar6 != '\0') {
    cVar8 = ' ';
  }
  *param_17 = cVar5 + cVar8 + cVar7;
  *param_19 = cVar6;
  DAT_fffeda46 = cVar4;
  DAT_fffeda4e = param_1;
  DAT_fffeda50 = param_15;
  DAT_fffeda4b = param_2;
  DAT_fffeda4a = param_3;
  DAT_fffeda49 = param_7;
  DAT_fffeda4f = param_9;
  DAT_fffeda48 = cVar6;
  DAT_fffeda47 = cVar9;
  DAT_fffeda4d = param_8;
  return;
}

