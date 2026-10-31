
/* WARNING: Removing unreachable block (ram,0x00159fac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00159f18(void)

{
  ushort uVar2;
  int iVar1;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int b;
  
  uVar2 = FUN_00001540(0);
  for (b = 0; b < 8; b = b + 1) {
    pbVar6 = &DAT_ffff2ef0;
    iVar4 = (int)DAT_ffff2ef0;
    iVar7 = b * 4;
    iVar8 = b * 2;
    iVar1 = __shl_r0_by_r1(1,b);
    if (iVar4 == 0) {
      uVar5 = *(int *)(iVar7 + -0xd1ec) + (uint)*(ushort *)(iVar8 + -0xd122);
    }
    else {
      uVar5 = ((uint)*pbVar6 * (uint)*(ushort *)(iVar8 + -0xd122) >> 8) + *(int *)(iVar7 + -0xd1ec);
    }
    if ((DAT_ffff2d7a & 0x10) == 0) {
      uVar3 = FUN_00001540(uVar5 & 0x3ffffff);
      *(undefined2 *)(iVar8 + -0xd200) = uVar3;
    }
    else {
      uVar3 = FUN_00001540((uVar5 & 0x3ffffff) << 1);
      *(undefined2 *)(iVar8 + -0xd200) = uVar3;
    }
    if (*(ushort *)(iVar8 + -0xd200) < uVar2) {
      *(ushort *)(iVar8 + -0xd200) = uVar2;
      DAT_ffff2eee = DAT_ffff2eee | (byte)iVar1;
    }
    else {
      DAT_ffff2eee = DAT_ffff2eee & ~(byte)iVar1;
    }
    *(undefined4 *)(iVar7 + -0xd1ec) = 0;
  }
  if ((DAT_ffff2e34 == '\x01') || (DAT_ffff2e34 == '\x03')) {
    _DAT_ffff2efe = _DAT_ffff2e02;
  }
  else {
    _DAT_ffff2f00 = _DAT_ffff2e02;
  }
  return;
}

