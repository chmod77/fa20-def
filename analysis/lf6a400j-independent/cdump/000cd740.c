
void FUN_000cd740(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,undefined1 *param_8)

{
  bool bVar1;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  if (bVar1) {
    if (((param_5 == '\0') || (param_6 == '\0')) || (param_7 == '\0')) {
      DAT_fffecc8e = 1;
    }
    DAT_fffecc8c = DAT_fffecc8e;
    if (((param_5 == '\0') && (param_6 == '\0')) && (param_7 == '\0')) {
      DAT_fffecc8c = 0;
      DAT_fffecc8e = DAT_fffecc8c;
    }
  }
  if (bVar1) {
    DAT_fffecc8d = DAT_fffecc8c;
  }
  *param_8 = DAT_fffecc8d;
  return;
}

