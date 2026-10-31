
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000051d4(void)

{
  uint uVar1;
  
  if ((_DAT_ffffd030 & 0x100) == 0) {
    if ((_DAT_ffffd038 & 0x100) == 0) {
      uVar1 = 0xffffffff;
      _DAT_ffffd032 = 0xffff;
      _DAT_ffffd030 = 0xffff;
      _DAT_ffffd03a = 0xffff;
      _DAT_ffffd038 = 0xffff;
    }
    else {
      _DAT_ffffd038 = 0x100;
      uVar1 = (uint)_DAT_fffff75e;
      if ((uVar1 & 0x10) != 0) {
        uVar1 = FUN_00005ce4();
        return uVar1;
      }
    }
  }
  else {
    _DAT_ffffd030 = 0x100;
    _DAT_ffffd038 = 0x100;
    if (DAT_ffff8ecc != '\x0f') {
      if (((int)DAT_ffff8723 & 0x80U) == 0) {
        _DAT_ffff8578 = 300;
        DAT_ffff857c = 1;
      }
      else {
        DAT_ffff857c = 0;
      }
    }
    uVar1 = (uint)_DAT_fffff75e;
    if ((uVar1 & 0x10) != 0) {
      uVar1 = FUN_00005cde();
      return uVar1;
    }
  }
  return uVar1;
}

