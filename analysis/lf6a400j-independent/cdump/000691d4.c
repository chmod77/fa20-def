
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000691d4(void)

{
  ushort uVar1;
  short local_18 [4];
  
  if (_DAT_fffef114 <= _DAT_ffff2f9c) {
    _DAT_ffff2fa0 = FUN_0016bd78((int)(short)_DAT_fffef114,(int)_DAT_ffff2fa0);
    _DAT_ffff2fa2 = FUN_0016bd78((int)(short)_DAT_fffef11c,(int)_DAT_ffff2fa2);
    if (((int)(char)DAT_ffff2fdd & 0x80U) == 0) {
      local_18[0] = FUN_0016b944((int)(short)_DAT_ffff2f9c,0x80,(int)(short)_DAT_fffef114);
      _DAT_ffff2f9c = FUN_0016b630((int)local_18[0],&LAB_00002bac);
      local_18[0] = FUN_0016b944((int)(short)_DAT_ffff2f9e,0x80,(int)(short)_DAT_fffef11c);
      _DAT_ffff2f9e = FUN_0016b630((int)local_18[0],0x3068);
      uVar1 = FUN_0016bd34((uint)_DAT_ffff2f9c - (uint)_DAT_fffef114);
      if ((((0x3e < uVar1) ||
           (uVar1 = FUN_0016bd34((uint)_DAT_ffff2f9e - (uint)_DAT_fffef11c), 0x3e < uVar1)) &&
          (uVar1 = FUN_0016bd34(_DAT_ffff2f9c - 0x2bac), 0x3e < uVar1)) &&
         (uVar1 = FUN_0016bd34(_DAT_ffff2f9e - 0x3068), 0x3e < uVar1)) {
        return;
      }
      DAT_ffff2fdd = DAT_ffff2fdd | 0x80;
    }
    else {
      local_18[0] = FUN_0016b944((int)(short)_DAT_ffff2f9c,0x80,(int)(short)_DAT_fffef114);
      _DAT_ffff2f9c = FUN_0016b630((int)local_18[0],0x1a36);
      local_18[0] = FUN_0016b944((int)(short)_DAT_ffff2f9e,0x80,(int)(short)_DAT_fffef11c);
      _DAT_ffff2f9e = FUN_0016b630((int)local_18[0],0x13f7);
      local_18[0] = _DAT_ffff2fa4;
      FUN_0016b4d8(local_18,(int)_DAT_ffff2fa2,0x4000);
      _DAT_ffff2fa4 = FUN_0016bd78((int)_DAT_ffff2fa2,(int)local_18[0]);
      DAT_ffff2fde = FUN_0000152c(DAT_ffff2fde + 1);
    }
  }
  DAT_fffef11e = DAT_fffef11e & 0xfb | 0x10;
  return;
}

