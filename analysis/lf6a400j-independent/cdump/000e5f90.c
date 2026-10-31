
void FUN_000e5f90(char param_1,char param_2,ushort param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,char param_12,
                 char param_13,char param_14,char param_15,char param_16,undefined1 *param_17)

{
  bool bVar1;
  
  bVar1 = true;
  if (((((((param_4 == '\0') && (param_5 == '\0')) && (param_6 == '\0')) &&
        ((param_7 == '\0' && (param_8 == '\0')))) &&
       ((param_9 == '\0' && ((param_10 == '\0' && (param_11 == '\0')))))) && (param_12 == '\0')) &&
     (((param_13 == '\0' && (param_14 == '\0')) && (param_15 == '\0')))) {
    bVar1 = false;
  }
  if (param_16 == '\0') {
    if (((param_1 == '\0') || (param_2 == '\0')) || ((bVar1 || (0x82 < param_3)))) {
      if (((0x82 >= param_3) || (param_1 == '\0')) || ((param_2 == '\0' || (bVar1)))) {
        *param_17 = 3;
      }
      else {
        *param_17 = 2;
      }
    }
    else {
      *param_17 = 1;
    }
  }
  else {
    *param_17 = 0;
  }
  return;
}

