
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003c0e8(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffffab40;
  if ((uVar1 & 0x40) == 0) {
    uVar1 = FUN_00001540(_DAT_ffff29d8 + 1);
    _DAT_ffff29d8 = (ushort)uVar1;
  }
  return uVar1;
}

