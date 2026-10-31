
void FUN_0011d168(uint param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 - param_2;
  iVar1 = -(uint)(param_1 < uVar2);
  if ((iVar1 < 1) && ((iVar1 != 0 || (uVar2 < 0x80000000)))) {
    if ((iVar1 < -1) || ((iVar1 == -1 && (uVar2 < 0x80000000)))) {
      uVar2 = 0x80000000;
    }
  }
  else {
    uVar2 = 0x7fffffff;
  }
  *param_3 = uVar2;
  return;
}

