
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ce8cc(float param_1,ushort param_2,byte param_3,byte param_4,int param_5,uint param_6,
                 float *param_7,char *param_8)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  char cVar7;
  char cVar8;
  float fVar9;
  
  fVar9 = (float)param_5;
  if (param_5 < 0) {
    fVar9 = fVar9 + 4.2949673e+09;
  }
  param_1 = param_1 + -fVar9 * 0.00078124995;
  uVar2 = LK_133B38((uint)&T_02EB9C,param_6 & 0xff);
  if (param_1 <= 0.0) {
    param_1 = -param_1;
  }
  bVar1 = param_3 <= DAT_fffecd04;
  cVar7 = '\0';
  if (bVar1) {
    cVar7 = DAT_fffecd09;
  }
  if (param_4 < DAT_fffecd07) {
    cVar7 = '\x01';
  }
  cVar8 = '\0';
  if (bVar1) {
    cVar8 = DAT_fffecd08;
  }
  if ((uVar2 & 0xff) <= (uint)((int)(uint)param_2 >> 5)) {
    cVar8 = '\x01';
  }
  cVar4 = '\0';
  if (bVar1) {
    cVar4 = DAT_fffecd06;
  }
  if ((param_1 <= 4.9999995) && (cVar8 != '\0')) {
    cVar4 = '\x01';
  }
  cVar3 = '\x01';
  if (((cVar4 == '\0') && (cVar8 != '\0')) && (cVar7 == '\0')) {
    cVar3 = '\0';
  }
  *param_8 = cVar3;
  sVar6 = (short)((int)(uint)param_2 >> 2) - (short)((int)(uint)_DAT_fffecd00 >> 2);
  if (sVar6 < 0x100) {
    cVar5 = (char)sVar6;
    if (sVar6 < 0) {
      cVar5 = '\0';
    }
  }
  else {
    cVar5 = -1;
  }
  _DAT_fffecd00 = _DAT_fffecd02;
  if (DAT_fffecd0a == '\0') {
    DAT_fffecd05 = '\0';
    DAT_fffecd0a = '\x01';
  }
  if (DAT_fffecd05 != '\0') {
    FUN_0016b44c(&DAT_ffff198f,cVar5,0);
    cVar5 = DAT_ffff198f;
  }
  DAT_ffff198f = cVar5;
  DAT_fffecd05 = 1;
  if (cVar3 == '\0') {
    uVar2 = LK_133B38((uint)&T_02EBA8,param_6 & 0xff);
    fVar9 = (float)(uVar2 & 0xff) * 0.015625;
    uVar2 = LK_133B38((uint)&T_02EBB4,(int)DAT_ffff198f);
    *param_7 = (float)(uVar2 & 0xff) * 0.0078125 * fVar9;
  }
  else {
    *param_7 = 1.0;
  }
  DAT_fffecd09 = cVar7;
  DAT_fffecd08 = cVar8;
  DAT_fffecd07 = param_4;
  DAT_fffecd06 = cVar4;
  DAT_fffecd04 = param_3;
  _DAT_fffecd02 = param_2;
  return;
}

