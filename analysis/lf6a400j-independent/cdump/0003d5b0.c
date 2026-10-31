
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003d5b0(void)

{
  code *extraout_r2;
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((DAT_ffff0000 & 2) == 0) {
    _DAT_fffef1ea = 0;
    DAT_fffef1e3 = 0;
    DAT_fffef1e4 = 0;
    DAT_fffef1e0 = '\0';
  }
  else {
    if (_DAT_fffef1ea != 0xffff) {
      _DAT_fffef1ea = _DAT_fffef1ea + 1;
    }
    DAT_fffef1e3 = DAT_fffef1e3 + 1;
    if (0x18 < DAT_fffef1e3) {
      if (DAT_fffef1e4 != 0xff) {
        DAT_fffef1e4 = DAT_fffef1e4 + 1;
      }
      if (199 < DAT_fffef1e4) {
        DAT_fffef1e0 = '\x01';
      }
      DAT_fffef1e3 = 0;
    }
  }
  if (((_DAT_fffef1ea < 0x177) && (_DAT_ffff29b4 < 0x6a)) &&
     (0xaeff < _v_Mass_Airflow_Sensor_Voltage_EEB2)) {
    DAT_fffef1d7 = '\x01';
    if (DAT_fffef1e1 != 0xff) {
      DAT_fffef1e1 = DAT_fffef1e1 + 1;
    }
    if (4 < DAT_fffef1e1) {
      DAT_fffef1d8 = '\x01';
    }
  }
  else {
    DAT_fffef1d7 = '\0';
    DAT_fffef1e1 = 0;
  }
  if (((DAT_fffef1d8 == '\0') || (0x95ff < _v_Mass_Airflow_Sensor_Voltage_EEB2)) ||
     (DAT_fffef1e5 < 0x80)) {
    DAT_fffef1d9 = '\0';
    DAT_fffef1e2 = 0;
  }
  else {
    DAT_fffef1d9 = '\x01';
    if (DAT_fffef1e2 != 0xff) {
      DAT_fffef1e2 = DAT_fffef1e2 + 1;
    }
    if (4 < DAT_fffef1e2) {
      DAT_fffef1da = '\x01';
    }
  }
  if (DAT_fffef1da == '\0') {
    if (_DAT_fffef1ee != 0xffff) {
      _DAT_fffef1ee = _DAT_fffef1ee + 1;
    }
  }
  else if (DAT_fffef1db == '\0') {
    iVar2 = _DAT_fffef1ee - 5;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    _DAT_fffef1f0 = (ushort)iVar2;
    DAT_fffef1db = '\x01';
  }
  if (DAT_fffef1dd == '\0') {
    _DAT_fffef1f8 = 0x13a3a3;
    DAT_fffef1dd = '\x01';
  }
  else if (((DAT_fffef1d7 != '\0') || (DAT_fffef1d8 != '\0')) &&
          ((DAT_fffef1d9 == '\0' && (DAT_fffef1da == '\0')))) {
    iVar2 = (DAT_fffef1e5 - 0x1e) * (DAT_fffef1e5 - 0x1e);
    if (_DAT_fffef1f8 < iVar2 * -5 - 1U) {
      _DAT_fffef1f8 = _DAT_fffef1f8 + iVar2 * 5;
    }
    else {
      _DAT_fffef1f8 = 0xffffffff;
    }
  }
  if (_DAT_fffef1f0 + 0xf == 0) {
    DAT_fffef1e8 = -1;
  }
  else {
    __udiv32_r1_by_r0(_DAT_fffef1f8,_DAT_fffef1f0 + 0xf);
    uVar1 = (*extraout_r2)();
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    DAT_fffef1e8 = (char)uVar1;
  }
  DAT_fffef1e6 = FUN_0016b9a4(&PTR_DAT_00163910,(int)DAT_fffef1e8);
  if (DAT_fffef1dc == '\0') {
    if (DAT_fffef1da == '\0') {
      if ((_DAT_fffef1ee < 0x7d) || (DAT_fffef1d8 == '\0')) goto LAB_0003d8ca;
      _DAT_fffef1f2 = 0x6400;
    }
    else {
      puVar3 = (undefined *)((uint)DAT_fffef1e6 * (_DAT_fffef1f0 + 0xf));
      if (&DAT_0000ffff < puVar3) {
        puVar3 = &DAT_0000ffff;
      }
      _DAT_fffef1f2 = (ushort)puVar3;
    }
    DAT_fffef1dc = '\x01';
  }
LAB_0003d8ca:
  if (DAT_fffef1d8 != '\0') {
    DAT_fffef1e7 = FUN_0016b9a4(&PTR_DAT_0016391c,_DAT_fffef1f2 >> 8);
  }
  if (DAT_fffef1de == '\0') {
    _DAT_fffef1f4 = 0x3000000;
    DAT_fffef1de = '\x01';
  }
  else if (((DAT_fffef1d8 == '\0') && (0x176 < _DAT_fffef1ea)) || (DAT_fffef1e0 != '\0')) {
    _DAT_fffef1f4 = 0;
  }
  else if ((DAT_fffef1dc == '\0') || (DAT_fffef1df != '\0')) {
    _DAT_fffef1f4 = (_DAT_fffef1f4 >> 0x10) * 0xffab + ((_DAT_fffef1f4 & 0xffff) * 0xffab >> 0x10);
  }
  else {
    uVar1 = (_DAT_fffef1f4 >> 0x10) * 0xffab + ((_DAT_fffef1f4 & 0xffff) * 0xffab >> 0x10);
    _DAT_fffef1f4 = (uint)DAT_fffef1e7 * (uVar1 >> 8) + ((uint)DAT_fffef1e7 * (uVar1 & 0xff) >> 8);
    DAT_fffef1df = '\x01';
  }
  return;
}

