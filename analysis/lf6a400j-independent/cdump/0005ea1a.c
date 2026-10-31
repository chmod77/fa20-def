
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0005ea1a(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef3bf;
  if (((uVar1 & 1) == 0) || (_DAT_fffef0da < 0x2cb)) {
    _DAT_fffef3c4 = 0;
  }
  else {
    uVar1 = FUN_00001540(_DAT_fffef3c4 + 1);
    _DAT_fffef3c4 = (ushort)uVar1;
  }
  return uVar1;
}

