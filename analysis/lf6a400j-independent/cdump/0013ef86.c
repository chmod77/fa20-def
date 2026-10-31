
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0013ef86(void)

{
  int iVar1;
  
  if (_DAT_ffff7b96 == 4) {
    if (((DAT_ffff6793 != '\x02') || (_DAT_ffff66b6 != 0)) &&
       ((DAT_ffff6793 != '\x03' || (_DAT_ffff66b6 != 0)))) {
      if (DAT_ffff6793 == '\x01') {
        _DAT_ffff66b6 = 1;
        DAT_fffef054 = DAT_fffef054 | 0x10;
      }
      else {
        if (DAT_ffff6793 != '\x02') {
          if (DAT_ffff6793 == 3) {
            DAT_ffff6b91 = 0x71;
            DAT_ffff6b92 = DAT_ffff6793;
            DAT_ffff6b93 = DAT_ffff6794;
            DAT_ffff6b94 = DAT_ffff6795;
            DAT_ffff6b95 = (char)((ushort)_DAT_ffff66b6 >> 8);
            DAT_ffff6b96 = (char)_DAT_ffff66b6;
            _DAT_ffff7b98 = 6;
            return (int)_DAT_ffff66b6;
          }
          return (int)DAT_ffff6793;
        }
        DAT_fffef054 = DAT_fffef054 & 0xef;
        if (_DAT_ffff66b6 == 1) {
          _DAT_ffff66b6 = 2;
        }
      }
      DAT_ffff6b91 = 0x71;
      DAT_ffff6b92 = DAT_ffff6793;
      DAT_ffff6b93 = DAT_ffff6794;
      DAT_ffff6b94 = DAT_ffff6795;
      _DAT_ffff7b98 = 4;
      return (int)DAT_ffff6795;
    }
    iVar1 = 0x24;
    DAT_ffff6b93 = 0x24;
  }
  else {
    iVar1 = 0x13;
    DAT_ffff6b93 = 0x13;
  }
  DAT_ffff6b92 = 0x31;
  DAT_ffff6b91 = 0x7f;
  _DAT_ffff7b98 = 3;
  return iVar1;
}

