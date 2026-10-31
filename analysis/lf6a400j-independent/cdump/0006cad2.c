
void FUN_0006cad2(uint param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  
  uVar8 = 0;
  while ((int)(uVar8 & 0xff) < (int)((param_1 & 0xff) - 1)) {
    iVar3 = (uVar8 & 0xff) * 4;
    uVar9 = *(ushort *)(param_2 + iVar3);
    uVar4 = 0;
    uVar8 = (uVar8 & 0xff) + 1;
    for (uVar6 = uVar8; (uVar6 & 0xff) < (param_1 & 0xff); uVar6 = uVar6 + 1) {
      uVar6 = uVar6 & 0xff;
      if (*(ushort *)(param_2 + uVar6 * 4) < uVar9) {
        uVar9 = *(ushort *)(param_2 + uVar6 * 4);
        uVar4 = uVar6;
      }
    }
    if (uVar4 != 0) {
      iVar5 = uVar4 * 4;
      uVar1 = *(undefined2 *)(param_2 + iVar5);
      iVar7 = param_2 + 2;
      uVar2 = *(undefined2 *)(iVar7 + iVar5);
      *(undefined2 *)(param_2 + iVar5) = *(undefined2 *)(param_2 + iVar3);
      *(undefined2 *)(iVar7 + iVar5) = *(undefined2 *)(iVar7 + iVar3);
      *(undefined2 *)(param_2 + iVar3) = uVar1;
      *(undefined2 *)(iVar7 + iVar3) = uVar2;
    }
  }
  return;
}

