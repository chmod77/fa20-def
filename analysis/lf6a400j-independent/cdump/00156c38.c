
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00156c38(void)

{
  uint uVar1;
  byte bVar2;
  
  FUN_0015a660(0xfffffffb);
  FUN_0015a666(1);
  _DAT_fffee6a0 = FUN_00149750();
  _DAT_ffff2aa0 = FUN_001493e0();
  _DAT_fffee744 = FUN_001493e6();
  DAT_ffffab41 = FUN_0014942c();
  uVar1 = FUN_001418fc();
  bVar2 = DAT_fffef310 | 8;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffef310 & 0xf7;
  }
  DAT_fffef310 = bVar2;
  uVar1 = FUN_00141908();
  bVar2 = DAT_fffef310 | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffef310 & 0xef;
  }
  DAT_fffef310 = bVar2;
  uVar1 = FUN_00141914();
  bVar2 = DAT_fffef310 | 4;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffef310 & 0xfb;
  }
  DAT_fffef310 = bVar2;
  FUN_0013b86a();
  uVar1 = FUN_001445ea();
  bVar2 = DAT_ffff0006 | 2;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff0006 & 0xfd;
  }
  DAT_ffff0006 = bVar2;
  return;
}

