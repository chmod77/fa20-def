
void FUN_000e0ba8(char param_1,char param_2,undefined1 param_3,undefined1 *param_4)

{
  if (param_1 != '\0') {
    *param_4 = param_1 == '\0';
    return;
  }
  if (param_2 != '\0') {
    *param_4 = 1;
    return;
  }
  *param_4 = param_3;
  return;
}

