
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006338(void)

{
  uint uVar1;
  
  if (DAT_ffffa2d6 == '\x02') {
    DAT_ffffa2d6 = '\0';
  }
  FUN_00007334();
  FUN_000073e4();
  _DAT_ffffa2ec = 0;
  DAT_ffffa2ee = 0;
  for (uVar1 = 0; (uVar1 & 0xffff) < 8; uVar1 = (uVar1 & 0xffff) + 1) {
    (&DAT_ffffa2f2)[uVar1 & 0xffff] = 0;
  }
  _DAT_ffffa2fa = 0;
  DAT_ffffa2fc = 0;
  for (uVar1 = 0; (uVar1 & 0xffff) < 8; uVar1 = (uVar1 & 0xffff) + 1) {
    (&DAT_ffffa300)[uVar1 & 0xffff] = 0;
  }
  DAT_ffffa308 = 0;
  DAT_ffffa309 = 0;
  _DAT_ffffa30a = 0;
  _DAT_ffffa30c = 0;
  _DAT_ffffa30e = 0;
  DAT_ffffa310 = 0;
  _DAT_ffffa312 = 0;
  _DAT_ffffa314 = 0;
  DAT_ffffa316 = 0;
  for (uVar1 = 0; (uVar1 & 0xffff) < 0x3ff; uVar1 = (uVar1 & 0xffff) + 1) {
    *(undefined2 *)((uVar1 & 0xffff) * 2 + -0x5ce8) = 0;
  }
  _DAT_ffffab16 = 0;
  DAT_ffffab18 = 0;
  DAT_ffffab19 = 0;
  _DAT_ffffab1a = 0;
  _DAT_ffffab1c = 0;
  DAT_ffffab1e = 0;
  DAT_ffffab1f = 0;
  DAT_ffffab20 = 0;
  DAT_ffffab21 = 0;
  return;
}

