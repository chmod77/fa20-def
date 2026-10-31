
void FUN_000e9990(byte param_1,undefined4 param_2,undefined4 param_3,char param_4,undefined1 param_5
                 ,undefined1 *param_6)

{
  if (DAT_fffed45c < param_1) {
    param_5 = 1;
  }
  if (param_4 == '\0') {
    *param_6 = param_5;
  }
  else {
    *param_6 = 0;
  }
  DAT_fffed45c = param_1;
  return;
}

