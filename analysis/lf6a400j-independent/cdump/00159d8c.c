
/* WARNING: Removing unreachable block (ram,0x00159dc2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00159d8c(void)

{
  undefined2 uVar1;
  
  if (((int)(char)DAT_ffff2d7a & 0x80U) == 0) {
    if ((DAT_ffff2d7a & 0x40) == 0) {
      uVar1 = FUN_00001550(0xf0);
      DAT_ffff2d7a = DAT_ffff2d7a | 0x20;
    }
    else {
      FUN_0015a440();
      uVar1 = FUN_00001550(0xf0);
      DAT_ffff2d7a = DAT_ffff2d7a & 0x9f | 0x80;
    }
    FUN_00001550(uVar1);
  }
  uVar1 = FUN_00001550(0xf0);
  _DAT_fffff480 = _DAT_fffff480 & 0xdfff;
  _DAT_fffff482 = _DAT_fffff482 & 0xdfff;
  FUN_00001550(uVar1);
  return;
}

