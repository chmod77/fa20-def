
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f6214(char param_1,char param_2,ushort param_3,uint param_4,uint param_5,short param_6,
                 short param_7,ushort param_8,short *param_9)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  
  if ((int)param_4 < 0) {
    bVar1 = 0 < (int)param_4;
    param_4 = -param_4;
    if ((0 < (int)-(uint)bVar1) || ((-(uint)bVar1 == 0 && (0x7fffffff < param_4)))) {
      param_4 = 0x7fffffff;
    }
  }
  if ((int)param_5 < 0) {
    bVar1 = 0 < (int)param_5;
    param_5 = -param_5;
    if ((0 < (int)-(uint)bVar1) || ((-(uint)bVar1 == 0 && (0x7fffffff < param_5)))) {
      param_5 = 0x7fffffff;
    }
  }
  if (param_6 < 0) {
    iVar3 = -(int)param_6;
    param_6 = 0x7fff;
    if (iVar3 < 0x8000) {
      param_6 = (short)iVar3;
    }
  }
  if (param_7 < 0) {
    iVar3 = -(int)param_7;
    param_7 = 0x7fff;
    if (iVar3 < 0x8000) {
      param_7 = (short)iVar3;
    }
  }
  if ((((((param_1 == '\0') || (param_2 == '\0')) || (param_3 < 0xa00)) ||
       ((0x17ff < param_3 || (3 < (int)param_4)))) ||
      ((3 < (int)param_5 || ((0x16b < param_6 || (0x16b < param_7)))))) || (param_8 < 0xc000)) {
    sVar2 = 0;
  }
  else {
    sVar2 = -1;
    if (_DAT_fffed78c != -1) {
      sVar2 = _DAT_fffed78c + 1;
    }
  }
  *param_9 = sVar2;
  _DAT_fffed78c = sVar2;
  return;
}

