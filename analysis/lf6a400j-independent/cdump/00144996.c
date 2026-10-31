
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144996(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff72c & 8) == 0;
  if (bVar1) {
    DAT_ffff1e14 = DAT_ffff1e14 & 0xfb;
  }
  else {
    DAT_ffff1e14 = DAT_ffff1e14 | 4;
  }
  bVar2 = DAT_ffff1e14 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e14 & 0xfd;
  }
  DAT_ffff1e14 = bVar2;
  bVar2 = DAT_ffff1e15 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e15 & 0xfd;
  }
  DAT_ffff1e15 = bVar2;
  return;
}

