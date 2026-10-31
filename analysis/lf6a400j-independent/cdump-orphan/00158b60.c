
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00158b60(void)

{
  uint uVar1;
  byte bVar3;
  undefined2 uVar2;
  
  _DAT_fffeef60 = FUN_001496ca(0);
  uVar1 = FUN_001496d4(0);
  DAT_fffee6d0 = FUN_0000152c((int)(uVar1 & 0xffff) >> 2);
  _DAT_fffeed6c = FUN_001497ba();
  _DAT_fffeed6e = FUN_001497b4();
  _DAT_fffeed76 = FUN_001497c6();
  _DAT_fffeed74 = FUN_001497c0();
  _DAT_ffff2f92 = FUN_001497cc();
  _DAT_ffff2f94 = FUN_001497d2();
  _DAT_ffff2f96 = FUN_001497d8();
  _DAT_ffff2f98 = FUN_001497de();
  _DAT_fffeef3a = FUN_001497e4();
  _DAT_fffeef3c = FUN_001497ea();
  uVar1 = FUN_001497f0();
  bVar3 = DAT_ffff2fd9 | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff2fd9 & 0xef;
  }
  DAT_ffff2fd9 = bVar3;
  uVar1 = FUN_001497fc();
  bVar3 = DAT_ffff2fd9 | 0x20;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff2fd9 & 0xdf;
  }
  DAT_ffff2fd9 = bVar3;
  uVar1 = FUN_00149808();
  bVar3 = DAT_ffff2fd9 | 0x40;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff2fd9 & 0xbf;
  }
  DAT_ffff2fd9 = bVar3;
  _DAT_fffeef48 = FUN_00149814();
  _DAT_fffeef46 = FUN_0014981a();
  _DAT_fffeef4c = FUN_00149820();
  _DAT_fffeef4a = FUN_00149826();
  uVar1 = FUN_00149764();
  DAT_fffeef2a = FUN_0000152c((int)(uVar1 & 0xffff) >> 2);
  _DAT_fffeef64 = FUN_0014976a();
  _DAT_fffee6a0 = FUN_00149750();
  _DAT_fffee744 = FUN_001493e6();
  _DAT_fffeef38 = FUN_00149778();
  uVar1 = FUN_00142794();
  bVar3 = DAT_fffef899 | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef899 & 0xef;
  }
  DAT_fffef899 = bVar3;
  uVar1 = FUN_001427a0();
  bVar3 = DAT_fffef899 | 0x20;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef899 & 0xdf;
  }
  DAT_fffef899 = bVar3;
  FUN_001427a8();
  FUN_001427ba();
  uVar2 = FUN_00001550(0xf0);
  uVar1 = FUN_001427c8();
  bVar3 = DAT_fffef8a4 | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef8a4 & 0xef;
  }
  DAT_fffef8a4 = bVar3;
  uVar1 = FUN_001427d4();
  bVar3 = DAT_fffef8a4 | 0x20;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef8a4 & 0xdf;
  }
  DAT_fffef8a4 = bVar3;
  FUN_00001550(uVar2);
  FUN_001427e0();
  FUN_001427f2();
  uVar1 = FUN_001426e0();
  bVar3 = DAT_fffeef74 | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffeef74 & 0x7f;
  }
  DAT_fffeef74 = bVar3;
  DAT_fffef207 = DAT_fffef207 & 0xfe;
  return;
}

