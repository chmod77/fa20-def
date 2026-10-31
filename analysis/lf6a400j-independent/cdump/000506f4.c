
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000506f4(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeeec2;
  if ((uVar1 & 4) == 0) {
    _DAT_ffff2fce = 0;
  }
  else {
    uVar1 = FUN_00001540(_DAT_ffff2fce + 1);
    _DAT_ffff2fce = (ushort)uVar1;
  }
  return uVar1;
}

