
uint FUN_00046f74(void)

{
  uint uVar1;
  
  if ((DAT_fffef310 & 8) == 0) {
    if ((DAT_fffef310 & 0x10) != 0) {
      if ((((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
           (((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffee654 == '\0' || (DAT_fffee654 == '\x02'))))
             && (0x31 < DAT_fffef0f2)) ||
            (((DAT_fffef3e1 & 0x20) != 0 &&
             (((DAT_fffee655 == '\0' || (DAT_fffee655 == '\x02')) && (0x31 < DAT_fffef0f3)))))))) ||
          (((DAT_fffef3e1 & 0x20) != 0 &&
           (((DAT_fffee656 == '\0' || (DAT_fffee656 == '\x02')) && (0x31 < DAT_fffef0f4)))))) ||
         (((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffee657 == '\0' || (DAT_fffee657 == '\x02')))) &&
           (0x31 < DAT_fffef0f5)) ||
          (((DAT_fffef3e1 & 0x20) != 0 &&
           (((DAT_fffee653 == '\0' || (DAT_fffee653 == '\x02')) && (0x31 < DAT_fffef0f6)))))))) {
        DAT_fffef0eb = DAT_fffef0eb | 1;
      }
      if (((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffee654 != '\0' && (DAT_fffee654 != '\x02')))) {
        DAT_fffef0f2 = 0;
      }
      else {
        DAT_fffef0f2 = FUN_0000152c(DAT_fffef0f2 + 1);
      }
      if (((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffee655 != '\0' && (DAT_fffee655 != '\x02')))) {
        DAT_fffef0f3 = 0;
      }
      else {
        DAT_fffef0f3 = FUN_0000152c(DAT_fffef0f3 + 1);
      }
      if (((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffee656 != '\0' && (DAT_fffee656 != '\x02')))) {
        DAT_fffef0f4 = 0;
      }
      else {
        DAT_fffef0f4 = FUN_0000152c(DAT_fffef0f4 + 1);
      }
      if (((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffee657 != '\0' && (DAT_fffee657 != '\x02')))) {
        DAT_fffef0f5 = 0;
      }
      else {
        DAT_fffef0f5 = FUN_0000152c(DAT_fffef0f5 + 1);
      }
      if (((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffee653 != '\0' && (DAT_fffee653 != '\x02')))) {
        DAT_fffef0f6 = 0;
      }
      else {
        DAT_fffef0f6 = FUN_0000152c(DAT_fffef0f6 + 1);
      }
      if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
         (((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef0ed & 2) != 0)) && (DAT_fffee656 == '\x03'))
          && (199 < DAT_fffef0f0)))) {
        DAT_fffef0eb = DAT_fffef0eb | 2;
      }
      uVar1 = (uint)(char)DAT_fffef3e1;
      if ((((uVar1 & 0x20) != 0) && (uVar1 = (uint)(char)DAT_fffef0ed, (uVar1 & 2) != 0)) &&
         (uVar1 = (uint)DAT_fffee656, uVar1 == 3)) {
        uVar1 = FUN_0000152c(DAT_fffef0f0 + 1);
        DAT_fffef0f0 = (char)uVar1;
        return uVar1;
      }
      DAT_fffef0f0 = 0;
      return uVar1;
    }
    if (((int)(char)DAT_fffef310 & 4U) == 0) {
      return (int)(char)DAT_fffef310;
    }
    if (((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
        (((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee658 != '\x01')) && (0x31 < DAT_fffef0f2)) ||
         ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee659 != '\x01')) && (0x31 < DAT_fffef0f3)))))) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee65a != '\x01')) && (0x31 < DAT_fffef0f4)))) {
      DAT_fffef0eb = DAT_fffef0eb | 1;
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee658 == '\x01')) {
      DAT_fffef0f2 = 0;
    }
    else {
      DAT_fffef0f2 = FUN_0000152c(DAT_fffef0f2 + 1);
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee659 == '\x01')) {
      DAT_fffef0f3 = 0;
    }
    else {
      DAT_fffef0f3 = FUN_0000152c(DAT_fffef0f3 + 1);
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee65a == '\x01')) {
      DAT_fffef0f4 = 0;
    }
    else {
      DAT_fffef0f4 = FUN_0000152c(DAT_fffef0f4 + 1);
    }
    if (DAT_fffee659 == '\x01') {
      DAT_fffef0ed = DAT_fffef0ed | 4;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       (((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef0ed & 4) != 0)) &&
         (DAT_fffeed51 == DAT_fffef0ee)) && (199 < DAT_fffef0f1)))) {
      DAT_fffef0eb = DAT_fffef0eb | 2;
    }
    uVar1 = (uint)(char)DAT_fffef3e1;
    if ((((uVar1 & 0x20) == 0) || (uVar1 = (uint)(char)DAT_fffef0ed, (uVar1 & 4) == 0)) ||
       (DAT_fffeed51 != DAT_fffef0ee)) {
      DAT_fffef0f1 = 0;
    }
    else {
      uVar1 = FUN_0000152c(DAT_fffef0f1 + 1);
      DAT_fffef0f1 = (byte)uVar1;
    }
  }
  else {
    if ((((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
         ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee650 != '\x01')) && (0x31 < DAT_fffef0f2)))) ||
        ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee651 != '\x01')) && (0x31 < DAT_fffef0f3)))) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee652 != '\x01')) && (0x31 < DAT_fffef0f4)))) {
      DAT_fffef0eb = DAT_fffef0eb | 1;
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee650 == '\x01')) {
      DAT_fffef0f2 = 0;
    }
    else {
      DAT_fffef0f2 = FUN_0000152c(DAT_fffef0f2 + 1);
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee651 == '\x01')) {
      DAT_fffef0f3 = 0;
    }
    else {
      DAT_fffef0f3 = FUN_0000152c(DAT_fffef0f3 + 1);
    }
    if (((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee652 == '\x01')) {
      DAT_fffef0f4 = 0;
    }
    else {
      DAT_fffef0f4 = FUN_0000152c(DAT_fffef0f4 + 1);
    }
    if (DAT_fffee651 == '\x01') {
      DAT_fffef0ed = DAT_fffef0ed | 1;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       (((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef0ed & 1) != 0)) &&
         (DAT_fffeed51 == DAT_fffef0ee)) && (199 < DAT_fffef0ef)))) {
      DAT_fffef0eb = DAT_fffef0eb | 2;
    }
    uVar1 = (uint)(char)DAT_fffef3e1;
    if ((((uVar1 & 0x20) == 0) || (uVar1 = (uint)(char)DAT_fffef0ed, (uVar1 & 1) == 0)) ||
       (DAT_fffeed51 != DAT_fffef0ee)) {
      DAT_fffef0ef = 0;
    }
    else {
      uVar1 = FUN_0000152c(DAT_fffef0ef + 1);
      DAT_fffef0ef = (byte)uVar1;
    }
  }
  DAT_fffef0ee = DAT_fffeed51;
  return uVar1;
}

