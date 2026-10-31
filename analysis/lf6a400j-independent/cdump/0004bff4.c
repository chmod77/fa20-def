
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint thunk_FUN_0004be12(void)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = DAT_fffff025;
  DAT_fffff024 = DAT_fffff024 & 0xbf;
  if (((int)DAT_fffff022 & 4U) != 0) {
    return (int)DAT_fffff022;
  }
  if (((int)(char)DAT_fffeeea8 & 8U) != 0) {
    return (int)(char)DAT_fffeeea8;
  }
  uVar2 = (uint)(char)DAT_fffeeea8;
  if ((uVar2 & 4) != 0) {
    return uVar2;
  }
  (&DAT_fffeed86)[_DAT_fffeed84] = DAT_fffff025;
  if (2 < _DAT_fffeed84) {
    if (_DAT_fffeed84 == 3) {
      if (((((DAT_fffeed86 == -0x80) && (DAT_fffeed87 == '\x10')) && (DAT_fffeed88 == -0x10)) &&
          (DAT_fffeed89 < 0x82)) ||
         (((DAT_fffeed86 == -0x80 && (DAT_fffeed87 == '\x17')) &&
          ((DAT_fffeed88 == -0x10 && (DAT_fffeed89 < 0x82)))))) {
        DAT_fffeeea8 = DAT_fffeeea8 & 0xf7;
      }
      else {
        DAT_fffeeea8 = DAT_fffeeea8 | 8;
      }
    }
    uVar2 = (uint)(char)DAT_fffeed89;
    if ((ushort)(DAT_fffeed89 + 4) <= _DAT_fffeed84) {
      uVar2 = (int)(char)DAT_fffeeea8 | 4;
      DAT_fffeeea8 = (byte)uVar2;
      DAT_fffeeea7 = cVar1;
      if ((DAT_fffeeea6 == cVar1) && (uVar2 = (uint)(char)DAT_fffeeea8, (uVar2 & 8) == 0)) {
        uVar2 = (int)(char)DAT_fffeeea8 | 0x80;
        DAT_fffeeea8 = (byte)uVar2;
      }
      goto LAB_0004bee8;
    }
  }
  DAT_fffeeea6 = DAT_fffeeea6 + cVar1;
LAB_0004bee8:
  DAT_fffeeeaf = 3;
  DAT_fffeeeae = 8;
  _DAT_fffeed84 = _DAT_fffeed84 + 1;
  return uVar2;
}

