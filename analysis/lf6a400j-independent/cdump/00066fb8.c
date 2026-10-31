
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00066fb8(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  _DAT_ffff002a = 0x4899 < _v_Main_Throttle_Sensor_00B8 ^ 1;
  uVar3 = 0;
  uVar1 = 0;
  if ((DAT_fffefff3 & 0x10) != 0) {
    uVar3 = 4;
  }
  if ((DAT_fffefff3 & 0x20) != 0) {
    uVar3 = uVar3 | 8;
  }
  if ((DAT_fffefff6 & 2) != 0) {
    uVar1 = 4;
  }
  if ((uVar3 != 0) || (uVar1 != 0)) {
    DAT_ffff34f7 = DAT_ffff34f7 | 0x80;
  }
  if ((DAT_fffefff4 & 8) != 0) {
    uVar3 = uVar3 | 2;
  }
  if ((DAT_fffefff3 & 8) != 0) {
    uVar3 = uVar3 | 2;
  }
  if ((DAT_fffefff4 & 0x10) != 0) {
    uVar3 = uVar3 | 4;
  }
  if ((DAT_fffefff4 & 0x20) != 0) {
    uVar3 = uVar3 | 8;
  }
  if ((DAT_fffefff5 & 2) != 0) {
    uVar1 = 4;
  }
  if ((DAT_fffefff5 & 1) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((DAT_fffefff6 & 1) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((uVar3 == 8) || (uVar3 == 10)) {
LAB_00067120:
    uVar3 = (uint)(short)_DAT_ffff00ea;
    uVar2 = 2;
    _DAT_ffff002a = _DAT_ffff00ea;
  }
  else {
    if ((uVar3 != 4) && (uVar3 != 6)) {
      if ((uVar3 == 0xc) || (uVar3 == 0xe)) {
LAB_0006710e:
        uVar3 = (int)(short)_DAT_ffff00ea;
        if ((uint)(int)(short)_DAT_ffff00e8 <= (uint)(int)(short)_DAT_ffff00ea) goto LAB_00067120;
      }
      else if (uVar3 == 2) {
        if ((uVar1 == 4) || (uVar3 = uVar1, uVar1 == 0xc)) goto LAB_0006710e;
      }
      else {
        uVar2 = uVar3;
        if (uVar3 != 0) goto LAB_00067128;
        if (uVar1 == 0) {
          uVar3 = uVar1;
          if (((_DAT_ffff002a != 0) && (uVar3 = (int)DAT_ffff0088, ((int)DAT_ffff0088 & 0x80U) != 0)
              ) && ((uVar3 = 0x3c, 0x3c < _DAT_ffff008e && (_DAT_ffff008e < 0xa0)))) {
            uVar3 = (uint)(short)_DAT_ffff00ec;
            uVar2 = 5;
            _DAT_ffff002a = _DAT_ffff00ec;
            goto LAB_00067128;
          }
        }
        else if (((uVar1 == 4) || (uVar3 = uVar1, uVar1 == 0xc)) &&
                (uVar3 = (int)(short)_DAT_ffff00ea,
                (uint)(int)(short)_DAT_ffff00e8 <= (uint)(int)(short)_DAT_ffff00ea))
        goto LAB_00067120;
      }
    }
    uVar2 = 1;
    _DAT_ffff002a = _DAT_ffff00e8;
  }
LAB_00067128:
  DAT_ffff0134 = (char)uVar2;
  return uVar3;
}

