
void FUN_00087010(ushort param_1,ushort param_2,uint param_3,short *param_4,short *param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  
  sVar5 = (param_1 & 0xff) - (param_2 & 0xff);
  *param_5 = sVar5;
  uVar1 = LK_1351FC((uint)&T_02CA64,param_3 & 0xffff);
  uVar2 = LK_1351FC((uint)&T_02CA70,param_3 & 0xffff);
  cVar4 = '\x01';
  if (0xe >= sVar5) {
    cVar4 = DAT_fffebbe4;
  }
  if (sVar5 < -0xe) {
    cVar4 = '\0';
  }
  bVar3 = 0xff;
  if (DAT_fffebbe5 != '\0') {
    bVar3 = DAT_fffebbe6;
  }
  if ((0xe < sVar5) || (sVar5 < -0xe)) {
    bVar3 = 0;
    DAT_fffebbe6 = '\0';
  }
  else if (bVar3 == 0xff) {
    DAT_fffebbe6 = -1;
  }
  else {
    DAT_fffebbe6 = bVar3 + 1;
  }
  if (((cVar4 == '\0') || (0x32 < bVar3)) && ((100 < bVar3 || (cVar4 != '\0')))) {
    *param_4 = (short)((int)(uVar1 & 0xffff) >> 1) + (short)((int)(uVar2 & 0xffff) >> 1);
  }
  else if (cVar4 == '\0') {
    *param_4 = (short)uVar2;
  }
  else {
    *param_4 = (short)uVar1;
  }
  DAT_fffebbe4 = cVar4;
  DAT_fffebbe5 = 1;
  return;
}

