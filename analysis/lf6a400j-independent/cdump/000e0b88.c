
void FUN_000e0b88(char param_1,undefined2 param_2,char param_3,undefined2 param_4,
                 undefined2 *param_5)

{
  if (param_1 != '\0') {
    *param_5 = 0;
    return;
  }
  if (param_3 != '\0') {
    *param_5 = param_2;
    return;
  }
  *param_5 = param_4;
  return;
}

