
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001053e0(char param_1,byte param_2,byte param_3,byte param_4,byte param_5,
                 undefined1 param_6,byte param_7,char param_8,char param_9,char param_10,
                 char param_11,char param_12,char param_13,byte param_14,ushort param_15,
                 char *param_16,char *param_17,char *param_18,char *param_19,char *param_20)

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
  char cVar10;
  char cVar11;
  
  cVar4 = '\0';
  if (param_1 == '\0') {
    cVar4 = DAT_fffeda5e;
  }
  cVar11 = '\0';
  if (param_1 == '\0') {
    cVar11 = DAT_fffeda69;
  }
  cVar6 = '\x01';
  if (DAT_fffeda64 <= param_14) {
    cVar6 = DAT_fffeda66;
  }
  if (param_14 != 0) {
    cVar6 = '\0';
  }
  if (cVar6 == '\0') {
    _DAT_fffeda5c = 0;
    sVar3 = _DAT_fffeda5c;
  }
  else {
    sVar3 = -1;
    if (_DAT_fffeda5c != -1) {
      sVar3 = _DAT_fffeda5c + 1;
    }
  }
  _DAT_fffeda5c = sVar3;
  if ((((DAT_fffeda63 < param_2) || (DAT_fffeda62 < param_3)) || (param_4 < DAT_fffeda61)) &&
     ((param_8 != '\0' && (param_9 != '\0')))) {
    cVar4 = '\x01';
  }
  cVar5 = '\0';
  if (cVar4 != '\0') {
    cVar5 = -0x80;
  }
  DAT_fffeda66 = cVar6;
  *param_17 = cVar4;
  bVar2 = true;
  if (DAT_fffeda60 <= param_5) {
    if ((DAT_fffeda65 != '\0') && (DAT_fffeda5f < param_7)) {
      bVar1 = true;
      if ((param_13 == '\0') && ((param_14 == 0 && (0x6666 < param_15)))) {
        bVar1 = false;
      }
      if (!bVar1) goto LAB_0010553a;
    }
    bVar2 = false;
  }
LAB_0010553a:
  if ((bVar2) && (param_12 == '\x02')) {
    cVar11 = '\x01';
  }
  cVar6 = '\0';
  if (cVar11 != '\0') {
    cVar6 = '\x02';
  }
  *param_20 = cVar11;
  cVar8 = '\0';
  if (param_1 == '\0') {
    cVar8 = DAT_fffeda67;
  }
  if ((bVar2) && (param_10 != '\0')) {
    cVar8 = '\x01';
  }
  cVar10 = '\0';
  if (cVar8 != '\0') {
    cVar10 = ' ';
  }
  *param_18 = cVar8;
  cVar7 = '\0';
  if (param_1 == '\0') {
    cVar7 = DAT_fffeda68;
  }
  if (((bVar2) && (param_8 != '\0')) && (param_11 != '\0')) {
    cVar7 = '\x01';
  }
  cVar9 = '\0';
  if (cVar7 != '\0') {
    cVar9 = '\x10';
  }
  *param_16 = cVar5 + cVar10 + cVar9 + cVar6;
  *param_19 = cVar7;
  DAT_fffeda5e = cVar4;
  DAT_fffeda69 = cVar11;
  DAT_fffeda65 = param_6;
  DAT_fffeda64 = param_14;
  DAT_fffeda63 = param_2;
  DAT_fffeda62 = param_3;
  DAT_fffeda61 = param_4;
  DAT_fffeda60 = param_5;
  DAT_fffeda5f = param_7;
  DAT_fffeda67 = cVar8;
  DAT_fffeda68 = cVar7;
  return;
}

