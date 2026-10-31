
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014ec24(void)

{
  undefined4 uVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  
  if ((DAT_ffff2c88 & 0x40) != 0) {
    uVar2 = (uint)*(byte *)((int)&PTR_DAT_00162a38 + (uint)DAT_ffff2ca6);
    _DAT_ffff2c7e = _DAT_ffff2c78 + -1;
    _DAT_ffff2c8c = _DAT_ffff2c7e;
    _DAT_ffff2c90 = _DAT_ffff2c7e;
    uVar5 = FUN_00001550(0xf0);
    uVar5 = uVar5 & 0xffff;
    if ((ushort)DAT_ffff2c93 < (_DAT_ffff2c7a - _DAT_ffff2c8c & 0xffU)) {
      _DAT_ffff2c8c = _DAT_ffff2c8c + (ushort)DAT_ffff2c93;
      _DAT_ffff1b08 = _DAT_ffff1a42 * (ushort)DAT_ffff2c93 + _DAT_ffff1a44;
      if ((uVar2 == 0) || (uVar2 == 1)) {
        _DAT_ffff2c7e = _DAT_ffff2c90 + 0x10;
      }
      else {
        _DAT_ffff2c7e = _DAT_ffff2c90 + 0xf;
      }
      _DAT_ffff2c82 = _DAT_ffff2c82 & 0xfffd;
      _DAT_ffff2c80 = _DAT_ffff2c80 & 0xfffd;
      DAT_ffff2c88 = DAT_ffff2c88 | 0x40;
      FUN_00001550(uVar5);
      _DAT_ffff2c96 = FUN_00143ba2(DAT_ffff2c94);
      if ((*(char *)(&DAT_00162a28)[uVar2] == '\x01') ||
         (uVar3 = _DAT_ffff2c96, *(char *)(&DAT_00162a28)[uVar2] == '\x02')) {
        iVar6 = (int)_DAT_fffff5c0;
        sVar4 = *(short *)(uVar2 * 2 + -0xd34a);
        uVar5 = FUN_00143922();
        uVar5 = FUN_0016bd34(((iVar6 - sVar4 & 0xffffU) - (uVar5 & 0xffff)) + (uint)_DAT_ffff2c96);
        uVar3 = _DAT_ffff2c96;
        if ((uVar5 & 0xffff) < (uint)_DAT_ffff2cc0) {
          uVar3 = FUN_00001540(((uint)_DAT_ffff2cc0 - (uVar5 & 0xffff)) + (uint)_DAT_ffff2c96);
        }
      }
      uVar5 = FUN_00001550(0xf0);
      _DAT_fffff700 = _DAT_fffff700 & 0xff00 | *(ushort *)(&DAT_00162a3c + uVar2 * 2);
      sVar4 = _DAT_ffff1b08 + uVar3 + -1;
      _DAT_fffff5c2 = _DAT_fffff5c0 + 2;
      if ((ushort)(sVar4 - (_DAT_fffff5c0 + 2)) < 0x8000) {
        _DAT_fffff5c2 = sVar4;
      }
      _DAT_fffff5cc = _DAT_fffff5cc | 1;
      _DAT_fffff5ca = _DAT_fffff5ca & 0xfffe;
      DAT_fffff5c6 = DAT_fffff5c6 & 0xf0 | 1;
    }
    else {
      _DAT_ffff2c7e = _DAT_ffff2c8c + (ushort)DAT_ffff2c93;
      _DAT_ffff2c82 = _DAT_ffff2c82 | 2;
      _DAT_ffff2c80 = _DAT_ffff2c80 & 0xfffd;
      DAT_ffff2c88 = DAT_ffff2c88 & 0xbf;
    }
    FUN_00001550(uVar5);
    return;
  }
  uVar5 = (uint)*(byte *)((int)&PTR_DAT_00162a38 + (uint)DAT_ffff2ca6);
  _DAT_ffff2c8c = _DAT_ffff2c7e;
  uVar1 = FUN_00001550(0xf0);
  if ((uVar5 == 0) || (uVar5 == 1)) {
    _DAT_ffff2c7e = _DAT_ffff2c90 + 0x10;
  }
  else {
    _DAT_ffff2c7e = _DAT_ffff2c90 + 0xf;
  }
  _DAT_ffff2c82 = _DAT_ffff2c82 & 0xfffd;
  _DAT_ffff2c80 = _DAT_ffff2c80 & 0xfffd;
  FUN_00001550(uVar1);
  DAT_ffff2c88 = DAT_ffff2c88 | 0x40;
  _DAT_ffff2c96 = FUN_00143ba2(DAT_ffff2c94);
  if ((*(char *)(&DAT_00162a28)[uVar5] == '\x01') ||
     (uVar3 = _DAT_ffff2c96, *(char *)(&DAT_00162a28)[uVar5] == '\x02')) {
    iVar6 = (int)_DAT_fffff5c0;
    sVar4 = *(short *)(uVar5 * 2 + -0xd34a);
    uVar2 = FUN_0014390e();
    uVar2 = FUN_0016bd34(((iVar6 - sVar4 & 0xffffU) - (uVar2 & 0xffff)) + (uint)_DAT_ffff2c96);
    uVar3 = _DAT_ffff2c96;
    if ((uVar2 & 0xffff) < (uint)_DAT_ffff2cc0) {
      uVar3 = FUN_00001540(((uint)_DAT_ffff2cc0 - (uVar2 & 0xffff)) + (uint)_DAT_ffff2c96);
    }
  }
  uVar1 = FUN_00001550(0xf0);
  _DAT_fffff700 = _DAT_fffff700 & 0xff00 | *(ushort *)(&DAT_00162a3c + uVar5 * 2);
  uVar7 = 0;
  if (uVar3 != 0) {
    uVar7 = uVar3 - 1;
  }
  if (uVar7 < (ushort)((_DAT_fffff5c0 - _DAT_ffff1b08) + 2U)) {
    _DAT_fffff5c2 = _DAT_fffff5c0 + 2;
  }
  else {
    _DAT_fffff5c2 = _DAT_ffff1b08 + uVar7;
  }
  _DAT_fffff5cc = _DAT_fffff5cc | 1;
  _DAT_fffff5ca = _DAT_fffff5ca & 0xfffe;
  DAT_fffff5c6 = DAT_fffff5c6 & 0xf0 | 1;
  FUN_00001550(uVar1);
  return;
}

