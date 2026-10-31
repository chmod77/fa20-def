
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066ed8(void)

{
  ushort uVar1;
  
  if (_DAT_ffff00ea < _DAT_ffff00e8) {
    uVar1 = _DAT_ffff00e8 - _DAT_ffff00ea;
  }
  else {
    uVar1 = _DAT_ffff00ea - _DAT_ffff00e8;
  }
  if ((((uVar1 < 0x288f) || ((DAT_fffefff3 & 0x20) != 0)) || ((DAT_fffefff3 & 0x10) != 0)) ||
     ((_DAT_ffff008e < 0x3d || (0xfffe < _DAT_ffff008e)))) {
    DAT_fffefff5 = DAT_fffefff5 & 0xfd;
  }
  else {
    DAT_fffefff5 = DAT_fffefff5 | 2;
  }
  if (_DAT_ffff00ec < _DAT_ffff00e8) {
    uVar1 = _DAT_ffff00e8 - _DAT_ffff00ec;
  }
  else {
    uVar1 = _DAT_ffff00ec - _DAT_ffff00e8;
  }
  if (((0x2794 < uVar1) && ((DAT_fffefff3 & 0x20) == 0)) &&
     (((DAT_fffefff3 & 8) == 0 && ((0x3c < _DAT_ffff008e && (_DAT_ffff008e != 0xffff)))))) {
    if ((0x3c < _DAT_ffff008e) &&
       (((_DAT_ffff008e < 0xa0 && (0xef9 < _v_Main_Throttle_Sensor_00B8)) &&
        (_v_Main_Throttle_Sensor_00B8 < 0x489a)))) {
      DAT_fffefff5 = DAT_fffefff5 | 1;
      return;
    }
  }
  DAT_fffefff5 = DAT_fffefff5 & 0xfe;
  return;
}

