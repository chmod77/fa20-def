
void FUN_00108530(char param_1,char param_2,char param_3,char param_4,undefined1 *param_5)

{
  if (((param_1 != '\0') || (param_2 != '\0')) || (param_3 != '\0')) {
    DAT_fffedb54 = 1;
  }
  if (param_4 == '\0') {
    DAT_fffedb54 = 0;
  }
  *param_5 = DAT_fffedb54;
  return;
}

