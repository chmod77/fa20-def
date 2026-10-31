
void FUN_000f1eac(char param_1,undefined2 param_2,undefined2 *param_3)

{
  if (((param_1 != '\x01') && (param_1 != '\x02')) && (param_1 != '\x03')) {
    *param_3 = param_2;
    return;
  }
  *param_3 = 0;
  return;
}

