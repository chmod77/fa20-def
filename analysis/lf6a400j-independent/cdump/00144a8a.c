
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144a8a(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff72c & 0x400) != 0;
  if (bVar1) {
    DAT_ffff1e18 = DAT_ffff1e18 & 0xfb;
  }
  else {
    DAT_ffff1e18 = DAT_ffff1e18 | 4;
  }
  bVar2 = DAT_ffff1e18 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e18 & 0xfd;
  }
  DAT_ffff1e18 = bVar2;
  bVar2 = DAT_ffff1e19 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e19 & 0xfd;
  }
  DAT_ffff1e19 = bVar2;
  return;
}

