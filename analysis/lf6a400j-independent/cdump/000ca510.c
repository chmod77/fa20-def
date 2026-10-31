
void FUN_000ca510(char param_1,char param_2,char param_3,char param_4,byte param_5,char *param_6)

{
  bool bVar1;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  if (bVar1) {
    if (param_5 < 0xe6) {
      DAT_fffecba0 = param_5 + 0x1a;
    }
    else {
      DAT_fffecba0 = -1;
    }
  }
  if (bVar1) {
    DAT_fffecba1 = DAT_fffecba0;
  }
  *param_6 = DAT_fffecba1;
  return;
}

