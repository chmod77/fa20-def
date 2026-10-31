
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000400a4(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef371;
  if (((uVar1 & 2) != 0) && (DAT_ffff0918 == '\0')) {
    if (0xf149 < _DAT_fffee6a0) {
      if (0xc < DAT_fffef954) {
        DAT_fffef72c = DAT_fffef72c | 1;
        DAT_fffef749 = DAT_fffef749 | 0x80;
        DAT_fffef941 = 1;
      }
      uVar1 = FUN_0000152c(DAT_fffef954 + 1);
      DAT_fffef954 = (char)uVar1;
      return uVar1;
    }
    DAT_fffef72c = DAT_fffef72c & 0xfe;
    uVar1 = (int)(char)DAT_fffef749 | 0x80;
    DAT_fffef749 = (byte)uVar1;
    DAT_fffef941 = 1;
  }
  DAT_fffef954 = 0;
  return uVar1;
}

