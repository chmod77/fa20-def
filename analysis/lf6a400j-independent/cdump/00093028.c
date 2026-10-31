
void FUN_00093028(char param_1,short param_2,undefined1 param_3,undefined1 *param_4)

{
  if (param_1 != '\0') {
    *param_4 = 1;
    return;
  }
  if (param_2 == 0) {
    *param_4 = 0;
    return;
  }
  *param_4 = param_3;
  return;
}

