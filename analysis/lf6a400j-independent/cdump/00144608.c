
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144608(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff72c & 1) == 0;
  if (bVar1) {
    DAT_ffff1e02 = DAT_ffff1e02 & 0xfb;
  }
  else {
    DAT_ffff1e02 = DAT_ffff1e02 | 4;
  }
  bVar2 = DAT_ffff1e02 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e02 & 0xfd;
  }
  DAT_ffff1e02 = bVar2;
  bVar2 = DAT_ffff1e03 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e03 & 0xfd;
  }
  DAT_ffff1e03 = bVar2;
  return;
}

