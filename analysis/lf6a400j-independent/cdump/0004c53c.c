
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004c53c(void)

{
  uint uVar1;
  int iVar2;
  int extraout_r2;
  code *pcVar3;
  
  uVar1 = (uint)DAT_fffeeecc;
  if ((uVar1 & 1) != 0) {
    pcVar3 = __udiv32_r1_by_r0;
    __udiv32_r1_by_r0(_DAT_fffeecb0,0x15f9);
    iVar2 = (*pcVar3)();
    uVar1 = FUN_00001540(iVar2 + extraout_r2 * 0x10);
    _v_Mass_Airflow_EEE4 = (ushort)uVar1;
    if (_DAT_fffeeee6 < _v_Mass_Airflow_EEE4) {
      _DAT_fffeeee6 = _v_Mass_Airflow_EEE4;
    }
    if (_v_Mass_Airflow_EEE4 < _DAT_fffeeee8) {
      _DAT_fffeeee8 = _v_Mass_Airflow_EEE4;
    }
    DAT_fffeeeea = 1;
    DAT_fffeeeeb = 1;
  }
  return uVar1;
}

