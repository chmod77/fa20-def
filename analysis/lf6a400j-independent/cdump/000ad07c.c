
void FUN_000ad07c(char param_1,char param_2,char param_3,ushort param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,ushort param_10,char param_11,short param_12
                 ,byte param_13,ushort param_14,undefined1 *param_15)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  
  cVar7 = '\x01';
  if (DAT_fffec52c <= param_13) {
    cVar7 = DAT_fffec52e;
  }
  if (param_10 <= param_14) {
    cVar7 = '\0';
  }
  bVar1 = false;
  if (param_5 == '\0') {
    bVar1 = DAT_fffec529 < 0x14;
    DAT_fffec529 = DAT_fffec529 + 1;
    if (DAT_fffec529 == '\0') {
      DAT_fffec529 = -1;
    }
  }
  else {
    DAT_fffec529 = '\0';
  }
  bVar2 = false;
  if (param_6 == '\0') {
    bVar2 = DAT_fffec52a < 100;
    DAT_fffec52a = DAT_fffec52a + 1;
    if (DAT_fffec52a == '\0') {
      DAT_fffec52a = -1;
    }
  }
  else {
    DAT_fffec52a = '\0';
  }
  bVar3 = false;
  if (param_7 == '\0') {
    bVar3 = DAT_fffec52d < 100;
    DAT_fffec52d = DAT_fffec52d + 1;
    if (DAT_fffec52d == '\0') {
      DAT_fffec52d = -1;
    }
  }
  else {
    DAT_fffec52d = '\0';
  }
  bVar4 = false;
  if (param_7 == '\0') {
    DAT_fffec528 = '\0';
  }
  else {
    bVar4 = DAT_fffec528 < 200;
    DAT_fffec528 = DAT_fffec528 + 1;
    if (DAT_fffec528 == '\0') {
      DAT_fffec528 = -1;
    }
  }
  bVar5 = false;
  if (param_9 == '\0') {
    bVar5 = DAT_fffec52b < 100;
    DAT_fffec52b = DAT_fffec52b + 1;
    if (DAT_fffec52b == '\0') {
      DAT_fffec52b = -1;
    }
  }
  else {
    DAT_fffec52b = '\0';
  }
  bVar6 = false;
  if (param_5 == '\0') {
    DAT_fffec52f = '\0';
  }
  else {
    bVar6 = DAT_fffec52f < 0x14;
    DAT_fffec52f = DAT_fffec52f + 1;
    if (DAT_fffec52f == '\0') {
      DAT_fffec52f = -1;
    }
  }
  uVar8 = 1;
  if (((((param_12 == 0) &&
        (((param_6 == '\0' || (param_11 != '\0')) && (param_11 == '\0' || 199 < DAT_fffec530)))) &&
       (((cVar7 == '\0' && (!bVar6)) && (param_9 == '\0')))) &&
      ((!bVar5 && (((param_8 != '\0' || ((!bVar3 && (!bVar4)))) && (!bVar2)))))) &&
     ((((!bVar1 && (99 < param_4)) && (param_3 != -1)) && ((param_1 == '\0' || (param_2 != '\0')))))
     ) {
    uVar8 = 0;
  }
  *param_15 = uVar8;
  if (param_11 == '\0') {
    DAT_fffec530 = '\0';
  }
  else {
    DAT_fffec530 = DAT_fffec530 + 1;
    if (DAT_fffec530 == '\0') {
      DAT_fffec530 = -1;
    }
  }
  DAT_fffec52e = cVar7;
  DAT_fffec52c = param_13;
  return;
}

