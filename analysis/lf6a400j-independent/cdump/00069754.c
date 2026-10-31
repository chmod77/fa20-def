
/* WARNING: Removing unreachable block (ram,0x00069766) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00069754(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff002c;
  if ((uVar1 & 0x80) != 0) {
    _DAT_fffef184 = _DAT_ffff0f56;
    if (((DAT_ffff34f7 & 0x10) == 0) &&
       (((0x2279 < _DAT_ffff002a &&
         (((((DAT_fffef739 & 1) == 0 && ((DAT_fffef739 & 4) == 0)) ||
           (((DAT_fffef739 & 2) == 0 && ((DAT_fffef739 & 8) == 0)))) &&
          (((DAT_fffef739 & 0x40) == 0 && ((DAT_ffff34f7 & 0x20) == 0)))))) ||
        (((DAT_fffef32c & 2) == 0 && (0x1676 < _DAT_ffff0f56)))))) {
      DAT_fffef18b = DAT_fffef18b | 0x40;
      if (_DAT_fffef180 < 100) {
        uVar1 = FUN_00001540(_DAT_fffef180 + 1);
        _DAT_fffef180 = (ushort)uVar1;
      }
      else {
        DAT_fffef910 = DAT_fffef910 | 4;
        uVar1 = (int)DAT_fffef18a | 4;
        DAT_fffef18a = (char)uVar1;
      }
    }
    else {
      uVar1 = (int)(char)DAT_fffef18b & 0xbf;
      DAT_fffef18b = (byte)uVar1;
      _DAT_fffef180 = 0;
    }
  }
  return uVar1;
}

