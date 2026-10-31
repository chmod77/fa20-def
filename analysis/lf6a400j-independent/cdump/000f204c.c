
void FUN_000f204c(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  if ((param_1 != '\0') || (param_2 != '\0')) {
    DAT_fffed6c8 = 1;
  }
  if (param_3 != '\0') {
    DAT_fffed6c8 = 0;
  }
  *param_4 = DAT_fffed6c8;
  return;
}

