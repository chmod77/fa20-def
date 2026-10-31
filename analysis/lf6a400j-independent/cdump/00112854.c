
void FUN_00112854(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_14 [4];
  byte abStack_10 [8];
  
  FUN_001150e4(&DAT_ffff37d9,(int)DAT_fffefa46,local_14);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff08c3 | 1;
  if ((local_14[0] & 1) == 0) {
    bVar2 = DAT_ffff08c3 & 0xfe;
  }
  DAT_ffff08c3 = bVar2;
  FUN_00001550(uVar1);
  FUN_00115100(&DAT_ffff37d9,(int)DAT_fffefa46,abStack_10);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff08c2 | 1;
  if ((abStack_10[0] & 1) == 0) {
    bVar2 = DAT_ffff08c2 & 0xfe;
  }
  DAT_ffff08c2 = bVar2;
  FUN_00001550(uVar1);
  return;
}

