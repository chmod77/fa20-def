
/* WARNING: Removing unreachable block (ram,0x0007205c) */
/* WARNING: Removing unreachable block (ram,0x0007209a) */

int FUN_0007202c(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  short local_24;
  
  pbVar6 = param_1;
  for (iVar5 = 0; iVar5 < (int)(param_3 & 0xff); iVar5 = iVar5 + 1) {
    bVar1 = *(byte *)(param_2 + iVar5);
    uVar2 = FUN_0016b5a4((bVar1 >> 3) - 1);
    if ((bVar1 & 0x1f) == 0) {
      if (((**(byte **)(&LAB_0007d610 + (uVar2 & 0xff) * 4) & 1) != 0) || (bVar1 == 0)) {
        *pbVar6 = bVar1;
        uVar2 = FUN_0000152c(bVar1 >> 3);
        for (iVar4 = 4; pbVar6 = pbVar6 + 1, 0 < iVar4; iVar4 = iVar4 + -1) {
          uVar3 = uVar2 & 0xff;
          uVar2 = uVar3 + 1;
          *pbVar6 = **(byte **)(&LAB_0007d610 + uVar3 * 4);
        }
      }
    }
    else if (bVar1 < 0x20) {
      pbVar6 = (byte *)FUN_0007216c(pbVar6);
    }
    else if (bVar1 < 0x40) {
      pbVar6 = (byte *)FUN_00072d94(pbVar6);
    }
    else if (bVar1 < 0x60) {
      pbVar6 = (byte *)FUN_00074248(pbVar6);
    }
    else if (bVar1 < 0x80) {
      pbVar6 = (byte *)FUN_00074398(pbVar6);
    }
    else if (bVar1 < 0xa0) {
      pbVar6 = (byte *)FUN_0007439c(pbVar6);
    }
    else if (bVar1 < 0xc0) {
      pbVar6 = (byte *)FUN_000743ec(pbVar6);
    }
    else if (bVar1 < 0xe0) {
      pbVar6 = (byte *)FUN_00074b74();
    }
    else {
      pbVar6 = (byte *)FUN_00074b78(pbVar6);
    }
  }
  local_24 = (ushort)(byte)((char)pbVar6 - (char)param_1) << 8;
  return (int)local_24;
}

