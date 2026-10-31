
void FUN_000ffa20(char param_1,char param_2,ushort param_3,ushort param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,
                 undefined1 *param_12)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    if (param_8 == '\0') {
      param_7 = '\0';
    }
    DAT_fffed9a4 = 0;
    if (((((0x8b84 < param_3) && (0x95 < param_4)) && (param_5 == '\0')) &&
        ((param_6 == '\0' && (param_7 == '\0')))) &&
       ((param_9 == '\0' && ((param_10 != '\0' && (param_11 == '\0')))))) {
      DAT_fffed9a4 = 1;
    }
    DAT_fffed9a5 = '\x01';
  }
  else if (DAT_fffed9a5 != '\0') {
    DAT_fffed9a4 = 0;
    DAT_fffed9a5 = '\0';
  }
  if (bVar1) {
    *param_12 = DAT_fffed9a4;
  }
  else {
    *param_12 = 0;
  }
  return;
}

