
undefined4 FUN_00070856(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  byte bStack_8;
  
  puVar1 = DAT_000709d8;
  if (*DAT_000709d0 == 1) {
    uVar2 = (*(code *)PTR_FUN_000709f4)(DAT_000709f0);
    bStack_8 = (byte)((uint)uVar2 >> 8);
    *DAT_000709ec = bStack_8 + 1;
    *DAT_000709d8 = 0x43;
  }
  else {
    *DAT_000709d8 = 0x7f;
    puVar1[1] = 3;
    uVar2 = 0x12;
    puVar1[2] = 0x12;
    *DAT_000709ec = 3;
  }
  return uVar2;
}

