
uint FUN_0004c53c(void)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  int extraout_r2;
  code *pcVar4;
  
  uVar2 = (uint)*DAT_0004c6c8;
  if ((uVar2 & 1) != 0) {
    pcVar4 = (code *)PTR_FUN_0004c6d0;
    (*(code *)PTR_FUN_0004c6d0)((int)DAT_0004c5c8);
    iVar3 = (*pcVar4)();
    uVar2 = (*(code *)PTR_FUN_0004c6d4)(iVar3 + extraout_r2 * 0x10);
    puVar1 = DAT_0004c6d8;
    *DAT_0004c6d8 = (ushort)uVar2;
    if (*DAT_0004c668 < *puVar1) {
      *DAT_0004c668 = *puVar1;
    }
    if (*puVar1 < *DAT_0004c66c) {
      *DAT_0004c66c = *puVar1;
    }
    *DAT_0004c6dc = 1;
    *DAT_0004c6e0 = 1;
  }
  return uVar2;
}

