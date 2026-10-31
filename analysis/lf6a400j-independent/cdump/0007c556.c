
undefined4 FUN_0007c556(char *param_1,char *param_2,ushort param_3)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  
  uVar3 = 0;
  while( true ) {
    if (param_3 <= uVar3) {
      return 0;
    }
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    cVar2 = *param_2;
    param_2 = param_2 + 1;
    if (cVar1 != cVar2) break;
    uVar3 = uVar3 + 1;
  }
  return 1;
}

