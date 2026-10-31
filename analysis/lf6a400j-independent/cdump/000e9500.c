
void FUN_000e9500(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  if ((param_2 != '\0') || (param_3 != '\0')) {
    DAT_fffed424 = 0;
  }
  if (param_1 != '\0') {
    DAT_fffed424 = 1;
  }
  *param_4 = DAT_fffed424;
  return;
}

