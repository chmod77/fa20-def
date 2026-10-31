
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00148a72(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  if ((param_1 & 1) == 0) {
    _DAT_ffff6756 = _DAT_ffff6756 & 0xfffb;
  }
  else {
    _DAT_ffff6756 = _DAT_ffff6756 | 4;
  }
  if ((_DAT_ffff6756 & 4) == 0) {
    _DAT_fffff764 = _DAT_fffff764 & 0xfffb;
  }
  else {
    _DAT_fffff764 = _DAT_fffff764 | 4;
  }
  FUN_00001550(uVar1);
  return;
}

