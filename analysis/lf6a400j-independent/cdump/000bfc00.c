
void FUN_000bfc00(char param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 *param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  cVar1 = -2;
  if (param_1 != -1) {
    cVar1 = param_1;
  }
  bVar2 = cVar1 + 1;
  bVar3 = 0xb;
  if ((bVar2 < 0xc) && (bVar3 = 1, bVar2 != 0)) {
    bVar3 = bVar2;
  }
  if (((((bVar3 != 1) && (param_2 = param_3, bVar3 != 2)) && (param_2 = param_4, bVar3 != 3)) &&
      (param_2 = param_5, bVar3 != 4)) &&
     (((((bVar3 == 5 || (bVar3 == 6)) || ((bVar3 == 7 || ((bVar3 == 8 || (bVar3 == 9)))))) ||
       (bVar3 == 10)) || (param_2 = param_3, bVar3 == 0xb)))) {
    param_2 = 0x100;
  }
  *param_6 = param_2;
  return;
}

