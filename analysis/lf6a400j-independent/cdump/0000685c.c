
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000685c(void)

{
  uint uVar1;
  
  uVar1 = FUN_0000718c();
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 3) {
    if (_DAT_ffff92d4 < 8) {
      _DAT_ffffa2ec = _DAT_ffff92d2;
      if (DAT_ffffa2d5 == '\0') {
        DAT_ffffa2ee = (char)_DAT_ffff92d4 + 1;
      }
      else {
        DAT_ffffa2ee = 8;
        for (uVar1 = 0; (uVar1 & 0xff) < (uint)DAT_ffffa2ee; uVar1 = (uVar1 & 0xff) + 1) {
          (&DAT_ffffa2f2)[uVar1 & 0xff] = 0;
        }
      }
      _DAT_ffffa2f2 = CONCAT11((char)_DAT_ffff92d4,DAT_ffffa2f3);
      for (uVar1 = 0; (uVar1 & 0xff) < (uint)_DAT_ffff92d4; uVar1 = uVar1 + 1) {
        uVar1 = uVar1 & 0xff;
        (&DAT_ffffa2f3)[uVar1] = *(undefined1 *)(uVar1 - 0x6d2a);
      }
      goto LAB_0000693c;
    }
  }
  else if (((uVar1 == 5) && (7 < _DAT_ffff92d4)) && (_DAT_ffff92d4 < 0x1000)) {
    _DAT_ffffa2ec = _DAT_ffff92d2;
    DAT_ffffa2ee = 8;
    _DAT_ffffa2f2 = _DAT_ffff92d4 | 0x1000;
    for (uVar1 = 0; (uVar1 & 0xff) < 6; uVar1 = uVar1 + 1) {
      uVar1 = uVar1 & 0xff;
      (&DAT_ffffa2f4)[uVar1] = *(undefined1 *)(uVar1 - 0x6d2a);
    }
    _DAT_ffffab1a = _DAT_ffff92d4;
    _DAT_ffffab1c = 6;
    DAT_ffffab1e = 0;
    DAT_ffffab1f = 0;
LAB_0000693c:
    uVar1 = FUN_000050f4();
    return uVar1;
  }
  return uVar1;
}

