
byte FUN_0009b4b4(char param_1,char param_2,char *param_3)

{
  byte bVar1;
  short sVar2;
  
  if (param_2 < DAT_fffebff8) {
    if (param_1 == '\0') {
      bVar1 = 6;
    }
    else {
      bVar1 = 0x14;
    }
    sVar2 = (short)DAT_fffebff8 - (ushort)bVar1;
    if (sVar2 < -0x80) {
      sVar2 = -0x80;
    }
    DAT_fffebff8 = (char)sVar2;
    if (param_2 <= DAT_fffebff8) goto LAB_0009b50e;
  }
  else {
    bVar1 = 10;
    sVar2 = DAT_fffebff8 + 10;
    if (0x7f < sVar2) {
      sVar2 = 0x7f;
    }
    DAT_fffebff8 = (char)sVar2;
    if (DAT_fffebff8 <= param_2) goto LAB_0009b50e;
  }
  DAT_fffebff8 = param_2;
LAB_0009b50e:
  *param_3 = DAT_fffebff8;
  return bVar1;
}

