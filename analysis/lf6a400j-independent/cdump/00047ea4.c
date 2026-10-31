
uint FUN_00047ea4(void)

{
  uint uVar1;
  
  if ((DAT_fffef310 & 8) == 0) {
    uVar1 = (uint)(char)DAT_fffef310;
    if ((uVar1 & 0x10) != 0) {
      if ((((int)(char)DAT_fffef3e1 & 0x80U) == 0) &&
         (((DAT_fffef3e1 & 0x20) == 0 ||
          (((DAT_fffee66b != '\0' && (DAT_fffee66b != '\x02')) || (DAT_fffef2dd < 0x32)))))) {
        if (4 < DAT_fffef40c) {
          DAT_fffef0eb = DAT_fffef0eb & 0xbf;
        }
      }
      else {
        DAT_fffef0eb = DAT_fffef0eb | 0x40;
      }
      if (((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffee66b != '\0' && (DAT_fffee66b != '\x02')))) {
        DAT_fffef2dd = 0;
      }
      else {
        DAT_fffef2dd = FUN_0000152c(DAT_fffef2dd + 1);
      }
      if ((((int)(char)DAT_fffef3e1 & 0x80U) == 0) &&
         ((((DAT_fffef3e1 & 0x20) == 0 || ((DAT_fffef2da & 2) == 0)) ||
          ((DAT_fffee66b != '\x03' || (DAT_fffef2dc < 200)))))) {
        if (4 < DAT_fffef40d) {
          DAT_fffef0eb = DAT_fffef0eb & 0x7f;
        }
      }
      else {
        DAT_fffef0eb = DAT_fffef0eb | 0x80;
      }
      if ((((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffef2da & 2) == 0)) || (DAT_fffee66b != '\x03')) {
        DAT_fffef2dc = 0;
      }
      else {
        DAT_fffef2dc = FUN_0000152c(DAT_fffef2dc + 1);
      }
      if (((int)(char)DAT_fffef3e1 & 0x80U) == 0) {
        if (DAT_fffee66b == '\x01') {
          DAT_fffef40c = FUN_0000152c(DAT_fffef40c + 1);
          DAT_fffef40e = 0;
        }
        else {
          DAT_fffef40e = FUN_0000152c(DAT_fffef40e + 1);
        }
        if (4 < DAT_fffef40e) {
          DAT_fffef40c = 0;
        }
      }
      else {
        DAT_fffef40c = 0;
        DAT_fffef40e = 0xff;
      }
      if (((int)(char)DAT_fffef3e1 & 0x80U) == 0) {
        if (DAT_fffee66b == '\x01') {
          DAT_fffef40d = FUN_0000152c(DAT_fffef40d + 1);
          DAT_fffef40f = 0;
        }
        else if (((DAT_fffef2da & 2) != 0) && (DAT_fffee66b == '\x03')) {
          DAT_fffef40f = FUN_0000152c(DAT_fffef40f + 1);
        }
        if (4 < DAT_fffef40f) {
          DAT_fffef40d = 0;
        }
      }
      else {
        DAT_fffef40d = 0;
        DAT_fffef40f = 0xff;
      }
      if (((((int)(char)DAT_fffef3e1 & 0x80U) == 0) && ((DAT_fffef0eb & 0x40) == 0)) &&
         (((int)(char)DAT_fffef0eb & 0x80U) == 0)) {
        uVar1 = (int)DAT_fffef1d4 & 0x7f;
        DAT_fffef1d4 = (char)uVar1;
      }
      else {
        uVar1 = (int)DAT_fffef1d4 | 0x80;
        DAT_fffef1d4 = (char)uVar1;
      }
    }
  }
  else {
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee671 != '\x01')) && (0x31 < DAT_fffef2dd)))) {
      DAT_fffef0eb = DAT_fffef0eb | 0x40;
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee671 == '\x01')) {
      DAT_fffef2dd = 0;
    }
    else {
      DAT_fffef2dd = FUN_0000152c(DAT_fffef2dd + 1);
    }
    if (DAT_fffee671 == '\x01') {
      DAT_fffef2da = DAT_fffef2da | 1;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef2da & 1) != 0)) &&
        ((DAT_fffef06a == DAT_fffef2db && (199 < DAT_fffef3a4)))))) {
      DAT_fffef0eb = DAT_fffef0eb | 0x80;
    }
    uVar1 = (uint)(char)DAT_fffef3e1;
    if ((((uVar1 & 0x20) == 0) || (uVar1 = (uint)(char)DAT_fffef2da, (uVar1 & 1) == 0)) ||
       (DAT_fffef06a != DAT_fffef2db)) {
      DAT_fffef3a4 = 0;
    }
    else {
      uVar1 = FUN_0000152c(DAT_fffef3a4 + 1);
      DAT_fffef3a4 = (byte)uVar1;
    }
    DAT_fffef2db = DAT_fffef06a;
  }
  return uVar1;
}

