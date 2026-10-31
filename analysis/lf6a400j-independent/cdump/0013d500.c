
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d500(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&DAT_ffff266c;
  iVar1 = 4;
  do {
    iVar1 = iVar1 + -2;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  } while (iVar1 != 0);
  _DAT_ffff267c = (&PTR_DAT_0016965c)[*(char *)(param_1 + 1)];
  return;
}

