
void FUN_0009b27c(byte param_1,char param_2,char param_3,byte param_4,uint param_5,char *param_6)

{
  uint uVar1;
  short sVar2;
  
  if (param_1 < 3) {
    uVar1 = LK_134A08((uint)&T_02D86C,param_5 & 0xffff);
    *param_6 = (char)uVar1;
  }
  else {
    uVar1 = (uint)param_4;
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    if (0x100 < uVar1) {
      uVar1 = 0x100;
    }
    uVar1 = LK_133BCC((uint)&T_02D878,uVar1 << 7);
    sVar2 = (short)param_2 - ((ushort)uVar1 & 0xff);
    if (sVar2 < -0x80) {
      sVar2 = -0x80;
    }
    if ((char)sVar2 < param_3) {
      *param_6 = (char)sVar2;
    }
    else {
      *param_6 = param_3;
    }
  }
  return;
}

