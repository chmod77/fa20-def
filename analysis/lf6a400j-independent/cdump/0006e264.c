
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e264(void)

{
  uint uVar1;
  char cVar2;
  
  cVar2 = '\x01';
  for (uVar1 = 0; (uVar1 & 0xff) < 7; uVar1 = uVar1 + 1) {
    uVar1 = uVar1 & 0xff;
    if ((*(byte *)(uVar1 * 3 + -0x1142c) & 0x20) != 0) {
      _DAT_fffeec50 = (undefined2)uVar1;
      DAT_fffeec4f = DAT_fffeec4f + '\x01';
      DAT_fffeec52 = cVar2;
    }
    cVar2 = cVar2 << 1;
  }
  return;
}

