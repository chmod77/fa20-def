
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014f06c(void)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  ushort uVar4;
  
  uVar2 = FUN_00001550(0xf0);
  DAT_fffff5c6 = DAT_fffff5c6 & 0xf0;
  _DAT_fffff5ca = _DAT_fffff5ca & 0xfffe;
  _DAT_fffff5cc = _DAT_fffff5cc & 0xfffe;
  cVar3 = FUN_0014e89c();
  if (cVar3 == '\0') {
    DAT_ffff2ca6 = 0;
    if (DAT_ffff1a59 + 1 < 4) {
      DAT_ffff2ca6 = DAT_ffff1a59 + 1;
    }
    DAT_ffff2ca7 = DAT_ffff1a59;
    bVar1 = *(byte *)((int)&PTR_DAT_00162a38 + (uint)DAT_ffff2ca6);
    if ((*(char *)(&DAT_00162a28)[*(byte *)((int)&PTR_DAT_00162a38 + (uint)DAT_ffff1a59)] == '\x01')
       || (*(char *)(&DAT_00162a28)[*(byte *)((int)&PTR_DAT_00162a38 + (uint)DAT_ffff1a59)] ==
           '\x02')) {
      if ((DAT_ffff2f04 == '\0') || (DAT_ffff2cc2 != '\0')) {
        FUN_00145f5e(0);
        DAT_ffff2cc2 = '\0';
      }
      else {
        FUN_00145f5e(1);
        DAT_ffff2cc2 = '\x01';
      }
      _DAT_ffff2c9e = FUN_00143ba2((int)_DAT_ffff2c9c);
      FUN_0014f4fc();
      _DAT_fffff700 = _DAT_fffff700 & 0xff | *(ushort *)(&DAT_00162a44 + (uint)bVar1 * 2);
      uVar4 = 0;
      if (_DAT_ffff2c9e != 0) {
        uVar4 = _DAT_ffff2c9e - 1;
      }
      if (uVar4 < (ushort)((_DAT_fffff5c0 - _DAT_fffff5c2) + 2U)) {
        _DAT_fffff5c4 = _DAT_fffff5c0 + 2;
      }
      else {
        _DAT_fffff5c4 = _DAT_fffff5c2 + uVar4;
      }
      _DAT_fffff5cc = _DAT_fffff5cc | 2;
      _DAT_fffff5ca = _DAT_fffff5ca & 0xfffd;
      DAT_fffff5c6 = DAT_fffff5c6 & 0xf | 0x10;
    }
    FUN_0014e7b6();
    thunk_FUN_00159d14();
  }
  else {
    FUN_0014e754();
  }
  FUN_00001550(uVar2);
  return;
}

