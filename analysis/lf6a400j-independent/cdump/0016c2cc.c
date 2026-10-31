
undefined4 FUN_0016c2cc(int *param_1,ushort param_2)

{
  uint uVar1;
  uint b;
  char cVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 local_34;
  undefined4 local_30;
  int iStack_2c;
  int iStack_28;
  char cStack_24;
  
  b = (uint)param_2;
  if (b == 0) {
    local_30 = 0x7fffffff;
    if (*param_1 < 0) {
      local_30 = 0xffffffff;
    }
  }
  else {
    iStack_28 = *param_1;
    puVar3 = (undefined2 *)((int)param_1 + 2);
    local_34 = __udiv32_r1_by_r0(iStack_28,b);
    puVar4 = (undefined2 *)((int)&local_34 + 2);
    cVar2 = '\0';
    iStack_2c = iStack_28 - b * local_34;
    do {
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      cVar2 = cVar2 + '\x01';
      iStack_2c = CONCAT22((short)iStack_2c,*puVar3);
      uVar1 = __udiv32_r1_by_r0(iStack_2c,b);
      *puVar4 = (short)uVar1;
      iStack_2c = iStack_2c - b * (uVar1 & 0xffff);
      cStack_24 = cVar2;
    } while (cVar2 < '\x02');
  }
  return local_30;
}

