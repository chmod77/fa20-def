
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00140038(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff051d;
  if (((uVar1 & 4) != 0) && (uVar1 = (uint)DAT_fffeeec6, (uVar1 & 1) == 0)) {
    _DAT_fffef50e = 0x8105;
    uVar1 = (int)DAT_ffff051d & 0xfb;
    DAT_ffff051d = (char)uVar1;
  }
  return uVar1;
}

