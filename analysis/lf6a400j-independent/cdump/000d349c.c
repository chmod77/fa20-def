
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d349c(char param_1,undefined4 param_2,char param_3,ushort param_4,short param_5,
                 char param_6,char param_7,short *param_8)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  if (param_7 == '\0') {
    DAT_fffecde9 = '\0';
    uVar1 = _DAT_fffecde4;
  }
  else {
    if (DAT_fffecde9 == '\0') {
      _DAT_fffecde4 = 0;
      DAT_fffecde9 = '\x01';
    }
    DAT_fffecde1 = 0xbd < _DAT_fffecde4;
    uVar1 = 0xffff;
    if (_DAT_fffecde4 != 0xffff) {
      uVar1 = _DAT_fffecde4 + 1;
    }
  }
  _DAT_fffecde4 = uVar1;
  cVar4 = '\0';
  if (param_7 != '\0') {
    cVar4 = DAT_fffecde1;
  }
  if (param_6 == '\0') {
    DAT_fffecde6 = '\0';
    uVar1 = _DAT_fffecde2;
  }
  else {
    if (DAT_fffecde6 == '\0') {
      _DAT_fffecde2 = 0;
      DAT_fffecde6 = '\x01';
    }
    DAT_fffecde0 = 0x19 < _DAT_fffecde2;
    uVar1 = 0xffff;
    if (_DAT_fffecde2 != 0xffff) {
      uVar1 = _DAT_fffecde2 + 1;
    }
  }
  _DAT_fffecde2 = uVar1;
  cVar2 = '\0';
  if (param_6 != '\0') {
    cVar2 = DAT_fffecde0;
  }
  cVar3 = '\0';
  if (0xa665 < param_4) {
    cVar3 = DAT_fffecde7;
  }
  if (0xbfff < param_4) {
    cVar3 = '\x01';
  }
  if ((((((param_1 == '\0') || (DAT_fffecde8 != '\0')) || (cVar2 == '\0')) ||
       ((param_7 != '\0' && (cVar4 == '\0')))) || (param_3 != '\0')) &&
     (((cVar3 == '\0' || (DAT_fffecde7 != '\0')) || (cVar2 == '\0')))) {
    if (param_5 == -1) {
      *param_8 = -1;
    }
    else {
      *param_8 = param_5 + 1;
    }
  }
  else {
    *param_8 = 0;
  }
  DAT_fffecde8 = param_1;
  DAT_fffecde7 = cVar3;
  return;
}

