
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001447ec(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff72c & 2) != 0;
  if (bVar1) {
    DAT_ffff1e0c = DAT_ffff1e0c & 0xfb;
  }
  else {
    DAT_ffff1e0c = DAT_ffff1e0c | 4;
  }
  bVar2 = DAT_ffff1e0c | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e0c & 0xfd;
  }
  DAT_ffff1e0c = bVar2;
  bVar2 = DAT_ffff1e0d | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e0d & 0xfd;
  }
  DAT_ffff1e0d = bVar2;
  return;
}

