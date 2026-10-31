
void FUN_0008151c(undefined2 param_1,undefined2 param_2,char param_3,byte param_4,undefined1 param_5
                 ,ushort *param_6,ushort *param_7)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = (*(code *)PTR_FUN_0008158c)(PTR_DAT_00081588,param_5,param_1);
  if ((param_3 == '\0') && (param_4 < (byte)*PTR_DAT_00081590)) {
    uVar2 = (*(code *)PTR_FUN_00081598)(PTR_DAT_00081594,param_1);
  }
  else {
    uVar2 = (*(code *)PTR_FUN_00081598)(PTR_DAT_0008159c,param_1,param_2);
  }
  if (uVar1 < uVar2) {
    *param_6 = uVar1;
  }
  else {
    *param_6 = uVar2;
  }
  *param_7 = uVar2;
  return;
}

