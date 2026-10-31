
undefined4 FUN_0016c128(int *param_1,uint param_2)

{
  int iVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  char cVar6;
  int iStack_28;
  int iStack_24;
  undefined4 local_20;
  char cStack_1c;
  
  cVar5 = '\0';
  puVar4 = &local_20;
  if (param_2 < 0x10000) {
    local_20 = FUN_0016c2cc(param_1,param_2 & 0xffff);
  }
  else {
    if ((param_2 & 0x80000000) == 0) {
      for (; 0 < (int)param_2; param_2 = param_2 << 1) {
        cVar5 = cVar5 + '\x01';
      }
    }
    iStack_28 = __shl_r0_by_r1(*param_1,(int)cVar5);
    if (cVar5 != '\0') {
      iVar1 = __shr_r0_by_r1(param_1[1],0x20 - cVar5);
      iStack_28 = iStack_28 + iVar1;
    }
    cVar6 = '\0';
    iStack_24 = __shl_r0_by_r1(param_1[1],(int)cVar5);
    piVar3 = &iStack_28;
    do {
      cVar6 = cVar6 + '\x01';
      uVar2 = FUN_0016c1f4(piVar3);
      *(undefined2 *)puVar4 = uVar2;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
      piVar3 = (int *)((int)piVar3 + 2);
      cStack_1c = cVar6;
    } while (cVar6 < '\x02');
  }
  return local_20;
}

