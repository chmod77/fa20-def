
undefined4 FUN_0013d468(char *param_1,char param_2)

{
  short *psVar1;
  short *psVar2;
  uint uVar3;
  
  psVar2 = (short *)(param_2 * 8 + *(int *)(param_1 + 0x20));
  psVar1 = *(short **)(psVar2 + 2);
  uVar3 = (uint)param_2;
  if (*psVar1 == psVar1[1]) {
    *psVar1 = -1;
    (&DAT_ffff265c)[(int)uVar3 >> 3] = (&DAT_ffff265c)[(int)uVar3 >> 3] & (&DAT_0013d8a0)[uVar3 & 7]
    ;
    if (uVar3 != (int)*param_1) {
      return 0;
    }
    FUN_0013d7d0();
  }
  else {
    if (*psVar1 == psVar2[1]) {
      *psVar1 = *psVar2;
    }
    else {
      *psVar1 = *psVar1 + 1;
    }
    if (uVar3 != (int)*param_1) {
      return 0;
    }
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)(*psVar1 * 2 + -0xa090);
  }
  return 1;
}

