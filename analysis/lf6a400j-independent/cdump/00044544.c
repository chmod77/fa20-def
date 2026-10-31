
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00044544(void)

{
  ushort uVar1;
  ushort uVar3;
  uint uVar2;
  byte bVar4;
  uint uVar5;
  
  uVar1 = _v_Fuel_Rail_Pressure_gauge_ED16;
  uVar5 = (uint)(short)_v_Fuel_Rail_Pressure_gauge_ED16;
  if ((uVar5 < 0x4009) || (_v_Engine_Speed_OBD_copy_2ADA < 0x3c00)) {
    _DAT_fffeffe2 = 0;
  }
  else {
    if (99 < _DAT_fffeffe2) {
      DAT_ffff34ba = DAT_ffff34ba | 1;
    }
    _DAT_fffeffe2 = FUN_00001540(_DAT_fffeffe2 + 1);
  }
  if ((DAT_ffffab40 & 0x20) == 0) {
    _DAT_fffef176 = FUN_0016bd34(_DAT_fffef176 - 1);
  }
  else {
    _DAT_fffef176 = 300;
  }
  uVar3 = FUN_0016caec((uint)_DAT_ffff1276 - (uint)_DAT_fffef17c);
  if (((((((DAT_fffef371 & 4) == 0) || (DAT_ffff08f1 != '\0')) || ((DAT_ffffab40 & 0x20) != 0)) ||
       (_DAT_fffef176 != 0)) ||
      (((DAT_ffff66b0 != '\x02' && (DAT_ffff66b0 != '\x03')) ||
       ((DAT_ffff2ac7 == '\0' || ((0x334 < uVar3 || (_DAT_fffef178 < 100)))))))) ||
     (((DAT_ffff34ba & 1) == 0 &&
      (((DAT_ffff34ba & 1) != 0 ||
       (((DAT_ffff091d == -0x5b || (_DAT_fffeef10 < 10000)) &&
        ((DAT_ffff091d != -0x5b || (_DAT_fffeef10 < 10000)))))))))) {
    _DAT_fffef8f4 = 0;
    _DAT_fffef8f8 = 0;
    _DAT_fffef8fc = 0;
    _DAT_fffef900 = 0;
    _DAT_fffef8f6 = 0;
    _DAT_fffef8fa = 0;
    _DAT_fffef8fe = 0;
    _DAT_fffef902 = 0;
    DAT_fffef175 = DAT_fffef175 & 0x87 | 6;
    goto LAB_00044ad6;
  }
  _DAT_fffef17a = FUN_0016bae4(&PTR_DAT_001639f8,(int)DAT_ffff2996);
  uVar2 = FUN_0016b428(uVar5,(int)_DAT_fffef17a,0x1ec);
  bVar4 = DAT_fffef175 | 2;
  if ((uVar2 & 1) == 0) {
    bVar4 = DAT_fffef175 & 0xfd;
  }
  DAT_fffef175 = bVar4;
  if ((bVar4 & 2) == 0) {
    if (499 < _DAT_fffef8f4) {
      DAT_fffef8f3 = DAT_fffef8f3 | 8;
    }
    _DAT_fffef8f4 = FUN_00001540(_DAT_fffef8f4 + 1);
    _DAT_fffef8f6 = 0;
  }
  else {
    if (499 < _DAT_fffef8f6) {
      DAT_fffef8f3 = DAT_fffef8f3 & 0xf7;
      DAT_fffef175 = bVar4 | 8;
    }
    _DAT_fffef8f4 = 0;
    _DAT_fffef8f6 = FUN_00001540(_DAT_fffef8f6 + 1);
  }
  uVar5 = FUN_0016b428(0x600e,uVar5,&DAT_00001002,(DAT_fffef175 & 4) != 0);
  bVar4 = DAT_fffef175 | 4;
  if ((uVar5 & 1) == 0) {
    bVar4 = DAT_fffef175 & 0xfb;
  }
  DAT_fffef175 = bVar4;
  if ((bVar4 & 4) == 0) {
    if (199 < _DAT_fffef8f8) {
      DAT_fffef8f3 = DAT_fffef8f3 | 4;
    }
    _DAT_fffef8f8 = FUN_00001540(_DAT_fffef8f8 + 1);
    _DAT_fffef8fa = 0;
  }
  else {
    if (499 < _DAT_fffef8fa) {
      DAT_fffef8f3 = DAT_fffef8f3 & 0xfb;
      DAT_fffef175 = bVar4 | 0x10;
    }
    _DAT_fffef8f8 = 0;
    _DAT_fffef8fa = FUN_00001540(_DAT_fffef8fa + 1);
  }
  if (((DAT_fffef175 & 2) == 0) || ((DAT_fffef175 & 4) == 0)) {
    _DAT_fffef8fc = 0;
    _DAT_fffef8fe = 0;
    _DAT_fffef900 = 0;
LAB_00044a28:
    _DAT_fffef902 = 0;
  }
  else {
    if (DAT_ffff077f == '\x03') {
      _DAT_fffefa16 = 0x166a;
      _DAT_fffefa18 = 0x2005;
    }
    else {
      _DAT_fffefa16 = 0xffff;
      _DAT_fffefa18 = 0xffff;
    }
    if ((int)(uint)_DAT_fffefa16 < (int)((uint)_DAT_ffff1276 - (uint)uVar1)) {
      if (499 < _DAT_fffef8fc) {
        DAT_fffef8f3 = DAT_fffef8f3 | 2;
      }
      _DAT_fffef8fc = FUN_00001540(_DAT_fffef8fc + 1);
      _DAT_fffef8fe = 0;
    }
    else {
      if (499 < _DAT_fffef8fe) {
        DAT_fffef8f3 = DAT_fffef8f3 & 0xfd;
        DAT_fffef175 = DAT_fffef175 | 0x20;
      }
      _DAT_fffef8fc = 0;
      _DAT_fffef8fe = FUN_00001540(_DAT_fffef8fe + 1);
    }
    if ((int)(uint)_DAT_fffefa18 < (int)((uint)uVar1 - (uint)_DAT_ffff1276)) {
      if (499 < _DAT_fffef900) {
        DAT_fffef8f3 = DAT_fffef8f3 | 1;
      }
      _DAT_fffef900 = FUN_00001540(_DAT_fffef900 + 1);
      goto LAB_00044a28;
    }
    if (499 < _DAT_fffef902) {
      DAT_fffef8f3 = DAT_fffef8f3 & 0xfe;
      DAT_fffef175 = DAT_fffef175 | 0x40;
    }
    _DAT_fffef900 = 0;
    _DAT_fffef902 = FUN_00001540(_DAT_fffef902 + 1);
  }
  if (((DAT_fffef8f3 & 8) == 0) && ((DAT_fffef8f3 & 2) == 0)) {
    if (((DAT_fffef175 & 8) != 0) && ((DAT_fffef175 & 0x20) != 0)) {
      DAT_fffef8f3 = DAT_fffef8f3 & 0x7f;
      goto LAB_00044a58;
    }
  }
  else {
    DAT_fffef8f3 = DAT_fffef8f3 | 0x80;
LAB_00044a58:
    DAT_fffefa1a = 1;
  }
  if (((DAT_fffef8f3 & 4) == 0) && ((DAT_fffef8f3 & 1) == 0)) {
    if (((DAT_fffef175 & 0x10) == 0) || ((DAT_fffef175 & 0x40) == 0)) goto LAB_00044ad6;
    DAT_fffef8f3 = DAT_fffef8f3 & 0xbf;
  }
  else {
    DAT_fffef8f3 = DAT_fffef8f3 | 0x40;
  }
  DAT_fffefa1b = 1;
LAB_00044ad6:
  if (uVar3 < 0x335) {
    _DAT_fffef178 = FUN_00001540(_DAT_fffef178 + 1);
  }
  else {
    _DAT_fffef178 = 0;
  }
  _DAT_fffef17c = _DAT_ffff1276;
  return;
}

