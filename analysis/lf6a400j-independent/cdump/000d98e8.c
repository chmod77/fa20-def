
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d98e8(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,undefined1 *param_9)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  undefined1 uVar4;
  
  bVar1 = false;
  if ((param_7 != '\0') && (param_8 == '\0')) {
    bVar1 = true;
  }
  bVar2 = true;
  if ((param_7 != '\0') && (bVar1 && 0x13 < _DAT_fffecfb4)) {
    bVar2 = false;
  }
  uVar4 = 1;
  if ((((((param_1 == '\0') || (param_2 != '\0')) || (param_3 == '\0')) || (param_4 != '\0')) &&
      (((param_1 != '\0' || (param_2 != '\0')) ||
       ((param_5 == '\0' || ((!bVar2 || (param_6 != '\0')))))))) && ((param_2 == '\0' || (!bVar2))))
  {
    uVar4 = 0;
  }
  *param_9 = uVar4;
  if (bVar1) {
    sVar3 = -1;
    if (_DAT_fffecfb4 != 0xffff) {
      sVar3 = _DAT_fffecfb4 + 1;
    }
  }
  else {
    _DAT_fffecfb4 = 0;
    sVar3 = _DAT_fffecfb4;
  }
  _DAT_fffecfb4 = sVar3;
  return;
}

