
uint FUN_00143a6a(uint param_1)

{
  param_1 = param_1 & 0xff;
  if ((DAT_ffff1a59 == '\0') || (DAT_ffff1a59 == '\x02')) {
    if (1 < param_1) {
      param_1 = param_1 + 2;
    }
  }
  else if (param_1 != 0) {
    param_1 = param_1 + 3;
  }
  return param_1;
}

