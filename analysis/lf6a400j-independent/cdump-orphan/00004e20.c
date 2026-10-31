
void FUN_00004e20(void)

{
  int iVar1;
  byte *unaff_r12;
  char *unaff_r13;
  int unaff_r14;
  
  *(undefined1 *)(unaff_r14 + 4) = 0;
  *(undefined1 *)(unaff_r14 + 2) = 0;
  if (*unaff_r13 != '\0') {
    *unaff_r12 = *unaff_r12 | 2;
  }
  iVar1 = (*(code *)&SUB_fffe9020)(4000,0xfffea15e);
  if (iVar1 != 0) {
    *unaff_r12 = *unaff_r12 | 2;
  }
  if ((*unaff_r12 & 2) == 0) {
    DAT_ffffe804 = 0x5a;
    iVar1 = (*(code *)&SUB_fffe9010)(DAT_ffff65a4);
    if (iVar1 != 0) {
      DAT_ffff66c0 = DAT_ffff66c0 | 2;
    }
    DAT_ffffe804 = 0;
    return;
  }
  return;
}

