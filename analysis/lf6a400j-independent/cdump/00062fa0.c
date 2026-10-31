
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00062fa0(void)

{
  undefined4 uVar1;
  
  if (DAT_ffff0130 == '\0') {
    if (((((DAT_fffefff4 & 0x20) == 0) && ((DAT_fffefff3 & 0x20) == 0)) &&
        ((DAT_fffefff6 & 0x20) == 0)) && ((DAT_fffefff6 & 0x10) == 0)) {
      uVar1 = FUN_00001550(0x70);
      _DAT_ffff34c6 = _DAT_ffff34c0;
      _DAT_ffff34cc = _DAT_ffff34d8;
      FUN_00001550(uVar1);
    }
    if ((((DAT_fffefff4 & 0x10) == 0) && ((DAT_fffefff3 & 0x10) == 0)) &&
       ((DAT_fffefff6 & 0x20) == 0)) {
      uVar1 = FUN_00001550(0x70);
      _DAT_ffff34c8 = _DAT_ffff34c2;
      _DAT_ffff34ce = _DAT_ffff34da;
      FUN_00001550(uVar1);
    }
    if ((((DAT_fffefff4 & 8) == 0) && ((DAT_fffefff3 & 8) == 0)) && ((DAT_fffefff6 & 0x10) == 0)) {
      uVar1 = FUN_00001550(0x70);
      _DAT_ffff34ca = _DAT_ffff34c4;
      _DAT_ffff34d0 = _DAT_ffff34dc;
      FUN_00001550(uVar1);
    }
    if ((((((DAT_fffefff4 & 8) == 0) && ((DAT_fffefff3 & 8) == 0)) && ((DAT_fffefff5 & 4) == 0)) &&
        (((DAT_fffefff5 & 1) == 0 && ((DAT_fffefff6 & 4) == 0)))) && ((DAT_fffefff6 & 1) == 0)) {
      uVar1 = FUN_00001550(0x70);
      if (((int)DAT_ffff0088 & 0x80U) == 0) {
        _DAT_ffff34d2 = 0x4000;
        _DAT_ffff34d4 = 0xc000;
      }
      else {
        _DAT_ffff34d2 = _DAT_ffff34ee;
        _DAT_ffff34d4 = _DAT_ffff34f0;
      }
      FUN_00001550(uVar1);
    }
    uVar1 = FUN_00001550(0x70);
    DAT_ffff34d6 = DAT_ffff0088;
    DAT_ffff34d7 = -DAT_ffff0088;
    FUN_00001550(uVar1);
    DAT_ffff0130 = '\x01';
  }
  return;
}

