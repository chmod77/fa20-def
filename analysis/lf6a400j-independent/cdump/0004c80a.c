
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004c80a(void)

{
  ushort uVar1;
  
  uVar1 = (ushort)DAT_ffff04fa << 1;
  if (((int)(char)DAT_fffef499 & 0x80U) == 0) {
    DAT_fffef4c4 = '\0';
  }
  else if (((((uVar1 == _DAT_fffeeeb4) && (DAT_fffef4c5 == '\a')) && (0x18 < DAT_fffef4c6)) &&
           ((_DAT_fffeeeb4 == 0 && (((int)(char)DAT_fffef499 & 0x80U) != 0)))) ||
          ((DAT_fffef4c5 == '\x04' && (DAT_fffef4c6 < 0x1b)))) {
    DAT_fffef4c4 = '\x04';
    DAT_fffef499 = DAT_fffef499 | 0x40;
  }
  else if ((((DAT_fffef4c6 < 0x1b) || (DAT_fffef4c5 != '\x04')) &&
           ((0x1f < DAT_fffef4c6 || (DAT_fffef4c5 != '\x05')))) &&
          ((_DAT_fffeeeb4 < uVar1 || (DAT_fffef4c5 != '\x05')))) {
    if ((_DAT_fffeeeb4 < uVar1) && ((0x1f < DAT_fffef4c6 && (DAT_fffef4c5 == '\x05')))) {
      DAT_fffef4c4 = '\x06';
      DAT_fffef499 = DAT_fffef499 & 0xbf;
    }
    else {
      if (uVar1 < _DAT_fffeeeb4) {
        if (DAT_fffef4c5 != '\x02') {
          DAT_fffef4c4 = '\x01';
          goto LAB_0004c952;
        }
      }
      else if (_DAT_fffeeeb4 < uVar1) {
        if (DAT_fffef4c5 != '\x01') {
          DAT_fffef4c4 = '\x02';
          goto LAB_0004c952;
        }
      }
      else {
        if ((DAT_fffef4c5 == '\x04') || (DAT_fffef4c5 == '\x05')) goto LAB_0004c952;
        if ((DAT_fffef4c5 != '\x01') && (DAT_fffef4c5 != '\x02')) {
          DAT_fffef4c4 = '\a';
          goto LAB_0004c952;
        }
      }
      DAT_fffef4c4 = '\x03';
    }
  }
  else {
    DAT_fffef4c4 = '\x05';
  }
LAB_0004c952:
  if ((((DAT_fffef4c4 == '\a') || (DAT_fffef4c4 == '\x03')) || (DAT_fffef4c4 == '\x04')) ||
     (DAT_fffef4c4 == '\x05')) {
    DAT_fffef4c6 = FUN_0000152c(DAT_fffef4c6 + 1);
  }
  else {
    DAT_fffef4c6 = 0;
  }
  if ((DAT_fffef4c4 == '\x04') || (DAT_fffef4c4 == '\x05')) {
    _DAT_fffeeeb4 = 0;
    _DAT_fffef4c8 = 1;
  }
  else {
    if (_DAT_fffef4ca == 1) {
      _DAT_fffeeeb4 = 0;
    }
    else {
      _DAT_fffeeeb4 = _DAT_fffef4ca;
    }
    _DAT_fffef4c8 = (ushort)DAT_ffff04fa << 1;
  }
  DAT_fffef4c5 = DAT_fffef4c4;
  return;
}

