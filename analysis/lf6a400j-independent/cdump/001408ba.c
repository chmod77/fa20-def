
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001408ba(uint param_1,undefined4 param_2)

{
  if ((DAT_ffff1cd3 & 0x10) == 0) {
    FUN_001413ba(_DAT_ffff1ce2,param_1 & 0xffff,0x20);
    if (_DAT_ffff1ce2 < 0xfff) {
      _DAT_ffff1ce2 = _DAT_ffff1ce2 + 0x20;
    }
    if (0xffe < _DAT_ffff1ce2) {
      _DAT_ffff1ce2 = 0;
      DAT_ffff1cd3 = DAT_ffff1cd3 | 0x10;
    }
  }
  else {
    DAT_ffff1cd3 = DAT_ffff1cd3 & 0xef;
    FUN_00001592(param_1,param_2,param_1);
    for (; _DAT_ffff1ce2 < 0x10e; _DAT_ffff1ce2 = FUN_00001540(_DAT_ffff1ce2 + 1)) {
      FUN_00140bc4((int)(short)_DAT_ffff1ce2,&DAT_ffff1cdc);
      if (_DAT_ffff1cdc != -1) {
        DAT_ffff1cd3 = DAT_ffff1cd3 | 1;
      }
      if (_DAT_ffff1ce2 == 0x87) {
        FUN_00001592();
      }
    }
    FUN_00001592();
    _DAT_ffff1ce2 = 0;
    DAT_ffff1ce1 = DAT_ffff1ce1 + '\x01';
  }
  return;
}

