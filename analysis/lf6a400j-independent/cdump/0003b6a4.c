
/* WARNING: Removing unreachable block (ram,0x0003b708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003b6a4(void)

{
  undefined4 uVar1;
  
  if (((int)(char)DAT_fffeef72 & 0x80U) == 0) {
    DAT_fffeef72 = DAT_fffeef72 | 0x80;
    _v_Atmospheric_Pressure_E6AA = _DAT_ffff2aa0;
  }
  else if (_DAT_ffff2aa0 < _v_Atmospheric_Pressure_E6AA) {
    uVar1 = FUN_0016bd34(_v_Atmospheric_Pressure_E6AA - 0x22);
    _v_Atmospheric_Pressure_E6AA = FUN_0016b630((int)(short)_DAT_ffff2aa0,uVar1);
  }
  else {
    uVar1 = FUN_00001540(_v_Atmospheric_Pressure_E6AA + 0x22);
    _v_Atmospheric_Pressure_E6AA = FUN_0016bd78((int)(short)_DAT_ffff2aa0,uVar1);
  }
  return;
}

