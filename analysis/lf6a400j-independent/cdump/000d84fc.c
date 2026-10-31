
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d84fc(char param_1,ushort param_2,ushort param_3,ushort *param_4)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar3 = param_3;
  if ((DAT_fffecf5b == '\0') && (param_1 != '\0')) {
    uVar3 = param_2;
  }
  if (DAT_fffecf5a != '\0') {
    param_2 = param_3;
  }
  if (param_1 != '\0') {
    uVar2 = uVar3 - 1;
    if (uVar3 == 0) {
      uVar2 = 0;
    }
    if (5 < uVar2) {
      uVar2 = 5;
    }
    *param_4 = uVar2;
  }
  else if (_DAT_fffecf58 < 10) {
    *param_4 = param_2;
  }
  else {
    *param_4 = 5;
  }
  if (param_1 != '\0') {
    _DAT_fffecf58 = 0;
    sVar1 = _DAT_fffecf58;
  }
  else {
    sVar1 = -1;
    if (_DAT_fffecf58 != 0xffff) {
      sVar1 = _DAT_fffecf58 + 1;
    }
  }
  _DAT_fffecf58 = sVar1;
  DAT_fffecf5b = 1;
  DAT_fffecf5a = 1;
  return;
}

