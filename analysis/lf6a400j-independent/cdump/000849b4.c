
void FUN_000849b4(char param_1,uint param_2,uint param_3,ushort param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,char param_12,
                 undefined1 *param_13)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if ((((((param_1 != '\0') &&
         ((param_3 & 0xff) <=
          (uint)((ulonglong)((longlong)(int)(param_2 & 0xffff) * 0x2000000) >> 0x20))) &&
        (599 < param_4)) && ((param_5 == '\0' && (param_6 == '\0')))) &&
      ((param_7 == '\0' && ((param_9 == '\0' && (param_10 == '\0')))))) &&
     ((param_8 == '\0' && ((param_11 != '\0' || (param_12 == '\0')))))) {
    uVar1 = 0;
  }
  *param_13 = uVar1;
  return;
}

