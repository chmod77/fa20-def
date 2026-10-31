
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000653c4(void)

{
  uint uVar1;
  byte bVar3;
  undefined4 uVar2;
  byte bVar4;
  
  uVar1 = FUN_0016b404(0xffffffff,(int)DAT_ffff299c,2,((int)(char)DAT_ffff0300 & 0x80U) != 0);
  bVar3 = DAT_ffff0300 | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff0300 & 0x7f;
  }
  DAT_ffff0300 = bVar3;
  if (((int)(char)bVar3 & 0x80U) == 0) {
    if (DAT_ffff030c != '\0') {
      if (DAT_ffff0130 == '\0') {
        DAT_ffff0130 = '\x01';
      }
      _DAT_ffff003c = 0xf47;
      _v_Throttle_Motor_Duty_0128 = 0;
      _DAT_ffff2f90 = 0xffff;
      return 0xf47;
    }
    uVar2 = FUN_0006315e();
    return uVar2;
  }
  DAT_ffff030c = 1;
  bVar3 = (DAT_ffff0080 & 2) != 0 || (DAT_fffefff3 & 0x20) != 0;
  if ((DAT_fffefff3 & 0x10) != 0) {
    bVar3 = bVar3 | 2;
  }
  if ((DAT_ffff0080 & 1) != 0) {
    bVar3 = bVar3 | 2;
  }
  bVar4 = DAT_fffefff7 != '\0' || DAT_ffff0084 != '\0';
  if ((DAT_ffff0353 == '\x01') && (DAT_ffff0354 == '\0')) {
    bVar4 = true;
  }
  if (((int)DAT_ffff002c & 0x80U) != 0) {
    bVar4 = true;
  }
  if (DAT_fffefff4 != '\0') {
    bVar4 = bVar4 | 2;
  }
  if (DAT_fffefff3 != 0) {
    bVar4 = bVar4 | 2;
  }
  if (DAT_ffff007f != '\0') {
    bVar4 = bVar4 | 2;
  }
  if (DAT_ffff0080 != 0) {
    bVar4 = bVar4 | 2;
  }
  if (DAT_fffefff5 != '\0') {
    bVar4 = bVar4 | 2;
  }
  if (DAT_fffefff6 != '\0') {
    bVar4 = bVar4 | 2;
  }
  if ((bVar3 == 3) || (bVar4 == 3)) {
    if (_DAT_ffff003c < 0xf46) {
      _DAT_ffff003c = 0xf46;
    }
    if (DAT_ffff0130 == '\0') {
      DAT_ffff0130 = '\x01';
    }
    _v_Throttle_Motor_Duty_0128 = 0;
    _DAT_ffff2f90 = 0xffff;
    goto LAB_00065594;
  }
  if (bVar4 == 1) {
    if (_DAT_ffff003c < 0xcd5) {
      _DAT_ffff003c = 0xcd5;
    }
    if (DAT_ffff0130 == '\0') {
      DAT_ffff0130 = '\x01';
    }
  }
  else {
    if ((0xad7 < _DAT_ffff003c) && (_DAT_ffff003c < 0xadd)) {
      FUN_00065e74();
      goto LAB_00065594;
    }
    if (_DAT_ffff003c < 0xad8) {
      if (_DAT_ffff003c < 0x8ca) {
        FUN_00065644();
      }
      else {
        FUN_00064684();
        if (_DAT_ffff003c < 0x9c4) {
          FUN_0006594e();
        }
        else if (_DAT_ffff003c < 0x9f6) {
          FUN_00065978();
        }
        else {
          FUN_00065a5e();
        }
      }
      goto LAB_00065594;
    }
    if ((0xae0 < _DAT_ffff003c) && (_DAT_ffff003c < 0xcd5)) {
      _DAT_ffff0100 = 0x491d;
      FUN_0006315e();
      goto LAB_00065594;
    }
    if (_DAT_ffff003c < 0xcd5) goto LAB_00065594;
  }
  _v_Throttle_Motor_Duty_0128 = 0;
LAB_00065594:
  if (_DAT_ffff003c < 0xf47) {
    _DAT_ffff003c = _DAT_ffff003c + 1;
  }
  return 0xf46;
}

