
void FUN_000cc58c(char param_1,char param_2,char param_3,char param_4,undefined1 *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  bVar1 = param_1 == '\0';
  bVar2 = param_2 == '\0';
  bVar3 = param_3 == '\0';
  bVar4 = param_4 == '\0';
  if (((((bVar1) && (bVar2)) && (bVar3)) && (bVar4)) ||
     ((((param_1 != '\0' && (bVar2)) && ((bVar3 && (bVar4)))) ||
      (((bVar1 && (bVar2)) && ((bVar3 && (param_4 != '\0')))))))) {
    DAT_fffecc0c = 0;
  }
  if (((((bVar1) && (param_2 != '\0')) && (bVar3)) && (bVar4)) ||
     (((bVar1 && (bVar2)) && ((param_3 != '\0' && (bVar4)))))) {
    DAT_fffecc0c = 1;
  }
  *param_5 = DAT_fffecc0c;
  return;
}

