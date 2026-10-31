
/* WARNING: Removing unreachable block (ram,0x0013f0b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0013f054(void)

{
  int iVar1;
  
  if (_DAT_ffff7b96 == 4) {
    if ((DAT_ffff6793 == '\x03') && (_DAT_ffff8552 == 0)) {
      iVar1 = 0x24;
      DAT_ffff6b93 = 0x24;
    }
    else {
      if ((DAT_ffff6793 != '\x01') || ((_DAT_fffef65c & 0x40) != 0)) {
        if (DAT_ffff6793 == '\x01') {
          if ((_DAT_fffef680 & 1) == 0) {
            DAT_fffef453 = 0xbb;
            DAT_fffef687 = 0xbb;
            DAT_ffff313d = 0;
            DAT_ffff313e = 0;
            DAT_ffff313c = 1;
            DAT_fffef455 = 0x80;
            _DAT_ffff3508 = 0;
          }
          else {
            DAT_fffef453 = 0xbc;
            DAT_fffef687 = 0xbc;
            DAT_ffff312d = 0;
          }
          DAT_ffff3144 = 0;
          _DAT_ffff8552 = 1;
          DAT_ffff855e = DAT_ffff855e | 1;
          DAT_ffff6b91 = 0x71;
          DAT_ffff6b92 = DAT_ffff6793;
          DAT_ffff6b93 = DAT_ffff6794;
          DAT_ffff6b94 = DAT_ffff6795;
          _DAT_ffff7b98 = 4;
          return (int)DAT_ffff6795;
        }
        if (DAT_ffff6793 != 3) {
          return (int)DAT_ffff6793;
        }
        DAT_ffff6b91 = 0x71;
        DAT_ffff6b92 = DAT_ffff6793;
        DAT_ffff6b93 = DAT_ffff6794;
        DAT_ffff6b94 = DAT_ffff6795;
        DAT_ffff6b95 = (char)((ushort)_DAT_ffff8552 >> 8);
        DAT_ffff6b96 = (char)_DAT_ffff8552;
        _DAT_ffff7b98 = 6;
        return (int)_DAT_ffff8552;
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

