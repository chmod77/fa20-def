
int FUN_0016b520(short *param_1,short param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)param_2 - (int)*param_1;
  if (iVar2 < 1) {
    sVar1 = *param_1 - (short)((uint)(&DAT_0000ffff + (param_3 & 0xffff) * -iVar2) >> 0x10);
  }
  else {
    sVar1 = (short)((uint)(&DAT_0000ffff + (param_3 & 0xffff) * iVar2) >> 0x10) + *param_1;
  }
  *param_1 = sVar1;
  return (int)*param_1;
}

