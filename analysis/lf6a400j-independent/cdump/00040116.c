
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00040116(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef371;
  if (((uVar1 & 2) != 0) && (DAT_ffff0918 == '\0')) {
    if (_DAT_fffee6a0 < 0x10c3) {
      if (0xc < DAT_fffef83a) {
        DAT_fffef72c = DAT_fffef72c | 2;
        DAT_fffef74a = DAT_fffef74a | 0x80;
        DAT_fffef942 = 1;
      }
      uVar1 = FUN_0000152c(DAT_fffef83a + 1);
      DAT_fffef83a = (char)uVar1;
      return uVar1;
    }
    DAT_fffef72c = DAT_fffef72c & 0xfd;
    uVar1 = (int)(char)DAT_fffef74a | 0x80;
    DAT_fffef74a = (byte)uVar1;
    DAT_fffef942 = 1;
  }
  DAT_fffef83a = 0;
  return uVar1;
}

