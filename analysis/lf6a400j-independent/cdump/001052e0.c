
void FUN_001052e0(byte param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char *param_8,char *param_9,char *param_10,char *param_11,
                 char *param_12)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  
  cVar3 = '\0';
  if (param_3 == '\0') {
    cVar3 = DAT_fffeda57;
  }
  cVar7 = '\0';
  if (param_3 == '\0') {
    cVar7 = DAT_fffeda56;
  }
  bVar1 = DAT_fffeda55 < param_1;
  if ((bVar1) && (param_2 != '\0')) {
    cVar3 = '\x01';
  }
  cVar2 = '\0';
  if (cVar3 != '\0') {
    cVar2 = -0x80;
  }
  *param_9 = cVar3;
  if ((bVar1) && (param_6 != '\0')) {
    cVar7 = '\x01';
  }
  cVar9 = '\0';
  if (cVar7 != '\0') {
    cVar9 = '\x04';
  }
  *param_12 = cVar7;
  cVar4 = '\0';
  if (param_3 == '\0') {
    cVar4 = DAT_fffeda54;
  }
  if ((bVar1) && (param_4 != '\0')) {
    cVar4 = '\x01';
  }
  cVar8 = '\0';
  if (cVar4 != '\0') {
    cVar8 = '\x10';
  }
  *param_10 = cVar4;
  cVar5 = '\0';
  if (param_3 == '\0') {
    cVar5 = DAT_fffeda58;
  }
  if ((bVar1) && ((param_5 != '\0' || (param_7 != '\0')))) {
    cVar5 = '\x01';
  }
  cVar6 = '\0';
  if (cVar5 != '\0') {
    cVar6 = '\b';
  }
  *param_8 = cVar2 + cVar8 + cVar6 + cVar9;
  *param_11 = cVar5;
  DAT_fffeda57 = cVar3;
  DAT_fffeda56 = cVar7;
  DAT_fffeda55 = param_1;
  DAT_fffeda54 = cVar4;
  DAT_fffeda58 = cVar5;
  return;
}

