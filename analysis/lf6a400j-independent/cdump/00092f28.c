
void FUN_00092f28(char param_1,char param_2,char param_3,short param_4,char param_5,char param_6,
                 char param_7,char param_8,undefined1 *param_9,char *param_10,char *param_11,
                 char *param_12,char *param_13,char *param_14,char *param_15)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  
  if ((param_1 == '\0') || (cVar6 = '\x01', param_3 != '\0')) {
    cVar6 = DAT_fffebe4d;
  }
  *param_11 = cVar6;
  if ((param_1 == '\0') || (cVar7 = '\x01', param_2 != '\0')) {
    cVar7 = DAT_fffebe4c;
  }
  *param_10 = cVar7;
  if ((param_1 == '\0') || (cVar5 = '\x01', param_4 != 0)) {
    cVar5 = DAT_fffebe4b;
  }
  *param_12 = cVar5;
  if ((param_1 == '\0') || (cVar1 = '\x01', param_5 != '\0')) {
    cVar1 = DAT_fffebe4a;
  }
  *param_13 = cVar1;
  if ((param_1 == '\0') || (cVar3 = '\x01', param_6 != '\0')) {
    cVar3 = DAT_fffebe48;
  }
  *param_14 = cVar3;
  if ((param_1 == '\0') || (cVar4 = '\x01', param_7 != '\0')) {
    cVar4 = DAT_fffebe4e;
  }
  if ((((cVar4 != '\0') && (cVar1 != '\0')) && (cVar3 != '\0')) &&
     ((cVar5 != '\0' && (cVar6 != '\0')))) {
    uVar2 = 1;
    if (cVar7 != '\0') goto LAB_00092fea;
  }
  uVar2 = DAT_fffebe49;
LAB_00092fea:
  if (param_8 != '\0') {
    uVar2 = 0;
  }
  *param_9 = uVar2;
  DAT_fffebe49 = uVar2;
  *param_15 = cVar4;
  DAT_fffebe4d = cVar6;
  DAT_fffebe4c = cVar7;
  DAT_fffebe4b = cVar5;
  DAT_fffebe4a = cVar1;
  DAT_fffebe48 = cVar3;
  DAT_fffebe4e = cVar4;
  return;
}

