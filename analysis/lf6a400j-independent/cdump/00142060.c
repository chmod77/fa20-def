
void FUN_00142060(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  byte bVar4;
  
  if (((int)DAT_ffff8dae & 0x80U) != 0) {
    iVar3 = 0;
    for (bVar4 = 0; bVar4 < 0x20; bVar4 = bVar4 + 1) {
      if (*(char *)(iVar3 + -0x7244) == '\x01') {
        iVar1 = FUN_001419a6(*(undefined4 *)(iVar3 + -0x7240));
        if (iVar1 == 0) {
          *(byte *)(iVar3 + -0xe306) = *(byte *)(iVar3 + -0xe306) | 1;
          *(undefined2 *)(iVar3 + -0xe308) = 0;
        }
        else {
          *(byte *)(iVar3 + -0xe306) = *(byte *)(iVar3 + -0xe306) & 0xfe;
          uVar2 = FUN_00001540(*(ushort *)(iVar3 + -0xe308) + 1);
          *(undefined2 *)(iVar3 + -0xe308) = uVar2;
        }
      }
      iVar3 = iVar3 + 8;
    }
  }
  return;
}

