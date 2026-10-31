
void FUN_0011bd7c(undefined2 param_1,undefined2 param_2,char param_3,char param_4,
                 undefined2 *param_5)

{
  if (param_3 != '\0') {
    *param_5 = 0;
    return;
  }
  if (param_4 != '\0') {
    *param_5 = param_1;
    return;
  }
  *param_5 = param_2;
  return;
}

