
uint FUN_00001a7c(void)

{
  uint uVar1;
  uint uVar2;
  
  DAT_ffff6569 = DAT_ffff6569 | 0x20;
  uVar1 = FUN_00000adc(&DAT_ffffab90,0xffffabe0);
  uVar2 = 0;
  while ((uVar2 & 0xff) < 0x10) {
    *(undefined1 *)((uVar2 & 0xff) - 0x544f) = 0xff;
    uVar1 = (uVar2 & 0xff) + 1;
    uVar2 = uVar1;
  }
  return uVar1;
}

