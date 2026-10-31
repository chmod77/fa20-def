
void FUN_000bcf10(char param_1,undefined2 param_2,undefined2 param_3,undefined2 *param_4)

{
  if (param_1 == '\x01') {
    *param_4 = 0;
    return;
  }
  if (((param_1 != '\x03') && (param_1 != '\x05')) && (param_1 != '\x06')) {
    *param_4 = param_2;
    return;
  }
  *param_4 = param_3;
  return;
}

