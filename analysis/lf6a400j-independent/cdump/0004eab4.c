
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004eab4(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeeec1;
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_00001540(_DAT_fffef342 + 1);
    _DAT_fffef342 = (ushort)uVar1;
  }
  return uVar1;
}

