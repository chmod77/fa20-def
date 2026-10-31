
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00068a9a(void)

{
  uint uVar1;
  
  if (_DAT_ffff007a == 7) {
    return 7;
  }
  if ((_v_Accelerator_Pedal_Sensor_E_F118 < 0x1b9f) || (0xf423 < _v_Accelerator_Pedal_Sensor_E_F118)
     ) {
    DAT_fffef117 = FUN_0000152c(DAT_fffef117 + 1);
  }
  else {
    DAT_fffef117 = 0;
  }
  if (((0x1b9e < _v_Accelerator_Pedal_Sensor_E_F118) &&
      (_v_Accelerator_Pedal_Sensor_E_F118 < 0xf424)) || (2 < DAT_fffef117)) {
    uVar1 = __udiv32_r1_by_r0((uint)_v_Accelerator_Pedal_Sensor_E_F118 * 0x20d0,0x21);
    _DAT_fffef11a = FUN_00001540(uVar1 >> 8);
  }
  if ((DAT_fffef116 & 1) == 0) {
    uVar1 = (uint)(char)DAT_fffef116;
    _DAT_fffef11c = _DAT_fffef11a;
    DAT_fffef116 = (char)(uVar1 | 1);
    return uVar1 | 1;
  }
  uVar1 = FUN_0016b4d8(&DAT_fffef11c,(int)_DAT_fffef11a,0x4000);
  return uVar1;
}

