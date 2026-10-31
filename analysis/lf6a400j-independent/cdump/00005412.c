
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00005412(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  
  if ((param_2 & _DAT_ffff8b14) != 0) {
    sVar2 = (short)(param_2 >> 0x10);
    sVar3 = (short)param_2;
    if (((param_2 >> 0x10 & (int)_DAT_ffffd030) == 0) &&
       ((param_2 & 0xffff & (int)_DAT_ffffd032) == 0)) {
      if (((param_2 >> 0x10 & (int)_DAT_ffffd038) == 0) &&
         ((param_2 & 0xffff & (int)_DAT_ffffd03a) == 0)) {
        DAT_ffff8b1c = 0;
        return 0;
      }
      uVar1 = FUN_00001550(0x70);
      _DAT_ffff8b14 = _DAT_ffff8b14 & ~param_2;
      _DAT_ffffd038 = sVar2;
      _DAT_ffffd03a = sVar3;
      FUN_00001550(uVar1);
      DAT_ffff8b1c = 1;
      return 1;
    }
    uVar1 = FUN_00001550(0x70);
    _DAT_ffff8b14 = _DAT_ffff8b14 & ~param_2;
    _DAT_ffffd030 = sVar2;
    _DAT_ffffd032 = sVar3;
    _DAT_ffffd038 = sVar2;
    _DAT_ffffd03a = sVar3;
    FUN_00001550(uVar1);
  }
  DAT_ffff8b1c = 0;
  return 1;
}

