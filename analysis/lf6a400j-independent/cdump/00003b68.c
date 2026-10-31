
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00003b68(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = _DAT_fffedb40;
  if (DAT_ffffab9d == '\0') {
    uVar1 = _DAT_fffeda80;
  }
  _DAT_ffffd3c4 = (uVar1 & 0xf8ff) + 0x700;
  uVar2 = (uint)_DAT_ffffd008;
  if ((uVar2 & 2) != 0) {
    _DAT_ffffd008 = 2;
    uVar2 = (uint)_DAT_ffffd040;
    if ((uVar2 & 0x40) != 0) {
      uVar2 = 0x40;
      _DAT_ffffd040 = 0x40;
    }
  }
  for (uVar3 = 0; (uVar3 & 0xff) < 8; uVar3 = (uVar3 & 0xff) + 1) {
    *(undefined1 *)((uVar3 & 0xff) - 0x2c38) = 0;
  }
  return uVar2;
}

