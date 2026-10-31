
uint FUN_0015bb10(void)

{
  uint uVar1;
  
  if ((DAT_ffff20ce & 4) == 0) {
    if ((DAT_ffff20ce & 2) == 0) {
      uVar1 = FUN_0015b838();
    }
    else {
      uVar1 = FUN_0015b856();
    }
  }
  else {
    uVar1 = FUN_0015b770();
  }
  if (0xc < DAT_ffff20bf) {
    uVar1 = (uint)DAT_ffffab80;
    if (((uVar1 != 2) && (uVar1 = (uint)DAT_ffffab80, uVar1 != 4)) &&
       (uVar1 = (uint)DAT_ffff1e01, (uVar1 & 2) != 0)) {
      uVar1 = (int)DAT_ffff34b8 | 0x80;
      DAT_ffff34b8 = (char)uVar1;
      DAT_ffff3651 = DAT_ffff3651 + '\x01';
    }
  }
  return uVar1;
}

