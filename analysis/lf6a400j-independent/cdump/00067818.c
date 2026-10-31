
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00067818(void)

{
  if (DAT_ffff0387 < 7) {
    _DAT_ffff008c = _DAT_ffff002e;
    _DAT_ffff008e = (undefined2)((uint)_DAT_ffff002e * 400 >> 0x10);
    DAT_ffff0387 = FUN_0000152c(DAT_ffff0387 + 1);
  }
  _DAT_fffeef52 = _DAT_ffff002e >> 9;
  FUN_0014bd5c();
  _v_Main_Throttle_Sensor_00B8 = FUN_00149708();
  _v_Sub_Throttle_Sensor_00BA = FUN_0014970e();
  _DAT_ffff00bc = FUN_00149714();
  _DAT_ffff0302 = FUN_0014971a();
  _DAT_ffff0304 = FUN_00149720();
  _DAT_ffff0306 = FUN_00149726();
  return;
}

