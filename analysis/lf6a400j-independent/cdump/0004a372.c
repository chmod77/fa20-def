
void FUN_0004a372(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_0015cd88;
  for (puVar3 = (undefined4 *)&LAB_fffeba00; puVar3 < (undefined4 *)0xfffee64d; puVar3 = puVar3 + 1)
  {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    *puVar3 = uVar1;
  }
  return;
}

