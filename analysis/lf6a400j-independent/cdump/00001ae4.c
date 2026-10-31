
void FUN_00001ae4(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = false;
  for (uVar2 = 0; (uVar2 & 0xff) < 0xb; uVar2 = uVar2 + 1) {
    uVar2 = uVar2 & 0xff;
    if (*(char *)(uVar2 + 0x404) != (&DAT_00008014)[uVar2]) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    DAT_ffff6569 = DAT_ffff6569 | 4;
    return;
  }
  DAT_ffff6569 = DAT_ffff6569 & 0xfb;
  return;
}

