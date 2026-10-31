
void FUN_000760b6(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  uVar3 = (*(code *)PTR_FUN_00076130)((int)DAT_000760f0);
  puVar2 = DAT_000763ac;
  puVar1 = DAT_00076104;
  if ((*(byte *)(DAT_00076118 + 1) & 0x7f) == 0) {
    if (*DAT_00076110 == 2) {
      if (*(char *)(DAT_00076118 + 1) == '\0') {
        *DAT_00076104 = 0x7e;
        puVar1[1] = 0;
        *DAT_00076108 = 2;
      }
      else if (*(byte *)(DAT_00076118 + 1) == DAT_00076100) {
        *DAT_000763a0 = *(undefined2 *)PTR_DAT_0007639c;
        *DAT_000763a4 = 1;
        *DAT_000763a8 = 1;
      }
      goto LAB_0007616c;
    }
    *DAT_000763ac = 0x7f;
    puVar2[1] = 0x3e;
    puVar2[2] = 0x13;
  }
  else {
    *DAT_000763ac = 0x7f;
    puVar2[1] = 0x3e;
    puVar2[2] = 0x12;
  }
  *DAT_000763b0 = 3;
LAB_0007616c:
                    /* WARNING: Could not recover jumptable at 0x0007616e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_000763b4)(uVar3);
  return;
}

