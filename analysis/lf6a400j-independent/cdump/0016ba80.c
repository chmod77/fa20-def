
int FUN_0016ba80(undefined4 *param_1,ushort param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  char *pcVar5;
  
  pcVar5 = (char *)*param_1;
  puVar4 = (ushort *)param_1[1];
  uVar2 = 0;
  while ((*puVar4 < param_2 &&
         (uVar3 = uVar2 & 0xff, uVar2 = uVar3 + 1, (int)uVar3 < (int)(*(byte *)(param_1 + 2) - 1))))
  {
    puVar4 = puVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  if (((uVar2 & 0xff) == 0) || ((uVar2 & 0xff) == (uint)*(byte *)(param_1 + 2))) {
    iVar1 = (int)*pcVar5;
  }
  else {
    iVar1 = FUN_0016bf30((int)(short)puVar4[-1],(int)(short)*puVar4,(int)pcVar5[-1],*pcVar5,param_2)
    ;
  }
  return iVar1;
}

