
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00143640(void)

{
  int iVar1;
  
  if (_DAT_ffff2b6c == -1) {
    if (_DAT_ffff2b90 == -1) {
      iVar1 = 0;
      _DAT_ffff1a3a = 0;
    }
    else if (_DAT_ffff2b90 == 0) {
      iVar1 = -1;
      _DAT_ffff1a3a = 0xffff;
    }
    else {
      iVar1 = __udiv32_r1_by_r0(0x5b8d8000,_DAT_ffff2b90);
      _DAT_ffff1a3a = FUN_00001540(iVar1);
      iVar1 = __udiv32_r1_by_r0(96000000,_DAT_ffff2b90);
      iVar1 = FUN_00001540(iVar1);
    }
  }
  else {
    _DAT_ffff1a3a = FUN_0016b3dc(48000000,(int)_DAT_ffff2b6c,FUN_0016b3dc);
    iVar1 = FUN_0016b3dc(3000000,(int)_DAT_ffff2b6c,FUN_0016b3dc);
  }
  DAT_ffff1a3c = FUN_0000152c((int)(iVar1 + 4U & 0xffff) >> 3);
  return iVar1;
}

