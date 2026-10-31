
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003d022(void)

{
  uint uVar1;
  
  if (((((DAT_fffef8a3 & 0x20) == 0) && ((DAT_fffef8a3 & 0x10) == 0)) && ((DAT_ffff07b3 & 1) == 0))
     && (((DAT_ffff07b3 & 2) == 0 && ((DAT_ffff07b3 & 4) == 0)))) {
    _DAT_fffef0a8 = _DAT_fffef0c6;
  }
  else {
    _DAT_fffef0a8 = 0x8000;
  }
  if (((int)(char)DAT_fffef0c5 & 0x80U) == 0) {
    _DAT_fffef0c8 = _DAT_fffef0c6;
    _DAT_fffef0be = _DAT_fffef0c6;
    DAT_fffef0c5 = DAT_fffef0c5 | 0x80;
  }
  else {
    FUN_0016b4d8(&DAT_fffef0c8,(int)(short)_DAT_fffef0a8,0x4000);
    FUN_0016b4d8(&DAT_fffef0be,(int)(short)_DAT_fffef0c6,0x4000);
  }
  uVar1 = (_DAT_fffef0c8 - 0x8000) * -0x3200;
  if (((int)uVar1 < 0x1999999a) && (-0x1999999a < (int)uVar1)) {
    uVar1 = (_DAT_fffef0c8 - 0x8000) * -64000;
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 + 0xff;
    }
    uVar1 = (int)(char)(uVar1 >> 0x18) << 0x10 | uVar1 >> 8 & 0xffff;
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 + 0x1ff;
    }
    _DAT_fffef0a4 =
         FUN_0016b5d4(((int)((int)(char)(uVar1 >> 0x18) << 0x10 | uVar1 >> 8 & 0xffff) >> 1) +
                      0x3200);
  }
  else {
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 + 0xff;
    }
    uVar1 = ((int)(char)(uVar1 >> 0x18) << 0x10 | uVar1 >> 8 & 0xffff) * 5;
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 + 0x1ff;
    }
    _DAT_fffef0a4 =
         FUN_0016b5d4(((int)((int)(char)(uVar1 >> 0x18) << 0x10 | uVar1 >> 8 & 0xffff) >> 1) +
                      0x3200);
  }
  uVar1 = (_DAT_fffef0be - 0x8000) * -0x3200;
  if (((int)uVar1 < 0x1999999a) && (-0x1999999a < (int)uVar1)) {
    uVar1 = (_DAT_fffef0be - 0x8000) * -64000;
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 + 0xff;
    }
    uVar1 = (int)(char)(uVar1 >> 0x18) << 0x10 | uVar1 >> 8 & 0xffff;
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 + 0x1ff;
    }
    _v_Battery_Current_F0CA =
         FUN_0016b5d4(((int)((int)(char)(uVar1 >> 0x18) << 0x10 | uVar1 >> 8 & 0xffff) >> 1) +
                      0x3200);
  }
  else {
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 + 0xff;
    }
    uVar1 = ((int)(char)(uVar1 >> 0x18) << 0x10 | uVar1 >> 8 & 0xffff) * 5;
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 + 0x1ff;
    }
    _v_Battery_Current_F0CA =
         FUN_0016b5d4(((int)((int)(char)(uVar1 >> 0x18) << 0x10 | uVar1 >> 8 & 0xffff) >> 1) +
                      0x3200);
  }
  return;
}

