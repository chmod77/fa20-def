
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00068bde(void)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  
  bVar1 = DAT_fffef152;
  if (_DAT_ffff007a != 7) {
    uVar2 = FUN_0016b944(0x468,0x458,0);
    uVar3 = FUN_0016b428((int)_DAT_fffef130,0x468,uVar2,((int)(char)DAT_fffef53e & 0x80U) != 0);
    bVar4 = DAT_fffef53e | 0x80;
    if ((uVar3 & 1) == 0) {
      bVar4 = DAT_fffef53e & 0x7f;
    }
    bVar1 = DAT_fffef152 | 0x10;
    DAT_fffef53e = bVar4;
    if (((int)(char)bVar4 & 0x80U) != 0) {
      bVar1 = DAT_fffef152 & 0xef;
    }
  }
  DAT_fffef152 = bVar1;
  return;
}

