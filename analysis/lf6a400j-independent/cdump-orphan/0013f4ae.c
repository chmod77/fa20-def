
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0013f4ae(void)

{
  int iVar1;
  
  if (_DAT_ffff7b96 == 4) {
    if ((DAT_ffff6793 == '\x03') && (_DAT_ffff855a == 0)) {
      iVar1 = 0x24;
      DAT_ffff6b93 = 0x24;
    }
    else {
      if ((DAT_ffff6793 != '\x01') || ((_DAT_fffef65c & 0x40) != 0)) {
        if (DAT_ffff6793 == '\x01') {
          DAT_ffff3144 = 0;
          DAT_fffef453 = 0xaa;
          DAT_fffef687 = 0xaa;
          DAT_fffef454 = 0;
          DAT_ffff855e = DAT_ffff855e | 0x10;
          _DAT_ffff855a = 1;
          DAT_ffff6b91 = 0x71;
          DAT_ffff6b92 = DAT_ffff6793;
          DAT_ffff6b93 = DAT_ffff6794;
          DAT_ffff6b94 = DAT_ffff6795;
          _DAT_ffff7b98 = 4;
          return (int)DAT_ffff6795;
        }
        if (DAT_ffff6793 == 3) {
          DAT_ffff6b91 = 0x71;
          DAT_ffff6b92 = DAT_ffff6793;
          DAT_ffff6b93 = DAT_ffff6794;
          DAT_ffff6b94 = DAT_ffff6795;
          DAT_ffff6b95 = (char)((ushort)_DAT_ffff855a >> 8);
          DAT_ffff6b96 = (char)_DAT_ffff855a;
          _DAT_ffff7b98 = 6;
          return (int)_DAT_ffff855a;
        }
        return (int)DAT_ffff6793;
      }
      iVar1 = 0x31;
      DAT_ffff6b93 = 0x31;
    }
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

