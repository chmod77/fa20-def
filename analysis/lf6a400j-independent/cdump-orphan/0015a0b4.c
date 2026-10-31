
/* WARNING: Removing unreachable block (ram,0x0015a146) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0015a0b4(void)

{
  short sVar1;
  bool bVar2;
  undefined2 uVar4;
  undefined4 uVar3;
  int iVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  
  uVar4 = FUN_00001550();
  DAT_fffff859 = DAT_fffff859 & 0xdf;
  _DAT_ffffecec = _DAT_ffffecec & 0xfffffff8;
  bVar2 = false;
  if (DAT_ffff2e34 != DAT_ffff2ef1) {
    *(undefined2 *)(&DAT_ffff2ef0 + (uint)DAT_ffff2e34 * 2) = 0;
  }
  DAT_ffff2ef1 = DAT_ffff2e34;
  for (uVar6 = 0; uVar6 < 0x20; uVar6 = uVar6 + 1) {
  }
  uVar8 = (uint)DAT_ffff2e10;
  DAT_ffff2e10 = DAT_ffff2e10 == 0;
  DAT_ffff2e11 = DAT_ffff2e11 + 1;
  if (DAT_ffff2e11 < DAT_ffff2eef) {
    sVar1 = 0x114;
    if (((DAT_ffff2efc != '\x01') && (sVar1 = 0x11a, DAT_ffff2efc != '\x02')) &&
       (sVar1 = 0x112, DAT_ffff2efc == '\x03')) {
      sVar1 = 0x11c;
    }
    _DAT_ffffecec = _DAT_ffffecec | 5;
    _DAT_ffffece4 = (uint)DAT_ffff2e10 * 0x54 + -0xd1ca;
    _DAT_ffffece0 = sVar1 + -0x8d2;
    _DAT_ffffece8 = 0x20;
    DAT_fffff858 = DAT_fffff858 | 0x40;
    DAT_fffff859 = DAT_fffff859 | 0x20;
  }
  else {
    bVar2 = true;
  }
  FUN_00001550(uVar4);
  FUN_00159a20(uVar8 * 0x54 + -0xd1ca);
  if (bVar2) {
    uVar4 = FUN_00001550();
    DAT_ffff2d7a = DAT_ffff2d7a & 0x7f;
    FUN_00001550(uVar4);
    FUN_0006f6b8(6);
    uVar4 = FUN_00001550(0xf0);
    DAT_fffff858 = 0x2b;
    DAT_fffff859 = 0x3f;
    uVar3 = FUN_00001550(uVar4);
  }
  else {
    uVar4 = FUN_00001550();
    iVar5 = 0;
    iVar7 = 0;
    for (uVar6 = 0; uVar6 < 8; uVar6 = uVar6 + 1) {
      *(uint *)(iVar5 + -0xd1ec) = *(int *)(iVar5 + -0xd1ec) + (uint)*(ushort *)(iVar7 + -0xd122);
      iVar7 = iVar7 + 2;
      iVar5 = iVar5 + 4;
    }
    uVar3 = FUN_00001550(uVar4);
  }
  return uVar3;
}

