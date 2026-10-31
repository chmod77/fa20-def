
void FUN_0015c404(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff2f58 | 2;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff2f58 & 0xfd;
  }
  DAT_ffff2f58 = bVar1;
  return;
}

