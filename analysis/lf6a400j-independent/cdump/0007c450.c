
void FUN_0007c450(int param_1,undefined1 *param_2,ushort *param_3)

{
  ushort uVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar10;
  undefined4 *puVar9;
  byte bVar11;
  undefined4 local_2c;
  byte local_28 [4];
  byte local_24 [4];
  ushort *puStack_20;
  
  puVar9 = &local_2c;
  local_2c = param_1;
  bVar11 = 0;
  puStack_20 = (ushort *)((int)&local_2c + 2);
  while( true ) {
    if (3 < bVar11) break;
    uVar1 = *puStack_20;
    uVar4 = *param_3;
    param_3 = param_3 + 1;
    uVar5 = (uint)(short)(uVar1 ^ uVar4);
    uVar6 = uVar5 & 1;
    pbVar7 = local_28;
    for (bVar10 = 0; bVar10 < 4; bVar10 = bVar10 + 1) {
      if ((bVar10 == 3) && (uVar6 == 1)) {
        uVar5 = uVar5 | 0x10;
      }
      *pbVar7 = (byte)uVar5 & 0x1f;
      uVar5 = (uVar5 & 0xffff) >> 4;
      pbVar7 = pbVar7 + 1;
    }
    pbVar7 = local_24;
    pbVar8 = local_28;
    for (bVar10 = 0; bVar10 < 4; bVar10 = bVar10 + 1) {
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      *pbVar7 = (&DAT_00031a64)[bVar2];
      pbVar7 = pbVar7 + 1;
    }
    uVar5 = (uint)local_24[3] * 0x1000 + (uint)local_24[2] * 0x100 + (uint)local_24[1] * 0x10 +
            (uint)local_24[0];
    for (bVar10 = 0; bVar10 < 3; bVar10 = bVar10 + 1) {
      uVar6 = (uVar5 & 0xffff) >> 1;
      if ((uVar5 & 1) != 0) {
        uVar6 = uVar6 | 0xffff8000;
      }
      uVar5 = uVar6;
    }
    local_2c = (short)uVar1 * 0x10000 + ((uVar5 ^ (int)(short)local_2c._0_2_) & 0xffff);
    bVar11 = bVar11 + 1;
  }
  local_2c = local_2c._2_2_ * 0x10000 + (uint)local_2c._0_2_;
  for (bVar11 = 0; bVar11 < 4; bVar11 = bVar11 + 1) {
    uVar3 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
    *param_2 = uVar3;
    param_2 = param_2 + 1;
  }
  return;
}

