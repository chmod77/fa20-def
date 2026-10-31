
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00064a76(void)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  
  uVar3 = _DAT_ffff0034;
  bVar2 = (DAT_fffefff3 & 0x20) != 0 || (DAT_ffff0080 & 2) != 0;
  if ((DAT_ffff0080 & 1) != 0) {
    bVar2 = bVar2 | 2;
  }
  if ((DAT_fffefff3 & 0x10) != 0) {
    bVar2 = bVar2 | 2;
  }
  if (bVar2 == 3) {
    DAT_ffff01c6 = DAT_ffff01c6 | 2;
    _v_Throttle_Motor_Duty_0128 = 0;
  }
  else if (_DAT_ffff0034 < 0x5f) {
    FUN_00064d5c();
    _DAT_ffff0210 = _DAT_ffff00b4;
  }
  else {
    FUN_00064684();
    if (uVar3 < 0x67) {
      FUN_00064e3a();
      _DAT_ffff0212 = _DAT_ffff00b4;
    }
    else {
      if ((((0x107 < _DAT_ffff0210) && (0x107 < _DAT_ffff0212)) && (0x3b < _DAT_ffff008e)) &&
         (_DAT_ffff008e < 0xa1)) {
        DAT_fffefff7 = DAT_fffefff7 | 1;
      }
      FUN_00064e88();
    }
    if ((DAT_ffff01c6 & 1) == 0) {
      if (uVar3 < 0xd5) {
        return;
      }
      if (((((int)DAT_fffef555 & 0x80U) == 0) && (DAT_ffff0355 != '\0')) && (DAT_ffff0353 == '\0'))
      {
        DAT_fffefff3 = DAT_fffefff3 | 7;
      }
      DAT_ffff0310 = DAT_ffff0310 | 7;
      bVar2 = DAT_fffefff6;
    }
    else {
      uVar3 = 0;
      if (_DAT_ffff00ee < _DAT_ffff00fa) {
        uVar3 = _DAT_ffff00fa - _DAT_ffff00ee;
      }
      if ((((DAT_fffefff4 & 0x20) == 0) && ((DAT_fffefff3 & 0x20) == 0)) &&
         ((0x6a6 < uVar3 || (DAT_fffef5c6 != '\0')))) {
        DAT_fffefff4 = DAT_fffefff4 & 0xfb;
        _DAT_ffff34c0 = _DAT_ffff00ee;
        _DAT_ffff34d8 = -_DAT_ffff00ee;
        DAT_ffff013c = 2;
      }
      else {
        DAT_fffefff4 = DAT_fffefff4 | 4;
        DAT_ffff013c = 1;
      }
      uVar3 = 0;
      if (_DAT_ffff00f0 < _DAT_ffff00fc) {
        uVar3 = _DAT_ffff00fc - _DAT_ffff00f0;
      }
      if ((((DAT_fffefff4 & 0x10) == 0) && ((DAT_fffefff3 & 0x10) == 0)) &&
         ((0x6a6 < uVar3 || (DAT_fffef5c6 != '\0')))) {
        DAT_fffefff4 = DAT_fffefff4 & 0xfd;
        _DAT_ffff34c2 = _DAT_ffff00f0;
        _DAT_ffff34da = -_DAT_ffff00f0;
        DAT_ffff013d = 2;
      }
      else {
        DAT_fffefff4 = DAT_fffefff4 | 2;
        DAT_ffff013d = 1;
      }
      uVar3 = 0;
      if (_DAT_ffff00f2 < _DAT_ffff00fe) {
        uVar3 = _DAT_ffff00fe - _DAT_ffff00f2;
      }
      if ((((DAT_fffefff4 & 8) == 0) && ((DAT_fffefff3 & 8) == 0)) &&
         ((0x1b49 < uVar3 || (DAT_fffef5c6 != '\0')))) {
        DAT_fffefff4 = DAT_fffefff4 & 0xfe;
        _DAT_ffff34c4 = _DAT_ffff00f2;
        _DAT_ffff34dc = -_DAT_ffff00f2;
        DAT_ffff013e = 2;
      }
      else {
        DAT_fffefff4 = DAT_fffefff4 | 1;
        DAT_ffff013e = 1;
      }
      uVar1 = FUN_00062cac((int)(short)_DAT_ffff00ee,(int)(short)_DAT_ffff00f0,0xffffffff);
      bVar2 = DAT_fffefff6 | 8;
      if ((uVar1 & 1) == 0) {
        bVar2 = DAT_fffefff6 & 0xf7;
      }
      DAT_fffefff6 = bVar2;
      uVar1 = FUN_00062cac((int)(short)_DAT_ffff00ee,(int)(short)_DAT_ffff00f2,0xffffffff);
      bVar2 = DAT_fffefff6 | 4;
      if ((uVar1 & 1) == 0) {
        bVar2 = DAT_fffefff6 & 0xfb;
      }
    }
    DAT_fffefff6 = bVar2;
    DAT_ffff01c6 = DAT_ffff01c6 | 2;
  }
  return;
}

