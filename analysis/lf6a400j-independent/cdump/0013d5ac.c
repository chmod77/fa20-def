
undefined * FUN_0013d5ac(char param_1,int param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = &DAT_ffff266c + ((int)param_1 >> 3);
  uVar3 = (int)param_1 & 7;
  if (param_2 == 0xe) {
    puVar1 = &DAT_0013d8a0;
    *pbVar2 = (&DAT_0013d8a0)[uVar3] & *pbVar2;
  }
  else {
    puVar1 = &DAT_0013d898;
    *pbVar2 = (&DAT_0013d898)[uVar3] | *pbVar2;
  }
  return puVar1;
}

