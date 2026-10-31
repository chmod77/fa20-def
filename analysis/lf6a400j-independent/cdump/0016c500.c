
int FUN_0016c500(int *param_1,undefined4 param_2)

{
  int iVar1;
  int local_10;
  int iStack_c;
  
  local_10 = *param_1;
  iStack_c = param_1[1];
  if (local_10 < 0) {
    FUN_0016caf8(&local_10,&local_10);
    iVar1 = FUN_0016c128(&local_10,param_2);
    iVar1 = -iVar1;
  }
  else {
    iVar1 = FUN_0016c128(&local_10,param_2);
  }
  return iVar1;
}

