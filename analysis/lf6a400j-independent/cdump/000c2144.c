
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c2144(char param_1,char param_2,byte param_3,ushort param_4,char param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  
  if ((param_5 == '\0') || (param_3 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = 99 < _DAT_fffec9de;
  }
  if ((param_5 == '\0') || (param_3 == 0)) {
    _DAT_fffec9de = 0;
  }
  else {
    _DAT_fffec9de = _DAT_fffec9de + 1;
    if (_DAT_fffec9de == 0) {
      _DAT_fffec9de = -1;
    }
  }
  cVar3 = '\x01';
  if (DAT_fffec9e0 <= param_3) {
    cVar3 = DAT_fffec9e2;
  }
  if (param_3 != 0) {
    cVar3 = '\0';
  }
  if ((cVar3 == '\0') || (param_5 == '\x04')) {
    bVar2 = false;
  }
  else {
    bVar2 = 299 < _DAT_fffec9dc;
  }
  if ((cVar3 == '\0') || (param_5 == '\x04')) {
    _DAT_fffec9dc = 0;
  }
  else {
    _DAT_fffec9dc = _DAT_fffec9dc + 1;
    if (_DAT_fffec9dc == 0) {
      _DAT_fffec9dc = -1;
    }
  }
  if ((bVar2) || (0x18ff < param_4)) {
    DAT_fffec9e1 = 0;
  }
  uVar4 = 0;
  if ((((param_1 == '\0') && (uVar4 = 0, param_2 == '\0')) && (uVar4 = DAT_fffec9e1, bVar1)) &&
     (0x18ff >= param_4)) {
    uVar4 = 1;
  }
  DAT_fffec9e2 = cVar3;
  *param_6 = uVar4;
  DAT_fffec9e1 = uVar4;
  DAT_fffec9e0 = param_3;
  return;
}

