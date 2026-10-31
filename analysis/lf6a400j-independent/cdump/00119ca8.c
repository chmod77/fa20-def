
void FUN_00119ca8(char param_1,uint param_2,uint param_3,ushort param_4,undefined2 *param_5)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_1 == '\0') {
    *param_5 = 0;
  }
  else {
    uVar3 = (param_2 & 0xffff) - (param_3 & 0xffff);
    uVar1 = 0;
    if ((0 < (int)uVar3) && (uVar1 = uVar3 & 0xffff, (int)uVar3 < 0)) {
      uVar1 = 0;
    }
    puVar2 = (undefined *)(param_4 * uVar1 >> 8);
    puVar4 = puVar2 + (param_3 & 0xffff);
    if ((puVar4 < puVar2) || (&DAT_0000ffff < puVar4)) {
      *param_5 = 0xffff;
    }
    else {
      *param_5 = (short)puVar4;
    }
  }
  return;
}

