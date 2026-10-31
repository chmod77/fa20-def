
void FUN_000b8990(char *param_1,byte *param_2,byte *param_3,char *param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar6;
  uint uVar5;
  byte local_18;
  
  sVar6 = (ushort)*param_3 - (ushort)*param_2;
  if (sVar6 < 0x80) {
    if (sVar6 < -0x80) {
      local_18 = 0;
    }
    else {
      local_18 = (char)sVar6 + 0x80;
    }
  }
  else {
    local_18 = 0xff;
  }
  sVar6 = (ushort)param_3[1] - (ushort)param_2[1];
  bVar1 = 0xff;
  if ((sVar6 < 0x80) && (bVar1 = 0, -0x81 < sVar6)) {
    bVar1 = (char)sVar6 + 0x80;
  }
  sVar6 = local_18 - 0x81;
  bVar2 = 0xff;
  if ((sVar6 < 0x80) && (bVar2 = 0, -0x81 < sVar6)) {
    bVar2 = (char)sVar6 + 0x80;
  }
  sVar6 = bVar1 - 0x81;
  bVar3 = 0xff;
  if ((sVar6 < 0x80) && (bVar3 = 0, -0x81 < sVar6)) {
    bVar3 = (char)sVar6 + 0x80;
  }
  if ((*param_1 == '\x02') || (*param_1 == '\x04')) {
    uVar5 = local_18 + 0x81;
    local_18 = 0xff;
    if ((uVar5 < 0x180) && (local_18 = 0, 0x7f < uVar5)) {
      local_18 = (char)uVar5 + 0x80;
    }
  }
  else if (((*param_1 == '\x03') || (*param_1 == '\x06')) && (*param_4 == -0x80)) {
    local_18 = bVar2;
  }
  if ((param_1[1] == '\x02') || (param_1[1] == '\x04')) {
    uVar5 = bVar1 + 0x81;
    bVar1 = 0xff;
    if ((uVar5 < 0x180) && (bVar1 = 0, 0x7f < uVar5)) {
      bVar1 = (char)uVar5 + 0x80;
    }
  }
  else if (((param_1[1] == '\x03') || (param_1[1] == '\x06')) && (param_4[1] == -0x80)) {
    bVar1 = bVar3;
  }
  bVar4 = 0x80;
  if ((*param_1 != '\f') && (bVar4 = local_18, *param_1 == '\x05')) {
    bVar4 = bVar2;
  }
  bVar2 = 0x80;
  if ((param_1[1] != '\f') && (bVar2 = bVar1, param_1[1] == '\x05')) {
    bVar2 = bVar3;
  }
  if (bVar4 < 0x81) {
    if (bVar4 < 0x67) {
      bVar4 = 0x67;
    }
  }
  else {
    bVar4 = 0x80;
  }
  *param_5 = bVar4;
  if (bVar2 < 0x81) {
    if (bVar2 < 0x67) {
      bVar2 = 0x67;
    }
  }
  else {
    bVar2 = 0x80;
  }
  param_5[1] = bVar2;
  return;
}

