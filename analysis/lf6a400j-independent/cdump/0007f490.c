
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f490(char param_1,char param_2,char param_3,char *param_4)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  char cVar7;
  
  bVar1 = param_1 != '\0';
  cVar7 = '\x01';
  if (DAT_fffeba6e == param_1) {
    cVar7 = DAT_fffeba71;
  }
  if (DAT_fffeba6f != '\0') {
    cVar7 = '\0';
  }
  bVar2 = false;
  if ((cVar7 != '\0') && (!bVar1)) {
    bVar2 = true;
  }
  if (bVar2) {
    if (DAT_fffeba70 == '\0') {
      _DAT_fffeba6c = 0;
      DAT_fffeba70 = '\x01';
    }
    if (param_2 == '\0') {
      uVar6 = 0x28;
    }
    else {
      uVar6 = 0;
    }
    DAT_fffeba69 = uVar6 <= _DAT_fffeba6c;
    uVar6 = 0xffff;
    if (_DAT_fffeba6c != 0xffff) {
      uVar6 = _DAT_fffeba6c + 1;
    }
  }
  else {
    DAT_fffeba70 = '\0';
    uVar6 = _DAT_fffeba6c;
  }
  _DAT_fffeba6c = uVar6;
  DAT_fffeba6f = true;
  if (((!bVar2) || (DAT_fffeba69 == '\0')) &&
     ((DAT_fffeba6e == '\0' || ((!bVar1 || (DAT_fffeba6e == param_1)))))) {
    DAT_fffeba6f = false;
  }
  bVar2 = false;
  if ((DAT_fffeba6e == '\0') && (bVar1)) {
    bVar2 = true;
  }
  if (bVar2) {
    if (DAT_fffeba72 == '\0') {
      _DAT_fffeba6a = 0;
      DAT_fffeba72 = '\x01';
    }
    DAT_fffeba68 = '\x01';
    sVar3 = -1;
    if (_DAT_fffeba6a != -1) {
      sVar3 = _DAT_fffeba6a + 1;
    }
  }
  else {
    DAT_fffeba72 = '\0';
    sVar3 = _DAT_fffeba6a;
  }
  _DAT_fffeba6a = sVar3;
  cVar4 = '\0';
  if (bVar2) {
    cVar4 = DAT_fffeba68;
  }
  cVar5 = param_1;
  if (cVar4 == '\0') {
    cVar5 = DAT_fffeba6e;
  }
  if (((bool)DAT_fffeba6f) || ((DAT_fffeba6e == '\0' && (!bVar1)))) {
    cVar5 = '\0';
  }
  DAT_fffeba71 = cVar7;
  if (param_3 == '\0') {
    *param_4 = param_1;
  }
  else {
    *param_4 = cVar5;
  }
  DAT_fffeba6e = cVar5;
  return;
}

