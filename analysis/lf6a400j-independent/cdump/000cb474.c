
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cb474(char param_1,char param_2,char param_3,char param_4,char param_5,char *param_6)

{
  bool bVar1;
  short sVar2;
  char cVar3;
  
  if (((param_1 == '\0') || (param_2 == '\0')) || (param_5 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = 0x31 < _DAT_fffecbd8;
  }
  if (((param_1 == '\0') || (param_2 == '\0')) || (param_5 == '\0')) {
    _DAT_fffecbd8 = 0;
    sVar2 = _DAT_fffecbd8;
  }
  else {
    sVar2 = -1;
    if (_DAT_fffecbd8 != 0xffff) {
      sVar2 = _DAT_fffecbd8 + 1;
    }
  }
  _DAT_fffecbd8 = sVar2;
  cVar3 = -1;
  if (!bVar1) {
    cVar3 = DAT_fffecbda;
  }
  if (((param_1 == '\0') || (param_2 == '\0')) ||
     ((((param_1 == '\0' ||
        ((((param_2 == '\0' || (param_4 == '\0')) || (param_3 == '\0')) ||
         (DAT_fffecbda = param_3, param_3 == -1)))) &&
       ((DAT_fffecbda = cVar3, param_1 != '\0' && (param_2 != '\0')))) &&
      ((param_4 == '\0' && ((param_3 == '\0' || (param_3 == -1)))))))) {
    DAT_fffecbda = -1;
  }
  *param_6 = DAT_fffecbda;
  return;
}

