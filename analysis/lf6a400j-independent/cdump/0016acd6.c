
int FUN_0016acd6(int param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0xf0;
  if ((param_2 & 0xff) < 0xf1) {
    uVar3 = param_2;
  }
  iVar2 = (uVar3 & 0xf) * 0x10;
  pbVar1 = (byte *)(((uVar3 & 0xff) >> 4) + param_1);
  if (((uVar3 & 0xf) == 0) || (pbVar1[1] == *pbVar1)) {
    iVar2 = (int)(char)*pbVar1;
  }
  else if (*pbVar1 < pbVar1[1]) {
    uVar3 = iVar2 * ((uint)pbVar1[1] - (uint)*pbVar1);
    iVar2 = ((int)(char)(uVar3 >> 0x18) << 0x10 | uVar3 >> 8 & 0xffff) + (int)(char)*pbVar1;
  }
  else {
    uVar3 = iVar2 * ((uint)*pbVar1 - (uint)pbVar1[1]);
    iVar2 = (uint)*pbVar1 - ((int)(char)(uVar3 >> 0x18) << 0x10 | uVar3 >> 8 & 0xffff);
  }
  return iVar2;
}

