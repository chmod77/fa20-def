
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00048e54(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff06bf;
  if ((uVar1 & 0x80) != 0) {
    if ((DAT_ffff06c1 & 0x40) != 0) {
      if (_DAT_ffff102c < DAT_ffff2b18) {
        DAT_fffef93a = DAT_fffef93a & 0x7f;
      }
      else {
        DAT_fffef93a = DAT_fffef93a | 0x80;
      }
      DAT_fffefa35 = 1;
      DAT_ffff2b18 = 0xff;
    }
    uVar1 = (uint)(char)DAT_ffff06c1;
    if ((uVar1 & 0x80) != 0) {
      if (DAT_ffff069c < 100) {
        uVar1 = (int)DAT_fffef939 & 0x7f;
        DAT_fffef939 = (char)uVar1;
      }
      else {
        uVar1 = (int)DAT_fffef939 | 0x80;
        DAT_fffef939 = (char)uVar1;
      }
      DAT_fffefa34 = 1;
      return uVar1;
    }
  }
  return uVar1;
}

