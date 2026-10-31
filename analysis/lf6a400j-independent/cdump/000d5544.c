
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d5544(char param_1,char param_2,char param_3,char param_4,char param_5,ushort param_6,
                 char param_7,short *param_8,ushort *param_9,undefined4 param_10)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  
  bVar1 = true;
  if ((((param_3 == '\0') && (param_4 == '\0')) && (param_5 == '\0')) && (param_7 == '\0')) {
    bVar1 = false;
  }
  bVar2 = false;
  if ((param_2 != '\0') && (!bVar1)) {
    bVar2 = true;
  }
  sVar3 = 0;
  if (!bVar1) {
    sVar3 = _DAT_fffecec8;
  }
  uVar4 = 0;
  if (bVar2) {
    uVar4 = _DAT_fffececa;
  }
  bVar1 = false;
  if ((499 < uVar4) && (bVar2)) {
    bVar1 = true;
  }
  if ((((bVar1) && (param_1 != '\0')) && (param_6 < 0x3201)) && (sVar3 = -1, _DAT_fffecec8 != -1)) {
    sVar3 = _DAT_fffecec8 + 1;
  }
  *param_8 = sVar3;
  *(bool *)param_10 = bVar1;
  if (bVar2) {
    if (uVar4 == 0xffff) {
      _DAT_fffececa = -1;
    }
    else {
      _DAT_fffececa = uVar4 + 1;
    }
  }
  else {
    _DAT_fffececa = 0;
  }
  *param_9 = uVar4;
  _DAT_fffecec8 = sVar3;
  return;
}

