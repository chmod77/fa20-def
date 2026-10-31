
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a24(void)

{
  short sVar1;
  
  sVar1 = FUN_0000151c(&DAT_ffffab98,0xffffabc0);
  if ((_DAT_ffffabae == 0x55aa) && ((_DAT_ffffab92 == -0x5a5b || (_DAT_ffffab92 == 0x5a5a)))) {
    if (_DAT_ffffab92 != -0x5a5b) {
      _DAT_ffffab92 = 0x5a5a;
      _DAT_ffffabae = 0x55aa;
      return;
    }
    if (_DAT_ffffab90 == sVar1) {
      _DAT_ffffab92 = 0x5a5a;
      _DAT_ffffabae = 0x55aa;
      return;
    }
  }
  FUN_00001a7c();
  _DAT_ffffabae = 0x55aa;
  _DAT_ffffab92 = 0x5a5a;
  return;
}

