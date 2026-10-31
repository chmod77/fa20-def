
void FUN_000e0508(char param_1,undefined1 param_2,char param_3,undefined1 *param_4)

{
  if ((param_3 == '\0') && (param_1 == '\x03')) {
    *param_4 = param_2;
    return;
  }
  *param_4 = 0;
  return;
}

