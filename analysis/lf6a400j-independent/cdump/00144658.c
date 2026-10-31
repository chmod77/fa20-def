
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144658(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff72c & 0x400) == 0;
  if (bVar1) {
    DAT_ffff1e04 = DAT_ffff1e04 & 0xfb;
  }
  else {
    DAT_ffff1e04 = DAT_ffff1e04 | 4;
  }
  bVar2 = DAT_ffff1e04 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e04 & 0xfd;
  }
  DAT_ffff1e04 = bVar2;
  bVar2 = DAT_ffff1e05 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e05 & 0xfd;
  }
  DAT_ffff1e05 = bVar2;
  return;
}

