
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002d1c(void)

{
  int iVar1;
  int iVar2;
  
  if ((_DAT_fffff75e & 0x10) == 0) {
    if (_DAT_ffff8a7c == 0) {
      _DAT_ffffab90 = (*(code *)&SUB_fffed4f2)(&DAT_ffffab98,0xffffabc0);
      _DAT_ffffab92 = 0xa5a5;
      _DAT_fffff75e = _DAT_fffff75e & 0xffbf;
      do {
        (*(code *)&SUB_fffed624)();
      } while ((_DAT_fffff75e & 0x10) == 0);
      DAT_ffffab95 = DAT_ffffab95 & 0x7f;
      _DAT_fffff74e = 0x18;
      _DAT_fffff748 = 0xff3f;
      _DAT_fffff74a = 0x8000;
      _DAT_fffff74c = 0;
      _DAT_fffff75e = 0x54c;
      _DAT_fffff756 = 0x25ee;
      _DAT_fffff758 = 0xf1;
      _DAT_fffff75a = 0x4001;
      _DAT_fffff75c = 0;
      DAT_ffff66b8 = 0xa5;
      iVar2 = 0;
      FUN_00000820();
      FUN_000009a4();
      FUN_00000a2c();
      FUN_00000a6c();
      FUN_00000a9c();
      DAT_fffff404 = 1;
      iVar1 = 0x1a;
      do {
        iVar1 = iVar1 + -1;
      } while (iVar2 <= iVar1);
      DAT_fffff401 = DAT_fffff401 & 0xfe | 1;
      _DAT_ffffbffc = 0xa9c;
      FUN_00001b78();
      return;
    }
    _DAT_ffff8a7c = _DAT_ffff8a7c + -1;
  }
  else {
    _DAT_ffff8a7c = 24000;
  }
  return;
}

