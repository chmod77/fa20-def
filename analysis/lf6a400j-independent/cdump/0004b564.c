
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004b564(void)

{
  uint uVar1;
  
  if (DAT_fffeed8a == -0x60) {
    if (DAT_fffeed87 == '\x17') {
      return 0x17;
    }
    if (0x7f < (uint)(int)DAT_fffeed8f) {
      return (int)DAT_fffeed8f;
    }
    if ((int)DAT_fffeed89 != 6) {
      return (int)DAT_fffeed89;
    }
  }
  else if (DAT_fffeed8a == -0x48) {
    _DAT_fffeed80 = (uint)DAT_fffeed8b * 0x10000 + (uint)DAT_fffeed8c * 0x100 + (uint)DAT_fffeed8d;
    if (399 < _DAT_fffeed80) {
      return (int)(char)DAT_fffeed8d;
    }
    if ((int)DAT_fffeed89 != 5) {
      return (int)DAT_fffeed89;
    }
  }
  else if ((DAT_fffeed8a == -0x50) || (DAT_fffeed8a == -0x58)) {
    if ((uint)(int)DAT_fffeed89 < 5) {
      return (int)DAT_fffeed89;
    }
  }
  else if (DAT_fffeed8a != -0x41) {
    return (int)DAT_fffeed8a;
  }
  uVar1 = (uint)DAT_fffeeea8;
  DAT_fffeeea8 = (char)(uVar1 | 0x40);
  return uVar1 | 0x40;
}

