
uint FUN_00143ae2(uint param_1)

{
  param_1 = param_1 & 0xff;
  if ((DAT_ffff1a59 == '\x01') || (DAT_ffff1a59 == '\x03')) {
    if (0xd < param_1) {
      param_1 = param_1 + 2;
    }
  }
  else if (0xc < param_1) {
    param_1 = param_1 + 3;
  }
  return param_1;
}

