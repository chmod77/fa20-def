
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000500c(void)

{
  uint uVar1;
  
  if ((_DAT_ffffd040 & 0x40) == 0) {
    if ((_DAT_ffffd040 & 0x80) == 0) {
      _DAT_ffffd040 = 0xffff;
      _DAT_ffffd042 = 0xffff;
      return 0x40;
    }
    _DAT_ffffd040 = 0x80;
    if (((int)_DAT_fffff75e & 0x10U) == 0) {
      _DAT_ffffd040 = 0x80;
      return (int)_DAT_fffff75e;
    }
    _DAT_ffffa2de = (ushort)((int)(uint)_DAT_ffffd3e0 >> 4) & 0x7ff;
    uVar1 = FUN_000050a4(0xffffd3e5);
  }
  else {
    _DAT_ffffd040 = 0x40;
    if (((int)_DAT_fffff75e & 0x10U) == 0) {
      _DAT_ffffd040 = 0x40;
      return (int)_DAT_fffff75e;
    }
    _DAT_ffffa2de = (ushort)((int)(uint)_DAT_ffffd3c0 >> 4) & 0x7ff;
    uVar1 = FUN_000050a4(0xffffd3c5);
  }
  if (DAT_ffff8ec8 == -1) {
    return uVar1;
  }
  uVar1 = FUN_00005cd8();
  return uVar1;
}

