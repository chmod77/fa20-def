
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000686fc(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  if ((DAT_fffef126 & 1) == 0) {
    _DAT_fffef128 = FUN_0016b944(0x684,0x458,0);
    _DAT_fffef12a = 0x684;
    _DAT_fffef12c = 0x684;
    _DAT_fffef12e = 0x684;
    DAT_fffef126 = DAT_fffef126 | 1;
  }
  else {
    puVar5 = (undefined *)(((uint)_DAT_fffef130 - (uint)_DAT_fffef128) * 0x2000);
    if ((int)puVar5 < 0) {
      puVar5 = &DAT_0000ffff + (int)puVar5;
    }
    _DAT_fffef128 = FUN_0016b5d4((int)(short)((uint)puVar5 >> 0x10) + (uint)_DAT_fffef128);
    iVar1 = __udiv32_r1_by_r0(0xcf530,(int)&DAT_0000ea60);
    iVar3 = (int)(short)_DAT_fffef386;
    uVar4 = (uint)_DAT_fffef386;
    _DAT_fffef386 = (ushort)(iVar1 + uVar4) & 0xfff;
    _DAT_fffef12a = FUN_00001540((iVar1 + uVar4 >> 0xc) + (uint)_DAT_fffef12e,iVar3,FUN_00001540);
    _DAT_fffef12c = FUN_00001540(_DAT_fffef128 + 0x458,0x458,FUN_00001540);
    uVar2 = FUN_0016bd78((int)_DAT_fffef12a,(int)_DAT_fffef12c);
    uVar2 = FUN_0016bd78(uVar2,0x684);
    _DAT_fffef12e = FUN_0016b630(uVar2,0x458);
  }
  return;
}

