
/* WARNING: Removing unreachable block (ram,0x0015b9f0) */
/* WARNING: Removing unreachable block (ram,0x0015ba48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015b8fc(void)

{
  undefined4 uVar1;
  
  DAT_fffeff81 = DAT_ffff20d5 == '\0';
  if ((bool)DAT_fffeff81) {
    if ((DAT_ffff20cc & 1) == 0) {
      if ((_DAT_fffff72c & 0x100) != 0) {
        DAT_ffff20cc = DAT_ffff20cc | 1;
      }
    }
    else if ((_DAT_fffff72c & 0x100) == 0) {
      DAT_ffff20cc = DAT_ffff20cc | 2;
      _DAT_ffffed1a = _DAT_ffffed1a & 0xffbf;
      _DAT_ffffed00 = _DAT_ffffed00 & 0xf0ff | 0xf00;
    }
    DAT_fffeff81 = DAT_ffff20d2 == 0;
    if ((bool)DAT_fffeff81) {
      DAT_fffeff81 = (DAT_ffff20cc & 2) == 0;
    }
  }
  else {
    DAT_ffff20cc = DAT_ffff20cc & 0xfc;
  }
  if (((DAT_ffff20cc & 2) == 0) && ((DAT_ffff0006 & 2) == 0)) {
    DAT_fffeff81 = 0;
    DAT_ffff20cc = DAT_ffff20cc & 0xfc;
  }
  else {
    DAT_ffff20d2 = FUN_0016bd28(DAT_ffff20d2 - 1);
  }
  if (((DAT_ffff0005 & 2) == 0) && ((DAT_ffff0006 & 2) != 0)) {
    uVar1 = FUN_00001550(0xf0);
    _DAT_ffff6740 = _DAT_ffff6740 | 0x2000;
    _DAT_fffff74e = _DAT_fffff74e | 0x2000;
    FUN_00001550(uVar1);
    DAT_ffff20d5 = '\x01';
    DAT_ffff20d3 = 0;
  }
  if (DAT_ffff20d5 != '\0') {
    if (DAT_ffff20d3 < 5) {
      DAT_ffff20d3 = DAT_ffff20d3 + 1;
    }
    else {
      uVar1 = FUN_00001550(0xf0);
      _DAT_ffff6740 = _DAT_ffff6740 & 0xdfff;
      _DAT_fffff74e = _DAT_fffff74e & 0xdfff;
      FUN_00001550(uVar1);
      DAT_ffff20d5 = '\0';
      DAT_ffff20d4 = 0;
    }
    DAT_ffff20d2 = 0x96;
  }
  return;
}

