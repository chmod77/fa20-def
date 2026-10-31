
void FUN_000bff18(ushort param_1,byte param_2,char param_3,char param_4,byte param_5,
                 undefined1 *param_6)

{
  byte bVar1;
  
  if (param_1 < 0x5001) {
    bVar1 = param_5 + 1;
    if (bVar1 < param_5) {
      bVar1 = 0xff;
    }
    if (bVar1 < 5) {
      if (bVar1 == 0) {
        bVar1 = 1;
      }
    }
    else {
      bVar1 = 4;
    }
    if (bVar1 == 1) {
      param_5 = 1;
    }
    else if (((bVar1 == 2) || (bVar1 == 3)) || (bVar1 == 4)) {
      param_5 = 3;
    }
    DAT_fffec960 = 0;
    if ((param_3 != '\0') && ((param_2 == param_5 || (param_4 != '\0')))) {
      DAT_fffec960 = 1;
    }
    DAT_fffec961 = '\x01';
  }
  else if (DAT_fffec961 != '\0') {
    DAT_fffec960 = 0;
    DAT_fffec961 = '\0';
  }
  *param_6 = DAT_fffec960;
  return;
}

