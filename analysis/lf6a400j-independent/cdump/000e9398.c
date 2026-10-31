
void FUN_000e9398(char param_1,ushort param_2,ushort param_3,uint param_4,uint param_5,
                 undefined4 param_6,char param_7,char param_8,undefined1 *param_9)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = LK_133F40((uint)&T_02F298,param_5 & 0xffff);
  uVar2 = 0;
  if ((((param_1 != '\0') && (0x1d4b < param_2)) && (0x3bff < param_3)) &&
     ((((uVar1 & 0xffff) <= (param_4 & 0xffff) && (param_7 != '\0')) && (param_8 == '\0')))) {
    uVar2 = 1;
  }
  *param_9 = uVar2;
  return;
}

