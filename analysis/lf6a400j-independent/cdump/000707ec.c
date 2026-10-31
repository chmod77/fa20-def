
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000707ec(void)

{
  byte extraout_var;
  int iVar1;
  
  if ((_DAT_ffff7b96 < 3) || ((_DAT_ffff7b96 & 1) == 0)) {
    DAT_ffff6b91 = 0x7f;
    DAT_ffff6b92 = 2;
    iVar1 = 0x12;
    DAT_ffff6b93 = 0x12;
    _DAT_ffff7b98 = 3;
  }
  else {
    FUN_000713b6(&DAT_ffff6b92,&DAT_ffff6793,(short)_DAT_ffff7b96 + -1);
    iVar1 = (int)(char)extraout_var;
    if (extraout_var == 0) {
      _DAT_ffff8578 = 300;
      DAT_ffff857c = 1;
      DAT_ffff857d = 1;
    }
    else {
      _DAT_ffff7b98 = extraout_var + 1;
      DAT_ffff6b91 = 0x42;
    }
  }
  return iVar1;
}

