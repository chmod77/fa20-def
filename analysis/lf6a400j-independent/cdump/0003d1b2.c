
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003d1b2(void)

{
  if (((DAT_fffef8a3 & 8) == 0) && ((DAT_fffef8a3 & 4) == 0)) {
    _DAT_fffef0ce = _DAT_fffef0cc;
  }
  else {
    _DAT_fffef0ce = 0x7c6a;
  }
  if ((DAT_fffef0c5 & 0x40) == 0) {
    _DAT_fffef0d0 = _DAT_fffef0cc;
    _DAT_fffef0ba = _DAT_fffef0cc;
    DAT_fffef0c5 = DAT_fffef0c5 | 0x40;
  }
  else {
    FUN_0016b4d8(&DAT_fffef0d0,(int)_DAT_fffef0ce,0x4000);
    FUN_0016b4d8(&DAT_fffef0ba,(int)_DAT_fffef0cc,0x4000);
  }
  DAT_fffef0a6 = FUN_0016ba80(&PTR_DAT_00163904,(int)_DAT_fffef0d0);
  v_Battery_Temperature_F0D2 = FUN_0016ba80(&PTR_DAT_00163904,(int)_DAT_fffef0ba);
  return;
}

