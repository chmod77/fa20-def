
/* WARNING: Removing unreachable block (ram,0x0015b6b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015b6f0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  _DAT_ffffed1a = _DAT_ffffed1a & 0xffbf;
  _DAT_ffffed00 = _DAT_ffffed00 & 0xf0ff;
  FUN_00001550(uVar1);
  if ((DAT_ffffab80 != '\x02') && (DAT_ffffab80 != '\x04')) {
    DAT_ffffabc8 = 0x55;
    DAT_ffff34b8 = DAT_ffff34b8 | 0x20;
    DAT_ffff3652 = DAT_ffff3652 + '\x01';
  }
  uVar1 = FUN_00001550(0xf0);
  _DAT_ffff6740 = _DAT_ffff6740 | 0x2000;
  _DAT_fffff74e = _DAT_fffff74e | 0x2000;
  FUN_00001550(uVar1);
  FUN_0015ad98();
  FUN_000706ec();
  FUN_00001550(0xf0);
  DAT_fffff75f = DAT_fffff75f & 0xbf;
  _DAT_fffff718 = 0;
  _DAT_fffff71c = 5000;
  _DAT_fffff710 = _DAT_fffff710 | 2;
  DAT_ffff20cf = 0;
  _DAT_ffff3b68 = FUN_0004a5c2(&DAT_ffff2f80);
  do {
    if ((_DAT_fffff718 & 0x80) != 0) {
      _DAT_fffff718 = _DAT_fffff718 & 0xff7f;
      DAT_ffff20cf = DAT_ffff20cf + 1;
    }
  } while (DAT_ffff20cf < 0x28);
  FUN_000006e4();
  return;
}

