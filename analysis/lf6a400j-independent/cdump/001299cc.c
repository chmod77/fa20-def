
void FUN_001299cc(char param_1,char param_2,char param_3,ushort param_4,char param_5,char param_6,
                 char param_7,undefined1 param_8,ushort *param_9)

{
  ushort uVar1;
  
  uVar1 = param_4;
  if (((((param_1 == '\0') && (param_5 != '\0')) && (param_6 != '\0')) &&
      ((param_7 != '\0' && (DAT_fffee3d8 == '\0')))) && (uVar1 = 0xffff, param_4 != 0xffff)) {
    uVar1 = param_4 + 1;
  }
  if ((param_2 == '\x01') && (param_3 == '\x01')) {
    *param_9 = uVar1 >> 1;
  }
  else {
    *param_9 = uVar1;
  }
  DAT_fffee3d8 = param_8;
  return;
}

