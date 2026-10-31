
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cc2ac(char param_1,char param_2,char param_3,char param_4,char param_5,char *param_6)

{
  bool bVar1;
  short sVar2;
  char cVar3;
  
  if (((param_1 == '\0') || (param_2 == '\0')) || (param_5 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = 0x31 < _DAT_fffecc00;
  }
  if (((param_1 == '\0') || (param_2 == '\0')) || (param_5 == '\0')) {
    _DAT_fffecc00 = 0;
    sVar2 = _DAT_fffecc00;
  }
  else {
    sVar2 = -1;
    if (_DAT_fffecc00 != 0xffff) {
      sVar2 = _DAT_fffecc00 + 1;
    }
  }
  _DAT_fffecc00 = sVar2;
  cVar3 = '\0';
  if (!bVar1) {
    cVar3 = DAT_fffecc02;
  }
  if (((param_1 == '\0') || (param_2 == '\0')) ||
     ((((param_1 == '\0' ||
        ((((param_2 == '\0' || (param_4 == '\0')) || (param_3 == '\0')) ||
         (DAT_fffecc02 = param_4, param_3 == -1)))) &&
       ((DAT_fffecc02 = cVar3, param_1 != '\0' && (param_2 != '\0')))) &&
      ((param_4 == '\0' && ((param_3 == '\0' || (param_3 == -1)))))))) {
    DAT_fffecc02 = '\0';
  }
  *param_6 = DAT_fffecc02;
  return;
}

