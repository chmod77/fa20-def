
uint FUN_00000a2c(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)&DAT_ffffb400;
  DAT_ffff6569 = 0;
  uVar2 = 0x55555555;
  do {
    do {
      *puVar3 = uVar2;
      uVar1 = *puVar3;
      if (uVar1 != uVar2) {
        DAT_ffff6569 = 0x80;
      }
      uVar2 = ~uVar2;
    } while (uVar2 != 0x55555555);
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 1;
  } while (puVar3 < (uint *)0xffffc000);
  return uVar1;
}

