
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0005d28e(void)

{
  uint uVar1;
  undefined1 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined4 local_c;
  
  if (DAT_ffff314c == '\0') {
    puVar2 = &DAT_ffff314d;
    if ((_DAT_fffef64c & 0x100) != 0) {
      local_c._3_1_ = (char)_DAT_fffff430;
      uVar1 = (uint)(char)local_c;
      uVar4 = 0;
      for (bVar3 = 0; bVar3 < 8; bVar3 = bVar3 + 1) {
        uVar4 = (uVar4 & 0xff) << 1;
        if ((uVar1 & 1) != 0) {
          uVar4 = uVar4 | 1;
        }
        uVar1 = (uVar1 & 0xff) >> 1;
      }
      DAT_ffff314d = (undefined1)uVar4;
      puVar2 = (undefined1 *)0xffff314e;
    }
    local_c = _DAT_fffff430;
    FUN_0005de76(&local_c,puVar2,4);
    DAT_ffff314c = '\x01';
  }
  return &DAT_ffff314d;
}

