
uint FUN_000481ac(void)

{
  uint uVar1;
  
  if ((DAT_fffef310 & 8) == 0) {
    if ((DAT_fffef310 & 0x10) != 0) {
      if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
         ((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffee66c == '\0' || (DAT_fffee66c == '\x02')))) &&
          (0x31 < DAT_fffef2e2)))) {
        DAT_fffef2d0 = DAT_fffef2d0 | 1;
      }
      if (((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffee66c != '\0' && (DAT_fffee66c != '\x02')))) {
        DAT_fffef2e2 = 0;
      }
      else {
        DAT_fffef2e2 = FUN_0000152c(DAT_fffef2e2 + 1);
      }
      if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
         (((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef2de & 2) != 0)) && (DAT_fffee66c == '\x03'))
          && (199 < DAT_fffef2e0)))) {
        DAT_fffef2d0 = DAT_fffef2d0 | 2;
      }
      uVar1 = (uint)(char)DAT_fffef3e1;
      if ((((uVar1 & 0x20) != 0) && (uVar1 = (uint)(char)DAT_fffef2de, (uVar1 & 2) != 0)) &&
         (uVar1 = (uint)DAT_fffee66c, uVar1 == 3)) {
        uVar1 = FUN_0000152c(DAT_fffef2e0 + 1);
        DAT_fffef2e0 = (char)uVar1;
        return uVar1;
      }
      DAT_fffef2e0 = 0;
      return uVar1;
    }
    if (((int)(char)DAT_fffef310 & 4U) == 0) {
      return (int)(char)DAT_fffef310;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee66d != '\x01')) && (0x31 < DAT_fffef2e2)))) {
      DAT_fffef2d0 = DAT_fffef2d0 | 1;
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee66d == '\x01')) {
      DAT_fffef2e2 = 0;
    }
    else {
      DAT_fffef2e2 = FUN_0000152c(DAT_fffef2e2 + 1);
    }
    if (DAT_fffee66d == '\x01') {
      DAT_fffef2de = DAT_fffef2de | 4;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       (((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef2de & 4) != 0)) &&
         (DAT_fffeed62 == DAT_fffef2df)) && (199 < DAT_fffef2e1)))) {
      DAT_fffef2d0 = DAT_fffef2d0 | 2;
    }
    uVar1 = (uint)(char)DAT_fffef3e1;
    if ((((uVar1 & 0x20) == 0) || (uVar1 = (uint)(char)DAT_fffef2de, (uVar1 & 4) == 0)) ||
       (DAT_fffeed62 != DAT_fffef2df)) {
      DAT_fffef2e1 = 0;
    }
    else {
      uVar1 = FUN_0000152c(DAT_fffef2e1 + 1);
      DAT_fffef2e1 = (byte)uVar1;
    }
  }
  else {
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee673 != '\x01')) && (0x31 < DAT_fffef2e2)))) {
      DAT_fffef2d0 = DAT_fffef2d0 | 1;
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee673 == '\x01')) {
      DAT_fffef2e2 = 0;
    }
    else {
      DAT_fffef2e2 = FUN_0000152c(DAT_fffef2e2 + 1);
    }
    if (DAT_fffee673 == '\x01') {
      DAT_fffef2de = DAT_fffef2de | 1;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef2de & 1) != 0)) &&
        ((DAT_fffeed62 == DAT_fffef2df && (199 < DAT_fffef3a5)))))) {
      DAT_fffef2d0 = DAT_fffef2d0 | 2;
    }
    uVar1 = (uint)(char)DAT_fffef3e1;
    if ((((uVar1 & 0x20) == 0) || (uVar1 = (uint)(char)DAT_fffef2de, (uVar1 & 1) == 0)) ||
       (DAT_fffeed62 != DAT_fffef2df)) {
      DAT_fffef3a5 = 0;
    }
    else {
      uVar1 = FUN_0000152c(DAT_fffef3a5 + 1);
      DAT_fffef3a5 = (byte)uVar1;
    }
  }
  DAT_fffef2df = DAT_fffeed62;
  return uVar1;
}

