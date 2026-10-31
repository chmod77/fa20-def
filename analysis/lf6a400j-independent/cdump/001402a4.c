
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001402a4(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef055;
  if (((uVar1 & 2) != 0) && (uVar1 = (uint)DAT_fffeeec6, (uVar1 & 1) == 0)) {
    _DAT_fffef598 = 0x8105;
    uVar1 = (int)DAT_fffef055 & 0xfd;
    DAT_fffef055 = (char)uVar1;
  }
  return uVar1;
}

