
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001400f8(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef054;
  if (((uVar1 & 0x40) != 0) && (uVar1 = (uint)DAT_fffeeec6, (uVar1 & 1) == 0)) {
    _DAT_fffef50a = 0x8105;
    uVar1 = (int)DAT_fffef054 & 0xbf;
    DAT_fffef054 = (char)uVar1;
  }
  return uVar1;
}

