
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005d2ee(void)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  
  uVar1 = 4;
  if ((_DAT_fffef64c & 0x100) != 0) {
    uVar1 = 5;
  }
  pcVar4 = &DAT_ffff314c + uVar1;
  cVar2 = '\x01';
  for (bVar3 = 0; bVar3 < uVar1; bVar3 = bVar3 + 1) {
    *pcVar4 = *pcVar4 + cVar2;
    if (*pcVar4 != '\0') {
      cVar2 = '\0';
    }
    pcVar4 = pcVar4 + -1;
  }
  return;
}

