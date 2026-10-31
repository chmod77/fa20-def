
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003c256(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = _DAT_ffff2a80;
  uVar2 = _DAT_fffef724;
  if ((DAT_ffffab40 & 0x40) == 0) {
    if ((DAT_ffff03d8 & 1) == 0) {
      uVar3 = FUN_0016b3c8(_DAT_ffff2a78,_DAT_ffff09be);
      uVar2 = FUN_0016b3c8(uVar2,_DAT_ffff09be);
      _DAT_ffff2f84 = FUN_0016b3c8(_DAT_ffff2f84,_DAT_ffff09be);
      _DAT_ffff2f88 = FUN_0016b3c8(_DAT_ffff2f88,_DAT_ffff09be);
    }
    else {
      uVar3 = FUN_0016b960(_DAT_ffff2a78,0x100);
    }
    if (DAT_ffff29b7 < 5) {
      _DAT_ffff2a80 = FUN_0016b960(uVar1,1);
    }
    else {
      _DAT_ffff2a80 = FUN_0016b3c8(uVar1,_DAT_ffff09be);
    }
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    _DAT_ffff2a80 = 0;
  }
  _DAT_ffff2a7c = (short)((uint)uVar3 >> 8);
  _DAT_ffff2a78 = uVar3;
  _DAT_fffef724 = uVar2;
  return;
}

