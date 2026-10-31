
void FUN_000ebe04(char param_1,char param_2,ushort param_3,char param_4,ushort param_5,
                 ushort param_6,ushort param_7,ushort param_8,ushort param_9,char param_10,
                 char param_11,ushort param_12,char param_13,short param_14,undefined4 param_15,
                 undefined1 *param_16,byte *param_17,byte *param_18,byte *param_19,byte *param_20)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  
  bVar7 = DAT_fffed51b;
  bVar6 = 0;
  if (param_10 == '\0') {
    bVar6 = bVar7;
    if (DAT_fffed51b == 0xff) {
      DAT_fffed51b = -1;
    }
    else {
      DAT_fffed51b = DAT_fffed51b + 1;
    }
  }
  else {
    DAT_fffed51b = '\0';
  }
  *param_19 = bVar6;
  bVar3 = DAT_fffed51a;
  bVar7 = 0;
  if (param_11 == '\0') {
    DAT_fffed51a = '\0';
  }
  else {
    bVar7 = bVar3;
    if (DAT_fffed51a == 0xff) {
      DAT_fffed51a = -1;
    }
    else {
      DAT_fffed51a = DAT_fffed51a + 1;
    }
  }
  *param_20 = bVar7;
  bVar3 = DAT_fffed518;
  bVar1 = false;
  if ((param_9 < 0x219a) && (0x1e65 < param_9)) {
    bVar1 = true;
  }
  bVar4 = 0;
  if (bVar1) {
    bVar4 = bVar3;
    if (DAT_fffed518 == 0xff) {
      DAT_fffed518 = -1;
    }
    else {
      DAT_fffed518 = DAT_fffed518 + 1;
    }
  }
  else {
    DAT_fffed518 = '\0';
  }
  *param_18 = bVar4;
  bVar3 = DAT_fffed519;
  bVar2 = false;
  if (((((((param_1 != '\0') && (param_2 == '\0')) && (0x4aff < param_3)) &&
        ((param_4 != '\0' && (59999 < param_5)))) &&
       (((0xb7ff < param_6 && ((param_7 < 0x2800 && (0x19ff < param_7)))) && (param_8 < 0x199a))))
      && ((((0xa3c < param_8 && (bVar1)) && (0x3d < bVar4)) &&
          (((param_10 == '\0' && (0x3d < bVar6)) &&
           ((param_11 != '\0' && ((0x3d < bVar7 && (799 < param_12)))))))))) &&
     ((param_13 == '\0' && (param_14 == 0)))) {
    bVar2 = true;
  }
  bVar6 = 0;
  if (bVar2) {
    bVar6 = bVar3;
    if (DAT_fffed519 == 0xff) {
      DAT_fffed519 = -1;
    }
    else {
      DAT_fffed519 = DAT_fffed519 + 1;
    }
  }
  else {
    DAT_fffed519 = '\0';
  }
  uVar5 = 0;
  if ((bVar2) && (0xb < bVar6)) {
    uVar5 = 1;
  }
  *param_16 = uVar5;
  *param_17 = bVar6;
  return;
}

