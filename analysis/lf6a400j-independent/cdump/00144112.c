
void FUN_00144112(void)

{
  byte bVar1;
  
  DAT_ffff1a59 = DAT_ffff1a56;
  bVar1 = DAT_ffff2c08 | 2;
  if ((DAT_ffff2c08 & 4) == 0) {
    bVar1 = DAT_ffff2c08 & 0xfd;
  }
  DAT_ffff2c08 = bVar1;
  return;
}

