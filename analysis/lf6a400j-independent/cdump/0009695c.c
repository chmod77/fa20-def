
void FUN_0009695c(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,byte param_12,
                 ushort param_13,short param_14,undefined1 *param_15,char *param_16)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  
  if (DAT_fffebf57 == '\0') {
    uVar5 = 0x2a9;
  }
  else {
    uVar5 = 0x155;
  }
  DAT_fffebf57 = uVar5 <= param_13;
  bVar2 = false;
  if ((((param_1 != '\0') && (param_2 != '\0')) && (param_3 == '\0')) &&
     (((param_10 == '\0' && (param_11 == '\0')) && ((bool)DAT_fffebf57)))) {
    bVar2 = true;
  }
  if (param_8 == '\0') {
    DAT_fffebf54 = '\0';
    bVar3 = DAT_fffebf50;
  }
  else {
    if (DAT_fffebf54 == '\0') {
      DAT_fffebf50 = 0;
      DAT_fffebf54 = '\x01';
    }
    DAT_fffebf4f = DAT_fffebf50 < 0x10;
    bVar3 = 0xff;
    if (DAT_fffebf50 != 0xff) {
      bVar3 = DAT_fffebf50 + 1;
    }
  }
  DAT_fffebf50 = bVar3;
  cVar8 = '\0';
  if (param_8 == '\0') {
    if (DAT_fffebf52 == '\0') {
      DAT_fffebf55 = 0;
      DAT_fffebf52 = '\x01';
    }
    DAT_fffebf4e = DAT_fffebf55 < 8;
    bVar3 = 0xff;
    if (DAT_fffebf55 != 0xff) {
      bVar3 = DAT_fffebf55 + 1;
    }
  }
  else {
    DAT_fffebf52 = '\0';
    cVar8 = DAT_fffebf4f;
    bVar3 = DAT_fffebf55;
  }
  DAT_fffebf55 = bVar3;
  cVar7 = '\0';
  if (param_8 == '\0') {
    cVar7 = DAT_fffebf4e;
  }
  bVar1 = false;
  if (((param_4 == '\0') && (param_5 == '\0')) &&
     (((param_6 == '\0' && (param_7 != '\0')) || (param_9 != '\0')))) {
    bVar1 = true;
  }
  if (bVar1) {
    DAT_fffebf56 = '\0';
    cVar6 = DAT_fffebf53;
  }
  else {
    if (DAT_fffebf56 == '\0') {
      DAT_fffebf53 = '\0';
      DAT_fffebf56 = '\x01';
    }
    DAT_fffebf4d = DAT_fffebf53;
    DAT_fffebf4c = DAT_fffebf53 != '\0';
    cVar6 = -1;
    if (DAT_fffebf53 != -1) {
      cVar6 = DAT_fffebf53 + '\x01';
    }
  }
  DAT_fffebf53 = cVar6;
  cVar6 = '\0';
  if (!bVar1) {
    cVar6 = DAT_fffebf4c;
  }
  *param_16 = DAT_fffebf4d;
  if ((!bVar2) || (uVar4 = 1, !bVar1)) {
    uVar4 = DAT_fffebf51;
  }
  if (((((!bVar2) || (param_14 != 0)) || (cVar6 != '\0')) || ((cVar7 != '\0' || (cVar8 != '\0'))))
     || ((param_8 != '\0' && (param_12 < 4)))) {
    uVar4 = 0;
  }
  *param_15 = uVar4;
  DAT_fffebf51 = uVar4;
  return;
}

