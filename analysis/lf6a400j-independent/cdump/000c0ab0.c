
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c0ab0(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,short *param_10)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  short sVar5;
  char cVar6;
  
  bVar1 = param_8 != DAT_fffec9b6;
  cVar6 = '\x15';
  if ((param_1 == '\0') && (cVar6 = '\0', DAT_fffec9b8 != '\0')) {
    cVar6 = DAT_fffec9b8 + -1;
  }
  bVar3 = false;
  if ((((cVar6 != '\0') && (param_2 != '\0')) && (param_3 == '\0')) &&
     (((param_4 == '\0' && (param_5 == '\0')) &&
      ((param_6 != '\0' && ((param_9 != '\0' && (param_7 != '\0')))))))) {
    bVar3 = true;
  }
  bVar4 = 0;
  if ((!bVar1) && (bVar4 = 0xff, DAT_fffec9b9 != -1)) {
    bVar4 = DAT_fffec9b9 + 1;
  }
  if (DAT_fffec9b7 != 0) {
    bVar4 = 1;
  }
  bVar2 = true;
  if ((bVar1 || DAT_fffec9b7 <= (1 < bVar4)) && (DAT_fffec9ba == '\0')) {
    bVar2 = false;
  }
  if ((!bVar2) || (sVar5 = 0, bVar3)) {
    sVar5 = _DAT_fffec9b4;
  }
  if (((bVar2) && (bVar3)) && (sVar5 = -1, _DAT_fffec9b4 != -1)) {
    sVar5 = _DAT_fffec9b4 + 1;
  }
  *param_10 = sVar5;
  DAT_fffec9b6 = param_8;
  _DAT_fffec9b4 = sVar5;
  DAT_fffec9ba = bVar1;
  DAT_fffec9b8 = cVar6;
  DAT_fffec9b9 = bVar4;
  DAT_fffec9b7 = 1 < bVar4;
  return;
}

