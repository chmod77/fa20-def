
uint FUN_00051be8(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeef9c;
  if (uVar1 == 0xc) {
    if (((DAT_fffef157 & 2) != 0) && (((int)DAT_ffff0000 & 2U) == 0)) {
      DAT_fffeef9c = 0xd;
      return (int)DAT_ffff0000;
    }
    uVar1 = (uint)DAT_fffef32a;
    if ((uVar1 & 0x10) == 0) {
      uVar1 = (uint)DAT_fffef8f0;
      if ((((((uVar1 & 0x80) == 0) && (uVar1 = (uint)DAT_fffef8f0, (uVar1 & 0x40) == 0)) &&
           (uVar1 = (uint)DAT_fffef8f0, (uVar1 & 0x20) == 0)) &&
          ((uVar1 = (uint)DAT_fffef8f0, (uVar1 & 8) == 0 &&
           (uVar1 = (uint)DAT_fffef8f0, (uVar1 & 4) == 0)))) &&
         ((uVar1 = (uint)DAT_fffef8f0, (uVar1 & 2) == 0 &&
          ((uVar1 = (uint)DAT_fffef8f0, (uVar1 & 1) == 0 &&
           (uVar1 = (uint)DAT_fffef8f1, (uVar1 & 1) == 0)))))) {
        DAT_fffeef9c = 2;
        return uVar1;
      }
    }
    DAT_fffeef9c = '\v';
  }
  return uVar1;
}

