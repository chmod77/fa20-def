
/* WARNING: Removing unreachable block (ram,0x00061bd2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00061b6e(void)

{
  uint uVar1;
  
  uVar1 = (uint)(char)DAT_fffef554;
  if ((uVar1 & 0x80) == 0) {
    if ((DAT_fffef554 & 0x40) == 0) {
      _DAT_fffef54c = &DAT_00008000;
      DAT_fffef554 = DAT_fffef554 | 0x40;
    }
    _DAT_fffef550 = &DAT_00020000 + (int)_DAT_fffef54c;
    if ((undefined *)0x180000 < _DAT_fffef550) {
      _DAT_fffef550 = (undefined *)0x180000;
    }
    uVar1 = FUN_0000151c(_DAT_fffef54c,_DAT_fffef550);
    _DAT_fffef548 = _DAT_fffef548 + (short)uVar1;
    _DAT_fffef54c = (undefined2 *)(&DAT_00020000 + (int)_DAT_fffef54c);
    if (&DAT_0017ffff < _DAT_fffef54c) {
      if (_DAT_fffef548 == 0x5aa5) {
        DAT_ffff6569 = DAT_ffff6569 & 0xbf;
      }
      else {
        DAT_ffff6569 = DAT_ffff6569 | 0x40;
      }
      if ((DAT_ffff6569 & 0x40) == 0) {
        DAT_fffeff79 = DAT_fffeff79 & 0xfe;
      }
      else {
        DAT_fffeff79 = DAT_fffeff79 | 1;
      }
      DAT_fffefeb0 = 1;
      uVar1 = (int)(char)DAT_fffef554 | 0x80;
      DAT_fffef554 = (byte)uVar1;
    }
  }
  return uVar1;
}

