
void FUN_0008bcac(byte param_1,char param_2,uint param_3,uint param_4,uint param_5,
                 undefined1 *param_6)

{
  uint uVar1;
  
  if ((param_1 < 3) || (param_2 == '\x01')) {
    *param_6 = 0;
  }
  else {
    uVar1 = LK_13869C((uint)&T_02CCF0,param_4,param_3);
    uVar1 = (int)((ulonglong)((longlong)(int)(param_5 & 0xffff) * 0x2000000) >> 0x20) +
            (uVar1 & 0xff);
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    *param_6 = (char)uVar1;
  }
  return;
}

