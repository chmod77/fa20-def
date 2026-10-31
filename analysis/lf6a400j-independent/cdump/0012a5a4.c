
void FUN_0012a5a4(char param_1,char param_2,undefined1 param_3,char param_4,ushort param_5,
                 char param_6,ushort *param_7)

{
  ushort uVar1;
  
  uVar1 = param_5;
  if ((((param_2 == '\0') && (param_4 != '\0')) && (DAT_fffee43c == '\0')) &&
     (uVar1 = 0xffff, param_5 != 0xffff)) {
    uVar1 = param_5 + 1;
  }
  if ((param_1 == '\x01') && (param_6 == '\x01')) {
    *param_7 = uVar1 >> 1;
  }
  else {
    *param_7 = uVar1;
  }
  DAT_fffee43c = param_3;
  return;
}

