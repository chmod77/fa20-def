
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000559e(void)

{
  uint uVar1;
  
  uVar1 = _DAT_ffff8b14 >> 0x10 & (int)(short)_DAT_ffffd020;
  if (uVar1 != 0) {
    _DAT_ffffd028 = (ushort)uVar1;
    _DAT_ffffd020 = _DAT_ffffd028 & ~_DAT_ffffd020;
  }
  if ((_DAT_ffff8b14 & (int)(short)_DAT_ffffd022 & 0xffff) != 0) {
    _DAT_ffffd02a = (ushort)(_DAT_ffff8b14 & (int)(short)_DAT_ffffd022);
    _DAT_ffffd022 = _DAT_ffffd02a & ~_DAT_ffffd022;
  }
  return 0x22;
}

