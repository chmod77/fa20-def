
void FUN_000ffadc(char param_1,char param_2,ushort param_3,short param_4,short param_5,char param_6,
                 char param_7,char param_8,undefined1 *param_9)

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
    if (DAT_fffed9ad == '\0') {
      DAT_fffed9a9 = 0;
      DAT_fffed9ae = '\0';
      DAT_fffed9aa = 0;
      DAT_fffed9ac = '\0';
      DAT_fffed9ad = '\x01';
      DAT_fffed9ab = '\x01';
    }
    bVar3 = DAT_fffed9aa;
    bVar2 = false;
    if ((-0x1855 < param_4) && (-0x2f55 < param_5)) {
      bVar2 = true;
    }
    DAT_ffff1990 = DAT_fffed9aa;
    if (bVar2) {
      if (DAT_fffed9aa == 0xff) {
        DAT_fffed9aa = 0xff;
      }
      else {
        DAT_fffed9aa = DAT_fffed9aa + 1;
      }
    }
    else {
      DAT_fffed9aa = 0;
    }
    if (DAT_fffed9ac == '\0') {
      uVar4 = 0x58e;
    }
    else {
      uVar4 = 0x535;
    }
    DAT_fffed9ac = uVar4 <= param_3;
    if (((!(bool)DAT_fffed9ac) || (param_6 == '\0')) ||
       ((DAT_fffed9ae != '\0' && (param_7 == '\0')))) {
      DAT_fffed9a9 = 0;
    }
    if (param_8 == '\0') {
      if ((((bool)DAT_fffed9ac) && (bVar2 && 1 < bVar3)) && (param_6 != '\0')) {
        DAT_fffed9a9 = 1;
      }
    }
    else {
      DAT_fffed9a9 = 0;
    }
    DAT_fffed9ae = param_7;
    DAT_fffed9a8 = DAT_fffed9a9;
  }
  else if (DAT_fffed9ab != '\0') {
    DAT_fffed9a8 = 0;
    DAT_fffed9ab = '\0';
    DAT_fffed9ad = '\0';
  }
  if (bVar1) {
    *param_9 = DAT_fffed9a8;
  }
  else {
    *param_9 = 0;
  }
  return;
}

