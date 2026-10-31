
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e1894(byte param_1,char param_2,char param_3,char param_4,uint param_5,char param_6,
                 short *param_7,undefined2 *param_8,short *param_9,char *param_10)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  
  uVar5 = 0;
  if ((param_2 != '\0') && (param_1 == 0)) {
    uVar5 = 1;
  }
  bVar2 = false;
  if (((param_2 != '\0') && (param_1 != 0)) && (param_3 == '\0')) {
    bVar2 = true;
  }
  cVar4 = '\0';
  if ((uVar5 != 0) && (param_4 != '\0')) {
    cVar4 = '\x01';
  }
  sVar7 = 0;
  if (uVar5 != 0) {
    sVar7 = _DAT_fffed1fa;
  }
  if (param_3 == '\0') {
    param_5 = (uint)(short)_DAT_fffed200;
  }
  if (DAT_fffed203 < param_1) {
    _DAT_fffed1fc = _DAT_fffed1fe;
  }
  if (param_6 != '\0') {
    _DAT_fffed1fc = 0;
  }
  *param_9 = _DAT_fffed1fc;
  bVar1 = false;
  if (((param_2 != '\0') && (param_1 != 0)) && ((param_3 != '\0' && (DAT_fffed202 != '\0')))) {
    bVar1 = true;
  }
  if ((((bVar1) || (bVar2)) || (cVar4 != '\0')) || (uVar6 = 0, uVar5 != 0)) {
    uVar6 = (uint)_DAT_fffed1f8;
  }
  sVar8 = _DAT_fffed1fa;
  if (((!bVar1) && (!bVar2)) && (sVar8 = sVar7, cVar4 != '\0')) {
    sVar8 = _DAT_fffed1fc;
  }
  bVar3 = false;
  if (((param_2 != '\0') && (param_1 != 0)) && ((param_3 != '\0' && (DAT_fffed202 == '\0')))) {
    bVar3 = true;
  }
  if (bVar3) {
    param_5 = param_5 & 0xffff;
    uVar6 = param_5 - _DAT_fffed200;
    if ((int)uVar6 < 0) {
      uVar5 = -uVar6;
      uVar6 = uVar5;
      if ((int)uVar5 < 0) {
        uVar6 = 0;
      }
    }
    else if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
  }
  _DAT_fffed1fe = (short)uVar5;
  *param_8 = (short)uVar6;
  if ((bVar3) &&
     (_DAT_fffed1fe = (short)(uVar6 + (int)_DAT_fffed1fa),
     (uVar6 + (int)_DAT_fffed1fa & 0xffff) < (uVar6 & 0xffff))) {
    _DAT_fffed1fe = -1;
  }
  if (param_6 == '\0') {
    if (!bVar3) {
      _DAT_fffed1fe = sVar8;
    }
  }
  else {
    _DAT_fffed1fe = 0;
  }
  *param_7 = _DAT_fffed1fe;
  if (bVar2) {
    cVar4 = DAT_fffed202;
  }
  if ((!bVar3) && (DAT_fffed202 = cVar4, bVar1)) {
    DAT_fffed202 = '\0';
  }
  *param_10 = DAT_fffed202;
  _DAT_fffed1fa = _DAT_fffed1fe;
  _DAT_fffed200 = (short)param_5;
  _DAT_fffed1f8 = (short)uVar6;
  DAT_fffed203 = param_1;
  return;
}

