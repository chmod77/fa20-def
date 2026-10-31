
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0006886a(void)

{
  undefined4 uVar1;
  
  if (_DAT_fffef130 < _DAT_fffef132) {
    uVar1 = FUN_0016bd78((int)_DAT_fffef13c,(int)(short)_DAT_fffef130);
    _DAT_fffef13c = (short)uVar1;
  }
  else {
    uVar1 = FUN_0016b944((int)(short)_DAT_fffef130,0,0);
    uVar1 = FUN_0016b630((int)_DAT_fffef13c,uVar1);
    _DAT_fffef13c = (short)uVar1;
  }
  return uVar1;
}

