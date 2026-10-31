
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003c378(void)

{
  if (((int)(char)DAT_fffeec5a & 0x80U) == 0) {
    FUN_0003c3c8();
    FUN_0003c4ca();
    _DAT_ffff2fae = FUN_0003c53a(&DAT_000080c0,&T_02C140);
    _DAT_ffff2fb0 = FUN_0003c53a(&T_02C140,&DAT_0017d9f0);
    DAT_ffff2fd7 = DAT_ffff2fd7 | 1;
  }
  DAT_fffeec5a = DAT_fffeec5a | 0x80;
  _DAT_fffef4a0 = (uint)_DAT_ffff2fb0 + _DAT_ffff2fae * 0x10000;
  return;
}

