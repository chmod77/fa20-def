
void FUN_000cbb48(byte param_1,char param_2,ushort param_3,char param_4,char param_5,char param_6,
                 char param_7,undefined1 *param_8,char *param_9,undefined4 param_10,byte *param_11,
                 byte *param_12,byte *param_13,undefined4 param_14)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  
  bVar7 = 0xc < DAT_fffecbe1;
  if (param_3 < 0x6666) {
    DAT_fffecbe1 = '\0';
    cVar9 = DAT_fffecbe1;
  }
  else {
    cVar9 = -1;
    if (DAT_fffecbe1 != 0xff) {
      cVar9 = DAT_fffecbe1 + 1;
    }
  }
  DAT_fffecbe1 = cVar9;
  bVar1 = param_7 == '\x01';
  cVar9 = '\x01';
  if (DAT_fffecbdd <= param_1) {
    cVar9 = DAT_fffecbe6;
  }
  if (param_1 != 0) {
    cVar9 = '\0';
  }
  bVar2 = false;
  if (cVar9 == '\0') {
    DAT_fffecbe7 = '\0';
    cVar8 = DAT_fffecbe7;
  }
  else {
    bVar2 = 0xc < DAT_fffecbe7;
    cVar8 = -1;
    if (DAT_fffecbe7 != 0xff) {
      cVar8 = DAT_fffecbe7 + 1;
    }
  }
  DAT_fffecbe7 = cVar8;
  bVar3 = false;
  if (((bVar2) && (0x6665 < param_3 && bVar7)) && (param_4 != '\0')) {
    bVar7 = true;
    if (((DAT_fffecbdc == '\0') && (DAT_fffecbe5 == '\0')) &&
       ((param_5 == '\0' && (param_6 == '\0')))) {
      bVar7 = false;
    }
    if (!bVar7) {
      bVar3 = true;
    }
  }
  bVar7 = false;
  if ((param_2 == '\0') && (bVar3)) {
    bVar7 = true;
  }
  bVar2 = false;
  if ((param_2 == '\x02') && (bVar3)) {
    bVar2 = true;
  }
  bVar4 = false;
  if ((param_2 == '\x05') && (bVar3)) {
    bVar4 = true;
  }
  bVar10 = DAT_fffecbde;
  if ((bVar4) && (bVar10 = 0xff, DAT_fffecbde != 0xff)) {
    bVar10 = DAT_fffecbde + 1;
  }
  bVar11 = 0;
  if (!bVar4) {
    bVar11 = DAT_fffecbdf;
  }
  if ((bVar2) && (bVar11 = 0xff, DAT_fffecbdf != 0xff)) {
    bVar11 = DAT_fffecbdf + 1;
  }
  bVar6 = true;
  if (bVar3) {
    bVar5 = true;
    if (((param_2 != '\0') && (param_2 != '\x02')) && (param_2 != '\x05')) {
      bVar5 = false;
    }
    if (bVar5) {
      bVar6 = false;
    }
  }
  if ((bVar1) && (((bVar6 || (bVar7)) || (DAT_fffecbde = bVar10, bVar2)))) {
    DAT_fffecbde = 0;
  }
  DAT_fffecbe6 = cVar9;
  *param_11 = DAT_fffecbde;
  if ((bVar1) && ((bVar6 || (DAT_fffecbdf = bVar11, bVar7)))) {
    DAT_fffecbdf = 0;
  }
  *param_12 = DAT_fffecbdf;
  cVar9 = '\0';
  if ((4 < DAT_fffecbdf) && (bVar3)) {
    cVar9 = '\x01';
  }
  DAT_fffecbe5 = cVar9;
  if (cVar9 == '\0') {
    DAT_fffecbe5 = DAT_fffecbe0;
  }
  if (!bVar1) {
    DAT_fffecbe5 = DAT_fffecbe0;
  }
  *param_9 = DAT_fffecbe5;
  *(bool *)param_10 = bVar3;
  if ((!bVar3) || (DAT_fffecbdc = 1, DAT_fffecbde < 9)) {
    DAT_fffecbdc = DAT_fffecbe4;
  }
  if (param_1 != 0) {
    DAT_fffecbdc = 0;
  }
  *param_8 = DAT_fffecbdc;
  cVar8 = '\0';
  if (cVar9 == '\0') {
    cVar8 = DAT_fffecbe3;
  }
  bVar10 = 0;
  if (!bVar4) {
    bVar10 = DAT_fffecbe2;
  }
  if (bVar7) {
    bVar10 = 0xff;
    if (DAT_fffecbe2 != 0xff) {
      bVar10 = DAT_fffecbe2 + 1;
    }
  }
  else if (bVar2) {
    bVar10 = 0;
  }
  if ((bVar1) && (DAT_fffecbe2 = bVar10, bVar6)) {
    DAT_fffecbe2 = 0;
  }
  *param_13 = DAT_fffecbe2;
  cVar9 = '\0';
  if ((bVar3) && (4 < DAT_fffecbe2)) {
    cVar9 = '\x01';
  }
  if ((bVar1) && (DAT_fffecbe3 = cVar9, cVar9 == '\0')) {
    DAT_fffecbe3 = cVar8;
  }
  *(bool *)param_14 = DAT_fffecbe3 != '\0';
  DAT_fffecbe0 = DAT_fffecbe5;
  DAT_fffecbdd = param_1;
  DAT_fffecbe4 = DAT_fffecbdc;
  return;
}

