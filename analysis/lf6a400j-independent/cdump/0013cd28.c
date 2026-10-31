
/* WARNING: Removing unreachable block (ram,0x0013cd08) */
/* WARNING: Removing unreachable block (ram,0x0013cc98) */
/* WARNING: Removing unreachable block (ram,0x0013cca6) */
/* WARNING: Removing unreachable block (ram,0x0013cca2) */
/* WARNING: Removing unreachable block (ram,0x0013ccaa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0013cd28(char param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  
  cVar1 = (&DAT_00168fd0)[param_1 * 0x10];
  iVar2 = FUN_0013d1a0(0x18);
  if ((iVar2 == 0) && (iVar2 = FUN_0013d290((int)param_1), iVar2 == 0)) {
    iVar2 = FUN_0013d8c2(&DAT_00169230 + cVar1 * 0x18,param_2,param_3);
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      pcVar4 = *(char **)(&DAT_00168fd8 + param_1 * 0x10);
      puVar3 = (uint *)(&DAT_00169244)[cVar1 * 6];
      if (*pcVar4 == '\0') {
        *pcVar4 = '\x01';
        *(undefined4 *)(pcVar4 + 8) = param_3;
        if (param_2 == *(uint *)(&DAT_00169230 + cVar1 * 0x18)) {
          pcVar4[4] = '\0';
          pcVar4[5] = '\0';
          pcVar4[6] = '\0';
          pcVar4[7] = '\0';
          param_2 = 0;
        }
        else {
          *(uint *)(pcVar4 + 4) = param_2;
        }
        if (puVar3[1] < *puVar3) {
          if ((puVar3[1] <= param_2) && (param_2 <= *puVar3)) {
            return 0;
          }
          puVar3[1] = param_2;
          return 0;
        }
        if (puVar3[1] <= *puVar3) {
          puVar3[1] = param_2;
          return 0;
        }
        if (param_2 <= *puVar3) {
          return 0;
        }
        if (puVar3[1] <= param_2) {
          return 0;
        }
        puVar3[1] = param_2;
        return 0;
      }
      iVar2 = 7;
    }
  }
  FUN_0013d054(iVar2,0x18,_DAT_ffff2634);
  return iVar2;
}

