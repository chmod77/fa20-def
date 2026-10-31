
/* WARNING: Removing unreachable block (ram,0x000b6870) */
/* WARNING: Removing unreachable block (ram,0x000b68f4) */
/* WARNING: Removing unreachable block (ram,0x000b681c) */
/* WARNING: Removing unreachable block (ram,0x000b6824) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b67f8(undefined4 param_1,uint param_2,undefined2 *param_3)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = (int)&LAB_00004600 - (param_2 & 0xffff);
  uVar8 = (uVar3 & 0xffff) * 0x667;
  uVar4 = (uVar8 >> 0x10) + (uVar3 >> 0x10) * 0x667;
  uVar7 = uVar4 >> 0x10;
  if ((int)uVar3 < 0) {
    uVar7 = uVar7 - 0x667;
  }
  iVar6 = (uVar4 * 0x10000 + (uVar8 & 0xffff) >> 0x10 | uVar7 << 0x10) + (param_2 & 0xffff);
  uVar5 = 0xffff;
  if (iVar6 < (int)&DAT_00010000) {
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    uVar5 = (undefined2)iVar6;
  }
  bVar1 = DAT_fffec783 != '\0';
  if (bVar1) {
    DAT_fffec784 = '\0';
  }
  else {
    if (DAT_fffec784 == '\0') {
      DAT_fffec782 = '\0';
      DAT_fffec784 = '\x01';
    }
    uVar2 = uVar5;
    if (DAT_fffec782 != '\0') {
      FUN_0016b4d8(&DAT_ffff19c8,&LAB_00004600,0x667);
      uVar2 = _DAT_ffff19c8;
    }
    _DAT_ffff19c8 = uVar2;
    _DAT_fffec780 = _DAT_ffff19c8;
    DAT_fffec782 = '\x01';
  }
  if (bVar1) {
    *param_3 = uVar5;
  }
  else {
    *param_3 = _DAT_fffec780;
  }
  DAT_fffec783 = 0;
  return;
}

