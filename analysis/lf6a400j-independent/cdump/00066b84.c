
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066b84(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (1000 < _DAT_ffff00e8) {
    uVar1 = (int)(short)_DAT_ffff00e8 - 1000;
  }
  _DAT_ffff00ae = (short)((int)(uVar1 & 0xffff) >> 6);
  uVar1 = 0;
  if (1000 < _DAT_ffff00ea) {
    uVar1 = (int)(short)_DAT_ffff00ea - 1000;
  }
  _DAT_ffff00b0 = (short)((int)(uVar1 & 0xffff) >> 6);
  uVar1 = 0;
  if (1000 < _DAT_ffff00ec) {
    uVar1 = (int)(short)_DAT_ffff00ec - 1000;
  }
  _DAT_ffff00b2 = (short)((int)(uVar1 & 0xffff) >> 6);
  return;
}

