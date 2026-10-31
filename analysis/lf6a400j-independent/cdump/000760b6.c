
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000760b6(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  if ((DAT_ffff6793 & 0x7f) == 0) {
    if (_DAT_ffff7b96 == 2) {
      if (DAT_ffff6793 == 0) {
        DAT_ffff6b91 = 0x7e;
        DAT_ffff6b92 = 0;
        _DAT_ffff7b98 = 2;
      }
      else if (DAT_ffff6793 == 0x80) {
        _DAT_ffff8578 = 300;
        DAT_ffff857c = 1;
        DAT_ffff857d = 1;
      }
      goto LAB_0007616c;
    }
    DAT_ffff6b93 = 0x13;
  }
  else {
    DAT_ffff6b93 = 0x12;
  }
  DAT_ffff6b92 = 0x3e;
  DAT_ffff6b91 = 0x7f;
  _DAT_ffff7b98 = 3;
LAB_0007616c:
  FUN_00001550(uVar1);
  return;
}

