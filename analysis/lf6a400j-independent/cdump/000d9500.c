
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d9500(char param_1,char param_2,undefined1 *param_3)

{
  short sVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (param_2 != '\0' || _DAT_fffecf98 < 3) {
    uVar2 = DAT_fffecf9a;
  }
  if (param_1 == '\0') {
    uVar2 = 0;
  }
  else if (param_2 != '\0') {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  if (param_2 != '\0') {
    _DAT_fffecf98 = 0;
    sVar1 = _DAT_fffecf98;
  }
  else {
    sVar1 = -1;
    if (_DAT_fffecf98 != 0xffff) {
      sVar1 = _DAT_fffecf98 + 1;
    }
  }
  _DAT_fffecf98 = sVar1;
  DAT_fffecf9a = uVar2;
  return;
}

