
uint FUN_0014305e(int param_1)

{
  byte bVar1;
  uint uVar2;
  short sVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  undefined2 uVar9;
  int iVar3;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = param_1 * 0x20;
  uVar2 = (uint)DAT_ffff2b64;
  if (((uVar2 & 0x80) != 0) && (uVar2 = FUN_00144138(), (uVar2 & 0xff) != 0)) {
    sVar4 = FUN_00001550(0xf0);
    sVar5 = FUN_00143936();
    sVar6 = FUN_001431c6(param_1);
    FUN_00001550((int)sVar4);
    uVar7 = 0;
    if ((uint)(int)sVar6 < (uint)(int)sVar5) {
      uVar7 = FUN_00143bd4((int)sVar5 - (int)sVar6);
    }
    uVar8 = FUN_00144504();
    bVar1 = DAT_ffff1a56;
    if (uVar8 < 0x97) {
      uVar8 = uVar8 + 0xb4;
    }
    iVar12 = (uint)DAT_ffff1a56 * 2;
    uVar9 = FUN_0016b5d4((0x14a - (uint)uVar8) * 10 + (uint)uVar7);
    *(undefined2 *)(*(int *)(&DAT_00161f10 + iVar11) + iVar12) = uVar9;
    iVar3 = __sdiv32_r1_by_r0((uint)*(ushort *)(*(int *)(&DAT_00161f10 + iVar11) + iVar12),10);
    uVar10 = FUN_0016b5a4(iVar3);
    *(undefined1 *)(*(int *)(&DAT_00161f14 + iVar11) + (uint)bVar1) = uVar10;
    if (param_1 == 1) {
      *(undefined2 *)(iVar12 + -0xd410) = *(undefined2 *)(iVar12 + -0xd428);
    }
                    /* WARNING: Could not recover jumptable at 0x0014313c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&PTR_LAB_00161f18)[param_1 * 8])();
    return uVar2;
  }
  return uVar2;
}

