
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d9814(char param_1,char param_2,char param_3,char param_4,undefined1 *param_5)

{
  bool bVar1;
  short sVar2;
  
  bVar1 = false;
  if ((((param_1 != '\0') && (param_2 == DAT_fffecfae)) && (param_3 == '\0')) && (param_4 == '\0'))
  {
    bVar1 = true;
  }
  if (bVar1) {
    *param_5 = 199 < _DAT_fffecfac;
    sVar2 = -1;
    if (_DAT_fffecfac != 0xffff) {
      sVar2 = _DAT_fffecfac + 1;
    }
  }
  else {
    *param_5 = 0;
    _DAT_fffecfac = 0;
    sVar2 = _DAT_fffecfac;
  }
  _DAT_fffecfac = sVar2;
  DAT_fffecfae = param_2;
  return;
}

