
undefined4 FUN_000b1cac(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_8 [8];
  
  FUN_000b2bd0((DAT_ffff0000 & 2) != 0,(int)DAT_ffff04f0,(int)DAT_ffffab41,(DAT_fffeef76 & 8) != 0,1
               ,((int)DAT_fffef499 & 0x80U) != 0,local_8);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff04f5 | 0x40;
  if ((local_8[0] & 1) == 0) {
    bVar2 = DAT_ffff04f5 & 0xbf;
  }
  DAT_ffff04f5 = bVar2;
  uVar1 = FUN_00001550(uVar1);
  return uVar1;
}

