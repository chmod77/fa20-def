
void FUN_000e363c(byte param_1,uint param_2,byte param_3,uint param_4,uint param_5,char param_6,
                 char param_7,short *param_8)

{
  uint uVar1;
  uint uVar2;
  
  param_5 = param_5 & 0xff;
  if (3 < param_1) {
    param_1 = 3;
  }
  if (param_1 == 0) {
    uVar1 = LK_134BB0((uint)&T_02F11C,param_5);
    *param_8 = (short)uVar1 + 0x46e;
  }
  else if (param_1 == 1) {
    uVar1 = LK_134BB0((uint)&T_02F128,param_5);
    *param_8 = (short)uVar1 + 0x46e;
  }
  else if (param_1 == 2) {
    uVar1 = LK_134BB0((uint)&T_02F134,param_5);
    *param_8 = (short)uVar1 + 0x248;
  }
  else {
    uVar1 = LK_133F40((uint)&T_02F110,param_4);
    if ((((param_2 & 0xffff) < (uVar1 & 0xffff)) || ((param_3 != 0 && (param_3 < 7)))) ||
       ((param_6 == -0x5b && (param_7 != '\0')))) {
      uVar1 = LK_134BB0((uint)&T_02F14C,param_5);
      uVar2 = LK_133F40((uint)&T_02F104,param_2 & 0xffff);
      *param_8 = (short)uVar2 + (short)uVar1;
    }
    else {
      uVar1 = LK_134BB0((uint)&T_02F140,param_5);
      *param_8 = (short)uVar1 + 0x248;
    }
  }
  return;
}

