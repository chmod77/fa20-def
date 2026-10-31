
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00156a24(void)

{
  uint uVar1;
  byte bVar2;
  
  DAT_ffff2a48 = FUN_0015a7f8();
  _DAT_ffff2a44 = FUN_0015a7fe();
  uVar1 = FUN_0015a804();
  bVar2 = DAT_fffef0a0 | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffef0a0 & 0x7f;
  }
  DAT_fffef0a0 = bVar2;
  return;
}

