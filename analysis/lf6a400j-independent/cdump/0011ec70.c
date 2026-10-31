
void FUN_0011ec70(char param_1,undefined4 param_2,uint param_3,ushort param_4,ushort param_5,
                 undefined1 param_6,undefined1 *param_7,undefined4 *param_8)

{
  *param_8 = 0x1840;
  if (param_1 == '\x03') {
    if (param_5 <= param_4) {
      param_4 = param_5;
    }
    if ((param_3 < 0x1840) || (0xfffe < param_4)) {
      *param_7 = 0;
    }
    else {
      *param_7 = param_6;
    }
  }
  else {
    *param_7 = 1;
  }
  return;
}

