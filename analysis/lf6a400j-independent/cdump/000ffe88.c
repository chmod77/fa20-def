
void FUN_000ffe88(char param_1,char param_2,ushort param_3,char param_4,undefined1 *param_5)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_fffed9c6 == '\0') {
      DAT_fffed9c7 = 0;
      DAT_fffed9c6 = '\x01';
      DAT_fffed9c5 = '\x01';
    }
    DAT_fffed9c4 = 0;
    if (param_4 == '\0') {
      DAT_fffed9c4 = DAT_fffed9c7;
    }
    DAT_fffed9c7 = DAT_fffed9c4;
    if ((0x23 < param_3) && (param_4 == '\0')) {
      DAT_fffed9c4 = 1;
      DAT_fffed9c7 = DAT_fffed9c4;
    }
  }
  else if (DAT_fffed9c5 != '\0') {
    DAT_fffed9c4 = 0;
    DAT_fffed9c5 = '\0';
    DAT_fffed9c6 = '\0';
  }
  if (bVar1) {
    *param_5 = DAT_fffed9c4;
  }
  else {
    *param_5 = 0;
  }
  return;
}

