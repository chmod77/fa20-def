
void FUN_000ded48(short param_1,char param_2,short param_3,short param_4,undefined2 *param_5)

{
  undefined2 uVar1;
  int iVar2;
  
  if (param_2 == '\0') {
    param_3 = 0;
  }
  else {
    param_4 = 0;
  }
  iVar2 = (int)param_1 - ((int)param_3 + (int)param_4);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  uVar1 = (undefined2)iVar2;
  if (0x7fff < iVar2) {
    uVar1 = 0x7fff;
  }
  *param_5 = uVar1;
  return;
}

