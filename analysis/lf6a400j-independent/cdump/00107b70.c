
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00107b70(byte param_1,byte param_2,undefined1 param_3,byte param_4,byte param_5,
                 byte param_6,byte param_7,char param_8,byte param_9,ushort param_10,
                 undefined1 *param_11)

{
  bool bVar1;
  short sVar2;
  undefined1 uVar3;
  char cVar4;
  
  cVar4 = '\x01';
  if (DAT_fffedb23 <= param_9) {
    cVar4 = DAT_fffedb25;
  }
  if (param_9 != 0) {
    cVar4 = '\0';
  }
  if (cVar4 == '\0') {
    _DAT_fffedb1c = 0;
    sVar2 = _DAT_fffedb1c;
  }
  else {
    sVar2 = -1;
    if (_DAT_fffedb1c != -1) {
      sVar2 = _DAT_fffedb1c + 1;
    }
  }
  _DAT_fffedb1c = sVar2;
  uVar3 = 1;
  if ((param_1 <= DAT_fffedb21) && (uVar3 = 1, DAT_fffedb22 <= param_2)) {
    if ((DAT_fffedb20 != '\0') && (DAT_fffedb1f < param_4)) {
      bVar1 = true;
      if (((param_8 == '\0') && (param_9 == 0)) && (0x6666 < param_10)) {
        bVar1 = false;
      }
      if (!bVar1) goto LAB_00107c68;
    }
    if (((param_5 <= DAT_fffedb1e) && (param_6 <= DAT_fffedb26)) && (DAT_fffedb24 <= param_7)) {
      uVar3 = 0;
    }
  }
LAB_00107c68:
  DAT_fffedb25 = cVar4;
  *param_11 = uVar3;
  DAT_fffedb23 = param_9;
  DAT_fffedb22 = param_2;
  DAT_fffedb21 = param_1;
  DAT_fffedb20 = param_3;
  DAT_fffedb1f = param_4;
  DAT_fffedb1e = param_5;
  DAT_fffedb26 = param_6;
  DAT_fffedb24 = param_7;
  return;
}

