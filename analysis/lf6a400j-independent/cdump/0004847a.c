
uint FUN_0004847a(void)

{
  uint uVar1;
  
  if ((DAT_fffef310 & 8) == 0) {
    uVar1 = (uint)(char)DAT_fffef310;
    if ((uVar1 & 0x10) != 0) {
      if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
         (((DAT_fffef3e1 & 0x20) != 0 &&
          (((DAT_fffee66e == '\0' || (DAT_fffee66e == '\x02')) && (0x31 < DAT_fffef2e7)))))) {
        DAT_fffef2d0 = DAT_fffef2d0 | 4;
      }
      if (((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffee66e != '\0' && (DAT_fffee66e != '\x02')))) {
        DAT_fffef2e7 = 0;
      }
      else {
        DAT_fffef2e7 = FUN_0000152c(DAT_fffef2e7 + 1);
      }
      if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
         ((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef2e3 & 2) != 0)) &&
          ((DAT_fffee66e == '\x03' && (199 < DAT_fffef2e6)))))) {
        DAT_fffef2d0 = DAT_fffef2d0 | 8;
      }
      uVar1 = (uint)(char)DAT_fffef3e1;
      if ((((uVar1 & 0x20) != 0) && (uVar1 = (uint)(char)DAT_fffef2e3, (uVar1 & 2) != 0)) &&
         (uVar1 = (uint)DAT_fffee66e, uVar1 == 3)) {
        uVar1 = FUN_0000152c(DAT_fffef2e6 + 1);
        DAT_fffef2e6 = (char)uVar1;
        return uVar1;
      }
      DAT_fffef2e6 = 0;
    }
  }
  else {
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee674 != '\x01')) && (0x31 < DAT_fffef2e7)))) {
      DAT_fffef2d0 = DAT_fffef2d0 | 4;
    }
    uVar1 = (uint)(char)DAT_fffef3e1;
    if (((uVar1 & 0x20) != 0) && (uVar1 = 1, DAT_fffee674 != '\x01')) {
      uVar1 = FUN_0000152c(DAT_fffef2e7 + 1);
      DAT_fffef2e7 = (char)uVar1;
      return uVar1;
    }
    DAT_fffef2e7 = 0;
  }
  return uVar1;
}

