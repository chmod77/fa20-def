
void FUN_000e9fe0(char param_1,char param_2,char param_3,char param_4,undefined4 param_5,
                 char param_6,undefined1 *param_7)

{
  if (param_6 == '\0') {
    if ((param_1 != '\0') || (param_2 != '\0')) {
      *param_7 = 1;
      return;
    }
    if ((param_3 != '\0') && (param_4 != '\0')) {
      *param_7 = 2;
      return;
    }
  }
  *param_7 = 0;
  return;
}

