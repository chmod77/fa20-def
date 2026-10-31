
uint FUN_000486b6(void)

{
  uint uVar1;
  
  if ((DAT_fffef310 & 8) == 0) {
    uVar1 = (uint)(char)DAT_fffef310;
    if ((uVar1 & 0x10) != 0) {
      if (DAT_fffef562 == '\0') {
        DAT_fffef564 = 0xff;
        DAT_fffef566 = 0xff;
        DAT_fffef562 = '\x01';
      }
      if ((((int)(char)DAT_fffef3e1 & 0x80U) == 0) &&
         ((((DAT_fffef3e1 & 0x20) == 0 || ((DAT_fffee677 != '\0' && (DAT_fffee677 != '\x02')))) ||
          (DAT_fffef412 < 0x32)))) {
        if (4 < DAT_fffef563) {
          DAT_fffef3ff = DAT_fffef3ff & 0xfe;
        }
      }
      else {
        DAT_fffef3ff = DAT_fffef3ff | 1;
      }
      if (((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffee677 != '\0' && (DAT_fffee677 != '\x02')))) {
        DAT_fffef412 = 0;
      }
      else {
        DAT_fffef412 = FUN_0000152c(DAT_fffef412 + 1);
      }
      if (((int)(char)DAT_fffef3e1 & 0x80U) == 0) {
        if (DAT_fffee677 == '\x01') {
          DAT_fffef563 = FUN_0000152c(DAT_fffef563 + 1);
          DAT_fffef564 = 0;
        }
        else {
          DAT_fffef564 = FUN_0000152c(DAT_fffef564 + 1);
        }
        if (0x13 < DAT_fffef564) {
          DAT_fffef563 = 0;
        }
      }
      else {
        DAT_fffef563 = 0;
        DAT_fffef564 = 0xff;
      }
      if ((((int)(char)DAT_fffef3e1 & 0x80U) == 0) &&
         (((((DAT_fffef3e1 & 0x20) == 0 || ((DAT_fffef40a & 1) == 0)) || (DAT_fffee677 != '\x03'))
          || (DAT_fffef415 < 200)))) {
        if (4 < DAT_fffef565) {
          DAT_fffef3ff = DAT_fffef3ff & 0xfd;
        }
      }
      else {
        DAT_fffef3ff = DAT_fffef3ff | 2;
      }
      if ((((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffef40a & 1) == 0)) || (DAT_fffee677 != '\x03')) {
        DAT_fffef415 = 0;
      }
      else {
        DAT_fffef415 = FUN_0000152c(DAT_fffef415 + 1);
      }
      uVar1 = (uint)(char)DAT_fffef3e1;
      if ((uVar1 & 0x80) == 0) {
        if (DAT_fffee677 == '\x01') {
          DAT_fffef565 = FUN_0000152c(DAT_fffef565 + 1);
          DAT_fffef566 = 0;
        }
        uVar1 = (uint)(char)DAT_fffef40a;
        if (((uVar1 & 1) != 0) && (uVar1 = (uint)DAT_fffee677, uVar1 == 3)) {
          uVar1 = FUN_0000152c(DAT_fffef566 + 1);
          DAT_fffef566 = (byte)uVar1;
        }
        if (0x13 < DAT_fffef566) {
          DAT_fffef565 = 0;
        }
      }
      else {
        DAT_fffef565 = 0;
        DAT_fffef566 = 0xff;
      }
    }
  }
  else {
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee677 != '\x01')) && (0x31 < DAT_fffef412)))) {
      DAT_fffef3ff = DAT_fffef3ff | 1;
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee677 == '\x01')) {
      DAT_fffef412 = 0;
    }
    else {
      DAT_fffef412 = FUN_0000152c(DAT_fffef412 + 1);
    }
    if (DAT_fffee677 == '\x01') {
      DAT_fffef40a = DAT_fffef40a | 1;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef40a & 1) != 0)) &&
        ((DAT_fffef30a == DAT_fffef411 && (199 < DAT_fffef415)))))) {
      DAT_fffef3ff = DAT_fffef3ff | 2;
    }
    uVar1 = (uint)(char)DAT_fffef3e1;
    if ((((uVar1 & 0x20) == 0) || (uVar1 = (uint)(char)DAT_fffef40a, (uVar1 & 1) == 0)) ||
       (DAT_fffef30a != DAT_fffef411)) {
      DAT_fffef415 = 0;
    }
    else {
      uVar1 = FUN_0000152c(DAT_fffef415 + 1);
      DAT_fffef415 = (byte)uVar1;
    }
    DAT_fffef411 = DAT_fffef30a;
  }
  return uVar1;
}

