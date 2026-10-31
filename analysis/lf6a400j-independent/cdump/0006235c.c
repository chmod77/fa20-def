
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006235c(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef63a;
  if ((uVar1 & 1) == 0) {
    _DAT_fffef630 = 0;
    _DAT_fffef632 = 0;
    _DAT_fffef634 = 0;
    _DAT_fffef636 = 0;
  }
  else if (DAT_fffef5d0 == '\n') {
    _DAT_fffef630 = FUN_0016b5ec((int)_DAT_fffef626 - (int)_DAT_fffef62e);
    _DAT_fffef632 = FUN_0016b5ec((int)_DAT_fffef628 - (int)_DAT_fffef62e);
    _DAT_fffef634 = FUN_0016b5ec((int)_DAT_fffef62a - (int)_DAT_fffef62e);
    uVar1 = FUN_0016b5ec((int)_DAT_fffef62c - (int)_DAT_fffef62e);
    _DAT_fffef636 = (undefined2)uVar1;
  }
  return uVar1;
}

