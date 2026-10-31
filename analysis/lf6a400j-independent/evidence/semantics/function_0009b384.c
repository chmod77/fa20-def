
void FUN_0009b384(uint param_1,char param_2,char param_3,uint param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,byte param_11,uint param_12,
                 char param_13,char param_14,undefined1 *param_15,undefined2 *param_16)

{
  ushort uVar1;
  short sVar2;
  
  if ((((param_1 & 0xff) != (int)DAT_0009b4a2) && (param_13 == '\x03')) ||
     ((param_13 == '\x03' && ((param_14 != '\0' && (param_6 != '\x02')))))) {
    param_4 = (param_12 & 0xffff) >> 7;
  }
  else {
    param_4 = param_4 & 0xff;
    if (param_4 <= *(ushort *)PTR_DAT_0009b4a8) {
      param_4 = (uint)*(short *)PTR_DAT_0009b4a8;
    }
  }
  if ((int)DAT_0009b4a4 < (int)(param_4 & 0xffff)) {
    param_4 = (uint)DAT_0009b4a4;
  }
  *param_16 = (short)param_4;
  if ((((param_6 != '\v') || (param_7 == '\0')) &&
      (((param_6 != '\f' || (param_8 == '\0')) && ((param_6 != '\x19' || (param_9 == '\0')))))) &&
     (((param_6 != '\x1a' || (param_10 == '\0')) && (param_6 != '\x1b')))) {
    uVar1 = (*(code *)PTR_FUN_0009b4b0)(PTR_DAT_0009b4ac,param_4 << 7);
    sVar2 = (short)param_2 - (uVar1 & 0xff);
    if (sVar2 < -0x80) {
      sVar2 = -0x80;
    }
    param_5 = (char)sVar2;
    if (param_3 <= param_5) {
      param_5 = param_3;
    }
  }
  sVar2 = -0x80;
  if (-0x81 < (short)((short)param_5 - (ushort)param_11)) {
    sVar2 = (short)param_5 - (ushort)param_11;
  }
  *param_15 = (char)sVar2;
  return;
}

