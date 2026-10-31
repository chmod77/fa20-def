
void FUN_00129ee4(char param_1,char param_2,char param_3,undefined1 param_4,char param_5,
                 ushort param_6,ushort *param_7)

{
  ushort uVar1;
  
  uVar1 = param_6;
  if ((((param_1 == '\0') && (param_3 != '\0')) && (DAT_fffee404 == '\0')) &&
     (uVar1 = 0xffff, param_6 != 0xffff)) {
    uVar1 = param_6 + 1;
  }
  if ((param_2 == '\x01') && (param_5 == '\x01')) {
    *param_7 = uVar1 >> 1;
  }
  else {
    *param_7 = uVar1;
  }
  DAT_fffee404 = param_4;
  return;
}

