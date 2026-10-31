
void FUN_00086a50(short param_1,undefined2 param_2,undefined2 *param_3,short *param_4)

{
  char *pcVar1;
  undefined2 uVar2;
  
  pcVar1 = DAT_00086aac;
  if (DAT_00086aac[1] == '\0') {
    *DAT_00086aac = '\0';
    pcVar1[1] = '\x01';
  }
  if (*pcVar1 == '\0') {
    *DAT_00086ab0 = param_1;
  }
  else {
    (*(code *)PTR_FUN_00086ab4)(DAT_00086ab0,param_1,(int)*(short *)PTR_DAT_00086ab8);
  }
  *pcVar1 = '\x01';
  uVar2 = (*(code *)PTR_FUN_00086ac0)(PTR_DAT_00086abc,param_2,(int)*DAT_00086ab0);
  *param_3 = uVar2;
  *param_4 = *DAT_00086ab0;
  return;
}

