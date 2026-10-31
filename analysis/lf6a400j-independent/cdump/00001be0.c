
void FUN_00001be0(char param_1)

{
  if (param_1 == '\0') {
    DAT_ffff8573 = 2;
    DAT_ffff678b = DAT_ffff678b | 0x20;
    DAT_ffff6789 = 2;
    DAT_ffff678a = DAT_ffff678a | 0x80;
  }
  else {
    DAT_ffff8573 = 1;
    DAT_ffff678b = DAT_ffff678b & 0xdf;
    DAT_ffff6789 = 1;
    DAT_ffff678a = DAT_ffff678a & 0x7f;
  }
  DAT_ffff856b = 0;
  return;
}

