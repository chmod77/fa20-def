
/* WARNING: Removing unreachable block (ram,0x0004e616) */
/* WARNING: Removing unreachable block (ram,0x0004e62c) */
/* WARNING: Removing unreachable block (ram,0x0004e62e) */
/* WARNING: Removing unreachable block (ram,0x0004e646) */
/* WARNING: Removing unreachable block (ram,0x0004e648) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004e59e(void)

{
  uint uVar1;
  byte bVar3;
  undefined4 uVar2;
  
  uVar1 = FUN_0016b428((int)_DAT_ffff0efa,0xfa,0,((int)(char)DAT_fffef25a & 0x80U) != 0);
  bVar3 = DAT_fffef25a | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef25a & 0x7f;
  }
  DAT_fffef25a = bVar3;
  if (((int)(char)bVar3 & 0x80U) == 0) {
    uVar2 = FUN_00001550(0x70);
    DAT_fffef09e = DAT_fffef09e & 0xfd;
  }
  else {
    uVar2 = FUN_00001550();
    DAT_fffef09e = DAT_fffef09e | 2;
  }
  bVar3 = DAT_fffef364 | 0x80;
  if ((DAT_fffef09e & 2) == 0) {
    bVar3 = DAT_fffef364 & 0x7f;
  }
  DAT_fffef364 = bVar3;
  FUN_00001550(uVar2);
  return;
}

