
void FUN_000ca960(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char *param_9)

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
  bVar5 = DAT_fffecbb9;
  if (bVar2) {
    if ((((param_2 == '\0') && (param_1 == '\0')) && (param_7 = '\0', param_6 != '\0')) &&
       (param_5 != '\0')) {
      param_7 = '\x01';
    }
    bVar3 = false;
    if (((param_8 != -0x5b) && (param_8 != 'Z')) && (param_7 != '\0')) {
      bVar3 = true;
    }
    bVar4 = false;
    if (((param_8 != -0x5b) && (param_8 != 'Z')) && (param_7 == '\0')) {
      bVar4 = true;
    }
    bVar1 = false;
    if (bVar3) {
      bVar1 = 0x1d < DAT_fffecbba;
      bVar5 = 0xff;
      if (DAT_fffecbba != 0xff) {
        bVar5 = DAT_fffecbba + 1;
      }
    }
    else {
      DAT_fffecbba = 0;
      bVar5 = DAT_fffecbba;
    }
    DAT_fffecbba = bVar5;
    if (bVar1) {
      DAT_fffecbb8 = -0x5b;
    }
    else if (bVar4 && 0x1d < DAT_fffecbb9) {
      DAT_fffecbb8 = 'Z';
    }
    else {
      DAT_fffecbb8 = param_8;
    }
    if (bVar4) {
      bVar5 = 0xff;
      if (DAT_fffecbb9 != 0xff) {
        bVar5 = DAT_fffecbb9 + 1;
      }
    }
    else {
      DAT_fffecbb9 = 0;
      bVar5 = DAT_fffecbb9;
    }
  }
  DAT_fffecbb9 = bVar5;
  if (bVar2) {
    *param_9 = DAT_fffecbb8;
  }
  else {
    *param_9 = param_8;
  }
  return;
}

