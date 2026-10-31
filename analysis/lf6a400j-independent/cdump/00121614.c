
void FUN_00121614(byte param_1,byte param_2,char param_3,byte param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if ((((param_1 < 0x19) || (10 < param_4)) || (param_3 == '\0')) &&
     (((param_1 < 0x19 || (10 < param_2)) || (param_3 == '\0')))) {
    uVar1 = 0;
  }
  *param_5 = uVar1;
  return;
}

