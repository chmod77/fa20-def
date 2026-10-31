
void FUN_0003a924(uint param_1,uint param_2)

{
  undefined1 uVar1;
  byte bVar2;
  short sVar4;
  int iVar3;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  
  param_1 = param_1 & 0xff;
  sVar4 = FUN_00001550(0xf0);
  uVar8 = (uint)*(byte *)(param_1 - 0x78e7);
  bVar2 = *(byte *)(param_1 * 2 + -0x7a81);
  uVar10 = (uint)*(byte *)(param_1 * 2 + -0x7a80);
  iVar6 = (param_2 & 0xff) * 0xc;
  uVar9 = (undefined1)(uVar8 + 1);
  if (uVar8 == 0) {
    for (uVar11 = 0; (uVar11 & 0xff) < uVar10; uVar11 = (uVar11 & 0xff) + 1) {
      iVar3 = (uVar11 & 0xff) * 0x28;
      puVar5 = *(undefined1 **)((uint)*(byte *)(iVar3 + param_1 + -0x7a77) * 0x1c + -0x8058);
      for (uVar7 = 1; (uVar7 & 0xff) < 8; uVar7 = (uVar7 & 0xff) + 1) {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        *(undefined1 *)((uVar7 & 0xff) * 5 + param_1 + iVar3 + -0x7a77) = uVar1;
      }
    }
  }
  FUN_00001550((int)sVar4);
  if (uVar8 < uVar10) {
    uVar10 = param_1;
    for (uVar11 = 0; (uVar11 & 0xff) < 8; uVar11 = (uVar11 & 0xff) + 1) {
      (&DAT_ffff2683)[(uVar11 & 0xff) + iVar6] = *(undefined1 *)(uVar8 * 0x28 + -0x7a77 + uVar10);
      uVar10 = uVar10 + 5;
    }
    (&DAT_ffff2682)[iVar6] = (&DAT_ffff2682)[iVar6] | 1;
  }
  else {
    (&DAT_ffff2682)[iVar6] = (&DAT_ffff2682)[iVar6] & 0xfe;
  }
  if ((uint)bVar2 <= (uVar8 + 1 & 0xff)) {
    uVar9 = 0;
  }
  *(undefined1 *)(param_1 - 0x78e7) = uVar9;
  return;
}

