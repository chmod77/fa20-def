
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006892c(void)

{
  uint uVar1;
  
  _DAT_fffef112 = _DAT_fffef110;
  if (_DAT_ffff007a == 7) {
    _DAT_fffef112 = _DAT_fffef110;
    return 7;
  }
  if ((_v_Accelerator_Pedal_Sensor_D_F10C < 0x1b9f) || (0xf423 < _v_Accelerator_Pedal_Sensor_D_F10C)
     ) {
    DAT_fffef10e = FUN_0000152c(DAT_fffef10e + 1);
  }
  else {
    DAT_fffef10e = 0;
  }
  if (((0x1b9e < _v_Accelerator_Pedal_Sensor_D_F10C) &&
      (_v_Accelerator_Pedal_Sensor_D_F10C < 0xf424)) || (2 < DAT_fffef10e)) {
    uVar1 = __udiv32_r1_by_r0((uint)_v_Accelerator_Pedal_Sensor_D_F10C * 0x20d0,0x21);
    _DAT_fffef110 = FUN_00001540(uVar1 >> 8);
  }
  if ((DAT_fffef10b & 1) == 0) {
    uVar1 = (uint)(char)DAT_fffef10b;
    _DAT_fffef114 = _DAT_fffef110;
    DAT_fffef10b = (char)(uVar1 | 1);
    return uVar1 | 1;
  }
  uVar1 = FUN_0016b4d8(&DAT_fffef114,(int)_DAT_fffef110,0x4000);
  return uVar1;
}

