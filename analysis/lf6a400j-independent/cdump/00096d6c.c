
void FUN_00096d6c(byte param_1,char param_2,byte param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_3 < param_1) {
    uVar1 = DAT_fffebf64;
  }
  if (((param_2 == '\0') || (param_4 != '\0')) || (param_5 != '\0')) {
    uVar1 = 0;
  }
  *param_6 = uVar1;
  DAT_fffebf64 = uVar1;
  return;
}

