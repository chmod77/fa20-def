
void FUN_000e70e0(ushort param_1,undefined1 *param_2)

{
  if (param_1 < 0x3700) {
    if (0x31ff < param_1) {
      *param_2 = 2;
    }
    else if ((0x31ff < param_1) || (param_1 < 0x1e00)) {
      if ((param_1 < 0x1e00) && (0x18ff < param_1)) {
        *param_2 = 4;
      }
      else {
        *param_2 = 5;
      }
    }
    else {
      *param_2 = 3;
    }
  }
  else {
    *param_2 = 1;
  }
  return;
}

