
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009b520(ushort param_1,byte param_2,ushort param_3,byte param_4,ushort param_5,
                 char param_6,undefined1 *param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  
  bVar2 = false;
  if ((((0xafff < param_1) && (param_4 < 0x4d)) && (param_5 < 0x3200)) && (param_6 == '\x04')) {
    bVar2 = true;
  }
  *(bool *)param_10 = bVar2;
  cVar5 = '\x01';
  if (DAT_fffec004 <= param_2) {
    cVar5 = DAT_fffec003;
  }
  if (param_2 != 0) {
    cVar5 = '\0';
  }
  bVar1 = false;
  if (cVar5 == '\0') {
    _DAT_fffebffc = 0;
    sVar3 = _DAT_fffebffc;
  }
  else {
    bVar1 = 299 < _DAT_fffebffc;
    sVar3 = -1;
    if (_DAT_fffebffc != 0xffff) {
      sVar3 = _DAT_fffebffc + 1;
    }
  }
  _DAT_fffebffc = sVar3;
  if (((!bVar2) || (bVar1)) || (0x18ff < param_3)) {
    DAT_fffec000 = '\x01';
  }
  cVar4 = DAT_fffec000;
  if (param_2 != 0) {
    cVar4 = '\0';
  }
  DAT_fffec000 = cVar4;
  DAT_fffec003 = cVar5;
  *(bool *)param_8 = bVar1;
  cVar5 = '\x01';
  if (param_2 <= DAT_fffec004) {
    cVar5 = DAT_fffec001;
  }
  if (param_2 == 0) {
    cVar5 = '\0';
  }
  bVar1 = false;
  if (cVar5 == '\0') {
    _DAT_fffebffe = 0;
    sVar3 = _DAT_fffebffe;
  }
  else {
    bVar1 = 99 < _DAT_fffebffe;
    sVar3 = -1;
    if (_DAT_fffebffe != 0xffff) {
      sVar3 = _DAT_fffebffe + 1;
    }
  }
  _DAT_fffebffe = sVar3;
  if (((!bVar2) || (!bVar1)) || (cVar6 = '\x01', 0x18ff < param_3)) {
    cVar6 = DAT_fffec002;
  }
  if ((!bVar2) || (param_2 == 0)) {
    cVar6 = '\0';
  }
  DAT_fffec001 = cVar5;
  DAT_fffec002 = cVar6;
  if (param_2 == 0) {
    if (cVar4 == '\0') {
      *param_7 = 1;
    }
    else {
      *param_7 = 2;
    }
  }
  else if (cVar6 == '\0') {
    *param_7 = 3;
  }
  else {
    *param_7 = 4;
  }
  *(bool *)param_9 = bVar1;
  DAT_fffec004 = param_2;
  return;
}

