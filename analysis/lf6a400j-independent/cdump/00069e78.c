
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00069e78(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if (_DAT_ffff007a != 7) {
    bVar1 = (DAT_fffeffed & 0x20) == 0;
    bVar2 = (DAT_fffefff1 & 4) == 0;
    bVar3 = (DAT_fffeffed & 0x10) == 0;
    bVar4 = (DAT_fffefff1 & 4) == 0;
    bVar5 = ((int)DAT_ffff34f7 & 0x80U) != 0;
    uVar8 = (uint)_DAT_fffef134;
    uVar6 = (uint)_DAT_fffef13a;
    iVar7 = uVar8 - uVar6;
    if (uVar8 < uVar6) {
      iVar7 = uVar6 - uVar8;
    }
    if (((bVar1 && bVar2) && (bVar3 && bVar4)) && (iVar7 < 0x10000)) {
      iVar7 = __udiv32_r1_by_r0(DAT_fffef144 * uVar8,0xff);
      _DAT_fffef52c = (short)iVar7;
    }
    else if (((bVar1 && bVar2) && (bVar5)) || ((bVar3 && bVar4 && (bVar5)))) {
      _DAT_fffef52c = FUN_0016bd78(uVar8,uVar6);
    }
    else {
      _DAT_fffef52c = 0xf1a;
    }
    _DAT_fffef52e = FUN_0016bd78((int)_DAT_fffef52c,(int)_DAT_ffff13c2);
  }
  return;
}

