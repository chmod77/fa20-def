
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00068b96(void)

{
  int iVar1;
  
  iVar1 = (int)_DAT_ffff007a;
  if (iVar1 != 7) {
    _DAT_fffef148 = _DAT_fffef150;
    _DAT_fffef146 = FUN_0016b5ec((uint)_v_Accelerator_Pedal_Angle_EEF8 - (uint)_DAT_fffef150);
    _DAT_fffef14c = _DAT_fffef14e;
    iVar1 = FUN_0016b5ec((uint)_v_Accelerator_Pedal_Angle_EEF8 - (uint)_DAT_fffef14e);
    _DAT_fffef14a = (undefined2)iVar1;
  }
  return iVar1;
}

