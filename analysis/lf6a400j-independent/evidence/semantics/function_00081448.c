
undefined4
FUN_00081448(undefined2 param_1,undefined2 param_2,char param_3,byte param_4,undefined2 *param_5,
            undefined2 *param_6)

{
  undefined4 uVar1;
  
  if ((param_3 == '\0') && (param_4 < (byte)*PTR_DAT_00081488)) {
    uVar1 = (*(code *)PTR_FUN_00081490)(PTR_DAT_0008148c);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_00081490)(PTR_DAT_00081494,param_1,param_2);
  }
  *param_5 = (short)uVar1;
  *param_6 = (short)uVar1;
  return uVar1;
}

