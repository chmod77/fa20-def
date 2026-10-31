
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003b634(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0016bc08(&PTR_DAT_00163898,(int)_v_Engine_Speed_OBD_copy_2ADA);
  if (((int)(char)DAT_ffff2ab7 & 0x80U) == 0) {
    _DAT_ffff2a90 = _DAT_fffee6f8;
    _DAT_fffef59e = _DAT_fffee6f8;
    DAT_ffff2ab7 = DAT_ffff2ab7 | 0x80;
  }
  else {
    _DAT_ffff2a90 = FUN_0016b4d8(&DAT_ffff2a90,(int)_DAT_fffee6f8,0xff00);
    _DAT_fffef59e = FUN_0016b4d8(&DAT_fffef59e,(int)_DAT_fffee6f8,uVar1);
  }
  _DAT_ffff2a3c = FUN_0016bd34((uint)_v_Atmospheric_Pressure_E6AA - (uint)_DAT_ffff09b8);
  return;
}

