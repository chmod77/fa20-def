
void FUN_000bf8f8(ushort param_1,uint param_2,char param_3,char param_4,char param_5,char param_6,
                 byte param_7,char param_8,uint param_9,uint param_10,undefined1 *param_11)

{
  uint uVar1;
  
  if (param_1 < 0x5001) {
    if (param_8 != '\0') {
      param_10 = param_9;
    }
    if (param_3 == '\0') {
      if ((param_4 == '\0') && (param_5 == '\0')) {
        if ((param_6 == '\0') || (1 < param_7)) {
          uVar1 = LK_138810((uint)&T_02E780,param_2 & 0xff,param_10);
          DAT_fffec938 = (undefined1)uVar1;
        }
        else {
          uVar1 = LK_138810((uint)&T_02E76C,param_2 & 0xff,param_10);
          DAT_fffec938 = (undefined1)uVar1;
        }
      }
      else {
        DAT_fffec938 = 0;
      }
    }
    else {
      DAT_fffec938 = 0x33;
    }
  }
  *param_11 = DAT_fffec938;
  return;
}

