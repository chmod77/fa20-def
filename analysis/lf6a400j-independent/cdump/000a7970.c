
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a7970(char param_1,char param_2,short param_3,char param_4,char param_5,char param_6,
                 short param_7,short param_8,uint param_9,char param_10,short *param_11,
                 short *param_12,short *param_13,undefined2 *param_14)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  param_9 = param_9 & 0xffff;
  if ((param_2 == '\0') || (param_6 != '\0')) {
    if ((param_2 == '\0') || (param_6 == '\0')) {
      uVar1 = LK_133F40((uint)&T_02DC9C,param_9);
    }
    else {
      uVar1 = LK_133F40((uint)&T_02DC90,param_9);
    }
  }
  else {
    uVar1 = LK_133F40((uint)&T_02DC84,param_9);
  }
  *param_14 = (short)uVar1;
  if ((param_4 != '\0') || (param_5 == '\0')) {
    if ((param_4 != '\0') || (param_5 != '\0')) {
      sVar2 = 0;
    }
    else {
      sVar2 = 0;
    }
  }
  else {
    sVar2 = 0x1db;
  }
  if (param_1 != '\0') {
    iVar4 = (int)param_3 + (int)param_8 + (int)sVar2;
    _DAT_fffec436 = 0x7fff;
    if ((iVar4 < 0x8000) && (_DAT_fffec436 = (short)iVar4, iVar4 < -0x8000)) {
      _DAT_fffec436 = -0x8000;
    }
    sVar3 = _DAT_fffec436 - param_7;
    if (((_DAT_fffec436 < 0) || (-1 < param_7)) || (-1 < sVar3)) {
      if (((_DAT_fffec436 < 0) && (-1 < param_7)) && (-1 < sVar3)) {
        sVar3 = -0x8000;
      }
    }
    else {
      sVar3 = 0x7fff;
    }
    iVar4 = (int)sVar3 * (uVar1 & 0xffff);
    _DAT_fffec434 = param_7 + (short)((uint)iVar4 >> 0x10);
    if (((param_7 < 0) || (iVar4 < 0)) || (-1 < _DAT_fffec434)) {
      if (((param_7 < 0) && (iVar4 < 0)) && (-1 < _DAT_fffec434)) {
        _DAT_fffec434 = -0x8000;
      }
    }
    else {
      _DAT_fffec434 = 0x7fff;
    }
  }
  *param_12 = _DAT_fffec436;
  *param_13 = sVar2;
  if (param_10 == '\x01') {
    *param_11 = 0;
  }
  else if (param_1 == '\0') {
    *param_11 = param_7;
  }
  else {
    *param_11 = _DAT_fffec434;
  }
  return;
}

