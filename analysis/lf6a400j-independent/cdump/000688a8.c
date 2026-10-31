
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000688a8(void)

{
  undefined4 uVar1;
  
  if (_DAT_fffef136 < _DAT_fffef138) {
    uVar1 = FUN_0016bd78((int)_DAT_fffef13e,(int)(short)_DAT_fffef136);
    _DAT_fffef13e = (short)uVar1;
  }
  else {
    uVar1 = FUN_0016b944((int)(short)_DAT_fffef136,0,0);
    uVar1 = FUN_0016b630((int)_DAT_fffef13e,uVar1);
    _DAT_fffef13e = (short)uVar1;
  }
  return uVar1;
}

