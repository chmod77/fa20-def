
void FUN_0013dc70(int param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  psVar2 = (short *)(&PTR_LAB_0016a750)[*(char *)(param_1 + 1)];
  for (iVar3 = (int)*(short *)(&LAB_0016a75c + *(char *)(param_1 + 1) * 2); 0 < iVar3;
      iVar3 = iVar3 + -1) {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
    *(char *)((&DAT_0016976c)[sVar1 * 4] + 3) = *(char *)((&DAT_0016976c)[sVar1 * 4] + 3) + -1;
    FUN_0013d3fa(param_1,(int)sVar1,(int)(char)(&DAT_0016976a)[sVar1 * 0x10]);
  }
  return;
}

