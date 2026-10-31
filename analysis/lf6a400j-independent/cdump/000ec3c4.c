
void FUN_000ec3c4(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  if ((param_1 != '\0') || (param_2 != '\0')) {
    DAT_fffed554 = 1;
  }
  if (param_3 != '\0') {
    DAT_fffed554 = 0;
  }
  *param_4 = DAT_fffed554;
  return;
}

