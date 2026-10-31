
void FUN_000b7248(short param_1,short param_2,short param_3,short param_4,undefined2 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1 + (int)param_2 + (int)param_3 + (int)param_4;
  iVar1 = 0x7fff;
  if ((iVar2 < 0x8000) && (iVar1 = iVar2, iVar2 < -0x8000)) {
    iVar1 = -0x8000;
  }
  *param_5 = (short)iVar1;
  return;
}

