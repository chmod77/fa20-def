
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001592(void)

{
  ushort uVar1;
  undefined4 uVar2;
  
  DAT_ffffab7d = FUN_0000152c(DAT_ffffab7d + 1);
  if (DAT_ffffab7d != -1) {
    uVar1 = _DAT_ffff6750 & 0x20;
    uVar2 = FUN_00001550(0xf0);
    if ((bool)(~(uVar1 != 0) & 1)) {
      _DAT_ffff6750 = _DAT_ffff6750 | 0x20;
    }
    else {
      _DAT_ffff6750 = _DAT_ffff6750 & 0xffdf;
    }
    if ((_DAT_ffff6750 & 0x20) == 0) {
      _DAT_fffff75e = _DAT_fffff75e & 0xffdf;
    }
    else {
      _DAT_fffff75e = _DAT_fffff75e | 0x20;
    }
    FUN_00001550(uVar2);
    return;
  }
  return;
}

