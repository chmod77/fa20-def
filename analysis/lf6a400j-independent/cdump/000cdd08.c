
void FUN_000cdd08(char param_1,ushort param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,undefined1 *param_8)

{
  undefined1 uVar1;
  bool bVar2;
  
  if (param_7 == '\0') {
    if ((param_5 == '\0') && (param_6 == '\0')) {
      bVar2 = param_3 != '\0';
    }
    else {
      bVar2 = 10000 < param_2;
    }
    uVar1 = 0;
    if (((param_1 != '\0') && (bVar2)) && (param_4 != '\0')) {
      uVar1 = 1;
    }
    *param_8 = uVar1;
  }
  else {
    *param_8 = 0;
  }
  return;
}

