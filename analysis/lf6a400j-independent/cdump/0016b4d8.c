
int FUN_0016b4d8(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (param_2 & 0xffff) - (uint)*param_1;
  if (iVar1 < 1) {
    iVar1 = (uint)*param_1 -
            (int)(short)((uint)(&DAT_0000ffff + (param_3 & 0xffff) * -iVar1) >> 0x10);
  }
  else {
    iVar1 = (int)(short)((uint)(&DAT_0000ffff + (param_3 & 0xffff) * iVar1) >> 0x10) +
            (int)(short)*param_1;
  }
  *param_1 = (ushort)iVar1;
  return iVar1;
}

