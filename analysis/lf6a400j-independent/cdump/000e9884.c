
void FUN_000e9884(uint param_1,byte param_2,char param_3,undefined2 param_4,undefined2 *param_5)

{
  if (DAT_fffed450 < param_2) {
    param_4 = (undefined2)((param_1 & 0xffff) * 5 >> 7);
  }
  if (param_3 == '\0') {
    *param_5 = param_4;
  }
  else {
    *param_5 = 0;
  }
  DAT_fffed450 = param_2;
  return;
}

