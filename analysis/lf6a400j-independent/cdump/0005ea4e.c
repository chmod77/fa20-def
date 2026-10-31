
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0005ea4e(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef3bf;
  if ((((uVar1 & 1) == 0) || (uVar1 = (uint)DAT_fffef152, (uVar1 & 0x80) == 0)) ||
     (0x1d < _DAT_fffef0da)) {
    _DAT_fffef3c6 = 0;
  }
  else {
    uVar1 = FUN_00001540(_DAT_fffef3c6 + 1);
    _DAT_fffef3c6 = (ushort)uVar1;
  }
  return uVar1;
}

