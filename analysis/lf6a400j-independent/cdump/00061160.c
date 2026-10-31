
void FUN_00061160(void)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = 0;
  for (bVar2 = 0; bVar2 < 5; bVar2 = bVar2 + 1) {
    if (*(short *)(&DAT_ffff2fec + iVar1) == 0) {
      (&DAT_ffff3028)[iVar1] = 0;
    }
    iVar1 = iVar1 + 0x40;
  }
  return;
}

