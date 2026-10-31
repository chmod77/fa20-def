
uint FUN_00047a80(void)

{
  uint uVar1;
  
  if ((DAT_fffef310 & 8) == 0) {
    if ((DAT_fffef310 & 0x10) != 0) {
      if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
         (((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffee667 == '\0' || (DAT_fffee667 == '\x02')))) &&
           (0x31 < DAT_fffef105)) ||
          (((DAT_fffef3e1 & 0x20) != 0 &&
           (((DAT_fffee668 == '\0' || (DAT_fffee668 == '\x02')) && (0x31 < DAT_fffef106)))))))) {
        DAT_fffef0eb = DAT_fffef0eb | 0x10;
      }
      if (((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffee667 != '\0' && (DAT_fffee667 != '\x02')))) {
        DAT_fffef105 = 0;
      }
      else {
        DAT_fffef105 = FUN_0000152c(DAT_fffef105 + 1);
      }
      if (((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffee668 != '\0' && (DAT_fffee668 != '\x02')))) {
        DAT_fffef106 = 0;
      }
      else {
        DAT_fffef106 = FUN_0000152c(DAT_fffef106 + 1);
      }
      if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
         (((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef100 & 2) != 0)) && (DAT_fffee667 == '\x03'))
          && (199 < DAT_fffef103)))) {
        DAT_fffef0eb = DAT_fffef0eb | 0x20;
      }
      uVar1 = (uint)(char)DAT_fffef3e1;
      if ((((uVar1 & 0x20) != 0) && (uVar1 = (uint)(char)DAT_fffef100, (uVar1 & 2) != 0)) &&
         (uVar1 = (uint)DAT_fffee667, uVar1 == 3)) {
        uVar1 = FUN_0000152c(DAT_fffef103 + 1);
        DAT_fffef103 = (char)uVar1;
        return uVar1;
      }
      DAT_fffef103 = 0;
      return uVar1;
    }
    if (((int)(char)DAT_fffef310 & 4U) == 0) {
      return (int)(char)DAT_fffef310;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       (((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee669 != '\x01')) && (0x31 < DAT_fffef105)) ||
        ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee66a != '\x01')) && (0x31 < DAT_fffef106)))))) {
      DAT_fffef0eb = DAT_fffef0eb | 0x10;
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee669 == '\x01')) {
      DAT_fffef105 = 0;
    }
    else {
      DAT_fffef105 = FUN_0000152c(DAT_fffef105 + 1);
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee66a == '\x01')) {
      DAT_fffef106 = 0;
    }
    else {
      DAT_fffef106 = FUN_0000152c(DAT_fffef106 + 1);
    }
    if (DAT_fffee669 == '\x01') {
      DAT_fffef100 = DAT_fffef100 | 4;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       (((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef100 & 4) != 0)) &&
         (DAT_fffeed5d == DAT_fffef101)) && (199 < DAT_fffef104)))) {
      DAT_fffef0eb = DAT_fffef0eb | 0x20;
    }
    uVar1 = (uint)(char)DAT_fffef3e1;
    if ((((uVar1 & 0x20) == 0) || (uVar1 = (uint)(char)DAT_fffef100, (uVar1 & 4) == 0)) ||
       (DAT_fffeed5d != DAT_fffef101)) {
      DAT_fffef104 = 0;
    }
    else {
      uVar1 = FUN_0000152c(DAT_fffef104 + 1);
      DAT_fffef104 = (byte)uVar1;
    }
  }
  else {
    if ((((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
         ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee664 != '\x01')) && (0x31 < DAT_fffef105)))) ||
        ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee665 != '\x01')) && (0x31 < DAT_fffef106)))) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee666 != '\x01')) && (0x31 < DAT_fffef107)))) {
      DAT_fffef0eb = DAT_fffef0eb | 0x10;
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee664 == '\x01')) {
      DAT_fffef105 = 0;
    }
    else {
      DAT_fffef105 = FUN_0000152c(DAT_fffef105 + 1);
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee665 == '\x01')) {
      DAT_fffef106 = 0;
    }
    else {
      DAT_fffef106 = FUN_0000152c(DAT_fffef106 + 1);
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee666 == '\x01')) {
      DAT_fffef107 = 0;
    }
    else {
      DAT_fffef107 = FUN_0000152c(DAT_fffef107 + 1);
    }
    if (DAT_fffee664 == '\x01') {
      DAT_fffef100 = DAT_fffef100 | 1;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       (((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef100 & 1) != 0)) &&
         (DAT_fffeed5d == DAT_fffef101)) && (199 < DAT_fffef102)))) {
      DAT_fffef0eb = DAT_fffef0eb | 0x20;
    }
    uVar1 = (uint)(char)DAT_fffef3e1;
    if ((((uVar1 & 0x20) == 0) || (uVar1 = (uint)(char)DAT_fffef100, (uVar1 & 1) == 0)) ||
       (DAT_fffeed5d != DAT_fffef101)) {
      DAT_fffef102 = 0;
    }
    else {
      uVar1 = FUN_0000152c(DAT_fffef102 + 1);
      DAT_fffef102 = (byte)uVar1;
    }
  }
  DAT_fffef101 = DAT_fffeed5d;
  return uVar1;
}

