
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00005318(uint param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  ushort uVar5;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 local_2c [8];
  uint uStack_24;
  
  puVar4 = local_2c;
  puVar10 = local_2c;
  puVar6 = local_2c;
  uVar9 = 1;
  param_1 = param_1 & 0xff;
  for (uVar7 = param_1; 0 < (int)uVar7; uVar7 = uVar7 - 1) {
    uVar9 = uVar9 << 1;
  }
  iVar2 = FUN_000052ac(param_1,uVar9);
  if (iVar2 != 0) {
    if ((DAT_ffff6569 & 2) == 0) {
      uVar5 = *(ushort *)(param_1 * 6 + -0x74d2);
    }
    else {
      uVar5 = (&DAT_000074ac)[param_1 * 3];
    }
    uVar5 = uVar5 & 0xf;
    uStack_24 = uVar9 >> 0x10;
    _DAT_ffffd058 = (short)(uVar9 >> 0x10);
    _DAT_ffffd05a = (short)uVar9;
    for (iVar2 = 0; (byte)iVar2 < uVar5; iVar2 = iVar2 + 1) {
      puVar3 = (undefined1 *)FUN_00005a02(param_1,iVar2);
      *puVar4 = *puVar3;
      puVar4 = puVar4 + 1;
    }
    if (((uStack_24 & 0xffff & (int)_DAT_ffffd058) != 0) ||
       ((uVar9 & 0xffff & (int)_DAT_ffffd05a) != 0)) {
      for (iVar2 = 0; (byte)iVar2 < uVar5; iVar2 = iVar2 + 1) {
        puVar4 = (undefined1 *)FUN_00005a02(param_1,iVar2);
        *puVar10 = *puVar4;
        puVar10 = puVar10 + 1;
      }
      _DAT_ffffd058 = (short)uStack_24;
      _DAT_ffffd05a = (short)uVar9;
    }
    FUN_00005308(param_1,uVar9);
    for (bVar8 = 0; bVar8 < uVar5; bVar8 = bVar8 + 1) {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    }
  }
  return;
}

