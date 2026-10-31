
void FUN_000c46c4(char param_1,char param_2,char param_3,char param_4,char param_5,char *param_6)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 == '\x01')) {
    bVar1 = true;
  }
  if (bVar1) {
    if ((param_5 == '\0') || (param_4 == '\0')) {
      DAT_fffecad8 = param_4 * '\x02' + param_5 * '\x04' + param_3;
    }
    else {
      DAT_fffecad8 = '\0';
    }
  }
  if (bVar1) {
    DAT_fffecad9 = DAT_fffecad8;
  }
  *param_6 = DAT_fffecad9;
  return;
}

