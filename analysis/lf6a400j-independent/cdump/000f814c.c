
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f814c(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_8 [8];
  
  FUN_000ff638((DAT_fffef152 & 0x20) != 0,(int)_DAT_fffeef10,(int)_DAT_fffeeee0,DAT_fffeeec1 & 1,
               (DAT_fffeef76 & 8) != 0,_DAT_ffff1698,(DAT_ffff0770 & 0x20) != 0,_DAT_ffff2fac,
               _DAT_ffff3b2c,local_8,&DAT_ffff3b2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff076c | 2;
  if ((local_8[0] & 1) == 0) {
    bVar2 = DAT_ffff076c & 0xfd;
  }
  DAT_ffff076c = bVar2;
  uVar1 = FUN_00001550(uVar1);
  return uVar1;
}

