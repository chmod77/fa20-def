
void FUN_000e4288(char param_1,char param_2,char param_3,ushort param_4,uint param_5,
                 undefined2 param_6,char param_7,ushort param_8,ushort param_9,ushort param_10,
                 ushort param_11,ushort param_12,char param_13,ushort param_14,undefined2 *param_15)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = 0x46 < param_8;
  if (param_3 == '\0') {
    if (param_4 < 200) {
      uVar2 = LK_133F40((uint)&T_02F188,param_5 & 0xffff);
      *param_15 = (short)uVar2;
    }
    else if ((param_2 == '\0') || (param_1 == '\0')) {
      if ((param_7 == '\0') || ((bVar1 || (param_9 < 0x2001)))) {
        if ((param_7 == '\0') || ((bVar1 || (0x13ff < param_10)))) {
          if ((param_7 == '\0') || ((param_11 <= param_10 || (!bVar1)))) {
            if ((param_7 == '\0') || (((param_12 <= param_14 || (param_13 == '\0')) || (!bVar1)))) {
              *param_15 = 0x8000;
            }
            else {
              *param_15 = 0x8000;
            }
          }
          else {
            *param_15 = 0xa3;
          }
        }
        else {
          *param_15 = 0x1000;
        }
      }
      else {
        *param_15 = 0x1000;
      }
    }
    else {
      *param_15 = param_6;
    }
  }
  else {
    *param_15 = 0x8000;
  }
  return;
}

