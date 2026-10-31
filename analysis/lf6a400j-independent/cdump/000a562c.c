
void FUN_000a562c(char param_1,uint param_2,undefined1 *param_3)

{
  char cVar4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  
  cVar4 = DAT_fffec379;
  if (DAT_fffec377 != param_1) {
    cVar4 = DAT_fffec377;
  }
  if (cVar4 == '\x02') {
    uVar1 = LK_133BCC((uint)&T_02DB38,param_2);
  }
  else {
    uVar1 = (uint)DAT_fffec378;
  }
  if (cVar4 == '\x01') {
    uVar1 = LK_133BCC((uint)&T_02DB08,param_2 & 0xffff);
  }
  if (param_1 != '\0') {
    DAT_fffec380 = '\0';
  }
  else {
    if (DAT_fffec380 == '\0') {
      DAT_fffec37d = 0;
      DAT_fffec380 = '\x01';
    }
    DAT_fffec374 = (uVar1 & 0xff) <= (uint)DAT_fffec37d;
    DAT_fffec37d = DAT_fffec37d + 1;
    if (DAT_fffec37d == 0) {
      DAT_fffec37d = 0xff;
    }
  }
  cVar7 = '\0';
  if (param_1 == '\0') {
    cVar7 = DAT_fffec374;
  }
  if (cVar4 == '\x02') {
    uVar2 = LK_133BCC((uint)&T_02DB20,param_2 & 0xffff);
  }
  else {
    uVar2 = (uint)DAT_fffec37b;
  }
  if (cVar4 == '\0') {
    uVar2 = LK_133BCC((uint)&T_02DAFC,param_2 & 0xffff);
  }
  if (param_1 != '\x01') {
    DAT_fffec381 = '\0';
  }
  else {
    if (DAT_fffec381 == '\0') {
      DAT_fffec37f = 0;
      DAT_fffec381 = '\x01';
    }
    DAT_fffec375 = (uVar2 & 0xff) <= (uint)DAT_fffec37f;
    DAT_fffec37f = DAT_fffec37f + 1;
    if (DAT_fffec37f == 0) {
      DAT_fffec37f = 0xff;
    }
  }
  if (cVar4 == '\x01') {
    uVar3 = LK_133BCC((uint)&T_02DB14,param_2 & 0xffff);
  }
  else {
    uVar3 = (uint)DAT_fffec37a;
  }
  if (cVar4 == '\0') {
    uVar3 = LK_133BCC((uint)&T_02DB2C,param_2 & 0xffff);
  }
  if (param_1 != '\x02') {
    DAT_fffec382 = '\0';
  }
  else {
    if (DAT_fffec382 == '\0') {
      DAT_fffec37e = 0;
      DAT_fffec382 = '\x01';
    }
    DAT_fffec376 = (uVar3 & 0xff) <= (uint)DAT_fffec37e;
    DAT_fffec37e = DAT_fffec37e + 1;
    if (DAT_fffec37e == 0) {
      DAT_fffec37e = 0xff;
    }
  }
  cVar5 = '\0';
  if (param_1 == '\x02') {
    cVar5 = DAT_fffec376;
  }
  uVar6 = 2;
  if (cVar5 == '\0') {
    uVar6 = DAT_fffec37c;
  }
  if (cVar7 == '\0') {
    cVar7 = '\0';
    if (param_1 == '\x01') {
      cVar7 = DAT_fffec375;
    }
    if (cVar7 != '\0') {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
  }
  *param_3 = uVar6;
  DAT_fffec377 = param_1;
  DAT_fffec379 = cVar4;
  DAT_fffec378 = (char)uVar1;
  DAT_fffec37b = (char)uVar2;
  DAT_fffec37a = (char)uVar3;
  DAT_fffec37c = uVar6;
  return;
}

