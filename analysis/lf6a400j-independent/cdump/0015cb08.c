
undefined4 FUN_0015cb08(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  param_1 = param_1 * 0x18;
  pbVar9 = *(byte **)(&LAB_0015cd40 + param_1);
  if ((*pbVar9 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar10 = 0;
    iVar6 = 0;
    puVar11 = *(undefined4 **)(&LAB_0015cd44 + param_1);
    pbVar8 = pbVar9 + 8;
    for (bVar1 = pbVar9[4];
        (uVar10 = uVar10 & 0xffff, 7 < *(int *)(&DAT_0015cd54 + param_1) - uVar10 && (bVar1 != 0));
        bVar1 = bVar1 - 1) {
      puVar3 = *(undefined4 **)pbVar8;
      pbVar8 = pbVar8 + 4;
      uVar2 = puVar3[1];
      *puVar11 = *puVar3;
      puVar11[1] = uVar2;
      puVar11 = puVar11 + 2;
      iVar6 = iVar6 + 1;
      uVar10 = uVar10 + 8;
    }
    uVar7 = iVar6 + (uint)bVar1;
    pbVar8 = pbVar9 + (uVar7 & 0xffff) * 4 + 8;
    for (bVar1 = pbVar9[5];
        (uVar10 = uVar10 & 0xffff, 3 < *(int *)(&DAT_0015cd54 + param_1) - uVar10 && (bVar1 != 0));
        bVar1 = bVar1 - 1) {
      puVar3 = *(undefined4 **)pbVar8;
      pbVar8 = pbVar8 + 4;
      *puVar11 = *puVar3;
      puVar11 = puVar11 + 1;
      uVar7 = uVar7 + 1;
      uVar10 = uVar10 + 4;
    }
    uVar7 = uVar7 + bVar1;
    pbVar8 = pbVar9 + (uVar7 & 0xffff) * 4 + 8;
    for (bVar1 = pbVar9[6];
        (uVar10 = uVar10 & 0xffff, 1 < *(int *)(&DAT_0015cd54 + param_1) - uVar10 && (bVar1 != 0));
        bVar1 = bVar1 - 1) {
      puVar4 = *(undefined2 **)pbVar8;
      pbVar8 = pbVar8 + 4;
      *(undefined2 *)puVar11 = *puVar4;
      puVar11 = (undefined4 *)((int)puVar11 + 2);
      uVar7 = uVar7 + 1;
      uVar10 = uVar10 + 2;
    }
    pbVar8 = pbVar9 + (uVar7 + bVar1 & 0xffff) * 4 + 8;
    for (bVar1 = pbVar9[7];
        (*(uint *)(&DAT_0015cd54 + param_1) != (uVar10 & 0xffff) && (bVar1 != 0)); bVar1 = bVar1 - 1
        ) {
      puVar5 = *(undefined1 **)pbVar8;
      pbVar8 = pbVar8 + 4;
      *(undefined1 *)puVar11 = *puVar5;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      uVar10 = (uVar10 & 0xffff) + 1;
    }
    **(undefined4 **)(&DAT_0015cd4c + param_1) = *(undefined4 *)(&DAT_0015cd50 + param_1);
    uVar2 = 0xff;
  }
  return uVar2;
}

