
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015c49a(void)

{
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar1;
  ushort uVar8;
  
  if ((_DAT_ffff2f62 != 0) && (_DAT_ffff2f62 = _DAT_ffff2f62 + -1, _DAT_ffff2f62 == 0)) {
    sVar2 = FUN_00001550(0xf0);
    sVar3 = FUN_0016b3dc((uint)_DAT_ffff2f64 * _DAT_ffff2b78,0xc80);
    sVar4 = FUN_00001550(0xf0);
    uVar8 = 0;
    if (sVar3 != 0) {
      uVar8 = sVar3 - 1;
    }
    sVar5 = FUN_0014390e();
    sVar3 = _DAT_fffff600;
    if (uVar8 < (ushort)(sVar5 + 2U)) {
      _DAT_fffff60a = _DAT_fffff600 + 2;
    }
    else {
      sVar5 = FUN_0014390e();
      _DAT_fffff60a = (sVar3 - sVar5) + uVar8;
    }
    _DAT_fffff62c = _DAT_fffff62c & 0xfff7;
    _DAT_fffff630 = _DAT_fffff630 | 8;
    FUN_00001550((int)sVar4);
    FUN_00001550((int)sVar2);
  }
  if (_DAT_ffff2f66 == 0) {
    if (DAT_ffff2f59 != '\x01') {
      return;
    }
    iVar1 = FUN_0015c440();
    if (iVar1 == 0) {
      return;
    }
    uVar6 = FUN_00001550(0xf0);
  }
  else {
    _DAT_ffff2f66 = _DAT_ffff2f66 + -1;
    if (_DAT_ffff2f66 == 0) {
      uVar6 = FUN_00001550();
      uVar7 = FUN_0016b3dc((uint)_DAT_ffff2f68 * _DAT_ffff2b78,0xc80);
      FUN_0015c446(uVar7);
      goto LAB_0015c5ce;
    }
    uVar6 = FUN_00001550(0xf0);
    iVar1 = FUN_0015c440();
    if (iVar1 == 0) goto LAB_0015c5ce;
  }
  FUN_0015c446(&DAT_0000ffff);
LAB_0015c5ce:
  FUN_00001550(uVar6);
  return;
}

