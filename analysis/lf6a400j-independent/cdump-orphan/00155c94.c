
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00155c94(void)

{
  short sVar1;
  byte bVar3;
  undefined2 uVar2;
  uint uVar4;
  undefined *puVar5;
  
  _DAT_fffeef60 = FUN_001496ca(0);
  sVar1 = FUN_001496ca(0);
  _DAT_fffef248 = sVar1 << 6;
  uVar4 = (uint)_DAT_ffffabc2 * (uint)_DAT_fffef248 >> 0xf;
  DAT_fffee6d0 = 0xff;
  if (uVar4 * 32000 < 0x7fff8000) {
    DAT_fffee6d0 = (undefined1)((uint)(&DAT_0000ffff + uVar4 * 64000) >> 0x18);
  }
  sVar1 = FUN_001497ba();
  _DAT_fffef236 = sVar1 << 6;
  puVar5 = &DAT_0000ffff;
  if ((uint)_DAT_fffef236 * 32000 < 0x7fff8000) {
    puVar5 = (undefined *)((uint)(&DAT_0000ffff + (uint)_DAT_fffef236 * 64000) >> 0x10);
  }
  _DAT_fffeed6c = (undefined2)((uint)puVar5 >> 6);
  sVar1 = FUN_001497b4();
  _DAT_fffef238 = sVar1 << 6;
  if ((uint)_DAT_fffef238 * 32000 < 0x7fff8000) {
    puVar5 = (undefined *)((uint)(&DAT_0000ffff + (uint)_DAT_fffef238 * 64000) >> 0x10);
  }
  else {
    puVar5 = &DAT_0000ffff;
  }
  _DAT_fffeed6e = (undefined2)((uint)puVar5 >> 6);
  _DAT_fffeed76 = FUN_001497c6();
  _DAT_fffeed74 = FUN_001497c0();
  _DAT_ffff2f92 = FUN_001497cc();
  _DAT_ffff2f94 = FUN_001497d2();
  _DAT_ffff2f96 = FUN_001497d8();
  _DAT_ffff2f98 = FUN_001497de();
  _DAT_fffeef3a = FUN_001497e4();
  _DAT_fffeef3c = FUN_001497ea();
  uVar4 = FUN_001497f0();
  bVar3 = DAT_ffff2fd9 | 0x10;
  if ((uVar4 & 1) == 0) {
    bVar3 = DAT_ffff2fd9 & 0xef;
  }
  DAT_ffff2fd9 = bVar3;
  uVar4 = FUN_001497fc();
  bVar3 = DAT_ffff2fd9 | 0x20;
  if ((uVar4 & 1) == 0) {
    bVar3 = DAT_ffff2fd9 & 0xdf;
  }
  DAT_ffff2fd9 = bVar3;
  uVar4 = FUN_00149808();
  bVar3 = DAT_ffff2fd9 | 0x40;
  if ((uVar4 & 1) == 0) {
    bVar3 = DAT_ffff2fd9 & 0xbf;
  }
  DAT_ffff2fd9 = bVar3;
  _DAT_fffeef48 = FUN_00149814();
  _DAT_fffeef46 = FUN_0014981a();
  _DAT_fffeef4c = FUN_00149820();
  _DAT_fffeef4a = FUN_00149826();
  DAT_fffef3d4 = FUN_0014982c();
  _DAT_fffeef64 = FUN_0014976a();
  _DAT_fffef24c = FUN_0014976a();
  _DAT_fffef24c = _DAT_fffef24c << 6;
  uVar4 = FUN_00149764();
  puVar5 = &DAT_0000ffff;
  if ((uVar4 & 0xffff) * 32000 < 0x7fff8000) {
    puVar5 = (undefined *)((uint)(&DAT_0000ffff + (uVar4 & 0xffff) * 64000) >> 0x10);
  }
  DAT_fffeef2a = FUN_0000152c((uint)puVar5 >> 2);
  _DAT_fffee6a0 = FUN_00149750();
  _DAT_fffee744 = FUN_001493e6();
  _DAT_fffeef38 = FUN_00149778();
  DAT_fffef542 = FUN_00142794();
  DAT_fffef543 = FUN_001427a0();
  uVar4 = FUN_00142794();
  bVar3 = DAT_fffef899 | 0x10;
  if ((uVar4 & 1) == 0) {
    bVar3 = DAT_fffef899 & 0xef;
  }
  DAT_fffef899 = bVar3;
  uVar4 = FUN_001427a0();
  bVar3 = DAT_fffef899 | 0x20;
  if ((uVar4 & 1) == 0) {
    bVar3 = DAT_fffef899 & 0xdf;
  }
  DAT_fffef899 = bVar3;
  FUN_001427a8();
  FUN_001427ba();
  uVar2 = FUN_00001550(0xf0);
  uVar4 = FUN_001427c8();
  bVar3 = DAT_fffef8a4 | 0x10;
  if ((uVar4 & 1) == 0) {
    bVar3 = DAT_fffef8a4 & 0xef;
  }
  DAT_fffef8a4 = bVar3;
  uVar4 = FUN_001427d4();
  bVar3 = DAT_fffef8a4 | 0x20;
  if ((uVar4 & 1) == 0) {
    bVar3 = DAT_fffef8a4 & 0xdf;
  }
  DAT_fffef8a4 = bVar3;
  FUN_00001550(uVar2);
  FUN_001427e0();
  FUN_001427f2();
  uVar4 = FUN_001426e0();
  bVar3 = DAT_fffeef74 | 0x80;
  if ((uVar4 & 1) == 0) {
    bVar3 = DAT_fffeef74 & 0x7f;
  }
  DAT_fffef207 = DAT_fffef207 & 0xfe;
  DAT_fffeef74 = bVar3;
  uVar4 = FUN_00144db8();
  bVar3 = DAT_fffef9f4 | 1;
  if ((uVar4 & 1) == 0) {
    bVar3 = DAT_fffef9f4 & 0xfe;
  }
  DAT_fffef9f4 = bVar3;
  _DAT_fffeef6e = FUN_0014978a();
  _DAT_fffef256 = FUN_0014978a();
  _DAT_fffef256 = _DAT_fffef256 << 6;
  uVar4 = FUN_00149784();
  _DAT_fffeef20 = 0xffff;
  if ((uVar4 & 0xffff) * 32000 < 0x7fff8000) {
    _DAT_fffeef20 = (undefined2)((uint)(&DAT_0000ffff + (uVar4 & 0xffff) * 64000) >> 0x10);
  }
  _DAT_fffeef70 = FUN_00149796();
  _DAT_fffef258 = FUN_00149796();
  _DAT_fffef258 = _DAT_fffef258 << 6;
  uVar4 = FUN_00149790();
  if ((uVar4 & 0xffff) * 32000 < 0x7fff8000) {
    _DAT_fffeef22 = (undefined2)((uint)(&DAT_0000ffff + (uVar4 & 0xffff) * 64000) >> 0x10);
  }
  else {
    _DAT_fffeef22 = 0xffff;
  }
  return uVar4;
}

