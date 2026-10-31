
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d99a4(char param_1,char param_2,char param_3,char param_4,short param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,char param_12,
                 char param_13,char param_14,char param_15,undefined1 *param_16)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  undefined1 uVar5;
  
  bVar3 = false;
  if ((param_2 == '\0') && (param_1 != '\0')) {
    bVar3 = true;
  }
  bVar1 = false;
  if (param_14 == '\0') {
    _DAT_fffecfba = 0;
    sVar4 = _DAT_fffecfba;
  }
  else {
    bVar1 = 99 < _DAT_fffecfba;
    sVar4 = -1;
    if (_DAT_fffecfba != 0xffff) {
      sVar4 = _DAT_fffecfba + 1;
    }
  }
  _DAT_fffecfba = sVar4;
  bVar2 = false;
  if (param_15 == '\0') {
    _DAT_fffecfb8 = 0;
    sVar4 = _DAT_fffecfb8;
  }
  else {
    bVar2 = 99 < _DAT_fffecfb8;
    sVar4 = -1;
    if (_DAT_fffecfb8 != 0xffff) {
      sVar4 = _DAT_fffecfb8 + 1;
    }
  }
  _DAT_fffecfb8 = sVar4;
  if ((param_1 == '\0') || ((bVar3 && (param_3 != '\0')))) {
    *param_16 = 0;
  }
  else {
    uVar5 = 1;
    if ((((((!bVar3) || (param_4 == '\0')) || (param_5 != 0)) ||
         ((param_9 == '\0' &&
          (((param_10 == '\0' ||
            (((param_11 == '\0' || (param_12 != '\0')) && ((param_11 != '\0' || (param_13 != '\0')))
             ))) && ((!bVar1 && (!bVar2)))))))) || (param_6 != '\0')) &&
       ((((param_2 == '\0' || (param_1 == '\0')) || (param_7 != -0x56)) || (param_8 != '\0')))) {
      uVar5 = 0;
    }
    *param_16 = uVar5;
  }
  return;
}

