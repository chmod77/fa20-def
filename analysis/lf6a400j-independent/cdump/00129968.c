
void FUN_00129968(char param_1,undefined1 param_2,ushort param_3,char param_4,char param_5,
                 char param_6,char param_7,ushort *param_8)

{
  ushort uVar1;
  
  uVar1 = param_3;
  if ((((param_1 == '\0') && (param_5 != '\0')) && (param_7 != '\0')) &&
     ((DAT_fffee3d4 == '\0' && (uVar1 = 0xffff, param_3 != 0xffff)))) {
    uVar1 = param_3 + 1;
  }
  if ((param_4 == '\x01') && (param_6 == '\x01')) {
    *param_8 = uVar1 >> 1;
  }
  else {
    *param_8 = uVar1;
  }
  DAT_fffee3d4 = param_2;
  return;
}

