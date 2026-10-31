
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00156d58(void)

{
  uint uVar1;
  byte bVar3;
  short sVar2;
  
  uVar1 = FUN_001494f4();
  bVar3 = DAT_ffff2982 | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff2982 & 0xef;
  }
  DAT_ffff2982 = bVar3;
  DAT_fffeed20 = FUN_0015b46c();
  sVar2 = FUN_00149438();
  _DAT_fffef240 = sVar2 << 6;
  return;
}

