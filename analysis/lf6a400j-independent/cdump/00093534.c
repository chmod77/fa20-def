
void FUN_00093534(char param_1,char param_2,char param_3,char param_4,char param_5,byte param_6,
                 byte param_7,undefined1 *param_8)

{
  undefined1 uVar1;
  
  if ((param_1 == '\0') || (param_2 != '\0')) {
    uVar1 = 1;
    if ((param_1 != '\0') &&
       (((param_1 == '\0' || (param_2 == '\0')) ||
        (((param_3 != '\0' || (param_4 == '\0')) &&
         ((param_5 != '\x02' &&
          (((param_3 != '\0' || (param_6 < 5)) && ((param_3 == '\0' || (param_7 < 5)))))))))))) {
      uVar1 = 0;
    }
    *param_8 = uVar1;
  }
  else {
    *param_8 = 0;
  }
  return;
}

