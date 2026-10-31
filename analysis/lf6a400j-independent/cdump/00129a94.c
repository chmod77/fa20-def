
void FUN_00129a94(char param_1,char param_2,byte param_3,byte param_4,undefined1 param_5,
                 ushort param_6,char param_7,char param_8,ushort *param_9)

{
  ushort uVar1;
  
  uVar1 = param_6;
  if ((((param_1 == '\0') && (param_2 != '\0')) && ((9 < param_3 || (1 < param_4)))) &&
     ((DAT_fffee3e0 == '\0' && (uVar1 = 0xffff, param_6 != 0xffff)))) {
    uVar1 = param_6 + 1;
  }
  if ((param_7 == '\x01') && (param_8 == '\x01')) {
    *param_9 = uVar1 >> 1;
  }
  else {
    *param_9 = uVar1;
  }
  DAT_fffee3e0 = param_5;
  return;
}

