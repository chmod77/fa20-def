
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e2f8(void)

{
  uint uVar1;
  char cVar2;
  
  cVar2 = '\x01';
  for (uVar1 = 0; (uVar1 & 0xff) < 7; uVar1 = uVar1 + 1) {
    uVar1 = uVar1 & 0xff;
    if ((*(byte *)(uVar1 * 3 + -0x11441) & 0x20) != 0) {
      _DAT_fffeec4c = (undefined2)uVar1;
      DAT_fffeec4a = DAT_fffeec4a + '\x01';
      DAT_fffeec4e = cVar2;
    }
    cVar2 = cVar2 << 1;
  }
  return;
}

