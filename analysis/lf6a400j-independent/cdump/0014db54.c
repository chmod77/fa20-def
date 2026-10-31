
void FUN_0014db54(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff3b85 | 2;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff3b85 & 0xfd;
  }
  DAT_ffff3b85 = bVar1;
  return;
}

