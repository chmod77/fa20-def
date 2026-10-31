
undefined4 FUN_00070a44(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  byte bStack_8;
  
  puVar1 = DAT_00070c74;
  if (*DAT_00070c7c == 1) {
    uVar2 = (*(code *)PTR_FUN_00070c84)(DAT_00070c80);
    bStack_8 = (byte)((uint)uVar2 >> 8);
    *DAT_00070c78 = bStack_8 + 1;
    *DAT_00070c74 = 0x47;
  }
  else {
    *DAT_00070c74 = 0x7f;
    puVar1[1] = 7;
    uVar2 = 0x12;
    puVar1[2] = 0x12;
    *DAT_00070c78 = 3;
  }
  return uVar2;
}

