
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00048f02(void)

{
  uint uVar1;
  
  if (((int)DAT_fffef939 & 0x80U) != 0) {
    if ((0x17 < DAT_ffff069d) && (0xe666 < _DAT_ffff105c)) {
      DAT_fffefa36 = DAT_fffefa36 | 2;
    }
    if ((0x17 < DAT_ffff069e) && (0xe666 < _DAT_ffff105e)) {
      DAT_fffefa36 = DAT_fffefa36 | 4;
    }
    if ((0x17 < DAT_ffff069f) && (0xe666 < _DAT_ffff1060)) {
      DAT_fffefa36 = DAT_fffefa36 | 8;
    }
    if ((0x17 < DAT_ffff06a0) && (0xe666 < _DAT_ffff1062)) {
      DAT_fffefa36 = DAT_fffefa36 | 0x10;
    }
  }
  uVar1 = (uint)DAT_fffef93a;
  if ((uVar1 & 0x80) != 0) {
    if (0xe666 < _DAT_ffff1054) {
      uVar1 = (int)DAT_fffefa37 | 2;
      DAT_fffefa37 = (char)uVar1;
    }
    if (0xe666 < _DAT_ffff1056) {
      uVar1 = (int)DAT_fffefa37 | 4;
      DAT_fffefa37 = (char)uVar1;
    }
    if (0xe666 < _DAT_ffff1058) {
      uVar1 = (int)DAT_fffefa37 | 8;
      DAT_fffefa37 = (char)uVar1;
    }
    if (0xe666 < _DAT_ffff105a) {
      uVar1 = (int)DAT_fffefa37 | 0x10;
      DAT_fffefa37 = (char)uVar1;
    }
  }
  return uVar1;
}

