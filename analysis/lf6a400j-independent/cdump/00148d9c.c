
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00148d9c(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  if ((param_1 & 1) == 0) {
    _DAT_ffff6756 = _DAT_ffff6756 & 0xfff7;
  }
  else {
    _DAT_ffff6756 = _DAT_ffff6756 | 8;
  }
  if ((_DAT_ffff6756 & 8) == 0) {
    _DAT_fffff764 = _DAT_fffff764 & 0xfff7;
  }
  else {
    _DAT_fffff764 = _DAT_fffff764 | 8;
  }
  FUN_00001550(uVar1);
  return;
}

