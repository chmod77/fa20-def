
/* WARNING: Removing unreachable block (ram,0x0013dbdc) */

void FUN_0013dbbc(int param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = (int)param_2;
  pcVar3 = (char *)(&DAT_0016976c)[iVar2 * 4];
  *(short *)(param_1 + 4) = param_2;
  *(undefined **)(param_1 + 0x18) = &DAT_00169768 + iVar2 * 0x10;
  *(char **)(param_1 + 0x14) = pcVar3;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*pcVar3 != 0) {
                    /* WARNING: Jumptable at 0x0013dc06 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_0013de7c + *pcVar3))(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  pcVar3[1] = (&DAT_0016976a)[iVar2 * 0x10];
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(pcVar3 + 4) = uVar1;
  FUN_0013ddd4((&PTR_LAB_00169770)[iVar2 * 4],uVar1);
  return;
}

