
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00109034(char param_1,char param_2,char param_3,char param_4,undefined1 *param_5)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  char cVar4;
  
  if (param_1 == '\0') {
    DAT_fffedbbd = '\0';
  }
  else {
    if (DAT_fffedbbd == '\0') {
      DAT_fffedbbc = '\0';
      _DAT_fffedbba = 0;
      DAT_fffedbbd = '\x01';
    }
    bVar1 = false;
    if ((param_2 == -0x60) && (param_3 != '\0')) {
      bVar1 = true;
    }
    bVar2 = false;
    if ((bVar1) && (_DAT_fffedbba == 0)) {
      bVar2 = true;
    }
    sVar3 = 100;
    if (!bVar2) {
      sVar3 = _DAT_fffedbba;
    }
    if ((bVar1) && (sVar3 != 0)) {
      _DAT_fffedbba = sVar3 + -1;
    }
    else {
      _DAT_fffedbba = 0;
    }
    if ((!bVar2) || (cVar4 = '\x01', DAT_fffedbbe != '\0')) {
      cVar4 = DAT_fffedbbc;
    }
    if ((bVar2) && (DAT_fffedbbe != '\0')) {
      cVar4 = '\0';
    }
    DAT_fffedbbc = cVar4;
    if (bVar1) {
      DAT_fffedbb8 = 0;
      if (cVar4 != '\0') {
        DAT_fffedbb8 = 1;
      }
    }
    else {
      DAT_fffedbb8 = 1;
      if ((param_2 != '\x01') && (param_4 == '\0')) {
        DAT_fffedbb8 = 0;
      }
    }
  }
  DAT_fffedbbe = 0;
  if (param_1 != '\0') {
    DAT_fffedbbe = DAT_fffedbb8;
  }
  *param_5 = DAT_fffedbbe;
  return;
}

