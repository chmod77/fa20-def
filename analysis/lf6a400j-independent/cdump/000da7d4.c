
void FUN_000da7d4(uint param_1,uint param_2,ushort *param_3,char *param_4)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0xffff) - (param_2 & 0xffff);
  uVar1 = 0xffff;
  if ((iVar2 < 0x8000) && (uVar1 = 0, -0x8001 < iVar2)) {
    uVar1 = (short)iVar2 + 0x8000;
  }
  *param_3 = uVar1;
  uVar1 = uVar1 >> 4;
  if (uVar1 < 0x880) {
    if (uVar1 < 0x780) {
      *param_4 = '\0';
      return;
    }
    *param_4 = (char)uVar1 + -0x80;
    return;
  }
  *param_4 = -1;
  return;
}

