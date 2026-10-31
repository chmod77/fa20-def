
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00063612(void)

{
  ushort uVar1;
  
  if (_v_Throttle_Motor_Duty_0128 == 0) {
    _DAT_ffff0106 = 0;
    _DAT_ffff0108 = 0;
    DAT_ffff009a = DAT_ffff009a & 0xfb;
  }
  else {
    if ((short)_v_Throttle_Motor_Duty_0128 < 1) {
      if (_DAT_ffff0108 == 0) {
        DAT_ffff009a = DAT_ffff009a | 4;
      }
      else {
        DAT_ffff009a = DAT_ffff009a & 0xfb;
      }
      _DAT_ffff0108 = -_v_Throttle_Motor_Duty_0128;
      if (999 < (short)_DAT_ffff0108) {
        _DAT_ffff0108 = 999;
      }
      _DAT_ffff0106 = 0;
    }
    else {
      if (_DAT_ffff0106 == 0) {
        DAT_ffff009a = DAT_ffff009a | 4;
      }
      else {
        DAT_ffff009a = DAT_ffff009a & 0xfb;
      }
      if ((short)_v_Throttle_Motor_Duty_0128 < 1000) {
        _DAT_ffff0106 = _v_Throttle_Motor_Duty_0128;
      }
      else {
        _DAT_ffff0106 = 999;
      }
      _DAT_ffff0108 = 0;
    }
    DAT_ffff009a = DAT_ffff009a & 0xfe;
  }
  FUN_0006351c();
  uVar1 = _DAT_ffff0108;
  if (_DAT_ffff0108 == 0) {
    uVar1 = _DAT_ffff0106;
  }
  _DAT_ffff0358 = (ushort)((uint)uVar1 * 0x20c400 >> 0x10);
  if (_DAT_ffff0108 != 0) {
    _DAT_ffff0358 = -(_DAT_ffff0358 >> 5);
  }
  else {
    _DAT_ffff0358 = _DAT_ffff0358 >> 5;
  }
  return;
}

