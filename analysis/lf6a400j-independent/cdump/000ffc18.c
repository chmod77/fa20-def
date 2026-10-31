
void FUN_000ffc18(char param_1,char param_2,ushort param_3,short param_4,short param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,undefined1 *param_11)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_fffed9b3 == '\0') {
      DAT_fffed9b6 = 0;
      DAT_fffed9b5 = '\0';
      DAT_fffed9b1 = 0;
      DAT_fffed9b4 = '\0';
      DAT_fffed9b3 = '\x01';
      DAT_fffed9b2 = '\x01';
    }
    bVar2 = false;
    if (((param_8 != '\0') && (-0x1355 < param_4)) && (-0x2555 < param_5)) {
      bVar2 = true;
    }
    if (bVar2) {
      bVar3 = 0xff;
      if (DAT_fffed9b1 != 0xff) {
        bVar3 = DAT_fffed9b1 + 1;
      }
    }
    else {
      DAT_fffed9b1 = 0;
      bVar3 = DAT_fffed9b1;
    }
    DAT_fffed9b1 = bVar3;
    if (DAT_fffed9b4 == '\0') {
      uVar4 = 0x58e;
    }
    else {
      uVar4 = 0x535;
    }
    DAT_fffed9b4 = uVar4 <= param_3;
    if ((((bool)DAT_fffed9b4) || (param_6 == '\0')) || ((DAT_fffed9b5 != '\0' && (param_7 == '\0')))
       ) {
      DAT_fffed9b6 = 0;
    }
    if (param_10 == '\0') {
      if (((!(bool)DAT_fffed9b4) && (param_9 != '\0')) &&
         ((bVar2 && 1 < DAT_fffed9b1 && (param_6 != '\0')))) {
        DAT_fffed9b6 = 1;
      }
    }
    else {
      DAT_fffed9b6 = 0;
    }
    DAT_fffed9b5 = param_7;
    DAT_fffed9b0 = DAT_fffed9b6;
  }
  else if (DAT_fffed9b2 != '\0') {
    DAT_fffed9b0 = 0;
    DAT_fffed9b2 = '\0';
    DAT_fffed9b3 = '\0';
  }
  if (bVar1) {
    *param_11 = DAT_fffed9b0;
  }
  else {
    *param_11 = 0;
  }
  return;
}

