
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000505c8(void)

{
  uint uVar1;
  
  DAT_fffef465 = FUN_0000152c(DAT_fffef465 + 1);
  uVar1 = (uint)(char)DAT_fffef465;
  if (uVar1 == 0x19) {
    DAT_fffef465 = '\0';
    uVar1 = (uint)DAT_fffeeec1;
    if (((uVar1 & 1) == 0) && (uVar1 = (uint)DAT_ffff03d8, (uVar1 & 2) == 0)) {
      uVar1 = FUN_0016b3c8(_DAT_fffef468,_DAT_fffef2c6);
      _DAT_fffef468 = uVar1;
    }
  }
  return uVar1;
}

