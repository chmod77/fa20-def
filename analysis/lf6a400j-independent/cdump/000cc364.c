
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cc364(char param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  short sVar2;
  undefined1 uVar3;
  
  if (((param_1 == '\0') || (param_2 == '\0')) || (param_5 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = 0x31 < _DAT_fffecc04;
  }
  if (((param_1 == '\0') || (param_2 == '\0')) || (param_5 == '\0')) {
    _DAT_fffecc04 = 0;
    sVar2 = _DAT_fffecc04;
  }
  else {
    sVar2 = -1;
    if (_DAT_fffecc04 != 0xffff) {
      sVar2 = _DAT_fffecc04 + 1;
    }
  }
  _DAT_fffecc04 = sVar2;
  uVar3 = 1;
  if (!bVar1) {
    uVar3 = DAT_fffecc06;
  }
  if ((((param_1 == '\0') || (param_2 == '\0')) ||
      ((param_1 != '\0' &&
       ((((param_2 != '\0' && (param_4 != '\0')) && (param_3 != '\0')) && (param_3 != -1)))))) ||
     (((param_1 != '\0' && (param_2 != '\0')) &&
      ((param_4 == '\0' && ((param_3 == '\0' || (param_3 == -1)))))))) {
    uVar3 = DAT_fffecc06;
  }
  *param_6 = uVar3;
  DAT_fffecc06 = uVar3;
  return;
}

