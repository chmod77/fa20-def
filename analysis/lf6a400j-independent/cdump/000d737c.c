
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d737c(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 undefined4 param_7,byte *param_8,ushort *param_9)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar1 = false;
  if (((param_1 != '\0') && (param_2 != '\0')) && (DAT_fffeceef == '\0')) {
    bVar1 = true;
  }
  uVar2 = 0;
  if (bVar1) {
    uVar2 = _DAT_fffeceec;
  }
  bVar3 = DAT_fffeceee;
  if (((999 < uVar2) && (bVar1)) && (bVar3 = 0xff, DAT_fffeceee != 0xff)) {
    bVar3 = DAT_fffeceee + 1;
  }
  if (((param_6 != '\0') || (param_3 != '\0')) || ((param_4 != '\0' || (param_5 != '\0')))) {
    bVar3 = 0;
  }
  *param_8 = bVar3;
  DAT_fffeceef = bVar3 != DAT_fffeceee;
  *(bool *)param_7 = 0xfe < bVar3;
  if (bVar1) {
    if (uVar2 == 0xffff) {
      _DAT_fffeceec = -1;
    }
    else {
      _DAT_fffeceec = uVar2 + 1;
    }
  }
  else {
    _DAT_fffeceec = 0;
  }
  *param_9 = uVar2;
  DAT_fffeceee = bVar3;
  return;
}

