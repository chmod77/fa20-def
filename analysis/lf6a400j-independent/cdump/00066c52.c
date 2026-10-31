
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066c52(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  byte bVar5;
  
  sVar3 = _DAT_ffff00bc;
  sVar2 = _v_Main_Throttle_Sensor_00B8;
  if ((_DAT_ffff008e < 0x3d) || (0xfffe < _DAT_ffff008e)) {
    DAT_ffff035e = DAT_ffff035e & 0xf0;
    DAT_fffefff4 = DAT_fffefff4 & 0xcf;
    DAT_fffeffec = DAT_fffeffec & 0xfc;
  }
  else {
    _DAT_ffff017a = _v_Sub_Throttle_Sensor_00BA;
    uVar4 = FUN_00062bd6((int)_v_Main_Throttle_Sensor_00B8,0xfffff04d);
    bVar5 = DAT_ffff035e | 1;
    if ((uVar4 & 1) == 0) {
      bVar5 = DAT_ffff035e & 0xfe;
    }
    DAT_ffff035e = bVar5;
    uVar4 = FUN_00062bca((int)sVar2,0xef9);
    bVar5 = DAT_ffff035e | 4;
    if ((uVar4 & 1) == 0) {
      bVar5 = DAT_ffff035e & 0xfb;
    }
    if (((bVar5 & 1) == 0) && ((bVar5 & 4) == 0)) {
      DAT_fffefff4 = DAT_fffefff4 & 0xdf;
    }
    else {
      DAT_fffefff4 = DAT_fffefff4 | 0x20;
    }
    DAT_ffff035e = bVar5;
    uVar4 = FUN_00062bd6((int)_DAT_ffff017a,0xffffe977);
    bVar5 = DAT_ffff035e | 2;
    if ((uVar4 & 1) == 0) {
      bVar5 = DAT_ffff035e & 0xfd;
    }
    DAT_ffff035e = bVar5;
    uVar4 = FUN_00062bca((int)_DAT_ffff017a,0x964);
    bVar5 = DAT_ffff035e | 8;
    if ((uVar4 & 1) == 0) {
      bVar5 = DAT_ffff035e & 0xf7;
    }
    if (((bVar5 & 2) == 0) && ((bVar5 & 8) == 0)) {
      DAT_fffefff4 = DAT_fffefff4 & 0xef;
    }
    else {
      DAT_fffefff4 = DAT_fffefff4 | 0x10;
    }
    DAT_ffff035e = bVar5;
    uVar4 = FUN_00062bd6((int)sVar3,0xffffffff);
    bVar5 = DAT_fffeffec | 1;
    if ((uVar4 & 1) == 0) {
      bVar5 = DAT_fffeffec & 0xfe;
    }
    DAT_fffeffec = bVar5;
    uVar4 = FUN_00062bca((int)sVar3,0);
    bVar1 = (uVar4 & 1) == 0;
    bVar5 = DAT_fffeffec | 2;
    if (bVar1) {
      bVar5 = DAT_fffeffec & 0xfd;
    }
    if (((bVar5 & 1) != 0) || (DAT_fffeffec = bVar5, !bVar1)) {
      DAT_fffeffec = bVar5;
      DAT_fffefff4 = DAT_fffefff4 | 8;
      return;
    }
  }
  DAT_fffefff4 = DAT_fffefff4 & 0xf7;
  return;
}

