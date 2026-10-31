
void FUN_000ce1a8(char param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  if (bVar1) {
    DAT_fffeccd0 = false;
    if (param_5 == '\0') {
      DAT_fffeccd1 = 0;
    }
    else {
      DAT_fffeccd0 = 2 < DAT_fffeccd1;
      DAT_fffeccd1 = DAT_fffeccd1 + 1;
      if (DAT_fffeccd1 == 0) {
        DAT_fffeccd1 = 0xff;
      }
    }
    if (param_5 == '\0') {
      DAT_fffeccd0 = 0;
    }
  }
  if (bVar1) {
    DAT_fffeccd2 = DAT_fffeccd0;
  }
  *param_6 = DAT_fffeccd2;
  return;
}

