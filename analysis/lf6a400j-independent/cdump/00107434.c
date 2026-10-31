
void FUN_00107434(char param_1,ushort param_2,ushort param_3,char param_4,char param_5,
                 ushort param_6,short param_7,undefined1 *param_8)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = false;
  if ((param_4 != '\0') && (param_5 != '\0')) {
    bVar2 = true;
  }
  bVar1 = false;
  if ((param_1 != '\0') && (DAT_fffedae0 != '\0')) {
    bVar1 = true;
  }
  if ((((!bVar1) || (param_2 <= param_3)) || (bVar2)) || (param_7 == 0)) {
    uVar3 = 0;
    if (((param_7 != 0) && (bVar1)) && ((bVar2 && (param_6 < param_2)))) {
      uVar3 = 1;
    }
    *param_8 = uVar3;
  }
  else {
    *param_8 = 1;
  }
  DAT_fffedae0 = param_1;
  return;
}

