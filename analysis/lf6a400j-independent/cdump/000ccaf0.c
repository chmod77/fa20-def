
void FUN_000ccaf0(char param_1,char param_2,char param_3,char param_4,char param_5,char *param_6,
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
    if ((param_3 == '\0') || (DAT_fffecc41 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = 9 < DAT_fffecc43;
    }
    if ((param_3 == '\0') || (DAT_fffecc41 == '\0')) {
      DAT_fffecc43 = 0;
      bVar4 = DAT_fffecc43;
    }
    else {
      bVar4 = 0xff;
      if (DAT_fffecc43 != 0xff) {
        bVar4 = DAT_fffecc43 + 1;
      }
    }
    DAT_fffecc43 = bVar4;
    if ((param_3 == '\0') && (DAT_fffecc41 != '\0')) {
      bVar2 = 9 < DAT_fffecc42;
    }
    else {
      bVar2 = false;
    }
    if ((param_3 == '\0') && (DAT_fffecc41 != '\0')) {
      bVar4 = 0xff;
      if (DAT_fffecc42 != 0xff) {
        bVar4 = DAT_fffecc42 + 1;
      }
    }
    else {
      DAT_fffecc42 = 0;
      bVar4 = DAT_fffecc42;
    }
    DAT_fffecc42 = bVar4;
    if (DAT_fffecc41 != '\0') {
      DAT_fffecc3d = DAT_fffecc41;
    }
    else {
      DAT_fffecc3d = '\x01';
    }
    cVar5 = '\0';
    if (!bVar2) {
      cVar5 = DAT_fffecc3e;
    }
    DAT_fffecc3c = param_3;
    DAT_fffecc3e = param_3;
    if ((DAT_fffecc41 != '\0') && (DAT_fffecc3c = cVar5, DAT_fffecc3e = cVar5, bVar1)) {
      DAT_fffecc3c = '\x01';
      DAT_fffecc3e = DAT_fffecc3c;
    }
  }
  if (bVar3) {
    local_8 = DAT_fffecc3c;
    DAT_fffecc40 = DAT_fffecc3d;
  }
  else {
    local_8 = DAT_fffecc3f;
  }
  *param_7 = DAT_fffecc40;
  *param_6 = local_8;
  DAT_fffecc41 = DAT_fffecc40;
  DAT_fffecc3f = local_8;
  return;
}

