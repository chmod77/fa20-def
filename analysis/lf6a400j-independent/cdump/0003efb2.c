
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003efb2(void)

{
  uint uVar1;
  
  if (((DAT_fffef0d6 & 1) == 0) || ((DAT_fffef0d7 & 1) == 0)) {
    uVar1 = (int)(char)DAT_fffef8a7 & 0xfe;
    DAT_fffef8a7 = (byte)uVar1;
    DAT_fffef95d = 1;
  }
  else {
    uVar1 = (uint)DAT_fffef371;
    if (((uVar1 & 2) != 0) && (DAT_ffff090c == '\0')) {
      if (((DAT_fffeeec1 & 1) == 0) && (((DAT_ffff0006 & 1) != 0 && (99 < DAT_ffff0592)))) {
        if (0x2ed < _DAT_fffef968) {
          DAT_fffef8a7 = DAT_fffef8a7 | 1;
          DAT_fffef95d = 1;
        }
        uVar1 = FUN_00001540(_DAT_fffef968 + 1);
        _DAT_fffef968 = (short)uVar1;
        return uVar1;
      }
      uVar1 = (uint)(char)DAT_ffff0006;
      if (((uVar1 & 1) == 0) && (99 < DAT_ffff0592)) {
        uVar1 = (int)(char)DAT_fffef8a7 & 0xfe;
        DAT_fffef8a7 = (byte)uVar1;
        DAT_fffef95d = 1;
      }
    }
  }
  _DAT_fffef968 = 0;
  return uVar1;
}

