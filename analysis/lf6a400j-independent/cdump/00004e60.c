
void FUN_00004e60(void)

{
  int iVar1;
  
  DAT_ffffe804 = 0x5a;
  iVar1 = (*(code *)&SUB_fffe9010)(DAT_ffff65a4);
  if (iVar1 != 0) {
    DAT_ffff66c0 = DAT_ffff66c0 | 2;
  }
  DAT_ffffe804 = 0;
  return;
}

