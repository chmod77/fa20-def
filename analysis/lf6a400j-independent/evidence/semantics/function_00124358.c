
void FUN_00124358(undefined2 param_1,undefined2 param_2,char param_3,byte param_4,undefined1 param_5
                 ,ushort *param_6)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = (*(code *)PTR_FUN_001243c4)(PTR_DAT_001243c0,param_5,param_1);
  if ((param_3 == '\0') && (param_4 < (byte)*PTR_DAT_001243c8)) {
    uVar2 = (*(code *)PTR_FUN_001243d0)(PTR_DAT_001243cc,param_1);
  }
  else {
    uVar2 = (*(code *)PTR_FUN_001243d0)(PTR_DAT_001243d4,param_1,param_2);
  }
  if (uVar1 < uVar2) {
    *param_6 = uVar1;
  }
  else {
    *param_6 = uVar2;
  }
  return;
}

