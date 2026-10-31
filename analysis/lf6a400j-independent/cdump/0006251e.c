
void FUN_0006251e(void)

{
  undefined2 uVar2;
  uint uVar1;
  byte bVar3;
  
  FUN_00067978();
  FUN_000671a2();
  FUN_000663ee();
  FUN_0006934a();
  FUN_0006892c();
  FUN_00068a9a();
  FUN_00068dfe();
  FUN_0006825a();
  FUN_00068b96();
  FUN_00069888();
  FUN_00068ce4();
  FUN_000688e6();
  FUN_00068bde();
  FUN_00068b4e();
  thunk_FUN_0015ae50();
  DAT_ffff0353 = FUN_0015aabc(0x80);
  DAT_ffff0354 = FUN_0015ab08();
  uVar2 = FUN_00001550(0xf0);
  uVar1 = FUN_0015aaf0();
  bVar3 = DAT_fffeecfa | 2;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffeecfa & 0xfd;
  }
  DAT_fffeecfa = bVar3;
  FUN_00001550(uVar2);
  DAT_ffff0355 = FUN_0015ab02();
  return;
}

