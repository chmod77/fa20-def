
int FUN_0016bc68(int param_1,undefined *param_2)

{
  int iVar1;
  ushort *puVar2;
  
  if (&DAT_0000f000 < (undefined *)((uint)param_2 & 0xffff)) {
    param_2 = &DAT_0000f000;
  }
  iVar1 = ((uint)param_2 & 0xfff) * 0x10;
  puVar2 = (ushort *)
           ((int)((ulonglong)((longlong)(int)((uint)param_2 & 0xffff) * 0x100000) >> 0x20) * 2 +
           param_1);
  if ((((uint)param_2 & 0xfff) == 0) || (puVar2[1] == *puVar2)) {
    iVar1 = (int)(short)*puVar2;
  }
  else if (*puVar2 < puVar2[1]) {
    iVar1 = (int)(short)(iVar1 * ((uint)puVar2[1] - (uint)*puVar2) >> 0x10) + (int)(short)*puVar2;
  }
  else {
    iVar1 = (uint)*puVar2 - (int)(short)(iVar1 * ((uint)*puVar2 - (uint)puVar2[1]) >> 0x10);
  }
  return iVar1;
}

