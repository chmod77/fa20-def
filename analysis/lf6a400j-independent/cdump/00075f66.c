
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00075f66(char param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar7;
  byte *pbVar6;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined4 uStack_2c;
  byte abStack_28 [4];
  byte abStack_24 [4];
  short *psStack_20;
  
  bVar10 = 0;
  psStack_20 = (short *)((int)&uStack_2c + 2);
  while( true ) {
    if (1 < bVar10) {
      return;
    }
    uStack_2c = _DAT_fffff430;
    for (uVar8 = 0; (uVar8 & 0xff) < 4; uVar8 = uVar8 + 1) {
      uVar8 = uVar8 & 0xff;
      *(byte *)(uVar8 - 0x545e) = abStack_28[uVar8 - 4];
    }
    uVar8 = 0;
    while( true ) {
      if (0xf < (uVar8 & 0xff)) break;
      iVar5 = (uVar8 & 0xff) * 2;
      if (param_1 == '\0') {
        uVar2 = *(ushort *)(&DAT_00031a44 + iVar5);
      }
      else {
        uVar2 = *(ushort *)(&DAT_00031a24 + iVar5);
      }
      uVar9 = (uint)(short)(uStack_2c._2_2_ ^ uVar2);
      uVar3 = uVar9 & 1;
      pbVar4 = abStack_28;
      for (bVar7 = 0; bVar7 < 4; bVar7 = bVar7 + 1) {
        if ((bVar7 == 3) && (uVar3 == 1)) {
          uVar9 = uVar9 | 0x10;
        }
        *pbVar4 = (byte)uVar9 & 0x1f;
        uVar9 = (uVar9 & 0xffff) >> 4;
        pbVar4 = pbVar4 + 1;
      }
      pbVar4 = abStack_24;
      pbVar6 = abStack_28;
      for (bVar7 = 0; bVar7 < 4; bVar7 = bVar7 + 1) {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        *pbVar4 = (&DAT_00031a64)[bVar1];
        pbVar4 = pbVar4 + 1;
      }
      uVar3 = (uint)abStack_24[3] * 0x1000 + (uint)abStack_24[2] * 0x100 +
              (uint)abStack_24[1] * 0x10 + (uint)abStack_24[0];
      for (bVar7 = 0; bVar7 < 3; bVar7 = bVar7 + 1) {
        uVar9 = (uVar3 & 0xffff) >> 1;
        if ((uVar3 & 1) != 0) {
          uVar9 = uVar9 | 0xffff8000;
        }
        uVar3 = uVar9;
      }
      uStack_2c = (short)uStack_2c._2_2_ * 0x10000 +
                  ((uVar3 ^ (int)(short)uStack_2c._0_2_) & 0xffff);
      uVar8 = (uVar8 & 0xff) + 1;
    }
    uStack_2c = *psStack_20 * 0x10000 + (uint)uStack_2c._0_2_;
    for (uVar8 = 0; (uVar8 & 0xff) < 4; uVar8 = uVar8 + 1) {
      uVar8 = uVar8 & 0xff;
      *(byte *)(uVar8 - 0x5462) = abStack_28[uVar8 - 4];
    }
    if (uStack_2c != 0) break;
    bVar10 = bVar10 + 1;
  }
  return;
}

