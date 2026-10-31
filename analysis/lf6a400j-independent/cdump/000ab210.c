
void FUN_000ab210(byte param_1,byte param_2,char param_3,byte *param_4)

{
  if (param_3 != '\0') {
    param_1 = param_2;
  }
  if (param_1 < 0x8d) {
    if (param_1 < 0x7c) {
      param_1 = 0x7c;
    }
  }
  else {
    param_1 = 0x8c;
  }
  *param_4 = param_1;
  return;
}

