
/* WARNING: Removing unreachable block (ram,0x00155534) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015525c(void)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0015a64e((int)DAT_ffffab40);
  FUN_0015a63c((int)(char)DAT_ffff2a14);
  FUN_0015a654();
  FUN_0014e6a2();
  FUN_00149508((DAT_fffef32a & 8) != 0);
  FUN_00149500((int)_DAT_ffff09c6);
  FUN_0014e68a();
  FUN_00145e52((DAT_ffff2a14 & 0x40) != 0);
  FUN_0014c090();
  FUN_00144c78();
  FUN_00144c72(((int)DAT_fffee690 & 0x80U) != 0);
  FUN_00145996();
  FUN_0014595c(((int)DAT_ffff067c & 0x80U) != 0);
  FUN_0014c1f6();
  FUN_0015bdcc();
  FUN_0015bde0();
  FUN_0015bdf4();
  FUN_0015be08((DAT_fffef82d & 0x20) != 0);
  FUN_0015be1c((int)DAT_fffeed14);
  FUN_0015b43a((int)_DAT_fffee682);
  FUN_0015b440((int)_DAT_fffee680);
  FUN_00001550(0xf0);
  FUN_0015c3f8((int)_DAT_ffff1272);
  FUN_0015c3fe();
  FUN_0015c404((DAT_ffff077c & 2) != 0);
  FUN_0015c418((int)DAT_ffff077f);
  FUN_00001550();
  FUN_00145ec6((DAT_fffef37e & 4) != 0);
  FUN_0015ae9e();
  FUN_001415cc(((int)DAT_ffffab42 & 0x80U) != 0);
  if ((DAT_fffef4c4 != '\x04') && (DAT_fffef4c4 != '\x05')) {
    FUN_0014d8c4((int)DAT_ffff04fa);
  }
  for (uVar2 = 0; uVar1 = uVar2 & 0xff, uVar1 < 4; uVar2 = uVar2 + 1) {
    uVar2 = uVar2 & 0xff;
    if ((*(ushort *)(&DAT_00168ecc)[uVar2 * 2] < 0x168) ||
       (*(ushort *)(&DAT_00168ed0)[uVar2 * 2] < 0x168)) {
      if (uVar1 == 0) {
        FUN_0014f724((int)_DAT_fffeed28,uVar2);
      }
      else if (uVar1 == 1) {
        FUN_0014f724((int)_DAT_fffeed2a,uVar2);
      }
      else if (uVar1 == 2) {
        FUN_0014f724((int)_DAT_fffeed2c);
      }
      else {
        FUN_0014f724((int)_DAT_fffeed2e,uVar2);
      }
    }
    else {
      FUN_0014f724(0,uVar2);
    }
  }
  FUN_00146128();
  FUN_0014616a((DAT_ffff067d & 4) != 0);
  FUN_0014983a();
  FUN_001461ea();
  FUN_001461aa((DAT_fffef388 & 2) != 0);
  if (((int)DAT_ffff054a & 0x80U) == 0) {
    FUN_0014c336(0);
    FUN_0014c272(0);
    FUN_0014c2d4(DAT_ffff054f);
    FUN_0014c210(DAT_ffff054f);
  }
  else {
    FUN_0014c336(DAT_ffff054f);
    FUN_0014c272(DAT_ffff054f);
    FUN_0014c2d4(0);
    FUN_0014c210(0);
  }
  FUN_001463f2(DAT_fffeef98,DAT_fffeef99);
  FUN_0014e6ce((int)DAT_ffff0485);
  FUN_0015a678((int)DAT_fffef4d4);
  FUN_0015a67e((int)DAT_fffef4d5);
  FUN_0015a684((int)DAT_fffef4d6);
  FUN_0015a68a((int)DAT_fffef4d7);
  FUN_0015a690((int)DAT_fffef4d8);
  FUN_0015a696((int)DAT_fffef4d9);
  FUN_0015a69c((int)DAT_fffef4da);
  FUN_0015a6a2((int)DAT_fffef4db);
  FUN_0015a6a8((int)DAT_fffef4dc);
  FUN_0015a6ae((int)DAT_fffef4dd);
  FUN_0015a6b4((int)DAT_fffef4de);
  FUN_0015a6ba((int)DAT_fffef4df);
  FUN_0015a6c0((int)DAT_fffef4e0);
  FUN_0015a6c6((int)DAT_fffef4e1);
  FUN_0015a6cc((int)DAT_fffef4e2);
  if (((int)(char)DAT_fffef4d2 & 0x80U) == 0) {
    FUN_0015a6d2(0);
  }
  else {
    FUN_0015a6d2(1);
  }
  if ((DAT_fffef4d2 & 0x40) == 0) {
    FUN_0015a6e6(0);
  }
  else {
    FUN_0015a6e6(1);
  }
  if ((DAT_fffef4d2 & 0x20) == 0) {
    FUN_0015a6fa(0);
  }
  else {
    FUN_0015a6fa(1);
  }
  if ((DAT_fffef4d2 & 8) == 0) {
    FUN_0015a70e(0);
  }
  else {
    FUN_0015a70e(1);
  }
  if (((int)DAT_fffef4e3 & 0x80U) == 0) {
    FUN_0015a722(0);
  }
  else {
    FUN_0015a722(1);
  }
  if (((DAT_fffeeec2 & 2) == 0) || ((DAT_fffef9f2 & 0x40) != 0)) {
    FUN_0014640c(0);
  }
  else {
    FUN_0014640c(1);
  }
  FUN_00039182();
  return;
}

