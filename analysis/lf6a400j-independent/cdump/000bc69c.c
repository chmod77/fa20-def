
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bc69c(byte *param_1,short param_2,short param_3,short param_4,short param_5,int param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  byte bVar5;
  byte bVar6;
  
  bVar2 = false;
  if (((((uint)(param_2 * 0xb4) >> 0x10) + 0x80 & 0xff) < 0x81) &&
     (0x7f < (((uint)(param_4 * 0xb4) >> 0x10) + 0x80 & 0xff))) {
    bVar2 = true;
  }
  bVar3 = false;
  if (((((uint)(param_3 * 0xb4) >> 0x10) + 0x80 & 0xff) < 0x81) &&
     (0x7f < (((uint)(param_5 * 0xb4) >> 0x10) + 0x80 & 0xff))) {
    bVar3 = true;
  }
  bVar1 = false;
  if (bVar2) {
    bVar1 = true;
    sVar4 = -1;
    if (_DAT_fffec8c6 != -1) {
      sVar4 = _DAT_fffec8c6 + 1;
    }
  }
  else {
    _DAT_fffec8c6 = 0;
    sVar4 = _DAT_fffec8c6;
  }
  _DAT_fffec8c6 = sVar4;
  bVar2 = false;
  if (bVar3) {
    bVar2 = true;
    sVar4 = -1;
    if (_DAT_fffec8c4 != -1) {
      sVar4 = _DAT_fffec8c4 + 1;
    }
  }
  else {
    _DAT_fffec8c4 = 0;
    sVar4 = _DAT_fffec8c4;
  }
  _DAT_fffec8c4 = sVar4;
  bVar6 = 0;
  if ((*param_1 < 0x68) && (bVar1)) {
    bVar6 = 1;
  }
  bVar5 = 0;
  if ((param_1[1] < 0x68) && (bVar2)) {
    bVar5 = 1;
  }
  if (((DAT_fffec8c8 == '\0') || (bVar6 == 0)) || (DAT_fffec8c8 == '\0')) {
    DAT_fffec8c8 = '\0';
  }
  else {
    DAT_fffec8c8 = DAT_fffec8c8 + -1;
  }
  if (((DAT_fffec8c9 == '\0') || (bVar5 == 0)) || (DAT_fffec8c9 == '\0')) {
    DAT_fffec8c9 = '\0';
  }
  else {
    DAT_fffec8c9 = DAT_fffec8c9 + -1;
  }
  if (DAT_fffec8ca < bVar6) {
    DAT_fffec8c8 = '\0';
  }
  if (DAT_fffec8cb < bVar5) {
    DAT_fffec8c9 = '\0';
  }
  *(bool *)param_6 = DAT_fffec8c8 != '\0';
  *(bool *)(param_6 + 1) = DAT_fffec8c9 != '\0';
  DAT_fffec8ca = bVar6;
  DAT_fffec8cb = bVar5;
  return;
}

