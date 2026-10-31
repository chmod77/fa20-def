
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5fa8(char param_1,short param_2,char param_3,uint param_4,uint param_5,char param_6,
                 short param_7,char param_8,char param_9,char param_10,char param_11,uint param_12,
                 short *param_13,undefined1 *param_14,undefined1 *param_15,undefined1 *param_16,
                 char *param_17)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  
  if (param_1 != '\0') {
    DAT_fffec3b5 = param_8;
    sVar7 = 0x7fff;
    if (param_10 != '\0') {
      sVar7 = param_7;
    }
    if (param_3 == '\0') {
      sVar3 = 0x7fff;
    }
    else {
      iVar2 = (param_5 & 0xffff) * 2 + (param_4 & 0xffff) * -2;
      sVar3 = 0x7fff;
      if ((iVar2 < 0x8000) && (sVar3 = -0x8000, -0x8001 < iVar2)) {
        sVar3 = (short)iVar2;
      }
    }
    sVar5 = 0x7fff;
    if (param_11 == '\0') {
      sVar5 = 0x6400;
    }
    bVar1 = param_2 < sVar5;
    if (bVar1) {
      sVar5 = param_2;
    }
    if ((param_8 != '\0') || (sVar4 = -0x8000, param_9 != '\0')) {
      sVar4 = 0;
    }
    if (sVar5 <= sVar4) {
      sVar5 = sVar4;
    }
    iVar2 = -0x8000;
    if (param_3 != '\0') {
      iVar6 = (param_12 & 0xffff) * 2 + (param_4 & 0xffff) * -2;
      iVar2 = 0x7fff;
      if ((iVar6 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar6)) {
        iVar2 = iVar6;
      }
    }
    DAT_fffec3b3 = sVar5 <= (short)iVar2;
    _DAT_fffec3b0 = (short)iVar2;
    if (!(bool)DAT_fffec3b3) {
      _DAT_fffec3b0 = sVar5;
    }
    DAT_fffec3b4 = 1;
    if ((_DAT_fffec3b0 < sVar3) && (bVar1)) {
      DAT_fffec3b4 = 0;
    }
    if (_DAT_fffec3b0 >= sVar3) {
      _DAT_fffec3b0 = sVar3;
    }
    DAT_fffec3b2 = 1;
    if ((bVar1) && (_DAT_fffec3b0 < sVar7)) {
      DAT_fffec3b2 = 0;
    }
    if (param_6 == '\0') {
      _DAT_fffec3b0 = 0;
    }
    else if (_DAT_fffec3b0 >= sVar7) {
      _DAT_fffec3b0 = sVar7;
    }
  }
  *param_13 = _DAT_fffec3b0;
  *param_14 = DAT_fffec3b2;
  *param_15 = DAT_fffec3b3;
  *param_16 = DAT_fffec3b4;
  *param_17 = DAT_fffec3b5;
  return;
}

