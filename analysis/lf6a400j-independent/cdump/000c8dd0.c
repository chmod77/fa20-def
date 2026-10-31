
void FUN_000c8dd0(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  
  bVar2 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar2 = false;
  }
  bVar5 = DAT_fffecb3a;
  if (bVar2) {
    bVar3 = true;
    if ((param_2 == '\0') && (param_1 == '\0')) {
      bVar3 = false;
    }
    if (bVar3) {
      param_6 = param_5 == '\0';
    }
    else {
      param_5 = param_6 == '\0';
    }
    bVar3 = false;
    if (((param_7 != -0x5b) && (param_7 != 'Z')) && (param_5 != '\0')) {
      bVar3 = true;
    }
    bVar4 = false;
    if (((param_7 != -0x5b) && (param_7 != 'Z')) && (param_6 != '\0')) {
      bVar4 = true;
    }
    bVar1 = false;
    if (bVar3) {
      bVar1 = 0x1d < DAT_fffecb39;
      bVar5 = 0xff;
      if (DAT_fffecb39 != 0xff) {
        bVar5 = DAT_fffecb39 + 1;
      }
    }
    else {
      DAT_fffecb39 = 0;
      bVar5 = DAT_fffecb39;
    }
    DAT_fffecb39 = bVar5;
    if (bVar1) {
      DAT_fffecb38 = -0x5b;
    }
    else if (bVar4 && 0x1d < DAT_fffecb3a) {
      DAT_fffecb38 = 'Z';
    }
    else {
      DAT_fffecb38 = param_7;
    }
    if (bVar4) {
      bVar5 = 0xff;
      if (DAT_fffecb3a != 0xff) {
        bVar5 = DAT_fffecb3a + 1;
      }
    }
    else {
      DAT_fffecb3a = 0;
      bVar5 = DAT_fffecb3a;
    }
  }
  DAT_fffecb3a = bVar5;
  if (bVar2) {
    *param_8 = DAT_fffecb38;
  }
  else {
    *param_8 = param_7;
  }
  return;
}

