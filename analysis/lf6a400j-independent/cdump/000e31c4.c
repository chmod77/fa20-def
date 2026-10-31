
void FUN_000e31c4(char param_1,ushort param_2,char param_3,undefined1 param_4,char param_5,
                 char param_6,char param_7,char param_8,undefined1 *param_9)

{
  if ((param_2 < 0x800) || (param_3 == '\0')) {
    if (param_1 == '\0') {
      *param_9 = 0;
    }
    else {
      if ((param_7 != -0x5b) || (param_8 == '\0')) {
        if (param_5 != '\0') {
          *param_9 = 1;
          return;
        }
        if (param_6 != '\0') {
          *param_9 = 2;
          return;
        }
      }
      *param_9 = 3;
    }
  }
  else {
    *param_9 = param_4;
  }
  return;
}

