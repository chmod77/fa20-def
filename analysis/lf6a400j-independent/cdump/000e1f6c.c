
void FUN_000e1f6c(undefined1 param_1,char param_2,char param_3,char param_4,undefined1 param_5,
                 undefined1 *param_6)

{
  if (((DAT_fffed235 != '\0') && (param_3 == '\0')) && (DAT_fffed234 != '\0')) {
    param_5 = 0;
  }
  if (param_2 == '\0') {
    *param_6 = param_5;
  }
  else {
    *param_6 = 1;
  }
  DAT_fffed234 = param_4 == '\0';
  DAT_fffed235 = param_1;
  return;
}

