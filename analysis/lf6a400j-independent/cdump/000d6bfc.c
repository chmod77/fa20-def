
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d6bfc(char param_1,uint param_2,byte param_3,undefined4 param_4,char param_5,
                 undefined4 param_6,undefined4 param_7,byte param_8,char param_9,byte param_10,
                 uint param_11,char param_12,char param_13,ushort param_14,ushort param_15,
                 char param_16,char param_17,ushort param_18,ushort param_19,undefined4 param_20,
                 undefined1 *param_21,undefined1 *param_22,undefined4 param_23,undefined1 *param_24,
                 undefined4 param_25,undefined1 *param_26,undefined1 *param_27,undefined4 param_28,
                 undefined4 param_29,short *param_30,short *param_31,undefined1 *param_32,
                 undefined4 param_33)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  short sVar6;
  undefined1 uVar7;
  short sVar8;
  
  uVar5 = LK_133B38((uint)&T_02EDE8,param_2);
  *param_32 = (char)uVar5;
  *(bool *)param_23 = 0xfd < param_3;
  *param_26 = 1;
  *param_27 = 1;
  *param_22 = 1;
  *param_24 = 1;
  *(bool *)param_28 = param_8 < 0xb;
  bVar3 = false;
  if ((param_16 != '\0') && (param_17 == '\0')) {
    bVar3 = true;
  }
  *(bool *)param_33 = bVar3;
  bVar2 = true;
  if (((param_9 == '\0') || (1 < param_10)) &&
     ((param_9 != '\0' || ((param_11 & 0xff) < (uVar5 & 0xff))))) {
    bVar2 = false;
  }
  *(bool *)param_29 = bVar2;
  if ((param_5 == '\0') || (DAT_fffeced4 != '\0')) {
    sVar8 = 0;
    if (_DAT_fffeced0 != 0) {
      sVar8 = _DAT_fffeced0 + -1;
    }
  }
  else {
    sVar8 = 0xfa;
  }
  sVar6 = 0;
  if (sVar8 != 0) {
    sVar6 = sVar8;
  }
  bVar1 = true;
  if ((param_5 != '\0') && (((sVar6 != 0 || (0x8400 < param_14)) || (param_15 < 0x177)))) {
    bVar1 = false;
  }
  bVar4 = false;
  if (((((param_12 != '\0') && (param_13 == '\0')) &&
       ((0xfd < param_3 && ((bVar1 && (param_8 < 0xb)))))) && (bVar2)) &&
     (((bVar3 && (param_18 < 0x4001)) && (0x1b4 < param_19)))) {
    bVar4 = true;
  }
  *(bool *)param_25 = bVar1;
  *param_31 = sVar6;
  sVar6 = 0;
  if (bVar4) {
    sVar6 = _DAT_fffeced2;
  }
  uVar7 = 0;
  if ((param_1 == '\0') && (bVar4)) {
    uVar7 = 1;
  }
  *param_21 = uVar7;
  if (bVar4) {
    if (sVar6 == -1) {
      _DAT_fffeced2 = -1;
    }
    else {
      _DAT_fffeced2 = sVar6 + 1;
    }
  }
  else {
    _DAT_fffeced2 = 0;
  }
  *param_30 = sVar6;
  DAT_fffeced4 = param_5;
  _DAT_fffeced0 = sVar8;
  return;
}

