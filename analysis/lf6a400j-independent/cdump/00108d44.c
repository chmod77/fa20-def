
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108d44(char param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  short sVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  if (param_5 == '\0') {
    DAT_fffedba1 = '\0';
    DAT_fffedba2 = '\0';
    DAT_fffedba0 = '\0';
  }
  else {
    if (param_2 != '1') {
      DAT_fffedba2 = '\0';
      sVar1 = _DAT_fffedb9c;
    }
    else {
      if (DAT_fffedba2 == '\0') {
        _DAT_fffedb9c = 0;
        DAT_fffedba2 = '\x01';
      }
      DAT_fffedba4 = '\0';
      sVar1 = -1;
      if (_DAT_fffedb9c != -1) {
        sVar1 = _DAT_fffedb9c + 1;
      }
    }
    _DAT_fffedb9c = sVar1;
    cVar4 = '\0';
    if (param_2 == '1') {
      cVar4 = DAT_fffedba4;
    }
    if (param_2 != '!') {
      DAT_fffedba1 = '\0';
      sVar1 = _DAT_fffedb9a;
    }
    else {
      if (DAT_fffedba1 == '\0') {
        _DAT_fffedb9a = 0;
        DAT_fffedba1 = '\x01';
      }
      DAT_fffedba3 = '\0';
      sVar1 = -1;
      if (_DAT_fffedb9a != -1) {
        sVar1 = _DAT_fffedb9a + 1;
      }
    }
    _DAT_fffedb9a = sVar1;
    cVar2 = '\0';
    if (param_2 == '!') {
      cVar2 = DAT_fffedba3;
    }
    if (param_4 != ' ') {
      DAT_fffedba0 = '\0';
      sVar1 = _DAT_fffedb9e;
    }
    else {
      if (DAT_fffedba0 == '\0') {
        _DAT_fffedb9e = 0;
        DAT_fffedba0 = '\x01';
      }
      DAT_fffedba5 = '\0';
      sVar1 = -1;
      if (_DAT_fffedb9e != -1) {
        sVar1 = _DAT_fffedb9e + 1;
      }
    }
    _DAT_fffedb9e = sVar1;
    cVar3 = '\0';
    if (param_4 == ' ') {
      cVar3 = DAT_fffedba5;
    }
    DAT_fffedb98 = 0;
    if ((param_1 != '\0') &&
       ((((cVar2 != '\0' && (param_3 == '\x01')) || ((param_3 == '\x02' && (cVar4 != '\0')))) ||
        (cVar3 != '\0')))) {
      DAT_fffedb98 = 1;
    }
  }
  if (param_5 == '\0') {
    *param_6 = 0;
  }
  else {
    *param_6 = DAT_fffedb98;
  }
  return;
}

