
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003f9ee(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)DAT_fffef371;
  if (((uVar1 & 2) == 0) || (DAT_ffff08f2 != '\0')) {
    DAT_fffef830 = 0;
    DAT_fffef831 = 0;
    return uVar1;
  }
  if (_DAT_fffef23e < 0xbe4) {
    if (DAT_fffef830 < 0x34) {
      DAT_fffef830 = DAT_fffef830 + 1;
      goto LAB_0003fa66;
    }
    uVar2 = FUN_00001550(0xf0);
    DAT_fffef748 = DAT_fffef748 | 0x40;
  }
  else {
    uVar2 = FUN_00001550(0xf0);
    DAT_fffef748 = DAT_fffef748 & 0xbf;
    DAT_fffef830 = 0;
  }
  DAT_fffef953 = 1;
  uVar1 = FUN_00001550(uVar2);
LAB_0003fa66:
  if (_DAT_fffef23e < 0xfcfb) {
    uVar2 = FUN_00001550(0xf0);
    DAT_fffef748 = DAT_fffef748 & 0x7f;
    DAT_fffef831 = 0;
  }
  else {
    if (DAT_fffef831 < 0x34) {
      DAT_fffef831 = DAT_fffef831 + 1;
      return uVar1;
    }
    uVar2 = FUN_00001550(0xf0);
    DAT_fffef748 = DAT_fffef748 | 0x80;
  }
  DAT_fffef952 = 1;
  uVar1 = FUN_00001550(uVar2);
  return uVar1;
}

