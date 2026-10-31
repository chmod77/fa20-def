
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00140088(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff66b2;
  if (((uVar1 & 8) != 0) && (uVar1 = (uint)DAT_fffeeec6, (uVar1 & 1) != 0)) {
    _DAT_fffef514 = 0x8106;
    uVar1 = (int)DAT_ffff66b2 & 0xf7;
    DAT_ffff66b2 = (char)uVar1;
  }
  return uVar1;
}

