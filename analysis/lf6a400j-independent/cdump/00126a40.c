
void FUN_00126a40(char param_1,char param_2,char param_3,undefined2 param_4,undefined2 *param_5)

{
  if (param_1 != '\0') {
    *param_5 = 0;
    return;
  }
  if ((param_2 == '\0') && (param_3 == '\0')) {
    *param_5 = param_4;
    return;
  }
  *param_5 = 0x1ff;
  return;
}

