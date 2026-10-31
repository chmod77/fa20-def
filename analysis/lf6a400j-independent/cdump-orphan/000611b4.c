
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000611b4(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  if (((DAT_fffef210 & 1) != 0) &&
     (((((((DAT_fffef58c & 4) == 0 && ((DAT_ffff3160 & 4) != 0)) ||
         (((DAT_fffef58d & 4) == 0 && ((DAT_ffff3161 & 4) != 0)))) ||
        (((DAT_fffef58e & 1) == 0 && ((DAT_fffeffc8 & 1) != 0)))) ||
       (((DAT_fffef58e & 2) == 0 && ((DAT_fffeffc8 & 2) != 0)))) ||
      ((((DAT_fffef58e & 4) == 0 && ((DAT_fffeffc8 & 4) != 0)) ||
       (((DAT_fffef58e & 8) == 0 && ((DAT_fffeffc8 & 8) != 0)))))))) {
    DAT_ffff34bb = DAT_ffff34bb | 1;
  }
  bVar1 = DAT_fffef58c | 4;
  if ((DAT_ffff3160 & 4) == 0) {
    bVar1 = DAT_fffef58c & 0xfb;
  }
  bVar2 = DAT_fffef58d | 4;
  if ((DAT_ffff3161 & 4) == 0) {
    bVar2 = DAT_fffef58d & 0xfb;
  }
  bVar3 = DAT_fffef58e | 1;
  if ((DAT_fffeffc8 & 1) == 0) {
    bVar3 = DAT_fffef58e & 0xfe;
  }
  bVar4 = bVar3 | 2;
  if ((DAT_fffeffc8 & 2) == 0) {
    bVar4 = bVar3 & 0xfd;
  }
  bVar3 = bVar4 | 4;
  if ((DAT_fffeffc8 & 4) == 0) {
    bVar3 = bVar4 & 0xfb;
  }
  DAT_fffef58e = bVar3 | 8;
  if ((DAT_fffeffc8 & 8) == 0) {
    DAT_fffef58e = bVar3 & 0xf7;
  }
  DAT_fffef58c = bVar1;
  DAT_fffef58d = bVar2;
  if (((_DAT_ffff316c == 0) && ((DAT_fffef6f3 & 1) == 0)) && ((DAT_ffff34bb & 1) != 0)) {
    FUN_0010d144();
  }
  bVar1 = DAT_fffef6f3 | 1;
  if ((DAT_ffff34bb & 1) == 0) {
    bVar1 = DAT_fffef6f3 & 0xfe;
  }
  DAT_fffef6f3 = bVar1;
  return;
}

