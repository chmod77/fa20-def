
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000efe84(uint param_1,uint param_2,short param_3,short param_4,undefined1 *param_5)

{
  bool bVar1;
  short sVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((int)param_1 < 0) {
    bVar1 = 0 < (int)param_1;
    param_1 = -param_1;
    if ((0 < (int)-(uint)bVar1) || ((-(uint)bVar1 == 0 && (0x7fffffff < param_1)))) {
      param_1 = 0x7fffffff;
    }
  }
  if ((int)param_2 < 0) {
    bVar1 = 0 < (int)param_2;
    param_2 = -param_2;
    if ((0 < (int)-(uint)bVar1) || ((-(uint)bVar1 == 0 && (0x7fffffff < param_2)))) {
      param_2 = 0x7fffffff;
    }
  }
  if (param_3 < 0) {
    iVar4 = -(int)param_3;
    param_3 = 0x7fff;
    if (iVar4 < 0x8000) {
      param_3 = (short)iVar4;
    }
  }
  if (param_4 < 0) {
    iVar4 = -(int)param_4;
    param_4 = 0x7fff;
    if (iVar4 < 0x8000) {
      param_4 = (short)iVar4;
    }
  }
  if (((((int)&DAT_00008e38 < (int)param_1) || ((int)&DAT_00008e38 < (int)param_2)) ||
      (0x7ffe < param_3)) || (0x7ffe < param_4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((int)&DAT_00008e38 < (int)param_1) || ((int)&DAT_00008e38 < (int)param_2)) ||
     ((0x7ffe < param_3 || (0x7ffe < param_4)))) {
    _DAT_fffed5d4 = 0;
    sVar2 = _DAT_fffed5d4;
  }
  else {
    sVar2 = -1;
    if (_DAT_fffed5d4 != -1) {
      sVar2 = _DAT_fffed5d4 + 1;
    }
  }
  _DAT_fffed5d4 = sVar2;
  uVar3 = 1;
  if (!bVar1) {
    uVar3 = DAT_fffed5d6;
  }
  *param_5 = uVar3;
  DAT_fffed5d6 = uVar3;
  return;
}

