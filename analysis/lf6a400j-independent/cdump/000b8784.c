
void FUN_000b8784(byte *param_1,char *param_2,byte *param_3,char *param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  short sVar5;
  byte local_18;
  
  sVar5 = (ushort)*param_1 - (ushort)*param_3;
  if (sVar5 < 0x80) {
    if (sVar5 < -0x80) {
      local_18 = 0;
    }
    else {
      local_18 = (char)sVar5 + 0x80;
    }
  }
  else {
    local_18 = 0xff;
  }
  sVar5 = (ushort)param_1[1] - (ushort)param_3[1];
  bVar1 = 0xff;
  if ((sVar5 < 0x80) && (bVar1 = 0, -0x81 < sVar5)) {
    bVar1 = (char)sVar5 + 0x80;
  }
  bVar2 = local_18;
  if (((*param_2 == '\x02') || (*param_2 == '\x04')) && (*param_4 == -0x80)) {
    uVar4 = local_18 + 0x81;
    bVar2 = 0xff;
    if ((uVar4 < 0x180) && (bVar2 = 0, 0x7f < uVar4)) {
      bVar2 = (char)uVar4 + 0x80;
    }
  }
  bVar3 = bVar1;
  if (((param_2[1] == '\x02') || (param_2[1] == '\x04')) && (param_4[1] == -0x80)) {
    uVar4 = bVar1 + 0x81;
    bVar3 = 0xff;
    if ((uVar4 < 0x180) && (bVar3 = 0, 0x7f < uVar4)) {
      bVar3 = (char)uVar4 + 0x80;
    }
  }
  if ((*param_2 == '\x03') || (*param_2 == '\x06')) {
    sVar5 = local_18 - 0x81;
    bVar2 = 0xff;
    if ((sVar5 < 0x80) && (bVar2 = 0, -0x81 < sVar5)) {
      bVar2 = (char)sVar5 + 0x80;
    }
  }
  if ((param_2[1] == '\x03') || (param_2[1] == '\x06')) {
    sVar5 = bVar1 - 0x81;
    bVar3 = 0xff;
    if ((sVar5 < 0x80) && (bVar3 = 0, -0x81 < sVar5)) {
      bVar3 = (char)sVar5 + 0x80;
    }
  }
  if (*param_2 == '\x01') {
    uVar4 = local_18 + 0x81;
    bVar2 = 0xff;
    if ((uVar4 < 0x180) && (bVar2 = 0, 0x7f < uVar4)) {
      bVar2 = (char)uVar4 + 0x80;
    }
  }
  if (param_2[1] == '\x01') {
    uVar4 = bVar1 + 0x81;
    bVar3 = 0xff;
    if ((uVar4 < 0x180) && (bVar3 = 0, 0x7f < uVar4)) {
      bVar3 = (char)uVar4 + 0x80;
    }
  }
  bVar1 = 0x80;
  if (*param_2 != '\f') {
    bVar1 = bVar2;
  }
  bVar2 = 0x80;
  if (param_2[1] != '\f') {
    bVar2 = bVar3;
  }
  if (bVar1 < 0xa7) {
    if (bVar1 < 0x80) {
      bVar1 = 0x80;
    }
  }
  else {
    bVar1 = 0xa6;
  }
  *param_5 = bVar1;
  if (bVar2 < 0xa7) {
    bVar1 = 0x80;
    if (0x7f < bVar2) {
      bVar1 = bVar2;
    }
  }
  else {
    bVar1 = 0xa6;
  }
  param_5[1] = bVar1;
  return;
}

