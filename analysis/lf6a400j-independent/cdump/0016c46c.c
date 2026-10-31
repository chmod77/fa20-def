
undefined4
FUN_0016c46c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  bool bStack_10;
  
  local_20 = *param_1;
  iStack_1c = param_1[1];
  bVar1 = false;
  if (local_20 < 0) {
    FUN_0016caf8(&local_20);
    bVar1 = true;
    bStack_10 = true;
    if (param_2 < 0) goto LAB_0016c4ea;
  }
  else {
    if (-1 < param_2) {
      uVar2 = FUN_0016c364(&local_20,param_2,iStack_1c,0,&local_18);
      goto LAB_0016c49c;
    }
LAB_0016c4ea:
    bStack_10 = !bVar1;
    param_2 = -param_2;
  }
  FUN_0016c364(&local_20,param_2);
  uVar2 = 0x14;
  if (bStack_10 != false) {
    uVar2 = FUN_0016caf8(&local_18);
  }
LAB_0016c49c:
  *param_5 = local_18;
  param_5[1] = uStack_14;
  return uVar2;
}

