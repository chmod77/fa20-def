
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0014ea8a(void)

{
  undefined4 uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)((int)&PTR_DAT_00162a38 + (uint)DAT_ffff2ca6);
  _DAT_ffff2c8a = _DAT_ffff2c7c;
  uVar1 = FUN_00001550(0xf0);
  if ((uVar4 == 0) || (uVar4 == 1)) {
    _DAT_ffff2c7c = _DAT_ffff2c8e + 0x10;
  }
  else {
    _DAT_ffff2c7c = _DAT_ffff2c8e + 0xf;
  }
  _DAT_ffff2c82 = _DAT_ffff2c82 & 0xfffe;
  _DAT_ffff2c80 = _DAT_ffff2c80 & 0xfffe;
  FUN_00001550(uVar1);
  DAT_ffff2c88 = DAT_ffff2c88 | 0x80;
  uVar2 = uVar4 * 4;
  if ((*(char *)(&DAT_00162a28)[uVar4] == '\0') && (uVar2 = FUN_0014e89c(), (uVar2 & 0xff) == 0)) {
    if ((DAT_ffff2f04 != '\0') || (DAT_ffff2cc2 != '\0')) {
      FUN_00145f5e(1);
      DAT_ffff2cc2 = '\x01';
    }
    _DAT_ffff2caa = FUN_00143ba2(DAT_ffff2cac);
    uVar1 = FUN_00001550(0xf0);
    _DAT_fffff700 = _DAT_fffff700 & 0xff | *(ushort *)(&DAT_00162a44 + uVar4 * 2);
    uVar3 = 0;
    if (_DAT_ffff2caa != 0) {
      uVar3 = _DAT_ffff2caa - 1;
    }
    if (uVar3 < (ushort)((_DAT_fffff5c0 - _DAT_ffff1b06) + 2U)) {
      _DAT_fffff5c4 = _DAT_fffff5c0 + 2;
    }
    else {
      _DAT_fffff5c4 = _DAT_ffff1b06 + uVar3;
    }
    _DAT_fffff5cc = _DAT_fffff5cc | 2;
    _DAT_fffff5ca = _DAT_fffff5ca & 0xfffd;
    DAT_fffff5c6 = DAT_fffff5c6 & 0xf | 0x10;
    *(undefined1 *)(&DAT_00162a28)[uVar4] = 0x80;
    uVar2 = FUN_00001550(uVar1);
  }
  return uVar2;
}

