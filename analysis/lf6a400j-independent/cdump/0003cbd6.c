
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003cbd6(void)

{
  uint uVar1;
  
  uVar1 = (int)DAT_fffeef9b & 3;
  if (uVar1 == 2) {
    if ((DAT_fffeef99 & 0x10) == 0) {
      uVar1 = FUN_0016b1a8(&PTR_DAT_001638e0,(int)_DAT_fffef006);
      _DAT_fffeef94 = (undefined2)uVar1;
    }
    else {
      uVar1 = FUN_0016b1a8(&PTR_DAT_001638ec,(int)_DAT_fffef006);
      _DAT_fffeef94 = (undefined2)uVar1;
    }
  }
  else {
    _DAT_fffeef94 = 0;
  }
  return uVar1;
}

