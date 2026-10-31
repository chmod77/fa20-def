
void FUN_0008832c(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 undefined1 *param_7)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  short sVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  
  sVar6 = (short)param_2 - (short)param_3;
  cVar5 = '\x7f';
  if ((sVar6 < 0x80) && (cVar5 = -0x80, -0x81 < sVar6)) {
    cVar5 = (char)sVar6;
  }
  sVar6 = -sVar6;
  if (sVar6 < 0x80) {
    cVar3 = (char)sVar6;
    if (sVar6 < -0x80) {
      cVar3 = -0x80;
    }
  }
  else {
    cVar3 = '\x7f';
  }
  bVar1 = param_5 == '\0';
  if (param_4 == '\0') {
    cVar9 = '\b';
  }
  else {
    cVar9 = '\x0e';
  }
  if ((DAT_fffebc19 != '\x04') || (cVar7 = '\x01', param_1 != '\x01')) {
    cVar7 = DAT_fffebc18;
  }
  if (((param_1 != '\x01') || (bVar1)) || (cVar3 < '\x01')) {
    cVar7 = '\0';
  }
  bVar2 = false;
  if ((DAT_fffebc17 == '\x01') && (param_1 == '\x03')) {
    bVar2 = true;
  }
  if ((!bVar2) || (cVar3 = '\x01', param_4 == '\0')) {
    cVar3 = DAT_fffebc1a;
  }
  if ((cVar5 <= cVar9) || (bVar1)) {
    cVar3 = '\0';
  }
  if (cVar3 != '\0') {
    param_4 = '\0';
  }
  cVar8 = '\x01';
  if (!bVar2) {
    cVar8 = DAT_fffebc1b;
  }
  if (((cVar5 <= cVar9) || (param_4 != '\0')) || (bVar1)) {
    cVar8 = '\0';
  }
  if (((DAT_fffebc16 == '\x01') && (param_1 == '\x03')) && (bVar1)) {
    DAT_fffebc14 = '\x01';
  }
  if (param_6 != '\0') {
    DAT_fffebc14 = '\0';
  }
  uVar4 = 0;
  if (DAT_fffebc14 != '\0') {
    uVar4 = DAT_fffebc15;
  }
  if (cVar8 == '\0') {
    if (cVar7 != '\0') {
      uVar4 = cVar7 == '\0';
    }
  }
  else {
    uVar4 = 1;
  }
  DAT_fffebc18 = cVar7;
  DAT_fffebc1a = cVar3;
  DAT_fffebc1b = cVar8;
  *param_7 = uVar4;
  DAT_fffebc19 = param_1;
  DAT_fffebc17 = param_1;
  DAT_fffebc16 = param_1;
  DAT_fffebc15 = uVar4;
  return;
}

