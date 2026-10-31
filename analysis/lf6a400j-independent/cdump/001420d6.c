
void FUN_001420d6(void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  
  thunk_FUN_00141bec();
  if (((int)DAT_ffff8dae & 0x80U) != 0) {
    for (uVar3 = 0; (uVar3 & 0xff) < 0x20; uVar3 = (uVar3 & 0xff) + 1) {
      iVar1 = (uVar3 & 0xff) * 8;
      puVar4 = (ushort *)0x0;
      if (*(char *)(iVar1 + -0x7244) == '\x03') {
        puVar4 = (ushort *)(iVar1 + -0xe308);
      }
      if ((puVar4 != (ushort *)0x0) && ((puVar4[1] & 0x100) != 0)) {
        iVar1 = FUN_00141980(*(undefined4 *)(iVar1 + -0x7240));
        if (iVar1 == 0) {
          *(byte *)(puVar4 + 1) = *(byte *)(puVar4 + 1) & 0xfe;
          *puVar4 = 0;
        }
        else {
          uVar2 = FUN_00001540(*puVar4 + 1);
          *puVar4 = uVar2;
        }
      }
    }
    thunk_FUN_00141bc6();
    return;
  }
  return;
}

