
void FUN_00081394(ushort param_1,ushort param_2,ushort param_3,char param_4,char param_5,
                 char param_6,char param_7,ushort param_8,ushort *param_9,ushort *param_10,
                 ushort *param_11)

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
  *param_10 = param_2;
  uVar3 = param_1;
  if (param_1 < param_2) {
    uVar3 = param_2;
  }
  *param_11 = uVar3;
  bVar1 = param_4 != '\0';
  if (((bVar1) || (!bVar2)) || (param_2 < param_1)) {
    param_2 = param_1;
  }
  if (((bVar1) && (!bVar2)) && (param_2 = param_3, param_1 < param_3)) {
    param_2 = param_1;
  }
  if ((bVar1) && (bVar2)) {
    if (uVar3 < param_3) {
      *param_9 = uVar3;
    }
    else {
      *param_9 = param_3;
    }
  }
  else {
    *param_9 = param_2;
  }
  return;
}

