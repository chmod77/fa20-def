
uint FUN_0006cbe0(byte param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  uVar4 = (uint)*(char *)(((int)(uint)param_1 >> 3) + -0x11525);
  uVar6 = (uint)param_1;
  uVar3 = __shl_r0_by_r1(1,uVar6 + ((int)(uint)param_1 >> 3) * -8);
  if ((uVar3 & 0xff) == (uVar4 & uVar3 & 0xff)) {
    uVar5 = 0x10;
  }
  bVar1 = (&DAT_fffef749)[uVar6];
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 0x10) == 0) {
      if ((&DAT_fffef749 + uVar6 < &DAT_fffef821) ||
         ((undefined1 *)0xfffef827 < &DAT_fffef749 + uVar6)) {
        bVar2 = bVar1 & 0x60;
      }
      else {
        bVar2 = bVar1 & 0x20;
      }
    }
    else {
      uVar5 = uVar5 | 0x20;
      bVar2 = bVar1 & 4;
    }
    if (bVar2 != 0) {
      uVar5 = uVar5 | 0x40;
    }
  }
  if ((bVar1 & 8) != 0) {
    uVar5 = uVar5 | 0x80;
  }
  return uVar5;
}

