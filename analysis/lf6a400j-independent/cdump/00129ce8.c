
void FUN_00129ce8(char param_1,char param_2,byte param_3,byte param_4,undefined1 param_5,
                 char param_6,ushort param_7,char param_8,char param_9,char param_10,char param_11,
                 ushort *param_12)

{
  ushort uVar1;
  
  uVar1 = param_7;
  if (((((param_1 == '\0') && (param_2 != '\0')) && ((9 < param_3 || (1 < param_4)))) &&
      ((param_9 == '\0' || ((param_10 == '\0' && (param_11 != '\0')))))) &&
     ((DAT_fffee3f4 == '\0' && (uVar1 = 0xffff, param_7 != 0xffff)))) {
    uVar1 = param_7 + 1;
  }
  if ((param_6 == '\x01') && (param_8 == '\x01')) {
    *param_12 = uVar1 >> 1;
  }
  else {
    *param_12 = uVar1;
  }
  DAT_fffee3f4 = param_5;
  return;
}

