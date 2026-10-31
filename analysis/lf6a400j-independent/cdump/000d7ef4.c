
void FUN_000d7ef4(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,byte param_9,ushort param_10,ushort param_11,
                 char param_12,undefined1 param_13,char param_14,undefined1 *param_15,byte *param_16
                 )

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = true;
  if (((param_4 == '\0') || (param_5 == '\0')) && ((param_6 == '\0' || (param_7 == '\0')))) {
    bVar1 = false;
  }
  if ((bVar1) && (DAT_fffecf3c < 0x70)) {
    bVar2 = 0xff;
    if (DAT_fffecf3c != 0xff) {
      bVar2 = DAT_fffecf3c + 1;
    }
  }
  else {
    bVar2 = 0;
  }
  bVar3 = 0;
  if (param_1 != '\0') {
    bVar3 = DAT_fffecf3d;
  }
  *param_16 = bVar3;
  if (((param_1 == '\0') || (param_12 != '\0')) || ((param_2 != '\0' && (param_3 != '\0')))) {
LAB_000d7fea:
    *param_15 = 0;
  }
  else {
    if (bVar1) {
      if (bVar2 < 0x26) goto LAB_000d7fea;
      if (bVar2 < 0x4c) {
        *param_15 = 1;
        goto LAB_000d7ff2;
      }
    }
    else {
      if (((0x31 < bVar3) && (param_8 == '\0')) && (0x18 < param_9)) goto LAB_000d7fea;
      if (((0x6666 < param_10) && (2999 < param_11)) && (param_14 == '\0')) {
        *param_15 = param_13;
        goto LAB_000d7ff2;
      }
    }
    *param_15 = 3;
  }
LAB_000d7ff2:
  if (param_1 == '\0') {
    DAT_fffecf3d = '\0';
  }
  else if (bVar3 == 0xff) {
    DAT_fffecf3d = -1;
  }
  else {
    DAT_fffecf3d = bVar3 + 1;
  }
  DAT_fffecf3c = bVar2;
  return;
}

