
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003d9aa(void)

{
  ushort uVar1;
  undefined4 uVar2;
  
  _DAT_fffef1fe = FUN_0016b5d4(((uint)_DAT_fffef1fc * 0x74c0 >> 0x10) + 0x1a0);
  if ((DAT_fffef9f3 & 4) == 0) {
    uVar1 = _DAT_fffef1fe;
    if ((DAT_fffeeec1 & 1) == 0) {
      uVar2 = FUN_0016b5d4(0x10000);
      FUN_0016b4d8(&v_Brake_Booster_Pressure_F200,(int)(short)_DAT_fffef1fe,uVar2);
      uVar1 = _v_Brake_Booster_Pressure_F200;
    }
  }
  else {
    _v_Brake_Booster_Pressure_F200 = 0x7082;
    uVar1 = _v_Brake_Booster_Pressure_F200;
  }
  _v_Brake_Booster_Pressure_F200 = uVar1;
  _DAT_fffef202 =
       FUN_0016b5ec((uint)_v_Brake_Booster_Pressure_F200 - (uint)_v_Atmospheric_Pressure_E6AA);
  return;
}

