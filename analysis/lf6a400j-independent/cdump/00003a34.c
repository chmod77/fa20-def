
void FUN_00003a34(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  
  pcVar4 = (code *)0x0;
  for (uVar2 = 0; uVar1 = uVar2 & 0xff, uVar1 < 6; uVar2 = uVar2 + 1) {
    uVar2 = uVar2 & 0xff;
    if ((&DAT_fffed988)[uVar2 * 8] == DAT_ffff6792) break;
  }
  if (uVar1 < 6) {
    iVar3 = (uVar2 & 0xff) * 8;
    pcVar4 = (code *)&SUB_fffec8e0;
    if (*(byte *)(iVar3 + -0x12677) >> 6 == 0) {
      pcVar4 = *(code **)(&DAT_fffed98c + iVar3);
    }
  }
  if (pcVar4 == (code *)0x0) {
    FUN_00003fcc(0x11);
  }
  else {
    (*pcVar4)();
  }
  if (((int)DAT_ffff8723 & 0x80U) == 0) {
    if (DAT_ffff6792 != '1') {
      DAT_ffffab26 = 0;
      DAT_ffffab30 = 1;
      DAT_ffffab2e = 1;
    }
  }
  else {
    DAT_ffffab2b = FUN_00003ac6();
  }
  return;
}

