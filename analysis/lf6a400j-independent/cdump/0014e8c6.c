
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0014e8c6(void)

{
  char cVar2;
  uint uVar1;
  short sVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (uint)*(byte *)((int)&PTR_DAT_00162a38 + (uint)DAT_ffff2ca6);
  _DAT_ffff2c7c = _DAT_ffff2c78 + -1;
  _DAT_ffff2c8a = _DAT_ffff2c7c;
  _DAT_ffff2c8e = _DAT_ffff2c7c;
  cVar2 = FUN_0014e89c();
  if (cVar2 == '\0') {
    if ((DAT_ffff2092 == '\0') && (DAT_ffff2cc2 == '\0')) {
      FUN_00145f5e(0);
    }
    else {
      FUN_00145f5e(1);
    }
    uVar1 = FUN_00001550(0xf0);
    uVar1 = uVar1 & 0xffff;
    if ((ushort)DAT_ffff2c92 < (_DAT_ffff2c7a - _DAT_ffff2c8a & 0xffU)) {
      _DAT_ffff2c8a = _DAT_ffff2c8a + (ushort)DAT_ffff2c92;
      _DAT_ffff1b06 = _DAT_ffff1a42 * (ushort)DAT_ffff2c92 + _DAT_ffff1a44;
      if ((uVar4 == 0) || (uVar4 == 1)) {
        _DAT_ffff2c7c = _DAT_ffff2c8e + 0x10;
      }
      else {
        _DAT_ffff2c7c = _DAT_ffff2c8e + 0xf;
      }
      _DAT_ffff2c82 = _DAT_ffff2c82 & 0xfffe;
      _DAT_ffff2c80 = _DAT_ffff2c80 & 0xfffe;
      DAT_ffff2c88 = DAT_ffff2c88 | 0x80;
      FUN_00001550(uVar1);
      if (*(char *)(&DAT_00162a28)[uVar4] != '\0') {
        return uVar4 * 4;
      }
      if ((DAT_ffff2f04 != '\0') || (DAT_ffff2cc2 != '\0')) {
        FUN_00145f5e(1);
        DAT_ffff2cc2 = '\x01';
      }
      _DAT_ffff2caa = FUN_00143ba2(DAT_ffff2cac);
      uVar1 = FUN_00001550(0xf0);
      _DAT_fffff700 = _DAT_fffff700 & 0xff | *(ushort *)(&DAT_00162a44 + uVar4 * 2);
      sVar3 = _DAT_ffff1b06 + _DAT_ffff2caa + -1;
      _DAT_fffff5c4 = _DAT_fffff5c0 + 2;
      if ((ushort)(sVar3 - (_DAT_fffff5c0 + 2)) < 0x8000) {
        _DAT_fffff5c4 = sVar3;
      }
      _DAT_fffff5cc = _DAT_fffff5cc | 2;
      _DAT_fffff5ca = _DAT_fffff5ca & 0xfffd;
      DAT_fffff5c6 = DAT_fffff5c6 & 0xf | 0x10;
      *(undefined1 *)(&DAT_00162a28)[uVar4] = 0x80;
    }
    else {
      _DAT_ffff2c7c = _DAT_ffff2c8a + (ushort)DAT_ffff2c92;
      _DAT_ffff2c82 = _DAT_ffff2c82 | 1;
      _DAT_ffff2c80 = _DAT_ffff2c80 & 0xfffe;
      DAT_ffff2c88 = DAT_ffff2c88 & 0x7f;
    }
    iVar5 = FUN_00001550(uVar1);
  }
  else {
    iVar5 = uVar4 * 4;
    if (*(char *)(&DAT_00162a28)[uVar4] == '\0') {
      FUN_0014e754();
      iVar5 = FUN_00145f5e(1);
    }
  }
  return iVar5;
}

