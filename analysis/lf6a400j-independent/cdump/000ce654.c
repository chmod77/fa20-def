
void FUN_000ce654(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char *param_8,char *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  char local_20;
  char cStack_1f;
  char cStack_1c;
  
  bVar3 = DAT_fffeccff != '\0';
  cVar6 = '\x05';
  if (bVar3) {
    cVar6 = DAT_fffeccff;
  }
  if (cVar6 == '\0') {
    DAT_fffeccff = '\0';
  }
  else {
    DAT_fffeccff = cVar6 + -1;
  }
  bVar4 = false;
  if ((((param_2 != '\0') && (param_5 == '\x01')) || ((param_1 != '\0' && (param_6 == '\x01')))) &&
     (!bVar3)) {
    bVar4 = true;
  }
  if (bVar4) {
    if ((DAT_fffeccfa == '\0') || (param_4 != '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = 9 < DAT_fffeccf5;
    }
    if ((DAT_fffeccfa == '\0') || (param_4 != '\0')) {
      DAT_fffeccf5 = 0;
      bVar5 = DAT_fffeccf5;
    }
    else {
      bVar5 = 0xff;
      if (DAT_fffeccf5 != 0xff) {
        bVar5 = DAT_fffeccf5 + 1;
      }
    }
    DAT_fffeccf5 = bVar5;
    if ((DAT_fffeccfa == '\0') || (param_4 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = 9 < DAT_fffeccf7;
    }
    if ((DAT_fffeccfa == '\0') || (param_4 == '\0')) {
      DAT_fffeccf7 = 0;
      bVar5 = DAT_fffeccf7;
    }
    else {
      bVar5 = 0xff;
      if (DAT_fffeccf7 != 0xff) {
        bVar5 = DAT_fffeccf7 + 1;
      }
    }
    DAT_fffeccf7 = bVar5;
    if (DAT_fffeccfa == '\0') {
      DAT_fffeccf1 = '\x01';
    }
    else {
      DAT_fffeccf1 = DAT_fffeccfa;
    }
    cVar6 = '\0';
    if (!bVar3) {
      cVar6 = DAT_fffeccf6;
    }
    DAT_fffeccf0 = param_4;
    if ((DAT_fffeccfa != '\0') && (DAT_fffeccf0 = cVar6, bVar1)) {
      DAT_fffeccf0 = '\x01';
    }
  }
  bVar3 = DAT_fffeccf8 != '\0';
  cVar6 = '\x02';
  if (bVar3) {
    cVar6 = DAT_fffeccf8;
  }
  if (cVar6 == '\0') {
    DAT_fffeccf8 = '\0';
  }
  else {
    DAT_fffeccf8 = cVar6 + -1;
  }
  bVar1 = false;
  if (((param_3 != '\0') && (param_7 == '\x01')) && (!bVar3)) {
    bVar1 = true;
  }
  if (bVar1) {
    if ((DAT_fffeccf4 == '\0') || (param_4 != '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = 9 < DAT_fffeccfd;
    }
    if ((DAT_fffeccf4 == '\0') || (param_4 != '\0')) {
      DAT_fffeccfd = 0;
      bVar5 = DAT_fffeccfd;
    }
    else {
      bVar5 = 0xff;
      if (DAT_fffeccfd != 0xff) {
        bVar5 = DAT_fffeccfd + 1;
      }
    }
    DAT_fffeccfd = bVar5;
    if ((DAT_fffeccf4 == '\0') || (param_4 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = 9 < DAT_fffeccfe;
    }
    if ((DAT_fffeccf4 == '\0') || (param_4 == '\0')) {
      DAT_fffeccfe = 0;
      bVar5 = DAT_fffeccfe;
    }
    else {
      bVar5 = 0xff;
      if (DAT_fffeccfe != 0xff) {
        bVar5 = DAT_fffeccfe + 1;
      }
    }
    DAT_fffeccfe = bVar5;
    if (DAT_fffeccf4 == '\0') {
      DAT_fffeccf3 = '\x01';
    }
    else {
      DAT_fffeccf3 = DAT_fffeccf4;
    }
    cVar6 = '\0';
    if (!bVar3) {
      cVar6 = DAT_fffeccf9;
    }
    DAT_fffeccf2 = param_4;
    if ((DAT_fffeccf4 != '\0') && (DAT_fffeccf2 = cVar6, bVar2)) {
      DAT_fffeccf2 = '\x01';
    }
  }
  if (bVar1) {
    local_20 = DAT_fffeccf2;
    cStack_1f = DAT_fffeccf3;
  }
  else {
    local_20 = DAT_fffeccfb;
    cStack_1f = DAT_fffeccfc;
  }
  if (bVar4) {
    cStack_1c = DAT_fffeccf0;
    cStack_1f = DAT_fffeccf1;
  }
  else {
    cStack_1c = local_20;
  }
  *param_9 = cStack_1f;
  *param_8 = cStack_1c;
  DAT_fffeccfb = cStack_1c;
  DAT_fffeccfc = cStack_1f;
  DAT_fffeccf6 = DAT_fffeccf0;
  DAT_fffeccf4 = DAT_fffeccf3;
  DAT_fffeccfa = DAT_fffeccf1;
  DAT_fffeccf9 = DAT_fffeccf2;
  return;
}

