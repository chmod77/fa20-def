
void FUN_00085fb4(char param_1,char param_2,char param_3,char param_4,uint param_5,char param_6,
                 char param_7,undefined2 *param_8,undefined1 *param_9)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  
  sVar8 = (short)param_2 - (short)param_3;
  cVar6 = '\x7f';
  if ((sVar8 < 0x80) && (cVar6 = -0x80, -0x81 < sVar8)) {
    cVar6 = (char)sVar8;
  }
  sVar8 = -sVar8;
  if (sVar8 < 0x80) {
    cVar4 = (char)sVar8;
    if (sVar8 < -0x80) {
      cVar4 = -0x80;
    }
  }
  else {
    cVar4 = '\x7f';
  }
  bVar1 = param_4 == '\0';
  if (param_6 == '\0') {
    cVar9 = '\b';
  }
  else {
    cVar9 = '\x0e';
  }
  if ((DAT_fffebbac != '\x04') || (cVar11 = '\x01', param_1 != '\x01')) {
    cVar11 = DAT_fffebbaa;
  }
  if (((param_1 != '\x01') || (bVar1)) || (cVar4 < '\x01')) {
    cVar11 = '\0';
  }
  bVar2 = false;
  if ((DAT_fffebbab == '\x01') && (param_1 == '\x03')) {
    bVar2 = true;
  }
  if ((!bVar2) || (cVar4 = '\x01', param_6 == '\0')) {
    cVar4 = DAT_fffebbaf;
  }
  if ((cVar6 <= cVar9) || (bVar1)) {
    cVar4 = '\0';
  }
  cVar10 = param_6;
  if (cVar4 != '\0') {
    cVar10 = '\0';
  }
  cVar7 = '\x01';
  if (!bVar2) {
    cVar7 = DAT_fffebbae;
  }
  if (((cVar6 <= cVar9) || (cVar10 != '\0')) || (bVar1)) {
    cVar7 = '\0';
  }
  if (((DAT_fffebba9 != '\x01') || (param_1 != '\x03')) || (cVar6 = '\x01', !bVar1)) {
    cVar6 = DAT_fffebbad;
  }
  if (param_7 != '\0') {
    cVar6 = '\0';
  }
  DAT_fffebbaa = cVar11;
  DAT_fffebbad = cVar6;
  DAT_fffebbae = cVar7;
  DAT_fffebbaf = cVar4;
  if (cVar7 == '\0') {
    if (cVar11 == '\0') {
      if (cVar6 == '\0') {
        *param_8 = 0x200;
      }
      else if (param_6 == '\0') {
        uVar3 = LK_133F40((uint)&T_02C954,param_5 & 0xffff);
        *param_8 = (short)uVar3;
      }
      else {
        uVar3 = LK_133F40((uint)&T_02C948,param_5 & 0xffff);
        *param_8 = (short)uVar3;
      }
    }
    else {
      uVar3 = LK_133F40((uint)&T_02C930,param_5 & 0xffff);
      *param_8 = (short)uVar3;
    }
  }
  else if (param_6 == '\0') {
    uVar3 = LK_133F40((uint)&T_02C924,param_5 & 0xffff);
    *param_8 = (short)uVar3;
  }
  else {
    uVar3 = LK_133F40((uint)&T_02C93C,param_5 & 0xffff);
    *param_8 = (short)uVar3;
  }
  uVar5 = 0;
  if (cVar6 != '\0') {
    uVar5 = DAT_fffebba8;
  }
  if (cVar7 == '\0') {
    if (cVar11 != '\0') {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  *param_9 = uVar5;
  DAT_fffebbac = param_1;
  DAT_fffebbab = param_1;
  DAT_fffebba9 = param_1;
  DAT_fffebba8 = uVar5;
  return;
}

