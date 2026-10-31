
void FUN_000ed1fc(char param_1,char param_2,undefined1 param_3,char param_4,undefined1 *param_5)

{
  if (param_4 != '\0') {
    *param_5 = 0;
    return;
  }
  if (((param_1 != '\x01') && (param_1 != '\x02')) && (param_2 != '\x01')) {
    *param_5 = param_3;
    return;
  }
  *param_5 = 1;
  return;
}

