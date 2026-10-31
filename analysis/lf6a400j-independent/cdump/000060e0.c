
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000060e0(void)

{
  uint uVar1;
  
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

