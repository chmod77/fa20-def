
void FUN_000da6f4(uint param_1,uint param_2,uint param_3,short *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (param_1 & 0xffff) - (param_2 & 0xffff);
  uVar1 = 0xffffffff;
  if ((iVar2 < 0x8000) && (uVar1 = 0, -0x8001 < iVar2)) {
    uVar1 = iVar2 - 0x8000;
  }
  iVar2 = (param_2 & 0xffff) - (param_3 & 0xffff);
  uVar3 = 0xffffffff;
  if ((iVar2 < 0x8000) && (uVar3 = 0, -0x8001 < iVar2)) {
    uVar3 = iVar2 - 0x8000;
  }
  iVar2 = (uVar1 & 0xffff) - (uVar3 & 0xffff);
  uVar1 = 0xffffffff;
  if ((iVar2 < 0x8000) && (uVar1 = 0, -0x8001 < iVar2)) {
    uVar1 = iVar2 - 0x8000;
  }
  *param_4 = (short)((int)(uVar1 & 0xffff) >> 1) + 0x4000;
  return;
}

