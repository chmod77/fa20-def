
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0013ca0c(char param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_0013d1a0(0x1d);
  if ((iVar1 == 0) && (iVar1 = FUN_0013d2dc((int)param_1), iVar1 == 0)) {
    if (param_2 < *(uint *)(&DAT_00169230 + param_1 * 0x18)) {
      puVar2 = (uint *)(&DAT_00169244)[param_1 * 6];
      *(undefined1 *)(puVar2 + 2) = 1;
      *(undefined1 *)((int)puVar2 + 9) = 0;
      *puVar2 = param_2;
      puVar2[1] = param_2;
      return 0;
    }
    iVar1 = 8;
  }
  FUN_0013d054(iVar1,0x1d,_DAT_ffff2634);
  return iVar1;
}

