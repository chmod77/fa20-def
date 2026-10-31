
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ae280(void)

{
  int iVar1;
  byte bVar2;
  
  _DAT_ffff0d2a = 0;
  _DAT_ffff0d2c = 0;
  DAT_ffff04de = 0;
  DAT_ffff04df = 0xff;
  iVar1 = 0;
  DAT_ffff04e0 = 0;
  DAT_ffff04e2 = 0;
  DAT_ffff04e3 = 0;
  DAT_ffff04e1 = 0;
  _DAT_ffff0d2e = 0;
  DAT_ffff04e4 = 0;
  DAT_ffff04e5 = 0;
  for (bVar2 = 0; bVar2 < 4; bVar2 = bVar2 + 1) {
    *(undefined2 *)(iVar1 + -0xe9c4) = 0x8000;
    iVar1 = iVar1 + 2;
  }
  iVar1 = 0;
  for (bVar2 = 0; bVar2 < 4; bVar2 = bVar2 + 1) {
    *(undefined2 *)(iVar1 + -0xe9bc) = 0x8000;
    iVar1 = iVar1 + 2;
  }
  iVar1 = 0;
  _DAT_ffff0d30 = 0;
  _DAT_ffff0d32 = 0;
  _DAT_ffff0d34 = 0;
  for (bVar2 = 0; bVar2 < 4; bVar2 = bVar2 + 1) {
    *(undefined2 *)(iVar1 + -0xe9b4) = 0x8000;
    iVar1 = iVar1 + 2;
  }
  iVar1 = 0;
  for (bVar2 = 0; bVar2 < 4; bVar2 = bVar2 + 1) {
    *(undefined2 *)(iVar1 + -0xe9ac) = 0x8000;
    iVar1 = iVar1 + 2;
  }
  _DAT_ffff0d38 = 0;
  _DAT_ffff0d36 = 0x8000;
  _DAT_ffff0d3a = 0x8000;
  DAT_ffff03e1 = DAT_ffff03e1 & 0x7f;
  return;
}

