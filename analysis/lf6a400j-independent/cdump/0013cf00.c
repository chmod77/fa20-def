
/* WARNING: Removing unreachable block (ram,0x0013cf3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0013cf00(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = _DAT_ffff2640;
  iVar2 = FUN_0013d1a0(2);
  if (((iVar2 == 0) && (iVar2 = FUN_0013d1be(), iVar2 == 0)) &&
     (iVar2 = FUN_0013d1d6(puVar1), iVar2 == 0)) {
    puVar1[3] = puVar1[3] + '\x01';
    _DAT_ffff2634 = 0x100;
    FUN_0013d468(&DAT_ffff262c,(int)(char)puVar1[1]);
    *puVar1 = 0;
    _DAT_ffff2638 = *(undefined4 *)(puVar1 + 4);
    iVar2 = FUN_0013d77a(&DAT_ffff262c);
    return iVar2;
  }
  FUN_0013d054(iVar2,2,_DAT_ffff2634);
  return iVar2;
}

