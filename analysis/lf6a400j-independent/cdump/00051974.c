
void FUN_00051974(void)

{
  byte bVar1;
  
  FUN_00051a74();
  FUN_00051be8();
  FUN_00051c50();
  FUN_00051cc8();
  FUN_00051d5e();
  FUN_00051e92();
  FUN_0005205e();
  FUN_000522ac();
  FUN_00052306();
  FUN_0005234e();
  FUN_000524f6();
  FUN_00052514();
  FUN_00052548();
  bVar1 = DAT_fffef02b | 2;
  if ((DAT_fffeef98 & 2) == 0) {
    bVar1 = DAT_fffef02b & 0xfd;
  }
  DAT_fffef02b = bVar1 & 0xe3 | (DAT_fffeef98 >> 2 & 7) << 2;
  bVar1 = DAT_fffef157 | 2;
  if ((DAT_ffff0000 & 2) == 0) {
    bVar1 = DAT_fffef157 & 0xfd;
  }
  DAT_fffef157 = bVar1;
  return;
}

