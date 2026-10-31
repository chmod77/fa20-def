
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004d33c(void)

{
  uint uVar1;
  int iVar2;
  
  if ((DAT_ffff06da & 2) == 0) {
    uVar1 = FUN_0016caec((int)_DAT_ffff2adc);
    if ((uVar1 & 0xffff) == 0) {
      _DAT_ffff2adc = 0;
    }
    else {
      iVar2 = _DAT_ffff2adc * 0x79;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7f;
      }
      uVar1 = FUN_0016b5ec((int)((ulonglong)((longlong)iVar2 * 0x2000000) >> 0x20));
      _DAT_ffff2adc = (short)uVar1;
    }
  }
  else {
    uVar1 = FUN_0016b5ec((uint)_DAT_ffff2ad8 - (uint)_v_Engine_Speed_OBD_copy_2ADA);
    _DAT_ffff2adc = (short)uVar1;
  }
  return uVar1;
}

