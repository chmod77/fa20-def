
uint FUN_000485d6(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef310;
  if ((uVar1 & 8) != 0) {
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee672 != '\x01')) && (0x31 < DAT_fffef3a7)))) {
      DAT_ffff0570 = DAT_ffff0570 | 0x80;
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee672 == '\x01')) {
      DAT_fffef3a7 = 0;
    }
    else {
      DAT_fffef3a7 = FUN_0000152c(DAT_fffef3a7 + 1);
    }
    if (DAT_fffee672 == '\x01') {
      DAT_fffef3a3 = DAT_fffef3a3 | 1;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef3a3 & 1) != 0)) &&
        ((DAT_fffef084 == DAT_fffef3a8 && (199 < DAT_fffef3a9)))))) {
      DAT_ffff0570 = DAT_ffff0570 | 0x40;
    }
    uVar1 = (uint)(char)DAT_fffef3e1;
    if ((((uVar1 & 0x20) == 0) || (uVar1 = (uint)(char)DAT_fffef3a3, (uVar1 & 1) == 0)) ||
       (DAT_fffef084 != DAT_fffef3a8)) {
      DAT_fffef3a9 = 0;
    }
    else {
      uVar1 = FUN_0000152c(DAT_fffef3a9 + 1);
      DAT_fffef3a9 = (byte)uVar1;
    }
    DAT_fffef3a8 = DAT_fffef084;
  }
  return uVar1;
}

