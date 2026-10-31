
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0007c2d4(void)

{
  uint uVar1;
  
  if (_DAT_ffff8ed0 == 1) {
    if ((DAT_ffff856b == '\x01') &&
       (uVar1 = FUN_0000151c(_DAT_ffff7bb0,_DAT_ffff7bb0 + _DAT_ffff7bb8),
       (uVar1 & 0xffff) == 0x5aa5)) {
      DAT_ffff6b91 = DAT_ffff6792 + '@';
      _DAT_ffff7b98 = 1;
      DAT_ffff7bbc = 1;
      DAT_ffff856b = 0;
      DAT_ffffab9d = 0;
      return uVar1;
    }
    uVar1 = 0x22;
    DAT_ffff6b93 = 0x22;
  }
  else {
    uVar1 = 0x13;
    DAT_ffff6b93 = 0x13;
  }
  _DAT_ffff7b98 = 3;
  DAT_ffff6b92 = 0x37;
  DAT_ffff6b91 = 0x7f;
  return uVar1;
}

