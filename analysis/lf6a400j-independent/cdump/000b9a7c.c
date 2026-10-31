
void FUN_000b9a7c(uint param_1,uint param_2,char param_3,short param_4,short param_5,char *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  
  if (param_3 == '\x03') {
    uVar1 = LK_139368((uint)&T_02E4D8,param_2 & 0xffff,(int)param_4);
    param_1 = param_1 & 0xff;
    uVar2 = LK_133B38((uint)&T_02E4C0,param_1);
    uVar3 = LK_133B38((uint)&T_02E4C0,param_1);
    sVar4 = (ushort)((uVar1 & 0xffff) * (uVar2 & 0xff) * 0x7d >> 0x15) -
            (short)((int)((uVar3 & 0xff) * 0x7d) >> 6);
    if (sVar4 < 0x80) {
      if (sVar4 < -0x80) {
        *param_6 = '\0';
      }
      else {
        *param_6 = (char)sVar4 + -0x80;
      }
    }
    else {
      *param_6 = -1;
    }
    uVar1 = LK_139368((uint)&T_02E4EC,param_2 & 0xffff,(int)param_5);
    uVar2 = LK_133B38((uint)&T_02E4CC,param_1);
    uVar3 = LK_133B38((uint)&T_02E4CC,param_1);
    sVar4 = (ushort)((uVar1 & 0xffff) * (uVar2 & 0xff) * 0x7d >> 0x15) -
            (short)((int)((uVar3 & 0xff) * 0x7d) >> 6);
    if (sVar4 < 0x80) {
      if (sVar4 < -0x80) {
        param_6[1] = '\0';
      }
      else {
        param_6[1] = (char)sVar4 + -0x80;
      }
    }
    else {
      param_6[1] = -1;
    }
  }
  else {
    *param_6 = -0x80;
    param_6[1] = -0x80;
  }
  return;
}

