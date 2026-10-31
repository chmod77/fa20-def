
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000412d8(void)

{
  bool bVar1;
  
  if (((((DAT_fffef371 & 2) == 0) || (DAT_ffff08cb != '\0')) || ((DAT_fffef32b & 0x10) != 0)) ||
     ((DAT_ffff2996 < 0x1e || (_v_Alternator_Duty_10D6 < 0x342)))) {
    DAT_fffef382 = DAT_fffef382 & 0x7f;
    bVar1 = false;
  }
  else {
    DAT_fffef382 = DAT_fffef382 | 0x80;
    bVar1 = true;
  }
  if (bVar1) {
    if (0xcf5c < _v_Control_Module_Voltage_EF18) {
      if (_DAT_fffef9de < 0x177) {
        _DAT_fffef9de = _DAT_fffef9de + 1;
      }
      else {
        DAT_fffef9f1 = DAT_fffef9f1 | 2;
        DAT_fffef9e2 = 1;
      }
      goto LAB_000413f8;
    }
    DAT_fffef9f1 = DAT_fffef9f1 & 0xfd;
    DAT_fffef9e2 = 1;
  }
  _DAT_fffef9de = 0;
LAB_000413f8:
  if (bVar1) {
    if (_v_Control_Module_Voltage_EF18 < 0x8a3e) {
      if (0x176 < _DAT_fffef9e0) {
        DAT_fffef9f1 = DAT_fffef9f1 | 1;
        DAT_fffef9e3 = 1;
        return;
      }
      _DAT_fffef9e0 = _DAT_fffef9e0 + 1;
      return;
    }
    DAT_fffef9f1 = DAT_fffef9f1 & 0xfe;
    DAT_fffef9e3 = 1;
  }
  _DAT_fffef9e0 = 0;
  return;
}

