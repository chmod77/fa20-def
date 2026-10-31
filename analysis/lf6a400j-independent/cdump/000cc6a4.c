
void FUN_000cc6a4(char param_1,char param_2,char param_3,char param_4,char param_5,char *param_6,
                 char *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  char local_8;
  
  bVar3 = true;
  if (((param_1 == '\0') || (param_4 != '\x01')) && ((param_2 == '\0' || (param_5 != '\x01')))) {
    bVar3 = false;
  }
  if (bVar3) {
    if ((DAT_fffecc1b == '\0') || (param_3 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = 9 < DAT_fffecc16;
    }
    if ((DAT_fffecc1b == '\0') || (param_3 == '\0')) {
      DAT_fffecc16 = 0;
      bVar4 = DAT_fffecc16;
    }
    else {
      bVar4 = 0xff;
      if (DAT_fffecc16 != 0xff) {
        bVar4 = DAT_fffecc16 + 1;
      }
    }
    DAT_fffecc16 = bVar4;
    if ((DAT_fffecc1b == '\0') || (param_3 != '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = 9 < DAT_fffecc17;
    }
    if ((DAT_fffecc1b == '\0') || (param_3 != '\0')) {
      DAT_fffecc17 = 0;
      bVar4 = DAT_fffecc17;
    }
    else {
      bVar4 = 0xff;
      if (DAT_fffecc17 != 0xff) {
        bVar4 = DAT_fffecc17 + 1;
      }
    }
    DAT_fffecc17 = bVar4;
    if (DAT_fffecc1b == '\0') {
      DAT_fffecc15 = '\x01';
    }
    else {
      DAT_fffecc15 = DAT_fffecc1b;
    }
    cVar5 = '\0';
    if (!bVar2) {
      cVar5 = DAT_fffecc18;
    }
    DAT_fffecc14 = param_3;
    DAT_fffecc18 = param_3;
    if ((DAT_fffecc1b != '\0') && (DAT_fffecc14 = cVar5, DAT_fffecc18 = cVar5, bVar1)) {
      DAT_fffecc14 = '\x01';
      DAT_fffecc18 = DAT_fffecc14;
    }
  }
  if (bVar3) {
    local_8 = DAT_fffecc14;
    DAT_fffecc1a = DAT_fffecc15;
  }
  else {
    local_8 = DAT_fffecc19;
  }
  *param_7 = DAT_fffecc1a;
  *param_6 = local_8;
  DAT_fffecc1b = DAT_fffecc1a;
  DAT_fffecc19 = local_8;
  return;
}

