
void FUN_001292d8(char param_1,char param_2,undefined1 param_3,ushort param_4,char param_5,
                 char param_6,char param_7,ushort *param_8)

{
  ushort uVar1;
  
  uVar1 = param_4;
  if ((((param_1 == '\0') && (param_2 == '\0')) && (param_7 == '\0')) &&
     ((DAT_fffee38c == '\0' && (uVar1 = 0xffff, param_4 != 0xffff)))) {
    uVar1 = param_4 + 1;
  }
  if ((param_5 == '\x01') && (param_6 == '\x01')) {
    *param_8 = uVar1 >> 1;
  }
  else {
    *param_8 = uVar1;
  }
  DAT_fffee38c = param_3;
  return;
}

