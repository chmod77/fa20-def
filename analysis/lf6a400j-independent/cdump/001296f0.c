
void FUN_001296f0(char param_1,undefined1 param_2,ushort param_3,char param_4,char param_5,
                 char param_6,char param_7,char param_8,char param_9,ushort *param_10)

{
  ushort uVar1;
  
  uVar1 = param_3;
  if (((((param_1 == '\0') && (param_6 == '\0')) && (param_7 == '\0')) &&
      ((param_8 == '\0' && (param_9 == '\0')))) &&
     ((DAT_fffee3c0 == '\0' && (uVar1 = 0xffff, param_3 != 0xffff)))) {
    uVar1 = param_3 + 1;
  }
  if ((param_4 == '\x01') && (param_5 == '\x01')) {
    *param_10 = uVar1 >> 1;
  }
  else {
    *param_10 = uVar1;
  }
  DAT_fffee3c0 = param_2;
  return;
}

