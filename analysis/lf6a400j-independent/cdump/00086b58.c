
void FUN_00086b58(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 char param_5,undefined1 *param_6)

{
  if (param_5 == '\0') {
    *param_6 = param_2;
    return;
  }
  if (param_5 == '\x02') {
    *param_6 = param_3;
    return;
  }
  if (param_5 == '\x03') {
    *param_6 = param_4;
    return;
  }
  *param_6 = param_1;
  return;
}

