
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00159968(short param_1,ushort param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  if ((ushort)((_DAT_fffff4e0 + 2) - param_1) < param_2) {
    _DAT_fffff4e8 = param_1 + param_2;
  }
  else {
    _DAT_fffff4e8 = _DAT_fffff4e0 + 2;
  }
  _DAT_fffff480 = _DAT_fffff480 & 0xdfff;
  _DAT_fffff482 = _DAT_fffff482 | 0x2000;
  FUN_00001550(uVar1);
  return;
}

