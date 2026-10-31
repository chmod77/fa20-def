
void FUN_00142508(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (((int)(char)DAT_ffff8dae & 0x80U) != 0) {
    for (uVar4 = 0; (uVar4 & 0xff) < 0x20; uVar4 = (uVar4 & 0xff) + 1) {
      iVar1 = (uVar4 & 0xff) * 8;
      if (*(char *)(iVar1 + -0x7244) == '\x03') {
        iVar2 = FUN_001419bc(*(undefined4 *)(iVar1 + -0x7240));
        if (iVar2 == 3) {
          DAT_ffff8dae = DAT_ffff8dae | 0x20;
          uVar3 = FUN_00001550(0x70);
          DAT_ffff6569 = DAT_ffff6569 | 8;
          FUN_00001550(uVar3);
        }
        if (((int)DAT_ffff8db7 & 0x80U) != 0) {
          *(byte *)(iVar1 + -0xe306) = *(byte *)(iVar1 + -0xe306) & 0xfe;
        }
      }
      if ((*(char *)(iVar1 + -0x7244) == '\x04') &&
         (iVar1 = FUN_001419bc(*(undefined4 *)(iVar1 + -0x7240)), iVar1 == 3)) {
        DAT_ffff8dae = DAT_ffff8dae | 0x20;
        uVar3 = FUN_00001550(0x70);
        DAT_ffff6569 = DAT_ffff6569 | 8;
        FUN_00001550(uVar3);
      }
    }
  }
  FUN_001420d6();
  return;
}

