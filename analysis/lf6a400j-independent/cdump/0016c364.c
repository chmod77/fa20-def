
void FUN_0016c364(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  int iVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined2 *puVar4;
  char cVar5;
  char cVar6;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 local_30;
  uint uStack_2c;
  uint local_24;
  uint uStack_20;
  char cStack_1c;
  
  cVar5 = '\0';
  piVar3 = &iStack_3c;
  if (param_2 < 0x10000) {
    FUN_0016cb14(param_1,param_2,param_3,param_4,&local_24);
    *param_5 = local_24;
    param_5[1] = uStack_20;
  }
  else {
    if ((param_2 & 0x80000000) == 0) {
      for (; 0 < (int)param_2; param_2 = param_2 << 1) {
        cVar5 = cVar5 + '\x01';
      }
    }
    iStack_3c = 0;
    if (cVar5 != '\0') {
      iStack_3c = __shr_r0_by_r1(*param_1,0x20 - cVar5);
    }
    iStack_38 = __shl_r0_by_r1(*param_1,(int)cVar5);
    if (cVar5 != '\0') {
      iVar1 = __shr_r0_by_r1(param_1[1],0x20 - cVar5);
      iStack_38 = iStack_38 + iVar1;
    }
    cVar6 = '\0';
    iStack_34 = __shl_r0_by_r1(param_1[1],(int)cVar5);
    local_30 = (uint)local_30._2_2_;
    puVar4 = (undefined2 *)((int)&local_30 + 2);
    do {
      piVar3 = (int *)((int)piVar3 + 2);
      cVar6 = cVar6 + '\x01';
      uVar2 = FUN_0016c1f4(piVar3);
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      cStack_1c = cVar6;
    } while (cVar6 < '\x03');
    *param_5 = local_30;
    param_5[1] = uStack_2c;
  }
  return;
}

