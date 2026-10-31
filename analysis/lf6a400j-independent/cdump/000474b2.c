
/* WARNING: Removing unreachable block (ram,0x00047798) */

uint FUN_000474b2(void)

{
  uint uVar1;
  
  if ((DAT_fffef310 & 8) == 0) {
    if ((DAT_fffef310 & 0x10) != 0) {
      if ((((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
           (((((DAT_fffef3e1 & 0x20) != 0 && (((int)DAT_fffee710 & 0x80U) == 0)) &&
             ((DAT_fffee65d == '\0' || (DAT_fffee65d == '\x02')))) && (0x31 < DAT_fffef0fc)))) ||
          ((((DAT_fffef3e1 & 0x20) != 0 && (((int)DAT_fffee710 & 0x80U) == 0)) &&
           (((DAT_fffee65e == '\0' || (DAT_fffee65e == '\x02')) && (0x31 < DAT_fffef0fd)))))) ||
         (((((DAT_fffef3e1 & 0x20) != 0 && (((int)DAT_fffee710 & 0x80U) == 0)) &&
           ((DAT_fffee660 == '\0' || (DAT_fffee660 == '\x02')))) && (0x31 < DAT_fffef0ff)))) {
        DAT_fffeffe7 = DAT_fffeffe7 | 0x80;
      }
      if ((((DAT_fffef3e1 & 0x20) == 0) || (((int)DAT_fffee710 & 0x80U) != 0)) ||
         ((DAT_fffee65d != '\0' && (DAT_fffee65d != '\x02')))) {
        DAT_fffef0fc = 0;
      }
      else {
        DAT_fffef0fc = FUN_0000152c(DAT_fffef0fc + 1);
      }
      if ((((DAT_fffef3e1 & 0x20) == 0) || (((int)DAT_fffee710 & 0x80U) != 0)) ||
         ((DAT_fffee65e != '\0' && (DAT_fffee65e != '\x02')))) {
        DAT_fffef0fd = 0;
      }
      else {
        DAT_fffef0fd = FUN_0000152c(DAT_fffef0fd + 1);
      }
      DAT_fffef0fe = 0;
      if ((((DAT_fffef3e1 & 0x20) == 0) || (((int)DAT_fffee710 & 0x80U) != 0)) ||
         ((DAT_fffee660 != '\0' && (DAT_fffee660 != '\x02')))) {
        DAT_fffef0ff = 0;
      }
      else {
        DAT_fffef0ff = FUN_0000152c(DAT_fffef0ff + 1);
      }
      if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
         (((((DAT_fffef3e1 & 0x20) != 0 && (((int)DAT_fffee710 & 0x80U) == 0)) &&
           ((DAT_fffef0f7 & 2) != 0)) && ((DAT_fffee65d == '\x03' && (199 < DAT_fffef0fa)))))) {
        DAT_fffeffe7 = DAT_fffeffe7 | 0x40;
      }
      uVar1 = (uint)(char)DAT_fffef3e1;
      if ((((uVar1 & 0x20) != 0) && (uVar1 = (uint)DAT_fffee710, (uVar1 & 0x80) == 0)) &&
         ((uVar1 = (uint)(char)DAT_fffef0f7, (uVar1 & 2) != 0 &&
          (uVar1 = (uint)DAT_fffee65d, uVar1 == 3)))) {
        uVar1 = FUN_0000152c(DAT_fffef0fa + 1);
        DAT_fffef0fa = (char)uVar1;
        return uVar1;
      }
      DAT_fffef0fa = 0;
      return uVar1;
    }
    if (((int)(char)DAT_fffef310 & 4U) == 0) {
      return (int)(char)DAT_fffef310;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       ((((((DAT_fffef3e1 & 0x20) != 0 && (((int)DAT_fffee710 & 0x80U) == 0)) &&
          (DAT_fffee661 != '\x01')) && (0x31 < DAT_fffef0fc)) ||
        (((((DAT_fffef3e1 & 0x20) != 0 && (((int)DAT_fffee710 & 0x80U) == 0)) &&
          ((DAT_fffee662 != '\x01' && (0x31 < DAT_fffef0fd)))) ||
         (((((DAT_fffef3e1 & 0x20) != 0 && (((int)DAT_fffee710 & 0x80U) == 0)) &&
           (DAT_fffee663 != '\x01')) && (0x31 < DAT_fffef0fe)))))))) {
      DAT_fffeffe7 = DAT_fffeffe7 | 0x80;
    }
    if ((((DAT_fffef3e1 & 0x20) == 0) || (((int)DAT_fffee710 & 0x80U) != 0)) ||
       (DAT_fffee661 == '\x01')) {
      DAT_fffef0fc = 0;
    }
    else {
      DAT_fffef0fc = FUN_0000152c(DAT_fffef0fc + 1);
    }
    if ((((DAT_fffef3e1 & 0x20) == 0) || (((int)DAT_fffee710 & 0x80U) != 0)) ||
       (DAT_fffee662 == '\x01')) {
      DAT_fffef0fd = 0;
    }
    else {
      DAT_fffef0fd = FUN_0000152c(DAT_fffef0fd + 1);
    }
    if ((((DAT_fffef3e1 & 0x20) == 0) || (((int)DAT_fffee710 & 0x80U) != 0)) ||
       (DAT_fffee663 == '\x01')) {
      DAT_fffef0fe = 0;
    }
    else {
      DAT_fffef0fe = FUN_0000152c(DAT_fffef0fe + 1);
    }
    if (DAT_fffee662 == '\x01') {
      DAT_fffef0f7 = DAT_fffef0f7 | 4;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       (((((DAT_fffef3e1 & 0x20) != 0 && (((int)DAT_fffee710 & 0x80U) == 0)) &&
         ((DAT_fffef0f7 & 4) != 0)) && ((DAT_fffeed45 == DAT_fffef0f8 && (199 < DAT_fffef0fb)))))) {
      DAT_fffeffe7 = DAT_fffeffe7 | 0x40;
    }
    uVar1 = (uint)(char)DAT_fffef3e1;
    if ((((uVar1 & 0x20) == 0) || (uVar1 = (uint)DAT_fffee710, (uVar1 & 0x80) != 0)) ||
       ((uVar1 = (uint)(char)DAT_fffef0f7, (uVar1 & 4) == 0 || (DAT_fffeed45 != DAT_fffef0f8)))) {
      DAT_fffef0fb = 0;
    }
    else {
      uVar1 = FUN_0000152c(DAT_fffef0fb + 1);
      DAT_fffef0fb = (byte)uVar1;
    }
  }
  else {
    if (((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
        (((((DAT_fffef3e1 & 0x20) != 0 && (((int)DAT_fffee710 & 0x80U) == 0)) &&
          (DAT_fffee65b != '\x01')) && (0x31 < DAT_fffef0fc)))) ||
       (((((DAT_fffef3e1 & 0x20) != 0 && (((int)DAT_fffee710 & 0x80U) == 0)) &&
         (DAT_fffee65c != '\x01')) && (0x31 < DAT_fffef0fd)))) {
      DAT_fffeffe7 = DAT_fffeffe7 | 0x80;
    }
    if ((((DAT_fffef3e1 & 0x20) == 0) || (((int)DAT_fffee710 & 0x80U) != 0)) ||
       (DAT_fffee65b == '\x01')) {
      DAT_fffef0fc = 0;
    }
    else {
      DAT_fffef0fc = FUN_0000152c(DAT_fffef0fc + 1);
    }
    if ((((DAT_fffef3e1 & 0x20) == 0) || (((int)DAT_fffee710 & 0x80U) != 0)) ||
       (DAT_fffee65c == '\x01')) {
      DAT_fffef0fd = 0;
    }
    else {
      DAT_fffef0fd = FUN_0000152c(DAT_fffef0fd + 1);
    }
    if (DAT_fffee65b == '\x01') {
      DAT_fffef0f7 = DAT_fffef0f7 | 1;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && (((int)DAT_fffee710 & 0x80U) == 0)) &&
        (((DAT_fffef0f7 & 1) != 0 && ((DAT_fffeed45 == DAT_fffef0f8 && (199 < DAT_fffef0f9)))))))) {
      DAT_fffeffe7 = DAT_fffeffe7 | 0x40;
    }
    uVar1 = (uint)(char)DAT_fffef3e1;
    if (((((uVar1 & 0x20) == 0) || (uVar1 = (uint)DAT_fffee710, (uVar1 & 0x80) != 0)) ||
        (uVar1 = (uint)(char)DAT_fffef0f7, (uVar1 & 1) == 0)) || (DAT_fffeed45 != DAT_fffef0f8)) {
      DAT_fffef0f9 = 0;
    }
    else {
      uVar1 = FUN_0000152c(DAT_fffef0f9 + 1);
      DAT_fffef0f9 = (byte)uVar1;
    }
  }
  DAT_fffef0f8 = DAT_fffeed45;
  return uVar1;
}

