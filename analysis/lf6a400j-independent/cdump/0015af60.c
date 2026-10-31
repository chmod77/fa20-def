
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015af60(int param_1,short param_2,byte param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  if (param_1 == 0) {
    DAT_fffff4eb = DAT_fffff4eb & 0x8f | (param_3 & 7) << 4;
    uVar2 = param_2 - _DAT_fffff4e4;
    uVar1 = (_DAT_fffff4e0 + 2) - _DAT_fffff4e4;
    _DAT_fffff4e4 = _DAT_fffff4e0 + 2;
    if (uVar1 < uVar2) {
      _DAT_fffff4e4 = param_2;
      return;
    }
  }
  return;
}

