
void FUN_000ef710(char param_1,char param_2,undefined1 param_3,undefined1 *param_4)

{
  if (((param_1 != '\x01') && (param_2 != '\x01')) && (param_2 != '\x02')) {
    *param_4 = param_3;
    return;
  }
  *param_4 = 1;
  return;
}

