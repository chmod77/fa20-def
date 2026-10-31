
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d917c(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,char param_12,
                 char param_13,char param_14,char *param_15)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  char cVar5;
  
  bVar3 = param_4 != '\0';
  bVar1 = false;
  if (param_3 == '\0') {
    _DAT_fffecf84 = 0;
    sVar4 = _DAT_fffecf84;
  }
  else {
    bVar1 = true;
    sVar4 = -1;
    if (_DAT_fffecf84 != -1) {
      sVar4 = _DAT_fffecf84 + 1;
    }
  }
  _DAT_fffecf84 = sVar4;
  if ((bVar3) || (DAT_fffecf8a == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = 299 < _DAT_fffecf82;
  }
  if ((bVar3) || (DAT_fffecf8a == '\0')) {
    _DAT_fffecf82 = 0;
    sVar4 = _DAT_fffecf82;
  }
  else {
    sVar4 = -1;
    if (_DAT_fffecf82 != 0xffff) {
      sVar4 = _DAT_fffecf82 + 1;
    }
  }
  _DAT_fffecf82 = sVar4;
  if (((param_7 != '\0') && (((param_8 != '\0' || (param_9 != '\0')) && (param_3 == '\0')))) ||
     ((((DAT_fffecf87 == '\0' && (param_10 == -0x56)) ||
       ((DAT_fffecf86 != '\0' && (param_11 == -0x56)))) &&
      ((((DAT_fffecf8c == '\0' && (param_12 == '\0')) ||
        ((DAT_fffecf8b != '\0' && (param_13 == '\0')))) && (param_3 == '\0')))))) {
    DAT_fffecf8a = '\x01';
  }
  if ((DAT_fffecf89 == '\0') || (cVar5 = '\x01', bVar3)) {
    cVar5 = DAT_fffecf88;
  }
  if ((param_4 != '\0') || (param_14 == '\x01')) {
    cVar5 = '\0';
  }
  bVar3 = false;
  if (cVar5 == '\0') {
    _DAT_fffecf80 = 0;
    sVar4 = _DAT_fffecf80;
  }
  else {
    bVar3 = true;
    sVar4 = -1;
    if (_DAT_fffecf80 != -1) {
      sVar4 = _DAT_fffecf80 + 1;
    }
  }
  _DAT_fffecf80 = sVar4;
  if (((((param_1 == '\0') && (param_2 != '\0')) || (bVar1)) || ((bVar3 || (bVar2)))) ||
     ((param_5 == '\0' || (param_6 != '\0')))) {
    DAT_fffecf8a = '\0';
  }
  *param_15 = DAT_fffecf8a;
  DAT_fffecf88 = cVar5;
  DAT_fffecf87 = 1;
  DAT_fffecf86 = 1;
  DAT_fffecf8c = 1;
  DAT_fffecf8b = 1;
  DAT_fffecf89 = param_4;
  return;
}

