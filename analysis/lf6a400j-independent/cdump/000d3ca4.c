
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d3ca4(byte param_1,byte param_2,undefined1 param_3,undefined1 *param_4)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  
  if (param_1 < 0x73) {
    DAT_fffece27 = '\0';
    uVar2 = _DAT_fffece22;
  }
  else {
    if (DAT_fffece27 == '\0') {
      _DAT_fffece22 = 0;
      DAT_fffece27 = '\x01';
    }
    DAT_fffece20 = 0xbb < _DAT_fffece22;
    uVar2 = 0xffff;
    if (_DAT_fffece22 != 0xffff) {
      uVar2 = _DAT_fffece22 + 1;
    }
  }
  _DAT_fffece22 = uVar2;
  cVar4 = '\0';
  if (param_1 >= 0x73) {
    cVar4 = DAT_fffece20;
  }
  bVar1 = false;
  if ((param_1 < 0x73) && (param_2 < 0x94)) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_fffece26 == '\0') {
      _DAT_fffece24 = 0;
      DAT_fffece26 = '\x01';
    }
    DAT_fffece21 = '\x01';
    sVar3 = -1;
    if (_DAT_fffece24 != -1) {
      sVar3 = _DAT_fffece24 + 1;
    }
  }
  else {
    DAT_fffece26 = '\0';
    sVar3 = _DAT_fffece24;
  }
  _DAT_fffece24 = sVar3;
  if (cVar4 == '\0') {
    cVar4 = '\0';
    if (bVar1) {
      cVar4 = DAT_fffece21;
    }
    if (cVar4 == '\0') {
      *param_4 = param_3;
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    *param_4 = 1;
  }
  return;
}

