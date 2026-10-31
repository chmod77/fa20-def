
void FUN_00086758(uint param_1,uint param_2,char param_3,char param_4,char param_5,char param_6,
                 undefined1 *param_7,char *param_8,char *param_9)

{
  uint uVar1;
  short sVar2;
  ushort uVar4;
  char cVar5;
  char cVar3;
  
  param_2 = param_2 & 0xffff;
  param_1 = param_1 & 0xffff;
  if (param_3 == '\0') {
    if (param_4 == '\0') {
      uVar1 = LK_139A00((uint)&T_02C9C0,param_2,param_1);
      cVar3 = (char)uVar1;
    }
    else {
      uVar1 = LK_139A00((uint)&T_02C9D4,param_2,param_1);
      cVar3 = (char)uVar1;
    }
  }
  else if (param_4 == '\0') {
    uVar1 = LK_139A00((uint)&T_02C998,param_2,param_1);
    cVar3 = (char)uVar1;
  }
  else {
    uVar1 = LK_139A00((uint)&T_02C9AC,param_2,param_1);
    cVar3 = (char)uVar1;
  }
  *param_8 = cVar3;
  uVar4 = (short)cVar3 - (short)DAT_fffebbc2;
  if ((short)uVar4 < 0) {
    uVar4 = -uVar4;
    if ((short)uVar4 < 0) {
      uVar4 = 0;
    }
  }
  else if ((short)uVar4 < 0) {
    uVar4 = 0;
  }
  if (cVar3 < DAT_fffebbc2) {
    sVar2 = DAT_fffebbc2 + -0xff;
    if (sVar2 < -0x80) {
      sVar2 = -0x80;
    }
    cVar5 = (char)sVar2;
    if (cVar3 <= cVar5) goto LAB_0008681e;
  }
  else {
    sVar2 = DAT_fffebbc2 + 0xff;
    if (0x7f < sVar2) {
      sVar2 = 0x7f;
    }
    cVar5 = (char)sVar2;
    if (cVar5 <= cVar3) goto LAB_0008681e;
  }
  cVar5 = cVar3;
LAB_0008681e:
  if ((param_4 != DAT_fffebbc3) || (DAT_fffebbc0 != param_3)) {
    DAT_fffebbc1 = '\x01';
  }
  if ((uVar4 & 0xff) == 0) {
    DAT_fffebbc1 = '\0';
  }
  if (DAT_fffebbc1 != '\0') {
    cVar3 = cVar5;
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
  *param_9 = cVar3;
  DAT_fffebbc3 = param_4;
  DAT_fffebbc2 = cVar3;
  DAT_fffebbc0 = param_3;
  return;
}

