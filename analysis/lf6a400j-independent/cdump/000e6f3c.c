
void FUN_000e6f3c(ushort param_1,undefined1 *param_2)

{
  if (param_1 < 0x1900) {
    *param_2 = 1;
  }
  else if (param_1 < 0x1e00) {
    *param_2 = 2;
  }
  else if (param_1 < 0x3200) {
    *param_2 = 3;
  }
  else if ((param_1 < 0x3200) || (0x36ff < param_1)) {
    *param_2 = 5;
  }
  else {
    *param_2 = 4;
  }
  return;
}

