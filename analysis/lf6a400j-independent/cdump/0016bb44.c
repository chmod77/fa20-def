
int FUN_0016bb44(int param_1,uint param_2)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  
  uVar3 = 0xf0;
  if ((param_2 & 0xff) < 0xf1) {
    uVar3 = param_2;
  }
  iVar1 = (uVar3 & 0xf) * 0x10;
  puVar2 = (ushort *)(((uVar3 & 0xff) >> 4) * 2 + param_1);
  if (((uVar3 & 0xf) == 0) || (puVar2[1] == *puVar2)) {
    iVar1 = (int)(short)*puVar2;
  }
  else if (*puVar2 < puVar2[1]) {
    uVar3 = iVar1 * ((uint)puVar2[1] - (uint)*puVar2);
    iVar1 = ((int)(char)(uVar3 >> 0x18) << 0x10 | uVar3 >> 8 & 0xffff) + (int)(short)*puVar2;
  }
  else {
    uVar3 = iVar1 * ((uint)*puVar2 - (uint)puVar2[1]);
    iVar1 = (uint)*puVar2 - ((int)(char)(uVar3 >> 0x18) << 0x10 | uVar3 >> 8 & 0xffff);
  }
  return iVar1;
}

