
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00104ab4(byte param_1,byte param_2,byte param_3,char param_4,undefined1 param_5,
                 byte param_6,char param_7,char param_8,char param_9,char param_10,char param_11,
                 char param_12,char param_13,char param_14,char param_15,char param_16,byte param_17
                 ,char param_18,byte param_19,ushort param_20,char *param_21,char *param_22,
                 char *param_23,char *param_24,char *param_25,char *param_26,char *param_27,
                 char *param_28)

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
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  
  cVar4 = '\x01';
  if (DAT_fffeda34 <= param_19) {
    cVar4 = DAT_fffeda39;
  }
  if (param_19 != 0) {
    cVar4 = '\0';
  }
  if (cVar4 == '\0') {
    _DAT_fffeda28 = 0;
    sVar3 = _DAT_fffeda28;
  }
  else {
    sVar3 = -1;
    if (_DAT_fffeda28 != -1) {
      sVar3 = _DAT_fffeda28 + 1;
    }
  }
  _DAT_fffeda28 = sVar3;
  cVar16 = '\0';
  if (param_7 == '\0') {
    cVar16 = DAT_fffeda38;
  }
  cVar14 = '\0';
  if (param_7 == '\0') {
    cVar14 = DAT_fffeda30;
  }
  cVar11 = '\0';
  if (param_7 == '\0') {
    cVar11 = DAT_fffeda2e;
  }
  cVar12 = '\0';
  if (param_7 == '\0') {
    cVar12 = DAT_fffeda2d;
  }
  cVar13 = '\0';
  if (param_7 == '\0') {
    cVar13 = DAT_fffeda2b;
  }
  bVar1 = true;
  if (((param_1 <= DAT_fffeda35) && (param_2 <= DAT_fffeda33)) && (DAT_fffeda37 <= param_3)) {
    bVar1 = false;
  }
  if ((bVar1) && (param_13 != '\0')) {
    cVar16 = '\x01';
  }
  cVar5 = '\0';
  if (cVar16 != '\0') {
    cVar5 = ' ';
  }
  DAT_fffeda39 = cVar4;
  *param_24 = cVar16;
  if ((bVar1) && (param_14 != '\0')) {
    cVar14 = '\x01';
  }
  cVar4 = '\0';
  if (cVar14 != '\0') {
    cVar4 = '\x10';
  }
  *param_25 = cVar14;
  if ((bVar1) && (param_15 != '\0')) {
    cVar12 = '\x01';
  }
  cVar6 = '\0';
  if (cVar12 != '\0') {
    cVar6 = '\b';
  }
  *param_26 = cVar12;
  if ((bVar1) && (param_16 != '\0')) {
    cVar13 = '\x01';
  }
  *param_28 = cVar13;
  if (param_4 != '\0') goto LAB_00104cea;
  if (DAT_fffeda32 == '\0') {
    if ((DAT_fffeda31 == '\0') || (param_6 <= DAT_fffeda2f)) goto LAB_00104cea;
    bVar2 = true;
    if ((param_18 == '\0') && ((param_19 == 0 && (0x6666 < param_20)))) {
      bVar2 = false;
    }
    if (bVar2) goto LAB_00104cea;
  }
  cVar11 = '\x01';
LAB_00104cea:
  cVar15 = '\0';
  if (cVar11 != '\0') {
    cVar15 = '\x04';
  }
  *param_27 = cVar11;
  cVar8 = '\0';
  if (param_7 == '\0') {
    cVar8 = DAT_fffeda2c;
  }
  if ((bVar1) && (DAT_fffeda36 < param_17)) {
    cVar8 = '\x01';
  }
  cVar7 = '\0';
  if (cVar8 != '\0') {
    cVar7 = -0x80;
  }
  *param_22 = cVar8;
  cVar9 = '\0';
  if (param_7 == '\0') {
    cVar9 = DAT_fffeda2a;
  }
  if ((bVar1) &&
     ((((param_8 != '\0' && ((param_9 == '\0' || (param_10 == '\0')))) ||
       ((param_10 == '\0' && (param_11 != '\0')))) || (param_12 != '\0')))) {
    cVar9 = '\x01';
  }
  cVar10 = '\0';
  if (cVar9 != '\0') {
    cVar10 = '@';
  }
  *param_21 = cVar7 + cVar10 + cVar5 + cVar4 + cVar6 + cVar15 + cVar13;
  *param_23 = cVar9;
  DAT_fffeda34 = param_19;
  DAT_fffeda33 = param_2;
  DAT_fffeda38 = cVar16;
  DAT_fffeda30 = cVar14;
  DAT_fffeda2e = cVar11;
  DAT_fffeda2d = cVar12;
  DAT_fffeda2b = cVar13;
  DAT_fffeda35 = param_1;
  DAT_fffeda37 = param_3;
  DAT_fffeda32 = param_4;
  DAT_fffeda31 = param_5;
  DAT_fffeda2f = param_6;
  DAT_fffeda36 = param_17;
  DAT_fffeda2c = cVar8;
  DAT_fffeda2a = cVar9;
  return;
}

