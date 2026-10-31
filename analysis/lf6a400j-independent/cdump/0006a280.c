
/* WARNING: Removing unreachable block (ram,0x0006a32e) */
/* WARNING: Removing unreachable block (ram,0x0006a2a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006a280(void)

{
  uint uVar1;
  short sStack_8;
  
  if ((((int)DAT_fffef371 & 2U) == 0) || (DAT_ffff0907 != '\0')) {
    DAT_fffef728 = 0;
    DAT_fffef729 = 0;
    DAT_fffef72a = 0;
    return (int)DAT_fffef371;
  }
  uVar1 = 0xffffff80;
  if (_DAT_fffee742 < 0xfa17) {
    DAT_fffef728 = 0;
    sStack_8 = FUN_00001550(0xf0);
    DAT_fffef72e = DAT_fffef72e & 0xfb;
  }
  else {
    DAT_fffef729 = 0;
    if (DAT_fffef728 < 0xd) {
      DAT_fffef728 = DAT_fffef728 + 1;
      goto LAB_0006a334;
    }
    sStack_8 = FUN_00001550(0xf0);
    DAT_fffef72e = DAT_fffef72e | 4;
  }
  DAT_fffef75b = DAT_fffef75b | 0x80;
  DAT_fffef945 = 1;
  FUN_0007e140();
  uVar1 = FUN_00001550((int)sStack_8);
LAB_0006a334:
  if (_DAT_fffee742 < 0x3a5c) {
    if (DAT_fffef72a < 0xd) {
      DAT_fffef72a = DAT_fffef72a + 1;
      return uVar1;
    }
    sStack_8 = FUN_00001550(0xf0);
    DAT_fffef73b = DAT_fffef73b | 0x80;
  }
  else {
    DAT_fffef72a = 0;
    sStack_8 = FUN_00001550(0xf0);
    DAT_fffef73b = DAT_fffef73b & 0x7f;
  }
  DAT_fffef7c8 = DAT_fffef7c8 | 0x80;
  DAT_fffef946 = 1;
  FUN_0007e154();
  uVar1 = FUN_00001550((int)sStack_8);
  return uVar1;
}

