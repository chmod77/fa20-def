
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004b3e(void)

{
  int iVar1;
  
  DAT_ffffe804 = 0x5a;
  iVar1 = (*(code *)&SUB_fffea010)(0xffff65b0,_DAT_ffff65a8);
  if (iVar1 != 0) {
    DAT_ffff8a81 = DAT_ffff8a81 | 0x40;
  }
  DAT_ffffe804 = 0;
  return;
}

