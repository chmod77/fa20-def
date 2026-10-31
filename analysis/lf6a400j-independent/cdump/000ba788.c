
void FUN_000ba788(uint param_1,uint param_2,char param_3,char param_4,char *param_5,byte *param_6,
                 byte *param_7,byte *param_8,byte *param_9)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  byte local_28;
  byte bStack_18;
  byte bStack_17;
  
  if (param_3 != '\0') {
    sVar1 = (short)((param_2 & 0xffff) * 0xb4 >> 0x10) + -0xee;
    if (sVar1 < 0) {
      DAT_fffec87d = (byte)sVar1;
    }
    else {
      DAT_fffec87d = 0xff;
    }
    sVar1 = (short)((param_1 & 0xffff) * 0xb4 >> 0x10) + -0xee;
    if (sVar1 < 0) {
      DAT_fffec87c = (byte)sVar1;
    }
    else {
      DAT_fffec87c = 0xff;
    }
  }
  if (param_3 == '\0') {
    if (param_4 == '\x02') {
      sVar2 = (*param_7 + 0x7f) - (ushort)*param_6;
      sVar1 = 0xff;
      if ((sVar2 < 0x100) && (sVar1 = sVar2, sVar2 < 0)) {
        sVar1 = 0;
      }
      local_28 = (byte)sVar1;
      sVar2 = (param_7[1] + 0x7f) - (ushort)param_6[1];
      sVar1 = 0xff;
      if ((sVar2 < 0x100) && (sVar1 = sVar2, sVar2 < 0)) {
        sVar1 = 0;
      }
      DAT_fffec87f = (byte)sVar1;
    }
    else {
      local_28 = *param_7;
      DAT_fffec87f = param_7[1];
    }
    if (local_28 < 0x7a) {
      local_28 = 0x79;
    }
    if (DAT_fffec87f < 0x7a) {
      DAT_fffec87f = 0x79;
    }
    if (0x8c < local_28) {
      local_28 = 0x8c;
    }
    if (0x8c < DAT_fffec87f) {
      DAT_fffec87f = 0x8c;
    }
    if (local_28 < DAT_fffec882) {
      DAT_fffec882 = local_28;
    }
    if (DAT_fffec87f < DAT_fffec883) {
      DAT_fffec883 = DAT_fffec87f;
    }
    if ((*param_5 == '\0') || (uVar3 = DAT_fffec882 + 0x87, 0x17f < uVar3)) {
      bStack_18 = 0xff;
    }
    else if (uVar3 < 0x80) {
      bStack_18 = 0;
    }
    else {
      bStack_18 = (char)uVar3 + 0x80;
    }
    if ((param_5[1] == '\0') || (uVar3 = DAT_fffec883 + 0x87, 0x17f < uVar3)) {
      bStack_17 = 0xff;
    }
    else if (uVar3 < 0x80) {
      bStack_17 = 0;
    }
    else {
      bStack_17 = (char)uVar3 + 0x80;
    }
    DAT_fffec880 = bStack_18;
    DAT_fffec881 = bStack_17;
    DAT_fffec87e = local_28;
    if (bStack_18 <= local_28) {
      DAT_fffec87e = bStack_18;
    }
    if (bStack_17 <= DAT_fffec87f) {
      DAT_fffec87f = bStack_17;
    }
  }
  if (param_3 == '\0') {
    *param_8 = DAT_fffec87e;
    param_8[1] = DAT_fffec87f;
  }
  else {
    *param_8 = DAT_fffec87c;
    param_8[1] = DAT_fffec87d;
  }
  *param_9 = DAT_fffec880;
  param_9[1] = DAT_fffec881;
  return;
}

