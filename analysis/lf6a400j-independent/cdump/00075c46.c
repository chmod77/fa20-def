
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00075c46(void)

{
  bool bVar1;
  char cStack_8;
  char cStack_7;
  char cStack_6;
  char cStack_5;
  
  if (((DAT_ffff6793 == 1) || (DAT_ffff6793 == 3)) || (DAT_ffff6793 == 5)) {
    if (_DAT_ffff7b96 != 2) {
      _DAT_ffff7b98 = 3;
      DAT_ffff6b93 = 0x13;
      DAT_ffff6b92 = 0x27;
      DAT_ffff6b91 = 0x7f;
      return 0x13;
    }
    if (DAT_ffff8574 == 0) {
      func_0x00075f66(DAT_ffff6793 == 1);
      if (DAT_ffff6793 == 1) {
        DAT_ffff6b93 = uRamffffab9e;
        DAT_ffff6b94 = uRamffffab9f;
        DAT_ffff6b95 = uRamffffaba0;
      }
      else {
        if (DAT_ffff6793 != 3) {
          if (DAT_ffff6793 == 5) {
            DAT_ffff6b93 = uRamffffaba1;
            DAT_ffff6b94 = uRamffffab9f;
            DAT_ffff6b95 = uRamffffab9e;
            DAT_ffff6b96 = uRamffffaba0;
          }
          goto LAB_00075f24;
        }
        DAT_ffff6b93 = uRamffffab9f;
        DAT_ffff6b94 = uRamffffaba0;
        DAT_ffff6b95 = uRamffffab9e;
      }
      DAT_ffff6b96 = uRamffffaba1;
    }
    else {
      if (DAT_ffff8574 != DAT_ffff6793) {
        DAT_ffff6b91 = 0x7f;
        DAT_ffff6b92 = 0x27;
        DAT_ffff6b93 = 0x7f;
        _DAT_ffff7b98 = 3;
        return 0x7f;
      }
      DAT_ffff6b93 = 0;
      DAT_ffff6b94 = 0;
      DAT_ffff6b95 = 0;
      DAT_ffff6b96 = 0;
    }
LAB_00075f24:
    DAT_ffff6b91 = 0x67;
    DAT_ffff6b92 = DAT_ffff6793;
    _DAT_ffff7b98 = 6;
    DAT_ffff8575 = DAT_ffff6793;
    return (int)(char)DAT_ffff6793;
  }
  if (((DAT_ffff6793 != 2) && (DAT_ffff6793 != 4)) && (DAT_ffff6793 != 6)) {
    DAT_ffff6b91 = 0x7f;
    DAT_ffff6b92 = 0x27;
    DAT_ffff6b93 = 0x12;
    _DAT_ffff7b98 = 3;
    return 0x12;
  }
  if (_DAT_ffff7b96 != 6) {
    DAT_ffff6b91 = 0x7f;
    DAT_ffff6b92 = 0x27;
    DAT_ffff6b93 = 0x13;
    _DAT_ffff7b98 = 3;
    DAT_ffff8575 = 0;
    return 0x13;
  }
  if ((uint)DAT_ffff6793 != DAT_ffff8575 + 1) {
    DAT_ffff6b91 = 0x7f;
    DAT_ffff6b92 = 0x27;
    DAT_ffff6b93 = 0x24;
    _DAT_ffff7b98 = 3;
    DAT_ffff8575 = 0;
    return 0x24;
  }
  if (2 < DAT_ffff8576) {
    DAT_ffff6b91 = 0x7f;
    DAT_ffff6b92 = 0x27;
    DAT_ffff6b93 = 0x36;
    _DAT_ffff7b98 = 3;
    DAT_ffff8575 = 0;
    return 0x36;
  }
  if (_DAT_ffff857a != 0) {
    DAT_ffff6b91 = 0x7f;
    DAT_ffff6b92 = 0x27;
    DAT_ffff6b93 = 0x37;
    _DAT_ffff7b98 = 3;
    DAT_ffff8575 = 0;
    return 0x37;
  }
  if (DAT_ffff8574 == 0) {
    if (DAT_ffff6793 == 2) {
      cStack_8 = DAT_ffff6794;
      cStack_7 = DAT_ffff6795;
      cStack_6 = DAT_ffff6796;
      cStack_5 = DAT_ffff6797;
    }
    else if (DAT_ffff6793 == 4) {
      cStack_8 = DAT_ffff6797;
      cStack_7 = DAT_ffff6795;
      cStack_6 = DAT_ffff6796;
      cStack_5 = DAT_ffff6794;
    }
    else if (DAT_ffff6793 == 6) {
      cStack_8 = DAT_ffff6795;
      cStack_7 = DAT_ffff6797;
      cStack_6 = DAT_ffff6794;
      cStack_5 = DAT_ffff6796;
    }
    if (((cStack_8 != cRamffffaba2) || (cStack_7 != cRamffffaba3)) ||
       ((cStack_6 != cRamffffaba4 || (cStack_5 != cRamffffaba5)))) {
      bVar1 = false;
      goto LAB_00075d3c;
    }
  }
  bVar1 = true;
LAB_00075d3c:
  if (!bVar1) {
    DAT_ffff6b91 = 0x7f;
    DAT_ffff6b92 = 0x27;
    DAT_ffff6b93 = 0x35;
    _DAT_ffff7b98 = 3;
    DAT_ffff8575 = 0;
    DAT_ffff8576 = DAT_ffff8576 + 1;
    _DAT_ffff857a = 1000;
    return 0x35;
  }
  if (DAT_ffff8575 == 1) {
    DAT_ffff678a = DAT_ffff678a | 0x80;
  }
  else {
    DAT_ffff678a = DAT_ffff678a & 0x7f;
  }
  DAT_ffff6b91 = 0x67;
  DAT_ffff6b92 = DAT_ffff6793;
  _DAT_ffff7b98 = 2;
  DAT_ffff8574 = DAT_ffff8575;
  DAT_ffff8575 = 0;
  return (int)(char)DAT_ffff6793;
}

