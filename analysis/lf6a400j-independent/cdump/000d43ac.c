
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d43ac(ushort param_1,ushort param_2,ushort param_3,byte param_4,char param_5,
                 char param_6,uint param_7,undefined4 param_8,short *param_9,short *param_10,
                 short *param_11,short *param_12)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  
  bVar1 = 0x1900 < param_3;
  if ((param_5 == '\0') && (param_4 != 0)) {
    uVar2 = LK_134BB0((uint)&T_02ED74,param_7 & 0xff);
    sVar4 = (short)uVar2;
  }
  else {
    sVar4 = 0;
  }
  *param_10 = sVar4;
  if ((((param_1 < param_2) || (!bVar1)) && (DAT_fffece4e >= bVar1)) && (_DAT_fffece4a <= sVar4)) {
    sVar4 = _DAT_fffece4a;
  }
  *param_11 = sVar4;
  cVar3 = '\x01';
  if (DAT_fffece50 <= param_4) {
    cVar3 = DAT_fffece4f;
  }
  if (DAT_fffece4e < bVar1) {
    cVar3 = '\0';
  }
  if (((!bVar1) && (cVar3 != '\0')) && (param_1 < param_2)) {
    _DAT_fffece48 = sVar4;
  }
  if (((bVar1) || (param_6 != '\0')) || (param_4 != 0)) {
    _DAT_fffece48 = 0;
  }
  if (0 < _DAT_fffece48) {
    _DAT_fffece48 = 0;
  }
  DAT_fffece4f = cVar3;
  *param_12 = _DAT_fffece48;
  if (-1 < _DAT_fffece48) {
    sVar5 = _DAT_fffece4c + 0x3c;
    if ((-1 < _DAT_fffece4c) && (sVar5 < 0)) {
      sVar5 = 0x7fff;
    }
    if (sVar5 < _DAT_fffece48) goto LAB_000d44ac;
  }
  sVar5 = _DAT_fffece48;
LAB_000d44ac:
  *param_9 = sVar5;
  _DAT_fffece4a = sVar4;
  DAT_fffece50 = param_4;
  DAT_fffece4e = bVar1;
  _DAT_fffece4c = sVar5;
  return;
}

