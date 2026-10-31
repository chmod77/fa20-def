
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001448f0(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff754 & 1) == 0;
  if (bVar1) {
    DAT_ffff1e10 = DAT_ffff1e10 & 0xfb;
  }
  else {
    DAT_ffff1e10 = DAT_ffff1e10 | 4;
  }
  bVar2 = DAT_ffff1e10 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e10 & 0xfd;
  }
  DAT_ffff1e10 = bVar2;
  bVar2 = DAT_ffff1e11 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e11 & 0xfd;
  }
  DAT_ffff1e11 = bVar2;
  return;
}

