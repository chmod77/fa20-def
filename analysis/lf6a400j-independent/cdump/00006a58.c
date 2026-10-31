
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00006a58(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((DAT_ffffa2e0 == 0) || (8 < DAT_ffffa2e0)) {
    DAT_ffff8ecd = 8;
    uVar1 = 0xffffff80;
    DAT_ffff92d1 = 0x80;
  }
  else {
    _DAT_ffffa2fa = _DAT_ffffa2de;
    DAT_ffffa2fc = DAT_ffffa2e0;
    for (uVar2 = 0; (uVar2 & 0xff) < (uint)DAT_ffffa2e0; uVar2 = uVar2 + 1) {
      uVar2 = uVar2 & 0xff;
      (&DAT_ffffa300)[uVar2] = (&DAT_ffffa2e4)[uVar2];
    }
  }
  return uVar1;
}

