
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00077394(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff66b1;
  if (((uVar1 & 0x10) != 0) && (uVar1 = (uint)DAT_fffeeec6, (uVar1 & 1) != 0)) {
    _DAT_fffef48c = 0x8106;
    uVar1 = (int)DAT_ffff66b1 & 0xef;
    DAT_ffff66b1 = (char)uVar1;
  }
  return uVar1;
}

