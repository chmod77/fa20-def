
byte FUN_000bdcb8(char param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  cVar1 = -2;
  if (param_1 != -1) {
    cVar1 = param_1;
  }
  bVar2 = cVar1 + 1;
  bVar3 = 5;
  if ((bVar2 < 6) && (bVar3 = 1, bVar2 != 0)) {
    bVar3 = bVar2;
  }
  if (bVar3 == 1) {
    bVar2 = 0;
    goto LAB_000bdd04;
  }
  if (bVar3 != 2) {
    if (bVar3 == 3) {
      bVar2 = 3;
      goto LAB_000bdd04;
    }
    if (bVar3 != 4) {
      bVar2 = bVar3;
      if (bVar3 == 5) {
        bVar2 = 1;
      }
      goto LAB_000bdd04;
    }
  }
  bVar2 = 2;
LAB_000bdd04:
  *param_2 = bVar2;
  return bVar3;
}

