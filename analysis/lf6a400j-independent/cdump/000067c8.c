
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000067c8(void)

{
  uint uVar1;
  
  _DAT_ffffa2ec = _DAT_ffffa2d8;
  if (DAT_ffffa2d5 == '\0') {
    DAT_ffffa2ee = 3;
  }
  else {
    DAT_ffffa2ee = 8;
    for (uVar1 = 0; (uVar1 & 0xffff) < 8; uVar1 = (uVar1 & 0xffff) + 1) {
      (&DAT_ffffa2f2)[uVar1 & 0xffff] = 0;
    }
  }
  if (DAT_ffffa316 == '\0') {
    DAT_ffffa2f2 = 0x30;
  }
  else {
    DAT_ffffa2f2 = 0x32;
  }
  DAT_ffffab20 = DAT_ffffa2f2 & 0xf;
  DAT_ffffa2f3 = DAT_ffffa2da;
  DAT_ffffa2f4 = (undefined1)_DAT_ffffa2dc;
  DAT_ffffab19 = 0;
  FUN_000050f4();
  return;
}

