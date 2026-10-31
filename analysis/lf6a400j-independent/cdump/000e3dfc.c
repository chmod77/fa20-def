
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e3dfc(char param_1,char param_2,char param_3,byte param_4,char param_5,char param_6,
                 byte param_7,byte param_8,undefined1 *param_9)

{
  bool bVar1;
  short sVar2;
  undefined1 uVar3;
  char cVar4;
  
  cVar4 = '\x01';
  if (DAT_fffed2b2 <= param_8) {
    cVar4 = DAT_fffed2b3;
  }
  if (param_8 != 0) {
    cVar4 = '\0';
  }
  bVar1 = false;
  if (cVar4 == '\0') {
    _DAT_fffed2b0 = 0;
    sVar2 = _DAT_fffed2b0;
  }
  else {
    bVar1 = _DAT_fffed2b0 < 500;
    sVar2 = -1;
    if (_DAT_fffed2b0 < 0xfffc) {
      sVar2 = _DAT_fffed2b0 + 4;
    }
  }
  _DAT_fffed2b0 = sVar2;
  uVar3 = 1;
  if (((((param_1 == '\0') && (param_2 == '\0')) && (param_3 == '\0')) && (param_4 < 7)) &&
     ((((param_5 != -0x5b || (param_6 == '\0')) || (param_7 < 0x92)) && ((param_8 == 0 && (!bVar1)))
      ))) {
    uVar3 = 0;
  }
  DAT_fffed2b3 = cVar4;
  *param_9 = uVar3;
  DAT_fffed2b2 = param_8;
  return;
}

