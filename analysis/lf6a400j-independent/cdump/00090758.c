
char FUN_00090758(char param_1,uint param_2,uint param_3,char param_4,ushort *param_5,
                 ushort *param_6)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = LK_139E34((uint)&T_02D198,param_3,param_2);
  *param_6 = (ushort)uVar1;
  if ((param_1 == '\x02') || (param_1 == '\x03')) {
    uVar2 = (ushort)uVar1;
    if (param_4 != '\0') {
      uVar2 = 0;
    }
    if (uVar2 < 0x5a0) {
      if (uVar2 < 0x438) {
        uVar2 = 0x438;
      }
    }
    else {
      uVar2 = 0x59f;
    }
    *param_5 = uVar2;
  }
  else {
    *param_5 = 0x636;
  }
  return param_1;
}

