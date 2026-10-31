
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00007220(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0000718c();
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 0xf) {
    iVar2 = 1;
  }
  else {
    if (uVar1 != 10) {
      return uVar1;
    }
    iVar2 = (int)_DAT_ffffa30a;
  }
  uVar1 = FUN_00007410(iVar2);
  return uVar1;
}

