
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066872(char param_1)

{
  if (param_1 == '\x02') {
    if ((undefined *)(_DAT_ffff34fa + 5) < &DAT_0000ffff) {
      _DAT_ffff34fa = _DAT_ffff34fa + 5;
    }
    else {
      _DAT_ffff34fa = 0xffff;
    }
    if ((0x32 < _DAT_ffff34fa) && (DAT_ffff34bd != '\0')) {
      DAT_ffff34bc = DAT_ffff34bd;
    }
  }
  if (DAT_ffff01e3 == -1) {
    _DAT_ffff34fa = 0;
    DAT_ffff01e3 = '\0';
  }
  FUN_000669e4();
  FUN_00067d42();
  if (param_1 == '\x02') {
    FUN_000660ec(2);
    _DAT_ffff008e = (undefined2)((uint)_DAT_ffff008c * 400 >> 0x10);
    DAT_ffff007d = 0x55;
    FUN_0006726c();
    _DAT_ffff007a = 0;
  }
  else {
    DAT_ffff34f8 = 0;
    DAT_ffff34bd = '\0';
    DAT_ffff34bc = '\0';
    DAT_ffff34f7 = 0;
    _DAT_ffff34fe = 0;
    FUN_000671cc();
    FUN_000669fa();
    FUN_00066a26();
    FUN_00064380();
    FUN_00063ee8();
    FUN_000642a4();
    FUN_00063ba8();
    FUN_0006319c();
    FUN_000630d2();
    FUN_00062e32();
    FUN_0006726c();
    FUN_000660ec(param_1);
    _DAT_ffff008e = (undefined2)((uint)_DAT_ffff008c * 400 >> 0x10);
    FUN_000663ee();
    _DAT_ffff34fc = 0x162b;
    FUN_0006627e(0x162b);
    _DAT_ffff007a = 7;
    _DAT_ffff34fa = 0;
    _DAT_ffff0034 = 0;
  }
  return;
}

