
/* WARNING: Removing unreachable block (ram,0x00159d4a) */

void FUN_00159d14(void)

{
  undefined2 uVar1;
  
  if ((DAT_ffff2d7a & 0x20) == 0) {
    uVar1 = FUN_00001550(0xf0);
    DAT_ffff2d7a = DAT_ffff2d7a | 0x40;
  }
  else {
    FUN_0015a440();
    uVar1 = FUN_00001550(0xf0);
    DAT_ffff2d7a = DAT_ffff2d7a & 0x9f | 0x80;
  }
  FUN_00001550(uVar1);
  return;
}

