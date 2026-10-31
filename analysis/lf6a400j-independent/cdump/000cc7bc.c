
void FUN_000cc7bc(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  
  bVar3 = true;
  if (((param_1 == '\0') || (param_5 != '\x01')) && ((param_2 == '\0' || (param_6 != '\x01')))) {
    bVar3 = false;
  }
  if (bVar3) {
    if ((param_4 == '\0') || (param_3 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = 9 < DAT_fffecc20;
    }
    if ((param_4 == '\0') || (param_3 == '\0')) {
      DAT_fffecc20 = 0;
      bVar4 = DAT_fffecc20;
    }
    else {
      bVar4 = 0xff;
      if (DAT_fffecc20 != 0xff) {
        bVar4 = DAT_fffecc20 + 1;
      }
    }
    DAT_fffecc20 = bVar4;
    if ((param_4 == '\0') || (param_3 != '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = 9 < DAT_fffecc1d;
    }
    if ((param_4 == '\0') || (param_3 != '\0')) {
      DAT_fffecc1d = 0;
      bVar4 = DAT_fffecc1d;
    }
    else {
      bVar4 = 0xff;
      if (DAT_fffecc1d != 0xff) {
        bVar4 = DAT_fffecc1d + 1;
      }
    }
    DAT_fffecc1d = bVar4;
    cVar5 = '\0';
    if (!bVar2) {
      cVar5 = DAT_fffecc1f;
    }
    DAT_fffecc1c = param_3;
    DAT_fffecc1f = param_3;
    if ((param_4 != '\0') && (DAT_fffecc1c = cVar5, DAT_fffecc1f = cVar5, bVar1)) {
      DAT_fffecc1c = '\x01';
      DAT_fffecc1f = DAT_fffecc1c;
    }
  }
  if (bVar3) {
    DAT_fffecc1e = DAT_fffecc1c;
  }
  *param_7 = DAT_fffecc1e;
  return;
}

