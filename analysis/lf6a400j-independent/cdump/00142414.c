
void FUN_00142414(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  byte bVar4;
  
  FUN_00142060();
  if (((int)(char)DAT_ffff8dae & 0x80U) != 0) {
    iVar3 = 0;
    for (bVar4 = 0; bVar4 < 0x20; bVar4 = bVar4 + 1) {
      if ((*(char *)(iVar3 + -0x7244) == '\x01') &&
         (iVar1 = FUN_001419bc(*(undefined4 *)(iVar3 + -0x7240)), iVar1 == 3)) {
        DAT_ffff8dae = DAT_ffff8dae | 0x20;
        uVar2 = FUN_00001550(0x70);
        DAT_ffff6569 = DAT_ffff6569 | 8;
        FUN_00001550(uVar2);
      }
      iVar3 = iVar3 + 8;
    }
  }
  return;
}

