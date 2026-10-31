
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c07dc(ushort param_1,ushort param_2,ushort *param_3)

{
  bool bVar1;
  ushort uVar2;
  
  bVar1 = true;
  if ((param_1 < 0xb4) && (param_2 < 0xb4)) {
    bVar1 = false;
  }
  uVar2 = 0;
  if ((bVar1) && (DAT_fffec99a == '\0')) {
    uVar2 = 1;
  }
  _DAT_fffec998 = uVar2 + _DAT_fffec998;
  if (_DAT_fffec998 < uVar2) {
    _DAT_fffec998 = 0xffff;
  }
  *param_3 = _DAT_fffec998;
  DAT_fffec99a = bVar1;
  return;
}

