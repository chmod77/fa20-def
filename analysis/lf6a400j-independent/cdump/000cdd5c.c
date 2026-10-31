
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cdd5c(char param_1,byte param_2,ushort param_3,undefined1 *param_4)

{
  short sVar1;
  char cVar2;
  undefined1 uVar3;
  
  cVar2 = '\x01';
  if (DAT_fffeccae <= param_2) {
    cVar2 = DAT_fffeccaf;
  }
  if (param_2 != 0) {
    cVar2 = '\0';
  }
  if (cVar2 == '\0') {
    _DAT_fffeccac = 0;
    sVar1 = _DAT_fffeccac;
  }
  else {
    sVar1 = -1;
    if (_DAT_fffeccac != -1) {
      sVar1 = _DAT_fffeccac + 1;
    }
  }
  _DAT_fffeccac = sVar1;
  uVar3 = 1;
  if (((param_1 == '\0') && (param_2 == 0)) && (0x6666 < param_3)) {
    uVar3 = 0;
  }
  DAT_fffeccaf = cVar2;
  *param_4 = uVar3;
  DAT_fffeccae = param_2;
  return;
}

