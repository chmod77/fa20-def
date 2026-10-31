
void FUN_000e99c0(undefined2 param_1,undefined2 param_2,char param_3,undefined4 param_4,char param_5
                 ,undefined2 *param_6)

{
  if (param_5 != '\0') {
    *param_6 = 0;
    return;
  }
  if (((param_3 != '\x01') && (param_3 != '\x02')) && (param_3 == '\x03')) {
    *param_6 = param_2;
    return;
  }
  *param_6 = param_1;
  return;
}

