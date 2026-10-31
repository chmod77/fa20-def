
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065e74(void)

{
  byte bVar1;
  uint uVar2;
  ushort uVar4;
  undefined4 uVar3;
  ushort uVar5;
  
  bVar1 = DAT_fffefff6;
  if ((DAT_fffefff6 & 0x20) == 0) {
    uVar2 = FUN_00062cac((int)(short)_DAT_ffff00ee,(int)(short)_DAT_ffff00f0,0xffffffff);
    bVar1 = DAT_fffefff6 | 0x20;
    if ((uVar2 & 1) == 0) {
      bVar1 = DAT_fffefff6 & 0xdf;
    }
  }
  DAT_fffefff6 = bVar1;
  bVar1 = DAT_fffefff6;
  if ((DAT_fffefff6 & 0x10) == 0) {
    uVar2 = FUN_00062cac((int)(short)_DAT_ffff00ee,(int)(short)_DAT_ffff00f2,0xffffffff);
    bVar1 = DAT_fffefff6 | 0x10;
    if ((uVar2 & 1) == 0) {
      bVar1 = DAT_fffefff6 & 0xef;
    }
  }
  DAT_fffefff6 = bVar1;
  uVar4 = FUN_0016bd34((uint)_DAT_ffff00fa - (uint)_DAT_ffff00ee);
  uVar3 = FUN_0016caec((uint)_DAT_ffff00ee - (uint)_DAT_ffff34c0);
  uVar5 = FUN_00001540(uVar3);
  if (((int)DAT_fffef555 & 0x80U) == 0) {
    if (((((_DAT_ffff00ee < 0x2b5f) && (0x7ad < _DAT_ffff00ee)) && (uVar5 < 0x51e)) &&
        ((0x6a7 < uVar4 && ((DAT_fffefff4 & 0x20) == 0)))) &&
       (((DAT_fffefff3 & 0x20) == 0 && ((DAT_ffff034e & 1) != 0)))) {
      DAT_fffefff4 = DAT_fffefff4 & 0xfb;
      _DAT_ffff34c0 = _DAT_ffff00ee;
      DAT_ffff013c = 0x20;
    }
    else {
      DAT_fffefff4 = DAT_fffefff4 | 4;
      DAT_ffff013c = 0x10;
    }
  }
  uVar4 = FUN_0016bd34((uint)_DAT_ffff00fc - (uint)_DAT_ffff00f0);
  uVar3 = FUN_0016caec((uint)_DAT_ffff00f0 - (uint)_DAT_ffff34c2);
  uVar5 = FUN_00001540(uVar3);
  if ((((_DAT_ffff00f0 < 0x2b10) && (0x822 < _DAT_ffff00f0)) &&
      ((uVar5 < 0x51e &&
       (((0x6a7 < uVar4 && ((DAT_fffefff4 & 0x10) == 0)) && ((DAT_fffefff3 & 0x10) == 0)))))) &&
     ((DAT_ffff034e & 2) != 0)) {
    DAT_fffefff4 = DAT_fffefff4 & 0xfd;
    _DAT_ffff34c2 = _DAT_ffff00f0;
    DAT_ffff013d = 0x20;
  }
  else {
    DAT_fffefff4 = DAT_fffefff4 | 2;
    DAT_ffff013d = 0x10;
  }
  uVar4 = FUN_0016bd34((uint)_DAT_ffff00fe - (uint)_DAT_ffff00f2);
  uVar3 = FUN_0016caec((uint)_DAT_ffff00f2 - (uint)_DAT_ffff34c4);
  uVar5 = FUN_00001540(uVar3);
  if ((((_DAT_ffff00f2 < 0x71af) && (uVar5 < 0x147b)) &&
      ((0x1b4a < uVar4 && (((DAT_fffefff4 & 8) == 0 && ((DAT_fffefff3 & 8) == 0)))))) &&
     ((DAT_ffff034e & 4) != 0)) {
    DAT_fffefff4 = DAT_fffefff4 & 0xfe;
    _DAT_ffff34c4 = _DAT_ffff00f2;
    DAT_ffff013e = 0x20;
  }
  else {
    DAT_fffefff4 = DAT_fffefff4 | 1;
    DAT_ffff013e = 0x10;
  }
  _DAT_ffff34d8 = -_DAT_ffff34c0;
  _DAT_ffff34da = -_DAT_ffff34c2;
  _DAT_ffff34dc = -_DAT_ffff34c4;
  return;
}

