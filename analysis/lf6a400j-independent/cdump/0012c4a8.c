
void FUN_0012c4a8(char param_1,char param_2,undefined1 param_3,char param_4,ushort param_5,
                 char param_6,char param_7,ushort *param_8)

{
  ushort uVar1;
  
  uVar1 = param_5;
  if ((((param_1 == '\0') && (param_2 != '\0')) && (param_7 == '\0')) &&
     ((DAT_fffee45c == '\0' && (uVar1 = 0xffff, param_5 != 0xffff)))) {
    uVar1 = param_5 + 1;
  }
  if ((param_4 == '\x01') && (param_6 == '\x01')) {
    *param_8 = uVar1 >> 1;
  }
  else {
    *param_8 = uVar1;
  }
  DAT_fffee45c = param_3;
  return;
}

