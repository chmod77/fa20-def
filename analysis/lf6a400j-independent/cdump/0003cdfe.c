
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003cdfe(void)

{
  int iVar1;
  byte bVar2;
  
  if (_DAT_ffff0ede + 0x2d0 == 0) {
    _DAT_fffef0ae = -1;
  }
  else {
    iVar1 = __udiv32_r1_by_r0((uint)_DAT_ffff0ede * 0xaf0,_DAT_ffff0ede + 0x2d0);
    _DAT_fffef0ae = (short)iVar1;
  }
  if ((DAT_fffef0ad & 1) == 0) {
    _DAT_fffef0b0 = _DAT_fffef0ae;
    DAT_fffef0ad = DAT_fffef0ad | 1;
  }
  else {
    _DAT_fffef0b0 = FUN_0016b4d8(&DAT_fffef0b0,(int)_DAT_fffef0ae,0x800);
  }
  _DAT_fffef0aa = _DAT_fffef0b0;
  DAT_fffef0b2 = FUN_0016ba80(&PTR_DAT_001638f8,(int)_DAT_fffef0b0);
  if (((((DAT_fffef0ac & 2) == 0) && ((DAT_ffff0000 & 2) != 0)) || (_DAT_fffeef10 < 500)) ||
     (9 < DAT_fffef0b4)) {
    DAT_fffef0b4 = '\0';
    DAT_fffef0b3 = DAT_fffef0b2;
  }
  else {
    DAT_fffef0b4 = DAT_fffef0b4 + 1;
  }
  if ((((DAT_fffef0ac & 2) == 0) && ((DAT_ffff0000 & 2) != 0)) || (_DAT_fffeef10 < 500)) {
    DAT_fffef0b5 = DAT_fffef0b3;
  }
  else {
    if (DAT_fffef0b6 < 0x40) {
      DAT_fffef0b6 = DAT_fffef0b6 + 1;
      _DAT_fffef0b8 = FUN_00001540((uint)_DAT_fffef0b8 + (uint)DAT_fffef0b3);
      goto LAB_0003cff0;
    }
    if (DAT_fffef0b6 == 0) {
      DAT_fffef0b5 = 0xff;
    }
    else {
      iVar1 = __sdiv32_r1_by_r0((uint)_DAT_fffef0b8,(uint)DAT_fffef0b6);
      DAT_fffef0b5 = FUN_0000152c(iVar1);
    }
  }
  DAT_fffef0b6 = '\0';
  _DAT_fffef0b8 = 0;
LAB_0003cff0:
  DAT_ffff2fe2 = DAT_fffef0b5;
  if (((DAT_fffef0ac & 2) != 0) && ((DAT_ffff0000 & 2) == 0)) {
    DAT_ffff2fe3 = DAT_fffef0b5;
  }
  bVar2 = DAT_fffef0ac | 2;
  if ((DAT_ffff0000 & 2) == 0) {
    bVar2 = DAT_fffef0ac & 0xfd;
  }
  DAT_fffef0ac = bVar2;
  return;
}

