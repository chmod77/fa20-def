
void FUN_000d3690(char param_1,char param_2,char param_3,char param_4,char param_5,ushort param_6,
                 char param_7,char param_8,ushort param_9,ushort param_10,byte param_11,
                 char param_12,char param_13,char param_14,ushort param_15,byte param_16,
                 char param_17,char *param_18)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  
  if ((param_1 != '\0') && (DAT_fffecdf1 = param_3, param_2 != '\0')) {
    DAT_fffecdf1 = '\0';
  }
  cVar3 = param_1 == '\0';
  if (param_1 == '\0') {
    bVar1 = true;
    if ((param_15 < 0x3c00) && (param_16 < 0x7b)) {
      bVar1 = false;
    }
    if (bVar1) {
      if (DAT_fffecdf3 == '\0') {
        DAT_fffecdf2 = 0;
        DAT_fffecdf3 = '\x01';
      }
      DAT_fffecdf4 = 0x18 < DAT_fffecdf2;
      bVar2 = 0xff;
      if (DAT_fffecdf2 != 0xff) {
        bVar2 = DAT_fffecdf2 + 1;
      }
    }
    else {
      DAT_fffecdf3 = '\0';
      bVar2 = DAT_fffecdf2;
    }
    DAT_fffecdf2 = bVar2;
    uVar5 = param_10 + 0xc;
    if (uVar5 < param_10) {
      uVar5 = 0xffff;
    }
    cVar3 = DAT_fffecdf3;
    if ((((((param_3 == '\0') || (param_4 == '\0')) || (param_5 != '\0')) ||
         ((param_6 < 0xf8 || (param_7 != '\0')))) ||
        ((param_8 != '\0' || ((param_9 < uVar5 || (param_11 < 0x32)))))) ||
       ((param_12 != '\0' || ((param_13 != '\0' || (param_14 != '\0')))))) {
      DAT_fffecdf0 = '\0';
    }
    else {
      cVar4 = '\0';
      if (bVar1) {
        cVar4 = DAT_fffecdf4;
      }
      if (cVar4 == '\0') {
        DAT_fffecdf0 = param_17;
      }
      else {
        DAT_fffecdf0 = '\x01';
      }
    }
  }
  DAT_fffecdf3 = cVar3;
  if (param_1 == '\0') {
    *param_18 = DAT_fffecdf0;
  }
  else {
    *param_18 = DAT_fffecdf1;
  }
  return;
}

