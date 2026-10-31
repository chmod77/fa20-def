
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0005e9ea(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef3bf;
  if (((uVar1 & 1) != 0) && (uVar1 = (uint)DAT_fffeeec6, (uVar1 & 1) == 0)) {
    uVar1 = FUN_00001540(_DAT_fffef3c2 + 1);
    _DAT_fffef3c2 = (short)uVar1;
    return uVar1;
  }
  _DAT_fffef3c2 = 0;
  return uVar1;
}

