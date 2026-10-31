
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000469ec(void)

{
  if ((((DAT_fffef0ea & 2) == 0) || (DAT_ffff08d0 != '\0')) || (((int)DAT_fffef3e1 & 0x80U) == 0)) {
    if (((DAT_fffef0ea & 1) == 0) || (((int)DAT_fffef3e1 & 0x80U) != 0)) {
      _DAT_fffef8da = 0;
    }
    else {
      if (0xc < _DAT_fffef8da) {
        DAT_fffef8d8 = DAT_fffef8d8 & 0xfe;
        DAT_fffefeb2 = 1;
      }
      _DAT_fffef8da = FUN_00001540(_DAT_fffef8da + 1);
    }
  }
  else {
    DAT_fffef8d8 = DAT_fffef8d8 | 1;
    _DAT_fffef8da = 0;
    DAT_fffefeb2 = 1;
  }
  if ((((DAT_fffef0ea & 2) == 0) || (DAT_ffff08d9 != '\0')) ||
     (((DAT_fffef0eb & 1) == 0 || (((int)DAT_fffef3e1 & 0x80U) != 0)))) {
    if (((DAT_fffef0ea & 1) == 0) || ((DAT_fffef0eb & 1) != 0)) {
      _DAT_fffef8dc = 0;
    }
    else {
      if (0xc < _DAT_fffef8dc) {
        DAT_fffef8d9 = DAT_fffef8d9 & 0xfe;
        DAT_fffefeb3 = 1;
      }
      _DAT_fffef8dc = FUN_00001540(_DAT_fffef8dc + 1);
    }
  }
  else {
    DAT_fffef8d9 = DAT_fffef8d9 | 1;
    _DAT_fffef8dc = 0;
    DAT_fffefeb3 = 1;
  }
  if (((((DAT_fffef0ea & 2) == 0) || (DAT_ffff08d8 != '\0')) || ((DAT_fffef0eb & 2) == 0)) ||
     (((int)DAT_fffef3e1 & 0x80U) != 0)) {
    if (((DAT_fffef0ea & 1) == 0) || ((DAT_fffef0eb & 2) != 0)) {
      _DAT_fffef8de = 0;
    }
    else {
      if (0xc < _DAT_fffef8de) {
        DAT_fffef8d9 = DAT_fffef8d9 & 0xfd;
        DAT_fffefeb4 = 1;
      }
      _DAT_fffef8de = FUN_00001540(_DAT_fffef8de + 1);
    }
  }
  else {
    DAT_fffef8d9 = DAT_fffef8d9 | 2;
    _DAT_fffef8de = 0;
    DAT_fffefeb4 = 1;
  }
  if ((((DAT_fffef0ea & 2) == 0) || (DAT_ffff08d4 != '\0')) ||
     ((((int)(char)DAT_fffeffe7 & 0x80U) == 0 || (((int)DAT_fffef3e1 & 0x80U) != 0)))) {
    if (((DAT_fffef0ea & 1) == 0) || (((int)(char)DAT_fffeffe7 & 0x80U) != 0)) {
      _DAT_fffef8e0 = 0;
    }
    else {
      if (0xc < _DAT_fffef8e0) {
        DAT_fffef8d9 = DAT_fffef8d9 & 0xfb;
        DAT_fffefeb5 = 1;
      }
      _DAT_fffef8e0 = FUN_00001540(_DAT_fffef8e0 + 1);
    }
  }
  else {
    DAT_fffef8d9 = DAT_fffef8d9 | 4;
    _DAT_fffef8e0 = 0;
    DAT_fffefeb5 = 1;
  }
  if (((((DAT_fffef0ea & 2) == 0) || (DAT_ffff08d5 != '\0')) || ((DAT_fffeffe7 & 0x40) == 0)) ||
     (((int)DAT_fffef3e1 & 0x80U) != 0)) {
    if (((DAT_fffef0ea & 1) == 0) || ((DAT_fffeffe7 & 0x40) != 0)) {
      _DAT_fffef8e2 = 0;
    }
    else {
      if (0xc < _DAT_fffef8e2) {
        DAT_fffef8d9 = DAT_fffef8d9 & 0xf7;
        DAT_fffefeb6 = 1;
      }
      _DAT_fffef8e2 = FUN_00001540(_DAT_fffef8e2 + 1);
    }
  }
  else {
    DAT_fffef8d9 = DAT_fffef8d9 | 8;
    _DAT_fffef8e2 = 0;
    DAT_fffefeb6 = 1;
  }
  if ((((DAT_fffef0ea & 2) == 0) || (DAT_ffff08d7 != '\0')) ||
     (((DAT_fffef0eb & 0x10) == 0 || (((int)DAT_fffef3e1 & 0x80U) != 0)))) {
    if (((DAT_fffef0ea & 1) == 0) || ((DAT_fffef0eb & 0x10) != 0)) {
      _DAT_fffef8e4 = 0;
    }
    else {
      if (0xc < _DAT_fffef8e4) {
        DAT_fffef8d9 = DAT_fffef8d9 & 0xef;
        DAT_fffefeb7 = 1;
      }
      _DAT_fffef8e4 = FUN_00001540(_DAT_fffef8e4 + 1);
    }
  }
  else {
    DAT_fffef8d9 = DAT_fffef8d9 | 0x10;
    _DAT_fffef8e4 = 0;
    DAT_fffefeb7 = 1;
  }
  if (((((DAT_fffef0ea & 2) == 0) || (DAT_ffff08d6 != '\0')) || ((DAT_fffef0eb & 0x20) == 0)) ||
     (((int)DAT_fffef3e1 & 0x80U) != 0)) {
    if (((DAT_fffef0ea & 1) == 0) || ((DAT_fffef0eb & 0x20) != 0)) {
      _DAT_fffef8e6 = 0;
    }
    else {
      if (0xc < _DAT_fffef8e6) {
        DAT_fffef8d9 = DAT_fffef8d9 & 0xdf;
        DAT_fffefeb8 = 1;
      }
      _DAT_fffef8e6 = FUN_00001540(_DAT_fffef8e6 + 1);
    }
  }
  else {
    DAT_fffef8d9 = DAT_fffef8d9 | 0x20;
    _DAT_fffef8e6 = 0;
    DAT_fffefeb8 = 1;
  }
  if ((((DAT_fffef0ea & 2) == 0) || (DAT_ffff08d3 != '\0')) ||
     (((DAT_fffef2d0 & 4) == 0 || (((int)DAT_fffef3e1 & 0x80U) != 0)))) {
    if (((DAT_fffef0ea & 1) == 0) || ((DAT_fffef2d0 & 4) != 0)) {
      _DAT_fffef8e8 = 0;
    }
    else {
      if (0xc < _DAT_fffef8e8) {
        DAT_fffef561 = DAT_fffef561 & 0xfd;
        DAT_fffeff84 = 1;
      }
      _DAT_fffef8e8 = FUN_00001540(_DAT_fffef8e8 + 1);
    }
  }
  else {
    DAT_fffef561 = DAT_fffef561 | 2;
    _DAT_fffef8e8 = 0;
    DAT_fffeff84 = 1;
  }
  if (((((DAT_fffef0ea & 2) == 0) || (DAT_ffff08d2 != '\0')) || ((DAT_fffef2d0 & 8) == 0)) ||
     (((int)DAT_fffef3e1 & 0x80U) != 0)) {
    if (((DAT_fffef0ea & 1) == 0) || ((DAT_fffef2d0 & 8) != 0)) {
      _DAT_fffef8ea = 0;
    }
    else {
      if (0xc < _DAT_fffef8ea) {
        DAT_fffef561 = DAT_fffef561 & 0xfe;
        DAT_fffeff85 = 1;
      }
      _DAT_fffef8ea = FUN_00001540(_DAT_fffef8ea + 1);
    }
  }
  else {
    DAT_fffef561 = DAT_fffef561 | 1;
    _DAT_fffef8ea = 0;
    DAT_fffeff85 = 1;
  }
  return;
}

