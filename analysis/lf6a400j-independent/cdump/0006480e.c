
void FUN_0006480e(uint param_1,short *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  code *pcVar5;
  
  pcVar5 = __udiv32_r1_by_r0;
  puVar3 = &DAT_0000ffff;
  iVar1 = __udiv32_r1_by_r0((param_3 & 0xffff) * (param_1 & 0xffff),(int)&DAT_0000ffff);
  iVar4 = iVar1;
  iVar2 = (*pcVar5)();
  if (puVar3 < (undefined *)(iVar4 + iVar2)) {
    *param_2 = -1;
  }
  else {
    *param_2 = (short)iVar1 + (short)iVar2;
  }
  return;
}

