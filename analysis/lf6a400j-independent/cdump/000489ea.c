
uint FUN_000489ea(void)

{
  uint uVar1;
  
  if ((DAT_fffef310 & 8) == 0) {
    uVar1 = (uint)(char)DAT_fffef310;
    if ((uVar1 & 0x10) != 0) {
      if (((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
          ((((DAT_fffef3e1 & 0x20) != 0 &&
            (((DAT_fffee66f == '\0' || (DAT_fffee66f == '\x02')) && ((DAT_ffff056f & 0x10) != 0))))
           && (0x31 < DAT_fffef413)))) ||
         (((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffee670 == '\0' || (DAT_fffee670 == '\x02')))) &&
           ((DAT_ffff056f & 0x10) != 0)) && (0x31 < DAT_fffef414)))) {
        DAT_fffef2d0 = DAT_fffef2d0 | 0x10;
      }
      if ((((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffee66f != '\0' && (DAT_fffee66f != '\x02')))) ||
         ((DAT_ffff056f & 0x10) == 0)) {
        DAT_fffef413 = 0;
      }
      else {
        DAT_fffef413 = FUN_0000152c(DAT_fffef413 + 1);
      }
      if (((DAT_fffef3e1 & 0x20) == 0) ||
         (((DAT_fffee670 != '\0' && (DAT_fffee670 != '\x02')) || ((DAT_ffff056f & 0x10) == 0)))) {
        DAT_fffef414 = 0;
      }
      else {
        DAT_fffef414 = FUN_0000152c(DAT_fffef414 + 1);
      }
      if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
         ((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef40b & 1) != 0)) &&
          ((DAT_fffee670 == '\x03' && (((DAT_ffff056f & 0x10) != 0 && (199 < DAT_fffef416)))))))) {
        DAT_fffef2d0 = DAT_fffef2d0 | 0x20;
      }
      uVar1 = (uint)(char)DAT_fffef3e1;
      if (((((uVar1 & 0x20) == 0) || (uVar1 = (uint)(char)DAT_fffef40b, (uVar1 & 1) == 0)) ||
          (uVar1 = (uint)DAT_fffee670, uVar1 != 3)) ||
         (uVar1 = (uint)(char)DAT_ffff056f, (uVar1 & 0x10) == 0)) {
        DAT_fffef416 = 0;
      }
      else {
        uVar1 = FUN_0000152c(DAT_fffef416 + 1);
        DAT_fffef416 = (byte)uVar1;
      }
    }
  }
  else {
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       (((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee675 != '\x01')) &&
         (((DAT_ffff056f & 0x10) != 0 && (0x31 < DAT_fffef413)))) ||
        (((((DAT_fffef3e1 & 0x20) != 0 && (DAT_fffee676 != '\x01')) && ((DAT_ffff056f & 0x10) != 0))
         && (0x31 < DAT_fffef414)))))) {
      DAT_fffef2d0 = DAT_fffef2d0 | 0x10;
    }
    if ((((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee675 == '\x01')) || ((DAT_ffff056f & 0x10) == 0))
    {
      DAT_fffef413 = 0;
    }
    else {
      DAT_fffef413 = FUN_0000152c(DAT_fffef413 + 1);
    }
    if ((((DAT_fffef3e1 & 0x20) == 0) || (DAT_fffee676 == '\x01')) || ((DAT_ffff056f & 0x10) == 0))
    {
      DAT_fffef414 = 0;
    }
    else {
      DAT_fffef414 = FUN_0000152c(DAT_fffef414 + 1);
    }
    if (DAT_fffee676 == '\x01') {
      DAT_fffef40b = DAT_fffef40b | 2;
    }
    if ((((int)(char)DAT_fffef3e1 & 0x80U) != 0) ||
       ((((DAT_fffef3e1 & 0x20) != 0 && ((DAT_fffef40b & 2) != 0)) &&
        ((DAT_fffef08b == DAT_fffef410 && (((DAT_ffff056f & 0x10) != 0 && (199 < DAT_fffefefb)))))))
       ) {
      DAT_fffef2d0 = DAT_fffef2d0 | 0x20;
    }
    uVar1 = (uint)(char)DAT_fffef3e1;
    if (((((uVar1 & 0x20) == 0) || (uVar1 = (uint)(char)DAT_fffef40b, (uVar1 & 2) == 0)) ||
        (DAT_fffef08b != DAT_fffef410)) || (uVar1 = (uint)(char)DAT_ffff056f, (uVar1 & 0x10) == 0))
    {
      DAT_fffefefb = 0;
    }
    else {
      uVar1 = FUN_0000152c(DAT_fffefefb + 1);
      DAT_fffefefb = (byte)uVar1;
    }
    DAT_fffef410 = DAT_fffef08b;
  }
  return uVar1;
}

