
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d6ee0(char param_1,byte param_2,byte param_3,undefined4 param_4,char param_5,
                 undefined4 param_6,ushort param_7,byte param_8,char param_9,byte param_10,
                 byte param_11,ushort param_12,ushort param_13,char param_14,char param_15,
                 byte param_16,char param_17,char param_18,ushort param_19,short param_20,
                 short param_21,char param_22,char param_23,char param_24,short param_25,
                 undefined4 param_26,short param_27,undefined1 *param_28,undefined4 param_29,
                 undefined4 param_30,undefined1 *param_31,undefined4 param_32,undefined1 *param_33,
                 undefined4 param_34,undefined4 param_35,undefined4 param_36,ushort *param_37,
                 short *param_38,undefined4 param_39)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  undefined1 uVar6;
  short sVar7;
  short sVar8;
  
  *(bool *)param_30 = 0x7d < param_3;
  *param_33 = 1;
  *(bool *)param_34 = 0x4aff < param_7;
  *(bool *)param_29 = 0x12 < param_2;
  *param_31 = 1;
  *(bool *)param_35 = param_8 < 0xb;
  bVar3 = false;
  if ((param_17 != '\0') && (param_18 == '\0')) {
    bVar3 = true;
  }
  *(bool *)param_39 = bVar3;
  bVar2 = true;
  if (((param_9 == '\0') || (1 < param_10)) && ((param_9 != '\0' || (param_11 < param_16)))) {
    bVar2 = false;
  }
  *(bool *)param_36 = bVar2;
  if ((param_5 == '\0') || (DAT_fffecedc != '\0')) {
    sVar8 = 0;
    if (_DAT_fffeced8 != 0) {
      sVar8 = _DAT_fffeced8 + -1;
    }
  }
  else {
    sVar8 = 0xfa;
  }
  sVar7 = 0;
  if (sVar8 != 0) {
    sVar7 = sVar8;
  }
  bVar1 = true;
  if ((param_5 != '\0') && (((sVar7 != 0 || (0x8133 < param_12)) || (param_13 < 0x5dc)))) {
    bVar1 = false;
  }
  bVar4 = false;
  if (((((param_14 != '\0') && (param_15 == '\0')) &&
       ((0x12 < param_2 && ((0x7d < param_3 && (bVar1)))))) && (0x4aff < param_7)) &&
     ((((((param_8 < 0xb && (bVar2)) && (bVar3)) && ((param_19 < 0xa9e5 && (0xa53c < param_19)))) &&
       ((param_20 == 0 && ((param_21 == 0 && (param_22 == '\0')))))) &&
      ((param_23 == '\0' && (((param_24 == '\0' && (param_25 == 0)) && (param_27 == 0)))))))) {
    bVar4 = true;
  }
  *(bool *)param_32 = bVar1;
  *param_38 = sVar7;
  uVar5 = 0;
  if (bVar4) {
    uVar5 = _DAT_fffeceda;
  }
  uVar6 = 0;
  if (((param_1 == '\0') && (99 < uVar5)) && (bVar4)) {
    uVar6 = 1;
  }
  *param_28 = uVar6;
  if (bVar4) {
    if (uVar5 == 0xffff) {
      _DAT_fffeceda = -1;
    }
    else {
      _DAT_fffeceda = uVar5 + 1;
    }
  }
  else {
    _DAT_fffeceda = 0;
  }
  *param_37 = uVar5;
  DAT_fffecedc = param_5;
  _DAT_fffeced8 = sVar8;
  return;
}

