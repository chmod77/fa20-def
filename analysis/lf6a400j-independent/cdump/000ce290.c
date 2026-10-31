
void FUN_000ce290(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 undefined1 *param_7)

{
  bool bVar1;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  if (((bVar1) && (DAT_fffeccd4 = 0, param_5 != '\0')) && (param_6 != '\0')) {
    DAT_fffeccd4 = 1;
  }
  if (bVar1) {
    DAT_fffeccd5 = DAT_fffeccd4;
  }
  *param_7 = DAT_fffeccd5;
  return;
}

