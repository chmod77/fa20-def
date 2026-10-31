
/* WARNING: Removing unreachable block (ram,0x00071fae) */
/* WARNING: Removing unreachable block (ram,0x00071e92) */
/* WARNING: Removing unreachable block (ram,0x00071ee0) */

byte * FUN_00071d98(byte *param_1)

{
  char cVar1;
  int iVar2;
  byte bVar4;
  uint uVar3;
  byte bVar7;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte local_8c [104];
  byte bStack_24;
  
  pbVar5 = local_8c;
  pbVar6 = local_8c;
  bVar7 = 0;
  bStack_24 = 0;
  if (DAT_ffff091d == -0x5b) {
    bVar8 = 0;
    for (uVar9 = 0; (uVar9 & 0xff) < 0x67; uVar9 = uVar9 + 1) {
      uVar9 = uVar9 & 0xff;
      bVar4 = *(byte *)(uVar9 - 0xf7a9) & (&DAT_00023b08)[uVar9];
      local_8c[uVar9] = bVar4;
      if (bVar4 != 0) {
        for (uVar3 = 0; (uVar3 & 0xff) < 8; uVar3 = (uVar3 & 0xff) + 1) {
          iVar2 = uVar9 * 8 + (uVar3 & 0xff);
          if (((iVar2 != 0xa0) && (iVar2 != 0xa1)) &&
             ((uVar10 = __shl_r0_by_r1(1,uVar3 & 0xff), (uVar10 & 0xff & (uint)bVar4) != 0 &&
              (bVar8 < 0x7f)))) {
            bVar7 = bVar7 + 1;
            bVar8 = bVar7;
          }
        }
      }
      if (0x7e < bVar8) break;
    }
    *param_1 = bVar7;
    param_1 = param_1 + 1;
    if (bVar8 != 0) {
      for (uVar9 = 0; uVar3 = uVar9 & 0xff, uVar3 < 0x67; uVar9 = uVar9 + 1) {
        cVar1 = *pbVar6;
        if ((int)cVar1 != 0) {
          uVar9 = uVar9 & 0xff;
          uVar10 = 0;
          while ((uVar10 & 0xff) < 8) {
            uVar11 = uVar10 & 0xff;
            iVar2 = uVar9 * 8 + uVar11;
            if (((iVar2 != 0xa0) && (iVar2 != 0xa1)) &&
               (uVar10 = __shl_r0_by_r1(1,uVar10 & 0xff), (uVar10 & 0xff & (int)cVar1) != 0)) {
              iVar2 = uVar11 + uVar3 * 8;
              *param_1 = (byte)((ushort)(&DAT_0001b2d8)[iVar2] >> 8);
              param_1[1] = (byte)(&DAT_0001b2d8)[iVar2];
              param_1 = param_1 + 2;
              bStack_24 = bStack_24 + 1;
              if (0x7e < bStack_24) break;
            }
            uVar10 = uVar11 + 1;
          }
        }
        if (0x7e < bStack_24) {
          return param_1;
        }
        pbVar6 = pbVar6 + 1;
      }
    }
  }
  else {
    bVar8 = 0;
    for (uVar9 = 0; (uVar9 & 0xff) < 0x67; uVar9 = uVar9 + 1) {
      uVar9 = uVar9 & 0xff;
      bVar4 = *(byte *)(uVar9 - 0xc8f5) & (&DAT_00023b08)[uVar9];
      local_8c[uVar9] = bVar4;
      if (bVar4 != 0) {
        for (uVar3 = 0; (uVar3 & 0xff) < 8; uVar3 = (uVar3 & 0xff) + 1) {
          iVar2 = uVar9 * 8 + (uVar3 & 0xff);
          if ((((iVar2 != 0xa0) && (iVar2 != 0xa1)) &&
              (uVar10 = __shl_r0_by_r1(1,uVar3 & 0xff), (uVar10 & 0xff & (uint)bVar4) != 0)) &&
             (bVar8 < 0x7f)) {
            bVar7 = bVar7 + 1;
            bVar8 = bVar7;
          }
        }
      }
      if (0x7e < bVar8) break;
    }
    *param_1 = bVar7;
    param_1 = param_1 + 1;
    if (bVar8 != 0) {
      for (uVar9 = 0; uVar3 = uVar9 & 0xff, uVar3 < 0x67; uVar9 = uVar9 + 1) {
        cVar1 = *pbVar5;
        if ((int)cVar1 != 0) {
          uVar9 = uVar9 & 0xff;
          uVar10 = 0;
          while ((uVar10 & 0xff) < 8) {
            uVar11 = uVar10 & 0xff;
            iVar2 = uVar9 * 8 + uVar11;
            if (((iVar2 != 0xa0) && (iVar2 != 0xa1)) &&
               (uVar10 = __shl_r0_by_r1(1,uVar10 & 0xff), (uVar10 & 0xff & (int)cVar1) != 0)) {
              iVar2 = uVar11 + uVar3 * 8;
              *param_1 = (byte)((ushort)(&DAT_0001b2d8)[iVar2] >> 8);
              param_1[1] = (byte)(&DAT_0001b2d8)[iVar2];
              param_1 = param_1 + 2;
              bStack_24 = bStack_24 + 1;
              if (0x7e < bStack_24) break;
            }
            uVar10 = uVar11 + 1;
          }
        }
        if (0x7e < bStack_24) {
          return param_1;
        }
        pbVar5 = pbVar5 + 1;
      }
    }
  }
  return param_1;
}

