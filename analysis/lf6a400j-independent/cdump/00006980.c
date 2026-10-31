
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00006980(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (DAT_ffffa309 == '\0') {
    if (((_DAT_ffffa300 & 0xf00) != 0) && ((DAT_ffffa300 & 0xf) < 8)) {
      return 0;
    }
    DAT_ffff8ecd = 4;
  }
  else if (DAT_ffffa309 == '\x10') {
    DAT_ffffa316 = 0;
    if (7 < (_DAT_ffffa300 & 0xfff)) {
      if ((_DAT_ffffa300 & 0xfff) < 0x400) {
        DAT_ffffa316 = 0;
        return 0;
      }
      DAT_ffffa316 = 0xff;
      return 0;
    }
    DAT_ffff8ecd = 5;
  }
  else {
    if (DAT_ffffa309 != ' ') {
      return 0xffffff81;
    }
    uVar1 = (int)(char)DAT_ffffa300 & 0xf;
    if (((DAT_ffffa310 == 0xf) && (uVar1 != 0)) ||
       ((DAT_ffffa310 < 0xf && (uVar1 != DAT_ffffa310 + 1)))) {
      DAT_ffff8ecd = 6;
      uVar2 = 0xffffff80;
      DAT_ffff92d1 = 0x80;
    }
    else {
      DAT_ffffa310 = (byte)uVar1;
    }
    if (_DAT_ffffa312 == _DAT_ffffa2fa) {
      return uVar2;
    }
    DAT_ffff8ecd = 7;
  }
  DAT_ffff92d1 = 0x80;
  return 0xffffff80;
}

