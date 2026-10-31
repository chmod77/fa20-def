
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00005990(void)

{
  uint uVar1;
  
  if ((_DAT_ffffd008 & 0x20) != 0) {
    _DAT_ffffd008 = 0x20;
  }
  uVar1 = (uint)(short)_DAT_ffffd008;
  if ((uVar1 & 0x40) != 0) {
    uVar1 = 0x40;
    _DAT_ffffd008 = 0x40;
  }
  return uVar1;
}

