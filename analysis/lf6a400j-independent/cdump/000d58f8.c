
void FUN_000d58f8(char param_1,char param_2,char param_3,undefined1 param_4,undefined1 *param_5)

{
  if (param_1 != '\0') {
    *param_5 = 0;
    return;
  }
  if ((param_2 == '\0') && (param_3 == '\0')) {
    *param_5 = param_4;
    return;
  }
  *param_5 = 1;
  return;
}

