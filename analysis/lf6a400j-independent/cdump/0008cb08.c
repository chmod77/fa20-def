
void FUN_0008cb08(char param_1,ushort param_2,ushort param_3,char param_4,uint param_5,short param_6
                 ,undefined4 param_7,char param_8,char param_9,undefined1 *param_10)

{
  uint uVar1;
  
  if (param_1 == '\0') {
    if ((((param_2 < 0x2300) && (0xab0d < param_3)) && (param_4 == '\0')) &&
       (((param_6 == 0 && (param_8 == '\x03')) && (param_9 == '\0')))) {
      uVar1 = LK_133BCC((uint)&T_02CDF0,param_5 & 0xffff);
      *param_10 = (char)uVar1;
      return;
    }
    if (((param_2 < 0x2300) && (0xab0d < param_3)) &&
       ((param_4 == '\0' && (((param_6 == 0 && (param_8 == '\x03')) && (param_9 != '\0')))))) {
      uVar1 = LK_133BCC((uint)&T_02CDFC,param_5 & 0xffff);
      *param_10 = (char)uVar1;
      return;
    }
  }
  *param_10 = 0;
  return;
}

