
void FUN_001241d0(ushort param_1,ushort param_2,ushort param_3,char param_4,char param_5,
                 char param_6,char param_7,ushort param_8,ushort *param_9)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  
  bVar2 = false;
  if (((param_5 != '\0') && (param_6 != '\0')) && (param_7 != '\0')) {
    bVar2 = true;
  }
  if (param_8 < param_2) {
    param_2 = param_8;
  }
  bVar1 = param_4 != '\0';
  if (((bVar1) || (!bVar2)) || (uVar3 = param_2, param_2 < param_1)) {
    uVar3 = param_1;
  }
  if (((bVar1) && (!bVar2)) && (uVar3 = param_3, param_1 < param_3)) {
    uVar3 = param_1;
  }
  if ((bVar1) && (bVar2)) {
    if (param_1 < param_2) {
      param_1 = param_2;
    }
    if (param_1 < param_3) {
      *param_9 = param_1;
    }
    else {
      *param_9 = param_3;
    }
  }
  else {
    *param_9 = uVar3;
  }
  return;
}

