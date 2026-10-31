
void FUN_00086758(undefined2 param_1,undefined2 param_2,char param_3,char param_4,char param_5,
                 char param_6,undefined1 *param_7,char *param_8,char *param_9)

{
  char *pcVar1;
  char cVar3;
  short sVar2;
  char cVar4;
  ushort uVar5;
  char cVar6;
  
  if (param_3 == '\0') {
    if (param_4 == '\0') {
      cVar3 = (*(code *)PTR_FUN_00086894)(PTR_DAT_000868a0,param_2,param_1);
    }
    else {
      cVar3 = (*(code *)PTR_FUN_00086894)(PTR_DAT_0008689c);
    }
  }
  else if (param_4 == '\0') {
    cVar3 = (*(code *)PTR_FUN_00086894)(PTR_DAT_00086898);
  }
  else {
    cVar3 = (*(code *)PTR_FUN_00086894)(PTR_DAT_00086890);
  }
  *param_8 = cVar3;
  pcVar1 = DAT_000868a4;
  uVar5 = (short)cVar3 - (short)DAT_000868a4[2];
  if ((short)uVar5 < 0) {
    uVar5 = -uVar5;
    if ((short)uVar5 < 0) {
      uVar5 = 0;
    }
  }
  else if ((short)uVar5 < 0) {
    uVar5 = 0;
  }
  if (cVar3 < DAT_000868a4[2]) {
    sVar2 = (short)DAT_000868a4[2] - (ushort)(byte)PTR_DAT_000868a8[1];
    if (sVar2 < -0x80) {
      sVar2 = -0x80;
    }
    cVar6 = (char)sVar2;
    if (cVar3 <= cVar6) goto LAB_0008681e;
  }
  else {
    sVar2 = (short)DAT_000868a4[2] + (ushort)(byte)*PTR_DAT_000868a8;
    if (0x7f < sVar2) {
      sVar2 = 0x7f;
    }
    cVar6 = (char)sVar2;
    if (cVar6 <= cVar3) goto LAB_0008681e;
  }
  cVar6 = cVar3;
LAB_0008681e:
  if ((param_4 == DAT_000868a4[3]) && (*DAT_000868a4 == param_3)) {
    cVar4 = DAT_000868a4[1];
  }
  else {
    cVar4 = '\x01';
  }
  if ((uVar5 & 0xff) <= (ushort)(byte)PTR_DAT_000868a8[2]) {
    cVar4 = '\0';
  }
  if (cVar4 != '\0') {
    cVar3 = cVar6;
  }
  sVar2 = (short)cVar3 + (short)param_5 + (short)param_6;
  if (sVar2 < 0x80) {
    if (sVar2 < -0x80) {
      sVar2 = -0x80;
    }
  }
  else {
    sVar2 = 0x7f;
  }
  *param_7 = (char)sVar2;
  pcVar1[1] = cVar4;
  *param_9 = cVar3;
  pcVar1[3] = param_4;
  pcVar1[2] = cVar3;
  *pcVar1 = param_3;
  return;
}

