
undefined4 FUN_00052b4a(undefined4 *param_1,ushort param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)*param_1;
  puVar2 = (ushort *)param_1[1];
  uVar3 = 0;
  while ((*puVar2 < param_2 &&
         (uVar4 = uVar3 & 0xff, uVar3 = uVar4 + 1, (int)uVar4 < (int)(*(byte *)(param_1 + 2) - 1))))
  {
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  if (((uVar3 & 0xff) == 0) || ((uVar3 & 0xff) == (uint)*(byte *)(param_1 + 2))) {
    uVar1 = *puVar5;
  }
  else {
    uVar1 = FUN_00052ade(puVar2[-1],*puVar2,puVar5[-1],*puVar5,param_2);
  }
  return uVar1;
}

