
void FUN_000d3a58(char param_1,char param_2,undefined4 param_3,char param_4,char param_5,
                 char param_6,char param_7,char *param_8)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  
  if (param_1 == '\0') {
    bVar1 = false;
    if (((param_4 != '\0') || (param_5 != '\0')) && (param_7 != '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      if (DAT_fffece16 == '\0') {
        DAT_fffece0e = '\0';
        DAT_fffece11 = '\0';
        DAT_fffece15 = '\0';
        DAT_fffece16 = '\x01';
      }
      bVar2 = false;
      if ((bVar1) && (DAT_fffece11 == '\0')) {
        bVar2 = true;
      }
      cVar4 = '\x19';
      if (!bVar2) {
        cVar4 = DAT_fffece11;
      }
      if ((bVar1) && (cVar4 != '\0')) {
        DAT_fffece11 = cVar4 + -1;
      }
      else {
        DAT_fffece11 = '\0';
      }
      if ((DAT_fffece15 != '\0') || (DAT_fffece18 = '\x01', !bVar2)) {
        DAT_fffece18 = DAT_fffece0e;
      }
      DAT_fffece0e = DAT_fffece18;
      cVar4 = DAT_fffece18;
      if ((bVar2) && (DAT_fffece15 != '\0')) {
        DAT_fffece0e = '\0';
        cVar4 = DAT_fffece0e;
        DAT_fffece18 = DAT_fffece0e;
      }
    }
    else {
      DAT_fffece16 = '\0';
      cVar4 = DAT_fffece15;
    }
    DAT_fffece15 = cVar4;
    if (param_2 == '\0') {
      DAT_fffece14 = '\0';
      bVar3 = DAT_fffece10;
    }
    else {
      if (DAT_fffece14 == '\0') {
        DAT_fffece10 = 0;
        DAT_fffece14 = '\x01';
      }
      DAT_fffece19 = 4 < DAT_fffece10;
      bVar3 = 0xff;
      if (DAT_fffece10 != 0xff) {
        bVar3 = DAT_fffece10 + 1;
      }
    }
    DAT_fffece10 = bVar3;
    if (bVar1) {
      DAT_fffece0c = DAT_fffece18;
    }
    else {
      cVar4 = '\0';
      if (param_2 != '\0') {
        cVar4 = DAT_fffece19;
      }
      if (cVar4 == '\0') {
        if (param_2 == '\0') {
          DAT_fffece0c = '\0';
        }
        else {
          DAT_fffece0c = param_6;
        }
      }
      else {
        DAT_fffece0c = '\x01';
      }
    }
  }
  else {
    DAT_fffece16 = '\0';
    DAT_fffece14 = '\0';
  }
  if (param_1 == '\0') {
    DAT_fffece17 = '\0';
  }
  else {
    bVar1 = false;
    if (((param_4 != '\0') || (param_5 != '\0')) && (param_7 != '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      if (DAT_fffece17 == '\0') {
        DAT_fffece0f = '\0';
        DAT_fffece13 = '\0';
        DAT_fffece12 = '\0';
        DAT_fffece17 = '\x01';
      }
      bVar2 = false;
      if ((bVar1) && (DAT_fffece13 == '\0')) {
        bVar2 = true;
      }
      cVar4 = '\x19';
      if (!bVar2) {
        cVar4 = DAT_fffece13;
      }
      if ((bVar1) && (cVar4 != '\0')) {
        DAT_fffece13 = cVar4 + -1;
      }
      else {
        DAT_fffece13 = '\0';
      }
      if ((DAT_fffece12 != '\0') || (DAT_fffece1a = '\x01', !bVar2)) {
        DAT_fffece1a = DAT_fffece0f;
      }
      DAT_fffece0f = DAT_fffece1a;
      cVar4 = DAT_fffece1a;
      if ((bVar2) && (DAT_fffece12 != '\0')) {
        DAT_fffece0f = '\0';
        cVar4 = DAT_fffece0f;
        DAT_fffece1a = DAT_fffece0f;
      }
    }
    else {
      DAT_fffece17 = '\0';
      cVar4 = DAT_fffece12;
    }
    DAT_fffece12 = cVar4;
    DAT_fffece0d = param_2;
    if (bVar1) {
      DAT_fffece0d = DAT_fffece1a;
    }
  }
  if (param_1 == '\0') {
    *param_8 = DAT_fffece0c;
  }
  else {
    *param_8 = DAT_fffece0d;
  }
  return;
}

