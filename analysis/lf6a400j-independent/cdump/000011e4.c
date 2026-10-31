
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000011e4(void)

{
  if ((DAT_fffff75f & 0x10) == 0) {
    if (0xb < _DAT_ffff65a2) {
      FUN_00001550(0xf0);
      FUN_0000151c(&DAT_ffffab98,0xffffabc0);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    _DAT_ffff65a2 = _DAT_ffff65a2 + 1;
  }
  else {
    _DAT_ffff65a2 = 0;
  }
  return;
}

