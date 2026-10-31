
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007ebac(char param_1,char param_2,char param_3,undefined1 param_4,char param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  
  bVar1 = param_1 == '\x02';
  bVar2 = false;
  if ((param_1 == '\x03') && (DAT_fffeba36 != '\0')) {
    bVar2 = true;
  }
  if (((!bVar2) || (cVar3 = !bVar1, bVar1)) &&
     (((!bVar2 && (bVar1)) || ((cVar3 = DAT_fffeba30, bVar2 && (bVar1)))))) {
    cVar3 = !bVar1;
  }
  DAT_fffeba30 = cVar3;
  if (DAT_fffeba30 == '\0') {
    DAT_fffeba37 = '\0';
    uVar4 = _DAT_fffeba34;
  }
  else {
    if (DAT_fffeba37 == '\0') {
      _DAT_fffeba34 = 0;
      DAT_fffeba37 = '\x01';
    }
    _DAT_fffeba32 = _DAT_fffeba34;
    uVar4 = 0xffff;
    if (_DAT_fffeba34 != 0xffff) {
      uVar4 = _DAT_fffeba34 + 1;
    }
  }
  _DAT_fffeba34 = uVar4;
  bVar2 = true;
  if (((param_5 != '\0') && (!bVar1)) && (DAT_fffeba30 == '\0' || 0x1e < _DAT_fffeba32)) {
    bVar2 = false;
  }
  if (bVar2) {
    *param_6 = 1;
  }
  else if ((bVar2) || (param_2 != '\0')) {
    *param_6 = param_4;
  }
  else {
    *param_6 = param_3 == '\0';
  }
  DAT_fffeba36 = bVar1;
  return;
}

