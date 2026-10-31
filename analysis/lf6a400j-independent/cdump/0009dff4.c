
void FUN_0009dff4(char param_1,char param_2,char param_3,ushort param_4,uint param_5,
                 undefined1 *param_6,char *param_7,undefined1 *param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined1 uVar6;
  
  bVar1 = true;
  if ((param_1 != '\x01') && (param_1 != '\x04')) {
    bVar1 = false;
  }
  cVar5 = '\x01';
  if (param_2 == '\0' || DAT_fffec067 < 2) {
    cVar5 = DAT_fffec065;
  }
  if (param_2 == '\0') {
    DAT_fffec067 = '\0';
  }
  else {
    DAT_fffec067 = DAT_fffec067 + 1;
    if (DAT_fffec067 == '\0') {
      DAT_fffec067 = -1;
    }
  }
  if (param_2 == '\0' && 1 < DAT_fffec064) {
    cVar5 = '\0';
  }
  *param_7 = cVar5;
  if (param_2 != '\0') {
    DAT_fffec064 = '\0';
  }
  else {
    DAT_fffec064 = DAT_fffec064 + 1;
    if (DAT_fffec064 == '\0') {
      DAT_fffec064 = -1;
    }
  }
  if (cVar5 == '\0') {
    uVar4 = 0;
    if (0xe < DAT_fffec066) {
      uVar4 = (int)(char)DAT_fffec066 - 0xf;
    }
  }
  else {
    uVar2 = (int)(char)DAT_fffec066 + 0x34;
    uVar3 = uVar2 & 0xff;
    if ((uVar2 & 0xff) < (uint)DAT_fffec066) {
      uVar2 = 0xff;
      uVar3 = uVar2;
    }
    uVar4 = 0xff;
    if (uVar3 < 0x100) {
      uVar4 = uVar2;
    }
  }
  uVar6 = (undefined1)uVar4;
  if (bVar1) {
    uVar6 = 0;
    *param_6 = 0;
  }
  else {
    if (param_3 == '\0') {
      uVar3 = LK_138984((uint)&T_02DA18,(uint)param_4,param_5 & 0xffff);
    }
    else {
      uVar3 = LK_13503C((uint)&T_02DA0C,(uint)param_4);
    }
    *param_6 = (char)((uVar3 & 0xff) * (uVar4 & 0xff) >> 8);
  }
  *param_8 = uVar6;
  DAT_fffec065 = cVar5;
  DAT_fffec066 = uVar6;
  return;
}

