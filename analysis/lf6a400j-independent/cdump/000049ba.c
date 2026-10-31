
void FUN_000049ba(void)

{
  int iVar1;
  char *unaff_r13;
  byte *unaff_r14;
  
  *unaff_r13 = -1;
  unaff_r14[4] = 0xa5;
  *unaff_r14 = *unaff_r14 | 1;
  unaff_r14[4] = 0;
  unaff_r14[2] = 0;
  if (*unaff_r13 != '\0') {
    DAT_ffff8a81 = DAT_ffff8a81 | 0x80;
  }
  if (((int)(char)DAT_ffff8a81 & 0x80U) == 0) {
    iVar1 = (*(code *)&SUB_fffe9020)(&DAT_00001f40,&DAT_fffed94c);
    if (iVar1 != 0) {
      DAT_ffff8a81 = DAT_ffff8a81 | 0x80;
    }
  }
  return;
}

