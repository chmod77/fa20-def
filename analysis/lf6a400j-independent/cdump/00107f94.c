
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00107f94(byte param_1,undefined1 *param_2)

{
  bool bVar1;
  short sVar2;
  char cVar3;
  undefined1 uVar4;
  
  cVar3 = '\x01';
  if (DAT_fffedb37 <= param_1) {
    cVar3 = DAT_fffedb36;
  }
  if (param_1 != 0) {
    cVar3 = '\0';
  }
  bVar1 = false;
  if (cVar3 == '\0') {
    _DAT_fffedb34 = 0;
    sVar2 = _DAT_fffedb34;
  }
  else {
    bVar1 = _DAT_fffedb34 < 0x32;
    sVar2 = -1;
    if (_DAT_fffedb34 != 0xffff) {
      sVar2 = _DAT_fffedb34 + 1;
    }
  }
  _DAT_fffedb34 = sVar2;
  uVar4 = 1;
  if ((param_1 == 0) && (!bVar1)) {
    uVar4 = 0;
  }
  DAT_fffedb36 = cVar3;
  *param_2 = uVar4;
  DAT_fffedb37 = param_1;
  return;
}

