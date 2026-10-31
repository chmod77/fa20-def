
void FUN_0016cb14(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  char cStack_24;
  
  param_2 = param_2 & 0xffff;
  if (param_2 == 0) {
    local_34 = 0x7fffffff;
    if (*param_1 < 0) {
      local_34 = -1;
    }
    *param_5 = local_34;
    param_5[1] = -1;
  }
  else {
    iStack_28 = *param_1;
    puVar3 = (undefined2 *)((int)param_1 + 2);
    local_34 = __udiv32_r1_by_r0(iStack_28,param_2);
    puVar4 = (undefined2 *)((int)&local_34 + 2);
    cVar2 = '\0';
    iStack_2c = iStack_28 - param_2 * local_34;
    do {
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      cVar2 = cVar2 + '\x01';
      iStack_2c = CONCAT22((short)iStack_2c,*puVar3);
      uVar1 = __udiv32_r1_by_r0(iStack_2c,param_2);
      *puVar4 = (short)uVar1;
      iStack_2c = iStack_2c - param_2 * (uVar1 & 0xffff);
      cStack_24 = cVar2;
    } while (cVar2 < '\x02');
    *param_5 = local_34;
    param_5[1] = local_30;
  }
  return;
}

