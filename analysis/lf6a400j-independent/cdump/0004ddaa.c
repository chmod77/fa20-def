
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004ddaa(void)

{
  if ((DAT_fffeeec6 & 1) == 0) {
    DAT_ffff2afe = FUN_0000152c(DAT_ffff2afe + 1);
    if (DAT_ffff2afe < 2) {
      _DAT_ffff2af6 = 0;
    }
    else {
      _DAT_ffff2af6 = FUN_00001540((uint)_DAT_ffff2986 + (uint)_DAT_ffff2afc);
    }
  }
  else {
    _DAT_ffff2af6 = 0;
    DAT_ffff2afe = 0;
  }
  _DAT_ffff2afc = _DAT_ffff2986;
  return;
}

