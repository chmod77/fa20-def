
uint FUN_0016b0ac(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  uVar1 = 0x3f00;
  if ((param_2 & 0xffff) < 0x3f01) {
    uVar1 = param_2;
  }
  iVar2 = (uVar1 & 0xff) * 0x100;
  puVar3 = (uint *)(((uVar1 & 0xffff) >> 8) * 4 + param_1);
  if (((uVar1 & 0xff) == 0) || (puVar3[1] == *puVar3)) {
    uVar1 = *puVar3;
  }
  else if (*puVar3 < puVar3[1]) {
    uVar1 = (iVar2 * (puVar3[1] - *puVar3 & 0xffff) >> 0x10) + iVar2 * (puVar3[1] - *puVar3 >> 0x10)
            + *puVar3;
  }
  else {
    uVar1 = *puVar3 - ((iVar2 * (*puVar3 - puVar3[1] & 0xffff) >> 0x10) +
                      iVar2 * (*puVar3 - puVar3[1] >> 0x10));
  }
  return uVar1;
}

