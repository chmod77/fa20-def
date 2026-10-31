
/* WARNING: Removing unreachable block (ram,0x00074f42) */

byte * FUN_00074e26(byte *param_1)

{
  char cVar1;
  int iVar2;
  byte bVar4;
  uint uVar3;
  byte bVar6;
  byte *pbVar5;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte local_8c [104];
  byte bStack_24;
  
  pbVar5 = local_8c;
  bVar6 = 0;
  bStack_24 = 0;
  bVar7 = 0;
  for (uVar8 = 0; (uVar8 & 0xff) < 0x67; uVar8 = uVar8 + 1) {
    uVar8 = uVar8 & 0xff;
    bVar4 = (*(byte *)(uVar8 - 0xf7a9) | (&DAT_ffff37d9)[uVar8]) & (&DAT_00023b08)[uVar8];
    local_8c[uVar8] = bVar4;
    if (bVar4 != 0) {
      for (uVar3 = 0; (uVar3 & 0xff) < 8; uVar3 = (uVar3 & 0xff) + 1) {
        iVar2 = uVar8 * 8 + (uVar3 & 0xff);
        if ((((iVar2 != 0xa0) && (iVar2 != 0xa1)) &&
            (uVar9 = __shl_r0_by_r1(1,uVar3 & 0xff), (uVar9 & 0xff & (uint)bVar4) != 0)) &&
           (bVar7 != 0xff)) {
          bVar6 = bVar6 + 1;
          bVar7 = bVar6;
        }
      }
    }
    if (0xfe < bVar7) break;
  }
  *param_1 = bVar6;
  param_1 = param_1 + 1;
  if (bVar7 != 0) {
    for (uVar8 = 0; uVar3 = uVar8 & 0xff, uVar3 < 0x67; uVar8 = uVar8 + 1) {
      cVar1 = *pbVar5;
      if ((int)cVar1 != 0) {
        uVar8 = uVar8 & 0xff;
        uVar9 = 0;
        while ((uVar9 & 0xff) < 8) {
          uVar10 = uVar9 & 0xff;
          iVar2 = uVar8 * 8 + uVar10;
          if (((iVar2 != 0xa0) && (iVar2 != 0xa1)) &&
             (uVar9 = __shl_r0_by_r1(1,uVar9 & 0xff), (uVar9 & 0xff & (int)cVar1) != 0)) {
            iVar2 = uVar10 + uVar3 * 8;
            *param_1 = (byte)((ushort)(&DAT_0001b2d8)[iVar2] >> 8);
            param_1[1] = (byte)(&DAT_0001b2d8)[iVar2];
            param_1 = param_1 + 2;
            bStack_24 = bStack_24 + 1;
            if (0xfe < bStack_24) break;
          }
          uVar9 = uVar10 + 1;
        }
      }
      if (0xfe < bStack_24) {
        return param_1;
      }
      pbVar5 = pbVar5 + 1;
    }
  }
  return param_1;
}

