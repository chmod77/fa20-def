
void FUN_000e1fb4(char param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  if ((param_2 != '\0') || (param_3 != '\0')) {
    DAT_fffed238 = 1;
  }
  if (((param_1 != '\0') || (param_4 != '\0')) || (param_5 != '\0')) {
    DAT_fffed238 = 0;
  }
  *param_6 = DAT_fffed238;
  return;
}

