
void FUN_000b3260(uint param_1,short param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (int)param_2 + (param_1 & 0xffff);
  if (iVar1 < (int)&DAT_00010000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    uVar2 = (undefined2)iVar1;
  }
  else {
    uVar2 = 0xffff;
  }
  *param_3 = uVar2;
  return;
}

