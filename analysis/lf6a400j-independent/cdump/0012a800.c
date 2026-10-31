
void FUN_0012a800(char param_1,ushort param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,undefined1 param_10,ushort *param_11)

{
  ushort uVar1;
  
  uVar1 = param_2;
  if ((((param_1 == '\0') &&
       ((((param_5 != '\0' || (param_6 != '\0')) && (param_7 == '\0')) &&
        ((param_8 != '\0' && (param_9 != '\0')))))) && (DAT_fffee450 == '\0')) &&
     (uVar1 = 0xffff, param_2 != 0xffff)) {
    uVar1 = param_2 + 1;
  }
  if ((param_3 == '\x01') && (param_4 == '\x01')) {
    *param_11 = uVar1 >> 1;
  }
  else {
    *param_11 = uVar1;
  }
  DAT_fffee450 = param_10;
  return;
}

