
void FUN_00142600(char param_1)

{
  byte bVar1;
  int iVar2;
  
  if (param_1 == '\0') {
    iVar2 = 0;
    for (bVar1 = 0; bVar1 < 0x20; bVar1 = bVar1 + 1) {
      *(undefined1 *)(iVar2 + -0x7244) = (&DAT_00161be4)[iVar2];
      *(undefined4 *)(iVar2 + -0x7240) = *(undefined4 *)((int)&PTR_PTR_00161be8 + iVar2);
      iVar2 = iVar2 + 8;
    }
  }
  else if (param_1 == '\x01') {
    iVar2 = 0;
    for (bVar1 = 0; bVar1 < 0x20; bVar1 = bVar1 + 1) {
      *(undefined1 *)(iVar2 + -0x7244) = (&DAT_00161ce4)[iVar2];
      *(undefined4 *)(iVar2 + -0x7240) = *(undefined4 *)((int)&PTR_PTR_00161ce8 + iVar2);
      iVar2 = iVar2 + 8;
    }
  }
  else if (param_1 == '\x02') {
    iVar2 = 0;
    for (bVar1 = 0; bVar1 < 0x20; bVar1 = bVar1 + 1) {
      *(undefined1 *)(iVar2 + -0x7244) = (&DAT_00161de4)[iVar2];
      *(undefined4 *)(iVar2 + -0x7240) = *(undefined4 *)((int)&PTR_PTR_00161de8 + iVar2);
      iVar2 = iVar2 + 8;
    }
  }
  FUN_00141a0e(param_1);
  return;
}

