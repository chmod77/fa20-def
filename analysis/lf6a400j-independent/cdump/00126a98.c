
void FUN_00126a98(char param_1,char param_2,char param_3,uint param_4,undefined2 param_5,
                 undefined2 *param_6)

{
  if (param_1 != '\0') {
    *param_6 = 0;
    return;
  }
  if ((param_2 == '\0') && (param_3 == '\0')) {
    *param_6 = param_5;
    return;
  }
  *param_6 = (short)((param_4 & 0xffff) >> 7);
  return;
}

