
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f5470(char param_1,char param_2,int param_3,int param_4,char param_5,undefined1 *param_6
                 ,ushort *param_7)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar3 = param_3 - param_4;
  if (((param_3 < 0) || (-1 < param_4)) || (-1 < (int)uVar3)) {
    if (((param_3 < 0) && (-1 < param_4)) && (-1 < (int)uVar3)) {
      uVar3 = 0x80000000;
    }
  }
  else {
    uVar3 = 0x7fffffff;
  }
  if ((int)uVar3 < 0) {
    bVar1 = 0 < (int)uVar3;
    uVar3 = -uVar3;
    if ((0 < (int)-(uint)bVar1) || ((-(uint)bVar1 == 0 && (0x7fffffff < uVar3)))) {
      uVar3 = 0x7fffffff;
    }
  }
  bVar1 = false;
  if ((param_2 != '\0') && ((int)&DAT_00002710 < (int)uVar3)) {
    bVar1 = true;
  }
  uVar4 = 0;
  if (bVar1) {
    uVar4 = _DAT_fffed774;
  }
  if ((DAT_fffed776 == '\0') && (param_1 != '\0')) {
    uVar2 = 1;
  }
  else if ((bVar1) && (499 < uVar4)) {
    uVar2 = 2;
  }
  else if ((param_2 == '\0') || ((int)&DAT_00002710 < (int)uVar3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 3;
  }
  if (param_5 == '\0') {
    *param_6 = uVar2;
  }
  else {
    *param_6 = 0;
  }
  *param_7 = uVar4;
  if (bVar1) {
    if (uVar4 == 0xffff) {
      _DAT_fffed774 = -1;
    }
    else {
      _DAT_fffed774 = uVar4 + 1;
    }
  }
  else {
    _DAT_fffed774 = 0;
  }
  DAT_fffed776 = param_1;
  return;
}

