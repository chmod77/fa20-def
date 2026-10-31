
void FUN_000d4ee8(char param_1,char param_2,char param_3,undefined2 param_4,undefined2 param_5,
                 undefined2 *param_6)

{
  if (param_1 != '\x03') {
    *param_6 = 0x8000;
    return;
  }
  if ((param_2 != '\0') && (param_3 == '\0')) {
    *param_6 = param_4;
    return;
  }
  *param_6 = param_5;
  return;
}

