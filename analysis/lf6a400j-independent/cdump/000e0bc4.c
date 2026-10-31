
void FUN_000e0bc4(char param_1,char param_2,char param_3,undefined2 param_4,undefined2 *param_5)

{
  if (param_1 != '\0') {
    *param_5 = 0;
    return;
  }
  if (param_3 != '\0') {
    if (param_2 == -0x5b) {
      *param_5 = 0xc00;
      return;
    }
    *param_5 = 0xc00;
    return;
  }
  *param_5 = param_4;
  return;
}

