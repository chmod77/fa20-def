
void FUN_0009b308(byte param_1,char param_2,char param_3,byte param_4,char *param_5)

{
  uint uVar1;
  short sVar2;
  
  if (param_1 < 3) {
    *param_5 = '\0';
  }
  else {
    uVar1 = (uint)param_4;
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    if (0x100 < uVar1) {
      uVar1 = 0x100;
    }
    uVar1 = LK_133BCC((uint)&T_02D884,uVar1 << 7);
    sVar2 = (short)param_2 - ((ushort)uVar1 & 0xff);
    if (sVar2 < -0x80) {
      sVar2 = -0x80;
    }
    if ((char)sVar2 < param_3) {
      *param_5 = (char)sVar2;
    }
    else {
      *param_5 = param_3;
    }
  }
  return;
}

