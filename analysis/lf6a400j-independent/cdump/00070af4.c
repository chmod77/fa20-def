
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00070af4(void)

{
  byte extraout_var;
  
  if (_DAT_ffff7b96 == 1) {
    FUN_0007550a(&DAT_ffff6b92);
    if (extraout_var == 0) {
      _DAT_ffff8578 = 300;
      DAT_ffff857c = 1;
      DAT_ffff857d = 1;
    }
    else {
      _DAT_ffff7b98 = extraout_var + 1;
      DAT_ffff6b91 = 0x4a;
    }
  }
  else {
    DAT_ffff6b91 = 0x7f;
    DAT_ffff6b92 = 10;
    DAT_ffff6b93 = 0x12;
    _DAT_ffff7b98 = 3;
  }
  return;
}

