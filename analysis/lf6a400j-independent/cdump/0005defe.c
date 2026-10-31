
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0005defe(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  byte local_34 [4];
  byte local_30 [4];
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [4];
  byte local_20 [4];
  ushort uStack_1c;
  ushort uStack_1a;
  
  if ((_DAT_fffef64c & 0x100) == 0) {
    FUN_0005de76(param_1,&uStack_1c,4);
    iVar9 = 0;
    for (iVar10 = 0; uVar2 = uStack_1c, iVar10 < 0x13; iVar10 = iVar10 + 1) {
      uVar4 = FUN_0005dfe0((int)(short)uStack_1a,(int)*(short *)((int)&DAT_0002c10c + iVar9));
      uStack_1a = uStack_1c;
      iVar9 = iVar9 + 2;
      uStack_1c = uVar2 ^ uVar4;
    }
    uVar3 = FUN_0005de76(&uStack_1c,param_2,4);
  }
  else {
    FUN_0005e27a(param_1,local_30,local_34);
    FUN_0005e172(0xfffef6aa,auStack_2c);
    for (bVar11 = 0; bVar11 < 8; bVar11 = bVar11 + 1) {
      FUN_0005e230(auStack_2c);
      FUN_0005e17a(auStack_2c,auStack_24);
      FUN_0005e02e(local_34,auStack_24,local_20);
      pbVar5 = local_30;
      pbVar7 = local_20;
      pbVar6 = local_34;
      for (bVar8 = 0; bVar8 < 3; bVar8 = bVar8 + 1) {
        *pbVar7 = *pbVar7 ^ *pbVar5;
        *pbVar5 = *pbVar6;
        pbVar5 = pbVar5 + 1;
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        *pbVar6 = bVar1;
        pbVar6 = pbVar6 + 1;
      }
    }
    uVar3 = FUN_0005e2d6(local_34,local_30,param_2);
  }
  return uVar3;
}

