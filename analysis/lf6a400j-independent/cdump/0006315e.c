
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006315e(void)

{
  if (_DAT_ffff008e < 0xa0) {
    FUN_0006324c();
    _v_Throttle_Motor_Duty_0128 = FUN_000636ae((int)_DAT_ffff0214,(int)_DAT_ffff002a,_DAT_ffff008e);
  }
  else {
    _v_Throttle_Motor_Duty_0128 = 0;
    _DAT_ffff0100 = 0x162b;
  }
  return;
}

