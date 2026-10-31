
void FUN_000b8390(uint param_1,uint param_2,char param_3,char param_4,char *param_5,byte *param_6,
                 byte *param_7,byte *param_8,byte *param_9)

{
  short sVar1;
  ushort uVar2;
  byte bStack_2c;
  byte bStack_20;
  byte bStack_1f;
  byte bStack_1c;
  byte bStack_1b;
  
  if (param_3 != '\0') {
    sVar1 = (short)((param_2 & 0xffff) * 0xb4 >> 0x10) + -0xd0;
    if (sVar1 < 0) {
      DAT_fffec81d = (byte)sVar1;
    }
    else {
      DAT_fffec81d = 0xff;
    }
    sVar1 = (short)((param_1 & 0xffff) * 0xb4 >> 0x10) + -0xd0;
    if (sVar1 < 0) {
      DAT_fffec81c = (byte)sVar1;
    }
    else {
      DAT_fffec81c = 0xff;
    }
  }
  if (param_3 != '\0') goto LAB_000b85aa;
  if (param_4 == '\x02') {
    uVar2 = (*param_7 + 0x83) - (ushort)*param_6;
    bStack_2c = 0;
    if (((ushort)*param_6 <= (ushort)(*param_7 + 0x83)) && (bStack_2c = (byte)uVar2, 0xff < uVar2))
    {
      bStack_2c = 0xff;
    }
    uVar2 = (param_7[1] + 0x83) - (ushort)param_6[1];
    DAT_fffec81f = 0;
    if (((ushort)param_6[1] <= (ushort)(param_7[1] + 0x83)) &&
       (DAT_fffec81f = (byte)uVar2, 0xff < uVar2)) {
      DAT_fffec81f = 0xff;
    }
  }
  else {
    bStack_2c = *param_7;
    DAT_fffec81f = param_7[1];
  }
  if (bStack_2c < 0x75) {
    bStack_2c = 0x74;
  }
  if (DAT_fffec81f < 0x75) {
    DAT_fffec81f = 0x74;
  }
  if (0x87 < bStack_2c) {
    bStack_2c = 0x87;
  }
  if (0x87 < DAT_fffec81f) {
    DAT_fffec81f = 0x87;
  }
  bStack_20 = bStack_2c;
  if (bStack_2c <= DAT_fffec822) {
    bStack_20 = DAT_fffec822;
  }
  bStack_1f = DAT_fffec81f;
  if (DAT_fffec81f <= DAT_fffec823) {
    bStack_1f = DAT_fffec823;
  }
  if (*param_5 == '\0') {
LAB_000b8532:
    bStack_1c = 0;
  }
  else {
    sVar1 = bStack_20 - 0x8c;
    if (sVar1 < 0x80) {
      if (sVar1 < -0x80) goto LAB_000b8532;
      bStack_1c = (char)sVar1 + 0x80;
    }
    else {
      bStack_1c = 0xff;
    }
  }
  if (param_5[1] == '\0') {
LAB_000b856c:
    bStack_1b = 0;
  }
  else {
    sVar1 = bStack_1f - 0x8c;
    if (sVar1 < 0x80) {
      if (sVar1 < -0x80) goto LAB_000b856c;
      bStack_1b = (char)sVar1 + 0x80;
    }
    else {
      bStack_1b = 0xff;
    }
  }
  DAT_fffec820 = bStack_1c;
  DAT_fffec821 = bStack_1b;
  DAT_fffec81e = bStack_2c;
  if (bStack_2c <= bStack_1c) {
    DAT_fffec81e = bStack_1c;
  }
  if (DAT_fffec81f <= bStack_1b) {
    DAT_fffec81f = bStack_1b;
  }
  DAT_fffec822 = bStack_20;
  DAT_fffec823 = bStack_1f;
LAB_000b85aa:
  if (param_3 == '\0') {
    *param_8 = DAT_fffec81e;
    param_8[1] = DAT_fffec81f;
  }
  else {
    *param_8 = DAT_fffec81c;
    param_8[1] = DAT_fffec81d;
  }
  *param_9 = DAT_fffec820;
  param_9[1] = DAT_fffec821;
  return;
}

