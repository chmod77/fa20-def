
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015c5de(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  
  cVar2 = DAT_ffff2b6e;
  if (DAT_ffff2b6e == '\0') {
    return;
  }
  if ((DAT_ffff2f58 & 2) != 0) {
    return;
  }
  bVar1 = 0x960 < _DAT_ffff2f52;
  if (bVar1) {
    _DAT_ffff2f5c = FUN_0016bd34(_DAT_ffff2f52 - 0x960);
  }
  else {
    _DAT_ffff2f5c = _DAT_ffff2f52;
  }
  if ((DAT_ffff2f59 != '\x03') && (DAT_ffff2f59 != '\x04')) {
    if (((int)(char)DAT_ffff2f6e & 0x80U) != 0) {
      return;
    }
    if (DAT_ffff2f59 != '\x01') {
      return;
    }
  }
  if (((int)(char)DAT_ffff2f6e & 0x80U) == 0) {
    FUN_0015c438();
    DAT_ffff2f6e = DAT_ffff2f6e | 0x80;
  }
  iVar3 = FUN_0015c440();
  if (iVar3 == 0) {
    DAT_ffff2f5e = !bVar1;
    if ((bool)DAT_ffff2f5e) {
      DAT_ffff2f5e = '\x03';
    }
  }
  else if (bVar1) {
    DAT_ffff2f5e = '\x02';
  }
  else {
    DAT_ffff2f5e = '\x01';
  }
  if (DAT_ffff2f5e == '\x01') {
    sVar4 = FUN_00001550(0xf0);
    FUN_0015c438();
    _DAT_ffff2f66 = 0;
    _DAT_ffff2f68 = 0;
    FUN_00001550((int)sVar4);
  }
  else if ((DAT_ffff2f5e != '\x02') && (DAT_ffff2f5e != '\x03')) goto LAB_0015c736;
  FUN_0015c952(cVar2);
LAB_0015c736:
  FUN_0015c834(cVar2,(int)_DAT_ffff2f50,&DAT_ffff2f62,&DAT_ffff2f64);
  if (_DAT_ffff2f62 == 0) {
    sVar4 = FUN_00001550();
    sVar5 = FUN_00143bf2(_DAT_ffff2f64);
    sVar6 = FUN_00001550(0xf0);
    uVar8 = 0;
    if (sVar5 != 0) {
      uVar8 = sVar5 - 1;
    }
    sVar7 = FUN_0014390e();
    sVar5 = _DAT_fffff600;
    if (uVar8 < (ushort)(sVar7 + 2U)) {
      _DAT_fffff60a = _DAT_fffff600 + 2;
    }
    else {
      sVar7 = FUN_0014390e();
      _DAT_fffff60a = uVar8 + (sVar5 - sVar7);
    }
    _DAT_fffff62c = _DAT_fffff62c & 0xfff7;
    _DAT_fffff630 = _DAT_fffff630 | 8;
    FUN_00001550((int)sVar6);
    FUN_00001550((int)sVar4);
  }
  return;
}

