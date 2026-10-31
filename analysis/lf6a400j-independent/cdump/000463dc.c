
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000463dc(void)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 local_c;
  undefined4 auStack_8 [2];
  
  uVar4 = 0;
  if ((int)((uint)_DAT_ffff126a - (uint)_DAT_ffff1272) < 0x960) {
    FUN_0016b31c(0x960 - ((uint)_DAT_ffff126a - (uint)_DAT_ffff1272),_DAT_ffff2986,auStack_8,
                 &local_c);
    uVar4 = FUN_0016b26c(auStack_8[0],local_c,0);
  }
  uVar2 = FUN_0016a8fc(0xf62,uVar4,0x7d,((int)(char)DAT_fffef4ea & 0x80U) != 0);
  bVar1 = (uVar2 & 1) == 0;
  bVar3 = DAT_fffef4ea | 0x80;
  if (bVar1) {
    bVar3 = DAT_fffef4ea & 0x7f;
  }
  DAT_fffef4ea = bVar3;
  if (bVar1) {
    uVar2 = (int)DAT_fffef4e9 & 0x7f;
    DAT_fffef4e9 = (char)uVar2;
  }
  else {
    uVar2 = (int)DAT_fffef4e9 | 0x80;
    DAT_fffef4e9 = (char)uVar2;
  }
  return uVar2;
}

