
void FUN_0008bd80(byte param_1,char param_2,byte *param_3)

{
  if ((param_2 != '\0') && (param_1 != 0x80)) {
    if (param_1 < 0x9b) {
      if (param_1 < 0x80) {
        param_1 = 0x80;
      }
    }
    else {
      param_1 = 0x9a;
    }
    *param_3 = param_1;
    return;
  }
  *param_3 = 0x80;
  return;
}

