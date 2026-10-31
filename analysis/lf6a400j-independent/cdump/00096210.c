
/* WARNING: Removing unreachable block (ram,0x000962de) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00096210(char param_1,char param_2,byte param_3,char param_4,undefined4 param_5,
                 char param_6,char param_7,char param_8,byte param_9,char param_10,
                 undefined1 *param_11,ushort *param_12)

{
  bool bVar1;
  short sVar2;
  char cVar3;
  undefined1 uVar4;
  ushort uVar5;
  char cVar6;
  
  cVar3 = '\x01';
  if (param_2 == '\0') {
    cVar3 = DAT_fffebf1b;
  }
  if (param_1 == '\x01') {
    cVar3 = '\0';
  }
  if (cVar3 == '\0') {
    DAT_fffebf1a = '\0';
    sVar2 = _DAT_fffebf14;
  }
  else {
    if (DAT_fffebf1a == '\0') {
      _DAT_fffebf14 = 0;
      DAT_fffebf1a = '\x01';
    }
    DAT_fffebf12 = '\x01';
    sVar2 = -1;
    if (_DAT_fffebf14 != -1) {
      sVar2 = _DAT_fffebf14 + 1;
    }
  }
  _DAT_fffebf14 = sVar2;
  cVar6 = '\0';
  if (cVar3 != '\0') {
    cVar6 = DAT_fffebf12;
  }
  bVar1 = param_1 != '\x03';
  if (bVar1) {
    DAT_fffebf1c = '\0';
    uVar5 = _DAT_fffebf16;
  }
  else {
    if (DAT_fffebf1c == '\0') {
      _DAT_fffebf16 = 0;
      DAT_fffebf1c = '\x01';
    }
    _DAT_fffebf10 = _DAT_fffebf16;
    uVar5 = 0xffff;
    if (_DAT_fffebf16 != 0xffff) {
      uVar5 = _DAT_fffebf16 + 1;
    }
  }
  _DAT_fffebf16 = uVar5;
  uVar5 = 0;
  if (!bVar1) {
    uVar5 = _DAT_fffebf10;
  }
  if (param_9 == 0) {
    if (_DAT_fffebf18 == 0xffff) {
      _DAT_fffebf18 = 0xffff;
    }
    else {
      _DAT_fffebf18 = _DAT_fffebf18 + 1;
    }
  }
  if (param_9 < DAT_fffebf1d) {
    _DAT_fffebf18 = 0;
  }
  uVar4 = 0;
  if ((((!bVar1) && ((((cVar6 != '\0' || (param_8 != '\0')) && (9 < param_3)) && (param_4 != '\0')))
       ) && ((((param_6 != '\0' || (0x30d3 < uVar5)) || (param_7 != '\0')) &&
             ((param_9 == 0 && (0x24 < _DAT_fffebf18)))))) && (param_10 != '\0')) {
    uVar4 = 1;
  }
  DAT_fffebf1b = cVar3;
  *param_11 = uVar4;
  *param_12 = _DAT_fffebf18;
  DAT_fffebf1d = param_9;
  return;
}

